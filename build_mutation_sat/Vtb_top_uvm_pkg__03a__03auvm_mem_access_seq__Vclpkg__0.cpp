// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_mem_access_seq::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem_access_seq::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_registry__pia9c6a113> __Vfunc_get__Vfuncout_1958;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pia9c6a113__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1958);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_1958;
}

void Vtb_top_uvm_pkg__03a__03auvm_mem_access_seq::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem_access_seq::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_mem_access_seq> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_mem_access_seq, vlProcess, vlSymsp, "uvm_mem_access_seq"s);
    } else {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_mem_access_seq, vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vtb_top_uvm_pkg__03a__03auvm_mem_access_seq::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem_access_seq::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_mem_access_seq"s;
}

void Vtb_top_uvm_pkg__03a__03auvm_mem_access_seq::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_uvm_pkg__03a__03auvm_reg_sequence_::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem_access_seq::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_mem_access_seq::__VnoInFunc_body(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem_access_seq::__VnoInFunc_body\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::std::string __VlefCall_4__get_name;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk1__DOT___local_report_object_;
    {
        if ((VlNull{} == Vtb_top_uvm_pkg__03a__03auvm_reg_sequence_::__PVT__model)) {
            this->__VnoInFunc_uvm_get_report_object(vlProcess, vlSymsp, __VlefCall_0__uvm_get_report_object);
            VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 244)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk1__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk1__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 244)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "uvm_mem_access_seq"s, __VlefCall_1__get_report_verbosity_level);
            __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
            if (__VlefLogAnd_3) {
                VL_NULL_CHECK(unnamedblk1__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 244)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "uvm_mem_access_seq"s, __VlefCall_2__get_report_action);
                __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_3))) {
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_access_seq"s, "No register model specified to run sequence on"s, 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh"s, 0x000000f4U, ""s, 1U);
            }
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "STARTING_SEQ"s, 
                                          VL_CVT_PACK_STR_NN(
                                                             VL_CONCATN_NNN(
                                                                            VL_CONCATN_NNN("\n\nStarting "s, __VlefCall_4__get_name), " sequence...\n"s)), 0x00000064U, ""s, 0U, ""s, 0U);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pi273dd4be__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "single_mem_access_seq"s, VlNull{}, ""s, this->__PVT__mem_seq);
        this->__VnoInFunc_reset_blk(vlSymsp, Vtb_top_uvm_pkg__03a__03auvm_reg_sequence_::__PVT__model);
        VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_reg_sequence_::__PVT__model, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 253)->__VnoInFunc_reset(vlSymsp, "HARD"s);
        co_await this->__VnoInFunc_do_block(vlProcess, vlSymsp, Vtb_top_uvm_pkg__03a__03auvm_reg_sequence_::__PVT__model);
        __Vlabel0: ;
    }
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_mem_access_seq::__VnoInFunc_do_block(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_block> blk) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem_access_seq::__VnoInFunc_do_block\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::std::string __VlefCall_21__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_20;
    ::IData/*31:0*/ __VlefCall_19__get_report_action;
    ::IData/*31:0*/ __VlefCall_18__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_17__uvm_get_report_object;
    ::CData/*0:0*/ __VlefLogAnd_16;
    ::CData/*0:0*/ __VlefCall_15__has_hdl_path;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_backdoor> __VlefCall_14__get_backdoor;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource__Tz7d09f080> __VlefCall_13__get_by_name;
    ::std::string __VlefCall_12__get_full_name;
    ::CData/*0:0*/ __VlefLogOr_11;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource__Tz7d09f080> __VlefCall_10__get_by_name;
    ::std::string __VlefCall_9__get_full_name;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource__Tz7d09f080> __VlefCall_8__get_by_name;
    ::std::string __VlefCall_7__get_full_name;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource__Tz7d09f080> __VlefCall_6__get_by_name;
    ::std::string __VlefCall_5__get_full_name;
    ::CData/*0:0*/ __VlefLogOr_4;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource__Tz7d09f080> __VlefCall_3__get_by_name;
    ::std::string __VlefCall_2__get_full_name;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource__Tz7d09f080> __VlefCall_1__get_by_name;
    ::std::string __VlefCall_0__get_full_name;
    ::IData/*31:0*/ unnamedblk2__DOT__i;
    unnamedblk2__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk2__DOT__i__Vloopsize;
    unnamedblk2__DOT__i__Vloopsize = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk2__DOT__unnamedblk3__DOT___local_report_object_;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_block>> unnamedblk4__DOT__blks;
    ::IData/*31:0*/ unnamedblk4__DOT__unnamedblk5__DOT__i;
    unnamedblk4__DOT__unnamedblk5__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk4__DOT__unnamedblk5__DOT__i__Vloopsize;
    unnamedblk4__DOT__unnamedblk5__DOT__i__Vloopsize = 0;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_mem>> mems;
    {
        mems.clear();
        VL_NULL_CHECK(blk, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 266)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_resource_db__Tz7d09f080__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_0__get_full_name)), "NO_REG_TESTS"s, 0U, __VlefCall_1__get_by_name);
        __VlefLogOr_4 = (VlNull{} != __VlefCall_1__get_by_name);
        if ((1U & (~ (::IData)(__VlefLogOr_4)))) {
            VL_NULL_CHECK(blk, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 268)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_resource_db__Tz7d09f080__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_2__get_full_name)), "NO_MEM_TESTS"s, 0U, __VlefCall_3__get_by_name);
            __VlefLogOr_4 = (VlNull{} != __VlefCall_3__get_by_name);
        }
        if ((1U & (~ (::IData)(__VlefLogOr_4)))) {
            VL_NULL_CHECK(blk, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 270)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_resource_db__Tz7d09f080__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_5__get_full_name)), "NO_MEM_ACCESS_TEST"s, 0U, __VlefCall_6__get_by_name);
            __VlefLogOr_4 = (VlNull{} != __VlefCall_6__get_by_name);
        }
        if (__VlefLogOr_4) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(blk, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 278)->__VnoInFunc_get_memories(vlSymsp, mems, 0U);
        unnamedblk2__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk2__DOT__i, mems.size())) {
            unnamedblk2__DOT__i__Vloopsize = mems.size();
            {
                VL_NULL_CHECK(mems.at(unnamedblk2__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 281)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_7__get_full_name);
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_resource_db__Tz7d09f080__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_7__get_full_name)), "NO_REG_TESTS"s, 0U, __VlefCall_8__get_by_name);
                __VlefLogOr_11 = (VlNull{} != __VlefCall_8__get_by_name);
                if ((1U & (~ (::IData)(__VlefLogOr_11)))) {
                    VL_NULL_CHECK(mems.at(unnamedblk2__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 283)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_9__get_full_name);
                    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_resource_db__Tz7d09f080__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_9__get_full_name)), "NO_MEM_TESTS"s, 0U, __VlefCall_10__get_by_name);
                    __VlefLogOr_11 = (VlNull{} != __VlefCall_10__get_by_name);
                }
                if ((1U & (~ (::IData)(__VlefLogOr_11)))) {
                    VL_NULL_CHECK(mems.at(unnamedblk2__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 285)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_12__get_full_name);
                    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_resource_db__Tz7d09f080__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_12__get_full_name)), "NO_MEM_ACCESS_TEST"s, 0U, __VlefCall_13__get_by_name);
                    __VlefLogOr_11 = (VlNull{} != __VlefCall_13__get_by_name);
                }
                if (__VlefLogOr_11) {
                    goto __Vlabel1;
                }
                VL_NULL_CHECK(mems.at(unnamedblk2__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 293)->__VnoInFunc_get_backdoor(vlSymsp, 1U, __VlefCall_14__get_backdoor);
                __VlefLogAnd_16 = (VlNull{} == __VlefCall_14__get_backdoor);
                if (__VlefLogAnd_16) {
                    VL_NULL_CHECK(mems.at(unnamedblk2__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 294)->__VnoInFunc_has_hdl_path(vlSymsp, ""s, __VlefCall_15__has_hdl_path);
                    __VlefLogAnd_16 = (1U & (~ (::IData)(__VlefCall_15__has_hdl_path)));
                }
                if (__VlefLogAnd_16) {
                    this->__VnoInFunc_uvm_get_report_object(vlProcess, vlSymsp, __VlefCall_17__uvm_get_report_object);
                    VL_NULL_CHECK(__VlefCall_17__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 296)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk2__DOT__unnamedblk3__DOT___local_report_object_);
                    VL_NULL_CHECK(unnamedblk2__DOT__unnamedblk3__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 296)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "uvm_mem_access_seq"s, __VlefCall_18__get_report_verbosity_level);
                    __VlefLogAnd_20 = VL_LTES_III(32, 0U, __VlefCall_18__get_report_verbosity_level);
                    if (__VlefLogAnd_20) {
                        VL_NULL_CHECK(unnamedblk2__DOT__unnamedblk3__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 296)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "uvm_mem_access_seq"s, __VlefCall_19__get_report_action);
                        __VlefLogAnd_20 = (0U != __VlefCall_19__get_report_action);
                    }
                    if (VL_UNLIKELY((__VlefLogAnd_20))) {
                        VL_NULL_CHECK(mems.at(unnamedblk2__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 296)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_21__get_full_name);
                        this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "uvm_mem_access_seq"s, VL_SFORMATF_N_NX("Memory \"%s\" does not have a backdoor mechanism available",1
                                                                                , 'S',&(__VlefCall_21__get_full_name)) , 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh"s, 0x00000128U, ""s, 1U);
                    }
                    goto __Vlabel1;
                }
                VL_NULL_CHECK(this->__PVT__mem_seq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 300)->__PVT__mem 
                    = mems.at(unnamedblk2__DOT__i);
                co_await VL_NULL_CHECK(this->__PVT__mem_seq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 301)->__VnoInFunc_start(vlProcess, vlSymsp, VlNull{}, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_mem_access_seq>{this}, 0xffffffffU, 1U);
                __Vlabel1: ;
            }
            if ((unnamedblk2__DOT__i__Vloopsize <= mems.size())) {
                unnamedblk2__DOT__i = ((::IData)(1U) 
                                       + unnamedblk2__DOT__i);
            }
        }
        unnamedblk4__DOT__blks.clear();
        VL_NULL_CHECK(blk, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 307)->__VnoInFunc_get_blocks(vlSymsp, unnamedblk4__DOT__blks, 1U);
        unnamedblk4__DOT__unnamedblk5__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk4__DOT__unnamedblk5__DOT__i, unnamedblk4__DOT__blks.size())) {
            unnamedblk4__DOT__unnamedblk5__DOT__i__Vloopsize 
                = unnamedblk4__DOT__blks.size();
            co_await this->__VnoInFunc_do_block(vlProcess, vlSymsp, unnamedblk4__DOT__blks.at(unnamedblk4__DOT__unnamedblk5__DOT__i));
            if ((unnamedblk4__DOT__unnamedblk5__DOT__i__Vloopsize 
                 <= unnamedblk4__DOT__blks.size())) {
                unnamedblk4__DOT__unnamedblk5__DOT__i 
                    = ((::IData)(1U) + unnamedblk4__DOT__unnamedblk5__DOT__i);
            }
        }
        __Vlabel0: ;
    }
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_mem_access_seq::__VnoInFunc_reset_blk(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_block> blk) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem_access_seq::__VnoInFunc_reset_blk\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_mem_access_seq::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem_access_seq::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_mem_access_seq::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem_access_seq::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_mem_access_seq::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem_access_seq::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_mem_access_seq::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem_access_seq::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_mem_access_seq::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem_access_seq::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_top_uvm_pkg__03a__03auvm_mem_access_seq::~Vtb_top_uvm_pkg__03a__03auvm_mem_access_seq() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem_access_seq::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_mem_access_seq::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem_access_seq::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_mem_access_seq::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem_access_seq::to_string_middle\n"); );
    // Body
    std::string out;
    out += "mem_seq:" + VL_TO_STRING(__PVT__mem_seq);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_reg_sequence_::to_string_middle();
    return (out);
}
