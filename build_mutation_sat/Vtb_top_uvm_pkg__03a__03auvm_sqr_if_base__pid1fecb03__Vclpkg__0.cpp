// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pid1fecb03::__VnoInFunc_get_next_item(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pid1fecb03::__VnoInFunc_get_next_item\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_3280;
    __Vtask_uvm_report_error__verbosity_3280 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_3282;
    __Vtask_uvm_report_error__line_3282 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3284;
    __Vtask_uvm_report_error__report_enabled_checked_3284 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1427;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3285;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vtask_uvm_report_error__report_enabled_checked_3284 = 0U;
    this->__Vtask_uvm_report_error__context_name_3283 = ""s;
    __Vtask_uvm_report_error__line_3282 = 0U;
    this->__Vtask_uvm_report_error__filename_3281 = ""s;
    __Vtask_uvm_report_error__verbosity_3280 = 0U;
    this->__Vtask_uvm_report_error__message_3279 = "Sequencer interface task not implemented"s;
    this->__Vtask_uvm_report_error__id_3278 = "get_next_item"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1427);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1427;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3285);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_3285;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_3278, this->__Vtask_uvm_report_error__message_3279, __Vtask_uvm_report_error__verbosity_3280, this->__Vtask_uvm_report_error__filename_3281, __Vtask_uvm_report_error__line_3282, this->__Vtask_uvm_report_error__context_name_3283, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3284));
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pid1fecb03::__VnoInFunc_try_next_item(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pid1fecb03::__VnoInFunc_try_next_item\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_3288;
    __Vtask_uvm_report_error__verbosity_3288 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_3290;
    __Vtask_uvm_report_error__line_3290 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3292;
    __Vtask_uvm_report_error__report_enabled_checked_3292 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1428;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3293;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vtask_uvm_report_error__report_enabled_checked_3292 = 0U;
    this->__Vtask_uvm_report_error__context_name_3291 = ""s;
    __Vtask_uvm_report_error__line_3290 = 0U;
    this->__Vtask_uvm_report_error__filename_3289 = ""s;
    __Vtask_uvm_report_error__verbosity_3288 = 0U;
    this->__Vtask_uvm_report_error__message_3287 = "Sequencer interface task not implemented"s;
    this->__Vtask_uvm_report_error__id_3286 = "try_next_item"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1428);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1428;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3293);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_3293;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_3286, this->__Vtask_uvm_report_error__message_3287, __Vtask_uvm_report_error__verbosity_3288, this->__Vtask_uvm_report_error__filename_3289, __Vtask_uvm_report_error__line_3290, this->__Vtask_uvm_report_error__context_name_3291, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3292));
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pid1fecb03::__VnoInFunc_item_done(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pid1fecb03::__VnoInFunc_item_done\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_3296;
    __Vtask_uvm_report_error__verbosity_3296 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_3298;
    __Vtask_uvm_report_error__line_3298 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3300;
    __Vtask_uvm_report_error__report_enabled_checked_3300 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1429;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3301;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    __Vtask_uvm_report_error__report_enabled_checked_3300 = 0U;
    this->__Vtask_uvm_report_error__context_name_3299 = ""s;
    __Vtask_uvm_report_error__line_3298 = 0U;
    this->__Vtask_uvm_report_error__filename_3297 = ""s;
    __Vtask_uvm_report_error__verbosity_3296 = 0U;
    this->__Vtask_uvm_report_error__message_3295 = "Sequencer interface function not implemented"s;
    this->__Vtask_uvm_report_error__id_3294 = "item_done"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1429);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1429;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3301);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_3301;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_3294, this->__Vtask_uvm_report_error__message_3295, __Vtask_uvm_report_error__verbosity_3296, this->__Vtask_uvm_report_error__filename_3297, __Vtask_uvm_report_error__line_3298, this->__Vtask_uvm_report_error__context_name_3299, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3300));
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pid1fecb03::__VnoInFunc_wait_for_sequences(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pid1fecb03::__VnoInFunc_wait_for_sequences\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_3304;
    __Vtask_uvm_report_error__verbosity_3304 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_3306;
    __Vtask_uvm_report_error__line_3306 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3308;
    __Vtask_uvm_report_error__report_enabled_checked_3308 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1430;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3309;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vtask_uvm_report_error__report_enabled_checked_3308 = 0U;
    this->__Vtask_uvm_report_error__context_name_3307 = ""s;
    __Vtask_uvm_report_error__line_3306 = 0U;
    this->__Vtask_uvm_report_error__filename_3305 = ""s;
    __Vtask_uvm_report_error__verbosity_3304 = 0U;
    this->__Vtask_uvm_report_error__message_3303 = "Sequencer interface task not implemented"s;
    this->__Vtask_uvm_report_error__id_3302 = "wait_for_sequences"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1430);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1430;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3309);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_3309;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_3302, this->__Vtask_uvm_report_error__message_3303, __Vtask_uvm_report_error__verbosity_3304, this->__Vtask_uvm_report_error__filename_3305, __Vtask_uvm_report_error__line_3306, this->__Vtask_uvm_report_error__context_name_3307, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3308));
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pid1fecb03::__VnoInFunc_has_do_available(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &has_do_available__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pid1fecb03::__VnoInFunc_has_do_available\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_3312;
    __Vtask_uvm_report_error__verbosity_3312 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_3314;
    __Vtask_uvm_report_error__line_3314 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3316;
    __Vtask_uvm_report_error__report_enabled_checked_3316 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1431;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3317;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    has_do_available__Vfuncrtn = 0U;
    __Vtask_uvm_report_error__report_enabled_checked_3316 = 0U;
    this->__Vtask_uvm_report_error__context_name_3315 = ""s;
    __Vtask_uvm_report_error__line_3314 = 0U;
    this->__Vtask_uvm_report_error__filename_3313 = ""s;
    __Vtask_uvm_report_error__verbosity_3312 = 0U;
    this->__Vtask_uvm_report_error__message_3311 = "Sequencer interface function not implemented"s;
    this->__Vtask_uvm_report_error__id_3310 = "has_do_available"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1431);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1431;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3317);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_3317;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_3310, this->__Vtask_uvm_report_error__message_3311, __Vtask_uvm_report_error__verbosity_3312, this->__Vtask_uvm_report_error__filename_3313, __Vtask_uvm_report_error__line_3314, this->__Vtask_uvm_report_error__context_name_3315, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3316));
    has_do_available__Vfuncrtn = 0U;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pid1fecb03::__VnoInFunc_get(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pid1fecb03::__VnoInFunc_get\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_3320;
    __Vtask_uvm_report_error__verbosity_3320 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_3322;
    __Vtask_uvm_report_error__line_3322 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3324;
    __Vtask_uvm_report_error__report_enabled_checked_3324 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1432;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3325;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vtask_uvm_report_error__report_enabled_checked_3324 = 0U;
    this->__Vtask_uvm_report_error__context_name_3323 = ""s;
    __Vtask_uvm_report_error__line_3322 = 0U;
    this->__Vtask_uvm_report_error__filename_3321 = ""s;
    __Vtask_uvm_report_error__verbosity_3320 = 0U;
    this->__Vtask_uvm_report_error__message_3319 = "Sequencer interface task not implemented"s;
    this->__Vtask_uvm_report_error__id_3318 = "get"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1432);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1432;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3325);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_3325;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_3318, this->__Vtask_uvm_report_error__message_3319, __Vtask_uvm_report_error__verbosity_3320, this->__Vtask_uvm_report_error__filename_3321, __Vtask_uvm_report_error__line_3322, this->__Vtask_uvm_report_error__context_name_3323, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3324));
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pid1fecb03::__VnoInFunc_peek(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pid1fecb03::__VnoInFunc_peek\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_3328;
    __Vtask_uvm_report_error__verbosity_3328 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_3330;
    __Vtask_uvm_report_error__line_3330 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3332;
    __Vtask_uvm_report_error__report_enabled_checked_3332 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1433;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3333;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vtask_uvm_report_error__report_enabled_checked_3332 = 0U;
    this->__Vtask_uvm_report_error__context_name_3331 = ""s;
    __Vtask_uvm_report_error__line_3330 = 0U;
    this->__Vtask_uvm_report_error__filename_3329 = ""s;
    __Vtask_uvm_report_error__verbosity_3328 = 0U;
    this->__Vtask_uvm_report_error__message_3327 = "Sequencer interface task not implemented"s;
    this->__Vtask_uvm_report_error__id_3326 = "peek"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1433);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1433;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3333);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_3333;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_3326, this->__Vtask_uvm_report_error__message_3327, __Vtask_uvm_report_error__verbosity_3328, this->__Vtask_uvm_report_error__filename_3329, __Vtask_uvm_report_error__line_3330, this->__Vtask_uvm_report_error__context_name_3331, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3332));
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pid1fecb03::__VnoInFunc_put(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pid1fecb03::__VnoInFunc_put\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_3336;
    __Vtask_uvm_report_error__verbosity_3336 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_3338;
    __Vtask_uvm_report_error__line_3338 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3340;
    __Vtask_uvm_report_error__report_enabled_checked_3340 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1434;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3341;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    __Vtask_uvm_report_error__report_enabled_checked_3340 = 0U;
    this->__Vtask_uvm_report_error__context_name_3339 = ""s;
    __Vtask_uvm_report_error__line_3338 = 0U;
    this->__Vtask_uvm_report_error__filename_3337 = ""s;
    __Vtask_uvm_report_error__verbosity_3336 = 0U;
    this->__Vtask_uvm_report_error__message_3335 = "Sequencer interface task not implemented"s;
    this->__Vtask_uvm_report_error__id_3334 = "put"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1434);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1434;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3341);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_3341;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_3334, this->__Vtask_uvm_report_error__message_3335, __Vtask_uvm_report_error__verbosity_3336, this->__Vtask_uvm_report_error__filename_3337, __Vtask_uvm_report_error__line_3338, this->__Vtask_uvm_report_error__context_name_3339, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3340));
}

void Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pid1fecb03::__VnoInFunc_put_response(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pid1fecb03::__VnoInFunc_put_response\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_3344;
    __Vtask_uvm_report_error__verbosity_3344 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_3346;
    __Vtask_uvm_report_error__line_3346 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3348;
    __Vtask_uvm_report_error__report_enabled_checked_3348 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1435;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3349;
    // Body
    VlProcess::currentp(vlProcess.get());
    __Vtask_uvm_report_error__report_enabled_checked_3348 = 0U;
    this->__Vtask_uvm_report_error__context_name_3347 = ""s;
    __Vtask_uvm_report_error__line_3346 = 0U;
    this->__Vtask_uvm_report_error__filename_3345 = ""s;
    __Vtask_uvm_report_error__verbosity_3344 = 0U;
    this->__Vtask_uvm_report_error__message_3343 = "Sequencer interface function not implemented"s;
    this->__Vtask_uvm_report_error__id_3342 = "put_response"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1435);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1435;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3349);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_3349;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_3342, this->__Vtask_uvm_report_error__message_3343, __Vtask_uvm_report_error__verbosity_3344, this->__Vtask_uvm_report_error__filename_3345, __Vtask_uvm_report_error__line_3346, this->__Vtask_uvm_report_error__context_name_3347, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3348));
}

void Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pid1fecb03::__VnoInFunc_disable_auto_item_recording(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pid1fecb03::__VnoInFunc_disable_auto_item_recording\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_3352;
    __Vtask_uvm_report_error__verbosity_3352 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_3354;
    __Vtask_uvm_report_error__line_3354 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3356;
    __Vtask_uvm_report_error__report_enabled_checked_3356 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1436;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3357;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    __Vtask_uvm_report_error__report_enabled_checked_3356 = 0U;
    this->__Vtask_uvm_report_error__context_name_3355 = ""s;
    __Vtask_uvm_report_error__line_3354 = 0U;
    this->__Vtask_uvm_report_error__filename_3353 = ""s;
    __Vtask_uvm_report_error__verbosity_3352 = 0U;
    this->__Vtask_uvm_report_error__message_3351 = "Sequencer interface function not implemented"s;
    this->__Vtask_uvm_report_error__id_3350 = "disable_auto_item_recording"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1436);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1436;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3357);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_3357;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_3350, this->__Vtask_uvm_report_error__message_3351, __Vtask_uvm_report_error__verbosity_3352, this->__Vtask_uvm_report_error__filename_3353, __Vtask_uvm_report_error__line_3354, this->__Vtask_uvm_report_error__context_name_3355, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3356));
}

void Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pid1fecb03::__VnoInFunc_is_auto_item_recording_enabled(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &is_auto_item_recording_enabled__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pid1fecb03::__VnoInFunc_is_auto_item_recording_enabled\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_3360;
    __Vtask_uvm_report_error__verbosity_3360 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_3362;
    __Vtask_uvm_report_error__line_3362 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3364;
    __Vtask_uvm_report_error__report_enabled_checked_3364 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1437;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3365;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    is_auto_item_recording_enabled__Vfuncrtn = 0U;
    __Vtask_uvm_report_error__report_enabled_checked_3364 = 0U;
    this->__Vtask_uvm_report_error__context_name_3363 = ""s;
    __Vtask_uvm_report_error__line_3362 = 0U;
    this->__Vtask_uvm_report_error__filename_3361 = ""s;
    __Vtask_uvm_report_error__verbosity_3360 = 0U;
    this->__Vtask_uvm_report_error__message_3359 = "Sequencer interface function not implemented"s;
    this->__Vtask_uvm_report_error__id_3358 = "is_auto_item_recording_enabled"s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1437);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1437;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3365);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__Vfuncout_3365;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_3358, this->__Vtask_uvm_report_error__message_3359, __Vtask_uvm_report_error__verbosity_3360, this->__Vtask_uvm_report_error__filename_3361, __Vtask_uvm_report_error__line_3362, this->__Vtask_uvm_report_error__context_name_3363, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3364));
    is_auto_item_recording_enabled__Vfuncrtn = 0U;
}

void Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pid1fecb03::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    Vtb_top_uvm_pkg__03a__03auvm_void::init(vlProcess, vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pid1fecb03::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pid1fecb03::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pid1fecb03::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pid1fecb03::~Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pid1fecb03() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pid1fecb03::~\n"); );
}
