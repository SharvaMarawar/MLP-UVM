// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_mlp_pkg__03a__03amlp_sparse_seq::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_sparse_seq::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_registry__pif49a6920> __Vfunc_get__Vfuncout_31;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pif49a6920__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_31);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_31;
}

void Vtb_top_mlp_pkg__03a__03amlp_sparse_seq::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_sparse_seq::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_sparse_seq> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_top_mlp_pkg__03a__03amlp_sparse_seq, vlProcess, vlSymsp, "mlp_sparse_seq"s);
    } else {
        tmp = VL_NEW(Vtb_top_mlp_pkg__03a__03amlp_sparse_seq, vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vtb_top_mlp_pkg__03a__03amlp_sparse_seq::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_sparse_seq::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "mlp_sparse_seq"s;
}

void Vtb_top_mlp_pkg__03a__03amlp_sparse_seq::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_mlp_pkg__03a__03amlp_base_seq::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_sparse_seq::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    /*super.new*/;
}

VlCoroutine Vtb_top_mlp_pkg__03a__03amlp_sparse_seq::__VnoInFunc_run_seq(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_sparse_seq::__VnoInFunc_run_seq\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::IData/*31:0*/ __VlefCall_1__rnd_gap;
    ::IData/*31:0*/ __VlefCall_0__rnd_xp;
    ::IData/*31:0*/ unnamedblk1__DOT__k;
    co_await this->__VnoInFunc_load_cfg(vlProcess, vlSymsp, VL_NULL_CHECK(Vtb_top_mlp_pkg__03a__03amlp_base_seq::__PVT__cfg, "mlp_sequences.sv", 162)
                                        ->__PVT__iris_ds);
    unnamedblk1__DOT__k = 0U;
    unnamedblk1__DOT__k = 0U;
    while ((unnamedblk1__DOT__k < VL_NULL_CHECK(Vtb_top_mlp_pkg__03a__03amlp_base_seq::__PVT__cfg, "mlp_sequences.sv", 163)
            ->__PVT__num_items)) {
        this->__VnoInFunc_rnd_xp(vlSymsp, 1U, __VlefCall_0__rnd_xp);
        this->__VnoInFunc_rnd_gap(vlSymsp, __VlefCall_1__rnd_gap);
        co_await this->__VnoInFunc_send_infer(vlProcess, vlSymsp, __VlefCall_0__rnd_xp, __VlefCall_1__rnd_gap);
        unnamedblk1__DOT__k = ((::IData)(1U) + unnamedblk1__DOT__k);
    }
    co_return;
}

void Vtb_top_mlp_pkg__03a__03amlp_sparse_seq::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_sparse_seq::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_mlp_pkg__03a__03amlp_sparse_seq::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_sparse_seq::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_mlp_pkg__03a__03amlp_sparse_seq::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_sparse_seq::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_mlp_pkg__03a__03amlp_sparse_seq::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_sparse_seq::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

Vtb_top_mlp_pkg__03a__03amlp_sparse_seq::~Vtb_top_mlp_pkg__03a__03amlp_sparse_seq() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_sparse_seq::~\n"); );
}

std::string Vtb_top_mlp_pkg__03a__03amlp_sparse_seq::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_sparse_seq::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_mlp_pkg__03a__03amlp_sparse_seq::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_sparse_seq::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vtb_top_mlp_pkg__03a__03amlp_base_seq::to_string_middle();
    return (out);
}
