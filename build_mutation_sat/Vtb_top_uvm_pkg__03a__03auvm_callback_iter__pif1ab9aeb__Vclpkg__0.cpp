// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pif1ab9aeb::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg> obj) {
    Vtb_top_uvm_pkg__03a__03auvm_void::init(vlProcess, vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pif1ab9aeb::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__m_obj = obj;
}

void Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pif1ab9aeb::__VnoInFunc_first(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_cbs> &first__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pif1ab9aeb::__VnoInFunc_first\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_cbs> __Vfunc_get_first__Vfuncout_951;
    // Body
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_callbacks__pif2d69877__Vclpkg.__VnoInFunc_get_first(vlProcess, vlSymsp, this->__PVT__m_i, this->__PVT__m_obj, __Vfunc_get_first__Vfuncout_951);
    this->__PVT__m_cb = __Vfunc_get_first__Vfuncout_951;
    first__Vfuncrtn = this->__PVT__m_cb;
}

void Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pif1ab9aeb::__VnoInFunc_next(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_cbs> &next__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pif1ab9aeb::__VnoInFunc_next\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_cbs> __Vfunc_get_next__Vfuncout_952;
    // Body
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_callbacks__pif2d69877__Vclpkg.__VnoInFunc_get_next(vlProcess, vlSymsp, this->__PVT__m_i, this->__PVT__m_obj, __Vfunc_get_next__Vfuncout_952);
    this->__PVT__m_cb = __Vfunc_get_next__Vfuncout_952;
    next__Vfuncrtn = this->__PVT__m_cb;
}

void Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pif1ab9aeb::__VnoInFunc_get_cb(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_cbs> &get_cb__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pif1ab9aeb::__VnoInFunc_get_cb\n"); );
    // Body
    get_cb__Vfuncrtn = this->__PVT__m_cb;
}

void Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pif1ab9aeb::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pif1ab9aeb::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_i = 0;
}

Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pif1ab9aeb::~Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pif1ab9aeb() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pif1ab9aeb::~\n"); );
}
