// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_typeid__Tzf9a16594__Vclpkg::__VnoInFunc_get(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_typeid__Tzf9a16594> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_typeid__Tzf9a16594__Vclpkg::__VnoInFunc_get\n"); );
    // Body
    if ((VlNull{} == this->__Vnontrivs.__PVT__m_b_inst)) {
        this->__Vnontrivs.__PVT__m_b_inst = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_typeid__Tzf9a16594, vlSymsp);
    }
    get__Vfuncrtn = this->__Vnontrivs.__PVT__m_b_inst;
}

void Vtb_top_uvm_pkg__03a__03auvm_typeid__Tzf9a16594::init(Vtb_top__Syms* __restrict vlSymsp) {
    Vtb_top_uvm_pkg__03a__03auvm_typeid_base::init(vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_typeid__Tzf9a16594::new\n"); );
    // Body
    /*super.new*/;
}

Vtb_top_uvm_pkg__03a__03auvm_typeid__Tzf9a16594::~Vtb_top_uvm_pkg__03a__03auvm_typeid__Tzf9a16594() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_typeid__Tzf9a16594::~\n"); );
}
