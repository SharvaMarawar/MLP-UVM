// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_top_down_visitor_adapter_::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_uvm_pkg__03a__03auvm_visitor_adapter_::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_top_down_visitor_adapter_::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    /*super.new*/;
}

void Vtb_top_uvm_pkg__03a__03auvm_top_down_visitor_adapter_::__VnoInFunc_accept(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> s, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_visitor_> v, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_structure_proxy_> p, ::CData/*0:0*/ invoke_begin_end) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_top_down_visitor_adapter_::__VnoInFunc_accept\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ unnamedblk1__DOT__idx;
    unnamedblk1__DOT__idx = 0;
    ::IData/*31:0*/ unnamedblk1__DOT__idx__Vloopsize;
    unnamedblk1__DOT__idx__Vloopsize = 0;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component>> c;
    c.clear();
    if (invoke_begin_end) {
        VL_NULL_CHECK(v, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_traversal.svh", 141)->__VnoInFunc_begin_v(vlProcess, vlSymsp);
    }
    VL_NULL_CHECK(v, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_traversal.svh", 145)->__VnoInFunc_visit(vlProcess, vlSymsp, s);
    VL_NULL_CHECK(p, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_traversal.svh", 146)->__VnoInFunc_get_immediate_children(vlSymsp, s, c);
    unnamedblk1__DOT__idx = 0U;
    while (VL_LTS_III(32, unnamedblk1__DOT__idx, c.size())) {
        unnamedblk1__DOT__idx__Vloopsize = c.size();
        this->__VnoInFunc_accept(vlProcess, vlSymsp, c.at(unnamedblk1__DOT__idx), v, p, 0U);
        if ((unnamedblk1__DOT__idx__Vloopsize <= c.size())) {
            unnamedblk1__DOT__idx = ((::IData)(1U) 
                                     + unnamedblk1__DOT__idx);
        }
    }
    if (invoke_begin_end) {
        VL_NULL_CHECK(v, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_traversal.svh", 156)->__VnoInFunc_end_v(vlSymsp);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_top_down_visitor_adapter_::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_top_down_visitor_adapter_::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_top_down_visitor_adapter_::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_top_down_visitor_adapter_::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_top_down_visitor_adapter_::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_top_down_visitor_adapter_::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_top_down_visitor_adapter_::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_top_down_visitor_adapter_::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

Vtb_top_uvm_pkg__03a__03auvm_top_down_visitor_adapter_::~Vtb_top_uvm_pkg__03a__03auvm_top_down_visitor_adapter_() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_top_down_visitor_adapter_::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_top_down_visitor_adapter_::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_top_down_visitor_adapter_::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_top_down_visitor_adapter_::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_top_down_visitor_adapter_::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vtb_top_uvm_pkg__03a__03auvm_visitor_adapter_::to_string_middle();
    return (out);
}
