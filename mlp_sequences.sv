// -----------------------------------------------------------------------------
// mlp_sequences.sv : the stimulus.  One base sequence with small building
// blocks, then one sequence per test (the counterpart of the 8 sequences in
// the lab guide, plus two for the MLP's extra interfaces: config port, stall).
//
// Every sequence ends with "out_ready = 1, drain": the pipeline is empty when
// the test finishes, so the scoreboard can flag any lost output.
// -----------------------------------------------------------------------------

class mlp_base_seq extends uvm_sequence #(mlp_item);
  `uvm_object_utils(mlp_base_seq)

  mlp_env_cfg cfg;                       // set by the test before start()

  function new(string name = "mlp_base_seq");
    super.new(name);
  endfunction

  // ---- building blocks -------------------------------------------------------
  task send_infer(bit [31:0] xp, int g = 0);
    mlp_item it = mlp_item::type_id::create("infer");
    start_item(it);
    it.op = OP_INFER;  it.set_xp(xp);  it.gap = g;
    finish_item(it);
  endtask

  task send_cfg(int a, int d, int g = 0, bit busy_ok = 0, bit coll = 0);
    mlp_item it = mlp_item::type_id::create("cfg");
    start_item(it);
    it.op = OP_CFG;  it.addr = a[4:0];  it.data = d[7:0];
    it.gap = g;  it.while_busy = busy_ok;  it.collide = coll;
    finish_item(it);
  endtask

  task send_ready(int pct, int hold = 0);
    mlp_item it = mlp_item::type_id::create("ready");
    start_item(it);
    it.op = OP_READY;  it.ready_pct = pct;  it.hold = hold;
    finish_item(it);
  endtask

  task send_reset(mlp_rst_when_e w, int hold = 2, int g = 0);
    mlp_item it = mlp_item::type_id::create("reset");
    start_item(it);
    it.op = OP_RESET;  it.rst_when = w;  it.rst_hold = hold;  it.gap = g;
    finish_item(it);
  endtask

  task send_drain();
    mlp_item it = mlp_item::type_id::create("drain");
    start_item(it);
    it.op = OP_DRAIN;
    finish_item(it);
  endtask

  // Write a whole dataset config (22 writes) - waits for idle before each one
  task load_cfg(mlp_dataset ds);
    foreach (ds.cfg_addr[i]) send_cfg(ds.cfg_addr[i], ds.cfg_data[i]);
  endtask

  // ---- helpers ---------------------------------------------------------------
  function int rnd_gap();                       // mostly back-to-back, sometimes idle
    return ($urandom_range(99) < 70) ? 0 : $urandom_range(4, 1);
  endfunction

  function int rnd_i8();                        // full-range int8
    return int'($urandom_range(255)) - 128;
  endfunction

  // mode 0: full range, mode 1: sparse (80 % zeros, rest random)
  function bit [31:0] rnd_xp(int mode = 0);
    int v[N_IN];
    foreach (v[i]) v[i] = (mode == 1 && $urandom_range(99) < 80) ? 0 : rnd_i8();
    return pack_x(v[0], v[1], v[2], v[3]);
  endfunction

  // Random config: 16 weights, 4 biases, shift, leak_shift.  Half the time the
  // weights are small so the outputs are not always saturated.
  task send_rand_cfg();
    bit small_w = $urandom_range(1);
    for (int a = 0; a < 16; a++)
      send_cfg(a, small_w ? int'($urandom_range(32)) - 16 : rnd_i8());
    for (int a = 16; a < 20; a++)
      send_cfg(a, rnd_i8());
    send_cfg(20, $urandom_range(small_w ? 6 : 12));
    send_cfg(21, $urandom_range(7));
  endtask

  // ---- body: subclasses override run_seq() -------------------------------------
  virtual task run_seq();
  endtask

  virtual task body();
    run_seq();
    send_ready(100);
    send_drain();
  endtask
endclass

// =============================================================================
// 1. mlp_iris_seq : Iris config, then the 255 test-set vectors (the application)
// =============================================================================
class mlp_iris_seq extends mlp_base_seq;
  `uvm_object_utils(mlp_iris_seq)
  function new(string name = "mlp_iris_seq"); super.new(name); endfunction

  virtual task run_seq();
    load_cfg(cfg.iris_ds);
    for (int i = 0; i < cfg.iris_ds.test_n; i++)
      send_infer(cfg.iris_ds.xp[i], rnd_gap());
  endtask
endclass

// =============================================================================
// 2. mlp_single_seq : one Iris vector, chosen with IMG_IDX (0 .. 1199)
// =============================================================================
class mlp_single_seq extends mlp_base_seq;
  `uvm_object_utils(mlp_single_seq)
  function new(string name = "mlp_single_seq"); super.new(name); endfunction

  virtual task run_seq();
    int idx = cfg.img_idx;
    if (idx >= cfg.iris_ds.size()) begin
      `uvm_warning("SINGLE", $sformatf("IMG_IDX=%0d out of range, using %0d", idx, idx % cfg.iris_ds.size()))
      idx = idx % cfg.iris_ds.size();
    end
    load_cfg(cfg.iris_ds);
    send_infer(cfg.iris_ds.xp[idx]);
  endtask
endclass

// =============================================================================
// 3. mlp_random_seq : random config + random full-range vectors + random
//    back-pressure.  Three rounds, so the config changes mid-test.
// =============================================================================
class mlp_random_seq extends mlp_base_seq;
  `uvm_object_utils(mlp_random_seq)
  function new(string name = "mlp_random_seq"); super.new(name); endfunction

  virtual task run_seq();
    int pcts[3] = '{100, 70, 30};
    int per_round = (cfg.num_items + 2) / 3;
    for (int r = 0; r < 3; r++) begin
      send_ready(100);
      send_rand_cfg();
      send_ready(pcts[r]);
      for (int k = 0; k < per_round; k++)
        send_infer(rnd_xp(0), rnd_gap());
    end
  endtask
endclass

// =============================================================================
// 4. mlp_sparse_seq : mostly-zero inputs (80 %), Iris config - the output is
//    then driven mainly by the biases.
// =============================================================================
class mlp_sparse_seq extends mlp_base_seq;
  `uvm_object_utils(mlp_sparse_seq)
  function new(string name = "mlp_sparse_seq"); super.new(name); endfunction

  virtual task run_seq();
    load_cfg(cfg.iris_ds);
    for (int k = 0; k < cfg.num_items; k++)
      send_infer(rnd_xp(1), rnd_gap());
  endtask
endclass

// =============================================================================
// 5. mlp_corner_seq : directed corner cases (the lab's "black, white, zero,
//    checkerboard, stripes, single pixel" for a 4-input layer)
// =============================================================================
class mlp_corner_seq extends mlp_base_seq;
  `uvm_object_utils(mlp_corner_seq)
  function new(string name = "mlp_corner_seq"); super.new(name); endfunction

  task corner_vectors();
    send_infer(pack_x(   0,    0,    0,    0));   // all zero
    send_infer(pack_x( 127,  127,  127,  127));   // all max
    send_infer(pack_x(-128, -128, -128, -128));   // all min
    send_infer(pack_x( 127, -128,  127, -128));   // alternating
    send_infer(pack_x(-128,  127, -128,  127));   // alternating, other phase
    for (int i = 0; i < N_IN; i++) begin          // one-hot, +max and -min
      int v[N_IN] = '{0, 0, 0, 0};
      v[i] = 127;   send_infer(pack_x(v[0], v[1], v[2], v[3]));
      v[i] = -128;  send_infer(pack_x(v[0], v[1], v[2], v[3]));
    end
    send_infer(pack_x(   1,   -1,    1,   -1));   // tiny
    send_infer(pack_x(  -1,   -1,   -1,   -1));   // all -1 (floor-shift trap: -1 >>> n = -1)
  endtask

  task set_all(int wv, int bv, int sh, int lk);
    for (int a = 0; a < 16; a++) send_cfg(a, wv);
    for (int a = 16; a < 20; a++) send_cfg(a, bv);
    send_cfg(20, sh);
    send_cfg(21, lk);
  endtask

  virtual task run_seq();
    // A) Iris config
    load_cfg(cfg.iris_ds);
    corner_vectors();
    // B) every weight and bias at an extreme, no shift, identity activation
    set_all(-128, -128, 0, 0);   corner_vectors();
    set_all( 127,  127, 0, 0);   corner_vectors();
    // C) maximum shifts: results collapse to 0 / -1
    set_all( 127, -128, 15, 7);  corner_vectors();
    set_all(-128,  127, 15, 0);  corner_vectors();
    // D) weights alternate in sign, steepest leak
    for (int a = 0; a < 16; a++) send_cfg(a, (a % 2) ? -100 : 100);
    for (int a = 16; a < 20; a++) send_cfg(a, 0);
    send_cfg(20, 1);  send_cfg(21, 0);
    corner_vectors();
  endtask
endclass

// =============================================================================
// 6. mlp_sat_seq : the vectors in data/sat_vectors.txt drive an output to
//    +127 or -128 (clamp).  The Iris data never does - see the README.
// =============================================================================
class mlp_sat_seq extends mlp_base_seq;
  `uvm_object_utils(mlp_sat_seq)
  function new(string name = "mlp_sat_seq"); super.new(name); endfunction

  virtual task run_seq();
    load_cfg(cfg.sat_ds);
    foreach (cfg.sat_ds.xp[i]) send_infer(cfg.sat_ds.xp[i], rnd_gap());
    // same vectors again with the identity activation (leak_shift = 0) and no output shift
    send_cfg(20, 0);
    send_cfg(21, 0);
    foreach (cfg.sat_ds.xp[i]) send_infer(cfg.sat_ds.xp[i]);
  endtask
endclass

// =============================================================================
// 7. mlp_reset_seq : reset while the pipeline is in each state, with and
//    without back-pressure; after every reset check the reset defaults and
//    that a freshly loaded config works.
// =============================================================================
class mlp_reset_seq extends mlp_base_seq;
  `uvm_object_utils(mlp_reset_seq)
  function new(string name = "mlp_reset_seq"); super.new(name); endfunction

  // After a reset the weights are 0, bias 0, shift 0, leak_shift 3.
  task recover();
    send_ready(100);
    send_cfg(16, -64);                        // bias[0] = -64, weights still 0
    send_infer(pack_x(0, 0, 0, 0));           // y0 must be -64 >>> 3 = -8   (default leak_shift)
    send_infer(rnd_xp(0));                    // weights are 0: output is the bias only
    send_drain();
    load_cfg(cfg.iris_ds);                    // reload the real config...
    for (int i = 0; i < 5; i++)               // ... and run a few vectors
      send_infer(cfg.iris_ds.xp[i * 7]);
    send_drain();
  endtask

  task one_case(mlp_rst_when_e w, int pct, int n_in, int hold = 2);
    load_cfg(cfg.iris_ds);
    send_ready(pct, (pct == 0) ? 30 : 0);
    for (int i = 0; i < n_in; i++) send_infer(cfg.iris_ds.xp[i]);
    send_reset(w, hold);
    recover();
  endtask

  virtual task run_seq();
    one_case(RST_IDLE, 100, 0);               // reset in an idle pipe
    one_case(RST_S1,   100, 1);               // sample in stage 1
    one_case(RST_OUT,  100, 1);               // sample in the output register (being accepted)
    one_case(RST_OUT,    0, 1);               // ... held there by back-pressure
    one_case(RST_BOTH,   0, 2);               // both stages full, output stalled
    one_case(RST_BOTH, 100, 4);               // both stages full while streaming (no stall)
    // reset in the middle of a busy burst, random stage
    load_cfg(cfg.iris_ds);
    send_ready(50);
    for (int i = 0; i < 6; i++) send_infer(cfg.iris_ds.xp[10 + i]);
    send_reset(RST_ANY, 3, 1);
    recover();
    // two resets in a row, the second one very short
    send_reset(RST_ANY, 1);
    send_reset(RST_ANY, 1);
    recover();
  endtask
endclass

// =============================================================================
// 8. mlp_cfg_seq : the config port (not in the CNN lab): every shift x
//    leak_shift, unused addresses, writes while busy, write bursts, a write
//    colliding with an input.
// =============================================================================
class mlp_cfg_seq extends mlp_base_seq;
  `uvm_object_utils(mlp_cfg_seq)
  function new(string name = "mlp_cfg_seq"); super.new(name); endfunction

  virtual task run_seq();
    // 1. all 16 x 8 shift / leak_shift combinations
    load_cfg(cfg.iris_ds);
    for (int s = 0; s < 16; s++)
      for (int l = 0; l < 8; l++) begin
        send_cfg(20, s);
        send_cfg(21, l);
        send_infer(cfg.iris_ds.xp[(s * 8 + l) % cfg.iris_ds.size()]);
        send_infer(rnd_xp(0));
      end

    // 2. unused addresses 22..31 must be ignored
    load_cfg(cfg.iris_ds);
    for (int a = 22; a < 32; a++) send_cfg(a, rnd_i8());
    send_infer(cfg.iris_ds.xp[3]);
    send_drain();

    // 3. writes while the pipeline holds data are ignored (output stalled)
    send_ready(0, 14);
    send_infer(cfg.iris_ds.xp[5]);
    send_cfg(0,  100, 0, 1);
    send_cfg(16,  50, 0, 1);
    send_cfg(20,   7, 0, 1);
    send_cfg(21,   0, 0, 1);
    send_cfg(25,  42, 0, 1);                  // unused address, also while busy
    send_ready(100);
    send_drain();
    send_infer(cfg.iris_ds.xp[5]);            // still the Iris answer
    send_drain();

    // 4. the boundary: three back-to-back writes right after an input;
    //    #1 sees stage 1, #2 sees the output register, #3 sees idle -> only #3 lands
    send_infer(cfg.iris_ds.xp[9]);
    send_cfg(17, 11, 0, 1);
    send_cfg(17, 22, 0, 1);
    send_cfg(17, 33, 0, 1);
    send_drain();
    send_infer(cfg.iris_ds.xp[9]);
    send_drain();

    // 5. a burst of writes into an idle DUT, one per cycle
    for (int a = 0; a < 22; a++)
      send_cfg(a, (a < 20) ? rnd_i8() : (a == 20 ? 2 : 3), 0, 1);
    send_infer(rnd_xp(0));
    send_drain();

    // 6. an input is offered in the same cycle as a write: in_ready must be low,
    //    the sample is not accepted, the write is applied
    send_cfg(1, 5, 0, 0, 1);
    send_cfg(16, -3, 0, 0, 1);
    send_infer(rnd_xp(0));
    send_drain();

    // 7. the same collision while the DUT is busy (write ignored, input also refused)
    send_ready(0, 10);
    send_infer(rnd_xp(0));
    send_cfg(2, 9, 0, 1, 1);
    send_ready(100);
    send_drain();

    // 8. random config, a few vectors
    for (int r = 0; r < 4; r++) begin
      send_rand_cfg();
      for (int k = 0; k < 4; k++) send_infer(rnd_xp(0));
    end
  endtask
endclass

// =============================================================================
// 9. mlp_stall_seq : back-pressure on the output (not in the CNN lab)
// =============================================================================
class mlp_stall_seq extends mlp_base_seq;
  `uvm_object_utils(mlp_stall_seq)
  function new(string name = "mlp_stall_seq"); super.new(name); endfunction

  virtual task run_seq();
    int holds[6] = '{1, 2, 3, 5, 8, 20};
    load_cfg(cfg.iris_ds);
    // output blocked for N cycles, then a back-to-back burst that has to queue up
    foreach (holds[h]) begin
      send_ready(0, holds[h]);
      for (int k = 0; k < 6; k++) send_infer(cfg.iris_ds.xp[h * 6 + k]);
      send_drain();
    end
    // random back-pressure
    send_ready(50);
    for (int k = 0; k < 40; k++) send_infer(cfg.iris_ds.xp[40 + k]);
    send_ready(20);
    for (int k = 0; k < 20; k++) send_infer(cfg.iris_ds.xp[80 + k]);
    send_ready(90);
    for (int k = 0; k < 20; k++) send_infer(cfg.iris_ds.xp[100 + k], rnd_gap());
  endtask
endclass

// =============================================================================
// 10. mlp_regress_seq : everything above in one run
// =============================================================================
class mlp_regress_seq extends mlp_base_seq;
  `uvm_object_utils(mlp_regress_seq)
  function new(string name = "mlp_regress_seq"); super.new(name); endfunction

  task run_one(mlp_base_seq s);
    s.cfg = cfg;
    s.start(m_sequencer, this);
  endtask

  virtual task run_seq();
    mlp_iris_seq   s1 = mlp_iris_seq  ::type_id::create("iris");
    mlp_single_seq s2 = mlp_single_seq::type_id::create("single");
    mlp_random_seq s3 = mlp_random_seq::type_id::create("random");
    mlp_sparse_seq s4 = mlp_sparse_seq::type_id::create("sparse");
    mlp_corner_seq s5 = mlp_corner_seq::type_id::create("corner");
    mlp_sat_seq    s6 = mlp_sat_seq   ::type_id::create("sat");
    mlp_reset_seq  s7 = mlp_reset_seq ::type_id::create("reset");
    mlp_cfg_seq    s8 = mlp_cfg_seq   ::type_id::create("cfg_seq");
    mlp_stall_seq  s9 = mlp_stall_seq ::type_id::create("stall");
    run_one(s1);  run_one(s2);  run_one(s3);  run_one(s4);  run_one(s5);
    run_one(s6);  run_one(s7);  run_one(s8);  run_one(s9);
  endtask
endclass
