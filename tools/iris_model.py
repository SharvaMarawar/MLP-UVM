#!/usr/bin/env python3
"""
iris_model.py : final Iris model for mlp_layer.sv  (replaces iris_export.py)

What it does, in order
  1. Load the 150 REAL flowers from IRIS.csv.
  2. Split the real data FIRST (105 train / 45 test, stratified). The 45 real test
     flowers are never used for fitting the generator, training, or choosing scales.
  3. Fit a per-class multivariate Gaussian on the 105 real-train flowers and draw
     SYNTHETIC flowers (rounded to 0.1 cm like the real data, unique, never equal to
     any real row) up to 400 rows per class = 1200 rows total (150 real + 1050 synthetic).
  4. Train a 4->3 softmax-regression classifier on the training rows.
  5. Quantize for the DUT: pick the input scale SX, weight scale SW and output SHIFT
     automatically, using TRAINING accuracy only, so that every weight/bias fits int8
     and the 20-bit accumulator never overflows.
  6. Export everything the testbench / UVM environment needs.

Hardware model (bit-exact with mlp_layer.sv)
  xq  = clip(round((x - mu) * SX), -128, 127)        int8 input (host does the mean-subtract)
  Wq  = round(W * SW)                                 int8 weight
  bq  = round(b * SX * SW)                            int8 bias, at accumulator scale
  acc = bq + sum_i Wq[i] * xq[i]                      20-bit accumulator
  s   = acc >>> SHIFT                                 arithmetic (floor) shift
  s   = s >>> LEAK_SHIFT  if s < 0                    Leaky ReLU, slope 2^-LEAK_SHIFT
  y   = clip(s, -128, 127)                            saturate to int8
  class = argmax(y[0:3]), lowest index wins ties      neuron 3 is unused

Usage:  python3 iris_model.py [csv_in] [out_dir]
"""
import csv
import json
import os
import sys
import numpy as np
from sklearn.linear_model import LogisticRegression
from sklearn.model_selection import train_test_split

# ---------------------------------------------------------------- configuration
FEATS = ["sepal_length", "sepal_width", "petal_length", "petal_width"]
SPECIES = ["Iris-setosa", "Iris-versicolor", "Iris-virginica"]
ROWS_PER_CLASS = 400          # 50 real + 350 synthetic  ->  1200 rows
SYN_TEST_PER_CLASS = 70       # of the 350 synthetic rows per class, 70 go to the test set
REAL_TEST_FRACTION = 0.3      # 45 of the 150 real flowers
SEED = 42
C_REG = 1.0                   # logistic-regression regularization (fixed, not tuned)
LEAK_SHIFT = 3                # DUT addr 21 : Leaky ReLU slope 1/8
ACC_BITS = 20                 # DUT accumulator width

HERE = os.path.dirname(os.path.abspath(__file__))


# ---------------------------------------------------------------- data
def load_real(path):
    X, y = [], []
    with open(path, newline="") as f:
        for row in csv.DictReader(f):
            if not row.get("species"):
                continue
            X.append([float(row[k]) for k in FEATS])
            y.append(SPECIES.index(row["species"].strip()))
    return np.array(X), np.array(y)


def key(r):
    """Hashable key of a row at the dataset's 0.1 cm resolution."""
    return tuple(np.round(np.asarray(r) * 10).astype(int))


def make_synthetic(Xtr, ytr, Xreal_all, n_per_class, rng):
    """Per-class Gaussian fitted on REAL-TRAIN rows only. Rows are rounded to 0.1,
    strictly positive, unique, and never identical to any of the 150 real rows."""
    seen = {key(r) for r in Xreal_all}       # shared across ALL classes: no feature vector
    Xs, ys = [], []                          # may appear twice, let alone with two labels
    for c in range(3):
        Xc = Xtr[ytr == c]
        mean, cov = Xc.mean(axis=0), np.cov(Xc, rowvar=False)
        out = []
        while len(out) < n_per_class:
            for r in np.round(rng.multivariate_normal(mean, cov, size=n_per_class), 1):
                if (r >= 0.1).all() and key(r) not in seen:
                    seen.add(key(r))
                    out.append(r)
                    if len(out) == n_per_class:
                        break
        Xs.append(np.array(out))
        ys += [c] * n_per_class
    return np.vstack(Xs), np.array(ys)


# ---------------------------------------------------------------- hardware model
def hw_model(xq, Wq, bq, shift, leak):
    """Bit-exact model of mlp_layer.sv.  xq:(N,4) Wq:(4,4) bq:(4,) all int64."""
    acc = xq @ Wq.T + bq
    assert np.abs(acc).max() < 2 ** (ACC_BITS - 1), "accumulator overflow"
    s = acc >> shift                          # numpy >> on signed ints is arithmetic (floor)
    s = np.where(s < 0, s >> leak, s)
    return np.clip(s, -128, 127)


def argmax3(y):
    return np.argmax(y[:, :3], axis=1)        # np.argmax: first maximum wins ties


def quantize_input(X, mu, sx):
    return np.clip(np.round((X - mu) * sx), -128, 127).astype(np.int64)


def choose_quantization(W, b, mu, Xtr, ytr):
    """Pick (SX, SW, SHIFT) using TRAINING data only.
    Constraints: Wq and bq fit int8.  Objective: best training accuracy of the int8
    hardware model, ties broken by finer resolution (larger SX*SW)."""
    best = None
    for sx in (1, 2, 4, 8, 16):
        xq = quantize_input(Xtr, mu, sx)
        for sw in range(1, 128):
            Wq3 = np.round(W * sw).astype(np.int64)
            bq3 = np.round(b * sx * sw).astype(np.int64)
            if np.abs(Wq3).max() > 127 or np.abs(bq3).max() > 127:
                break                          # grows monotonically with sw
            Wq = np.zeros((4, 4), dtype=np.int64); Wq[:3] = Wq3
            bq = np.zeros(4, dtype=np.int64);      bq[:3] = bq3
            acc = xq @ Wq.T + bq
            shift = 0
            while (np.abs(acc).max() >> shift) > 127:   # no saturation on the training set
                shift += 1
            acc_tr = (argmax3(hw_model(xq, Wq, bq, shift, LEAK_SHIFT)) == ytr).mean()
            cand = (acc_tr, sx * sw)
            if best is None or cand > best[0]:
                best = (cand, sx, sw, Wq, bq, shift)
    _, sx, sw, Wq, bq, shift = best
    return sx, sw, Wq, bq, shift


# ---------------------------------------------------------------- main
def main(csv_in, outdir):
    rng = np.random.default_rng(SEED)
    X, y = load_real(csv_in)
    assert len(y) == 150 and all((y == c).sum() == 50 for c in range(3))

    # 2. real split first
    ridx = np.arange(len(y))
    Xr_tr, Xr_te, yr_tr, yr_te, ir_tr, ir_te = train_test_split(
        X, y, ridx, test_size=REAL_TEST_FRACTION, random_state=0, stratify=y)

    # 3. synthetic rows from real-train statistics only
    n_syn = ROWS_PER_CLASS - 50
    Xs, ys = make_synthetic(Xr_tr, yr_tr, X, n_syn, rng)
    # per class: first SYN_TEST_PER_CLASS rows -> synthetic test, rest -> synthetic train
    pos = np.concatenate([np.arange(n_syn) for _ in range(3)])
    syn_is_test = pos < SYN_TEST_PER_CLASS

    # assemble the full table:  (features, label, source, split)
    rows = []
    real_test_set = set(ir_te.tolist())
    for k in range(len(y)):
        rows.append((X[k], y[k], "real", "test" if k in real_test_set else "train"))
    for k in range(len(ys)):
        rows.append((Xs[k], ys[k], "synthetic", "test" if syn_is_test[k] else "train"))
    F = np.array([r[0] for r in rows]); L = np.array([r[1] for r in rows])
    SRC = np.array([r[2] for r in rows]); SPL = np.array([r[3] for r in rows])
    assert len(rows) == 3 * ROWS_PER_CLASS >= 1000

    m_real_te = (SRC == "real") & (SPL == "test")
    m_syn_te = (SRC == "synthetic") & (SPL == "test")
    m_train = SPL == "train"
    m_test = SPL == "test"

    # 4. train (float)
    mu = F[m_train].mean(axis=0)
    clf = LogisticRegression(C=C_REG, max_iter=5000).fit(F[m_train] - mu, L[m_train])
    W, b = clf.coef_, clf.intercept_

    # 5. quantize
    sx, sw, Wq, bq, shift = choose_quantization(W, b, mu, F[m_train], L[m_train])
    assert np.abs(Wq).max() <= 127 and np.abs(bq).max() <= 127
    xq = quantize_input(F, mu, sx)
    yq = hw_model(xq, Wq, bq, shift, LEAK_SHIFT)
    pred = argmax3(yq)
    pred_id = argmax3(hw_model(xq, Wq, bq, shift, 0))
    fpred = clf.predict(F - mu)

    # ------------------------------------------------------------ report
    def acc(m, p): return f"{(p[m] == L[m]).sum():4d}/{m.sum():<4d} = {(p[m] == L[m]).mean():.3f}"
    print(f"rows: {len(F)} total = {(SRC=='real').sum()} real + {(SRC=='synthetic').sum()} synthetic;"
          f"  train {m_train.sum()}  test {m_test.sum()}"
          f" (real {m_real_te.sum()} + synthetic {m_syn_te.sum()})")
    print("\naccuracy                  float model          int8 hardware (leaky)   int8 hardware (identity)")
    for name, m in (("real test (45)", m_real_te), ("synthetic test", m_syn_te),
                    ("whole test set", m_test), ("train", m_train)):
        print(f"  {name:<16} {acc(m, fpred)}     {acc(m, pred)}        {acc(m, pred_id)}")

    # does adding synthetic data help on the REAL test flowers?
    base = LogisticRegression(C=C_REG, max_iter=5000).fit(Xr_tr - Xr_tr.mean(0), yr_tr)
    print(f"\nfloat model trained on the 105 real-train rows only: "
          f"real test {(base.predict(X[ir_te] - Xr_tr.mean(0)) == yr_te).sum()}/45")

    print("\nchosen quantization: SX =", sx, " SW =", sw, " SHIFT =", shift, " LEAK_SHIFT =", LEAK_SHIFT)
    print("mu =", np.round(mu, 4).tolist())
    print("Wq =\n", Wq)
    print("bq =", bq.tolist(), "  (int8 limit 127)")
    full_acc = xq @ Wq.T + bq
    print(f"max |acc| over all rows = {np.abs(full_acc).max()} (limit {2**(ACC_BITS-1)}); "
          f"saturated scores: {int(((yq[:, :3] == 127) | (yq[:, :3] == -128)).sum())} of {yq[:, :3].size}")
    print("\nsynthetic-vs-real sanity (per-class mean of the 4 features, real-train vs synthetic):")
    for c in range(3):
        a = F[(SRC == 'real') & (L == c) & m_train].mean(0)
        s = F[(SRC == 'synthetic') & (L == c)].mean(0)
        print(f"  {SPECIES[c]:<16} real {np.round(a, 2).tolist()}  synthetic {np.round(s, 2).tolist()}")

    # ------------------------------------------------------------ export
    os.makedirs(outdir, exist_ok=True)
    # dataset csv (human readable)
    with open(os.path.join(outdir, "iris_dataset_1200.csv"), "w", newline="") as f:
        w = csv.writer(f)
        w.writerow(FEATS + ["species", "label", "source", "split"])
        for k in range(len(F)):
            w.writerow([f"{v:.1f}" for v in F[k]] + [SPECIES[L[k]], L[k], SRC[k], SPL[k]])
    # DUT config writes
    with open(os.path.join(outdir, "iris_cfg.txt"), "w") as f:
        for n in range(4):
            for i in range(4):
                f.write(f"{n * 4 + i} {Wq[n, i]}\n")           # addr 0..15 weights
        for n in range(4):
            f.write(f"{16 + n} {bq[n]}\n")                      # addr 16..19 biases
        f.write(f"20 {shift}\n21 {LEAK_SHIFT}\n")               # addr 20 shift, 21 leak shift
    # test vectors, ordered: real test, synthetic test, then all training rows
    order = (list(np.where(m_real_te)[0]) + list(np.where(m_syn_te)[0]) + list(np.where(m_train)[0]))
    with open(os.path.join(outdir, "iris_vectors.txt"), "w") as f:
        for k in order:
            f.write(" ".join(map(str, xq[k])) + "  " + " ".join(map(str, yq[k])) + f"  {L[k]}\n")
    # model parameters for the report / reproducibility
    with open(os.path.join(outdir, "iris_model.json"), "w") as f:
        json.dump({"seed": SEED, "C": C_REG, "mu": mu.tolist(), "SX": int(sx), "SW": int(sw),
                   "SHIFT": int(shift), "LEAK_SHIFT": LEAK_SHIFT,
                   "Wq": Wq.tolist(), "bq": bq.tolist(),
                   "n_vectors": len(order), "n_real_test": int(m_real_te.sum()),
                   "n_test": int(m_test.sum())}, f, indent=2)
    print(f"\nwrote iris_dataset_1200.csv, iris_cfg.txt (22 lines), iris_vectors.txt ({len(order)} lines), "
          f"iris_model.json -> {outdir}")
    print(f"vectors file order: first {m_real_te.sum()} = real test, first {m_test.sum()} = whole test set")


if __name__ == "__main__":
    csv_in = sys.argv[1] if len(sys.argv) > 1 else os.path.join(HERE, "IRIS.csv")
    out = sys.argv[2] if len(sys.argv) > 2 else HERE
    main(csv_in, out)
