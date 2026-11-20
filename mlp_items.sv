// -----------------------------------------------------------------------------
// mlp_items.sv : enums, helper functions and the three transaction classes
//
//   mlp_item      sequence -> driver   what to do (inference / config write /
//                                      back-pressure / reset / drain)
//   mlp_mon_item  monitor  -> scoreboard  what was observed on the pins
//   mlp_verdict   scoreboard -> coverage  what the scoreboard concluded
// (Included by mlp_pkg.sv: it lives inside the package.)
// -----------------------------------------------------------------------------

typedef enum int { OP_INFER, OP_CFG, OP_READY, OP_RESET, OP_DRAIN } mlp_op_e;

// Which pipeline state the reset item waits for before asserting reset.
// The state is the DUT's {s1_valid, out_valid}, seen through vif.dbg_stage.
typedef enum int { RST_ANY, RST_IDLE, RST_S1, RST_OUT, RST_BOTH } mlp_rst_when_e;

typedef enum int { K_INPUT, K_OUTPUT, K_CFG, K_RESET } mlp_kind_e;
typedef enum int { V_INFER, V_CFG, V_RESET }           mlp_vkind_e;

function automatic bit [1:0] stage_of(mlp_rst_when_e w);
  case (w)
    RST_S1:   return 2'b10;
    RST_OUT:  return 2'b01;
    RST_BOTH: return 2'b11;
    default:  return 2'b00;
  endcase
endfunction

function automatic string stage_name(bit [1:0] s);
  case (s)
    2'b00:   return "IDLE";
    2'b10:   return "STAGE1";
    2'b01:   return "OUTREG";
    default: return "BOTH";
  endcase
endfunction

// {x3,x2,x1,x0} exactly like in_data
function automatic bit [31:0] pack_x(int a0, int a1, int a2, int a3);
  return {a3[7:0], a2[7:0], a1[7:0], a0[7:0]};
endfunction

// argmax over the Iris classes only (neuron 3 is unused); lowest index wins a tie
function automatic int argmax3(bit signed [7:0] y[N_OUT]);
  int best = 0;
  for (int i = 1; i < N_CLASS; i++) if (y[i] > y[best]) best = i;
  return best;
endfunction

// -----------------------------------------------------------------------------
// mlp_item : one thing for the driver to do
// -----------------------------------------------------------------------------
class mlp_item extends uvm_sequence_item;
  `uvm_object_utils(mlp_item)

  rand mlp_op_e         op         = OP_INFER;
  rand bit signed [7:0] x[N_IN];                  // OP_INFER
  rand bit [4:0]        addr       = 0;           // OP_CFG
  rand bit signed [7:0] data       = 0;           // OP_CFG
  rand bit              while_busy = 0;           // OP_CFG: 0 = wait until idle (polite), 1 = write now
  rand bit              collide    = 0;           // OP_CFG: also present an input in the write cycle
  rand int unsigned     gap        = 0;           // idle cycles before the item
  rand int unsigned     ready_pct  = 100;         // OP_READY: % of cycles out_ready is high
  rand int unsigned     hold       = 0;           // OP_READY: cycles it lasts (0 = until changed)
  rand mlp_rst_when_e   rst_when   = RST_ANY;     // OP_RESET
  rand int unsigned     rst_hold   = 2;           // OP_RESET: cycles reset stays low

  constraint c_sane {
    gap       inside {[0:20]};
    ready_pct inside {[0:100]};
    hold      inside {[0:60]};
    rst_hold  inside {[1:4]};
  }

  function new(string name = "mlp_item");
    super.new(name);
  endfunction

  function bit [31:0] get_xp();
    bit [31:0] p;
    foreach (x[i]) p[8*i +: 8] = x[i];
    return p;
  endfunction

  function void set_xp(bit [31:0] p);
    foreach (x[i]) x[i] = p[8*i +: 8];
  endfunction

  virtual function string convert2string();
    case (op)
      OP_INFER: return $sformatf("INFER x=[%0d %0d %0d %0d] gap=%0d", x[0], x[1], x[2], x[3], gap);
      OP_CFG:   return $sformatf("CFG   addr=%0d data=%0d while_busy=%0b collide=%0b gap=%0d", addr, data, while_busy, collide, gap);
      OP_READY: return $sformatf("READY pct=%0d hold=%0d", ready_pct, hold);
      OP_RESET: return $sformatf("RESET when=%s hold=%0d gap=%0d", rst_when.name(), rst_hold, gap);
      default:  return "DRAIN";
    endcase
  endfunction
endclass

// -----------------------------------------------------------------------------
// mlp_mon_item : what the monitor saw (one object per event)
//   K_INPUT  a sample was accepted      (in_valid && in_ready)
//   K_OUTPUT a result was accepted      (out_valid && out_ready)
//   K_CFG    a write was presented      (wr_en)
//   K_RESET  reset went low
// -----------------------------------------------------------------------------
class mlp_mon_item extends uvm_object;
  `uvm_object_utils(mlp_mon_item)

  mlp_kind_e         kind;
  longint unsigned   cycle;                 // clock edge number
  bit signed [7:0]   x[N_IN];               // K_INPUT
  bit signed [7:0]   y[N_OUT];              // K_OUTPUT
  bit [4:0]          addr;                  // K_CFG
  bit signed [7:0]   data;
  bit                busy;                  // DUT busy output at the write
  bit                with_in;               // in_valid was high in the write cycle
  int unsigned       waited;                // cycles the handshake waited (input or output)
  bit [1:0]          stage;                 // K_RESET: pipeline state just before reset
  bit                stalled;               // K_RESET: output was being held by back-pressure

  function new(string name = "mlp_mon_item");
    super.new(name);
  endfunction

  function bit [31:0] get_xp();
    bit [31:0] p;
    foreach (x[i]) p[8*i +: 8] = x[i];
    return p;
  endfunction

  virtual function string convert2string();
    case (kind)
      K_INPUT:  return $sformatf("IN    cyc=%0d x=[%0d %0d %0d %0d] waited=%0d", cycle, x[0], x[1], x[2], x[3], waited);
      K_OUTPUT: return $sformatf("OUT   cyc=%0d y=[%0d %0d %0d %0d] waited=%0d", cycle, y[0], y[1], y[2], y[3], waited);
      K_CFG:    return $sformatf("CFG   cyc=%0d addr=%0d data=%0d busy=%0b with_in=%0b", cycle, addr, data, busy, with_in);
      default:  return $sformatf("RESET cyc=%0d stage=%s stalled=%0b", cycle, stage_name(stage), stalled);
    endcase
  endfunction
endclass

// -----------------------------------------------------------------------------
// mlp_verdict : the scoreboard's conclusion about one event; feeds coverage
// -----------------------------------------------------------------------------
class mlp_verdict extends uvm_object;
  `uvm_object_utils(mlp_verdict)

  mlp_vkind_e        kind;
  bit                pass = 1;

  // --- V_INFER ---------------------------------------------------------------
  bit signed [7:0]   x[N_IN];
  bit signed [7:0]   y_exp[N_OUT];
  bit signed [7:0]   y_act[N_OUT];
  int                acc[N_OUT];            // accumulator, before shift
  bit                sat_hi[N_OUT];         // expected clamp to +127
  bit                sat_lo[N_OUT];         // expected clamp to -128
  bit                leaky[N_OUT];          // negative path of the Leaky ReLU taken
  int                shift, leak;           // config in force
  bit                is_iris;               // config == Iris config and x is a known Iris vector
  int                label = -1;
  int                pred_act = -1;
  int unsigned       in_wait, out_wait;     // handshake waits (cycles)
  longint unsigned   latency;               // input accept -> output accept (cycles)
  longint unsigned   in_cycle;

  // --- V_CFG -----------------------------------------------------------------
  bit [4:0]          addr;
  bit signed [7:0]   data;
  bit                busy;                  // the DUT was busy when the write arrived
  bit                applied;               // the model applied it
  bit                with_in;

  // --- V_RESET ---------------------------------------------------------------
  bit [1:0]          stage;
  bit                stalled;
  int unsigned       aborted;               // samples lost to the reset

  function new(string name = "mlp_verdict");
    super.new(name);
  endfunction

  virtual function string convert2string();
    case (kind)
      V_INFER: return $sformatf("%s x=[%0d %0d %0d %0d] exp=[%0d %0d %0d %0d] act=[%0d %0d %0d %0d] lat=%0d%s",
                    pass ? "PASS" : "FAIL", x[0], x[1], x[2], x[3],
                    y_exp[0], y_exp[1], y_exp[2], y_exp[3], y_act[0], y_act[1], y_act[2], y_act[3], latency,
                    is_iris ? $sformatf(" label=%0d pred=%0d", label, pred_act) : "");
      V_CFG:   return $sformatf("CFG addr=%0d data=%0d busy=%0b applied=%0b", addr, data, busy, applied);
      default: return $sformatf("RESET stage=%s stalled=%0b aborted=%0d", stage_name(stage), stalled, aborted);
    endcase
  endfunction
endclass
