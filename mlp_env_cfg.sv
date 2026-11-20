// -----------------------------------------------------------------------------
// mlp_env_cfg.sv : knobs and shared data, handed to every component through
// config_db.  The test fills it from the +plusargs the Makefile passes.
// -----------------------------------------------------------------------------
class mlp_env_cfg extends uvm_object;
  `uvm_object_utils(mlp_env_cfg)

  string        data_dir     = `MLP_DATA_DIR;   // +DATA_DIR
  int unsigned  num_items    = 40;              // +NUM_ITEMS : random / sparse tests
  int unsigned  img_idx      = 0;               // +IMG_IDX   : single test (0 .. 1199)
  int unsigned  min_acc_pct  = 80;              // +MIN_ACC   : Iris accuracy bar for the Iris test

  mlp_dataset   iris_ds;                        // Iris config + 1200 vectors (first 255 = test set)
  mlp_dataset   sat_ds;                         // saturation config + vectors

  function new(string name = "mlp_env_cfg");
    super.new(name);
  endfunction
endclass
