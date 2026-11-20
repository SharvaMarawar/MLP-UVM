// -----------------------------------------------------------------------------
// mlp_driver.sv : turns mlp_item objects into pin activity.
//
// Timing rule: the driver changes pins with non-blocking assignments right after
// a posedge, and decides ("was it accepted?") by looking at the pins AT the next
// posedge, before the DUT updates.  That is exactly what the DUT sees.
//
//   OP_INFER  present x on in_data/in_valid, hold until in_ready is seen high
//   OP_CFG    wait until the DUT is idle (unless while_busy), pulse wr_en one cycle
//   OP_READY  change the output back-pressure (separate process, below)
//   OP_RESET  optionally wait for a pipeline state, then pulse rst_n low
//   OP_DRAIN  wait until busy = 0
// -----------------------------------------------------------------------------
class mlp_driver extends uvm_driver #(mlp_item);
  `uvm_component_utils(mlp_driver)

  virtual mlp_if vif;

  int unsigned ready_pct  = 100;     // % of cycles out_ready is high
  int unsigned ready_left = 0;       // cycles until ready_pct returns to 100 (0 = never)

  int unsigned n_infer, n_cfg, n_reset;

  function new(string name, uvm_component parent);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    if (!uvm_config_db#(virtual mlp_if)::get(this, "", "vif", vif))
      `uvm_fatal("NOVIF", "virtual interface 'vif' not found in config_db")
  endfunction

  task run_phase(uvm_phase phase);
    fork ready_gen(); join_none
    apply_reset(5);                                  // reset once at the start
    forever begin
      seq_item_port.get_next_item(req);
      `uvm_info("DRV", req.convert2string(), UVM_HIGH)
      case (req.op)
        OP_INFER: begin idle(req.gap); drive_input(req);  end
        OP_CFG:   begin idle(req.gap); drive_cfg(req);    end
        OP_RESET: begin idle(req.gap); drive_reset(req);  end
        OP_READY: begin ready_pct = req.ready_pct; ready_left = req.hold; end
        OP_DRAIN: wait_idle();
      endcase
      seq_item_port.item_done();
    end
  endtask

  // ---- pieces ----------------------------------------------------------------
  task idle(int unsigned n);
    repeat (n) @(posedge vif.clk);
  endtask

  // Waits at least one clock edge, then until busy is low (looked at pre-edge).
  task wait_idle();
    int unsigned t = 0;
    @(posedge vif.clk);
    while (vif.busy !== 1'b0) begin
      @(posedge vif.clk);
      if (++t > DRAIN_TIMEOUT)
        `uvm_fatal("TIMEOUT", $sformatf("DUT still busy after %0d cycles (out_ready stuck low?)", DRAIN_TIMEOUT))
    end
  endtask

  task drive_input(mlp_item it);
    int unsigned t = 0;
    vif.in_data  <= it.get_xp();
    vif.in_valid <= 1'b1;
    forever begin
      @(posedge vif.clk);
      if (vif.in_ready === 1'b1) break;              // the DUT took it on this edge
      if (++t > IN_TIMEOUT_CYCLES)
        `uvm_fatal("TIMEOUT", $sformatf("in_ready stayed low for %0d cycles", IN_TIMEOUT_CYCLES))
    end
    vif.in_valid <= 1'b0;
    n_infer++;
  endtask

  task drive_cfg(mlp_item it);
    if (!it.while_busy) wait_idle();
    vif.wr_addr <= it.addr;
    vif.wr_data <= it.data;
    vif.wr_en   <= 1'b1;
    if (it.collide) begin                            // also offer an input in this cycle
      vif.in_data  <= $urandom;
      vif.in_valid <= 1'b1;
    end
    @(posedge vif.clk);
    vif.wr_en <= 1'b0;
    if (it.collide) vif.in_valid <= 1'b0;
    n_cfg++;
  endtask

  task apply_reset(int unsigned hold);
    vif.wr_en    <= 1'b0;
    vif.in_valid <= 1'b0;
    vif.rst_n    <= 1'b0;
    repeat (hold) @(posedge vif.clk);
    vif.rst_n    <= 1'b1;
    @(posedge vif.clk);
  endtask

  task drive_reset(mlp_item it);
    int unsigned t = 0;
    if (it.rst_when != RST_ANY) begin
      forever begin
        @(posedge vif.clk);
        if (vif.dbg_stage === stage_of(it.rst_when)) break;
        if (++t > RESET_STAGE_WAIT) begin
          `uvm_warning("RST_STAGE", $sformatf("state %s not reached in %0d cycles - resetting anyway",
                       it.rst_when.name(), RESET_STAGE_WAIT))
          break;
        end
      end
    end
    apply_reset(it.rst_hold);
    n_reset++;
  endtask

  // out_ready generator: runs forever, one decision per clock
  task ready_gen();
    forever begin
      @(posedge vif.clk);
      if (ready_pct >= 100)     vif.out_ready <= 1'b1;
      else if (ready_pct == 0)  vif.out_ready <= 1'b0;
      else                      vif.out_ready <= ($urandom_range(99) < ready_pct);
      if (ready_left != 0) begin
        ready_left--;
        if (ready_left == 0) ready_pct = 100;
      end
    end
  endtask

  function void report_phase(uvm_phase phase);
    `uvm_info("DRV", $sformatf("drove %0d inferences, %0d config writes, %0d resets (+ the initial one)",
              n_infer, n_cfg, n_reset), UVM_LOW)
  endfunction
endclass
