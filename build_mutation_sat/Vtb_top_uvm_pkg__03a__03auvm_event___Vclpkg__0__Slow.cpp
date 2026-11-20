// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

VL_ATTR_COLD void Vtb_top_uvm_pkg__03a__03auvm_event___Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_event___Vclpkg(Vtb_top_uvm_pkg__03a__03auvm_event___Vclpkg* vlSelf, VlProcessRef vlProcess) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_event___Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_event___Vclpkg\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __Vfunc_m_register_cb__Vfuncout_997;
    __Vfunc_m_register_cb__Vfuncout_997 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    vlSelfRef.__VnoInFunc_m_register_cb(vlProcess, vlSymsp, __Vfunc_m_register_cb__Vfuncout_997);
    vlSelfRef.__PVT__m_cb_registered = __Vfunc_m_register_cb__Vfuncout_997;
}
