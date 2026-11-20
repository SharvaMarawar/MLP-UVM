// -----------------------------------------------------------------------------
// mlp_layer.sv : tiny fully-connected layer (4 inputs x 4 neurons), int8,
//                Leaky ReLU activation
//
//   z[n] = (bias[n] + sum_i W[n][i] * x[i]) >>> shift          (requantize)
//   a[n] = (z[n] >= 0) ? z[n] : (z[n] >>> leak_shift)          (Leaky ReLU)
//   y[n] = sat_int8(a[n])                                      (-128..127)
//
//   Leaky slope alpha = 2^-leak_shift  (shift 3 -> alpha = 1/8, default).
//   leak_shift = 0 gives alpha = 1, i.e. the activation becomes the identity.
//   Both shifts are ARITHMETIC (floor) shifts, so e.g. -1 >>> 3 = -1, not 0.
//   The reference model in the testbench must use the same rounding.
//
// Data buses (packed, each element is a signed int8):
//   in_data  = {x3, x2, x1, x0}   ->  x[i] = in_data [8*i +: 8]
//   out_data = {y3, y2, y1, y0}   ->  y[n] = out_data[8*n +: 8]
//
// Pipeline (2 stages, valid/ready handshakes on both sides):
//   Stage 1 : 4 parallel dot products + bias  -> 20-bit accumulators
//   Stage 2 : shift, Leaky ReLU, saturate to int8 -> output reg
//
// Config / weight load port (single write port, no ready):
//   addr  0..15 : weight W[n][i], addr = {n[1:0], i[1:0]}   (int8)
//   addr 16..19 : bias[n], n = addr[1:0]                    (int8)
//   addr 20     : output shift, uses wr_data[3:0]           (0..15)
//   addr 21     : leak shift,   uses wr_data[2:0]           (0..7), reset = 3
//   other addrs : ignored
//   Writes are IGNORED while busy = 1 (any data in flight), and in_ready is
//   held low in a cycle where wr_en = 1. Load config only when busy = 0.
//
// Latency: 2 cycles from accepted input to out_valid (if no back-pressure).
// Reset  : asynchronous, active low. Weights, bias, shift reset to 0;
//          leak_shift resets to 3.
// -----------------------------------------------------------------------------
module mlp_layer (
  input  logic                clk,
  input  logic                rst_n,

  // weight / bias / shift load port
  input  logic                wr_en,
  input  logic [4:0]          wr_addr,
  input  logic signed [7:0]   wr_data,

  // input stream
  input  logic                in_valid,
  output logic                in_ready,
  input  logic [31:0]         in_data,    // {x3,x2,x1,x0}, signed int8 each

  // output stream
  output logic                out_valid,
  input  logic                out_ready,
  output logic [31:0]         out_data,   // {y3,y2,y1,y0}, signed int8 each

  // status
  output logic                busy
);

  localparam int N     = 4;    // inputs and neurons
  localparam int ACC_W = 20;   // 16-bit products, +2 bits for 4-term sum, +bias, margin

  // ---------------------------------------------------------------------------
  // Configuration registers
  // ---------------------------------------------------------------------------
  logic signed [7:0] weight [N][N];   // weight[neuron][input]
  logic signed [7:0] bias   [N];
  logic        [3:0] shift_r;
  logic        [2:0] leak_shift_r;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      for (int n = 0; n < N; n++) begin
        bias[n] <= '0;
        for (int i = 0; i < N; i++) weight[n][i] <= '0;
      end
      shift_r      <= '0;
      leak_shift_r <= 3'd3;
    end else if (wr_en && !busy) begin
      if (wr_addr < 5'd16)            weight[wr_addr[3:2]][wr_addr[1:0]] <= wr_data;
      else if (wr_addr < 5'd20)       bias[wr_addr[1:0]]                 <= wr_data;
      else if (wr_addr == 5'd20)      shift_r                            <= wr_data[3:0];
      else if (wr_addr == 5'd21)      leak_shift_r                       <= wr_data[2:0];
    end
  end

  // ---------------------------------------------------------------------------
  // Handshake / pipeline control
  // ---------------------------------------------------------------------------
  logic s1_valid;

  wire s2_ready = !out_valid || out_ready;   // stage 2 can take new data
  wire s1_ready = !s1_valid  || s2_ready;    // stage 1 can take new data

  assign in_ready = s1_ready && !wr_en;
  assign busy     = s1_valid || out_valid;

  wire in_fire = in_valid && in_ready;

  // ---------------------------------------------------------------------------
  // Stage 1 : dot product + bias
  // ---------------------------------------------------------------------------
  logic signed [ACC_W-1:0] acc_comb [N];
  logic signed [ACC_W-1:0] s1_acc   [N];

  always_comb begin
    for (int n = 0; n < N; n++) begin
      logic signed [ACC_W-1:0] sum;
      sum = ACC_W'(bias[n]);
      for (int i = 0; i < N; i++)
        sum = sum + ACC_W'(weight[n][i]) * ACC_W'($signed(in_data[8*i +: 8]));
      acc_comb[n] = sum;
    end
  end

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      s1_valid <= 1'b0;
      for (int n = 0; n < N; n++) s1_acc[n] <= '0;
    end else if (s1_ready) begin
      s1_valid <= in_fire;
      if (in_fire)
        for (int n = 0; n < N; n++) s1_acc[n] <= acc_comb[n];
    end
  end

  // ---------------------------------------------------------------------------
  // Stage 2 : shift, Leaky ReLU, saturate
  // ---------------------------------------------------------------------------
  function automatic logic signed [7:0] requant(
    input logic signed [ACC_W-1:0] a,
    input logic        [3:0]       sh,
    input logic        [2:0]       leak_sh
  );
    logic signed [ACC_W-1:0] s;
    s = a >>> sh;                           // requantize (arithmetic shift)
    if (s < 0) s = s >>> leak_sh;           // Leaky ReLU: scale negatives by 2^-leak_sh
    if (s > 127)       return 8'sd127;      // saturate high
    else if (s < -128) return -8'sd128;     // saturate low
    else               return s[7:0];
  endfunction

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      out_valid <= 1'b0;
      out_data  <= '0;
    end else if (s2_ready) begin
      out_valid <= s1_valid;
      if (s1_valid)
        for (int n = 0; n < N; n++)
          out_data[8*n +: 8] <= requant(s1_acc[n], shift_r, leak_shift_r);
    end
  end

endmodule
