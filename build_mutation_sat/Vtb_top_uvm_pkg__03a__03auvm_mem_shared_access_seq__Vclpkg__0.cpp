// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi84e27fc0> __Vfunc_get__Vfuncout_1963;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pi84e27fc0__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1963);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_1963;
}

void Vtb_top_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_mem_shared_access_seq> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_mem_shared_access_seq, vlProcess, vlSymsp, "uvm_mem_shared_access_seq"s);
    } else {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_mem_shared_access_seq, vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vtb_top_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_mem_shared_access_seq"s;
}

void Vtb_top_uvm_pkg__03a__03auvm_mem_shared_access_seq::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_uvm_pkg__03a__03auvm_reg_sequence_::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem_shared_access_seq::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__rand_reg_val = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_reg_randval, vlSymsp);
}

extern const ::VlUnpacked<::std::string, 4> Vtb_top__ConstPool__CONSARRAY_10;

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc_body(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc_body\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_peek__status_5253;
    __Vtask_peek__status_5253 = 0;
    ::QData/*63:0*/ __Vtask_peek__value_5254;
    __Vtask_peek__value_5254 = 0;
    ::IData/*31:0*/ __Vtask_read__status_5255;
    __Vtask_read__status_5255 = 0;
    ::QData/*63:0*/ __Vtask_read__value_5256;
    __Vtask_read__value_5256 = 0;
    ::IData/*31:0*/ __Vtask_write__status_5257;
    __Vtask_write__status_5257 = 0;
    ::IData/*31:0*/ __Vtask_read__status_5258;
    __Vtask_read__status_5258 = 0;
    ::QData/*63:0*/ __Vtask_read__value_5259;
    __Vtask_read__value_5259 = 0;
    ::std::string __Vtemp_1;
    ::std::string __Vtemp_2;
    ::std::string __Vtemp_3;
    ::std::string __Vtemp_4;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::std::string __VlefCall_62__get_full_name;
    ::std::string __VlefCall_61__get_full_name;
    ::std::string __VlefCall_60__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_59;
    ::IData/*31:0*/ __VlefCall_58__get_report_action;
    ::IData/*31:0*/ __VlefCall_57__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_56__uvm_get_report_object;
    ::IData/*31:0*/ __VlefCall_55__get_n_bits;
    ::std::string __VlefCall_54__get_access;
    ::std::string __VlefCall_53__get_access;
    ::std::string __VlefCall_52__get_full_name;
    ::std::string __VlefCall_51__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_50;
    ::IData/*31:0*/ __VlefCall_49__get_report_action;
    ::IData/*31:0*/ __VlefCall_48__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_47__uvm_get_report_object;
    ::std::string __VlefCall_46__get_full_name;
    ::std::string __VlefCall_45__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_44;
    ::IData/*31:0*/ __VlefCall_43__get_report_action;
    ::IData/*31:0*/ __VlefCall_42__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_41__uvm_get_report_object;
    ::IData/*31:0*/ __VlefCall_39__randomize;
    ::std::string __VlefCall_38__get_full_name;
    ::std::string __VlefCall_37__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_36;
    ::IData/*31:0*/ __VlefCall_35__get_report_action;
    ::IData/*31:0*/ __VlefCall_34__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_33__uvm_get_report_object;
    ::std::string __VlefCall_32__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_31;
    ::IData/*31:0*/ __VlefCall_30__get_report_action;
    ::IData/*31:0*/ __VlefCall_29__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_28__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_backdoor> __VlefCall_27__get_backdoor;
    ::QData/*63:0*/ __VlefCall_26__get_size;
    ::std::string __VlefCall_25__get_full_name;
    ::std::string __VlefCall_24__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_23;
    ::IData/*31:0*/ __VlefCall_22__get_report_action;
    ::IData/*31:0*/ __VlefCall_21__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_20__uvm_get_report_object;
    ::std::string __VlefCall_19__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_18;
    ::IData/*31:0*/ __VlefCall_17__get_report_action;
    ::IData/*31:0*/ __VlefCall_16__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_15__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_backdoor> __VlefCall_14__get_backdoor;
    ::IData/*31:0*/ __VlefCall_13__get_n_maps;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource__Tz7d09f080> __VlefCall_12__get_by_name;
    ::std::string __VlefCall_11__get_full_name;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource__Tz7d09f080> __VlefCall_10__get_by_name;
    ::std::string __VlefCall_9__get_full_name;
    ::CData/*0:0*/ __VlefLogOr_8;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource__Tz7d09f080> __VlefCall_7__get_by_name;
    ::std::string __VlefCall_6__get_full_name;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource__Tz7d09f080> __VlefCall_5__get_by_name;
    ::std::string __VlefCall_4__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk1__DOT___local_report_object_;
    ::IData/*31:0*/ unnamedblk2__DOT__j;
    unnamedblk2__DOT__j = 0;
    ::IData/*31:0*/ unnamedblk2__DOT__j__Vloopsize;
    unnamedblk2__DOT__j__Vloopsize = 0;
    ::std::string unnamedblk2__DOT__unnamedblk3__DOT__right;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk4__DOT___local_report_object_;
    ::IData/*31:0*/ unnamedblk5__DOT__j;
    unnamedblk5__DOT__j = 0;
    ::IData/*31:0*/ unnamedblk5__DOT__j__Vloopsize;
    unnamedblk5__DOT__j__Vloopsize = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk5__DOT__unnamedblk6__DOT___local_report_object_;
    ::IData/*31:0*/ unnamedblk5__DOT__unnamedblk7__DOT__offset;
    ::IData/*31:0*/ unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__status;
    ::QData/*63:0*/ unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__prev;
    ::QData/*63:0*/ unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__v;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk10__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk11__DOT___local_report_object_;
    ::IData/*31:0*/ unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk12__DOT__k;
    unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk12__DOT__k = 0;
    ::IData/*31:0*/ unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk12__DOT__k__Vloopsize;
    unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk12__DOT__k__Vloopsize = 0;
    ::QData/*63:0*/ unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk12__DOT__unnamedblk13__DOT__actual;
    ::QData/*63:0*/ unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk12__DOT__unnamedblk13__DOT__exp;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk14__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT___local_report_object_;
    ::IData/*31:0*/ read_from;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map>> maps;
    {
        read_from = 0U;
        maps.clear();
        if ((VlNull{} == this->__PVT__mem)) {
            this->__VnoInFunc_uvm_get_report_object(vlProcess, vlSymsp, __VlefCall_0__uvm_get_report_object);
            VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 251)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk1__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk1__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 251)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "uvm_mem_shared_access_seq"s, __VlefCall_1__get_report_verbosity_level);
            __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
            if (__VlefLogAnd_3) {
                VL_NULL_CHECK(unnamedblk1__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 251)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "uvm_mem_shared_access_seq"s, __VlefCall_2__get_report_action);
                __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_3))) {
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_shared_access_seq"s, "No memory specified to run sequence on"s, 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s, 0x000000fbU, ""s, 1U);
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 256)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_resource_db__Tz7d09f080__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_4__get_full_name)), "NO_REG_TESTS"s, 0U, __VlefCall_5__get_by_name);
        __VlefLogOr_8 = (VlNull{} != __VlefCall_5__get_by_name);
        if ((1U & (~ (::IData)(__VlefLogOr_8)))) {
            VL_NULL_CHECK(this->__PVT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 258)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_resource_db__Tz7d09f080__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_6__get_full_name)), "NO_MEM_TESTS"s, 0U, __VlefCall_7__get_by_name);
            __VlefLogOr_8 = (VlNull{} != __VlefCall_7__get_by_name);
        }
        if ((1U & (~ (::IData)(__VlefLogOr_8)))) {
            VL_NULL_CHECK(this->__PVT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 260)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_9__get_full_name);
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_resource_db__Tz7d09f080__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_9__get_full_name)), "NO_REG_SHARED_ACCESS_TEST"s, 0U, __VlefCall_10__get_by_name);
            __VlefLogOr_8 = (VlNull{} != __VlefCall_10__get_by_name);
        }
        if ((1U & (~ (::IData)(__VlefLogOr_8)))) {
            VL_NULL_CHECK(this->__PVT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 262)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_11__get_full_name);
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_resource_db__Tz7d09f080__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_11__get_full_name)), "NO_MEM_SHARED_ACCESS_TEST"s, 0U, __VlefCall_12__get_by_name);
            __VlefLogOr_8 = (VlNull{} != __VlefCall_12__get_by_name);
        }
        if (__VlefLogOr_8) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 270)->__VnoInFunc_get_n_maps(vlSymsp, __VlefCall_13__get_n_maps);
        if (VL_GTS_III(32, 2U, __VlefCall_13__get_n_maps)) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 274)->__VnoInFunc_get_maps(vlSymsp, maps);
        read_from = 0xffffffffU;
        VL_NULL_CHECK(this->__PVT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 279)->__VnoInFunc_get_backdoor(vlSymsp, 1U, __VlefCall_14__get_backdoor);
        if ((VlNull{} == __VlefCall_14__get_backdoor)) {
            {
                unnamedblk2__DOT__j = 0U;
                while (VL_LTS_III(32, unnamedblk2__DOT__j, maps.size())) {
                    unnamedblk2__DOT__j__Vloopsize 
                        = maps.size();
                    unnamedblk2__DOT__unnamedblk3__DOT__right = ""s;
                    VL_NULL_CHECK(this->__PVT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 282)->__VnoInFunc_get_access(vlProcess, vlSymsp, maps.at(unnamedblk2__DOT__j), unnamedblk2__DOT__unnamedblk3__DOT__right);
                    if ((("RW"s == unnamedblk2__DOT__unnamedblk3__DOT__right) 
                         | ("RO"s == unnamedblk2__DOT__unnamedblk3__DOT__right))) {
                        read_from = unnamedblk2__DOT__j;
                        goto __Vlabel1;
                    }
                    if ((unnamedblk2__DOT__j__Vloopsize 
                         <= maps.size())) {
                        unnamedblk2__DOT__j = ((::IData)(1U) 
                                               + unnamedblk2__DOT__j);
                    }
                }
                __Vlabel1: ;
            }
            if (VL_GTS_III(32, 0U, read_from)) {
                this->__VnoInFunc_uvm_get_report_object(vlProcess, vlSymsp, __VlefCall_15__uvm_get_report_object);
                VL_NULL_CHECK(__VlefCall_15__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 290)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk4__DOT___local_report_object_);
                VL_NULL_CHECK(unnamedblk4__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 290)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "uvm_mem_shared_access_seq"s, __VlefCall_16__get_report_verbosity_level);
                __VlefLogAnd_18 = VL_LTES_III(32, 0U, __VlefCall_16__get_report_verbosity_level);
                if (__VlefLogAnd_18) {
                    VL_NULL_CHECK(unnamedblk4__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 290)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "uvm_mem_shared_access_seq"s, __VlefCall_17__get_report_action);
                    __VlefLogAnd_18 = (0U != __VlefCall_17__get_report_action);
                }
                if (VL_UNLIKELY((__VlefLogAnd_18))) {
                    VL_NULL_CHECK(this->__PVT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 290)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_19__get_full_name);
                    this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "uvm_mem_shared_access_seq"s, VL_SFORMATF_N_NX("Memory \"%s\" cannot be read from any maps or backdoor. Shared access not verified.",1
                                                                                , 'S',&(__VlefCall_19__get_full_name)) , 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s, 0x00000122U, ""s, 1U);
                }
                goto __Vlabel0;
            }
        }
        unnamedblk5__DOT__j = 0U;
        while (VL_LTS_III(32, unnamedblk5__DOT__j, maps.size())) {
            unnamedblk5__DOT__j__Vloopsize = maps.size();
            this->__VnoInFunc_uvm_get_report_object(vlProcess, vlSymsp, __VlefCall_20__uvm_get_report_object);
            VL_NULL_CHECK(__VlefCall_20__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 299)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk5__DOT__unnamedblk6__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk5__DOT__unnamedblk6__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 299)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "uvm_mem_shared_access_seq"s, __VlefCall_21__get_report_verbosity_level);
            __VlefLogAnd_23 = VL_LTES_III(32, 0x00000064U, __VlefCall_21__get_report_verbosity_level);
            if (__VlefLogAnd_23) {
                VL_NULL_CHECK(unnamedblk5__DOT__unnamedblk6__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 299)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "uvm_mem_shared_access_seq"s, __VlefCall_22__get_report_action);
                __VlefLogAnd_23 = (0U != __VlefCall_22__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_23))) {
                VL_NULL_CHECK(this->__PVT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 299)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_24__get_full_name);
                VL_NULL_CHECK(maps.at(unnamedblk5__DOT__j), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 299)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_25__get_full_name);
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "uvm_mem_shared_access_seq"s, VL_SFORMATF_N_NX("Writing shared memory \"%s\" via map \"%s\".",2
                                                                                , 'S',&(__VlefCall_24__get_full_name)
                                                                                , 'S',&(__VlefCall_25__get_full_name)) , 0x00000064U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s, 0x0000012bU, ""s, 1U);
            }
            unnamedblk5__DOT__unnamedblk7__DOT__offset = 0U;
            unnamedblk5__DOT__unnamedblk7__DOT__offset = 0U;
            while (true) {
                VL_NULL_CHECK(this->__PVT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 302)->__VnoInFunc_get_size(vlSymsp, __VlefCall_26__get_size);
                if (!(((::QData)((::IData)(unnamedblk5__DOT__unnamedblk7__DOT__offset)) 
                       < __VlefCall_26__get_size))) break;
                unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__status = 0U;
                unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__prev = 0ULL;
                unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__v = 0ULL;
                VL_NULL_CHECK(this->__PVT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 307)->__VnoInFunc_get_backdoor(vlSymsp, 1U, __VlefCall_27__get_backdoor);
                if ((VlNull{} != __VlefCall_27__get_backdoor)) {
                    VL_NULL_CHECK(this->__PVT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 308)->__VnoInFunc_peek(vlProcess, vlSymsp, __Vtask_peek__status_5253, 
                                                                                VL_EXTENDS_QI(64,32, unnamedblk5__DOT__unnamedblk7__DOT__offset), __Vtask_peek__value_5254, ""s, VlNull{}, VlNull{}, ""s, 0U);
                    unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__status 
                        = __Vtask_peek__status_5253;
                    unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__prev 
                        = __Vtask_peek__value_5254;
                    if ((0U != unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__status)) {
                        this->__VnoInFunc_uvm_get_report_object(vlProcess, vlSymsp, __VlefCall_28__uvm_get_report_object);
                        VL_NULL_CHECK(__VlefCall_28__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 311)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT___local_report_object_);
                        VL_NULL_CHECK(unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 311)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "uvm_mem_shared_access_seq"s, __VlefCall_29__get_report_verbosity_level);
                        __VlefLogAnd_31 = VL_LTES_III(32, 0U, __VlefCall_29__get_report_verbosity_level);
                        if (__VlefLogAnd_31) {
                            VL_NULL_CHECK(unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 311)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "uvm_mem_shared_access_seq"s, __VlefCall_30__get_report_action);
                            __VlefLogAnd_31 = (0U != __VlefCall_30__get_report_action);
                        }
                        if (VL_UNLIKELY((__VlefLogAnd_31))) {
                            VL_NULL_CHECK(this->__PVT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 311)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_32__get_full_name);
                            __Vtemp_1 = ((2U < unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__status)
                                          ? ""s : Vtb_top__ConstPool__CONSARRAY_10
                                         [(3U & unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__status)]);
                            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_shared_access_seq"s, VL_SFORMATF_N_NX("Status was %s when reading initial value of \"%s\"[%0d] through backdoor.",3
                                                                                , 'S',&(__Vtemp_1)
                                                                                , 'S',&(__VlefCall_32__get_full_name)
                                                                                , '~',32,unnamedblk5__DOT__unnamedblk7__DOT__offset) , 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s, 0x00000137U, ""s, 1U);
                        }
                    }
                } else {
                    co_await VL_NULL_CHECK(this->__PVT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 315)->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__status_5255, 
                                                                                VL_EXTENDS_QI(64,32, unnamedblk5__DOT__unnamedblk7__DOT__offset), __Vtask_read__value_5256, 0U, maps.at(read_from), 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_mem_shared_access_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
                    unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__status 
                        = __Vtask_read__status_5255;
                    unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__prev 
                        = __Vtask_read__value_5256;
                    if ((0U != unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__status)) {
                        this->__VnoInFunc_uvm_get_report_object(vlProcess, vlSymsp, __VlefCall_33__uvm_get_report_object);
                        VL_NULL_CHECK(__VlefCall_33__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 319)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk10__DOT___local_report_object_);
                        VL_NULL_CHECK(unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk10__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 319)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "uvm_mem_shared_access_seq"s, __VlefCall_34__get_report_verbosity_level);
                        __VlefLogAnd_36 = VL_LTES_III(32, 0U, __VlefCall_34__get_report_verbosity_level);
                        if (__VlefLogAnd_36) {
                            VL_NULL_CHECK(unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk10__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 319)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "uvm_mem_shared_access_seq"s, __VlefCall_35__get_report_action);
                            __VlefLogAnd_36 = (0U != __VlefCall_35__get_report_action);
                        }
                        if (VL_UNLIKELY((__VlefLogAnd_36))) {
                            VL_NULL_CHECK(this->__PVT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 319)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_37__get_full_name);
                            VL_NULL_CHECK(maps.at(read_from), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 319)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_38__get_full_name);
                            __Vtemp_2 = ((2U < unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__status)
                                          ? ""s : Vtb_top__ConstPool__CONSARRAY_10
                                         [(3U & unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__status)]);
                            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_shared_access_seq"s, VL_SFORMATF_N_NX("Status was %s when reading initial value of \"%s\"[%0d] through map \"%s\".",4
                                                                                , 'S',&(__Vtemp_2)
                                                                                , 'S',&(__VlefCall_37__get_full_name)
                                                                                , '~',32,unnamedblk5__DOT__unnamedblk7__DOT__offset
                                                                                , 'S',&(__VlefCall_38__get_full_name)) , 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s, 0x0000013fU, ""s, 1U);
                        }
                    }
                }
                if ((VlNull{} != this->__PVT__rand_reg_val)) {
                    VL_NULL_CHECK(this->__PVT__rand_reg_val, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 325)->__VnoInFunc_randomize(vlSymsp, __VlefCall_39__randomize);
                }
                unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__v 
                    = VL_NULL_CHECK(this->__PVT__rand_reg_val, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 326)
                    ->__PVT__randval;
                co_await VL_NULL_CHECK(this->__PVT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 328)->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__status_5257, 
                                                                                VL_EXTENDS_QI(64,32, unnamedblk5__DOT__unnamedblk7__DOT__offset), unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__v, 0U, maps.at(unnamedblk5__DOT__j), 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_mem_shared_access_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
                unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__status 
                    = __Vtask_write__status_5257;
                if ((0U != unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__status)) {
                    this->__VnoInFunc_uvm_get_report_object(vlProcess, vlSymsp, __VlefCall_41__uvm_get_report_object);
                    VL_NULL_CHECK(__VlefCall_41__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 331)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk11__DOT___local_report_object_);
                    VL_NULL_CHECK(unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk11__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 331)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "uvm_mem_shared_access_seq"s, __VlefCall_42__get_report_verbosity_level);
                    __VlefLogAnd_44 = VL_LTES_III(32, 0U, __VlefCall_42__get_report_verbosity_level);
                    if (__VlefLogAnd_44) {
                        VL_NULL_CHECK(unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk11__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 331)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "uvm_mem_shared_access_seq"s, __VlefCall_43__get_report_action);
                        __VlefLogAnd_44 = (0U != __VlefCall_43__get_report_action);
                    }
                    if (VL_UNLIKELY((__VlefLogAnd_44))) {
                        VL_NULL_CHECK(this->__PVT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 331)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_45__get_full_name);
                        VL_NULL_CHECK(maps.at(unnamedblk5__DOT__j), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 331)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_46__get_full_name);
                        __Vtemp_3 = ((2U < unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__status)
                                      ? ""s : Vtb_top__ConstPool__CONSARRAY_10
                                     [(3U & unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__status)]);
                        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_shared_access_seq"s, VL_SFORMATF_N_NX("Status was %s when writing \"%s\"[%0d] through map \"%s\".",4
                                                                                , 'S',&(__Vtemp_3)
                                                                                , 'S',&(__VlefCall_45__get_full_name)
                                                                                , '~',32,unnamedblk5__DOT__unnamedblk7__DOT__offset
                                                                                , 'S',&(__VlefCall_46__get_full_name)) , 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s, 0x0000014bU, ""s, 1U);
                    }
                }
                unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk12__DOT__k = 0U;
                while (VL_LTS_III(32, unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk12__DOT__k, maps.size())) {
                    unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk12__DOT__k__Vloopsize 
                        = maps.size();
                    unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk12__DOT__unnamedblk13__DOT__actual = 0ULL;
                    unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk12__DOT__unnamedblk13__DOT__exp = 0ULL;
                    co_await VL_NULL_CHECK(this->__PVT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 338)->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__status_5258, 
                                                                                VL_EXTENDS_QI(64,32, unnamedblk5__DOT__unnamedblk7__DOT__offset), __Vtask_read__value_5259, 0U, maps.at(unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk12__DOT__k), 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_mem_shared_access_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
                    unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__status 
                        = __Vtask_read__status_5258;
                    unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk12__DOT__unnamedblk13__DOT__actual 
                        = __Vtask_read__value_5259;
                    if ((0U != unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__status)) {
                        this->__VnoInFunc_uvm_get_report_object(vlProcess, vlSymsp, __VlefCall_47__uvm_get_report_object);
                        VL_NULL_CHECK(__VlefCall_47__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 341)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk14__DOT___local_report_object_);
                        VL_NULL_CHECK(unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk14__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 341)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "uvm_mem_shared_access_seq"s, __VlefCall_48__get_report_verbosity_level);
                        __VlefLogAnd_50 = VL_LTES_III(32, 0U, __VlefCall_48__get_report_verbosity_level);
                        if (__VlefLogAnd_50) {
                            VL_NULL_CHECK(unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk14__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 341)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "uvm_mem_shared_access_seq"s, __VlefCall_49__get_report_action);
                            __VlefLogAnd_50 = (0U != __VlefCall_49__get_report_action);
                        }
                        if (VL_UNLIKELY((__VlefLogAnd_50))) {
                            VL_NULL_CHECK(this->__PVT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 341)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_51__get_full_name);
                            VL_NULL_CHECK(maps.at(unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk12__DOT__k), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 341)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_52__get_full_name);
                            __Vtemp_4 = ((2U < unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__status)
                                          ? ""s : Vtb_top__ConstPool__CONSARRAY_10
                                         [(3U & unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__status)]);
                            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_shared_access_seq"s, VL_SFORMATF_N_NX("Status was %s when reading %s[%0d] through map \"%s\".",4
                                                                                , 'S',&(__Vtemp_4)
                                                                                , 'S',&(__VlefCall_51__get_full_name)
                                                                                , '~',32,unnamedblk5__DOT__unnamedblk7__DOT__offset
                                                                                , 'S',&(__VlefCall_52__get_full_name)) , 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s, 0x00000155U, ""s, 1U);
                        }
                    }
                    unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk12__DOT__unnamedblk13__DOT__exp 
                        = unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__v;
                    VL_NULL_CHECK(this->__PVT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 346)->__VnoInFunc_get_access(vlProcess, vlSymsp, maps.at(unnamedblk5__DOT__j), __VlefCall_53__get_access);
                    if (("RO"s == __VlefCall_53__get_access)) {
                        unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk12__DOT__unnamedblk13__DOT__exp 
                            = unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__prev;
                    }
                    VL_NULL_CHECK(this->__PVT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 349)->__VnoInFunc_get_access(vlProcess, vlSymsp, maps.at(unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk12__DOT__k), __VlefCall_54__get_access);
                    if (("WO"s == __VlefCall_54__get_access)) {
                        unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk12__DOT__unnamedblk13__DOT__exp = 0ULL;
                    }
                    VL_NULL_CHECK(this->__PVT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 353)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_55__get_n_bits);
                    unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk12__DOT__unnamedblk13__DOT__exp 
                        = (unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk12__DOT__unnamedblk13__DOT__exp 
                           & (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_55__get_n_bits) 
                              - 1ULL));
                    if ((unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk12__DOT__unnamedblk13__DOT__actual 
                         != unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk12__DOT__unnamedblk13__DOT__exp)) {
                        this->__VnoInFunc_uvm_get_report_object(vlProcess, vlSymsp, __VlefCall_56__uvm_get_report_object);
                        VL_NULL_CHECK(__VlefCall_56__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 357)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT___local_report_object_);
                        VL_NULL_CHECK(unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 357)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "uvm_mem_shared_access_seq"s, __VlefCall_57__get_report_verbosity_level);
                        __VlefLogAnd_59 = VL_LTES_III(32, 0U, __VlefCall_57__get_report_verbosity_level);
                        if (__VlefLogAnd_59) {
                            VL_NULL_CHECK(unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 357)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "uvm_mem_shared_access_seq"s, __VlefCall_58__get_report_action);
                            __VlefLogAnd_59 = (0U != __VlefCall_58__get_report_action);
                        }
                        if (VL_UNLIKELY((__VlefLogAnd_59))) {
                            VL_NULL_CHECK(this->__PVT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 357)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_60__get_full_name);
                            VL_NULL_CHECK(maps.at(unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk12__DOT__k), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 357)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_61__get_full_name);
                            VL_NULL_CHECK(maps.at(unnamedblk5__DOT__j), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 357)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_62__get_full_name);
                            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_shared_access_seq"s, VL_SFORMATF_N_NX("%s[%0d] through map \"%s\" is 'h%h instead of 'h%h after writing 'h%h via map \"%s\" over 'h%h.",8
                                                                                , 'S',&(__VlefCall_60__get_full_name)
                                                                                , '~',32,unnamedblk5__DOT__unnamedblk7__DOT__offset
                                                                                , 'S',&(__VlefCall_61__get_full_name)
                                                                                , '#',64,unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk12__DOT__unnamedblk13__DOT__actual
                                                                                , '#',64,unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk12__DOT__unnamedblk13__DOT__exp
                                                                                , '#',64,unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__v
                                                                                , 'S',&(__VlefCall_62__get_full_name)
                                                                                , '#',64,unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__prev) , 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s, 0x00000165U, ""s, 1U);
                        }
                    }
                    if ((unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk12__DOT__k__Vloopsize 
                         <= maps.size())) {
                        unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk12__DOT__k 
                            = ((::IData)(1U) + unnamedblk5__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk12__DOT__k);
                    }
                }
                unnamedblk5__DOT__unnamedblk7__DOT__offset 
                    = ((::IData)(1U) + unnamedblk5__DOT__unnamedblk7__DOT__offset);
            }
            if ((unnamedblk5__DOT__j__Vloopsize <= maps.size())) {
                unnamedblk5__DOT__j = ((::IData)(1U) 
                                       + unnamedblk5__DOT__j);
            }
        }
        __Vlabel0: ;
    }
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc___VBasicRand\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0__randomize;
    __VBasicRand__Vfuncrtn = 1U;
    if ((VlNull{} != this->__PVT__rand_reg_val)) {
        VL_NULL_CHECK(this->__PVT__rand_reg_val, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 231)->__VnoInFunc_randomize(vlSymsp, __VlefCall_0__randomize);
        __VBasicRand__Vfuncrtn = (__VBasicRand__Vfuncrtn 
                                  & __VlefCall_0__randomize);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_mem_shared_access_seq::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem_shared_access_seq::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_top_uvm_pkg__03a__03auvm_mem_shared_access_seq::~Vtb_top_uvm_pkg__03a__03auvm_mem_shared_access_seq() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem_shared_access_seq::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_mem_shared_access_seq::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem_shared_access_seq::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_mem_shared_access_seq::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem_shared_access_seq::to_string_middle\n"); );
    // Body
    std::string out;
    out += "mem:" + VL_TO_STRING(__PVT__mem);
    out += ", rand_reg_val:" + VL_TO_STRING(__PVT__rand_reg_val);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_reg_sequence_::to_string_middle();
    return (out);
}
