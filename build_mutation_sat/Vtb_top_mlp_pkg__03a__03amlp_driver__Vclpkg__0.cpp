// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_mlp_pkg__03a__03amlp_driver::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_top_mlp_pkg__03a__03amlp_driver::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component_registry__pi8c9a5517> __Vfunc_get__Vfuncout_78;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_component_registry__pi8c9a5517__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_78);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_78;
}

void Vtb_top_mlp_pkg__03a__03amlp_driver::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_top_mlp_pkg__03a__03amlp_driver::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "mlp_driver"s;
}

void Vtb_top_mlp_pkg__03a__03amlp_driver::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> parent) {
    Vtb_top_uvm_pkg__03a__03auvm_driver__pi85ffe88e::init(vlProcess, vlSymsp, name, parent);
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_top_mlp_pkg__03a__03amlp_driver::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    this->__PVT__ready_pct = 0x00000064U;
    this->__PVT__ready_left = 0U;
    /*super.new*/;
}

void Vtb_top_mlp_pkg__03a__03amlp_driver::__VnoInFunc_build_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_top_mlp_pkg__03a__03amlp_driver::__VnoInFunc_build_phase\n"); );
    // Locals
    Vtb_top_mlp_if* __Vfunc_get__value_79;
    __Vfunc_get__value_79 = nullptr;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_4;
    ::IData/*31:0*/ __VlefCall_3__get_report_action;
    ::IData/*31:0*/ __VlefCall_2__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_1__uvm_get_report_object;
    ::CData/*0:0*/ __VlefCall_0__get;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk1__DOT___local_report_object_;
    Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_build_phase(vlProcess, vlSymsp, phase);
    __Vfunc_get__value_79 = this->__PVT__vif;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_config_db__Tz54780af0__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_driver>{this}, ""s, "vif"s, __Vfunc_get__value_79, __VlefCall_0__get);
    this->__PVT__vif = __Vfunc_get__value_79;
    if ((1U & (~ (::IData)(__VlefCall_0__get)))) {
        this->__VnoInFunc_uvm_get_report_object(vlSymsp, __VlefCall_1__uvm_get_report_object);
        VL_NULL_CHECK(__VlefCall_1__uvm_get_report_object, "mlp_driver.sv", 31)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk1__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk1__DOT___local_report_object_, "mlp_driver.sv", 31)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 3U, "NOVIF"s, __VlefCall_2__get_report_verbosity_level);
        __VlefLogAnd_4 = VL_LTES_III(32, 0U, __VlefCall_2__get_report_verbosity_level);
        if (__VlefLogAnd_4) {
            VL_NULL_CHECK(unnamedblk1__DOT___local_report_object_, "mlp_driver.sv", 31)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 3U, "NOVIF"s, __VlefCall_3__get_report_action);
            __VlefLogAnd_4 = (0U != __VlefCall_3__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_4))) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "NOVIF"s, "virtual interface 'vif' not found in config_db"s, 0U, "mlp_driver.sv"s, 0x0000001fU, ""s, 1U);
        }
    }
}

VlCoroutine Vtb_top_mlp_pkg__03a__03amlp_driver::__VnoInFunc_run_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_top_mlp_pkg__03a__03amlp_driver::__VnoInFunc_run_phase\n"); );
    // Locals
    ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> __Vtask_get_next_item__t_13;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::std::string __VlefCall_4__convert2string;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk2__DOT___local_report_object_;
    this->__VnoInFunc_run_phase____Vfork_1__0(std::make_shared<VlProcess>(vlProcess), vlSymsp);
    co_await this->__VnoInFunc_apply_reset(vlProcess, vlSymsp, 5U);
    while (true) {
        co_await VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_driver__pi85ffe88e::__PVT__seq_item_port, "mlp_driver.sv", 38)->__VnoInFunc_get_next_item(vlProcess, vlSymsp, __Vtask_get_next_item__t_13);
        Vtb_top_uvm_pkg__03a__03auvm_driver__pi85ffe88e::__PVT__req 
            = __Vtask_get_next_item__t_13;
        this->__VnoInFunc_uvm_get_report_object(vlSymsp, __VlefCall_0__uvm_get_report_object);
        VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "mlp_driver.sv", 39)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk2__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk2__DOT___local_report_object_, "mlp_driver.sv", 39)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "DRV"s, __VlefCall_1__get_report_verbosity_level);
        __VlefLogAnd_3 = VL_LTES_III(32, 0x0000012cU, __VlefCall_1__get_report_verbosity_level);
        if (__VlefLogAnd_3) {
            VL_NULL_CHECK(unnamedblk2__DOT___local_report_object_, "mlp_driver.sv", 39)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "DRV"s, __VlefCall_2__get_report_action);
            __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_3))) {
            VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_driver__pi85ffe88e::__PVT__req, "mlp_driver.sv", 39)->__VnoInFunc_convert2string(vlProcess, vlSymsp, __VlefCall_4__convert2string);
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "DRV"s, 
                                              VL_CVT_PACK_STR_NN(__VlefCall_4__convert2string), 0x0000012cU, "mlp_driver.sv"s, 0x00000027U, ""s, 1U);
        }
        if ((0U == VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_driver__pi85ffe88e::__PVT__req, "mlp_driver.sv", 40)
             ->__PVT__op)) {
            co_await this->__VnoInFunc_idle(vlProcess, vlSymsp, VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_driver__pi85ffe88e::__PVT__req, "mlp_driver.sv", 41)
                                            ->__PVT__gap);
            co_await this->__VnoInFunc_drive_input(vlProcess, vlSymsp, Vtb_top_uvm_pkg__03a__03auvm_driver__pi85ffe88e::__PVT__req);
        } else if ((1U == VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_driver__pi85ffe88e::__PVT__req, "mlp_driver.sv", 40)
                    ->__PVT__op)) {
            co_await this->__VnoInFunc_idle(vlProcess, vlSymsp, VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_driver__pi85ffe88e::__PVT__req, "mlp_driver.sv", 42)
                                            ->__PVT__gap);
            co_await this->__VnoInFunc_drive_cfg(vlProcess, vlSymsp, Vtb_top_uvm_pkg__03a__03auvm_driver__pi85ffe88e::__PVT__req);
        } else if ((3U == VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_driver__pi85ffe88e::__PVT__req, "mlp_driver.sv", 40)
                    ->__PVT__op)) {
            co_await this->__VnoInFunc_idle(vlProcess, vlSymsp, VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_driver__pi85ffe88e::__PVT__req, "mlp_driver.sv", 43)
                                            ->__PVT__gap);
            co_await this->__VnoInFunc_drive_reset(vlProcess, vlSymsp, Vtb_top_uvm_pkg__03a__03auvm_driver__pi85ffe88e::__PVT__req);
        } else if ((2U == VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_driver__pi85ffe88e::__PVT__req, "mlp_driver.sv", 40)
                    ->__PVT__op)) {
            this->__PVT__ready_pct = VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_driver__pi85ffe88e::__PVT__req, "mlp_driver.sv", 44)
                ->__PVT__ready_pct;
            this->__PVT__ready_left = VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_driver__pi85ffe88e::__PVT__req, "mlp_driver.sv", 44)
                ->__PVT__hold;
        } else if ((4U == VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_driver__pi85ffe88e::__PVT__req, "mlp_driver.sv", 40)
                    ->__PVT__op)) {
            co_await this->__VnoInFunc_wait_idle(vlProcess, vlSymsp);
        }
        VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_driver__pi85ffe88e::__PVT__seq_item_port, "mlp_driver.sv", 47)->__VnoInFunc_item_done(vlProcess, vlSymsp, VlNull{});
    }
    co_return;
}

VlCoroutine Vtb_top_mlp_pkg__03a__03amlp_driver::__VnoInFunc_run_phase____Vfork_1__0(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_top_mlp_pkg__03a__03amlp_driver::__VnoInFunc_run_phase____Vfork_1__0\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.delay(0xffffffffffffffffULL, 
                                                               vlProcess, 
                                                               "mlp_driver.sv", 
                                                               35);
    co_await this->__VnoInFunc_ready_gen(vlProcess, vlSymsp);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vtb_top_mlp_pkg__03a__03amlp_driver::__VnoInFunc_idle(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ n) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_top_mlp_pkg__03a__03amlp_driver::__VnoInFunc_idle\n"); );
    // Locals
    ::CData/*0:0*/ __Vtrigprevexpr_hb53cd64a__0;
    __Vtrigprevexpr_hb53cd64a__0 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::IData/*31:0*/ unnamedblk1_1__DOT____Vrepeat0;
    unnamedblk1_1__DOT____Vrepeat0 = 0;
    unnamedblk1_1__DOT____Vrepeat0 = n;
    while (VL_LTS_III(32, 0U, unnamedblk1_1__DOT____Vrepeat0)) {
        ::CData/*0:0*/ __VdynTrigger_hea9bcd31__0;
        __VdynTrigger_hea9bcd31__0 = 0;
        __VdynTrigger_hea9bcd31__0 = 0U;
        if ((VlNull{} != this->__PVT__vif)) {
            __Vtrigprevexpr_hb53cd64a__0 = VL_NULL_CHECK(this->__PVT__vif, "mlp_driver.sv", 53)
                ->clk;
        }
        while ((1U & (~ (::IData)(__VdynTrigger_hea9bcd31__0)))) {
            co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.evaluation(
                                                                            vlProcess, 
                                                                            "@(posedge mlp_pkg::mlp_driver.vif.clk)", 
                                                                            "mlp_driver.sv", 
                                                                            53);
            __VdynTrigger_hea9bcd31__0 = ((VlNull{} 
                                           != this->__PVT__vif) 
                                          && (VL_NULL_CHECK(this->__PVT__vif, "mlp_driver.sv", 53)
                                              ->clk 
                                              & (~ (::IData)(__Vtrigprevexpr_hb53cd64a__0))));
            vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.anyTriggered(__VdynTrigger_hea9bcd31__0);
            if ((VlNull{} != this->__PVT__vif)) {
                __Vtrigprevexpr_hb53cd64a__0 = VL_NULL_CHECK(this->__PVT__vif, "mlp_driver.sv", 53)
                    ->clk;
            }
        }
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.resumption(
                                                                        vlProcess, 
                                                                        "@(posedge mlp_pkg::mlp_driver.vif.clk)", 
                                                                        "mlp_driver.sv", 
                                                                        53);
        unnamedblk1_1__DOT____Vrepeat0 = (unnamedblk1_1__DOT____Vrepeat0 
                                          - (::IData)(1U));
    }
    co_return;
}

VlCoroutine Vtb_top_mlp_pkg__03a__03amlp_driver::__VnoInFunc_wait_idle(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_top_mlp_pkg__03a__03amlp_driver::__VnoInFunc_wait_idle\n"); );
    // Locals
    ::CData/*0:0*/ __Vtrigprevexpr_hb53cd64a__2;
    __Vtrigprevexpr_hb53cd64a__2 = 0;
    ::CData/*0:0*/ __Vtrigprevexpr_hb53cd64a__1;
    __Vtrigprevexpr_hb53cd64a__1 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk3__DOT___local_report_object_;
    ::IData/*31:0*/ __Vincrement1;
    __Vincrement1 = 0;
    ::IData/*31:0*/ t;
    t = 0U;
    ::CData/*0:0*/ __VdynTrigger_hea9bcd31__1;
    __VdynTrigger_hea9bcd31__1 = 0;
    __VdynTrigger_hea9bcd31__1 = 0U;
    if ((VlNull{} != this->__PVT__vif)) {
        __Vtrigprevexpr_hb53cd64a__1 = VL_NULL_CHECK(this->__PVT__vif, "mlp_driver.sv", 59)
            ->clk;
    }
    while ((1U & (~ (::IData)(__VdynTrigger_hea9bcd31__1)))) {
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.evaluation(
                                                                        vlProcess, 
                                                                        "@(posedge mlp_pkg::mlp_driver.vif.clk)", 
                                                                        "mlp_driver.sv", 
                                                                        59);
        __VdynTrigger_hea9bcd31__1 = ((VlNull{} != this->__PVT__vif) 
                                      && (VL_NULL_CHECK(this->__PVT__vif, "mlp_driver.sv", 59)
                                          ->clk & (~ (::IData)(__Vtrigprevexpr_hb53cd64a__1))));
        vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.anyTriggered(__VdynTrigger_hea9bcd31__1);
        if ((VlNull{} != this->__PVT__vif)) {
            __Vtrigprevexpr_hb53cd64a__1 = VL_NULL_CHECK(this->__PVT__vif, "mlp_driver.sv", 59)
                ->clk;
        }
    }
    co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.resumption(
                                                                    vlProcess, 
                                                                    "@(posedge mlp_pkg::mlp_driver.vif.clk)", 
                                                                    "mlp_driver.sv", 
                                                                    59);
    while (VL_NULL_CHECK(this->__PVT__vif, "mlp_driver.sv", 60)
           ->busy) {
        ::CData/*0:0*/ __VdynTrigger_hea9bcd31__2;
        __VdynTrigger_hea9bcd31__2 = 0;
        __VdynTrigger_hea9bcd31__2 = 0U;
        if ((VlNull{} != this->__PVT__vif)) {
            __Vtrigprevexpr_hb53cd64a__2 = VL_NULL_CHECK(this->__PVT__vif, "mlp_driver.sv", 61)
                ->clk;
        }
        while ((1U & (~ (::IData)(__VdynTrigger_hea9bcd31__2)))) {
            co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.evaluation(
                                                                            vlProcess, 
                                                                            "@(posedge mlp_pkg::mlp_driver.vif.clk)", 
                                                                            "mlp_driver.sv", 
                                                                            61);
            __VdynTrigger_hea9bcd31__2 = ((VlNull{} 
                                           != this->__PVT__vif) 
                                          && (VL_NULL_CHECK(this->__PVT__vif, "mlp_driver.sv", 61)
                                              ->clk 
                                              & (~ (::IData)(__Vtrigprevexpr_hb53cd64a__2))));
            vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.anyTriggered(__VdynTrigger_hea9bcd31__2);
            if ((VlNull{} != this->__PVT__vif)) {
                __Vtrigprevexpr_hb53cd64a__2 = VL_NULL_CHECK(this->__PVT__vif, "mlp_driver.sv", 61)
                    ->clk;
            }
        }
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.resumption(
                                                                        vlProcess, 
                                                                        "@(posedge mlp_pkg::mlp_driver.vif.clk)", 
                                                                        "mlp_driver.sv", 
                                                                        61);
        t = ((::IData)(1U) + t);
        __Vincrement1 = t;
        if ((0x000007d0U < __Vincrement1)) {
            this->__VnoInFunc_uvm_get_report_object(vlSymsp, __VlefCall_0__uvm_get_report_object);
            VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "mlp_driver.sv", 63)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk3__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk3__DOT___local_report_object_, "mlp_driver.sv", 63)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 3U, "TIMEOUT"s, __VlefCall_1__get_report_verbosity_level);
            __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
            if (__VlefLogAnd_3) {
                VL_NULL_CHECK(unnamedblk3__DOT___local_report_object_, "mlp_driver.sv", 63)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 3U, "TIMEOUT"s, __VlefCall_2__get_report_action);
                __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_3))) {
                this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "TIMEOUT"s, "DUT still busy after 2000 cycles (out_ready stuck low?)"s, 0U, "mlp_driver.sv"s, 0x0000003fU, ""s, 1U);
            }
        }
    }
    co_return;
}

VlCoroutine Vtb_top_mlp_pkg__03a__03amlp_driver::__VnoInFunc_drive_input(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> it) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_top_mlp_pkg__03a__03amlp_driver::__VnoInFunc_drive_input\n"); );
    // Locals
    ::CData/*0:0*/ __Vtrigprevexpr_hb53cd64a__3;
    __Vtrigprevexpr_hb53cd64a__3 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::CData/*0:0*/ __VlefLogAnd_4;
    ::IData/*31:0*/ __VlefCall_3__get_report_action;
    ::IData/*31:0*/ __VlefCall_2__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_1__uvm_get_report_object;
    ::IData/*31:0*/ __VlefCall_0__get_xp;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk4__DOT___local_report_object_;
    ::IData/*31:0*/ __Vincrement2;
    __Vincrement2 = 0;
    ::IData/*31:0*/ t;
    t = 0U;
    VL_NULL_CHECK(it, "mlp_driver.sv", 69)->__VnoInFunc_get_xp(vlSymsp, __VlefCall_0__get_xp);
    vlSymsp->vlInst.TOP.__VnbaEventTrigger = 1U;
    ::IData/*31:0*/ __Vintraval_he493bc9f__0;
    __Vintraval_he493bc9f__0 = 0;
    __Vintraval_he493bc9f__0 = __VlefCall_0__get_xp;
    this->__VnoInFunc_drive_input____Vfork_2__0(vlSymsp, __Vintraval_he493bc9f__0);
    vlSymsp->vlInst.TOP.__VnbaEventTrigger = 1U;
    ::CData/*0:0*/ __Vintraval_hea5d657b__0;
    __Vintraval_hea5d657b__0 = 0;
    __Vintraval_hea5d657b__0 = 1U;
    this->__VnoInFunc_drive_input____Vfork_3__0(vlSymsp, __Vintraval_hea5d657b__0);
    {
        while (true) {
            ::CData/*0:0*/ __VdynTrigger_hea9bcd31__3;
            __VdynTrigger_hea9bcd31__3 = 0;
            __VdynTrigger_hea9bcd31__3 = 0U;
            if ((VlNull{} != this->__PVT__vif)) {
                __Vtrigprevexpr_hb53cd64a__3 = VL_NULL_CHECK(this->__PVT__vif, "mlp_driver.sv", 72)
                    ->clk;
            }
            while ((1U & (~ (::IData)(__VdynTrigger_hea9bcd31__3)))) {
                co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.evaluation(
                                                                                vlProcess, 
                                                                                "@(posedge mlp_pkg::mlp_driver.vif.clk)", 
                                                                                "mlp_driver.sv", 
                                                                                72);
                __VdynTrigger_hea9bcd31__3 = ((VlNull{} 
                                               != this->__PVT__vif) 
                                              && (VL_NULL_CHECK(this->__PVT__vif, "mlp_driver.sv", 72)
                                                  ->clk 
                                                  & (~ (::IData)(__Vtrigprevexpr_hb53cd64a__3))));
                vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.anyTriggered(__VdynTrigger_hea9bcd31__3);
                if ((VlNull{} != this->__PVT__vif)) {
                    __Vtrigprevexpr_hb53cd64a__3 = VL_NULL_CHECK(this->__PVT__vif, "mlp_driver.sv", 72)
                        ->clk;
                }
            }
            co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.resumption(
                                                                            vlProcess, 
                                                                            "@(posedge mlp_pkg::mlp_driver.vif.clk)", 
                                                                            "mlp_driver.sv", 
                                                                            72);
            if (VL_NULL_CHECK(this->__PVT__vif, "mlp_driver.sv", 73)
                ->in_ready) {
                goto __Vlabel0;
            }
            t = ((::IData)(1U) + t);
            __Vincrement2 = t;
            if ((0x000007d0U < __Vincrement2)) {
                this->__VnoInFunc_uvm_get_report_object(vlSymsp, __VlefCall_1__uvm_get_report_object);
                VL_NULL_CHECK(__VlefCall_1__uvm_get_report_object, "mlp_driver.sv", 75)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk4__DOT___local_report_object_);
                VL_NULL_CHECK(unnamedblk4__DOT___local_report_object_, "mlp_driver.sv", 75)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 3U, "TIMEOUT"s, __VlefCall_2__get_report_verbosity_level);
                __VlefLogAnd_4 = VL_LTES_III(32, 0U, __VlefCall_2__get_report_verbosity_level);
                if (__VlefLogAnd_4) {
                    VL_NULL_CHECK(unnamedblk4__DOT___local_report_object_, "mlp_driver.sv", 75)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 3U, "TIMEOUT"s, __VlefCall_3__get_report_action);
                    __VlefLogAnd_4 = (0U != __VlefCall_3__get_report_action);
                }
                if (VL_UNLIKELY((__VlefLogAnd_4))) {
                    this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "TIMEOUT"s, "in_ready stayed low for 2000 cycles"s, 0U, "mlp_driver.sv"s, 0x0000004bU, ""s, 1U);
                }
            }
        }
        __Vlabel0: ;
    }
    vlSymsp->vlInst.TOP.__VnbaEventTrigger = 1U;
    ::CData/*0:0*/ __Vintraval_hea59f4ce__0;
    __Vintraval_hea59f4ce__0 = 0;
    __Vintraval_hea59f4ce__0 = 0U;
    this->__VnoInFunc_drive_input____Vfork_4__0(vlSymsp, __Vintraval_hea59f4ce__0);
    this->__PVT__n_infer = ((::IData)(1U) + this->__PVT__n_infer);
    co_return;
}

VlCoroutine Vtb_top_mlp_pkg__03a__03amlp_driver::__VnoInFunc_drive_input____Vfork_4__0(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ __Vintraval_hea59f4ce__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_top_mlp_pkg__03a__03amlp_driver::__VnoInFunc_drive_input____Vfork_4__0\n"); );
    // Body
    VL_KEEP_THIS;
    ::CData/*0:0*/ __VdynTrigger_hd539cefb__2;
    __VdynTrigger_hd539cefb__2 = 0;
    __VdynTrigger_hd539cefb__2 = 0U;
    vlSymsp->vlInst.TOP.__Vnontrivs.__VnbaEvent.clearFired();
    while ((1U & (~ (::IData)(__VdynTrigger_hd539cefb__2)))) {
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.evaluation(
                                                                        nullptr, 
                                                                        "@([event] __VnbaEvent)", 
                                                                        "mlp_driver.sv", 
                                                                        77);
        __VdynTrigger_hd539cefb__2 = vlSymsp->vlInst.TOP.__Vnontrivs.__VnbaEvent.isFired();
        vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.anyTriggered(__VdynTrigger_hd539cefb__2);
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.postUpdate(
                                                                        nullptr, 
                                                                        "@([event] __VnbaEvent)", 
                                                                        "mlp_driver.sv", 
                                                                        77);
        vlSymsp->vlInst.TOP.__Vnontrivs.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.resumption(
                                                                    nullptr, 
                                                                    "@([event] __VnbaEvent)", 
                                                                    "mlp_driver.sv", 
                                                                    77);
    VL_NULL_CHECK(this->__PVT__vif, "mlp_driver.sv", 77)->in_valid 
        = __Vintraval_hea59f4ce__0;
    co_return;
}

VlCoroutine Vtb_top_mlp_pkg__03a__03amlp_driver::__VnoInFunc_drive_input____Vfork_3__0(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ __Vintraval_hea5d657b__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_top_mlp_pkg__03a__03amlp_driver::__VnoInFunc_drive_input____Vfork_3__0\n"); );
    // Body
    VL_KEEP_THIS;
    ::CData/*0:0*/ __VdynTrigger_hd539cefb__1;
    __VdynTrigger_hd539cefb__1 = 0;
    __VdynTrigger_hd539cefb__1 = 0U;
    vlSymsp->vlInst.TOP.__Vnontrivs.__VnbaEvent.clearFired();
    while ((1U & (~ (::IData)(__VdynTrigger_hd539cefb__1)))) {
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.evaluation(
                                                                        nullptr, 
                                                                        "@([event] __VnbaEvent)", 
                                                                        "mlp_driver.sv", 
                                                                        70);
        __VdynTrigger_hd539cefb__1 = vlSymsp->vlInst.TOP.__Vnontrivs.__VnbaEvent.isFired();
        vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.anyTriggered(__VdynTrigger_hd539cefb__1);
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.postUpdate(
                                                                        nullptr, 
                                                                        "@([event] __VnbaEvent)", 
                                                                        "mlp_driver.sv", 
                                                                        70);
        vlSymsp->vlInst.TOP.__Vnontrivs.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.resumption(
                                                                    nullptr, 
                                                                    "@([event] __VnbaEvent)", 
                                                                    "mlp_driver.sv", 
                                                                    70);
    VL_NULL_CHECK(this->__PVT__vif, "mlp_driver.sv", 70)->in_valid 
        = __Vintraval_hea5d657b__0;
    co_return;
}

VlCoroutine Vtb_top_mlp_pkg__03a__03amlp_driver::__VnoInFunc_drive_input____Vfork_2__0(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ __Vintraval_he493bc9f__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_top_mlp_pkg__03a__03amlp_driver::__VnoInFunc_drive_input____Vfork_2__0\n"); );
    // Body
    VL_KEEP_THIS;
    ::CData/*0:0*/ __VdynTrigger_hd539cefb__0;
    __VdynTrigger_hd539cefb__0 = 0;
    __VdynTrigger_hd539cefb__0 = 0U;
    vlSymsp->vlInst.TOP.__Vnontrivs.__VnbaEvent.clearFired();
    while ((1U & (~ (::IData)(__VdynTrigger_hd539cefb__0)))) {
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.evaluation(
                                                                        nullptr, 
                                                                        "@([event] __VnbaEvent)", 
                                                                        "mlp_driver.sv", 
                                                                        69);
        __VdynTrigger_hd539cefb__0 = vlSymsp->vlInst.TOP.__Vnontrivs.__VnbaEvent.isFired();
        vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.anyTriggered(__VdynTrigger_hd539cefb__0);
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.postUpdate(
                                                                        nullptr, 
                                                                        "@([event] __VnbaEvent)", 
                                                                        "mlp_driver.sv", 
                                                                        69);
        vlSymsp->vlInst.TOP.__Vnontrivs.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.resumption(
                                                                    nullptr, 
                                                                    "@([event] __VnbaEvent)", 
                                                                    "mlp_driver.sv", 
                                                                    69);
    VL_NULL_CHECK(this->__PVT__vif, "mlp_driver.sv", 69)->in_data 
        = __Vintraval_he493bc9f__0;
    co_return;
}

VlCoroutine Vtb_top_mlp_pkg__03a__03amlp_driver::__VnoInFunc_drive_cfg(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> it) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_top_mlp_pkg__03a__03amlp_driver::__VnoInFunc_drive_cfg\n"); );
    // Locals
    ::CData/*0:0*/ __Vtrigprevexpr_hb53cd64a__4;
    __Vtrigprevexpr_hb53cd64a__4 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    if ((1U & (~ VL_NULL_CHECK(it, "mlp_driver.sv", 82)
               ->__PVT__while_busy))) {
        co_await this->__VnoInFunc_wait_idle(vlProcess, vlSymsp);
    }
    vlSymsp->vlInst.TOP.__VnbaEventTrigger = 1U;
    ::CData/*4:0*/ __Vintraval_hc814fea0__0;
    __Vintraval_hc814fea0__0 = 0;
    __Vintraval_hc814fea0__0 = VL_NULL_CHECK(it, "mlp_driver.sv", 83)
        ->__PVT__addr;
    this->__VnoInFunc_drive_cfg____Vfork_5__0(vlSymsp, __Vintraval_hc814fea0__0);
    vlSymsp->vlInst.TOP.__VnbaEventTrigger = 1U;
    ::CData/*7:0*/ __Vintraval_h86fa03db__0;
    __Vintraval_h86fa03db__0 = 0;
    __Vintraval_h86fa03db__0 = VL_NULL_CHECK(it, "mlp_driver.sv", 84)
        ->__PVT__data;
    this->__VnoInFunc_drive_cfg____Vfork_6__0(vlSymsp, __Vintraval_h86fa03db__0);
    vlSymsp->vlInst.TOP.__VnbaEventTrigger = 1U;
    ::CData/*0:0*/ __Vintraval_hd7ccc867__0;
    __Vintraval_hd7ccc867__0 = 0;
    __Vintraval_hd7ccc867__0 = 1U;
    this->__VnoInFunc_drive_cfg____Vfork_7__0(vlSymsp, __Vintraval_hd7ccc867__0);
    if (VL_NULL_CHECK(it, "mlp_driver.sv", 86)->__PVT__collide) {
        vlSymsp->vlInst.TOP.__VnbaEventTrigger = 1U;
        ::IData/*31:0*/ __Vintraval_h0353828a__0;
        __Vintraval_h0353828a__0 = 0;
        __Vintraval_h0353828a__0 = VL_RANDOM_I();
        this->__VnoInFunc_drive_cfg____Vfork_8__0(vlSymsp, __Vintraval_h0353828a__0);
        vlSymsp->vlInst.TOP.__VnbaEventTrigger = 1U;
        ::CData/*0:0*/ __Vintraval_hea5d657b__1;
        __Vintraval_hea5d657b__1 = 0;
        __Vintraval_hea5d657b__1 = 1U;
        this->__VnoInFunc_drive_cfg____Vfork_9__0(vlSymsp, __Vintraval_hea5d657b__1);
    }
    ::CData/*0:0*/ __VdynTrigger_hea9bcd31__4;
    __VdynTrigger_hea9bcd31__4 = 0;
    __VdynTrigger_hea9bcd31__4 = 0U;
    if ((VlNull{} != this->__PVT__vif)) {
        __Vtrigprevexpr_hb53cd64a__4 = VL_NULL_CHECK(this->__PVT__vif, "mlp_driver.sv", 90)
            ->clk;
    }
    while ((1U & (~ (::IData)(__VdynTrigger_hea9bcd31__4)))) {
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.evaluation(
                                                                        vlProcess, 
                                                                        "@(posedge mlp_pkg::mlp_driver.vif.clk)", 
                                                                        "mlp_driver.sv", 
                                                                        90);
        __VdynTrigger_hea9bcd31__4 = ((VlNull{} != this->__PVT__vif) 
                                      && (VL_NULL_CHECK(this->__PVT__vif, "mlp_driver.sv", 90)
                                          ->clk & (~ (::IData)(__Vtrigprevexpr_hb53cd64a__4))));
        vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.anyTriggered(__VdynTrigger_hea9bcd31__4);
        if ((VlNull{} != this->__PVT__vif)) {
            __Vtrigprevexpr_hb53cd64a__4 = VL_NULL_CHECK(this->__PVT__vif, "mlp_driver.sv", 90)
                ->clk;
        }
    }
    co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.resumption(
                                                                    vlProcess, 
                                                                    "@(posedge mlp_pkg::mlp_driver.vif.clk)", 
                                                                    "mlp_driver.sv", 
                                                                    90);
    vlSymsp->vlInst.TOP.__VnbaEventTrigger = 1U;
    ::CData/*0:0*/ __Vintraval_hd7cb4032__0;
    __Vintraval_hd7cb4032__0 = 0;
    __Vintraval_hd7cb4032__0 = 0U;
    this->__VnoInFunc_drive_cfg____Vfork_10__0(vlSymsp, __Vintraval_hd7cb4032__0);
    if (VL_NULL_CHECK(it, "mlp_driver.sv", 92)->__PVT__collide) {
        vlSymsp->vlInst.TOP.__VnbaEventTrigger = 1U;
        ::CData/*0:0*/ __Vintraval_hea59f4ce__1;
        __Vintraval_hea59f4ce__1 = 0;
        __Vintraval_hea59f4ce__1 = 0U;
        this->__VnoInFunc_drive_cfg____Vfork_11__0(vlSymsp, __Vintraval_hea59f4ce__1);
    }
    this->__PVT__n_cfg = ((::IData)(1U) + this->__PVT__n_cfg);
    co_return;
}

VlCoroutine Vtb_top_mlp_pkg__03a__03amlp_driver::__VnoInFunc_drive_cfg____Vfork_11__0(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ __Vintraval_hea59f4ce__1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_top_mlp_pkg__03a__03amlp_driver::__VnoInFunc_drive_cfg____Vfork_11__0\n"); );
    // Body
    VL_KEEP_THIS;
    ::CData/*0:0*/ __VdynTrigger_hd539cefb__9;
    __VdynTrigger_hd539cefb__9 = 0;
    __VdynTrigger_hd539cefb__9 = 0U;
    vlSymsp->vlInst.TOP.__Vnontrivs.__VnbaEvent.clearFired();
    while ((1U & (~ (::IData)(__VdynTrigger_hd539cefb__9)))) {
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.evaluation(
                                                                        nullptr, 
                                                                        "@([event] __VnbaEvent)", 
                                                                        "mlp_driver.sv", 
                                                                        92);
        __VdynTrigger_hd539cefb__9 = vlSymsp->vlInst.TOP.__Vnontrivs.__VnbaEvent.isFired();
        vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.anyTriggered(__VdynTrigger_hd539cefb__9);
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.postUpdate(
                                                                        nullptr, 
                                                                        "@([event] __VnbaEvent)", 
                                                                        "mlp_driver.sv", 
                                                                        92);
        vlSymsp->vlInst.TOP.__Vnontrivs.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.resumption(
                                                                    nullptr, 
                                                                    "@([event] __VnbaEvent)", 
                                                                    "mlp_driver.sv", 
                                                                    92);
    VL_NULL_CHECK(this->__PVT__vif, "mlp_driver.sv", 92)->in_valid 
        = __Vintraval_hea59f4ce__1;
    co_return;
}

VlCoroutine Vtb_top_mlp_pkg__03a__03amlp_driver::__VnoInFunc_drive_cfg____Vfork_10__0(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ __Vintraval_hd7cb4032__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_top_mlp_pkg__03a__03amlp_driver::__VnoInFunc_drive_cfg____Vfork_10__0\n"); );
    // Body
    VL_KEEP_THIS;
    ::CData/*0:0*/ __VdynTrigger_hd539cefb__8;
    __VdynTrigger_hd539cefb__8 = 0;
    __VdynTrigger_hd539cefb__8 = 0U;
    vlSymsp->vlInst.TOP.__Vnontrivs.__VnbaEvent.clearFired();
    while ((1U & (~ (::IData)(__VdynTrigger_hd539cefb__8)))) {
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.evaluation(
                                                                        nullptr, 
                                                                        "@([event] __VnbaEvent)", 
                                                                        "mlp_driver.sv", 
                                                                        91);
        __VdynTrigger_hd539cefb__8 = vlSymsp->vlInst.TOP.__Vnontrivs.__VnbaEvent.isFired();
        vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.anyTriggered(__VdynTrigger_hd539cefb__8);
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.postUpdate(
                                                                        nullptr, 
                                                                        "@([event] __VnbaEvent)", 
                                                                        "mlp_driver.sv", 
                                                                        91);
        vlSymsp->vlInst.TOP.__Vnontrivs.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.resumption(
                                                                    nullptr, 
                                                                    "@([event] __VnbaEvent)", 
                                                                    "mlp_driver.sv", 
                                                                    91);
    VL_NULL_CHECK(this->__PVT__vif, "mlp_driver.sv", 91)->wr_en 
        = __Vintraval_hd7cb4032__0;
    co_return;
}

VlCoroutine Vtb_top_mlp_pkg__03a__03amlp_driver::__VnoInFunc_drive_cfg____Vfork_9__0(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ __Vintraval_hea5d657b__1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_top_mlp_pkg__03a__03amlp_driver::__VnoInFunc_drive_cfg____Vfork_9__0\n"); );
    // Body
    VL_KEEP_THIS;
    ::CData/*0:0*/ __VdynTrigger_hd539cefb__7;
    __VdynTrigger_hd539cefb__7 = 0;
    __VdynTrigger_hd539cefb__7 = 0U;
    vlSymsp->vlInst.TOP.__Vnontrivs.__VnbaEvent.clearFired();
    while ((1U & (~ (::IData)(__VdynTrigger_hd539cefb__7)))) {
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.evaluation(
                                                                        nullptr, 
                                                                        "@([event] __VnbaEvent)", 
                                                                        "mlp_driver.sv", 
                                                                        88);
        __VdynTrigger_hd539cefb__7 = vlSymsp->vlInst.TOP.__Vnontrivs.__VnbaEvent.isFired();
        vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.anyTriggered(__VdynTrigger_hd539cefb__7);
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.postUpdate(
                                                                        nullptr, 
                                                                        "@([event] __VnbaEvent)", 
                                                                        "mlp_driver.sv", 
                                                                        88);
        vlSymsp->vlInst.TOP.__Vnontrivs.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.resumption(
                                                                    nullptr, 
                                                                    "@([event] __VnbaEvent)", 
                                                                    "mlp_driver.sv", 
                                                                    88);
    VL_NULL_CHECK(this->__PVT__vif, "mlp_driver.sv", 88)->in_valid 
        = __Vintraval_hea5d657b__1;
    co_return;
}

VlCoroutine Vtb_top_mlp_pkg__03a__03amlp_driver::__VnoInFunc_drive_cfg____Vfork_8__0(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ __Vintraval_h0353828a__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_top_mlp_pkg__03a__03amlp_driver::__VnoInFunc_drive_cfg____Vfork_8__0\n"); );
    // Body
    VL_KEEP_THIS;
    ::CData/*0:0*/ __VdynTrigger_hd539cefb__6;
    __VdynTrigger_hd539cefb__6 = 0;
    __VdynTrigger_hd539cefb__6 = 0U;
    vlSymsp->vlInst.TOP.__Vnontrivs.__VnbaEvent.clearFired();
    while ((1U & (~ (::IData)(__VdynTrigger_hd539cefb__6)))) {
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.evaluation(
                                                                        nullptr, 
                                                                        "@([event] __VnbaEvent)", 
                                                                        "mlp_driver.sv", 
                                                                        87);
        __VdynTrigger_hd539cefb__6 = vlSymsp->vlInst.TOP.__Vnontrivs.__VnbaEvent.isFired();
        vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.anyTriggered(__VdynTrigger_hd539cefb__6);
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.postUpdate(
                                                                        nullptr, 
                                                                        "@([event] __VnbaEvent)", 
                                                                        "mlp_driver.sv", 
                                                                        87);
        vlSymsp->vlInst.TOP.__Vnontrivs.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.resumption(
                                                                    nullptr, 
                                                                    "@([event] __VnbaEvent)", 
                                                                    "mlp_driver.sv", 
                                                                    87);
    VL_NULL_CHECK(this->__PVT__vif, "mlp_driver.sv", 87)->in_data 
        = __Vintraval_h0353828a__0;
    co_return;
}

VlCoroutine Vtb_top_mlp_pkg__03a__03amlp_driver::__VnoInFunc_drive_cfg____Vfork_7__0(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ __Vintraval_hd7ccc867__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_top_mlp_pkg__03a__03amlp_driver::__VnoInFunc_drive_cfg____Vfork_7__0\n"); );
    // Body
    VL_KEEP_THIS;
    ::CData/*0:0*/ __VdynTrigger_hd539cefb__5;
    __VdynTrigger_hd539cefb__5 = 0;
    __VdynTrigger_hd539cefb__5 = 0U;
    vlSymsp->vlInst.TOP.__Vnontrivs.__VnbaEvent.clearFired();
    while ((1U & (~ (::IData)(__VdynTrigger_hd539cefb__5)))) {
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.evaluation(
                                                                        nullptr, 
                                                                        "@([event] __VnbaEvent)", 
                                                                        "mlp_driver.sv", 
                                                                        85);
        __VdynTrigger_hd539cefb__5 = vlSymsp->vlInst.TOP.__Vnontrivs.__VnbaEvent.isFired();
        vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.anyTriggered(__VdynTrigger_hd539cefb__5);
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.postUpdate(
                                                                        nullptr, 
                                                                        "@([event] __VnbaEvent)", 
                                                                        "mlp_driver.sv", 
                                                                        85);
        vlSymsp->vlInst.TOP.__Vnontrivs.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.resumption(
                                                                    nullptr, 
                                                                    "@([event] __VnbaEvent)", 
                                                                    "mlp_driver.sv", 
                                                                    85);
    VL_NULL_CHECK(this->__PVT__vif, "mlp_driver.sv", 85)->wr_en 
        = __Vintraval_hd7ccc867__0;
    co_return;
}

VlCoroutine Vtb_top_mlp_pkg__03a__03amlp_driver::__VnoInFunc_drive_cfg____Vfork_6__0(Vtb_top__Syms* __restrict vlSymsp, ::CData/*7:0*/ __Vintraval_h86fa03db__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_top_mlp_pkg__03a__03amlp_driver::__VnoInFunc_drive_cfg____Vfork_6__0\n"); );
    // Body
    VL_KEEP_THIS;
    ::CData/*0:0*/ __VdynTrigger_hd539cefb__4;
    __VdynTrigger_hd539cefb__4 = 0;
    __VdynTrigger_hd539cefb__4 = 0U;
    vlSymsp->vlInst.TOP.__Vnontrivs.__VnbaEvent.clearFired();
    while ((1U & (~ (::IData)(__VdynTrigger_hd539cefb__4)))) {
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.evaluation(
                                                                        nullptr, 
                                                                        "@([event] __VnbaEvent)", 
                                                                        "mlp_driver.sv", 
                                                                        84);
        __VdynTrigger_hd539cefb__4 = vlSymsp->vlInst.TOP.__Vnontrivs.__VnbaEvent.isFired();
        vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.anyTriggered(__VdynTrigger_hd539cefb__4);
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.postUpdate(
                                                                        nullptr, 
                                                                        "@([event] __VnbaEvent)", 
                                                                        "mlp_driver.sv", 
                                                                        84);
        vlSymsp->vlInst.TOP.__Vnontrivs.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.resumption(
                                                                    nullptr, 
                                                                    "@([event] __VnbaEvent)", 
                                                                    "mlp_driver.sv", 
                                                                    84);
    VL_NULL_CHECK(this->__PVT__vif, "mlp_driver.sv", 84)->wr_data 
        = __Vintraval_h86fa03db__0;
    co_return;
}

VlCoroutine Vtb_top_mlp_pkg__03a__03amlp_driver::__VnoInFunc_drive_cfg____Vfork_5__0(Vtb_top__Syms* __restrict vlSymsp, ::CData/*4:0*/ __Vintraval_hc814fea0__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_top_mlp_pkg__03a__03amlp_driver::__VnoInFunc_drive_cfg____Vfork_5__0\n"); );
    // Body
    VL_KEEP_THIS;
    ::CData/*0:0*/ __VdynTrigger_hd539cefb__3;
    __VdynTrigger_hd539cefb__3 = 0;
    __VdynTrigger_hd539cefb__3 = 0U;
    vlSymsp->vlInst.TOP.__Vnontrivs.__VnbaEvent.clearFired();
    while ((1U & (~ (::IData)(__VdynTrigger_hd539cefb__3)))) {
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.evaluation(
                                                                        nullptr, 
                                                                        "@([event] __VnbaEvent)", 
                                                                        "mlp_driver.sv", 
                                                                        83);
        __VdynTrigger_hd539cefb__3 = vlSymsp->vlInst.TOP.__Vnontrivs.__VnbaEvent.isFired();
        vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.anyTriggered(__VdynTrigger_hd539cefb__3);
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.postUpdate(
                                                                        nullptr, 
                                                                        "@([event] __VnbaEvent)", 
                                                                        "mlp_driver.sv", 
                                                                        83);
        vlSymsp->vlInst.TOP.__Vnontrivs.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.resumption(
                                                                    nullptr, 
                                                                    "@([event] __VnbaEvent)", 
                                                                    "mlp_driver.sv", 
                                                                    83);
    VL_NULL_CHECK(this->__PVT__vif, "mlp_driver.sv", 83)->wr_addr 
        = __Vintraval_hc814fea0__0;
    co_return;
}

VlCoroutine Vtb_top_mlp_pkg__03a__03amlp_driver::__VnoInFunc_apply_reset(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ hold) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_top_mlp_pkg__03a__03amlp_driver::__VnoInFunc_apply_reset\n"); );
    // Locals
    ::CData/*0:0*/ __Vtrigprevexpr_hb53cd64a__6;
    __Vtrigprevexpr_hb53cd64a__6 = 0;
    ::CData/*0:0*/ __Vtrigprevexpr_hb53cd64a__5;
    __Vtrigprevexpr_hb53cd64a__5 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::IData/*31:0*/ unnamedblk1_2__DOT____Vrepeat1;
    unnamedblk1_2__DOT____Vrepeat1 = 0;
    vlSymsp->vlInst.TOP.__VnbaEventTrigger = 1U;
    this->__VnoInFunc_apply_reset____Vfork_12__0(vlSymsp, 0U);
    vlSymsp->vlInst.TOP.__VnbaEventTrigger = 1U;
    ::CData/*0:0*/ __Vintraval_hea59f4ce__2;
    __Vintraval_hea59f4ce__2 = 0;
    __Vintraval_hea59f4ce__2 = 0U;
    this->__VnoInFunc_apply_reset____Vfork_13__0(vlSymsp, __Vintraval_hea59f4ce__2);
    vlSymsp->vlInst.TOP.__VnbaEventTrigger = 1U;
    ::CData/*0:0*/ __Vintraval_h0b5d038a__0;
    __Vintraval_h0b5d038a__0 = 0;
    __Vintraval_h0b5d038a__0 = 0U;
    this->__VnoInFunc_apply_reset____Vfork_14__0(vlSymsp, __Vintraval_h0b5d038a__0);
    unnamedblk1_2__DOT____Vrepeat1 = hold;
    while (VL_LTS_III(32, 0U, unnamedblk1_2__DOT____Vrepeat1)) {
        ::CData/*0:0*/ __VdynTrigger_hea9bcd31__5;
        __VdynTrigger_hea9bcd31__5 = 0;
        __VdynTrigger_hea9bcd31__5 = 0U;
        if ((VlNull{} != this->__PVT__vif)) {
            __Vtrigprevexpr_hb53cd64a__5 = VL_NULL_CHECK(this->__PVT__vif, "mlp_driver.sv", 100)
                ->clk;
        }
        while ((1U & (~ (::IData)(__VdynTrigger_hea9bcd31__5)))) {
            co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.evaluation(
                                                                            vlProcess, 
                                                                            "@(posedge mlp_pkg::mlp_driver.vif.clk)", 
                                                                            "mlp_driver.sv", 
                                                                            100);
            __VdynTrigger_hea9bcd31__5 = ((VlNull{} 
                                           != this->__PVT__vif) 
                                          && (VL_NULL_CHECK(this->__PVT__vif, "mlp_driver.sv", 100)
                                              ->clk 
                                              & (~ (::IData)(__Vtrigprevexpr_hb53cd64a__5))));
            vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.anyTriggered(__VdynTrigger_hea9bcd31__5);
            if ((VlNull{} != this->__PVT__vif)) {
                __Vtrigprevexpr_hb53cd64a__5 = VL_NULL_CHECK(this->__PVT__vif, "mlp_driver.sv", 100)
                    ->clk;
            }
        }
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.resumption(
                                                                        vlProcess, 
                                                                        "@(posedge mlp_pkg::mlp_driver.vif.clk)", 
                                                                        "mlp_driver.sv", 
                                                                        100);
        unnamedblk1_2__DOT____Vrepeat1 = (unnamedblk1_2__DOT____Vrepeat1 
                                          - (::IData)(1U));
    }
    vlSymsp->vlInst.TOP.__VnbaEventTrigger = 1U;
    ::CData/*0:0*/ __Vintraval_h0b5eb3bf__0;
    __Vintraval_h0b5eb3bf__0 = 0;
    __Vintraval_h0b5eb3bf__0 = 1U;
    this->__VnoInFunc_apply_reset____Vfork_15__0(vlSymsp, __Vintraval_h0b5eb3bf__0);
    ::CData/*0:0*/ __VdynTrigger_hea9bcd31__6;
    __VdynTrigger_hea9bcd31__6 = 0;
    __VdynTrigger_hea9bcd31__6 = 0U;
    if ((VlNull{} != this->__PVT__vif)) {
        __Vtrigprevexpr_hb53cd64a__6 = VL_NULL_CHECK(this->__PVT__vif, "mlp_driver.sv", 102)
            ->clk;
    }
    while ((1U & (~ (::IData)(__VdynTrigger_hea9bcd31__6)))) {
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.evaluation(
                                                                        vlProcess, 
                                                                        "@(posedge mlp_pkg::mlp_driver.vif.clk)", 
                                                                        "mlp_driver.sv", 
                                                                        102);
        __VdynTrigger_hea9bcd31__6 = ((VlNull{} != this->__PVT__vif) 
                                      && (VL_NULL_CHECK(this->__PVT__vif, "mlp_driver.sv", 102)
                                          ->clk & (~ (::IData)(__Vtrigprevexpr_hb53cd64a__6))));
        vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.anyTriggered(__VdynTrigger_hea9bcd31__6);
        if ((VlNull{} != this->__PVT__vif)) {
            __Vtrigprevexpr_hb53cd64a__6 = VL_NULL_CHECK(this->__PVT__vif, "mlp_driver.sv", 102)
                ->clk;
        }
    }
    co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.resumption(
                                                                    vlProcess, 
                                                                    "@(posedge mlp_pkg::mlp_driver.vif.clk)", 
                                                                    "mlp_driver.sv", 
                                                                    102);
    co_return;
}

VlCoroutine Vtb_top_mlp_pkg__03a__03amlp_driver::__VnoInFunc_apply_reset____Vfork_15__0(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ __Vintraval_h0b5eb3bf__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_top_mlp_pkg__03a__03amlp_driver::__VnoInFunc_apply_reset____Vfork_15__0\n"); );
    // Body
    VL_KEEP_THIS;
    ::CData/*0:0*/ __VdynTrigger_hd539cefb__13;
    __VdynTrigger_hd539cefb__13 = 0;
    __VdynTrigger_hd539cefb__13 = 0U;
    vlSymsp->vlInst.TOP.__Vnontrivs.__VnbaEvent.clearFired();
    while ((1U & (~ (::IData)(__VdynTrigger_hd539cefb__13)))) {
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.evaluation(
                                                                        nullptr, 
                                                                        "@([event] __VnbaEvent)", 
                                                                        "mlp_driver.sv", 
                                                                        101);
        __VdynTrigger_hd539cefb__13 = vlSymsp->vlInst.TOP.__Vnontrivs.__VnbaEvent.isFired();
        vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.anyTriggered(__VdynTrigger_hd539cefb__13);
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.postUpdate(
                                                                        nullptr, 
                                                                        "@([event] __VnbaEvent)", 
                                                                        "mlp_driver.sv", 
                                                                        101);
        vlSymsp->vlInst.TOP.__Vnontrivs.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.resumption(
                                                                    nullptr, 
                                                                    "@([event] __VnbaEvent)", 
                                                                    "mlp_driver.sv", 
                                                                    101);
    VL_NULL_CHECK(this->__PVT__vif, "mlp_driver.sv", 101)->rst_n 
        = __Vintraval_h0b5eb3bf__0;
    co_return;
}

VlCoroutine Vtb_top_mlp_pkg__03a__03amlp_driver::__VnoInFunc_apply_reset____Vfork_14__0(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ __Vintraval_h0b5d038a__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_top_mlp_pkg__03a__03amlp_driver::__VnoInFunc_apply_reset____Vfork_14__0\n"); );
    // Body
    VL_KEEP_THIS;
    ::CData/*0:0*/ __VdynTrigger_hd539cefb__12;
    __VdynTrigger_hd539cefb__12 = 0;
    __VdynTrigger_hd539cefb__12 = 0U;
    vlSymsp->vlInst.TOP.__Vnontrivs.__VnbaEvent.clearFired();
    while ((1U & (~ (::IData)(__VdynTrigger_hd539cefb__12)))) {
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.evaluation(
                                                                        nullptr, 
                                                                        "@([event] __VnbaEvent)", 
                                                                        "mlp_driver.sv", 
                                                                        99);
        __VdynTrigger_hd539cefb__12 = vlSymsp->vlInst.TOP.__Vnontrivs.__VnbaEvent.isFired();
        vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.anyTriggered(__VdynTrigger_hd539cefb__12);
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.postUpdate(
                                                                        nullptr, 
                                                                        "@([event] __VnbaEvent)", 
                                                                        "mlp_driver.sv", 
                                                                        99);
        vlSymsp->vlInst.TOP.__Vnontrivs.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.resumption(
                                                                    nullptr, 
                                                                    "@([event] __VnbaEvent)", 
                                                                    "mlp_driver.sv", 
                                                                    99);
    VL_NULL_CHECK(this->__PVT__vif, "mlp_driver.sv", 99)->rst_n 
        = __Vintraval_h0b5d038a__0;
    co_return;
}

VlCoroutine Vtb_top_mlp_pkg__03a__03amlp_driver::__VnoInFunc_apply_reset____Vfork_13__0(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ __Vintraval_hea59f4ce__2) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_top_mlp_pkg__03a__03amlp_driver::__VnoInFunc_apply_reset____Vfork_13__0\n"); );
    // Body
    VL_KEEP_THIS;
    ::CData/*0:0*/ __VdynTrigger_hd539cefb__11;
    __VdynTrigger_hd539cefb__11 = 0;
    __VdynTrigger_hd539cefb__11 = 0U;
    vlSymsp->vlInst.TOP.__Vnontrivs.__VnbaEvent.clearFired();
    while ((1U & (~ (::IData)(__VdynTrigger_hd539cefb__11)))) {
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.evaluation(
                                                                        nullptr, 
                                                                        "@([event] __VnbaEvent)", 
                                                                        "mlp_driver.sv", 
                                                                        98);
        __VdynTrigger_hd539cefb__11 = vlSymsp->vlInst.TOP.__Vnontrivs.__VnbaEvent.isFired();
        vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.anyTriggered(__VdynTrigger_hd539cefb__11);
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.postUpdate(
                                                                        nullptr, 
                                                                        "@([event] __VnbaEvent)", 
                                                                        "mlp_driver.sv", 
                                                                        98);
        vlSymsp->vlInst.TOP.__Vnontrivs.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.resumption(
                                                                    nullptr, 
                                                                    "@([event] __VnbaEvent)", 
                                                                    "mlp_driver.sv", 
                                                                    98);
    VL_NULL_CHECK(this->__PVT__vif, "mlp_driver.sv", 98)->in_valid 
        = __Vintraval_hea59f4ce__2;
    co_return;
}

VlCoroutine Vtb_top_mlp_pkg__03a__03amlp_driver::__VnoInFunc_apply_reset____Vfork_12__0(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ __Vintraval_hd7cb4032__1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_top_mlp_pkg__03a__03amlp_driver::__VnoInFunc_apply_reset____Vfork_12__0\n"); );
    // Body
    VL_KEEP_THIS;
    ::CData/*0:0*/ __VdynTrigger_hd539cefb__10;
    __VdynTrigger_hd539cefb__10 = 0;
    __VdynTrigger_hd539cefb__10 = 0U;
    vlSymsp->vlInst.TOP.__Vnontrivs.__VnbaEvent.clearFired();
    while ((1U & (~ (::IData)(__VdynTrigger_hd539cefb__10)))) {
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.evaluation(
                                                                        nullptr, 
                                                                        "@([event] __VnbaEvent)", 
                                                                        "mlp_driver.sv", 
                                                                        97);
        __VdynTrigger_hd539cefb__10 = vlSymsp->vlInst.TOP.__Vnontrivs.__VnbaEvent.isFired();
        vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.anyTriggered(__VdynTrigger_hd539cefb__10);
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.postUpdate(
                                                                        nullptr, 
                                                                        "@([event] __VnbaEvent)", 
                                                                        "mlp_driver.sv", 
                                                                        97);
        vlSymsp->vlInst.TOP.__Vnontrivs.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.resumption(
                                                                    nullptr, 
                                                                    "@([event] __VnbaEvent)", 
                                                                    "mlp_driver.sv", 
                                                                    97);
    VL_NULL_CHECK(this->__PVT__vif, "mlp_driver.sv", 97)->wr_en 
        = __Vintraval_hd7cb4032__1;
    co_return;
}

extern const ::VlUnpacked<::std::string, 8> Vtb_top__ConstPool__CONSARRAY_12;

VlCoroutine Vtb_top_mlp_pkg__03a__03amlp_driver::__VnoInFunc_drive_reset(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> it) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_top_mlp_pkg__03a__03amlp_driver::__VnoInFunc_drive_reset\n"); );
    // Locals
    ::CData/*0:0*/ __Vtrigprevexpr_hb53cd64a__7;
    __Vtrigprevexpr_hb53cd64a__7 = 0;
    ::IData/*31:0*/ __Vfunc_stage_of__w_80;
    __Vfunc_stage_of__w_80 = 0;
    ::std::string __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::CData/*0:0*/ __VlefLogAnd_4;
    ::IData/*31:0*/ __VlefCall_3__get_report_action;
    ::IData/*31:0*/ __VlefCall_2__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_1__uvm_get_report_object;
    ::CData/*1:0*/ __VlefCall_0__stage_of;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk5__DOT___local_report_object_;
    ::IData/*31:0*/ __Vincrement3;
    __Vincrement3 = 0;
    ::IData/*31:0*/ t;
    t = 0U;
    if ((0U != VL_NULL_CHECK(it, "mlp_driver.sv", 107)
         ->__PVT__rst_when)) {
        {
            while (true) {
                ::CData/*0:0*/ __VdynTrigger_hea9bcd31__7;
                __VdynTrigger_hea9bcd31__7 = 0;
                __VdynTrigger_hea9bcd31__7 = 0U;
                if ((VlNull{} != this->__PVT__vif)) {
                    __Vtrigprevexpr_hb53cd64a__7 = VL_NULL_CHECK(this->__PVT__vif, "mlp_driver.sv", 109)
                        ->clk;
                }
                while ((1U & (~ (::IData)(__VdynTrigger_hea9bcd31__7)))) {
                    co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.evaluation(
                                                                                vlProcess, 
                                                                                "@(posedge mlp_pkg::mlp_driver.vif.clk)", 
                                                                                "mlp_driver.sv", 
                                                                                109);
                    __VdynTrigger_hea9bcd31__7 = ((VlNull{} 
                                                   != this->__PVT__vif) 
                                                  && (VL_NULL_CHECK(this->__PVT__vif, "mlp_driver.sv", 109)
                                                      ->clk 
                                                      & (~ (::IData)(__Vtrigprevexpr_hb53cd64a__7))));
                    vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.anyTriggered(__VdynTrigger_hea9bcd31__7);
                    if ((VlNull{} != this->__PVT__vif)) {
                        __Vtrigprevexpr_hb53cd64a__7 
                            = VL_NULL_CHECK(this->__PVT__vif, "mlp_driver.sv", 109)
                            ->clk;
                    }
                }
                co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.resumption(
                                                                                vlProcess, 
                                                                                "@(posedge mlp_pkg::mlp_driver.vif.clk)", 
                                                                                "mlp_driver.sv", 
                                                                                109);
                __Vfunc_stage_of__w_80 = VL_NULL_CHECK(it, "mlp_driver.sv", 110)
                    ->__PVT__rst_when;
                __VlefCall_0__stage_of = 0U;
                __VlefCall_0__stage_of = ((2U == __Vfunc_stage_of__w_80)
                                           ? 2U : (
                                                   (3U 
                                                    == __Vfunc_stage_of__w_80)
                                                    ? 1U
                                                    : 
                                                   ((4U 
                                                     == __Vfunc_stage_of__w_80)
                                                     ? 3U
                                                     : 0U)));
                if ((VL_NULL_CHECK(this->__PVT__vif, "mlp_driver.sv", 110)
                     ->dbg_stage == (::IData)(__VlefCall_0__stage_of))) {
                    goto __Vlabel0;
                }
                t = ((::IData)(1U) + t);
                __Vincrement3 = t;
                if ((0x00000032U < __Vincrement3)) {
                    this->__VnoInFunc_uvm_get_report_object(vlSymsp, __VlefCall_1__uvm_get_report_object);
                    VL_NULL_CHECK(__VlefCall_1__uvm_get_report_object, "mlp_driver.sv", 113)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk5__DOT___local_report_object_);
                    VL_NULL_CHECK(unnamedblk5__DOT___local_report_object_, "mlp_driver.sv", 113)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "RST_STAGE"s, __VlefCall_2__get_report_verbosity_level);
                    __VlefLogAnd_4 = VL_LTES_III(32, 0U, __VlefCall_2__get_report_verbosity_level);
                    if (__VlefLogAnd_4) {
                        VL_NULL_CHECK(unnamedblk5__DOT___local_report_object_, "mlp_driver.sv", 113)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "RST_STAGE"s, __VlefCall_3__get_report_action);
                        __VlefLogAnd_4 = (0U != __VlefCall_3__get_report_action);
                    }
                    if (VL_UNLIKELY((__VlefLogAnd_4))) {
                        __Vtemp_1 = ((4U < VL_NULL_CHECK(it, "mlp_driver.sv", 113)
                                      ->__PVT__rst_when)
                                      ? ""s : Vtb_top__ConstPool__CONSARRAY_12
                                     [(7U & VL_NULL_CHECK(it, "mlp_driver.sv", 113)
                                       ->__PVT__rst_when)]);
                        this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "RST_STAGE"s, VL_SFORMATF_N_NX("state %s not reached in 50 cycles - resetting anyway",1
                                                                                , 'S',&(__Vtemp_1)) , 0U, "mlp_driver.sv"s, 0x00000071U, ""s, 1U);
                    }
                    goto __Vlabel0;
                }
            }
            __Vlabel0: ;
        }
    }
    co_await this->__VnoInFunc_apply_reset(vlProcess, vlSymsp, VL_NULL_CHECK(it, "mlp_driver.sv", 118)
                                           ->__PVT__rst_hold);
    this->__PVT__n_reset = ((::IData)(1U) + this->__PVT__n_reset);
    co_return;
}

VlCoroutine Vtb_top_mlp_pkg__03a__03amlp_driver::__VnoInFunc_ready_gen(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_top_mlp_pkg__03a__03amlp_driver::__VnoInFunc_ready_gen\n"); );
    // Locals
    ::CData/*0:0*/ __Vtrigprevexpr_hb53cd64a__8;
    __Vtrigprevexpr_hb53cd64a__8 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::IData/*31:0*/ __VlefExpr_0;
    while (true) {
        ::CData/*0:0*/ __VdynTrigger_hea9bcd31__8;
        __VdynTrigger_hea9bcd31__8 = 0;
        __VdynTrigger_hea9bcd31__8 = 0U;
        if ((VlNull{} != this->__PVT__vif)) {
            __Vtrigprevexpr_hb53cd64a__8 = VL_NULL_CHECK(this->__PVT__vif, "mlp_driver.sv", 125)
                ->clk;
        }
        while ((1U & (~ (::IData)(__VdynTrigger_hea9bcd31__8)))) {
            co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.evaluation(
                                                                            vlProcess, 
                                                                            "@(posedge mlp_pkg::mlp_driver.vif.clk)", 
                                                                            "mlp_driver.sv", 
                                                                            125);
            __VdynTrigger_hea9bcd31__8 = ((VlNull{} 
                                           != this->__PVT__vif) 
                                          && (VL_NULL_CHECK(this->__PVT__vif, "mlp_driver.sv", 125)
                                              ->clk 
                                              & (~ (::IData)(__Vtrigprevexpr_hb53cd64a__8))));
            vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.anyTriggered(__VdynTrigger_hea9bcd31__8);
            if ((VlNull{} != this->__PVT__vif)) {
                __Vtrigprevexpr_hb53cd64a__8 = VL_NULL_CHECK(this->__PVT__vif, "mlp_driver.sv", 125)
                    ->clk;
            }
        }
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.resumption(
                                                                        vlProcess, 
                                                                        "@(posedge mlp_pkg::mlp_driver.vif.clk)", 
                                                                        "mlp_driver.sv", 
                                                                        125);
        if ((0x00000064U <= this->__PVT__ready_pct)) {
            vlSymsp->vlInst.TOP.__VnbaEventTrigger = 1U;
            ::CData/*0:0*/ __Vintraval_h90dc9676__0;
            __Vintraval_h90dc9676__0 = 0;
            __Vintraval_h90dc9676__0 = 1U;
            this->__VnoInFunc_ready_gen____Vfork_16__0(vlSymsp, __Vintraval_h90dc9676__0);
        } else if ((0U == this->__PVT__ready_pct)) {
            vlSymsp->vlInst.TOP.__VnbaEventTrigger = 1U;
            ::CData/*0:0*/ __Vintraval_h90d9e201__0;
            __Vintraval_h90d9e201__0 = 0;
            __Vintraval_h90d9e201__0 = 0U;
            this->__VnoInFunc_ready_gen____Vfork_17__0(vlSymsp, __Vintraval_h90d9e201__0);
        } else {
            __VlefExpr_0 = VL_URANDOM_RANGE_I(0x00000063U, 0U);
            vlSymsp->vlInst.TOP.__VnbaEventTrigger = 1U;
            ::CData/*0:0*/ __Vintraval_h3aaabfd6__0;
            __Vintraval_h3aaabfd6__0 = 0;
            __Vintraval_h3aaabfd6__0 = (__VlefExpr_0 
                                        < this->__PVT__ready_pct);
            this->__VnoInFunc_ready_gen____Vfork_18__0(vlSymsp, __Vintraval_h3aaabfd6__0);
        }
        if ((0U != this->__PVT__ready_left)) {
            this->__PVT__ready_left = (this->__PVT__ready_left 
                                       - (::IData)(1U));
            if ((0U == this->__PVT__ready_left)) {
                this->__PVT__ready_pct = 0x00000064U;
            }
        }
    }
    co_return;
}

VlCoroutine Vtb_top_mlp_pkg__03a__03amlp_driver::__VnoInFunc_ready_gen____Vfork_18__0(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ __Vintraval_h3aaabfd6__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_top_mlp_pkg__03a__03amlp_driver::__VnoInFunc_ready_gen____Vfork_18__0\n"); );
    // Body
    VL_KEEP_THIS;
    ::CData/*0:0*/ __VdynTrigger_hd539cefb__16;
    __VdynTrigger_hd539cefb__16 = 0;
    __VdynTrigger_hd539cefb__16 = 0U;
    vlSymsp->vlInst.TOP.__Vnontrivs.__VnbaEvent.clearFired();
    while ((1U & (~ (::IData)(__VdynTrigger_hd539cefb__16)))) {
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.evaluation(
                                                                        nullptr, 
                                                                        "@([event] __VnbaEvent)", 
                                                                        "mlp_driver.sv", 
                                                                        128);
        __VdynTrigger_hd539cefb__16 = vlSymsp->vlInst.TOP.__Vnontrivs.__VnbaEvent.isFired();
        vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.anyTriggered(__VdynTrigger_hd539cefb__16);
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.postUpdate(
                                                                        nullptr, 
                                                                        "@([event] __VnbaEvent)", 
                                                                        "mlp_driver.sv", 
                                                                        128);
        vlSymsp->vlInst.TOP.__Vnontrivs.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.resumption(
                                                                    nullptr, 
                                                                    "@([event] __VnbaEvent)", 
                                                                    "mlp_driver.sv", 
                                                                    128);
    VL_NULL_CHECK(this->__PVT__vif, "mlp_driver.sv", 128)->out_ready 
        = __Vintraval_h3aaabfd6__0;
    co_return;
}

VlCoroutine Vtb_top_mlp_pkg__03a__03amlp_driver::__VnoInFunc_ready_gen____Vfork_17__0(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ __Vintraval_h90d9e201__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_top_mlp_pkg__03a__03amlp_driver::__VnoInFunc_ready_gen____Vfork_17__0\n"); );
    // Body
    VL_KEEP_THIS;
    ::CData/*0:0*/ __VdynTrigger_hd539cefb__15;
    __VdynTrigger_hd539cefb__15 = 0;
    __VdynTrigger_hd539cefb__15 = 0U;
    vlSymsp->vlInst.TOP.__Vnontrivs.__VnbaEvent.clearFired();
    while ((1U & (~ (::IData)(__VdynTrigger_hd539cefb__15)))) {
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.evaluation(
                                                                        nullptr, 
                                                                        "@([event] __VnbaEvent)", 
                                                                        "mlp_driver.sv", 
                                                                        127);
        __VdynTrigger_hd539cefb__15 = vlSymsp->vlInst.TOP.__Vnontrivs.__VnbaEvent.isFired();
        vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.anyTriggered(__VdynTrigger_hd539cefb__15);
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.postUpdate(
                                                                        nullptr, 
                                                                        "@([event] __VnbaEvent)", 
                                                                        "mlp_driver.sv", 
                                                                        127);
        vlSymsp->vlInst.TOP.__Vnontrivs.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.resumption(
                                                                    nullptr, 
                                                                    "@([event] __VnbaEvent)", 
                                                                    "mlp_driver.sv", 
                                                                    127);
    VL_NULL_CHECK(this->__PVT__vif, "mlp_driver.sv", 127)->out_ready 
        = __Vintraval_h90d9e201__0;
    co_return;
}

VlCoroutine Vtb_top_mlp_pkg__03a__03amlp_driver::__VnoInFunc_ready_gen____Vfork_16__0(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ __Vintraval_h90dc9676__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_top_mlp_pkg__03a__03amlp_driver::__VnoInFunc_ready_gen____Vfork_16__0\n"); );
    // Body
    VL_KEEP_THIS;
    ::CData/*0:0*/ __VdynTrigger_hd539cefb__14;
    __VdynTrigger_hd539cefb__14 = 0;
    __VdynTrigger_hd539cefb__14 = 0U;
    vlSymsp->vlInst.TOP.__Vnontrivs.__VnbaEvent.clearFired();
    while ((1U & (~ (::IData)(__VdynTrigger_hd539cefb__14)))) {
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.evaluation(
                                                                        nullptr, 
                                                                        "@([event] __VnbaEvent)", 
                                                                        "mlp_driver.sv", 
                                                                        126);
        __VdynTrigger_hd539cefb__14 = vlSymsp->vlInst.TOP.__Vnontrivs.__VnbaEvent.isFired();
        vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.anyTriggered(__VdynTrigger_hd539cefb__14);
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.postUpdate(
                                                                        nullptr, 
                                                                        "@([event] __VnbaEvent)", 
                                                                        "mlp_driver.sv", 
                                                                        126);
        vlSymsp->vlInst.TOP.__Vnontrivs.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.resumption(
                                                                    nullptr, 
                                                                    "@([event] __VnbaEvent)", 
                                                                    "mlp_driver.sv", 
                                                                    126);
    VL_NULL_CHECK(this->__PVT__vif, "mlp_driver.sv", 126)->out_ready 
        = __Vintraval_h90dc9676__0;
    co_return;
}

void Vtb_top_mlp_pkg__03a__03amlp_driver::__VnoInFunc_report_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_top_mlp_pkg__03a__03amlp_driver::__VnoInFunc_report_phase\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk6__DOT___local_report_object_;
    this->__VnoInFunc_uvm_get_report_object(vlSymsp, __VlefCall_0__uvm_get_report_object);
    VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "mlp_driver.sv", 138)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk6__DOT___local_report_object_);
    VL_NULL_CHECK(unnamedblk6__DOT___local_report_object_, "mlp_driver.sv", 138)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "DRV"s, __VlefCall_1__get_report_verbosity_level);
    __VlefLogAnd_3 = VL_LTES_III(32, 0x00000064U, __VlefCall_1__get_report_verbosity_level);
    if (__VlefLogAnd_3) {
        VL_NULL_CHECK(unnamedblk6__DOT___local_report_object_, "mlp_driver.sv", 138)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "DRV"s, __VlefCall_2__get_report_action);
        __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
    }
    if (VL_UNLIKELY((__VlefLogAnd_3))) {
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "DRV"s, VL_SFORMATF_N_NX("drove %0d inferences, %0d config writes, %0d resets (+ the initial one)",3
                                                                                , '#',32,this->__PVT__n_infer
                                                                                , '#',32,this->__PVT__n_cfg
                                                                                , '#',32,this->__PVT__n_reset) , 0x00000064U, "mlp_driver.sv"s, 0x0000008aU, ""s, 1U);
    }
}

void Vtb_top_mlp_pkg__03a__03amlp_driver::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_top_mlp_pkg__03a__03amlp_driver::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_mlp_pkg__03a__03amlp_driver::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_top_mlp_pkg__03a__03amlp_driver::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_mlp_pkg__03a__03amlp_driver::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_top_mlp_pkg__03a__03amlp_driver::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_mlp_pkg__03a__03amlp_driver::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_top_mlp_pkg__03a__03amlp_driver::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_mlp_pkg__03a__03amlp_driver::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_top_mlp_pkg__03a__03amlp_driver::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__vif = nullptr;
    __PVT__n_infer = 0;
    __PVT__n_cfg = 0;
    __PVT__n_reset = 0;
}

Vtb_top_mlp_pkg__03a__03amlp_driver::~Vtb_top_mlp_pkg__03a__03amlp_driver() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_top_mlp_pkg__03a__03amlp_driver::~\n"); );
}

std::string Vtb_top_mlp_pkg__03a__03amlp_driver::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_top_mlp_pkg__03a__03amlp_driver::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_mlp_pkg__03a__03amlp_driver::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_top_mlp_pkg__03a__03amlp_driver::to_string_middle\n"); );
    // Body
    std::string out;
    out += "vif:" + VL_TO_STRING(__PVT__vif);
    out += ", ready_pct:" + VL_TO_STRING(__PVT__ready_pct);
    out += ", ready_left:" + VL_TO_STRING(__PVT__ready_left);
    out += ", n_infer:" + VL_TO_STRING(__PVT__n_infer);
    out += ", n_cfg:" + VL_TO_STRING(__PVT__n_cfg);
    out += ", n_reset:" + VL_TO_STRING(__PVT__n_reset);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_driver__pi85ffe88e::to_string_middle();
    return (out);
}
