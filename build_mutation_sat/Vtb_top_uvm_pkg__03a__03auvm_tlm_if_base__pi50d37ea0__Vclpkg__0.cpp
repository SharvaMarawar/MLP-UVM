// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pi50d37ea0::__VnoInFunc_put(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pi50d37ea0::__VnoInFunc_put\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_3200;
    __Vtask_uvm_report_error__verbosity_3200 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_3202;
    __Vtask_uvm_report_error__line_3202 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3204;
    __Vtask_uvm_report_error__report_enabled_checked_3204 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1417;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3205;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vtask_uvm_report_error__report_enabled_checked_3204 = 0U;
    this->__Vtask_uvm_report_error__context_name_3203 = ""s;
    __Vtask_uvm_report_error__line_3202 = 0U;
    this->__Vtask_uvm_report_error__filename_3201 = ""s;
    __Vtask_uvm_report_error__verbosity_3200 = 0U;
    this->__Vtask_uvm_report_error__message_3199 = "UVM TLM interface task not implemented"s;
    this->__Vtask_uvm_report_error__id_3198 = "put"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1417);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1417;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3205);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_3205;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_3198, this->__Vtask_uvm_report_error__message_3199, __Vtask_uvm_report_error__verbosity_3200, this->__Vtask_uvm_report_error__filename_3201, __Vtask_uvm_report_error__line_3202, this->__Vtask_uvm_report_error__context_name_3203, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3204));
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pi50d37ea0::__VnoInFunc_get(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pi50d37ea0::__VnoInFunc_get\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_3208;
    __Vtask_uvm_report_error__verbosity_3208 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_3210;
    __Vtask_uvm_report_error__line_3210 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3212;
    __Vtask_uvm_report_error__report_enabled_checked_3212 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1418;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3213;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vtask_uvm_report_error__report_enabled_checked_3212 = 0U;
    this->__Vtask_uvm_report_error__context_name_3211 = ""s;
    __Vtask_uvm_report_error__line_3210 = 0U;
    this->__Vtask_uvm_report_error__filename_3209 = ""s;
    __Vtask_uvm_report_error__verbosity_3208 = 0U;
    this->__Vtask_uvm_report_error__message_3207 = "UVM TLM interface task not implemented"s;
    this->__Vtask_uvm_report_error__id_3206 = "get"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1418);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1418;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3213);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_3213;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_3206, this->__Vtask_uvm_report_error__message_3207, __Vtask_uvm_report_error__verbosity_3208, this->__Vtask_uvm_report_error__filename_3209, __Vtask_uvm_report_error__line_3210, this->__Vtask_uvm_report_error__context_name_3211, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3212));
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pi50d37ea0::__VnoInFunc_peek(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pi50d37ea0::__VnoInFunc_peek\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_3216;
    __Vtask_uvm_report_error__verbosity_3216 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_3218;
    __Vtask_uvm_report_error__line_3218 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3220;
    __Vtask_uvm_report_error__report_enabled_checked_3220 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1419;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3221;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vtask_uvm_report_error__report_enabled_checked_3220 = 0U;
    this->__Vtask_uvm_report_error__context_name_3219 = ""s;
    __Vtask_uvm_report_error__line_3218 = 0U;
    this->__Vtask_uvm_report_error__filename_3217 = ""s;
    __Vtask_uvm_report_error__verbosity_3216 = 0U;
    this->__Vtask_uvm_report_error__message_3215 = "UVM TLM interface task not implemented"s;
    this->__Vtask_uvm_report_error__id_3214 = "peek"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1419);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1419;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3221);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_3221;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_3214, this->__Vtask_uvm_report_error__message_3215, __Vtask_uvm_report_error__verbosity_3216, this->__Vtask_uvm_report_error__filename_3217, __Vtask_uvm_report_error__line_3218, this->__Vtask_uvm_report_error__context_name_3219, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3220));
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pi50d37ea0::__VnoInFunc_try_put(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> t, ::CData/*0:0*/ &try_put__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pi50d37ea0::__VnoInFunc_try_put\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_3224;
    __Vtask_uvm_report_error__verbosity_3224 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_3226;
    __Vtask_uvm_report_error__line_3226 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3228;
    __Vtask_uvm_report_error__report_enabled_checked_3228 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1420;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3229;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    try_put__Vfuncrtn = 0U;
    __Vtask_uvm_report_error__report_enabled_checked_3228 = 0U;
    this->__Vtask_uvm_report_error__context_name_3227 = ""s;
    __Vtask_uvm_report_error__line_3226 = 0U;
    this->__Vtask_uvm_report_error__filename_3225 = ""s;
    __Vtask_uvm_report_error__verbosity_3224 = 0U;
    this->__Vtask_uvm_report_error__message_3223 = "UVM TLM interface function not implemented"s;
    this->__Vtask_uvm_report_error__id_3222 = "try_put"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1420);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1420;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3229);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_3229;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_3222, this->__Vtask_uvm_report_error__message_3223, __Vtask_uvm_report_error__verbosity_3224, this->__Vtask_uvm_report_error__filename_3225, __Vtask_uvm_report_error__line_3226, this->__Vtask_uvm_report_error__context_name_3227, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3228));
    try_put__Vfuncrtn = 0U;
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pi50d37ea0::__VnoInFunc_can_put(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &can_put__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pi50d37ea0::__VnoInFunc_can_put\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_3232;
    __Vtask_uvm_report_error__verbosity_3232 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_3234;
    __Vtask_uvm_report_error__line_3234 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3236;
    __Vtask_uvm_report_error__report_enabled_checked_3236 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1421;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3237;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    can_put__Vfuncrtn = 0U;
    __Vtask_uvm_report_error__report_enabled_checked_3236 = 0U;
    this->__Vtask_uvm_report_error__context_name_3235 = ""s;
    __Vtask_uvm_report_error__line_3234 = 0U;
    this->__Vtask_uvm_report_error__filename_3233 = ""s;
    __Vtask_uvm_report_error__verbosity_3232 = 0U;
    this->__Vtask_uvm_report_error__message_3231 = "UVM TLM interface function not implemented"s;
    this->__Vtask_uvm_report_error__id_3230 = "can_put"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1421);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1421;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3237);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_3237;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_3230, this->__Vtask_uvm_report_error__message_3231, __Vtask_uvm_report_error__verbosity_3232, this->__Vtask_uvm_report_error__filename_3233, __Vtask_uvm_report_error__line_3234, this->__Vtask_uvm_report_error__context_name_3235, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3236));
    can_put__Vfuncrtn = 0U;
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pi50d37ea0::__VnoInFunc_try_get(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> &t, ::CData/*0:0*/ &try_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pi50d37ea0::__VnoInFunc_try_get\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_3240;
    __Vtask_uvm_report_error__verbosity_3240 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_3242;
    __Vtask_uvm_report_error__line_3242 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3244;
    __Vtask_uvm_report_error__report_enabled_checked_3244 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1422;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3245;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    try_get__Vfuncrtn = 0U;
    __Vtask_uvm_report_error__report_enabled_checked_3244 = 0U;
    this->__Vtask_uvm_report_error__context_name_3243 = ""s;
    __Vtask_uvm_report_error__line_3242 = 0U;
    this->__Vtask_uvm_report_error__filename_3241 = ""s;
    __Vtask_uvm_report_error__verbosity_3240 = 0U;
    this->__Vtask_uvm_report_error__message_3239 = "UVM TLM interface function not implemented"s;
    this->__Vtask_uvm_report_error__id_3238 = "try_get"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1422);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1422;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3245);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_3245;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_3238, this->__Vtask_uvm_report_error__message_3239, __Vtask_uvm_report_error__verbosity_3240, this->__Vtask_uvm_report_error__filename_3241, __Vtask_uvm_report_error__line_3242, this->__Vtask_uvm_report_error__context_name_3243, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3244));
    try_get__Vfuncrtn = 0U;
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pi50d37ea0::__VnoInFunc_can_get(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &can_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pi50d37ea0::__VnoInFunc_can_get\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_3248;
    __Vtask_uvm_report_error__verbosity_3248 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_3250;
    __Vtask_uvm_report_error__line_3250 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3252;
    __Vtask_uvm_report_error__report_enabled_checked_3252 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1423;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3253;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    can_get__Vfuncrtn = 0U;
    __Vtask_uvm_report_error__report_enabled_checked_3252 = 0U;
    this->__Vtask_uvm_report_error__context_name_3251 = ""s;
    __Vtask_uvm_report_error__line_3250 = 0U;
    this->__Vtask_uvm_report_error__filename_3249 = ""s;
    __Vtask_uvm_report_error__verbosity_3248 = 0U;
    this->__Vtask_uvm_report_error__message_3247 = "UVM TLM interface function not implemented"s;
    this->__Vtask_uvm_report_error__id_3246 = "can_get"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1423);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1423;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3253);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_3253;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_3246, this->__Vtask_uvm_report_error__message_3247, __Vtask_uvm_report_error__verbosity_3248, this->__Vtask_uvm_report_error__filename_3249, __Vtask_uvm_report_error__line_3250, this->__Vtask_uvm_report_error__context_name_3251, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3252));
    can_get__Vfuncrtn = 0U;
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pi50d37ea0::__VnoInFunc_try_peek(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> &t, ::CData/*0:0*/ &try_peek__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pi50d37ea0::__VnoInFunc_try_peek\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_3256;
    __Vtask_uvm_report_error__verbosity_3256 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_3258;
    __Vtask_uvm_report_error__line_3258 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3260;
    __Vtask_uvm_report_error__report_enabled_checked_3260 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1424;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3261;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    try_peek__Vfuncrtn = 0U;
    __Vtask_uvm_report_error__report_enabled_checked_3260 = 0U;
    this->__Vtask_uvm_report_error__context_name_3259 = ""s;
    __Vtask_uvm_report_error__line_3258 = 0U;
    this->__Vtask_uvm_report_error__filename_3257 = ""s;
    __Vtask_uvm_report_error__verbosity_3256 = 0U;
    this->__Vtask_uvm_report_error__message_3255 = "UVM TLM interface function not implemented"s;
    this->__Vtask_uvm_report_error__id_3254 = "try_peek"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1424);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1424;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3261);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_3261;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_3254, this->__Vtask_uvm_report_error__message_3255, __Vtask_uvm_report_error__verbosity_3256, this->__Vtask_uvm_report_error__filename_3257, __Vtask_uvm_report_error__line_3258, this->__Vtask_uvm_report_error__context_name_3259, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3260));
    try_peek__Vfuncrtn = 0U;
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pi50d37ea0::__VnoInFunc_can_peek(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &can_peek__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pi50d37ea0::__VnoInFunc_can_peek\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_3264;
    __Vtask_uvm_report_error__verbosity_3264 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_3266;
    __Vtask_uvm_report_error__line_3266 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3268;
    __Vtask_uvm_report_error__report_enabled_checked_3268 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1425;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3269;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    can_peek__Vfuncrtn = 0U;
    __Vtask_uvm_report_error__report_enabled_checked_3268 = 0U;
    this->__Vtask_uvm_report_error__context_name_3267 = ""s;
    __Vtask_uvm_report_error__line_3266 = 0U;
    this->__Vtask_uvm_report_error__filename_3265 = ""s;
    __Vtask_uvm_report_error__verbosity_3264 = 0U;
    this->__Vtask_uvm_report_error__message_3263 = "UVM TLM interface function not implemented"s;
    this->__Vtask_uvm_report_error__id_3262 = "can_ppeek"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1425);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1425;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3269);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_3269;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_3262, this->__Vtask_uvm_report_error__message_3263, __Vtask_uvm_report_error__verbosity_3264, this->__Vtask_uvm_report_error__filename_3265, __Vtask_uvm_report_error__line_3266, this->__Vtask_uvm_report_error__context_name_3267, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3268));
    can_peek__Vfuncrtn = 0U;
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pi50d37ea0::__VnoInFunc_write(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pi50d37ea0::__VnoInFunc_write\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_3272;
    __Vtask_uvm_report_error__verbosity_3272 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_3274;
    __Vtask_uvm_report_error__line_3274 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3276;
    __Vtask_uvm_report_error__report_enabled_checked_3276 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1426;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3277;
    // Body
    VlProcess::currentp(vlProcess.get());
    __Vtask_uvm_report_error__report_enabled_checked_3276 = 0U;
    this->__Vtask_uvm_report_error__context_name_3275 = ""s;
    __Vtask_uvm_report_error__line_3274 = 0U;
    this->__Vtask_uvm_report_error__filename_3273 = ""s;
    __Vtask_uvm_report_error__verbosity_3272 = 0U;
    this->__Vtask_uvm_report_error__message_3271 = "UVM TLM interface function not implemented"s;
    this->__Vtask_uvm_report_error__id_3270 = "write"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1426);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1426;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3277);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_3277;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_3270, this->__Vtask_uvm_report_error__message_3271, __Vtask_uvm_report_error__verbosity_3272, this->__Vtask_uvm_report_error__filename_3273, __Vtask_uvm_report_error__line_3274, this->__Vtask_uvm_report_error__context_name_3275, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3276));
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pi50d37ea0::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    Vtb_top_uvm_pkg__03a__03auvm_void::init(vlProcess, vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pi50d37ea0::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pi50d37ea0::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pi50d37ea0::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pi50d37ea0::~Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pi50d37ea0() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pi50d37ea0::~\n"); );
}
