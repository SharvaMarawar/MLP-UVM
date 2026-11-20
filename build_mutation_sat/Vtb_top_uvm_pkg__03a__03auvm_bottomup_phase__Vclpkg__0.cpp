// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_bottomup_phase::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_uvm_pkg__03a__03auvm_phase::init(vlProcess, vlSymsp, name, 0U, VlNull{});
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_bottomup_phase::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

extern const ::VlAssocArray<::IData/*31:0*/, ::std::string> Vtb_top__ConstPool__CONSASSOC_0;

void Vtb_top_uvm_pkg__03a__03auvm_bottomup_phase::__VnoInFunc_traverse(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> comp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase, ::IData/*31:0*/ state) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_bottomup_phase::__VnoInFunc_traverse\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_get_first_child__Vfuncout_2147;
    __Vtask_get_first_child__Vfuncout_2147 = 0;
    ::IData/*31:0*/ __Vtask_get_next_child__Vfuncout_2148;
    __Vtask_get_next_child__Vfuncout_2148 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1155;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2149;
    ::IData/*31:0*/ __Vtask_uvm_report_info__verbosity_2152;
    __Vtask_uvm_report_info__verbosity_2152 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__line_2154;
    __Vtask_uvm_report_info__line_2154 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_info__report_enabled_checked_2156;
    __Vtask_uvm_report_info__report_enabled_checked_2156 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1156;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2157;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1157;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2158;
    ::std::string __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_15;
    ::IData/*31:0*/ __VlefCall_14__get_report_action;
    ::IData/*31:0*/ __VlefCall_13__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_12__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_domain> __VlefCall_11__get_common_domain;
    ::std::string __VlefCall_10__get_name;
    ::std::string __VlefCall_9__get_name;
    ::std::string __VlefCall_8__get_full_name;
    ::std::string __VlefCall_7__get_name;
    ::CData/*0:0*/ __VlefLogAnd_6;
    ::IData/*31:0*/ __VlefCall_5__get_report_action;
    ::IData/*31:0*/ __VlefCall_4__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_3__uvm_get_report_object;
    ::IData/*31:0*/ __VlefCall_2__get_next_child;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> __VlefCall_1__get_child;
    ::IData/*31:0*/ __VlefCall_0__get_first_child;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk1__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> unnamedblk2__DOT__ph;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk3__DOT___local_report_object_;
    ::std::string name;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_domain> phase_domain;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_domain> comp_domain;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase_hopper> hopper;
    name = ""s;
    VL_NULL_CHECK(phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_bottomup_phase.svh", 63)->__VnoInFunc_get_domain(vlProcess, vlSymsp, phase_domain);
    VL_NULL_CHECK(comp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_bottomup_phase.svh", 64)->__VnoInFunc_get_domain(vlSymsp, comp_domain);
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_phase_hopper__Vclpkg.__VnoInFunc_get_global_hopper(vlProcess, vlSymsp, hopper);
    VL_NULL_CHECK(comp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_bottomup_phase.svh", 68)->__VnoInFunc_get_first_child(vlSymsp, name, __Vtask_get_first_child__Vfuncout_2147);
    __VlefCall_0__get_first_child = __Vtask_get_first_child__Vfuncout_2147;
    if ((0U != __VlefCall_0__get_first_child)) {
        do {
            VL_NULL_CHECK(comp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_bottomup_phase.svh", 72)->__VnoInFunc_get_child(vlProcess, vlSymsp, name, __VlefCall_1__get_child);
            VL_NULL_CHECK(hopper, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_bottomup_phase.svh", 72)->__VnoInFunc_traverse_on(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_bottomup_phase>{this}, __VlefCall_1__get_child, phase, state);
            VL_NULL_CHECK(comp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_bottomup_phase.svh", 74)->__VnoInFunc_get_next_child(vlSymsp, name, __Vtask_get_next_child__Vfuncout_2148);
            __VlefCall_2__get_next_child = __Vtask_get_next_child__Vfuncout_2148;
        } while ((0U != __VlefCall_2__get_next_child));
    }
    if (vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1155);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1155;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2149);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
            = __Vtask_get_root__Vfuncout_2149;
        __VlefCall_3__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
        VL_NULL_CHECK(__VlefCall_3__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_bottomup_phase.svh", 82)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk1__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk1__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_bottomup_phase.svh", 82)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "PH_TRACE"s, __VlefCall_4__get_report_verbosity_level);
        __VlefLogAnd_6 = VL_LTES_III(32, 0x000001f4U, __VlefCall_4__get_report_verbosity_level);
        if (__VlefLogAnd_6) {
            VL_NULL_CHECK(unnamedblk1__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_bottomup_phase.svh", 82)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "PH_TRACE"s, __VlefCall_5__get_report_action);
            __VlefLogAnd_6 = (0U != __VlefCall_5__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_6))) {
            VL_NULL_CHECK(phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_bottomup_phase.svh", 82)->__VnoInFunc_get_name(vlSymsp, __VlefCall_7__get_name);
            VL_NULL_CHECK(comp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_bottomup_phase.svh", 82)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_8__get_full_name);
            VL_NULL_CHECK(comp_domain, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_bottomup_phase.svh", 82)->__VnoInFunc_get_name(vlSymsp, __VlefCall_9__get_name);
            VL_NULL_CHECK(phase_domain, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_bottomup_phase.svh", 82)->__VnoInFunc_get_name(vlSymsp, __VlefCall_10__get_name);
            __Vtask_uvm_report_info__report_enabled_checked_2156 = 1U;
            this->__Vtask_uvm_report_info__context_name_2155 = ""s;
            __Vtask_uvm_report_info__line_2154 = 0x00000052U;
            this->__Vtask_uvm_report_info__filename_2153 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_bottomup_phase.svh"s;
            __Vtask_uvm_report_info__verbosity_2152 = 0x000001f4U;
            __Vtemp_1 = Vtb_top__ConstPool__CONSASSOC_0
                .at(state);
            VL_SFORMAT_NX(this->__Vtask_uvm_report_info__message_2151
                          ,"bottomup-phase phase=%s state=%s comp=%s comp.domain=%s phase.domain=%s",5
                          , 'S',&(__VlefCall_7__get_name)
                          , 'S',&(__Vtemp_1), 'S',&(__VlefCall_8__get_full_name)
                          , 'S',&(__VlefCall_9__get_name)
                          , 'S',&(__VlefCall_10__get_name));
            this->__Vtask_uvm_report_info__id_2150 = "PH_TRACE"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1156);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1156;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 147)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2157);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__Vfuncout_2157;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 148)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__id_2150, this->__Vtask_uvm_report_info__message_2151, __Vtask_uvm_report_info__verbosity_2152, this->__Vtask_uvm_report_info__filename_2153, __Vtask_uvm_report_info__line_2154, this->__Vtask_uvm_report_info__context_name_2155, (::IData)(__Vtask_uvm_report_info__report_enabled_checked_2156));
        }
    }
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_domain__Vclpkg.__VnoInFunc_get_common_domain(vlProcess, vlSymsp, __VlefCall_11__get_common_domain);
    if (((phase_domain == __VlefCall_11__get_common_domain) 
         || (phase_domain == comp_domain))) {
        if ((8U == state)) {
            VL_NULL_CHECK(comp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_bottomup_phase.svh", 89)->__PVT__m_current_phase 
                = phase;
            VL_NULL_CHECK(comp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_bottomup_phase.svh", 90)->__VnoInFunc_m_apply_verbosity_settings(vlProcess, vlSymsp, phase);
            VL_NULL_CHECK(comp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_bottomup_phase.svh", 91)->__VnoInFunc_phase_started(vlProcess, vlSymsp, phase);
        } else if ((0x00000010U == state)) {
            unnamedblk2__DOT__ph = ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_bottomup_phase>{this};
            if ((0U != VL_NULL_CHECK(comp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_bottomup_phase.svh", 95)
                 ->__PVT__m_phase_imps.exists(::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_bottomup_phase>{this}))) {
                unnamedblk2__DOT__ph = VL_NULL_CHECK(comp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_bottomup_phase.svh", 97)
                    ->__PVT__m_phase_imps.at(::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_bottomup_phase>{this});
            }
            VL_NULL_CHECK(hopper, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_bottomup_phase.svh", 100)->__VnoInFunc_execute_on(vlProcess, vlSymsp, unnamedblk2__DOT__ph, comp, phase);
        } else if ((0x00000020U == state)) {
            VL_NULL_CHECK(comp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_bottomup_phase.svh", 103)->__VnoInFunc_phase_ready_to_end(vlSymsp, phase);
        } else if ((0x00000040U == state)) {
            VL_NULL_CHECK(comp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_bottomup_phase.svh", 106)->__VnoInFunc_phase_ended(vlSymsp, phase);
            VL_NULL_CHECK(comp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_bottomup_phase.svh", 107)->__PVT__m_current_phase = VlNull{};
        } else {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1157);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1157;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2158);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_2158;
            __VlefCall_12__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_12__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_bottomup_phase.svh", 110)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk3__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk3__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_bottomup_phase.svh", 110)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 3U, "PH_BADEXEC"s, __VlefCall_13__get_report_verbosity_level);
            __VlefLogAnd_15 = VL_LTES_III(32, 0U, __VlefCall_13__get_report_verbosity_level);
            if (__VlefLogAnd_15) {
                VL_NULL_CHECK(unnamedblk3__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_bottomup_phase.svh", 110)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 3U, "PH_BADEXEC"s, __VlefCall_14__get_report_action);
                __VlefLogAnd_15 = (0U != __VlefCall_14__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_15))) {
                vlSymsp->vlInst.TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "PH_BADEXEC"s, "bottomup phase traverse internal error"s, 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_bottomup_phase.svh"s, 0x0000006eU, ""s, 1U);
            }
        }
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_bottomup_phase::__VnoInFunc_execute(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> comp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_bottomup_phase::__VnoInFunc_execute\n"); );
    // Locals
    ::IData/*31:0*/ __Vfunc_uvm_create_random_seed____VlefCall_2__uvm_oneway_hash_1160;
    __Vfunc_uvm_create_random_seed____VlefCall_2__uvm_oneway_hash_1160 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_seed_map> __Vfunc_uvm_create_random_seed____VlefCall_0__new_1162;
    ::IData/*31:0*/ __Vfunc_uvm_instance_scope____Vincrement2_1164;
    __Vfunc_uvm_instance_scope____Vincrement2_1164 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_2161;
    __Vtask_uvm_report_error__verbosity_2161 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_2163;
    __Vtask_uvm_report_error__line_2163 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_2165;
    __Vtask_uvm_report_error__report_enabled_checked_2165 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1165;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2166;
    ::IData/*31:0*/ __Vfunc_uvm_oneway_hash__Vfuncout_1166;
    __Vfunc_uvm_oneway_hash__Vfuncout_1166 = 0;
    ::IData/*31:0*/ __Vfunc_uvm_oneway_hash__seed_1168;
    __Vfunc_uvm_oneway_hash__seed_1168 = 0;
    ::IData/*31:0*/ __Vfunc_uvm_oneway_hash__unnamedblk1__DOT___byte_1169;
    __Vfunc_uvm_oneway_hash__unnamedblk1__DOT___byte_1169 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCall_2__uvm_create_random_seed;
    ::std::string __VlefCall_1__get_full_name;
    ::std::string __VlefCall_0__get_type_name;
    ::VlClassRef<Vtb_top_std__03a__03aprocess> proc;
    vlSymsp->vlInst.TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, proc);
    VL_NULL_CHECK(phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_bottomup_phase.svh", 123)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_0__get_type_name);
    VL_NULL_CHECK(comp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_bottomup_phase.svh", 123)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
    this->__Vfunc_uvm_create_random_seed__inst_id_1159 
        = VL_CVT_PACK_STR_NN(__VlefCall_1__get_full_name);
    this->__Vfunc_uvm_create_random_seed__type_id_1158 
        = VL_CVT_PACK_STR_NN(__VlefCall_0__get_type_name);
    if ((""s == this->__Vfunc_uvm_create_random_seed__inst_id_1159)) {
        this->__Vfunc_uvm_create_random_seed__inst_id_1159 = "__global__"s;
    }
    if ((1U & (~ (0U != vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_random_seed_table_lookup.exists(this->__Vfunc_uvm_create_random_seed__inst_id_1159))))) {
        __Vfunc_uvm_create_random_seed____VlefCall_0__new_1162 
            = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_seed_map, vlSymsp);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_random_seed_table_lookup.atWrite(this->__Vfunc_uvm_create_random_seed__inst_id_1159) 
            = __Vfunc_uvm_create_random_seed____VlefCall_0__new_1162;
    }
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_create_random_seed__Vstatic__seed_map 
        = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_random_seed_table_lookup
        .at(this->__Vfunc_uvm_create_random_seed__inst_id_1159);
    __Vfunc_uvm_instance_scope____Vincrement2_1164 = 0U;
    {
        if ((""s != this->__Vfunc_uvm_instance_scope__Vfuncout_1163)) {
            goto __Vlabel0;
        }
        VL_SFORMAT_NX(this->__Vfunc_uvm_instance_scope__Vfuncout_1163
                      ,"%m",1, 'M',vlSymsp->name(),"uvm_pkg.uvm_instance_scope");
        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos 
            = (VL_LEN_IN(this->__Vfunc_uvm_instance_scope__Vfuncout_1163) 
               - (::IData)(1U));
        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__c 
            = VL_GETC_N(this->__Vfunc_uvm_instance_scope__Vfuncout_1163,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos);
        while ((((0U != vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos) 
                 & (0x2eU != (::IData)(vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__c))) 
                & (0x3aU != (::IData)(vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__c)))) {
            vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos 
                = (vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos 
                   - (::IData)(1U));
            __Vfunc_uvm_instance_scope____Vincrement2_1164 
                = vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos;
            vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__c 
                = VL_GETC_N(this->__Vfunc_uvm_instance_scope__Vfuncout_1163,__Vfunc_uvm_instance_scope____Vincrement2_1164);
        }
        if (VL_UNLIKELY(((0U == vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos)))) {
            __Vtask_uvm_report_error__report_enabled_checked_2165 = 0U;
            this->__Vtask_uvm_report_error__context_name_2164 = ""s;
            __Vtask_uvm_report_error__line_2163 = 0U;
            this->__Vtask_uvm_report_error__filename_2162 = ""s;
            __Vtask_uvm_report_error__verbosity_2161 = 0U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_error__message_2160
                          ,"Illegal name %s in scope string",1
                          , 'S',&(this->__Vfunc_uvm_instance_scope__Vfuncout_1163));
            this->__Vtask_uvm_report_error__id_2159 = "SCPSTR"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1165);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1165;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2166);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__Vfuncout_2166;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_2159, this->__Vtask_uvm_report_error__message_2160, __Vtask_uvm_report_error__verbosity_2161, this->__Vtask_uvm_report_error__filename_2162, __Vtask_uvm_report_error__line_2163, this->__Vtask_uvm_report_error__context_name_2164, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_2165));
        }
        this->__Vfunc_uvm_instance_scope__Vfuncout_1163 
            = VL_SUBSTR_N(this->__Vfunc_uvm_instance_scope__Vfuncout_1163,0U,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos);
        __Vlabel0: ;
    }
    this->__Vfunc_uvm_create_random_seed____VlefCall_1__uvm_instance_scope_1161 
        = this->__Vfunc_uvm_instance_scope__Vfuncout_1163;
    this->__Vfunc_uvm_create_random_seed__type_id_1158 
        = VL_CONCATN_NNN(this->__Vfunc_uvm_create_random_seed____VlefCall_1__uvm_instance_scope_1161, this->__Vfunc_uvm_create_random_seed__type_id_1158);
    if ((1U & (~ (0U != VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_misc.svh", 207)
                  ->__PVT__seed_table.exists(this->__Vfunc_uvm_create_random_seed__type_id_1158))))) {
        __Vfunc_uvm_oneway_hash__seed_1168 = vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_global_random_seed;
        this->__Vfunc_uvm_oneway_hash__string_in_1167 
            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_CONCATN_NNN(this->__Vfunc_uvm_create_random_seed__type_id_1158, "::"s), this->__Vfunc_uvm_create_random_seed__inst_id_1159));
        if ((1U & (~ (0U != __Vfunc_uvm_oneway_hash__seed_1168)))) {
            __Vfunc_uvm_oneway_hash__seed_1168 = vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_global_random_seed;
        }
        __Vfunc_uvm_oneway_hash__Vfuncout_1166 = __Vfunc_uvm_oneway_hash__seed_1168;
        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 = 0xffffffffU;
        __Vfunc_uvm_oneway_hash__unnamedblk1__DOT___byte_1169 = 0U;
        __Vfunc_uvm_oneway_hash__unnamedblk1__DOT___byte_1169 = 0U;
        {
            while (VL_LTS_III(32, __Vfunc_uvm_oneway_hash__unnamedblk1__DOT___byte_1169, 
                              VL_LEN_IN(this->__Vfunc_uvm_oneway_hash__string_in_1167))) {
                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte 
                    = VL_GETC_N(this->__Vfunc_uvm_oneway_hash__string_in_1167,__Vfunc_uvm_oneway_hash__unnamedblk1__DOT___byte_1169);
                if ((0U == (::IData)(vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte))) {
                    goto __Vlabel1;
                }
                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = (vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       << 1U);
                if ((1U & ((::IData)(vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                           ^ (::IData)(vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte)))) {
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                }
                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = (vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       << 1U);
                if ((1U & ((::IData)(vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                           ^ ((::IData)(vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                              >> 1U)))) {
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                }
                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = (vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       << 1U);
                if ((1U & ((::IData)(vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                           ^ ((::IData)(vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                              >> 2U)))) {
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                }
                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = (vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       << 1U);
                if ((1U & ((::IData)(vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                           ^ ((::IData)(vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                              >> 3U)))) {
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                }
                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = (vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       << 1U);
                if ((1U & ((::IData)(vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                           ^ ((::IData)(vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                              >> 4U)))) {
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                }
                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = (vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       << 1U);
                if ((1U & ((::IData)(vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                           ^ ((::IData)(vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                              >> 5U)))) {
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                }
                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = (vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       << 1U);
                if ((1U & ((::IData)(vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                           ^ ((::IData)(vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                              >> 6U)))) {
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                }
                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = (vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       << 1U);
                if (((::IData)(vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                     ^ ((::IData)(vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                        >> 7U))) {
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                }
                __Vfunc_uvm_oneway_hash__unnamedblk1__DOT___byte_1169 
                    = ((::IData)(1U) + __Vfunc_uvm_oneway_hash__unnamedblk1__DOT___byte_1169);
            }
            __Vlabel1: ;
        }
        __Vfunc_uvm_oneway_hash__Vfuncout_1166 = (__Vfunc_uvm_oneway_hash__Vfuncout_1166 
                                                  + 
                                                  (~ 
                                                   ((((0x0000ff00U 
                                                       & (vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                                          << 8U)) 
                                                      | (0x000000ffU 
                                                         & (vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                                            >> 8U))) 
                                                     << 0x00000010U) 
                                                    | ((0x0000ff00U 
                                                        & (vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                                           >> 8U)) 
                                                       | (vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                                          >> 0x18U)))));
        __Vfunc_uvm_create_random_seed____VlefCall_2__uvm_oneway_hash_1160 
            = __Vfunc_uvm_oneway_hash__Vfuncout_1166;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_misc.svh", 208)->__PVT__seed_table.atWrite(this->__Vfunc_uvm_create_random_seed__type_id_1158) 
            = __Vfunc_uvm_create_random_seed____VlefCall_2__uvm_oneway_hash_1160;
    }
    if ((1U & (~ (0U != VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_misc.svh", 210)
                  ->__PVT__count.exists(this->__Vfunc_uvm_create_random_seed__type_id_1158))))) {
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_misc.svh", 211)->__PVT__count.atWrite(this->__Vfunc_uvm_create_random_seed__type_id_1158) = 0U;
    }
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_misc.svh", 217)->__PVT__seed_table.atWrite(this->__Vfunc_uvm_create_random_seed__type_id_1158) 
        = (VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_misc.svh", 217)
           ->__PVT__seed_table.at(this->__Vfunc_uvm_create_random_seed__type_id_1158) 
           + VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_misc.svh", 217)
           ->__PVT__count.at(this->__Vfunc_uvm_create_random_seed__type_id_1158));
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_misc.svh", 218)->__PVT__count.atWrite(this->__Vfunc_uvm_create_random_seed__type_id_1158) 
        = ((::IData)(1U) + VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_misc.svh", 218)
           ->__PVT__count.at(this->__Vfunc_uvm_create_random_seed__type_id_1158));
    __VlefCall_2__uvm_create_random_seed = VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_misc.svh", 220)
        ->__PVT__seed_table.at(this->__Vfunc_uvm_create_random_seed__type_id_1158);
    VL_NULL_CHECK(proc, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_bottomup_phase.svh", 123)->__VnoInFunc_srandom(vlSymsp, __VlefCall_2__uvm_create_random_seed);
    VL_NULL_CHECK(comp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_bottomup_phase.svh", 125)->__PVT__m_current_phase 
        = phase;
    this->__VnoInFunc_exec_func(vlProcess, vlSymsp, comp, phase);
}

void Vtb_top_uvm_pkg__03a__03auvm_bottomup_phase::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_bottomup_phase::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_bottomup_phase::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_bottomup_phase::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_bottomup_phase::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_bottomup_phase::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_bottomup_phase::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_bottomup_phase::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_bottomup_phase::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_bottomup_phase::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_top_uvm_pkg__03a__03auvm_bottomup_phase::~Vtb_top_uvm_pkg__03a__03auvm_bottomup_phase() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_bottomup_phase::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_bottomup_phase::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_bottomup_phase::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_bottomup_phase::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_bottomup_phase::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vtb_top_uvm_pkg__03a__03auvm_phase::to_string_middle();
    return (out);
}
