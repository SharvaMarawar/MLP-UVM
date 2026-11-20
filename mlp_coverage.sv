// -----------------------------------------------------------------------------
// mlp_coverage.sv : functional coverage, fed by the scoreboard's verdicts
// (not directly by the monitor, so only checked behaviour is counted).
//
//   cg_infer : input extremes, output class per neuron (sat_lo / neg / zero /
//              pos / sat_hi), shift x leak_shift, Iris class, handshake waits
//   cg_cfg   : which config address, busy or idle, write colliding with an input
//   cg_reset : pipeline state at reset, with / without back-pressure
// -----------------------------------------------------------------------------
class mlp_coverage extends uvm_subscriber #(mlp_verdict);
  `uvm_component_utils(mlp_coverage)

  // ---- Detailed coverage hit counters -----------------------------------------

  // Inference: input bins [min, neg, zero, pos, max]
  int unsigned x_hits[4][5];

  // Inference: actual output bins [min, neg, zero, pos, max]
  int unsigned y_hits[4][5];

  // Shift bins: [0, 1, 2, 3-7, 8-15]
  int unsigned shift_hits[5];

  // Leak shift values: 0 through 7
  int unsigned leak_hits[8];

  // Shift x leak-shift cross
  int unsigned shift_leak_hits[5][8];

  // Iris class: [setosa, versicolor, virginica]
  int unsigned class_hits[3];

  // Correctness: [wrong, right]
  int unsigned correct_hits[2];

  // Handshake wait bins: [none, one, few, many]
  int unsigned in_wait_hits[4];
  int unsigned out_wait_hits[4];

  // Configuration
  int unsigned addr_hits[32];
  int unsigned busy_hits[2];
  int unsigned applied_hits[2];
  int unsigned with_in_hits[2];

  // Address category x busy: [weight, bias, shift, leak, unused]
  int unsigned kind_busy_hits[5][2];

  // Reset
  int unsigned stage_hits[4];
  int unsigned stalled_hits[2];
  int unsigned aborted_hits[3];

  // Pipeline stage x stalled
  int unsigned stage_stall_hits[4][2];

  

  // ---- sampled values ----------------------------------------------------------

  int v_x0, v_x1, v_x2, v_x3;
  int v_o0, v_o1, v_o2, v_o3;       // 0 sat_lo, 1 neg, 2 zero, 3 pos, 4 sat_hi
  int v_shift, v_leak;
  int v_class;                      // predicted Iris class
  bit v_iris, v_correct;
  int v_in_wait, v_out_wait;

  int v_addr;
  bit v_busy, v_applied, v_with_in;

  bit [1:0] v_stage;
  bit       v_stalled;
  int       v_aborted;

  // ---------------------------------------------------------------------------
  typedef enum int {EXACT_LOW, CLAMP_LOW, EXACT_HIGH, CLAMP_HIGH} boundary_e;
  boundary_e boundary;
  int unsigned boundary_hits[4];

  covergroup cg_sat_boundary;
    option.per_instance = 1;
    cp_boundary: coverpoint boundary {
      bins exact_low  = {EXACT_LOW};
      bins clamp_low  = {CLAMP_LOW};
      bins exact_high = {EXACT_HIGH};
      bins clamp_high = {CLAMP_HIGH};
    }
  endgroup

  covergroup cg_infer;
    option.per_instance = 1;
    option.name = "cg_infer";

    cp_x0: coverpoint v_x0 { bins min = {-128}; bins neg = {[-127:-1]}; bins zero = {0}; bins pos = {[1:126]}; bins max = {127}; }
    cp_x1: coverpoint v_x1 { bins min = {-128}; bins neg = {[-127:-1]}; bins zero = {0}; bins pos = {[1:126]}; bins max = {127}; }
    cp_x2: coverpoint v_x2 { bins min = {-128}; bins neg = {[-127:-1]}; bins zero = {0}; bins pos = {[1:126]}; bins max = {127}; }
    cp_x3: coverpoint v_x3 { bins min = {-128}; bins neg = {[-127:-1]}; bins zero = {0}; bins pos = {[1:126]}; bins max = {127}; }

    cp_y0: coverpoint v_o0 { bins sat_lo = {0}; bins neg = {1}; bins zero = {2}; bins pos = {3}; bins sat_hi = {4}; }
    cp_y1: coverpoint v_o1 { bins sat_lo = {0}; bins neg = {1}; bins zero = {2}; bins pos = {3}; bins sat_hi = {4}; }
    cp_y2: coverpoint v_o2 { bins sat_lo = {0}; bins neg = {1}; bins zero = {2}; bins pos = {3}; bins sat_hi = {4}; }
    cp_y3: coverpoint v_o3 { bins sat_lo = {0}; bins neg = {1}; bins zero = {2}; bins pos = {3}; bins sat_hi = {4}; }

    cp_shift: coverpoint v_shift { bins s0 = {0}; bins s1 = {1}; bins s2 = {2}; bins s3_7 = {[3:7]}; bins s8_15 = {[8:15]}; }
    cp_leak:  coverpoint v_leak  { bins l[] = {[0:7]}; }
    cx_shift_leak: cross cp_shift, cp_leak;

    cp_class:   coverpoint v_class   iff (v_iris) { bins setosa = {0}; bins versicolor = {1}; bins virginica = {2}; }
    cp_correct: coverpoint v_correct iff (v_iris) { bins right = {1}; bins wrong = {0}; }

    cp_in_wait:  coverpoint v_in_wait  { bins none = {0}; bins one = {1}; bins few = {[2:3]}; bins many = {[4:$]}; }
    cp_out_wait: coverpoint v_out_wait { bins none = {0}; bins one = {1}; bins few = {[2:3]}; bins many = {[4:$]}; }
  endgroup

  covergroup cg_cfg;
    option.per_instance = 1;
    option.name = "cg_cfg";

    cp_addr: coverpoint v_addr {
      bins weight[] = {[0:15]};
      bins bias[]   = {[16:19]};
      bins shift    = {20};
      bins leak     = {21};
      bins unused   = {[22:31]};
    }
    cp_busy:    coverpoint v_busy    { bins idle = {0}; bins busy = {1}; }
    cp_applied: coverpoint v_applied { bins applied = {1}; bins ignored = {0}; }
    cp_with_in: coverpoint v_with_in { bins no_input = {0}; bins input_offered = {1}; }

    cp_kind: coverpoint v_addr {
      bins weight = {[0:15]};
      bins bias   = {[16:19]};
      bins shift  = {20};
      bins leak   = {21};
      bins unused = {[22:31]};
    }
    cx_kind_busy: cross cp_kind, cp_busy;
  endgroup

  covergroup cg_reset;
    option.per_instance = 1;
    option.name = "cg_reset";

    cp_stage:   coverpoint v_stage   { bins idle = {2'b00}; bins stage1 = {2'b10}; bins outreg = {2'b01}; bins both = {2'b11}; }
    cp_stalled: coverpoint v_stalled { bins free = {0}; bins stalled = {1}; }
    cp_aborted: coverpoint v_aborted { bins none = {0}; bins one = {1}; bins several = {[2:$]}; }
    cx_stage_stall: cross cp_stage, cp_stalled {
      ignore_bins no_stall_possible = binsof(cp_stage) intersect {2'b00, 2'b10} && binsof(cp_stalled) intersect {1};
    }
  endgroup

  // ---------------------------------------------------------------------------
  function new(string name, uvm_component parent);
    super.new(name, parent);
    cg_sat_boundary = new();
    cg_infer = new();
    cg_cfg   = new();
    cg_reset = new();
  endfunction

  function int out_class(bit signed [7:0] y);
    if (y == -128) return 0;
    if (y < 0)     return 1;
    if (y == 0)    return 2;
    if (y == 127)  return 4;
    return 3;
endfunction
  
  
  function int signed_value_bin(int value);
    if (value == -128) return 0;
    if (value < 0)     return 1;
    if (value == 0)    return 2;
    if (value == 127)  return 4;
    return 3;
  endfunction

  function int shift_bin(int value);
    if (value == 0) return 0;
    if (value == 1) return 1;
    if (value == 2) return 2;
    if (value <= 7) return 3;
    return 4;
  endfunction

  function int wait_bin(int value);
    if (value == 0) return 0;
    if (value == 1) return 1;
    if (value <= 3) return 2;
    return 3;
  endfunction

  function int stage_bin(bit [1:0] stage);
    case (stage)
      2'b00: return 0;
      2'b10: return 1;
      2'b01: return 2;
      2'b11: return 3;
      default: return 0;
    endcase
  endfunction

  function int config_kind(int addr);
    if (addr >= 0 && addr <= 15) return 0;
    if (addr >= 16 && addr <= 19) return 1;
    if (addr == 20) return 2;
    if (addr == 21) return 3;
    return 4;
  endfunction

  function void write(mlp_verdict t);
    case (t.kind)
      V_INFER: begin
        v_x0 = t.x[0];  v_x1 = t.x[1];  v_x2 = t.x[2];  v_x3 = t.x[3];
        v_o0 = out_class(t.y_act[0]);
        v_o1 = out_class(t.y_act[1]);
        v_o2 = out_class(t.y_act[2]);
        v_o3 = out_class(t.y_act[3]);
        v_shift    = t.shift;
        v_leak     = t.leak;
        v_iris     = t.is_iris;
        v_class    = t.pred_act;
        v_correct  = t.is_iris && (t.pred_act == t.label);
        v_in_wait  = t.in_wait;
        v_out_wait = t.out_wait;
        
        // Input feature coverage
        x_hits[0][signed_value_bin(v_x0)]++;
        x_hits[1][signed_value_bin(v_x1)]++;
        x_hits[2][signed_value_bin(v_x2)]++;
        x_hits[3][signed_value_bin(v_x3)]++;

        // Actual DUT output coverage
        y_hits[0][v_o0]++;
        y_hits[1][v_o1]++;
        y_hits[2][v_o2]++;
        y_hits[3][v_o3]++;

        // Shift and leak-shift coverage
        if (v_shift >= 0 && v_shift <= 15) begin
  shift_hits[shift_bin(v_shift)]++;

  if (v_leak >= 0 && v_leak <= 7) begin
    leak_hits[v_leak]++;
    shift_leak_hits[shift_bin(v_shift)][v_leak]++;
  end
end

        // Iris classification and prediction correctness
        if (v_iris) begin
          if (v_class >= 0 && v_class <= 2)
            class_hits[v_class]++;

          correct_hits[v_correct]++;
        end

        // Handshake wait coverage
        if (v_in_wait >= 0)
  in_wait_hits[wait_bin(v_in_wait)]++;

if (v_out_wait >= 0)
  out_wait_hits[wait_bin(v_out_wait)]++;

        foreach (t.y_act[n]) begin
          if (t.y_act[n] !== t.y_exp[n]) continue;

          if      (t.sat_lo[n])         boundary = CLAMP_LOW;
          else if (t.sat_hi[n])         boundary = CLAMP_HIGH;
          else if (t.y_exp[n] == -128)  boundary = EXACT_LOW;
          else if (t.y_exp[n] ==  127)  boundary = EXACT_HIGH;
          else continue;

          boundary_hits[boundary]++;
          cg_sat_boundary.sample();
        end

        cg_infer.sample();
      end
      V_CFG: begin
        v_addr    = t.addr;
        v_busy    = t.busy;
        v_applied = t.applied;
        v_with_in = t.with_in;
        
        // Configuration address coverage
        if (v_addr >= 0 && v_addr <= 31)
          addr_hits[v_addr]++;

        // Busy/idle and applied/ignored coverage
        busy_hits[int'(v_busy)]++;
        applied_hits[int'(v_applied)]++;
        with_in_hits[int'(v_with_in)]++;

        // Configuration category x busy cross
        if (v_addr >= 0 && v_addr <= 31)
  kind_busy_hits[config_kind(v_addr)][int'(v_busy)]++;

        cg_cfg.sample();
      end
      V_RESET: begin
        v_stage   = t.stage;
        v_stalled = t.stalled;
        v_aborted = t.aborted;
       
        // Pipeline stage coverage
        stage_hits[stage_bin(v_stage)]++;

        // Back-pressure coverage
        stalled_hits[int'(v_stalled)]++;

        // Aborted transaction coverage
        if (v_aborted == 0)
  aborted_hits[0]++;
else if (v_aborted == 1)
  aborted_hits[1]++;
else
  aborted_hits[2]++;

        // Pipeline stage x stalled cross
                if (!((v_stage == 2'b00 || v_stage == 2'b10) && v_stalled))
          stage_stall_hits[stage_bin(v_stage)][int'(v_stalled)]++;

        cg_reset.sample();
      end
    endcase
  endfunction

  
  function void write_cov_row(
    int fd,
    string group_name,
    string coverpoint_name,
    string bin_name,
    int unsigned hits
  );
    $fdisplay(fd, "%s,%s,%s,%0d,%0d",
              group_name, coverpoint_name, bin_name,
              hits, (hits > 0) ? 1 : 0);
  endfunction

  function void report_phase(uvm_phase phase);
    int fd;
    int i, j;

    fd = $fopen("results/coverage_detail.csv", "w");

    if (fd == 0) begin
      `uvm_error("COV", "Could not open results/coverage_detail.csv")
      return;
    end

    $fdisplay(fd, "group,coverpoint,bin,hits,covered");

    // ---------------------------------------------------------
    // INFERENCE COVERAGE
    // ---------------------------------------------------------

    for (i = 0; i < 4; i++) begin
      write_cov_row(fd, "infer", $sformatf("input_x%0d", i), "min", x_hits[i][0]);
      write_cov_row(fd, "infer", $sformatf("input_x%0d", i), "negative", x_hits[i][1]);
      write_cov_row(fd, "infer", $sformatf("input_x%0d", i), "zero", x_hits[i][2]);
      write_cov_row(fd, "infer", $sformatf("input_x%0d", i), "positive", x_hits[i][3]);
      write_cov_row(fd, "infer", $sformatf("input_x%0d", i), "max", x_hits[i][4]);
    end

    for (i = 0; i < 4; i++) begin
      write_cov_row(fd, "infer", $sformatf("output_y%0d", i), "min", y_hits[i][0]);
      write_cov_row(fd, "infer", $sformatf("output_y%0d", i), "negative", y_hits[i][1]);
      write_cov_row(fd, "infer", $sformatf("output_y%0d", i), "zero", y_hits[i][2]);
      write_cov_row(fd, "infer", $sformatf("output_y%0d", i), "positive", y_hits[i][3]);
      write_cov_row(fd, "infer", $sformatf("output_y%0d", i), "max", y_hits[i][4]);
    end

    write_cov_row(fd, "infer", "shift", "s0", shift_hits[0]);
    write_cov_row(fd, "infer", "shift", "s1", shift_hits[1]);
    write_cov_row(fd, "infer", "shift", "s2", shift_hits[2]);
    write_cov_row(fd, "infer", "shift", "s3_7", shift_hits[3]);
    write_cov_row(fd, "infer", "shift", "s8_15", shift_hits[4]);

    for (i = 0; i < 8; i++) begin
      write_cov_row(fd, "infer", "leak_shift", $sformatf("leak_%0d", i), leak_hits[i]);
    end

    for (i = 0; i < 5; i++) begin
      for (j = 0; j < 8; j++) begin
        write_cov_row(fd, "infer", "shift_x_leak",
                      $sformatf("shift%0d_leak%0d", i, j),
                      shift_leak_hits[i][j]);
      end
    end

    write_cov_row(fd, "infer", "iris_class", "setosa", class_hits[0]);
    write_cov_row(fd, "infer", "iris_class", "versicolor", class_hits[1]);
    write_cov_row(fd, "infer", "iris_class", "virginica", class_hits[2]);

    write_cov_row(fd, "infer", "prediction", "wrong", correct_hits[0]);
    write_cov_row(fd, "infer", "prediction", "right", correct_hits[1]);

    write_cov_row(fd, "infer", "input_wait", "none", in_wait_hits[0]);
    write_cov_row(fd, "infer", "input_wait", "one", in_wait_hits[1]);
    write_cov_row(fd, "infer", "input_wait", "few", in_wait_hits[2]);
    write_cov_row(fd, "infer", "input_wait", "many", in_wait_hits[3]);

    write_cov_row(fd, "infer", "output_wait", "none", out_wait_hits[0]);
    write_cov_row(fd, "infer", "output_wait", "one", out_wait_hits[1]);
    write_cov_row(fd, "infer", "output_wait", "few", out_wait_hits[2]);
    write_cov_row(fd, "infer", "output_wait", "many", out_wait_hits[3]);

    // ---------------------------------------------------------
    // CONFIGURATION COVERAGE
    // ---------------------------------------------------------

    for (i = 0; i < 32; i++) begin
      write_cov_row(fd, "config", "address", $sformatf("addr_%0d", i), addr_hits[i]);
    end

    write_cov_row(fd, "config", "busy", "idle", busy_hits[0]);
    write_cov_row(fd, "config", "busy", "busy", busy_hits[1]);

    write_cov_row(fd, "config", "applied", "ignored", applied_hits[0]);
    write_cov_row(fd, "config", "applied", "applied", applied_hits[1]);

    write_cov_row(fd, "config", "with_input", "no_input", with_in_hits[0]);
    write_cov_row(fd, "config", "with_input", "input_offered", with_in_hits[1]);

    for (i = 0; i < 5; i++) begin
      for (j = 0; j < 2; j++) begin
        write_cov_row(fd, "config", "kind_x_busy",
                      $sformatf("kind%0d_busy%0d", i, j),
                      kind_busy_hits[i][j]);
      end
    end

    // ---------------------------------------------------------
    // RESET COVERAGE
    // ---------------------------------------------------------

    write_cov_row(fd, "reset", "pipeline_stage", "idle", stage_hits[0]);
    write_cov_row(fd, "reset", "pipeline_stage", "stage1", stage_hits[1]);
    write_cov_row(fd, "reset", "pipeline_stage", "outreg", stage_hits[2]);
    write_cov_row(fd, "reset", "pipeline_stage", "both", stage_hits[3]);

    write_cov_row(fd, "reset", "stalled", "free", stalled_hits[0]);
    write_cov_row(fd, "reset", "stalled", "stalled", stalled_hits[1]);

    write_cov_row(fd, "reset", "aborted", "none", aborted_hits[0]);
    write_cov_row(fd, "reset", "aborted", "one", aborted_hits[1]);
    write_cov_row(fd, "reset", "aborted", "several", aborted_hits[2]);

    for (i = 0; i < 4; i++) begin
      for (j = 0; j < 2; j++) begin
        if (!((i == 0 || i == 1) && j == 1)) begin
          write_cov_row(fd, "reset", "stage_x_stalled",
                        $sformatf("stage%0d_stalled%0d", i, j),
                        stage_stall_hits[i][j]);
        end
      end
    end

    write_cov_row(fd, "infer", "sat_boundary", "exact_low",  boundary_hits[EXACT_LOW]);
    write_cov_row(fd, "infer", "sat_boundary", "clamp_low",  boundary_hits[CLAMP_LOW]);
    write_cov_row(fd, "infer", "sat_boundary", "exact_high", boundary_hits[EXACT_HIGH]);
    write_cov_row(fd, "infer", "sat_boundary", "clamp_high", boundary_hits[CLAMP_HIGH]);

    $fclose(fd);

    `uvm_info("COV", "Detailed coverage CSV written to results/coverage_detail.csv", UVM_LOW)

    // Original UVM covergroup summary
    `uvm_info("COV", $sformatf(
      "functional coverage: cg_infer %0.2f %%   cg_cfg %0.2f %%   cg_reset %0.2f %%",
      cg_infer.get_inst_coverage(),
      cg_cfg.get_inst_coverage(),
      cg_reset.get_inst_coverage()
    ), UVM_LOW)

  endfunction

endclass
