// -----------------------------------------------------------------------------
// mlp_ref_model.sv : bit-exact software model of mlp_layer (the "golden" side)
//
// It is written from the DUT's specification, NOT copied from the RTL:
//   acc[n] = bias[n] + sum_i W[n][i] * x[i]
//   s      = acc >>> shift                (arithmetic)
//   if (s < 0) s = s >>> leak_shift       (Leaky ReLU, arithmetic)
//   y[n]   = clamp(s, -128, 127)
// and it keeps its own copy of the config registers, updated from the writes
// the monitor observed (a write while the DUT is busy, or to an unused address,
// is ignored exactly as the spec says).
// -----------------------------------------------------------------------------
class mlp_ref_model extends uvm_object;
  `uvm_object_utils(mlp_ref_model)

  // configuration state
  int w[N_OUT][N_IN];
  int b[N_OUT];
  int sh;
  int leak;

  // result of the last predict()
  int              r_acc[N_OUT];
  bit signed [7:0] r_y[N_OUT];
  bit              r_sat_hi[N_OUT];
  bit              r_sat_lo[N_OUT];
  bit              r_leaky[N_OUT];

  function new(string name = "mlp_ref_model");
    super.new(name);
    reset();
  endfunction

  // Reset values from the DUT spec: weights/bias/shift = 0, leak_shift = 3
  function void reset();
    foreach (w[n, i]) w[n][i] = 0;
    foreach (b[n])    b[n]    = 0;
    sh   = 0;
    leak = 3;
  endfunction

  function void copy_from(mlp_ref_model o);
    foreach (w[n, i]) w[n][i] = o.w[n][i];
    foreach (b[n])    b[n]    = o.b[n];
    sh   = o.sh;
    leak = o.leak;
  endfunction

  function bit same_cfg(mlp_ref_model o);
    foreach (w[n, i]) if (w[n][i] != o.w[n][i]) return 0;
    foreach (b[n])    if (b[n]    != o.b[n])    return 0;
    return (sh == o.sh) && (leak == o.leak);
  endfunction

  // One config write.  Returns 1 if it changed the model, 0 if it is ignored.
  function bit write(bit [4:0] addr, bit signed [7:0] data, bit busy);
    if (busy) return 0;                                  // ignored while data is in flight
    if (addr < 5'd16)       w[addr[3:2]][addr[1:0]] = int'(data);
    else if (addr < 5'd20)  b[addr[1:0]]            = int'(data);
    else if (addr == 5'd20) sh                      = int'(data[3:0]);
    else if (addr == 5'd21) leak                    = int'(data[2:0]);
    else return 0;                                       // unused address
    return 1;
  endfunction

  // Compute one sample with the current config; results land in r_*.
  function void predict(bit signed [7:0] x[N_IN]);
    for (int n = 0; n < N_OUT; n++) begin
      int a = b[n];
      int s;
      for (int i = 0; i < N_IN; i++) a += w[n][i] * int'(x[i]);
      s = a >>> sh;
      r_leaky[n] = (s < 0);
      if (s < 0) s = s >>> leak;
      r_acc[n]    = a;
      r_sat_hi[n] = (s > 127);
      r_sat_lo[n] = (s < -128);
      if (s > 127)       r_y[n] = 8'sd127;
      else if (s < -128) r_y[n] = -8'sd128;
      else               r_y[n] = s[7:0];
    end
  endfunction
endclass
