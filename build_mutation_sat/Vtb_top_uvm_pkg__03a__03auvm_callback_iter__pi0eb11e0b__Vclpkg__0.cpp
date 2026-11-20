// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pi0eb11e0b::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> obj) {
    Vtb_top_uvm_pkg__03a__03auvm_void::init(vlProcess, vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pi0eb11e0b::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__m_obj = obj;
}

void Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pi0eb11e0b::__VnoInFunc_first(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase_cb> &first__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pi0eb11e0b::__VnoInFunc_first\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase_cb> __Vfunc_get_first__Vfuncout_1010;
    // Body
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_callbacks__pi3b4bb5ab__Vclpkg.__VnoInFunc_get_first(vlProcess, vlSymsp, this->__PVT__m_i, this->__PVT__m_obj, __Vfunc_get_first__Vfuncout_1010);
    this->__PVT__m_cb = __Vfunc_get_first__Vfuncout_1010;
    first__Vfuncrtn = this->__PVT__m_cb;
}

void Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pi0eb11e0b::__VnoInFunc_next(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase_cb> &next__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pi0eb11e0b::__VnoInFunc_next\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase_cb> __Vfunc_get_next__Vfuncout_1011;
    // Body
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_callbacks__pi3b4bb5ab__Vclpkg.__VnoInFunc_get_next(vlProcess, vlSymsp, this->__PVT__m_i, this->__PVT__m_obj, __Vfunc_get_next__Vfuncout_1011);
    this->__PVT__m_cb = __Vfunc_get_next__Vfuncout_1011;
    next__Vfuncrtn = this->__PVT__m_cb;
}

void Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pi0eb11e0b::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pi0eb11e0b::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_i = 0;
}

Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pi0eb11e0b::~Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pi0eb11e0b() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pi0eb11e0b::~\n"); );
}
