// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi578c11cc> __Vfunc_get__Vfuncout_1515;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pi578c11cc__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1515);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_1515;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_sequence_> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_reg_sequence_, vlProcess, vlSymsp, "uvm_reg_sequence_inst"s);
    } else {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_reg_sequence_, vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_sequence_::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_uvm_pkg__03a__03auvm_sequence_::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_reg_sequence_::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    this->__PVT__parent_select = 0U;
    /*super.new*/;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_body(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_body\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> __Vtask_peek__t_3587;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> __Vtask_get__t_3588;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::std::string __VlefCall_13__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_12;
    ::IData/*31:0*/ __VlefCall_11__get_report_action;
    ::IData/*31:0*/ __VlefCall_10__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_9__uvm_get_report_object;
    ::std::string __VlefCall_8__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_7;
    ::IData/*31:0*/ __VlefCall_6__get_report_action;
    ::IData/*31:0*/ __VlefCall_5__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_4__uvm_get_report_object;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk1__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk2__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk3__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> unnamedblk4__DOT__reg_item;
    if ((VlNull{} == Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer)) {
        this->__VnoInFunc_uvm_get_report_object(vlProcess, vlSymsp, __VlefCall_0__uvm_get_report_object);
        VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_sequence.svh", 140)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk1__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk1__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_sequence.svh", 140)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 3U, "NO_SEQR"s, __VlefCall_1__get_report_verbosity_level);
        __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
        if (__VlefLogAnd_3) {
            VL_NULL_CHECK(unnamedblk1__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_sequence.svh", 140)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 3U, "NO_SEQR"s, __VlefCall_2__get_report_action);
            __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_3))) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "NO_SEQR"s, "Sequence executing as translation sequence, but is not associated with a sequencer (m_sequencer == null)"s, 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_sequence.svh"s, 0x0000008cU, ""s, 1U);
        }
    }
    if ((VlNull{} == this->__PVT__reg_seqr)) {
        this->__VnoInFunc_uvm_get_report_object(vlProcess, vlSymsp, __VlefCall_4__uvm_get_report_object);
        VL_NULL_CHECK(__VlefCall_4__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_sequence.svh", 146)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk2__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk2__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_sequence.svh", 146)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "REG_XLATE_NO_SEQR"s, __VlefCall_5__get_report_verbosity_level);
        __VlefLogAnd_7 = VL_LTES_III(32, 0U, __VlefCall_5__get_report_verbosity_level);
        if (__VlefLogAnd_7) {
            VL_NULL_CHECK(unnamedblk2__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_sequence.svh", 146)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "REG_XLATE_NO_SEQR"s, __VlefCall_6__get_report_action);
            __VlefLogAnd_7 = (0U != __VlefCall_6__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_7))) {
            VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_sequence.svh", 146)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_8__get_full_name);
            this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "REG_XLATE_NO_SEQR"s, 
                                                 VL_CVT_PACK_STR_NN(
                                                                    VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Executing RegModel translation sequence on sequencer "s, __VlefCall_8__get_full_name), "' does not have an upstream sequencer defined. "s), "Execution of register items available only via direct calls to 'do_reg_item'"s)), 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_sequence.svh"s, 0x00000092U, ""s, 1U);
        }
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.waitForever(
                                                                         vlProcess, 
                                                                         "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_sequence.svh", 
                                                                         147);
    }
    this->__VnoInFunc_uvm_get_report_object(vlProcess, vlSymsp, __VlefCall_9__uvm_get_report_object);
    VL_NULL_CHECK(__VlefCall_9__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_sequence.svh", 151)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk3__DOT___local_report_object_);
    VL_NULL_CHECK(unnamedblk3__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_sequence.svh", 151)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "REG_XLATE_SEQ_START"s, __VlefCall_10__get_report_verbosity_level);
    __VlefLogAnd_12 = VL_LTES_III(32, 0x00000064U, __VlefCall_10__get_report_verbosity_level);
    if (__VlefLogAnd_12) {
        VL_NULL_CHECK(unnamedblk3__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_sequence.svh", 151)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "REG_XLATE_SEQ_START"s, __VlefCall_11__get_report_action);
        __VlefLogAnd_12 = (0U != __VlefCall_11__get_report_action);
    }
    if (VL_UNLIKELY((__VlefLogAnd_12))) {
        VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_sequence.svh", 151)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_13__get_full_name);
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "REG_XLATE_SEQ_START"s, 
                                          VL_CVT_PACK_STR_NN(
                                                             VL_CONCATN_NNN(
                                                                            VL_CONCATN_NNN("Starting RegModel translation sequence on sequencer "s, __VlefCall_13__get_full_name), "'"s)), 0x00000064U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_sequence.svh"s, 0x00000097U, ""s, 1U);
    }
    while (true) {
        co_await VL_NULL_CHECK(this->__PVT__reg_seqr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_sequence.svh", 154)->__VnoInFunc_peek(vlProcess, vlSymsp, __Vtask_peek__t_3587);
        unnamedblk4__DOT__reg_item = __Vtask_peek__t_3587;
        co_await this->__VnoInFunc_do_reg_item(vlProcess, vlSymsp, unnamedblk4__DOT__reg_item);
        co_await VL_NULL_CHECK(this->__PVT__reg_seqr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_sequence.svh", 156)->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__t_3588);
        unnamedblk4__DOT__reg_item = __Vtask_get__t_3588;
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.delay(0ULL, 
                                                                   vlProcess, 
                                                                   "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_sequence.svh", 
                                                                   157);
    }
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_do_reg_item(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_do_reg_item\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::CData/*0:0*/ __VlefLogAnd_11;
    ::IData/*31:0*/ __VlefCall_10__get_report_action;
    ::IData/*31:0*/ __VlefCall_9__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_8__uvm_get_report_object;
    ::CData/*0:0*/ __VlefLogAnd_7;
    ::IData/*31:0*/ __VlefCall_6__get_report_action;
    ::IData/*31:0*/ __VlefCall_5__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_4__uvm_get_report_object;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk5__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk6__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk7__DOT___local_report_object_;
    ::std::string rws;
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_sequence.svh", 172)->__VnoInFunc_convert2string(vlProcess, vlSymsp, rws);
    if ((VlNull{} == Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer)) {
        this->__VnoInFunc_uvm_get_report_object(vlProcess, vlSymsp, __VlefCall_0__uvm_get_report_object);
        VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_sequence.svh", 174)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk5__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk5__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_sequence.svh", 174)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 3U, "REG/DO_ITEM/NULL"s, __VlefCall_1__get_report_verbosity_level);
        __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
        if (__VlefLogAnd_3) {
            VL_NULL_CHECK(unnamedblk5__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_sequence.svh", 174)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 3U, "REG/DO_ITEM/NULL"s, __VlefCall_2__get_report_action);
            __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_3))) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "REG/DO_ITEM/NULL"s, "do_reg_item: m_sequencer is null"s, 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_sequence.svh"s, 0x000000aeU, ""s, 1U);
        }
    }
    if ((VlNull{} == this->__PVT__adapter)) {
        this->__VnoInFunc_uvm_get_report_object(vlProcess, vlSymsp, __VlefCall_4__uvm_get_report_object);
        VL_NULL_CHECK(__VlefCall_4__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_sequence.svh", 177)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk6__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk6__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_sequence.svh", 177)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 3U, "REG/DO_ITEM/NULL"s, __VlefCall_5__get_report_verbosity_level);
        __VlefLogAnd_7 = VL_LTES_III(32, 0U, __VlefCall_5__get_report_verbosity_level);
        if (__VlefLogAnd_7) {
            VL_NULL_CHECK(unnamedblk6__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_sequence.svh", 177)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 3U, "REG/DO_ITEM/NULL"s, __VlefCall_6__get_report_action);
            __VlefLogAnd_7 = (0U != __VlefCall_6__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_7))) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "REG/DO_ITEM/NULL"s, "do_reg_item: adapter handle is null"s, 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_sequence.svh"s, 0x000000b1U, ""s, 1U);
        }
    }
    this->__VnoInFunc_uvm_get_report_object(vlProcess, vlSymsp, __VlefCall_8__uvm_get_report_object);
    VL_NULL_CHECK(__VlefCall_8__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_sequence.svh", 180)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk7__DOT___local_report_object_);
    VL_NULL_CHECK(unnamedblk7__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_sequence.svh", 180)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "DO_RW_ACCESS"s, __VlefCall_9__get_report_verbosity_level);
    __VlefLogAnd_11 = VL_LTES_III(32, 0x0000012cU, __VlefCall_9__get_report_verbosity_level);
    if (__VlefLogAnd_11) {
        VL_NULL_CHECK(unnamedblk7__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_sequence.svh", 180)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "DO_RW_ACCESS"s, __VlefCall_10__get_report_action);
        __VlefLogAnd_11 = (0U != __VlefCall_10__get_report_action);
    }
    if (VL_UNLIKELY((__VlefLogAnd_11))) {
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "DO_RW_ACCESS"s, 
                                          VL_CVT_PACK_STR_NN(
                                                             VL_CONCATN_NNN("Doing transaction: "s, rws)), 0x0000012cU, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_sequence.svh"s, 0x000000b4U, ""s, 1U);
    }
    if ((0U == this->__PVT__parent_select)) {
        this->__PVT__upstream_parent = VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_sequence.svh", 183)
            ->__PVT__parent;
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_sequence.svh", 184)->__PVT__parent 
            = ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_sequence_>{this};
    }
    if ((1U == VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_sequence.svh", 187)
         ->__PVT__kind)) {
        co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_sequence.svh", 189)
                               ->__PVT__local_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_sequence.svh", 189)->__VnoInFunc_do_bus_write(vlProcess, vlSymsp, rw, Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, this->__PVT__adapter);
    } else {
        co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_sequence.svh", 194)
                               ->__PVT__local_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_sequence.svh", 194)->__VnoInFunc_do_bus_read(vlProcess, vlSymsp, rw, Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, this->__PVT__adapter);
    }
    if ((0U == this->__PVT__parent_select)) {
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_sequence.svh", 200)->__PVT__parent 
            = this->__PVT__upstream_parent;
    }
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_put_response(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> response_item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_put_response\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_put_base_response(vlProcess, vlSymsp, response_item);
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_sequence_::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_reg_sequence_::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_top_uvm_pkg__03a__03auvm_reg_sequence_::~Vtb_top_uvm_pkg__03a__03auvm_reg_sequence_() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_reg_sequence_::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_reg_sequence_::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_reg_sequence_::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_reg_sequence_::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_reg_sequence_::to_string_middle\n"); );
    // Body
    std::string out;
    out += "model:" + VL_TO_STRING(__PVT__model);
    out += ", adapter:" + VL_TO_STRING(__PVT__adapter);
    out += ", reg_seqr:" + VL_TO_STRING(__PVT__reg_seqr);
    out += ", parent_select:" + VL_TO_STRING(__PVT__parent_select);
    out += ", upstream_parent:" + VL_TO_STRING(__PVT__upstream_parent);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_sequence_::to_string_middle();
    return (out);
}
