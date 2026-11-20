// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_pre_write(Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ idx, ::QData/*63:0*/ &wdat, ::IData/*31:0*/ &path, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> &map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_pre_write\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_post_write(Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ idx, ::QData/*63:0*/ wdat, ::IData/*31:0*/ path, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::IData/*31:0*/ &status) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_post_write\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_pre_read(Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ idx, ::IData/*31:0*/ &path, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> &map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_pre_read\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_post_read(Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ idx, ::QData/*63:0*/ &rdat, ::IData/*31:0*/ path, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::IData/*31:0*/ &status) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_post_read\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_vreg::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::IData/*31:0*/ n_bits) {
    Vtb_top_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg::new\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1753;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4487;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_4490;
    __Vtask_uvm_report_error__verbosity_4490 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_4492;
    __Vtask_uvm_report_error__line_4492 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_4494;
    __Vtask_uvm_report_error__report_enabled_checked_4494 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1754;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4495;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1755;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4496;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_4499;
    __Vtask_uvm_report_error__verbosity_4499 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_4501;
    __Vtask_uvm_report_error__line_4501 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_4503;
    __Vtask_uvm_report_error__report_enabled_checked_4503 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1756;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4504;
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    ::std::string __VlefCall_9__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_8;
    ::IData/*31:0*/ __VlefCall_7__get_report_action;
    ::IData/*31:0*/ __VlefCall_6__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_5__uvm_get_report_object;
    ::std::string __VlefCall_4__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk668__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk669__DOT___local_report_object_;
    /*super.new*/;
    if ((0U == n_bits)) {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1753);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1753;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4487);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
            = __Vtask_get_root__Vfuncout_4487;
        __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
        VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 435)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk668__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk668__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 435)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_1__get_report_verbosity_level);
        __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
        if (__VlefLogAnd_3) {
            VL_NULL_CHECK(unnamedblk668__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 435)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_2__get_report_action);
            __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_3))) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
            __Vtask_uvm_report_error__report_enabled_checked_4494 = 1U;
            this->__Vtask_uvm_report_error__context_name_4493 = ""s;
            __Vtask_uvm_report_error__line_4492 = 0x000001b3U;
            this->__Vtask_uvm_report_error__filename_4491 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh"s;
            __Vtask_uvm_report_error__verbosity_4490 = 0U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_error__message_4489
                          ,"Virtual register \"%s\" cannot have 0 bits",1
                          , 'S',&(__VlefCall_4__get_full_name));
            this->__Vtask_uvm_report_error__id_4488 = "RegModel"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1754);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1754;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4495);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__Vfuncout_4495;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_4488, this->__Vtask_uvm_report_error__message_4489, __Vtask_uvm_report_error__verbosity_4490, this->__Vtask_uvm_report_error__filename_4491, __Vtask_uvm_report_error__line_4492, this->__Vtask_uvm_report_error__context_name_4493, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_4494));
        }
        n_bits = 1U;
    }
    if ((0x00000040U < n_bits)) {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1755);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1755;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4496);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
            = __Vtask_get_root__Vfuncout_4496;
        __VlefCall_5__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
        VL_NULL_CHECK(__VlefCall_5__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 439)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk669__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk669__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 439)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_6__get_report_verbosity_level);
        __VlefLogAnd_8 = VL_LTES_III(32, 0U, __VlefCall_6__get_report_verbosity_level);
        if (__VlefLogAnd_8) {
            VL_NULL_CHECK(unnamedblk669__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 439)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_7__get_report_action);
            __VlefLogAnd_8 = (0U != __VlefCall_7__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_8))) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_9__get_full_name);
            __Vtask_uvm_report_error__report_enabled_checked_4503 = 1U;
            this->__Vtask_uvm_report_error__context_name_4502 = ""s;
            __Vtask_uvm_report_error__line_4501 = 0x000001b7U;
            this->__Vtask_uvm_report_error__filename_4500 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh"s;
            __Vtask_uvm_report_error__verbosity_4499 = 0U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_error__message_4498
                          ,"Virtual register \"%s\" cannot have more than 64 bits (%0d)",2
                          , 'S',&(__VlefCall_9__get_full_name)
                          , '#',32,n_bits);
            this->__Vtask_uvm_report_error__id_4497 = "RegModel"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1756);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1756;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4504);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__Vfuncout_4504;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_4497, this->__Vtask_uvm_report_error__message_4498, __Vtask_uvm_report_error__verbosity_4499, this->__Vtask_uvm_report_error__filename_4500, __Vtask_uvm_report_error__line_4501, this->__Vtask_uvm_report_error__context_name_4502, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_4503));
        }
        n_bits = 0x00000040U;
    }
    this->__PVT__n_bits = n_bits;
    this->__PVT__locked = 0U;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_XatomicX(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ on) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_XatomicX\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_try_get__Vfuncout_4505;
    __Vtask_try_get__Vfuncout_4505 = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    if (on) {
        co_await VL_NULL_CHECK(this->__PVT__atomic, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 543)->__VnoInFunc_get(vlProcess, vlSymsp, 1U);
    } else {
        VL_NULL_CHECK(this->__PVT__atomic, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 548)->__VnoInFunc_try_get(vlSymsp, 1U, __Vtask_try_get__Vfuncout_4505);
        VL_NULL_CHECK(this->__PVT__atomic, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 549)->__VnoInFunc_put(vlSymsp, 1U);
    }
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_full_name(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_full_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_full_name\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_1__get_full_name;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_block> __VlefCall_0__get_parent;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_block> blk;
    {
        get_full_name__Vfuncrtn = ""s;
        this->__VnoInFunc_get_name(vlSymsp, get_full_name__Vfuncrtn);
        this->__VnoInFunc_get_block(vlSymsp, blk);
        if ((VlNull{} == blk)) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(blk, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 573)->__VnoInFunc_get_parent(vlSymsp, __VlefCall_0__get_parent);
        if ((VlNull{} == __VlefCall_0__get_parent)) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 578)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
        get_full_name__Vfuncrtn = VL_CONCATN_NNN(VL_CONCATN_NNN(__VlefCall_1__get_full_name, "."s), get_full_name__Vfuncrtn);
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_parent(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_block> &get_parent__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_parent\n"); );
    // Body
    get_parent__Vfuncrtn = this->__PVT__parent;
}

void Vtb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_block(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_block> &get_block__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_block\n"); );
    // Body
    get_block__Vfuncrtn = this->__PVT__parent;
}

void Vtb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_memory(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_mem> &get_memory__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_memory\n"); );
    // Body
    get_memory__Vfuncrtn = this->__PVT__mem;
}

void Vtb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_offset_in_memory(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ idx, ::QData/*63:0*/ &get_offset_in_memory__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_offset_in_memory\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1757;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4506;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_4509;
    __Vtask_uvm_report_error__verbosity_4509 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_4511;
    __Vtask_uvm_report_error__line_4511 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_4513;
    __Vtask_uvm_report_error__report_enabled_checked_4513 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1758;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4514;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_4__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk695__DOT___local_report_object_;
    {
        get_offset_in_memory__Vfuncrtn = 0ULL;
        if ((VlNull{} == this->__PVT__mem)) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1757);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1757;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4506);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_4506;
            __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 782)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk695__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk695__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 782)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_1__get_report_verbosity_level);
            __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
            if (__VlefLogAnd_3) {
                VL_NULL_CHECK(unnamedblk695__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 782)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_2__get_report_action);
                __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_3))) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                __Vtask_uvm_report_error__report_enabled_checked_4513 = 1U;
                this->__Vtask_uvm_report_error__context_name_4512 = ""s;
                __Vtask_uvm_report_error__line_4511 = 0x0000030eU;
                this->__Vtask_uvm_report_error__filename_4510 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__verbosity_4509 = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__message_4508
                              ,"Cannot call uvm_vreg::get_offset_in_memory() on unimplemented virtual register \"%s\"",1
                              , 'S',&(__VlefCall_4__get_full_name));
                this->__Vtask_uvm_report_error__id_4507 = "RegModel"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1758);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1758;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4514);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_4514;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_4507, this->__Vtask_uvm_report_error__message_4508, __Vtask_uvm_report_error__verbosity_4509, this->__Vtask_uvm_report_error__filename_4510, __Vtask_uvm_report_error__line_4511, this->__Vtask_uvm_report_error__context_name_4512, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_4513));
            }
            get_offset_in_memory__Vfuncrtn = 0ULL;
            goto __Vlabel0;
        }
        get_offset_in_memory__Vfuncrtn = (this->__PVT__offset 
                                          + (idx * (::QData)((::IData)(this->__PVT__incr))));
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_address(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ idx, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::QData/*63:0*/ &get_address__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_address\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1759;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4515;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_4518;
    __Vtask_uvm_report_error__verbosity_4518 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_4520;
    __Vtask_uvm_report_error__line_4520 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_4522;
    __Vtask_uvm_report_error__report_enabled_checked_4522 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1760;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4523;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::QData/*63:0*/ __VlefCall_5__get_offset_in_memory;
    ::std::string __VlefCall_4__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk696__DOT___local_report_object_;
    {
        get_address__Vfuncrtn = 0ULL;
        if ((VlNull{} == this->__PVT__mem)) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1759);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1759;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4515);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_4515;
            __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 793)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk696__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk696__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 793)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_1__get_report_verbosity_level);
            __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
            if (__VlefLogAnd_3) {
                VL_NULL_CHECK(unnamedblk696__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 793)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_2__get_report_action);
                __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_3))) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                __Vtask_uvm_report_error__report_enabled_checked_4522 = 1U;
                this->__Vtask_uvm_report_error__context_name_4521 = ""s;
                __Vtask_uvm_report_error__line_4520 = 0x00000319U;
                this->__Vtask_uvm_report_error__filename_4519 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__verbosity_4518 = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__message_4517
                              ,"Cannot get address of of unimplemented virtual register \"%s\".",1
                              , 'S',&(__VlefCall_4__get_full_name));
                this->__Vtask_uvm_report_error__id_4516 = "RegModel"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1760);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1760;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4523);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_4523;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_4516, this->__Vtask_uvm_report_error__message_4517, __Vtask_uvm_report_error__verbosity_4518, this->__Vtask_uvm_report_error__filename_4519, __Vtask_uvm_report_error__line_4520, this->__Vtask_uvm_report_error__context_name_4521, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_4522));
            }
            get_address__Vfuncrtn = 0ULL;
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_offset_in_memory(vlProcess, vlSymsp, idx, __VlefCall_5__get_offset_in_memory);
        VL_NULL_CHECK(this->__PVT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 797)->__VnoInFunc_get_address(vlProcess, vlSymsp, __VlefCall_5__get_offset_in_memory, map, get_address__Vfuncrtn);
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_n_bytes(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_n_bytes__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_n_bytes\n"); );
    // Body
    get_n_bytes__Vfuncrtn = ((::IData)(1U) + ((this->__PVT__n_bits 
                                               - (::IData)(1U)) 
                                              >> 3U));
}

void Vtb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_n_memlocs(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_n_memlocs__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_n_memlocs\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1761;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4524;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_4527;
    __Vtask_uvm_report_error__verbosity_4527 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_4529;
    __Vtask_uvm_report_error__line_4529 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_4531;
    __Vtask_uvm_report_error__report_enabled_checked_4531 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1762;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4532;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCall_6__get_n_bytes;
    ::IData/*31:0*/ __VlefCall_5__get_n_bytes;
    ::std::string __VlefCall_4__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk698__DOT___local_report_object_;
    {
        get_n_memlocs__Vfuncrtn = 0U;
        if ((VlNull{} == this->__PVT__mem)) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1761);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1761;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4524);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_4524;
            __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 820)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk698__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk698__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 820)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_1__get_report_verbosity_level);
            __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
            if (__VlefLogAnd_3) {
                VL_NULL_CHECK(unnamedblk698__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 820)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_2__get_report_action);
                __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_3))) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                __Vtask_uvm_report_error__report_enabled_checked_4531 = 1U;
                this->__Vtask_uvm_report_error__context_name_4530 = ""s;
                __Vtask_uvm_report_error__line_4529 = 0x00000334U;
                this->__Vtask_uvm_report_error__filename_4528 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__verbosity_4527 = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__message_4526
                              ,"Cannot call uvm_vreg::get_n_memlocs() on unimplemented virtual register \"%s\"",1
                              , 'S',&(__VlefCall_4__get_full_name));
                this->__Vtask_uvm_report_error__id_4525 = "RegModel"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1762);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1762;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4532);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_4532;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_4525, this->__Vtask_uvm_report_error__message_4526, __Vtask_uvm_report_error__verbosity_4527, this->__Vtask_uvm_report_error__filename_4528, __Vtask_uvm_report_error__line_4529, this->__Vtask_uvm_report_error__context_name_4530, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_4531));
            }
            get_n_memlocs__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_5__get_n_bytes);
        VL_NULL_CHECK(this->__PVT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 824)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_6__get_n_bytes);
        get_n_memlocs__Vfuncrtn = ((::IData)(1U) + 
                                   VL_DIV_III(32, (__VlefCall_5__get_n_bytes 
                                                   - (::IData)(1U)), __VlefCall_6__get_n_bytes));
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_n_maps(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_n_maps__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_n_maps\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1763;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4533;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_4536;
    __Vtask_uvm_report_error__verbosity_4536 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_4538;
    __Vtask_uvm_report_error__line_4538 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_4540;
    __Vtask_uvm_report_error__report_enabled_checked_4540 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1764;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4541;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_4__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk700__DOT___local_report_object_;
    {
        get_n_maps__Vfuncrtn = 0U;
        if ((VlNull{} == this->__PVT__mem)) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1763);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1763;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4533);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_4533;
            __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 842)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk700__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk700__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 842)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_1__get_report_verbosity_level);
            __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
            if (__VlefLogAnd_3) {
                VL_NULL_CHECK(unnamedblk700__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 842)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_2__get_report_action);
                __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_3))) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                __Vtask_uvm_report_error__report_enabled_checked_4540 = 1U;
                this->__Vtask_uvm_report_error__context_name_4539 = ""s;
                __Vtask_uvm_report_error__line_4538 = 0x0000034aU;
                this->__Vtask_uvm_report_error__filename_4537 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__verbosity_4536 = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__message_4535
                              ,"Cannot call uvm_vreg::get_n_maps() on unimplemented virtual register \"%s\"",1
                              , 'S',&(__VlefCall_4__get_full_name));
                this->__Vtask_uvm_report_error__id_4534 = "RegModel"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1764);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1764;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4541);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_4541;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_4534, this->__Vtask_uvm_report_error__message_4535, __Vtask_uvm_report_error__verbosity_4536, this->__Vtask_uvm_report_error__filename_4537, __Vtask_uvm_report_error__line_4538, this->__Vtask_uvm_report_error__context_name_4539, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_4540));
            }
            get_n_maps__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 846)->__VnoInFunc_get_n_maps(vlSymsp, get_n_maps__Vfuncrtn);
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_maps(Vtb_top__Syms* __restrict vlSymsp, ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map>> &maps) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_maps\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1765;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4542;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_4545;
    __Vtask_uvm_report_error__verbosity_4545 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_4547;
    __Vtask_uvm_report_error__line_4547 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_4549;
    __Vtask_uvm_report_error__report_enabled_checked_4549 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1766;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4550;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_4__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk701__DOT___local_report_object_;
    {
        if ((VlNull{} == this->__PVT__mem)) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1765);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1765;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4542);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_4542;
            __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 853)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk701__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk701__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 853)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_1__get_report_verbosity_level);
            __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
            if (__VlefLogAnd_3) {
                VL_NULL_CHECK(unnamedblk701__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 853)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_2__get_report_action);
                __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_3))) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                __Vtask_uvm_report_error__report_enabled_checked_4549 = 1U;
                this->__Vtask_uvm_report_error__context_name_4548 = ""s;
                __Vtask_uvm_report_error__line_4547 = 0x00000355U;
                this->__Vtask_uvm_report_error__filename_4546 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__verbosity_4545 = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__message_4544
                              ,"Cannot call uvm_vreg::get_maps() on unimplemented virtual register \"%s\"",1
                              , 'S',&(__VlefCall_4__get_full_name));
                this->__Vtask_uvm_report_error__id_4543 = "RegModel"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1766);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1766;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4550);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_4550;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_4543, this->__Vtask_uvm_report_error__message_4544, __Vtask_uvm_report_error__verbosity_4545, this->__Vtask_uvm_report_error__filename_4546, __Vtask_uvm_report_error__line_4547, this->__Vtask_uvm_report_error__context_name_4548, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_4549));
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 857)->__VnoInFunc_get_maps(vlSymsp, maps);
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_is_in_map(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::CData/*0:0*/ &is_in_map__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_is_in_map\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1767;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4551;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_4554;
    __Vtask_uvm_report_error__verbosity_4554 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_4556;
    __Vtask_uvm_report_error__line_4556 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_4558;
    __Vtask_uvm_report_error__report_enabled_checked_4558 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1768;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4559;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_4__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk702__DOT___local_report_object_;
    {
        is_in_map__Vfuncrtn = 0U;
        if ((VlNull{} == this->__PVT__mem)) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1767);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1767;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4551);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_4551;
            __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 864)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk702__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk702__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 864)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_1__get_report_verbosity_level);
            __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
            if (__VlefLogAnd_3) {
                VL_NULL_CHECK(unnamedblk702__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 864)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_2__get_report_action);
                __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_3))) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                __Vtask_uvm_report_error__report_enabled_checked_4558 = 1U;
                this->__Vtask_uvm_report_error__context_name_4557 = ""s;
                __Vtask_uvm_report_error__line_4556 = 0x00000360U;
                this->__Vtask_uvm_report_error__filename_4555 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__verbosity_4554 = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__message_4553
                              ,"Cannot call uvm_vreg::is_in_map() on unimplemented virtual register \"%s\"",1
                              , 'S',&(__VlefCall_4__get_full_name));
                this->__Vtask_uvm_report_error__id_4552 = "RegModel"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1768);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1768;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4559);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_4559;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_4552, this->__Vtask_uvm_report_error__message_4553, __Vtask_uvm_report_error__verbosity_4554, this->__Vtask_uvm_report_error__filename_4555, __Vtask_uvm_report_error__line_4556, this->__Vtask_uvm_report_error__context_name_4557, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_4558));
            }
            is_in_map__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 868)->__VnoInFunc_is_in_map(vlSymsp, map, is_in_map__Vfuncrtn);
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_access(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::std::string &get_access__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_access\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1769;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4560;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_4563;
    __Vtask_uvm_report_error__verbosity_4563 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_4565;
    __Vtask_uvm_report_error__line_4565 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_4567;
    __Vtask_uvm_report_error__report_enabled_checked_4567 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1770;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4568;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_4__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk703__DOT___local_report_object_;
    {
        get_access__Vfuncrtn = ""s;
        if ((VlNull{} == this->__PVT__mem)) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1769);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1769;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4560);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_4560;
            __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 875)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk703__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk703__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 875)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_1__get_report_verbosity_level);
            __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
            if (__VlefLogAnd_3) {
                VL_NULL_CHECK(unnamedblk703__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 875)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_2__get_report_action);
                __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_3))) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                __Vtask_uvm_report_error__report_enabled_checked_4567 = 1U;
                this->__Vtask_uvm_report_error__context_name_4566 = ""s;
                __Vtask_uvm_report_error__line_4565 = 0x0000036bU;
                this->__Vtask_uvm_report_error__filename_4564 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__verbosity_4563 = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__message_4562
                              ,"Cannot call uvm_vreg::get_rights() on unimplemented virtual register \"%s\"",1
                              , 'S',&(__VlefCall_4__get_full_name));
                this->__Vtask_uvm_report_error__id_4561 = "RegModel"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1770);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1770;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4568);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_4568;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_4561, this->__Vtask_uvm_report_error__message_4562, __Vtask_uvm_report_error__verbosity_4563, this->__Vtask_uvm_report_error__filename_4564, __Vtask_uvm_report_error__line_4565, this->__Vtask_uvm_report_error__context_name_4566, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_4567));
            }
            get_access__Vfuncrtn = "RW"s;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 879)->__VnoInFunc_get_access(vlProcess, vlSymsp, map, get_access__Vfuncrtn);
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_rights(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::std::string &get_rights__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_rights\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1771;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4569;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_4572;
    __Vtask_uvm_report_error__verbosity_4572 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_4574;
    __Vtask_uvm_report_error__line_4574 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_4576;
    __Vtask_uvm_report_error__report_enabled_checked_4576 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1772;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4577;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_4__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk704__DOT___local_report_object_;
    {
        get_rights__Vfuncrtn = ""s;
        if ((VlNull{} == this->__PVT__mem)) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1771);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1771;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4569);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_4569;
            __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 886)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk704__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk704__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 886)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_1__get_report_verbosity_level);
            __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
            if (__VlefLogAnd_3) {
                VL_NULL_CHECK(unnamedblk704__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 886)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_2__get_report_action);
                __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_3))) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                __Vtask_uvm_report_error__report_enabled_checked_4576 = 1U;
                this->__Vtask_uvm_report_error__context_name_4575 = ""s;
                __Vtask_uvm_report_error__line_4574 = 0x00000376U;
                this->__Vtask_uvm_report_error__filename_4573 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__verbosity_4572 = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__message_4571
                              ,"Cannot call uvm_vreg::get_rights() on unimplemented virtual register \"%s\"",1
                              , 'S',&(__VlefCall_4__get_full_name));
                this->__Vtask_uvm_report_error__id_4570 = "RegModel"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1772);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1772;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4577);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_4577;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_4570, this->__Vtask_uvm_report_error__message_4571, __Vtask_uvm_report_error__verbosity_4572, this->__Vtask_uvm_report_error__filename_4573, __Vtask_uvm_report_error__line_4574, this->__Vtask_uvm_report_error__context_name_4575, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_4576));
            }
            get_rights__Vfuncrtn = "RW"s;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 890)->__VnoInFunc_get_rights(vlProcess, vlSymsp, map, get_rights__Vfuncrtn);
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_fields(Vtb_top__Syms* __restrict vlSymsp, ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_vreg_field>> &fields) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_fields\n"); );
    // Body
    ::IData/*31:0*/ unnamedblk705__DOT__i;
    unnamedblk705__DOT__i = 0;
    unnamedblk705__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk705__DOT__i, this->__PVT__fields.size())) {
        fields.push_back(this->__PVT__fields.at(unnamedblk705__DOT__i));
        unnamedblk705__DOT__i = ((::IData)(1U) + unnamedblk705__DOT__i);
    }
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_write(Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ idx, ::IData/*31:0*/ &status, ::QData/*63:0*/ value, ::IData/*31:0*/ path, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> parent, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> extension, ::std::string fname, ::IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_write\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1773;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4578;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_4581;
    __Vtask_uvm_report_error__verbosity_4581 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_4583;
    __Vtask_uvm_report_error__line_4583 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_4585;
    __Vtask_uvm_report_error__report_enabled_checked_4585 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1774;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4586;
    ::IData/*31:0*/ __Vtask_get_lsb_pos_in_register__Vfuncout_4587;
    __Vtask_get_lsb_pos_in_register__Vfuncout_4587 = 0;
    ::IData/*31:0*/ __Vtask_write__status_4588;
    __Vtask_write__status_4588 = 0;
    ::IData/*31:0*/ __Vtask_get_lsb_pos_in_register__Vfuncout_4589;
    __Vtask_get_lsb_pos_in_register__Vfuncout_4589 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1775;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4590;
    ::IData/*31:0*/ __Vtask_uvm_report_info__verbosity_4593;
    __Vtask_uvm_report_info__verbosity_4593 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__line_4595;
    __Vtask_uvm_report_info__line_4595 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_info__report_enabled_checked_4597;
    __Vtask_uvm_report_info__report_enabled_checked_4597 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1776;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4598;
    ::VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::std::string __VlefCall_14__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_13;
    ::IData/*31:0*/ __VlefCall_12__get_report_action;
    ::IData/*31:0*/ __VlefCall_11__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_10__uvm_get_report_object;
    ::IData/*31:0*/ __VlefCall_9__get_n_bits;
    ::IData/*31:0*/ __VlefCall_8__get_n_bytes;
    ::IData/*31:0*/ __VlefCall_7__get_n_bytes;
    ::IData/*31:0*/ __VlefCall_6__get_n_memlocs;
    ::IData/*31:0*/ __VlefCall_5__get_n_bits;
    ::std::string __VlefCall_4__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk708__DOT___local_report_object_;
    ::IData/*31:0*/ unnamedblk709__DOT__i;
    unnamedblk709__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk709__DOT__i__Vloopsize;
    unnamedblk709__DOT__i__Vloopsize = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pi664dc15a> unnamedblk709__DOT__unnamedblk710__DOT__cbs;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_vreg_field> unnamedblk709__DOT__unnamedblk710__DOT__f;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_vreg_field_cbs> unnamedblk709__DOT__unnamedblk710__DOT__unnamedblk711__DOT__cb;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_vreg_cbs> unnamedblk712__DOT__cb;
    ::IData/*31:0*/ unnamedblk713__DOT__i;
    ::IData/*31:0*/ unnamedblk713__DOT__unnamedblk714__DOT__s;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_vreg_cbs> unnamedblk715__DOT__cb;
    ::IData/*31:0*/ unnamedblk716__DOT__i;
    unnamedblk716__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk716__DOT__i__Vloopsize;
    unnamedblk716__DOT__i__Vloopsize = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pi664dc15a> unnamedblk716__DOT__unnamedblk717__DOT__cbs;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_vreg_field> unnamedblk716__DOT__unnamedblk717__DOT__f;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_vreg_field_cbs> unnamedblk716__DOT__unnamedblk717__DOT__unnamedblk718__DOT__cb;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk719__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pibf9bf78c> cbs;
    ::QData/*63:0*/ addr;
    ::QData/*63:0*/ tmp;
    ::QData/*63:0*/ msk;
    ::IData/*31:0*/ lsb;
    {
        status = 0U;
        cbs = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pibf9bf78c, vlProcess, vlSymsp, 
                     ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_vreg>{this});
        addr = 0ULL;
        tmp = 0ULL;
        msk = 0ULL;
        lsb = 0U;
        this->__PVT__write_in_progress = 1U;
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        if ((VlNull{} == this->__PVT__mem)) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1773);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1773;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4578);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_4578;
            __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 935)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk708__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk708__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 935)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_1__get_report_verbosity_level);
            __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
            if (__VlefLogAnd_3) {
                VL_NULL_CHECK(unnamedblk708__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 935)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_2__get_report_action);
                __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_3))) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                __Vtask_uvm_report_error__report_enabled_checked_4585 = 1U;
                this->__Vtask_uvm_report_error__context_name_4584 = ""s;
                __Vtask_uvm_report_error__line_4583 = 0x000003a7U;
                this->__Vtask_uvm_report_error__filename_4582 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__verbosity_4581 = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__message_4580
                              ,"Cannot write to unimplemented virtual register \"%s\".",1
                              , 'S',&(__VlefCall_4__get_full_name));
                this->__Vtask_uvm_report_error__id_4579 = "RegModel"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1774);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1774;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4586);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_4586;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_4579, this->__Vtask_uvm_report_error__message_4580, __Vtask_uvm_report_error__verbosity_4581, this->__Vtask_uvm_report_error__filename_4582, __Vtask_uvm_report_error__line_4583, this->__Vtask_uvm_report_error__context_name_4584, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_4585));
            }
            status = 1U;
            goto __Vlabel0;
        }
        if ((3U == path)) {
            VL_NULL_CHECK(this->__PVT__parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 942)->__VnoInFunc_get_default_door(vlSymsp, path);
        }
        unnamedblk709__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk709__DOT__i, this->__PVT__fields.size())) {
            unnamedblk709__DOT__i__Vloopsize = this->__PVT__fields.size();
            unnamedblk709__DOT__unnamedblk710__DOT__cbs 
                = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pi664dc15a, vlProcess, vlSymsp, this->__PVT__fields.at(unnamedblk709__DOT__i));
            unnamedblk709__DOT__unnamedblk710__DOT__f 
                = this->__PVT__fields.at(unnamedblk709__DOT__i);
            VL_NULL_CHECK(unnamedblk709__DOT__unnamedblk710__DOT__f, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 950)->__VnoInFunc_get_lsb_pos_in_register(vlSymsp, __Vtask_get_lsb_pos_in_register__Vfuncout_4587);
            lsb = __Vtask_get_lsb_pos_in_register__Vfuncout_4587;
            VL_NULL_CHECK(unnamedblk709__DOT__unnamedblk710__DOT__f, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 951)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_5__get_n_bits);
            msk = VL_SHIFTL_QQI(64,64,32, (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_5__get_n_bits) 
                                           - 1ULL), lsb);
            tmp = VL_SHIFTR_QQI(64,64,32, (value & msk), lsb);
            VL_NULL_CHECK(unnamedblk709__DOT__unnamedblk710__DOT__f, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 954)->__VnoInFunc_pre_write(vlSymsp, idx, tmp, path, map);
            VL_NULL_CHECK(unnamedblk709__DOT__unnamedblk710__DOT__cbs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 955)->__VnoInFunc_first(vlSymsp, unnamedblk709__DOT__unnamedblk710__DOT__unnamedblk711__DOT__cb);
            while ((VlNull{} != unnamedblk709__DOT__unnamedblk710__DOT__unnamedblk711__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk709__DOT__unnamedblk710__DOT__unnamedblk711__DOT__cb, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 957)->__PVT__fname 
                    = this->__PVT__fname;
                VL_NULL_CHECK(unnamedblk709__DOT__unnamedblk710__DOT__unnamedblk711__DOT__cb, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 958)->__PVT__lineno 
                    = this->__PVT__lineno;
                VL_NULL_CHECK(unnamedblk709__DOT__unnamedblk710__DOT__unnamedblk711__DOT__cb, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 959)->__VnoInFunc_pre_write(vlSymsp, unnamedblk709__DOT__unnamedblk710__DOT__f, idx, tmp, path, map);
                VL_NULL_CHECK(unnamedblk709__DOT__unnamedblk710__DOT__cbs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 956)->__VnoInFunc_next(vlSymsp, unnamedblk709__DOT__unnamedblk710__DOT__unnamedblk711__DOT__cb);
            }
            value = ((value & (~ msk)) | VL_SHIFTL_QQI(64,64,32, tmp, lsb));
            if ((unnamedblk709__DOT__i__Vloopsize <= this->__PVT__fields.size())) {
                unnamedblk709__DOT__i = ((::IData)(1U) 
                                         + unnamedblk709__DOT__i);
            }
        }
        this->__VnoInFunc_pre_write(vlSymsp, idx, value, path, map);
        VL_NULL_CHECK(cbs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 965)->__VnoInFunc_first(vlSymsp, unnamedblk712__DOT__cb);
        while ((VlNull{} != unnamedblk712__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk712__DOT__cb, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 967)->__PVT__fname 
                = this->__PVT__fname;
            VL_NULL_CHECK(unnamedblk712__DOT__cb, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 968)->__PVT__lineno 
                = this->__PVT__lineno;
            VL_NULL_CHECK(unnamedblk712__DOT__cb, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 969)->__VnoInFunc_pre_write(vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_vreg>{this}, idx, value, path, map);
            VL_NULL_CHECK(cbs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 966)->__VnoInFunc_next(vlSymsp, unnamedblk712__DOT__cb);
        }
        addr = (this->__PVT__offset + (idx * (::QData)((::IData)(this->__PVT__incr))));
        lsb = 0U;
        status = 0U;
        unnamedblk713__DOT__i = 0U;
        unnamedblk713__DOT__i = 0U;
        while (true) {
            this->__VnoInFunc_get_n_memlocs(vlSymsp, __VlefCall_6__get_n_memlocs);
            if (!((unnamedblk713__DOT__i < __VlefCall_6__get_n_memlocs))) break;
            unnamedblk713__DOT__unnamedblk714__DOT__s = 0U;
            VL_NULL_CHECK(this->__PVT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 979)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_7__get_n_bytes);
            msk = VL_SHIFTL_QQI(64,64,32, (VL_SHIFTL_QQI(64,64,32, 1ULL, 
                                                         (__VlefCall_7__get_n_bytes 
                                                          << 3U)) 
                                           - 1ULL), lsb);
            tmp = VL_SHIFTR_QQI(64,64,32, (value & msk), lsb);
            co_await VL_NULL_CHECK(this->__PVT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 981)->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__status_4588, 
                                                                                (addr 
                                                                                + (::QData)((::IData)(unnamedblk713__DOT__i))), tmp, path, map, parent, 0xffffffffU, extension, fname, lineno);
            unnamedblk713__DOT__unnamedblk714__DOT__s 
                = __Vtask_write__status_4588;
            if (((0U != unnamedblk713__DOT__unnamedblk714__DOT__s) 
                 & (2U != unnamedblk713__DOT__unnamedblk714__DOT__s))) {
                status = unnamedblk713__DOT__unnamedblk714__DOT__s;
            }
            VL_NULL_CHECK(this->__PVT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 986)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_8__get_n_bytes);
            lsb = (lsb + (__VlefCall_8__get_n_bytes 
                          << 3U));
            unnamedblk713__DOT__i = ((::IData)(1U) 
                                     + unnamedblk713__DOT__i);
        }
        VL_NULL_CHECK(cbs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 989)->__VnoInFunc_first(vlSymsp, unnamedblk715__DOT__cb);
        while ((VlNull{} != unnamedblk715__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk715__DOT__cb, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 991)->__PVT__fname 
                = this->__PVT__fname;
            VL_NULL_CHECK(unnamedblk715__DOT__cb, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 992)->__PVT__lineno 
                = this->__PVT__lineno;
            VL_NULL_CHECK(unnamedblk715__DOT__cb, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 993)->__VnoInFunc_post_write(vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_vreg>{this}, idx, value, path, map, status);
            VL_NULL_CHECK(cbs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 990)->__VnoInFunc_next(vlSymsp, unnamedblk715__DOT__cb);
        }
        this->__VnoInFunc_post_write(vlSymsp, idx, value, path, map, status);
        unnamedblk716__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk716__DOT__i, this->__PVT__fields.size())) {
            unnamedblk716__DOT__i__Vloopsize = this->__PVT__fields.size();
            unnamedblk716__DOT__unnamedblk717__DOT__cbs 
                = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pi664dc15a, vlProcess, vlSymsp, this->__PVT__fields.at(unnamedblk716__DOT__i));
            unnamedblk716__DOT__unnamedblk717__DOT__f 
                = this->__PVT__fields.at(unnamedblk716__DOT__i);
            VL_NULL_CHECK(unnamedblk716__DOT__unnamedblk717__DOT__f, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 1000)->__VnoInFunc_get_lsb_pos_in_register(vlSymsp, __Vtask_get_lsb_pos_in_register__Vfuncout_4589);
            lsb = __Vtask_get_lsb_pos_in_register__Vfuncout_4589;
            VL_NULL_CHECK(unnamedblk716__DOT__unnamedblk717__DOT__f, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 1001)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_9__get_n_bits);
            msk = VL_SHIFTL_QQI(64,64,32, (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_9__get_n_bits) 
                                           - 1ULL), lsb);
            tmp = VL_SHIFTR_QQI(64,64,32, (value & msk), lsb);
            VL_NULL_CHECK(unnamedblk716__DOT__unnamedblk717__DOT__cbs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 1004)->__VnoInFunc_first(vlSymsp, unnamedblk716__DOT__unnamedblk717__DOT__unnamedblk718__DOT__cb);
            while ((VlNull{} != unnamedblk716__DOT__unnamedblk717__DOT__unnamedblk718__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk716__DOT__unnamedblk717__DOT__unnamedblk718__DOT__cb, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 1006)->__PVT__fname 
                    = this->__PVT__fname;
                VL_NULL_CHECK(unnamedblk716__DOT__unnamedblk717__DOT__unnamedblk718__DOT__cb, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 1007)->__PVT__lineno 
                    = this->__PVT__lineno;
                VL_NULL_CHECK(unnamedblk716__DOT__unnamedblk717__DOT__unnamedblk718__DOT__cb, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 1008)->__VnoInFunc_post_write(vlSymsp, unnamedblk716__DOT__unnamedblk717__DOT__f, idx, tmp, path, map, status);
                VL_NULL_CHECK(unnamedblk716__DOT__unnamedblk717__DOT__cbs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 1005)->__VnoInFunc_next(vlSymsp, unnamedblk716__DOT__unnamedblk717__DOT__unnamedblk718__DOT__cb);
            }
            VL_NULL_CHECK(unnamedblk716__DOT__unnamedblk717__DOT__f, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 1010)->__VnoInFunc_post_write(vlSymsp, idx, tmp, path, map, status);
            value = ((value & (~ msk)) | VL_SHIFTL_QQI(64,64,32, tmp, lsb));
            if ((unnamedblk716__DOT__i__Vloopsize <= this->__PVT__fields.size())) {
                unnamedblk716__DOT__i = ((::IData)(1U) 
                                         + unnamedblk716__DOT__i);
            }
        }
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1775);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1775;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4590);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
            = __Vtask_get_root__Vfuncout_4590;
        __VlefCall_10__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
        VL_NULL_CHECK(__VlefCall_10__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 1018)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk719__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk719__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 1018)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "RegModel"s, __VlefCall_11__get_report_verbosity_level);
        __VlefLogAnd_13 = VL_LTES_III(32, 0x000000c8U, __VlefCall_11__get_report_verbosity_level);
        if (__VlefLogAnd_13) {
            VL_NULL_CHECK(unnamedblk719__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 1018)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "RegModel"s, __VlefCall_12__get_report_action);
            __VlefLogAnd_13 = (0U != __VlefCall_12__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_13))) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_14__get_full_name);
            __Vtask_uvm_report_info__report_enabled_checked_4597 = 1U;
            this->__Vtask_uvm_report_info__context_name_4596 = ""s;
            __Vtask_uvm_report_info__line_4595 = 0x000003faU;
            this->__Vtask_uvm_report_info__filename_4594 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh"s;
            __Vtask_uvm_report_info__verbosity_4593 = 0x000000c8U;
            if ((0U == path)) {
                __Vtemp_1[0U] = 0x646f6f72U;
                __Vtemp_1[1U] = 0x726f6e74U;
                __Vtemp_1[2U] = 0x00000066U;
            } else {
                __Vtemp_1[0U] = 0x646f6f72U;
                __Vtemp_1[1U] = 0x6261636bU;
                __Vtemp_1[2U] = 0U;
            }
            VL_SFORMAT_NX(this->__Vtask_uvm_report_info__message_4592
                          ,"Wrote virtual register \"%s\"[%0d] via %s with: 'h%h",4
                          , 'S',&(__VlefCall_14__get_full_name)
                          , '#',64,idx, '#',72,__Vtemp_1.data()
                          , '#',64,value);
            this->__Vtask_uvm_report_info__id_4591 = "RegModel"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1776);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1776;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 147)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4598);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__Vfuncout_4598;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 148)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__id_4591, this->__Vtask_uvm_report_info__message_4592, __Vtask_uvm_report_info__verbosity_4593, this->__Vtask_uvm_report_info__filename_4594, __Vtask_uvm_report_info__line_4595, this->__Vtask_uvm_report_info__context_name_4596, (::IData)(__Vtask_uvm_report_info__report_enabled_checked_4597));
        }
        this->__PVT__write_in_progress = 0U;
        this->__PVT__fname = ""s;
        this->__PVT__lineno = 0U;
        __Vlabel0: ;
    }
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_read(Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ idx, ::IData/*31:0*/ &status, ::QData/*63:0*/ &value, ::IData/*31:0*/ path, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> parent, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> extension, ::std::string fname, ::IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_read\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1777;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4599;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_4602;
    __Vtask_uvm_report_error__verbosity_4602 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_4604;
    __Vtask_uvm_report_error__line_4604 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_4606;
    __Vtask_uvm_report_error__report_enabled_checked_4606 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1778;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4607;
    ::IData/*31:0*/ __Vtask_read__status_4608;
    __Vtask_read__status_4608 = 0;
    ::QData/*63:0*/ __Vtask_read__value_4609;
    __Vtask_read__value_4609 = 0;
    ::IData/*31:0*/ __Vtask_get_lsb_pos_in_register__Vfuncout_4610;
    __Vtask_get_lsb_pos_in_register__Vfuncout_4610 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1779;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4611;
    ::IData/*31:0*/ __Vtask_uvm_report_info__verbosity_4614;
    __Vtask_uvm_report_info__verbosity_4614 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__line_4616;
    __Vtask_uvm_report_info__line_4616 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_info__report_enabled_checked_4618;
    __Vtask_uvm_report_info__report_enabled_checked_4618 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1780;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4619;
    ::VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::std::string __VlefCall_12__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_11;
    ::IData/*31:0*/ __VlefCall_10__get_report_action;
    ::IData/*31:0*/ __VlefCall_9__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_8__uvm_get_report_object;
    ::IData/*31:0*/ __VlefCall_7__get_n_bits;
    ::IData/*31:0*/ __VlefCall_6__get_n_bytes;
    ::IData/*31:0*/ __VlefCall_5__get_n_memlocs;
    ::std::string __VlefCall_4__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk720__DOT___local_report_object_;
    ::IData/*31:0*/ unnamedblk721__DOT__i;
    unnamedblk721__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk721__DOT__i__Vloopsize;
    unnamedblk721__DOT__i__Vloopsize = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pi664dc15a> unnamedblk721__DOT__unnamedblk722__DOT__cbs;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_vreg_field> unnamedblk721__DOT__unnamedblk722__DOT__f;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_vreg_field_cbs> unnamedblk721__DOT__unnamedblk722__DOT__unnamedblk723__DOT__cb;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_vreg_cbs> unnamedblk724__DOT__cb;
    ::IData/*31:0*/ unnamedblk725__DOT__i;
    ::IData/*31:0*/ unnamedblk725__DOT__unnamedblk726__DOT__s;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_vreg_cbs> unnamedblk727__DOT__cb;
    ::IData/*31:0*/ unnamedblk728__DOT__i;
    unnamedblk728__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk728__DOT__i__Vloopsize;
    unnamedblk728__DOT__i__Vloopsize = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pi664dc15a> unnamedblk728__DOT__unnamedblk729__DOT__cbs;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_vreg_field> unnamedblk728__DOT__unnamedblk729__DOT__f;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_vreg_field_cbs> unnamedblk728__DOT__unnamedblk729__DOT__unnamedblk730__DOT__cb;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk731__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pibf9bf78c> cbs;
    ::QData/*63:0*/ addr;
    ::QData/*63:0*/ tmp;
    ::QData/*63:0*/ msk;
    ::IData/*31:0*/ lsb;
    {
        status = 0U;
        value = 0ULL;
        cbs = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pibf9bf78c, vlProcess, vlSymsp, 
                     ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_vreg>{this});
        addr = 0ULL;
        tmp = 0ULL;
        msk = 0ULL;
        lsb = 0U;
        this->__PVT__read_in_progress = 1U;
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        if ((VlNull{} == this->__PVT__mem)) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1777);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1777;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4599);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_4599;
            __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 1047)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk720__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk720__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 1047)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_1__get_report_verbosity_level);
            __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
            if (__VlefLogAnd_3) {
                VL_NULL_CHECK(unnamedblk720__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 1047)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_2__get_report_action);
                __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_3))) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                __Vtask_uvm_report_error__report_enabled_checked_4606 = 1U;
                this->__Vtask_uvm_report_error__context_name_4605 = ""s;
                __Vtask_uvm_report_error__line_4604 = 0x00000417U;
                this->__Vtask_uvm_report_error__filename_4603 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__verbosity_4602 = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__message_4601
                              ,"Cannot read from unimplemented virtual register \"%s\".",1
                              , 'S',&(__VlefCall_4__get_full_name));
                this->__Vtask_uvm_report_error__id_4600 = "RegModel"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1778);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1778;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4607);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_4607;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_4600, this->__Vtask_uvm_report_error__message_4601, __Vtask_uvm_report_error__verbosity_4602, this->__Vtask_uvm_report_error__filename_4603, __Vtask_uvm_report_error__line_4604, this->__Vtask_uvm_report_error__context_name_4605, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_4606));
            }
            status = 1U;
            goto __Vlabel0;
        }
        if ((3U == path)) {
            VL_NULL_CHECK(this->__PVT__parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 1054)->__VnoInFunc_get_default_door(vlSymsp, path);
        }
        unnamedblk721__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk721__DOT__i, this->__PVT__fields.size())) {
            unnamedblk721__DOT__i__Vloopsize = this->__PVT__fields.size();
            unnamedblk721__DOT__unnamedblk722__DOT__cbs 
                = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pi664dc15a, vlProcess, vlSymsp, this->__PVT__fields.at(unnamedblk721__DOT__i));
            unnamedblk721__DOT__unnamedblk722__DOT__f 
                = this->__PVT__fields.at(unnamedblk721__DOT__i);
            VL_NULL_CHECK(unnamedblk721__DOT__unnamedblk722__DOT__f, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 1062)->__VnoInFunc_pre_read(vlSymsp, idx, path, map);
            VL_NULL_CHECK(unnamedblk721__DOT__unnamedblk722__DOT__cbs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 1063)->__VnoInFunc_first(vlSymsp, unnamedblk721__DOT__unnamedblk722__DOT__unnamedblk723__DOT__cb);
            while ((VlNull{} != unnamedblk721__DOT__unnamedblk722__DOT__unnamedblk723__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk721__DOT__unnamedblk722__DOT__unnamedblk723__DOT__cb, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 1065)->__PVT__fname 
                    = this->__PVT__fname;
                VL_NULL_CHECK(unnamedblk721__DOT__unnamedblk722__DOT__unnamedblk723__DOT__cb, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 1066)->__PVT__lineno 
                    = this->__PVT__lineno;
                VL_NULL_CHECK(unnamedblk721__DOT__unnamedblk722__DOT__unnamedblk723__DOT__cb, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 1067)->__VnoInFunc_pre_read(vlSymsp, unnamedblk721__DOT__unnamedblk722__DOT__f, idx, path, map);
                VL_NULL_CHECK(unnamedblk721__DOT__unnamedblk722__DOT__cbs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 1064)->__VnoInFunc_next(vlSymsp, unnamedblk721__DOT__unnamedblk722__DOT__unnamedblk723__DOT__cb);
            }
            if ((unnamedblk721__DOT__i__Vloopsize <= this->__PVT__fields.size())) {
                unnamedblk721__DOT__i = ((::IData)(1U) 
                                         + unnamedblk721__DOT__i);
            }
        }
        this->__VnoInFunc_pre_read(vlSymsp, idx, path, map);
        VL_NULL_CHECK(cbs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 1071)->__VnoInFunc_first(vlSymsp, unnamedblk724__DOT__cb);
        while ((VlNull{} != unnamedblk724__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk724__DOT__cb, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 1073)->__PVT__fname 
                = this->__PVT__fname;
            VL_NULL_CHECK(unnamedblk724__DOT__cb, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 1074)->__PVT__lineno 
                = this->__PVT__lineno;
            VL_NULL_CHECK(unnamedblk724__DOT__cb, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 1075)->__VnoInFunc_pre_read(vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_vreg>{this}, idx, path, map);
            VL_NULL_CHECK(cbs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 1072)->__VnoInFunc_next(vlSymsp, unnamedblk724__DOT__cb);
        }
        addr = (this->__PVT__offset + (idx * (::QData)((::IData)(this->__PVT__incr))));
        lsb = 0U;
        value = 0ULL;
        status = 0U;
        unnamedblk725__DOT__i = 0U;
        unnamedblk725__DOT__i = 0U;
        while (true) {
            this->__VnoInFunc_get_n_memlocs(vlSymsp, __VlefCall_5__get_n_memlocs);
            if (!((unnamedblk725__DOT__i < __VlefCall_5__get_n_memlocs))) break;
            unnamedblk725__DOT__unnamedblk726__DOT__s = 0U;
            co_await VL_NULL_CHECK(this->__PVT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 1086)->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__status_4608, 
                                                                                (addr 
                                                                                + (::QData)((::IData)(unnamedblk725__DOT__i))), __Vtask_read__value_4609, path, map, parent, 0xffffffffU, extension, fname, lineno);
            unnamedblk725__DOT__unnamedblk726__DOT__s 
                = __Vtask_read__status_4608;
            tmp = __Vtask_read__value_4609;
            if (((0U != unnamedblk725__DOT__unnamedblk726__DOT__s) 
                 & (2U != unnamedblk725__DOT__unnamedblk726__DOT__s))) {
                status = unnamedblk725__DOT__unnamedblk726__DOT__s;
            }
            value = (value | VL_SHIFTL_QQI(64,64,32, tmp, lsb));
            VL_NULL_CHECK(this->__PVT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 1093)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_6__get_n_bytes);
            lsb = (lsb + (__VlefCall_6__get_n_bytes 
                          << 3U));
            unnamedblk725__DOT__i = ((::IData)(1U) 
                                     + unnamedblk725__DOT__i);
        }
        VL_NULL_CHECK(cbs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 1096)->__VnoInFunc_first(vlSymsp, unnamedblk727__DOT__cb);
        while ((VlNull{} != unnamedblk727__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk727__DOT__cb, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 1098)->__PVT__fname 
                = this->__PVT__fname;
            VL_NULL_CHECK(unnamedblk727__DOT__cb, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 1099)->__PVT__lineno 
                = this->__PVT__lineno;
            VL_NULL_CHECK(unnamedblk727__DOT__cb, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 1100)->__VnoInFunc_post_read(vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_vreg>{this}, idx, value, path, map, status);
            VL_NULL_CHECK(cbs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 1097)->__VnoInFunc_next(vlSymsp, unnamedblk727__DOT__cb);
        }
        this->__VnoInFunc_post_read(vlSymsp, idx, value, path, map, status);
        unnamedblk728__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk728__DOT__i, this->__PVT__fields.size())) {
            unnamedblk728__DOT__i__Vloopsize = this->__PVT__fields.size();
            unnamedblk728__DOT__unnamedblk729__DOT__cbs 
                = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pi664dc15a, vlProcess, vlSymsp, this->__PVT__fields.at(unnamedblk728__DOT__i));
            unnamedblk728__DOT__unnamedblk729__DOT__f 
                = this->__PVT__fields.at(unnamedblk728__DOT__i);
            VL_NULL_CHECK(unnamedblk728__DOT__unnamedblk729__DOT__f, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 1107)->__VnoInFunc_get_lsb_pos_in_register(vlSymsp, __Vtask_get_lsb_pos_in_register__Vfuncout_4610);
            lsb = __Vtask_get_lsb_pos_in_register__Vfuncout_4610;
            VL_NULL_CHECK(unnamedblk728__DOT__unnamedblk729__DOT__f, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 1109)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_7__get_n_bits);
            msk = VL_SHIFTL_QQI(64,64,32, (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_7__get_n_bits) 
                                           - 1ULL), lsb);
            tmp = VL_SHIFTR_QQI(64,64,32, (value & msk), lsb);
            VL_NULL_CHECK(unnamedblk728__DOT__unnamedblk729__DOT__cbs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 1112)->__VnoInFunc_first(vlSymsp, unnamedblk728__DOT__unnamedblk729__DOT__unnamedblk730__DOT__cb);
            while ((VlNull{} != unnamedblk728__DOT__unnamedblk729__DOT__unnamedblk730__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk728__DOT__unnamedblk729__DOT__unnamedblk730__DOT__cb, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 1114)->__PVT__fname 
                    = this->__PVT__fname;
                VL_NULL_CHECK(unnamedblk728__DOT__unnamedblk729__DOT__unnamedblk730__DOT__cb, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 1115)->__PVT__lineno 
                    = this->__PVT__lineno;
                VL_NULL_CHECK(unnamedblk728__DOT__unnamedblk729__DOT__unnamedblk730__DOT__cb, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 1116)->__VnoInFunc_post_read(vlSymsp, unnamedblk728__DOT__unnamedblk729__DOT__f, idx, tmp, path, map, status);
                VL_NULL_CHECK(unnamedblk728__DOT__unnamedblk729__DOT__cbs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 1113)->__VnoInFunc_next(vlSymsp, unnamedblk728__DOT__unnamedblk729__DOT__unnamedblk730__DOT__cb);
            }
            VL_NULL_CHECK(unnamedblk728__DOT__unnamedblk729__DOT__f, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 1118)->__VnoInFunc_post_read(vlSymsp, idx, tmp, path, map, status);
            value = ((value & (~ msk)) | VL_SHIFTL_QQI(64,64,32, tmp, lsb));
            if ((unnamedblk728__DOT__i__Vloopsize <= this->__PVT__fields.size())) {
                unnamedblk728__DOT__i = ((::IData)(1U) 
                                         + unnamedblk728__DOT__i);
            }
        }
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1779);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1779;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4611);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
            = __Vtask_get_root__Vfuncout_4611;
        __VlefCall_8__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
        VL_NULL_CHECK(__VlefCall_8__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 1126)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk731__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk731__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 1126)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "RegModel"s, __VlefCall_9__get_report_verbosity_level);
        __VlefLogAnd_11 = VL_LTES_III(32, 0x000000c8U, __VlefCall_9__get_report_verbosity_level);
        if (__VlefLogAnd_11) {
            VL_NULL_CHECK(unnamedblk731__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 1126)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "RegModel"s, __VlefCall_10__get_report_action);
            __VlefLogAnd_11 = (0U != __VlefCall_10__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_11))) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_12__get_full_name);
            __Vtask_uvm_report_info__report_enabled_checked_4618 = 1U;
            this->__Vtask_uvm_report_info__context_name_4617 = ""s;
            __Vtask_uvm_report_info__line_4616 = 0x00000466U;
            this->__Vtask_uvm_report_info__filename_4615 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh"s;
            __Vtask_uvm_report_info__verbosity_4614 = 0x000000c8U;
            if ((0U == path)) {
                __Vtemp_1[0U] = 0x646f6f72U;
                __Vtemp_1[1U] = 0x726f6e74U;
                __Vtemp_1[2U] = 0x00000066U;
            } else {
                __Vtemp_1[0U] = 0x646f6f72U;
                __Vtemp_1[1U] = 0x6261636bU;
                __Vtemp_1[2U] = 0U;
            }
            VL_SFORMAT_NX(this->__Vtask_uvm_report_info__message_4613
                          ,"Read virtual register \"%s\"[%0d] via %s: 'h%h",4
                          , 'S',&(__VlefCall_12__get_full_name)
                          , '#',64,idx, '#',72,__Vtemp_1.data()
                          , '#',64,value);
            this->__Vtask_uvm_report_info__id_4612 = "RegModel"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1780);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1780;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 147)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4619);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__Vfuncout_4619;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 148)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__id_4612, this->__Vtask_uvm_report_info__message_4613, __Vtask_uvm_report_info__verbosity_4614, this->__Vtask_uvm_report_info__filename_4615, __Vtask_uvm_report_info__line_4616, this->__Vtask_uvm_report_info__context_name_4617, (::IData)(__Vtask_uvm_report_info__report_enabled_checked_4618));
        }
        this->__PVT__read_in_progress = 0U;
        this->__PVT__fname = ""s;
        this->__PVT__lineno = 0U;
        __Vlabel0: ;
    }
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_poke(Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ idx, ::IData/*31:0*/ &status, ::QData/*63:0*/ value, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> parent, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> extension, ::std::string fname, ::IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_poke\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1781;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4620;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_4623;
    __Vtask_uvm_report_error__verbosity_4623 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_4625;
    __Vtask_uvm_report_error__line_4625 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_4627;
    __Vtask_uvm_report_error__report_enabled_checked_4627 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1782;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4628;
    ::IData/*31:0*/ __Vtask_poke__status_4629;
    __Vtask_poke__status_4629 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1783;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4630;
    ::IData/*31:0*/ __Vtask_uvm_report_info__verbosity_4633;
    __Vtask_uvm_report_info__verbosity_4633 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__line_4635;
    __Vtask_uvm_report_info__line_4635 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_info__report_enabled_checked_4637;
    __Vtask_uvm_report_info__report_enabled_checked_4637 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1784;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4638;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_12__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_11;
    ::IData/*31:0*/ __VlefCall_10__get_report_action;
    ::IData/*31:0*/ __VlefCall_9__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_8__uvm_get_report_object;
    ::IData/*31:0*/ __VlefCall_7__get_n_bytes;
    ::IData/*31:0*/ __VlefCall_6__get_n_bytes;
    ::IData/*31:0*/ __VlefCall_5__get_n_memlocs;
    ::std::string __VlefCall_4__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk732__DOT___local_report_object_;
    ::IData/*31:0*/ unnamedblk733__DOT__i;
    ::IData/*31:0*/ unnamedblk733__DOT__unnamedblk734__DOT__s;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk735__DOT___local_report_object_;
    ::QData/*63:0*/ addr;
    ::QData/*63:0*/ tmp;
    ::QData/*63:0*/ msk;
    ::IData/*31:0*/ lsb;
    {
        status = 0U;
        addr = 0ULL;
        tmp = 0ULL;
        msk = 0ULL;
        lsb = 0U;
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        if ((VlNull{} == this->__PVT__mem)) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1781);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1781;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4620);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_4620;
            __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 1149)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk732__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk732__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 1149)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_1__get_report_verbosity_level);
            __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
            if (__VlefLogAnd_3) {
                VL_NULL_CHECK(unnamedblk732__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 1149)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_2__get_report_action);
                __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_3))) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                __Vtask_uvm_report_error__report_enabled_checked_4627 = 1U;
                this->__Vtask_uvm_report_error__context_name_4626 = ""s;
                __Vtask_uvm_report_error__line_4625 = 0x0000047dU;
                this->__Vtask_uvm_report_error__filename_4624 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__verbosity_4623 = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__message_4622
                              ,"Cannot poke in unimplemented virtual register \"%s\".",1
                              , 'S',&(__VlefCall_4__get_full_name));
                this->__Vtask_uvm_report_error__id_4621 = "RegModel"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1782);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1782;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4628);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_4628;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_4621, this->__Vtask_uvm_report_error__message_4622, __Vtask_uvm_report_error__verbosity_4623, this->__Vtask_uvm_report_error__filename_4624, __Vtask_uvm_report_error__line_4625, this->__Vtask_uvm_report_error__context_name_4626, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_4627));
            }
            status = 1U;
            goto __Vlabel0;
        }
        addr = (this->__PVT__offset + (idx * (::QData)((::IData)(this->__PVT__incr))));
        lsb = 0U;
        status = 0U;
        unnamedblk733__DOT__i = 0U;
        unnamedblk733__DOT__i = 0U;
        while (true) {
            this->__VnoInFunc_get_n_memlocs(vlSymsp, __VlefCall_5__get_n_memlocs);
            if (!((unnamedblk733__DOT__i < __VlefCall_5__get_n_memlocs))) break;
            unnamedblk733__DOT__unnamedblk734__DOT__s = 0U;
            VL_NULL_CHECK(this->__PVT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 1161)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_6__get_n_bytes);
            msk = VL_SHIFTL_QQI(64,64,32, (VL_SHIFTL_QQI(64,64,32, 1ULL, 
                                                         (__VlefCall_6__get_n_bytes 
                                                          << 3U)) 
                                           - 1ULL), lsb);
            tmp = VL_SHIFTR_QQI(64,64,32, (value & msk), lsb);
            VL_NULL_CHECK(this->__PVT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 1164)->__VnoInFunc_poke(vlProcess, vlSymsp, __Vtask_poke__status_4629, 
                                                                                (addr 
                                                                                + (::QData)((::IData)(unnamedblk733__DOT__i))), tmp, ""s, parent, extension, fname, lineno);
            status = __Vtask_poke__status_4629;
            if (((0U != unnamedblk733__DOT__unnamedblk734__DOT__s) 
                 & (2U != unnamedblk733__DOT__unnamedblk734__DOT__s))) {
                status = unnamedblk733__DOT__unnamedblk734__DOT__s;
            }
            VL_NULL_CHECK(this->__PVT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 1170)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_7__get_n_bytes);
            lsb = (lsb + (__VlefCall_7__get_n_bytes 
                          << 3U));
            unnamedblk733__DOT__i = ((::IData)(1U) 
                                     + unnamedblk733__DOT__i);
        }
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1783);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1783;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4630);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
            = __Vtask_get_root__Vfuncout_4630;
        __VlefCall_8__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
        VL_NULL_CHECK(__VlefCall_8__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 1174)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk735__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk735__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 1174)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "RegModel"s, __VlefCall_9__get_report_verbosity_level);
        __VlefLogAnd_11 = VL_LTES_III(32, 0x000000c8U, __VlefCall_9__get_report_verbosity_level);
        if (__VlefLogAnd_11) {
            VL_NULL_CHECK(unnamedblk735__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 1174)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "RegModel"s, __VlefCall_10__get_report_action);
            __VlefLogAnd_11 = (0U != __VlefCall_10__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_11))) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_12__get_full_name);
            __Vtask_uvm_report_info__report_enabled_checked_4637 = 1U;
            this->__Vtask_uvm_report_info__context_name_4636 = ""s;
            __Vtask_uvm_report_info__line_4635 = 0x00000496U;
            this->__Vtask_uvm_report_info__filename_4634 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh"s;
            __Vtask_uvm_report_info__verbosity_4633 = 0x000000c8U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_info__message_4632
                          ,"Poked virtual register \"%s\"[%0d] with: 'h%h",3
                          , 'S',&(__VlefCall_12__get_full_name)
                          , '#',64,idx, '#',64,value);
            this->__Vtask_uvm_report_info__id_4631 = "RegModel"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1784);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1784;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 147)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4638);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__Vfuncout_4638;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 148)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__id_4631, this->__Vtask_uvm_report_info__message_4632, __Vtask_uvm_report_info__verbosity_4633, this->__Vtask_uvm_report_info__filename_4634, __Vtask_uvm_report_info__line_4635, this->__Vtask_uvm_report_info__context_name_4636, (::IData)(__Vtask_uvm_report_info__report_enabled_checked_4637));
        }
        this->__PVT__fname = ""s;
        this->__PVT__lineno = 0U;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_peek(Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ idx, ::IData/*31:0*/ &status, ::QData/*63:0*/ &value, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> parent, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> extension, ::std::string fname, ::IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_peek\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1785;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4639;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_4642;
    __Vtask_uvm_report_error__verbosity_4642 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_4644;
    __Vtask_uvm_report_error__line_4644 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_4646;
    __Vtask_uvm_report_error__report_enabled_checked_4646 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1786;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4647;
    ::IData/*31:0*/ __Vtask_peek__status_4648;
    __Vtask_peek__status_4648 = 0;
    ::QData/*63:0*/ __Vtask_peek__value_4649;
    __Vtask_peek__value_4649 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1787;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4650;
    ::IData/*31:0*/ __Vtask_uvm_report_info__verbosity_4653;
    __Vtask_uvm_report_info__verbosity_4653 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__line_4655;
    __Vtask_uvm_report_info__line_4655 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_info__report_enabled_checked_4657;
    __Vtask_uvm_report_info__report_enabled_checked_4657 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1788;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4658;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_11__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_10;
    ::IData/*31:0*/ __VlefCall_9__get_report_action;
    ::IData/*31:0*/ __VlefCall_8__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_7__uvm_get_report_object;
    ::IData/*31:0*/ __VlefCall_6__get_n_bytes;
    ::IData/*31:0*/ __VlefCall_5__get_n_memlocs;
    ::std::string __VlefCall_4__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk736__DOT___local_report_object_;
    ::IData/*31:0*/ unnamedblk737__DOT__i;
    ::IData/*31:0*/ unnamedblk737__DOT__unnamedblk738__DOT__s;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk739__DOT___local_report_object_;
    ::QData/*63:0*/ addr;
    ::QData/*63:0*/ tmp;
    ::IData/*31:0*/ lsb;
    {
        status = 0U;
        value = 0ULL;
        addr = 0ULL;
        tmp = 0ULL;
        lsb = 0U;
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        if ((VlNull{} == this->__PVT__mem)) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1785);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1785;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4639);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_4639;
            __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 1196)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk736__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk736__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 1196)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_1__get_report_verbosity_level);
            __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
            if (__VlefLogAnd_3) {
                VL_NULL_CHECK(unnamedblk736__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 1196)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_2__get_report_action);
                __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_3))) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                __Vtask_uvm_report_error__report_enabled_checked_4646 = 1U;
                this->__Vtask_uvm_report_error__context_name_4645 = ""s;
                __Vtask_uvm_report_error__line_4644 = 0x000004acU;
                this->__Vtask_uvm_report_error__filename_4643 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__verbosity_4642 = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__message_4641
                              ,"Cannot peek in from unimplemented virtual register \"%s\".",1
                              , 'S',&(__VlefCall_4__get_full_name));
                this->__Vtask_uvm_report_error__id_4640 = "RegModel"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1786);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1786;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4647);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_4647;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_4640, this->__Vtask_uvm_report_error__message_4641, __Vtask_uvm_report_error__verbosity_4642, this->__Vtask_uvm_report_error__filename_4643, __Vtask_uvm_report_error__line_4644, this->__Vtask_uvm_report_error__context_name_4645, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_4646));
            }
            status = 1U;
            goto __Vlabel0;
        }
        addr = (this->__PVT__offset + (idx * (::QData)((::IData)(this->__PVT__incr))));
        lsb = 0U;
        value = 0ULL;
        status = 0U;
        unnamedblk737__DOT__i = 0U;
        unnamedblk737__DOT__i = 0U;
        while (true) {
            this->__VnoInFunc_get_n_memlocs(vlSymsp, __VlefCall_5__get_n_memlocs);
            if (!((unnamedblk737__DOT__i < __VlefCall_5__get_n_memlocs))) break;
            unnamedblk737__DOT__unnamedblk738__DOT__s = 0U;
            VL_NULL_CHECK(this->__PVT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 1209)->__VnoInFunc_peek(vlProcess, vlSymsp, __Vtask_peek__status_4648, 
                                                                                (addr 
                                                                                + (::QData)((::IData)(unnamedblk737__DOT__i))), __Vtask_peek__value_4649, ""s, parent, extension, fname, lineno);
            status = __Vtask_peek__status_4648;
            tmp = __Vtask_peek__value_4649;
            if (((0U != unnamedblk737__DOT__unnamedblk738__DOT__s) 
                 & (2U != unnamedblk737__DOT__unnamedblk738__DOT__s))) {
                status = unnamedblk737__DOT__unnamedblk738__DOT__s;
            }
            value = (value | VL_SHIFTL_QQI(64,64,32, tmp, lsb));
            VL_NULL_CHECK(this->__PVT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 1216)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_6__get_n_bytes);
            lsb = (lsb + (__VlefCall_6__get_n_bytes 
                          << 3U));
            unnamedblk737__DOT__i = ((::IData)(1U) 
                                     + unnamedblk737__DOT__i);
        }
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1787);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1787;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4650);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
            = __Vtask_get_root__Vfuncout_4650;
        __VlefCall_7__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
        VL_NULL_CHECK(__VlefCall_7__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 1220)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk739__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk739__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 1220)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "RegModel"s, __VlefCall_8__get_report_verbosity_level);
        __VlefLogAnd_10 = VL_LTES_III(32, 0x000000c8U, __VlefCall_8__get_report_verbosity_level);
        if (__VlefLogAnd_10) {
            VL_NULL_CHECK(unnamedblk739__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 1220)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "RegModel"s, __VlefCall_9__get_report_action);
            __VlefLogAnd_10 = (0U != __VlefCall_9__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_10))) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_11__get_full_name);
            __Vtask_uvm_report_info__report_enabled_checked_4657 = 1U;
            this->__Vtask_uvm_report_info__context_name_4656 = ""s;
            __Vtask_uvm_report_info__line_4655 = 0x000004c4U;
            this->__Vtask_uvm_report_info__filename_4654 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh"s;
            __Vtask_uvm_report_info__verbosity_4653 = 0x000000c8U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_info__message_4652
                          ,"Peeked virtual register \"%s\"[%0d]: 'h%h",3
                          , 'S',&(__VlefCall_11__get_full_name)
                          , '#',64,idx, '#',64,value);
            this->__Vtask_uvm_report_info__id_4651 = "RegModel"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1788);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1788;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 147)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4658);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__Vfuncout_4658;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 148)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__id_4651, this->__Vtask_uvm_report_info__message_4652, __Vtask_uvm_report_info__verbosity_4653, this->__Vtask_uvm_report_info__filename_4654, __Vtask_uvm_report_info__line_4655, this->__Vtask_uvm_report_info__context_name_4656, (::IData)(__Vtask_uvm_report_info__report_enabled_checked_4657));
        }
        this->__PVT__fname = ""s;
        this->__PVT__lineno = 0U;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_do_print\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_1__convert2string;
    ::std::string __VlefCall_0__get_type_name;
    Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
    VL_NULL_CHECK(this->__PVT__parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 1230)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_0__get_type_name);
    this->__VnoInFunc_convert2string(vlProcess, vlSymsp, __VlefCall_1__convert2string);
    VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 1230)->__VnoInFunc_print_generic(vlProcess, vlSymsp, "initiator"s, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_type_name), 0xffffffffU, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__convert2string), 0x2eU);
}

void Vtb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_convert2string\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_4__convert2string;
    ::QData/*63:0*/ __VlefCall_3__get_address;
    ::std::string __VlefCall_2__get_full_name;
    ::std::string __VlefCall_1__get_full_name;
    ::std::string __VlefCall_0__get_full_name;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map>> unnamedblk740__DOT__maps;
    ::IData/*31:0*/ unnamedblk740__DOT__unnamedblk741__DOT__i;
    unnamedblk740__DOT__unnamedblk741__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk740__DOT__unnamedblk741__DOT__i__Vloopsize;
    unnamedblk740__DOT__unnamedblk741__DOT__i__Vloopsize = 0;
    ::QData/*63:0*/ unnamedblk740__DOT__unnamedblk741__DOT__unnamedblk742__DOT__addr0;
    ::IData/*31:0*/ unnamedblk743__DOT__i;
    unnamedblk743__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk743__DOT__i__Vloopsize;
    unnamedblk743__DOT__i__Vloopsize = 0;
    convert2string__Vfuncrtn = ""s;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    VL_SFORMAT_NX(convert2string__Vfuncrtn,"Virtual register %s -- ",1
                  , 'S',&(__VlefCall_0__get_full_name));
    if ((0ULL == this->__PVT__size)) {
        VL_SFORMAT_NX(convert2string__Vfuncrtn,"%sunimplemented",1
                      , 'S',&(convert2string__Vfuncrtn));
    } else {
        unnamedblk740__DOT__maps.clear();
        VL_NULL_CHECK(this->__PVT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 1247)->__VnoInFunc_get_maps(vlSymsp, unnamedblk740__DOT__maps);
        VL_NULL_CHECK(this->__PVT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 1250)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
        VL_SFORMAT_NX(convert2string__Vfuncrtn,"%s[%0d] in %0s['h%0h+'h%0h]\n",5
                      , 'S',&(convert2string__Vfuncrtn)
                      , '#',64,this->__PVT__size, 'S',&(__VlefCall_1__get_full_name)
                      , '#',64,this->__PVT__offset, '#',32,this->__PVT__incr);
        unnamedblk740__DOT__unnamedblk741__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk740__DOT__unnamedblk741__DOT__i, unnamedblk740__DOT__maps.size())) {
            unnamedblk740__DOT__unnamedblk741__DOT__i__Vloopsize 
                = unnamedblk740__DOT__maps.size();
            this->__VnoInFunc_get_address(vlProcess, vlSymsp, 0ULL, unnamedblk740__DOT__maps.at(unnamedblk740__DOT__unnamedblk741__DOT__i), unnamedblk740__DOT__unnamedblk741__DOT__unnamedblk742__DOT__addr0);
            VL_NULL_CHECK(unnamedblk740__DOT__maps.at(unnamedblk740__DOT__unnamedblk741__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 1255)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            this->__VnoInFunc_get_address(vlProcess, vlSymsp, 1ULL, unnamedblk740__DOT__maps.at(unnamedblk740__DOT__unnamedblk741__DOT__i), __VlefCall_3__get_address);
            VL_SFORMAT_NX(convert2string__Vfuncrtn,"  Address in map '%s' -- @'h%0h+%0h",3
                          , 'S',&(__VlefCall_2__get_full_name)
                          , '#',64,unnamedblk740__DOT__unnamedblk741__DOT__unnamedblk742__DOT__addr0
                          , '#',64,(__VlefCall_3__get_address 
                                    - unnamedblk740__DOT__unnamedblk741__DOT__unnamedblk742__DOT__addr0));
            if ((unnamedblk740__DOT__unnamedblk741__DOT__i__Vloopsize 
                 <= unnamedblk740__DOT__maps.size())) {
                unnamedblk740__DOT__unnamedblk741__DOT__i 
                    = ((::IData)(1U) + unnamedblk740__DOT__unnamedblk741__DOT__i);
            }
        }
    }
    unnamedblk743__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk743__DOT__i, this->__PVT__fields.size())) {
        unnamedblk743__DOT__i__Vloopsize = this->__PVT__fields.size();
        VL_NULL_CHECK(this->__PVT__fields.at(unnamedblk743__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg.svh", 1260)->__VnoInFunc_convert2string(vlProcess, vlSymsp, __VlefCall_4__convert2string);
        VL_SFORMAT_NX(convert2string__Vfuncrtn,"%s\n%s",2
                      , 'S',&(convert2string__Vfuncrtn)
                      , 'S',&(__VlefCall_4__convert2string));
        if ((unnamedblk743__DOT__i__Vloopsize <= this->__PVT__fields.size())) {
            unnamedblk743__DOT__i = ((::IData)(1U) 
                                     + unnamedblk743__DOT__i);
        }
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_clone(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_clone\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    clone__Vfuncrtn = VlNull{};
}

void Vtb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_do_copy\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_do_compare(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> rhs, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_comparer> comparer, ::CData/*0:0*/ &do_compare__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_do_compare\n"); );
    // Body
    do_compare__Vfuncrtn = 0U;
}

void Vtb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_do_pack(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_do_pack\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_do_unpack(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_do_unpack\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_vreg::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__locked = 0;
    __PVT__n_bits = 0;
    __PVT__n_used_bits = 0;
    __PVT__offset = 0;
    __PVT__incr = 0;
    __PVT__size = 0;
    __PVT__is_static = 0;
    __PVT__lineno = 0;
    __PVT__read_in_progress = 0;
    __PVT__write_in_progress = 0;
}

Vtb_top_uvm_pkg__03a__03auvm_vreg::~Vtb_top_uvm_pkg__03a__03auvm_vreg() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_vreg::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_vreg::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg::to_string_middle\n"); );
    // Body
    std::string out;
    out += "locked:" + VL_TO_STRING(__PVT__locked);
    out += ", parent:" + VL_TO_STRING(__PVT__parent);
    out += ", n_bits:" + VL_TO_STRING(__PVT__n_bits);
    out += ", n_used_bits:" + VL_TO_STRING(__PVT__n_used_bits);
    out += ", fields:" + VL_TO_STRING(__PVT__fields);
    out += ", mem:" + VL_TO_STRING(__PVT__mem);
    out += ", offset:" + VL_TO_STRING(__PVT__offset);
    out += ", incr:" + VL_TO_STRING(__PVT__incr);
    out += ", size:" + VL_TO_STRING(__PVT__size);
    out += ", is_static:" + VL_TO_STRING(__PVT__is_static);
    out += ", region:" + VL_TO_STRING(__PVT__region);
    out += ", atomic:" + VL_TO_STRING(__PVT__atomic);
    out += ", fname:" + VL_TO_STRING(__PVT__fname);
    out += ", lineno:" + VL_TO_STRING(__PVT__lineno);
    out += ", read_in_progress:" + VL_TO_STRING(__PVT__read_in_progress);
    out += ", write_in_progress:" + VL_TO_STRING(__PVT__write_in_progress);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
