// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi780e90bb> __Vfunc_get__Vfuncout_1509;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pi780e90bb__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1509);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_1509;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_tlm_adapter> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_reg_tlm_adapter, vlProcess, vlSymsp, "uvm_reg_tlm_adapter"s);
    } else {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_reg_tlm_adapter, vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_tlm_adapter"s;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_tlm_adapter::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_uvm_pkg__03a__03auvm_reg_adapter::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_tlm_adapter::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc_reg2bus(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, const Vtb_top_uvm_reg_bus_op__struct__0 &rw, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> &reg2bus__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc_reg2bus\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCall_1__get_streaming_width;
    ::std::string __VlefCall_0__get_full_name;
    ::IData/*31:0*/ unnamedblk1__DOT__i;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tlm_generic_payload> gp;
    ::IData/*31:0*/ nbytes;
    ::QData/*63:0*/ addr;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pi8e0ce0e3__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "tlm_gp"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), gp);
    nbytes = ((::IData)(1U) + VL_DIVS_III(32, (rw.__PVT__n_bits 
                                               - (::IData)(1U)), (::IData)(8U)));
    addr = rw.__PVT__addr;
    if ((1U == rw.__PVT__kind)) {
        VL_NULL_CHECK(gp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_adapter.svh", 206)->__VnoInFunc_set_command(vlSymsp, 1U);
    } else {
        VL_NULL_CHECK(gp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_adapter.svh", 211)->__VnoInFunc_set_command(vlSymsp, 0U);
    }
    VL_NULL_CHECK(gp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_adapter.svh", 215)->__VnoInFunc_set_address(vlSymsp, addr);
    VL_NULL_CHECK(gp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_adapter.svh", 217)->__PVT__m_byte_enable.renew(nbytes);
    VL_NULL_CHECK(gp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_adapter.svh", 218)->__PVT__m_byte_enable_length 
        = nbytes;
    VL_NULL_CHECK(gp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_adapter.svh", 220)->__VnoInFunc_set_streaming_width(vlSymsp, nbytes);
    VL_NULL_CHECK(gp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_adapter.svh", 222)->__VnoInFunc_get_streaming_width(vlSymsp, __VlefCall_1__get_streaming_width);
    VL_NULL_CHECK(gp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_adapter.svh", 222)->__PVT__m_data.renew(__VlefCall_1__get_streaming_width);
    VL_NULL_CHECK(gp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_adapter.svh", 223)->__PVT__m_length 
        = nbytes;
    unnamedblk1__DOT__i = 0U;
    unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk1__DOT__i, nbytes)) {
        VL_NULL_CHECK(gp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_adapter.svh", 227)->__PVT__m_data.atWrite(unnamedblk1__DOT__i) 
            = (0x000000ffU & (::IData)((rw.__PVT__data 
                                        >> (0x0000003fU 
                                            & VL_MULS_III(32, (::IData)(8U), unnamedblk1__DOT__i)))));
        VL_NULL_CHECK(gp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_adapter.svh", 228)->__PVT__m_byte_enable.atWrite(unnamedblk1__DOT__i) 
            = (VL_GTS_III(32, unnamedblk1__DOT__i, nbytes)
                ? 0U : ((1U & (rw.__PVT__byte_en >> 
                               (7U & unnamedblk1__DOT__i)))
                         ? 0xffU : 0U));
        unnamedblk1__DOT__i = ((::IData)(1U) + unnamedblk1__DOT__i);
    }
    reg2bus__Vfuncrtn = gp;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc_bus2reg(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> bus_item, Vtb_top_uvm_reg_bus_op__struct__0 &rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc_bus2reg\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1510;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3576;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1511;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3577;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_3580;
    __Vtask_uvm_report_error__verbosity_3580 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_3582;
    __Vtask_uvm_report_error__line_3582 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3584;
    __Vtask_uvm_report_error__report_enabled_checked_3584 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1512;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3585;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefCall_11__is_response_ok;
    ::QData/*63:0*/ __VlefCall_10__get_address;
    ::IData/*31:0*/ __VlefCall_9__get_command;
    ::CData/*0:0*/ __VlefLogAnd_8;
    ::IData/*31:0*/ __VlefCall_7__get_report_action;
    ::IData/*31:0*/ __VlefCall_6__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_5__uvm_get_report_object;
    ::IData/*31:0*/ __VlefExpr_4;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk2__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk3__DOT___local_report_object_;
    ::IData/*31:0*/ unnamedblk4__DOT__i;
    unnamedblk4__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk4__DOT__i__Vloopsize;
    unnamedblk4__DOT__i__Vloopsize = 0;
    ::IData/*31:0*/ unnamedblk5__DOT__i;
    unnamedblk5__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk5__DOT__i__Vloopsize;
    unnamedblk5__DOT__i__Vloopsize = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tlm_generic_payload> gp;
    {
        if ((VlNull{} == bus_item)) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1510);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1510;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3576);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_3576;
            __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_adapter.svh", 246)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk2__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk2__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_adapter.svh", 246)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 3U, "REG/NULL_ITEM"s, __VlefCall_1__get_report_verbosity_level);
            __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
            if (__VlefLogAnd_3) {
                VL_NULL_CHECK(unnamedblk2__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_adapter.svh", 246)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 3U, "REG/NULL_ITEM"s, __VlefCall_2__get_report_action);
                __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_3))) {
                vlSymsp->vlInst.TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "REG/NULL_ITEM"s, "bus2reg: bus_item argument is null"s, 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_adapter.svh"s, 0x000000f6U, ""s, 1U);
            }
        }
        __VlefExpr_4 = VL_CAST_DYNAMIC(bus_item, gp);
        if ((1U & (~ (0U != __VlefExpr_4)))) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1511);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1511;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3577);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_3577;
            __VlefCall_5__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_5__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_adapter.svh", 251)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk3__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk3__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_adapter.svh", 251)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "WRONG_TYPE"s, __VlefCall_6__get_report_verbosity_level);
            __VlefLogAnd_8 = VL_LTES_III(32, 0U, __VlefCall_6__get_report_verbosity_level);
            if (__VlefLogAnd_8) {
                VL_NULL_CHECK(unnamedblk3__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_adapter.svh", 251)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "WRONG_TYPE"s, __VlefCall_7__get_report_action);
                __VlefLogAnd_8 = (0U != __VlefCall_7__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_8))) {
                __Vtask_uvm_report_error__report_enabled_checked_3584 = 1U;
                this->__Vtask_uvm_report_error__context_name_3583 = ""s;
                __Vtask_uvm_report_error__line_3582 = 0x000000fbU;
                this->__Vtask_uvm_report_error__filename_3581 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_adapter.svh"s;
                __Vtask_uvm_report_error__verbosity_3580 = 0U;
                this->__Vtask_uvm_report_error__message_3579 = "Provided bus_item is not of type uvm_tlm_gp"s;
                this->__Vtask_uvm_report_error__id_3578 = "WRONG_TYPE"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1512);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1512;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3585);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_3585;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_3578, this->__Vtask_uvm_report_error__message_3579, __Vtask_uvm_report_error__verbosity_3580, this->__Vtask_uvm_report_error__filename_3581, __Vtask_uvm_report_error__line_3582, this->__Vtask_uvm_report_error__context_name_3583, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3584));
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(gp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_adapter.svh", 255)->__VnoInFunc_get_command(vlSymsp, __VlefCall_9__get_command);
        rw.__PVT__kind = ((1U == __VlefCall_9__get_command)
                           ? 1U : 0U);
        VL_NULL_CHECK(gp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_adapter.svh", 266)->__VnoInFunc_get_address(vlSymsp, __VlefCall_10__get_address);
        rw.__PVT__addr = __VlefCall_10__get_address;
        rw.__PVT__byte_en = 0U;
        unnamedblk4__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk4__DOT__i, VL_NULL_CHECK(gp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_adapter.svh", 269)
                          ->__PVT__m_byte_enable.size())) {
            unnamedblk4__DOT__i__Vloopsize = VL_NULL_CHECK(gp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_adapter.svh", 269)
                ->__PVT__m_byte_enable.size();
            rw.__PVT__byte_en = (((~ ((::IData)(1U) 
                                      << (7U & unnamedblk4__DOT__i))) 
                                  & rw.__PVT__byte_en) 
                                 | (0x00ffU & ((1U 
                                                & VL_NULL_CHECK(gp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_adapter.svh", 271)
                                                ->__PVT__m_byte_enable.at(unnamedblk4__DOT__i)) 
                                               << (7U 
                                                   & unnamedblk4__DOT__i))));
            if ((unnamedblk4__DOT__i__Vloopsize <= VL_NULL_CHECK(gp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_adapter.svh", 269)
                 ->__PVT__m_byte_enable.size())) {
                unnamedblk4__DOT__i = ((::IData)(1U) 
                                       + unnamedblk4__DOT__i);
            }
        }
        rw.__PVT__data = 0ULL;
        unnamedblk5__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk5__DOT__i, VL_NULL_CHECK(gp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_adapter.svh", 276)
                          ->__PVT__m_data.size())) {
            unnamedblk5__DOT__i__Vloopsize = VL_NULL_CHECK(gp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_adapter.svh", 276)
                ->__PVT__m_data.size();
            rw.__PVT__data = (((~ (0x00000000000000ffULL 
                                   << (0x0000003fU 
                                       & VL_MULS_III(32, (::IData)(8U), unnamedblk5__DOT__i)))) 
                               & rw.__PVT__data) | 
                              ((::QData)((::IData)(VL_NULL_CHECK(gp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_adapter.svh", 278)
                                                   ->__PVT__m_data.at(unnamedblk5__DOT__i))) 
                               << (0x0000003fU & VL_MULS_III(32, (::IData)(8U), unnamedblk5__DOT__i))));
            if ((unnamedblk5__DOT__i__Vloopsize <= VL_NULL_CHECK(gp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_adapter.svh", 276)
                 ->__PVT__m_data.size())) {
                unnamedblk5__DOT__i = ((::IData)(1U) 
                                       + unnamedblk5__DOT__i);
            }
        }
        VL_NULL_CHECK(gp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_adapter.svh", 282)->__VnoInFunc_is_response_ok(vlSymsp, __VlefCall_11__is_response_ok);
        rw.__PVT__status = ((::IData)(__VlefCall_11__is_response_ok)
                             ? 0U : 1U);
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_tlm_adapter::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_tlm_adapter::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_top_uvm_pkg__03a__03auvm_reg_tlm_adapter::~Vtb_top_uvm_pkg__03a__03auvm_reg_tlm_adapter() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_tlm_adapter::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_reg_tlm_adapter::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_tlm_adapter::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_reg_tlm_adapter::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_tlm_adapter::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vtb_top_uvm_pkg__03a__03auvm_reg_adapter::to_string_middle();
    return (out);
}
