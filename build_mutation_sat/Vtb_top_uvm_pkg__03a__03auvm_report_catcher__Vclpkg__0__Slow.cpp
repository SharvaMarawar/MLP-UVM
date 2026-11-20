// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

VL_ATTR_COLD void Vtb_top_uvm_pkg__03a__03auvm_report_catcher__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg(Vtb_top_uvm_pkg__03a__03auvm_report_catcher__Vclpkg* vlSelf, VlProcessRef vlProcess) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_report_catcher__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pic23a657c> __PVT__print_catcher__Vstatic__iter;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pic23a657c> __PVT__get_report_catcher__Vstatic__iter;
    ::CData/*0:0*/ __Vfunc_m_register_pair__Vfuncout_1093;
    __Vfunc_m_register_pair__Vfuncout_1093 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_callbacks__pi0a4c0d29__Vclpkg.__VnoInFunc_m_register_pair(vlProcess, vlSymsp, "uvm_report_object"s, "uvm_report_catcher"s, __Vfunc_m_register_pair__Vfuncout_1093);
    vlSelfRef.__PVT__m_register_cb_uvm_report_catcher 
        = __Vfunc_m_register_pair__Vfuncout_1093;
    __PVT__print_catcher__Vstatic__iter = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pic23a657c, vlProcess, vlSymsp, VlNull{});
    vlSelfRef.__PVT__process_all_report_catchers__Vstatic__in_catcher = 0U;
    __PVT__get_report_catcher__Vstatic__iter = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pic23a657c, vlProcess, vlSymsp, VlNull{});
}

VL_ATTR_COLD void Vtb_top_uvm_pkg__03a__03auvm_report_catcher__Vclpkg___ctor_var_reset(Vtb_top_uvm_pkg__03a__03auvm_report_catcher__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_report_catcher__Vclpkg___ctor_var_reset\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__m_set_action_called = 0;
    vlSelf->__PVT__m_demoted_fatal = 0;
    vlSelf->__PVT__m_demoted_error = 0;
    vlSelf->__PVT__m_demoted_warning = 0;
    vlSelf->__PVT__m_caught_fatal = 0;
    vlSelf->__PVT__m_caught_error = 0;
    vlSelf->__PVT__m_caught_warning = 0;
    vlSelf->__PVT__m_debug_flags = 0;
    vlSelf->__PVT__do_report = 0;
}
