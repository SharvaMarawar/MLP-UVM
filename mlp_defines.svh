// -----------------------------------------------------------------------------
// mlp_defines.svh : compile-time switches shared by the whole testbench
// (the counterpart of mc_defines.svh in the lab guide)
// -----------------------------------------------------------------------------
`ifndef MLP_DEFINES_SVH
`define MLP_DEFINES_SVH

// Folder holding iris_cfg.txt, iris_vectors.txt and sat_vectors.txt.
// Change it at compile time  (+define+MLP_DATA_DIR=\"/some/path\")
// or at run time              (+DATA_DIR=/some/path).
`ifndef MLP_DATA_DIR
  `define MLP_DATA_DIR "data"
`endif

`endif
