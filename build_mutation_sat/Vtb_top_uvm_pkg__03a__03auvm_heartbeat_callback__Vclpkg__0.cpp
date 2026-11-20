// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_heartbeat_callback::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> target) {
    Vtb_top_uvm_pkg__03a__03auvm_objection_callback::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_heartbeat_callback::new\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2554;
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, this->__PVT__cs);
    /*super.new*/;
    if ((VlNull{} != target)) {
        this->__PVT__target = target;
    } else {
        VL_NULL_CHECK(this->__PVT__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_heartbeat.svh", 374)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2554);
        this->__PVT__target = __Vtask_get_root__Vfuncout_2554;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_heartbeat_callback::__VnoInFunc_raised(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_objection> objection, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> obj, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> source_obj, ::std::string description, ::IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_heartbeat_callback::__VnoInFunc_raised\n"); );
    // Body
    if ((obj == this->__PVT__target)) {
        if ((1U & (~ (0U != this->__PVT__cnt.exists(source_obj))))) {
            this->__PVT__cnt.atWrite(source_obj) = 0U;
        }
        this->__PVT__cnt.atWrite(source_obj) = ((::IData)(1U) 
                                                + this->__PVT__cnt
                                                .at(source_obj));
        this->__PVT__last_trigger.atWrite(source_obj) 
            = VL_RTOIROUND_Q_D(VL_TIME_UNITED_D(1000));
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_heartbeat_callback::__VnoInFunc_dropped(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_objection> objection, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> obj, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> source_obj, ::std::string description, ::IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_heartbeat_callback::__VnoInFunc_dropped\n"); );
    // Body
    this->__VnoInFunc_raised(vlSymsp, objection, obj, source_obj, description, count);
}

void Vtb_top_uvm_pkg__03a__03auvm_heartbeat_callback::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_heartbeat_callback::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_heartbeat_callback::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_heartbeat_callback::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_heartbeat_callback::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_heartbeat_callback::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_heartbeat_callback::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_heartbeat_callback::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_heartbeat_callback::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_heartbeat_callback::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__cnt.atDefault() = 0;
    __PVT__last_trigger.atDefault() = VL_SCOPED_RAND_RESET_Q(64, 6832164394050517435ULL, 14228963972983550624ull);
}

Vtb_top_uvm_pkg__03a__03auvm_heartbeat_callback::~Vtb_top_uvm_pkg__03a__03auvm_heartbeat_callback() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_heartbeat_callback::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_heartbeat_callback::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_heartbeat_callback::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_heartbeat_callback::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_heartbeat_callback::to_string_middle\n"); );
    // Body
    std::string out;
    out += "cnt:" + VL_TO_STRING(__PVT__cnt);
    out += ", last_trigger:" + VL_TO_STRING(__PVT__last_trigger);
    out += ", target:" + VL_TO_STRING(__PVT__target);
    out += ", cs:" + VL_TO_STRING(__PVT__cs);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_objection_callback::to_string_middle();
    return (out);
}
