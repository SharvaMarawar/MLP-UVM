// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_run_test_callback__Vclpkg::__VnoInFunc_m_do_pre_run_test(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_run_test_callback__Vclpkg::__VnoInFunc_m_do_pre_run_test\n"); );
    // Body
    ::IData/*31:0*/ unnamedblk230__DOT__i;
    unnamedblk230__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk230__DOT__i__Vloopsize;
    unnamedblk230__DOT__i__Vloopsize = 0;
    unnamedblk230__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk230__DOT__i, this->__Vnontrivs.__PVT__m_registered_cbs.size())) {
        unnamedblk230__DOT__i__Vloopsize = this->__Vnontrivs.__PVT__m_registered_cbs.size();
        VL_NULL_CHECK(this->__Vnontrivs.__PVT__m_registered_cbs.at(unnamedblk230__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_run_test_callback.svh", 123)->__VnoInFunc_pre_run_test(vlSymsp);
        if ((unnamedblk230__DOT__i__Vloopsize <= this->__Vnontrivs.__PVT__m_registered_cbs.size())) {
            unnamedblk230__DOT__i = ((::IData)(1U) 
                                     + unnamedblk230__DOT__i);
        }
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_run_test_callback__Vclpkg::__VnoInFunc_m_do_post_run_test(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_run_test_callback__Vclpkg::__VnoInFunc_m_do_post_run_test\n"); );
    // Body
    ::IData/*31:0*/ unnamedblk231__DOT__i;
    unnamedblk231__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk231__DOT__i__Vloopsize;
    unnamedblk231__DOT__i__Vloopsize = 0;
    unnamedblk231__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk231__DOT__i, this->__Vnontrivs.__PVT__m_registered_cbs.size())) {
        unnamedblk231__DOT__i__Vloopsize = this->__Vnontrivs.__PVT__m_registered_cbs.size();
        VL_NULL_CHECK(this->__Vnontrivs.__PVT__m_registered_cbs.at(unnamedblk231__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_run_test_callback.svh", 130)->__VnoInFunc_post_run_test(vlSymsp);
        if ((unnamedblk231__DOT__i__Vloopsize <= this->__Vnontrivs.__PVT__m_registered_cbs.size())) {
            unnamedblk231__DOT__i = ((::IData)(1U) 
                                     + unnamedblk231__DOT__i);
        }
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_run_test_callback__Vclpkg::__VnoInFunc_m_do_pre_abort(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_run_test_callback__Vclpkg::__VnoInFunc_m_do_pre_abort\n"); );
    // Body
    ::IData/*31:0*/ unnamedblk232__DOT__i;
    unnamedblk232__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk232__DOT__i__Vloopsize;
    unnamedblk232__DOT__i__Vloopsize = 0;
    unnamedblk232__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk232__DOT__i, this->__Vnontrivs.__PVT__m_registered_cbs.size())) {
        unnamedblk232__DOT__i__Vloopsize = this->__Vnontrivs.__PVT__m_registered_cbs.size();
        VL_NULL_CHECK(this->__Vnontrivs.__PVT__m_registered_cbs.at(unnamedblk232__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_run_test_callback.svh", 137)->__VnoInFunc_pre_abort(vlSymsp);
        if ((unnamedblk232__DOT__i__Vloopsize <= this->__Vnontrivs.__PVT__m_registered_cbs.size())) {
            unnamedblk232__DOT__i = ((::IData)(1U) 
                                     + unnamedblk232__DOT__i);
        }
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_run_test_callback::__VnoInFunc_pre_abort(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_run_test_callback::__VnoInFunc_pre_abort\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_run_test_callback::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_uvm_pkg__03a__03auvm_callback::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_run_test_callback::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    /*super.new*/;
}

void Vtb_top_uvm_pkg__03a__03auvm_run_test_callback::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_run_test_callback::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_run_test_callback::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_run_test_callback::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_run_test_callback::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_run_test_callback::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_run_test_callback::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_run_test_callback::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

Vtb_top_uvm_pkg__03a__03auvm_run_test_callback::~Vtb_top_uvm_pkg__03a__03auvm_run_test_callback() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_run_test_callback::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_run_test_callback::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_run_test_callback::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_run_test_callback::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_run_test_callback::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vtb_top_uvm_pkg__03a__03auvm_callback::to_string_middle();
    return (out);
}
