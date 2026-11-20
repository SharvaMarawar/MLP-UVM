// -----------------------------------------------------------------------------
// mlp_pkg.sv : the testbench package (the counterpart of mc_pkg.sv).
// Constants live here; the classes are pulled in with `include in dependency order.
// -----------------------------------------------------------------------------
`include "mlp_defines.svh"

package mlp_pkg;
  timeunit 1ns;
  timeprecision 1ps;

  import uvm_pkg::*;
  `include "uvm_macros.svh"

  // ---- design constants -------------------------------------------------------
  localparam int N_IN               = 4;      // inputs per sample
  localparam int N_OUT              = 4;      // neurons (outputs)
  localparam int N_CLASS            = 3;      // Iris species (neuron 3 is unused by Iris)
  localparam int ACC_W              = 20;     // DUT accumulator width
  localparam int ADDR_LAST          = 21;     // highest valid config address
  localparam int IN_TIMEOUT_CYCLES  = 2000;   // driver gives up waiting for in_ready
  localparam int DRAIN_TIMEOUT      = 2000;   // ... or for the pipeline to empty
  localparam int RESET_STAGE_WAIT   = 50;     // cycles the reset item waits for its target stage

  `include "mlp_items.sv"
  `include "mlp_ref_model.sv"
  `include "mlp_dataset.sv"
  `include "mlp_env_cfg.sv"
  `include "mlp_sequences.sv"
  `include "mlp_driver.sv"
  `include "mlp_monitor.sv"
  `include "mlp_agent.sv"
  `include "mlp_scoreboard.sv"
  `include "mlp_coverage.sv"
  `include "mlp_env.sv"
  `include "mlp_tests.sv"

endpackage
