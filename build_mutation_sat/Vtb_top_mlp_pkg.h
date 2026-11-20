// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_MLP_PKG_H_
#define VERILATED_VTB_TOP_MLP_PKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_mlp_pkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_mlp_pkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_mlp_pkg();
    VL_UNCOPYABLE(Vtb_top_mlp_pkg);
    VL_UNMOVABLE(Vtb_top_mlp_pkg);

    // INTERNAL METHODS
};


#endif  // guard
