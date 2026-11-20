// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

VL_ATTR_COLD void Vtb_top_mlp_pkg__03a__03amlp_coverage__02e__vlAnonCG_cg_infer__Vclpkg___ctor_var_reset(Vtb_top_mlp_pkg__03a__03amlp_coverage__02e__vlAnonCG_cg_infer__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_mlp_pkg__03a__03amlp_coverage__02e__vlAnonCG_cg_infer__Vclpkg___ctor_var_reset\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT____Vint = 0;
    vlSelf->__Vnontrivs.__PVT__type_option.__PVT__weight = 1U;
    ;
    vlSelf->__Vnontrivs.__PVT__type_option.__PVT__goal = 0;
    vlSelf->__Vnontrivs.__PVT__type_option.__PVT__strobe = 0;
    vlSelf->__Vnontrivs.__PVT__type_option.__PVT__merge_instances = 0;
    vlSelf->__Vnontrivs.__PVT__type_option.__PVT__distribute_first = 0;
    vlSelf->__Vnontrivs.__PVT__type_option.__PVT__real_interval = 0;
}
