// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_mlp_pkg__03a__03amlp_scoreboard::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtb_top_mlp_pkg__03a__03amlp_scoreboard::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component_registry__pie75eb616> __Vfunc_get__Vfuncout_84;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_component_registry__pie75eb616__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_84);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_84;
}

void Vtb_top_mlp_pkg__03a__03amlp_scoreboard::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtb_top_mlp_pkg__03a__03amlp_scoreboard::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "mlp_scoreboard"s;
}

void Vtb_top_mlp_pkg__03a__03amlp_scoreboard::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> parent) {
    Vtb_top_uvm_pkg__03a__03auvm_scoreboard::init(vlProcess, vlSymsp, name, parent);
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtb_top_mlp_pkg__03a__03amlp_scoreboard::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    this->__PVT__lat_min = 0x00000000ffffffffULL;
    this->__PVT__lat_max = 0ULL;
    /*super.new*/;
}

void Vtb_top_mlp_pkg__03a__03amlp_scoreboard::__VnoInFunc_build_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtb_top_mlp_pkg__03a__03amlp_scoreboard::__VnoInFunc_build_phase\n"); );
    // Locals
    Vtb_top_mlp_if* __Vfunc_get__value_85;
    __Vfunc_get__value_85 = nullptr;
    ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_env_cfg> __Vfunc_get__value_86;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_9;
    ::IData/*31:0*/ __VlefCall_8__get_report_action;
    ::IData/*31:0*/ __VlefCall_7__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_6__uvm_get_report_object;
    ::CData/*0:0*/ __VlefCall_5__get;
    ::CData/*0:0*/ __VlefLogAnd_4;
    ::IData/*31:0*/ __VlefCall_3__get_report_action;
    ::IData/*31:0*/ __VlefCall_2__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_1__uvm_get_report_object;
    ::CData/*0:0*/ __VlefCall_0__get;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk1__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk2__DOT___local_report_object_;
    Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_build_phase(vlProcess, vlSymsp, phase);
    this->__PVT__in_imp = VL_NEW(Vtb_top_mlp_pkg__03a__03auvm_analysis_imp_in__pi79c10b1a, vlProcess, vlSymsp, "in_imp"s, 
                                 ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_scoreboard>{this});
    this->__PVT__out_imp = VL_NEW(Vtb_top_mlp_pkg__03a__03auvm_analysis_imp_out__pi547d26a9, vlProcess, vlSymsp, "out_imp"s, 
                                  ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_scoreboard>{this});
    this->__PVT__cov_ap = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_analysis_port__Tz8b2dcfef, vlProcess, vlSymsp, "cov_ap"s, 
                                 ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_scoreboard>{this});
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pia18cdc6b__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "model"s, VlNull{}, ""s, this->__PVT__model);
    __Vfunc_get__value_85 = this->__PVT__vif;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_config_db__Tz54780af0__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_scoreboard>{this}, ""s, "vif"s, __Vfunc_get__value_85, __VlefCall_0__get);
    this->__PVT__vif = __Vfunc_get__value_85;
    if ((1U & (~ (::IData)(__VlefCall_0__get)))) {
        this->__VnoInFunc_uvm_get_report_object(vlSymsp, __VlefCall_1__uvm_get_report_object);
        VL_NULL_CHECK(__VlefCall_1__uvm_get_report_object, "mlp_scoreboard.sv", 45)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk1__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk1__DOT___local_report_object_, "mlp_scoreboard.sv", 45)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 3U, "NOVIF"s, __VlefCall_2__get_report_verbosity_level);
        __VlefLogAnd_4 = VL_LTES_III(32, 0U, __VlefCall_2__get_report_verbosity_level);
        if (__VlefLogAnd_4) {
            VL_NULL_CHECK(unnamedblk1__DOT___local_report_object_, "mlp_scoreboard.sv", 45)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 3U, "NOVIF"s, __VlefCall_3__get_report_action);
            __VlefLogAnd_4 = (0U != __VlefCall_3__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_4))) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "NOVIF"s, "virtual interface 'vif' not found in config_db"s, 0U, "mlp_scoreboard.sv"s, 0x0000002dU, ""s, 1U);
        }
    }
    __Vfunc_get__value_86 = this->__PVT__cfg;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_config_db__Tz648eaeea__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_scoreboard>{this}, ""s, "cfg"s, __Vfunc_get__value_86, __VlefCall_5__get);
    this->__PVT__cfg = __Vfunc_get__value_86;
    if ((1U & (~ (::IData)(__VlefCall_5__get)))) {
        this->__VnoInFunc_uvm_get_report_object(vlSymsp, __VlefCall_6__uvm_get_report_object);
        VL_NULL_CHECK(__VlefCall_6__uvm_get_report_object, "mlp_scoreboard.sv", 47)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk2__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk2__DOT___local_report_object_, "mlp_scoreboard.sv", 47)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 3U, "NOCFG"s, __VlefCall_7__get_report_verbosity_level);
        __VlefLogAnd_9 = VL_LTES_III(32, 0U, __VlefCall_7__get_report_verbosity_level);
        if (__VlefLogAnd_9) {
            VL_NULL_CHECK(unnamedblk2__DOT___local_report_object_, "mlp_scoreboard.sv", 47)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 3U, "NOCFG"s, __VlefCall_8__get_report_action);
            __VlefLogAnd_9 = (0U != __VlefCall_8__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_9))) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "NOCFG"s, "mlp_env_cfg not found in config_db"s, 0U, "mlp_scoreboard.sv"s, 0x0000002fU, ""s, 1U);
        }
    }
}

void Vtb_top_mlp_pkg__03a__03amlp_scoreboard::__VnoInFunc_write_in(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_mon_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtb_top_mlp_pkg__03a__03amlp_scoreboard::__VnoInFunc_write_in\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    if ((2U == VL_NULL_CHECK(t, "mlp_scoreboard.sv", 54)
         ->__PVT__kind)) {
        this->__VnoInFunc_handle_cfg(vlProcess, vlSymsp, t);
    } else if ((0U == VL_NULL_CHECK(t, "mlp_scoreboard.sv", 54)
                ->__PVT__kind)) {
        this->__VnoInFunc_handle_input(vlProcess, vlSymsp, t);
    } else if ((3U == VL_NULL_CHECK(t, "mlp_scoreboard.sv", 54)
                ->__PVT__kind)) {
        this->__VnoInFunc_handle_reset(vlProcess, vlSymsp, t);
    }
}

void Vtb_top_mlp_pkg__03a__03amlp_scoreboard::__VnoInFunc_handle_cfg(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_mon_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtb_top_mlp_pkg__03a__03amlp_scoreboard::__VnoInFunc_handle_cfg\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_9__convert2string;
    ::CData/*0:0*/ __VlefLogAnd_8;
    ::IData/*31:0*/ __VlefCall_7__get_report_action;
    ::IData/*31:0*/ __VlefCall_6__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_5__uvm_get_report_object;
    ::CData/*0:0*/ __VlefCall_4__write;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk3__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk4__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_verdict> v;
    ::CData/*0:0*/ busy_exp;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pie5fe8ff3__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "v_cfg"s, VlNull{}, ""s, v);
    busy_exp = (0U != this->__PVT__exp_q.size());
    this->__PVT__n_cfg = ((::IData)(1U) + this->__PVT__n_cfg);
    if ((VL_NULL_CHECK(t, "mlp_scoreboard.sv", 66)->__PVT__busy 
         != (::IData)(busy_exp))) {
        this->__PVT__n_busy_err = ((::IData)(1U) + this->__PVT__n_busy_err);
        this->__VnoInFunc_uvm_get_report_object(vlSymsp, __VlefCall_0__uvm_get_report_object);
        VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "mlp_scoreboard.sv", 69)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk3__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk3__DOT___local_report_object_, "mlp_scoreboard.sv", 69)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "BUSY"s, __VlefCall_1__get_report_verbosity_level);
        __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
        if (__VlefLogAnd_3) {
            VL_NULL_CHECK(unnamedblk3__DOT___local_report_object_, "mlp_scoreboard.sv", 69)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "BUSY"s, __VlefCall_2__get_report_action);
            __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_3))) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "BUSY"s, VL_SFORMATF_N_NX("cyc %0d: DUT busy=%0b but %0d sample(s) are in flight (expected busy=%0b)",4
                                                                                , '#',64,VL_NULL_CHECK(t, "mlp_scoreboard.sv", 69)
                                                                                ->__PVT__cycle
                                                                                , '#',1,VL_NULL_CHECK(t, "mlp_scoreboard.sv", 69)
                                                                                ->__PVT__busy
                                                                                , '~',32,this->__PVT__exp_q.size()
                                                                                , '#',1,(::IData)(busy_exp)) , 0U, "mlp_scoreboard.sv"s, 0x00000045U, ""s, 1U);
        }
    }
    VL_NULL_CHECK(v, "mlp_scoreboard.sv", 71)->__PVT__kind = 1U;
    VL_NULL_CHECK(v, "mlp_scoreboard.sv", 72)->__PVT__addr 
        = VL_NULL_CHECK(t, "mlp_scoreboard.sv", 72)
        ->__PVT__addr;
    VL_NULL_CHECK(v, "mlp_scoreboard.sv", 73)->__PVT__data 
        = VL_NULL_CHECK(t, "mlp_scoreboard.sv", 73)
        ->__PVT__data;
    VL_NULL_CHECK(v, "mlp_scoreboard.sv", 74)->__PVT__busy 
        = busy_exp;
    VL_NULL_CHECK(v, "mlp_scoreboard.sv", 75)->__PVT__with_in 
        = VL_NULL_CHECK(t, "mlp_scoreboard.sv", 75)
        ->__PVT__with_in;
    VL_NULL_CHECK(this->__PVT__model, "mlp_scoreboard.sv", 76)->__VnoInFunc_write(vlSymsp, VL_NULL_CHECK(t, "mlp_scoreboard.sv", 76)
                                                                                ->__PVT__addr, VL_NULL_CHECK(t, "mlp_scoreboard.sv", 76)
                                                                                ->__PVT__data, (::IData)(busy_exp), __VlefCall_4__write);
    VL_NULL_CHECK(v, "mlp_scoreboard.sv", 76)->__PVT__applied 
        = __VlefCall_4__write;
    if ((1U & (~ VL_NULL_CHECK(v, "mlp_scoreboard.sv", 77)
               ->__PVT__applied))) {
        this->__PVT__n_cfg_ignored = ((::IData)(1U) 
                                      + this->__PVT__n_cfg_ignored);
    }
    this->__VnoInFunc_uvm_get_report_object(vlSymsp, __VlefCall_5__uvm_get_report_object);
    VL_NULL_CHECK(__VlefCall_5__uvm_get_report_object, "mlp_scoreboard.sv", 78)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk4__DOT___local_report_object_);
    VL_NULL_CHECK(unnamedblk4__DOT___local_report_object_, "mlp_scoreboard.sv", 78)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "CFG"s, __VlefCall_6__get_report_verbosity_level);
    __VlefLogAnd_8 = VL_LTES_III(32, 0x0000012cU, __VlefCall_6__get_report_verbosity_level);
    if (__VlefLogAnd_8) {
        VL_NULL_CHECK(unnamedblk4__DOT___local_report_object_, "mlp_scoreboard.sv", 78)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "CFG"s, __VlefCall_7__get_report_action);
        __VlefLogAnd_8 = (0U != __VlefCall_7__get_report_action);
    }
    if (VL_UNLIKELY((__VlefLogAnd_8))) {
        VL_NULL_CHECK(v, "mlp_scoreboard.sv", 78)->__VnoInFunc_convert2string(vlProcess, vlSymsp, __VlefCall_9__convert2string);
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "CFG"s, 
                                          VL_CVT_PACK_STR_NN(__VlefCall_9__convert2string), 0x0000012cU, "mlp_scoreboard.sv"s, 0x0000004eU, ""s, 1U);
    }
    VL_NULL_CHECK(this->__PVT__cov_ap, "mlp_scoreboard.sv", 79)->__VnoInFunc_write(vlProcess, vlSymsp, v);
}

void Vtb_top_mlp_pkg__03a__03amlp_scoreboard::__VnoInFunc_handle_input(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_mon_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtb_top_mlp_pkg__03a__03amlp_scoreboard::__VnoInFunc_handle_input\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_lookup__lab_14;
    __Vtask_lookup__lab_14 = 0;
    ::IData/*31:0*/ __Vtask_lookup__yg_15;
    __Vtask_lookup__yg_15 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_5;
    ::IData/*31:0*/ __VlefCall_4__get_report_action;
    ::IData/*31:0*/ __VlefCall_3__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_2__uvm_get_report_object;
    ::IData/*31:0*/ __VlefCall_1__get_xp;
    ::CData/*0:0*/ __VlefCall_0__cfg_equals;
    ::IData/*31:0*/ unnamedblk7__DOT__n;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk7__DOT__unnamedblk8__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_verdict> v;
    ::IData/*31:0*/ lab;
    ::IData/*31:0*/ yg;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pie5fe8ff3__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "v_in"s, VlNull{}, ""s, v);
    lab = 0U;
    yg = 0U;
    this->__PVT__n_in = ((::IData)(1U) + this->__PVT__n_in);
    VL_NULL_CHECK(this->__PVT__model, "mlp_scoreboard.sv", 87)->__VnoInFunc_predict(vlSymsp, VL_NULL_CHECK(t, "mlp_scoreboard.sv", 87)
                                                                                ->__PVT__x);
    VL_NULL_CHECK(v, "mlp_scoreboard.sv", 88)->__PVT__kind = 0U;
    VL_NULL_CHECK(v, "mlp_scoreboard.sv", 89)->__PVT__in_cycle 
        = VL_NULL_CHECK(t, "mlp_scoreboard.sv", 89)
        ->__PVT__cycle;
    VL_NULL_CHECK(v, "mlp_scoreboard.sv", 90)->__PVT__in_wait 
        = VL_NULL_CHECK(t, "mlp_scoreboard.sv", 90)
        ->__PVT__waited;
    VL_NULL_CHECK(v, "mlp_scoreboard.sv", 91)->__PVT__shift 
        = VL_NULL_CHECK(this->__PVT__model, "mlp_scoreboard.sv", 91)
        ->__PVT__sh;
    VL_NULL_CHECK(v, "mlp_scoreboard.sv", 92)->__PVT__leak 
        = VL_NULL_CHECK(this->__PVT__model, "mlp_scoreboard.sv", 92)
        ->__PVT__leak;
    VL_NULL_CHECK(v, "mlp_scoreboard.sv", 93)->__PVT__x[0U] 
        = VL_NULL_CHECK(t, "mlp_scoreboard.sv", 93)
        ->__PVT__x[0U];
    VL_NULL_CHECK(v, "mlp_scoreboard.sv", 93)->__PVT__x[1U] 
        = VL_NULL_CHECK(t, "mlp_scoreboard.sv", 93)
        ->__PVT__x[1U];
    VL_NULL_CHECK(v, "mlp_scoreboard.sv", 93)->__PVT__x[2U] 
        = VL_NULL_CHECK(t, "mlp_scoreboard.sv", 93)
        ->__PVT__x[2U];
    VL_NULL_CHECK(v, "mlp_scoreboard.sv", 93)->__PVT__x[3U] 
        = VL_NULL_CHECK(t, "mlp_scoreboard.sv", 93)
        ->__PVT__x[3U];
    VL_NULL_CHECK(v, "mlp_scoreboard.sv", 95)->__PVT__y_exp[0U] 
        = VL_NULL_CHECK(this->__PVT__model, "mlp_scoreboard.sv", 95)
        ->__PVT__r_y[0U];
    VL_NULL_CHECK(v, "mlp_scoreboard.sv", 96)->__PVT__acc[0U] 
        = VL_NULL_CHECK(this->__PVT__model, "mlp_scoreboard.sv", 96)
        ->__PVT__r_acc[0U];
    VL_NULL_CHECK(v, "mlp_scoreboard.sv", 97)->__PVT__sat_hi[0U] 
        = VL_NULL_CHECK(this->__PVT__model, "mlp_scoreboard.sv", 97)
        ->__PVT__r_sat_hi[0U];
    VL_NULL_CHECK(v, "mlp_scoreboard.sv", 98)->__PVT__sat_lo[0U] 
        = VL_NULL_CHECK(this->__PVT__model, "mlp_scoreboard.sv", 98)
        ->__PVT__r_sat_lo[0U];
    VL_NULL_CHECK(v, "mlp_scoreboard.sv", 99)->__PVT__leaky[0U] 
        = VL_NULL_CHECK(this->__PVT__model, "mlp_scoreboard.sv", 99)
        ->__PVT__r_leaky[0U];
    if (VL_NULL_CHECK(this->__PVT__model, "mlp_scoreboard.sv", 100)
        ->__PVT__r_sat_hi[0U]) {
        this->__PVT__n_sat_hi = ((::IData)(1U) + this->__PVT__n_sat_hi);
    }
    if (VL_NULL_CHECK(this->__PVT__model, "mlp_scoreboard.sv", 101)
        ->__PVT__r_sat_lo[0U]) {
        this->__PVT__n_sat_lo = ((::IData)(1U) + this->__PVT__n_sat_lo);
    }
    VL_NULL_CHECK(v, "mlp_scoreboard.sv", 95)->__PVT__y_exp[1U] 
        = VL_NULL_CHECK(this->__PVT__model, "mlp_scoreboard.sv", 95)
        ->__PVT__r_y[1U];
    VL_NULL_CHECK(v, "mlp_scoreboard.sv", 96)->__PVT__acc[1U] 
        = VL_NULL_CHECK(this->__PVT__model, "mlp_scoreboard.sv", 96)
        ->__PVT__r_acc[1U];
    VL_NULL_CHECK(v, "mlp_scoreboard.sv", 97)->__PVT__sat_hi[1U] 
        = VL_NULL_CHECK(this->__PVT__model, "mlp_scoreboard.sv", 97)
        ->__PVT__r_sat_hi[1U];
    VL_NULL_CHECK(v, "mlp_scoreboard.sv", 98)->__PVT__sat_lo[1U] 
        = VL_NULL_CHECK(this->__PVT__model, "mlp_scoreboard.sv", 98)
        ->__PVT__r_sat_lo[1U];
    VL_NULL_CHECK(v, "mlp_scoreboard.sv", 99)->__PVT__leaky[1U] 
        = VL_NULL_CHECK(this->__PVT__model, "mlp_scoreboard.sv", 99)
        ->__PVT__r_leaky[1U];
    if (VL_NULL_CHECK(this->__PVT__model, "mlp_scoreboard.sv", 100)
        ->__PVT__r_sat_hi[1U]) {
        this->__PVT__n_sat_hi = ((::IData)(1U) + this->__PVT__n_sat_hi);
    }
    if (VL_NULL_CHECK(this->__PVT__model, "mlp_scoreboard.sv", 101)
        ->__PVT__r_sat_lo[1U]) {
        this->__PVT__n_sat_lo = ((::IData)(1U) + this->__PVT__n_sat_lo);
    }
    VL_NULL_CHECK(v, "mlp_scoreboard.sv", 95)->__PVT__y_exp[2U] 
        = VL_NULL_CHECK(this->__PVT__model, "mlp_scoreboard.sv", 95)
        ->__PVT__r_y[2U];
    VL_NULL_CHECK(v, "mlp_scoreboard.sv", 96)->__PVT__acc[2U] 
        = VL_NULL_CHECK(this->__PVT__model, "mlp_scoreboard.sv", 96)
        ->__PVT__r_acc[2U];
    VL_NULL_CHECK(v, "mlp_scoreboard.sv", 97)->__PVT__sat_hi[2U] 
        = VL_NULL_CHECK(this->__PVT__model, "mlp_scoreboard.sv", 97)
        ->__PVT__r_sat_hi[2U];
    VL_NULL_CHECK(v, "mlp_scoreboard.sv", 98)->__PVT__sat_lo[2U] 
        = VL_NULL_CHECK(this->__PVT__model, "mlp_scoreboard.sv", 98)
        ->__PVT__r_sat_lo[2U];
    VL_NULL_CHECK(v, "mlp_scoreboard.sv", 99)->__PVT__leaky[2U] 
        = VL_NULL_CHECK(this->__PVT__model, "mlp_scoreboard.sv", 99)
        ->__PVT__r_leaky[2U];
    if (VL_NULL_CHECK(this->__PVT__model, "mlp_scoreboard.sv", 100)
        ->__PVT__r_sat_hi[2U]) {
        this->__PVT__n_sat_hi = ((::IData)(1U) + this->__PVT__n_sat_hi);
    }
    if (VL_NULL_CHECK(this->__PVT__model, "mlp_scoreboard.sv", 101)
        ->__PVT__r_sat_lo[2U]) {
        this->__PVT__n_sat_lo = ((::IData)(1U) + this->__PVT__n_sat_lo);
    }
    VL_NULL_CHECK(v, "mlp_scoreboard.sv", 95)->__PVT__y_exp[3U] 
        = VL_NULL_CHECK(this->__PVT__model, "mlp_scoreboard.sv", 95)
        ->__PVT__r_y[3U];
    VL_NULL_CHECK(v, "mlp_scoreboard.sv", 96)->__PVT__acc[3U] 
        = VL_NULL_CHECK(this->__PVT__model, "mlp_scoreboard.sv", 96)
        ->__PVT__r_acc[3U];
    VL_NULL_CHECK(v, "mlp_scoreboard.sv", 97)->__PVT__sat_hi[3U] 
        = VL_NULL_CHECK(this->__PVT__model, "mlp_scoreboard.sv", 97)
        ->__PVT__r_sat_hi[3U];
    VL_NULL_CHECK(v, "mlp_scoreboard.sv", 98)->__PVT__sat_lo[3U] 
        = VL_NULL_CHECK(this->__PVT__model, "mlp_scoreboard.sv", 98)
        ->__PVT__r_sat_lo[3U];
    VL_NULL_CHECK(v, "mlp_scoreboard.sv", 99)->__PVT__leaky[3U] 
        = VL_NULL_CHECK(this->__PVT__model, "mlp_scoreboard.sv", 99)
        ->__PVT__r_leaky[3U];
    if (VL_NULL_CHECK(this->__PVT__model, "mlp_scoreboard.sv", 100)
        ->__PVT__r_sat_hi[3U]) {
        this->__PVT__n_sat_hi = ((::IData)(1U) + this->__PVT__n_sat_hi);
    }
    if (VL_NULL_CHECK(this->__PVT__model, "mlp_scoreboard.sv", 101)
        ->__PVT__r_sat_lo[3U]) {
        this->__PVT__n_sat_lo = ((::IData)(1U) + this->__PVT__n_sat_lo);
    }
    VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__cfg, "mlp_scoreboard.sv", 104)
                  ->__PVT__iris_ds, "mlp_scoreboard.sv", 104)->__VnoInFunc_cfg_equals(vlSymsp, this->__PVT__model, __VlefCall_0__cfg_equals);
    if (__VlefCall_0__cfg_equals) {
        VL_NULL_CHECK(t, "mlp_scoreboard.sv", 104)->__VnoInFunc_get_xp(vlSymsp, __VlefCall_1__get_xp);
        VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__cfg, "mlp_scoreboard.sv", 104)
                      ->__PVT__iris_ds, "mlp_scoreboard.sv", 104)->__VnoInFunc_lookup(vlSymsp, __VlefCall_1__get_xp, __Vtask_lookup__lab_14, __Vtask_lookup__yg_15, __VlefCall_0__cfg_equals);
        lab = __Vtask_lookup__lab_14;
        yg = __Vtask_lookup__yg_15;
    }
    if (__VlefCall_0__cfg_equals) {
        VL_NULL_CHECK(v, "mlp_scoreboard.sv", 105)->__PVT__is_iris = 1U;
        VL_NULL_CHECK(v, "mlp_scoreboard.sv", 106)->__PVT__label 
            = lab;
        unnamedblk7__DOT__n = 0U;
        unnamedblk7__DOT__n = 0U;
        while (VL_GTS_III(32, 4U, unnamedblk7__DOT__n)) {
            if (((0x000000ffU & (yg >> (0x0000001fU 
                                        & VL_MULS_III(32, (::IData)(8U), unnamedblk7__DOT__n)))) 
                 != VL_NULL_CHECK(this->__PVT__model, "mlp_scoreboard.sv", 109)
                 ->__PVT__r_y[(3U & unnamedblk7__DOT__n)])) {
                this->__PVT__n_ref_err = ((::IData)(1U) 
                                          + this->__PVT__n_ref_err);
                this->__VnoInFunc_uvm_get_report_object(vlSymsp, __VlefCall_2__uvm_get_report_object);
                VL_NULL_CHECK(__VlefCall_2__uvm_get_report_object, "mlp_scoreboard.sv", 112)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk7__DOT__unnamedblk8__DOT___local_report_object_);
                VL_NULL_CHECK(unnamedblk7__DOT__unnamedblk8__DOT___local_report_object_, "mlp_scoreboard.sv", 112)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "REF_VS_PY"s, __VlefCall_3__get_report_verbosity_level);
                __VlefLogAnd_5 = VL_LTES_III(32, 0U, __VlefCall_3__get_report_verbosity_level);
                if (__VlefLogAnd_5) {
                    VL_NULL_CHECK(unnamedblk7__DOT__unnamedblk8__DOT___local_report_object_, "mlp_scoreboard.sv", 112)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "REF_VS_PY"s, __VlefCall_4__get_report_action);
                    __VlefLogAnd_5 = (0U != __VlefCall_4__get_report_action);
                }
                if (VL_UNLIKELY((__VlefLogAnd_5))) {
                    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "REF_VS_PY"s, VL_SFORMATF_N_NX("SV model y[%0d]=%0d but Python golden=%0d for x=[%0d %0d %0d %0d]",7
                                                                                , '~',32,unnamedblk7__DOT__n
                                                                                , '~',8,VL_NULL_CHECK(this->__PVT__model, "mlp_scoreboard.sv", 112)
                                                                                ->__PVT__r_y
                                                                                [
                                                                                (3U 
                                                                                & unnamedblk7__DOT__n)]
                                                                                , '~',8,
                                                                                (0x000000ffU 
                                                                                & (yg 
                                                                                >> 
                                                                                (0x0000001fU 
                                                                                & VL_MULS_III(32, (::IData)(8U), unnamedblk7__DOT__n))))
                                                                                , '~',8,VL_NULL_CHECK(t, "mlp_scoreboard.sv", 112)
                                                                                ->__PVT__x[0U]
                                                                                , '~',8,VL_NULL_CHECK(t, "mlp_scoreboard.sv", 112)
                                                                                ->__PVT__x[1U]
                                                                                , '~',8,VL_NULL_CHECK(t, "mlp_scoreboard.sv", 112)
                                                                                ->__PVT__x[2U]
                                                                                , '~',8,VL_NULL_CHECK(t, "mlp_scoreboard.sv", 112)
                                                                                ->__PVT__x[3U]) , 0U, "mlp_scoreboard.sv"s, 0x00000070U, ""s, 1U);
                }
            }
            unnamedblk7__DOT__n = ((::IData)(1U) + unnamedblk7__DOT__n);
        }
    }
    this->__PVT__exp_q.push_back(v);
}

void Vtb_top_mlp_pkg__03a__03amlp_scoreboard::__VnoInFunc_handle_reset(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_mon_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtb_top_mlp_pkg__03a__03amlp_scoreboard::__VnoInFunc_handle_reset\n"); );
    // Locals
    ::CData/*1:0*/ __Vfunc_stage_name__s_87;
    __Vfunc_stage_name__s_87 = 0;
    ::VlWide<5>/*159:0*/ __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_4__stage_name;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk9__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_verdict> v;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pie5fe8ff3__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "v_rst"s, VlNull{}, ""s, v);
    VL_NULL_CHECK(v, "mlp_scoreboard.sv", 120)->__PVT__kind = 2U;
    VL_NULL_CHECK(v, "mlp_scoreboard.sv", 121)->__PVT__stage 
        = VL_NULL_CHECK(t, "mlp_scoreboard.sv", 121)
        ->__PVT__stage;
    VL_NULL_CHECK(v, "mlp_scoreboard.sv", 122)->__PVT__stalled 
        = VL_NULL_CHECK(t, "mlp_scoreboard.sv", 122)
        ->__PVT__stalled;
    VL_NULL_CHECK(v, "mlp_scoreboard.sv", 123)->__PVT__aborted 
        = this->__PVT__exp_q.size();
    this->__PVT__n_reset = ((::IData)(1U) + this->__PVT__n_reset);
    this->__PVT__n_aborted = (this->__PVT__n_aborted 
                              + this->__PVT__exp_q.size());
    this->__VnoInFunc_uvm_get_report_object(vlSymsp, __VlefCall_0__uvm_get_report_object);
    VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "mlp_scoreboard.sv", 127)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk9__DOT___local_report_object_);
    VL_NULL_CHECK(unnamedblk9__DOT___local_report_object_, "mlp_scoreboard.sv", 127)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "RST"s, __VlefCall_1__get_report_verbosity_level);
    __VlefLogAnd_3 = VL_LTES_III(32, 0x000000c8U, __VlefCall_1__get_report_verbosity_level);
    if (__VlefLogAnd_3) {
        VL_NULL_CHECK(unnamedblk9__DOT___local_report_object_, "mlp_scoreboard.sv", 127)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "RST"s, __VlefCall_2__get_report_action);
        __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
    }
    if (VL_UNLIKELY((__VlefLogAnd_3))) {
        __Vfunc_stage_name__s_87 = VL_NULL_CHECK(t, "mlp_scoreboard.sv", 127)
            ->__PVT__stage;
        __VlefCall_4__stage_name = ""s;
        __VlefCall_4__stage_name = ((0U == (::IData)(__Vfunc_stage_name__s_87))
                                     ? "IDLE"s : ((2U 
                                                   == (::IData)(__Vfunc_stage_name__s_87))
                                                   ? "STAGE1"s
                                                   : 
                                                  ((1U 
                                                    == (::IData)(__Vfunc_stage_name__s_87))
                                                    ? "OUTREG"s
                                                    : "BOTH"s)));
        if (VL_NULL_CHECK(t, "mlp_scoreboard.sv", 127)
            ->__PVT__stalled) {
            __Vtemp_1[0U] = 0x6c656429U;
            __Vtemp_1[1U] = 0x7374616cU;
            __Vtemp_1[2U] = 0x70757420U;
            __Vtemp_1[3U] = 0x286f7574U;
            __Vtemp_1[4U] = 0x00000020U;
        } else {
            __Vtemp_1[0U] = 0U;
            __Vtemp_1[1U] = 0U;
            __Vtemp_1[2U] = 0U;
            __Vtemp_1[3U] = 0U;
            __Vtemp_1[4U] = 0U;
        }
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "RST"s, VL_SFORMATF_N_NX("reset seen in state %s%s: %0d sample(s) dropped, model back to reset values",3
                                                                                , 'S',&(__VlefCall_4__stage_name)
                                                                                , '#',136,__Vtemp_1.data()
                                                                                , '~',32,this->__PVT__exp_q.size()) , 0x000000c8U, "mlp_scoreboard.sv"s, 0x0000007fU, ""s, 1U);
    }
    this->__PVT__exp_q.clear();
    VL_NULL_CHECK(this->__PVT__model, "mlp_scoreboard.sv", 129)->__VnoInFunc_reset(vlSymsp);
    VL_NULL_CHECK(this->__PVT__cov_ap, "mlp_scoreboard.sv", 130)->__VnoInFunc_write(vlProcess, vlSymsp, v);
}

void Vtb_top_mlp_pkg__03a__03amlp_scoreboard::__VnoInFunc_write_out(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_mon_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtb_top_mlp_pkg__03a__03amlp_scoreboard::__VnoInFunc_write_out\n"); );
    // Locals
    ::VlUnpacked<::CData/*7:0*/, 4> __Vfunc_argmax3__y_88;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        __Vfunc_argmax3__y_88[__Vi0] = 0;
    }
    ::IData/*31:0*/ __Vfunc_argmax3__best_90;
    __Vfunc_argmax3__best_90 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_14__convert2string;
    ::CData/*0:0*/ __VlefLogAnd_13;
    ::IData/*31:0*/ __VlefCall_12__get_report_action;
    ::IData/*31:0*/ __VlefCall_11__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_10__uvm_get_report_object;
    ::CData/*0:0*/ __VlefLogAnd_9;
    ::IData/*31:0*/ __VlefCall_8__get_report_action;
    ::IData/*31:0*/ __VlefCall_7__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_6__uvm_get_report_object;
    ::IData/*31:0*/ __VlefCall_5__argmax3;
    ::std::string __VlefCall_4__convert2string;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk10__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk12__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk13__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_verdict> v;
    ::CData/*0:0*/ ok;
    {
        ok = 1U;
        this->__PVT__n_out = ((::IData)(1U) + this->__PVT__n_out);
        if ((0U == this->__PVT__exp_q.size())) {
            this->__VnoInFunc_uvm_get_report_object(vlSymsp, __VlefCall_0__uvm_get_report_object);
            VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "mlp_scoreboard.sv", 141)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk10__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk10__DOT___local_report_object_, "mlp_scoreboard.sv", 141)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "UNEXPECTED"s, __VlefCall_1__get_report_verbosity_level);
            __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
            if (__VlefLogAnd_3) {
                VL_NULL_CHECK(unnamedblk10__DOT___local_report_object_, "mlp_scoreboard.sv", 141)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "UNEXPECTED"s, __VlefCall_2__get_report_action);
                __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_3))) {
                VL_NULL_CHECK(t, "mlp_scoreboard.sv", 141)->__VnoInFunc_convert2string(vlProcess, vlSymsp, __VlefCall_4__convert2string);
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "UNEXPECTED"s, VL_SFORMATF_N_NX("cyc %0d: output %s with nothing in flight",2
                                                                                , '#',64,VL_NULL_CHECK(t, "mlp_scoreboard.sv", 141)
                                                                                ->__PVT__cycle
                                                                                , 'S',&(__VlefCall_4__convert2string)) , 0U, "mlp_scoreboard.sv"s, 0x0000008dU, ""s, 1U);
            }
            goto __Vlabel0;
        }
        v = this->__PVT__exp_q.pop_front();
        VL_NULL_CHECK(v, "mlp_scoreboard.sv", 146)->__PVT__y_act[0U] 
            = VL_NULL_CHECK(t, "mlp_scoreboard.sv", 146)
            ->__PVT__y[0U];
        if ((VL_NULL_CHECK(t, "mlp_scoreboard.sv", 147)
             ->__PVT__y[0U] != VL_NULL_CHECK(v, "mlp_scoreboard.sv", 147)
             ->__PVT__y_exp[0U])) {
            ok = 0U;
        }
        VL_NULL_CHECK(v, "mlp_scoreboard.sv", 146)->__PVT__y_act[1U] 
            = VL_NULL_CHECK(t, "mlp_scoreboard.sv", 146)
            ->__PVT__y[1U];
        if ((VL_NULL_CHECK(t, "mlp_scoreboard.sv", 147)
             ->__PVT__y[1U] != VL_NULL_CHECK(v, "mlp_scoreboard.sv", 147)
             ->__PVT__y_exp[1U])) {
            ok = 0U;
        }
        VL_NULL_CHECK(v, "mlp_scoreboard.sv", 146)->__PVT__y_act[2U] 
            = VL_NULL_CHECK(t, "mlp_scoreboard.sv", 146)
            ->__PVT__y[2U];
        if ((VL_NULL_CHECK(t, "mlp_scoreboard.sv", 147)
             ->__PVT__y[2U] != VL_NULL_CHECK(v, "mlp_scoreboard.sv", 147)
             ->__PVT__y_exp[2U])) {
            ok = 0U;
        }
        VL_NULL_CHECK(v, "mlp_scoreboard.sv", 146)->__PVT__y_act[3U] 
            = VL_NULL_CHECK(t, "mlp_scoreboard.sv", 146)
            ->__PVT__y[3U];
        if ((VL_NULL_CHECK(t, "mlp_scoreboard.sv", 147)
             ->__PVT__y[3U] != VL_NULL_CHECK(v, "mlp_scoreboard.sv", 147)
             ->__PVT__y_exp[3U])) {
            ok = 0U;
        }
        VL_NULL_CHECK(v, "mlp_scoreboard.sv", 149)->__PVT__pass 
            = ok;
        VL_NULL_CHECK(v, "mlp_scoreboard.sv", 150)->__PVT__out_wait 
            = VL_NULL_CHECK(t, "mlp_scoreboard.sv", 150)
            ->__PVT__waited;
        VL_NULL_CHECK(v, "mlp_scoreboard.sv", 151)->__PVT__latency 
            = (VL_NULL_CHECK(t, "mlp_scoreboard.sv", 151)
               ->__PVT__cycle - VL_NULL_CHECK(v, "mlp_scoreboard.sv", 151)
               ->__PVT__in_cycle);
        __Vfunc_argmax3__y_88[0U] = VL_NULL_CHECK(v, "mlp_scoreboard.sv", 152)
            ->__PVT__y_act[0U];
        __Vfunc_argmax3__y_88[1U] = VL_NULL_CHECK(v, "mlp_scoreboard.sv", 152)
            ->__PVT__y_act[1U];
        __Vfunc_argmax3__y_88[2U] = VL_NULL_CHECK(v, "mlp_scoreboard.sv", 152)
            ->__PVT__y_act[2U];
        __Vfunc_argmax3__y_88[3U] = VL_NULL_CHECK(v, "mlp_scoreboard.sv", 152)
            ->__PVT__y_act[3U];
        __VlefCall_5__argmax3 = 0U;
        __Vfunc_argmax3__best_90 = 0U;
        if (VL_GTS_III(8, __Vfunc_argmax3__y_88[1U], __Vfunc_argmax3__y_88[0U])) {
            __Vfunc_argmax3__best_90 = 1U;
        }
        if (VL_GTS_III(8, __Vfunc_argmax3__y_88[2U], __Vfunc_argmax3__y_88
                       [(3U & __Vfunc_argmax3__best_90)])) {
            __Vfunc_argmax3__best_90 = 2U;
        }
        __VlefCall_5__argmax3 = __Vfunc_argmax3__best_90;
        VL_NULL_CHECK(v, "mlp_scoreboard.sv", 152)->__PVT__pred_act 
            = __VlefCall_5__argmax3;
        if ((VL_NULL_CHECK(v, "mlp_scoreboard.sv", 153)
             ->__PVT__latency < this->__PVT__lat_min)) {
            this->__PVT__lat_min = VL_NULL_CHECK(v, "mlp_scoreboard.sv", 153)
                ->__PVT__latency;
        }
        if ((VL_NULL_CHECK(v, "mlp_scoreboard.sv", 154)
             ->__PVT__latency > this->__PVT__lat_max)) {
            this->__PVT__lat_max = VL_NULL_CHECK(v, "mlp_scoreboard.sv", 154)
                ->__PVT__latency;
        }
        if (ok) {
            this->__PVT__n_match = ((::IData)(1U) + this->__PVT__n_match);
        } else {
            this->__PVT__n_mismatch = ((::IData)(1U) 
                                       + this->__PVT__n_mismatch);
            this->__VnoInFunc_uvm_get_report_object(vlSymsp, __VlefCall_6__uvm_get_report_object);
            VL_NULL_CHECK(__VlefCall_6__uvm_get_report_object, "mlp_scoreboard.sv", 163)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk12__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk12__DOT___local_report_object_, "mlp_scoreboard.sv", 163)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "MISMATCH"s, __VlefCall_7__get_report_verbosity_level);
            __VlefLogAnd_9 = VL_LTES_III(32, 0U, __VlefCall_7__get_report_verbosity_level);
            if (__VlefLogAnd_9) {
                VL_NULL_CHECK(unnamedblk12__DOT___local_report_object_, "mlp_scoreboard.sv", 163)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "MISMATCH"s, __VlefCall_8__get_report_action);
                __VlefLogAnd_9 = (0U != __VlefCall_8__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_9))) {
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "MISMATCH"s, VL_SFORMATF_N_NX("x=[%0d %0d %0d %0d] shift=%0d leak=%0d acc=[%0d %0d %0d %0d]  expected y=[%0d %0d %0d %0d]  DUT y=[%0d %0d %0d %0d]",18
                                                                                , '~',8,VL_NULL_CHECK(v, "mlp_scoreboard.sv", 163)
                                                                                ->__PVT__x[0U]
                                                                                , '~',8,VL_NULL_CHECK(v, "mlp_scoreboard.sv", 163)
                                                                                ->__PVT__x[1U]
                                                                                , '~',8,VL_NULL_CHECK(v, "mlp_scoreboard.sv", 163)
                                                                                ->__PVT__x[2U]
                                                                                , '~',8,VL_NULL_CHECK(v, "mlp_scoreboard.sv", 163)
                                                                                ->__PVT__x[3U]
                                                                                , '~',32,VL_NULL_CHECK(v, "mlp_scoreboard.sv", 163)
                                                                                ->__PVT__shift
                                                                                , '~',32,VL_NULL_CHECK(v, "mlp_scoreboard.sv", 163)
                                                                                ->__PVT__leak
                                                                                , '~',32,VL_NULL_CHECK(v, "mlp_scoreboard.sv", 163)
                                                                                ->__PVT__acc[0U]
                                                                                , '~',32,VL_NULL_CHECK(v, "mlp_scoreboard.sv", 163)
                                                                                ->__PVT__acc[1U]
                                                                                , '~',32,VL_NULL_CHECK(v, "mlp_scoreboard.sv", 163)
                                                                                ->__PVT__acc[2U]
                                                                                , '~',32,VL_NULL_CHECK(v, "mlp_scoreboard.sv", 163)
                                                                                ->__PVT__acc[3U]
                                                                                , '~',8,VL_NULL_CHECK(v, "mlp_scoreboard.sv", 163)
                                                                                ->__PVT__y_exp[0U]
                                                                                , '~',8,VL_NULL_CHECK(v, "mlp_scoreboard.sv", 163)
                                                                                ->__PVT__y_exp[1U]
                                                                                , '~',8,VL_NULL_CHECK(v, "mlp_scoreboard.sv", 163)
                                                                                ->__PVT__y_exp[2U]
                                                                                , '~',8,VL_NULL_CHECK(v, "mlp_scoreboard.sv", 163)
                                                                                ->__PVT__y_exp[3U]
                                                                                , '~',8,VL_NULL_CHECK(v, "mlp_scoreboard.sv", 163)
                                                                                ->__PVT__y_act[0U]
                                                                                , '~',8,VL_NULL_CHECK(v, "mlp_scoreboard.sv", 163)
                                                                                ->__PVT__y_act[1U]
                                                                                , '~',8,VL_NULL_CHECK(v, "mlp_scoreboard.sv", 163)
                                                                                ->__PVT__y_act[2U]
                                                                                , '~',8,VL_NULL_CHECK(v, "mlp_scoreboard.sv", 163)
                                                                                ->__PVT__y_act[3U]) , 0U, "mlp_scoreboard.sv"s, 0x000000a3U, ""s, 1U);
            }
        }
        if (VL_NULL_CHECK(v, "mlp_scoreboard.sv", 166)
            ->__PVT__is_iris) {
            this->__PVT__n_iris = ((::IData)(1U) + this->__PVT__n_iris);
            if ((VL_NULL_CHECK(v, "mlp_scoreboard.sv", 168)
                 ->__PVT__pred_act == VL_NULL_CHECK(v, "mlp_scoreboard.sv", 168)
                 ->__PVT__label)) {
                this->__PVT__n_iris_ok = ((::IData)(1U) 
                                          + this->__PVT__n_iris_ok);
            }
        }
        this->__VnoInFunc_uvm_get_report_object(vlSymsp, __VlefCall_10__uvm_get_report_object);
        VL_NULL_CHECK(__VlefCall_10__uvm_get_report_object, "mlp_scoreboard.sv", 172)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk13__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk13__DOT___local_report_object_, "mlp_scoreboard.sv", 172)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "CHK"s, __VlefCall_11__get_report_verbosity_level);
        __VlefLogAnd_13 = (0U != ((__VlefCall_11__get_report_verbosity_level 
                                   >= (0x00000014U 
                                       >= this->__PVT__n_in))
                                   ? 0x00000064U : 0x0000012cU));
        if (__VlefLogAnd_13) {
            VL_NULL_CHECK(unnamedblk13__DOT___local_report_object_, "mlp_scoreboard.sv", 172)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "CHK"s, __VlefCall_12__get_report_action);
            __VlefLogAnd_13 = (0U != __VlefCall_12__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_13))) {
            VL_NULL_CHECK(v, "mlp_scoreboard.sv", 172)->__VnoInFunc_convert2string(vlProcess, vlSymsp, __VlefCall_14__convert2string);
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "CHK"s, 
                                              VL_CVT_PACK_STR_NN(__VlefCall_14__convert2string), 
                                              ((0x00000014U 
                                                >= this->__PVT__n_in)
                                                ? 0x00000064U
                                                : 0x0000012cU), "mlp_scoreboard.sv"s, 0x000000acU, ""s, 1U);
        }
        VL_NULL_CHECK(this->__PVT__cov_ap, "mlp_scoreboard.sv", 173)->__VnoInFunc_write(vlProcess, vlSymsp, v);
        __Vlabel0: ;
    }
}

void Vtb_top_mlp_pkg__03a__03amlp_scoreboard::__VnoInFunc_check_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtb_top_mlp_pkg__03a__03amlp_scoreboard::__VnoInFunc_check_phase\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_11;
    ::IData/*31:0*/ __VlefCall_10__get_report_action;
    ::IData/*31:0*/ __VlefCall_9__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_8__uvm_get_report_object;
    ::CData/*0:0*/ __VlefLogAnd_7;
    ::IData/*31:0*/ __VlefCall_6__get_report_action;
    ::IData/*31:0*/ __VlefCall_5__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_4__uvm_get_report_object;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk14__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk15__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk16__DOT___local_report_object_;
    if ((0U != this->__PVT__exp_q.size())) {
        this->__VnoInFunc_uvm_get_report_object(vlSymsp, __VlefCall_0__uvm_get_report_object);
        VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "mlp_scoreboard.sv", 181)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk14__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk14__DOT___local_report_object_, "mlp_scoreboard.sv", 181)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "LOST"s, __VlefCall_1__get_report_verbosity_level);
        __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
        if (__VlefLogAnd_3) {
            VL_NULL_CHECK(unnamedblk14__DOT___local_report_object_, "mlp_scoreboard.sv", 181)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "LOST"s, __VlefCall_2__get_report_action);
            __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_3))) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "LOST"s, VL_SFORMATF_N_NX("%0d accepted sample(s) never produced an output",1
                                                                                , '~',32,this->__PVT__exp_q.size()) , 0U, "mlp_scoreboard.sv"s, 0x000000b5U, ""s, 1U);
        }
    }
    if ((0U != VL_NULL_CHECK(this->__PVT__vif, "mlp_scoreboard.sv", 182)
         ->__PVT__assert_errors)) {
        this->__VnoInFunc_uvm_get_report_object(vlSymsp, __VlefCall_4__uvm_get_report_object);
        VL_NULL_CHECK(__VlefCall_4__uvm_get_report_object, "mlp_scoreboard.sv", 183)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk15__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk15__DOT___local_report_object_, "mlp_scoreboard.sv", 183)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "ASSERT"s, __VlefCall_5__get_report_verbosity_level);
        __VlefLogAnd_7 = VL_LTES_III(32, 0U, __VlefCall_5__get_report_verbosity_level);
        if (__VlefLogAnd_7) {
            VL_NULL_CHECK(unnamedblk15__DOT___local_report_object_, "mlp_scoreboard.sv", 183)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "ASSERT"s, __VlefCall_6__get_report_action);
            __VlefLogAnd_7 = (0U != __VlefCall_6__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_7))) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "ASSERT"s, VL_SFORMATF_N_NX("%0d protocol assertion failure(s) in mlp_if (see the [MLP_IF] messages)",1
                                                                                , '#',32,VL_NULL_CHECK(this->__PVT__vif, "mlp_scoreboard.sv", 183)
                                                                                ->__PVT__assert_errors) , 0U, "mlp_scoreboard.sv"s, 0x000000b7U, ""s, 1U);
        }
    }
    if (((0x00000014U <= this->__PVT__n_iris) && (((::IData)(0x00000064U) 
                                                   * this->__PVT__n_iris_ok) 
                                                  < 
                                                  (VL_NULL_CHECK(this->__PVT__cfg, "mlp_scoreboard.sv", 184)
                                                   ->__PVT__min_acc_pct 
                                                   * this->__PVT__n_iris)))) {
        this->__VnoInFunc_uvm_get_report_object(vlSymsp, __VlefCall_8__uvm_get_report_object);
        VL_NULL_CHECK(__VlefCall_8__uvm_get_report_object, "mlp_scoreboard.sv", 185)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk16__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk16__DOT___local_report_object_, "mlp_scoreboard.sv", 185)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "ACCURACY"s, __VlefCall_9__get_report_verbosity_level);
        __VlefLogAnd_11 = VL_LTES_III(32, 0U, __VlefCall_9__get_report_verbosity_level);
        if (__VlefLogAnd_11) {
            VL_NULL_CHECK(unnamedblk16__DOT___local_report_object_, "mlp_scoreboard.sv", 185)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "ACCURACY"s, __VlefCall_10__get_report_action);
            __VlefLogAnd_11 = (0U != __VlefCall_10__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_11))) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "ACCURACY"s, VL_SFORMATF_N_NX("Iris accuracy %0d/%0d is below the %0d%% bar",3
                                                                                , '#',32,this->__PVT__n_iris_ok
                                                                                , '#',32,this->__PVT__n_iris
                                                                                , '#',32,VL_NULL_CHECK(this->__PVT__cfg, "mlp_scoreboard.sv", 185)
                                                                                ->__PVT__min_acc_pct) , 0U, "mlp_scoreboard.sv"s, 0x000000b9U, ""s, 1U);
        }
    }
}

void Vtb_top_mlp_pkg__03a__03amlp_scoreboard::__VnoInFunc_report_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtb_top_mlp_pkg__03a__03amlp_scoreboard::__VnoInFunc_report_phase\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk17__DOT___local_report_object_;
    ::std::string s;
    s = VL_CONCATN_NNN("\n-------------------- scoreboard summary --------------------\n"s, VL_SFORMATF_N_NX("  inputs accepted     : %0d\n",1
                                                                                , '#',32,this->__PVT__n_in) );
    s = VL_CONCATN_NNN(s, VL_SFORMATF_N_NX("  outputs checked     : %0d   match %0d   mismatch %0d\n",3
                                           , '#',32,this->__PVT__n_out
                                           , '#',32,this->__PVT__n_match
                                           , '#',32,this->__PVT__n_mismatch) );
    s = VL_CONCATN_NNN(s, VL_SFORMATF_N_NX("  config writes       : %0d   (%0d ignored: busy or unused address)\n",2
                                           , '#',32,this->__PVT__n_cfg
                                           , '#',32,this->__PVT__n_cfg_ignored) );
    s = VL_CONCATN_NNN(s, VL_SFORMATF_N_NX("  resets seen         : %0d   samples dropped by them: %0d\n",2
                                           , '#',32,this->__PVT__n_reset
                                           , '#',32,this->__PVT__n_aborted) );
    s = VL_CONCATN_NNN(s, VL_SFORMATF_N_NX("  expected clamps     : %0d x +127, %0d x -128\n",2
                                           , '#',32,this->__PVT__n_sat_hi
                                           , '#',32,this->__PVT__n_sat_lo) );
    if ((0U != this->__PVT__n_out)) {
        s = VL_CONCATN_NNN(s, VL_SFORMATF_N_NX("  latency (cycles)    : min %0d  max %0d   (2 = no back-pressure)\n",2
                                               , '#',64,this->__PVT__lat_min
                                               , '#',64,this->__PVT__lat_max) );
    }
    if ((0U != this->__PVT__n_iris)) {
        s = VL_CONCATN_NNN(s, VL_SFORMATF_N_NX("  Iris classification : %0d / %0d correct (%0.1f %%)\n",3
                                               , '#',32,this->__PVT__n_iris_ok
                                               , '#',32,this->__PVT__n_iris
                                               , 'D',
                                               ((100.0 
                                                 * 
                                                 VL_ITOR_D_I(32, this->__PVT__n_iris_ok)) 
                                                / VL_ITOR_D_I(32, this->__PVT__n_iris))) );
    }
    s = VL_CONCATN_NNN(s, VL_SFORMATF_N_NX("  assertion failures  : %0d\n",1
                                           , '#',32,VL_NULL_CHECK(this->__PVT__vif, "mlp_scoreboard.sv", 200)
                                           ->__PVT__assert_errors) );
    s = VL_CONCATN_NNN(s, "------------------------------------------------------------"s);
    this->__VnoInFunc_uvm_get_report_object(vlSymsp, __VlefCall_0__uvm_get_report_object);
    VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "mlp_scoreboard.sv", 202)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk17__DOT___local_report_object_);
    VL_NULL_CHECK(unnamedblk17__DOT___local_report_object_, "mlp_scoreboard.sv", 202)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "SCB"s, __VlefCall_1__get_report_verbosity_level);
    __VlefLogAnd_3 = VL_LTES_III(32, 0x00000064U, __VlefCall_1__get_report_verbosity_level);
    if (__VlefLogAnd_3) {
        VL_NULL_CHECK(unnamedblk17__DOT___local_report_object_, "mlp_scoreboard.sv", 202)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "SCB"s, __VlefCall_2__get_report_action);
        __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
    }
    if (VL_UNLIKELY((__VlefLogAnd_3))) {
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "SCB"s, s, 0x00000064U, "mlp_scoreboard.sv"s, 0x000000caU, ""s, 1U);
    }
}

void Vtb_top_mlp_pkg__03a__03amlp_scoreboard::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtb_top_mlp_pkg__03a__03amlp_scoreboard::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_mlp_pkg__03a__03amlp_scoreboard::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtb_top_mlp_pkg__03a__03amlp_scoreboard::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_mlp_pkg__03a__03amlp_scoreboard::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtb_top_mlp_pkg__03a__03amlp_scoreboard::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_mlp_pkg__03a__03amlp_scoreboard::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtb_top_mlp_pkg__03a__03amlp_scoreboard::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_mlp_pkg__03a__03amlp_scoreboard::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtb_top_mlp_pkg__03a__03amlp_scoreboard::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__vif = nullptr;
    __PVT__n_in = 0;
    __PVT__n_out = 0;
    __PVT__n_match = 0;
    __PVT__n_mismatch = 0;
    __PVT__n_cfg = 0;
    __PVT__n_cfg_ignored = 0;
    __PVT__n_reset = 0;
    __PVT__n_aborted = 0;
    __PVT__n_iris = 0;
    __PVT__n_iris_ok = 0;
    __PVT__n_busy_err = 0;
    __PVT__n_ref_err = 0;
    __PVT__n_sat_hi = 0;
    __PVT__n_sat_lo = 0;
}

Vtb_top_mlp_pkg__03a__03amlp_scoreboard::~Vtb_top_mlp_pkg__03a__03amlp_scoreboard() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtb_top_mlp_pkg__03a__03amlp_scoreboard::~\n"); );
}

std::string Vtb_top_mlp_pkg__03a__03amlp_scoreboard::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtb_top_mlp_pkg__03a__03amlp_scoreboard::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_mlp_pkg__03a__03amlp_scoreboard::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtb_top_mlp_pkg__03a__03amlp_scoreboard::to_string_middle\n"); );
    // Body
    std::string out;
    out += "in_imp:" + VL_TO_STRING(__PVT__in_imp);
    out += ", out_imp:" + VL_TO_STRING(__PVT__out_imp);
    out += ", cov_ap:" + VL_TO_STRING(__PVT__cov_ap);
    out += ", vif:" + VL_TO_STRING(__PVT__vif);
    out += ", cfg:" + VL_TO_STRING(__PVT__cfg);
    out += ", model:" + VL_TO_STRING(__PVT__model);
    out += ", exp_q:" + VL_TO_STRING(__PVT__exp_q);
    out += ", n_in:" + VL_TO_STRING(__PVT__n_in);
    out += ", n_out:" + VL_TO_STRING(__PVT__n_out);
    out += ", n_match:" + VL_TO_STRING(__PVT__n_match);
    out += ", n_mismatch:" + VL_TO_STRING(__PVT__n_mismatch);
    out += ", n_cfg:" + VL_TO_STRING(__PVT__n_cfg);
    out += ", n_cfg_ignored:" + VL_TO_STRING(__PVT__n_cfg_ignored);
    out += ", n_reset:" + VL_TO_STRING(__PVT__n_reset);
    out += ", n_aborted:" + VL_TO_STRING(__PVT__n_aborted);
    out += ", n_iris:" + VL_TO_STRING(__PVT__n_iris);
    out += ", n_iris_ok:" + VL_TO_STRING(__PVT__n_iris_ok);
    out += ", n_busy_err:" + VL_TO_STRING(__PVT__n_busy_err);
    out += ", n_ref_err:" + VL_TO_STRING(__PVT__n_ref_err);
    out += ", n_sat_hi:" + VL_TO_STRING(__PVT__n_sat_hi);
    out += ", n_sat_lo:" + VL_TO_STRING(__PVT__n_sat_lo);
    out += ", lat_min:" + VL_TO_STRING(__PVT__lat_min);
    out += ", lat_max:" + VL_TO_STRING(__PVT__lat_max);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_scoreboard::to_string_middle();
    return (out);
}
