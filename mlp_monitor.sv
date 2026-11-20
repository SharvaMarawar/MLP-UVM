// -----------------------------------------------------------------------------
// mlp_monitor.sv : passive.  Never drives a pin.
//
// At every posedge it looks at the pins (pre-edge values, exactly what the DUT
// sees) and publishes
//   in_ap  : K_CFG (a write was presented), K_INPUT (a sample was accepted),
//            K_RESET (reset went low; carries the pipeline state just before)
//   out_ap : K_OUTPUT (a result was accepted)
// In one edge the order is  cfg -> output -> input, which the scoreboard needs
// (a write is judged against the pipeline state BEFORE this edge's events).
// -----------------------------------------------------------------------------
class mlp_monitor extends uvm_monitor;
  `uvm_component_utils(mlp_monitor)

  virtual mlp_if vif;
  uvm_analysis_port #(mlp_mon_item) in_ap;
  uvm_analysis_port #(mlp_mon_item) out_ap;

  function new(string name, uvm_component parent);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    in_ap  = new("in_ap",  this);
    out_ap = new("out_ap", this);
    if (!uvm_config_db#(virtual mlp_if)::get(this, "", "vif", vif))
      `uvm_fatal("NOVIF", "virtual interface 'vif' not found in config_db")
  endfunction

  task run_phase(uvm_phase phase);
    longint unsigned cyc        = 0;
    bit              prev_rst_n = 1'b1;
    bit [1:0]        prev_stage = 2'b00;
    bit              prev_stall = 1'b0;
    int unsigned     in_wait    = 0;
    int unsigned     out_wait   = 0;
    mlp_mon_item     t;

    forever begin
      @(posedge vif.clk);
      cyc++;

      // ---- reset -------------------------------------------------------------
      if (vif.rst_n === 1'b0) begin
        if (prev_rst_n) begin
          t = mlp_mon_item::type_id::create("rst");
          t.kind    = K_RESET;
          t.cycle   = cyc;
          t.stage   = prev_stage;
          t.stalled = prev_stall;
          `uvm_info("MON", t.convert2string(), UVM_HIGH)
          in_ap.write(t);
        end
        prev_rst_n = 1'b0;
        prev_stage = 2'b00;
        prev_stall = 1'b0;
        in_wait    = 0;
        out_wait   = 0;
        continue;
      end
      prev_rst_n = 1'b1;

      // ---- config write ------------------------------------------------------
      if (vif.wr_en === 1'b1) begin
        t = mlp_mon_item::type_id::create("cfg");
        t.kind    = K_CFG;
        t.cycle   = cyc;
        t.addr    = vif.wr_addr;
        t.data    = vif.wr_data;
        t.busy    = (vif.busy === 1'b1);
        t.with_in = (vif.in_valid === 1'b1);
        `uvm_info("MON", t.convert2string(), UVM_HIGH)
        in_ap.write(t);
      end

      // ---- output accepted -----------------------------------------------------
      if (vif.out_valid === 1'b1) begin
        if (vif.out_ready === 1'b1) begin
          t = mlp_mon_item::type_id::create("out");
          t.kind   = K_OUTPUT;
          t.cycle  = cyc;
          t.waited = out_wait;
          for (int n = 0; n < N_OUT; n++) t.y[n] = vif.out_data[8*n +: 8];
          out_wait = 0;
          `uvm_info("MON", t.convert2string(), UVM_HIGH)
          out_ap.write(t);
        end else begin
          out_wait++;
        end
      end

      // ---- input accepted -------------------------------------------------------
      if (vif.in_valid === 1'b1) begin
        if (vif.in_ready === 1'b1) begin
          t = mlp_mon_item::type_id::create("in");
          t.kind   = K_INPUT;
          t.cycle  = cyc;
          t.waited = in_wait;
          for (int i = 0; i < N_IN; i++) t.x[i] = vif.in_data[8*i +: 8];
          in_wait = 0;
          `uvm_info("MON", t.convert2string(), UVM_HIGH)
          in_ap.write(t);
        end else begin
          in_wait++;
        end
      end else begin
        in_wait = 0;
      end

      prev_stage = vif.dbg_stage;
      prev_stall = (vif.out_valid === 1'b1) && (vif.out_ready === 1'b0);
    end
  endtask
endclass
