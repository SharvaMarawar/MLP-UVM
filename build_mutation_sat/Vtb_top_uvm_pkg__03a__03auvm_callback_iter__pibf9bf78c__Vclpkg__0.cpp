// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pibf9bf78c::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_vreg> obj) {
    Vtb_top_uvm_pkg__03a__03auvm_void::init(vlProcess, vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pibf9bf78c::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__m_obj = obj;
}

void Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pibf9bf78c::__VnoInFunc_first(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_vreg_cbs> &first__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pibf9bf78c::__VnoInFunc_first\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_vreg_cbs> __Vfunc_get_first__Vfuncout_993;
    // Body
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_callbacks__pidd63f26d__Vclpkg.__VnoInFunc_get_first(vlSymsp, this->__PVT__m_i, this->__PVT__m_obj, __Vfunc_get_first__Vfuncout_993);
    this->__PVT__m_cb = __Vfunc_get_first__Vfuncout_993;
    first__Vfuncrtn = this->__PVT__m_cb;
}

void Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pibf9bf78c::__VnoInFunc_next(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_vreg_cbs> &next__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pibf9bf78c::__VnoInFunc_next\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_vreg_cbs> __Vfunc_get_next__Vfuncout_994;
    // Body
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_callbacks__pidd63f26d__Vclpkg.__VnoInFunc_get_next(vlSymsp, this->__PVT__m_i, this->__PVT__m_obj, __Vfunc_get_next__Vfuncout_994);
    this->__PVT__m_cb = __Vfunc_get_next__Vfuncout_994;
    next__Vfuncrtn = this->__PVT__m_cb;
}

void Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pibf9bf78c::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pibf9bf78c::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_i = 0;
}

Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pibf9bf78c::~Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pibf9bf78c() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pibf9bf78c::~\n"); );
}
