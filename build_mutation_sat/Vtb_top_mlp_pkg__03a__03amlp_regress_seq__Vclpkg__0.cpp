// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_mlp_pkg__03a__03amlp_regress_seq::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_regress_seq::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_registry__pic706d19a> __Vfunc_get__Vfuncout_77;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pic706d19a__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_77);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_77;
}

void Vtb_top_mlp_pkg__03a__03amlp_regress_seq::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_regress_seq::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_regress_seq> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_top_mlp_pkg__03a__03amlp_regress_seq, vlProcess, vlSymsp, "mlp_regress_seq"s);
    } else {
        tmp = VL_NEW(Vtb_top_mlp_pkg__03a__03amlp_regress_seq, vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vtb_top_mlp_pkg__03a__03amlp_regress_seq::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_regress_seq::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "mlp_regress_seq"s;
}

void Vtb_top_mlp_pkg__03a__03amlp_regress_seq::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_mlp_pkg__03a__03amlp_base_seq::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_regress_seq::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    /*super.new*/;
}

VlCoroutine Vtb_top_mlp_pkg__03a__03amlp_regress_seq::__VnoInFunc_run_one(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_base_seq> s) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_regress_seq::__VnoInFunc_run_one\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    VL_NULL_CHECK(s, "mlp_sequences.sv", 395)->__PVT__cfg 
        = Vtb_top_mlp_pkg__03a__03amlp_base_seq::__PVT__cfg;
    co_await VL_NULL_CHECK(s, "mlp_sequences.sv", 396)->__VnoInFunc_start(vlProcess, vlSymsp, Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, 
                                                                          ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_regress_seq>{this}, 0xffffffffU, 1U);
    co_return;
}

VlCoroutine Vtb_top_mlp_pkg__03a__03amlp_regress_seq::__VnoInFunc_run_seq(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_regress_seq::__VnoInFunc_run_seq\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_iris_seq> s1;
    ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_single_seq> s2;
    ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_random_seq> s3;
    ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_sparse_seq> s4;
    ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_corner_seq> s5;
    ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_sat_seq> s6;
    ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_reset_seq> s7;
    ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_cfg_seq> s8;
    ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_stall_seq> s9;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pi4b106a9f__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "iris"s, VlNull{}, ""s, s1);
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pib30c2a11__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "single"s, VlNull{}, ""s, s2);
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pi3ffb8240__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "random"s, VlNull{}, ""s, s3);
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pif49a6920__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "sparse"s, VlNull{}, ""s, s4);
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pi4a3b2dbc__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "corner"s, VlNull{}, ""s, s5);
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pi84f0cf0d__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "sat"s, VlNull{}, ""s, s6);
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pi48c7e05f__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "reset"s, VlNull{}, ""s, s7);
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pid8fc8a3a__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "cfg_seq"s, VlNull{}, ""s, s8);
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pic91c3669__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "stall"s, VlNull{}, ""s, s9);
    co_await this->__VnoInFunc_run_one(vlProcess, vlSymsp, s1);
    co_await this->__VnoInFunc_run_one(vlProcess, vlSymsp, s2);
    co_await this->__VnoInFunc_run_one(vlProcess, vlSymsp, s3);
    co_await this->__VnoInFunc_run_one(vlProcess, vlSymsp, s4);
    co_await this->__VnoInFunc_run_one(vlProcess, vlSymsp, s5);
    co_await this->__VnoInFunc_run_one(vlProcess, vlSymsp, s6);
    co_await this->__VnoInFunc_run_one(vlProcess, vlSymsp, s7);
    co_await this->__VnoInFunc_run_one(vlProcess, vlSymsp, s8);
    co_await this->__VnoInFunc_run_one(vlProcess, vlSymsp, s9);
    co_return;
}

void Vtb_top_mlp_pkg__03a__03amlp_regress_seq::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_regress_seq::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_mlp_pkg__03a__03amlp_regress_seq::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_regress_seq::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_mlp_pkg__03a__03amlp_regress_seq::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_regress_seq::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_mlp_pkg__03a__03amlp_regress_seq::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_regress_seq::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

Vtb_top_mlp_pkg__03a__03amlp_regress_seq::~Vtb_top_mlp_pkg__03a__03amlp_regress_seq() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_regress_seq::~\n"); );
}

std::string Vtb_top_mlp_pkg__03a__03amlp_regress_seq::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_regress_seq::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_mlp_pkg__03a__03amlp_regress_seq::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_regress_seq::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vtb_top_mlp_pkg__03a__03amlp_base_seq::to_string_middle();
    return (out);
}
