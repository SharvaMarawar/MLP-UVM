// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi7459d959> __Vfunc_get__Vfuncout_1962;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pi7459d959__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1962);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_1962;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_shared_access_seq> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_reg_shared_access_seq, vlProcess, vlSymsp, "uvm_reg_shared_access_seq"s);
    } else {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_reg_shared_access_seq, vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_shared_access_seq"s;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_uvm_pkg__03a__03auvm_reg_sequence_::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__rand_reg_val = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_reg_randval, vlSymsp);
}

extern const ::VlUnpacked<::std::string, 4> Vtb_top__ConstPool__CONSARRAY_10;

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc_body(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc_body\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_get_lsb_pos__Vfuncout_5246;
    __Vtask_get_lsb_pos__Vfuncout_5246 = 0;
    ::IData/*31:0*/ __Vtask_get_n_bits__Vfuncout_5247;
    __Vtask_get_n_bits__Vfuncout_5247 = 0;
    ::IData/*31:0*/ __Vtask_get_lsb_pos__Vfuncout_5248;
    __Vtask_get_lsb_pos__Vfuncout_5248 = 0;
    ::IData/*31:0*/ __Vtask_get_n_bits__Vfuncout_5249;
    __Vtask_get_n_bits__Vfuncout_5249 = 0;
    ::IData/*31:0*/ __Vtask_write__status_5250;
    __Vtask_write__status_5250 = 0;
    ::IData/*31:0*/ __Vtask_read__status_5251;
    __Vtask_read__status_5251 = 0;
    ::QData/*63:0*/ __Vtask_read__value_5252;
    __Vtask_read__value_5252 = 0;
    ::std::string __Vtemp_1;
    ::std::string __Vtemp_2;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::std::string __VlefCall_53__get_full_name;
    ::std::string __VlefCall_52__get_full_name;
    ::std::string __VlefCall_51__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_50;
    ::IData/*31:0*/ __VlefCall_49__get_report_action;
    ::IData/*31:0*/ __VlefCall_48__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_47__uvm_get_report_object;
    ::CData/*0:0*/ __VlefLogAnd_46;
    ::IData/*31:0*/ __VlefCall_45__get_report_action;
    ::IData/*31:0*/ __VlefCall_44__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_43__uvm_get_report_object;
    ::std::string __VlefCall_42__get_full_name;
    ::std::string __VlefCall_41__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_40;
    ::IData/*31:0*/ __VlefCall_39__get_report_action;
    ::IData/*31:0*/ __VlefCall_38__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_37__uvm_get_report_object;
    ::QData/*63:0*/ __VlefCall_36__get;
    ::std::string __VlefCall_35__get_full_name;
    ::std::string __VlefCall_34__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_33;
    ::IData/*31:0*/ __VlefCall_32__get_report_action;
    ::IData/*31:0*/ __VlefCall_31__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_30__uvm_get_report_object;
    ::std::string __VlefCall_29__get_full_name;
    ::std::string __VlefCall_28__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_27;
    ::IData/*31:0*/ __VlefCall_26__get_report_action;
    ::IData/*31:0*/ __VlefCall_25__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_24__uvm_get_report_object;
    ::CData/*0:0*/ __VlefLogAnd_23;
    ::IData/*31:0*/ __VlefCall_22__get_report_action;
    ::IData/*31:0*/ __VlefCall_21__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_20__uvm_get_report_object;
    ::std::string __VlefCall_19__get_full_name;
    ::std::string __VlefCall_18__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_17;
    ::IData/*31:0*/ __VlefCall_16__get_report_action;
    ::IData/*31:0*/ __VlefCall_15__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_14__uvm_get_report_object;
    ::IData/*31:0*/ __VlefCall_12__randomize;
    ::std::string __VlefCall_11__get_access;
    ::CData/*0:0*/ __VlefCall_10__is_known_access;
    ::IData/*31:0*/ __VlefCall_9__get_n_maps;
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
    ::IData/*31:0*/ unnamedblk2__DOT__k;
    unnamedblk2__DOT__k = 0;
    ::IData/*31:0*/ unnamedblk2__DOT__k__Vloopsize;
    unnamedblk2__DOT__k__Vloopsize = 0;
    ::IData/*31:0*/ unnamedblk2__DOT__unnamedblk3__DOT__lsb;
    ::IData/*31:0*/ unnamedblk2__DOT__unnamedblk3__DOT__w;
    ::IData/*31:0*/ unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk1_1__DOT____Vrepeat0;
    unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    ::IData/*31:0*/ unnamedblk4__DOT__j;
    unnamedblk4__DOT__j = 0;
    ::IData/*31:0*/ unnamedblk4__DOT__j__Vloopsize;
    unnamedblk4__DOT__j__Vloopsize = 0;
    ::QData/*63:0*/ unnamedblk4__DOT__unnamedblk5__DOT__wo;
    ::IData/*31:0*/ unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k;
    unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k = 0;
    ::IData/*31:0*/ unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k__Vloopsize;
    unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k__Vloopsize = 0;
    ::IData/*31:0*/ unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__lsb;
    ::IData/*31:0*/ unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__w;
    ::IData/*31:0*/ unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk1_2__DOT____Vrepeat1;
    unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    ::IData/*31:0*/ unnamedblk8__DOT__j;
    unnamedblk8__DOT__j = 0;
    ::IData/*31:0*/ unnamedblk8__DOT__j__Vloopsize;
    unnamedblk8__DOT__j__Vloopsize = 0;
    ::IData/*31:0*/ unnamedblk8__DOT__unnamedblk9__DOT__status;
    ::QData/*63:0*/ unnamedblk8__DOT__unnamedblk9__DOT__prev;
    ::QData/*63:0*/ unnamedblk8__DOT__unnamedblk9__DOT__v;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk11__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk12__DOT___local_report_object_;
    ::IData/*31:0*/ unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk13__DOT__k;
    unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk13__DOT__k = 0;
    ::IData/*31:0*/ unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk13__DOT__k__Vloopsize;
    unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk13__DOT__k__Vloopsize = 0;
    ::QData/*63:0*/ unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk13__DOT__unnamedblk14__DOT__actual;
    ::QData/*63:0*/ unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk13__DOT__unnamedblk14__DOT__exp;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk17__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk18__DOT___local_report_object_;
    ::IData/*31:0*/ __Vincrement2;
    __Vincrement2 = 0;
    ::IData/*31:0*/ __Vincrement1;
    __Vincrement1 = 0;
    ::QData/*63:0*/ other_mask;
    ::VlQueue<::QData/*63:0*/> wo_mask;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_field>> fields;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map>> maps;
    {
        other_mask = 0ULL;
        wo_mask.clear();
        wo_mask.atDefault() = 0;
        fields.clear();
        maps.clear();
        if ((VlNull{} == this->__PVT__rg)) {
            this->__VnoInFunc_uvm_get_report_object(vlProcess, vlSymsp, __VlefCall_0__uvm_get_report_object);
            VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 94)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk1__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk1__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 94)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "uvm_reg_shared_access_seq"s, __VlefCall_1__get_report_verbosity_level);
            __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
            if (__VlefLogAnd_3) {
                VL_NULL_CHECK(unnamedblk1__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 94)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "uvm_reg_shared_access_seq"s, __VlefCall_2__get_report_action);
                __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_3))) {
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_shared_access_seq"s, "No register specified to run sequence on"s, 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s, 0x0000005eU, ""s, 1U);
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__rg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 99)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_resource_db__Tz7d09f080__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_4__get_full_name)), "NO_REG_TESTS"s, 0U, __VlefCall_5__get_by_name);
        __VlefLogOr_8 = (VlNull{} != __VlefCall_5__get_by_name);
        if ((1U & (~ (::IData)(__VlefLogOr_8)))) {
            VL_NULL_CHECK(this->__PVT__rg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 101)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_resource_db__Tz7d09f080__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_6__get_full_name)), "NO_REG_SHARED_ACCESS_TEST"s, 0U, __VlefCall_7__get_by_name);
            __VlefLogOr_8 = (VlNull{} != __VlefCall_7__get_by_name);
        }
        if (__VlefLogOr_8) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__rg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 109)->__VnoInFunc_get_n_maps(vlSymsp, __VlefCall_9__get_n_maps);
        if (VL_GTS_III(32, 2U, __VlefCall_9__get_n_maps)) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__rg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 113)->__VnoInFunc_get_maps(vlSymsp, maps);
        VL_NULL_CHECK(this->__PVT__rg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 116)->__VnoInFunc_get_fields(vlSymsp, fields);
        other_mask = 0ULL;
        unnamedblk2__DOT__k = 0U;
        while (VL_LTS_III(32, unnamedblk2__DOT__k, fields.size())) {
            unnamedblk2__DOT__k__Vloopsize = fields.size();
            unnamedblk2__DOT__unnamedblk3__DOT__lsb = 0U;
            unnamedblk2__DOT__unnamedblk3__DOT__w = 0U;
            VL_NULL_CHECK(fields.at(unnamedblk2__DOT__k), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 123)->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__Vfuncout_5246);
            unnamedblk2__DOT__unnamedblk3__DOT__lsb 
                = __Vtask_get_lsb_pos__Vfuncout_5246;
            VL_NULL_CHECK(fields.at(unnamedblk2__DOT__k), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 124)->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__Vfuncout_5247);
            unnamedblk2__DOT__unnamedblk3__DOT__w = __Vtask_get_n_bits__Vfuncout_5247;
            VL_NULL_CHECK(fields.at(unnamedblk2__DOT__k), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 126)->__VnoInFunc_is_known_access(vlProcess, vlSymsp, maps.at(0U), __VlefCall_10__is_known_access);
            if ((1U & (~ (::IData)(__VlefCall_10__is_known_access)))) {
                unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk1_1__DOT____Vrepeat0 
                    = unnamedblk2__DOT__unnamedblk3__DOT__w;
                while (VL_LTS_III(32, 0U, unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
                    __Vincrement1 = unnamedblk2__DOT__unnamedblk3__DOT__lsb;
                    unnamedblk2__DOT__unnamedblk3__DOT__lsb 
                        = ((::IData)(1U) + unnamedblk2__DOT__unnamedblk3__DOT__lsb);
                    other_mask = (other_mask | ((::QData)((::IData)(1U)) 
                                                << 
                                                (0x0000003fU 
                                                 & __Vincrement1)));
                    unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk1_1__DOT____Vrepeat0 
                        = (unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk1_1__DOT____Vrepeat0 
                           - (::IData)(1U));
                }
            }
            if ((unnamedblk2__DOT__k__Vloopsize <= fields.size())) {
                unnamedblk2__DOT__k = ((::IData)(1U) 
                                       + unnamedblk2__DOT__k);
            }
        }
        unnamedblk4__DOT__j = 0U;
        while (VL_LTS_III(32, unnamedblk4__DOT__j, maps.size())) {
            unnamedblk4__DOT__j__Vloopsize = maps.size();
            unnamedblk4__DOT__unnamedblk5__DOT__wo = 0ULL;
            unnamedblk4__DOT__unnamedblk5__DOT__wo = 0ULL;
            unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k = 0U;
            while (VL_LTS_III(32, unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k, fields.size())) {
                unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k__Vloopsize 
                    = fields.size();
                unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__lsb = 0U;
                unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__w = 0U;
                VL_NULL_CHECK(fields.at(unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 142)->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__Vfuncout_5248);
                unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__lsb 
                    = __Vtask_get_lsb_pos__Vfuncout_5248;
                VL_NULL_CHECK(fields.at(unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 143)->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__Vfuncout_5249);
                unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__w 
                    = __Vtask_get_n_bits__Vfuncout_5249;
                VL_NULL_CHECK(fields.at(unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 145)->__VnoInFunc_get_access(vlProcess, vlSymsp, maps.at(unnamedblk4__DOT__j), __VlefCall_11__get_access);
                if (("WO"s == __VlefCall_11__get_access)) {
                    unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk1_2__DOT____Vrepeat1 
                        = unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__w;
                    while (VL_LTS_III(32, 0U, unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
                        __Vincrement2 = unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__lsb;
                        unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__lsb 
                            = ((::IData)(1U) + unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__lsb);
                        unnamedblk4__DOT__unnamedblk5__DOT__wo 
                            = (unnamedblk4__DOT__unnamedblk5__DOT__wo 
                               | ((::QData)((::IData)(1U)) 
                                  << (0x0000003fU & __Vincrement2)));
                        unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk1_2__DOT____Vrepeat1 
                            = (unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk1_2__DOT____Vrepeat1 
                               - (::IData)(1U));
                    }
                }
                if ((unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k__Vloopsize 
                     <= fields.size())) {
                    unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k 
                        = ((::IData)(1U) + unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k);
                }
            }
            wo_mask.atWriteAppend(unnamedblk4__DOT__j) 
                = unnamedblk4__DOT__unnamedblk5__DOT__wo;
            if ((unnamedblk4__DOT__j__Vloopsize <= maps.size())) {
                unnamedblk4__DOT__j = ((::IData)(1U) 
                                       + unnamedblk4__DOT__j);
            }
        }
        unnamedblk8__DOT__j = 0U;
        while (VL_LTS_III(32, unnamedblk8__DOT__j, maps.size())) {
            unnamedblk8__DOT__j__Vloopsize = maps.size();
            unnamedblk8__DOT__unnamedblk9__DOT__status = 0U;
            unnamedblk8__DOT__unnamedblk9__DOT__prev = 0ULL;
            unnamedblk8__DOT__unnamedblk9__DOT__v = 0ULL;
            VL_NULL_CHECK(this->__PVT__rg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 160)->__VnoInFunc_get(vlProcess, vlSymsp, ""s, 0U, unnamedblk8__DOT__unnamedblk9__DOT__prev);
            if ((VlNull{} != this->__PVT__rand_reg_val)) {
                VL_NULL_CHECK(this->__PVT__rand_reg_val, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 163)->__VnoInFunc_randomize(vlSymsp, __VlefCall_12__randomize);
            }
            unnamedblk8__DOT__unnamedblk9__DOT__v = 
                ((VL_NULL_CHECK(this->__PVT__rand_reg_val, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 164)
                  ->__PVT__randval & (~ other_mask)) 
                 | (unnamedblk8__DOT__unnamedblk9__DOT__prev 
                    & other_mask));
            this->__VnoInFunc_uvm_get_report_object(vlProcess, vlSymsp, __VlefCall_14__uvm_get_report_object);
            VL_NULL_CHECK(__VlefCall_14__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 167)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 167)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "uvm_reg_shared_access_seq"s, __VlefCall_15__get_report_verbosity_level);
            __VlefLogAnd_17 = VL_LTES_III(32, 0x00000064U, __VlefCall_15__get_report_verbosity_level);
            if (__VlefLogAnd_17) {
                VL_NULL_CHECK(unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 167)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "uvm_reg_shared_access_seq"s, __VlefCall_16__get_report_action);
                __VlefLogAnd_17 = (0U != __VlefCall_16__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_17))) {
                VL_NULL_CHECK(this->__PVT__rg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 167)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_18__get_full_name);
                VL_NULL_CHECK(maps.at(unnamedblk8__DOT__j), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 167)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_19__get_full_name);
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "uvm_reg_shared_access_seq"s, VL_SFORMATF_N_NX("Writing register %s via map \"%s\"...",2
                                                                                , 'S',&(__VlefCall_18__get_full_name)
                                                                                , 'S',&(__VlefCall_19__get_full_name)) , 0x00000064U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s, 0x000000a7U, ""s, 1U);
            }
            this->__VnoInFunc_uvm_get_report_object(vlProcess, vlSymsp, __VlefCall_20__uvm_get_report_object);
            VL_NULL_CHECK(__VlefCall_20__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 169)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk11__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk11__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 169)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "uvm_reg_shared_access_seq"s, __VlefCall_21__get_report_verbosity_level);
            __VlefLogAnd_23 = VL_LTES_III(32, 0x000001f4U, __VlefCall_21__get_report_verbosity_level);
            if (__VlefLogAnd_23) {
                VL_NULL_CHECK(unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk11__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 169)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "uvm_reg_shared_access_seq"s, __VlefCall_22__get_report_action);
                __VlefLogAnd_23 = (0U != __VlefCall_22__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_23))) {
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "uvm_reg_shared_access_seq"s, VL_SFORMATF_N_NX("Writing 'h%h over 'h%h",2
                                                                                , '#',64,unnamedblk8__DOT__unnamedblk9__DOT__v
                                                                                , '#',64,unnamedblk8__DOT__unnamedblk9__DOT__prev) , 0x000001f4U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s, 0x000000a9U, ""s, 1U);
            }
            co_await VL_NULL_CHECK(this->__PVT__rg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 171)->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__status_5250, unnamedblk8__DOT__unnamedblk9__DOT__v, 0U, maps.at(unnamedblk8__DOT__j), 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_shared_access_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
            unnamedblk8__DOT__unnamedblk9__DOT__status 
                = __Vtask_write__status_5250;
            if ((0U != unnamedblk8__DOT__unnamedblk9__DOT__status)) {
                this->__VnoInFunc_uvm_get_report_object(vlProcess, vlSymsp, __VlefCall_24__uvm_get_report_object);
                VL_NULL_CHECK(__VlefCall_24__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 174)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk12__DOT___local_report_object_);
                VL_NULL_CHECK(unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk12__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 174)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "uvm_reg_shared_access_seq"s, __VlefCall_25__get_report_verbosity_level);
                __VlefLogAnd_27 = VL_LTES_III(32, 0U, __VlefCall_25__get_report_verbosity_level);
                if (__VlefLogAnd_27) {
                    VL_NULL_CHECK(unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk12__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 174)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "uvm_reg_shared_access_seq"s, __VlefCall_26__get_report_action);
                    __VlefLogAnd_27 = (0U != __VlefCall_26__get_report_action);
                }
                if (VL_UNLIKELY((__VlefLogAnd_27))) {
                    VL_NULL_CHECK(this->__PVT__rg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 174)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_28__get_full_name);
                    VL_NULL_CHECK(maps.at(unnamedblk8__DOT__j), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 174)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_29__get_full_name);
                    __Vtemp_1 = ((2U < unnamedblk8__DOT__unnamedblk9__DOT__status)
                                  ? ""s : Vtb_top__ConstPool__CONSARRAY_10
                                 [(3U & unnamedblk8__DOT__unnamedblk9__DOT__status)]);
                    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_shared_access_seq"s, VL_SFORMATF_N_NX("Status was %s when writing register \"%s\" through map \"%s\".",3
                                                                                , 'S',&(__Vtemp_1)
                                                                                , 'S',&(__VlefCall_28__get_full_name)
                                                                                , 'S',&(__VlefCall_29__get_full_name)) , 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s, 0x000000aeU, ""s, 1U);
                }
            }
            unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk13__DOT__k = 0U;
            while (VL_LTS_III(32, unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk13__DOT__k, maps.size())) {
                unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk13__DOT__k__Vloopsize 
                    = maps.size();
                unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk13__DOT__unnamedblk14__DOT__actual = 0ULL;
                unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk13__DOT__unnamedblk14__DOT__exp = 0ULL;
                this->__VnoInFunc_uvm_get_report_object(vlProcess, vlSymsp, __VlefCall_30__uvm_get_report_object);
                VL_NULL_CHECK(__VlefCall_30__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 181)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT___local_report_object_);
                VL_NULL_CHECK(unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 181)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "uvm_reg_shared_access_seq"s, __VlefCall_31__get_report_verbosity_level);
                __VlefLogAnd_33 = VL_LTES_III(32, 0x00000064U, __VlefCall_31__get_report_verbosity_level);
                if (__VlefLogAnd_33) {
                    VL_NULL_CHECK(unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 181)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "uvm_reg_shared_access_seq"s, __VlefCall_32__get_report_action);
                    __VlefLogAnd_33 = (0U != __VlefCall_32__get_report_action);
                }
                if (VL_UNLIKELY((__VlefLogAnd_33))) {
                    VL_NULL_CHECK(this->__PVT__rg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 181)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_34__get_full_name);
                    VL_NULL_CHECK(maps.at(unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk13__DOT__k), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 181)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_35__get_full_name);
                    this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "uvm_reg_shared_access_seq"s, VL_SFORMATF_N_NX("Reading register %s via map \"%s\"...",2
                                                                                , 'S',&(__VlefCall_34__get_full_name)
                                                                                , 'S',&(__VlefCall_35__get_full_name)) , 0x00000064U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s, 0x000000b5U, ""s, 1U);
                }
                VL_NULL_CHECK(this->__PVT__rg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 184)->__VnoInFunc_get(vlProcess, vlSymsp, ""s, 0U, __VlefCall_36__get);
                unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk13__DOT__unnamedblk14__DOT__exp 
                    = (__VlefCall_36__get & (~ wo_mask.at(unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk13__DOT__k)));
                co_await VL_NULL_CHECK(this->__PVT__rg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 186)->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__status_5251, __Vtask_read__value_5252, 0U, maps.at(unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk13__DOT__k), 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_shared_access_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
                unnamedblk8__DOT__unnamedblk9__DOT__status 
                    = __Vtask_read__status_5251;
                unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk13__DOT__unnamedblk14__DOT__actual 
                    = __Vtask_read__value_5252;
                if ((0U != unnamedblk8__DOT__unnamedblk9__DOT__status)) {
                    this->__VnoInFunc_uvm_get_report_object(vlProcess, vlSymsp, __VlefCall_37__uvm_get_report_object);
                    VL_NULL_CHECK(__VlefCall_37__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 189)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT___local_report_object_);
                    VL_NULL_CHECK(unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 189)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "uvm_reg_shared_access_seq"s, __VlefCall_38__get_report_verbosity_level);
                    __VlefLogAnd_40 = VL_LTES_III(32, 0U, __VlefCall_38__get_report_verbosity_level);
                    if (__VlefLogAnd_40) {
                        VL_NULL_CHECK(unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 189)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "uvm_reg_shared_access_seq"s, __VlefCall_39__get_report_action);
                        __VlefLogAnd_40 = (0U != __VlefCall_39__get_report_action);
                    }
                    if (VL_UNLIKELY((__VlefLogAnd_40))) {
                        VL_NULL_CHECK(this->__PVT__rg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 189)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_41__get_full_name);
                        VL_NULL_CHECK(maps.at(unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk13__DOT__k), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 189)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_42__get_full_name);
                        __Vtemp_2 = ((2U < unnamedblk8__DOT__unnamedblk9__DOT__status)
                                      ? ""s : Vtb_top__ConstPool__CONSARRAY_10
                                     [(3U & unnamedblk8__DOT__unnamedblk9__DOT__status)]);
                        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_shared_access_seq"s, VL_SFORMATF_N_NX("Status was %s when reading register \"%s\" through map \"%s\".",3
                                                                                , 'S',&(__Vtemp_2)
                                                                                , 'S',&(__VlefCall_41__get_full_name)
                                                                                , 'S',&(__VlefCall_42__get_full_name)) , 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s, 0x000000bdU, ""s, 1U);
                    }
                }
                this->__VnoInFunc_uvm_get_report_object(vlProcess, vlSymsp, __VlefCall_43__uvm_get_report_object);
                VL_NULL_CHECK(__VlefCall_43__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 193)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk17__DOT___local_report_object_);
                VL_NULL_CHECK(unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk17__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 193)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "uvm_reg_shared_access_seq"s, __VlefCall_44__get_report_verbosity_level);
                __VlefLogAnd_46 = VL_LTES_III(32, 0x000001f4U, __VlefCall_44__get_report_verbosity_level);
                if (__VlefLogAnd_46) {
                    VL_NULL_CHECK(unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk17__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 193)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "uvm_reg_shared_access_seq"s, __VlefCall_45__get_report_action);
                    __VlefLogAnd_46 = (0U != __VlefCall_45__get_report_action);
                }
                if (VL_UNLIKELY((__VlefLogAnd_46))) {
                    this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "uvm_reg_shared_access_seq"s, VL_SFORMATF_N_NX("Read 'h%h, expecting 'h%h",2
                                                                                , '#',64,unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk13__DOT__unnamedblk14__DOT__actual
                                                                                , '#',64,unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk13__DOT__unnamedblk14__DOT__exp) , 0x000001f4U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s, 0x000000c1U, ""s, 1U);
                }
                if ((unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk13__DOT__unnamedblk14__DOT__actual 
                     != unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk13__DOT__unnamedblk14__DOT__exp)) {
                    this->__VnoInFunc_uvm_get_report_object(vlProcess, vlSymsp, __VlefCall_47__uvm_get_report_object);
                    VL_NULL_CHECK(__VlefCall_47__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 198)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk18__DOT___local_report_object_);
                    VL_NULL_CHECK(unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk18__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 198)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "uvm_reg_shared_access_seq"s, __VlefCall_48__get_report_verbosity_level);
                    __VlefLogAnd_50 = VL_LTES_III(32, 0U, __VlefCall_48__get_report_verbosity_level);
                    if (__VlefLogAnd_50) {
                        VL_NULL_CHECK(unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk18__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 198)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "uvm_reg_shared_access_seq"s, __VlefCall_49__get_report_action);
                        __VlefLogAnd_50 = (0U != __VlefCall_49__get_report_action);
                    }
                    if (VL_UNLIKELY((__VlefLogAnd_50))) {
                        VL_NULL_CHECK(this->__PVT__rg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 198)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_51__get_full_name);
                        VL_NULL_CHECK(maps.at(unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk13__DOT__k), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 198)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_52__get_full_name);
                        VL_NULL_CHECK(maps.at(unnamedblk8__DOT__j), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 198)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_53__get_full_name);
                        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_shared_access_seq"s, VL_SFORMATF_N_NX("Register \"%s\" through map \"%s\" is 'h%h instead of 'h%h after writing 'h%h via map \"%s\" over 'h%h.",7
                                                                                , 'S',&(__VlefCall_51__get_full_name)
                                                                                , 'S',&(__VlefCall_52__get_full_name)
                                                                                , '#',64,unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk13__DOT__unnamedblk14__DOT__actual
                                                                                , '#',64,unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk13__DOT__unnamedblk14__DOT__exp
                                                                                , '#',64,unnamedblk8__DOT__unnamedblk9__DOT__v
                                                                                , 'S',&(__VlefCall_53__get_full_name)
                                                                                , '#',64,unnamedblk8__DOT__unnamedblk9__DOT__prev) , 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s, 0x000000c6U, ""s, 1U);
                    }
                }
                if ((unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk13__DOT__k__Vloopsize 
                     <= maps.size())) {
                    unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk13__DOT__k 
                        = ((::IData)(1U) + unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk13__DOT__k);
                }
            }
            if ((unnamedblk8__DOT__j__Vloopsize <= maps.size())) {
                unnamedblk8__DOT__j = ((::IData)(1U) 
                                       + unnamedblk8__DOT__j);
            }
        }
        __Vlabel0: ;
    }
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc___VBasicRand\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0__randomize;
    __VBasicRand__Vfuncrtn = 1U;
    if ((VlNull{} != this->__PVT__rand_reg_val)) {
        VL_NULL_CHECK(this->__PVT__rand_reg_val, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 71)->__VnoInFunc_randomize(vlSymsp, __VlefCall_0__randomize);
        __VBasicRand__Vfuncrtn = (__VBasicRand__Vfuncrtn 
                                  & __VlefCall_0__randomize);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::~Vtb_top_uvm_pkg__03a__03auvm_reg_shared_access_seq() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::to_string_middle\n"); );
    // Body
    std::string out;
    out += "rg:" + VL_TO_STRING(__PVT__rg);
    out += ", rand_reg_val:" + VL_TO_STRING(__PVT__rand_reg_val);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_reg_sequence_::to_string_middle();
    return (out);
}
