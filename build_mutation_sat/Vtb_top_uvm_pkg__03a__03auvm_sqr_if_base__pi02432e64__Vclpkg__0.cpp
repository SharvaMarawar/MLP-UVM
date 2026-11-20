// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pi02432e64::__VnoInFunc_get_next_item(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pi02432e64::__VnoInFunc_get_next_item\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_2828;
    __Vtask_uvm_report_error__verbosity_2828 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_2830;
    __Vtask_uvm_report_error__line_2830 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_2832;
    __Vtask_uvm_report_error__report_enabled_checked_2832 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1366;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2833;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vtask_uvm_report_error__report_enabled_checked_2832 = 0U;
    this->__Vtask_uvm_report_error__context_name_2831 = ""s;
    __Vtask_uvm_report_error__line_2830 = 0U;
    this->__Vtask_uvm_report_error__filename_2829 = ""s;
    __Vtask_uvm_report_error__verbosity_2828 = 0U;
    this->__Vtask_uvm_report_error__message_2827 = "Sequencer interface task not implemented"s;
    this->__Vtask_uvm_report_error__id_2826 = "get_next_item"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1366);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1366;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2833);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_2833;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_2826, this->__Vtask_uvm_report_error__message_2827, __Vtask_uvm_report_error__verbosity_2828, this->__Vtask_uvm_report_error__filename_2829, __Vtask_uvm_report_error__line_2830, this->__Vtask_uvm_report_error__context_name_2831, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_2832));
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pi02432e64::__VnoInFunc_try_next_item(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pi02432e64::__VnoInFunc_try_next_item\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_2836;
    __Vtask_uvm_report_error__verbosity_2836 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_2838;
    __Vtask_uvm_report_error__line_2838 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_2840;
    __Vtask_uvm_report_error__report_enabled_checked_2840 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1367;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2841;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vtask_uvm_report_error__report_enabled_checked_2840 = 0U;
    this->__Vtask_uvm_report_error__context_name_2839 = ""s;
    __Vtask_uvm_report_error__line_2838 = 0U;
    this->__Vtask_uvm_report_error__filename_2837 = ""s;
    __Vtask_uvm_report_error__verbosity_2836 = 0U;
    this->__Vtask_uvm_report_error__message_2835 = "Sequencer interface task not implemented"s;
    this->__Vtask_uvm_report_error__id_2834 = "try_next_item"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1367);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1367;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2841);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_2841;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_2834, this->__Vtask_uvm_report_error__message_2835, __Vtask_uvm_report_error__verbosity_2836, this->__Vtask_uvm_report_error__filename_2837, __Vtask_uvm_report_error__line_2838, this->__Vtask_uvm_report_error__context_name_2839, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_2840));
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pi02432e64::__VnoInFunc_item_done(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pi02432e64::__VnoInFunc_item_done\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_2844;
    __Vtask_uvm_report_error__verbosity_2844 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_2846;
    __Vtask_uvm_report_error__line_2846 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_2848;
    __Vtask_uvm_report_error__report_enabled_checked_2848 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1368;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2849;
    // Body
    VlProcess::currentp(vlProcess.get());
    __Vtask_uvm_report_error__report_enabled_checked_2848 = 0U;
    this->__Vtask_uvm_report_error__context_name_2847 = ""s;
    __Vtask_uvm_report_error__line_2846 = 0U;
    this->__Vtask_uvm_report_error__filename_2845 = ""s;
    __Vtask_uvm_report_error__verbosity_2844 = 0U;
    this->__Vtask_uvm_report_error__message_2843 = "Sequencer interface function not implemented"s;
    this->__Vtask_uvm_report_error__id_2842 = "item_done"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1368);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1368;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2849);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_2849;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_2842, this->__Vtask_uvm_report_error__message_2843, __Vtask_uvm_report_error__verbosity_2844, this->__Vtask_uvm_report_error__filename_2845, __Vtask_uvm_report_error__line_2846, this->__Vtask_uvm_report_error__context_name_2847, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_2848));
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pi02432e64::__VnoInFunc_wait_for_sequences(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pi02432e64::__VnoInFunc_wait_for_sequences\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_2852;
    __Vtask_uvm_report_error__verbosity_2852 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_2854;
    __Vtask_uvm_report_error__line_2854 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_2856;
    __Vtask_uvm_report_error__report_enabled_checked_2856 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1369;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2857;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vtask_uvm_report_error__report_enabled_checked_2856 = 0U;
    this->__Vtask_uvm_report_error__context_name_2855 = ""s;
    __Vtask_uvm_report_error__line_2854 = 0U;
    this->__Vtask_uvm_report_error__filename_2853 = ""s;
    __Vtask_uvm_report_error__verbosity_2852 = 0U;
    this->__Vtask_uvm_report_error__message_2851 = "Sequencer interface task not implemented"s;
    this->__Vtask_uvm_report_error__id_2850 = "wait_for_sequences"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1369);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1369;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2857);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_2857;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_2850, this->__Vtask_uvm_report_error__message_2851, __Vtask_uvm_report_error__verbosity_2852, this->__Vtask_uvm_report_error__filename_2853, __Vtask_uvm_report_error__line_2854, this->__Vtask_uvm_report_error__context_name_2855, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_2856));
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pi02432e64::__VnoInFunc_has_do_available(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &has_do_available__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pi02432e64::__VnoInFunc_has_do_available\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_2860;
    __Vtask_uvm_report_error__verbosity_2860 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_2862;
    __Vtask_uvm_report_error__line_2862 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_2864;
    __Vtask_uvm_report_error__report_enabled_checked_2864 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1370;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2865;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    has_do_available__Vfuncrtn = 0U;
    __Vtask_uvm_report_error__report_enabled_checked_2864 = 0U;
    this->__Vtask_uvm_report_error__context_name_2863 = ""s;
    __Vtask_uvm_report_error__line_2862 = 0U;
    this->__Vtask_uvm_report_error__filename_2861 = ""s;
    __Vtask_uvm_report_error__verbosity_2860 = 0U;
    this->__Vtask_uvm_report_error__message_2859 = "Sequencer interface function not implemented"s;
    this->__Vtask_uvm_report_error__id_2858 = "has_do_available"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1370);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1370;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2865);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_2865;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_2858, this->__Vtask_uvm_report_error__message_2859, __Vtask_uvm_report_error__verbosity_2860, this->__Vtask_uvm_report_error__filename_2861, __Vtask_uvm_report_error__line_2862, this->__Vtask_uvm_report_error__context_name_2863, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_2864));
    has_do_available__Vfuncrtn = 0U;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pi02432e64::__VnoInFunc_get(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pi02432e64::__VnoInFunc_get\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_2868;
    __Vtask_uvm_report_error__verbosity_2868 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_2870;
    __Vtask_uvm_report_error__line_2870 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_2872;
    __Vtask_uvm_report_error__report_enabled_checked_2872 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1371;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2873;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vtask_uvm_report_error__report_enabled_checked_2872 = 0U;
    this->__Vtask_uvm_report_error__context_name_2871 = ""s;
    __Vtask_uvm_report_error__line_2870 = 0U;
    this->__Vtask_uvm_report_error__filename_2869 = ""s;
    __Vtask_uvm_report_error__verbosity_2868 = 0U;
    this->__Vtask_uvm_report_error__message_2867 = "Sequencer interface task not implemented"s;
    this->__Vtask_uvm_report_error__id_2866 = "get"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1371);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1371;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2873);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_2873;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_2866, this->__Vtask_uvm_report_error__message_2867, __Vtask_uvm_report_error__verbosity_2868, this->__Vtask_uvm_report_error__filename_2869, __Vtask_uvm_report_error__line_2870, this->__Vtask_uvm_report_error__context_name_2871, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_2872));
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pi02432e64::__VnoInFunc_peek(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pi02432e64::__VnoInFunc_peek\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_2876;
    __Vtask_uvm_report_error__verbosity_2876 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_2878;
    __Vtask_uvm_report_error__line_2878 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_2880;
    __Vtask_uvm_report_error__report_enabled_checked_2880 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1372;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2881;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vtask_uvm_report_error__report_enabled_checked_2880 = 0U;
    this->__Vtask_uvm_report_error__context_name_2879 = ""s;
    __Vtask_uvm_report_error__line_2878 = 0U;
    this->__Vtask_uvm_report_error__filename_2877 = ""s;
    __Vtask_uvm_report_error__verbosity_2876 = 0U;
    this->__Vtask_uvm_report_error__message_2875 = "Sequencer interface task not implemented"s;
    this->__Vtask_uvm_report_error__id_2874 = "peek"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1372);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1372;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2881);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_2881;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_2874, this->__Vtask_uvm_report_error__message_2875, __Vtask_uvm_report_error__verbosity_2876, this->__Vtask_uvm_report_error__filename_2877, __Vtask_uvm_report_error__line_2878, this->__Vtask_uvm_report_error__context_name_2879, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_2880));
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pi02432e64::__VnoInFunc_put(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pi02432e64::__VnoInFunc_put\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_2884;
    __Vtask_uvm_report_error__verbosity_2884 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_2886;
    __Vtask_uvm_report_error__line_2886 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_2888;
    __Vtask_uvm_report_error__report_enabled_checked_2888 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1373;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2889;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    __Vtask_uvm_report_error__report_enabled_checked_2888 = 0U;
    this->__Vtask_uvm_report_error__context_name_2887 = ""s;
    __Vtask_uvm_report_error__line_2886 = 0U;
    this->__Vtask_uvm_report_error__filename_2885 = ""s;
    __Vtask_uvm_report_error__verbosity_2884 = 0U;
    this->__Vtask_uvm_report_error__message_2883 = "Sequencer interface task not implemented"s;
    this->__Vtask_uvm_report_error__id_2882 = "put"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1373);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1373;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2889);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_2889;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_2882, this->__Vtask_uvm_report_error__message_2883, __Vtask_uvm_report_error__verbosity_2884, this->__Vtask_uvm_report_error__filename_2885, __Vtask_uvm_report_error__line_2886, this->__Vtask_uvm_report_error__context_name_2887, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_2888));
}

void Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pi02432e64::__VnoInFunc_put_response(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pi02432e64::__VnoInFunc_put_response\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_2892;
    __Vtask_uvm_report_error__verbosity_2892 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_2894;
    __Vtask_uvm_report_error__line_2894 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_2896;
    __Vtask_uvm_report_error__report_enabled_checked_2896 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1374;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2897;
    // Body
    VlProcess::currentp(vlProcess.get());
    __Vtask_uvm_report_error__report_enabled_checked_2896 = 0U;
    this->__Vtask_uvm_report_error__context_name_2895 = ""s;
    __Vtask_uvm_report_error__line_2894 = 0U;
    this->__Vtask_uvm_report_error__filename_2893 = ""s;
    __Vtask_uvm_report_error__verbosity_2892 = 0U;
    this->__Vtask_uvm_report_error__message_2891 = "Sequencer interface function not implemented"s;
    this->__Vtask_uvm_report_error__id_2890 = "put_response"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1374);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1374;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2897);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_2897;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_2890, this->__Vtask_uvm_report_error__message_2891, __Vtask_uvm_report_error__verbosity_2892, this->__Vtask_uvm_report_error__filename_2893, __Vtask_uvm_report_error__line_2894, this->__Vtask_uvm_report_error__context_name_2895, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_2896));
}

void Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pi02432e64::__VnoInFunc_disable_auto_item_recording(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pi02432e64::__VnoInFunc_disable_auto_item_recording\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_2900;
    __Vtask_uvm_report_error__verbosity_2900 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_2902;
    __Vtask_uvm_report_error__line_2902 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_2904;
    __Vtask_uvm_report_error__report_enabled_checked_2904 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1375;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2905;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    __Vtask_uvm_report_error__report_enabled_checked_2904 = 0U;
    this->__Vtask_uvm_report_error__context_name_2903 = ""s;
    __Vtask_uvm_report_error__line_2902 = 0U;
    this->__Vtask_uvm_report_error__filename_2901 = ""s;
    __Vtask_uvm_report_error__verbosity_2900 = 0U;
    this->__Vtask_uvm_report_error__message_2899 = "Sequencer interface function not implemented"s;
    this->__Vtask_uvm_report_error__id_2898 = "disable_auto_item_recording"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1375);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1375;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2905);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_2905;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_2898, this->__Vtask_uvm_report_error__message_2899, __Vtask_uvm_report_error__verbosity_2900, this->__Vtask_uvm_report_error__filename_2901, __Vtask_uvm_report_error__line_2902, this->__Vtask_uvm_report_error__context_name_2903, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_2904));
}

void Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pi02432e64::__VnoInFunc_is_auto_item_recording_enabled(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &is_auto_item_recording_enabled__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pi02432e64::__VnoInFunc_is_auto_item_recording_enabled\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_2908;
    __Vtask_uvm_report_error__verbosity_2908 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_2910;
    __Vtask_uvm_report_error__line_2910 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_2912;
    __Vtask_uvm_report_error__report_enabled_checked_2912 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1376;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2913;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    is_auto_item_recording_enabled__Vfuncrtn = 0U;
    __Vtask_uvm_report_error__report_enabled_checked_2912 = 0U;
    this->__Vtask_uvm_report_error__context_name_2911 = ""s;
    __Vtask_uvm_report_error__line_2910 = 0U;
    this->__Vtask_uvm_report_error__filename_2909 = ""s;
    __Vtask_uvm_report_error__verbosity_2908 = 0U;
    this->__Vtask_uvm_report_error__message_2907 = "Sequencer interface function not implemented"s;
    this->__Vtask_uvm_report_error__id_2906 = "is_auto_item_recording_enabled"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1376);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1376;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2913);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_2913;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_2906, this->__Vtask_uvm_report_error__message_2907, __Vtask_uvm_report_error__verbosity_2908, this->__Vtask_uvm_report_error__filename_2909, __Vtask_uvm_report_error__line_2910, this->__Vtask_uvm_report_error__context_name_2911, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_2912));
    is_auto_item_recording_enabled__Vfuncrtn = 0U;
}

void Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pi02432e64::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    Vtb_top_uvm_pkg__03a__03auvm_void::init(vlProcess, vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pi02432e64::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pi02432e64::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pi02432e64::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pi02432e64::~Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pi02432e64() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pi02432e64::~\n"); );
}
