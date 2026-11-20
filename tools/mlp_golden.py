"""Bit-exact Python model of mlp_layer.sv (shared by the tools in this folder).

Same arithmetic as the RTL: acc = bias + sum(W*x); s = acc >> shift (floor);
if s < 0: s >>= leak_shift (floor); y = clamp(s, -128, 127).
Python's >> on negative ints is an arithmetic (floor) shift, like SystemVerilog's >>>.
"""
import os

N_IN, N_OUT = 4, 4


class Cfg:
    def __init__(self):
        self.w = [[0] * N_IN for _ in range(N_OUT)]
        self.b = [0] * N_OUT
        self.shift = 0
        self.leak = 3          # reset value of leak_shift

    def write(self, addr, data):
        data = ((data + 128) & 0xFF) - 128          # int8
        if addr < 16:
            self.w[addr >> 2][addr & 3] = data
        elif addr < 20:
            self.b[addr & 3] = data
        elif addr == 20:
            self.shift = data & 0xF
        elif addr == 21:
            self.leak = data & 0x7


def predict(cfg, x):
    y = []
    for n in range(N_OUT):
        acc = cfg.b[n] + sum(cfg.w[n][i] * x[i] for i in range(N_IN))
        s = acc >> cfg.shift
        if s < 0:
            s >>= cfg.leak
        y.append(max(-128, min(127, s)))
    return y


def read_cfg(path):
    c = Cfg()
    for line in open(path):
        if line.strip():
            a, d = line.split()
            c.write(int(a), int(d))
    return c


def read_vectors(path):
    rows = []
    for line in open(path):
        if line.strip():
            v = list(map(int, line.split()))
            rows.append((v[0:4], v[4:8], v[8]))
    return rows


def argmax3(y):
    best = 0
    for i in range(1, 3):
        if y[i] > y[best]:
            best = i
    return best
