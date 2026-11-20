#!/usr/bin/env python3
"""Writes data/sat_cfg.txt and data/sat_vectors.txt for mlp_sat_test.

The Iris data never pushes an output to +127 / -128 (see README), so this makes
a small config and a handful of vectors that do.  The golden scores in the file
come from the bit-exact model in mlp_golden.py.

    python3 tools/gen_sat_vectors.py [outdir]        (default: ../data)
"""
import os
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from mlp_golden import Cfg, predict

out = sys.argv[1] if len(sys.argv) > 1 else os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", "data")
os.makedirs(out, exist_ok=True)

# neuron 0: +10 on every input     -> big positive  -> clamps to +127
# neuron 1: -10 on every input     -> big negative  -> leaky path, still < -128 -> clamps to -128
# neuron 2: alternating +-1        -> stays small, no clamp
# neuron 3: +127 on every input    -> clamps to +127 for any positive-sum vector
W = [[10, 10, 10, 10], [-10, -10, -10, -10], [1, -1, 1, -1], [127, 127, 127, 127]]
B = [0, 0, 5, -128]
SHIFT, LEAK = 0, 3

writes = []
for n in range(4):
    for i in range(4):
        writes.append((4 * n + i, W[n][i]))
for n in range(4):
    writes.append((16 + n, B[n]))
writes += [(20, SHIFT), (21, LEAK)]

vecs = [
    [100, 100, 100, 100],
    [-100, -100, -100, -100],
    [127, 127, 127, 127],
    [-128, -128, -128, -128],
    [127, -128, 127, -128],
    [-128, 127, -128, 127],
    [50, 50, 50, 50],
    [0, 0, 0, 0],
    [-10, -10, -10, -10],      # -40 acc on n1 -> not clamped: neighbours of the clamp edge
    [20, 20, 20, 20],
]

cfg = Cfg()
with open(os.path.join(out, "sat_cfg.txt"), "w") as f:
    for a, d in writes:
        cfg.write(a, d)
        f.write(f"{a} {d}\n")

hi = lo = 0
with open(os.path.join(out, "sat_vectors.txt"), "w") as f:
    for x in vecs:
        y = predict(cfg, x)
        hi += sum(1 for v in y if v == 127)
        lo += sum(1 for v in y if v == -128)
        f.write(" ".join(map(str, x + y)) + " -1\n")

assert hi > 0 and lo > 0, "the set must hit both clamps"
print(f"wrote {len(writes)} config writes and {len(vecs)} vectors to {os.path.abspath(out)}")
print(f"outputs at +127: {hi}   outputs at -128: {lo}")
