// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_mlp_pkg__03a__03amlp_base_seq::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_base_seq::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_registry__pib0131420> __Vfunc_get__Vfuncout_23;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pib0131420__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_23);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_23;
}

void Vtb_top_mlp_pkg__03a__03amlp_base_seq::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_base_seq::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_base_seq> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_top_mlp_pkg__03a__03amlp_base_seq, vlProcess, vlSymsp, "mlp_base_seq"s);
    } else {
        tmp = VL_NEW(Vtb_top_mlp_pkg__03a__03amlp_base_seq, vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vtb_top_mlp_pkg__03a__03amlp_base_seq::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_base_seq::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "mlp_base_seq"s;
}

void Vtb_top_mlp_pkg__03a__03amlp_base_seq::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_uvm_pkg__03a__03auvm_sequence__pi38b6bb3c::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_base_seq::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

VlCoroutine Vtb_top_mlp_pkg__03a__03amlp_base_seq::__VnoInFunc_send_infer(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ xp, ::IData/*31:0*/ g) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_base_seq::__VnoInFunc_send_infer\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> it;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pi4adbd1a1__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "infer"s, VlNull{}, ""s, it);
    co_await this->__VnoInFunc_start_item(vlProcess, vlSymsp, it, 0xffffffffU, VlNull{});
    VL_NULL_CHECK(it, "mlp_sequences.sv", 23)->__PVT__op = 0U;
    VL_NULL_CHECK(it, "mlp_sequences.sv", 23)->__VnoInFunc_set_xp(vlSymsp, xp);
    VL_NULL_CHECK(it, "mlp_sequences.sv", 23)->__PVT__gap 
        = g;
    co_await this->__VnoInFunc_finish_item(vlProcess, vlSymsp, it, 0xffffffffU);
    co_return;
}

VlCoroutine Vtb_top_mlp_pkg__03a__03amlp_base_seq::__VnoInFunc_send_cfg(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ a, ::IData/*31:0*/ d, ::IData/*31:0*/ g, ::CData/*0:0*/ busy_ok, ::CData/*0:0*/ coll) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_base_seq::__VnoInFunc_send_cfg\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> it;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pi4adbd1a1__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "cfg"s, VlNull{}, ""s, it);
    co_await this->__VnoInFunc_start_item(vlProcess, vlSymsp, it, 0xffffffffU, VlNull{});
    VL_NULL_CHECK(it, "mlp_sequences.sv", 30)->__PVT__op = 1U;
    VL_NULL_CHECK(it, "mlp_sequences.sv", 30)->__PVT__addr 
        = (0x0000001fU & a);
    VL_NULL_CHECK(it, "mlp_sequences.sv", 30)->__PVT__data 
        = (0x000000ffU & d);
    VL_NULL_CHECK(it, "mlp_sequences.sv", 31)->__PVT__gap 
        = g;
    VL_NULL_CHECK(it, "mlp_sequences.sv", 31)->__PVT__while_busy 
        = busy_ok;
    VL_NULL_CHECK(it, "mlp_sequences.sv", 31)->__PVT__collide 
        = coll;
    co_await this->__VnoInFunc_finish_item(vlProcess, vlSymsp, it, 0xffffffffU);
    co_return;
}

VlCoroutine Vtb_top_mlp_pkg__03a__03amlp_base_seq::__VnoInFunc_send_ready(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ pct, ::IData/*31:0*/ hold) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_base_seq::__VnoInFunc_send_ready\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> it;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pi4adbd1a1__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "ready"s, VlNull{}, ""s, it);
    co_await this->__VnoInFunc_start_item(vlProcess, vlSymsp, it, 0xffffffffU, VlNull{});
    VL_NULL_CHECK(it, "mlp_sequences.sv", 38)->__PVT__op = 2U;
    VL_NULL_CHECK(it, "mlp_sequences.sv", 38)->__PVT__ready_pct 
        = pct;
    VL_NULL_CHECK(it, "mlp_sequences.sv", 38)->__PVT__hold 
        = hold;
    co_await this->__VnoInFunc_finish_item(vlProcess, vlSymsp, it, 0xffffffffU);
    co_return;
}

VlCoroutine Vtb_top_mlp_pkg__03a__03amlp_base_seq::__VnoInFunc_send_reset(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ w, ::IData/*31:0*/ hold, ::IData/*31:0*/ g) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_base_seq::__VnoInFunc_send_reset\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> it;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pi4adbd1a1__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "reset"s, VlNull{}, ""s, it);
    co_await this->__VnoInFunc_start_item(vlProcess, vlSymsp, it, 0xffffffffU, VlNull{});
    VL_NULL_CHECK(it, "mlp_sequences.sv", 45)->__PVT__op = 3U;
    VL_NULL_CHECK(it, "mlp_sequences.sv", 45)->__PVT__rst_when 
        = w;
    VL_NULL_CHECK(it, "mlp_sequences.sv", 45)->__PVT__rst_hold 
        = hold;
    VL_NULL_CHECK(it, "mlp_sequences.sv", 45)->__PVT__gap 
        = g;
    co_await this->__VnoInFunc_finish_item(vlProcess, vlSymsp, it, 0xffffffffU);
    co_return;
}

VlCoroutine Vtb_top_mlp_pkg__03a__03amlp_base_seq::__VnoInFunc_send_drain(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_base_seq::__VnoInFunc_send_drain\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> it;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pi4adbd1a1__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "drain"s, VlNull{}, ""s, it);
    co_await this->__VnoInFunc_start_item(vlProcess, vlSymsp, it, 0xffffffffU, VlNull{});
    VL_NULL_CHECK(it, "mlp_sequences.sv", 52)->__PVT__op = 4U;
    co_await this->__VnoInFunc_finish_item(vlProcess, vlSymsp, it, 0xffffffffU);
    co_return;
}

VlCoroutine Vtb_top_mlp_pkg__03a__03amlp_base_seq::__VnoInFunc_load_cfg(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_dataset> ds) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_base_seq::__VnoInFunc_load_cfg\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::IData/*31:0*/ unnamedblk1__DOT__i;
    unnamedblk1__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk1__DOT__i__Vloopsize;
    unnamedblk1__DOT__i__Vloopsize = 0;
    unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk1__DOT__i, VL_NULL_CHECK(ds, "mlp_sequences.sv", 58)
                      ->__PVT__cfg_addr.size())) {
        unnamedblk1__DOT__i__Vloopsize = VL_NULL_CHECK(ds, "mlp_sequences.sv", 58)
            ->__PVT__cfg_addr.size();
        co_await this->__VnoInFunc_send_cfg(vlProcess, vlSymsp, VL_NULL_CHECK(ds, "mlp_sequences.sv", 58)
                                            ->__PVT__cfg_addr.at(unnamedblk1__DOT__i), VL_NULL_CHECK(ds, "mlp_sequences.sv", 58)
                                            ->__PVT__cfg_data.at(unnamedblk1__DOT__i), 0U, 0U, 0U);
        if ((unnamedblk1__DOT__i__Vloopsize <= VL_NULL_CHECK(ds, "mlp_sequences.sv", 58)
             ->__PVT__cfg_addr.size())) {
            unnamedblk1__DOT__i = ((::IData)(1U) + unnamedblk1__DOT__i);
        }
    }
    co_return;
}

void Vtb_top_mlp_pkg__03a__03amlp_base_seq::__VnoInFunc_rnd_gap(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &rnd_gap__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_base_seq::__VnoInFunc_rnd_gap\n"); );
    // Body
    ::IData/*31:0*/ __VlefCond_2;
    ::IData/*31:0*/ __VlefExpr_1;
    ::IData/*31:0*/ __VlefExpr_0;
    __VlefExpr_0 = VL_URANDOM_RANGE_I(0x00000063U, 0U);
    if ((0x00000046U > __VlefExpr_0)) {
        __VlefCond_2 = 0U;
    } else {
        __VlefExpr_1 = VL_URANDOM_RANGE_I(4U, 1U);
        __VlefCond_2 = __VlefExpr_1;
    }
    rnd_gap__Vfuncrtn = __VlefCond_2;
}

void Vtb_top_mlp_pkg__03a__03amlp_base_seq::__VnoInFunc_rnd_i8(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &rnd_i8__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_base_seq::__VnoInFunc_rnd_i8\n"); );
    // Body
    ::IData/*31:0*/ __VlefExpr_0;
    __VlefExpr_0 = VL_URANDOM_RANGE_I(0x000000ffU, 0U);
    rnd_i8__Vfuncrtn = (__VlefExpr_0 - (::IData)(0x00000080U));
}

void Vtb_top_mlp_pkg__03a__03amlp_base_seq::__VnoInFunc_rnd_xp(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ mode, ::IData/*31:0*/ &rnd_xp__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_base_seq::__VnoInFunc_rnd_xp\n"); );
    // Locals
    ::IData/*31:0*/ __Vfunc_pack_x__a0_24;
    __Vfunc_pack_x__a0_24 = 0;
    ::IData/*31:0*/ __Vfunc_pack_x__a1_25;
    __Vfunc_pack_x__a1_25 = 0;
    ::IData/*31:0*/ __Vfunc_pack_x__a2_26;
    __Vfunc_pack_x__a2_26 = 0;
    ::IData/*31:0*/ __Vfunc_pack_x__a3_27;
    __Vfunc_pack_x__a3_27 = 0;
    // Body
    ::IData/*31:0*/ __VlefCond_3;
    ::IData/*31:0*/ __VlefCall_2__rnd_i8;
    ::CData/*0:0*/ __VlefLogAnd_1;
    ::IData/*31:0*/ __VlefExpr_0;
    ::IData/*31:0*/ unnamedblk2__DOT__i;
    unnamedblk2__DOT__i = 0;
    ::VlUnpacked<::IData/*31:0*/, 4> v;
    rnd_xp__Vfuncrtn = 0U;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        v[__Vi0] = 0;
    }
    unnamedblk2__DOT__i = 0U;
    while (VL_GTES_III(32, 3U, unnamedblk2__DOT__i)) {
        __VlefLogAnd_1 = (1U == mode);
        if (__VlefLogAnd_1) {
            __VlefExpr_0 = VL_URANDOM_RANGE_I(0x00000063U, 0U);
            __VlefLogAnd_1 = (0x00000050U > __VlefExpr_0);
        }
        if (__VlefLogAnd_1) {
            __VlefCond_3 = 0U;
        } else {
            this->__VnoInFunc_rnd_i8(vlSymsp, __VlefCall_2__rnd_i8);
            __VlefCond_3 = __VlefCall_2__rnd_i8;
        }
        v[(3U & unnamedblk2__DOT__i)] = __VlefCond_3;
        unnamedblk2__DOT__i = ((::IData)(1U) + unnamedblk2__DOT__i);
    }
    __Vfunc_pack_x__a3_27 = v[3U];
    __Vfunc_pack_x__a2_26 = v[2U];
    __Vfunc_pack_x__a1_25 = v[1U];
    __Vfunc_pack_x__a0_24 = v[0U];
    rnd_xp__Vfuncrtn = ((((0x0000ff00U & (__Vfunc_pack_x__a3_27 
                                          << 8U)) | 
                          (0x000000ffU & __Vfunc_pack_x__a2_26)) 
                         << 0x00000010U) | ((0x0000ff00U 
                                             & (__Vfunc_pack_x__a1_25 
                                                << 8U)) 
                                            | (0x000000ffU 
                                               & __Vfunc_pack_x__a0_24)));
}

VlCoroutine Vtb_top_mlp_pkg__03a__03amlp_base_seq::__VnoInFunc_send_rand_cfg(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_base_seq::__VnoInFunc_send_rand_cfg\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::IData/*31:0*/ __VlefExpr_5;
    ::IData/*31:0*/ __VlefExpr_4;
    ::IData/*31:0*/ __VlefCall_3__rnd_i8;
    ::IData/*31:0*/ __VlefCall_2__rnd_i8;
    ::IData/*31:0*/ __VlefExpr_1;
    ::IData/*31:0*/ __VlefExpr_0;
    ::IData/*31:0*/ unnamedblk3__DOT__a;
    ::IData/*31:0*/ unnamedblk4__DOT__a;
    ::CData/*0:0*/ small_w;
    __VlefExpr_0 = VL_URANDOM_RANGE_I(1U, 0U);
    small_w = (1U & __VlefExpr_0);
    unnamedblk3__DOT__a = 0U;
    while (VL_GTS_III(32, 0x00000010U, unnamedblk3__DOT__a)) {
        if (small_w) {
            __VlefExpr_1 = VL_URANDOM_RANGE_I(0x00000020U, 0U);
            __VlefCall_2__rnd_i8 = (__VlefExpr_1 - (::IData)(0x00000010U));
        } else {
            this->__VnoInFunc_rnd_i8(vlSymsp, __VlefCall_2__rnd_i8);
        }
        co_await this->__VnoInFunc_send_cfg(vlProcess, vlSymsp, unnamedblk3__DOT__a, __VlefCall_2__rnd_i8, 0U, 0U, 0U);
        unnamedblk3__DOT__a = ((::IData)(1U) + unnamedblk3__DOT__a);
    }
    unnamedblk4__DOT__a = 0x00000010U;
    while (VL_GTS_III(32, 0x00000014U, unnamedblk4__DOT__a)) {
        this->__VnoInFunc_rnd_i8(vlSymsp, __VlefCall_3__rnd_i8);
        co_await this->__VnoInFunc_send_cfg(vlProcess, vlSymsp, unnamedblk4__DOT__a, __VlefCall_3__rnd_i8, 0U, 0U, 0U);
        unnamedblk4__DOT__a = ((::IData)(1U) + unnamedblk4__DOT__a);
    }
    __VlefExpr_4 = VL_URANDOM_RANGE_I(((::IData)(small_w)
                                        ? 6U : 0x0000000cU), 0U);
    co_await this->__VnoInFunc_send_cfg(vlProcess, vlSymsp, 0x00000014U, __VlefExpr_4, 0U, 0U, 0U);
    __VlefExpr_5 = VL_URANDOM_RANGE_I(7U, 0U);
    co_await this->__VnoInFunc_send_cfg(vlProcess, vlSymsp, 0x00000015U, __VlefExpr_5, 0U, 0U, 0U);
    co_return;
}

VlCoroutine Vtb_top_mlp_pkg__03a__03amlp_base_seq::__VnoInFunc_run_seq(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_base_seq::__VnoInFunc_run_seq\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    co_return;
}

VlCoroutine Vtb_top_mlp_pkg__03a__03amlp_base_seq::__VnoInFunc_body(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_base_seq::__VnoInFunc_body\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    co_await this->__VnoInFunc_run_seq(vlProcess, vlSymsp);
    co_await this->__VnoInFunc_send_ready(vlProcess, vlSymsp, 0x00000064U, 0U);
    co_await this->__VnoInFunc_send_drain(vlProcess, vlSymsp);
    co_return;
}

void Vtb_top_mlp_pkg__03a__03amlp_base_seq::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_base_seq::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_mlp_pkg__03a__03amlp_base_seq::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_base_seq::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_mlp_pkg__03a__03amlp_base_seq::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_base_seq::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_mlp_pkg__03a__03amlp_base_seq::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_base_seq::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_mlp_pkg__03a__03amlp_base_seq::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_base_seq::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_top_mlp_pkg__03a__03amlp_base_seq::~Vtb_top_mlp_pkg__03a__03amlp_base_seq() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_base_seq::~\n"); );
}

std::string Vtb_top_mlp_pkg__03a__03amlp_base_seq::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_base_seq::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_mlp_pkg__03a__03amlp_base_seq::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_base_seq::to_string_middle\n"); );
    // Body
    std::string out;
    out += "cfg:" + VL_TO_STRING(__PVT__cfg);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_sequence__pi38b6bb3c::to_string_middle();
    return (out);
}
