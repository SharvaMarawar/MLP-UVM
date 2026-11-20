// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pie29bb1a8::__VnoInFunc_put(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pie29bb1a8::__VnoInFunc_put\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_3368;
    __Vtask_uvm_report_error__verbosity_3368 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_3370;
    __Vtask_uvm_report_error__line_3370 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3372;
    __Vtask_uvm_report_error__report_enabled_checked_3372 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1438;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3373;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vtask_uvm_report_error__report_enabled_checked_3372 = 0U;
    this->__Vtask_uvm_report_error__context_name_3371 = ""s;
    __Vtask_uvm_report_error__line_3370 = 0U;
    this->__Vtask_uvm_report_error__filename_3369 = ""s;
    __Vtask_uvm_report_error__verbosity_3368 = 0U;
    this->__Vtask_uvm_report_error__message_3367 = "UVM TLM interface task not implemented"s;
    this->__Vtask_uvm_report_error__id_3366 = "put"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1438);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1438;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3373);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_3373;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_3366, this->__Vtask_uvm_report_error__message_3367, __Vtask_uvm_report_error__verbosity_3368, this->__Vtask_uvm_report_error__filename_3369, __Vtask_uvm_report_error__line_3370, this->__Vtask_uvm_report_error__context_name_3371, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3372));
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pie29bb1a8::__VnoInFunc_get(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pie29bb1a8::__VnoInFunc_get\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_3376;
    __Vtask_uvm_report_error__verbosity_3376 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_3378;
    __Vtask_uvm_report_error__line_3378 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3380;
    __Vtask_uvm_report_error__report_enabled_checked_3380 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1439;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3381;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vtask_uvm_report_error__report_enabled_checked_3380 = 0U;
    this->__Vtask_uvm_report_error__context_name_3379 = ""s;
    __Vtask_uvm_report_error__line_3378 = 0U;
    this->__Vtask_uvm_report_error__filename_3377 = ""s;
    __Vtask_uvm_report_error__verbosity_3376 = 0U;
    this->__Vtask_uvm_report_error__message_3375 = "UVM TLM interface task not implemented"s;
    this->__Vtask_uvm_report_error__id_3374 = "get"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1439);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1439;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3381);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_3381;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_3374, this->__Vtask_uvm_report_error__message_3375, __Vtask_uvm_report_error__verbosity_3376, this->__Vtask_uvm_report_error__filename_3377, __Vtask_uvm_report_error__line_3378, this->__Vtask_uvm_report_error__context_name_3379, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3380));
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pie29bb1a8::__VnoInFunc_peek(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pie29bb1a8::__VnoInFunc_peek\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_3384;
    __Vtask_uvm_report_error__verbosity_3384 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_3386;
    __Vtask_uvm_report_error__line_3386 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3388;
    __Vtask_uvm_report_error__report_enabled_checked_3388 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1440;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3389;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vtask_uvm_report_error__report_enabled_checked_3388 = 0U;
    this->__Vtask_uvm_report_error__context_name_3387 = ""s;
    __Vtask_uvm_report_error__line_3386 = 0U;
    this->__Vtask_uvm_report_error__filename_3385 = ""s;
    __Vtask_uvm_report_error__verbosity_3384 = 0U;
    this->__Vtask_uvm_report_error__message_3383 = "UVM TLM interface task not implemented"s;
    this->__Vtask_uvm_report_error__id_3382 = "peek"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1440);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1440;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3389);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_3389;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_3382, this->__Vtask_uvm_report_error__message_3383, __Vtask_uvm_report_error__verbosity_3384, this->__Vtask_uvm_report_error__filename_3385, __Vtask_uvm_report_error__line_3386, this->__Vtask_uvm_report_error__context_name_3387, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3388));
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pie29bb1a8::__VnoInFunc_try_put(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> t, ::CData/*0:0*/ &try_put__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pie29bb1a8::__VnoInFunc_try_put\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_3392;
    __Vtask_uvm_report_error__verbosity_3392 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_3394;
    __Vtask_uvm_report_error__line_3394 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3396;
    __Vtask_uvm_report_error__report_enabled_checked_3396 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1441;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3397;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    try_put__Vfuncrtn = 0U;
    __Vtask_uvm_report_error__report_enabled_checked_3396 = 0U;
    this->__Vtask_uvm_report_error__context_name_3395 = ""s;
    __Vtask_uvm_report_error__line_3394 = 0U;
    this->__Vtask_uvm_report_error__filename_3393 = ""s;
    __Vtask_uvm_report_error__verbosity_3392 = 0U;
    this->__Vtask_uvm_report_error__message_3391 = "UVM TLM interface function not implemented"s;
    this->__Vtask_uvm_report_error__id_3390 = "try_put"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1441);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1441;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3397);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_3397;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_3390, this->__Vtask_uvm_report_error__message_3391, __Vtask_uvm_report_error__verbosity_3392, this->__Vtask_uvm_report_error__filename_3393, __Vtask_uvm_report_error__line_3394, this->__Vtask_uvm_report_error__context_name_3395, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3396));
    try_put__Vfuncrtn = 0U;
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pie29bb1a8::__VnoInFunc_can_put(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &can_put__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pie29bb1a8::__VnoInFunc_can_put\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_3400;
    __Vtask_uvm_report_error__verbosity_3400 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_3402;
    __Vtask_uvm_report_error__line_3402 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3404;
    __Vtask_uvm_report_error__report_enabled_checked_3404 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1442;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3405;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    can_put__Vfuncrtn = 0U;
    __Vtask_uvm_report_error__report_enabled_checked_3404 = 0U;
    this->__Vtask_uvm_report_error__context_name_3403 = ""s;
    __Vtask_uvm_report_error__line_3402 = 0U;
    this->__Vtask_uvm_report_error__filename_3401 = ""s;
    __Vtask_uvm_report_error__verbosity_3400 = 0U;
    this->__Vtask_uvm_report_error__message_3399 = "UVM TLM interface function not implemented"s;
    this->__Vtask_uvm_report_error__id_3398 = "can_put"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1442);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1442;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3405);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_3405;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_3398, this->__Vtask_uvm_report_error__message_3399, __Vtask_uvm_report_error__verbosity_3400, this->__Vtask_uvm_report_error__filename_3401, __Vtask_uvm_report_error__line_3402, this->__Vtask_uvm_report_error__context_name_3403, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3404));
    can_put__Vfuncrtn = 0U;
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pie29bb1a8::__VnoInFunc_try_get(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> &t, ::CData/*0:0*/ &try_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pie29bb1a8::__VnoInFunc_try_get\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_3408;
    __Vtask_uvm_report_error__verbosity_3408 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_3410;
    __Vtask_uvm_report_error__line_3410 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3412;
    __Vtask_uvm_report_error__report_enabled_checked_3412 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1443;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3413;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    try_get__Vfuncrtn = 0U;
    __Vtask_uvm_report_error__report_enabled_checked_3412 = 0U;
    this->__Vtask_uvm_report_error__context_name_3411 = ""s;
    __Vtask_uvm_report_error__line_3410 = 0U;
    this->__Vtask_uvm_report_error__filename_3409 = ""s;
    __Vtask_uvm_report_error__verbosity_3408 = 0U;
    this->__Vtask_uvm_report_error__message_3407 = "UVM TLM interface function not implemented"s;
    this->__Vtask_uvm_report_error__id_3406 = "try_get"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1443);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1443;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3413);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_3413;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_3406, this->__Vtask_uvm_report_error__message_3407, __Vtask_uvm_report_error__verbosity_3408, this->__Vtask_uvm_report_error__filename_3409, __Vtask_uvm_report_error__line_3410, this->__Vtask_uvm_report_error__context_name_3411, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3412));
    try_get__Vfuncrtn = 0U;
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pie29bb1a8::__VnoInFunc_can_get(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &can_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pie29bb1a8::__VnoInFunc_can_get\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_3416;
    __Vtask_uvm_report_error__verbosity_3416 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_3418;
    __Vtask_uvm_report_error__line_3418 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3420;
    __Vtask_uvm_report_error__report_enabled_checked_3420 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1444;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3421;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    can_get__Vfuncrtn = 0U;
    __Vtask_uvm_report_error__report_enabled_checked_3420 = 0U;
    this->__Vtask_uvm_report_error__context_name_3419 = ""s;
    __Vtask_uvm_report_error__line_3418 = 0U;
    this->__Vtask_uvm_report_error__filename_3417 = ""s;
    __Vtask_uvm_report_error__verbosity_3416 = 0U;
    this->__Vtask_uvm_report_error__message_3415 = "UVM TLM interface function not implemented"s;
    this->__Vtask_uvm_report_error__id_3414 = "can_get"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1444);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1444;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3421);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_3421;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_3414, this->__Vtask_uvm_report_error__message_3415, __Vtask_uvm_report_error__verbosity_3416, this->__Vtask_uvm_report_error__filename_3417, __Vtask_uvm_report_error__line_3418, this->__Vtask_uvm_report_error__context_name_3419, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3420));
    can_get__Vfuncrtn = 0U;
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pie29bb1a8::__VnoInFunc_try_peek(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> &t, ::CData/*0:0*/ &try_peek__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pie29bb1a8::__VnoInFunc_try_peek\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_3424;
    __Vtask_uvm_report_error__verbosity_3424 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_3426;
    __Vtask_uvm_report_error__line_3426 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3428;
    __Vtask_uvm_report_error__report_enabled_checked_3428 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1445;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3429;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    try_peek__Vfuncrtn = 0U;
    __Vtask_uvm_report_error__report_enabled_checked_3428 = 0U;
    this->__Vtask_uvm_report_error__context_name_3427 = ""s;
    __Vtask_uvm_report_error__line_3426 = 0U;
    this->__Vtask_uvm_report_error__filename_3425 = ""s;
    __Vtask_uvm_report_error__verbosity_3424 = 0U;
    this->__Vtask_uvm_report_error__message_3423 = "UVM TLM interface function not implemented"s;
    this->__Vtask_uvm_report_error__id_3422 = "try_peek"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1445);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1445;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3429);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_3429;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_3422, this->__Vtask_uvm_report_error__message_3423, __Vtask_uvm_report_error__verbosity_3424, this->__Vtask_uvm_report_error__filename_3425, __Vtask_uvm_report_error__line_3426, this->__Vtask_uvm_report_error__context_name_3427, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3428));
    try_peek__Vfuncrtn = 0U;
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pie29bb1a8::__VnoInFunc_can_peek(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &can_peek__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pie29bb1a8::__VnoInFunc_can_peek\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_3432;
    __Vtask_uvm_report_error__verbosity_3432 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_3434;
    __Vtask_uvm_report_error__line_3434 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3436;
    __Vtask_uvm_report_error__report_enabled_checked_3436 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1446;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3437;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    can_peek__Vfuncrtn = 0U;
    __Vtask_uvm_report_error__report_enabled_checked_3436 = 0U;
    this->__Vtask_uvm_report_error__context_name_3435 = ""s;
    __Vtask_uvm_report_error__line_3434 = 0U;
    this->__Vtask_uvm_report_error__filename_3433 = ""s;
    __Vtask_uvm_report_error__verbosity_3432 = 0U;
    this->__Vtask_uvm_report_error__message_3431 = "UVM TLM interface function not implemented"s;
    this->__Vtask_uvm_report_error__id_3430 = "can_ppeek"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1446);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1446;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3437);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_3437;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_3430, this->__Vtask_uvm_report_error__message_3431, __Vtask_uvm_report_error__verbosity_3432, this->__Vtask_uvm_report_error__filename_3433, __Vtask_uvm_report_error__line_3434, this->__Vtask_uvm_report_error__context_name_3435, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3436));
    can_peek__Vfuncrtn = 0U;
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pie29bb1a8::__VnoInFunc_write(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pie29bb1a8::__VnoInFunc_write\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_3440;
    __Vtask_uvm_report_error__verbosity_3440 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_3442;
    __Vtask_uvm_report_error__line_3442 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3444;
    __Vtask_uvm_report_error__report_enabled_checked_3444 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1447;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3445;
    // Body
    VlProcess::currentp(vlProcess.get());
    __Vtask_uvm_report_error__report_enabled_checked_3444 = 0U;
    this->__Vtask_uvm_report_error__context_name_3443 = ""s;
    __Vtask_uvm_report_error__line_3442 = 0U;
    this->__Vtask_uvm_report_error__filename_3441 = ""s;
    __Vtask_uvm_report_error__verbosity_3440 = 0U;
    this->__Vtask_uvm_report_error__message_3439 = "UVM TLM interface function not implemented"s;
    this->__Vtask_uvm_report_error__id_3438 = "write"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1447);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1447;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3445);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_3445;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_3438, this->__Vtask_uvm_report_error__message_3439, __Vtask_uvm_report_error__verbosity_3440, this->__Vtask_uvm_report_error__filename_3441, __Vtask_uvm_report_error__line_3442, this->__Vtask_uvm_report_error__context_name_3443, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3444));
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pie29bb1a8::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    Vtb_top_uvm_pkg__03a__03auvm_void::init(vlProcess, vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pie29bb1a8::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pie29bb1a8::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pie29bb1a8::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pie29bb1a8::~Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pie29bb1a8() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pie29bb1a8::~\n"); );
}
