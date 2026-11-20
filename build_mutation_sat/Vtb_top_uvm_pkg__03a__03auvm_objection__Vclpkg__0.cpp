// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top___024root____VbeforeTrig_h27d73e2b__0(Vtb_top___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_objection__Vclpkg::__VnoInFunc_m_execute_scheduled_forks(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_objection__Vclpkg::__VnoInFunc_m_execute_scheduled_forks\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03a__VDynScope_38> unnamedblk6__DOT____VDynScope_unnamedblk6_2;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03a__VDynScope_39> unnamedblk6__DOT___Vwrapped_guard_3__DOT____VDynScope_guard_3;
    while (true) {
        while ((0U == this->__Vnontrivs.__PVT__m_scheduled_list.size())) {
            Vtb_top___024root____VbeforeTrig_h27d73e2b__0((&vlSymsp->vlInst.TOP), 
                                                          "@( (32'sh0 != uvm_pkg::uvm_objection__Vclpkg.m_scheduled_list.size()))");
            co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VtrigSched_h27d73e2b__0.trigger(1U, 
                                                                                vlProcess, 
                                                                                "@( (32'sh0 != uvm_pkg::uvm_objection__Vclpkg.m_scheduled_list.size()))", 
                                                                                "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 
                                                                                805);
        }
        if ((0U != this->__Vnontrivs.__PVT__m_scheduled_list.size())) {
            unnamedblk6__DOT____VDynScope_unnamedblk6_2 
                = VL_NEW(Vtb_top_uvm_pkg__03a__03a__VDynScope_38, vlSymsp);
            VL_NULL_CHECK(unnamedblk6__DOT____VDynScope_unnamedblk6_2, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 810)->__PVT__c 
                = this->__Vnontrivs.__PVT__m_scheduled_list.pop_front();
            VL_NULL_CHECK(VL_NULL_CHECK(VL_NULL_CHECK(unnamedblk6__DOT____VDynScope_unnamedblk6_2, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 812)
                                        ->__PVT__c, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 812)
                          ->__PVT__objection, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 812)->__PVT__m_scheduled_contexts.atWrite(VL_NULL_CHECK(VL_NULL_CHECK(unnamedblk6__DOT____VDynScope_unnamedblk6_2, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 812)
                                                                                ->__PVT__c, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 812)
                                                                                ->__PVT__obj) 
                = VL_NULL_CHECK(unnamedblk6__DOT____VDynScope_unnamedblk6_2, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 812)
                ->__PVT__c;
            VL_NULL_CHECK(VL_NULL_CHECK(VL_NULL_CHECK(unnamedblk6__DOT____VDynScope_unnamedblk6_2, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 814)
                                        ->__PVT__c, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 814)
                          ->__PVT__objection, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 814)->__PVT__m_forked_list.push_back(VL_NULL_CHECK(unnamedblk6__DOT____VDynScope_unnamedblk6_2, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 814)
                                                                                ->__PVT__c);
            unnamedblk6__DOT___Vwrapped_guard_3__DOT____VDynScope_guard_3 
                = VL_NEW(Vtb_top_uvm_pkg__03a__03a__VDynScope_39, vlSymsp);
            VL_NULL_CHECK(unnamedblk6__DOT___Vwrapped_guard_3__DOT____VDynScope_guard_3, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 819)->__PVT__objection 
                = VL_NULL_CHECK(VL_NULL_CHECK(unnamedblk6__DOT____VDynScope_unnamedblk6_2, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 819)
                                ->__PVT__c, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 819)
                ->__PVT__objection;
            this->__VnoInFunc_m_execute_scheduled_forks____Vfork_1__0(std::make_shared<VlProcess>(vlProcess), unnamedblk6__DOT___Vwrapped_guard_3__DOT____VDynScope_guard_3);
        }
    }
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_objection__Vclpkg::__VnoInFunc_m_execute_scheduled_forks____Vfork_1__0(VlProcessRef vlProcess, ::VlClassRef<Vtb_top_uvm_pkg__03a__03a__VDynScope_39> unnamedblk6__DOT___Vwrapped_guard_3__DOT____VDynScope_guard_3) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_objection__Vclpkg::__VnoInFunc_m_execute_scheduled_forks____Vfork_1__0\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03a__VDynScope_39> __Vtask___VforkTask_0____VDynScope_guard_3_2550;
    ::VlClassRef<Vtb_top_std__03a__03aprocess> __Vtask___VforkTask_0____VlefCall_0__self_2551;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_objection_context_object> __Vtask___VforkTask_0__unnamedblk7__DOT__ctxt_2552;
    ::VlClassRef<Vtb_top_std__03a__03aprocess> __Vfunc_self__Vfuncout_1286;
    // Body
    VlProcess::currentp(vlProcess.get());
    __Vtask___VforkTask_0____VDynScope_guard_3_2550 
        = unnamedblk6__DOT___Vwrapped_guard_3__DOT____VDynScope_guard_3;
    co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.delay(0xffffffffffffffffULL, 
                                                               vlProcess, 
                                                               "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 
                                                               818);
    if (VL_LTS_III(32, 0U, VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0____VDynScope_guard_3_2550, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 822)
                                         ->__PVT__objection, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 822)
                   ->__PVT__m_forked_list.size())) {
        __Vtask___VforkTask_0__unnamedblk7__DOT__ctxt_2552 
            = VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0____VDynScope_guard_3_2550, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 825)
                            ->__PVT__objection, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 825)
            ->__PVT__m_forked_list.pop_front();
        VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0____VDynScope_guard_3_2550, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 827)
                      ->__PVT__objection, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 827)->__PVT__m_scheduled_contexts.erase(VL_NULL_CHECK(__Vtask___VforkTask_0__unnamedblk7__DOT__ctxt_2552, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 827)
                                                                                ->__PVT__obj);
        VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0____VDynScope_guard_3_2550, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 829)
                      ->__PVT__objection, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 829)->__PVT__m_forked_contexts.atWrite(VL_NULL_CHECK(__Vtask___VforkTask_0__unnamedblk7__DOT__ctxt_2552, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 829)
                                                                                ->__PVT__obj) 
            = __Vtask___VforkTask_0__unnamedblk7__DOT__ctxt_2552;
        vlSymsp->vlInst.TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, __Vfunc_self__Vfuncout_1286);
        __Vtask___VforkTask_0____VlefCall_0__self_2551 
            = __Vfunc_self__Vfuncout_1286;
        VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0____VDynScope_guard_3_2550, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 832)
                      ->__PVT__objection, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 832)->__PVT__m_drain_proc.atWrite(VL_NULL_CHECK(__Vtask___VforkTask_0__unnamedblk7__DOT__ctxt_2552, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 832)
                                                                                ->__PVT__obj) 
            = __Vtask___VforkTask_0____VlefCall_0__self_2551;
        co_await VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0____VDynScope_guard_3_2550, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 840)
                               ->__PVT__objection, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 840)->__VnoInFunc_m_forked_drain(vlProcess, vlSymsp, VL_NULL_CHECK(__Vtask___VforkTask_0__unnamedblk7__DOT__ctxt_2552, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 840)
                                                                                ->__PVT__obj, VL_NULL_CHECK(__Vtask___VforkTask_0__unnamedblk7__DOT__ctxt_2552, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 840)
                                                                                ->__PVT__source_obj, 
                                                                                VL_CVT_PACK_STR_NN(VL_NULL_CHECK(__Vtask___VforkTask_0__unnamedblk7__DOT__ctxt_2552, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 840)
                                                                                ->__PVT__description), VL_NULL_CHECK(__Vtask___VforkTask_0__unnamedblk7__DOT__ctxt_2552, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 840)
                                                                                ->__PVT__count, 1U);
        VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0____VDynScope_guard_3_2550, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 842)
                      ->__PVT__objection, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 842)->__PVT__m_drain_proc.erase(VL_NULL_CHECK(__Vtask___VforkTask_0__unnamedblk7__DOT__ctxt_2552, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 842)
                                                                                ->__PVT__obj);
        VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0____VDynScope_guard_3_2550, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 843)
                      ->__PVT__objection, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 843)->__PVT__m_forked_contexts.erase(VL_NULL_CHECK(__Vtask___VforkTask_0__unnamedblk7__DOT__ctxt_2552, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 843)
                                                                                ->__PVT__obj);
        VL_NULL_CHECK(__Vtask___VforkTask_0__unnamedblk7__DOT__ctxt_2552, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 845)->__VnoInFunc_clear(vlSymsp);
        this->__Vnontrivs.__PVT__m_context_pool.push_back(__Vtask___VforkTask_0__unnamedblk7__DOT__ctxt_2552);
    }
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_objection__Vclpkg::__VnoInFunc_m_init_objections(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_objection__Vclpkg::__VnoInFunc_m_init_objections\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_m_init_objections____Vfork_2__0(std::make_shared<VlProcess>(vlProcess));
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_objection__Vclpkg::__VnoInFunc_m_init_objections____Vfork_2__0(VlProcessRef vlProcess) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_objection__Vclpkg::__VnoInFunc_m_init_objections____Vfork_2__0\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.delay(0xffffffffffffffffULL, 
                                                               vlProcess, 
                                                               "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 
                                                               921);
    co_await this->__VnoInFunc_m_execute_scheduled_forks(vlProcess, vlSymsp);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_objection::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_uvm_pkg__03a__03auvm_report_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_objection::new\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_get_arg_matches__Vfuncout_2547;
    __Vtask_get_arg_matches__Vfuncout_2547 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    this->__PVT__m_prop_mode = 1U;
    ::IData/*31:0*/ __VlefCall_1__get_arg_matches;
    ::IData/*31:0*/ __VlefCall_0__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_cmdline_processor> clp;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> cs_;
    ::VlQueue<::std::string> trace_args;
    trace_args.clear();
    trace_args.atDefault().clear();
    /*super.new*/;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, cs_);
    VL_NULL_CHECK(cs_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 151)->__VnoInFunc_get_root(vlProcess, vlSymsp, this->__PVT__m_top);
    VL_NULL_CHECK(this->__PVT__m_top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 153)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, ""s, __VlefCall_0__get_report_verbosity_level);
    this->__VnoInFunc_set_report_verbosity_level(vlProcess, vlSymsp, __VlefCall_0__get_report_verbosity_level);
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg.__VnoInFunc_get_inst(vlProcess, vlSymsp, clp);
    VL_NULL_CHECK(clp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 157)->__VnoInFunc_get_arg_matches(vlSymsp, "+UVM_OBJECTION_TRACE"s, trace_args, __Vtask_get_arg_matches__Vfuncout_2547);
    __VlefCall_1__get_arg_matches = __Vtask_get_arg_matches__Vfuncout_2547;
    if ((0U != __VlefCall_1__get_arg_matches)) {
        this->__PVT__m_trace_mode = 1U;
    }
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__Vnontrivs.__PVT__m_objections.push_back(
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_objection>{this});
}

void Vtb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_report(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> obj, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> source_obj, ::std::string description, ::IData/*31:0*/ count, ::std::string action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_report\n"); );
    // Locals
    ::std::string __Vtemp_1;
    ::VlWide<3>/*95:0*/ __Vtemp_2;
    ::std::string __Vtemp_3;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_6__get_full_name;
    ::std::string __VlefCall_5__get_full_name;
    ::std::string __VlefCall_4__get_full_name;
    ::std::string __VlefCall_3__get_full_name;
    ::std::string __VlefCall_2__get_full_name;
    ::std::string __VlefCall_1__get_full_name;
    ::IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    ::IData/*31:0*/ unnamedblk1__DOT__cpath;
    ::IData/*31:0*/ unnamedblk1__DOT__last_dot;
    ::std::string unnamedblk1__DOT__sname;
    ::std::string unnamedblk1__DOT__nm;
    ::IData/*31:0*/ unnamedblk1__DOT__max;
    ::IData/*31:0*/ _count;
    ::IData/*31:0*/ _total;
    {
        _count = ((0U != this->__PVT__m_source_count.exists(obj))
                   ? this->__PVT__m_source_count.at(obj)
                   : 0U);
        _total = ((0U != this->__PVT__m_total_count.exists(obj))
                   ? this->__PVT__m_total_count.at(obj)
                   : 0U);
        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 0U, "OBJTN_TRC"s, __VlefCall_0__uvm_report_enabled);
        if (((1U & (~ (0U != __VlefCall_0__uvm_report_enabled))) 
             || (1U & (~ (::IData)(this->__PVT__m_trace_mode))))) {
            goto __Vlabel0;
        }
        if ((source_obj == obj)) {
            VL_NULL_CHECK(obj, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 205)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
            if ((""s == __VlefCall_1__get_full_name)) {
                __VlefCall_2__get_full_name = "uvm_top"s;
            } else {
                VL_NULL_CHECK(obj, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 205)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            }
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
            __Vtemp_1 = ((""s != description) ? VL_CONCATN_NNN(
                                                               VL_CONCATN_NNN(" ("s, description), ")"s)
                          : ""s);
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "OBJTN_TRC"s, VL_SFORMATF_N_NX("Object %0s %0s %0d %0s objection(s)%s: count=%0d  total=%0d",7
                                                                                , 'S',&(__VlefCall_2__get_full_name)
                                                                                , 'S',&(action)
                                                                                , '~',32,count
                                                                                , 'S',&(__VlefCall_3__get_full_name)
                                                                                , 'S',&(__Vtemp_1)
                                                                                , '~',32,_count
                                                                                , '~',32,_total) , 0U, ""s, 0U, ""s, 0U);
        } else {
            unnamedblk1__DOT__cpath = 0U;
            unnamedblk1__DOT__last_dot = 0U;
            VL_NULL_CHECK(source_obj, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 212)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, unnamedblk1__DOT__sname);
            VL_NULL_CHECK(obj, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 212)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, unnamedblk1__DOT__nm);
            unnamedblk1__DOT__max = (VL_GTS_III(32, 
                                                VL_LEN_IN(unnamedblk1__DOT__sname), 
                                                VL_LEN_IN(unnamedblk1__DOT__nm))
                                      ? VL_LEN_IN(unnamedblk1__DOT__nm)
                                      : VL_LEN_IN(unnamedblk1__DOT__sname));
            while (((VL_GETC_N(unnamedblk1__DOT__sname,unnamedblk1__DOT__cpath) 
                     == VL_GETC_N(unnamedblk1__DOT__nm,unnamedblk1__DOT__cpath)) 
                    & VL_LTS_III(32, unnamedblk1__DOT__cpath, unnamedblk1__DOT__max))) {
                if ((0x2eU == VL_GETC_N(unnamedblk1__DOT__sname,unnamedblk1__DOT__cpath))) {
                    unnamedblk1__DOT__last_dot = unnamedblk1__DOT__cpath;
                }
                unnamedblk1__DOT__cpath = ((::IData)(1U) 
                                           + unnamedblk1__DOT__cpath);
            }
            if ((0U != unnamedblk1__DOT__last_dot)) {
                unnamedblk1__DOT__sname = VL_SUBSTR_N(unnamedblk1__DOT__sname,
                                                      ((::IData)(1U) 
                                                       + unnamedblk1__DOT__last_dot),
                                                      VL_LEN_IN(unnamedblk1__DOT__sname));
            }
            VL_NULL_CHECK(obj, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 234)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
            if ((""s == __VlefCall_4__get_full_name)) {
                __VlefCall_5__get_full_name = "uvm_top"s;
            } else {
                VL_NULL_CHECK(obj, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 234)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
            }
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
            if (("raised"s == action)) {
                __Vtemp_2[0U] = 0x64646564U;
                __Vtemp_2[1U] = 0x00000061U;
                __Vtemp_2[2U] = 0U;
            } else {
                __Vtemp_2[0U] = 0x63746564U;
                __Vtemp_2[1U] = 0x62747261U;
                __Vtemp_2[2U] = 0x00007375U;
            }
            __Vtemp_3 = ((""s != description) ? VL_CONCATN_NNN(", "s, description)
                          : ""s);
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "OBJTN_TRC"s, VL_SFORMATF_N_NX("Object %0s %0s %0d %0s objection(s) %0s its total (%s from source object %s%s): count=%0d  total=%0d",10
                                                                                , 'S',&(__VlefCall_5__get_full_name)
                                                                                , '#',80,__Vtemp_2.data()
                                                                                , '~',32,count
                                                                                , 'S',&(__VlefCall_6__get_full_name)
                                                                                , '#',32,
                                                                                (("raised"s 
                                                                                == action)
                                                                                 ? 0x0000746fU
                                                                                 : 0x66726f6dU)
                                                                                , 'S',&(action)
                                                                                , 'S',&(unnamedblk1__DOT__sname)
                                                                                , 'S',&(__Vtemp_3)
                                                                                , '~',32,_count
                                                                                , '~',32,_total) , 0U, ""s, 0U, ""s, 0U);
        }
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_get_parent(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> obj, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &m_get_parent__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_get_parent\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> __Vtask_get_parent__Vfuncout_2548;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequencer_base> __Vtask_get_sequencer__Vfuncout_2549;
    // Body
    ::IData/*31:0*/ __VlefExpr_1;
    ::IData/*31:0*/ __VlefExpr_0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> comp;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> seq;
    __VlefExpr_0 = VL_CAST_DYNAMIC(obj, comp);
    if ((0U != __VlefExpr_0)) {
        VL_NULL_CHECK(comp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 251)->__VnoInFunc_get_parent(vlSymsp, __Vtask_get_parent__Vfuncout_2548);
        obj = __Vtask_get_parent__Vfuncout_2548;
    } else {
        __VlefExpr_1 = VL_CAST_DYNAMIC(obj, seq);
        if ((0U != __VlefExpr_1)) {
            VL_NULL_CHECK(seq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 255)->__VnoInFunc_get_sequencer(vlSymsp, __Vtask_get_sequencer__Vfuncout_2549);
            obj = __Vtask_get_sequencer__Vfuncout_2549;
        } else {
            obj = this->__PVT__m_top;
        }
    }
    if ((VlNull{} == obj)) {
        obj = this->__PVT__m_top;
    }
    m_get_parent__Vfuncrtn = obj;
}

void Vtb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_propagate(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> obj, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> source_obj, ::std::string description, ::IData/*31:0*/ count, ::CData/*0:0*/ raise, ::IData/*31:0*/ in_top_thread) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_propagate\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    if (((VlNull{} != obj) & (obj != this->__PVT__m_top))) {
        this->__VnoInFunc_m_get_parent(vlSymsp, obj, obj);
        if (raise) {
            this->__VnoInFunc_m_raise(vlProcess, vlSymsp, obj, source_obj, description, count);
        } else {
            this->__VnoInFunc_m_drop(vlProcess, vlSymsp, obj, source_obj, description, count, in_top_thread);
        }
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_raise_objection(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> obj, ::std::string description, ::IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_raise_objection\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    if ((VlNull{} == obj)) {
        obj = this->__PVT__m_top;
    }
    this->__PVT__m_cleared = 0U;
    this->__PVT__m_top_all_dropped = 0U;
    this->__VnoInFunc_m_raise(vlProcess, vlSymsp, obj, obj, description, count);
}

void Vtb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_raise(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> obj, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> source_obj, ::std::string description, ::IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_raise\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ unnamedblk3__DOT__diff_count;
    ::IData/*31:0*/ idx;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_objection_context_object> ctxt;
    {
        idx = 0U;
        if ((0U == count)) {
            goto __Vlabel0;
        }
        if ((0U != this->__PVT__m_total_count.exists(obj))) {
            this->__PVT__m_total_count.atWrite(obj) 
                = (this->__PVT__m_total_count.at(obj) 
                   + count);
        } else {
            this->__PVT__m_total_count.atWrite(obj) 
                = count;
        }
        if ((source_obj == obj)) {
            if ((0U != this->__PVT__m_source_count.exists(obj))) {
                this->__PVT__m_source_count.atWrite(obj) 
                    = (this->__PVT__m_source_count.at(obj) 
                       + count);
            } else {
                this->__PVT__m_source_count.atWrite(obj) 
                    = count;
            }
        }
        if (this->__PVT__m_trace_mode) {
            this->__VnoInFunc_m_report(vlProcess, vlSymsp, obj, source_obj, description, count, "raised"s);
        }
        this->__VnoInFunc_raised(vlProcess, vlSymsp, obj, source_obj, description, count);
        idx = 0U;
        {
            while (VL_LTS_III(32, idx, vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__Vnontrivs.__PVT__m_scheduled_list.size())) {
                if (((VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__Vnontrivs.__PVT__m_scheduled_list.at(idx), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 419)
                      ->__PVT__obj == obj) && (VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__Vnontrivs.__PVT__m_scheduled_list.at(idx), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 420)
                                               ->__PVT__objection 
                                               == ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_objection>{this}))) {
                    ctxt = vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__Vnontrivs.__PVT__m_scheduled_list.at(idx);
                    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__Vnontrivs.__PVT__m_scheduled_list.erase(idx);
                    goto __Vlabel1;
                }
                idx = ((::IData)(1U) + idx);
            }
            __Vlabel1: ;
        }
        if ((VlNull{} == ctxt)) {
            idx = 0U;
            {
                while (VL_LTS_III(32, idx, this->__PVT__m_forked_list.size())) {
                    if ((VL_NULL_CHECK(this->__PVT__m_forked_list.at(idx), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 436)
                         ->__PVT__obj == obj)) {
                        ctxt = this->__PVT__m_forked_list.at(idx);
                        this->__PVT__m_forked_list.erase(idx);
                        this->__PVT__m_scheduled_contexts.erase(VL_NULL_CHECK(ctxt, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 442)
                                                                ->__PVT__obj);
                        goto __Vlabel2;
                    }
                    idx = ((::IData)(1U) + idx);
                }
                __Vlabel2: ;
            }
        }
        if ((VlNull{} == ctxt)) {
            if ((0U != this->__PVT__m_forked_contexts.exists(obj))) {
                ctxt = this->__PVT__m_forked_contexts
                    .at(obj);
                this->__PVT__m_forked_contexts.erase(obj);
                VL_NULL_CHECK(this->__PVT__m_drain_proc
                              .at(obj), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 459)->__VnoInFunc_kill(vlSymsp);
                this->__PVT__m_drain_proc.erase(obj);
            }
        }
        if ((VlNull{} == ctxt)) {
            if (((~ (::IData)(this->__PVT__m_prop_mode)) 
                 & (obj != this->__PVT__m_top))) {
                this->__VnoInFunc_m_raise(vlProcess, vlSymsp, this->__PVT__m_top, source_obj, description, count);
            } else if ((obj != this->__PVT__m_top)) {
                this->__VnoInFunc_m_propagate(vlProcess, vlSymsp, obj, source_obj, description, count, 1U, 0U);
            }
        } else {
            unnamedblk3__DOT__diff_count = 0U;
            unnamedblk3__DOT__diff_count = (count - VL_NULL_CHECK(ctxt, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 493)
                                            ->__PVT__count);
            if ((0U != unnamedblk3__DOT__diff_count)) {
                if (VL_LTS_III(32, 0U, unnamedblk3__DOT__diff_count)) {
                    if (((~ (::IData)(this->__PVT__m_prop_mode)) 
                         & (obj != this->__PVT__m_top))) {
                        this->__VnoInFunc_m_raise(vlProcess, vlSymsp, this->__PVT__m_top, source_obj, description, unnamedblk3__DOT__diff_count);
                    } else if ((obj != this->__PVT__m_top)) {
                        this->__VnoInFunc_m_propagate(vlProcess, vlSymsp, obj, source_obj, description, unnamedblk3__DOT__diff_count, 1U, 0U);
                    }
                } else {
                    unnamedblk3__DOT__diff_count = 
                        (- unnamedblk3__DOT__diff_count);
                    if (((~ (::IData)(this->__PVT__m_prop_mode)) 
                         & (obj != this->__PVT__m_top))) {
                        this->__VnoInFunc_m_drop(vlProcess, vlSymsp, this->__PVT__m_top, source_obj, description, unnamedblk3__DOT__diff_count, 0U);
                    } else if ((obj != this->__PVT__m_top)) {
                        this->__VnoInFunc_m_propagate(vlProcess, vlSymsp, obj, source_obj, description, unnamedblk3__DOT__diff_count, 0U, 0U);
                    }
                }
            }
            VL_NULL_CHECK(ctxt, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 531)->__VnoInFunc_clear(vlSymsp);
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__Vnontrivs.__PVT__m_context_pool.push_back(ctxt);
        }
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_drop_objection(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> obj, ::std::string description, ::IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_drop_objection\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    if ((VlNull{} == obj)) {
        obj = this->__PVT__m_top;
    }
    this->__VnoInFunc_m_drop(vlProcess, vlSymsp, obj, obj, description, count, 0U);
}

void Vtb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_drop(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> obj, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> source_obj, ::std::string description, ::IData/*31:0*/ count, ::IData/*31:0*/ in_top_thread) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_drop\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_3__get_name;
    ::std::string __VlefCall_2__get_full_name;
    ::std::string __VlefCall_1__get_name;
    ::std::string __VlefCall_0__get_full_name;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_objection_context_object> unnamedblk4__DOT__ctxt;
    {
        if ((0U == count)) {
            goto __Vlabel0;
        }
        if (VL_UNLIKELY(((1U & ((~ (0U != this->__PVT__m_total_count.exists(obj))) 
                                | VL_GTS_III(32, count, this->__PVT__m_total_count
                                             .at(obj))))))) {
            if (this->__PVT__m_cleared) {
                goto __Vlabel0;
            }
            VL_NULL_CHECK(obj, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 632)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
            this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "OBJTN_ZERO"s, 
                                               VL_CVT_PACK_STR_NN(
                                                                  VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Object \""s, __VlefCall_0__get_full_name), "\" attempted to drop objection '"s), __VlefCall_1__get_name), "' count below zero"s)), 0U, ""s, 0U, ""s, 0U);
            goto __Vlabel0;
        }
        if ((obj == source_obj)) {
            if (VL_UNLIKELY(((1U & ((~ (0U != this->__PVT__m_source_count.exists(obj))) 
                                    | VL_GTS_III(32, count, this->__PVT__m_source_count
                                                 .at(obj))))))) {
                if (this->__PVT__m_cleared) {
                    goto __Vlabel0;
                }
                VL_NULL_CHECK(obj, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 646)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_3__get_name);
                this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "OBJTN_ZERO"s, 
                                                   VL_CVT_PACK_STR_NN(
                                                                      VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Object \""s, __VlefCall_2__get_full_name), "\" attempted to drop objection '"s), __VlefCall_3__get_name), "' count below zero"s)), 0U, ""s, 0U, ""s, 0U);
                goto __Vlabel0;
            }
            this->__PVT__m_source_count.atWrite(obj) 
                = (this->__PVT__m_source_count.at(obj) 
                   - count);
        }
        this->__PVT__m_total_count.atWrite(obj) = (this->__PVT__m_total_count
                                                   .at(obj) 
                                                   - count);
        if (this->__PVT__m_trace_mode) {
            this->__VnoInFunc_m_report(vlProcess, vlSymsp, obj, source_obj, description, count, "dropped"s);
        }
        this->__VnoInFunc_dropped(vlProcess, vlSymsp, obj, source_obj, description, count);
        if ((0U != this->__PVT__m_total_count.at(obj))) {
            if (((~ (::IData)(this->__PVT__m_prop_mode)) 
                 & (obj != this->__PVT__m_top))) {
                this->__VnoInFunc_m_drop(vlProcess, vlSymsp, this->__PVT__m_top, source_obj, description, count, in_top_thread);
            } else if ((obj != this->__PVT__m_top)) {
                this->__VnoInFunc_m_propagate(vlProcess, vlSymsp, obj, source_obj, description, count, 0U, in_top_thread);
            }
        } else {
            if ((0U != vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__Vnontrivs.__PVT__m_context_pool.size())) {
                unnamedblk4__DOT__ctxt = vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__Vnontrivs.__PVT__m_context_pool.pop_front();
            } else {
                unnamedblk4__DOT__ctxt = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_objection_context_object, vlSymsp);
            }
            VL_NULL_CHECK(unnamedblk4__DOT__ctxt, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 691)->__PVT__obj 
                = obj;
            VL_NULL_CHECK(unnamedblk4__DOT__ctxt, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 692)->__PVT__source_obj 
                = source_obj;
            VL_NULL_CHECK(unnamedblk4__DOT__ctxt, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 693)->__PVT__description 
                = description;
            VL_NULL_CHECK(unnamedblk4__DOT__ctxt, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 694)->__PVT__count 
                = count;
            VL_NULL_CHECK(unnamedblk4__DOT__ctxt, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 695)->__PVT__objection 
                = ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_objection>{this};
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__Vnontrivs.__PVT__m_scheduled_list.push_back(unnamedblk4__DOT__ctxt);
        }
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_clear(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_clear\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_1__get_name;
    ::IData/*31:0*/ __VlefCall_0__get_objection_total;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> unnamedblk5__DOT__o;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> unnamedblk5__DOT__o__Vnext;
    ::CData/*0:0*/ unnamedblk5__DOT__o__Vmore;
    unnamedblk5__DOT__o__Vmore = 0;
    ::std::string name;
    ::IData/*31:0*/ idx;
    name = ""s;
    idx = 0U;
    if ((VlNull{} == obj)) {
        obj = this->__PVT__m_top;
    }
    VL_NULL_CHECK(obj, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 725)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, name);
    if ((""s == name)) {
        name = "uvm_top"s;
    } else {
        VL_NULL_CHECK(obj, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 733)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, name);
    }
    this->__VnoInFunc_get_objection_total(vlSymsp, this->__PVT__m_top, __VlefCall_0__get_objection_total);
    if (VL_UNLIKELY((((~ (::IData)(this->__PVT__m_top_all_dropped)) 
                      & (0U != __VlefCall_0__get_objection_total))))) {
        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
        this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "OBJTN_CLEAR"s, 
                                             VL_CVT_PACK_STR_NN(
                                                                VL_CONCATN_NNN(
                                                                               VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Object '"s, name), "' cleared objection counts for "s), __VlefCall_1__get_name)), 0U, ""s, 0U, ""s, 0U);
    }
    this->__PVT__m_source_count.clear();
    this->__PVT__m_total_count.clear();
    idx = 0U;
    while (VL_LTS_III(32, idx, vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__Vnontrivs.__PVT__m_scheduled_list.size())) {
        if ((VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__Vnontrivs.__PVT__m_scheduled_list.at(idx), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 750)
             ->__PVT__objection == ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_objection>{this})) {
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__Vnontrivs.__PVT__m_scheduled_list.at(idx), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 752)->__VnoInFunc_clear(vlSymsp);
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__Vnontrivs.__PVT__m_context_pool.push_back(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__Vnontrivs.__PVT__m_scheduled_list.at(idx));
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__Vnontrivs.__PVT__m_scheduled_list.erase(idx);
        } else {
            idx = ((::IData)(1U) + idx);
        }
    }
    this->__PVT__m_scheduled_contexts.clear();
    while ((0U != this->__PVT__m_forked_list.size())) {
        VL_NULL_CHECK(this->__PVT__m_forked_list.at(0U), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 767)->__VnoInFunc_clear(vlSymsp);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__Vnontrivs.__PVT__m_context_pool.push_back(this->__PVT__m_forked_list.at(0U));
        std::ignore = this->__PVT__m_forked_list.pop_front();
    }
    unnamedblk5__DOT__o__Vmore = (0U != this->__PVT__m_forked_contexts.first(unnamedblk5__DOT__o__Vnext));
    while (unnamedblk5__DOT__o__Vmore) {
        unnamedblk5__DOT__o = unnamedblk5__DOT__o__Vnext;
        unnamedblk5__DOT__o__Vmore = (0U != this->__PVT__m_forked_contexts.next(unnamedblk5__DOT__o__Vnext));
        VL_NULL_CHECK(this->__PVT__m_drain_proc.at(unnamedblk5__DOT__o), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 776)->__VnoInFunc_kill(vlSymsp);
        this->__PVT__m_drain_proc.erase(unnamedblk5__DOT__o);
        VL_NULL_CHECK(this->__PVT__m_forked_contexts
                      .at(unnamedblk5__DOT__o), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 783)->__VnoInFunc_clear(vlSymsp);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__Vnontrivs.__PVT__m_context_pool.push_back(this->__PVT__m_forked_contexts
                                                                                .at(unnamedblk5__DOT__o));
        this->__PVT__m_forked_contexts.erase(unnamedblk5__DOT__o);
    }
    this->__PVT__m_top_all_dropped = 0U;
    this->__PVT__m_cleared = 1U;
    if ((0U != this->__PVT__m_events.exists(this->__PVT__m_top))) {
        vlSymsp->fireEvent(VL_NULL_CHECK(this->__PVT__m_events
                                         .atWrite(this->__PVT__m_top), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 792)
                           ->__PVT__all_dropped);
    }
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_forked_drain(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> obj, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> source_obj, ::std::string description, ::IData/*31:0*/ count, ::IData/*31:0*/ in_top_thread) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_forked_drain\n"); );
    // Locals
    ::CData/*0:0*/ __Vtrigprevexpr_h4a02d4da__0;
    __Vtrigprevexpr_h4a02d4da__0 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    if ((0U != this->__PVT__m_drain_time.exists(obj))) {
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.delay(
                                                                   (0x00000000000003e8ULL 
                                                                    * this->__PVT__m_drain_time
                                                                    .at(obj)), 
                                                                   vlProcess, 
                                                                   "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 
                                                                   867);
    }
    if (this->__PVT__m_trace_mode) {
        this->__VnoInFunc_m_report(vlProcess, vlSymsp, obj, source_obj, description, count, "all_dropped"s);
    }
    this->__VnoInFunc_all_dropped(vlProcess, vlSymsp, obj, source_obj, description, count);
    if ((1U & (~ (::IData)(vlProcess->completedFork())))) {
        ::CData/*0:0*/ __VdynTrigger_h7a11b98b__0;
        __VdynTrigger_h7a11b98b__0 = 0;
        __VdynTrigger_h7a11b98b__0 = 0U;
        while ((1U & (~ (::IData)(__VdynTrigger_h7a11b98b__0)))) {
            co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.evaluation(
                                                                            vlProcess, 
                                                                            "@([true] $_CEXPR(vlProcess->completedFork()))", 
                                                                            "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 
                                                                            879);
            __Vtrigprevexpr_h4a02d4da__0 = vlProcess->completedFork();
            __VdynTrigger_h7a11b98b__0 = __Vtrigprevexpr_h4a02d4da__0;
            vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.anyTriggered(__VdynTrigger_h7a11b98b__0);
        }
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.resumption(
                                                                        vlProcess, 
                                                                        "@([true] $_CEXPR(vlProcess->completedFork()))", 
                                                                        "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 
                                                                        879);
    }
    if (((0U != this->__PVT__m_source_count.exists(obj)) 
         & (0U == this->__PVT__m_source_count.at(obj)))) {
        this->__PVT__m_source_count.erase(obj);
    }
    if (((0U != this->__PVT__m_total_count.exists(obj)) 
         & (0U == this->__PVT__m_total_count.at(obj)))) {
        this->__PVT__m_total_count.erase(obj);
    }
    if (((~ (::IData)(this->__PVT__m_prop_mode)) & 
         (obj != this->__PVT__m_top))) {
        this->__VnoInFunc_m_drop(vlProcess, vlSymsp, this->__PVT__m_top, source_obj, description, count, 1U);
    } else if ((obj != this->__PVT__m_top)) {
        this->__VnoInFunc_m_propagate(vlProcess, vlSymsp, obj, source_obj, description, count, 0U, 1U);
    }
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_raised(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> obj, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> source_obj, ::std::string description, ::IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_raised\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefExpr_0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pi54e4cdf5> unnamedblk8__DOT__iter;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_objection_callback> unnamedblk8__DOT__cb;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> comp;
    __VlefExpr_0 = VL_CAST_DYNAMIC(obj, comp);
    if ((0U != __VlefExpr_0)) {
        VL_NULL_CHECK(comp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 970)->__VnoInFunc_raised(vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_objection>{this}, source_obj, description, count);
    }
    unnamedblk8__DOT__iter = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pi54e4cdf5, vlProcess, vlSymsp, 
                                    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_objection>{this});
    VL_NULL_CHECK(unnamedblk8__DOT__iter, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 973)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk8__DOT__cb);
    while ((VlNull{} != unnamedblk8__DOT__cb)) {
        VL_NULL_CHECK(unnamedblk8__DOT__cb, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 973)->__VnoInFunc_raised(vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_objection>{this}, obj, source_obj, description, count);
        VL_NULL_CHECK(unnamedblk8__DOT__iter, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 973)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk8__DOT__cb);
    }
    if ((0U != this->__PVT__m_events.exists(obj))) {
        vlSymsp->fireEvent(VL_NULL_CHECK(this->__PVT__m_events
                                         .atWrite(obj), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 976)
                           ->__PVT__raised);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_dropped(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> obj, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> source_obj, ::std::string description, ::IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_dropped\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefExpr_0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pi54e4cdf5> unnamedblk9__DOT__iter;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_objection_callback> unnamedblk9__DOT__cb;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> comp;
    __VlefExpr_0 = VL_CAST_DYNAMIC(obj, comp);
    if ((0U != __VlefExpr_0)) {
        VL_NULL_CHECK(comp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 995)->__VnoInFunc_dropped(vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_objection>{this}, source_obj, description, count);
    }
    unnamedblk9__DOT__iter = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pi54e4cdf5, vlProcess, vlSymsp, 
                                    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_objection>{this});
    VL_NULL_CHECK(unnamedblk9__DOT__iter, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 998)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk9__DOT__cb);
    while ((VlNull{} != unnamedblk9__DOT__cb)) {
        VL_NULL_CHECK(unnamedblk9__DOT__cb, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 998)->__VnoInFunc_dropped(vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_objection>{this}, obj, source_obj, description, count);
        VL_NULL_CHECK(unnamedblk9__DOT__iter, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 998)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk9__DOT__cb);
    }
    if ((0U != this->__PVT__m_events.exists(obj))) {
        vlSymsp->fireEvent(VL_NULL_CHECK(this->__PVT__m_events
                                         .atWrite(obj), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 1001)
                           ->__PVT__dropped);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_all_dropped(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> obj, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> source_obj, ::std::string description, ::IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_all_dropped\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefExpr_0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pi54e4cdf5> unnamedblk10__DOT__iter;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_objection_callback> unnamedblk10__DOT__cb;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> comp;
    __VlefExpr_0 = VL_CAST_DYNAMIC(obj, comp);
    if ((0U != __VlefExpr_0)) {
        VL_NULL_CHECK(comp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 1022)->__VnoInFunc_all_dropped(vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_objection>{this}, source_obj, description, count);
    }
    unnamedblk10__DOT__iter = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pi54e4cdf5, vlProcess, vlSymsp, 
                                     ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_objection>{this});
    VL_NULL_CHECK(unnamedblk10__DOT__iter, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 1025)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk10__DOT__cb);
    while ((VlNull{} != unnamedblk10__DOT__cb)) {
        VL_NULL_CHECK(unnamedblk10__DOT__cb, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 1025)->__VnoInFunc_all_dropped(vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_objection>{this}, obj, source_obj, description, count);
        VL_NULL_CHECK(unnamedblk10__DOT__iter, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 1025)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk10__DOT__cb);
    }
    if ((0U != this->__PVT__m_events.exists(obj))) {
        vlSymsp->fireEvent(VL_NULL_CHECK(this->__PVT__m_events
                                         .atWrite(obj), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 1028)
                           ->__PVT__all_dropped);
    }
    if ((obj == this->__PVT__m_top)) {
        this->__PVT__m_top_all_dropped = 1U;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_get_objectors(Vtb_top__Syms* __restrict vlSymsp, ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object>> &list) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_get_objectors\n"); );
    // Body
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> unnamedblk11__DOT__obj;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> unnamedblk11__DOT__obj__Vnext;
    ::CData/*0:0*/ unnamedblk11__DOT__obj__Vmore;
    unnamedblk11__DOT__obj__Vmore = 0;
    list.clear();
    unnamedblk11__DOT__obj__Vmore = (0U != this->__PVT__m_source_count.first(unnamedblk11__DOT__obj__Vnext));
    while (unnamedblk11__DOT__obj__Vmore) {
        unnamedblk11__DOT__obj = unnamedblk11__DOT__obj__Vnext;
        unnamedblk11__DOT__obj__Vmore = (0U != this->__PVT__m_source_count.next(unnamedblk11__DOT__obj__Vnext));
        list.push_back(unnamedblk11__DOT__obj);
    }
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_wait_for(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ objt_event, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_wait_for\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_objection_events> __VlefCall_0__new;
    if ((VlNull{} == obj)) {
        obj = this->__PVT__m_top;
    }
    if ((1U & (~ (0U != this->__PVT__m_events.exists(obj))))) {
        __VlefCall_0__new = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_objection_events, vlSymsp);
        this->__PVT__m_events.atWrite(obj) = __VlefCall_0__new;
    }
    VL_NULL_CHECK(this->__PVT__m_events.atWrite(obj), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 1074)->__PVT__waiters 
        = ((::IData)(1U) + VL_NULL_CHECK(this->__PVT__m_events
                                         .at(obj), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 1074)
           ->__PVT__waiters);
    if ((1U == objt_event)) {
        ::CData/*0:0*/ __VdynTrigger_h675f6443__0;
        __VdynTrigger_h675f6443__0 = 0;
        __VdynTrigger_h675f6443__0 = 0U;
        if ((VlNull{} != this->__PVT__m_events.at(obj))) {
            VL_NULL_CHECK(this->__PVT__m_events.at(obj), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 1078)->__PVT__raised.clearFired();
        }
        while ((1U & (~ (::IData)(__VdynTrigger_h675f6443__0)))) {
            co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.evaluation(
                                                                            vlProcess, 
                                                                            "@([event] (uvm_pkg::uvm_objection.m_events[uvm_pkg::uvm_objection.obj]).raised)", 
                                                                            "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 
                                                                            1078);
            __VdynTrigger_h675f6443__0 = (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish() && !vlSymsp->_vm_contextp__->finishPending()) 
                                          && ((VlNull{} 
                                               != this->__PVT__m_events
                                               .at(obj)) 
                                              && VL_NULL_CHECK(this->__PVT__m_events
                                                               .at(obj), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 1078)
                                              ->__PVT__raised.isFired()));
            vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.anyTriggered(__VdynTrigger_h675f6443__0);
            co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.postUpdate(
                                                                            vlProcess, 
                                                                            "@([event] (uvm_pkg::uvm_objection.m_events[uvm_pkg::uvm_objection.obj]).raised)", 
                                                                            "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 
                                                                            1078);
            if ((VlNull{} != this->__PVT__m_events.at(obj))) {
                VL_NULL_CHECK(this->__PVT__m_events
                              .at(obj), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 1078)->__PVT__raised.clearFired();
            }
        }
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.resumption(
                                                                        vlProcess, 
                                                                        "@([event] (uvm_pkg::uvm_objection.m_events[uvm_pkg::uvm_objection.obj]).raised)", 
                                                                        "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 
                                                                        1078);
    } else if ((2U == objt_event)) {
        ::CData/*0:0*/ __VdynTrigger_h8a0a0e1f__0;
        __VdynTrigger_h8a0a0e1f__0 = 0;
        __VdynTrigger_h8a0a0e1f__0 = 0U;
        if ((VlNull{} != this->__PVT__m_events.at(obj))) {
            VL_NULL_CHECK(this->__PVT__m_events.at(obj), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 1083)->__PVT__dropped.clearFired();
        }
        while ((1U & (~ (::IData)(__VdynTrigger_h8a0a0e1f__0)))) {
            co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.evaluation(
                                                                            vlProcess, 
                                                                            "@([event] (uvm_pkg::uvm_objection.m_events[uvm_pkg::uvm_objection.obj]).dropped)", 
                                                                            "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 
                                                                            1083);
            __VdynTrigger_h8a0a0e1f__0 = (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish() && !vlSymsp->_vm_contextp__->finishPending()) 
                                          && ((VlNull{} 
                                               != this->__PVT__m_events
                                               .at(obj)) 
                                              && VL_NULL_CHECK(this->__PVT__m_events
                                                               .at(obj), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 1083)
                                              ->__PVT__dropped.isFired()));
            vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.anyTriggered(__VdynTrigger_h8a0a0e1f__0);
            co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.postUpdate(
                                                                            vlProcess, 
                                                                            "@([event] (uvm_pkg::uvm_objection.m_events[uvm_pkg::uvm_objection.obj]).dropped)", 
                                                                            "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 
                                                                            1083);
            if ((VlNull{} != this->__PVT__m_events.at(obj))) {
                VL_NULL_CHECK(this->__PVT__m_events
                              .at(obj), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 1083)->__PVT__dropped.clearFired();
            }
        }
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.resumption(
                                                                        vlProcess, 
                                                                        "@([event] (uvm_pkg::uvm_objection.m_events[uvm_pkg::uvm_objection.obj]).dropped)", 
                                                                        "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 
                                                                        1083);
    } else if ((4U == objt_event)) {
        ::CData/*0:0*/ __VdynTrigger_h35f974bf__0;
        __VdynTrigger_h35f974bf__0 = 0;
        __VdynTrigger_h35f974bf__0 = 0U;
        if ((VlNull{} != this->__PVT__m_events.at(obj))) {
            VL_NULL_CHECK(this->__PVT__m_events.at(obj), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 1088)->__PVT__all_dropped.clearFired();
        }
        while ((1U & (~ (::IData)(__VdynTrigger_h35f974bf__0)))) {
            co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.evaluation(
                                                                            vlProcess, 
                                                                            "@([event] (uvm_pkg::uvm_objection.m_events[uvm_pkg::uvm_objection.obj]).all_dropped)", 
                                                                            "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 
                                                                            1088);
            __VdynTrigger_h35f974bf__0 = (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish() && !vlSymsp->_vm_contextp__->finishPending()) 
                                          && ((VlNull{} 
                                               != this->__PVT__m_events
                                               .at(obj)) 
                                              && VL_NULL_CHECK(this->__PVT__m_events
                                                               .at(obj), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 1088)
                                              ->__PVT__all_dropped.isFired()));
            vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.anyTriggered(__VdynTrigger_h35f974bf__0);
            co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.postUpdate(
                                                                            vlProcess, 
                                                                            "@([event] (uvm_pkg::uvm_objection.m_events[uvm_pkg::uvm_objection.obj]).all_dropped)", 
                                                                            "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 
                                                                            1088);
            if ((VlNull{} != this->__PVT__m_events.at(obj))) {
                VL_NULL_CHECK(this->__PVT__m_events
                              .at(obj), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 1088)->__PVT__all_dropped.clearFired();
            }
        }
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.resumption(
                                                                        vlProcess, 
                                                                        "@([event] (uvm_pkg::uvm_objection.m_events[uvm_pkg::uvm_objection.obj]).all_dropped)", 
                                                                        "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 
                                                                        1088);
    }
    VL_NULL_CHECK(this->__PVT__m_events.atWrite(obj), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 1093)->__PVT__waiters 
        = (VL_NULL_CHECK(this->__PVT__m_events.at(obj), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 1093)
           ->__PVT__waiters - (::IData)(1U));
    if ((0U == VL_NULL_CHECK(this->__PVT__m_events.at(obj), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 1095)
         ->__PVT__waiters)) {
        this->__PVT__m_events.erase(obj);
    }
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_get_objection_total(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> obj, ::IData/*31:0*/ &get_objection_total__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_get_objection_total\n"); );
    // Body
    if ((VlNull{} == obj)) {
        obj = this->__PVT__m_top;
    }
    get_objection_total__Vfuncrtn = ((0U != this->__PVT__m_total_count.exists(obj))
                                      ? this->__PVT__m_total_count
                                     .at(obj) : 0U);
}

void Vtb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_display_objections(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> obj, ::CData/*0:0*/ show_header, ::std::string &m_display_objections__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_display_objections\n"); );
    // Locals
    ::std::string __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefExpr_1;
    ::std::string __VlefCall_0__get_full_name;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> unnamedblk12__DOT__o;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> unnamedblk12__DOT__o__Vnext;
    ::CData/*0:0*/ unnamedblk12__DOT__o__Vmore;
    unnamedblk12__DOT__o__Vmore = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> unnamedblk12__DOT__unnamedblk13__DOT__theobj;
    ::IData/*31:0*/ unnamedblk14__DOT__i;
    unnamedblk14__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk15__DOT__i;
    ::std::string s;
    ::IData/*31:0*/ total;
    ::VlAssocArray<::std::string, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object>> list;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> curr_obj;
    ::IData/*31:0*/ depth;
    ::std::string name;
    ::std::string this_obj_name;
    ::std::string curr_obj_name;
    {
        m_display_objections__Vfuncrtn = ""s;
        s = ""s;
        total = 0U;
        list.clear();
        depth = 0U;
        name = ""s;
        this_obj_name = ""s;
        curr_obj_name = ""s;
        unnamedblk12__DOT__o__Vmore = (0U != this->__PVT__m_total_count.first(unnamedblk12__DOT__o__Vnext));
        while (unnamedblk12__DOT__o__Vmore) {
            unnamedblk12__DOT__o = unnamedblk12__DOT__o__Vnext;
            unnamedblk12__DOT__o__Vmore = (0U != this->__PVT__m_total_count.next(unnamedblk12__DOT__o__Vnext));
            unnamedblk12__DOT__unnamedblk13__DOT__theobj 
                = unnamedblk12__DOT__o;
            if (VL_LTS_III(32, 0U, this->__PVT__m_total_count
                           .at(unnamedblk12__DOT__o))) {
                VL_NULL_CHECK(unnamedblk12__DOT__unnamedblk13__DOT__theobj, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 1219)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
                list.atWrite(__VlefCall_0__get_full_name) 
                    = unnamedblk12__DOT__unnamedblk13__DOT__theobj;
            }
        }
        if ((VlNull{} == obj)) {
            obj = this->__PVT__m_top;
        }
        this->__VnoInFunc_get_objection_total(vlSymsp, obj, total);
        VL_SFORMAT_NX(s,"The total objection count is %0d\n",1
                      , '~',32,total);
        if ((0U == total)) {
            m_display_objections__Vfuncrtn = s;
            goto __Vlabel0;
        }
        s = VL_CONCATN_NNN(s, "---------------------------------------------------------\n"s);
        s = VL_CONCATN_NNN(s, "Source  Total   \n"s);
        s = VL_CONCATN_NNN(s, "Count   Count   Object\n"s);
        s = VL_CONCATN_NNN(s, "---------------------------------------------------------\n"s);
        VL_NULL_CHECK(obj, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 1246)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, this_obj_name);
        curr_obj_name = this_obj_name;
        do {
            curr_obj = list.at(curr_obj_name);
            depth = 0U;
            unnamedblk14__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk14__DOT__i, 
                              VL_LEN_IN(curr_obj_name))) {
                if ((0x2eU == VL_GETC_N(curr_obj_name,unnamedblk14__DOT__i))) {
                    depth = ((::IData)(1U) + depth);
                }
                unnamedblk14__DOT__i = ((::IData)(1U) 
                                        + unnamedblk14__DOT__i);
            }
            name = curr_obj_name;
            unnamedblk15__DOT__i = 0U;
            unnamedblk15__DOT__i = (VL_LEN_IN(curr_obj_name) 
                                    - (::IData)(1U));
            {
                while (VL_LTES_III(32, 0U, unnamedblk15__DOT__i)) {
                    if ((0x2eU == VL_GETC_N(curr_obj_name,unnamedblk15__DOT__i))) {
                        name = VL_SUBSTR_N(curr_obj_name,
                                           ((::IData)(1U) 
                                            + unnamedblk15__DOT__i),
                                           (VL_LEN_IN(curr_obj_name) 
                                            - (::IData)(1U)));
                        goto __Vlabel1;
                    }
                    unnamedblk15__DOT__i = (unnamedblk15__DOT__i 
                                            - (::IData)(1U));
                }
                __Vlabel1: ;
            }
            if ((""s == curr_obj_name)) {
                name = "uvm_top"s;
            } else {
                depth = ((::IData)(1U) + depth);
            }
            __Vtemp_1 = VL_SUBSTR_N("                                                                                   "s,0U,
                                    VL_MULS_III(32, (::IData)(2U), depth));
            s = VL_CONCATN_NNN(s, VL_SFORMATF_N_NX("%-6d  %-6d %s%s\n",4
                                                   , '~',32,
                                                   ((0U 
                                                     != this->__PVT__m_source_count.exists(curr_obj))
                                                     ? this->__PVT__m_source_count
                                                    .at(curr_obj)
                                                     : 0U)
                                                   , '~',32,
                                                   ((0U 
                                                     != this->__PVT__m_total_count.exists(curr_obj))
                                                     ? this->__PVT__m_total_count
                                                    .at(curr_obj)
                                                     : 0U)
                                                   , 'S',&(__Vtemp_1)
                                                   , 'S',&(name)) );
            __VlefExpr_1 = (0U != list.next(curr_obj_name));
        } while (((::IData)(__VlefExpr_1) && (VL_SUBSTR_N(curr_obj_name,0U,
                                                          (VL_LEN_IN(this_obj_name) 
                                                           - (::IData)(1U))) 
                                              == this_obj_name)));
        s = VL_CONCATN_NNN(s, "---------------------------------------------------------\n"s);
        m_display_objections__Vfuncrtn = s;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_convert2string\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    convert2string__Vfuncrtn = ""s;
    this->__VnoInFunc_m_display_objections(vlProcess, vlSymsp, this->__PVT__m_top, 1U, convert2string__Vfuncrtn);
}

void Vtb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_objection> tmp;
    tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_objection, vlProcess, vlSymsp, name);
    create__Vfuncrtn = tmp;
}

void Vtb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_objection"s;
}

void Vtb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_do_copy\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefExpr_0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_objection> _rhs;
    __VlefExpr_0 = VL_CAST_DYNAMIC(rhs, _rhs);
    if (VL_UNLIKELY(((1U & (~ (0U != __VlefExpr_0)))))) {
        VL_WRITEF_NX("[%0t] %%Error: uvm_objection.svh:1342: Assertion failed in %m: '$cast' failed.\n",3, 'M',vlSymsp->name(),"uvm_pkg.uvm_objection.do_copy", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 1342, "");
    }
    this->__PVT__m_source_count = VL_NULL_CHECK(_rhs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 1343)
        ->__PVT__m_source_count;
    this->__PVT__m_total_count = VL_NULL_CHECK(_rhs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 1344)
        ->__PVT__m_total_count;
    this->__PVT__m_drain_time = VL_NULL_CHECK(_rhs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 1345)
        ->__PVT__m_drain_time;
    this->__PVT__m_prop_mode = VL_NULL_CHECK(_rhs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_objection.svh", 1346)
        ->__PVT__m_prop_mode;
}

void Vtb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_objection::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_objection::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_trace_mode = 0;
    __PVT__m_source_count.atDefault() = 0;
    __PVT__m_total_count.atDefault() = 0;
    __PVT__m_drain_time.atDefault() = VL_SCOPED_RAND_RESET_Q(64, 17709275628653521742ULL, 4102563340287712520ull);
    __PVT__m_top_all_dropped = 0;
    __PVT__m_cleared = 0;
}

Vtb_top_uvm_pkg__03a__03auvm_objection::~Vtb_top_uvm_pkg__03a__03auvm_objection() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_objection::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_objection::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_objection::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_objection::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_objection::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_trace_mode:" + VL_TO_STRING(__PVT__m_trace_mode);
    out += ", m_source_count:" + VL_TO_STRING(__PVT__m_source_count);
    out += ", m_total_count:" + VL_TO_STRING(__PVT__m_total_count);
    out += ", m_drain_time:" + VL_TO_STRING(__PVT__m_drain_time);
    out += ", m_events:" + VL_TO_STRING(__PVT__m_events);
    out += ", m_top_all_dropped:" + VL_TO_STRING(__PVT__m_top_all_dropped);
    out += ", m_top:" + VL_TO_STRING(__PVT__m_top);
    out += ", m_drain_proc:" + VL_TO_STRING(__PVT__m_drain_proc);
    out += ", m_scheduled_contexts:" + VL_TO_STRING(__PVT__m_scheduled_contexts);
    out += ", m_forked_list:" + VL_TO_STRING(__PVT__m_forked_list);
    out += ", m_forked_contexts:" + VL_TO_STRING(__PVT__m_forked_contexts);
    out += ", m_prop_mode:" + VL_TO_STRING(__PVT__m_prop_mode);
    out += ", m_cleared:" + VL_TO_STRING(__PVT__m_cleared);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_report_object::to_string_middle();
    return (out);
}
