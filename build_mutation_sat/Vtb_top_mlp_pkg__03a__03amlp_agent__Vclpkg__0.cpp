// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_mlp_pkg__03a__03amlp_agent::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtb_top_mlp_pkg__03a__03amlp_agent::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component_registry__pi48e6180f> __Vfunc_get__Vfuncout_83;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_component_registry__pi48e6180f__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_83);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_83;
}

void Vtb_top_mlp_pkg__03a__03amlp_agent::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtb_top_mlp_pkg__03a__03amlp_agent::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "mlp_agent"s;
}

void Vtb_top_mlp_pkg__03a__03amlp_agent::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> parent) {
    Vtb_top_uvm_pkg__03a__03auvm_agent::init(vlProcess, vlSymsp, name, parent);
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtb_top_mlp_pkg__03a__03amlp_agent::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void Vtb_top_mlp_pkg__03a__03amlp_agent::__VnoInFunc_build_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtb_top_mlp_pkg__03a__03amlp_agent::__VnoInFunc_build_phase\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    Vtb_top_uvm_pkg__03a__03auvm_agent::__VnoInFunc_build_phase(vlProcess, vlSymsp, phase);
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_component_registry__pi0cdef276__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "sqr"s, 
                                                                                ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_agent>{this}, ""s, this->__PVT__sqr);
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_component_registry__pi8c9a5517__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "drv"s, 
                                                                                ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_agent>{this}, ""s, this->__PVT__drv);
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_component_registry__pi430f9524__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "mon"s, 
                                                                                ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_agent>{this}, ""s, this->__PVT__mon);
}

void Vtb_top_mlp_pkg__03a__03amlp_agent::__VnoInFunc_connect_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtb_top_mlp_pkg__03a__03amlp_agent::__VnoInFunc_connect_phase\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__drv, "mlp_agent.sv", 27)
                  ->__PVT__seq_item_port, "mlp_agent.sv", 27)->__VnoInFunc_connect(vlProcess, vlSymsp, VL_NULL_CHECK(this->__PVT__sqr, "mlp_agent.sv", 27)
                                                                                ->__PVT__seq_item_export);
    this->__PVT__in_ap = VL_NULL_CHECK(this->__PVT__mon, "mlp_agent.sv", 28)
        ->__PVT__in_ap;
    this->__PVT__out_ap = VL_NULL_CHECK(this->__PVT__mon, "mlp_agent.sv", 29)
        ->__PVT__out_ap;
}

void Vtb_top_mlp_pkg__03a__03amlp_agent::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtb_top_mlp_pkg__03a__03amlp_agent::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_mlp_pkg__03a__03amlp_agent::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtb_top_mlp_pkg__03a__03amlp_agent::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_mlp_pkg__03a__03amlp_agent::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtb_top_mlp_pkg__03a__03amlp_agent::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_mlp_pkg__03a__03amlp_agent::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtb_top_mlp_pkg__03a__03amlp_agent::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_mlp_pkg__03a__03amlp_agent::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtb_top_mlp_pkg__03a__03amlp_agent::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_top_mlp_pkg__03a__03amlp_agent::~Vtb_top_mlp_pkg__03a__03amlp_agent() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtb_top_mlp_pkg__03a__03amlp_agent::~\n"); );
}

std::string Vtb_top_mlp_pkg__03a__03amlp_agent::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtb_top_mlp_pkg__03a__03amlp_agent::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_mlp_pkg__03a__03amlp_agent::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtb_top_mlp_pkg__03a__03amlp_agent::to_string_middle\n"); );
    // Body
    std::string out;
    out += "sqr:" + VL_TO_STRING(__PVT__sqr);
    out += ", drv:" + VL_TO_STRING(__PVT__drv);
    out += ", mon:" + VL_TO_STRING(__PVT__mon);
    out += ", in_ap:" + VL_TO_STRING(__PVT__in_ap);
    out += ", out_ap:" + VL_TO_STRING(__PVT__out_ap);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_agent::to_string_middle();
    return (out);
}
