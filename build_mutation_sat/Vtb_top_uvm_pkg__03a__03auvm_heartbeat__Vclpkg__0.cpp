// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_heartbeat::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> cntxt, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_objection> objection) {
    Vtb_top_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_heartbeat::new\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2553;
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> cs;
    /*super.new*/;
    this->__PVT__m_objection = objection;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, cs);
    if ((VlNull{} != cntxt)) {
        this->__PVT__m_cntxt = cntxt;
    } else {
        VL_NULL_CHECK(cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_heartbeat.svh", 105)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2553);
        this->__PVT__m_cntxt = __Vtask_get_root__Vfuncout_2553;
    }
    this->__PVT__m_cb = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_heartbeat_callback, vlProcess, vlSymsp, 
                               VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(name, "_cb"s)), this->__PVT__m_cntxt);
}

void Vtb_top_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_heartbeat::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_heartbeat::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_mode = 0;
    __PVT__m_started = 0;
    __PVT__m_added = 0;
}

Vtb_top_uvm_pkg__03a__03auvm_heartbeat::~Vtb_top_uvm_pkg__03a__03auvm_heartbeat() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_heartbeat::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_heartbeat::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_heartbeat::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_heartbeat::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_heartbeat::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_objection:" + VL_TO_STRING(__PVT__m_objection);
    out += ", m_cb:" + VL_TO_STRING(__PVT__m_cb);
    out += ", m_cntxt:" + VL_TO_STRING(__PVT__m_cntxt);
    out += ", m_mode:" + VL_TO_STRING(__PVT__m_mode);
    out += ", m_hblist:" + VL_TO_STRING(__PVT__m_hblist);
    out += ", m_event:" + VL_TO_STRING(__PVT__m_event);
    out += ", m_started:" + VL_TO_STRING(__PVT__m_started);
    out += ", m_stop_event:" + VL_TO_STRING(__PVT__m_stop_event);
    out += ", m_added:" + VL_TO_STRING(__PVT__m_added);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
