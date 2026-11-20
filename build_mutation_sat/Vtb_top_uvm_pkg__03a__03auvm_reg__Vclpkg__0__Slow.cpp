// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

VL_ATTR_COLD void Vtb_top_uvm_pkg__03a__03auvm_reg__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_reg__Vclpkg(Vtb_top_uvm_pkg__03a__03auvm_reg__Vclpkg* vlSelf, VlProcessRef vlProcess) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_reg__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_reg__Vclpkg\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __Vfunc_m_register_pair__Vfuncout_1716;
    __Vfunc_m_register_pair__Vfuncout_1716 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_callbacks__pif2d69877__Vclpkg.__VnoInFunc_m_register_pair(vlProcess, vlSymsp, "uvm_reg"s, "uvm_reg_cbs"s, __Vfunc_m_register_pair__Vfuncout_1716);
    vlSelfRef.__PVT__m_register_cb_uvm_reg_cbs = __Vfunc_m_register_pair__Vfuncout_1716;
}

VL_ATTR_COLD void Vtb_top_uvm_pkg__03a__03auvm_reg__Vclpkg___ctor_var_reset(Vtb_top_uvm_pkg__03a__03auvm_reg__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_reg__Vclpkg___ctor_var_reset\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__m_max_size = 0;
}
