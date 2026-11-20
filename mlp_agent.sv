// -----------------------------------------------------------------------------
// mlp_agent.sv : sequencer + driver + monitor in one package.
// The monitor's two analysis ports are re-exported as in_ap / out_ap.
// -----------------------------------------------------------------------------
class mlp_agent extends uvm_agent;
  `uvm_component_utils(mlp_agent)

  uvm_sequencer #(mlp_item) sqr;
  mlp_driver                drv;
  mlp_monitor               mon;

  uvm_analysis_port #(mlp_mon_item) in_ap;
  uvm_analysis_port #(mlp_mon_item) out_ap;

  function new(string name, uvm_component parent);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    sqr = uvm_sequencer #(mlp_item)::type_id::create("sqr", this);
    drv = mlp_driver ::type_id::create("drv", this);
    mon = mlp_monitor::type_id::create("mon", this);
  endfunction

  function void connect_phase(uvm_phase phase);
    drv.seq_item_port.connect(sqr.seq_item_export);
    in_ap  = mon.in_ap;
    out_ap = mon.out_ap;
  endfunction
endclass
