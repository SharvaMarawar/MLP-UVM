// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_phase__Vclpkg::__VnoInFunc_get_default_max_ready_to_end_iterations(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_default_max_ready_to_end_iterations__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_phase__Vclpkg::__VnoInFunc_get_default_max_ready_to_end_iterations\n"); );
    // Body
    get_default_max_ready_to_end_iterations__Vfuncrtn = 0x00000014U;
}

void Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_exec_func(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> comp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_exec_func\n"); );
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_exec_task(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> comp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_exec_task\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_traverse(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> comp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase, ::IData/*31:0*/ state) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_traverse\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> comp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_convert2string\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_3__m_aa2string;
    ::std::string __VlefCall_2__m_aa2string;
    ::std::string __VlefCall_1__get_schedule_name;
    ::std::string __VlefCall_0__get_name;
    ::std::string s;
    convert2string__Vfuncrtn = ""s;
    s = ""s;
    this->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
    if ((VlNull{} == this->__PVT__m_parent)) {
        __VlefCall_1__get_schedule_name = "null"s;
    } else {
        this->__VnoInFunc_get_schedule_name(vlSymsp, 0U, __VlefCall_1__get_schedule_name);
    }
    this->__VnoInFunc_m_aa2string(vlSymsp, this->__PVT__m_predecessors, __VlefCall_2__m_aa2string);
    this->__VnoInFunc_m_aa2string(vlSymsp, this->__PVT__m_successors, __VlefCall_3__m_aa2string);
    VL_SFORMAT_NX(s,"phase: %s parent=%s  pred=%s  succ=%s",4
                  , 'S',&(__VlefCall_0__get_name), 'S',&(__VlefCall_1__get_schedule_name)
                  , 'S',&(__VlefCall_2__m_aa2string)
                  , 'S',&(__VlefCall_3__m_aa2string));
    convert2string__Vfuncrtn = s;
}

void Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_aa2string(Vtb_top__Syms* __restrict vlSymsp, ::VlAssocArray<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase>, ::CData/*0:0*/> aa, ::std::string &m_aa2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_aa2string\n"); );
    // Body
    ::std::string __VlefCall_0__get_name;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> unnamedblk1__DOT__ph;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> unnamedblk1__DOT__ph__Vnext;
    ::CData/*0:0*/ unnamedblk1__DOT__ph__Vmore;
    unnamedblk1__DOT__ph__Vmore = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> unnamedblk1__DOT__unnamedblk2__DOT__n;
    ::std::string s;
    ::IData/*31:0*/ i;
    m_aa2string__Vfuncrtn = ""s;
    i = 0U;
    s = "'{ "s;
    unnamedblk1__DOT__ph__Vmore = (0U != aa.first(unnamedblk1__DOT__ph__Vnext));
    while (unnamedblk1__DOT__ph__Vmore) {
        unnamedblk1__DOT__ph = unnamedblk1__DOT__ph__Vnext;
        unnamedblk1__DOT__ph__Vmore = (0U != aa.next(unnamedblk1__DOT__ph__Vnext));
        unnamedblk1__DOT__unnamedblk2__DOT__n = unnamedblk1__DOT__ph;
        if ((VlNull{} == unnamedblk1__DOT__unnamedblk2__DOT__n)) {
            __VlefCall_0__get_name = "null"s;
        } else {
            VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__n, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 559)->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
        }
        s = VL_CONCATN_NNN(VL_CONCATN_NNN(s, __VlefCall_0__get_name), 
                           VL_CVT_PACK_STR_NI(((i == 
                                                (aa.size() 
                                                 - (::IData)(1U)))
                                                ? 0U
                                                : 0x2c20U)));
        i = ((::IData)(1U) + i);
    }
    s = VL_CONCATN_NNN(s, " }"s);
    m_aa2string__Vfuncrtn = s;
}

void Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_objection(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_objection> &get_objection__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_objection\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_3__get_name;
    ::CData/*0:0*/ __VlefLogOr_2;
    ::IData/*31:0*/ __VlefExpr_1;
    ::IData/*31:0*/ __VlefCall_0__get_phase_type;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> imp;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_task_phase> tp;
    {
        this->__VnoInFunc_get_imp(vlSymsp, imp);
        this->__VnoInFunc_get_phase_type(vlSymsp, __VlefCall_0__get_phase_type);
        __VlefLogOr_2 = ((1U != __VlefCall_0__get_phase_type) 
                         | (VlNull{} == imp));
        if ((1U & (~ (::IData)(__VlefLogOr_2)))) {
            __VlefExpr_1 = VL_CAST_DYNAMIC(imp, tp);
            __VlefLogOr_2 = (1U & (~ (0U != __VlefExpr_1)));
        }
        if (__VlefLogOr_2) {
            get_objection__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        if ((VlNull{} == this->__PVT__phase_done)) {
            this->__VnoInFunc_get_name(vlSymsp, __VlefCall_3__get_name);
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pifac151f9__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(__VlefCall_3__get_name, "_objection"s)), VlNull{}, ""s, this->__PVT__phase_done);
        }
        get_objection__Vfuncrtn = this->__PVT__phase_done;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_phase::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::IData/*31:0*/ phase_type, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> parent) {
    Vtb_top_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase::new\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_get_arg_value__Vfuncout_2004;
    __Vtask_get_arg_value__Vfuncout_2004 = 0;
    ::IData/*31:0*/ __Vtask_get_arg_value__Vfuncout_2005;
    __Vtask_get_arg_value__Vfuncout_2005 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__VnoInFunc_get_default_max_ready_to_end_iterations(vlSymsp, this->__PVT__max_ready_to_end_iters);
    ::IData/*31:0*/ __VlefCall_1__get_arg_value;
    ::IData/*31:0*/ __VlefCall_0__get_arg_value;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_cmdline_processor> unnamedblk95__DOT__clp;
    ::std::string unnamedblk95__DOT__val;
    /*super.new*/;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pi7b11ce6f__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, name, VlNull{}, ""s, this->__PVT__m_state_chg);
    VL_NULL_CHECK(this->__PVT__m_state_chg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 708)->__PVT__m_phase 
        = ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase>{this};
    this->__PVT__m_phase_type = phase_type;
    if ((("common"s == name) & (4U == phase_type))) {
        this->__PVT__m_state = 1U;
    }
    this->__PVT__m_run_count = 0U;
    this->__PVT__m_parent = parent;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg.__VnoInFunc_get_inst(vlProcess, vlSymsp, unnamedblk95__DOT__clp);
    unnamedblk95__DOT__val = ""s;
    VL_NULL_CHECK(unnamedblk95__DOT__clp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 726)->__VnoInFunc_get_arg_value(vlSymsp, "+UVM_PHASE_TRACE"s, unnamedblk95__DOT__val, __Vtask_get_arg_value__Vfuncout_2004);
    __VlefCall_0__get_arg_value = __Vtask_get_arg_value__Vfuncout_2004;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace 
        = (0U != __VlefCall_0__get_arg_value);
    VL_NULL_CHECK(unnamedblk95__DOT__clp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 736)->__VnoInFunc_get_arg_value(vlSymsp, "+UVM_USE_OVM_RUN_SEMANTIC"s, unnamedblk95__DOT__val, __Vtask_get_arg_value__Vfuncout_2005);
    __VlefCall_1__get_arg_value = __Vtask_get_arg_value__Vfuncout_2005;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_use_ovm_run_semantic 
        = (0U != __VlefCall_1__get_arg_value);
    if (((VlNull{} == parent) & ((3U == phase_type) 
                                 | (4U == phase_type)))) {
        this->__PVT__m_end_node = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_phase, vlProcess, vlSymsp, 
                                         VL_CVT_PACK_STR_NN(
                                                            VL_CONCATN_NNN(name, "_end"s)), 2U, 
                                         ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase>{this});
        this->__PVT__m_successors.atWrite(this->__PVT__m_end_node) = 1U;
        VL_NULL_CHECK(this->__PVT__m_end_node, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 754)->__PVT__m_predecessors.atWrite(
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase>{this}) = 1U;
    }
}

extern const ::VlUnpacked<::std::string, 8> Vtb_top__ConstPool__CONSARRAY_1;

void Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_add(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> with_phase, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> after_phase, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> before_phase, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> start_with_phase, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> end_with_phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_add\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1113;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2006;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1114;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2007;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1115;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2008;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1116;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2009;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1117;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2010;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1118;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2011;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1119;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2012;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1120;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2013;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1121;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2014;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1122;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2015;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1123;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2016;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1124;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2017;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1125;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2018;
    ::IData/*31:0*/ __Vtask_uvm_report_info__verbosity_2021;
    __Vtask_uvm_report_info__verbosity_2021 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__line_2023;
    __Vtask_uvm_report_info__line_2023 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_info__report_enabled_checked_2025;
    __Vtask_uvm_report_info__report_enabled_checked_2025 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1126;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2026;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_91__get_name;
    ::std::string __VlefCall_90__get_name;
    ::std::string __VlefCall_89__get_name;
    ::std::string __VlefCond_88;
    ::IData/*31:0*/ __VlefCall_87__get_inst_id;
    ::std::string __VlefCall_86__get_name;
    ::std::string __VlefCall_85__get_name;
    ::std::string __VlefCall_84__get_name;
    ::std::string __VlefCall_83__get_name;
    ::std::string __VlefCall_82__get_name;
    ::std::string __VlefCall_81__get_name;
    ::IData/*31:0*/ __VlefCall_80__get_inst_id;
    ::std::string __VlefCall_79__get_full_name;
    ::std::string __VlefCall_78__get_name;
    ::CData/*0:0*/ __VlefLogAnd_77;
    ::IData/*31:0*/ __VlefCall_76__get_report_action;
    ::IData/*31:0*/ __VlefCall_75__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_74__uvm_get_report_object;
    ::std::string __VlefCall_73__get_name;
    ::IData/*31:0*/ __VlefCall_72__get_phase_type;
    ::std::string __VlefCall_71__get_name;
    ::std::string __VlefCall_70__get_name;
    ::CData/*0:0*/ __VlefLogAnd_69;
    ::IData/*31:0*/ __VlefCall_68__get_report_action;
    ::IData/*31:0*/ __VlefCall_67__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_66__uvm_get_report_object;
    ::CData/*0:0*/ __VlefCall_65__is_before;
    ::std::string __VlefCall_64__get_name;
    ::std::string __VlefCall_63__get_name;
    ::CData/*0:0*/ __VlefLogAnd_62;
    ::IData/*31:0*/ __VlefCall_61__get_report_action;
    ::IData/*31:0*/ __VlefCall_60__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_59__uvm_get_report_object;
    ::CData/*0:0*/ __VlefCall_58__is_before;
    ::std::string __VlefCall_57__get_name;
    ::std::string __VlefCall_56__get_name;
    ::CData/*0:0*/ __VlefLogAnd_55;
    ::IData/*31:0*/ __VlefCall_54__get_report_action;
    ::IData/*31:0*/ __VlefCall_53__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_52__uvm_get_report_object;
    ::CData/*0:0*/ __VlefCall_51__is_before;
    ::CData/*0:0*/ __VlefLogAnd_50;
    ::IData/*31:0*/ __VlefCall_49__get_report_action;
    ::IData/*31:0*/ __VlefCall_48__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_47__uvm_get_report_object;
    ::CData/*0:0*/ __VlefLogAnd_46;
    ::IData/*31:0*/ __VlefCall_45__get_report_action;
    ::IData/*31:0*/ __VlefCall_44__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_43__uvm_get_report_object;
    ::CData/*0:0*/ __VlefLogAnd_42;
    ::IData/*31:0*/ __VlefCall_41__get_report_action;
    ::IData/*31:0*/ __VlefCall_40__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_39__uvm_get_report_object;
    ::std::string __VlefCall_38__get_name;
    ::CData/*0:0*/ __VlefLogAnd_37;
    ::IData/*31:0*/ __VlefCall_36__get_report_action;
    ::IData/*31:0*/ __VlefCall_35__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_34__uvm_get_report_object;
    ::CData/*0:0*/ __VlefLogAnd_33;
    ::IData/*31:0*/ __VlefCall_32__get_phase_type;
    ::std::string __VlefCall_31__get_name;
    ::CData/*0:0*/ __VlefLogAnd_30;
    ::IData/*31:0*/ __VlefCall_29__get_report_action;
    ::IData/*31:0*/ __VlefCall_28__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_27__uvm_get_report_object;
    ::CData/*0:0*/ __VlefLogAnd_26;
    ::IData/*31:0*/ __VlefCall_25__get_phase_type;
    ::std::string __VlefCall_24__get_name;
    ::CData/*0:0*/ __VlefLogAnd_23;
    ::IData/*31:0*/ __VlefCall_22__get_report_action;
    ::IData/*31:0*/ __VlefCall_21__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_20__uvm_get_report_object;
    ::CData/*0:0*/ __VlefLogAnd_19;
    ::IData/*31:0*/ __VlefCall_18__get_phase_type;
    ::std::string __VlefCall_17__get_name;
    ::CData/*0:0*/ __VlefLogAnd_16;
    ::IData/*31:0*/ __VlefCall_15__get_report_action;
    ::IData/*31:0*/ __VlefCall_14__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_13__uvm_get_report_object;
    ::CData/*0:0*/ __VlefLogAnd_12;
    ::IData/*31:0*/ __VlefCall_11__get_phase_type;
    ::std::string __VlefCall_10__get_name;
    ::CData/*0:0*/ __VlefLogAnd_9;
    ::IData/*31:0*/ __VlefCall_8__get_report_action;
    ::IData/*31:0*/ __VlefCall_7__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_6__uvm_get_report_object;
    ::CData/*0:0*/ __VlefLogAnd_5;
    ::IData/*31:0*/ __VlefCall_4__get_phase_type;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk96__DOT___local_report_object_;
    ::std::string unnamedblk97__DOT__nm;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk97__DOT__unnamedblk98__DOT___local_report_object_;
    ::std::string unnamedblk99__DOT__nm;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk99__DOT__unnamedblk100__DOT___local_report_object_;
    ::std::string unnamedblk101__DOT__nm;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk101__DOT__unnamedblk102__DOT___local_report_object_;
    ::std::string unnamedblk103__DOT__nm;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk103__DOT__unnamedblk104__DOT___local_report_object_;
    ::std::string unnamedblk105__DOT__nm;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk105__DOT__unnamedblk106__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk107__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk108__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk109__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk110__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk111__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk112__DOT___local_report_object_;
    ::IData/*31:0*/ unnamedblk114__DOT__typ;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk114__DOT__unnamedblk115__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> unnamedblk116__DOT__pred;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> unnamedblk116__DOT__pred__Vnext;
    ::CData/*0:0*/ unnamedblk116__DOT__pred__Vmore;
    unnamedblk116__DOT__pred__Vmore = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> unnamedblk117__DOT__succ;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> unnamedblk117__DOT__succ__Vnext;
    ::CData/*0:0*/ unnamedblk117__DOT__succ__Vmore;
    unnamedblk117__DOT__succ__Vmore = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> unnamedblk118__DOT__pred;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> unnamedblk118__DOT__pred__Vnext;
    ::CData/*0:0*/ unnamedblk118__DOT__pred__Vmore;
    unnamedblk118__DOT__pred__Vmore = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> unnamedblk119__DOT__succ;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> unnamedblk119__DOT__succ__Vnext;
    ::CData/*0:0*/ unnamedblk119__DOT__succ__Vmore;
    unnamedblk119__DOT__succ__Vmore = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> unnamedblk120__DOT__succ;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> unnamedblk120__DOT__succ__Vnext;
    ::CData/*0:0*/ unnamedblk120__DOT__succ__Vmore;
    unnamedblk120__DOT__succ__Vmore = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> unnamedblk121__DOT__pred;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> unnamedblk121__DOT__pred__Vnext;
    ::CData/*0:0*/ unnamedblk121__DOT__pred__Vmore;
    unnamedblk121__DOT__pred__Vmore = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> unnamedblk122__DOT__pred;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> unnamedblk122__DOT__pred__Vnext;
    ::CData/*0:0*/ unnamedblk122__DOT__pred__Vmore;
    unnamedblk122__DOT__pred__Vmore = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> unnamedblk123__DOT__succ;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> unnamedblk123__DOT__succ__Vnext;
    ::CData/*0:0*/ unnamedblk123__DOT__succ__Vmore;
    unnamedblk123__DOT__succ__Vmore = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pi0eb11e0b> unnamedblk124__DOT__iter;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase_cb> unnamedblk124__DOT__cb;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> new_node;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> begin_node;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> end_node;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> tmp_node;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase_state_change> state_chg;
    if ((VlNull{} == phase)) {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1113);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1113;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2006);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
            = __Vtask_get_root__Vfuncout_2006;
        __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
        VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 775)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk96__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk96__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 775)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 3U, "PH/NULL"s, __VlefCall_1__get_report_verbosity_level);
        __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
        if (__VlefLogAnd_3) {
            VL_NULL_CHECK(unnamedblk96__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 775)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 3U, "PH/NULL"s, __VlefCall_2__get_report_action);
            __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_3))) {
            vlSymsp->vlInst.TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "PH/NULL"s, "add: phase argument is null"s, 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh"s, 0x00000307U, ""s, 1U);
        }
    }
    __VlefLogAnd_5 = (VlNull{} != with_phase);
    if (__VlefLogAnd_5) {
        VL_NULL_CHECK(with_phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 778)->__VnoInFunc_get_phase_type(vlSymsp, __VlefCall_4__get_phase_type);
        __VlefLogAnd_5 = (0U == __VlefCall_4__get_phase_type);
    }
    if (__VlefLogAnd_5) {
        VL_NULL_CHECK(with_phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 779)->__VnoInFunc_get_name(vlSymsp, unnamedblk97__DOT__nm);
        this->__VnoInFunc_find(vlProcess, vlSymsp, with_phase, 1U, with_phase);
        if ((VlNull{} == with_phase)) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1114);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1114;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2007);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_2007;
            __VlefCall_6__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_6__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 783)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk97__DOT__unnamedblk98__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk97__DOT__unnamedblk98__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 783)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 3U, "PH_BAD_ADD"s, __VlefCall_7__get_report_verbosity_level);
            __VlefLogAnd_9 = VL_LTES_III(32, 0U, __VlefCall_7__get_report_verbosity_level);
            if (__VlefLogAnd_9) {
                VL_NULL_CHECK(unnamedblk97__DOT__unnamedblk98__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 783)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 3U, "PH_BAD_ADD"s, __VlefCall_8__get_report_action);
                __VlefLogAnd_9 = (0U != __VlefCall_8__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_9))) {
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_10__get_name);
                vlSymsp->vlInst.TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "PH_BAD_ADD"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("cannot find with_phase '"s, unnamedblk97__DOT__nm), "' within node '"s), __VlefCall_10__get_name), "'"s)), 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh"s, 0x0000030fU, ""s, 1U);
            }
        }
    }
    __VlefLogAnd_12 = (VlNull{} != before_phase);
    if (__VlefLogAnd_12) {
        VL_NULL_CHECK(before_phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 787)->__VnoInFunc_get_phase_type(vlSymsp, __VlefCall_11__get_phase_type);
        __VlefLogAnd_12 = (0U == __VlefCall_11__get_phase_type);
    }
    if (__VlefLogAnd_12) {
        VL_NULL_CHECK(before_phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 788)->__VnoInFunc_get_name(vlSymsp, unnamedblk99__DOT__nm);
        this->__VnoInFunc_find(vlProcess, vlSymsp, before_phase, 1U, before_phase);
        if ((VlNull{} == before_phase)) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1115);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1115;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2008);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_2008;
            __VlefCall_13__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_13__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 792)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk99__DOT__unnamedblk100__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk99__DOT__unnamedblk100__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 792)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 3U, "PH_BAD_ADD"s, __VlefCall_14__get_report_verbosity_level);
            __VlefLogAnd_16 = VL_LTES_III(32, 0U, __VlefCall_14__get_report_verbosity_level);
            if (__VlefLogAnd_16) {
                VL_NULL_CHECK(unnamedblk99__DOT__unnamedblk100__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 792)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 3U, "PH_BAD_ADD"s, __VlefCall_15__get_report_action);
                __VlefLogAnd_16 = (0U != __VlefCall_15__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_16))) {
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_17__get_name);
                vlSymsp->vlInst.TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "PH_BAD_ADD"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("cannot find before_phase '"s, unnamedblk99__DOT__nm), "' within node '"s), __VlefCall_17__get_name), "'"s)), 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh"s, 0x00000318U, ""s, 1U);
            }
        }
    }
    __VlefLogAnd_19 = (VlNull{} != after_phase);
    if (__VlefLogAnd_19) {
        VL_NULL_CHECK(after_phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 796)->__VnoInFunc_get_phase_type(vlSymsp, __VlefCall_18__get_phase_type);
        __VlefLogAnd_19 = (0U == __VlefCall_18__get_phase_type);
    }
    if (__VlefLogAnd_19) {
        VL_NULL_CHECK(after_phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 797)->__VnoInFunc_get_name(vlSymsp, unnamedblk101__DOT__nm);
        this->__VnoInFunc_find(vlProcess, vlSymsp, after_phase, 1U, after_phase);
        if ((VlNull{} == after_phase)) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1116);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1116;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2009);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_2009;
            __VlefCall_20__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_20__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 801)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk101__DOT__unnamedblk102__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk101__DOT__unnamedblk102__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 801)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 3U, "PH_BAD_ADD"s, __VlefCall_21__get_report_verbosity_level);
            __VlefLogAnd_23 = VL_LTES_III(32, 0U, __VlefCall_21__get_report_verbosity_level);
            if (__VlefLogAnd_23) {
                VL_NULL_CHECK(unnamedblk101__DOT__unnamedblk102__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 801)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 3U, "PH_BAD_ADD"s, __VlefCall_22__get_report_action);
                __VlefLogAnd_23 = (0U != __VlefCall_22__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_23))) {
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_24__get_name);
                vlSymsp->vlInst.TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "PH_BAD_ADD"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("cannot find after_phase '"s, unnamedblk101__DOT__nm), "' within node '"s), __VlefCall_24__get_name), "'"s)), 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh"s, 0x00000321U, ""s, 1U);
            }
        }
    }
    __VlefLogAnd_26 = (VlNull{} != start_with_phase);
    if (__VlefLogAnd_26) {
        VL_NULL_CHECK(start_with_phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 805)->__VnoInFunc_get_phase_type(vlSymsp, __VlefCall_25__get_phase_type);
        __VlefLogAnd_26 = (0U == __VlefCall_25__get_phase_type);
    }
    if (__VlefLogAnd_26) {
        VL_NULL_CHECK(start_with_phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 806)->__VnoInFunc_get_name(vlSymsp, unnamedblk103__DOT__nm);
        this->__VnoInFunc_find(vlProcess, vlSymsp, start_with_phase, 1U, start_with_phase);
        if ((VlNull{} == start_with_phase)) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1117);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1117;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2010);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_2010;
            __VlefCall_27__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_27__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 810)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk103__DOT__unnamedblk104__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk103__DOT__unnamedblk104__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 810)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 3U, "PH_BAD_ADD"s, __VlefCall_28__get_report_verbosity_level);
            __VlefLogAnd_30 = VL_LTES_III(32, 0U, __VlefCall_28__get_report_verbosity_level);
            if (__VlefLogAnd_30) {
                VL_NULL_CHECK(unnamedblk103__DOT__unnamedblk104__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 810)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 3U, "PH_BAD_ADD"s, __VlefCall_29__get_report_action);
                __VlefLogAnd_30 = (0U != __VlefCall_29__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_30))) {
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_31__get_name);
                vlSymsp->vlInst.TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "PH_BAD_ADD"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("cannot find start_with_phase '"s, unnamedblk103__DOT__nm), "' within node '"s), __VlefCall_31__get_name), "'"s)), 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh"s, 0x0000032aU, ""s, 1U);
            }
        }
    }
    __VlefLogAnd_33 = (VlNull{} != end_with_phase);
    if (__VlefLogAnd_33) {
        VL_NULL_CHECK(end_with_phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 814)->__VnoInFunc_get_phase_type(vlSymsp, __VlefCall_32__get_phase_type);
        __VlefLogAnd_33 = (0U == __VlefCall_32__get_phase_type);
    }
    if (__VlefLogAnd_33) {
        VL_NULL_CHECK(end_with_phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 815)->__VnoInFunc_get_name(vlSymsp, unnamedblk105__DOT__nm);
        this->__VnoInFunc_find(vlProcess, vlSymsp, end_with_phase, 1U, end_with_phase);
        if ((VlNull{} == end_with_phase)) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1118);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1118;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2011);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_2011;
            __VlefCall_34__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_34__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 819)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk105__DOT__unnamedblk106__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk105__DOT__unnamedblk106__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 819)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 3U, "PH_BAD_ADD"s, __VlefCall_35__get_report_verbosity_level);
            __VlefLogAnd_37 = VL_LTES_III(32, 0U, __VlefCall_35__get_report_verbosity_level);
            if (__VlefLogAnd_37) {
                VL_NULL_CHECK(unnamedblk105__DOT__unnamedblk106__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 819)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 3U, "PH_BAD_ADD"s, __VlefCall_36__get_report_action);
                __VlefLogAnd_37 = (0U != __VlefCall_36__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_37))) {
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_38__get_name);
                vlSymsp->vlInst.TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "PH_BAD_ADD"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("cannot find end_with_phase '"s, unnamedblk105__DOT__nm), "' within node '"s), __VlefCall_38__get_name), "'"s)), 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh"s, 0x00000333U, ""s, 1U);
            }
        }
    }
    if ((1U < (((VlNull{} != with_phase) + (VlNull{} 
                                            != after_phase)) 
               + (VlNull{} != start_with_phase)))) {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1119);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1119;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2012);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
            = __Vtask_get_root__Vfuncout_2012;
        __VlefCall_39__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
        VL_NULL_CHECK(__VlefCall_39__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 825)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk107__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk107__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 825)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 3U, "PH_BAD_ADD"s, __VlefCall_40__get_report_verbosity_level);
        __VlefLogAnd_42 = VL_LTES_III(32, 0U, __VlefCall_40__get_report_verbosity_level);
        if (__VlefLogAnd_42) {
            VL_NULL_CHECK(unnamedblk107__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 825)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 3U, "PH_BAD_ADD"s, __VlefCall_41__get_report_action);
            __VlefLogAnd_42 = (0U != __VlefCall_41__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_42))) {
            vlSymsp->vlInst.TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "PH_BAD_ADD"s, "only one of with_phase/after_phase/start_with_phase may be specified as they all specify predecessor"s, 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh"s, 0x00000339U, ""s, 1U);
        }
    }
    if ((1U < (((VlNull{} != with_phase) + (VlNull{} 
                                            != before_phase)) 
               + (VlNull{} != end_with_phase)))) {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1120);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1120;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2013);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
            = __Vtask_get_root__Vfuncout_2013;
        __VlefCall_43__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
        VL_NULL_CHECK(__VlefCall_43__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 830)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk108__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk108__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 830)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 3U, "PH_BAD_ADD"s, __VlefCall_44__get_report_verbosity_level);
        __VlefLogAnd_46 = VL_LTES_III(32, 0U, __VlefCall_44__get_report_verbosity_level);
        if (__VlefLogAnd_46) {
            VL_NULL_CHECK(unnamedblk108__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 830)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 3U, "PH_BAD_ADD"s, __VlefCall_45__get_report_action);
            __VlefLogAnd_46 = (0U != __VlefCall_45__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_46))) {
            vlSymsp->vlInst.TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "PH_BAD_ADD"s, "only one of with_phase/before_phase/end_with_phase may be specified as they all specify successor"s, 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh"s, 0x0000033eU, ""s, 1U);
        }
    }
    if ((((((before_phase == ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase>{this}) 
            | (after_phase == this->__PVT__m_end_node)) 
           | (with_phase == this->__PVT__m_end_node)) 
          | (start_with_phase == this->__PVT__m_end_node)) 
         | (end_with_phase == this->__PVT__m_end_node))) {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1121);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1121;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2014);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
            = __Vtask_get_root__Vfuncout_2014;
        __VlefCall_47__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
        VL_NULL_CHECK(__VlefCall_47__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 839)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk109__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk109__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 839)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 3U, "PH_BAD_ADD"s, __VlefCall_48__get_report_verbosity_level);
        __VlefLogAnd_50 = VL_LTES_III(32, 0U, __VlefCall_48__get_report_verbosity_level);
        if (__VlefLogAnd_50) {
            VL_NULL_CHECK(unnamedblk109__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 839)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 3U, "PH_BAD_ADD"s, __VlefCall_49__get_report_action);
            __VlefLogAnd_50 = (0U != __VlefCall_49__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_50))) {
            vlSymsp->vlInst.TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "PH_BAD_ADD"s, "cannot add before begin node, after end node, or with end nodes"s, 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh"s, 0x00000347U, ""s, 1U);
        }
    }
    if (((VlNull{} != before_phase) & (VlNull{} != after_phase))) {
        VL_NULL_CHECK(after_phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 843)->__VnoInFunc_is_before(vlProcess, vlSymsp, before_phase, __VlefCall_51__is_before);
        if ((1U & (~ (::IData)(__VlefCall_51__is_before)))) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1122);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1122;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2015);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_2015;
            __VlefCall_52__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_52__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 845)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk110__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk110__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 845)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 3U, "PH_BAD_ADD"s, __VlefCall_53__get_report_verbosity_level);
            __VlefLogAnd_55 = VL_LTES_III(32, 0U, __VlefCall_53__get_report_verbosity_level);
            if (__VlefLogAnd_55) {
                VL_NULL_CHECK(unnamedblk110__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 845)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 3U, "PH_BAD_ADD"s, __VlefCall_54__get_report_action);
                __VlefLogAnd_55 = (0U != __VlefCall_54__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_55))) {
                VL_NULL_CHECK(before_phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 845)->__VnoInFunc_get_name(vlSymsp, __VlefCall_56__get_name);
                VL_NULL_CHECK(after_phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 845)->__VnoInFunc_get_name(vlSymsp, __VlefCall_57__get_name);
                vlSymsp->vlInst.TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "PH_BAD_ADD"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Phase '"s, __VlefCall_56__get_name), "' is not before phase '"s), __VlefCall_57__get_name), "'"s)), 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh"s, 0x0000034dU, ""s, 1U);
            }
        }
    }
    if (((VlNull{} != before_phase) & (VlNull{} != start_with_phase))) {
        VL_NULL_CHECK(start_with_phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 850)->__VnoInFunc_is_before(vlProcess, vlSymsp, before_phase, __VlefCall_58__is_before);
        if ((1U & (~ (::IData)(__VlefCall_58__is_before)))) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1123);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1123;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2016);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_2016;
            __VlefCall_59__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_59__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 852)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk111__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk111__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 852)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 3U, "PH_BAD_ADD"s, __VlefCall_60__get_report_verbosity_level);
            __VlefLogAnd_62 = VL_LTES_III(32, 0U, __VlefCall_60__get_report_verbosity_level);
            if (__VlefLogAnd_62) {
                VL_NULL_CHECK(unnamedblk111__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 852)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 3U, "PH_BAD_ADD"s, __VlefCall_61__get_report_action);
                __VlefLogAnd_62 = (0U != __VlefCall_61__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_62))) {
                VL_NULL_CHECK(before_phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 852)->__VnoInFunc_get_name(vlSymsp, __VlefCall_63__get_name);
                VL_NULL_CHECK(start_with_phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 852)->__VnoInFunc_get_name(vlSymsp, __VlefCall_64__get_name);
                vlSymsp->vlInst.TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "PH_BAD_ADD"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Phase '"s, __VlefCall_63__get_name), "' is not before phase '"s), __VlefCall_64__get_name), "'"s)), 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh"s, 0x00000354U, ""s, 1U);
            }
        }
    }
    if (((VlNull{} != end_with_phase) & (VlNull{} != after_phase))) {
        VL_NULL_CHECK(after_phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 857)->__VnoInFunc_is_before(vlProcess, vlSymsp, end_with_phase, __VlefCall_65__is_before);
        if ((1U & (~ (::IData)(__VlefCall_65__is_before)))) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1124);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1124;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2017);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_2017;
            __VlefCall_66__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_66__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 859)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk112__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk112__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 859)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 3U, "PH_BAD_ADD"s, __VlefCall_67__get_report_verbosity_level);
            __VlefLogAnd_69 = VL_LTES_III(32, 0U, __VlefCall_67__get_report_verbosity_level);
            if (__VlefLogAnd_69) {
                VL_NULL_CHECK(unnamedblk112__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 859)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 3U, "PH_BAD_ADD"s, __VlefCall_68__get_report_action);
                __VlefLogAnd_69 = (0U != __VlefCall_68__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_69))) {
                VL_NULL_CHECK(end_with_phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 859)->__VnoInFunc_get_name(vlSymsp, __VlefCall_70__get_name);
                VL_NULL_CHECK(after_phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 859)->__VnoInFunc_get_name(vlSymsp, __VlefCall_71__get_name);
                vlSymsp->vlInst.TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "PH_BAD_ADD"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Phase '"s, __VlefCall_70__get_name), "' is not before phase '"s), __VlefCall_71__get_name), "'"s)), 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh"s, 0x0000035bU, ""s, 1U);
            }
        }
    }
    VL_NULL_CHECK(phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 864)->__VnoInFunc_get_phase_type(vlSymsp, __VlefCall_72__get_phase_type);
    if ((0U == __VlefCall_72__get_phase_type)) {
        VL_NULL_CHECK(phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 866)->__VnoInFunc_get_name(vlSymsp, __VlefCall_73__get_name);
        new_node = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_phase, vlProcess, vlSymsp, 
                          VL_CVT_PACK_STR_NN(__VlefCall_73__get_name), 1U, 
                          ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase>{this});
        VL_NULL_CHECK(new_node, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 867)->__PVT__m_imp 
            = phase;
        begin_node = new_node;
        end_node = new_node;
    } else {
        begin_node = phase;
        end_node = VL_NULL_CHECK(phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 875)
            ->__PVT__m_end_node;
        VL_NULL_CHECK(phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 876)->__PVT__m_parent 
            = ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase>{this};
    }
    if ((((((VlNull{} == with_phase) & (VlNull{} == after_phase)) 
           & (VlNull{} == before_phase)) & (VlNull{} 
                                            == start_with_phase)) 
         & (VlNull{} == end_with_phase))) {
        before_phase = this->__PVT__m_end_node;
    }
    if (vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
        VL_NULL_CHECK(phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 895)->__VnoInFunc_get_phase_type(vlSymsp, unnamedblk114__DOT__typ);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1125);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1125;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2018);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
            = __Vtask_get_root__Vfuncout_2018;
        __VlefCall_74__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
        VL_NULL_CHECK(__VlefCall_74__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 908)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk114__DOT__unnamedblk115__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk114__DOT__unnamedblk115__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 908)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "PH/TRC/ADD_PH"s, __VlefCall_75__get_report_verbosity_level);
        __VlefLogAnd_77 = VL_LTES_III(32, 0x000001f4U, __VlefCall_75__get_report_verbosity_level);
        if (__VlefLogAnd_77) {
            VL_NULL_CHECK(unnamedblk114__DOT__unnamedblk115__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 908)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "PH/TRC/ADD_PH"s, __VlefCall_76__get_report_action);
            __VlefLogAnd_77 = (0U != __VlefCall_76__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_77))) {
            this->__VnoInFunc_get_name(vlSymsp, __VlefCall_78__get_name);
            VL_NULL_CHECK(phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 908)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_79__get_full_name);
            VL_NULL_CHECK(phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 908)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_80__get_inst_id);
            if ((VlNull{} == with_phase)) {
                __VlefCall_81__get_name = "null"s;
            } else {
                VL_NULL_CHECK(with_phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 908)->__VnoInFunc_get_name(vlSymsp, __VlefCall_81__get_name);
            }
            if ((VlNull{} == start_with_phase)) {
                __VlefCall_82__get_name = "null"s;
            } else {
                VL_NULL_CHECK(start_with_phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 908)->__VnoInFunc_get_name(vlSymsp, __VlefCall_82__get_name);
            }
            if ((VlNull{} == end_with_phase)) {
                __VlefCall_83__get_name = "null"s;
            } else {
                VL_NULL_CHECK(end_with_phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 908)->__VnoInFunc_get_name(vlSymsp, __VlefCall_83__get_name);
            }
            if ((VlNull{} == after_phase)) {
                __VlefCall_84__get_name = "null"s;
            } else {
                VL_NULL_CHECK(after_phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 908)->__VnoInFunc_get_name(vlSymsp, __VlefCall_84__get_name);
            }
            if ((VlNull{} == before_phase)) {
                __VlefCall_85__get_name = "null"s;
            } else {
                VL_NULL_CHECK(before_phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 908)->__VnoInFunc_get_name(vlSymsp, __VlefCall_85__get_name);
            }
            if ((VlNull{} == new_node)) {
                __VlefCond_88 = "null"s;
            } else {
                VL_NULL_CHECK(new_node, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 908)->__VnoInFunc_get_name(vlSymsp, __VlefCall_86__get_name);
                VL_NULL_CHECK(new_node, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 908)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_87__get_inst_id);
                __VlefCond_88 = VL_CONCATN_NNN(VL_CONCATN_NNN(__VlefCall_86__get_name, " inst_id="s), VL_SFORMATF_N_NX("%0d",1
                                                                                , '~',32,__VlefCall_87__get_inst_id) );
            }
            if ((VlNull{} == begin_node)) {
                __VlefCall_89__get_name = "null"s;
            } else {
                VL_NULL_CHECK(begin_node, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 908)->__VnoInFunc_get_name(vlSymsp, __VlefCall_89__get_name);
            }
            if ((VlNull{} == end_node)) {
                __VlefCall_90__get_name = "null"s;
            } else {
                VL_NULL_CHECK(end_node, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 908)->__VnoInFunc_get_name(vlSymsp, __VlefCall_90__get_name);
            }
            __Vtask_uvm_report_info__report_enabled_checked_2025 = 1U;
            this->__Vtask_uvm_report_info__context_name_2024 = ""s;
            __Vtask_uvm_report_info__line_2023 = 0x0000038cU;
            this->__Vtask_uvm_report_info__filename_2022 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh"s;
            __Vtask_uvm_report_info__verbosity_2021 = 0x000001f4U;
            this->__Vtask_uvm_report_info__message_2020 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(__VlefCall_78__get_name, " ("s), 
                                                                                ((5U 
                                                                                < this->__PVT__m_phase_type)
                                                                                 ? ""s
                                                                                 : Vtb_top__ConstPool__CONSARRAY_1
                                                                                [
                                                                                (7U 
                                                                                & this->__PVT__m_phase_type)])), ") ADD_PHASE: phase="s), __VlefCall_79__get_full_name), " ("s), 
                                                                                ((5U 
                                                                                < unnamedblk114__DOT__typ)
                                                                                 ? ""s
                                                                                 : Vtb_top__ConstPool__CONSARRAY_1
                                                                                [
                                                                                (7U 
                                                                                & unnamedblk114__DOT__typ)])), ", inst_id="s), VL_SFORMATF_N_NX("%0d",1
                                                                                , '~',32,__VlefCall_80__get_inst_id) ), ")"s), " with_phase="s), __VlefCall_81__get_name), " start_with_phase="s), __VlefCall_82__get_name), " end_with_phase="s), __VlefCall_83__get_name), " after_phase="s), __VlefCall_84__get_name), " before_phase="s), __VlefCall_85__get_name), " new_node="s), __VlefCond_88), " begin_node="s), __VlefCall_89__get_name), " end_node="s), __VlefCall_90__get_name));
            this->__Vtask_uvm_report_info__id_2019 = "PH/TRC/ADD_PH"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1126);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1126;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 147)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2026);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__Vfuncout_2026;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 148)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__id_2019, this->__Vtask_uvm_report_info__message_2020, __Vtask_uvm_report_info__verbosity_2021, this->__Vtask_uvm_report_info__filename_2022, __Vtask_uvm_report_info__line_2023, this->__Vtask_uvm_report_info__context_name_2024, (::IData)(__Vtask_uvm_report_info__report_enabled_checked_2025));
        }
    }
    if ((VlNull{} != with_phase)) {
        VL_NULL_CHECK(begin_node, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 916)->__PVT__m_predecessors 
            = VL_NULL_CHECK(with_phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 916)
            ->__PVT__m_predecessors;
        unnamedblk116__DOT__pred__Vmore = (0U != VL_NULL_CHECK(with_phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 917)
                                           ->__PVT__m_predecessors.first(unnamedblk116__DOT__pred__Vnext));
        while (unnamedblk116__DOT__pred__Vmore) {
            unnamedblk116__DOT__pred = unnamedblk116__DOT__pred__Vnext;
            unnamedblk116__DOT__pred__Vmore = (0U != VL_NULL_CHECK(with_phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 917)
                                               ->__PVT__m_predecessors.next(unnamedblk116__DOT__pred__Vnext));
            VL_NULL_CHECK(unnamedblk116__DOT__pred, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 918)->__PVT__m_successors.atWrite(begin_node) = 1U;
        }
        VL_NULL_CHECK(end_node, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 922)->__PVT__m_successors 
            = VL_NULL_CHECK(with_phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 922)
            ->__PVT__m_successors;
        unnamedblk117__DOT__succ__Vmore = (0U != VL_NULL_CHECK(with_phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 923)
                                           ->__PVT__m_successors.first(unnamedblk117__DOT__succ__Vnext));
        while (unnamedblk117__DOT__succ__Vmore) {
            unnamedblk117__DOT__succ = unnamedblk117__DOT__succ__Vnext;
            unnamedblk117__DOT__succ__Vmore = (0U != VL_NULL_CHECK(with_phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 923)
                                               ->__PVT__m_successors.next(unnamedblk117__DOT__succ__Vnext));
            VL_NULL_CHECK(unnamedblk117__DOT__succ, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 924)->__PVT__m_predecessors.atWrite(end_node) = 1U;
        }
    }
    if ((VlNull{} != start_with_phase)) {
        VL_NULL_CHECK(begin_node, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 931)->__PVT__m_predecessors 
            = VL_NULL_CHECK(start_with_phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 931)
            ->__PVT__m_predecessors;
        unnamedblk118__DOT__pred__Vmore = (0U != VL_NULL_CHECK(start_with_phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 932)
                                           ->__PVT__m_predecessors.first(unnamedblk118__DOT__pred__Vnext));
        while (unnamedblk118__DOT__pred__Vmore) {
            unnamedblk118__DOT__pred = unnamedblk118__DOT__pred__Vnext;
            unnamedblk118__DOT__pred__Vmore = (0U != VL_NULL_CHECK(start_with_phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 932)
                                               ->__PVT__m_predecessors.next(unnamedblk118__DOT__pred__Vnext));
            VL_NULL_CHECK(unnamedblk118__DOT__pred, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 933)->__PVT__m_successors.atWrite(begin_node) = 1U;
        }
        if (((VlNull{} == before_phase) & (VlNull{} 
                                           == end_with_phase))) {
            VL_NULL_CHECK(end_node, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 937)->__PVT__m_successors 
                = VL_NULL_CHECK(this->__PVT__m_end_node, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 937)
                ->__PVT__m_successors;
            unnamedblk119__DOT__succ__Vmore = (0U != VL_NULL_CHECK(this->__PVT__m_end_node, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 938)
                                               ->__PVT__m_successors.first(unnamedblk119__DOT__succ__Vnext));
            while (unnamedblk119__DOT__succ__Vmore) {
                unnamedblk119__DOT__succ = unnamedblk119__DOT__succ__Vnext;
                unnamedblk119__DOT__succ__Vmore = (0U 
                                                   != VL_NULL_CHECK(this->__PVT__m_end_node, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 938)
                                                   ->__PVT__m_successors.next(unnamedblk119__DOT__succ__Vnext));
                VL_NULL_CHECK(unnamedblk119__DOT__succ, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 939)->__PVT__m_predecessors.atWrite(end_node) = 1U;
            }
        }
    }
    if ((VlNull{} != end_with_phase)) {
        VL_NULL_CHECK(end_node, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 946)->__PVT__m_successors 
            = VL_NULL_CHECK(end_with_phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 946)
            ->__PVT__m_successors;
        unnamedblk120__DOT__succ__Vmore = (0U != VL_NULL_CHECK(end_with_phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 947)
                                           ->__PVT__m_successors.first(unnamedblk120__DOT__succ__Vnext));
        while (unnamedblk120__DOT__succ__Vmore) {
            unnamedblk120__DOT__succ = unnamedblk120__DOT__succ__Vnext;
            unnamedblk120__DOT__succ__Vmore = (0U != VL_NULL_CHECK(end_with_phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 947)
                                               ->__PVT__m_successors.next(unnamedblk120__DOT__succ__Vnext));
            VL_NULL_CHECK(unnamedblk120__DOT__succ, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 948)->__PVT__m_predecessors.atWrite(end_node) = 1U;
        }
        if (((VlNull{} == after_phase) & (VlNull{} 
                                          == start_with_phase))) {
            VL_NULL_CHECK(begin_node, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 952)->__PVT__m_predecessors 
                = this->__PVT__m_predecessors;
            unnamedblk121__DOT__pred__Vmore = (0U != this->__PVT__m_predecessors.first(unnamedblk121__DOT__pred__Vnext));
            while (unnamedblk121__DOT__pred__Vmore) {
                unnamedblk121__DOT__pred = unnamedblk121__DOT__pred__Vnext;
                unnamedblk121__DOT__pred__Vmore = (0U 
                                                   != this->__PVT__m_predecessors.next(unnamedblk121__DOT__pred__Vnext));
                VL_NULL_CHECK(unnamedblk121__DOT__pred, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 954)->__PVT__m_successors.atWrite(begin_node) = 1U;
            }
        }
    }
    if ((VlNull{} != before_phase)) {
        if (((VlNull{} == after_phase) & (VlNull{} 
                                          == start_with_phase))) {
            unnamedblk122__DOT__pred__Vmore = (0U != VL_NULL_CHECK(before_phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 964)
                                               ->__PVT__m_predecessors.first(unnamedblk122__DOT__pred__Vnext));
            while (unnamedblk122__DOT__pred__Vmore) {
                unnamedblk122__DOT__pred = unnamedblk122__DOT__pred__Vnext;
                unnamedblk122__DOT__pred__Vmore = (0U 
                                                   != VL_NULL_CHECK(before_phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 964)
                                                   ->__PVT__m_predecessors.next(unnamedblk122__DOT__pred__Vnext));
                VL_NULL_CHECK(unnamedblk122__DOT__pred, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 965)->__PVT__m_successors.erase(before_phase);
                VL_NULL_CHECK(unnamedblk122__DOT__pred, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 966)->__PVT__m_successors.atWrite(begin_node) = 1U;
            }
            VL_NULL_CHECK(begin_node, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 968)->__PVT__m_predecessors 
                = VL_NULL_CHECK(before_phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 968)
                ->__PVT__m_predecessors;
            VL_NULL_CHECK(before_phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 969)->__PVT__m_predecessors.clear();
        } else if ((0U != VL_NULL_CHECK(before_phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 973)
                    ->__PVT__m_predecessors.exists(after_phase))) {
            VL_NULL_CHECK(before_phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 974)->__PVT__m_predecessors.erase(after_phase);
        }
        VL_NULL_CHECK(before_phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 978)->__PVT__m_predecessors.atWrite(end_node) = 1U;
        VL_NULL_CHECK(end_node, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 979)->__PVT__m_successors.clear();
        VL_NULL_CHECK(end_node, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 980)->__PVT__m_successors.atWrite(before_phase) = 1U;
    }
    if ((VlNull{} != after_phase)) {
        if (((VlNull{} == before_phase) & (VlNull{} 
                                           == end_with_phase))) {
            unnamedblk123__DOT__succ__Vmore = (0U != VL_NULL_CHECK(after_phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 990)
                                               ->__PVT__m_successors.first(unnamedblk123__DOT__succ__Vnext));
            while (unnamedblk123__DOT__succ__Vmore) {
                unnamedblk123__DOT__succ = unnamedblk123__DOT__succ__Vnext;
                unnamedblk123__DOT__succ__Vmore = (0U 
                                                   != VL_NULL_CHECK(after_phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 990)
                                                   ->__PVT__m_successors.next(unnamedblk123__DOT__succ__Vnext));
                VL_NULL_CHECK(unnamedblk123__DOT__succ, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 991)->__PVT__m_predecessors.erase(after_phase);
                VL_NULL_CHECK(unnamedblk123__DOT__succ, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 992)->__PVT__m_predecessors.atWrite(end_node) = 1U;
            }
            VL_NULL_CHECK(end_node, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 994)->__PVT__m_successors 
                = VL_NULL_CHECK(after_phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 994)
                ->__PVT__m_successors;
            VL_NULL_CHECK(after_phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 995)->__PVT__m_successors.clear();
        } else if ((0U != VL_NULL_CHECK(after_phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 999)
                    ->__PVT__m_successors.exists(before_phase))) {
            VL_NULL_CHECK(after_phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1000)->__PVT__m_successors.erase(before_phase);
        }
        VL_NULL_CHECK(after_phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1004)->__PVT__m_successors.atWrite(begin_node) = 1U;
        VL_NULL_CHECK(begin_node, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1005)->__PVT__m_predecessors.clear();
        VL_NULL_CHECK(begin_node, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1006)->__PVT__m_predecessors.atWrite(after_phase) = 1U;
    }
    tmp_node = ((VlNull{} == new_node) ? phase : new_node);
    VL_NULL_CHECK(tmp_node, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1023)->__VnoInFunc_get_name(vlSymsp, __VlefCall_91__get_name);
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pi7b11ce6f__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_91__get_name), VlNull{}, ""s, state_chg);
    VL_NULL_CHECK(state_chg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1024)->__PVT__m_phase 
        = tmp_node;
    VL_NULL_CHECK(state_chg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1025)->__PVT__m_jump_to = VlNull{};
    VL_NULL_CHECK(state_chg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1026)->__PVT__m_prev_state 
        = VL_NULL_CHECK(tmp_node, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1026)
        ->__PVT__m_state;
    VL_NULL_CHECK(tmp_node, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1027)->__PVT__m_state = 1U;
    unnamedblk124__DOT__iter = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pi0eb11e0b, vlProcess, vlSymsp, 
                                      ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase>{this});
    VL_NULL_CHECK(unnamedblk124__DOT__iter, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1028)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk124__DOT__cb);
    while ((VlNull{} != unnamedblk124__DOT__cb)) {
        VL_NULL_CHECK(unnamedblk124__DOT__cb, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1028)->__VnoInFunc_phase_state_change(vlSymsp, tmp_node, state_chg);
        VL_NULL_CHECK(unnamedblk124__DOT__iter, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1028)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk124__DOT__cb);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_imp(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> &get_imp__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_imp\n"); );
    // Body
    get_imp__Vfuncrtn = this->__PVT__m_imp;
}

void Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_schedule(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ hier, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> &get_schedule__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_schedule\n"); );
    // Body
    ::CData/*0:0*/ __VlefLogAnd_1;
    ::IData/*31:0*/ __VlefCall_0__get_phase_type;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> sched;
    {
        sched = ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase>{this};
        if (hier) {
            while (true) {
                __VlefLogAnd_1 = (VlNull{} != VL_NULL_CHECK(sched, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1056)
                                  ->__PVT__m_parent);
                if (__VlefLogAnd_1) {
                    VL_NULL_CHECK(VL_NULL_CHECK(sched, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1056)
                                  ->__PVT__m_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1056)->__VnoInFunc_get_phase_type(vlSymsp, __VlefCall_0__get_phase_type);
                    __VlefLogAnd_1 = (3U == __VlefCall_0__get_phase_type);
                }
                if (!(__VlefLogAnd_1)) break;
                sched = VL_NULL_CHECK(sched, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1058)
                    ->__PVT__m_parent;
            }
        }
        if ((3U == VL_NULL_CHECK(sched, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1063)
             ->__PVT__m_phase_type)) {
            get_schedule__Vfuncrtn = sched;
            goto __Vlabel0;
        }
        if ((1U == VL_NULL_CHECK(sched, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1068)
             ->__PVT__m_phase_type)) {
            if (((VlNull{} != this->__PVT__m_parent) 
                 && (4U != VL_NULL_CHECK(this->__PVT__m_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1070)
                     ->__PVT__m_phase_type))) {
                get_schedule__Vfuncrtn = this->__PVT__m_parent;
                goto __Vlabel0;
            }
        }
        get_schedule__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_domain(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_domain> &get_domain__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_domain\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1127;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2027;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_4;
    ::IData/*31:0*/ __VlefCall_3__get_report_action;
    ::IData/*31:0*/ __VlefCall_2__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_1__uvm_get_report_object;
    ::IData/*31:0*/ __VlefExpr_0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk125__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase;
    {
        phase = ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase>{this};
        while (((VlNull{} != phase) && (4U != VL_NULL_CHECK(phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1087)
                                        ->__PVT__m_phase_type))) {
            phase = VL_NULL_CHECK(phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1089)
                ->__PVT__m_parent;
        }
        if ((VlNull{} == phase)) {
            get_domain__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        __VlefExpr_0 = VL_CAST_DYNAMIC(phase, get_domain__Vfuncrtn);
        if ((1U & (~ (0U != __VlefExpr_0)))) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1127);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1127;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2027);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_2027;
            __VlefCall_1__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_1__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1098)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk125__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk125__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1098)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 3U, "PH/INTERNAL"s, __VlefCall_2__get_report_verbosity_level);
            __VlefLogAnd_4 = VL_LTES_III(32, 0U, __VlefCall_2__get_report_verbosity_level);
            if (__VlefLogAnd_4) {
                VL_NULL_CHECK(unnamedblk125__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1098)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 3U, "PH/INTERNAL"s, __VlefCall_3__get_report_action);
                __VlefLogAnd_4 = (0U != __VlefCall_3__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_4))) {
                vlSymsp->vlInst.TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "PH/INTERNAL"s, "get_domain: m_phase_type is DOMAIN but $cast to uvm_domain fails"s, 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh"s, 0x0000044aU, ""s, 1U);
            }
        }
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_domain_name(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_domain_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_domain_name\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_domain> domain;
    {
        get_domain_name__Vfuncrtn = ""s;
        this->__VnoInFunc_get_domain(vlProcess, vlSymsp, domain);
        if ((VlNull{} == domain)) {
            get_domain_name__Vfuncrtn = "unknown"s;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(domain, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1114)->__VnoInFunc_get_name(vlSymsp, get_domain_name__Vfuncrtn);
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_schedule_name(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ hier, ::std::string &get_schedule_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_schedule_name\n"); );
    // Body
    ::std::string __VlefCall_2__get_name;
    ::CData/*0:0*/ __VlefLogAnd_1;
    ::IData/*31:0*/ __VlefCall_0__get_phase_type;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> sched;
    ::std::string s;
    {
        get_schedule_name__Vfuncrtn = ""s;
        s = ""s;
        this->__VnoInFunc_get_schedule(vlSymsp, hier, sched);
        if ((VlNull{} == sched)) {
            get_schedule_name__Vfuncrtn = ""s;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(sched, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1130)->__VnoInFunc_get_name(vlSymsp, s);
        while (true) {
            __VlefLogAnd_1 = ((VlNull{} != VL_NULL_CHECK(sched, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1131)
                               ->__PVT__m_parent) && 
                              (VL_NULL_CHECK(sched, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1131)
                               ->__PVT__m_parent != sched));
            if (__VlefLogAnd_1) {
                VL_NULL_CHECK(VL_NULL_CHECK(sched, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1132)
                              ->__PVT__m_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1132)->__VnoInFunc_get_phase_type(vlSymsp, __VlefCall_0__get_phase_type);
                __VlefLogAnd_1 = (3U == __VlefCall_0__get_phase_type);
            }
            if (!(__VlefLogAnd_1)) break;
            sched = VL_NULL_CHECK(sched, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1133)
                ->__PVT__m_parent;
            VL_NULL_CHECK(sched, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1134)->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
            s = VL_CONCATN_NNN(VL_CONCATN_NNN(__VlefCall_2__get_name, 
                                              VL_CVT_PACK_STR_NI(
                                                                 (VL_LTS_III(32, 0U, 
                                                                             VL_LEN_IN(s))
                                                                   ? 0x2eU
                                                                   : 0U))), s);
        }
        get_schedule_name__Vfuncrtn = s;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_full_name(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_full_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_full_name\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_0__get_name;
    ::std::string sch;
    {
        get_full_name__Vfuncrtn = ""s;
        sch = ""s;
        if ((0U == this->__PVT__m_phase_type)) {
            this->__VnoInFunc_get_name(vlSymsp, get_full_name__Vfuncrtn);
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_domain_name(vlProcess, vlSymsp, get_full_name__Vfuncrtn);
        this->__VnoInFunc_get_schedule_name(vlSymsp, 0U, sch);
        if ((""s != sch)) {
            get_full_name__Vfuncrtn = VL_CONCATN_NNN(
                                                     VL_CONCATN_NNN(get_full_name__Vfuncrtn, "."s), sch);
        }
        if (((4U != this->__PVT__m_phase_type) & (3U 
                                                  != this->__PVT__m_phase_type))) {
            this->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
            get_full_name__Vfuncrtn = VL_CONCATN_NNN(
                                                     VL_CONCATN_NNN(get_full_name__Vfuncrtn, "."s), __VlefCall_0__get_name);
        }
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_phase_type(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_phase_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_phase_type\n"); );
    // Body
    get_phase_type__Vfuncrtn = this->__PVT__m_phase_type;
}

void Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_max_ready_to_end_iterations(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_max_ready_to_end_iterations__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_max_ready_to_end_iterations\n"); );
    // Body
    get_max_ready_to_end_iterations__Vfuncrtn = this->__PVT__max_ready_to_end_iters;
}

void Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_set_state(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ state) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_set_state\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pi0eb11e0b> unnamedblk126__DOT__iter;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase_cb> unnamedblk126__DOT__cb;
    {
        if ((this->__PVT__m_state == state)) {
            goto __Vlabel0;
        }
        if ((8U == state)) {
            this->__PVT__m_run_count = ((::IData)(1U) 
                                        + this->__PVT__m_run_count);
        }
        VL_NULL_CHECK(this->__PVT__m_state_chg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1219)->__PVT__m_jump_to 
            = this->__PVT__m_jump_phase;
        VL_NULL_CHECK(this->__PVT__m_state_chg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1220)->__PVT__m_prev_state 
            = this->__PVT__m_state;
        this->__PVT__m_state = state;
        unnamedblk126__DOT__iter = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pi0eb11e0b, vlProcess, vlSymsp, 
                                          ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase>{this});
        VL_NULL_CHECK(unnamedblk126__DOT__iter, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1222)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk126__DOT__cb);
        while ((VlNull{} != unnamedblk126__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk126__DOT__cb, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1222)->__VnoInFunc_phase_state_change(vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase>{this}, this->__PVT__m_state_chg);
            VL_NULL_CHECK(unnamedblk126__DOT__iter, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1222)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk126__DOT__cb);
        }
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_state(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_state__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_state\n"); );
    // Body
    get_state__Vfuncrtn = this->__PVT__m_state;
}

void Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_find_predecessor(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase, ::CData/*0:0*/ stay_in_scope, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> orig_phase, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> &m_find_predecessor__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_find_predecessor\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_domain> __VlefCall_4__get_domain;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_domain> __VlefCall_3__get_domain;
    ::CData/*0:0*/ __VlefLogOr_2;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> __VlefCall_1__get_schedule;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> __VlefCall_0__get_schedule;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> unnamedblk129__DOT__pred;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> unnamedblk129__DOT__pred__Vnext;
    ::CData/*0:0*/ unnamedblk129__DOT__pred__Vmore;
    unnamedblk129__DOT__pred__Vmore = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> unnamedblk129__DOT__unnamedblk130__DOT__orig;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> found;
    {
        if ((VlNull{} == phase)) {
            m_find_predecessor__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        if (((phase == this->__PVT__m_imp) | (phase 
                                              == ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase>{this}))) {
            m_find_predecessor__Vfuncrtn = ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase>{this};
            goto __Vlabel0;
        }
        unnamedblk129__DOT__pred__Vmore = (0U != this->__PVT__m_predecessors.first(unnamedblk129__DOT__pred__Vnext));
        while (unnamedblk129__DOT__pred__Vmore) {
            unnamedblk129__DOT__pred = unnamedblk129__DOT__pred__Vnext;
            unnamedblk129__DOT__pred__Vmore = (0U != this->__PVT__m_predecessors.next(unnamedblk129__DOT__pred__Vnext));
            unnamedblk129__DOT__unnamedblk130__DOT__orig 
                = ((VlNull{} == orig_phase) ? ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase>{this}
                    : orig_phase);
            __VlefLogOr_2 = (1U & (~ (::IData)(stay_in_scope)));
            if ((1U & (~ (::IData)(__VlefLogOr_2)))) {
                VL_NULL_CHECK(unnamedblk129__DOT__pred, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1279)->__VnoInFunc_get_schedule(vlSymsp, 0U, __VlefCall_0__get_schedule);
                VL_NULL_CHECK(unnamedblk129__DOT__unnamedblk130__DOT__orig, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1279)->__VnoInFunc_get_schedule(vlSymsp, 0U, __VlefCall_1__get_schedule);
                __VlefLogOr_2 = (__VlefCall_0__get_schedule 
                                 == __VlefCall_1__get_schedule);
            }
            if ((1U & (~ (::IData)(__VlefLogOr_2)))) {
                VL_NULL_CHECK(unnamedblk129__DOT__pred, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1280)->__VnoInFunc_get_domain(vlProcess, vlSymsp, __VlefCall_3__get_domain);
                VL_NULL_CHECK(unnamedblk129__DOT__unnamedblk130__DOT__orig, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1280)->__VnoInFunc_get_domain(vlProcess, vlSymsp, __VlefCall_4__get_domain);
                __VlefLogOr_2 = (__VlefCall_3__get_domain 
                                 == __VlefCall_4__get_domain);
            }
            if (__VlefLogOr_2) {
                VL_NULL_CHECK(unnamedblk129__DOT__pred, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1281)->__VnoInFunc_m_find_predecessor(vlProcess, vlSymsp, phase, stay_in_scope, unnamedblk129__DOT__unnamedblk130__DOT__orig, found);
                if ((VlNull{} != found)) {
                    m_find_predecessor__Vfuncrtn = found;
                    goto __Vlabel0;
                }
            }
        }
        m_find_predecessor__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_find_successor(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase, ::CData/*0:0*/ stay_in_scope, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> orig_phase, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> &m_find_successor__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_find_successor\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_domain> __VlefCall_4__get_domain;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_domain> __VlefCall_3__get_domain;
    ::CData/*0:0*/ __VlefLogOr_2;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> __VlefCall_1__get_schedule;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> __VlefCall_0__get_schedule;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> unnamedblk133__DOT__succ;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> unnamedblk133__DOT__succ__Vnext;
    ::CData/*0:0*/ unnamedblk133__DOT__succ__Vmore;
    unnamedblk133__DOT__succ__Vmore = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> unnamedblk133__DOT__unnamedblk134__DOT__orig;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> found;
    {
        if ((VlNull{} == phase)) {
            m_find_successor__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        if (((phase == this->__PVT__m_imp) | (phase 
                                              == ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase>{this}))) {
            m_find_successor__Vfuncrtn = ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase>{this};
            goto __Vlabel0;
        }
        unnamedblk133__DOT__succ__Vmore = (0U != this->__PVT__m_successors.first(unnamedblk133__DOT__succ__Vnext));
        while (unnamedblk133__DOT__succ__Vmore) {
            unnamedblk133__DOT__succ = unnamedblk133__DOT__succ__Vnext;
            unnamedblk133__DOT__succ__Vmore = (0U != this->__PVT__m_successors.next(unnamedblk133__DOT__succ__Vnext));
            unnamedblk133__DOT__unnamedblk134__DOT__orig 
                = ((VlNull{} == orig_phase) ? ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase>{this}
                    : orig_phase);
            __VlefLogOr_2 = (1U & (~ (::IData)(stay_in_scope)));
            if ((1U & (~ (::IData)(__VlefLogOr_2)))) {
                VL_NULL_CHECK(unnamedblk133__DOT__succ, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1338)->__VnoInFunc_get_schedule(vlSymsp, 0U, __VlefCall_0__get_schedule);
                VL_NULL_CHECK(unnamedblk133__DOT__unnamedblk134__DOT__orig, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1338)->__VnoInFunc_get_schedule(vlSymsp, 0U, __VlefCall_1__get_schedule);
                __VlefLogOr_2 = (__VlefCall_0__get_schedule 
                                 == __VlefCall_1__get_schedule);
            }
            if ((1U & (~ (::IData)(__VlefLogOr_2)))) {
                VL_NULL_CHECK(unnamedblk133__DOT__succ, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1339)->__VnoInFunc_get_domain(vlProcess, vlSymsp, __VlefCall_3__get_domain);
                VL_NULL_CHECK(unnamedblk133__DOT__unnamedblk134__DOT__orig, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1339)->__VnoInFunc_get_domain(vlProcess, vlSymsp, __VlefCall_4__get_domain);
                __VlefLogOr_2 = (__VlefCall_3__get_domain 
                                 == __VlefCall_4__get_domain);
            }
            if (__VlefLogOr_2) {
                VL_NULL_CHECK(unnamedblk133__DOT__succ, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1340)->__VnoInFunc_m_find_successor(vlProcess, vlSymsp, phase, stay_in_scope, unnamedblk133__DOT__unnamedblk134__DOT__orig, found);
                if ((VlNull{} != found)) {
                    m_find_successor__Vfuncrtn = found;
                    goto __Vlabel0;
                }
            }
        }
        m_find_successor__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_find(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase, ::CData/*0:0*/ stay_in_scope, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> &find__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_find\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    {
        if (((phase == this->__PVT__m_imp) | (phase 
                                              == ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase>{this}))) {
            find__Vfuncrtn = phase;
            goto __Vlabel0;
        }
        this->__VnoInFunc_m_find_predecessor(vlProcess, vlSymsp, phase, stay_in_scope, 
                                             ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase>{this}, find__Vfuncrtn);
        if ((VlNull{} == find__Vfuncrtn)) {
            this->__VnoInFunc_m_find_successor(vlProcess, vlSymsp, phase, stay_in_scope, 
                                               ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase>{this}, find__Vfuncrtn);
        }
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_is(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase, ::CData/*0:0*/ &is__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_is\n"); );
    // Body
    is__Vfuncrtn = ((this->__PVT__m_imp == phase) | 
                    (::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase>{this} 
                     == phase));
}

void Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_is_before(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase, ::CData/*0:0*/ &is_before__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_is_before\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_2;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> __VlefCall_1__m_find_successor;
    ::CData/*0:0*/ __VlefCall_0__is;
    is_before__Vfuncrtn = 0U;
    this->__VnoInFunc_is(vlSymsp, phase, __VlefCall_0__is);
    __VlefLogAnd_2 = (1U & (~ (::IData)(__VlefCall_0__is)));
    if (__VlefLogAnd_2) {
        this->__VnoInFunc_m_find_successor(vlProcess, vlSymsp, phase, 0U, 
                                           ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase>{this}, __VlefCall_1__m_find_successor);
        __VlefLogAnd_2 = (VlNull{} != __VlefCall_1__m_find_successor);
    }
    is_before__Vfuncrtn = __VlefLogAnd_2;
}

void Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_adjacent_successor_nodes(Vtb_top__Syms* __restrict vlSymsp, ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase>> &succ) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_adjacent_successor_nodes\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0__get_phase_type;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> unnamedblk141__DOT__s;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> unnamedblk141__DOT__s__Vnext;
    ::CData/*0:0*/ unnamedblk141__DOT__s__Vmore;
    unnamedblk141__DOT__s__Vmore = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> unnamedblk142__DOT__s;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> unnamedblk142__DOT__s__Vnext;
    ::CData/*0:0*/ unnamedblk142__DOT__s__Vmore;
    unnamedblk142__DOT__s__Vmore = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> unnamedblk142__DOT__unnamedblk143__DOT__next_s;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> unnamedblk142__DOT__unnamedblk143__DOT__next_s__Vnext;
    ::CData/*0:0*/ unnamedblk142__DOT__unnamedblk143__DOT__next_s__Vmore;
    unnamedblk142__DOT__unnamedblk143__DOT__next_s__Vmore = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> unnamedblk144__DOT__s;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> unnamedblk144__DOT__s__Vnext;
    ::CData/*0:0*/ unnamedblk144__DOT__s__Vmore;
    unnamedblk144__DOT__s__Vmore = 0;
    ::IData/*31:0*/ __Vincrement2;
    __Vincrement2 = 0;
    ::CData/*0:0*/ done;
    ::VlAssocArray<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase>, ::CData/*0:0*/> successors;
    ::IData/*31:0*/ idx;
    done = 0U;
    successors.clear();
    successors.atDefault() = 0;
    idx = 0U;
    unnamedblk141__DOT__s__Vmore = (0U != this->__PVT__m_successors.first(unnamedblk141__DOT__s__Vnext));
    while (unnamedblk141__DOT__s__Vmore) {
        unnamedblk141__DOT__s = unnamedblk141__DOT__s__Vnext;
        unnamedblk141__DOT__s__Vmore = (0U != this->__PVT__m_successors.next(unnamedblk141__DOT__s__Vnext));
        successors.atWrite(unnamedblk141__DOT__s) = 1U;
    }
    do {
        done = 1U;
        unnamedblk142__DOT__s__Vmore = (0U != successors.first(unnamedblk142__DOT__s__Vnext));
        while (unnamedblk142__DOT__s__Vmore) {
            unnamedblk142__DOT__s = unnamedblk142__DOT__s__Vnext;
            unnamedblk142__DOT__s__Vmore = (0U != successors.next(unnamedblk142__DOT__s__Vnext));
            VL_NULL_CHECK(unnamedblk142__DOT__s, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1498)->__VnoInFunc_get_phase_type(vlSymsp, __VlefCall_0__get_phase_type);
            if ((1U != __VlefCall_0__get_phase_type)) {
                successors.erase(unnamedblk142__DOT__s);
                unnamedblk142__DOT__unnamedblk143__DOT__next_s__Vmore 
                    = (0U != VL_NULL_CHECK(unnamedblk142__DOT__s, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1500)
                       ->__PVT__m_successors.first(unnamedblk142__DOT__unnamedblk143__DOT__next_s__Vnext));
                while (unnamedblk142__DOT__unnamedblk143__DOT__next_s__Vmore) {
                    unnamedblk142__DOT__unnamedblk143__DOT__next_s 
                        = unnamedblk142__DOT__unnamedblk143__DOT__next_s__Vnext;
                    unnamedblk142__DOT__unnamedblk143__DOT__next_s__Vmore 
                        = (0U != VL_NULL_CHECK(unnamedblk142__DOT__s, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1500)
                           ->__PVT__m_successors.next(unnamedblk142__DOT__unnamedblk143__DOT__next_s__Vnext));
                    successors.atWrite(unnamedblk142__DOT__unnamedblk143__DOT__next_s) = 1U;
                }
                done = 0U;
            }
        }
    } while ((1U & (~ (::IData)(done))));
    succ.renew(successors.size());
    unnamedblk144__DOT__s__Vmore = (0U != successors.first(unnamedblk144__DOT__s__Vnext));
    while (unnamedblk144__DOT__s__Vmore) {
        unnamedblk144__DOT__s = unnamedblk144__DOT__s__Vnext;
        unnamedblk144__DOT__s__Vmore = (0U != successors.next(unnamedblk144__DOT__s__Vnext));
        __Vincrement2 = idx;
        idx = ((::IData)(1U) + idx);
        succ.atWrite(__Vincrement2) = unnamedblk144__DOT__s;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_predecessors(Vtb_top__Syms* __restrict vlSymsp, ::VlAssocArray<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase>, ::CData/*0:0*/> &predecessors) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_predecessors\n"); );
    // Body
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> unnamedblk145__DOT__p;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> unnamedblk145__DOT__p__Vnext;
    ::CData/*0:0*/ unnamedblk145__DOT__p__Vmore;
    unnamedblk145__DOT__p__Vmore = 0;
    unnamedblk145__DOT__p__Vmore = (0U != this->__PVT__m_predecessors.first(unnamedblk145__DOT__p__Vnext));
    while (unnamedblk145__DOT__p__Vmore) {
        unnamedblk145__DOT__p = unnamedblk145__DOT__p__Vnext;
        unnamedblk145__DOT__p__Vmore = (0U != this->__PVT__m_predecessors.next(unnamedblk145__DOT__p__Vnext));
        predecessors.atWrite(unnamedblk145__DOT__p) = 1U;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_successors(Vtb_top__Syms* __restrict vlSymsp, ::VlAssocArray<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase>, ::CData/*0:0*/> &successors) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_successors\n"); );
    // Body
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> unnamedblk146__DOT__p;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> unnamedblk146__DOT__p__Vnext;
    ::CData/*0:0*/ unnamedblk146__DOT__p__Vmore;
    unnamedblk146__DOT__p__Vmore = 0;
    unnamedblk146__DOT__p__Vmore = (0U != this->__PVT__m_successors.first(unnamedblk146__DOT__p__Vnext));
    while (unnamedblk146__DOT__p__Vmore) {
        unnamedblk146__DOT__p = unnamedblk146__DOT__p__Vnext;
        unnamedblk146__DOT__p__Vmore = (0U != this->__PVT__m_successors.next(unnamedblk146__DOT__p__Vnext));
        successors.atWrite(unnamedblk146__DOT__p) = 1U;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_sync_relationships(Vtb_top__Syms* __restrict vlSymsp, ::VlAssocArray<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase>, ::CData/*0:0*/> &relationships) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_sync_relationships\n"); );
    // Body
    ::IData/*31:0*/ unnamedblk147__DOT__i;
    unnamedblk147__DOT__i = 0;
    unnamedblk147__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk147__DOT__i, this->__PVT__m_sync.size())) {
        relationships.atWrite(this->__PVT__m_sync.at(unnamedblk147__DOT__i)) = 1U;
        unnamedblk147__DOT__i = ((::IData)(1U) + unnamedblk147__DOT__i);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_predecessors_for_successors(Vtb_top__Syms* __restrict vlSymsp, ::VlAssocArray<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase>, ::CData/*0:0*/> &pred_of_succ) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_predecessors_for_successors\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0__get_phase_type;
    ::IData/*31:0*/ unnamedblk148__DOT__s;
    unnamedblk148__DOT__s = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> unnamedblk148__DOT__unnamedblk149__DOT__pred;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> unnamedblk148__DOT__unnamedblk149__DOT__pred__Vnext;
    ::CData/*0:0*/ unnamedblk148__DOT__unnamedblk149__DOT__pred__Vmore;
    unnamedblk148__DOT__unnamedblk149__DOT__pred__Vmore = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> unnamedblk150__DOT__pred;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> unnamedblk150__DOT__pred__Vnext;
    ::CData/*0:0*/ unnamedblk150__DOT__pred__Vmore;
    unnamedblk150__DOT__pred__Vmore = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> unnamedblk150__DOT__unnamedblk151__DOT__next_pred;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> unnamedblk150__DOT__unnamedblk151__DOT__next_pred__Vnext;
    ::CData/*0:0*/ unnamedblk150__DOT__unnamedblk151__DOT__next_pred__Vmore;
    unnamedblk150__DOT__unnamedblk151__DOT__next_pred__Vmore = 0;
    ::CData/*0:0*/ done;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase>> successors;
    pred_of_succ.clear();
    pred_of_succ.atDefault() = 0;
    done = 0U;
    successors.clear();
    this->__VnoInFunc_get_adjacent_successor_nodes(vlSymsp, successors);
    unnamedblk148__DOT__s = 0U;
    while (VL_LTS_III(32, unnamedblk148__DOT__s, successors.size())) {
        unnamedblk148__DOT__unnamedblk149__DOT__pred__Vmore 
            = (0U != VL_NULL_CHECK(successors.at(unnamedblk148__DOT__s), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1551)
               ->__PVT__m_predecessors.first(unnamedblk148__DOT__unnamedblk149__DOT__pred__Vnext));
        while (unnamedblk148__DOT__unnamedblk149__DOT__pred__Vmore) {
            unnamedblk148__DOT__unnamedblk149__DOT__pred 
                = unnamedblk148__DOT__unnamedblk149__DOT__pred__Vnext;
            unnamedblk148__DOT__unnamedblk149__DOT__pred__Vmore 
                = (0U != VL_NULL_CHECK(successors.at(unnamedblk148__DOT__s), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1551)
                   ->__PVT__m_predecessors.next(unnamedblk148__DOT__unnamedblk149__DOT__pred__Vnext));
            pred_of_succ.atWrite(unnamedblk148__DOT__unnamedblk149__DOT__pred) = 1U;
        }
        unnamedblk148__DOT__s = ((::IData)(1U) + unnamedblk148__DOT__s);
    }
    do {
        done = 1U;
        unnamedblk150__DOT__pred__Vmore = (0U != pred_of_succ.first(unnamedblk150__DOT__pred__Vnext));
        while (unnamedblk150__DOT__pred__Vmore) {
            unnamedblk150__DOT__pred = unnamedblk150__DOT__pred__Vnext;
            unnamedblk150__DOT__pred__Vmore = (0U != pred_of_succ.next(unnamedblk150__DOT__pred__Vnext));
            VL_NULL_CHECK(unnamedblk150__DOT__pred, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1564)->__VnoInFunc_get_phase_type(vlSymsp, __VlefCall_0__get_phase_type);
            if ((1U != __VlefCall_0__get_phase_type)) {
                pred_of_succ.erase(unnamedblk150__DOT__pred);
                unnamedblk150__DOT__unnamedblk151__DOT__next_pred__Vmore 
                    = (0U != VL_NULL_CHECK(unnamedblk150__DOT__pred, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1566)
                       ->__PVT__m_predecessors.first(unnamedblk150__DOT__unnamedblk151__DOT__next_pred__Vnext));
                while (unnamedblk150__DOT__unnamedblk151__DOT__next_pred__Vmore) {
                    unnamedblk150__DOT__unnamedblk151__DOT__next_pred 
                        = unnamedblk150__DOT__unnamedblk151__DOT__next_pred__Vnext;
                    unnamedblk150__DOT__unnamedblk151__DOT__next_pred__Vmore 
                        = (0U != VL_NULL_CHECK(unnamedblk150__DOT__pred, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1566)
                           ->__PVT__m_predecessors.next(unnamedblk150__DOT__unnamedblk151__DOT__next_pred__Vnext));
                    pred_of_succ.atWrite(unnamedblk150__DOT__unnamedblk151__DOT__next_pred) = 1U;
                }
                done = 0U;
            }
        }
    } while ((1U & (~ (::IData)(done))));
    pred_of_succ.erase(::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase>{this});
}

extern const ::VlAssocArray<::IData/*31:0*/, ::std::string> Vtb_top__ConstPool__CONSASSOC_0;

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_wait_for_pred(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_wait_for_pred\n"); );
    // Locals
    ::VlAssocArray<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase>, ::CData/*0:0*/> __Vtask_get_predecessors_for_successors__pred_of_succ_2028;
    __Vtask_get_predecessors_for_successors__pred_of_succ_2028.atDefault() = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1128;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2029;
    ::IData/*31:0*/ __Vtask_uvm_report_info__verbosity_2032;
    __Vtask_uvm_report_info__verbosity_2032 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__line_2034;
    __Vtask_uvm_report_info__line_2034 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_info__report_enabled_checked_2036;
    __Vtask_uvm_report_info__report_enabled_checked_2036 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1129;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2037;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1130;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2038;
    ::IData/*31:0*/ __Vtask_uvm_report_info__verbosity_2041;
    __Vtask_uvm_report_info__verbosity_2041 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__line_2043;
    __Vtask_uvm_report_info__line_2043 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_info__report_enabled_checked_2045;
    __Vtask_uvm_report_info__report_enabled_checked_2045 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1131;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2046;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1132;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2047;
    ::IData/*31:0*/ __Vtask_uvm_report_info__verbosity_2050;
    __Vtask_uvm_report_info__verbosity_2050 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__line_2052;
    __Vtask_uvm_report_info__line_2052 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_info__report_enabled_checked_2054;
    __Vtask_uvm_report_info__report_enabled_checked_2054 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1133;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2055;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1134;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2056;
    ::IData/*31:0*/ __Vtask_uvm_report_info__verbosity_2059;
    __Vtask_uvm_report_info__verbosity_2059 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__line_2061;
    __Vtask_uvm_report_info__line_2061 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_info__report_enabled_checked_2063;
    __Vtask_uvm_report_info__report_enabled_checked_2063 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1135;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2064;
    ::std::string __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::IData/*31:0*/ __VlefCall_28__get_inst_id;
    ::std::string __VlefCall_27__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_26;
    ::IData/*31:0*/ __VlefCall_25__get_report_action;
    ::IData/*31:0*/ __VlefCall_24__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_23__uvm_get_report_object;
    ::IData/*31:0*/ __VlefCall_22__get_inst_id;
    ::std::string __VlefCall_21__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_20;
    ::IData/*31:0*/ __VlefCall_19__get_report_action;
    ::IData/*31:0*/ __VlefCall_18__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_17__uvm_get_report_object;
    ::std::string __VlefCall_16__get_full_name;
    ::IData/*31:0*/ __VlefCall_15__get_inst_id;
    ::std::string __VlefCall_14__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_13;
    ::IData/*31:0*/ __VlefCall_12__get_report_action;
    ::IData/*31:0*/ __VlefCall_11__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_10__uvm_get_report_object;
    ::IData/*31:0*/ __VlefCall_9__get_inst_id;
    ::std::string __VlefCall_8__get_name;
    ::IData/*31:0*/ __VlefCall_7__get_inst_id;
    ::std::string __VlefCall_6__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_5;
    ::IData/*31:0*/ __VlefCall_4__get_report_action;
    ::IData/*31:0*/ __VlefCall_3__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_2__uvm_get_report_object;
    ::IData/*31:0*/ __VlefCall_1__get_inst_id;
    ::std::string __VlefCall_0__get_name;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> unnamedblk152__DOT__sibling;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> unnamedblk152__DOT__sibling__Vnext;
    ::CData/*0:0*/ unnamedblk152__DOT__sibling__Vmore;
    unnamedblk152__DOT__sibling__Vmore = 0;
    ::std::string unnamedblk152__DOT__unnamedblk153__DOT__s;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk152__DOT__unnamedblk153__DOT__unnamedblk154__DOT___local_report_object_;
    ::std::string unnamedblk152__DOT__unnamedblk155__DOT__s;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk152__DOT__unnamedblk155__DOT__unnamedblk156__DOT___local_report_object_;
    ::std::string unnamedblk157__DOT__s;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> unnamedblk157__DOT__unnamedblk158__DOT__pred;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> unnamedblk157__DOT__unnamedblk158__DOT__pred__Vnext;
    ::CData/*0:0*/ unnamedblk157__DOT__unnamedblk158__DOT__pred__Vmore;
    unnamedblk157__DOT__unnamedblk158__DOT__pred__Vmore = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk157__DOT__unnamedblk159__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk160__DOT___local_report_object_;
    ::VlAssocArray<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase>, ::CData/*0:0*/> pred_of_succ;
    pred_of_succ.clear();
    pred_of_succ.atDefault() = 0;
    this->__VnoInFunc_get_predecessors_for_successors(vlSymsp, __Vtask_get_predecessors_for_successors__pred_of_succ_2028);
    pred_of_succ = __Vtask_get_predecessors_for_successors__pred_of_succ_2028;
    unnamedblk152__DOT__sibling__Vmore = (0U != pred_of_succ.first(unnamedblk152__DOT__sibling__Vnext));
    while (unnamedblk152__DOT__sibling__Vmore) {
        unnamedblk152__DOT__sibling = unnamedblk152__DOT__sibling__Vnext;
        unnamedblk152__DOT__sibling__Vmore = (0U != pred_of_succ.next(unnamedblk152__DOT__sibling__Vnext));
        if (vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
            unnamedblk152__DOT__unnamedblk153__DOT__s = ""s;
            VL_NULL_CHECK(unnamedblk152__DOT__sibling, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1596)->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
            VL_NULL_CHECK(unnamedblk152__DOT__sibling, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1596)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_1__get_inst_id);
            __Vtemp_1 = Vtb_top__ConstPool__CONSASSOC_0
                .at(VL_NULL_CHECK(unnamedblk152__DOT__sibling, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1596)
                    ->__PVT__m_state);
            VL_SFORMAT_NX(unnamedblk152__DOT__unnamedblk153__DOT__s
                          ,"Waiting for phase '%s' (%0d) to be READY_TO_END. Current state is %s",3
                          , 'S',&(__VlefCall_0__get_name)
                          , '~',32,__VlefCall_1__get_inst_id
                          , 'S',&(__Vtemp_1));
            if (vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1128);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1128;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2029);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_2029;
                __VlefCall_2__uvm_get_report_object 
                    = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
                VL_NULL_CHECK(__VlefCall_2__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1597)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk152__DOT__unnamedblk153__DOT__unnamedblk154__DOT___local_report_object_);
                VL_NULL_CHECK(unnamedblk152__DOT__unnamedblk153__DOT__unnamedblk154__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1597)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "PH/TRC/WAIT_PRED_OF_SUCC"s, __VlefCall_3__get_report_verbosity_level);
                __VlefLogAnd_5 = VL_LTES_III(32, 0x0000012cU, __VlefCall_3__get_report_verbosity_level);
                if (__VlefLogAnd_5) {
                    VL_NULL_CHECK(unnamedblk152__DOT__unnamedblk153__DOT__unnamedblk154__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1597)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "PH/TRC/WAIT_PRED_OF_SUCC"s, __VlefCall_4__get_report_action);
                    __VlefLogAnd_5 = (0U != __VlefCall_4__get_report_action);
                }
                if (VL_UNLIKELY((__VlefLogAnd_5))) {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
                    this->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_7__get_inst_id);
                    __Vtask_uvm_report_info__report_enabled_checked_2036 = 1U;
                    this->__Vtask_uvm_report_info__context_name_2035 = ""s;
                    __Vtask_uvm_report_info__line_2034 = 0x0000063dU;
                    this->__Vtask_uvm_report_info__filename_2033 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh"s;
                    __Vtask_uvm_report_info__verbosity_2032 = 0x0000012cU;
                    this->__Vtask_uvm_report_info__message_2031 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0s' (id=%0d) ",2
                                                                             , 'S',&(__VlefCall_6__get_full_name)
                                                                             , '~',32,__VlefCall_7__get_inst_id) , unnamedblk152__DOT__unnamedblk153__DOT__s));
                    this->__Vtask_uvm_report_info__id_2030 = "PH/TRC/WAIT_PRED_OF_SUCC"s;
                    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1129);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs 
                        = __Vfunc_get__Vfuncout_1129;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 147)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2037);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top 
                        = __Vtask_get_root__Vfuncout_2037;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 148)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__id_2030, this->__Vtask_uvm_report_info__message_2031, __Vtask_uvm_report_info__verbosity_2032, this->__Vtask_uvm_report_info__filename_2033, __Vtask_uvm_report_info__line_2034, this->__Vtask_uvm_report_info__context_name_2035, (::IData)(__Vtask_uvm_report_info__report_enabled_checked_2036));
                }
            }
        }
        co_await VL_NULL_CHECK(unnamedblk152__DOT__sibling, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1600)->__VnoInFunc_wait_for_state(vlProcess, vlSymsp, 0x00000020U, 5U);
        if (vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
            unnamedblk152__DOT__unnamedblk155__DOT__s = ""s;
            VL_NULL_CHECK(unnamedblk152__DOT__sibling, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1605)->__VnoInFunc_get_name(vlSymsp, __VlefCall_8__get_name);
            VL_NULL_CHECK(unnamedblk152__DOT__sibling, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1605)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_9__get_inst_id);
            VL_SFORMAT_NX(unnamedblk152__DOT__unnamedblk155__DOT__s
                          ,"Phase '%s' (%0d) is now READY_TO_END. Releasing phase",2
                          , 'S',&(__VlefCall_8__get_name)
                          , '~',32,__VlefCall_9__get_inst_id);
            if (vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1130);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1130;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2038);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_2038;
                __VlefCall_10__uvm_get_report_object 
                    = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
                VL_NULL_CHECK(__VlefCall_10__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1606)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk152__DOT__unnamedblk155__DOT__unnamedblk156__DOT___local_report_object_);
                VL_NULL_CHECK(unnamedblk152__DOT__unnamedblk155__DOT__unnamedblk156__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1606)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "PH/TRC/WAIT_PRED_OF_SUCC"s, __VlefCall_11__get_report_verbosity_level);
                __VlefLogAnd_13 = VL_LTES_III(32, 0x0000012cU, __VlefCall_11__get_report_verbosity_level);
                if (__VlefLogAnd_13) {
                    VL_NULL_CHECK(unnamedblk152__DOT__unnamedblk155__DOT__unnamedblk156__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1606)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "PH/TRC/WAIT_PRED_OF_SUCC"s, __VlefCall_12__get_report_action);
                    __VlefLogAnd_13 = (0U != __VlefCall_12__get_report_action);
                }
                if (VL_UNLIKELY((__VlefLogAnd_13))) {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_14__get_full_name);
                    this->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_15__get_inst_id);
                    __Vtask_uvm_report_info__report_enabled_checked_2045 = 1U;
                    this->__Vtask_uvm_report_info__context_name_2044 = ""s;
                    __Vtask_uvm_report_info__line_2043 = 0x00000646U;
                    this->__Vtask_uvm_report_info__filename_2042 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh"s;
                    __Vtask_uvm_report_info__verbosity_2041 = 0x0000012cU;
                    this->__Vtask_uvm_report_info__message_2040 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0s' (id=%0d) ",2
                                                                             , 'S',&(__VlefCall_14__get_full_name)
                                                                             , '~',32,__VlefCall_15__get_inst_id) , unnamedblk152__DOT__unnamedblk155__DOT__s));
                    this->__Vtask_uvm_report_info__id_2039 = "PH/TRC/WAIT_PRED_OF_SUCC"s;
                    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1131);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs 
                        = __Vfunc_get__Vfuncout_1131;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 147)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2046);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top 
                        = __Vtask_get_root__Vfuncout_2046;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 148)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__id_2039, this->__Vtask_uvm_report_info__message_2040, __Vtask_uvm_report_info__verbosity_2041, this->__Vtask_uvm_report_info__filename_2042, __Vtask_uvm_report_info__line_2043, this->__Vtask_uvm_report_info__context_name_2044, (::IData)(__Vtask_uvm_report_info__report_enabled_checked_2045));
                }
            }
        }
    }
    if (vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
        if ((0U != pred_of_succ.size())) {
            unnamedblk157__DOT__s = "( "s;
            unnamedblk157__DOT__unnamedblk158__DOT__pred__Vmore 
                = (0U != pred_of_succ.first(unnamedblk157__DOT__unnamedblk158__DOT__pred__Vnext));
            while (unnamedblk157__DOT__unnamedblk158__DOT__pred__Vmore) {
                unnamedblk157__DOT__unnamedblk158__DOT__pred 
                    = unnamedblk157__DOT__unnamedblk158__DOT__pred__Vnext;
                unnamedblk157__DOT__unnamedblk158__DOT__pred__Vmore 
                    = (0U != pred_of_succ.next(unnamedblk157__DOT__unnamedblk158__DOT__pred__Vnext));
                VL_NULL_CHECK(unnamedblk157__DOT__unnamedblk158__DOT__pred, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1616)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_16__get_full_name);
                unnamedblk157__DOT__s = VL_CONCATN_NNN(
                                                       VL_CONCATN_NNN(unnamedblk157__DOT__s, __VlefCall_16__get_full_name), " "s);
            }
            unnamedblk157__DOT__s = VL_CONCATN_NNN(unnamedblk157__DOT__s, ")"s);
            if (vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1132);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1132;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2047);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_2047;
                __VlefCall_17__uvm_get_report_object 
                    = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
                VL_NULL_CHECK(__VlefCall_17__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1621)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk157__DOT__unnamedblk159__DOT___local_report_object_);
                VL_NULL_CHECK(unnamedblk157__DOT__unnamedblk159__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1621)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "PH/TRC/WAIT_PRED_OF_SUCC"s, __VlefCall_18__get_report_verbosity_level);
                __VlefLogAnd_20 = VL_LTES_III(32, 0x0000012cU, __VlefCall_18__get_report_verbosity_level);
                if (__VlefLogAnd_20) {
                    VL_NULL_CHECK(unnamedblk157__DOT__unnamedblk159__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1621)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "PH/TRC/WAIT_PRED_OF_SUCC"s, __VlefCall_19__get_report_action);
                    __VlefLogAnd_20 = (0U != __VlefCall_19__get_report_action);
                }
                if (VL_UNLIKELY((__VlefLogAnd_20))) {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_21__get_full_name);
                    this->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_22__get_inst_id);
                    __Vtask_uvm_report_info__report_enabled_checked_2054 = 1U;
                    this->__Vtask_uvm_report_info__context_name_2053 = ""s;
                    __Vtask_uvm_report_info__line_2052 = 0x00000655U;
                    this->__Vtask_uvm_report_info__filename_2051 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh"s;
                    __Vtask_uvm_report_info__verbosity_2050 = 0x0000012cU;
                    this->__Vtask_uvm_report_info__message_2049 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0s' (id=%0d) ",2
                                                                             , 'S',&(__VlefCall_21__get_full_name)
                                                                             , '~',32,__VlefCall_22__get_inst_id) , 
                                                            VL_CONCATN_NNN(
                                                                           VL_CONCATN_NNN("*** All pred to succ "s, unnamedblk157__DOT__s), " in READY_TO_END state, so ending phase ***"s)));
                    this->__Vtask_uvm_report_info__id_2048 = "PH/TRC/WAIT_PRED_OF_SUCC"s;
                    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1133);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs 
                        = __Vfunc_get__Vfuncout_1133;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 147)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2055);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top 
                        = __Vtask_get_root__Vfuncout_2055;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 148)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__id_2048, this->__Vtask_uvm_report_info__message_2049, __Vtask_uvm_report_info__verbosity_2050, this->__Vtask_uvm_report_info__filename_2051, __Vtask_uvm_report_info__line_2052, this->__Vtask_uvm_report_info__context_name_2053, (::IData)(__Vtask_uvm_report_info__report_enabled_checked_2054));
                }
            }
        } else {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1134);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1134;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2056);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_2056;
            __VlefCall_23__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_23__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1625)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk160__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk160__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1625)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "PH/TRC/WAIT_PRED_OF_SUCC"s, __VlefCall_24__get_report_verbosity_level);
            __VlefLogAnd_26 = VL_LTES_III(32, 0x0000012cU, __VlefCall_24__get_report_verbosity_level);
            if (__VlefLogAnd_26) {
                VL_NULL_CHECK(unnamedblk160__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1625)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "PH/TRC/WAIT_PRED_OF_SUCC"s, __VlefCall_25__get_report_action);
                __VlefLogAnd_26 = (0U != __VlefCall_25__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_26))) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_27__get_full_name);
                this->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_28__get_inst_id);
                __Vtask_uvm_report_info__report_enabled_checked_2063 = 1U;
                this->__Vtask_uvm_report_info__context_name_2062 = ""s;
                __Vtask_uvm_report_info__line_2061 = 0x00000659U;
                this->__Vtask_uvm_report_info__filename_2060 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh"s;
                __Vtask_uvm_report_info__verbosity_2059 = 0x0000012cU;
                this->__Vtask_uvm_report_info__message_2058 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0s' (id=%0d) ",2
                                                                         , 'S',&(__VlefCall_27__get_full_name)
                                                                         , '~',32,__VlefCall_28__get_inst_id) , "*** No pred to succ other than myself, so ending phase ***"s));
                this->__Vtask_uvm_report_info__id_2057 = "PH/TRC/WAIT_PRED_OF_SUCC"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1135);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1135;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 147)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2064);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_2064;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 148)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__id_2057, this->__Vtask_uvm_report_info__message_2058, __Vtask_uvm_report_info__verbosity_2059, this->__Vtask_uvm_report_info__filename_2060, __Vtask_uvm_report_info__line_2061, this->__Vtask_uvm_report_info__context_name_2062, (::IData)(__Vtask_uvm_report_info__report_enabled_checked_2063));
            }
        }
    }
    co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.delay(0ULL, 
                                                               vlProcess, 
                                                               "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 
                                                               1629);
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_report_null_objection(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> obj, ::std::string description, ::IData/*31:0*/ count, ::std::string action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_report_null_objection\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1136;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2065;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_2068;
    __Vtask_uvm_report_error__verbosity_2068 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_2070;
    __Vtask_uvm_report_error__line_2070 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_2072;
    __Vtask_uvm_report_error__report_enabled_checked_2072 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1137;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2073;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_7__get_name;
    ::std::string __VlefCall_6__get_name;
    ::CData/*0:0*/ __VlefLogAnd_5;
    ::IData/*31:0*/ __VlefCall_4__get_report_action;
    ::IData/*31:0*/ __VlefCall_3__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_2__uvm_get_report_object;
    ::IData/*31:0*/ __VlefCall_1__get_phase_type;
    ::std::string __VlefCall_0__get_full_name;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk161__DOT___local_report_object_;
    ::std::string m_action;
    ::std::string m_addon;
    ::std::string m_obj_name;
    m_action = ""s;
    m_addon = ""s;
    if ((VlNull{} == obj)) {
        __VlefCall_0__get_full_name = "uvm_top"s;
    } else {
        VL_NULL_CHECK(obj, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1644)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    }
    m_obj_name = __VlefCall_0__get_full_name;
    if ((("raise"s == action) | ("drop"s == action))) {
        if ((1U != count)) {
            VL_SFORMAT_NX(m_action,"%s %0d objections",2
                          , 'S',&(action), '~',32,count);
        } else {
            VL_SFORMAT_NX(m_action,"%s an objection",1
                          , 'S',&(action));
        }
    } else if (("get_objection_count"s == action)) {
        m_action = "call get_objection_count"s;
    }
    this->__VnoInFunc_get_phase_type(vlSymsp, __VlefCall_1__get_phase_type);
    if ((0U == __VlefCall_1__get_phase_type)) {
        m_addon = " (This is a UVM_PHASE_IMP, you have to query the schedule to find the UVM_PHASE_NODE)"s;
    }
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1136);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1136;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2065);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
        = __Vtask_get_root__Vfuncout_2065;
    __VlefCall_2__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
    VL_NULL_CHECK(__VlefCall_2__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1672)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk161__DOT___local_report_object_);
    VL_NULL_CHECK(unnamedblk161__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1672)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "UVM/PH/NULL_OBJECTION"s, __VlefCall_3__get_report_verbosity_level);
    __VlefLogAnd_5 = VL_LTES_III(32, 0U, __VlefCall_3__get_report_verbosity_level);
    if (__VlefLogAnd_5) {
        VL_NULL_CHECK(unnamedblk161__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1672)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "UVM/PH/NULL_OBJECTION"s, __VlefCall_4__get_report_action);
        __VlefLogAnd_5 = (0U != __VlefCall_4__get_report_action);
    }
    if (VL_UNLIKELY((__VlefLogAnd_5))) {
        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_6__get_name);
        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_7__get_name);
        __Vtask_uvm_report_error__report_enabled_checked_2072 = 1U;
        this->__Vtask_uvm_report_error__context_name_2071 = ""s;
        __Vtask_uvm_report_error__line_2070 = 0x00000688U;
        this->__Vtask_uvm_report_error__filename_2069 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh"s;
        __Vtask_uvm_report_error__verbosity_2068 = 0U;
        VL_SFORMAT_NX(this->__Vtask_uvm_report_error__message_2067
                      ,"'%s' attempted to %s on '%s', however '%s' is not a task-based phase node! %s",5
                      , 'S',&(m_obj_name), 'S',&(m_action)
                      , 'S',&(__VlefCall_6__get_name)
                      , 'S',&(__VlefCall_7__get_name)
                      , 'S',&(m_addon));
        this->__Vtask_uvm_report_error__id_2066 = "UVM/PH/NULL_OBJECTION"s;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1137);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1137;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2073);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
            = __Vtask_get_root__Vfuncout_2073;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_2066, this->__Vtask_uvm_report_error__message_2067, __Vtask_uvm_report_error__verbosity_2068, this->__Vtask_uvm_report_error__filename_2069, __Vtask_uvm_report_error__line_2070, this->__Vtask_uvm_report_error__context_name_2071, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_2072));
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_raise_objection(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> obj, ::std::string description, ::IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_raise_objection\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_objection> phase_done;
    this->__VnoInFunc_get_objection(vlProcess, vlSymsp, phase_done);
    if ((VlNull{} != phase_done)) {
        VL_NULL_CHECK(phase_done, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1686)->__VnoInFunc_raise_objection(vlProcess, vlSymsp, obj, description, count);
    } else {
        this->__VnoInFunc_m_report_null_objection(vlProcess, vlSymsp, obj, description, count, "raise"s);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_drop_objection(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> obj, ::std::string description, ::IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_drop_objection\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_objection> phase_done;
    this->__VnoInFunc_get_objection(vlProcess, vlSymsp, phase_done);
    if ((VlNull{} != phase_done)) {
        VL_NULL_CHECK(phase_done, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1707)->__VnoInFunc_drop_objection(vlProcess, vlSymsp, obj, description, count);
    } else {
        this->__VnoInFunc_m_report_null_objection(vlProcess, vlSymsp, obj, description, count, "drop"s);
    }
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_wait_for_state(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ state, ::IData/*31:0*/ op) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_wait_for_state\n"); );
    // Locals
    ::CData/*0:0*/ __Vtrigprevexpr_h0bbdedf1__0;
    __Vtrigprevexpr_h0bbdedf1__0 = 0;
    ::CData/*0:0*/ __Vtrigprevexpr_h38f04e67__0;
    __Vtrigprevexpr_h38f04e67__0 = 0;
    ::CData/*0:0*/ __Vtrigprevexpr_h43c28202__0;
    __Vtrigprevexpr_h43c28202__0 = 0;
    ::CData/*0:0*/ __Vtrigprevexpr_ha1a7dadc__0;
    __Vtrigprevexpr_ha1a7dadc__0 = 0;
    ::CData/*0:0*/ __Vtrigprevexpr_h6e6fce79__0;
    __Vtrigprevexpr_h6e6fce79__0 = 0;
    ::CData/*0:0*/ __Vtrigprevexpr_h54e59b89__0;
    __Vtrigprevexpr_h54e59b89__0 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    if ((3U == op)) {
        if ((0U == (state & this->__PVT__m_state))) {
            ::CData/*0:0*/ __VdynTrigger_hcb470334__0;
            __VdynTrigger_hcb470334__0 = 0;
            __VdynTrigger_hcb470334__0 = 0U;
            while ((1U & (~ (::IData)(__VdynTrigger_hcb470334__0)))) {
                co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.evaluation(
                                                                                vlProcess, 
                                                                                "@([true] (32'sh0 != (uvm_pkg::uvm_phase.state & uvm_pkg::uvm_phase.m_state)))", 
                                                                                "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 
                                                                                1886);
                __Vtrigprevexpr_h54e59b89__0 = (0U 
                                                != 
                                                (state 
                                                 & this->__PVT__m_state));
                __VdynTrigger_hcb470334__0 = __Vtrigprevexpr_h54e59b89__0;
                vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.anyTriggered(__VdynTrigger_hcb470334__0);
            }
            co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.resumption(
                                                                            vlProcess, 
                                                                            "@([true] (32'sh0 != (uvm_pkg::uvm_phase.state & uvm_pkg::uvm_phase.m_state)))", 
                                                                            "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 
                                                                            1886);
        }
    } else if ((2U == op)) {
        if ((0U != (state & this->__PVT__m_state))) {
            ::CData/*0:0*/ __VdynTrigger_hb5a0c664__0;
            __VdynTrigger_hb5a0c664__0 = 0;
            __VdynTrigger_hb5a0c664__0 = 0U;
            while ((1U & (~ (::IData)(__VdynTrigger_hb5a0c664__0)))) {
                co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.evaluation(
                                                                                vlProcess, 
                                                                                "@([true] (32'sh0 == (uvm_pkg::uvm_phase.state & uvm_pkg::uvm_phase.m_state)))", 
                                                                                "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 
                                                                                1890);
                __Vtrigprevexpr_h6e6fce79__0 = (0U 
                                                == 
                                                (state 
                                                 & this->__PVT__m_state));
                __VdynTrigger_hb5a0c664__0 = __Vtrigprevexpr_h6e6fce79__0;
                vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.anyTriggered(__VdynTrigger_hb5a0c664__0);
            }
            co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.resumption(
                                                                            vlProcess, 
                                                                            "@([true] (32'sh0 == (uvm_pkg::uvm_phase.state & uvm_pkg::uvm_phase.m_state)))", 
                                                                            "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 
                                                                            1890);
        }
    } else if ((0U == op)) {
        if (VL_GTES_III(32, this->__PVT__m_state, state)) {
            ::CData/*0:0*/ __VdynTrigger_h2178c38d__0;
            __VdynTrigger_h2178c38d__0 = 0;
            __VdynTrigger_h2178c38d__0 = 0U;
            while ((1U & (~ (::IData)(__VdynTrigger_h2178c38d__0)))) {
                co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.evaluation(
                                                                                vlProcess, 
                                                                                "@([true] (uvm_pkg::uvm_phase.m_state < uvm_pkg::uvm_phase.state))", 
                                                                                "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 
                                                                                1894);
                __Vtrigprevexpr_ha1a7dadc__0 = VL_LTS_III(32, this->__PVT__m_state, state);
                __VdynTrigger_h2178c38d__0 = __Vtrigprevexpr_ha1a7dadc__0;
                vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.anyTriggered(__VdynTrigger_h2178c38d__0);
            }
            co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.resumption(
                                                                            vlProcess, 
                                                                            "@([true] (uvm_pkg::uvm_phase.m_state < uvm_pkg::uvm_phase.state))", 
                                                                            "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 
                                                                            1894);
        }
    } else if ((1U == op)) {
        if (VL_GTS_III(32, this->__PVT__m_state, state)) {
            ::CData/*0:0*/ __VdynTrigger_h8051caf3__0;
            __VdynTrigger_h8051caf3__0 = 0;
            __VdynTrigger_h8051caf3__0 = 0U;
            while ((1U & (~ (::IData)(__VdynTrigger_h8051caf3__0)))) {
                co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.evaluation(
                                                                                vlProcess, 
                                                                                "@([true] (uvm_pkg::uvm_phase.m_state <= uvm_pkg::uvm_phase.state))", 
                                                                                "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 
                                                                                1898);
                __Vtrigprevexpr_h43c28202__0 = VL_LTES_III(32, this->__PVT__m_state, state);
                __VdynTrigger_h8051caf3__0 = __Vtrigprevexpr_h43c28202__0;
                vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.anyTriggered(__VdynTrigger_h8051caf3__0);
            }
            co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.resumption(
                                                                            vlProcess, 
                                                                            "@([true] (uvm_pkg::uvm_phase.m_state <= uvm_pkg::uvm_phase.state))", 
                                                                            "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 
                                                                            1898);
        }
    } else if ((4U == op)) {
        if (VL_LTES_III(32, this->__PVT__m_state, state)) {
            ::CData/*0:0*/ __VdynTrigger_h6821466a__0;
            __VdynTrigger_h6821466a__0 = 0;
            __VdynTrigger_h6821466a__0 = 0U;
            while ((1U & (~ (::IData)(__VdynTrigger_h6821466a__0)))) {
                co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.evaluation(
                                                                                vlProcess, 
                                                                                "@([true] (uvm_pkg::uvm_phase.m_state > uvm_pkg::uvm_phase.state))", 
                                                                                "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 
                                                                                1902);
                __Vtrigprevexpr_h38f04e67__0 = VL_GTS_III(32, this->__PVT__m_state, state);
                __VdynTrigger_h6821466a__0 = __Vtrigprevexpr_h38f04e67__0;
                vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.anyTriggered(__VdynTrigger_h6821466a__0);
            }
            co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.resumption(
                                                                            vlProcess, 
                                                                            "@([true] (uvm_pkg::uvm_phase.m_state > uvm_pkg::uvm_phase.state))", 
                                                                            "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 
                                                                            1902);
        }
    } else if ((5U == op)) {
        if (VL_LTS_III(32, this->__PVT__m_state, state)) {
            ::CData/*0:0*/ __VdynTrigger_h591da6dc__0;
            __VdynTrigger_h591da6dc__0 = 0;
            __VdynTrigger_h591da6dc__0 = 0U;
            while ((1U & (~ (::IData)(__VdynTrigger_h591da6dc__0)))) {
                co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.evaluation(
                                                                                vlProcess, 
                                                                                "@([true] (uvm_pkg::uvm_phase.m_state >= uvm_pkg::uvm_phase.state))", 
                                                                                "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 
                                                                                1906);
                __Vtrigprevexpr_h0bbdedf1__0 = VL_GTES_III(32, this->__PVT__m_state, state);
                __VdynTrigger_h591da6dc__0 = __Vtrigprevexpr_h0bbdedf1__0;
                vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.anyTriggered(__VdynTrigger_h591da6dc__0);
            }
            co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.resumption(
                                                                            vlProcess, 
                                                                            "@([true] (uvm_pkg::uvm_phase.m_state >= uvm_pkg::uvm_phase.state))", 
                                                                            "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 
                                                                            1906);
        }
    }
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_set_jump_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_set_jump_phase\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1138;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2074;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_2077;
    __Vtask_uvm_report_error__verbosity_2077 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_2079;
    __Vtask_uvm_report_error__line_2079 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_2081;
    __Vtask_uvm_report_error__report_enabled_checked_2081 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1139;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2082;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1140;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2083;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1141;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2084;
    ::IData/*31:0*/ __Vtask_uvm_report_info__verbosity_2087;
    __Vtask_uvm_report_info__verbosity_2087 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__line_2089;
    __Vtask_uvm_report_info__line_2089 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_info__report_enabled_checked_2091;
    __Vtask_uvm_report_info__report_enabled_checked_2091 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1142;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2092;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1143;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2093;
    ::IData/*31:0*/ __Vtask_uvm_report_info__verbosity_2096;
    __Vtask_uvm_report_info__verbosity_2096 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__line_2098;
    __Vtask_uvm_report_info__line_2098 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_info__report_enabled_checked_2100;
    __Vtask_uvm_report_info__report_enabled_checked_2100 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1144;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2101;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_20__get_name;
    ::CData/*0:0*/ __VlefLogAnd_19;
    ::IData/*31:0*/ __VlefCall_18__get_report_action;
    ::IData/*31:0*/ __VlefCall_17__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_16__uvm_get_report_object;
    ::std::string __VlefCall_15__get_name;
    ::CData/*0:0*/ __VlefLogAnd_14;
    ::IData/*31:0*/ __VlefCall_13__get_report_action;
    ::IData/*31:0*/ __VlefCall_12__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_11__uvm_get_report_object;
    ::CData/*0:0*/ __VlefLogAnd_10;
    ::IData/*31:0*/ __VlefCall_9__get_report_action;
    ::IData/*31:0*/ __VlefCall_8__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_7__uvm_get_report_object;
    ::std::string __VlefCall_6__get_name;
    ::std::string __VlefCall_5__get_name;
    ::std::string __VlefCall_4__get_name;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk178__DOT___local_report_object_;
    ::std::string unnamedblk179__DOT__msg;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk179__DOT__unnamedblk180__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk181__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk182__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> d;
    ::CData/*0:0*/ active;
    ::IData/*31:0*/ state;
    {
        active = 0U;
        state = 0U;
        this->__VnoInFunc_get_state(vlSymsp, state);
        active = (VL_LTES_III(32, 8U, state) & VL_GTES_III(32, 0x00000040U, state));
        if ((1U & (~ (::IData)(active)))) {
            if ((VlNull{} == phase)) {
                this->__PVT__m_jump_phase = VlNull{};
                this->__PVT__m_jump_fwd = 0U;
                this->__PVT__m_jump_bkwd = 0U;
                this->__PVT__m_premature_end = 0U;
                goto __Vlabel0;
            } else {
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1138);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1138;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2074);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_2074;
                __VlefCall_0__uvm_get_report_object 
                    = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
                VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1942)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk178__DOT___local_report_object_);
                VL_NULL_CHECK(unnamedblk178__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1942)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "JMPPHIDL"s, __VlefCall_1__get_report_verbosity_level);
                __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
                if (__VlefLogAnd_3) {
                    VL_NULL_CHECK(unnamedblk178__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1942)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "JMPPHIDL"s, __VlefCall_2__get_report_action);
                    __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
                }
                if (VL_UNLIKELY((__VlefLogAnd_3))) {
                    this->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
                    __Vtask_uvm_report_error__report_enabled_checked_2081 = 1U;
                    this->__Vtask_uvm_report_error__context_name_2080 = ""s;
                    __Vtask_uvm_report_error__line_2079 = 0x00000796U;
                    this->__Vtask_uvm_report_error__filename_2078 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh"s;
                    __Vtask_uvm_report_error__verbosity_2077 = 0U;
                    this->__Vtask_uvm_report_error__message_2076 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN(
                                                                           VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Attempting to jump from phase \""s, __VlefCall_4__get_name), "\" which is not currently active (current state is "s), Vtb_top__ConstPool__CONSASSOC_0
                                                                                .at(state)), "). The jump will not happen until the phase becomes "s), "active."s));
                    this->__Vtask_uvm_report_error__id_2075 = "JMPPHIDL"s;
                    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1139);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__Vfuncout_1139;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2082);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__Vfuncout_2082;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_2075, this->__Vtask_uvm_report_error__message_2076, __Vtask_uvm_report_error__verbosity_2077, this->__Vtask_uvm_report_error__filename_2078, __Vtask_uvm_report_error__line_2079, this->__Vtask_uvm_report_error__context_name_2080, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_2081));
                }
            }
        }
        this->__VnoInFunc_m_find_predecessor(vlProcess, vlSymsp, phase, 0U, VlNull{}, d);
        if ((VlNull{} == d)) {
            this->__VnoInFunc_m_find_successor(vlProcess, vlSymsp, phase, 0U, VlNull{}, d);
            if ((VlNull{} == d)) {
                unnamedblk179__DOT__msg = ""s;
                VL_NULL_CHECK(phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1966)->__VnoInFunc_get_name(vlSymsp, __VlefCall_5__get_name);
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_6__get_name);
                VL_SFORMAT_NX(unnamedblk179__DOT__msg
                              ,"phase %s is neither a predecessor or successor of phase %s or is non-existant, so we cannot jump to it.  Phase control flow is now undefined so the simulation must terminate"s,4, 'M',vlSymsp->name(),"uvm_pkg.uvm_phase.set_jump_phase.unnamedblk179", 'T',-9
                              , 'S',&(__VlefCall_5__get_name)
                              , 'S',&(__VlefCall_6__get_name));
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1140);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1140;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2083);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_2083;
                __VlefCall_7__uvm_get_report_object 
                    = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
                VL_NULL_CHECK(__VlefCall_7__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1967)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk179__DOT__unnamedblk180__DOT___local_report_object_);
                VL_NULL_CHECK(unnamedblk179__DOT__unnamedblk180__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1967)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 3U, "PH_BADJUMP"s, __VlefCall_8__get_report_verbosity_level);
                __VlefLogAnd_10 = VL_LTES_III(32, 0U, __VlefCall_8__get_report_verbosity_level);
                if (__VlefLogAnd_10) {
                    VL_NULL_CHECK(unnamedblk179__DOT__unnamedblk180__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1967)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 3U, "PH_BADJUMP"s, __VlefCall_9__get_report_action);
                    __VlefLogAnd_10 = (0U != __VlefCall_9__get_report_action);
                }
                if (VL_UNLIKELY((__VlefLogAnd_10))) {
                    vlSymsp->vlInst.TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "PH_BADJUMP"s, unnamedblk179__DOT__msg, 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh"s, 0x000007afU, ""s, 1U);
                }
            } else {
                this->__PVT__m_jump_fwd = 1U;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1141);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1141;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2084);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_2084;
                __VlefCall_11__uvm_get_report_object 
                    = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
                VL_NULL_CHECK(__VlefCall_11__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1972)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk181__DOT___local_report_object_);
                VL_NULL_CHECK(unnamedblk181__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1972)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "PH_JUMPF"s, __VlefCall_12__get_report_verbosity_level);
                __VlefLogAnd_14 = VL_LTES_III(32, 0x000001f4U, __VlefCall_12__get_report_verbosity_level);
                if (__VlefLogAnd_14) {
                    VL_NULL_CHECK(unnamedblk181__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1972)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "PH_JUMPF"s, __VlefCall_13__get_report_action);
                    __VlefLogAnd_14 = (0U != __VlefCall_13__get_report_action);
                }
                if (VL_UNLIKELY((__VlefLogAnd_14))) {
                    VL_NULL_CHECK(phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1972)->__VnoInFunc_get_name(vlSymsp, __VlefCall_15__get_name);
                    __Vtask_uvm_report_info__report_enabled_checked_2091 = 1U;
                    this->__Vtask_uvm_report_info__context_name_2090 = ""s;
                    __Vtask_uvm_report_info__line_2089 = 0x000007b4U;
                    this->__Vtask_uvm_report_info__filename_2088 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh"s;
                    __Vtask_uvm_report_info__verbosity_2087 = 0x000001f4U;
                    VL_SFORMAT_NX(this->__Vtask_uvm_report_info__message_2086
                                  ,"jumping forward to phase %s",1
                                  , 'S',&(__VlefCall_15__get_name));
                    this->__Vtask_uvm_report_info__id_2085 = "PH_JUMPF"s;
                    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1142);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs 
                        = __Vfunc_get__Vfuncout_1142;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 147)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2092);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top 
                        = __Vtask_get_root__Vfuncout_2092;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 148)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__id_2085, this->__Vtask_uvm_report_info__message_2086, __Vtask_uvm_report_info__verbosity_2087, this->__Vtask_uvm_report_info__filename_2088, __Vtask_uvm_report_info__line_2089, this->__Vtask_uvm_report_info__context_name_2090, (::IData)(__Vtask_uvm_report_info__report_enabled_checked_2091));
                }
            }
        } else {
            this->__PVT__m_jump_bkwd = 1U;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1143);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1143;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2093);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_2093;
            __VlefCall_16__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_16__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1978)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk182__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk182__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1978)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "PH_JUMPB"s, __VlefCall_17__get_report_verbosity_level);
            __VlefLogAnd_19 = VL_LTES_III(32, 0x000001f4U, __VlefCall_17__get_report_verbosity_level);
            if (__VlefLogAnd_19) {
                VL_NULL_CHECK(unnamedblk182__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1978)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "PH_JUMPB"s, __VlefCall_18__get_report_action);
                __VlefLogAnd_19 = (0U != __VlefCall_18__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_19))) {
                VL_NULL_CHECK(phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 1978)->__VnoInFunc_get_name(vlSymsp, __VlefCall_20__get_name);
                __Vtask_uvm_report_info__report_enabled_checked_2100 = 1U;
                this->__Vtask_uvm_report_info__context_name_2099 = ""s;
                __Vtask_uvm_report_info__line_2098 = 0x000007baU;
                this->__Vtask_uvm_report_info__filename_2097 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh"s;
                __Vtask_uvm_report_info__verbosity_2096 = 0x000001f4U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_info__message_2095
                              ,"jumping backward to phase %s",1
                              , 'S',&(__VlefCall_20__get_name));
                this->__Vtask_uvm_report_info__id_2094 = "PH_JUMPB"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1144);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1144;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 147)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2101);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_2101;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 148)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__id_2094, this->__Vtask_uvm_report_info__message_2095, __Vtask_uvm_report_info__verbosity_2096, this->__Vtask_uvm_report_info__filename_2097, __Vtask_uvm_report_info__line_2098, this->__Vtask_uvm_report_info__context_name_2099, (::IData)(__Vtask_uvm_report_info__report_enabled_checked_2100));
            }
        }
        this->__PVT__m_jump_phase = d;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_is_jumping_forward(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &is_jumping_forward__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_is_jumping_forward\n"); );
    // Body
    is_jumping_forward__Vfuncrtn = this->__PVT__m_jump_fwd;
}

void Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_jump_target(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> &get_jump_target__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_jump_target\n"); );
    // Body
    get_jump_target__Vfuncrtn = this->__PVT__m_jump_phase;
}

void Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_clear(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ state) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_clear\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_objection> phase_done;
    this->__VnoInFunc_get_objection(vlProcess, vlSymsp, phase_done);
    this->__VnoInFunc_set_state(vlProcess, vlSymsp, state);
    this->__PVT__m_phase_proc = VlNull{};
    if ((VlNull{} != phase_done)) {
        VL_NULL_CHECK(phase_done, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 2048)->__VnoInFunc_clear(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase>{this});
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_clear_successors(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ state, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> end_state) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_clear_successors\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> unnamedblk184__DOT__succ;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> unnamedblk184__DOT__succ__Vnext;
    ::CData/*0:0*/ unnamedblk184__DOT__succ__Vmore;
    unnamedblk184__DOT__succ__Vmore = 0;
    {
        if ((::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase>{this} 
             == end_state)) {
            goto __Vlabel0;
        }
        this->__VnoInFunc_clear(vlProcess, vlSymsp, state);
        unnamedblk184__DOT__succ__Vmore = (0U != this->__PVT__m_successors.first(unnamedblk184__DOT__succ__Vnext));
        while (unnamedblk184__DOT__succ__Vmore) {
            unnamedblk184__DOT__succ = unnamedblk184__DOT__succ__Vnext;
            unnamedblk184__DOT__succ__Vmore = (0U != this->__PVT__m_successors.next(unnamedblk184__DOT__succ__Vnext));
            VL_NULL_CHECK(unnamedblk184__DOT__succ, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 2069)->__VnoInFunc_clear_successors(vlProcess, vlSymsp, state, end_state);
        }
        __Vlabel0: ;
    }
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_wait_for_self_and_siblings_to_drop(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_wait_for_self_and_siblings_to_drop\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1145;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2102;
    ::IData/*31:0*/ __Vtask_uvm_report_info__verbosity_2105;
    __Vtask_uvm_report_info__verbosity_2105 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__line_2107;
    __Vtask_uvm_report_info__line_2107 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_info__report_enabled_checked_2109;
    __Vtask_uvm_report_info__report_enabled_checked_2109 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1146;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2110;
    ::VlAssocArray<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase>, ::CData/*0:0*/> __Vtask_get_predecessors_for_successors__pred_of_succ_2111;
    __Vtask_get_predecessors_for_successors__pred_of_succ_2111.atDefault() = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1147;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2112;
    ::IData/*31:0*/ __Vtask_uvm_report_info__verbosity_2115;
    __Vtask_uvm_report_info__verbosity_2115 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__line_2117;
    __Vtask_uvm_report_info__line_2117 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_info__report_enabled_checked_2119;
    __Vtask_uvm_report_info__report_enabled_checked_2119 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1148;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2120;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1149;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2121;
    ::IData/*31:0*/ __Vtask_uvm_report_info__verbosity_2124;
    __Vtask_uvm_report_info__verbosity_2124 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__line_2126;
    __Vtask_uvm_report_info__line_2126 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_info__report_enabled_checked_2128;
    __Vtask_uvm_report_info__report_enabled_checked_2128 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1150;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2129;
    ::std::string __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::IData/*31:0*/ __VlefCall_23__get_inst_id;
    ::std::string __VlefCall_22__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_21;
    ::IData/*31:0*/ __VlefCall_20__get_report_action;
    ::IData/*31:0*/ __VlefCall_19__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_18__uvm_get_report_object;
    ::IData/*31:0*/ __VlefCall_17__get_inst_id;
    ::std::string __VlefCall_16__get_name;
    ::IData/*31:0*/ __VlefCall_15__get_inst_id;
    ::std::string __VlefCall_14__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_13;
    ::IData/*31:0*/ __VlefCall_12__get_report_action;
    ::IData/*31:0*/ __VlefCall_11__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_10__uvm_get_report_object;
    ::IData/*31:0*/ __VlefCall_9__get_inst_id;
    ::std::string __VlefCall_8__get_name;
    ::CData/*0:0*/ __VlefLogAnd_7;
    ::IData/*31:0*/ __VlefCall_6__get_objection_total;
    ::IData/*31:0*/ __VlefCall_5__get_inst_id;
    ::std::string __VlefCall_4__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk185__DOT___local_report_object_;
    ::IData/*31:0*/ unnamedblk186__DOT__i;
    unnamedblk186__DOT__i = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_objection> unnamedblk187__DOT__phase_done;
    ::std::string unnamedblk187__DOT__msg;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> unnamedblk187__DOT__unnamedblk188__DOT__sib;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> unnamedblk187__DOT__unnamedblk188__DOT__sib__Vnext;
    ::CData/*0:0*/ unnamedblk187__DOT__unnamedblk188__DOT__sib__Vmore;
    unnamedblk187__DOT__unnamedblk188__DOT__sib__Vmore = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk187__DOT__unnamedblk188__DOT__unnamedblk189__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk187__DOT__unnamedblk188__DOT__unnamedblk190__DOT___local_report_object_;
    ::CData/*0:0*/ need_to_check_all;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> top;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> cs;
    ::VlAssocArray<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase>, ::CData/*0:0*/> siblings;
    need_to_check_all = 1U;
    siblings.clear();
    siblings.atDefault() = 0;
    if (vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1145);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1145;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2102);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
            = __Vtask_get_root__Vfuncout_2102;
        __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
        VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 2087)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk185__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk185__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 2087)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "PH/TRC/WAIT_SELF_AND_SIBLINGS"s, __VlefCall_1__get_report_verbosity_level);
        __VlefLogAnd_3 = VL_LTES_III(32, 0x0000012cU, __VlefCall_1__get_report_verbosity_level);
        if (__VlefLogAnd_3) {
            VL_NULL_CHECK(unnamedblk185__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 2087)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "PH/TRC/WAIT_SELF_AND_SIBLINGS"s, __VlefCall_2__get_report_action);
            __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_3))) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
            this->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_5__get_inst_id);
            __Vtask_uvm_report_info__report_enabled_checked_2109 = 1U;
            this->__Vtask_uvm_report_info__context_name_2108 = ""s;
            __Vtask_uvm_report_info__line_2107 = 0x00000827U;
            this->__Vtask_uvm_report_info__filename_2106 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh"s;
            __Vtask_uvm_report_info__verbosity_2105 = 0x0000012cU;
            this->__Vtask_uvm_report_info__message_2104 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0s' (id=%0d) ",2
                                                                     , 'S',&(__VlefCall_4__get_full_name)
                                                                     , '~',32,__VlefCall_5__get_inst_id) , "WAITING FOR SELF AND SIBLINGS TO DROP"s));
            this->__Vtask_uvm_report_info__id_2103 = "PH/TRC/WAIT_SELF_AND_SIBLINGS"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1146);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1146;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 147)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2110);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__Vfuncout_2110;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 148)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__id_2103, this->__Vtask_uvm_report_info__message_2104, __Vtask_uvm_report_info__verbosity_2105, this->__Vtask_uvm_report_info__filename_2106, __Vtask_uvm_report_info__line_2107, this->__Vtask_uvm_report_info__context_name_2108, (::IData)(__Vtask_uvm_report_info__report_enabled_checked_2109));
        }
    }
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, cs);
    VL_NULL_CHECK(cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 2090)->__VnoInFunc_get_root(vlProcess, vlSymsp, top);
    this->__VnoInFunc_get_predecessors_for_successors(vlSymsp, __Vtask_get_predecessors_for_successors__pred_of_succ_2111);
    siblings = __Vtask_get_predecessors_for_successors__pred_of_succ_2111;
    unnamedblk186__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk186__DOT__i, this->__PVT__m_sync.size())) {
        siblings.atWrite(this->__PVT__m_sync.at(unnamedblk186__DOT__i)) = 1U;
        unnamedblk186__DOT__i = ((::IData)(1U) + unnamedblk186__DOT__i);
    }
    siblings.atWrite(::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase>{this}) = 1U;
    while (need_to_check_all) {
        unnamedblk187__DOT__msg = ""s;
        this->__VnoInFunc_get_objection(vlProcess, vlSymsp, unnamedblk187__DOT__phase_done);
        need_to_check_all = 0U;
        unnamedblk187__DOT__unnamedblk188__DOT__sib__Vmore 
            = (0U != siblings.first(unnamedblk187__DOT__unnamedblk188__DOT__sib__Vnext));
        while (unnamedblk187__DOT__unnamedblk188__DOT__sib__Vmore) {
            unnamedblk187__DOT__unnamedblk188__DOT__sib 
                = unnamedblk187__DOT__unnamedblk188__DOT__sib__Vnext;
            unnamedblk187__DOT__unnamedblk188__DOT__sib__Vmore 
                = (0U != siblings.next(unnamedblk187__DOT__unnamedblk188__DOT__sib__Vnext));
            VL_NULL_CHECK(unnamedblk187__DOT__unnamedblk188__DOT__sib, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 2108)->__VnoInFunc_get_objection(vlProcess, vlSymsp, unnamedblk187__DOT__phase_done);
            co_await VL_NULL_CHECK(unnamedblk187__DOT__unnamedblk188__DOT__sib, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 2109)->__VnoInFunc_wait_for_state(vlProcess, vlSymsp, 0x00000010U, 5U);
            __VlefLogAnd_7 = (VlNull{} != unnamedblk187__DOT__phase_done);
            if (__VlefLogAnd_7) {
                VL_NULL_CHECK(unnamedblk187__DOT__phase_done, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 2110)->__VnoInFunc_get_objection_total(vlSymsp, top, __VlefCall_6__get_objection_total);
                __VlefLogAnd_7 = (0U != __VlefCall_6__get_objection_total);
            }
            if (__VlefLogAnd_7) {
                if (vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
                    VL_NULL_CHECK(unnamedblk187__DOT__unnamedblk188__DOT__sib, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 2113)->__VnoInFunc_get_name(vlSymsp, __VlefCall_8__get_name);
                    VL_NULL_CHECK(unnamedblk187__DOT__unnamedblk188__DOT__sib, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 2113)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_9__get_inst_id);
                    __Vtemp_1 = Vtb_top__ConstPool__CONSASSOC_0
                        .at(VL_NULL_CHECK(unnamedblk187__DOT__unnamedblk188__DOT__sib, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 2113)
                            ->__PVT__m_state);
                    VL_SFORMAT_NX(unnamedblk187__DOT__msg
                                  ,"Waiting for phase '%s' (%0d) to be READY_TO_END. Current state is %s",3
                                  , 'S',&(__VlefCall_8__get_name)
                                  , '~',32,__VlefCall_9__get_inst_id
                                  , 'S',&(__Vtemp_1));
                    if (vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
                        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1147);
                        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                            = __Vfunc_get__Vfuncout_1147;
                        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2112);
                        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                            = __Vtask_get_root__Vfuncout_2112;
                        __VlefCall_10__uvm_get_report_object 
                            = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
                        VL_NULL_CHECK(__VlefCall_10__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 2114)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk187__DOT__unnamedblk188__DOT__unnamedblk189__DOT___local_report_object_);
                        VL_NULL_CHECK(unnamedblk187__DOT__unnamedblk188__DOT__unnamedblk189__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 2114)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "PH/TRC/WAIT_SELF_AND_SIBLINGS"s, __VlefCall_11__get_report_verbosity_level);
                        __VlefLogAnd_13 = VL_LTES_III(32, 0x0000012cU, __VlefCall_11__get_report_verbosity_level);
                        if (__VlefLogAnd_13) {
                            VL_NULL_CHECK(unnamedblk187__DOT__unnamedblk188__DOT__unnamedblk189__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 2114)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "PH/TRC/WAIT_SELF_AND_SIBLINGS"s, __VlefCall_12__get_report_action);
                            __VlefLogAnd_13 = (0U != __VlefCall_12__get_report_action);
                        }
                        if (VL_UNLIKELY((__VlefLogAnd_13))) {
                            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_14__get_full_name);
                            this->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_15__get_inst_id);
                            __Vtask_uvm_report_info__report_enabled_checked_2119 = 1U;
                            this->__Vtask_uvm_report_info__context_name_2118 = ""s;
                            __Vtask_uvm_report_info__line_2117 = 0x00000842U;
                            this->__Vtask_uvm_report_info__filename_2116 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh"s;
                            __Vtask_uvm_report_info__verbosity_2115 = 0x0000012cU;
                            this->__Vtask_uvm_report_info__message_2114 
                                = VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0s' (id=%0d) ",2
                                                                                , 'S',&(__VlefCall_14__get_full_name)
                                                                                , '~',32,__VlefCall_15__get_inst_id) , unnamedblk187__DOT__msg));
                            this->__Vtask_uvm_report_info__id_2113 = "PH/TRC/WAIT_SELF_AND_SIBLINGS"s;
                            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1148);
                            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs 
                                = __Vfunc_get__Vfuncout_1148;
                            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 147)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2120);
                            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top 
                                = __Vtask_get_root__Vfuncout_2120;
                            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 148)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__id_2113, this->__Vtask_uvm_report_info__message_2114, __Vtask_uvm_report_info__verbosity_2115, this->__Vtask_uvm_report_info__filename_2116, __Vtask_uvm_report_info__line_2117, this->__Vtask_uvm_report_info__context_name_2118, (::IData)(__Vtask_uvm_report_info__report_enabled_checked_2119));
                        }
                    }
                }
                this->__PVT__m_state = 0x00000010U;
                co_await VL_NULL_CHECK(unnamedblk187__DOT__phase_done, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 2117)->__VnoInFunc_wait_for(vlProcess, vlSymsp, 4U, top);
                if (vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
                    VL_NULL_CHECK(unnamedblk187__DOT__unnamedblk188__DOT__sib, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 2120)->__VnoInFunc_get_name(vlSymsp, __VlefCall_16__get_name);
                    VL_NULL_CHECK(unnamedblk187__DOT__unnamedblk188__DOT__sib, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 2120)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_17__get_inst_id);
                    VL_SFORMAT_NX(unnamedblk187__DOT__msg
                                  ,"Phase '%s' (%0d) is now READY_TO_END. Releasing phase",2
                                  , 'S',&(__VlefCall_16__get_name)
                                  , '~',32,__VlefCall_17__get_inst_id);
                    if (vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
                        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1149);
                        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                            = __Vfunc_get__Vfuncout_1149;
                        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2121);
                        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                            = __Vtask_get_root__Vfuncout_2121;
                        __VlefCall_18__uvm_get_report_object 
                            = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
                        VL_NULL_CHECK(__VlefCall_18__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 2121)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk187__DOT__unnamedblk188__DOT__unnamedblk190__DOT___local_report_object_);
                        VL_NULL_CHECK(unnamedblk187__DOT__unnamedblk188__DOT__unnamedblk190__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 2121)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "PH/TRC/WAIT_SELF_AND_SIBLINGS"s, __VlefCall_19__get_report_verbosity_level);
                        __VlefLogAnd_21 = VL_LTES_III(32, 0x0000012cU, __VlefCall_19__get_report_verbosity_level);
                        if (__VlefLogAnd_21) {
                            VL_NULL_CHECK(unnamedblk187__DOT__unnamedblk188__DOT__unnamedblk190__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh", 2121)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "PH/TRC/WAIT_SELF_AND_SIBLINGS"s, __VlefCall_20__get_report_action);
                            __VlefLogAnd_21 = (0U != __VlefCall_20__get_report_action);
                        }
                        if (VL_UNLIKELY((__VlefLogAnd_21))) {
                            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_22__get_full_name);
                            this->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_23__get_inst_id);
                            __Vtask_uvm_report_info__report_enabled_checked_2128 = 1U;
                            this->__Vtask_uvm_report_info__context_name_2127 = ""s;
                            __Vtask_uvm_report_info__line_2126 = 0x00000849U;
                            this->__Vtask_uvm_report_info__filename_2125 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase.svh"s;
                            __Vtask_uvm_report_info__verbosity_2124 = 0x0000012cU;
                            this->__Vtask_uvm_report_info__message_2123 
                                = VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0s' (id=%0d) ",2
                                                                                , 'S',&(__VlefCall_22__get_full_name)
                                                                                , '~',32,__VlefCall_23__get_inst_id) , unnamedblk187__DOT__msg));
                            this->__Vtask_uvm_report_info__id_2122 = "PH/TRC/WAIT_SELF_AND_SIBLINGS"s;
                            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1150);
                            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs 
                                = __Vfunc_get__Vfuncout_1150;
                            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 147)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2129);
                            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top 
                                = __Vtask_get_root__Vfuncout_2129;
                            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 148)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__id_2122, this->__Vtask_uvm_report_info__message_2123, __Vtask_uvm_report_info__verbosity_2124, this->__Vtask_uvm_report_info__filename_2125, __Vtask_uvm_report_info__line_2126, this->__Vtask_uvm_report_info__context_name_2127, (::IData)(__Vtask_uvm_report_info__report_enabled_checked_2128));
                        }
                    }
                }
                need_to_check_all = 1U;
            }
        }
    }
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_phase::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_phase_type = 0;
    __PVT__m_state = 0;
    __PVT__m_run_count = 0;
    __PVT__m_num_procs_not_yet_returned = 0;
    __PVT__m_predecessors.atDefault() = 0;
    __PVT__m_successors.atDefault() = 0;
    __PVT__m_jump_bkwd = 0;
    __PVT__m_jump_fwd = 0;
    __PVT__m_premature_end = 0;
}

Vtb_top_uvm_pkg__03a__03auvm_phase::~Vtb_top_uvm_pkg__03a__03auvm_phase() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_phase::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_phase::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_phase_type:" + VL_TO_STRING(__PVT__m_phase_type);
    out += ", m_parent:" + VL_TO_STRING(__PVT__m_parent);
    out += ", m_imp:" + VL_TO_STRING(__PVT__m_imp);
    out += ", m_state:" + VL_TO_STRING(__PVT__m_state);
    out += ", m_run_count:" + VL_TO_STRING(__PVT__m_run_count);
    out += ", m_state_chg:" + VL_TO_STRING(__PVT__m_state_chg);
    out += ", m_phase_proc:" + VL_TO_STRING(__PVT__m_phase_proc);
    out += ", max_ready_to_end_iters:" + VL_TO_STRING(__PVT__max_ready_to_end_iters);
    out += ", m_num_procs_not_yet_returned:" + VL_TO_STRING(__PVT__m_num_procs_not_yet_returned);
    out += ", m_predecessors:" + VL_TO_STRING(__PVT__m_predecessors);
    out += ", m_successors:" + VL_TO_STRING(__PVT__m_successors);
    out += ", m_end_node:" + VL_TO_STRING(__PVT__m_end_node);
    out += ", m_sync:" + VL_TO_STRING(__PVT__m_sync);
    out += ", phase_done:" + VL_TO_STRING(__PVT__phase_done);
    out += ", m_jump_bkwd:" + VL_TO_STRING(__PVT__m_jump_bkwd);
    out += ", m_jump_fwd:" + VL_TO_STRING(__PVT__m_jump_fwd);
    out += ", m_jump_phase:" + VL_TO_STRING(__PVT__m_jump_phase);
    out += ", m_premature_end:" + VL_TO_STRING(__PVT__m_premature_end);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
