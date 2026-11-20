// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi90223161> __Vfunc_get__Vfuncout_1952;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pi90223161__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1952);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_1952;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq, vlProcess, vlSymsp, "uvm_reg_hw_reset_seq"s);
    } else {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq, vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_hw_reset_seq"s;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_uvm_pkg__03a__03auvm_reg_sequence_::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    /*super.new*/;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc_body(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc_body\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::std::string __VlefCall_8__get_name;
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
    {
        if ((VlNull{} == Vtb_top_uvm_pkg__03a__03auvm_reg_sequence_::__PVT__model)) {
            this->__VnoInFunc_uvm_get_report_object(vlProcess, vlSymsp, __VlefCall_0__uvm_get_report_object);
            VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 89)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk1__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk1__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 89)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "uvm_reg_hw_reset_seq"s, __VlefCall_1__get_report_verbosity_level);
            __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
            if (__VlefLogAnd_3) {
                VL_NULL_CHECK(unnamedblk1__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 89)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "uvm_reg_hw_reset_seq"s, __VlefCall_2__get_report_action);
                __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_3))) {
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_hw_reset_seq"s, "No block or system specified to run sequence on"s, 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_hw_reset_seq.svh"s, 0x00000059U, ""s, 1U);
            }
            goto __Vlabel0;
        }
        this->__VnoInFunc_uvm_get_report_object(vlProcess, vlSymsp, __VlefCall_4__uvm_get_report_object);
        VL_NULL_CHECK(__VlefCall_4__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 92)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk2__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk2__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 92)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "STARTING_SEQ"s, __VlefCall_5__get_report_verbosity_level);
        __VlefLogAnd_7 = VL_LTES_III(32, 0x00000064U, __VlefCall_5__get_report_verbosity_level);
        if (__VlefLogAnd_7) {
            VL_NULL_CHECK(unnamedblk2__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 92)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "STARTING_SEQ"s, __VlefCall_6__get_report_action);
            __VlefLogAnd_7 = (0U != __VlefCall_6__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_7))) {
            this->__VnoInFunc_get_name(vlSymsp, __VlefCall_8__get_name);
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "STARTING_SEQ"s, 
                                              VL_CVT_PACK_STR_NN(
                                                                 VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("\n\nStarting "s, __VlefCall_8__get_name), " sequence...\n"s)), 0x00000064U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_hw_reset_seq.svh"s, 0x0000005cU, ""s, 1U);
        }
        this->__VnoInFunc_reset_blk(vlSymsp, Vtb_top_uvm_pkg__03a__03auvm_reg_sequence_::__PVT__model);
        VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_reg_sequence_::__PVT__model, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 95)->__VnoInFunc_reset(vlSymsp, "HARD"s);
        co_await this->__VnoInFunc_do_block(vlProcess, vlSymsp, Vtb_top_uvm_pkg__03a__03auvm_reg_sequence_::__PVT__model);
        __Vlabel0: ;
    }
    co_return;
}

extern const ::VlUnpacked<::std::string, 4> Vtb_top__ConstPool__CONSARRAY_10;

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc_do_block(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_block> blk) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc_do_block\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_mirror__status_5220;
    __Vtask_mirror__status_5220 = 0;
    ::std::string __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::std::string __VlefCall_34__get_full_name;
    ::std::string __VlefCall_33__get_full_name;
    ::std::string __VlefCall_32__get_type_name;
    ::CData/*0:0*/ __VlefLogAnd_31;
    ::IData/*31:0*/ __VlefCall_30__get_report_action;
    ::std::string __VlefCall_29__get_type_name;
    ::IData/*31:0*/ __VlefCall_28__get_report_verbosity_level;
    ::std::string __VlefCall_27__get_type_name;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_26__uvm_get_report_object;
    ::std::string __VlefCall_25__get_full_name;
    ::std::string __VlefCall_24__get_full_name;
    ::std::string __VlefCall_23__get_type_name;
    ::CData/*0:0*/ __VlefLogAnd_22;
    ::IData/*31:0*/ __VlefCall_21__get_report_action;
    ::std::string __VlefCall_20__get_type_name;
    ::IData/*31:0*/ __VlefCall_19__get_report_verbosity_level;
    ::std::string __VlefCall_18__get_type_name;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_17__uvm_get_report_object;
    ::IData/*31:0*/ __VlefCall_16__get_compare;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource__Tz7d09f080> __VlefCall_15__get_by_name;
    ::std::string __VlefCall_14__get_full_name;
    ::CData/*0:0*/ __VlefLogOr_13;
    ::IData/*31:0*/ __VlefCall_12__get_compare;
    ::CData/*0:0*/ __VlefCall_11__has_reset;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource__Tz7d09f080> __VlefCall_10__get_by_name;
    ::std::string __VlefCall_9__get_full_name;
    ::CData/*0:0*/ __VlefLogOr_8;
    ::CData/*0:0*/ __VlefCall_7__has_reset;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource__Tz7d09f080> __VlefCall_6__get_by_name;
    ::std::string __VlefCall_5__get_full_name;
    ::CData/*0:0*/ __VlefLogOr_4;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource__Tz7d09f080> __VlefCall_3__get_by_name;
    ::std::string __VlefCall_2__get_full_name;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource__Tz7d09f080> __VlefCall_1__get_by_name;
    ::std::string __VlefCall_0__get_full_name;
    ::IData/*31:0*/ unnamedblk3__DOT__ridx;
    unnamedblk3__DOT__ridx = 0;
    ::IData/*31:0*/ unnamedblk3__DOT__ridx__Vloopsize;
    unnamedblk3__DOT__ridx__Vloopsize = 0;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map>> unnamedblk3__DOT__unnamedblk4__DOT__rm;
    ::IData/*31:0*/ unnamedblk3__DOT__unnamedblk4__DOT__status;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_field>> unnamedblk3__DOT__unnamedblk4__DOT__fields;
    ::VlAssocArray<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_field>, ::IData/*31:0*/> unnamedblk3__DOT__unnamedblk4__DOT__field_check_restore;
    ::IData/*31:0*/ unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__fidx;
    unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__fidx = 0;
    ::IData/*31:0*/ unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__fidx__Vloopsize;
    unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__fidx__Vloopsize = 0;
    ::IData/*31:0*/ unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__midx;
    unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__midx = 0;
    ::IData/*31:0*/ unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__midx__Vloopsize;
    unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__midx__Vloopsize = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__unnamedblk7__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__unnamedblk8__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_field> unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__field;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_field> unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__field__Vnext;
    ::CData/*0:0*/ unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__field__Vmore;
    unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__field__Vmore = 0;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_block>> unnamedblk10__DOT__blks;
    ::IData/*31:0*/ unnamedblk10__DOT__unnamedblk11__DOT__i;
    unnamedblk10__DOT__unnamedblk11__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk10__DOT__unnamedblk11__DOT__i__Vloopsize;
    unnamedblk10__DOT__unnamedblk11__DOT__i__Vloopsize = 0;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg>> regs;
    {
        regs.clear();
        VL_NULL_CHECK(blk, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 109)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_resource_db__Tz7d09f080__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_0__get_full_name)), "NO_REG_TESTS"s, 0U, __VlefCall_1__get_by_name);
        __VlefLogOr_4 = (VlNull{} != __VlefCall_1__get_by_name);
        if ((1U & (~ (::IData)(__VlefLogOr_4)))) {
            VL_NULL_CHECK(blk, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 111)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_resource_db__Tz7d09f080__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_2__get_full_name)), "NO_REG_HW_RESET_TEST"s, 0U, __VlefCall_3__get_by_name);
            __VlefLogOr_4 = (VlNull{} != __VlefCall_3__get_by_name);
        }
        if (__VlefLogOr_4) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(blk, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 116)->__VnoInFunc_get_registers(vlSymsp, regs, 0U);
        unnamedblk3__DOT__ridx = 0U;
        while (VL_LTS_III(32, unnamedblk3__DOT__ridx, regs.size())) {
            unnamedblk3__DOT__ridx__Vloopsize = regs.size();
            {
                VL_NULL_CHECK(regs.at(unnamedblk3__DOT__ridx), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 119)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_resource_db__Tz7d09f080__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_5__get_full_name)), "NO_REG_TESTS"s, 0U, __VlefCall_6__get_by_name);
                __VlefLogOr_8 = (VlNull{} != __VlefCall_6__get_by_name);
                if ((1U & (~ (::IData)(__VlefLogOr_8)))) {
                    VL_NULL_CHECK(regs.at(unnamedblk3__DOT__ridx), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 121)->__VnoInFunc_has_reset(vlSymsp, "HARD"s, 0U, __VlefCall_7__has_reset);
                    __VlefLogOr_8 = (1U & (~ (::IData)(__VlefCall_7__has_reset)));
                }
                if ((1U & (~ (::IData)(__VlefLogOr_8)))) {
                    VL_NULL_CHECK(regs.at(unnamedblk3__DOT__ridx), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 122)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_9__get_full_name);
                    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_resource_db__Tz7d09f080__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_9__get_full_name)), "NO_REG_HW_RESET_TEST"s, 0U, __VlefCall_10__get_by_name);
                    __VlefLogOr_8 = (VlNull{} != __VlefCall_10__get_by_name);
                }
                if (__VlefLogOr_8) {
                    goto __Vlabel1;
                }
                unnamedblk3__DOT__unnamedblk4__DOT__rm.clear();
                unnamedblk3__DOT__unnamedblk4__DOT__status = 0U;
                unnamedblk3__DOT__unnamedblk4__DOT__fields.clear();
                unnamedblk3__DOT__unnamedblk4__DOT__field_check_restore.clear();
                unnamedblk3__DOT__unnamedblk4__DOT__field_check_restore.atDefault() = 0;
                VL_NULL_CHECK(regs.at(unnamedblk3__DOT__ridx), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 135)->__VnoInFunc_get_maps(vlSymsp, unnamedblk3__DOT__unnamedblk4__DOT__rm);
                VL_NULL_CHECK(regs.at(unnamedblk3__DOT__ridx), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 137)->__VnoInFunc_get_fields(vlSymsp, unnamedblk3__DOT__unnamedblk4__DOT__fields);
                unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__fidx = 0U;
                while (VL_LTS_III(32, unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__fidx, unnamedblk3__DOT__unnamedblk4__DOT__fields.size())) {
                    unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__fidx__Vloopsize 
                        = unnamedblk3__DOT__unnamedblk4__DOT__fields.size();
                    VL_NULL_CHECK(unnamedblk3__DOT__unnamedblk4__DOT__fields.at(unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__fidx), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 140)->__VnoInFunc_has_reset(vlSymsp, "HARD"s, 0U, __VlefCall_11__has_reset);
                    __VlefLogOr_13 = (1U & (~ (::IData)(__VlefCall_11__has_reset)));
                    if ((1U & (~ (::IData)(__VlefLogOr_13)))) {
                        VL_NULL_CHECK(unnamedblk3__DOT__unnamedblk4__DOT__fields.at(unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__fidx), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 141)->__VnoInFunc_get_compare(vlSymsp, __VlefCall_12__get_compare);
                        __VlefLogOr_13 = (0U == __VlefCall_12__get_compare);
                    }
                    if ((1U & (~ (::IData)(__VlefLogOr_13)))) {
                        VL_NULL_CHECK(unnamedblk3__DOT__unnamedblk4__DOT__fields.at(unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__fidx), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 142)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_14__get_full_name);
                        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_resource_db__Tz7d09f080__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_14__get_full_name)), "NO_REG_HW_RESET_TEST"s, 0U, __VlefCall_15__get_by_name);
                        __VlefLogOr_13 = (VlNull{} 
                                          != __VlefCall_15__get_by_name);
                    }
                    if (__VlefLogOr_13) {
                        VL_NULL_CHECK(unnamedblk3__DOT__unnamedblk4__DOT__fields.at(unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__fidx), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 144)->__VnoInFunc_get_compare(vlSymsp, __VlefCall_16__get_compare);
                        unnamedblk3__DOT__unnamedblk4__DOT__field_check_restore.atWrite(unnamedblk3__DOT__unnamedblk4__DOT__fields.at(unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__fidx)) 
                            = __VlefCall_16__get_compare;
                        VL_NULL_CHECK(unnamedblk3__DOT__unnamedblk4__DOT__fields.at(unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__fidx), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 145)->__VnoInFunc_set_compare(vlSymsp, 0U);
                    }
                    if ((unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__fidx__Vloopsize 
                         <= unnamedblk3__DOT__unnamedblk4__DOT__fields.size())) {
                        unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__fidx 
                            = ((::IData)(1U) + unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__fidx);
                    }
                }
                if ((unnamedblk3__DOT__unnamedblk4__DOT__fields.size() 
                     != unnamedblk3__DOT__unnamedblk4__DOT__field_check_restore.size())) {
                    unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__midx = 0U;
                    while (VL_LTS_III(32, unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__midx, unnamedblk3__DOT__unnamedblk4__DOT__rm.size())) {
                        unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__midx__Vloopsize 
                            = unnamedblk3__DOT__unnamedblk4__DOT__rm.size();
                        this->__VnoInFunc_uvm_get_report_object(vlProcess, vlSymsp, __VlefCall_17__uvm_get_report_object);
                        VL_NULL_CHECK(__VlefCall_17__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 153)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__unnamedblk7__DOT___local_report_object_);
                        this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_18__get_type_name);
                        VL_NULL_CHECK(unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__unnamedblk7__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 153)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_18__get_type_name), __VlefCall_19__get_report_verbosity_level);
                        __VlefLogAnd_22 = VL_LTES_III(32, 0x00000064U, __VlefCall_19__get_report_verbosity_level);
                        if (__VlefLogAnd_22) {
                            this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_20__get_type_name);
                            VL_NULL_CHECK(unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__unnamedblk7__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 153)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_20__get_type_name), __VlefCall_21__get_report_action);
                            __VlefLogAnd_22 = (0U != __VlefCall_21__get_report_action);
                        }
                        if (VL_UNLIKELY((__VlefLogAnd_22))) {
                            this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_23__get_type_name);
                            VL_NULL_CHECK(regs.at(unnamedblk3__DOT__ridx), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 153)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_24__get_full_name);
                            VL_NULL_CHECK(unnamedblk3__DOT__unnamedblk4__DOT__rm.at(unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__midx), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 153)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_25__get_full_name);
                            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, 
                                                              VL_CVT_PACK_STR_NN(__VlefCall_23__get_type_name), VL_SFORMATF_N_NX("Verifying reset value of register %s in map \"%s\"...",2
                                                                                , 'S',&(__VlefCall_24__get_full_name)
                                                                                , 'S',&(__VlefCall_25__get_full_name)) , 0x00000064U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_hw_reset_seq.svh"s, 0x00000099U, ""s, 1U);
                        }
                        co_await VL_NULL_CHECK(regs.at(unnamedblk3__DOT__ridx), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 155)->__VnoInFunc_mirror(vlProcess, vlSymsp, __Vtask_mirror__status_5220, 1U, 0U, unnamedblk3__DOT__unnamedblk4__DOT__rm.at(unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__midx), 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
                        unnamedblk3__DOT__unnamedblk4__DOT__status 
                            = __Vtask_mirror__status_5220;
                        if ((0U != unnamedblk3__DOT__unnamedblk4__DOT__status)) {
                            this->__VnoInFunc_uvm_get_report_object(vlProcess, vlSymsp, __VlefCall_26__uvm_get_report_object);
                            VL_NULL_CHECK(__VlefCall_26__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 160)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__unnamedblk8__DOT___local_report_object_);
                            this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_27__get_type_name);
                            VL_NULL_CHECK(unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__unnamedblk8__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 160)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_27__get_type_name), __VlefCall_28__get_report_verbosity_level);
                            __VlefLogAnd_31 = VL_LTES_III(32, 0U, __VlefCall_28__get_report_verbosity_level);
                            if (__VlefLogAnd_31) {
                                this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_29__get_type_name);
                                VL_NULL_CHECK(unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__unnamedblk8__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 160)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_29__get_type_name), __VlefCall_30__get_report_action);
                                __VlefLogAnd_31 = (0U 
                                                   != __VlefCall_30__get_report_action);
                            }
                            if (VL_UNLIKELY((__VlefLogAnd_31))) {
                                this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_32__get_type_name);
                                VL_NULL_CHECK(regs.at(unnamedblk3__DOT__ridx), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 160)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_33__get_full_name);
                                VL_NULL_CHECK(unnamedblk3__DOT__unnamedblk4__DOT__rm.at(unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__midx), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 160)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_34__get_full_name);
                                __Vtemp_1 = ((2U < unnamedblk3__DOT__unnamedblk4__DOT__status)
                                              ? ""s
                                              : Vtb_top__ConstPool__CONSARRAY_10
                                             [(3U & unnamedblk3__DOT__unnamedblk4__DOT__status)]);
                                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, 
                                                                   VL_CVT_PACK_STR_NN(__VlefCall_32__get_type_name), VL_SFORMATF_N_NX("Status was %s when reading reset value of register \"%s\" through map \"%s\".",3
                                                                                , 'S',&(__Vtemp_1)
                                                                                , 'S',&(__VlefCall_33__get_full_name)
                                                                                , 'S',&(__VlefCall_34__get_full_name)) , 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_hw_reset_seq.svh"s, 0x000000a0U, ""s, 1U);
                            }
                        }
                        if ((unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__midx__Vloopsize 
                             <= unnamedblk3__DOT__unnamedblk4__DOT__rm.size())) {
                            unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__midx 
                                = ((::IData)(1U) + unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__midx);
                        }
                    }
                }
                unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__field__Vmore 
                    = (0U != unnamedblk3__DOT__unnamedblk4__DOT__field_check_restore.first(unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__field__Vnext));
                while (unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__field__Vmore) {
                    unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__field 
                        = unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__field__Vnext;
                    unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__field__Vmore 
                        = (0U != unnamedblk3__DOT__unnamedblk4__DOT__field_check_restore.next(unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__field__Vnext));
                    VL_NULL_CHECK(unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__field, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 166)->__VnoInFunc_set_compare(vlSymsp, unnamedblk3__DOT__unnamedblk4__DOT__field_check_restore
                                                                                .at(unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__field));
                }
                __Vlabel1: ;
            }
            if ((unnamedblk3__DOT__ridx__Vloopsize 
                 <= regs.size())) {
                unnamedblk3__DOT__ridx = ((::IData)(1U) 
                                          + unnamedblk3__DOT__ridx);
            }
        }
        unnamedblk10__DOT__blks.clear();
        VL_NULL_CHECK(blk, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 174)->__VnoInFunc_get_blocks(vlSymsp, unnamedblk10__DOT__blks, 0U);
        unnamedblk10__DOT__unnamedblk11__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk10__DOT__unnamedblk11__DOT__i, unnamedblk10__DOT__blks.size())) {
            unnamedblk10__DOT__unnamedblk11__DOT__i__Vloopsize 
                = unnamedblk10__DOT__blks.size();
            co_await this->__VnoInFunc_do_block(vlProcess, vlSymsp, unnamedblk10__DOT__blks.at(unnamedblk10__DOT__unnamedblk11__DOT__i));
            if ((unnamedblk10__DOT__unnamedblk11__DOT__i__Vloopsize 
                 <= unnamedblk10__DOT__blks.size())) {
                unnamedblk10__DOT__unnamedblk11__DOT__i 
                    = ((::IData)(1U) + unnamedblk10__DOT__unnamedblk11__DOT__i);
            }
        }
        __Vlabel0: ;
    }
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc_reset_blk(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_block> blk) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc_reset_blk\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

Vtb_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::~Vtb_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vtb_top_uvm_pkg__03a__03auvm_reg_sequence_::to_string_middle();
    return (out);
}
