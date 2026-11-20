// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_typeid__Tz3554cd4e__Vclpkg::__VnoInFunc_get(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_typeid__Tz3554cd4e> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_typeid__Tz3554cd4e__Vclpkg::__VnoInFunc_get\n"); );
    // Body
    if ((VlNull{} == this->__Vnontrivs.__PVT__m_b_inst)) {
        this->__Vnontrivs.__PVT__m_b_inst = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_typeid__Tz3554cd4e, vlSymsp);
    }
    get__Vfuncrtn = this->__Vnontrivs.__PVT__m_b_inst;
}

void Vtb_top_uvm_pkg__03a__03auvm_typeid__Tz3554cd4e::init(Vtb_top__Syms* __restrict vlSymsp) {
    Vtb_top_uvm_pkg__03a__03auvm_typeid_base::init(vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_typeid__Tz3554cd4e::new\n"); );
    // Body
    /*super.new*/;
}

Vtb_top_uvm_pkg__03a__03auvm_typeid__Tz3554cd4e::~Vtb_top_uvm_pkg__03a__03auvm_typeid__Tz3554cd4e() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_typeid__Tz3554cd4e::~\n"); );
}
