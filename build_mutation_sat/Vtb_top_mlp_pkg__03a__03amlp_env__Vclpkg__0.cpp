// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_mlp_pkg__03a__03amlp_env::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_top_mlp_pkg__03a__03amlp_env::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component_registry__pi4386cde4> __Vfunc_get__Vfuncout_92;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_component_registry__pi4386cde4__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_92);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_92;
}

void Vtb_top_mlp_pkg__03a__03amlp_env::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_top_mlp_pkg__03a__03amlp_env::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "mlp_env"s;
}

void Vtb_top_mlp_pkg__03a__03amlp_env::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> parent) {
    Vtb_top_uvm_pkg__03a__03auvm_env::init(vlProcess, vlSymsp, name, parent);
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_top_mlp_pkg__03a__03amlp_env::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void Vtb_top_mlp_pkg__03a__03amlp_env::__VnoInFunc_build_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_top_mlp_pkg__03a__03amlp_env::__VnoInFunc_build_phase\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_build_phase(vlProcess, vlSymsp, phase);
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_component_registry__pi48e6180f__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "agt"s, 
                                                                                ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_env>{this}, ""s, this->__PVT__agt);
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_component_registry__pie75eb616__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "scb"s, 
                                                                                ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_env>{this}, ""s, this->__PVT__scb);
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_component_registry__piebed7786__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "cov"s, 
                                                                                ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_env>{this}, ""s, this->__PVT__cov);
}

void Vtb_top_mlp_pkg__03a__03amlp_env::__VnoInFunc_connect_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_top_mlp_pkg__03a__03amlp_env::__VnoInFunc_connect_phase\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__agt, "mlp_env.sv", 27)
                  ->__PVT__in_ap, "mlp_env.sv", 27)->__VnoInFunc_connect(vlProcess, vlSymsp, VL_NULL_CHECK(this->__PVT__scb, "mlp_env.sv", 27)
                                                                         ->__PVT__in_imp);
    VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__agt, "mlp_env.sv", 28)
                  ->__PVT__out_ap, "mlp_env.sv", 28)->__VnoInFunc_connect(vlProcess, vlSymsp, VL_NULL_CHECK(this->__PVT__scb, "mlp_env.sv", 28)
                                                                          ->__PVT__out_imp);
    VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__scb, "mlp_env.sv", 29)
                  ->__PVT__cov_ap, "mlp_env.sv", 29)->__VnoInFunc_connect(vlProcess, vlSymsp, VL_NULL_CHECK(this->__PVT__cov, "mlp_env.sv", 29)
                                                                          ->__PVT__analysis_export);
}

void Vtb_top_mlp_pkg__03a__03amlp_env::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_top_mlp_pkg__03a__03amlp_env::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_mlp_pkg__03a__03amlp_env::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_top_mlp_pkg__03a__03amlp_env::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_mlp_pkg__03a__03amlp_env::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_top_mlp_pkg__03a__03amlp_env::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_mlp_pkg__03a__03amlp_env::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_top_mlp_pkg__03a__03amlp_env::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_mlp_pkg__03a__03amlp_env::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_top_mlp_pkg__03a__03amlp_env::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_top_mlp_pkg__03a__03amlp_env::~Vtb_top_mlp_pkg__03a__03amlp_env() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_top_mlp_pkg__03a__03amlp_env::~\n"); );
}

std::string Vtb_top_mlp_pkg__03a__03amlp_env::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_top_mlp_pkg__03a__03amlp_env::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_mlp_pkg__03a__03amlp_env::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_top_mlp_pkg__03a__03amlp_env::to_string_middle\n"); );
    // Body
    std::string out;
    out += "agt:" + VL_TO_STRING(__PVT__agt);
    out += ", scb:" + VL_TO_STRING(__PVT__scb);
    out += ", cov:" + VL_TO_STRING(__PVT__cov);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_env::to_string_middle();
    return (out);
}
