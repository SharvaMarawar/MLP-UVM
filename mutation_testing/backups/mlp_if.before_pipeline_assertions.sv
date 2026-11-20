`timescale 1ns/1ps
// -----------------------------------------------------------------------------
// mlp_if.sv : the DUT's pins, 8 protocol assertions, and a pipeline-state probe
//
// Signals are plain variables.  The driver changes them with non-blocking
// assignments right after a clock edge; the monitor samples them at the clock
// edge, before the DUT's own non-blocking updates land.  Both therefore see
// exactly what the DUT sees (no clocking block, so it runs on any simulator).
// -----------------------------------------------------------------------------
interface mlp_if (input logic clk);

  // ---- pins driven by the testbench ----------------------------------------
  logic              rst_n     = 1'b0;     // async, active low (driver owns it)
  logic              wr_en     = 1'b0;     // config / weight write port
  logic [4:0]        wr_addr   = '0;
  logic signed [7:0] wr_data   = '0;
  logic              in_valid  = 1'b0;     // input stream
  logic [31:0]       in_data   = '0;       // {x3,x2,x1,x0}, int8 each
  logic              out_ready = 1'b1;     // output stream back-pressure

  // ---- pins driven by the DUT ----------------------------------------------
  logic              in_ready;
  logic              out_valid;
  logic [31:0]       out_data;             // {y3,y2,y1,y0}, int8 each
  logic              busy;

  // ---- probe: tb_top wires it to {s1_valid, out_valid} inside the DUT -------
  //   2'b00 idle   2'b10 only stage 1   2'b01 only output reg   2'b11 both
  logic [1:0]        dbg_stage;

  // Assertion failures are counted here; the scoreboard turns a non-zero count
  // into a UVM_ERROR at the end of the test.
  int unsigned       assert_errors = 0;

  // ---------------------------------------------------------------------------
  // Protocol assertions  (every one has this form:  @(posedge clk) disable iff (!rst_n) ...)
  // ---------------------------------------------------------------------------
  a_out_hold: assert property (@(posedge clk) disable iff (!rst_n)
      (out_valid && !out_ready) |=> (out_valid && $stable(out_data)))
    else begin assert_errors++; $error("[MLP_IF] a_out_hold: output dropped or changed while stalled"); end

  a_in_ready_wr: assert property (@(posedge clk) disable iff (!rst_n)
      wr_en |-> !in_ready)
    else begin assert_errors++; $error("[MLP_IF] a_in_ready_wr: in_ready high during a config write"); end

  a_out_busy: assert property (@(posedge clk) disable iff (!rst_n)
      out_valid |-> busy)
    else begin assert_errors++; $error("[MLP_IF] a_out_busy: out_valid without busy"); end

  a_latency2: assert property (@(posedge clk) disable iff (!rst_n)
      (in_valid && in_ready && !busy) |-> ##2 out_valid)
    else begin assert_errors++; $error("[MLP_IF] a_latency2: sample into an empty pipe did not appear 2 cycles later"); end

  a_result_known: assert property (@(posedge clk) disable iff (!rst_n)
      out_valid |-> !$isunknown(out_data))
    else begin assert_errors++; $error("[MLP_IF] a_result_known: X/Z in out_data"); end

  a_ctrl_known: assert property (@(posedge clk) disable iff (!rst_n)
      !$isunknown({in_ready, out_valid, busy}))
    else begin assert_errors++; $error("[MLP_IF] a_ctrl_known: X/Z on in_ready/out_valid/busy"); end

  a_reset_idle: assert property (@(posedge clk)
      (!rst_n && !$past(rst_n)) |-> (!out_valid && !busy))
    else begin assert_errors++; $error("[MLP_IF] a_reset_idle: DUT not idle while in reset"); end

  a_no_wr_x: assert property (@(posedge clk) disable iff (!rst_n)
      wr_en |-> !$isunknown({wr_addr, wr_data}))
    else begin assert_errors++; $error("[MLP_IF] a_no_wr_x: TB drove X on a config write"); end

endinterface
