// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_data::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::IData/*31:0*/ n_bits, ::IData/*31:0*/ has_cover) {
    Vtb_top_uvm_pkg__03a__03auvm_reg::init(vlProcess, vlSymsp, name, n_bits, has_cover);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_data::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_build(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_build\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_add_map(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_add_map\n"); );
    // Body
    Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_add_map(vlSymsp, map);
    this->__VnoInFunc_add_frontdoors(vlSymsp, map);
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_add_frontdoors(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_add_frontdoors\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1717;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4337;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_4340;
    __Vtask_uvm_report_error__verbosity_4340 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_4342;
    __Vtask_uvm_report_error__line_4342 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_4344;
    __Vtask_uvm_report_error__report_enabled_checked_4344 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1718;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4345;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefCall_7__is_in_map;
    ::std::string __VlefCall_6__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_5;
    ::IData/*31:0*/ __VlefCall_4__get_report_action;
    ::std::string __VlefCall_3__get_full_name;
    ::IData/*31:0*/ __VlefCall_2__get_report_verbosity_level;
    ::std::string __VlefCall_1__get_full_name;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::IData/*31:0*/ unnamedblk2__DOT__i;
    unnamedblk2__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk2__DOT__i__Vloopsize;
    unnamedblk2__DOT__i__Vloopsize = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq> unnamedblk2__DOT__unnamedblk3__DOT__fd;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___local_report_object_;
    unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk2__DOT__i, this->__PVT__m_tbl.size())) {
        unnamedblk2__DOT__i__Vloopsize = this->__PVT__m_tbl.size();
        {
            if ((VlNull{} == this->__PVT__m_tbl.at(unnamedblk2__DOT__i))) {
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1717);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1717;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4337);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_4337;
                __VlefCall_0__uvm_get_report_object 
                    = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
                VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 98)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___local_report_object_);
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                VL_NULL_CHECK(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 98)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__get_full_name), __VlefCall_2__get_report_verbosity_level);
                __VlefLogAnd_5 = VL_LTES_III(32, 0U, __VlefCall_2__get_report_verbosity_level);
                if (__VlefLogAnd_5) {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                    VL_NULL_CHECK(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 98)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_3__get_full_name), __VlefCall_4__get_report_action);
                    __VlefLogAnd_5 = (0U != __VlefCall_4__get_report_action);
                }
                if (VL_UNLIKELY((__VlefLogAnd_5))) {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
                    __Vtask_uvm_report_error__report_enabled_checked_4344 = 1U;
                    this->__Vtask_uvm_report_error__context_name_4343 = ""s;
                    __Vtask_uvm_report_error__line_4342 = 0x00000062U;
                    this->__Vtask_uvm_report_error__filename_4341 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh"s;
                    __Vtask_uvm_report_error__verbosity_4340 = 0U;
                    VL_SFORMAT_NX(this->__Vtask_uvm_report_error__message_4339
                                  ,"Indirect register #%0d is NULL",1
                                  , '~',32,unnamedblk2__DOT__i);
                    this->__Vtask_uvm_report_error__id_4338 
                        = VL_CVT_PACK_STR_NN(__VlefCall_6__get_full_name);
                    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1718);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__Vfuncout_1718;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4345);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__Vfuncout_4345;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_4338, this->__Vtask_uvm_report_error__message_4339, __Vtask_uvm_report_error__verbosity_4340, this->__Vtask_uvm_report_error__filename_4341, __Vtask_uvm_report_error__line_4342, this->__Vtask_uvm_report_error__context_name_4343, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_4344));
                }
                goto __Vlabel0;
            }
            unnamedblk2__DOT__unnamedblk3__DOT__fd 
                = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq, vlProcess, vlSymsp, this->__PVT__m_idx, unnamedblk2__DOT__i, 
                         ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_data>{this});
            VL_NULL_CHECK(this->__PVT__m_tbl.at(unnamedblk2__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 102)->__VnoInFunc_is_in_map(vlSymsp, map, __VlefCall_7__is_in_map);
            if (__VlefCall_7__is_in_map) {
                VL_NULL_CHECK(this->__PVT__m_tbl.at(unnamedblk2__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 104)->__VnoInFunc_set_frontdoor(vlSymsp, unnamedblk2__DOT__unnamedblk3__DOT__fd, map, ""s, 0U);
            } else {
                VL_NULL_CHECK(map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 109)->__VnoInFunc_add_reg(vlSymsp, this->__PVT__m_tbl.at(unnamedblk2__DOT__i), 0xffffffffffffffffULL, "RW"s, 1U, unnamedblk2__DOT__unnamedblk3__DOT__fd);
            }
            __Vlabel0: ;
        }
        if ((unnamedblk2__DOT__i__Vloopsize <= this->__PVT__m_tbl.size())) {
            unnamedblk2__DOT__i = ((::IData)(1U) + unnamedblk2__DOT__i);
        }
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_do_predict(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw, ::IData/*31:0*/ kind, ::CData/*7:0*/ be) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_do_predict\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1719;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4346;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_4349;
    __Vtask_uvm_report_error__verbosity_4349 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_4351;
    __Vtask_uvm_report_error__line_4351 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_4353;
    __Vtask_uvm_report_error__report_enabled_checked_4353 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1720;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4354;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::QData/*63:0*/ __VlefCall_10__get;
    ::QData/*63:0*/ __VlefCall_9__get;
    ::std::string __VlefCall_8__get_full_name;
    ::std::string __VlefCall_7__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_6;
    ::IData/*31:0*/ __VlefCall_5__get_report_action;
    ::std::string __VlefCall_4__get_full_name;
    ::IData/*31:0*/ __VlefCall_3__get_report_verbosity_level;
    ::std::string __VlefCall_2__get_full_name;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_1__uvm_get_report_object;
    ::QData/*63:0*/ __VlefCall_0__get;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk5__DOT___local_report_object_;
    ::IData/*31:0*/ unnamedblk6__DOT__idx;
    {
        VL_NULL_CHECK(this->__PVT__m_idx, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 118)->__VnoInFunc_get(vlProcess, vlSymsp, ""s, 0U, __VlefCall_0__get);
        if ((__VlefCall_0__get >= (::QData)((::IData)(this->__PVT__m_tbl.size())))) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1719);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1719;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4346);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_4346;
            __VlefCall_1__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_1__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 119)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk5__DOT___local_report_object_);
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            VL_NULL_CHECK(unnamedblk5__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 119)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_2__get_full_name), __VlefCall_3__get_report_verbosity_level);
            __VlefLogAnd_6 = VL_LTES_III(32, 0U, __VlefCall_3__get_report_verbosity_level);
            if (__VlefLogAnd_6) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                VL_NULL_CHECK(unnamedblk5__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 119)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_4__get_full_name), __VlefCall_5__get_report_action);
                __VlefLogAnd_6 = (0U != __VlefCall_5__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_6))) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_7__get_full_name);
                VL_NULL_CHECK(this->__PVT__m_idx, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 119)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_8__get_full_name);
                VL_NULL_CHECK(this->__PVT__m_idx, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 119)->__VnoInFunc_get(vlProcess, vlSymsp, ""s, 0U, __VlefCall_9__get);
                __Vtask_uvm_report_error__report_enabled_checked_4353 = 1U;
                this->__Vtask_uvm_report_error__context_name_4352 = ""s;
                __Vtask_uvm_report_error__line_4351 = 0x00000077U;
                this->__Vtask_uvm_report_error__filename_4350 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh"s;
                __Vtask_uvm_report_error__verbosity_4349 = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__message_4348
                              ,"Address register %s has a value (%0d) greater than the maximum indirect register array size (%0d)",3
                              , 'S',&(__VlefCall_8__get_full_name)
                              , '#',64,__VlefCall_9__get
                              , '~',32,this->__PVT__m_tbl.size());
                this->__Vtask_uvm_report_error__id_4347 
                    = VL_CVT_PACK_STR_NN(__VlefCall_7__get_full_name);
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1720);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1720;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4354);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_4354;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_4347, this->__Vtask_uvm_report_error__message_4348, __Vtask_uvm_report_error__verbosity_4349, this->__Vtask_uvm_report_error__filename_4350, __Vtask_uvm_report_error__line_4351, this->__Vtask_uvm_report_error__context_name_4352, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_4353));
            }
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 120)->__VnoInFunc_set_status(vlSymsp, 1U);
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__m_idx, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 126)->__VnoInFunc_get(vlProcess, vlSymsp, ""s, 0U, __VlefCall_10__get);
        unnamedblk6__DOT__idx = (::IData)(__VlefCall_10__get);
        VL_NULL_CHECK(this->__PVT__m_tbl.at(unnamedblk6__DOT__idx), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 127)->__VnoInFunc_do_predict(vlProcess, vlSymsp, rw, kind, (::IData)(be));
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_get_local_map(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> &get_local_map__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_get_local_map\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_NULL_CHECK(this->__PVT__m_idx, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 133)->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, get_local_map__Vfuncrtn);
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_add_field(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_field> field) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_add_field\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1721;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4355;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_4358;
    __Vtask_uvm_report_error__verbosity_4358 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_4360;
    __Vtask_uvm_report_error__line_4360 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_4362;
    __Vtask_uvm_report_error__report_enabled_checked_4362 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1722;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4363;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_6__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_5;
    ::IData/*31:0*/ __VlefCall_4__get_report_action;
    ::std::string __VlefCall_3__get_full_name;
    ::IData/*31:0*/ __VlefCall_2__get_report_verbosity_level;
    ::std::string __VlefCall_1__get_full_name;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk7__DOT___local_report_object_;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1721);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1721;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4355);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
        = __Vtask_get_root__Vfuncout_4355;
    __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
    VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 140)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk7__DOT___local_report_object_);
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
    VL_NULL_CHECK(unnamedblk7__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 140)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__get_full_name), __VlefCall_2__get_report_verbosity_level);
    __VlefLogAnd_5 = VL_LTES_III(32, 0U, __VlefCall_2__get_report_verbosity_level);
    if (__VlefLogAnd_5) {
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
        VL_NULL_CHECK(unnamedblk7__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 140)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_3__get_full_name), __VlefCall_4__get_report_action);
        __VlefLogAnd_5 = (0U != __VlefCall_4__get_report_action);
    }
    if (VL_UNLIKELY((__VlefLogAnd_5))) {
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
        __Vtask_uvm_report_error__report_enabled_checked_4362 = 1U;
        this->__Vtask_uvm_report_error__context_name_4361 = ""s;
        __Vtask_uvm_report_error__line_4360 = 0x0000008cU;
        this->__Vtask_uvm_report_error__filename_4359 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh"s;
        __Vtask_uvm_report_error__verbosity_4358 = 0U;
        this->__Vtask_uvm_report_error__message_4357 = "Cannot add field to an indirect data access register"s;
        this->__Vtask_uvm_report_error__id_4356 = VL_CVT_PACK_STR_NN(__VlefCall_6__get_full_name);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1722);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1722;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4363);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
            = __Vtask_get_root__Vfuncout_4363;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_4356, this->__Vtask_uvm_report_error__message_4357, __Vtask_uvm_report_error__verbosity_4358, this->__Vtask_uvm_report_error__filename_4359, __Vtask_uvm_report_error__line_4360, this->__Vtask_uvm_report_error__context_name_4361, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_4362));
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_set(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ value, ::std::string fname, ::IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_set\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1723;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4364;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_4367;
    __Vtask_uvm_report_error__verbosity_4367 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_4369;
    __Vtask_uvm_report_error__line_4369 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_4371;
    __Vtask_uvm_report_error__report_enabled_checked_4371 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1724;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4372;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_6__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_5;
    ::IData/*31:0*/ __VlefCall_4__get_report_action;
    ::std::string __VlefCall_3__get_full_name;
    ::IData/*31:0*/ __VlefCall_2__get_report_verbosity_level;
    ::std::string __VlefCall_1__get_full_name;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk8__DOT___local_report_object_;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1723);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1723;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4364);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
        = __Vtask_get_root__Vfuncout_4364;
    __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
    VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 146)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk8__DOT___local_report_object_);
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
    VL_NULL_CHECK(unnamedblk8__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 146)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__get_full_name), __VlefCall_2__get_report_verbosity_level);
    __VlefLogAnd_5 = VL_LTES_III(32, 0U, __VlefCall_2__get_report_verbosity_level);
    if (__VlefLogAnd_5) {
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
        VL_NULL_CHECK(unnamedblk8__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 146)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_3__get_full_name), __VlefCall_4__get_report_action);
        __VlefLogAnd_5 = (0U != __VlefCall_4__get_report_action);
    }
    if (VL_UNLIKELY((__VlefLogAnd_5))) {
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
        __Vtask_uvm_report_error__report_enabled_checked_4371 = 1U;
        this->__Vtask_uvm_report_error__context_name_4370 = ""s;
        __Vtask_uvm_report_error__line_4369 = 0x00000092U;
        this->__Vtask_uvm_report_error__filename_4368 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh"s;
        __Vtask_uvm_report_error__verbosity_4367 = 0U;
        this->__Vtask_uvm_report_error__message_4366 = "Cannot set() an indirect data access register"s;
        this->__Vtask_uvm_report_error__id_4365 = VL_CVT_PACK_STR_NN(__VlefCall_6__get_full_name);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1724);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1724;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4372);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
            = __Vtask_get_root__Vfuncout_4372;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_4365, this->__Vtask_uvm_report_error__message_4366, __Vtask_uvm_report_error__verbosity_4367, this->__Vtask_uvm_report_error__filename_4368, __Vtask_uvm_report_error__line_4369, this->__Vtask_uvm_report_error__context_name_4370, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_4371));
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_get(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string fname, ::IData/*31:0*/ lineno, ::QData/*63:0*/ &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_get\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1725;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4373;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_4376;
    __Vtask_uvm_report_error__verbosity_4376 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_4378;
    __Vtask_uvm_report_error__line_4378 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_4380;
    __Vtask_uvm_report_error__report_enabled_checked_4380 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1726;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4381;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_6__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_5;
    ::IData/*31:0*/ __VlefCall_4__get_report_action;
    ::std::string __VlefCall_3__get_full_name;
    ::IData/*31:0*/ __VlefCall_2__get_report_verbosity_level;
    ::std::string __VlefCall_1__get_full_name;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk9__DOT___local_report_object_;
    get__Vfuncrtn = 0ULL;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1725);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1725;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4373);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
        = __Vtask_get_root__Vfuncout_4373;
    __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
    VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 151)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk9__DOT___local_report_object_);
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
    VL_NULL_CHECK(unnamedblk9__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 151)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__get_full_name), __VlefCall_2__get_report_verbosity_level);
    __VlefLogAnd_5 = VL_LTES_III(32, 0U, __VlefCall_2__get_report_verbosity_level);
    if (__VlefLogAnd_5) {
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
        VL_NULL_CHECK(unnamedblk9__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 151)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_3__get_full_name), __VlefCall_4__get_report_action);
        __VlefLogAnd_5 = (0U != __VlefCall_4__get_report_action);
    }
    if (VL_UNLIKELY((__VlefLogAnd_5))) {
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
        __Vtask_uvm_report_error__report_enabled_checked_4380 = 1U;
        this->__Vtask_uvm_report_error__context_name_4379 = ""s;
        __Vtask_uvm_report_error__line_4378 = 0x00000097U;
        this->__Vtask_uvm_report_error__filename_4377 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh"s;
        __Vtask_uvm_report_error__verbosity_4376 = 0U;
        this->__Vtask_uvm_report_error__message_4375 = "Cannot get() an indirect data access register"s;
        this->__Vtask_uvm_report_error__id_4374 = VL_CVT_PACK_STR_NN(__VlefCall_6__get_full_name);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1726);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1726;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4381);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
            = __Vtask_get_root__Vfuncout_4381;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_4374, this->__Vtask_uvm_report_error__message_4375, __Vtask_uvm_report_error__verbosity_4376, this->__Vtask_uvm_report_error__filename_4377, __Vtask_uvm_report_error__line_4378, this->__Vtask_uvm_report_error__context_name_4379, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_4380));
    }
    get__Vfuncrtn = 0ULL;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_needs_update(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &needs_update__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_needs_update\n"); );
    // Body
    needs_update__Vfuncrtn = 0U;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_write(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &status, ::QData/*63:0*/ value, ::IData/*31:0*/ path, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> parent, ::IData/*31:0*/ prior, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> extension, ::std::string fname, ::IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_write\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1727;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4382;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_4385;
    __Vtask_uvm_report_warning__verbosity_4385 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_4387;
    __Vtask_uvm_report_warning__line_4387 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_4389;
    __Vtask_uvm_report_warning__report_enabled_checked_4389 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1728;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4390;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::std::string __VlefCall_7__get_full_name;
    ::std::string __VlefCall_6__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_5;
    ::IData/*31:0*/ __VlefCall_4__get_report_action;
    ::std::string __VlefCall_3__get_full_name;
    ::IData/*31:0*/ __VlefCall_2__get_report_verbosity_level;
    ::std::string __VlefCall_1__get_full_name;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk10__DOT__blk;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk11__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> unnamedblk12__DOT__rw;
    status = 0U;
    if ((3U == path)) {
        this->__VnoInFunc_get_parent(vlSymsp, unnamedblk10__DOT__blk);
        VL_NULL_CHECK(unnamedblk10__DOT__blk, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 177)->__VnoInFunc_get_default_door(vlSymsp, path);
    }
    if ((1U == path)) {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1727);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1727;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4382);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
            = __Vtask_get_root__Vfuncout_4382;
        __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
        VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 181)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk11__DOT___local_report_object_);
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
        VL_NULL_CHECK(unnamedblk11__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 181)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__get_full_name), __VlefCall_2__get_report_verbosity_level);
        __VlefLogAnd_5 = VL_LTES_III(32, 0U, __VlefCall_2__get_report_verbosity_level);
        if (__VlefLogAnd_5) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
            VL_NULL_CHECK(unnamedblk11__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 181)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_3__get_full_name), __VlefCall_4__get_report_action);
            __VlefLogAnd_5 = (0U != __VlefCall_4__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_5))) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
            __Vtask_uvm_report_warning__report_enabled_checked_4389 = 1U;
            this->__Vtask_uvm_report_warning__context_name_4388 = ""s;
            __Vtask_uvm_report_warning__line_4387 = 0x000000b5U;
            this->__Vtask_uvm_report_warning__filename_4386 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh"s;
            __Vtask_uvm_report_warning__verbosity_4385 = 0U;
            this->__Vtask_uvm_report_warning__message_4384 = "Cannot backdoor-write an indirect data access register. Switching to frontdoor."s;
            this->__Vtask_uvm_report_warning__id_4383 
                = VL_CVT_PACK_STR_NN(__VlefCall_6__get_full_name);
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1728);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1728;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4390);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__Vfuncout_4390;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_4383, this->__Vtask_uvm_report_warning__message_4384, __Vtask_uvm_report_warning__verbosity_4385, this->__Vtask_uvm_report_warning__filename_4386, __Vtask_uvm_report_warning__line_4387, this->__Vtask_uvm_report_warning__context_name_4388, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_4389));
        }
        path = 0U;
    }
    co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 1U);
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_7__get_full_name);
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pi3429b725__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "write_item"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_7__get_full_name), unnamedblk12__DOT__rw);
    VL_NULL_CHECK(unnamedblk12__DOT__rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 192)->__VnoInFunc_set_element(vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_data>{this});
    VL_NULL_CHECK(unnamedblk12__DOT__rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 193)->__VnoInFunc_set_element_kind(vlSymsp, 0U);
    VL_NULL_CHECK(unnamedblk12__DOT__rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 194)->__VnoInFunc_set_kind(vlSymsp, 1U);
    VL_NULL_CHECK(unnamedblk12__DOT__rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 195)->__VnoInFunc_set_value(vlSymsp, value, 0U);
    VL_NULL_CHECK(unnamedblk12__DOT__rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 196)->__VnoInFunc_set_door(vlSymsp, path);
    VL_NULL_CHECK(unnamedblk12__DOT__rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 197)->__VnoInFunc_set_map(vlSymsp, map);
    VL_NULL_CHECK(unnamedblk12__DOT__rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 198)->__VnoInFunc_set_parent_sequence(vlSymsp, parent);
    VL_NULL_CHECK(unnamedblk12__DOT__rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 199)->__VnoInFunc_set_priority(vlSymsp, prior);
    VL_NULL_CHECK(unnamedblk12__DOT__rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 200)->__VnoInFunc_set_extension(vlSymsp, extension);
    VL_NULL_CHECK(unnamedblk12__DOT__rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 201)->__VnoInFunc_set_fname(vlSymsp, fname);
    VL_NULL_CHECK(unnamedblk12__DOT__rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 202)->__VnoInFunc_set_line(vlSymsp, lineno);
    co_await this->__VnoInFunc_do_write(vlProcess, vlSymsp, unnamedblk12__DOT__rw);
    VL_NULL_CHECK(unnamedblk12__DOT__rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 206)->__VnoInFunc_get_status(vlSymsp, status);
    co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_read(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &status, ::QData/*63:0*/ &value, ::IData/*31:0*/ path, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> parent, ::IData/*31:0*/ prior, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> extension, ::std::string fname, ::IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_read\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1729;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4391;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_4394;
    __Vtask_uvm_report_warning__verbosity_4394 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_4396;
    __Vtask_uvm_report_warning__line_4396 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_4398;
    __Vtask_uvm_report_warning__report_enabled_checked_4398 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1730;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4399;
    ::IData/*31:0*/ __Vtask_read__status_4400;
    __Vtask_read__status_4400 = 0;
    ::QData/*63:0*/ __Vtask_read__value_4401;
    __Vtask_read__value_4401 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::std::string __VlefCall_6__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_5;
    ::IData/*31:0*/ __VlefCall_4__get_report_action;
    ::std::string __VlefCall_3__get_full_name;
    ::IData/*31:0*/ __VlefCall_2__get_report_verbosity_level;
    ::std::string __VlefCall_1__get_full_name;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk13__DOT__blk;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk14__DOT___local_report_object_;
    status = 0U;
    value = 0ULL;
    if ((3U == path)) {
        this->__VnoInFunc_get_parent(vlSymsp, unnamedblk13__DOT__blk);
        VL_NULL_CHECK(unnamedblk13__DOT__blk, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 224)->__VnoInFunc_get_default_door(vlSymsp, path);
    }
    if ((1U == path)) {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1729);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1729;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4391);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
            = __Vtask_get_root__Vfuncout_4391;
        __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
        VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 228)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk14__DOT___local_report_object_);
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
        VL_NULL_CHECK(unnamedblk14__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 228)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__get_full_name), __VlefCall_2__get_report_verbosity_level);
        __VlefLogAnd_5 = VL_LTES_III(32, 0U, __VlefCall_2__get_report_verbosity_level);
        if (__VlefLogAnd_5) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
            VL_NULL_CHECK(unnamedblk14__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 228)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_3__get_full_name), __VlefCall_4__get_report_action);
            __VlefLogAnd_5 = (0U != __VlefCall_4__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_5))) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
            __Vtask_uvm_report_warning__report_enabled_checked_4398 = 1U;
            this->__Vtask_uvm_report_warning__context_name_4397 = ""s;
            __Vtask_uvm_report_warning__line_4396 = 0x000000e4U;
            this->__Vtask_uvm_report_warning__filename_4395 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh"s;
            __Vtask_uvm_report_warning__verbosity_4394 = 0U;
            this->__Vtask_uvm_report_warning__message_4393 = "Cannot backdoor-read an indirect data access register. Switching to frontdoor."s;
            this->__Vtask_uvm_report_warning__id_4392 
                = VL_CVT_PACK_STR_NN(__VlefCall_6__get_full_name);
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1730);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1730;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4399);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__Vfuncout_4399;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_4392, this->__Vtask_uvm_report_warning__message_4393, __Vtask_uvm_report_warning__verbosity_4394, this->__Vtask_uvm_report_warning__filename_4395, __Vtask_uvm_report_warning__line_4396, this->__Vtask_uvm_report_warning__context_name_4397, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_4398));
        }
        path = 0U;
    }
    co_await Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__status_4400, __Vtask_read__value_4401, path, map, parent, prior, extension, fname, lineno);
    status = __Vtask_read__status_4400;
    value = __Vtask_read__value_4401;
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_poke(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &status, ::QData/*63:0*/ value, ::std::string kind, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> parent, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> extension, ::std::string fname, ::IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_poke\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1731;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4402;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_4405;
    __Vtask_uvm_report_error__verbosity_4405 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_4407;
    __Vtask_uvm_report_error__line_4407 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_4409;
    __Vtask_uvm_report_error__report_enabled_checked_4409 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1732;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4410;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::std::string __VlefCall_6__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_5;
    ::IData/*31:0*/ __VlefCall_4__get_report_action;
    ::std::string __VlefCall_3__get_full_name;
    ::IData/*31:0*/ __VlefCall_2__get_report_verbosity_level;
    ::std::string __VlefCall_1__get_full_name;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk15__DOT___local_report_object_;
    status = 0U;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1731);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1731;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4402);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
        = __Vtask_get_root__Vfuncout_4402;
    __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
    VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 242)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk15__DOT___local_report_object_);
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
    VL_NULL_CHECK(unnamedblk15__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 242)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__get_full_name), __VlefCall_2__get_report_verbosity_level);
    __VlefLogAnd_5 = VL_LTES_III(32, 0U, __VlefCall_2__get_report_verbosity_level);
    if (__VlefLogAnd_5) {
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
        VL_NULL_CHECK(unnamedblk15__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 242)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_3__get_full_name), __VlefCall_4__get_report_action);
        __VlefLogAnd_5 = (0U != __VlefCall_4__get_report_action);
    }
    if (VL_UNLIKELY((__VlefLogAnd_5))) {
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
        __Vtask_uvm_report_error__report_enabled_checked_4409 = 1U;
        this->__Vtask_uvm_report_error__context_name_4408 = ""s;
        __Vtask_uvm_report_error__line_4407 = 0x000000f2U;
        this->__Vtask_uvm_report_error__filename_4406 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh"s;
        __Vtask_uvm_report_error__verbosity_4405 = 0U;
        this->__Vtask_uvm_report_error__message_4404 = "Cannot poke() an indirect data access register"s;
        this->__Vtask_uvm_report_error__id_4403 = VL_CVT_PACK_STR_NN(__VlefCall_6__get_full_name);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1732);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1732;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4410);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
            = __Vtask_get_root__Vfuncout_4410;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_4403, this->__Vtask_uvm_report_error__message_4404, __Vtask_uvm_report_error__verbosity_4405, this->__Vtask_uvm_report_error__filename_4406, __Vtask_uvm_report_error__line_4407, this->__Vtask_uvm_report_error__context_name_4408, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_4409));
    }
    status = 1U;
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_peek(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &status, ::QData/*63:0*/ &value, ::std::string kind, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> parent, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> extension, ::std::string fname, ::IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_peek\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1733;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4411;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_4414;
    __Vtask_uvm_report_error__verbosity_4414 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_4416;
    __Vtask_uvm_report_error__line_4416 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_4418;
    __Vtask_uvm_report_error__report_enabled_checked_4418 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1734;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4419;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::std::string __VlefCall_6__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_5;
    ::IData/*31:0*/ __VlefCall_4__get_report_action;
    ::std::string __VlefCall_3__get_full_name;
    ::IData/*31:0*/ __VlefCall_2__get_report_verbosity_level;
    ::std::string __VlefCall_1__get_full_name;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk16__DOT___local_report_object_;
    status = 0U;
    value = 0ULL;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1733);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1733;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4411);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
        = __Vtask_get_root__Vfuncout_4411;
    __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
    VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 253)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk16__DOT___local_report_object_);
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
    VL_NULL_CHECK(unnamedblk16__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 253)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__get_full_name), __VlefCall_2__get_report_verbosity_level);
    __VlefLogAnd_5 = VL_LTES_III(32, 0U, __VlefCall_2__get_report_verbosity_level);
    if (__VlefLogAnd_5) {
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
        VL_NULL_CHECK(unnamedblk16__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 253)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_3__get_full_name), __VlefCall_4__get_report_action);
        __VlefLogAnd_5 = (0U != __VlefCall_4__get_report_action);
    }
    if (VL_UNLIKELY((__VlefLogAnd_5))) {
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
        __Vtask_uvm_report_error__report_enabled_checked_4418 = 1U;
        this->__Vtask_uvm_report_error__context_name_4417 = ""s;
        __Vtask_uvm_report_error__line_4416 = 0x000000fdU;
        this->__Vtask_uvm_report_error__filename_4415 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh"s;
        __Vtask_uvm_report_error__verbosity_4414 = 0U;
        this->__Vtask_uvm_report_error__message_4413 = "Cannot peek() an indirect data access register"s;
        this->__Vtask_uvm_report_error__id_4412 = VL_CVT_PACK_STR_NN(__VlefCall_6__get_full_name);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1734);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1734;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4419);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
            = __Vtask_get_root__Vfuncout_4419;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_4412, this->__Vtask_uvm_report_error__message_4413, __Vtask_uvm_report_error__verbosity_4414, this->__Vtask_uvm_report_error__filename_4415, __Vtask_uvm_report_error__line_4416, this->__Vtask_uvm_report_error__context_name_4417, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_4418));
    }
    status = 1U;
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_update(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &status, ::IData/*31:0*/ path, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> parent, ::IData/*31:0*/ prior, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> extension, ::std::string fname, ::IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_update\n"); );
    // Body
    VL_KEEP_THIS;
    status = 0U;
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_mirror(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &status, ::IData/*31:0*/ check, ::IData/*31:0*/ path, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> parent, ::IData/*31:0*/ prior, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> extension, ::std::string fname, ::IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_mirror\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    status = 0U;
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_data::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_data::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_data::~Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_data() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_data::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_data::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_data::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_data::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_data::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_idx:" + VL_TO_STRING(__PVT__m_idx);
    out += ", m_tbl:" + VL_TO_STRING(__PVT__m_tbl);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_reg::to_string_middle();
    return (out);
}
