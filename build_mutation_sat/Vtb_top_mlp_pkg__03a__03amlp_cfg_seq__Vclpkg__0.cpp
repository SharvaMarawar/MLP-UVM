// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_mlp_pkg__03a__03amlp_cfg_seq::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_cfg_seq::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_registry__pid8fc8a3a> __Vfunc_get__Vfuncout_75;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pid8fc8a3a__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_75);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_75;
}

void Vtb_top_mlp_pkg__03a__03amlp_cfg_seq::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_cfg_seq::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_cfg_seq> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_top_mlp_pkg__03a__03amlp_cfg_seq, vlProcess, vlSymsp, "mlp_cfg_seq"s);
    } else {
        tmp = VL_NEW(Vtb_top_mlp_pkg__03a__03amlp_cfg_seq, vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vtb_top_mlp_pkg__03a__03amlp_cfg_seq::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_cfg_seq::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "mlp_cfg_seq"s;
}

void Vtb_top_mlp_pkg__03a__03amlp_cfg_seq::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_mlp_pkg__03a__03amlp_base_seq::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_cfg_seq::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    /*super.new*/;
}

VlCoroutine Vtb_top_mlp_pkg__03a__03amlp_cfg_seq::__VnoInFunc_run_seq(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_cfg_seq::__VnoInFunc_run_seq\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::IData/*31:0*/ __VlefCall_7__rnd_xp;
    ::IData/*31:0*/ __VlefCall_6__rnd_xp;
    ::IData/*31:0*/ __VlefCall_5__rnd_xp;
    ::IData/*31:0*/ __VlefCall_4__rnd_xp;
    ::IData/*31:0*/ __VlefCall_3__rnd_i8;
    ::IData/*31:0*/ __VlefCall_2__rnd_i8;
    ::IData/*31:0*/ __VlefCall_1__rnd_xp;
    ::IData/*31:0*/ __VlefCall_0__size;
    ::IData/*31:0*/ unnamedblk1__DOT__s;
    ::IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__l;
    ::IData/*31:0*/ unnamedblk3__DOT__a;
    ::IData/*31:0*/ unnamedblk4__DOT__a;
    ::IData/*31:0*/ unnamedblk5__DOT__r;
    ::IData/*31:0*/ unnamedblk5__DOT__unnamedblk6__DOT__k;
    co_await this->__VnoInFunc_load_cfg(vlProcess, vlSymsp, VL_NULL_CHECK(Vtb_top_mlp_pkg__03a__03amlp_base_seq::__PVT__cfg, "mlp_sequences.sv", 295)
                                        ->__PVT__iris_ds);
    unnamedblk1__DOT__s = 0U;
    unnamedblk1__DOT__s = 0U;
    while (VL_GTS_III(32, 0x00000010U, unnamedblk1__DOT__s)) {
        unnamedblk1__DOT__unnamedblk2__DOT__l = 0U;
        unnamedblk1__DOT__unnamedblk2__DOT__l = 0U;
        while (VL_GTS_III(32, 8U, unnamedblk1__DOT__unnamedblk2__DOT__l)) {
            co_await this->__VnoInFunc_send_cfg(vlProcess, vlSymsp, 0x00000014U, unnamedblk1__DOT__s, 0U, 0U, 0U);
            co_await this->__VnoInFunc_send_cfg(vlProcess, vlSymsp, 0x00000015U, unnamedblk1__DOT__unnamedblk2__DOT__l, 0U, 0U, 0U);
            VL_NULL_CHECK(VL_NULL_CHECK(Vtb_top_mlp_pkg__03a__03amlp_base_seq::__PVT__cfg, "mlp_sequences.sv", 300)
                          ->__PVT__iris_ds, "mlp_sequences.sv", 300)->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
            co_await this->__VnoInFunc_send_infer(vlProcess, vlSymsp, VL_NULL_CHECK(VL_NULL_CHECK(Vtb_top_mlp_pkg__03a__03amlp_base_seq::__PVT__cfg, "mlp_sequences.sv", 300)
                                                                                ->__PVT__iris_ds, "mlp_sequences.sv", 300)
                                                  ->__PVT__xp.at(
                                                                 VL_MODDIV_III(32, 
                                                                               ((unnamedblk1__DOT__s 
                                                                                << 3U) 
                                                                                + unnamedblk1__DOT__unnamedblk2__DOT__l), __VlefCall_0__size)), 0U);
            this->__VnoInFunc_rnd_xp(vlSymsp, 0U, __VlefCall_1__rnd_xp);
            co_await this->__VnoInFunc_send_infer(vlProcess, vlSymsp, __VlefCall_1__rnd_xp, 0U);
            unnamedblk1__DOT__unnamedblk2__DOT__l = 
                ((::IData)(1U) + unnamedblk1__DOT__unnamedblk2__DOT__l);
        }
        unnamedblk1__DOT__s = ((::IData)(1U) + unnamedblk1__DOT__s);
    }
    co_await this->__VnoInFunc_load_cfg(vlProcess, vlSymsp, VL_NULL_CHECK(Vtb_top_mlp_pkg__03a__03amlp_base_seq::__PVT__cfg, "mlp_sequences.sv", 305)
                                        ->__PVT__iris_ds);
    unnamedblk3__DOT__a = 0U;
    unnamedblk3__DOT__a = 0x00000016U;
    while (VL_GTS_III(32, 0x00000020U, unnamedblk3__DOT__a)) {
        this->__VnoInFunc_rnd_i8(vlSymsp, __VlefCall_2__rnd_i8);
        co_await this->__VnoInFunc_send_cfg(vlProcess, vlSymsp, unnamedblk3__DOT__a, __VlefCall_2__rnd_i8, 0U, 0U, 0U);
        unnamedblk3__DOT__a = ((::IData)(1U) + unnamedblk3__DOT__a);
    }
    co_await this->__VnoInFunc_send_infer(vlProcess, vlSymsp, VL_NULL_CHECK(VL_NULL_CHECK(Vtb_top_mlp_pkg__03a__03amlp_base_seq::__PVT__cfg, "mlp_sequences.sv", 307)
                                                                            ->__PVT__iris_ds, "mlp_sequences.sv", 307)
                                          ->__PVT__xp.at(3U), 0U);
    co_await this->__VnoInFunc_send_drain(vlProcess, vlSymsp);
    co_await this->__VnoInFunc_send_ready(vlProcess, vlSymsp, 0U, 0x0000000eU);
    co_await this->__VnoInFunc_send_infer(vlProcess, vlSymsp, VL_NULL_CHECK(VL_NULL_CHECK(Vtb_top_mlp_pkg__03a__03amlp_base_seq::__PVT__cfg, "mlp_sequences.sv", 312)
                                                                            ->__PVT__iris_ds, "mlp_sequences.sv", 312)
                                          ->__PVT__xp.at(5U), 0U);
    co_await this->__VnoInFunc_send_cfg(vlProcess, vlSymsp, 0U, 0x00000064U, 0U, 1U, 0U);
    co_await this->__VnoInFunc_send_cfg(vlProcess, vlSymsp, 0x00000010U, 0x00000032U, 0U, 1U, 0U);
    co_await this->__VnoInFunc_send_cfg(vlProcess, vlSymsp, 0x00000014U, 7U, 0U, 1U, 0U);
    co_await this->__VnoInFunc_send_cfg(vlProcess, vlSymsp, 0x00000015U, 0U, 0U, 1U, 0U);
    co_await this->__VnoInFunc_send_cfg(vlProcess, vlSymsp, 0x00000019U, 0x0000002aU, 0U, 1U, 0U);
    co_await this->__VnoInFunc_send_ready(vlProcess, vlSymsp, 0x00000064U, 0U);
    co_await this->__VnoInFunc_send_drain(vlProcess, vlSymsp);
    co_await this->__VnoInFunc_send_infer(vlProcess, vlSymsp, VL_NULL_CHECK(VL_NULL_CHECK(Vtb_top_mlp_pkg__03a__03amlp_base_seq::__PVT__cfg, "mlp_sequences.sv", 320)
                                                                            ->__PVT__iris_ds, "mlp_sequences.sv", 320)
                                          ->__PVT__xp.at(5U), 0U);
    co_await this->__VnoInFunc_send_drain(vlProcess, vlSymsp);
    co_await this->__VnoInFunc_send_infer(vlProcess, vlSymsp, VL_NULL_CHECK(VL_NULL_CHECK(Vtb_top_mlp_pkg__03a__03amlp_base_seq::__PVT__cfg, "mlp_sequences.sv", 325)
                                                                            ->__PVT__iris_ds, "mlp_sequences.sv", 325)
                                          ->__PVT__xp.at(9U), 0U);
    co_await this->__VnoInFunc_send_cfg(vlProcess, vlSymsp, 0x00000011U, 0x0000000bU, 0U, 1U, 0U);
    co_await this->__VnoInFunc_send_cfg(vlProcess, vlSymsp, 0x00000011U, 0x00000016U, 0U, 1U, 0U);
    co_await this->__VnoInFunc_send_cfg(vlProcess, vlSymsp, 0x00000011U, 0x00000021U, 0U, 1U, 0U);
    co_await this->__VnoInFunc_send_drain(vlProcess, vlSymsp);
    co_await this->__VnoInFunc_send_infer(vlProcess, vlSymsp, VL_NULL_CHECK(VL_NULL_CHECK(Vtb_top_mlp_pkg__03a__03amlp_base_seq::__PVT__cfg, "mlp_sequences.sv", 330)
                                                                            ->__PVT__iris_ds, "mlp_sequences.sv", 330)
                                          ->__PVT__xp.at(9U), 0U);
    co_await this->__VnoInFunc_send_drain(vlProcess, vlSymsp);
    unnamedblk4__DOT__a = 0U;
    unnamedblk4__DOT__a = 0U;
    while (VL_GTS_III(32, 0x00000016U, unnamedblk4__DOT__a)) {
        if (VL_GTS_III(32, 0x00000014U, unnamedblk4__DOT__a)) {
            this->__VnoInFunc_rnd_i8(vlSymsp, __VlefCall_3__rnd_i8);
        } else {
            __VlefCall_3__rnd_i8 = ((0x00000014U == unnamedblk4__DOT__a)
                                     ? 2U : 3U);
        }
        co_await this->__VnoInFunc_send_cfg(vlProcess, vlSymsp, unnamedblk4__DOT__a, __VlefCall_3__rnd_i8, 0U, 1U, 0U);
        unnamedblk4__DOT__a = ((::IData)(1U) + unnamedblk4__DOT__a);
    }
    this->__VnoInFunc_rnd_xp(vlSymsp, 0U, __VlefCall_4__rnd_xp);
    co_await this->__VnoInFunc_send_infer(vlProcess, vlSymsp, __VlefCall_4__rnd_xp, 0U);
    co_await this->__VnoInFunc_send_drain(vlProcess, vlSymsp);
    co_await this->__VnoInFunc_send_cfg(vlProcess, vlSymsp, 1U, 5U, 0U, 0U, 1U);
    co_await this->__VnoInFunc_send_cfg(vlProcess, vlSymsp, 0x00000010U, 0xfffffffdU, 0U, 0U, 1U);
    this->__VnoInFunc_rnd_xp(vlSymsp, 0U, __VlefCall_5__rnd_xp);
    co_await this->__VnoInFunc_send_infer(vlProcess, vlSymsp, __VlefCall_5__rnd_xp, 0U);
    co_await this->__VnoInFunc_send_drain(vlProcess, vlSymsp);
    co_await this->__VnoInFunc_send_ready(vlProcess, vlSymsp, 0U, 0x0000000aU);
    this->__VnoInFunc_rnd_xp(vlSymsp, 0U, __VlefCall_6__rnd_xp);
    co_await this->__VnoInFunc_send_infer(vlProcess, vlSymsp, __VlefCall_6__rnd_xp, 0U);
    co_await this->__VnoInFunc_send_cfg(vlProcess, vlSymsp, 2U, 9U, 0U, 1U, 1U);
    co_await this->__VnoInFunc_send_ready(vlProcess, vlSymsp, 0x00000064U, 0U);
    co_await this->__VnoInFunc_send_drain(vlProcess, vlSymsp);
    unnamedblk5__DOT__r = 0U;
    unnamedblk5__DOT__r = 0U;
    while (VL_GTS_III(32, 4U, unnamedblk5__DOT__r)) {
        co_await this->__VnoInFunc_send_rand_cfg(vlProcess, vlSymsp);
        unnamedblk5__DOT__unnamedblk6__DOT__k = 0U;
        unnamedblk5__DOT__unnamedblk6__DOT__k = 0U;
        while (VL_GTS_III(32, 4U, unnamedblk5__DOT__unnamedblk6__DOT__k)) {
            this->__VnoInFunc_rnd_xp(vlSymsp, 0U, __VlefCall_7__rnd_xp);
            co_await this->__VnoInFunc_send_infer(vlProcess, vlSymsp, __VlefCall_7__rnd_xp, 0U);
            unnamedblk5__DOT__unnamedblk6__DOT__k = 
                ((::IData)(1U) + unnamedblk5__DOT__unnamedblk6__DOT__k);
        }
        unnamedblk5__DOT__r = ((::IData)(1U) + unnamedblk5__DOT__r);
    }
    co_return;
}

void Vtb_top_mlp_pkg__03a__03amlp_cfg_seq::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_cfg_seq::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_mlp_pkg__03a__03amlp_cfg_seq::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_cfg_seq::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_mlp_pkg__03a__03amlp_cfg_seq::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_cfg_seq::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_mlp_pkg__03a__03amlp_cfg_seq::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_cfg_seq::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

Vtb_top_mlp_pkg__03a__03amlp_cfg_seq::~Vtb_top_mlp_pkg__03a__03amlp_cfg_seq() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_cfg_seq::~\n"); );
}

std::string Vtb_top_mlp_pkg__03a__03amlp_cfg_seq::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_cfg_seq::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_mlp_pkg__03a__03amlp_cfg_seq::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_cfg_seq::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vtb_top_mlp_pkg__03a__03amlp_base_seq::to_string_middle();
    return (out);
}
