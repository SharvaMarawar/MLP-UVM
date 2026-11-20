// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pifec5b368::__VnoInFunc_put(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_mon_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pifec5b368::__VnoInFunc_put\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_2748;
    __Vtask_uvm_report_error__verbosity_2748 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_2750;
    __Vtask_uvm_report_error__line_2750 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_2752;
    __Vtask_uvm_report_error__report_enabled_checked_2752 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1356;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2753;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    __Vtask_uvm_report_error__report_enabled_checked_2752 = 0U;
    this->__Vtask_uvm_report_error__context_name_2751 = ""s;
    __Vtask_uvm_report_error__line_2750 = 0U;
    this->__Vtask_uvm_report_error__filename_2749 = ""s;
    __Vtask_uvm_report_error__verbosity_2748 = 0U;
    this->__Vtask_uvm_report_error__message_2747 = "UVM TLM interface task not implemented"s;
    this->__Vtask_uvm_report_error__id_2746 = "put"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1356);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1356;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2753);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_2753;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_2746, this->__Vtask_uvm_report_error__message_2747, __Vtask_uvm_report_error__verbosity_2748, this->__Vtask_uvm_report_error__filename_2749, __Vtask_uvm_report_error__line_2750, this->__Vtask_uvm_report_error__context_name_2751, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_2752));
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pifec5b368::__VnoInFunc_get(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_mon_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pifec5b368::__VnoInFunc_get\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_2756;
    __Vtask_uvm_report_error__verbosity_2756 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_2758;
    __Vtask_uvm_report_error__line_2758 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_2760;
    __Vtask_uvm_report_error__report_enabled_checked_2760 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1357;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2761;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    __Vtask_uvm_report_error__report_enabled_checked_2760 = 0U;
    this->__Vtask_uvm_report_error__context_name_2759 = ""s;
    __Vtask_uvm_report_error__line_2758 = 0U;
    this->__Vtask_uvm_report_error__filename_2757 = ""s;
    __Vtask_uvm_report_error__verbosity_2756 = 0U;
    this->__Vtask_uvm_report_error__message_2755 = "UVM TLM interface task not implemented"s;
    this->__Vtask_uvm_report_error__id_2754 = "get"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1357);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1357;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2761);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_2761;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_2754, this->__Vtask_uvm_report_error__message_2755, __Vtask_uvm_report_error__verbosity_2756, this->__Vtask_uvm_report_error__filename_2757, __Vtask_uvm_report_error__line_2758, this->__Vtask_uvm_report_error__context_name_2759, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_2760));
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pifec5b368::__VnoInFunc_peek(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_mon_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pifec5b368::__VnoInFunc_peek\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_2764;
    __Vtask_uvm_report_error__verbosity_2764 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_2766;
    __Vtask_uvm_report_error__line_2766 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_2768;
    __Vtask_uvm_report_error__report_enabled_checked_2768 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1358;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2769;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    __Vtask_uvm_report_error__report_enabled_checked_2768 = 0U;
    this->__Vtask_uvm_report_error__context_name_2767 = ""s;
    __Vtask_uvm_report_error__line_2766 = 0U;
    this->__Vtask_uvm_report_error__filename_2765 = ""s;
    __Vtask_uvm_report_error__verbosity_2764 = 0U;
    this->__Vtask_uvm_report_error__message_2763 = "UVM TLM interface task not implemented"s;
    this->__Vtask_uvm_report_error__id_2762 = "peek"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1358);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1358;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2769);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_2769;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_2762, this->__Vtask_uvm_report_error__message_2763, __Vtask_uvm_report_error__verbosity_2764, this->__Vtask_uvm_report_error__filename_2765, __Vtask_uvm_report_error__line_2766, this->__Vtask_uvm_report_error__context_name_2767, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_2768));
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pifec5b368::__VnoInFunc_try_put(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_mon_item> t, ::CData/*0:0*/ &try_put__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pifec5b368::__VnoInFunc_try_put\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_2772;
    __Vtask_uvm_report_error__verbosity_2772 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_2774;
    __Vtask_uvm_report_error__line_2774 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_2776;
    __Vtask_uvm_report_error__report_enabled_checked_2776 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1359;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2777;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    try_put__Vfuncrtn = 0U;
    __Vtask_uvm_report_error__report_enabled_checked_2776 = 0U;
    this->__Vtask_uvm_report_error__context_name_2775 = ""s;
    __Vtask_uvm_report_error__line_2774 = 0U;
    this->__Vtask_uvm_report_error__filename_2773 = ""s;
    __Vtask_uvm_report_error__verbosity_2772 = 0U;
    this->__Vtask_uvm_report_error__message_2771 = "UVM TLM interface function not implemented"s;
    this->__Vtask_uvm_report_error__id_2770 = "try_put"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1359);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1359;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2777);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_2777;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_2770, this->__Vtask_uvm_report_error__message_2771, __Vtask_uvm_report_error__verbosity_2772, this->__Vtask_uvm_report_error__filename_2773, __Vtask_uvm_report_error__line_2774, this->__Vtask_uvm_report_error__context_name_2775, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_2776));
    try_put__Vfuncrtn = 0U;
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pifec5b368::__VnoInFunc_can_put(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &can_put__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pifec5b368::__VnoInFunc_can_put\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_2780;
    __Vtask_uvm_report_error__verbosity_2780 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_2782;
    __Vtask_uvm_report_error__line_2782 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_2784;
    __Vtask_uvm_report_error__report_enabled_checked_2784 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1360;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2785;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    can_put__Vfuncrtn = 0U;
    __Vtask_uvm_report_error__report_enabled_checked_2784 = 0U;
    this->__Vtask_uvm_report_error__context_name_2783 = ""s;
    __Vtask_uvm_report_error__line_2782 = 0U;
    this->__Vtask_uvm_report_error__filename_2781 = ""s;
    __Vtask_uvm_report_error__verbosity_2780 = 0U;
    this->__Vtask_uvm_report_error__message_2779 = "UVM TLM interface function not implemented"s;
    this->__Vtask_uvm_report_error__id_2778 = "can_put"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1360);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1360;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2785);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_2785;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_2778, this->__Vtask_uvm_report_error__message_2779, __Vtask_uvm_report_error__verbosity_2780, this->__Vtask_uvm_report_error__filename_2781, __Vtask_uvm_report_error__line_2782, this->__Vtask_uvm_report_error__context_name_2783, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_2784));
    can_put__Vfuncrtn = 0U;
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pifec5b368::__VnoInFunc_try_get(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_mon_item> &t, ::CData/*0:0*/ &try_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pifec5b368::__VnoInFunc_try_get\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_2788;
    __Vtask_uvm_report_error__verbosity_2788 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_2790;
    __Vtask_uvm_report_error__line_2790 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_2792;
    __Vtask_uvm_report_error__report_enabled_checked_2792 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1361;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2793;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    try_get__Vfuncrtn = 0U;
    __Vtask_uvm_report_error__report_enabled_checked_2792 = 0U;
    this->__Vtask_uvm_report_error__context_name_2791 = ""s;
    __Vtask_uvm_report_error__line_2790 = 0U;
    this->__Vtask_uvm_report_error__filename_2789 = ""s;
    __Vtask_uvm_report_error__verbosity_2788 = 0U;
    this->__Vtask_uvm_report_error__message_2787 = "UVM TLM interface function not implemented"s;
    this->__Vtask_uvm_report_error__id_2786 = "try_get"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1361);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1361;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2793);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_2793;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_2786, this->__Vtask_uvm_report_error__message_2787, __Vtask_uvm_report_error__verbosity_2788, this->__Vtask_uvm_report_error__filename_2789, __Vtask_uvm_report_error__line_2790, this->__Vtask_uvm_report_error__context_name_2791, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_2792));
    try_get__Vfuncrtn = 0U;
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pifec5b368::__VnoInFunc_can_get(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &can_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pifec5b368::__VnoInFunc_can_get\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_2796;
    __Vtask_uvm_report_error__verbosity_2796 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_2798;
    __Vtask_uvm_report_error__line_2798 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_2800;
    __Vtask_uvm_report_error__report_enabled_checked_2800 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1362;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2801;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    can_get__Vfuncrtn = 0U;
    __Vtask_uvm_report_error__report_enabled_checked_2800 = 0U;
    this->__Vtask_uvm_report_error__context_name_2799 = ""s;
    __Vtask_uvm_report_error__line_2798 = 0U;
    this->__Vtask_uvm_report_error__filename_2797 = ""s;
    __Vtask_uvm_report_error__verbosity_2796 = 0U;
    this->__Vtask_uvm_report_error__message_2795 = "UVM TLM interface function not implemented"s;
    this->__Vtask_uvm_report_error__id_2794 = "can_get"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1362);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1362;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2801);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_2801;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_2794, this->__Vtask_uvm_report_error__message_2795, __Vtask_uvm_report_error__verbosity_2796, this->__Vtask_uvm_report_error__filename_2797, __Vtask_uvm_report_error__line_2798, this->__Vtask_uvm_report_error__context_name_2799, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_2800));
    can_get__Vfuncrtn = 0U;
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pifec5b368::__VnoInFunc_try_peek(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_mon_item> &t, ::CData/*0:0*/ &try_peek__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pifec5b368::__VnoInFunc_try_peek\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_2804;
    __Vtask_uvm_report_error__verbosity_2804 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_2806;
    __Vtask_uvm_report_error__line_2806 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_2808;
    __Vtask_uvm_report_error__report_enabled_checked_2808 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1363;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2809;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    try_peek__Vfuncrtn = 0U;
    __Vtask_uvm_report_error__report_enabled_checked_2808 = 0U;
    this->__Vtask_uvm_report_error__context_name_2807 = ""s;
    __Vtask_uvm_report_error__line_2806 = 0U;
    this->__Vtask_uvm_report_error__filename_2805 = ""s;
    __Vtask_uvm_report_error__verbosity_2804 = 0U;
    this->__Vtask_uvm_report_error__message_2803 = "UVM TLM interface function not implemented"s;
    this->__Vtask_uvm_report_error__id_2802 = "try_peek"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1363);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1363;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2809);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_2809;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_2802, this->__Vtask_uvm_report_error__message_2803, __Vtask_uvm_report_error__verbosity_2804, this->__Vtask_uvm_report_error__filename_2805, __Vtask_uvm_report_error__line_2806, this->__Vtask_uvm_report_error__context_name_2807, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_2808));
    try_peek__Vfuncrtn = 0U;
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pifec5b368::__VnoInFunc_can_peek(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &can_peek__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pifec5b368::__VnoInFunc_can_peek\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_2812;
    __Vtask_uvm_report_error__verbosity_2812 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_2814;
    __Vtask_uvm_report_error__line_2814 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_2816;
    __Vtask_uvm_report_error__report_enabled_checked_2816 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1364;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2817;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    can_peek__Vfuncrtn = 0U;
    __Vtask_uvm_report_error__report_enabled_checked_2816 = 0U;
    this->__Vtask_uvm_report_error__context_name_2815 = ""s;
    __Vtask_uvm_report_error__line_2814 = 0U;
    this->__Vtask_uvm_report_error__filename_2813 = ""s;
    __Vtask_uvm_report_error__verbosity_2812 = 0U;
    this->__Vtask_uvm_report_error__message_2811 = "UVM TLM interface function not implemented"s;
    this->__Vtask_uvm_report_error__id_2810 = "can_ppeek"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1364);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1364;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2817);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_2817;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_2810, this->__Vtask_uvm_report_error__message_2811, __Vtask_uvm_report_error__verbosity_2812, this->__Vtask_uvm_report_error__filename_2813, __Vtask_uvm_report_error__line_2814, this->__Vtask_uvm_report_error__context_name_2815, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_2816));
    can_peek__Vfuncrtn = 0U;
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pifec5b368::__VnoInFunc_write(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_mon_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pifec5b368::__VnoInFunc_write\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_2820;
    __Vtask_uvm_report_error__verbosity_2820 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_2822;
    __Vtask_uvm_report_error__line_2822 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_2824;
    __Vtask_uvm_report_error__report_enabled_checked_2824 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1365;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2825;
    // Body
    VlProcess::currentp(vlProcess.get());
    __Vtask_uvm_report_error__report_enabled_checked_2824 = 0U;
    this->__Vtask_uvm_report_error__context_name_2823 = ""s;
    __Vtask_uvm_report_error__line_2822 = 0U;
    this->__Vtask_uvm_report_error__filename_2821 = ""s;
    __Vtask_uvm_report_error__verbosity_2820 = 0U;
    this->__Vtask_uvm_report_error__message_2819 = "UVM TLM interface function not implemented"s;
    this->__Vtask_uvm_report_error__id_2818 = "write"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1365);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1365;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2825);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_2825;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_2818, this->__Vtask_uvm_report_error__message_2819, __Vtask_uvm_report_error__verbosity_2820, this->__Vtask_uvm_report_error__filename_2821, __Vtask_uvm_report_error__line_2822, this->__Vtask_uvm_report_error__context_name_2823, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_2824));
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pifec5b368::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    Vtb_top_uvm_pkg__03a__03auvm_void::init(vlProcess, vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pifec5b368::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pifec5b368::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pifec5b368::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pifec5b368::~Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pifec5b368() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pifec5b368::~\n"); );
}
