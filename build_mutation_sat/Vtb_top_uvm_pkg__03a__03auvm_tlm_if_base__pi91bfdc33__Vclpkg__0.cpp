// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pi91bfdc33::__VnoInFunc_put(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pi91bfdc33::__VnoInFunc_put\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_3120;
    __Vtask_uvm_report_error__verbosity_3120 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_3122;
    __Vtask_uvm_report_error__line_3122 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3124;
    __Vtask_uvm_report_error__report_enabled_checked_3124 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1407;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3125;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vtask_uvm_report_error__report_enabled_checked_3124 = 0U;
    this->__Vtask_uvm_report_error__context_name_3123 = ""s;
    __Vtask_uvm_report_error__line_3122 = 0U;
    this->__Vtask_uvm_report_error__filename_3121 = ""s;
    __Vtask_uvm_report_error__verbosity_3120 = 0U;
    this->__Vtask_uvm_report_error__message_3119 = "UVM TLM interface task not implemented"s;
    this->__Vtask_uvm_report_error__id_3118 = "put"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1407);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1407;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3125);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_3125;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_3118, this->__Vtask_uvm_report_error__message_3119, __Vtask_uvm_report_error__verbosity_3120, this->__Vtask_uvm_report_error__filename_3121, __Vtask_uvm_report_error__line_3122, this->__Vtask_uvm_report_error__context_name_3123, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3124));
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pi91bfdc33::__VnoInFunc_get(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pi91bfdc33::__VnoInFunc_get\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_3128;
    __Vtask_uvm_report_error__verbosity_3128 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_3130;
    __Vtask_uvm_report_error__line_3130 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3132;
    __Vtask_uvm_report_error__report_enabled_checked_3132 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1408;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3133;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vtask_uvm_report_error__report_enabled_checked_3132 = 0U;
    this->__Vtask_uvm_report_error__context_name_3131 = ""s;
    __Vtask_uvm_report_error__line_3130 = 0U;
    this->__Vtask_uvm_report_error__filename_3129 = ""s;
    __Vtask_uvm_report_error__verbosity_3128 = 0U;
    this->__Vtask_uvm_report_error__message_3127 = "UVM TLM interface task not implemented"s;
    this->__Vtask_uvm_report_error__id_3126 = "get"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1408);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1408;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3133);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_3133;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_3126, this->__Vtask_uvm_report_error__message_3127, __Vtask_uvm_report_error__verbosity_3128, this->__Vtask_uvm_report_error__filename_3129, __Vtask_uvm_report_error__line_3130, this->__Vtask_uvm_report_error__context_name_3131, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3132));
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pi91bfdc33::__VnoInFunc_peek(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pi91bfdc33::__VnoInFunc_peek\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_3136;
    __Vtask_uvm_report_error__verbosity_3136 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_3138;
    __Vtask_uvm_report_error__line_3138 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3140;
    __Vtask_uvm_report_error__report_enabled_checked_3140 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1409;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3141;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vtask_uvm_report_error__report_enabled_checked_3140 = 0U;
    this->__Vtask_uvm_report_error__context_name_3139 = ""s;
    __Vtask_uvm_report_error__line_3138 = 0U;
    this->__Vtask_uvm_report_error__filename_3137 = ""s;
    __Vtask_uvm_report_error__verbosity_3136 = 0U;
    this->__Vtask_uvm_report_error__message_3135 = "UVM TLM interface task not implemented"s;
    this->__Vtask_uvm_report_error__id_3134 = "peek"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1409);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1409;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3141);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_3141;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_3134, this->__Vtask_uvm_report_error__message_3135, __Vtask_uvm_report_error__verbosity_3136, this->__Vtask_uvm_report_error__filename_3137, __Vtask_uvm_report_error__line_3138, this->__Vtask_uvm_report_error__context_name_3139, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3140));
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pi91bfdc33::__VnoInFunc_try_put(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> t, ::CData/*0:0*/ &try_put__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pi91bfdc33::__VnoInFunc_try_put\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_3144;
    __Vtask_uvm_report_error__verbosity_3144 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_3146;
    __Vtask_uvm_report_error__line_3146 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3148;
    __Vtask_uvm_report_error__report_enabled_checked_3148 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1410;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3149;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    try_put__Vfuncrtn = 0U;
    __Vtask_uvm_report_error__report_enabled_checked_3148 = 0U;
    this->__Vtask_uvm_report_error__context_name_3147 = ""s;
    __Vtask_uvm_report_error__line_3146 = 0U;
    this->__Vtask_uvm_report_error__filename_3145 = ""s;
    __Vtask_uvm_report_error__verbosity_3144 = 0U;
    this->__Vtask_uvm_report_error__message_3143 = "UVM TLM interface function not implemented"s;
    this->__Vtask_uvm_report_error__id_3142 = "try_put"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1410);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1410;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3149);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_3149;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_3142, this->__Vtask_uvm_report_error__message_3143, __Vtask_uvm_report_error__verbosity_3144, this->__Vtask_uvm_report_error__filename_3145, __Vtask_uvm_report_error__line_3146, this->__Vtask_uvm_report_error__context_name_3147, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3148));
    try_put__Vfuncrtn = 0U;
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pi91bfdc33::__VnoInFunc_can_put(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &can_put__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pi91bfdc33::__VnoInFunc_can_put\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_3152;
    __Vtask_uvm_report_error__verbosity_3152 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_3154;
    __Vtask_uvm_report_error__line_3154 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3156;
    __Vtask_uvm_report_error__report_enabled_checked_3156 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1411;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3157;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    can_put__Vfuncrtn = 0U;
    __Vtask_uvm_report_error__report_enabled_checked_3156 = 0U;
    this->__Vtask_uvm_report_error__context_name_3155 = ""s;
    __Vtask_uvm_report_error__line_3154 = 0U;
    this->__Vtask_uvm_report_error__filename_3153 = ""s;
    __Vtask_uvm_report_error__verbosity_3152 = 0U;
    this->__Vtask_uvm_report_error__message_3151 = "UVM TLM interface function not implemented"s;
    this->__Vtask_uvm_report_error__id_3150 = "can_put"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1411);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1411;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3157);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_3157;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_3150, this->__Vtask_uvm_report_error__message_3151, __Vtask_uvm_report_error__verbosity_3152, this->__Vtask_uvm_report_error__filename_3153, __Vtask_uvm_report_error__line_3154, this->__Vtask_uvm_report_error__context_name_3155, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3156));
    can_put__Vfuncrtn = 0U;
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pi91bfdc33::__VnoInFunc_try_get(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> &t, ::CData/*0:0*/ &try_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pi91bfdc33::__VnoInFunc_try_get\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_3160;
    __Vtask_uvm_report_error__verbosity_3160 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_3162;
    __Vtask_uvm_report_error__line_3162 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3164;
    __Vtask_uvm_report_error__report_enabled_checked_3164 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1412;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3165;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    try_get__Vfuncrtn = 0U;
    __Vtask_uvm_report_error__report_enabled_checked_3164 = 0U;
    this->__Vtask_uvm_report_error__context_name_3163 = ""s;
    __Vtask_uvm_report_error__line_3162 = 0U;
    this->__Vtask_uvm_report_error__filename_3161 = ""s;
    __Vtask_uvm_report_error__verbosity_3160 = 0U;
    this->__Vtask_uvm_report_error__message_3159 = "UVM TLM interface function not implemented"s;
    this->__Vtask_uvm_report_error__id_3158 = "try_get"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1412);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1412;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3165);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_3165;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_3158, this->__Vtask_uvm_report_error__message_3159, __Vtask_uvm_report_error__verbosity_3160, this->__Vtask_uvm_report_error__filename_3161, __Vtask_uvm_report_error__line_3162, this->__Vtask_uvm_report_error__context_name_3163, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3164));
    try_get__Vfuncrtn = 0U;
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pi91bfdc33::__VnoInFunc_can_get(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &can_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pi91bfdc33::__VnoInFunc_can_get\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_3168;
    __Vtask_uvm_report_error__verbosity_3168 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_3170;
    __Vtask_uvm_report_error__line_3170 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3172;
    __Vtask_uvm_report_error__report_enabled_checked_3172 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1413;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3173;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    can_get__Vfuncrtn = 0U;
    __Vtask_uvm_report_error__report_enabled_checked_3172 = 0U;
    this->__Vtask_uvm_report_error__context_name_3171 = ""s;
    __Vtask_uvm_report_error__line_3170 = 0U;
    this->__Vtask_uvm_report_error__filename_3169 = ""s;
    __Vtask_uvm_report_error__verbosity_3168 = 0U;
    this->__Vtask_uvm_report_error__message_3167 = "UVM TLM interface function not implemented"s;
    this->__Vtask_uvm_report_error__id_3166 = "can_get"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1413);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1413;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3173);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_3173;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_3166, this->__Vtask_uvm_report_error__message_3167, __Vtask_uvm_report_error__verbosity_3168, this->__Vtask_uvm_report_error__filename_3169, __Vtask_uvm_report_error__line_3170, this->__Vtask_uvm_report_error__context_name_3171, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3172));
    can_get__Vfuncrtn = 0U;
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pi91bfdc33::__VnoInFunc_try_peek(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> &t, ::CData/*0:0*/ &try_peek__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pi91bfdc33::__VnoInFunc_try_peek\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_3176;
    __Vtask_uvm_report_error__verbosity_3176 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_3178;
    __Vtask_uvm_report_error__line_3178 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3180;
    __Vtask_uvm_report_error__report_enabled_checked_3180 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1414;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3181;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    try_peek__Vfuncrtn = 0U;
    __Vtask_uvm_report_error__report_enabled_checked_3180 = 0U;
    this->__Vtask_uvm_report_error__context_name_3179 = ""s;
    __Vtask_uvm_report_error__line_3178 = 0U;
    this->__Vtask_uvm_report_error__filename_3177 = ""s;
    __Vtask_uvm_report_error__verbosity_3176 = 0U;
    this->__Vtask_uvm_report_error__message_3175 = "UVM TLM interface function not implemented"s;
    this->__Vtask_uvm_report_error__id_3174 = "try_peek"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1414);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1414;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3181);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_3181;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_3174, this->__Vtask_uvm_report_error__message_3175, __Vtask_uvm_report_error__verbosity_3176, this->__Vtask_uvm_report_error__filename_3177, __Vtask_uvm_report_error__line_3178, this->__Vtask_uvm_report_error__context_name_3179, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3180));
    try_peek__Vfuncrtn = 0U;
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pi91bfdc33::__VnoInFunc_can_peek(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &can_peek__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pi91bfdc33::__VnoInFunc_can_peek\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_3184;
    __Vtask_uvm_report_error__verbosity_3184 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_3186;
    __Vtask_uvm_report_error__line_3186 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3188;
    __Vtask_uvm_report_error__report_enabled_checked_3188 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1415;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3189;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    can_peek__Vfuncrtn = 0U;
    __Vtask_uvm_report_error__report_enabled_checked_3188 = 0U;
    this->__Vtask_uvm_report_error__context_name_3187 = ""s;
    __Vtask_uvm_report_error__line_3186 = 0U;
    this->__Vtask_uvm_report_error__filename_3185 = ""s;
    __Vtask_uvm_report_error__verbosity_3184 = 0U;
    this->__Vtask_uvm_report_error__message_3183 = "UVM TLM interface function not implemented"s;
    this->__Vtask_uvm_report_error__id_3182 = "can_ppeek"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1415);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1415;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3189);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_3189;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_3182, this->__Vtask_uvm_report_error__message_3183, __Vtask_uvm_report_error__verbosity_3184, this->__Vtask_uvm_report_error__filename_3185, __Vtask_uvm_report_error__line_3186, this->__Vtask_uvm_report_error__context_name_3187, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3188));
    can_peek__Vfuncrtn = 0U;
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pi91bfdc33::__VnoInFunc_write(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pi91bfdc33::__VnoInFunc_write\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_3192;
    __Vtask_uvm_report_error__verbosity_3192 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_3194;
    __Vtask_uvm_report_error__line_3194 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3196;
    __Vtask_uvm_report_error__report_enabled_checked_3196 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1416;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3197;
    // Body
    VlProcess::currentp(vlProcess.get());
    __Vtask_uvm_report_error__report_enabled_checked_3196 = 0U;
    this->__Vtask_uvm_report_error__context_name_3195 = ""s;
    __Vtask_uvm_report_error__line_3194 = 0U;
    this->__Vtask_uvm_report_error__filename_3193 = ""s;
    __Vtask_uvm_report_error__verbosity_3192 = 0U;
    this->__Vtask_uvm_report_error__message_3191 = "UVM TLM interface function not implemented"s;
    this->__Vtask_uvm_report_error__id_3190 = "write"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1416);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1416;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3197);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_3197;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_3190, this->__Vtask_uvm_report_error__message_3191, __Vtask_uvm_report_error__verbosity_3192, this->__Vtask_uvm_report_error__filename_3193, __Vtask_uvm_report_error__line_3194, this->__Vtask_uvm_report_error__context_name_3195, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3196));
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pi91bfdc33::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    Vtb_top_uvm_pkg__03a__03auvm_void::init(vlProcess, vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pi91bfdc33::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pi91bfdc33::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pi91bfdc33::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pi91bfdc33::~Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pi91bfdc33() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pi91bfdc33::~\n"); );
}
