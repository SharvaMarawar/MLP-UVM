#!/usr/bin/env python3
"""Independent check of the data the UVM testbench relies on (no simulator needed).

  1. data/iris_vectors.txt   : the golden scores in the file == the bit-exact model
                               run on the same config (data/iris_cfg.txt)
  2. Iris accuracy           : test set (first 255) and everything (1200)
  3. data/sat_vectors.txt    : same check, and both clamps are really reached
  4. config port semantics   : a few spot checks of the model itself (floor shifts,
                               reset leak_shift = 3, address map)

    python3 tools/rtl_model_check.py [datadir]
"""
import os
import sys

here = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, here)
from mlp_golden import Cfg, argmax3, predict, read_cfg, read_vectors

data = sys.argv[1] if len(sys.argv) > 1 else os.path.join(here, "..", "data")
fails = 0


def check(name, cond):
    global fails
    print(("PASS  " if cond else "FAIL  ") + name)
    fails += 0 if cond else 1


# 1+2 Iris
cfg = read_cfg(os.path.join(data, "iris_cfg.txt"))
rows = read_vectors(os.path.join(data, "iris_vectors.txt"))
bad = [i for i, (x, y, _) in enumerate(rows) if predict(cfg, x) != y]
check(f"iris: {len(rows)} golden score vectors equal the bit-exact model", not bad)
if bad:
    print("   first mismatching rows:", bad[:5])
test = rows[:255]
ok_t = sum(argmax3(y) == lab for _, y, lab in test)
ok_a = sum(argmax3(y) == lab for _, y, lab in rows)
print(f"      accuracy: test set {ok_t}/{len(test)} ({100 * ok_t / len(test):.1f} %), all {ok_a}/{len(rows)} ({100 * ok_a / len(rows):.1f} %)")
check("iris: no output ever reaches a clamp (so the sat test is needed)",
      not any(v in (127, -128) for _, y, _ in rows for v in y))

# 3 saturation set
sp, vp = os.path.join(data, "sat_cfg.txt"), os.path.join(data, "sat_vectors.txt")
if os.path.exists(sp) and os.path.exists(vp):
    scfg, srows = read_cfg(sp), read_vectors(vp)
    check(f"sat : {len(srows)} golden vectors equal the bit-exact model",
          all(predict(scfg, x) == y for x, y, _ in srows))
    ys = [v for _, y, _ in srows for v in y]
    check("sat : both clamps (+127 and -128) are reached", 127 in ys and -128 in ys)
else:
    print("SKIP  sat files not found - run tools/gen_sat_vectors.py")

# 4 model spot checks
c = Cfg()
check("reset values: leak_shift = 3, shift = 0, weights 0", c.leak == 3 and c.shift == 0 and not any(map(any, c.w)))
c.write(16, -64)
check("floor shift: -64 >>> 3 = -8", predict(c, [0, 0, 0, 0])[0] == -8)
c.write(16, -1)
check("floor shift: -1 >>> 3 = -1 (not 0)", predict(c, [0, 0, 0, 0])[0] == -1)
c.write(21, 0); c.write(20, 2); c.write(16, -128)
check("leak 0 / shift 2: -128 >>> 2 = -32", predict(c, [0, 0, 0, 0])[0] == -32)
c.write(5, 7)
check("address map: addr 5 = W[1][1]", c.w[1][1] == 7)
c.write(22, 55); c.write(31, 55)
check("addresses 22..31 ignored", c.shift == 2 and c.leak == 0)

print("\nALL PASS" if not fails else f"\n{fails} CHECK(S) FAILED")
sys.exit(1 if fails else 0)
