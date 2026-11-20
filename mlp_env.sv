// -----------------------------------------------------------------------------
// mlp_env.sv : agent + scoreboard + coverage, wired together
//
//   agent.in_ap  ---> scoreboard.in_imp
//   agent.out_ap ---> scoreboard.out_imp
//   scoreboard.cov_ap ---> coverage
// -----------------------------------------------------------------------------
class mlp_env extends uvm_env;
  `uvm_component_utils(mlp_env)

  mlp_agent      agt;
  mlp_scoreboard scb;
  mlp_coverage   cov;

  function new(string name, uvm_component parent);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    agt = mlp_agent     ::type_id::create("agt", this);
    scb = mlp_scoreboard::type_id::create("scb", this);
    cov = mlp_coverage  ::type_id::create("cov", this);
  endfunction

  function void connect_phase(uvm_phase phase);
    agt.in_ap .connect(scb.in_imp);
    agt.out_ap.connect(scb.out_imp);
    scb.cov_ap.connect(cov.analysis_export);
  endfunction
endclass
