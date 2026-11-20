// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_coreservice_t__Vclpkg::__VnoInFunc_get(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_coreservice_t__Vclpkg::__VnoInFunc_get\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tree_printer> TOP__uvm_pkg__DOT____PVT__uvm_default_tree_printer;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_line_printer> TOP__uvm_pkg__DOT____PVT__uvm_default_line_printer;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_packer> TOP__uvm_pkg__DOT____PVT__uvm_default_packer;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_comparer> TOP__uvm_pkg__DOT____PVT__uvm_default_comparer;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vtask_uvm_init__cs_18;
    ::CData/*0:0*/ __Vtask_uvm_init____VlefLogAnd_9_19;
    __Vtask_uvm_init____VlefLogAnd_9_19 = 0;
    ::IData/*31:0*/ __Vtask_uvm_init____VlefCall_8__get_report_action_20;
    __Vtask_uvm_init____VlefCall_8__get_report_action_20 = 0;
    ::IData/*31:0*/ __Vtask_uvm_init____VlefCall_7__get_report_verbosity_level_21;
    __Vtask_uvm_init____VlefCall_7__get_report_verbosity_level_21 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __Vtask_uvm_init____VlefCall_6__uvm_get_report_object_22;
    ::CData/*0:0*/ __Vtask_uvm_init____VlefLogAnd_5_23;
    __Vtask_uvm_init____VlefLogAnd_5_23 = 0;
    ::IData/*31:0*/ __Vtask_uvm_init____VlefCall_4__get_report_action_24;
    __Vtask_uvm_init____VlefCall_4__get_report_action_24 = 0;
    ::IData/*31:0*/ __Vtask_uvm_init____VlefCall_3__get_report_verbosity_level_25;
    __Vtask_uvm_init____VlefCall_3__get_report_verbosity_level_25 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __Vtask_uvm_init____VlefCall_2__uvm_get_report_object_26;
    ::IData/*31:0*/ __Vtask_uvm_init____VlefCall_1__get_core_state_27;
    __Vtask_uvm_init____VlefCall_1__get_core_state_27 = 0;
    ::IData/*31:0*/ __Vtask_uvm_init____VlefCall_0__get_core_state_28;
    __Vtask_uvm_init____VlefCall_0__get_core_state_28 = 0;
    ::IData/*31:0*/ __Vtask_uvm_init__unnamedblk8__DOT__idx_29;
    __Vtask_uvm_init__unnamedblk8__DOT__idx_29 = 0;
    ::IData/*31:0*/ __Vtask_uvm_init__unnamedblk8__DOT__idx__Vloopsize_30;
    __Vtask_uvm_init__unnamedblk8__DOT__idx__Vloopsize_30 = 0;
    ::IData/*31:0*/ __Vfunc_get_core_state__Vfuncout_105;
    __Vfunc_get_core_state__Vfuncout_105 = 0;
    ::IData/*31:0*/ __Vfunc_get_core_state__Vfuncout_106;
    __Vfunc_get_core_state__Vfuncout_106 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __Vfunc_uvm_get_report_object__Vfuncout_107;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_108;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_31;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __Vtask_uvm_get_report_object__Vfuncout_32;
    ::IData/*31:0*/ __Vtask_get_report_verbosity_level__Vfuncout_33;
    __Vtask_get_report_verbosity_level__Vfuncout_33 = 0;
    ::IData/*31:0*/ __Vtask_get_report_action__Vfuncout_34;
    __Vtask_get_report_action__Vfuncout_34 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_109;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __Vfunc_uvm_get_report_object__Vfuncout_110;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_111;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_35;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __Vtask_uvm_get_report_object__Vfuncout_36;
    ::IData/*31:0*/ __Vtask_get_report_verbosity_level__Vfuncout_37;
    __Vtask_get_report_verbosity_level__Vfuncout_37 = 0;
    ::IData/*31:0*/ __Vtask_get_report_action__Vfuncout_38;
    __Vtask_get_report_action__Vfuncout_38 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_41;
    __Vtask_uvm_report_warning__verbosity_41 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_43;
    __Vtask_uvm_report_warning__line_43 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_45;
    __Vtask_uvm_report_warning__report_enabled_checked_45 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_112;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_46;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__Vfuncout_113;
    // Body
    VlProcess::currentp(vlProcess.get());
    if ((VlNull{} == this->__Vnontrivs.__PVT__inst)) {
        __Vtask_uvm_init__cs_18 = VlNull{};
        __Vtask_uvm_init__unnamedblk8__DOT__idx_29 = 0U;
        __Vtask_uvm_init__unnamedblk8__DOT__idx__Vloopsize_30 = 0;
        {
            __Vfunc_get_core_state__Vfuncout_105 = 
                ((0U == vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__m_uvm_core_state.size())
                  ? 0U : vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__m_uvm_core_state.at(0U));
            __Vtask_uvm_init____VlefCall_0__get_core_state_28 
                = __Vfunc_get_core_state__Vfuncout_105;
            if ((0U != __Vtask_uvm_init____VlefCall_0__get_core_state_28)) {
                __Vfunc_get_core_state__Vfuncout_106 
                    = ((0U == vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__m_uvm_core_state.size())
                        ? 0U : vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__m_uvm_core_state.at(0U));
                __Vtask_uvm_init____VlefCall_1__get_core_state_27 
                    = __Vfunc_get_core_state__Vfuncout_106;
                if ((1U == __Vtask_uvm_init____VlefCall_1__get_core_state_27)) {
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_init__Vstatic__dcs 
                        = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_default_coreservice_t, vlProcess, vlSymsp);
                    this->__VnoInFunc_set(vlSymsp, vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_init__Vstatic__dcs);
                    this->__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_108);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                        = __Vfunc_get__Vfuncout_108;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_31);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                        = __Vtask_get_root__Vfuncout_31;
                    __Vfunc_uvm_get_report_object__Vfuncout_107 
                        = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
                    __Vtask_uvm_init____VlefCall_2__uvm_get_report_object_26 
                        = __Vfunc_uvm_get_report_object__Vfuncout_107;
                    VL_NULL_CHECK(__Vtask_uvm_init____VlefCall_2__uvm_get_report_object_26, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 411)->__VnoInFunc_uvm_get_report_object(vlSymsp, __Vtask_uvm_get_report_object__Vfuncout_32);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_init__Vstatic__unnamedblk5__DOT___local_report_object_ 
                        = __Vtask_uvm_get_report_object__Vfuncout_32;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_init__Vstatic__unnamedblk5__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 411)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 3U, "UVM/INIT/MULTI"s, __Vtask_get_report_verbosity_level__Vfuncout_33);
                    __Vtask_uvm_init____VlefCall_3__get_report_verbosity_level_25 
                        = __Vtask_get_report_verbosity_level__Vfuncout_33;
                    __Vtask_uvm_init____VlefLogAnd_5_23 
                        = VL_LTES_III(32, 0U, __Vtask_uvm_init____VlefCall_3__get_report_verbosity_level_25);
                    if (__Vtask_uvm_init____VlefLogAnd_5_23) {
                        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_init__Vstatic__unnamedblk5__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 411)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 3U, "UVM/INIT/MULTI"s, __Vtask_get_report_action__Vfuncout_34);
                        __Vtask_uvm_init____VlefCall_4__get_report_action_24 
                            = __Vtask_get_report_action__Vfuncout_34;
                        __Vtask_uvm_init____VlefLogAnd_5_23 
                            = (0U != __Vtask_uvm_init____VlefCall_4__get_report_action_24);
                    }
                    if (VL_UNLIKELY((__Vtask_uvm_init____VlefLogAnd_5_23))) {
                        vlSymsp->vlInst.TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "UVM/INIT/MULTI"s, "Non-recoverable race during uvm_init"s, 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh"s, 0x0000019bU, ""s, 1U);
                    }
                } else {
                    this->__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_109);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_init__Vstatic__unnamedblk6__DOT__actual 
                        = __Vfunc_get__Vfuncout_109;
                    if (((__Vtask_uvm_init__cs_18 != vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_init__Vstatic__unnamedblk6__DOT__actual) 
                         & (VlNull{} != __Vtask_uvm_init__cs_18))) {
                        this->__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_111);
                        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                            = __Vfunc_get__Vfuncout_111;
                        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_35);
                        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                            = __Vtask_get_root__Vfuncout_35;
                        __Vfunc_uvm_get_report_object__Vfuncout_110 
                            = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
                        __Vtask_uvm_init____VlefCall_6__uvm_get_report_object_22 
                            = __Vfunc_uvm_get_report_object__Vfuncout_110;
                        VL_NULL_CHECK(__Vtask_uvm_init____VlefCall_6__uvm_get_report_object_22, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 420)->__VnoInFunc_uvm_get_report_object(vlSymsp, __Vtask_uvm_get_report_object__Vfuncout_36);
                        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_init__Vstatic__unnamedblk6__DOT__unnamedblk7__DOT___local_report_object_ 
                            = __Vtask_uvm_get_report_object__Vfuncout_36;
                        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_init__Vstatic__unnamedblk6__DOT__unnamedblk7__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 420)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "UVM/INIT/MULTI"s, __Vtask_get_report_verbosity_level__Vfuncout_37);
                        __Vtask_uvm_init____VlefCall_7__get_report_verbosity_level_21 
                            = __Vtask_get_report_verbosity_level__Vfuncout_37;
                        __Vtask_uvm_init____VlefLogAnd_9_19 
                            = VL_LTES_III(32, 0U, __Vtask_uvm_init____VlefCall_7__get_report_verbosity_level_21);
                        if (__Vtask_uvm_init____VlefLogAnd_9_19) {
                            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_init__Vstatic__unnamedblk6__DOT__unnamedblk7__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 420)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "UVM/INIT/MULTI"s, __Vtask_get_report_action__Vfuncout_38);
                            __Vtask_uvm_init____VlefCall_8__get_report_action_20 
                                = __Vtask_get_report_action__Vfuncout_38;
                            __Vtask_uvm_init____VlefLogAnd_9_19 
                                = (0U != __Vtask_uvm_init____VlefCall_8__get_report_action_20);
                        }
                        if (VL_UNLIKELY((__Vtask_uvm_init____VlefLogAnd_9_19))) {
                            __Vtask_uvm_report_warning__report_enabled_checked_45 = 1U;
                            this->__Vnontrivs.__Vtask_uvm_report_warning__context_name_44 = ""s;
                            __Vtask_uvm_report_warning__line_43 = 0x000001a4U;
                            this->__Vnontrivs.__Vtask_uvm_report_warning__filename_42 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh"s;
                            __Vtask_uvm_report_warning__verbosity_41 = 0U;
                            this->__Vnontrivs.__Vtask_uvm_report_warning__message_40 = "uvm_init() called after library has already completed initialization, subsequent calls are ignored!"s;
                            this->__Vnontrivs.__Vtask_uvm_report_warning__id_39 = "UVM/INIT/MULTI"s;
                            this->__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_112);
                            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                                = __Vfunc_get__Vfuncout_112;
                            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_46);
                            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                                = __Vtask_get_root__Vfuncout_46;
                            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vnontrivs.__Vtask_uvm_report_warning__id_39, this->__Vnontrivs.__Vtask_uvm_report_warning__message_40, __Vtask_uvm_report_warning__verbosity_41, this->__Vnontrivs.__Vtask_uvm_report_warning__filename_42, __Vtask_uvm_report_warning__line_43, this->__Vnontrivs.__Vtask_uvm_report_warning__context_name_44, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_45));
                        }
                    }
                }
                goto __Vlabel0;
            }
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__m_uvm_core_state.push_front(1U);
            if ((VlNull{} == __Vtask_uvm_init__cs_18)) {
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_init__Vstatic__dcs 
                    = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_default_coreservice_t, vlProcess, vlSymsp);
                __Vtask_uvm_init__cs_18 = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_init__Vstatic__dcs;
            }
            this->__VnoInFunc_set(vlSymsp, __Vtask_uvm_init__cs_18);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__m_uvm_core_state.push_front(2U);
            __Vtask_uvm_init__unnamedblk8__DOT__idx_29 = 0U;
            while (VL_LTS_III(32, __Vtask_uvm_init__unnamedblk8__DOT__idx_29, vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_deferred_init.size())) {
                __Vtask_uvm_init__unnamedblk8__DOT__idx__Vloopsize_30 
                    = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_deferred_init.size();
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_deferred_init.at(__Vtask_uvm_init__unnamedblk8__DOT__idx_29), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 451)->__VnoInFunc_initialize(vlProcess, vlSymsp);
                if ((__Vtask_uvm_init__unnamedblk8__DOT__idx__Vloopsize_30 
                     <= vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_deferred_init.size())) {
                    __Vtask_uvm_init__unnamedblk8__DOT__idx_29 
                        = ((::IData)(1U) + __Vtask_uvm_init__unnamedblk8__DOT__idx_29);
                }
            }
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_deferred_init.clear();
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_113);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_init__Vstatic__unnamedblk9__DOT__top 
                = __Vfunc_get__Vfuncout_113;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_init__Vstatic__unnamedblk9__DOT__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 462)->__VnoInFunc_report_header(vlProcess, vlSymsp, 0U);
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_init__Vstatic__unnamedblk9__DOT__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 463)->__VnoInFunc_m_check_uvm_field_flag_size(vlSymsp);
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_init__Vstatic__unnamedblk9__DOT__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 466)->__VnoInFunc_m_check_verbosity(vlProcess, vlSymsp);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__m_uvm_core_state.push_front(3U);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_default_table_printer 
                = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_table_printer, vlProcess, vlSymsp, ""s);
            TOP__uvm_pkg__DOT____PVT__uvm_default_tree_printer 
                = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_tree_printer, vlProcess, vlSymsp, ""s);
            TOP__uvm_pkg__DOT____PVT__uvm_default_line_printer 
                = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_line_printer, vlProcess, vlSymsp, ""s);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_default_printer 
                = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_default_table_printer;
            TOP__uvm_pkg__DOT____PVT__uvm_default_packer 
                = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_packer, vlProcess, vlSymsp, ""s);
            TOP__uvm_pkg__DOT____PVT__uvm_default_comparer 
                = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_comparer, vlProcess, vlSymsp, ""s);
            __Vlabel0: ;
        }
    }
    get__Vfuncrtn = this->__Vnontrivs.__PVT__inst;
}

void Vtb_top_uvm_pkg__03a__03auvm_coreservice_t__Vclpkg::__VnoInFunc_set(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> cs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_coreservice_t__Vclpkg::__VnoInFunc_set\n"); );
    // Body
    this->__Vnontrivs.__PVT__inst = cs;
}

void Vtb_top_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_get_factory(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_factory> &get_factory__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_get_factory\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
}

void Vtb_top_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_get_report_server(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_server> &get_report_server__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_get_report_server\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
}

void Vtb_top_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_set_report_server(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_server> server) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_set_report_server\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_get_default_tr_database(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tr_database> &get_default_tr_database__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_get_default_tr_database\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
}

void Vtb_top_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_get_component_visitor(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_visitor_> &get_component_visitor__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_get_component_visitor\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
}

void Vtb_top_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_get_root(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> &get_root__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_get_root\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
}

void Vtb_top_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_get_default_printer(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer> &get_default_printer__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_get_default_printer\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
}

void Vtb_top_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_get_default_copier(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_copier> &get_default_copier__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_get_default_copier\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
}

void Vtb_top_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_get_uvm_seeding(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &get_uvm_seeding__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_get_uvm_seeding\n"); );
    // Body
    get_uvm_seeding__Vfuncrtn = 0U;
}

void Vtb_top_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_get_resource_pool(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_pool> &get_resource_pool__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_get_resource_pool\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
}

void Vtb_top_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_get_resource_pool_default_precedence(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_resource_pool_default_precedence__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_get_resource_pool_default_precedence\n"); );
    // Body
    get_resource_pool_default_precedence__Vfuncrtn = 0U;
}

void Vtb_top_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_get_phase_hopper(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase_hopper> &get_phase_hopper__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_get_phase_hopper\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
}

void Vtb_top_uvm_pkg__03a__03auvm_coreservice_t::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    Vtb_top_uvm_pkg__03a__03auvm_void::init(vlProcess, vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_coreservice_t::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    /*super.new*/;
}

Vtb_top_uvm_pkg__03a__03auvm_coreservice_t::~Vtb_top_uvm_pkg__03a__03auvm_coreservice_t() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_coreservice_t::~\n"); );
}
