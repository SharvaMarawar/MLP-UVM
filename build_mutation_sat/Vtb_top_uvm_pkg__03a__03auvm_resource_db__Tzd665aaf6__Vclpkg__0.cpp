// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_resource_db__Tzd665aaf6__Vclpkg::__VnoInFunc_get_by_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string scope, ::std::string name, ::CData/*0:0*/ rpterr, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource__Tzd665aaf6> &get_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_resource_db__Tzd665aaf6__Vclpkg::__VnoInFunc_get_by_name\n"); );
    // Body
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_db_implementation_t__pi387f24d1> imp;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_resource_db_implementation_t__pi387f24d1__Vclpkg.__VnoInFunc_get_imp(vlSymsp, imp);
    VL_NULL_CHECK(imp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_db.svh", 100)->__VnoInFunc_get_by_name(vlSymsp, scope, name, (::IData)(rpterr), get_by_name__Vfuncrtn);
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_db__Tzd665aaf6::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    Vtb_top_uvm_pkg__03a__03auvm_void::init(vlProcess, vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_resource_db__Tzd665aaf6::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    /*super.new*/;
}

Vtb_top_uvm_pkg__03a__03auvm_resource_db__Tzd665aaf6::~Vtb_top_uvm_pkg__03a__03auvm_resource_db__Tzd665aaf6() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_resource_db__Tzd665aaf6::~\n"); );
}
