// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pi9446ac00::__VnoInFunc_get_next_item(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pi9446ac00::__VnoInFunc_get_next_item\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_2996;
    __Vtask_uvm_report_error__verbosity_2996 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_2998;
    __Vtask_uvm_report_error__line_2998 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3000;
    __Vtask_uvm_report_error__report_enabled_checked_3000 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1387;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3001;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vtask_uvm_report_error__report_enabled_checked_3000 = 0U;
    this->__Vtask_uvm_report_error__context_name_2999 = ""s;
    __Vtask_uvm_report_error__line_2998 = 0U;
    this->__Vtask_uvm_report_error__filename_2997 = ""s;
    __Vtask_uvm_report_error__verbosity_2996 = 0U;
    this->__Vtask_uvm_report_error__message_2995 = "Sequencer interface task not implemented"s;
    this->__Vtask_uvm_report_error__id_2994 = "get_next_item"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1387);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1387;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3001);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_3001;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_2994, this->__Vtask_uvm_report_error__message_2995, __Vtask_uvm_report_error__verbosity_2996, this->__Vtask_uvm_report_error__filename_2997, __Vtask_uvm_report_error__line_2998, this->__Vtask_uvm_report_error__context_name_2999, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3000));
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pi9446ac00::__VnoInFunc_try_next_item(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pi9446ac00::__VnoInFunc_try_next_item\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_3004;
    __Vtask_uvm_report_error__verbosity_3004 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_3006;
    __Vtask_uvm_report_error__line_3006 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3008;
    __Vtask_uvm_report_error__report_enabled_checked_3008 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1388;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3009;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vtask_uvm_report_error__report_enabled_checked_3008 = 0U;
    this->__Vtask_uvm_report_error__context_name_3007 = ""s;
    __Vtask_uvm_report_error__line_3006 = 0U;
    this->__Vtask_uvm_report_error__filename_3005 = ""s;
    __Vtask_uvm_report_error__verbosity_3004 = 0U;
    this->__Vtask_uvm_report_error__message_3003 = "Sequencer interface task not implemented"s;
    this->__Vtask_uvm_report_error__id_3002 = "try_next_item"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1388);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1388;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3009);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_3009;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_3002, this->__Vtask_uvm_report_error__message_3003, __Vtask_uvm_report_error__verbosity_3004, this->__Vtask_uvm_report_error__filename_3005, __Vtask_uvm_report_error__line_3006, this->__Vtask_uvm_report_error__context_name_3007, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3008));
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pi9446ac00::__VnoInFunc_item_done(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pi9446ac00::__VnoInFunc_item_done\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_3012;
    __Vtask_uvm_report_error__verbosity_3012 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_3014;
    __Vtask_uvm_report_error__line_3014 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3016;
    __Vtask_uvm_report_error__report_enabled_checked_3016 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1389;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3017;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    __Vtask_uvm_report_error__report_enabled_checked_3016 = 0U;
    this->__Vtask_uvm_report_error__context_name_3015 = ""s;
    __Vtask_uvm_report_error__line_3014 = 0U;
    this->__Vtask_uvm_report_error__filename_3013 = ""s;
    __Vtask_uvm_report_error__verbosity_3012 = 0U;
    this->__Vtask_uvm_report_error__message_3011 = "Sequencer interface function not implemented"s;
    this->__Vtask_uvm_report_error__id_3010 = "item_done"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1389);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1389;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3017);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_3017;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_3010, this->__Vtask_uvm_report_error__message_3011, __Vtask_uvm_report_error__verbosity_3012, this->__Vtask_uvm_report_error__filename_3013, __Vtask_uvm_report_error__line_3014, this->__Vtask_uvm_report_error__context_name_3015, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3016));
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pi9446ac00::__VnoInFunc_wait_for_sequences(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pi9446ac00::__VnoInFunc_wait_for_sequences\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_3020;
    __Vtask_uvm_report_error__verbosity_3020 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_3022;
    __Vtask_uvm_report_error__line_3022 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3024;
    __Vtask_uvm_report_error__report_enabled_checked_3024 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1390;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3025;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vtask_uvm_report_error__report_enabled_checked_3024 = 0U;
    this->__Vtask_uvm_report_error__context_name_3023 = ""s;
    __Vtask_uvm_report_error__line_3022 = 0U;
    this->__Vtask_uvm_report_error__filename_3021 = ""s;
    __Vtask_uvm_report_error__verbosity_3020 = 0U;
    this->__Vtask_uvm_report_error__message_3019 = "Sequencer interface task not implemented"s;
    this->__Vtask_uvm_report_error__id_3018 = "wait_for_sequences"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1390);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1390;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3025);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_3025;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_3018, this->__Vtask_uvm_report_error__message_3019, __Vtask_uvm_report_error__verbosity_3020, this->__Vtask_uvm_report_error__filename_3021, __Vtask_uvm_report_error__line_3022, this->__Vtask_uvm_report_error__context_name_3023, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3024));
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pi9446ac00::__VnoInFunc_has_do_available(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &has_do_available__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pi9446ac00::__VnoInFunc_has_do_available\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_3028;
    __Vtask_uvm_report_error__verbosity_3028 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_3030;
    __Vtask_uvm_report_error__line_3030 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3032;
    __Vtask_uvm_report_error__report_enabled_checked_3032 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1391;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3033;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    has_do_available__Vfuncrtn = 0U;
    __Vtask_uvm_report_error__report_enabled_checked_3032 = 0U;
    this->__Vtask_uvm_report_error__context_name_3031 = ""s;
    __Vtask_uvm_report_error__line_3030 = 0U;
    this->__Vtask_uvm_report_error__filename_3029 = ""s;
    __Vtask_uvm_report_error__verbosity_3028 = 0U;
    this->__Vtask_uvm_report_error__message_3027 = "Sequencer interface function not implemented"s;
    this->__Vtask_uvm_report_error__id_3026 = "has_do_available"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1391);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1391;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3033);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_3033;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_3026, this->__Vtask_uvm_report_error__message_3027, __Vtask_uvm_report_error__verbosity_3028, this->__Vtask_uvm_report_error__filename_3029, __Vtask_uvm_report_error__line_3030, this->__Vtask_uvm_report_error__context_name_3031, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3032));
    has_do_available__Vfuncrtn = 0U;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pi9446ac00::__VnoInFunc_get(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pi9446ac00::__VnoInFunc_get\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_3036;
    __Vtask_uvm_report_error__verbosity_3036 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_3038;
    __Vtask_uvm_report_error__line_3038 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3040;
    __Vtask_uvm_report_error__report_enabled_checked_3040 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1392;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3041;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vtask_uvm_report_error__report_enabled_checked_3040 = 0U;
    this->__Vtask_uvm_report_error__context_name_3039 = ""s;
    __Vtask_uvm_report_error__line_3038 = 0U;
    this->__Vtask_uvm_report_error__filename_3037 = ""s;
    __Vtask_uvm_report_error__verbosity_3036 = 0U;
    this->__Vtask_uvm_report_error__message_3035 = "Sequencer interface task not implemented"s;
    this->__Vtask_uvm_report_error__id_3034 = "get"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1392);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1392;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3041);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_3041;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_3034, this->__Vtask_uvm_report_error__message_3035, __Vtask_uvm_report_error__verbosity_3036, this->__Vtask_uvm_report_error__filename_3037, __Vtask_uvm_report_error__line_3038, this->__Vtask_uvm_report_error__context_name_3039, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3040));
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pi9446ac00::__VnoInFunc_peek(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pi9446ac00::__VnoInFunc_peek\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_3044;
    __Vtask_uvm_report_error__verbosity_3044 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_3046;
    __Vtask_uvm_report_error__line_3046 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3048;
    __Vtask_uvm_report_error__report_enabled_checked_3048 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1393;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3049;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vtask_uvm_report_error__report_enabled_checked_3048 = 0U;
    this->__Vtask_uvm_report_error__context_name_3047 = ""s;
    __Vtask_uvm_report_error__line_3046 = 0U;
    this->__Vtask_uvm_report_error__filename_3045 = ""s;
    __Vtask_uvm_report_error__verbosity_3044 = 0U;
    this->__Vtask_uvm_report_error__message_3043 = "Sequencer interface task not implemented"s;
    this->__Vtask_uvm_report_error__id_3042 = "peek"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1393);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1393;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3049);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_3049;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_3042, this->__Vtask_uvm_report_error__message_3043, __Vtask_uvm_report_error__verbosity_3044, this->__Vtask_uvm_report_error__filename_3045, __Vtask_uvm_report_error__line_3046, this->__Vtask_uvm_report_error__context_name_3047, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3048));
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pi9446ac00::__VnoInFunc_put(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pi9446ac00::__VnoInFunc_put\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_3052;
    __Vtask_uvm_report_error__verbosity_3052 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_3054;
    __Vtask_uvm_report_error__line_3054 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3056;
    __Vtask_uvm_report_error__report_enabled_checked_3056 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1394;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3057;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    __Vtask_uvm_report_error__report_enabled_checked_3056 = 0U;
    this->__Vtask_uvm_report_error__context_name_3055 = ""s;
    __Vtask_uvm_report_error__line_3054 = 0U;
    this->__Vtask_uvm_report_error__filename_3053 = ""s;
    __Vtask_uvm_report_error__verbosity_3052 = 0U;
    this->__Vtask_uvm_report_error__message_3051 = "Sequencer interface task not implemented"s;
    this->__Vtask_uvm_report_error__id_3050 = "put"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1394);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1394;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3057);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_3057;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_3050, this->__Vtask_uvm_report_error__message_3051, __Vtask_uvm_report_error__verbosity_3052, this->__Vtask_uvm_report_error__filename_3053, __Vtask_uvm_report_error__line_3054, this->__Vtask_uvm_report_error__context_name_3055, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3056));
}

void Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pi9446ac00::__VnoInFunc_put_response(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pi9446ac00::__VnoInFunc_put_response\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_3060;
    __Vtask_uvm_report_error__verbosity_3060 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_3062;
    __Vtask_uvm_report_error__line_3062 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3064;
    __Vtask_uvm_report_error__report_enabled_checked_3064 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1395;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3065;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    __Vtask_uvm_report_error__report_enabled_checked_3064 = 0U;
    this->__Vtask_uvm_report_error__context_name_3063 = ""s;
    __Vtask_uvm_report_error__line_3062 = 0U;
    this->__Vtask_uvm_report_error__filename_3061 = ""s;
    __Vtask_uvm_report_error__verbosity_3060 = 0U;
    this->__Vtask_uvm_report_error__message_3059 = "Sequencer interface function not implemented"s;
    this->__Vtask_uvm_report_error__id_3058 = "put_response"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1395);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1395;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3065);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_3065;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_3058, this->__Vtask_uvm_report_error__message_3059, __Vtask_uvm_report_error__verbosity_3060, this->__Vtask_uvm_report_error__filename_3061, __Vtask_uvm_report_error__line_3062, this->__Vtask_uvm_report_error__context_name_3063, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3064));
}

void Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pi9446ac00::__VnoInFunc_disable_auto_item_recording(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pi9446ac00::__VnoInFunc_disable_auto_item_recording\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_3068;
    __Vtask_uvm_report_error__verbosity_3068 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_3070;
    __Vtask_uvm_report_error__line_3070 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3072;
    __Vtask_uvm_report_error__report_enabled_checked_3072 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1396;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3073;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    __Vtask_uvm_report_error__report_enabled_checked_3072 = 0U;
    this->__Vtask_uvm_report_error__context_name_3071 = ""s;
    __Vtask_uvm_report_error__line_3070 = 0U;
    this->__Vtask_uvm_report_error__filename_3069 = ""s;
    __Vtask_uvm_report_error__verbosity_3068 = 0U;
    this->__Vtask_uvm_report_error__message_3067 = "Sequencer interface function not implemented"s;
    this->__Vtask_uvm_report_error__id_3066 = "disable_auto_item_recording"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1396);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1396;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3073);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_3073;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_3066, this->__Vtask_uvm_report_error__message_3067, __Vtask_uvm_report_error__verbosity_3068, this->__Vtask_uvm_report_error__filename_3069, __Vtask_uvm_report_error__line_3070, this->__Vtask_uvm_report_error__context_name_3071, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3072));
}

void Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pi9446ac00::__VnoInFunc_is_auto_item_recording_enabled(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &is_auto_item_recording_enabled__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pi9446ac00::__VnoInFunc_is_auto_item_recording_enabled\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_3076;
    __Vtask_uvm_report_error__verbosity_3076 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_3078;
    __Vtask_uvm_report_error__line_3078 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3080;
    __Vtask_uvm_report_error__report_enabled_checked_3080 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1397;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3081;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    is_auto_item_recording_enabled__Vfuncrtn = 0U;
    __Vtask_uvm_report_error__report_enabled_checked_3080 = 0U;
    this->__Vtask_uvm_report_error__context_name_3079 = ""s;
    __Vtask_uvm_report_error__line_3078 = 0U;
    this->__Vtask_uvm_report_error__filename_3077 = ""s;
    __Vtask_uvm_report_error__verbosity_3076 = 0U;
    this->__Vtask_uvm_report_error__message_3075 = "Sequencer interface function not implemented"s;
    this->__Vtask_uvm_report_error__id_3074 = "is_auto_item_recording_enabled"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1397);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1397;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3081);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_3081;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_3074, this->__Vtask_uvm_report_error__message_3075, __Vtask_uvm_report_error__verbosity_3076, this->__Vtask_uvm_report_error__filename_3077, __Vtask_uvm_report_error__line_3078, this->__Vtask_uvm_report_error__context_name_3079, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3080));
    is_auto_item_recording_enabled__Vfuncrtn = 0U;
}

void Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pi9446ac00::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    Vtb_top_uvm_pkg__03a__03auvm_void::init(vlProcess, vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pi9446ac00::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pi9446ac00::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pi9446ac00::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pi9446ac00::~Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pi9446ac00() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pi9446ac00::~\n"); );
}
