// -----------------------------------------------------------------------------
// mlp_tests.sv : a base test + one test per sequence.
//   +UVM_TESTNAME=<test>   picks the test   (tb_top's default: mlp_iris_test)
//   +NUM_ITEMS=n  +IMG_IDX=i  +DATA_DIR=dir  +MIN_ACC=pct   tune them
// -----------------------------------------------------------------------------
class mlp_base_test extends uvm_test;
  `uvm_component_utils(mlp_base_test)

  mlp_env     env;
  mlp_env_cfg cfg;

  function new(string name = "mlp_base_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    string       dir, f_cfg, f_vec;
    int unsigned n;
    super.build_phase(phase);

    cfg = mlp_env_cfg::type_id::create("cfg");
    if ($value$plusargs("DATA_DIR=%s",  dir)) cfg.data_dir    = dir;
    if ($value$plusargs("NUM_ITEMS=%d", n))   cfg.num_items   = n;
    if ($value$plusargs("IMG_IDX=%d",   n))   cfg.img_idx     = n;
    if ($value$plusargs("MIN_ACC=%d",   n))   cfg.min_acc_pct = n;

    // Iris: config + 1200 vectors, the first 255 are the held-out test set
    cfg.iris_ds = mlp_dataset::type_id::create("iris_ds");
    f_cfg = {cfg.data_dir, "/iris_cfg.txt"};
    f_vec = {cfg.data_dir, "/iris_vectors.txt"};
    if (!cfg.iris_ds.load_cfg(f_cfg))     `uvm_fatal("DATA", {"cannot read ", f_cfg, " (set +DATA_DIR)"})
    if (!cfg.iris_ds.load_vectors(f_vec)) `uvm_fatal("DATA", {"cannot read ", f_vec, " (set +DATA_DIR)"})
    if (cfg.iris_ds.size() > 255) cfg.iris_ds.test_n = 255;

    // Saturation set
    cfg.sat_ds = mlp_dataset::type_id::create("sat_ds");
    f_cfg = {cfg.data_dir, "/sat_cfg.txt"};
    f_vec = {cfg.data_dir, "/sat_vectors.txt"};
    if (!cfg.sat_ds.load_cfg(f_cfg))     `uvm_fatal("DATA", {"cannot read ", f_cfg, " (run: make sat_vectors)"})
    if (!cfg.sat_ds.load_vectors(f_vec)) `uvm_fatal("DATA", {"cannot read ", f_vec, " (run: make sat_vectors)"})

    uvm_config_db#(mlp_env_cfg)::set(this, "*", "cfg", cfg);
    env = mlp_env::type_id::create("env", this);

    `uvm_info("TEST", $sformatf("data_dir=%s  iris vectors=%0d (test set %0d)  sat vectors=%0d  NUM_ITEMS=%0d  IMG_IDX=%0d",
              cfg.data_dir, cfg.iris_ds.size(), cfg.iris_ds.test_n, cfg.sat_ds.size(), cfg.num_items, cfg.img_idx), UVM_LOW)
  endfunction

  // each test returns its own sequence
  virtual function mlp_base_seq make_seq();
    return null;
  endfunction

  task run_phase(uvm_phase phase);
    mlp_base_seq seq = make_seq();
    if (seq == null) `uvm_fatal("TEST", "make_seq() returned null")
    phase.raise_objection(this);
    seq.cfg = cfg;
    seq.start(env.agt.sqr);
    phase.drop_objection(this);
  endtask

  function void end_of_elaboration_phase(uvm_phase phase);
    uvm_top.set_timeout(50ms, 0);       // safety net: a hung test ends with a fatal, not forever
`ifdef UVM_NO_DPI
    // UVM built without DPI cannot read +UVM_VERBOSITY itself: do it here
    begin
      string v;
      if ($value$plusargs("UVM_VERBOSITY=%s", v)) begin
        case (v)
          "UVM_NONE":   uvm_top.set_report_verbosity_level_hier(UVM_NONE);
          "UVM_LOW":    uvm_top.set_report_verbosity_level_hier(UVM_LOW);
          "UVM_MEDIUM": uvm_top.set_report_verbosity_level_hier(UVM_MEDIUM);
          "UVM_HIGH":   uvm_top.set_report_verbosity_level_hier(UVM_HIGH);
          "UVM_FULL":   uvm_top.set_report_verbosity_level_hier(UVM_FULL);
          default: ;
        endcase
      end
    end
`endif
  endfunction

  function void report_phase(uvm_phase phase);
    uvm_report_server srv = uvm_report_server::get_server();
    int unsigned errs = srv.get_severity_count(UVM_ERROR);
    int unsigned fats = srv.get_severity_count(UVM_FATAL);
    if (errs == 0 && fats == 0)
      `uvm_info("RESULT", "*** TEST PASSED ***", UVM_NONE)
    else
      `uvm_info("RESULT", $sformatf("*** TEST FAILED ***  UVM_ERROR=%0d UVM_FATAL=%0d", errs, fats), UVM_NONE)
  endfunction
endclass

// ---- the tests --------------------------------------------------------------------
class mlp_iris_test extends mlp_base_test;            // default: the application
  `uvm_component_utils(mlp_iris_test)
  function new(string name = "mlp_iris_test", uvm_component parent = null); super.new(name, parent); endfunction
  virtual function mlp_base_seq make_seq(); mlp_iris_seq s = mlp_iris_seq::type_id::create("seq"); return s; endfunction
endclass

class mlp_single_test extends mlp_base_test;          // one vector, +IMG_IDX
  `uvm_component_utils(mlp_single_test)
  function new(string name = "mlp_single_test", uvm_component parent = null); super.new(name, parent); endfunction
  virtual function mlp_base_seq make_seq(); mlp_single_seq s = mlp_single_seq::type_id::create("seq"); return s; endfunction
endclass

class mlp_random_test extends mlp_base_test;          // random config + vectors + back-pressure
  `uvm_component_utils(mlp_random_test)
  function new(string name = "mlp_random_test", uvm_component parent = null); super.new(name, parent); endfunction
  virtual function mlp_base_seq make_seq(); mlp_random_seq s = mlp_random_seq::type_id::create("seq"); return s; endfunction
endclass

class mlp_sparse_test extends mlp_base_test;          // 80 % zero inputs
  `uvm_component_utils(mlp_sparse_test)
  function new(string name = "mlp_sparse_test", uvm_component parent = null); super.new(name, parent); endfunction
  virtual function mlp_base_seq make_seq(); mlp_sparse_seq s = mlp_sparse_seq::type_id::create("seq"); return s; endfunction
endclass

class mlp_corner_test extends mlp_base_test;          // directed corners
  `uvm_component_utils(mlp_corner_test)
  function new(string name = "mlp_corner_test", uvm_component parent = null); super.new(name, parent); endfunction
  virtual function mlp_base_seq make_seq(); mlp_corner_seq s = mlp_corner_seq::type_id::create("seq"); return s; endfunction
endclass

class mlp_sat_test extends mlp_base_test;             // clamp to +127 / -128
  `uvm_component_utils(mlp_sat_test)
  function new(string name = "mlp_sat_test", uvm_component parent = null); super.new(name, parent); endfunction
  virtual function mlp_base_seq make_seq(); mlp_sat_seq s = mlp_sat_seq::type_id::create("seq"); return s; endfunction
endclass

class mlp_reset_test extends mlp_base_test;           // reset in every pipeline state
  `uvm_component_utils(mlp_reset_test)
  function new(string name = "mlp_reset_test", uvm_component parent = null); super.new(name, parent); endfunction
  virtual function mlp_base_seq make_seq(); mlp_reset_seq s = mlp_reset_seq::type_id::create("seq"); return s; endfunction
endclass

class mlp_cfg_test extends mlp_base_test;             // config port
  `uvm_component_utils(mlp_cfg_test)
  function new(string name = "mlp_cfg_test", uvm_component parent = null); super.new(name, parent); endfunction
  virtual function mlp_base_seq make_seq(); mlp_cfg_seq s = mlp_cfg_seq::type_id::create("seq"); return s; endfunction
endclass

class mlp_stall_test extends mlp_base_test;           // output back-pressure
  `uvm_component_utils(mlp_stall_test)
  function new(string name = "mlp_stall_test", uvm_component parent = null); super.new(name, parent); endfunction
  virtual function mlp_base_seq make_seq(); mlp_stall_seq s = mlp_stall_seq::type_id::create("seq"); return s; endfunction
endclass

class mlp_regress_test extends mlp_base_test;         // all of the above in one run
  `uvm_component_utils(mlp_regress_test)
  function new(string name = "mlp_regress_test", uvm_component parent = null); super.new(name, parent); endfunction
  virtual function mlp_base_seq make_seq(); mlp_regress_seq s = mlp_regress_seq::type_id::create("seq"); return s; endfunction
endclass
