// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

VL_ATTR_COLD void Vtb_top_uvm_pkg__03a__03auvm_registry_common__pid592f3e1__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_registry_common__pid592f3e1__Vclpkg(Vtb_top_uvm_pkg__03a__03auvm_registry_common__pid592f3e1__Vclpkg* vlSelf, VlProcessRef vlProcess) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_registry_common__pid592f3e1__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_registry_common__pid592f3e1__Vclpkg\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __Vfunc____05Fdeferred_init__Vfuncout_372;
    __Vfunc____05Fdeferred_init__Vfuncout_372 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    vlSelfRef.__VnoInFunc____05Fdeferred_init(vlProcess, vlSymsp, __Vfunc____05Fdeferred_init__Vfuncout_372);
    vlSelfRef.__PVT__m___05Finitialized = __Vfunc____05Fdeferred_init__Vfuncout_372;
}

VL_ATTR_COLD void Vtb_top_uvm_pkg__03a__03auvm_registry_common__pid592f3e1__Vclpkg___ctor_var_reset(Vtb_top_uvm_pkg__03a__03auvm_registry_common__pid592f3e1__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_registry_common__pid592f3e1__Vclpkg___ctor_var_reset\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
}
