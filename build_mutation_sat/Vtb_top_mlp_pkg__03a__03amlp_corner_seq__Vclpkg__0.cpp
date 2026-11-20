// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_mlp_pkg__03a__03amlp_corner_seq::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_corner_seq::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi4a3b2dbc> __Vfunc_get__Vfuncout_32;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pi4a3b2dbc__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_32);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_32;
}

void Vtb_top_mlp_pkg__03a__03amlp_corner_seq::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_corner_seq::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_corner_seq> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_top_mlp_pkg__03a__03amlp_corner_seq, vlProcess, vlSymsp, "mlp_corner_seq"s);
    } else {
        tmp = VL_NEW(Vtb_top_mlp_pkg__03a__03amlp_corner_seq, vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vtb_top_mlp_pkg__03a__03amlp_corner_seq::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_corner_seq::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "mlp_corner_seq"s;
}

void Vtb_top_mlp_pkg__03a__03amlp_corner_seq::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_mlp_pkg__03a__03amlp_base_seq::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_corner_seq::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    /*super.new*/;
}

VlCoroutine Vtb_top_mlp_pkg__03a__03amlp_corner_seq::__VnoInFunc_corner_vectors(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_corner_seq::__VnoInFunc_corner_vectors\n"); );
    // Locals
    ::IData/*31:0*/ __Vfunc_pack_x__a0_37;
    __Vfunc_pack_x__a0_37 = 0;
    ::IData/*31:0*/ __Vfunc_pack_x__a1_38;
    __Vfunc_pack_x__a1_38 = 0;
    ::IData/*31:0*/ __Vfunc_pack_x__a2_39;
    __Vfunc_pack_x__a2_39 = 0;
    ::IData/*31:0*/ __Vfunc_pack_x__a3_40;
    __Vfunc_pack_x__a3_40 = 0;
    ::IData/*31:0*/ __Vfunc_pack_x__a0_41;
    __Vfunc_pack_x__a0_41 = 0;
    ::IData/*31:0*/ __Vfunc_pack_x__a1_42;
    __Vfunc_pack_x__a1_42 = 0;
    ::IData/*31:0*/ __Vfunc_pack_x__a2_43;
    __Vfunc_pack_x__a2_43 = 0;
    ::IData/*31:0*/ __Vfunc_pack_x__a3_44;
    __Vfunc_pack_x__a3_44 = 0;
    ::IData/*31:0*/ __Vfunc_pack_x__a0_45;
    __Vfunc_pack_x__a0_45 = 0;
    ::IData/*31:0*/ __Vfunc_pack_x__a1_46;
    __Vfunc_pack_x__a1_46 = 0;
    ::IData/*31:0*/ __Vfunc_pack_x__a2_47;
    __Vfunc_pack_x__a2_47 = 0;
    ::IData/*31:0*/ __Vfunc_pack_x__a3_48;
    __Vfunc_pack_x__a3_48 = 0;
    ::IData/*31:0*/ __Vfunc_pack_x__a0_49;
    __Vfunc_pack_x__a0_49 = 0;
    ::IData/*31:0*/ __Vfunc_pack_x__a1_50;
    __Vfunc_pack_x__a1_50 = 0;
    ::IData/*31:0*/ __Vfunc_pack_x__a2_51;
    __Vfunc_pack_x__a2_51 = 0;
    ::IData/*31:0*/ __Vfunc_pack_x__a3_52;
    __Vfunc_pack_x__a3_52 = 0;
    ::IData/*31:0*/ __Vfunc_pack_x__a0_53;
    __Vfunc_pack_x__a0_53 = 0;
    ::IData/*31:0*/ __Vfunc_pack_x__a1_54;
    __Vfunc_pack_x__a1_54 = 0;
    ::IData/*31:0*/ __Vfunc_pack_x__a2_55;
    __Vfunc_pack_x__a2_55 = 0;
    ::IData/*31:0*/ __Vfunc_pack_x__a3_56;
    __Vfunc_pack_x__a3_56 = 0;
    ::IData/*31:0*/ __Vfunc_pack_x__a0_57;
    __Vfunc_pack_x__a0_57 = 0;
    ::IData/*31:0*/ __Vfunc_pack_x__a1_58;
    __Vfunc_pack_x__a1_58 = 0;
    ::IData/*31:0*/ __Vfunc_pack_x__a2_59;
    __Vfunc_pack_x__a2_59 = 0;
    ::IData/*31:0*/ __Vfunc_pack_x__a3_60;
    __Vfunc_pack_x__a3_60 = 0;
    ::IData/*31:0*/ __Vfunc_pack_x__a0_61;
    __Vfunc_pack_x__a0_61 = 0;
    ::IData/*31:0*/ __Vfunc_pack_x__a1_62;
    __Vfunc_pack_x__a1_62 = 0;
    ::IData/*31:0*/ __Vfunc_pack_x__a2_63;
    __Vfunc_pack_x__a2_63 = 0;
    ::IData/*31:0*/ __Vfunc_pack_x__a3_64;
    __Vfunc_pack_x__a3_64 = 0;
    ::IData/*31:0*/ __Vfunc_pack_x__a0_65;
    __Vfunc_pack_x__a0_65 = 0;
    ::IData/*31:0*/ __Vfunc_pack_x__a1_66;
    __Vfunc_pack_x__a1_66 = 0;
    ::IData/*31:0*/ __Vfunc_pack_x__a2_67;
    __Vfunc_pack_x__a2_67 = 0;
    ::IData/*31:0*/ __Vfunc_pack_x__a3_68;
    __Vfunc_pack_x__a3_68 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::IData/*31:0*/ __VlefCall_8__pack_x;
    ::IData/*31:0*/ __VlefCall_7__pack_x;
    ::IData/*31:0*/ __VlefCall_6__pack_x;
    ::IData/*31:0*/ __VlefCall_5__pack_x;
    ::IData/*31:0*/ __VlefCall_4__pack_x;
    ::IData/*31:0*/ __VlefCall_3__pack_x;
    ::IData/*31:0*/ __VlefCall_2__pack_x;
    ::IData/*31:0*/ __VlefCall_1__pack_x;
    ::IData/*31:0*/ unnamedblk1__DOT__i;
    ::VlUnpacked<::IData/*31:0*/, 4> unnamedblk1__DOT__unnamedblk2__DOT__v;
    co_await this->__VnoInFunc_send_infer(vlProcess, vlSymsp, 0U, 0U);
    __Vfunc_pack_x__a3_40 = 0x0000007fU;
    __Vfunc_pack_x__a2_39 = 0x0000007fU;
    __Vfunc_pack_x__a1_38 = 0x0000007fU;
    __Vfunc_pack_x__a0_37 = 0x0000007fU;
    __VlefCall_1__pack_x = 0U;
    __VlefCall_1__pack_x = ((((0x0000ff00U & (__Vfunc_pack_x__a3_40 
                                              << 8U)) 
                              | (0x000000ffU & __Vfunc_pack_x__a2_39)) 
                             << 0x00000010U) | ((0x0000ff00U 
                                                 & (__Vfunc_pack_x__a1_38 
                                                    << 8U)) 
                                                | (0x000000ffU 
                                                   & __Vfunc_pack_x__a0_37)));
    co_await this->__VnoInFunc_send_infer(vlProcess, vlSymsp, __VlefCall_1__pack_x, 0U);
    __Vfunc_pack_x__a3_44 = 0xffffff80U;
    __Vfunc_pack_x__a2_43 = 0xffffff80U;
    __Vfunc_pack_x__a1_42 = 0xffffff80U;
    __Vfunc_pack_x__a0_41 = 0xffffff80U;
    __VlefCall_2__pack_x = 0U;
    __VlefCall_2__pack_x = ((((0x0000ff00U & (__Vfunc_pack_x__a3_44 
                                              << 8U)) 
                              | (0x000000ffU & __Vfunc_pack_x__a2_43)) 
                             << 0x00000010U) | ((0x0000ff00U 
                                                 & (__Vfunc_pack_x__a1_42 
                                                    << 8U)) 
                                                | (0x000000ffU 
                                                   & __Vfunc_pack_x__a0_41)));
    co_await this->__VnoInFunc_send_infer(vlProcess, vlSymsp, __VlefCall_2__pack_x, 0U);
    __Vfunc_pack_x__a3_48 = 0xffffff80U;
    __Vfunc_pack_x__a2_47 = 0x0000007fU;
    __Vfunc_pack_x__a1_46 = 0xffffff80U;
    __Vfunc_pack_x__a0_45 = 0x0000007fU;
    __VlefCall_3__pack_x = 0U;
    __VlefCall_3__pack_x = ((((0x0000ff00U & (__Vfunc_pack_x__a3_48 
                                              << 8U)) 
                              | (0x000000ffU & __Vfunc_pack_x__a2_47)) 
                             << 0x00000010U) | ((0x0000ff00U 
                                                 & (__Vfunc_pack_x__a1_46 
                                                    << 8U)) 
                                                | (0x000000ffU 
                                                   & __Vfunc_pack_x__a0_45)));
    co_await this->__VnoInFunc_send_infer(vlProcess, vlSymsp, __VlefCall_3__pack_x, 0U);
    __Vfunc_pack_x__a3_52 = 0x0000007fU;
    __Vfunc_pack_x__a2_51 = 0xffffff80U;
    __Vfunc_pack_x__a1_50 = 0x0000007fU;
    __Vfunc_pack_x__a0_49 = 0xffffff80U;
    __VlefCall_4__pack_x = 0U;
    __VlefCall_4__pack_x = ((((0x0000ff00U & (__Vfunc_pack_x__a3_52 
                                              << 8U)) 
                              | (0x000000ffU & __Vfunc_pack_x__a2_51)) 
                             << 0x00000010U) | ((0x0000ff00U 
                                                 & (__Vfunc_pack_x__a1_50 
                                                    << 8U)) 
                                                | (0x000000ffU 
                                                   & __Vfunc_pack_x__a0_49)));
    co_await this->__VnoInFunc_send_infer(vlProcess, vlSymsp, __VlefCall_4__pack_x, 0U);
    unnamedblk1__DOT__i = 0U;
    unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 4U, unnamedblk1__DOT__i)) {
        unnamedblk1__DOT__unnamedblk2__DOT__v[0U] = 0U;
        unnamedblk1__DOT__unnamedblk2__DOT__v[1U] = 0U;
        unnamedblk1__DOT__unnamedblk2__DOT__v[2U] = 0U;
        unnamedblk1__DOT__unnamedblk2__DOT__v[3U] = 0U;
        unnamedblk1__DOT__unnamedblk2__DOT__v[(3U & unnamedblk1__DOT__i)] = 0x0000007fU;
        __Vfunc_pack_x__a3_56 = unnamedblk1__DOT__unnamedblk2__DOT__v[3U];
        __Vfunc_pack_x__a2_55 = unnamedblk1__DOT__unnamedblk2__DOT__v[2U];
        __Vfunc_pack_x__a1_54 = unnamedblk1__DOT__unnamedblk2__DOT__v[1U];
        __Vfunc_pack_x__a0_53 = unnamedblk1__DOT__unnamedblk2__DOT__v[0U];
        __VlefCall_5__pack_x = 0U;
        __VlefCall_5__pack_x = ((((0x0000ff00U & (__Vfunc_pack_x__a3_56 
                                                  << 8U)) 
                                  | (0x000000ffU & __Vfunc_pack_x__a2_55)) 
                                 << 0x00000010U) | 
                                ((0x0000ff00U & (__Vfunc_pack_x__a1_54 
                                                 << 8U)) 
                                 | (0x000000ffU & __Vfunc_pack_x__a0_53)));
        co_await this->__VnoInFunc_send_infer(vlProcess, vlSymsp, __VlefCall_5__pack_x, 0U);
        unnamedblk1__DOT__unnamedblk2__DOT__v[(3U & unnamedblk1__DOT__i)] = 0xffffff80U;
        __Vfunc_pack_x__a3_60 = unnamedblk1__DOT__unnamedblk2__DOT__v[3U];
        __Vfunc_pack_x__a2_59 = unnamedblk1__DOT__unnamedblk2__DOT__v[2U];
        __Vfunc_pack_x__a1_58 = unnamedblk1__DOT__unnamedblk2__DOT__v[1U];
        __Vfunc_pack_x__a0_57 = unnamedblk1__DOT__unnamedblk2__DOT__v[0U];
        __VlefCall_6__pack_x = 0U;
        __VlefCall_6__pack_x = ((((0x0000ff00U & (__Vfunc_pack_x__a3_60 
                                                  << 8U)) 
                                  | (0x000000ffU & __Vfunc_pack_x__a2_59)) 
                                 << 0x00000010U) | 
                                ((0x0000ff00U & (__Vfunc_pack_x__a1_58 
                                                 << 8U)) 
                                 | (0x000000ffU & __Vfunc_pack_x__a0_57)));
        co_await this->__VnoInFunc_send_infer(vlProcess, vlSymsp, __VlefCall_6__pack_x, 0U);
        unnamedblk1__DOT__i = ((::IData)(1U) + unnamedblk1__DOT__i);
    }
    __Vfunc_pack_x__a3_64 = 0xffffffffU;
    __Vfunc_pack_x__a2_63 = 1U;
    __Vfunc_pack_x__a1_62 = 0xffffffffU;
    __Vfunc_pack_x__a0_61 = 1U;
    __VlefCall_7__pack_x = 0U;
    __VlefCall_7__pack_x = ((((0x0000ff00U & (__Vfunc_pack_x__a3_64 
                                              << 8U)) 
                              | (0x000000ffU & __Vfunc_pack_x__a2_63)) 
                             << 0x00000010U) | ((0x0000ff00U 
                                                 & (__Vfunc_pack_x__a1_62 
                                                    << 8U)) 
                                                | (0x000000ffU 
                                                   & __Vfunc_pack_x__a0_61)));
    co_await this->__VnoInFunc_send_infer(vlProcess, vlSymsp, __VlefCall_7__pack_x, 0U);
    __Vfunc_pack_x__a3_68 = 0xffffffffU;
    __Vfunc_pack_x__a2_67 = 0xffffffffU;
    __Vfunc_pack_x__a1_66 = 0xffffffffU;
    __Vfunc_pack_x__a0_65 = 0xffffffffU;
    __VlefCall_8__pack_x = 0U;
    __VlefCall_8__pack_x = ((((0x0000ff00U & (__Vfunc_pack_x__a3_68 
                                              << 8U)) 
                              | (0x000000ffU & __Vfunc_pack_x__a2_67)) 
                             << 0x00000010U) | ((0x0000ff00U 
                                                 & (__Vfunc_pack_x__a1_66 
                                                    << 8U)) 
                                                | (0x000000ffU 
                                                   & __Vfunc_pack_x__a0_65)));
    co_await this->__VnoInFunc_send_infer(vlProcess, vlSymsp, __VlefCall_8__pack_x, 0U);
    co_return;
}

VlCoroutine Vtb_top_mlp_pkg__03a__03amlp_corner_seq::__VnoInFunc_set_all(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ wv, ::IData/*31:0*/ bv, ::IData/*31:0*/ sh, ::IData/*31:0*/ lk) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_corner_seq::__VnoInFunc_set_all\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::IData/*31:0*/ unnamedblk3__DOT__a;
    ::IData/*31:0*/ unnamedblk4__DOT__a;
    unnamedblk3__DOT__a = 0U;
    while (VL_GTS_III(32, 0x00000010U, unnamedblk3__DOT__a)) {
        co_await this->__VnoInFunc_send_cfg(vlProcess, vlSymsp, unnamedblk3__DOT__a, wv, 0U, 0U, 0U);
        unnamedblk3__DOT__a = ((::IData)(1U) + unnamedblk3__DOT__a);
    }
    unnamedblk4__DOT__a = 0x00000010U;
    while (VL_GTS_III(32, 0x00000014U, unnamedblk4__DOT__a)) {
        co_await this->__VnoInFunc_send_cfg(vlProcess, vlSymsp, unnamedblk4__DOT__a, bv, 0U, 0U, 0U);
        unnamedblk4__DOT__a = ((::IData)(1U) + unnamedblk4__DOT__a);
    }
    co_await this->__VnoInFunc_send_cfg(vlProcess, vlSymsp, 0x00000014U, sh, 0U, 0U, 0U);
    co_await this->__VnoInFunc_send_cfg(vlProcess, vlSymsp, 0x00000015U, lk, 0U, 0U, 0U);
    co_return;
}

VlCoroutine Vtb_top_mlp_pkg__03a__03amlp_corner_seq::__VnoInFunc_run_seq(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_corner_seq::__VnoInFunc_run_seq\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::IData/*31:0*/ unnamedblk5__DOT__a;
    ::IData/*31:0*/ unnamedblk6__DOT__a;
    co_await this->__VnoInFunc_load_cfg(vlProcess, vlSymsp, VL_NULL_CHECK(Vtb_top_mlp_pkg__03a__03amlp_base_seq::__PVT__cfg, "mlp_sequences.sv", 200)
                                        ->__PVT__iris_ds);
    co_await this->__VnoInFunc_corner_vectors(vlProcess, vlSymsp);
    co_await this->__VnoInFunc_set_all(vlProcess, vlSymsp, 0xffffff80U, 0xffffff80U, 0U, 0U);
    co_await this->__VnoInFunc_corner_vectors(vlProcess, vlSymsp);
    co_await this->__VnoInFunc_set_all(vlProcess, vlSymsp, 0x0000007fU, 0x0000007fU, 0U, 0U);
    co_await this->__VnoInFunc_corner_vectors(vlProcess, vlSymsp);
    co_await this->__VnoInFunc_set_all(vlProcess, vlSymsp, 0x0000007fU, 0xffffff80U, 0x0000000fU, 7U);
    co_await this->__VnoInFunc_corner_vectors(vlProcess, vlSymsp);
    co_await this->__VnoInFunc_set_all(vlProcess, vlSymsp, 0xffffff80U, 0x0000007fU, 0x0000000fU, 0U);
    co_await this->__VnoInFunc_corner_vectors(vlProcess, vlSymsp);
    unnamedblk5__DOT__a = 0U;
    unnamedblk5__DOT__a = 0U;
    while (VL_GTS_III(32, 0x00000010U, unnamedblk5__DOT__a)) {
        co_await this->__VnoInFunc_send_cfg(vlProcess, vlSymsp, unnamedblk5__DOT__a, 
                                            ((0U != 
                                              VL_MODDIVS_III(32, unnamedblk5__DOT__a, (::IData)(2U)))
                                              ? 0xffffff9cU
                                              : 0x00000064U), 0U, 0U, 0U);
        unnamedblk5__DOT__a = ((::IData)(1U) + unnamedblk5__DOT__a);
    }
    unnamedblk6__DOT__a = 0U;
    unnamedblk6__DOT__a = 0x00000010U;
    while (VL_GTS_III(32, 0x00000014U, unnamedblk6__DOT__a)) {
        co_await this->__VnoInFunc_send_cfg(vlProcess, vlSymsp, unnamedblk6__DOT__a, 0U, 0U, 0U, 0U);
        unnamedblk6__DOT__a = ((::IData)(1U) + unnamedblk6__DOT__a);
    }
    co_await this->__VnoInFunc_send_cfg(vlProcess, vlSymsp, 0x00000014U, 1U, 0U, 0U, 0U);
    co_await this->__VnoInFunc_send_cfg(vlProcess, vlSymsp, 0x00000015U, 0U, 0U, 0U, 0U);
    co_await this->__VnoInFunc_corner_vectors(vlProcess, vlSymsp);
    co_return;
}

void Vtb_top_mlp_pkg__03a__03amlp_corner_seq::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_corner_seq::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_mlp_pkg__03a__03amlp_corner_seq::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_corner_seq::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_mlp_pkg__03a__03amlp_corner_seq::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_corner_seq::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_mlp_pkg__03a__03amlp_corner_seq::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_corner_seq::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

Vtb_top_mlp_pkg__03a__03amlp_corner_seq::~Vtb_top_mlp_pkg__03a__03amlp_corner_seq() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_corner_seq::~\n"); );
}

std::string Vtb_top_mlp_pkg__03a__03amlp_corner_seq::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_corner_seq::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_mlp_pkg__03a__03amlp_corner_seq::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_corner_seq::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vtb_top_mlp_pkg__03a__03amlp_base_seq::to_string_middle();
    return (out);
}
