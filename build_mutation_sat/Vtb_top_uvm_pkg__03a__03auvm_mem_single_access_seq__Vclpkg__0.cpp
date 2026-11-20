// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_mem_single_access_seq::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem_single_access_seq::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi273dd4be> __Vfunc_get__Vfuncout_1957;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pi273dd4be__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1957);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_1957;
}

void Vtb_top_uvm_pkg__03a__03auvm_mem_single_access_seq::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem_single_access_seq::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_mem_single_access_seq> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_mem_single_access_seq, vlProcess, vlSymsp, "uam_mem_single_access_seq"s);
    } else {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_mem_single_access_seq, vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vtb_top_uvm_pkg__03a__03auvm_mem_single_access_seq::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem_single_access_seq::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_mem_single_access_seq"s;
}

void Vtb_top_uvm_pkg__03a__03auvm_mem_single_access_seq::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_uvm_pkg__03a__03auvm_reg_sequence_::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem_single_access_seq::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__rand_reg_val = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_reg_randval, vlSymsp);
}

extern const ::VlUnpacked<::std::string, 4> Vtb_top__ConstPool__CONSARRAY_10;

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_mem_single_access_seq::__VnoInFunc_body(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem_single_access_seq::__VnoInFunc_body\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_get_n_bits__Vfuncout_5233;
    __Vtask_get_n_bits__Vfuncout_5233 = 0;
    ::IData/*31:0*/ __Vtask_peek__status_5234;
    __Vtask_peek__status_5234 = 0;
    ::QData/*63:0*/ __Vtask_peek__value_5235;
    __Vtask_peek__value_5235 = 0;
    ::IData/*31:0*/ __Vtask_write__status_5236;
    __Vtask_write__status_5236 = 0;
    ::IData/*31:0*/ __Vtask_peek__status_5237;
    __Vtask_peek__status_5237 = 0;
    ::QData/*63:0*/ __Vtask_peek__value_5238;
    __Vtask_peek__value_5238 = 0;
    ::IData/*31:0*/ __Vtask_poke__status_5239;
    __Vtask_poke__status_5239 = 0;
    ::IData/*31:0*/ __Vtask_read__status_5240;
    __Vtask_read__status_5240 = 0;
    ::QData/*63:0*/ __Vtask_read__value_5241;
    __Vtask_read__value_5241 = 0;
    ::std::string __Vtemp_1;
    ::std::string __Vtemp_2;
    ::std::string __Vtemp_3;
    ::std::string __Vtemp_4;
    ::std::string __Vtemp_5;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::std::string __VlefCall_69__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_68;
    ::IData/*31:0*/ __VlefCall_67__get_report_action;
    ::IData/*31:0*/ __VlefCall_66__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_65__uvm_get_report_object;
    ::std::string __VlefCall_64__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_63;
    ::IData/*31:0*/ __VlefCall_62__get_report_action;
    ::IData/*31:0*/ __VlefCall_61__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_60__uvm_get_report_object;
    ::std::string __VlefCall_59__get_full_name;
    ::std::string __VlefCall_58__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_57;
    ::IData/*31:0*/ __VlefCall_56__get_report_action;
    ::IData/*31:0*/ __VlefCall_55__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_54__uvm_get_report_object;
    ::std::string __VlefCall_53__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_52;
    ::IData/*31:0*/ __VlefCall_51__get_report_action;
    ::IData/*31:0*/ __VlefCall_50__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_49__uvm_get_report_object;
    ::std::string __VlefCall_48__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_47;
    ::IData/*31:0*/ __VlefCall_46__get_report_action;
    ::IData/*31:0*/ __VlefCall_45__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_44__uvm_get_report_object;
    ::std::string __VlefCall_43__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_42;
    ::IData/*31:0*/ __VlefCall_41__get_report_action;
    ::IData/*31:0*/ __VlefCall_40__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_39__uvm_get_report_object;
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
    ::IData/*31:0*/ __VlefCall_26__randomize;
    ::QData/*63:0*/ __VlefCall_25__get_size;
    ::std::string __VlefCall_24__get_full_name;
    ::std::string __VlefCall_23__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_22;
    ::IData/*31:0*/ __VlefCall_21__get_report_action;
    ::IData/*31:0*/ __VlefCall_20__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_19__uvm_get_report_object;
    ::std::string __VlefCall_18__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_17;
    ::IData/*31:0*/ __VlefCall_16__get_report_action;
    ::IData/*31:0*/ __VlefCall_15__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_14__uvm_get_report_object;
    ::CData/*0:0*/ __VlefLogAnd_13;
    ::CData/*0:0*/ __VlefCall_12__has_hdl_path;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_backdoor> __VlefCall_11__get_backdoor;
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
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk2__DOT___local_report_object_;
    ::IData/*31:0*/ unnamedblk3__DOT__j;
    unnamedblk3__DOT__j = 0;
    ::IData/*31:0*/ unnamedblk3__DOT__j__Vloopsize;
    unnamedblk3__DOT__j__Vloopsize = 0;
    ::IData/*31:0*/ unnamedblk3__DOT__unnamedblk4__DOT__status;
    ::QData/*63:0*/ unnamedblk3__DOT__unnamedblk4__DOT__val;
    ::QData/*63:0*/ unnamedblk3__DOT__unnamedblk4__DOT__exp;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT___local_report_object_;
    ::IData/*31:0*/ unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__k;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__unnamedblk7__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__unnamedblk8__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__unnamedblk9__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__unnamedblk10__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__unnamedblk11__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__unnamedblk12__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__unnamedblk13__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__unnamedblk14__DOT___local_report_object_;
    ::std::string mode;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map>> maps;
    ::IData/*31:0*/ n_bits;
    {
        mode = ""s;
        maps.clear();
        n_bits = 0U;
        if ((VlNull{} == this->__PVT__mem)) {
            this->__VnoInFunc_uvm_get_report_object(vlProcess, vlSymsp, __VlefCall_0__uvm_get_report_object);
            VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 86)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk1__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk1__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 86)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "uvm_mem_access_seq"s, __VlefCall_1__get_report_verbosity_level);
            __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
            if (__VlefLogAnd_3) {
                VL_NULL_CHECK(unnamedblk1__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 86)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "uvm_mem_access_seq"s, __VlefCall_2__get_report_action);
                __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_3))) {
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_access_seq"s, "No register specified to run sequence on"s, 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh"s, 0x00000056U, ""s, 1U);
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 91)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_resource_db__Tz7d09f080__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_4__get_full_name)), "NO_REG_TESTS"s, 0U, __VlefCall_5__get_by_name);
        __VlefLogOr_8 = (VlNull{} != __VlefCall_5__get_by_name);
        if ((1U & (~ (::IData)(__VlefLogOr_8)))) {
            VL_NULL_CHECK(this->__PVT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 93)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_resource_db__Tz7d09f080__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_6__get_full_name)), "NO_MEM_TESTS"s, 0U, __VlefCall_7__get_by_name);
            __VlefLogOr_8 = (VlNull{} != __VlefCall_7__get_by_name);
        }
        if ((1U & (~ (::IData)(__VlefLogOr_8)))) {
            VL_NULL_CHECK(this->__PVT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 95)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_9__get_full_name);
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_resource_db__Tz7d09f080__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_9__get_full_name)), "NO_MEM_ACCESS_TEST"s, 0U, __VlefCall_10__get_by_name);
            __VlefLogOr_8 = (VlNull{} != __VlefCall_10__get_by_name);
        }
        if (__VlefLogOr_8) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 103)->__VnoInFunc_get_backdoor(vlSymsp, 1U, __VlefCall_11__get_backdoor);
        __VlefLogAnd_13 = (VlNull{} == __VlefCall_11__get_backdoor);
        if (__VlefLogAnd_13) {
            VL_NULL_CHECK(this->__PVT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 103)->__VnoInFunc_has_hdl_path(vlSymsp, ""s, __VlefCall_12__has_hdl_path);
            __VlefLogAnd_13 = (1U & (~ (::IData)(__VlefCall_12__has_hdl_path)));
        }
        if (__VlefLogAnd_13) {
            this->__VnoInFunc_uvm_get_report_object(vlProcess, vlSymsp, __VlefCall_14__uvm_get_report_object);
            VL_NULL_CHECK(__VlefCall_14__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 105)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk2__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk2__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 105)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "uvm_mem_access_seq"s, __VlefCall_15__get_report_verbosity_level);
            __VlefLogAnd_17 = VL_LTES_III(32, 0U, __VlefCall_15__get_report_verbosity_level);
            if (__VlefLogAnd_17) {
                VL_NULL_CHECK(unnamedblk2__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 105)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "uvm_mem_access_seq"s, __VlefCall_16__get_report_action);
                __VlefLogAnd_17 = (0U != __VlefCall_16__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_17))) {
                VL_NULL_CHECK(this->__PVT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 105)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_18__get_full_name);
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_access_seq"s, 
                                                   VL_CVT_PACK_STR_NN(
                                                                      VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Memory '"s, __VlefCall_18__get_full_name), "' does not have a backdoor mechanism available"s)), 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh"s, 0x00000069U, ""s, 1U);
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 109)->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__Vfuncout_5233);
        n_bits = __Vtask_get_n_bits__Vfuncout_5233;
        VL_NULL_CHECK(this->__PVT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 112)->__VnoInFunc_get_maps(vlSymsp, maps);
        unnamedblk3__DOT__j = 0U;
        while (VL_LTS_III(32, unnamedblk3__DOT__j, maps.size())) {
            unnamedblk3__DOT__j__Vloopsize = maps.size();
            unnamedblk3__DOT__unnamedblk4__DOT__status = 0U;
            unnamedblk3__DOT__unnamedblk4__DOT__val = 0ULL;
            unnamedblk3__DOT__unnamedblk4__DOT__exp = 0ULL;
            this->__VnoInFunc_uvm_get_report_object(vlProcess, vlSymsp, __VlefCall_19__uvm_get_report_object);
            VL_NULL_CHECK(__VlefCall_19__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 121)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 121)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "uvm_mem_access_seq"s, __VlefCall_20__get_report_verbosity_level);
            __VlefLogAnd_22 = VL_LTES_III(32, 0x00000064U, __VlefCall_20__get_report_verbosity_level);
            if (__VlefLogAnd_22) {
                VL_NULL_CHECK(unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 121)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "uvm_mem_access_seq"s, __VlefCall_21__get_report_action);
                __VlefLogAnd_22 = (0U != __VlefCall_21__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_22))) {
                VL_NULL_CHECK(this->__PVT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 121)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_23__get_full_name);
                VL_NULL_CHECK(maps.at(unnamedblk3__DOT__j), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 121)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_24__get_full_name);
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "uvm_mem_access_seq"s, 
                                                  VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Verifying access of memory '"s, __VlefCall_23__get_full_name), "' in map '"s), __VlefCall_24__get_full_name), "' ..."s)), 0x00000064U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh"s, 0x00000079U, ""s, 1U);
            }
            VL_NULL_CHECK(this->__PVT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 123)->__VnoInFunc_get_access(vlProcess, vlSymsp, maps.at(unnamedblk3__DOT__j), mode);
            unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__k = 0U;
            unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__k = 0U;
            while (true) {
                VL_NULL_CHECK(this->__PVT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 130)->__VnoInFunc_get_size(vlSymsp, __VlefCall_25__get_size);
                if (!(((::QData)((::IData)(unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__k)) 
                       < __VlefCall_25__get_size))) break;
                if ((VlNull{} != this->__PVT__rand_reg_val)) {
                    VL_NULL_CHECK(this->__PVT__rand_reg_val, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 131)->__VnoInFunc_randomize(vlSymsp, __VlefCall_26__randomize);
                }
                unnamedblk3__DOT__unnamedblk4__DOT__val 
                    = (VL_NULL_CHECK(this->__PVT__rand_reg_val, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 132)
                       ->__PVT__randval & (VL_SHIFTL_QQI(64,64,32, 1ULL, n_bits) 
                                           - 1ULL));
                if (("RO"s == mode)) {
                    VL_NULL_CHECK(this->__PVT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 134)->__VnoInFunc_peek(vlProcess, vlSymsp, __Vtask_peek__status_5234, 
                                                                                VL_EXTENDS_QI(64,32, unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__k), __Vtask_peek__value_5235, ""s, VlNull{}, VlNull{}, ""s, 0U);
                    unnamedblk3__DOT__unnamedblk4__DOT__status 
                        = __Vtask_peek__status_5234;
                    unnamedblk3__DOT__unnamedblk4__DOT__exp 
                        = __Vtask_peek__value_5235;
                    if ((0U != unnamedblk3__DOT__unnamedblk4__DOT__status)) {
                        this->__VnoInFunc_uvm_get_report_object(vlProcess, vlSymsp, __VlefCall_28__uvm_get_report_object);
                        VL_NULL_CHECK(__VlefCall_28__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 137)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__unnamedblk7__DOT___local_report_object_);
                        VL_NULL_CHECK(unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__unnamedblk7__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 137)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "uvm_mem_access_seq"s, __VlefCall_29__get_report_verbosity_level);
                        __VlefLogAnd_31 = VL_LTES_III(32, 0U, __VlefCall_29__get_report_verbosity_level);
                        if (__VlefLogAnd_31) {
                            VL_NULL_CHECK(unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__unnamedblk7__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 137)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "uvm_mem_access_seq"s, __VlefCall_30__get_report_action);
                            __VlefLogAnd_31 = (0U != __VlefCall_30__get_report_action);
                        }
                        if (VL_UNLIKELY((__VlefLogAnd_31))) {
                            VL_NULL_CHECK(this->__PVT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 137)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_32__get_full_name);
                            __Vtemp_1 = ((2U < unnamedblk3__DOT__unnamedblk4__DOT__status)
                                          ? ""s : Vtb_top__ConstPool__CONSARRAY_10
                                         [(3U & unnamedblk3__DOT__unnamedblk4__DOT__status)]);
                            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_access_seq"s, VL_SFORMATF_N_NX("Status was %s when reading \"%s[%0d]\" through backdoor.",3
                                                                                , 'S',&(__Vtemp_1)
                                                                                , 'S',&(__VlefCall_32__get_full_name)
                                                                                , '~',32,unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__k) , 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh"s, 0x00000089U, ""s, 1U);
                        }
                    }
                } else {
                    unnamedblk3__DOT__unnamedblk4__DOT__exp 
                        = unnamedblk3__DOT__unnamedblk4__DOT__val;
                }
                co_await VL_NULL_CHECK(this->__PVT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 145)->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__status_5236, 
                                                                                VL_EXTENDS_QI(64,32, unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__k), unnamedblk3__DOT__unnamedblk4__DOT__val, 0U, maps.at(unnamedblk3__DOT__j), 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_mem_single_access_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
                unnamedblk3__DOT__unnamedblk4__DOT__status 
                    = __Vtask_write__status_5236;
                if ((0U != unnamedblk3__DOT__unnamedblk4__DOT__status)) {
                    this->__VnoInFunc_uvm_get_report_object(vlProcess, vlSymsp, __VlefCall_33__uvm_get_report_object);
                    VL_NULL_CHECK(__VlefCall_33__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 148)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__unnamedblk8__DOT___local_report_object_);
                    VL_NULL_CHECK(unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__unnamedblk8__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 148)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "uvm_mem_access_seq"s, __VlefCall_34__get_report_verbosity_level);
                    __VlefLogAnd_36 = VL_LTES_III(32, 0U, __VlefCall_34__get_report_verbosity_level);
                    if (__VlefLogAnd_36) {
                        VL_NULL_CHECK(unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__unnamedblk8__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 148)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "uvm_mem_access_seq"s, __VlefCall_35__get_report_action);
                        __VlefLogAnd_36 = (0U != __VlefCall_35__get_report_action);
                    }
                    if (VL_UNLIKELY((__VlefLogAnd_36))) {
                        VL_NULL_CHECK(this->__PVT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 148)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_37__get_full_name);
                        VL_NULL_CHECK(maps.at(unnamedblk3__DOT__j), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 148)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_38__get_full_name);
                        __Vtemp_2 = ((2U < unnamedblk3__DOT__unnamedblk4__DOT__status)
                                      ? ""s : Vtb_top__ConstPool__CONSARRAY_10
                                     [(3U & unnamedblk3__DOT__unnamedblk4__DOT__status)]);
                        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_access_seq"s, VL_SFORMATF_N_NX("Status was %s when writing \"%s[%0d]\" through map \"%s\".",4
                                                                                , 'S',&(__Vtemp_2)
                                                                                , 'S',&(__VlefCall_37__get_full_name)
                                                                                , '~',32,unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__k
                                                                                , 'S',&(__VlefCall_38__get_full_name)) , 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh"s, 0x00000094U, ""s, 1U);
                    }
                }
                co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.delay(0x00000000000003e8ULL, 
                                                                           vlProcess, 
                                                                           "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 
                                                                           150);
                unnamedblk3__DOT__unnamedblk4__DOT__val = 0ULL;
                VL_NULL_CHECK(this->__PVT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 153)->__VnoInFunc_peek(vlProcess, vlSymsp, __Vtask_peek__status_5237, 
                                                                                VL_EXTENDS_QI(64,32, unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__k), __Vtask_peek__value_5238, ""s, VlNull{}, VlNull{}, ""s, 0U);
                unnamedblk3__DOT__unnamedblk4__DOT__status 
                    = __Vtask_peek__status_5237;
                unnamedblk3__DOT__unnamedblk4__DOT__val 
                    = __Vtask_peek__value_5238;
                if ((0U != unnamedblk3__DOT__unnamedblk4__DOT__status)) {
                    this->__VnoInFunc_uvm_get_report_object(vlProcess, vlSymsp, __VlefCall_39__uvm_get_report_object);
                    VL_NULL_CHECK(__VlefCall_39__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 156)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__unnamedblk9__DOT___local_report_object_);
                    VL_NULL_CHECK(unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__unnamedblk9__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 156)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "uvm_mem_access_seq"s, __VlefCall_40__get_report_verbosity_level);
                    __VlefLogAnd_42 = VL_LTES_III(32, 0U, __VlefCall_40__get_report_verbosity_level);
                    if (__VlefLogAnd_42) {
                        VL_NULL_CHECK(unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__unnamedblk9__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 156)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "uvm_mem_access_seq"s, __VlefCall_41__get_report_action);
                        __VlefLogAnd_42 = (0U != __VlefCall_41__get_report_action);
                    }
                    if (VL_UNLIKELY((__VlefLogAnd_42))) {
                        VL_NULL_CHECK(this->__PVT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 156)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_43__get_full_name);
                        __Vtemp_3 = ((2U < unnamedblk3__DOT__unnamedblk4__DOT__status)
                                      ? ""s : Vtb_top__ConstPool__CONSARRAY_10
                                     [(3U & unnamedblk3__DOT__unnamedblk4__DOT__status)]);
                        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_access_seq"s, VL_SFORMATF_N_NX("Status was %s when reading \"%s[%0d]\" through backdoor.",3
                                                                                , 'S',&(__Vtemp_3)
                                                                                , 'S',&(__VlefCall_43__get_full_name)
                                                                                , '~',32,unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__k) , 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh"s, 0x0000009cU, ""s, 1U);
                    }
                } else if ((unnamedblk3__DOT__unnamedblk4__DOT__val 
                            != unnamedblk3__DOT__unnamedblk4__DOT__exp)) {
                    this->__VnoInFunc_uvm_get_report_object(vlProcess, vlSymsp, __VlefCall_44__uvm_get_report_object);
                    VL_NULL_CHECK(__VlefCall_44__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 161)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__unnamedblk10__DOT___local_report_object_);
                    VL_NULL_CHECK(unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__unnamedblk10__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 161)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "uvm_mem_access_seq"s, __VlefCall_45__get_report_verbosity_level);
                    __VlefLogAnd_47 = VL_LTES_III(32, 0U, __VlefCall_45__get_report_verbosity_level);
                    if (__VlefLogAnd_47) {
                        VL_NULL_CHECK(unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__unnamedblk10__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 161)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "uvm_mem_access_seq"s, __VlefCall_46__get_report_action);
                        __VlefLogAnd_47 = (0U != __VlefCall_46__get_report_action);
                    }
                    if (VL_UNLIKELY((__VlefLogAnd_47))) {
                        VL_NULL_CHECK(this->__PVT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 161)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_48__get_full_name);
                        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_access_seq"s, VL_SFORMATF_N_NX("Backdoor \"%s[%0d]\" read back as 'h%h instead of 'h%h.",4
                                                                                , 'S',&(__VlefCall_48__get_full_name)
                                                                                , '~',32,unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__k
                                                                                , '#',64,unnamedblk3__DOT__unnamedblk4__DOT__val
                                                                                , '#',64,unnamedblk3__DOT__unnamedblk4__DOT__exp) , 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh"s, 0x000000a1U, ""s, 1U);
                    }
                }
                unnamedblk3__DOT__unnamedblk4__DOT__exp 
                    = ((~ unnamedblk3__DOT__unnamedblk4__DOT__exp) 
                       & (VL_SHIFTL_QQI(64,64,32, 1ULL, n_bits) 
                          - 1ULL));
                VL_NULL_CHECK(this->__PVT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 166)->__VnoInFunc_poke(vlProcess, vlSymsp, __Vtask_poke__status_5239, 
                                                                                VL_EXTENDS_QI(64,32, unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__k), unnamedblk3__DOT__unnamedblk4__DOT__exp, ""s, VlNull{}, VlNull{}, ""s, 0U);
                unnamedblk3__DOT__unnamedblk4__DOT__status 
                    = __Vtask_poke__status_5239;
                if ((0U != unnamedblk3__DOT__unnamedblk4__DOT__status)) {
                    this->__VnoInFunc_uvm_get_report_object(vlProcess, vlSymsp, __VlefCall_49__uvm_get_report_object);
                    VL_NULL_CHECK(__VlefCall_49__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 169)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__unnamedblk11__DOT___local_report_object_);
                    VL_NULL_CHECK(unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__unnamedblk11__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 169)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "uvm_mem_access_seq"s, __VlefCall_50__get_report_verbosity_level);
                    __VlefLogAnd_52 = VL_LTES_III(32, 0U, __VlefCall_50__get_report_verbosity_level);
                    if (__VlefLogAnd_52) {
                        VL_NULL_CHECK(unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__unnamedblk11__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 169)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "uvm_mem_access_seq"s, __VlefCall_51__get_report_action);
                        __VlefLogAnd_52 = (0U != __VlefCall_51__get_report_action);
                    }
                    if (VL_UNLIKELY((__VlefLogAnd_52))) {
                        VL_NULL_CHECK(this->__PVT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 169)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_53__get_full_name);
                        __Vtemp_4 = ((2U < unnamedblk3__DOT__unnamedblk4__DOT__status)
                                      ? ""s : Vtb_top__ConstPool__CONSARRAY_10
                                     [(3U & unnamedblk3__DOT__unnamedblk4__DOT__status)]);
                        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_access_seq"s, VL_SFORMATF_N_NX("Status was %s when writing \"%s[%0d-1]\" through backdoor.",3
                                                                                , 'S',&(__Vtemp_4)
                                                                                , 'S',&(__VlefCall_53__get_full_name)
                                                                                , '~',32,unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__k) , 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh"s, 0x000000a9U, ""s, 1U);
                    }
                }
                co_await VL_NULL_CHECK(this->__PVT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 172)->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__status_5240, 
                                                                                VL_EXTENDS_QI(64,32, unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__k), __Vtask_read__value_5241, 0U, maps.at(unnamedblk3__DOT__j), 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_mem_single_access_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
                unnamedblk3__DOT__unnamedblk4__DOT__status 
                    = __Vtask_read__status_5240;
                unnamedblk3__DOT__unnamedblk4__DOT__val 
                    = __Vtask_read__value_5241;
                if ((0U != unnamedblk3__DOT__unnamedblk4__DOT__status)) {
                    this->__VnoInFunc_uvm_get_report_object(vlProcess, vlSymsp, __VlefCall_54__uvm_get_report_object);
                    VL_NULL_CHECK(__VlefCall_54__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 175)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__unnamedblk12__DOT___local_report_object_);
                    VL_NULL_CHECK(unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__unnamedblk12__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 175)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "uvm_mem_access_seq"s, __VlefCall_55__get_report_verbosity_level);
                    __VlefLogAnd_57 = VL_LTES_III(32, 0U, __VlefCall_55__get_report_verbosity_level);
                    if (__VlefLogAnd_57) {
                        VL_NULL_CHECK(unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__unnamedblk12__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 175)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "uvm_mem_access_seq"s, __VlefCall_56__get_report_action);
                        __VlefLogAnd_57 = (0U != __VlefCall_56__get_report_action);
                    }
                    if (VL_UNLIKELY((__VlefLogAnd_57))) {
                        VL_NULL_CHECK(this->__PVT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 175)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_58__get_full_name);
                        VL_NULL_CHECK(maps.at(unnamedblk3__DOT__j), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 175)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_59__get_full_name);
                        __Vtemp_5 = ((2U < unnamedblk3__DOT__unnamedblk4__DOT__status)
                                      ? ""s : Vtb_top__ConstPool__CONSARRAY_10
                                     [(3U & unnamedblk3__DOT__unnamedblk4__DOT__status)]);
                        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_access_seq"s, VL_SFORMATF_N_NX("Status was %s when reading \"%s[%0d]\" through map \"%s\".",4
                                                                                , 'S',&(__Vtemp_5)
                                                                                , 'S',&(__VlefCall_58__get_full_name)
                                                                                , '~',32,unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__k
                                                                                , 'S',&(__VlefCall_59__get_full_name)) , 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh"s, 0x000000afU, ""s, 1U);
                    }
                } else if (("WO"s == mode)) {
                    if ((0ULL != unnamedblk3__DOT__unnamedblk4__DOT__val)) {
                        this->__VnoInFunc_uvm_get_report_object(vlProcess, vlSymsp, __VlefCall_60__uvm_get_report_object);
                        VL_NULL_CHECK(__VlefCall_60__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 181)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__unnamedblk13__DOT___local_report_object_);
                        VL_NULL_CHECK(unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__unnamedblk13__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 181)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "uvm_mem_access_seq"s, __VlefCall_61__get_report_verbosity_level);
                        __VlefLogAnd_63 = VL_LTES_III(32, 0U, __VlefCall_61__get_report_verbosity_level);
                        if (__VlefLogAnd_63) {
                            VL_NULL_CHECK(unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__unnamedblk13__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 181)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "uvm_mem_access_seq"s, __VlefCall_62__get_report_action);
                            __VlefLogAnd_63 = (0U != __VlefCall_62__get_report_action);
                        }
                        if (VL_UNLIKELY((__VlefLogAnd_63))) {
                            VL_NULL_CHECK(this->__PVT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 181)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_64__get_full_name);
                            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_access_seq"s, VL_SFORMATF_N_NX("Front door \"%s[%0d]\" read back as 'h%h instead of 'h00000000.",3
                                                                                , 'S',&(__VlefCall_64__get_full_name)
                                                                                , '~',32,unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__k
                                                                                , '#',64,unnamedblk3__DOT__unnamedblk4__DOT__val) , 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh"s, 0x000000b5U, ""s, 1U);
                        }
                    }
                } else if ((unnamedblk3__DOT__unnamedblk4__DOT__val 
                            != unnamedblk3__DOT__unnamedblk4__DOT__exp)) {
                    this->__VnoInFunc_uvm_get_report_object(vlProcess, vlSymsp, __VlefCall_65__uvm_get_report_object);
                    VL_NULL_CHECK(__VlefCall_65__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 187)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__unnamedblk14__DOT___local_report_object_);
                    VL_NULL_CHECK(unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__unnamedblk14__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 187)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "uvm_mem_access_seq"s, __VlefCall_66__get_report_verbosity_level);
                    __VlefLogAnd_68 = VL_LTES_III(32, 0U, __VlefCall_66__get_report_verbosity_level);
                    if (__VlefLogAnd_68) {
                        VL_NULL_CHECK(unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__unnamedblk14__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 187)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "uvm_mem_access_seq"s, __VlefCall_67__get_report_action);
                        __VlefLogAnd_68 = (0U != __VlefCall_67__get_report_action);
                    }
                    if (VL_UNLIKELY((__VlefLogAnd_68))) {
                        VL_NULL_CHECK(this->__PVT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 187)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_69__get_full_name);
                        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_access_seq"s, VL_SFORMATF_N_NX("Front door \"%s[%0d]\" read back as 'h%h instead of 'h%h.",4
                                                                                , 'S',&(__VlefCall_69__get_full_name)
                                                                                , '~',32,unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__k
                                                                                , '#',64,unnamedblk3__DOT__unnamedblk4__DOT__val
                                                                                , '#',64,unnamedblk3__DOT__unnamedblk4__DOT__exp) , 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh"s, 0x000000bbU, ""s, 1U);
                    }
                }
                unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__k 
                    = ((::IData)(1U) + unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__k);
            }
            if ((unnamedblk3__DOT__j__Vloopsize <= maps.size())) {
                unnamedblk3__DOT__j = ((::IData)(1U) 
                                       + unnamedblk3__DOT__j);
            }
        }
        __Vlabel0: ;
    }
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_mem_single_access_seq::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem_single_access_seq::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_mem_single_access_seq::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem_single_access_seq::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_mem_single_access_seq::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem_single_access_seq::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_mem_single_access_seq::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem_single_access_seq::__VnoInFunc___VBasicRand\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0__randomize;
    __VBasicRand__Vfuncrtn = 1U;
    if ((VlNull{} != this->__PVT__rand_reg_val)) {
        VL_NULL_CHECK(this->__PVT__rand_reg_val, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_mem_access_seq.svh", 63)->__VnoInFunc_randomize(vlSymsp, __VlefCall_0__randomize);
        __VBasicRand__Vfuncrtn = (__VBasicRand__Vfuncrtn 
                                  & __VlefCall_0__randomize);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_mem_single_access_seq::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem_single_access_seq::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_top_uvm_pkg__03a__03auvm_mem_single_access_seq::~Vtb_top_uvm_pkg__03a__03auvm_mem_single_access_seq() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem_single_access_seq::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_mem_single_access_seq::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem_single_access_seq::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_mem_single_access_seq::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem_single_access_seq::to_string_middle\n"); );
    // Body
    std::string out;
    out += "mem:" + VL_TO_STRING(__PVT__mem);
    out += ", rand_reg_val:" + VL_TO_STRING(__PVT__rand_reg_val);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_reg_sequence_::to_string_middle();
    return (out);
}
