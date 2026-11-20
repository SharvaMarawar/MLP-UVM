// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_mlp_pkg__03a__03amlp_monitor::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_top_mlp_pkg__03a__03amlp_monitor::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component_registry__pi430f9524> __Vfunc_get__Vfuncout_81;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_component_registry__pi430f9524__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_81);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_81;
}

void Vtb_top_mlp_pkg__03a__03amlp_monitor::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_top_mlp_pkg__03a__03amlp_monitor::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "mlp_monitor"s;
}

void Vtb_top_mlp_pkg__03a__03amlp_monitor::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> parent) {
    Vtb_top_uvm_pkg__03a__03auvm_monitor::init(vlProcess, vlSymsp, name, parent);
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_top_mlp_pkg__03a__03amlp_monitor::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void Vtb_top_mlp_pkg__03a__03amlp_monitor::__VnoInFunc_build_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_top_mlp_pkg__03a__03amlp_monitor::__VnoInFunc_build_phase\n"); );
    // Locals
    Vtb_top_mlp_if* __Vfunc_get__value_82;
    __Vfunc_get__value_82 = nullptr;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_4;
    ::IData/*31:0*/ __VlefCall_3__get_report_action;
    ::IData/*31:0*/ __VlefCall_2__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_1__uvm_get_report_object;
    ::CData/*0:0*/ __VlefCall_0__get;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk1__DOT___local_report_object_;
    Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_build_phase(vlProcess, vlSymsp, phase);
    this->__PVT__in_ap = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_analysis_port__Tz4bbd45ce, vlProcess, vlSymsp, "in_ap"s, 
                                ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_monitor>{this});
    this->__PVT__out_ap = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_analysis_port__Tz4bbd45ce, vlProcess, vlSymsp, "out_ap"s, 
                                 ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_monitor>{this});
    __Vfunc_get__value_82 = this->__PVT__vif;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_config_db__Tz54780af0__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_monitor>{this}, ""s, "vif"s, __Vfunc_get__value_82, __VlefCall_0__get);
    this->__PVT__vif = __Vfunc_get__value_82;
    if ((1U & (~ (::IData)(__VlefCall_0__get)))) {
        this->__VnoInFunc_uvm_get_report_object(vlSymsp, __VlefCall_1__uvm_get_report_object);
        VL_NULL_CHECK(__VlefCall_1__uvm_get_report_object, "mlp_monitor.sv", 28)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk1__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk1__DOT___local_report_object_, "mlp_monitor.sv", 28)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 3U, "NOVIF"s, __VlefCall_2__get_report_verbosity_level);
        __VlefLogAnd_4 = VL_LTES_III(32, 0U, __VlefCall_2__get_report_verbosity_level);
        if (__VlefLogAnd_4) {
            VL_NULL_CHECK(unnamedblk1__DOT___local_report_object_, "mlp_monitor.sv", 28)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 3U, "NOVIF"s, __VlefCall_3__get_report_action);
            __VlefLogAnd_4 = (0U != __VlefCall_3__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_4))) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "NOVIF"s, "virtual interface 'vif' not found in config_db"s, 0U, "mlp_monitor.sv"s, 0x0000001cU, ""s, 1U);
        }
    }
}

VlCoroutine Vtb_top_mlp_pkg__03a__03amlp_monitor::__VnoInFunc_run_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_top_mlp_pkg__03a__03amlp_monitor::__VnoInFunc_run_phase\n"); );
    // Locals
    ::CData/*0:0*/ __Vtrigprevexpr_hf60d0101__0;
    __Vtrigprevexpr_hf60d0101__0 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::std::string __VlefCall_19__convert2string;
    ::CData/*0:0*/ __VlefLogAnd_18;
    ::IData/*31:0*/ __VlefCall_17__get_report_action;
    ::IData/*31:0*/ __VlefCall_16__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_15__uvm_get_report_object;
    ::std::string __VlefCall_14__convert2string;
    ::CData/*0:0*/ __VlefLogAnd_13;
    ::IData/*31:0*/ __VlefCall_12__get_report_action;
    ::IData/*31:0*/ __VlefCall_11__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_10__uvm_get_report_object;
    ::std::string __VlefCall_9__convert2string;
    ::CData/*0:0*/ __VlefLogAnd_8;
    ::IData/*31:0*/ __VlefCall_7__get_report_action;
    ::IData/*31:0*/ __VlefCall_6__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_5__uvm_get_report_object;
    ::std::string __VlefCall_4__convert2string;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk2__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk3__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk5__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk7__DOT___local_report_object_;
    ::QData/*63:0*/ cyc;
    ::CData/*0:0*/ prev_rst_n;
    ::CData/*1:0*/ prev_stage;
    ::CData/*0:0*/ prev_stall;
    ::IData/*31:0*/ in_wait;
    ::IData/*31:0*/ out_wait;
    ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_mon_item> t;
    cyc = 0ULL;
    prev_rst_n = 1U;
    prev_stage = 0U;
    prev_stall = 0U;
    in_wait = 0U;
    out_wait = 0U;
    while (true) {
        {
            ::CData/*0:0*/ __VdynTrigger_h2e0c487c__0;
            __VdynTrigger_h2e0c487c__0 = 0;
            __VdynTrigger_h2e0c487c__0 = 0U;
            if ((VlNull{} != this->__PVT__vif)) {
                __Vtrigprevexpr_hf60d0101__0 = VL_NULL_CHECK(this->__PVT__vif, "mlp_monitor.sv", 41)
                    ->clk;
            }
            while ((1U & (~ (::IData)(__VdynTrigger_h2e0c487c__0)))) {
                co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.evaluation(
                                                                                vlProcess, 
                                                                                "@(posedge mlp_pkg::mlp_monitor.vif.clk)", 
                                                                                "mlp_monitor.sv", 
                                                                                41);
                __VdynTrigger_h2e0c487c__0 = ((VlNull{} 
                                               != this->__PVT__vif) 
                                              && (VL_NULL_CHECK(this->__PVT__vif, "mlp_monitor.sv", 41)
                                                  ->clk 
                                                  & (~ (::IData)(__Vtrigprevexpr_hf60d0101__0))));
                vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.anyTriggered(__VdynTrigger_h2e0c487c__0);
                if ((VlNull{} != this->__PVT__vif)) {
                    __Vtrigprevexpr_hf60d0101__0 = VL_NULL_CHECK(this->__PVT__vif, "mlp_monitor.sv", 41)
                        ->clk;
                }
            }
            co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.resumption(
                                                                            vlProcess, 
                                                                            "@(posedge mlp_pkg::mlp_monitor.vif.clk)", 
                                                                            "mlp_monitor.sv", 
                                                                            41);
            cyc = (1ULL + cyc);
            if ((1U & (~ VL_NULL_CHECK(this->__PVT__vif, "mlp_monitor.sv", 45)
                       ->rst_n))) {
                if (prev_rst_n) {
                    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pi20b521b1__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "rst"s, VlNull{}, ""s, t);
                    VL_NULL_CHECK(t, "mlp_monitor.sv", 48)->__PVT__kind = 3U;
                    VL_NULL_CHECK(t, "mlp_monitor.sv", 49)->__PVT__cycle 
                        = cyc;
                    VL_NULL_CHECK(t, "mlp_monitor.sv", 50)->__PVT__stage 
                        = prev_stage;
                    VL_NULL_CHECK(t, "mlp_monitor.sv", 51)->__PVT__stalled 
                        = prev_stall;
                    this->__VnoInFunc_uvm_get_report_object(vlSymsp, __VlefCall_0__uvm_get_report_object);
                    VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "mlp_monitor.sv", 52)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk2__DOT___local_report_object_);
                    VL_NULL_CHECK(unnamedblk2__DOT___local_report_object_, "mlp_monitor.sv", 52)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "MON"s, __VlefCall_1__get_report_verbosity_level);
                    __VlefLogAnd_3 = VL_LTES_III(32, 0x0000012cU, __VlefCall_1__get_report_verbosity_level);
                    if (__VlefLogAnd_3) {
                        VL_NULL_CHECK(unnamedblk2__DOT___local_report_object_, "mlp_monitor.sv", 52)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "MON"s, __VlefCall_2__get_report_action);
                        __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
                    }
                    if (VL_UNLIKELY((__VlefLogAnd_3))) {
                        VL_NULL_CHECK(t, "mlp_monitor.sv", 52)->__VnoInFunc_convert2string(vlProcess, vlSymsp, __VlefCall_4__convert2string);
                        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "MON"s, 
                                                          VL_CVT_PACK_STR_NN(__VlefCall_4__convert2string), 0x0000012cU, "mlp_monitor.sv"s, 0x00000034U, ""s, 1U);
                    }
                    VL_NULL_CHECK(this->__PVT__in_ap, "mlp_monitor.sv", 53)->__VnoInFunc_write(vlProcess, vlSymsp, t);
                }
                prev_rst_n = 0U;
                prev_stage = 0U;
                prev_stall = 0U;
                in_wait = 0U;
                out_wait = 0U;
                goto __Vlabel0;
            }
            prev_rst_n = 1U;
            if (VL_NULL_CHECK(this->__PVT__vif, "mlp_monitor.sv", 65)
                ->wr_en) {
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pi20b521b1__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "cfg"s, VlNull{}, ""s, t);
                VL_NULL_CHECK(t, "mlp_monitor.sv", 67)->__PVT__kind = 2U;
                VL_NULL_CHECK(t, "mlp_monitor.sv", 68)->__PVT__cycle 
                    = cyc;
                VL_NULL_CHECK(t, "mlp_monitor.sv", 69)->__PVT__addr 
                    = VL_NULL_CHECK(this->__PVT__vif, "mlp_monitor.sv", 69)
                    ->wr_addr;
                VL_NULL_CHECK(t, "mlp_monitor.sv", 70)->__PVT__data 
                    = VL_NULL_CHECK(this->__PVT__vif, "mlp_monitor.sv", 70)
                    ->wr_data;
                VL_NULL_CHECK(t, "mlp_monitor.sv", 71)->__PVT__busy 
                    = VL_NULL_CHECK(this->__PVT__vif, "mlp_monitor.sv", 71)
                    ->busy;
                VL_NULL_CHECK(t, "mlp_monitor.sv", 72)->__PVT__with_in 
                    = VL_NULL_CHECK(this->__PVT__vif, "mlp_monitor.sv", 72)
                    ->in_valid;
                this->__VnoInFunc_uvm_get_report_object(vlSymsp, __VlefCall_5__uvm_get_report_object);
                VL_NULL_CHECK(__VlefCall_5__uvm_get_report_object, "mlp_monitor.sv", 73)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk3__DOT___local_report_object_);
                VL_NULL_CHECK(unnamedblk3__DOT___local_report_object_, "mlp_monitor.sv", 73)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "MON"s, __VlefCall_6__get_report_verbosity_level);
                __VlefLogAnd_8 = VL_LTES_III(32, 0x0000012cU, __VlefCall_6__get_report_verbosity_level);
                if (__VlefLogAnd_8) {
                    VL_NULL_CHECK(unnamedblk3__DOT___local_report_object_, "mlp_monitor.sv", 73)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "MON"s, __VlefCall_7__get_report_action);
                    __VlefLogAnd_8 = (0U != __VlefCall_7__get_report_action);
                }
                if (VL_UNLIKELY((__VlefLogAnd_8))) {
                    VL_NULL_CHECK(t, "mlp_monitor.sv", 73)->__VnoInFunc_convert2string(vlProcess, vlSymsp, __VlefCall_9__convert2string);
                    this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "MON"s, 
                                                      VL_CVT_PACK_STR_NN(__VlefCall_9__convert2string), 0x0000012cU, "mlp_monitor.sv"s, 0x00000049U, ""s, 1U);
                }
                VL_NULL_CHECK(this->__PVT__in_ap, "mlp_monitor.sv", 74)->__VnoInFunc_write(vlProcess, vlSymsp, t);
            }
            if (VL_NULL_CHECK(this->__PVT__vif, "mlp_monitor.sv", 78)
                ->out_valid) {
                if (VL_NULL_CHECK(this->__PVT__vif, "mlp_monitor.sv", 79)
                    ->out_ready) {
                    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pi20b521b1__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "out"s, VlNull{}, ""s, t);
                    VL_NULL_CHECK(t, "mlp_monitor.sv", 81)->__PVT__kind = 1U;
                    VL_NULL_CHECK(t, "mlp_monitor.sv", 82)->__PVT__cycle 
                        = cyc;
                    VL_NULL_CHECK(t, "mlp_monitor.sv", 83)->__PVT__waited 
                        = out_wait;
                    VL_NULL_CHECK(t, "mlp_monitor.sv", 84)->__PVT__y[0U] 
                        = (0x000000ffU & VL_NULL_CHECK(this->__PVT__vif, "mlp_monitor.sv", 84)
                           ->out_data);
                    VL_NULL_CHECK(t, "mlp_monitor.sv", 84)->__PVT__y[1U] 
                        = (0x000000ffU & (VL_NULL_CHECK(this->__PVT__vif, "mlp_monitor.sv", 84)
                                          ->out_data 
                                          >> 8U));
                    VL_NULL_CHECK(t, "mlp_monitor.sv", 84)->__PVT__y[2U] 
                        = (0x000000ffU & (VL_NULL_CHECK(this->__PVT__vif, "mlp_monitor.sv", 84)
                                          ->out_data 
                                          >> 0x10U));
                    VL_NULL_CHECK(t, "mlp_monitor.sv", 84)->__PVT__y[3U] 
                        = (VL_NULL_CHECK(this->__PVT__vif, "mlp_monitor.sv", 84)
                           ->out_data >> 0x18U);
                    out_wait = 0U;
                    this->__VnoInFunc_uvm_get_report_object(vlSymsp, __VlefCall_10__uvm_get_report_object);
                    VL_NULL_CHECK(__VlefCall_10__uvm_get_report_object, "mlp_monitor.sv", 86)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk5__DOT___local_report_object_);
                    VL_NULL_CHECK(unnamedblk5__DOT___local_report_object_, "mlp_monitor.sv", 86)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "MON"s, __VlefCall_11__get_report_verbosity_level);
                    __VlefLogAnd_13 = VL_LTES_III(32, 0x0000012cU, __VlefCall_11__get_report_verbosity_level);
                    if (__VlefLogAnd_13) {
                        VL_NULL_CHECK(unnamedblk5__DOT___local_report_object_, "mlp_monitor.sv", 86)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "MON"s, __VlefCall_12__get_report_action);
                        __VlefLogAnd_13 = (0U != __VlefCall_12__get_report_action);
                    }
                    if (VL_UNLIKELY((__VlefLogAnd_13))) {
                        VL_NULL_CHECK(t, "mlp_monitor.sv", 86)->__VnoInFunc_convert2string(vlProcess, vlSymsp, __VlefCall_14__convert2string);
                        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "MON"s, 
                                                          VL_CVT_PACK_STR_NN(__VlefCall_14__convert2string), 0x0000012cU, "mlp_monitor.sv"s, 0x00000056U, ""s, 1U);
                    }
                    VL_NULL_CHECK(this->__PVT__out_ap, "mlp_monitor.sv", 87)->__VnoInFunc_write(vlProcess, vlSymsp, t);
                } else {
                    out_wait = ((::IData)(1U) + out_wait);
                }
            }
            if (VL_NULL_CHECK(this->__PVT__vif, "mlp_monitor.sv", 94)
                ->in_valid) {
                if (VL_NULL_CHECK(this->__PVT__vif, "mlp_monitor.sv", 95)
                    ->in_ready) {
                    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pi20b521b1__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "in"s, VlNull{}, ""s, t);
                    VL_NULL_CHECK(t, "mlp_monitor.sv", 97)->__PVT__kind = 0U;
                    VL_NULL_CHECK(t, "mlp_monitor.sv", 98)->__PVT__cycle 
                        = cyc;
                    VL_NULL_CHECK(t, "mlp_monitor.sv", 99)->__PVT__waited 
                        = in_wait;
                    VL_NULL_CHECK(t, "mlp_monitor.sv", 100)->__PVT__x[0U] 
                        = (0x000000ffU & VL_NULL_CHECK(this->__PVT__vif, "mlp_monitor.sv", 100)
                           ->in_data);
                    VL_NULL_CHECK(t, "mlp_monitor.sv", 100)->__PVT__x[1U] 
                        = (0x000000ffU & (VL_NULL_CHECK(this->__PVT__vif, "mlp_monitor.sv", 100)
                                          ->in_data 
                                          >> 8U));
                    VL_NULL_CHECK(t, "mlp_monitor.sv", 100)->__PVT__x[2U] 
                        = (0x000000ffU & (VL_NULL_CHECK(this->__PVT__vif, "mlp_monitor.sv", 100)
                                          ->in_data 
                                          >> 0x10U));
                    VL_NULL_CHECK(t, "mlp_monitor.sv", 100)->__PVT__x[3U] 
                        = (VL_NULL_CHECK(this->__PVT__vif, "mlp_monitor.sv", 100)
                           ->in_data >> 0x18U);
                    in_wait = 0U;
                    this->__VnoInFunc_uvm_get_report_object(vlSymsp, __VlefCall_15__uvm_get_report_object);
                    VL_NULL_CHECK(__VlefCall_15__uvm_get_report_object, "mlp_monitor.sv", 102)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk7__DOT___local_report_object_);
                    VL_NULL_CHECK(unnamedblk7__DOT___local_report_object_, "mlp_monitor.sv", 102)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "MON"s, __VlefCall_16__get_report_verbosity_level);
                    __VlefLogAnd_18 = VL_LTES_III(32, 0x0000012cU, __VlefCall_16__get_report_verbosity_level);
                    if (__VlefLogAnd_18) {
                        VL_NULL_CHECK(unnamedblk7__DOT___local_report_object_, "mlp_monitor.sv", 102)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "MON"s, __VlefCall_17__get_report_action);
                        __VlefLogAnd_18 = (0U != __VlefCall_17__get_report_action);
                    }
                    if (VL_UNLIKELY((__VlefLogAnd_18))) {
                        VL_NULL_CHECK(t, "mlp_monitor.sv", 102)->__VnoInFunc_convert2string(vlProcess, vlSymsp, __VlefCall_19__convert2string);
                        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "MON"s, 
                                                          VL_CVT_PACK_STR_NN(__VlefCall_19__convert2string), 0x0000012cU, "mlp_monitor.sv"s, 0x00000066U, ""s, 1U);
                    }
                    VL_NULL_CHECK(this->__PVT__in_ap, "mlp_monitor.sv", 103)->__VnoInFunc_write(vlProcess, vlSymsp, t);
                } else {
                    in_wait = ((::IData)(1U) + in_wait);
                }
            } else {
                in_wait = 0U;
            }
            prev_stage = VL_NULL_CHECK(this->__PVT__vif, "mlp_monitor.sv", 111)
                ->dbg_stage;
            prev_stall = (VL_NULL_CHECK(this->__PVT__vif, "mlp_monitor.sv", 112)
                          ->out_valid && (1U & (~ VL_NULL_CHECK(this->__PVT__vif, "mlp_monitor.sv", 112)
                                                ->out_ready)));
            __Vlabel0: ;
        }
    }
    co_return;
}

void Vtb_top_mlp_pkg__03a__03amlp_monitor::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_top_mlp_pkg__03a__03amlp_monitor::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_mlp_pkg__03a__03amlp_monitor::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_top_mlp_pkg__03a__03amlp_monitor::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_mlp_pkg__03a__03amlp_monitor::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_top_mlp_pkg__03a__03amlp_monitor::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_mlp_pkg__03a__03amlp_monitor::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_top_mlp_pkg__03a__03amlp_monitor::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_mlp_pkg__03a__03amlp_monitor::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_top_mlp_pkg__03a__03amlp_monitor::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__vif = nullptr;
}

Vtb_top_mlp_pkg__03a__03amlp_monitor::~Vtb_top_mlp_pkg__03a__03amlp_monitor() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_top_mlp_pkg__03a__03amlp_monitor::~\n"); );
}

std::string Vtb_top_mlp_pkg__03a__03amlp_monitor::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_top_mlp_pkg__03a__03amlp_monitor::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_mlp_pkg__03a__03amlp_monitor::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_top_mlp_pkg__03a__03amlp_monitor::to_string_middle\n"); );
    // Body
    std::string out;
    out += "vif:" + VL_TO_STRING(__PVT__vif);
    out += ", in_ap:" + VL_TO_STRING(__PVT__in_ap);
    out += ", out_ap:" + VL_TO_STRING(__PVT__out_ap);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_monitor::to_string_middle();
    return (out);
}
