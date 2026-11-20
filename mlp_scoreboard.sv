// -----------------------------------------------------------------------------
// mlp_scoreboard.sv : the checker.
//
//   in_ap  : K_CFG    -> model.write()      (judged against the expected busy)
//            K_INPUT  -> model.predict(), push the expectation on a FIFO
//            K_RESET  -> flush the FIFO (lost samples), model back to reset values
//   out_ap : K_OUTPUT -> pop the oldest expectation, compare bit-for-bit
//
// Every verdict goes to the coverage collector through cov_ap.
// At the end it also checks: nothing left in the FIFO, no protocol-assertion
// failures, and (Iris test) the classification accuracy.
// -----------------------------------------------------------------------------
`uvm_analysis_imp_decl(_in)
`uvm_analysis_imp_decl(_out)

class mlp_scoreboard extends uvm_scoreboard;
  `uvm_component_utils(mlp_scoreboard)

  uvm_analysis_imp_in  #(mlp_mon_item, mlp_scoreboard) in_imp;
  uvm_analysis_imp_out #(mlp_mon_item, mlp_scoreboard) out_imp;
  uvm_analysis_port    #(mlp_verdict)                  cov_ap;

  virtual mlp_if vif;
  mlp_env_cfg    cfg;
  mlp_ref_model  model;
  mlp_verdict    exp_q[$];

  // statistics
  int unsigned n_in, n_out, n_match, n_mismatch, n_cfg, n_cfg_ignored, n_reset, n_aborted;
  int unsigned n_iris, n_iris_ok, n_busy_err, n_ref_err;
  int unsigned n_sat_hi, n_sat_lo;
  longint unsigned lat_min = 64'hFFFF_FFFF, lat_max = 0;

  function new(string name, uvm_component parent);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    in_imp  = new("in_imp",  this);
    out_imp = new("out_imp", this);
    cov_ap  = new("cov_ap",  this);
    model   = mlp_ref_model::type_id::create("model");
    if (!uvm_config_db#(virtual mlp_if)::get(this, "", "vif", vif))
      `uvm_fatal("NOVIF", "virtual interface 'vif' not found in config_db")
    if (!uvm_config_db#(mlp_env_cfg)::get(this, "", "cfg", cfg))
      `uvm_fatal("NOCFG", "mlp_env_cfg not found in config_db")
  endfunction

  // ---------------------------------------------------------------------------
  // stimulus side: configuration writes, accepted inputs, resets
  // ---------------------------------------------------------------------------
  function void write_in(mlp_mon_item t);
    case (t.kind)
      K_CFG:   handle_cfg(t);
      K_INPUT: handle_input(t);
      K_RESET: handle_reset(t);
      default: ;
    endcase
  endfunction

  function void handle_cfg(mlp_mon_item t);
    mlp_verdict v = mlp_verdict::type_id::create("v_cfg");
    bit busy_exp  = (exp_q.size() != 0);      // the model's own idea of "busy"
    n_cfg++;
    if (t.busy !== busy_exp) begin
      n_busy_err++;
      `uvm_error("BUSY", $sformatf("cyc %0d: DUT busy=%0b but %0d sample(s) are in flight (expected busy=%0b)",
                 t.cycle, t.busy, exp_q.size(), busy_exp))
    end
    v.kind    = V_CFG;
    v.addr    = t.addr;
    v.data    = t.data;
    v.busy    = busy_exp;
    v.with_in = t.with_in;
    v.applied = model.write(t.addr, t.data, busy_exp);
    if (!v.applied) n_cfg_ignored++;
    `uvm_info("CFG", v.convert2string(), UVM_HIGH)
    cov_ap.write(v);
  endfunction

  function void handle_input(mlp_mon_item t);
    mlp_verdict v = mlp_verdict::type_id::create("v_in");
    int          lab;
    bit [31:0]   yg;
    n_in++;
    model.predict(t.x);
    v.kind     = V_INFER;
    v.in_cycle = t.cycle;
    v.in_wait  = t.waited;
    v.shift    = model.sh;
    v.leak     = model.leak;
    for (int i = 0; i < N_IN; i++) v.x[i] = t.x[i];
    for (int n = 0; n < N_OUT; n++) begin
      v.y_exp[n]  = model.r_y[n];
      v.acc[n]    = model.r_acc[n];
      v.sat_hi[n] = model.r_sat_hi[n];
      v.sat_lo[n] = model.r_sat_lo[n];
      v.leaky[n]  = model.r_leaky[n];
      if (model.r_sat_hi[n]) n_sat_hi++;
      if (model.r_sat_lo[n]) n_sat_lo++;
    end
    // Is this the Iris application?  (Iris config loaded AND a known Iris vector)
    if (cfg.iris_ds.cfg_equals(model) && cfg.iris_ds.lookup(t.get_xp(), lab, yg)) begin
      v.is_iris = 1;
      v.label   = lab;
      // cross-check: the SV model must reproduce the Python golden scores
      for (int n = 0; n < N_OUT; n++)
        if (yg[8*n +: 8] !== model.r_y[n]) begin
          n_ref_err++;
          `uvm_error("REF_VS_PY", $sformatf("SV model y[%0d]=%0d but Python golden=%0d for x=[%0d %0d %0d %0d]",
                     n, model.r_y[n], $signed(yg[8*n +: 8]), t.x[0], t.x[1], t.x[2], t.x[3]))
        end
    end
    exp_q.push_back(v);
  endfunction

  function void handle_reset(mlp_mon_item t);
    mlp_verdict v = mlp_verdict::type_id::create("v_rst");
    v.kind    = V_RESET;
    v.stage   = t.stage;
    v.stalled = t.stalled;
    v.aborted = exp_q.size();
    n_reset++;
    n_aborted += exp_q.size();
    `uvm_info("RST", $sformatf("reset seen in state %s%s: %0d sample(s) dropped, model back to reset values",
              stage_name(t.stage), t.stalled ? " (output stalled)" : "", exp_q.size()), UVM_MEDIUM)
    exp_q.delete();
    model.reset();
    cov_ap.write(v);
  endfunction

  // ---------------------------------------------------------------------------
  // result side: compare
  // ---------------------------------------------------------------------------
  function void write_out(mlp_mon_item t);
    mlp_verdict v;
    bit         ok = 1;
    n_out++;
    if (exp_q.size() == 0) begin
      `uvm_error("UNEXPECTED", $sformatf("cyc %0d: output %s with nothing in flight", t.cycle, t.convert2string()))
      return;
    end
    v = exp_q.pop_front();
    for (int n = 0; n < N_OUT; n++) begin
      v.y_act[n] = t.y[n];
      if (t.y[n] !== v.y_exp[n]) ok = 0;
    end
    v.pass     = ok;
    v.out_wait = t.waited;
    v.latency  = t.cycle - v.in_cycle;
    v.pred_act = argmax3(v.y_act);
    if (v.latency < lat_min) lat_min = v.latency;
    if (v.latency > lat_max) lat_max = v.latency;

    if (ok) n_match++;
    else begin
      n_mismatch++;
      `uvm_error("MISMATCH", $sformatf("x=[%0d %0d %0d %0d] shift=%0d leak=%0d acc=[%0d %0d %0d %0d]  expected y=[%0d %0d %0d %0d]  DUT y=[%0d %0d %0d %0d]",
                 v.x[0], v.x[1], v.x[2], v.x[3], v.shift, v.leak,
                 v.acc[0], v.acc[1], v.acc[2], v.acc[3],
                 v.y_exp[0], v.y_exp[1], v.y_exp[2], v.y_exp[3],
                 v.y_act[0], v.y_act[1], v.y_act[2], v.y_act[3]))
    end

    if (v.is_iris) begin
      n_iris++;
      if (v.pred_act == v.label) n_iris_ok++;
    end

    // few transactions -> print each one (single test); many -> only with UVM_HIGH
    `uvm_info("CHK", v.convert2string(), (n_in <= 20) ? UVM_LOW : UVM_HIGH)
    cov_ap.write(v);
  endfunction

  // ---------------------------------------------------------------------------
  // end of test
  // ---------------------------------------------------------------------------
  function void check_phase(uvm_phase phase);
    if (exp_q.size() != 0)
      `uvm_error("LOST", $sformatf("%0d accepted sample(s) never produced an output", exp_q.size()))
    if (vif.assert_errors != 0)
      `uvm_error("ASSERT", $sformatf("%0d protocol assertion failure(s) in mlp_if (see the [MLP_IF] messages)", vif.assert_errors))
    if (n_iris >= 20 && (100 * n_iris_ok) < (cfg.min_acc_pct * n_iris))
      `uvm_error("ACCURACY", $sformatf("Iris accuracy %0d/%0d is below the %0d%% bar", n_iris_ok, n_iris, cfg.min_acc_pct))
  endfunction

  function void report_phase(uvm_phase phase);
    string s = "\n";
    s = {s, "-------------------- scoreboard summary --------------------\n"};
    s = {s, $sformatf("  inputs accepted     : %0d\n", n_in)};
    s = {s, $sformatf("  outputs checked     : %0d   match %0d   mismatch %0d\n", n_out, n_match, n_mismatch)};
    s = {s, $sformatf("  config writes       : %0d   (%0d ignored: busy or unused address)\n", n_cfg, n_cfg_ignored)};
    s = {s, $sformatf("  resets seen         : %0d   samples dropped by them: %0d\n", n_reset, n_aborted)};
    s = {s, $sformatf("  expected clamps     : %0d x +127, %0d x -128\n", n_sat_hi, n_sat_lo)};
    if (n_out != 0)
      s = {s, $sformatf("  latency (cycles)    : min %0d  max %0d   (2 = no back-pressure)\n", lat_min, lat_max)};
    if (n_iris != 0)
      s = {s, $sformatf("  Iris classification : %0d / %0d correct (%0.1f %%)\n", n_iris_ok, n_iris, 100.0 * n_iris_ok / n_iris)};
    s = {s, $sformatf("  assertion failures  : %0d\n", vif.assert_errors)};
    s = {s,           "------------------------------------------------------------"};
    `uvm_info("SCB", s, UVM_LOW)
  endfunction
endclass
