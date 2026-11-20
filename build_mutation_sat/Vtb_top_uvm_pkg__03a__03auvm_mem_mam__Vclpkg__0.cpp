// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_mem_mam::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_mem_mam_cfg> cfg, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_mem> mem) {
    Vtb_top_uvm_pkg__03a__03auvm_void::init(vlProcess, vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem_mam::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    this->__PVT__for_each_idx = 0xffffffffU;
    /*super.new*/;
    this->__PVT__cfg = cfg;
    this->__PVT__memory = mem;
    this->__PVT__default_alloc = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_mem_mam_policy, vlProcess, vlSymsp);
}

void Vtb_top_uvm_pkg__03a__03auvm_mem_mam::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem_mam::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__lineno = 0;
}

Vtb_top_uvm_pkg__03a__03auvm_mem_mam::~Vtb_top_uvm_pkg__03a__03auvm_mem_mam() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem_mam::~\n"); );
}
