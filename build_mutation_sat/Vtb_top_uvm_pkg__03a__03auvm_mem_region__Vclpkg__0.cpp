// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_mem_region::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ start_offset, ::QData/*63:0*/ end_offset, ::IData/*31:0*/ len, ::IData/*31:0*/ n_bytes, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_mem_mam> parent) {
    Vtb_top_uvm_pkg__03a__03auvm_void::init(vlProcess, vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem_region::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__Xstart_offsetX = start_offset;
    this->__PVT__Xend_offsetX = end_offset;
    this->__PVT__len = len;
    this->__PVT__n_bytes = n_bytes;
    this->__PVT__parent = parent;
    this->__PVT__XvregX = VlNull{};
}

void Vtb_top_uvm_pkg__03a__03auvm_mem_region::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem_region::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__Xstart_offsetX = 0;
    __PVT__Xend_offsetX = 0;
    __PVT__len = 0;
    __PVT__n_bytes = 0;
    __PVT__lineno = 0;
}

Vtb_top_uvm_pkg__03a__03auvm_mem_region::~Vtb_top_uvm_pkg__03a__03auvm_mem_region() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem_region::~\n"); );
}
