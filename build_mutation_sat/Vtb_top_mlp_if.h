// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_MLP_IF_H_
#define VERILATED_VTB_TOP_MLP_IF_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_mlp_if final {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*0:0*/ clk;
    ::CData/*0:0*/ rst_n;
    ::CData/*0:0*/ wr_en;
    ::CData/*4:0*/ wr_addr;
    ::CData/*7:0*/ wr_data;
    ::CData/*0:0*/ in_valid;
    ::CData/*0:0*/ out_ready;
    ::CData/*0:0*/ in_ready;
    ::CData/*0:0*/ out_valid;
    ::CData/*0:0*/ busy;
    ::CData/*1:0*/ dbg_stage;
    ::CData/*0:0*/ __Vnfa___0__s2;
    ::CData/*1:0*/ __Vnfa___1__d2_ring;
    ::CData/*0:0*/ __Vnfa___1__d2_head;
    ::CData/*0:0*/ __Vnfa___1__d2_wrapped;
    ::CData/*0:0*/ _Vpast_8_1;
    ::CData/*0:0*/ __Vdly____Vnfa___0__s2_9;
    ::CData/*0:0*/ __Vdly____Vnfa___1__d2_wrapped_12;
    ::CData/*0:0*/ __Vdly____Vnfa___1__d2_head_14;
    ::CData/*0:0*/ __Vdly___Vpast_8_1_17;
    ::CData/*0:0*/ __Vsampled_rst_n_0;
    ::CData/*0:0*/ __Vsampled_out_valid_1;
    ::CData/*0:0*/ __Vsampled_wr_en_3;
    ::CData/*0:0*/ __Vsampled_in_ready_4;
    ::CData/*0:0*/ __Vsampled_busy_5;
    ::CData/*0:0*/ __Vsampled_out_ready_6;
    ::CData/*0:0*/ __Vsampled_in_valid_7;
    ::IData/*31:0*/ in_data;
    ::IData/*31:0*/ out_data;
    ::IData/*31:0*/ __PVT__assert_errors;
    ::IData/*31:0*/ __Vnfa___0__kill;
    ::IData/*31:0*/ __Vnfa___1__kill;
    ::IData/*31:0*/ __Vnfa___1__d2_idx;
    ::IData/*31:0*/ __Vnfa___1__d2_liveCount;
    ::IData/*31:0*/ _Vpast_1_1;
    ::IData/*31:0*/ __Vdly____Vnfa___0__kill_10;
    ::IData/*31:0*/ __Vdly____Vnfa___1__d2_liveCount_11;
    ::IData/*31:0*/ __Vdly____Vnfa___1__d2_idx_13;
    ::IData/*31:0*/ __Vdly____Vnfa___1__kill_15;
    ::IData/*31:0*/ __Vdly___Vpast_1_1_16;
    ::IData/*31:0*/ __Vsampled_out_data_2;

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_mlp_if(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_mlp_if();
    VL_UNCOPYABLE(Vtb_top_mlp_if);
    VL_UNMOVABLE(Vtb_top_mlp_if);

    // INTERNAL METHODS
};

std::string VL_TO_STRING(const Vtb_top_mlp_if* obj);

#endif  // guard
