// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_mlp_pkg__03a__03amlp_reset_seq::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_reset_seq::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi48c7e05f> __Vfunc_get__Vfuncout_70;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pi48c7e05f__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_70);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_70;
}

void Vtb_top_mlp_pkg__03a__03amlp_reset_seq::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_reset_seq::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_reset_seq> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_top_mlp_pkg__03a__03amlp_reset_seq, vlProcess, vlSymsp, "mlp_reset_seq"s);
    } else {
        tmp = VL_NEW(Vtb_top_mlp_pkg__03a__03amlp_reset_seq, vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vtb_top_mlp_pkg__03a__03amlp_reset_seq::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_reset_seq::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "mlp_reset_seq"s;
}

void Vtb_top_mlp_pkg__03a__03amlp_reset_seq::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_mlp_pkg__03a__03amlp_base_seq::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_reset_seq::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    /*super.new*/;
}

VlCoroutine Vtb_top_mlp_pkg__03a__03amlp_reset_seq::__VnoInFunc_recover(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_reset_seq::__VnoInFunc_recover\n"); );
    // Locals
    ::IData/*31:0*/ __Vfunc_pack_x__a0_71;
    __Vfunc_pack_x__a0_71 = 0;
    ::IData/*31:0*/ __Vfunc_pack_x__a1_72;
    __Vfunc_pack_x__a1_72 = 0;
    ::IData/*31:0*/ __Vfunc_pack_x__a2_73;
    __Vfunc_pack_x__a2_73 = 0;
    ::IData/*31:0*/ __Vfunc_pack_x__a3_74;
    __Vfunc_pack_x__a3_74 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::IData/*31:0*/ __VlefCall_1__rnd_xp;
    ::IData/*31:0*/ __VlefCall_0__pack_x;
    ::IData/*31:0*/ unnamedblk1__DOT__i;
    co_await this->__VnoInFunc_send_ready(vlProcess, vlSymsp, 0x00000064U, 0U);
    co_await this->__VnoInFunc_send_cfg(vlProcess, vlSymsp, 0x00000010U, 0xffffffc0U, 0U, 0U, 0U);
    __Vfunc_pack_x__a3_74 = 0U;
    __Vfunc_pack_x__a2_73 = 0U;
    __Vfunc_pack_x__a1_72 = 0U;
    __Vfunc_pack_x__a0_71 = 0U;
    __VlefCall_0__pack_x = 0U;
    __VlefCall_0__pack_x = ((((0x0000ff00U & (__Vfunc_pack_x__a3_74 
                                              << 8U)) 
                              | (0x000000ffU & __Vfunc_pack_x__a2_73)) 
                             << 0x00000010U) | ((0x0000ff00U 
                                                 & (__Vfunc_pack_x__a1_72 
                                                    << 8U)) 
                                                | (0x000000ffU 
                                                   & __Vfunc_pack_x__a0_71)));
    co_await this->__VnoInFunc_send_infer(vlProcess, vlSymsp, __VlefCall_0__pack_x, 0U);
    this->__VnoInFunc_rnd_xp(vlSymsp, 0U, __VlefCall_1__rnd_xp);
    co_await this->__VnoInFunc_send_infer(vlProcess, vlSymsp, __VlefCall_1__rnd_xp, 0U);
    co_await this->__VnoInFunc_send_drain(vlProcess, vlSymsp);
    co_await this->__VnoInFunc_load_cfg(vlProcess, vlSymsp, VL_NULL_CHECK(Vtb_top_mlp_pkg__03a__03amlp_base_seq::__PVT__cfg, "mlp_sequences.sv", 250)
                                        ->__PVT__iris_ds);
    unnamedblk1__DOT__i = 0U;
    unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 5U, unnamedblk1__DOT__i)) {
        co_await this->__VnoInFunc_send_infer(vlProcess, vlSymsp, VL_NULL_CHECK(VL_NULL_CHECK(Vtb_top_mlp_pkg__03a__03amlp_base_seq::__PVT__cfg, "mlp_sequences.sv", 252)
                                                                                ->__PVT__iris_ds, "mlp_sequences.sv", 252)
                                              ->__PVT__xp.at(
                                                             ((::IData)(7U) 
                                                              * unnamedblk1__DOT__i)), 0U);
        unnamedblk1__DOT__i = ((::IData)(1U) + unnamedblk1__DOT__i);
    }
    co_await this->__VnoInFunc_send_drain(vlProcess, vlSymsp);
    co_return;
}

VlCoroutine Vtb_top_mlp_pkg__03a__03amlp_reset_seq::__VnoInFunc_one_case(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ w, ::IData/*31:0*/ pct, ::IData/*31:0*/ n_in, ::IData/*31:0*/ hold) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_reset_seq::__VnoInFunc_one_case\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::IData/*31:0*/ unnamedblk2__DOT__i;
    co_await this->__VnoInFunc_load_cfg(vlProcess, vlSymsp, VL_NULL_CHECK(Vtb_top_mlp_pkg__03a__03amlp_base_seq::__PVT__cfg, "mlp_sequences.sv", 257)
                                        ->__PVT__iris_ds);
    co_await this->__VnoInFunc_send_ready(vlProcess, vlSymsp, pct, 
                                          ((0U == pct)
                                            ? 0x0000001eU
                                            : 0U));
    unnamedblk2__DOT__i = 0U;
    unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk2__DOT__i, n_in)) {
        co_await this->__VnoInFunc_send_infer(vlProcess, vlSymsp, VL_NULL_CHECK(VL_NULL_CHECK(Vtb_top_mlp_pkg__03a__03amlp_base_seq::__PVT__cfg, "mlp_sequences.sv", 259)
                                                                                ->__PVT__iris_ds, "mlp_sequences.sv", 259)
                                              ->__PVT__xp.at(unnamedblk2__DOT__i), 0U);
        unnamedblk2__DOT__i = ((::IData)(1U) + unnamedblk2__DOT__i);
    }
    co_await this->__VnoInFunc_send_reset(vlProcess, vlSymsp, w, hold, 0U);
    co_await this->__VnoInFunc_recover(vlProcess, vlSymsp);
    co_return;
}

VlCoroutine Vtb_top_mlp_pkg__03a__03amlp_reset_seq::__VnoInFunc_run_seq(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_reset_seq::__VnoInFunc_run_seq\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::IData/*31:0*/ unnamedblk3__DOT__i;
    co_await this->__VnoInFunc_one_case(vlProcess, vlSymsp, 1U, 0x00000064U, 0U, 2U);
    co_await this->__VnoInFunc_one_case(vlProcess, vlSymsp, 2U, 0x00000064U, 1U, 2U);
    co_await this->__VnoInFunc_one_case(vlProcess, vlSymsp, 3U, 0x00000064U, 1U, 2U);
    co_await this->__VnoInFunc_one_case(vlProcess, vlSymsp, 3U, 0U, 1U, 2U);
    co_await this->__VnoInFunc_one_case(vlProcess, vlSymsp, 4U, 0U, 2U, 2U);
    co_await this->__VnoInFunc_one_case(vlProcess, vlSymsp, 4U, 0x00000064U, 4U, 2U);
    co_await this->__VnoInFunc_load_cfg(vlProcess, vlSymsp, VL_NULL_CHECK(Vtb_top_mlp_pkg__03a__03amlp_base_seq::__PVT__cfg, "mlp_sequences.sv", 272)
                                        ->__PVT__iris_ds);
    co_await this->__VnoInFunc_send_ready(vlProcess, vlSymsp, 0x00000032U, 0U);
    unnamedblk3__DOT__i = 0U;
    unnamedblk3__DOT__i = 0U;
    while (VL_GTS_III(32, 6U, unnamedblk3__DOT__i)) {
        co_await this->__VnoInFunc_send_infer(vlProcess, vlSymsp, VL_NULL_CHECK(VL_NULL_CHECK(Vtb_top_mlp_pkg__03a__03amlp_base_seq::__PVT__cfg, "mlp_sequences.sv", 274)
                                                                                ->__PVT__iris_ds, "mlp_sequences.sv", 274)
                                              ->__PVT__xp.at(
                                                             ((::IData)(0x0000000aU) 
                                                              + unnamedblk3__DOT__i)), 0U);
        unnamedblk3__DOT__i = ((::IData)(1U) + unnamedblk3__DOT__i);
    }
    co_await this->__VnoInFunc_send_reset(vlProcess, vlSymsp, 0U, 3U, 1U);
    co_await this->__VnoInFunc_recover(vlProcess, vlSymsp);
    co_await this->__VnoInFunc_send_reset(vlProcess, vlSymsp, 0U, 1U, 0U);
    co_await this->__VnoInFunc_send_reset(vlProcess, vlSymsp, 0U, 1U, 0U);
    co_await this->__VnoInFunc_recover(vlProcess, vlSymsp);
    co_return;
}

void Vtb_top_mlp_pkg__03a__03amlp_reset_seq::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_reset_seq::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_mlp_pkg__03a__03amlp_reset_seq::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_reset_seq::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_mlp_pkg__03a__03amlp_reset_seq::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_reset_seq::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_mlp_pkg__03a__03amlp_reset_seq::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_reset_seq::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

Vtb_top_mlp_pkg__03a__03amlp_reset_seq::~Vtb_top_mlp_pkg__03a__03amlp_reset_seq() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_reset_seq::~\n"); );
}

std::string Vtb_top_mlp_pkg__03a__03amlp_reset_seq::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_reset_seq::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_mlp_pkg__03a__03amlp_reset_seq::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_reset_seq::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vtb_top_mlp_pkg__03a__03amlp_base_seq::to_string_middle();
    return (out);
}
