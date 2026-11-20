// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_root__Vclpkg::__VnoInFunc_get(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_root__Vclpkg::__VnoInFunc_get\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> cs;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, cs);
    VL_NULL_CHECK(cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 382)->__VnoInFunc_get_root(vlProcess, vlSymsp, get__Vfuncrtn);
}

void Vtb_top_uvm_pkg__03a__03auvm_root__Vclpkg::__VnoInFunc_m_uvm_get_root(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> &m_uvm_get_root__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_root__Vclpkg::__VnoInFunc_m_uvm_get_root\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_domain> __VlefCall_0__get_uvm_domain;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> unnamedblk234__DOT__top;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk235__DOT___local_report_object_;
    {
        if ((VlNull{} == this->__Vnontrivs.__PVT__m_inst)) {
            unnamedblk234__DOT__top = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_root, vlProcess, vlSymsp);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_top 
                = unnamedblk234__DOT__top;
            if ((unnamedblk234__DOT__top != this->__Vnontrivs.__PVT__m_inst)) {
                m_uvm_get_root__Vfuncrtn = VlNull{};
                goto __Vlabel0;
            }
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_domain__Vclpkg.__VnoInFunc_get_uvm_domain(vlProcess, vlSymsp, __VlefCall_0__get_uvm_domain);
            VL_NULL_CHECK(unnamedblk234__DOT__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 430)->__PVT__m_domain 
                = __VlefCall_0__get_uvm_domain;
        }
        if ((this->__Vnontrivs.__PVT__m_inst != vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_top)) {
            VL_NULL_CHECK(this->__Vnontrivs.__PVT__m_inst, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 433)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk235__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk235__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 433)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 3U, "UVM/BAD_TOP"s, __VlefCall_1__get_report_verbosity_level);
            __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
            if (__VlefLogAnd_3) {
                VL_NULL_CHECK(unnamedblk235__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 433)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 3U, "UVM/BAD_TOP"s, __VlefCall_2__get_report_action);
                __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_3))) {
                VL_NULL_CHECK(unnamedblk235__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 433)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "UVM/BAD_TOP"s, "The uvm_top variable has been overwritten outside of uvm_root!"s, 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh"s, 0x000001b1U, ""s, 1U);
            }
        }
        m_uvm_get_root__Vfuncrtn = this->__Vnontrivs.__PVT__m_inst;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_root"s;
}

void Vtb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_die(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_die\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCall_1__get_core_state;
    ::IData/*31:0*/ __VlefCall_0__get_core_state;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_server> l_rs;
    {
        if ((0U == vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__m_uvm_core_state.size())) {
            __VlefCall_0__get_core_state = 0U;
            __VlefCall_1__get_core_state = 0U;
        } else {
            __VlefCall_0__get_core_state = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__m_uvm_core_state.at(0U);
            __VlefCall_1__get_core_state = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__m_uvm_core_state.at(0U);
        }
        if (((8U == __VlefCall_0__get_core_state) | 
             (9U == __VlefCall_1__get_core_state))) {
            goto __Vlabel0;
        }
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_report_server__Vclpkg.__VnoInFunc_get_server(vlProcess, vlSymsp, l_rs);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__m_uvm_core_state.push_front(8U);
        this->__VnoInFunc_m_do_pre_abort(vlSymsp);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_run_test_callback__Vclpkg.__VnoInFunc_m_do_pre_abort(vlSymsp);
        {
            // Inlined CFunc: __VnoInFunc_m_do_cmdline_checks
            ::IData/*31:0*/ __Vinline_0___VnoInFunc_m_do_cmdline_checks___Vtask_get_arg_matches__Vfuncout_2511;
            __Vinline_0___VnoInFunc_m_do_cmdline_checks___Vtask_get_arg_matches__Vfuncout_2511 = 0;
            ::std::string __Vinline_0___VnoInFunc_m_do_cmdline_checks___VlefCall_5__m_uvm_string_queue_join;
            ::std::string __Vinline_0___VnoInFunc_m_do_cmdline_checks___VlefCall_4__dump;
            ::std::string __Vinline_0___VnoInFunc_m_do_cmdline_checks___VlefCall_3__dump;
            ::std::string __Vinline_0___VnoInFunc_m_do_cmdline_checks___VlefCall_2__dump;
            ::std::string __Vinline_0___VnoInFunc_m_do_cmdline_checks___VlefCall_1__dump;
            ::IData/*31:0*/ __Vinline_0___VnoInFunc_m_do_cmdline_checks___VlefCall_0__get_arg_matches;
            ::VlQueue<::std::string> __Vinline_0___VnoInFunc_m_do_cmdline_checks_unnamedblk247__DOT__msgs;
            ::VlQueue<::std::string> __Vinline_0___VnoInFunc_m_do_cmdline_checks_dump_args;
            __Vinline_0___VnoInFunc_m_do_cmdline_checks_dump_args.clear();
            __Vinline_0___VnoInFunc_m_do_cmdline_checks_dump_args.atDefault().clear();
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_cmdline_set_verbosity__Vclpkg.__VnoInFunc_check(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root>{this});
            VL_NULL_CHECK(this->__PVT__clp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 861)->__VnoInFunc_get_arg_matches(vlSymsp, "+UVM_DUMP_REPORT_ARGS"s, __Vinline_0___VnoInFunc_m_do_cmdline_checks_dump_args, __Vinline_0___VnoInFunc_m_do_cmdline_checks___Vtask_get_arg_matches__Vfuncout_2511);
            __Vinline_0___VnoInFunc_m_do_cmdline_checks___VlefCall_0__get_arg_matches 
                = __Vinline_0___VnoInFunc_m_do_cmdline_checks___Vtask_get_arg_matches__Vfuncout_2511;
            if (VL_UNLIKELY(((0U != __Vinline_0___VnoInFunc_m_do_cmdline_checks___VlefCall_0__get_arg_matches)))) {
                __Vinline_0___VnoInFunc_m_do_cmdline_checks_unnamedblk247__DOT__msgs.clear();
                __Vinline_0___VnoInFunc_m_do_cmdline_checks_unnamedblk247__DOT__msgs.atDefault().clear();
                __Vinline_0___VnoInFunc_m_do_cmdline_checks_unnamedblk247__DOT__msgs.push_back("\n!!! UVM_CMDLINE_NO_DPI IS DEFINED !!!"s);
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_cmdline_verbosity__Vclpkg.__VnoInFunc_dump(vlSymsp, __Vinline_0___VnoInFunc_m_do_cmdline_checks___VlefCall_1__dump);
                __Vinline_0___VnoInFunc_m_do_cmdline_checks_unnamedblk247__DOT__msgs.push_back(__Vinline_0___VnoInFunc_m_do_cmdline_checks___VlefCall_1__dump);
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_cmdline_set_verbosity__Vclpkg.__VnoInFunc_dump(vlProcess, vlSymsp, __Vinline_0___VnoInFunc_m_do_cmdline_checks___VlefCall_2__dump);
                __Vinline_0___VnoInFunc_m_do_cmdline_checks_unnamedblk247__DOT__msgs.push_back(__Vinline_0___VnoInFunc_m_do_cmdline_checks___VlefCall_2__dump);
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_cmdline_set_action__Vclpkg.__VnoInFunc_dump(vlProcess, vlSymsp, __Vinline_0___VnoInFunc_m_do_cmdline_checks___VlefCall_3__dump);
                __Vinline_0___VnoInFunc_m_do_cmdline_checks_unnamedblk247__DOT__msgs.push_back(__Vinline_0___VnoInFunc_m_do_cmdline_checks___VlefCall_3__dump);
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_cmdline_set_severity__Vclpkg.__VnoInFunc_dump(vlProcess, vlSymsp, __Vinline_0___VnoInFunc_m_do_cmdline_checks___VlefCall_4__dump);
                __Vinline_0___VnoInFunc_m_do_cmdline_checks_unnamedblk247__DOT__msgs.push_back(__Vinline_0___VnoInFunc_m_do_cmdline_checks___VlefCall_4__dump);
                this->__Vfunc_m_uvm_string_queue_join__Vfuncout_1283 = ""s;
                this->__Vfunc_m_uvm_string_queue_join__Vfuncout_1283 
                    = VL_CVT_PACK_STR_ND(VL_STREAMR_NRI(0, __Vinline_0___VnoInFunc_m_do_cmdline_checks_unnamedblk247__DOT__msgs, 1U));
                __Vinline_0___VnoInFunc_m_do_cmdline_checks___VlefCall_5__m_uvm_string_queue_join 
                    = this->__Vfunc_m_uvm_string_queue_join__Vfuncout_1283;
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "REPORTARGS"s, VL_SFORMATF_N_NX("\n--- UVM Reporting Argument Summary ---\n%s\n",1
                                                                                , 'S',&(__Vinline_0___VnoInFunc_m_do_cmdline_checks___VlefCall_5__m_uvm_string_queue_join)) , 0U, ""s, 0U, ""s, 0U);
            }
        }
        VL_NULL_CHECK(l_rs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 179)->__VnoInFunc_report_summarize(vlProcess, vlSymsp, 0x80000001U);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__m_uvm_core_state.push_front(9U);
        vlProcess->disableFork();
        VL_FINISH_MT("/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 183, "");
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_get_finish_on_completion(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &get_finish_on_completion__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_get_finish_on_completion\n"); );
    // Body
    get_finish_on_completion__Vfuncrtn = this->__PVT__finish_on_completion;
}

void Vtb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_phase_started(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_phase_started\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCall_0__get_severity_count;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_server> unnamedblk1__DOT__srvr;
    if ((phase == vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__end_of_elaboration_ph)) {
        this->__VnoInFunc_do_resolve_bindings(vlProcess, vlSymsp);
        if (this->__PVT__enable_print_topology) {
            this->__VnoInFunc_print_topology(vlProcess, vlSymsp, VlNull{});
        }
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_report_server__Vclpkg.__VnoInFunc_get_server(vlProcess, vlSymsp, unnamedblk1__DOT__srvr);
        VL_NULL_CHECK(unnamedblk1__DOT__srvr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 341)->__VnoInFunc_get_severity_count(vlSymsp, 2U, __VlefCall_0__get_severity_count);
        if (VL_UNLIKELY((VL_LTS_III(32, 0U, __VlefCall_0__get_severity_count)))) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "BUILDERR"s, "stopping due to build errors"s, 0U, ""s, 0U, ""s, 0U);
        }
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_end_of_elaboration_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_end_of_elaboration_phase\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component_proxy> p;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_top_down_visitor_adapter_> adapter;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> cs;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_visitor_> v;
    p = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_component_proxy, vlProcess, vlSymsp, "proxy"s);
    adapter = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_top_down_visitor_adapter_, vlProcess, vlSymsp, "adapter"s);
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, cs);
    VL_NULL_CHECK(cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 359)->__VnoInFunc_get_component_visitor(vlProcess, vlSymsp, v);
    VL_NULL_CHECK(adapter, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 360)->__VnoInFunc_accept(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root>{this}, v, p, 1U);
}

void Vtb_top_uvm_pkg__03a__03auvm_root::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    Vtb_top_uvm_pkg__03a__03auvm_component::init(vlProcess, vlSymsp, "__top__"s, VlNull{});
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_root::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    this->__PVT__finish_on_completion = 1U;
    this->__PVT__enable_print_topology = 0U;
    this->__PVT__phase_timeout = 0x0000085e0abb6000ULL;
    ::CData/*0:0*/ __VlefLogAnd_2;
    ::IData/*31:0*/ __VlefCall_1__get_report_action;
    ::IData/*31:0*/ __VlefCall_0__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk233__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_handler> rh;
    {
        /*super.new*/;
        rh = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_report_handler, vlProcess, vlSymsp, "reporter"s);
        this->__VnoInFunc_set_report_handler(vlSymsp, rh);
        if ((VlNull{} != vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__Vnontrivs.__PVT__m_inst)) {
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__Vnontrivs.__PVT__m_inst, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 401)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk233__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk233__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 401)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 3U, "UVM/ROOT/MULTI"s, __VlefCall_0__get_report_verbosity_level);
            __VlefLogAnd_2 = VL_LTES_III(32, 0U, __VlefCall_0__get_report_verbosity_level);
            if (__VlefLogAnd_2) {
                VL_NULL_CHECK(unnamedblk233__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 401)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 3U, "UVM/ROOT/MULTI"s, __VlefCall_1__get_report_action);
                __VlefLogAnd_2 = (0U != __VlefCall_1__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_2))) {
                VL_NULL_CHECK(unnamedblk233__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 401)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "UVM/ROOT/MULTI"s, "Attempting to construct multiple roots"s, 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh"s, 0x00000191U, ""s, 1U);
            }
            goto __Vlabel0;
        }
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__Vnontrivs.__PVT__m_inst 
            = ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root>{this};
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg.__VnoInFunc_get_inst(vlProcess, vlSymsp, this->__PVT__clp);
        {
            // Inlined CFunc: __VnoInFunc_m_do_cl_init
            ::IData/*31:0*/ __Vinline_0___VnoInFunc_m_do_cl_init_unnamedblk241__DOT__i;
            __Vinline_0___VnoInFunc_m_do_cl_init_unnamedblk241__DOT__i = 0;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_cmdline_set_verbosity__Vclpkg.__VnoInFunc_init(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root>{this});
            __Vinline_0___VnoInFunc_m_do_cl_init_unnamedblk241__DOT__i = 0U;
            while (VL_LTS_III(32, __Vinline_0___VnoInFunc_m_do_cl_init_unnamedblk241__DOT__i, vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_cmdline_set_verbosity__Vclpkg.__Vnontrivs.__PVT__settings.size())) {
                if ((("time"s == VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_cmdline_set_verbosity__Vclpkg.__Vnontrivs.__PVT__settings.at(__Vinline_0___VnoInFunc_m_do_cl_init_unnamedblk241__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 798)
                      ->__PVT__phase) && (0ULL != VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_cmdline_set_verbosity__Vclpkg.__Vnontrivs.__PVT__settings.at(__Vinline_0___VnoInFunc_m_do_cl_init_unnamedblk241__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 798)
                                          ->__PVT__offset))) {
                    this->__PVT__m_time_settings.push_back(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_cmdline_set_verbosity__Vclpkg.__Vnontrivs.__PVT__settings.at(__Vinline_0___VnoInFunc_m_do_cl_init_unnamedblk241__DOT__i));
                }
                __Vinline_0___VnoInFunc_m_do_cl_init_unnamedblk241__DOT__i 
                    = ((::IData)(1U) + __Vinline_0___VnoInFunc_m_do_cl_init_unnamedblk241__DOT__i);
            }
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_cmdline_set_action__Vclpkg.__VnoInFunc_init(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root>{this});
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_cmdline_set_severity__Vclpkg.__VnoInFunc_init(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root>{this});
        }
        this->__VnoInFunc_m_set_cl_msg_args(vlProcess, vlSymsp);
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_report_header(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_report_header\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_get_arg_matches__Vfuncout_2500;
    __Vtask_get_arg_matches__Vfuncout_2500 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_6__m_uvm_string_queue_join;
    ::CData/*0:0*/ __VlefLogAnd_5;
    ::IData/*31:0*/ __VlefCall_4__get_report_action;
    ::IData/*31:0*/ __VlefCall_3__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_2__uvm_get_report_object;
    ::std::string __VlefCall_1__uvm_revision_string;
    ::IData/*31:0*/ __VlefCall_0__get_arg_matches;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk236__DOT___local_report_object_;
    ::VlQueue<::std::string> q;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_server> srvr;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_cmdline_processor> clp;
    ::VlQueue<::std::string> args;
    {
        q.clear();
        q.atDefault().clear();
        args.clear();
        args.atDefault().clear();
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_report_server__Vclpkg.__VnoInFunc_get_server(vlProcess, vlSymsp, srvr);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg.__VnoInFunc_get_inst(vlProcess, vlSymsp, clp);
        VL_NULL_CHECK(clp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 448)->__VnoInFunc_get_arg_matches(vlSymsp, "+UVM_NO_RELNOTES"s, args, __Vtask_get_arg_matches__Vfuncout_2500);
        __VlefCall_0__get_arg_matches = __Vtask_get_arg_matches__Vfuncout_2500;
        if ((0U != __VlefCall_0__get_arg_matches)) {
            goto __Vlabel0;
        }
        if ((1U & (~ (::IData)(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__PVT__m_relnotes_done)))) {
            q.push_back("\n  ***********       IMPORTANT RELEASE NOTES         ************\n"s);
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__PVT__m_relnotes_done = 1U;
            q.push_back("\n  This implementation of the UVM Library deviates from the 1800.2-2020\n"s);
            q.push_back("  standard.  See the DEVIATIONS.md file contained in the release\n"s);
            q.push_back("  for more details.\n"s);
        }
        q.push_back("\n----------------------------------------------------------------\n"s);
        __VlefCall_1__uvm_revision_string = "Accellera:1800.2:UVM:2020.3.1"s;
        q.push_back(VL_CONCATN_NNN(__VlefCall_1__uvm_revision_string, "\n"s));
        q.push_back("\n"s);
        q.push_back("All copyright owners for this kit are listed in NOTICE.txt\n"s);
        q.push_back("All Rights Reserved Worldwide\n"s);
        q.push_back("----------------------------------------------------------------\n"s);
        if (vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__PVT__m_relnotes_done) {
            q.push_back("\n      (Specify +UVM_NO_RELNOTES to turn off this notice)\n"s);
        }
        this->__VnoInFunc_uvm_get_report_object(vlSymsp, __VlefCall_2__uvm_get_report_object);
        VL_NULL_CHECK(__VlefCall_2__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 476)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk236__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk236__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 476)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "UVM/RELNOTES"s, __VlefCall_3__get_report_verbosity_level);
        __VlefLogAnd_5 = VL_LTES_III(32, 0x00000064U, __VlefCall_3__get_report_verbosity_level);
        if (__VlefLogAnd_5) {
            VL_NULL_CHECK(unnamedblk236__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 476)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "UVM/RELNOTES"s, __VlefCall_4__get_report_action);
            __VlefLogAnd_5 = (0U != __VlefCall_4__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_5))) {
            this->__Vfunc_m_uvm_string_queue_join__Vfuncout_1274 = ""s;
            this->__Vfunc_m_uvm_string_queue_join__Vfuncout_1274 
                = VL_CVT_PACK_STR_ND(VL_STREAMR_NRI(0, q, 1U));
            __VlefCall_6__m_uvm_string_queue_join = this->__Vfunc_m_uvm_string_queue_join__Vfuncout_1274;
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "UVM/RELNOTES"s, 
                                              VL_CVT_PACK_STR_NN(__VlefCall_6__m_uvm_string_queue_join), 0x00000064U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh"s, 0x000001dcU, ""s, 1U);
        }
        __Vlabel0: ;
    }
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_run_test(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string test_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_run_test\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::CData/*0:0*/ __VlefCall_11__get_finish_on_completion;
    ::std::string __VlefCall_10__get_type_name;
    ::std::string __VlefCall_9__get_type_name;
    ::CData/*0:0*/ __VlefLogAnd_8;
    ::IData/*31:0*/ __VlefCall_7__get_report_action;
    ::IData/*31:0*/ __VlefCall_6__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_5__uvm_get_report_object;
    ::IData/*31:0*/ __VlefExpr_4;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk237__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk238__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase_hopper> unnamedblk239__DOT__hopper;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_server> l_rs;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_factory> factory;
    ::CData/*0:0*/ testname_plusarg;
    ::std::string msg;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> uvm_test_top;
    {
        testname_plusarg = 0U;
        msg = ""s;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_run_test_callback__Vclpkg.__VnoInFunc_m_do_pre_run_test(vlSymsp);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_factory__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, factory);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__m_uvm_core_state.push_front(4U);
        testname_plusarg = 0U;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__VnoInFunc_m_init_objections(vlProcess, vlSymsp);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_process_guard_base__Vclpkg.__VnoInFunc_m_init_process_guards(vlProcess, vlSymsp);
        {
            // Inlined CFunc: __VnoInFunc_m_do_dump_args
            ::IData/*31:0*/ __Vinline_0___VnoInFunc_m_do_dump_args___Vtask_get_arg_matches__Vfuncout_2545;
            __Vinline_0___VnoInFunc_m_do_dump_args___Vtask_get_arg_matches__Vfuncout_2545 = 0;
            ::VlQueue<::std::string> __Vinline_0___VnoInFunc_m_do_dump_args___Vtask_get_args__args_2546;
            ::std::string __Vinline_0___VnoInFunc_m_do_dump_args___Vtemp_1;
            ::IData/*31:0*/ __Vinline_0___VnoInFunc_m_do_dump_args___VlefCall_0__get_arg_matches;
            ::IData/*31:0*/ __Vinline_0___VnoInFunc_m_do_dump_args_unnamedblk260__DOT__idx;
            __Vinline_0___VnoInFunc_m_do_dump_args_unnamedblk260__DOT__idx = 0;
            ::IData/*31:0*/ __Vinline_0___VnoInFunc_m_do_dump_args_unnamedblk260__DOT__idx__Vloopsize;
            __Vinline_0___VnoInFunc_m_do_dump_args_unnamedblk260__DOT__idx__Vloopsize = 0;
            ::VlQueue<::std::string> __Vinline_0___VnoInFunc_m_do_dump_args_dump_args;
            ::VlQueue<::std::string> __Vinline_0___VnoInFunc_m_do_dump_args_all_args;
            __Vinline_0___VnoInFunc_m_do_dump_args_dump_args.clear();
            __Vinline_0___VnoInFunc_m_do_dump_args_dump_args.atDefault().clear();
            __Vinline_0___VnoInFunc_m_do_dump_args_all_args.clear();
            __Vinline_0___VnoInFunc_m_do_dump_args_all_args.atDefault().clear();
            VL_NULL_CHECK(this->__PVT__clp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 1239)->__VnoInFunc_get_arg_matches(vlSymsp, "+UVM_DUMP_CMDLINE_ARGS"s, __Vinline_0___VnoInFunc_m_do_dump_args_dump_args, __Vinline_0___VnoInFunc_m_do_dump_args___Vtask_get_arg_matches__Vfuncout_2545);
            __Vinline_0___VnoInFunc_m_do_dump_args___VlefCall_0__get_arg_matches 
                = __Vinline_0___VnoInFunc_m_do_dump_args___Vtask_get_arg_matches__Vfuncout_2545;
            if (VL_UNLIKELY(((0U != __Vinline_0___VnoInFunc_m_do_dump_args___VlefCall_0__get_arg_matches)))) {
                VL_NULL_CHECK(this->__PVT__clp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 1240)->__VnoInFunc_get_args(vlSymsp, __Vinline_0___VnoInFunc_m_do_dump_args___Vtask_get_args__args_2546);
                __Vinline_0___VnoInFunc_m_do_dump_args_all_args 
                    = __Vinline_0___VnoInFunc_m_do_dump_args___Vtask_get_args__args_2546;
                __Vinline_0___VnoInFunc_m_do_dump_args_unnamedblk260__DOT__idx = 0U;
                while (VL_LTS_III(32, __Vinline_0___VnoInFunc_m_do_dump_args_unnamedblk260__DOT__idx, __Vinline_0___VnoInFunc_m_do_dump_args_all_args.size())) {
                    __Vinline_0___VnoInFunc_m_do_dump_args_unnamedblk260__DOT__idx__Vloopsize 
                        = __Vinline_0___VnoInFunc_m_do_dump_args_all_args.size();
                    __Vinline_0___VnoInFunc_m_do_dump_args___Vtemp_1 
                        = __Vinline_0___VnoInFunc_m_do_dump_args_all_args.at(__Vinline_0___VnoInFunc_m_do_dump_args_unnamedblk260__DOT__idx);
                    this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "DUMPARGS"s, VL_SFORMATF_N_NX("idx=%0d arg=[%s]",2
                                                                                , '~',32,__Vinline_0___VnoInFunc_m_do_dump_args_unnamedblk260__DOT__idx
                                                                                , 'S',&(__Vinline_0___VnoInFunc_m_do_dump_args___Vtemp_1)) , 0U, ""s, 0U, ""s, 0U);
                    if ((__Vinline_0___VnoInFunc_m_do_dump_args_unnamedblk260__DOT__idx__Vloopsize 
                         <= __Vinline_0___VnoInFunc_m_do_dump_args_all_args.size())) {
                        __Vinline_0___VnoInFunc_m_do_dump_args_unnamedblk260__DOT__idx 
                            = ((::IData)(1U) + __Vinline_0___VnoInFunc_m_do_dump_args_unnamedblk260__DOT__idx);
                    }
                }
            }
        }
        this->__VnoInFunc_uvm_get_report_object(vlSymsp, __VlefCall_0__uvm_get_report_object);
        VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 549)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk237__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk237__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 549)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "NO_DPI_USED"s, __VlefCall_1__get_report_verbosity_level);
        __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
        if (__VlefLogAnd_3) {
            VL_NULL_CHECK(unnamedblk237__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 549)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "NO_DPI_USED"s, __VlefCall_2__get_report_action);
            __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_3))) {
            this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "NO_DPI_USED"s, "We are thinking of removing support for UVM_NO_DPI.  Please try this test without it and evaluate the impact"s, 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh"s, 0x00000225U, ""s, 1U);
        }
        __VlefExpr_4 = VL_VALUEPLUSARGS_INN(64, "UVM_TESTNAME=%s"s, 
                                            test_name);
        if ((0U != __VlefExpr_4)) {
            this->__VnoInFunc_uvm_get_report_object(vlSymsp, __VlefCall_5__uvm_get_report_object);
            VL_NULL_CHECK(__VlefCall_5__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 552)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk238__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk238__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 552)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "NO_DPI_TSTNAME"s, __VlefCall_6__get_report_verbosity_level);
            __VlefLogAnd_8 = VL_LTES_III(32, 0U, __VlefCall_6__get_report_verbosity_level);
            if (__VlefLogAnd_8) {
                VL_NULL_CHECK(unnamedblk238__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 552)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "NO_DPI_TSTNAME"s, __VlefCall_7__get_report_action);
                __VlefLogAnd_8 = (0U != __VlefCall_7__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_8))) {
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "NO_DPI_TSTNAME"s, "UVM_NO_DPI defined--getting UVM_TESTNAME directly, without DPI"s, 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh"s, 0x00000228U, ""s, 1U);
            }
            testname_plusarg = 1U;
        }
        if ((""s != test_name)) {
            if (VL_UNLIKELY(((0U != Vtb_top_uvm_pkg__03a__03auvm_component::__PVT__m_children.exists("uvm_test_top"s))))) {
                this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "TTINST"s, "An uvm_test_top already exists via a previous call to run_test"s, 0U, ""s, 0U, ""s, 0U);
                co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.delay(0ULL, 
                                                                           vlProcess, 
                                                                           "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 
                                                                           564);
            }
            VL_NULL_CHECK(factory, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 566)->__VnoInFunc_create_component_by_name(vlProcess, vlSymsp, test_name, ""s, "uvm_test_top"s, VlNull{}, uvm_test_top);
            if (VL_UNLIKELY(((VlNull{} == uvm_test_top)))) {
                msg = ((::IData)(testname_plusarg) ? 
                       VL_CONCATN_NNN("command line +UVM_TESTNAME="s, test_name)
                        : VL_CONCATN_NNN(VL_CONCATN_NNN("call to run_test("s, test_name), ")"s));
                this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "INVTST"s, 
                                                   VL_CVT_PACK_STR_NN(
                                                                      VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Requested test from "s, msg), " not found."s)), 0U, ""s, 0U, ""s, 0U);
            }
        }
        if (VL_UNLIKELY(((0U == Vtb_top_uvm_pkg__03a__03auvm_component::__PVT__m_children.size())))) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "NOCOMP"s, "No components instantiated. You must either instantiate at least one component before calling run_test or use run_test to do so. To run a test using run_test, use +UVM_TESTNAME or supply the test name in the argument to run_test(). Exiting simulation."s, 0U, ""s, 0U, ""s, 0U);
            goto __Vlabel0;
        }
        if (VL_UNLIKELY(((""s == test_name)))) {
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "RNTST"s, "Running test ..."s, 0x00000064U, ""s, 0U, ""s, 0U);
        } else {
            VL_NULL_CHECK(uvm_test_top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 593)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_9__get_type_name);
            if ((test_name == __VlefCall_9__get_type_name)) {
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "RNTST"s, 
                                                  VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Running test "s, test_name), "..."s)), 0x00000064U, ""s, 0U, ""s, 0U);
            } else {
                VL_NULL_CHECK(uvm_test_top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 600)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_10__get_type_name);
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "RNTST"s, 
                                                  VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Running test "s, __VlefCall_10__get_type_name), " (via factory override for test \""s), test_name), "\")..."s)), 0x00000064U, ""s, 0U, ""s, 0U);
            }
        }
        {
            ::VlForkSync __Vfork_1__sync;
            __Vfork_1__sync.init(1U, vlProcess);
            this->__VnoInFunc_run_test____Vfork_1__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vfork_1__sync, unnamedblk239__DOT__hopper);
            co_await __Vfork_1__sync.join(vlProcess, 
                                          "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 
                                          610);
        }
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__m_uvm_core_state.push_front(6U);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_report_server__Vclpkg.__VnoInFunc_get_server(vlProcess, vlSymsp, l_rs);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_run_test_callback__Vclpkg.__VnoInFunc_m_do_post_run_test(vlSymsp);
        {
            // Inlined CFunc: __VnoInFunc_m_do_cmdline_checks
            ::IData/*31:0*/ __Vinline_1___VnoInFunc_m_do_cmdline_checks___Vtask_get_arg_matches__Vfuncout_2511;
            __Vinline_1___VnoInFunc_m_do_cmdline_checks___Vtask_get_arg_matches__Vfuncout_2511 = 0;
            ::std::string __Vinline_1___VnoInFunc_m_do_cmdline_checks___VlefCall_5__m_uvm_string_queue_join;
            ::std::string __Vinline_1___VnoInFunc_m_do_cmdline_checks___VlefCall_4__dump;
            ::std::string __Vinline_1___VnoInFunc_m_do_cmdline_checks___VlefCall_3__dump;
            ::std::string __Vinline_1___VnoInFunc_m_do_cmdline_checks___VlefCall_2__dump;
            ::std::string __Vinline_1___VnoInFunc_m_do_cmdline_checks___VlefCall_1__dump;
            ::IData/*31:0*/ __Vinline_1___VnoInFunc_m_do_cmdline_checks___VlefCall_0__get_arg_matches;
            ::VlQueue<::std::string> __Vinline_1___VnoInFunc_m_do_cmdline_checks_unnamedblk247__DOT__msgs;
            ::VlQueue<::std::string> __Vinline_1___VnoInFunc_m_do_cmdline_checks_dump_args;
            __Vinline_1___VnoInFunc_m_do_cmdline_checks_dump_args.clear();
            __Vinline_1___VnoInFunc_m_do_cmdline_checks_dump_args.atDefault().clear();
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_cmdline_set_verbosity__Vclpkg.__VnoInFunc_check(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root>{this});
            VL_NULL_CHECK(this->__PVT__clp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 861)->__VnoInFunc_get_arg_matches(vlSymsp, "+UVM_DUMP_REPORT_ARGS"s, __Vinline_1___VnoInFunc_m_do_cmdline_checks_dump_args, __Vinline_1___VnoInFunc_m_do_cmdline_checks___Vtask_get_arg_matches__Vfuncout_2511);
            __Vinline_1___VnoInFunc_m_do_cmdline_checks___VlefCall_0__get_arg_matches 
                = __Vinline_1___VnoInFunc_m_do_cmdline_checks___Vtask_get_arg_matches__Vfuncout_2511;
            if (VL_UNLIKELY(((0U != __Vinline_1___VnoInFunc_m_do_cmdline_checks___VlefCall_0__get_arg_matches)))) {
                __Vinline_1___VnoInFunc_m_do_cmdline_checks_unnamedblk247__DOT__msgs.clear();
                __Vinline_1___VnoInFunc_m_do_cmdline_checks_unnamedblk247__DOT__msgs.atDefault().clear();
                __Vinline_1___VnoInFunc_m_do_cmdline_checks_unnamedblk247__DOT__msgs.push_back("\n!!! UVM_CMDLINE_NO_DPI IS DEFINED !!!"s);
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_cmdline_verbosity__Vclpkg.__VnoInFunc_dump(vlSymsp, __Vinline_1___VnoInFunc_m_do_cmdline_checks___VlefCall_1__dump);
                __Vinline_1___VnoInFunc_m_do_cmdline_checks_unnamedblk247__DOT__msgs.push_back(__Vinline_1___VnoInFunc_m_do_cmdline_checks___VlefCall_1__dump);
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_cmdline_set_verbosity__Vclpkg.__VnoInFunc_dump(vlProcess, vlSymsp, __Vinline_1___VnoInFunc_m_do_cmdline_checks___VlefCall_2__dump);
                __Vinline_1___VnoInFunc_m_do_cmdline_checks_unnamedblk247__DOT__msgs.push_back(__Vinline_1___VnoInFunc_m_do_cmdline_checks___VlefCall_2__dump);
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_cmdline_set_action__Vclpkg.__VnoInFunc_dump(vlProcess, vlSymsp, __Vinline_1___VnoInFunc_m_do_cmdline_checks___VlefCall_3__dump);
                __Vinline_1___VnoInFunc_m_do_cmdline_checks_unnamedblk247__DOT__msgs.push_back(__Vinline_1___VnoInFunc_m_do_cmdline_checks___VlefCall_3__dump);
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_cmdline_set_severity__Vclpkg.__VnoInFunc_dump(vlProcess, vlSymsp, __Vinline_1___VnoInFunc_m_do_cmdline_checks___VlefCall_4__dump);
                __Vinline_1___VnoInFunc_m_do_cmdline_checks_unnamedblk247__DOT__msgs.push_back(__Vinline_1___VnoInFunc_m_do_cmdline_checks___VlefCall_4__dump);
                this->__Vfunc_m_uvm_string_queue_join__Vfuncout_1283 = ""s;
                this->__Vfunc_m_uvm_string_queue_join__Vfuncout_1283 
                    = VL_CVT_PACK_STR_ND(VL_STREAMR_NRI(0, __Vinline_1___VnoInFunc_m_do_cmdline_checks_unnamedblk247__DOT__msgs, 1U));
                __Vinline_1___VnoInFunc_m_do_cmdline_checks___VlefCall_5__m_uvm_string_queue_join 
                    = this->__Vfunc_m_uvm_string_queue_join__Vfuncout_1283;
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "REPORTARGS"s, VL_SFORMATF_N_NX("\n--- UVM Reporting Argument Summary ---\n%s\n",1
                                                                                , 'S',&(__Vinline_1___VnoInFunc_m_do_cmdline_checks___VlefCall_5__m_uvm_string_queue_join)) , 0U, ""s, 0U, ""s, 0U);
            }
        }
        VL_NULL_CHECK(l_rs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 628)->__VnoInFunc_report_summarize(vlProcess, vlSymsp, 0x80000001U);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__m_uvm_core_state.push_front(7U);
        this->__VnoInFunc_get_finish_on_completion(vlSymsp, __VlefCall_11__get_finish_on_completion);
        if (VL_UNLIKELY((__VlefCall_11__get_finish_on_completion))) {
            vlProcess->disableFork();
            VL_FINISH_MT("/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 633, "");
        }
        __Vlabel0: ;
    }
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_run_test____Vfork_1__0(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlForkSync __Vfork_1__sync, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase_hopper> &unnamedblk239__DOT__hopper) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_run_test____Vfork_1__0\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vfork_1__sync.onKill(vlProcess);
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_phase_hopper__Vclpkg.__VnoInFunc_get_global_hopper(vlProcess, vlSymsp, unnamedblk239__DOT__hopper);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__m_uvm_core_state.push_front(5U);
    co_await VL_NULL_CHECK(unnamedblk239__DOT__hopper, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 616)->__VnoInFunc_run_phases(vlProcess, vlSymsp);
    vlProcess->state(VlProcess::FINISHED);
    __Vfork_1__sync.done("/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 
                         611);
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_find_all(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string comp_match, ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component>> &comps, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> comp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_find_all\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    if ((VlNull{} == comp)) {
        comp = ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root>{this};
    }
    this->__VnoInFunc_m_find_all_recurse(vlProcess, vlSymsp, comp_match, comps, comp);
}

void Vtb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_print_topology(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_print_topology\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk240__DOT___local_report_object_;
    {
        if (VL_UNLIKELY(((0U == Vtb_top_uvm_pkg__03a__03auvm_component::__PVT__m_children.size())))) {
            this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "EMTCOMP"s, "print_topology - No UVM components to print."s, 0U, ""s, 0U, ""s, 0U);
            goto __Vlabel0;
        }
        if ((VlNull{} == printer)) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_printer__Vclpkg.__VnoInFunc_get_default(vlProcess, vlSymsp, printer);
        }
        this->__VnoInFunc_uvm_get_report_object(vlSymsp, __VlefCall_0__uvm_get_report_object);
        VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 699)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk240__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk240__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 699)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "UVMTOP"s, __VlefCall_1__get_report_verbosity_level);
        __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
        if (__VlefLogAnd_3) {
            VL_NULL_CHECK(unnamedblk240__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 699)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "UVMTOP"s, __VlefCall_2__get_report_action);
            __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_3))) {
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "UVMTOP"s, "UVM testbench topology:"s, 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh"s, 0x000002bbU, ""s, 1U);
        }
        this->__VnoInFunc_print(vlProcess, vlSymsp, printer);
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_set_timeout(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ timeout, ::CData/*0:0*/ overridable) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_set_timeout\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    {
        if (VL_UNLIKELY(((1U & (~ (::IData)(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__PVT__set_timeout__Vstatic__m_uvm_timeout_overridable)))))) {
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "NOTIMOUTOVR"s, VL_SFORMATF_N_NX("The global timeout setting of %0d is not overridable to %0d due to a previous setting.",2
                                                                                , '#',64,this->__PVT__phase_timeout
                                                                                , '#',64,timeout) , 0U, ""s, 0U, ""s, 0U);
            goto __Vlabel0;
        }
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__PVT__set_timeout__Vstatic__m_uvm_timeout_overridable 
            = overridable;
        this->__PVT__phase_timeout = timeout;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_find_all_recurse(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string comp_match, ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component>> &comps, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> comp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_find_all_recurse\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_get_first_child__Vfuncout_2501;
    __Vtask_get_first_child__Vfuncout_2501 = 0;
    ::IData/*31:0*/ __Vtask_get_next_child__Vfuncout_2502;
    __Vtask_get_next_child__Vfuncout_2502 = 0;
    ::IData/*31:0*/ __Vfunc_uvm_is_match____VlefCall_0__uvm_re_match_1277;
    __Vfunc_uvm_is_match____VlefCall_0__uvm_re_match_1277 = 0;
    ::IData/*31:0*/ __Vfunc_uvm_re_match__Vfuncout_1278;
    __Vfunc_uvm_re_match__Vfuncout_1278 = 0;
    ::IData/*31:0*/ __Vfunc_uvm_re_match____Vincrement1_1282;
    __Vfunc_uvm_re_match____Vincrement1_1282 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_5__get_name;
    ::CData/*0:0*/ __VlefCall_4__uvm_is_match;
    ::std::string __VlefCall_3__get_full_name;
    ::IData/*31:0*/ __VlefCall_2__get_next_child;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> __VlefCall_1__get_child;
    ::IData/*31:0*/ __VlefCall_0__get_first_child;
    ::std::string name;
    name = ""s;
    VL_NULL_CHECK(comp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 729)->__VnoInFunc_get_first_child(vlSymsp, name, __Vtask_get_first_child__Vfuncout_2501);
    __VlefCall_0__get_first_child = __Vtask_get_first_child__Vfuncout_2501;
    if ((0U != __VlefCall_0__get_first_child)) {
        do {
            VL_NULL_CHECK(comp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 732)->__VnoInFunc_get_child(vlProcess, vlSymsp, name, __VlefCall_1__get_child);
            this->__VnoInFunc_m_find_all_recurse(vlProcess, vlSymsp, comp_match, comps, __VlefCall_1__get_child);
            VL_NULL_CHECK(comp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 734)->__VnoInFunc_get_next_child(vlSymsp, name, __Vtask_get_next_child__Vfuncout_2502);
            __VlefCall_2__get_next_child = __Vtask_get_next_child__Vfuncout_2502;
        } while ((0U != __VlefCall_2__get_next_child));
    }
    VL_NULL_CHECK(comp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 737)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
    this->__Vfunc_uvm_is_match__str_1276 = VL_CVT_PACK_STR_NN(__VlefCall_3__get_full_name);
    this->__Vfunc_uvm_is_match__expr_1275 = comp_match;
    this->__Vfunc_uvm_re_match__str_1280 = this->__Vfunc_uvm_is_match__str_1276;
    this->__Vfunc_uvm_re_match__re_1279 = this->__Vfunc_uvm_is_match__expr_1275;
    __Vfunc_uvm_re_match____Vincrement1_1282 = 0U;
    {
        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e = 0U;
        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s = 0U;
        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es = 0U;
        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss = 0U;
        if ((0U == VL_LEN_IN(this->__Vfunc_uvm_re_match__re_1279))) {
            __Vfunc_uvm_re_match__Vfuncout_1278 = 0U;
            goto __Vlabel0;
        }
        if ((0x5eU == VL_GETC_N(this->__Vfunc_uvm_re_match__re_1279,0U))) {
            this->__Vfunc_uvm_re_match__re_1279 = VL_SUBSTR_N(this->__Vfunc_uvm_re_match__re_1279,1U,
                                                              (VL_LEN_IN(this->__Vfunc_uvm_re_match__re_1279) 
                                                               - (::IData)(1U)));
        }
        while (((vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                 != VL_LEN_IN(this->__Vfunc_uvm_re_match__str_1280)) 
                & (0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__re_1279,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
            if (((VL_GETC_N(this->__Vfunc_uvm_re_match__re_1279,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                  != VL_GETC_N(this->__Vfunc_uvm_re_match__str_1280,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                 & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__re_1279,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                __Vfunc_uvm_re_match__Vfuncout_1278 = 1U;
                goto __Vlabel0;
            }
            vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
            vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
        }
        while ((vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                != VL_LEN_IN(this->__Vfunc_uvm_re_match__str_1280))) {
            if ((0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__re_1279,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                    = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                if ((vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                     == VL_LEN_IN(this->__Vfunc_uvm_re_match__re_1279))) {
                    __Vfunc_uvm_re_match__Vfuncout_1278 = 0U;
                    goto __Vlabel0;
                }
                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es 
                    = vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e;
                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                    = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
            } else if (((VL_GETC_N(this->__Vfunc_uvm_re_match__re_1279,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                         == VL_GETC_N(this->__Vfunc_uvm_re_match__str_1280,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                        | (0x3fU == VL_GETC_N(this->__Vfunc_uvm_re_match__re_1279,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                    = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                    = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
            } else {
                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                    = vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es;
                __Vfunc_uvm_re_match____Vincrement1_1282 
                    = vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss;
                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                    = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss);
                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                    = __Vfunc_uvm_re_match____Vincrement1_1282;
            }
        }
        while ((VL_LTS_III(32, vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                           VL_LEN_IN(this->__Vfunc_uvm_re_match__re_1279)) 
                & (0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__re_1279,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
            vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
        }
        __Vfunc_uvm_re_match__Vfuncout_1278 = ((vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                == 
                                                VL_LEN_IN(this->__Vfunc_uvm_re_match__re_1279))
                                                ? 0U
                                                : 1U);
        __Vlabel0: ;
    }
    __Vfunc_uvm_is_match____VlefCall_0__uvm_re_match_1277 
        = __Vfunc_uvm_re_match__Vfuncout_1278;
    __VlefCall_4__uvm_is_match = (0U == __Vfunc_uvm_is_match____VlefCall_0__uvm_re_match_1277);
    if (__VlefCall_4__uvm_is_match) {
        VL_NULL_CHECK(comp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 738)->__VnoInFunc_get_name(vlSymsp, __VlefCall_5__get_name);
        __VlefCall_4__uvm_is_match = (""s != __VlefCall_5__get_name);
    }
    if (__VlefCall_4__uvm_is_match) {
        comps.push_back(comp);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_add_child(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> child, ::CData/*0:0*/ &m_add_child__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_add_child\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_1__get_name;
    ::CData/*0:0*/ __VlefCall_0__m_add_child;
    m_add_child__Vfuncrtn = 0U;
    Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_add_child(vlProcess, vlSymsp, child, __VlefCall_0__m_add_child);
    if (__VlefCall_0__m_add_child) {
        VL_NULL_CHECK(child, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 753)->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
        if (("uvm_test_top"s == __VlefCall_1__get_name)) {
            this->__PVT__top_levels.push_front(child);
        } else {
            this->__PVT__top_levels.push_back(child);
        }
        m_add_child__Vfuncrtn = 1U;
    } else {
        m_add_child__Vfuncrtn = 0U;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_build_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_build_phase\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_build_phase(vlProcess, vlSymsp, phase);
    {
        // Inlined CFunc: __VnoInFunc_m_do_verbosity_settings
        this->__VnoInFunc_m_do_verbosity_settings____Vfork_2__0(std::make_shared<VlProcess>(vlProcess), vlSymsp);
    }
    {
        // Inlined CFunc: __VnoInFunc_m_do_timeout_settings
        ::IData/*31:0*/ __Vinline_0___VnoInFunc_m_do_timeout_settings___Vtask_get_arg_values__Vfuncout_2512;
        __Vinline_0___VnoInFunc_m_do_timeout_settings___Vtask_get_arg_values__Vfuncout_2512 = 0;
        ::std::string __Vinline_0___VnoInFunc_m_do_timeout_settings_unnamedblk248__DOT__timeout_list;
        ::std::string __Vinline_0___VnoInFunc_m_do_timeout_settings_unnamedblk248__DOT__sep;
        ::IData/*31:0*/ __Vinline_0___VnoInFunc_m_do_timeout_settings_unnamedblk248__DOT__unnamedblk249__DOT__i;
        ::VlQueue<::std::string> __Vinline_0___VnoInFunc_m_do_timeout_settings_timeout_settings;
        ::std::string __Vinline_0___VnoInFunc_m_do_timeout_settings_timeout;
        ::IData/*31:0*/ __Vinline_0___VnoInFunc_m_do_timeout_settings_timeout_count;
        ::QData/*63:0*/ __Vinline_0___VnoInFunc_m_do_timeout_settings_timeout_int;
        ::std::string __Vinline_0___VnoInFunc_m_do_timeout_settings_override_spec;
        __Vinline_0___VnoInFunc_m_do_timeout_settings_timeout_settings.clear();
        __Vinline_0___VnoInFunc_m_do_timeout_settings_timeout_settings.atDefault().clear();
        __Vinline_0___VnoInFunc_m_do_timeout_settings_timeout = ""s;
        __Vinline_0___VnoInFunc_m_do_timeout_settings_timeout_count = 0U;
        __Vinline_0___VnoInFunc_m_do_timeout_settings_timeout_int = 0;
        __Vinline_0___VnoInFunc_m_do_timeout_settings_override_spec = ""s;
        VL_NULL_CHECK(this->__PVT__clp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 891)->__VnoInFunc_get_arg_values(vlSymsp, "+UVM_TIMEOUT="s, __Vinline_0___VnoInFunc_m_do_timeout_settings_timeout_settings, __Vinline_0___VnoInFunc_m_do_timeout_settings___Vtask_get_arg_values__Vfuncout_2512);
        __Vinline_0___VnoInFunc_m_do_timeout_settings_timeout_count 
            = __Vinline_0___VnoInFunc_m_do_timeout_settings___Vtask_get_arg_values__Vfuncout_2512;
        if (VL_UNLIKELY(((0U != __Vinline_0___VnoInFunc_m_do_timeout_settings_timeout_count)))) {
            __Vinline_0___VnoInFunc_m_do_timeout_settings_timeout 
                = __Vinline_0___VnoInFunc_m_do_timeout_settings_timeout_settings.at(0U);
            if (VL_UNLIKELY((VL_LTS_III(32, 1U, __Vinline_0___VnoInFunc_m_do_timeout_settings_timeout_count)))) {
                __Vinline_0___VnoInFunc_m_do_timeout_settings_unnamedblk248__DOT__timeout_list = ""s;
                __Vinline_0___VnoInFunc_m_do_timeout_settings_unnamedblk248__DOT__sep = ""s;
                __Vinline_0___VnoInFunc_m_do_timeout_settings_unnamedblk248__DOT__unnamedblk249__DOT__i = 0U;
                __Vinline_0___VnoInFunc_m_do_timeout_settings_unnamedblk248__DOT__unnamedblk249__DOT__i = 0U;
                while (VL_LTS_III(32, __Vinline_0___VnoInFunc_m_do_timeout_settings_unnamedblk248__DOT__unnamedblk249__DOT__i, __Vinline_0___VnoInFunc_m_do_timeout_settings_timeout_settings.size())) {
                    if ((0U != __Vinline_0___VnoInFunc_m_do_timeout_settings_unnamedblk248__DOT__unnamedblk249__DOT__i)) {
                        __Vinline_0___VnoInFunc_m_do_timeout_settings_unnamedblk248__DOT__sep = "; "s;
                    }
                    __Vinline_0___VnoInFunc_m_do_timeout_settings_unnamedblk248__DOT__timeout_list 
                        = VL_CONCATN_NNN(VL_CONCATN_NNN(__Vinline_0___VnoInFunc_m_do_timeout_settings_unnamedblk248__DOT__timeout_list, __Vinline_0___VnoInFunc_m_do_timeout_settings_unnamedblk248__DOT__sep), __Vinline_0___VnoInFunc_m_do_timeout_settings_timeout_settings.at(__Vinline_0___VnoInFunc_m_do_timeout_settings_unnamedblk248__DOT__unnamedblk249__DOT__i));
                    __Vinline_0___VnoInFunc_m_do_timeout_settings_unnamedblk248__DOT__unnamedblk249__DOT__i 
                        = ((::IData)(1U) + __Vinline_0___VnoInFunc_m_do_timeout_settings_unnamedblk248__DOT__unnamedblk249__DOT__i);
                }
                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "MULTTIMOUT"s, VL_SFORMATF_N_NX("Multiple (%0d) +UVM_TIMEOUT arguments provided on the command line.  '%s' will be used.  Provided list: %s.",3
                                                                                , '~',32,__Vinline_0___VnoInFunc_m_do_timeout_settings_timeout_count
                                                                                , 'S',&(__Vinline_0___VnoInFunc_m_do_timeout_settings_timeout)
                                                                                , 'S',&(__Vinline_0___VnoInFunc_m_do_timeout_settings_unnamedblk248__DOT__timeout_list)) , 0U, ""s, 0U, ""s, 0U);
            }
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "TIMOUTSET"s, VL_SFORMATF_N_NX("'+UVM_TIMEOUT=%s' provided on the command line is being applied.",1
                                                                                , 'S',&(__Vinline_0___VnoInFunc_m_do_timeout_settings_timeout)) , 0U, ""s, 0U, ""s, 0U);
            std::ignore = VL_SSCANF_INNX(64,__Vinline_0___VnoInFunc_m_do_timeout_settings_timeout,"%d,%s",2
                                         , '#',64,&(__Vinline_0___VnoInFunc_m_do_timeout_settings_timeout_int)
                                         , 'S',&(__Vinline_0___VnoInFunc_m_do_timeout_settings_override_spec)) ;
            if (("YES"s == __Vinline_0___VnoInFunc_m_do_timeout_settings_override_spec)) {
                this->__VnoInFunc_set_timeout(vlProcess, vlSymsp, __Vinline_0___VnoInFunc_m_do_timeout_settings_timeout_int, 1U);
            } else if (("NO"s == __Vinline_0___VnoInFunc_m_do_timeout_settings_override_spec)) {
                this->__VnoInFunc_set_timeout(vlProcess, vlSymsp, __Vinline_0___VnoInFunc_m_do_timeout_settings_timeout_int, 0U);
            } else {
                this->__VnoInFunc_set_timeout(vlProcess, vlSymsp, __Vinline_0___VnoInFunc_m_do_timeout_settings_timeout_int, 1U);
            }
        }
    }
    {
        // Inlined CFunc: __VnoInFunc_m_do_factory_settings
        ::IData/*31:0*/ __Vinline_0___VnoInFunc_m_do_factory_settings___Vtask_get_arg_matches__Vfuncout_2513;
        __Vinline_0___VnoInFunc_m_do_factory_settings___Vtask_get_arg_matches__Vfuncout_2513 = 0;
        ::IData/*31:0*/ __Vinline_0___VnoInFunc_m_do_factory_settings___Vtask_get_arg_matches__Vfuncout_2514;
        __Vinline_0___VnoInFunc_m_do_factory_settings___Vtask_get_arg_matches__Vfuncout_2514 = 0;
        ::IData/*31:0*/ __Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk250__DOT__i;
        __Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk250__DOT__i = 0;
        ::IData/*31:0*/ __Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk250__DOT__i__Vloopsize;
        __Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk250__DOT__i__Vloopsize = 0;
        ::IData/*31:0*/ __Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk251__DOT__i;
        __Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk251__DOT__i = 0;
        ::IData/*31:0*/ __Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk251__DOT__i__Vloopsize;
        __Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk251__DOT__i__Vloopsize = 0;
        ::VlQueue<::std::string> __Vinline_0___VnoInFunc_m_do_factory_settings_args;
        __Vinline_0___VnoInFunc_m_do_factory_settings_args.clear();
        __Vinline_0___VnoInFunc_m_do_factory_settings_args.atDefault().clear();
        VL_NULL_CHECK(this->__PVT__clp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 941)->__VnoInFunc_get_arg_matches(vlSymsp, "/^\\+(UVM_SET_INST_OVERRIDE|uvm_set_inst_override)=/"s, __Vinline_0___VnoInFunc_m_do_factory_settings_args, __Vinline_0___VnoInFunc_m_do_factory_settings___Vtask_get_arg_matches__Vfuncout_2513);
        __Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk250__DOT__i = 0U;
        while (VL_LTS_III(32, __Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk250__DOT__i, __Vinline_0___VnoInFunc_m_do_factory_settings_args.size())) {
            __Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk250__DOT__i__Vloopsize 
                = __Vinline_0___VnoInFunc_m_do_factory_settings_args.size();
            this->__VnoInFunc_m_process_inst_override(vlProcess, vlSymsp, 
                                                      VL_CVT_PACK_STR_NN(
                                                                         VL_SUBSTR_N(__Vinline_0___VnoInFunc_m_do_factory_settings_args.at(__Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk250__DOT__i),0x00000017U,
                                                                                (VL_LEN_IN(__Vinline_0___VnoInFunc_m_do_factory_settings_args.at(__Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk250__DOT__i)) 
                                                                                - (::IData)(1U)))));
            if ((__Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk250__DOT__i__Vloopsize 
                 <= __Vinline_0___VnoInFunc_m_do_factory_settings_args.size())) {
                __Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk250__DOT__i 
                    = ((::IData)(1U) + __Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk250__DOT__i);
            }
        }
        VL_NULL_CHECK(this->__PVT__clp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 945)->__VnoInFunc_get_arg_matches(vlSymsp, "/^\\+(UVM_SET_TYPE_OVERRIDE|uvm_set_type_override)=/"s, __Vinline_0___VnoInFunc_m_do_factory_settings_args, __Vinline_0___VnoInFunc_m_do_factory_settings___Vtask_get_arg_matches__Vfuncout_2514);
        __Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk251__DOT__i = 0U;
        while (VL_LTS_III(32, __Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk251__DOT__i, __Vinline_0___VnoInFunc_m_do_factory_settings_args.size())) {
            __Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk251__DOT__i__Vloopsize 
                = __Vinline_0___VnoInFunc_m_do_factory_settings_args.size();
            this->__VnoInFunc_m_process_type_override(vlProcess, vlSymsp, 
                                                      VL_CVT_PACK_STR_NN(
                                                                         VL_SUBSTR_N(__Vinline_0___VnoInFunc_m_do_factory_settings_args.at(__Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk251__DOT__i),0x00000017U,
                                                                                (VL_LEN_IN(__Vinline_0___VnoInFunc_m_do_factory_settings_args.at(__Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk251__DOT__i)) 
                                                                                - (::IData)(1U)))));
            if ((__Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk251__DOT__i__Vloopsize 
                 <= __Vinline_0___VnoInFunc_m_do_factory_settings_args.size())) {
                __Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk251__DOT__i 
                    = ((::IData)(1U) + __Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk251__DOT__i);
            }
        }
    }
    this->__VnoInFunc_m_do_config_settings(vlProcess, vlSymsp);
    this->__VnoInFunc_m_do_max_quit_settings(vlProcess, vlSymsp);
}

void Vtb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_do_cl_init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_do_cl_init\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ unnamedblk241__DOT__i;
    unnamedblk241__DOT__i = 0;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_cmdline_set_verbosity__Vclpkg.__VnoInFunc_init(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root>{this});
    unnamedblk241__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk241__DOT__i, vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_cmdline_set_verbosity__Vclpkg.__Vnontrivs.__PVT__settings.size())) {
        if ((("time"s == VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_cmdline_set_verbosity__Vclpkg.__Vnontrivs.__PVT__settings.at(unnamedblk241__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 798)
              ->__PVT__phase) && (0ULL != VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_cmdline_set_verbosity__Vclpkg.__Vnontrivs.__PVT__settings.at(unnamedblk241__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 798)
                                  ->__PVT__offset))) {
            this->__PVT__m_time_settings.push_back(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_cmdline_set_verbosity__Vclpkg.__Vnontrivs.__PVT__settings.at(unnamedblk241__DOT__i));
        }
        unnamedblk241__DOT__i = ((::IData)(1U) + unnamedblk241__DOT__i);
    }
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_cmdline_set_action__Vclpkg.__VnoInFunc_init(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root>{this});
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_cmdline_set_severity__Vclpkg.__VnoInFunc_init(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root>{this});
}

void Vtb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_do_verbosity_settings(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_do_verbosity_settings\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_m_do_verbosity_settings____Vfork_2__0(std::make_shared<VlProcess>(vlProcess), vlSymsp);
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_do_verbosity_settings____Vfork_2__0(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_do_verbosity_settings____Vfork_2__0\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask___VforkTask_0__unnamedblk243__DOT__i_2503;
    __Vtask___VforkTask_0__unnamedblk243__DOT__i_2503 = 0;
    ::IData/*31:0*/ __Vtask___VforkTask_0__unnamedblk243__DOT__i__Vloopsize_2504;
    __Vtask___VforkTask_0__unnamedblk243__DOT__i__Vloopsize_2504 = 0;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component>> __Vtask___VforkTask_0__unnamedblk243__DOT__unnamedblk244__DOT__comps_2505;
    ::IData/*31:0*/ __Vtask___VforkTask_0__unnamedblk243__DOT__unnamedblk244__DOT__unnamedblk245__DOT__j_2506;
    __Vtask___VforkTask_0__unnamedblk243__DOT__unnamedblk244__DOT__unnamedblk245__DOT__j_2506 = 0;
    ::IData/*31:0*/ __Vtask___VforkTask_0__unnamedblk243__DOT__unnamedblk244__DOT__unnamedblk245__DOT__j__Vloopsize_2507;
    __Vtask___VforkTask_0__unnamedblk243__DOT__unnamedblk244__DOT__unnamedblk245__DOT__j__Vloopsize_2507 = 0;
    ::IData/*31:0*/ __Vtask___VforkTask_0__unnamedblk243__DOT__unnamedblk244__DOT__unnamedblk246__DOT__j_2508;
    __Vtask___VforkTask_0__unnamedblk243__DOT__unnamedblk244__DOT__unnamedblk246__DOT__j_2508 = 0;
    ::IData/*31:0*/ __Vtask___VforkTask_0__unnamedblk243__DOT__unnamedblk244__DOT__unnamedblk246__DOT__j__Vloopsize_2509;
    __Vtask___VforkTask_0__unnamedblk243__DOT__unnamedblk244__DOT__unnamedblk246__DOT__j__Vloopsize_2509 = 0;
    ::QData/*63:0*/ __Vtask___VforkTask_0__last_time_2510;
    __Vtask___VforkTask_0__last_time_2510 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vtask___VforkTask_0__unnamedblk243__DOT__i_2503 = 0U;
    __Vtask___VforkTask_0__unnamedblk243__DOT__i__Vloopsize_2504 = 0;
    __Vtask___VforkTask_0__unnamedblk243__DOT__unnamedblk244__DOT__unnamedblk245__DOT__j_2506 = 0U;
    __Vtask___VforkTask_0__unnamedblk243__DOT__unnamedblk244__DOT__unnamedblk245__DOT__j__Vloopsize_2507 = 0;
    __Vtask___VforkTask_0__unnamedblk243__DOT__unnamedblk244__DOT__unnamedblk246__DOT__j_2508 = 0U;
    __Vtask___VforkTask_0__unnamedblk243__DOT__unnamedblk244__DOT__unnamedblk246__DOT__j__Vloopsize_2509 = 0;
    co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.delay(0xffffffffffffffffULL, 
                                                               vlProcess, 
                                                               "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 
                                                               822);
    __Vtask___VforkTask_0__last_time_2510 = 0ULL;
    if (VL_LTS_III(32, 0U, this->__PVT__m_time_settings.size())) {
        this->__PVT__m_time_settings.sort([&](::IData/*31:0*/ item__DOT__index, 
                                              ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_verbosity> item) -> 
                                          ::QData/*63:0*/ {
                return (VL_NULL_CHECK(item, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 827)
                        ->__PVT__offset);
            }
        );
    }
    __Vtask___VforkTask_0__unnamedblk243__DOT__i_2503 = 0U;
    while (VL_LTS_III(32, __Vtask___VforkTask_0__unnamedblk243__DOT__i_2503, this->__PVT__m_time_settings.size())) {
        __Vtask___VforkTask_0__unnamedblk243__DOT__i__Vloopsize_2504 
            = this->__PVT__m_time_settings.size();
        __Vtask___VforkTask_0__unnamedblk243__DOT__unnamedblk244__DOT__comps_2505.clear();
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.delay(
                                                                   (0x00000000000003e8ULL 
                                                                    * 
                                                                    (VL_NULL_CHECK(this->__PVT__m_time_settings.at(__Vtask___VforkTask_0__unnamedblk243__DOT__i_2503), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 832)
                                                                     ->__PVT__offset 
                                                                     - __Vtask___VforkTask_0__last_time_2510)), 
                                                                   vlProcess, 
                                                                   "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 
                                                                   832);
        this->__VnoInFunc_find_all(vlProcess, vlSymsp, 
                                   VL_CVT_PACK_STR_NN(VL_NULL_CHECK(this->__PVT__m_time_settings.at(__Vtask___VforkTask_0__unnamedblk243__DOT__i_2503), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 833)
                                                      ->__PVT__comp), __Vtask___VforkTask_0__unnamedblk243__DOT__unnamedblk244__DOT__comps_2505, VlNull{});
        __Vtask___VforkTask_0__last_time_2510 = VL_NULL_CHECK(this->__PVT__m_time_settings.at(__Vtask___VforkTask_0__unnamedblk243__DOT__i_2503), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 834)
            ->__PVT__offset;
        if (("_ALL_"s == VL_NULL_CHECK(this->__PVT__m_time_settings.at(__Vtask___VforkTask_0__unnamedblk243__DOT__i_2503), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 835)
             ->__PVT__id)) {
            __Vtask___VforkTask_0__unnamedblk243__DOT__unnamedblk244__DOT__unnamedblk245__DOT__j_2506 = 0U;
            while (VL_LTS_III(32, __Vtask___VforkTask_0__unnamedblk243__DOT__unnamedblk244__DOT__unnamedblk245__DOT__j_2506, __Vtask___VforkTask_0__unnamedblk243__DOT__unnamedblk244__DOT__comps_2505.size())) {
                __Vtask___VforkTask_0__unnamedblk243__DOT__unnamedblk244__DOT__unnamedblk245__DOT__j__Vloopsize_2507 
                    = __Vtask___VforkTask_0__unnamedblk243__DOT__unnamedblk244__DOT__comps_2505.size();
                VL_NULL_CHECK(this->__PVT__m_time_settings.atWriteAppend(__Vtask___VforkTask_0__unnamedblk243__DOT__i_2503), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 837)->__PVT__used.atWrite(__Vtask___VforkTask_0__unnamedblk243__DOT__unnamedblk244__DOT__comps_2505.at(__Vtask___VforkTask_0__unnamedblk243__DOT__unnamedblk244__DOT__unnamedblk245__DOT__j_2506)) = 1U;
                VL_NULL_CHECK(__Vtask___VforkTask_0__unnamedblk243__DOT__unnamedblk244__DOT__comps_2505.at(__Vtask___VforkTask_0__unnamedblk243__DOT__unnamedblk244__DOT__unnamedblk245__DOT__j_2506), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 838)->__VnoInFunc_set_report_verbosity_level(vlProcess, vlSymsp, VL_NULL_CHECK(this->__PVT__m_time_settings.at(__Vtask___VforkTask_0__unnamedblk243__DOT__i_2503), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 838)
                                                                                ->__PVT__verbosity);
                if ((__Vtask___VforkTask_0__unnamedblk243__DOT__unnamedblk244__DOT__unnamedblk245__DOT__j__Vloopsize_2507 
                     <= __Vtask___VforkTask_0__unnamedblk243__DOT__unnamedblk244__DOT__comps_2505.size())) {
                    __Vtask___VforkTask_0__unnamedblk243__DOT__unnamedblk244__DOT__unnamedblk245__DOT__j_2506 
                        = ((::IData)(1U) + __Vtask___VforkTask_0__unnamedblk243__DOT__unnamedblk244__DOT__unnamedblk245__DOT__j_2506);
                }
            }
        } else {
            __Vtask___VforkTask_0__unnamedblk243__DOT__unnamedblk244__DOT__unnamedblk246__DOT__j_2508 = 0U;
            while (VL_LTS_III(32, __Vtask___VforkTask_0__unnamedblk243__DOT__unnamedblk244__DOT__unnamedblk246__DOT__j_2508, __Vtask___VforkTask_0__unnamedblk243__DOT__unnamedblk244__DOT__comps_2505.size())) {
                __Vtask___VforkTask_0__unnamedblk243__DOT__unnamedblk244__DOT__unnamedblk246__DOT__j__Vloopsize_2509 
                    = __Vtask___VforkTask_0__unnamedblk243__DOT__unnamedblk244__DOT__comps_2505.size();
                VL_NULL_CHECK(this->__PVT__m_time_settings.atWriteAppend(__Vtask___VforkTask_0__unnamedblk243__DOT__i_2503), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 843)->__PVT__used.atWrite(__Vtask___VforkTask_0__unnamedblk243__DOT__unnamedblk244__DOT__comps_2505.at(__Vtask___VforkTask_0__unnamedblk243__DOT__unnamedblk244__DOT__unnamedblk246__DOT__j_2508)) = 1U;
                VL_NULL_CHECK(__Vtask___VforkTask_0__unnamedblk243__DOT__unnamedblk244__DOT__comps_2505.at(__Vtask___VforkTask_0__unnamedblk243__DOT__unnamedblk244__DOT__unnamedblk246__DOT__j_2508), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 844)->__VnoInFunc_set_report_id_verbosity(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(VL_NULL_CHECK(this->__PVT__m_time_settings.at(__Vtask___VforkTask_0__unnamedblk243__DOT__i_2503), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 844)
                                                                                ->__PVT__id), VL_NULL_CHECK(this->__PVT__m_time_settings.at(__Vtask___VforkTask_0__unnamedblk243__DOT__i_2503), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 844)
                                                                                ->__PVT__verbosity);
                if ((__Vtask___VforkTask_0__unnamedblk243__DOT__unnamedblk244__DOT__unnamedblk246__DOT__j__Vloopsize_2509 
                     <= __Vtask___VforkTask_0__unnamedblk243__DOT__unnamedblk244__DOT__comps_2505.size())) {
                    __Vtask___VforkTask_0__unnamedblk243__DOT__unnamedblk244__DOT__unnamedblk246__DOT__j_2508 
                        = ((::IData)(1U) + __Vtask___VforkTask_0__unnamedblk243__DOT__unnamedblk244__DOT__unnamedblk246__DOT__j_2508);
                }
            }
        }
        if ((__Vtask___VforkTask_0__unnamedblk243__DOT__i__Vloopsize_2504 
             <= this->__PVT__m_time_settings.size())) {
            __Vtask___VforkTask_0__unnamedblk243__DOT__i_2503 
                = ((::IData)(1U) + __Vtask___VforkTask_0__unnamedblk243__DOT__i_2503);
        }
    }
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_do_cmdline_checks(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_do_cmdline_checks\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_get_arg_matches__Vfuncout_2511;
    __Vtask_get_arg_matches__Vfuncout_2511 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_5__m_uvm_string_queue_join;
    ::std::string __VlefCall_4__dump;
    ::std::string __VlefCall_3__dump;
    ::std::string __VlefCall_2__dump;
    ::std::string __VlefCall_1__dump;
    ::IData/*31:0*/ __VlefCall_0__get_arg_matches;
    ::VlQueue<::std::string> unnamedblk247__DOT__msgs;
    ::VlQueue<::std::string> dump_args;
    dump_args.clear();
    dump_args.atDefault().clear();
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_cmdline_set_verbosity__Vclpkg.__VnoInFunc_check(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root>{this});
    VL_NULL_CHECK(this->__PVT__clp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 861)->__VnoInFunc_get_arg_matches(vlSymsp, "+UVM_DUMP_REPORT_ARGS"s, dump_args, __Vtask_get_arg_matches__Vfuncout_2511);
    __VlefCall_0__get_arg_matches = __Vtask_get_arg_matches__Vfuncout_2511;
    if (VL_UNLIKELY(((0U != __VlefCall_0__get_arg_matches)))) {
        unnamedblk247__DOT__msgs.clear();
        unnamedblk247__DOT__msgs.atDefault().clear();
        unnamedblk247__DOT__msgs.push_back("\n!!! UVM_CMDLINE_NO_DPI IS DEFINED !!!"s);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_cmdline_verbosity__Vclpkg.__VnoInFunc_dump(vlSymsp, __VlefCall_1__dump);
        unnamedblk247__DOT__msgs.push_back(__VlefCall_1__dump);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_cmdline_set_verbosity__Vclpkg.__VnoInFunc_dump(vlProcess, vlSymsp, __VlefCall_2__dump);
        unnamedblk247__DOT__msgs.push_back(__VlefCall_2__dump);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_cmdline_set_action__Vclpkg.__VnoInFunc_dump(vlProcess, vlSymsp, __VlefCall_3__dump);
        unnamedblk247__DOT__msgs.push_back(__VlefCall_3__dump);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_cmdline_set_severity__Vclpkg.__VnoInFunc_dump(vlProcess, vlSymsp, __VlefCall_4__dump);
        unnamedblk247__DOT__msgs.push_back(__VlefCall_4__dump);
        this->__Vfunc_m_uvm_string_queue_join__Vfuncout_1283 = ""s;
        this->__Vfunc_m_uvm_string_queue_join__Vfuncout_1283 
            = VL_CVT_PACK_STR_ND(VL_STREAMR_NRI(0, unnamedblk247__DOT__msgs, 1U));
        __VlefCall_5__m_uvm_string_queue_join = this->__Vfunc_m_uvm_string_queue_join__Vfuncout_1283;
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "REPORTARGS"s, VL_SFORMATF_N_NX("\n--- UVM Reporting Argument Summary ---\n%s\n",1
                                                                                , 'S',&(__VlefCall_5__m_uvm_string_queue_join)) , 0U, ""s, 0U, ""s, 0U);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_do_timeout_settings(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_do_timeout_settings\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_get_arg_values__Vfuncout_2512;
    __Vtask_get_arg_values__Vfuncout_2512 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string unnamedblk248__DOT__timeout_list;
    ::std::string unnamedblk248__DOT__sep;
    ::IData/*31:0*/ unnamedblk248__DOT__unnamedblk249__DOT__i;
    ::VlQueue<::std::string> timeout_settings;
    ::std::string timeout;
    ::IData/*31:0*/ timeout_count;
    ::QData/*63:0*/ timeout_int;
    ::std::string override_spec;
    timeout_settings.clear();
    timeout_settings.atDefault().clear();
    timeout = ""s;
    timeout_count = 0U;
    timeout_int = 0;
    override_spec = ""s;
    VL_NULL_CHECK(this->__PVT__clp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 891)->__VnoInFunc_get_arg_values(vlSymsp, "+UVM_TIMEOUT="s, timeout_settings, __Vtask_get_arg_values__Vfuncout_2512);
    timeout_count = __Vtask_get_arg_values__Vfuncout_2512;
    if (VL_UNLIKELY(((0U != timeout_count)))) {
        timeout = timeout_settings.at(0U);
        if (VL_UNLIKELY((VL_LTS_III(32, 1U, timeout_count)))) {
            unnamedblk248__DOT__timeout_list = ""s;
            unnamedblk248__DOT__sep = ""s;
            unnamedblk248__DOT__unnamedblk249__DOT__i = 0U;
            unnamedblk248__DOT__unnamedblk249__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk248__DOT__unnamedblk249__DOT__i, timeout_settings.size())) {
                if ((0U != unnamedblk248__DOT__unnamedblk249__DOT__i)) {
                    unnamedblk248__DOT__sep = "; "s;
                }
                unnamedblk248__DOT__timeout_list = 
                    VL_CONCATN_NNN(VL_CONCATN_NNN(unnamedblk248__DOT__timeout_list, unnamedblk248__DOT__sep), timeout_settings.at(unnamedblk248__DOT__unnamedblk249__DOT__i));
                unnamedblk248__DOT__unnamedblk249__DOT__i 
                    = ((::IData)(1U) + unnamedblk248__DOT__unnamedblk249__DOT__i);
            }
            this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "MULTTIMOUT"s, VL_SFORMATF_N_NX("Multiple (%0d) +UVM_TIMEOUT arguments provided on the command line.  '%s' will be used.  Provided list: %s.",3
                                                                                , '~',32,timeout_count
                                                                                , 'S',&(timeout)
                                                                                , 'S',&(unnamedblk248__DOT__timeout_list)) , 0U, ""s, 0U, ""s, 0U);
        }
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "TIMOUTSET"s, VL_SFORMATF_N_NX("'+UVM_TIMEOUT=%s' provided on the command line is being applied.",1
                                                                                , 'S',&(timeout)) , 0U, ""s, 0U, ""s, 0U);
        std::ignore = VL_SSCANF_INNX(64,timeout,"%d,%s",2
                                     , '#',64,&(timeout_int)
                                     , 'S',&(override_spec)) ;
        if (("YES"s == override_spec)) {
            this->__VnoInFunc_set_timeout(vlProcess, vlSymsp, timeout_int, 1U);
        } else if (("NO"s == override_spec)) {
            this->__VnoInFunc_set_timeout(vlProcess, vlSymsp, timeout_int, 0U);
        } else {
            this->__VnoInFunc_set_timeout(vlProcess, vlSymsp, timeout_int, 1U);
        }
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_do_factory_settings(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_do_factory_settings\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_get_arg_matches__Vfuncout_2513;
    __Vtask_get_arg_matches__Vfuncout_2513 = 0;
    ::IData/*31:0*/ __Vtask_get_arg_matches__Vfuncout_2514;
    __Vtask_get_arg_matches__Vfuncout_2514 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ unnamedblk250__DOT__i;
    unnamedblk250__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk250__DOT__i__Vloopsize;
    unnamedblk250__DOT__i__Vloopsize = 0;
    ::IData/*31:0*/ unnamedblk251__DOT__i;
    unnamedblk251__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk251__DOT__i__Vloopsize;
    unnamedblk251__DOT__i__Vloopsize = 0;
    ::VlQueue<::std::string> args;
    args.clear();
    args.atDefault().clear();
    VL_NULL_CHECK(this->__PVT__clp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 941)->__VnoInFunc_get_arg_matches(vlSymsp, "/^\\+(UVM_SET_INST_OVERRIDE|uvm_set_inst_override)=/"s, args, __Vtask_get_arg_matches__Vfuncout_2513);
    unnamedblk250__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk250__DOT__i, args.size())) {
        unnamedblk250__DOT__i__Vloopsize = args.size();
        this->__VnoInFunc_m_process_inst_override(vlProcess, vlSymsp, 
                                                  VL_CVT_PACK_STR_NN(
                                                                     VL_SUBSTR_N(args.at(unnamedblk250__DOT__i),0x00000017U,
                                                                                (VL_LEN_IN(args.at(unnamedblk250__DOT__i)) 
                                                                                - (::IData)(1U)))));
        if ((unnamedblk250__DOT__i__Vloopsize <= args.size())) {
            unnamedblk250__DOT__i = ((::IData)(1U) 
                                     + unnamedblk250__DOT__i);
        }
    }
    VL_NULL_CHECK(this->__PVT__clp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 945)->__VnoInFunc_get_arg_matches(vlSymsp, "/^\\+(UVM_SET_TYPE_OVERRIDE|uvm_set_type_override)=/"s, args, __Vtask_get_arg_matches__Vfuncout_2514);
    unnamedblk251__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk251__DOT__i, args.size())) {
        unnamedblk251__DOT__i__Vloopsize = args.size();
        this->__VnoInFunc_m_process_type_override(vlProcess, vlSymsp, 
                                                  VL_CVT_PACK_STR_NN(
                                                                     VL_SUBSTR_N(args.at(unnamedblk251__DOT__i),0x00000017U,
                                                                                (VL_LEN_IN(args.at(unnamedblk251__DOT__i)) 
                                                                                - (::IData)(1U)))));
        if ((unnamedblk251__DOT__i__Vloopsize <= args.size())) {
            unnamedblk251__DOT__i = ((::IData)(1U) 
                                     + unnamedblk251__DOT__i);
        }
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_process_inst_override(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string ovr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_process_inst_override\n"); );
    // Locals
    ::CData/*7:0*/ __Vtask_uvm_string_split__sep_2516;
    __Vtask_uvm_string_split__sep_2516 = 0;
    ::IData/*31:0*/ __Vtask_uvm_string_split__s_2517;
    __Vtask_uvm_string_split__s_2517 = 0;
    ::IData/*31:0*/ __Vtask_uvm_string_split__e_2518;
    __Vtask_uvm_string_split__e_2518 = 0;
    ::IData/*31:0*/ __Vtask_uvm_string_split__limit_2519;
    __Vtask_uvm_string_split__limit_2519 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlQueue<::std::string> split_val;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> cs;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_factory> factory;
    {
        split_val.clear();
        split_val.atDefault().clear();
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, cs);
        VL_NULL_CHECK(cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 958)->__VnoInFunc_get_factory(vlProcess, vlSymsp, factory);
        __Vtask_uvm_string_split__sep_2516 = 0x2cU;
        this->__Vtask_uvm_string_split__str_2515 = ovr;
        __Vtask_uvm_string_split__s_2517 = 0U;
        __Vtask_uvm_string_split__e_2518 = 0U;
        __Vtask_uvm_string_split__limit_2519 = 0U;
        split_val.clear();
        __Vtask_uvm_string_split__limit_2519 = ((::IData)(1U) 
                                                + VL_LEN_IN(this->__Vtask_uvm_string_split__str_2515));
        do {
            __Vtask_uvm_string_split__s_2517 = __Vtask_uvm_string_split__e_2518;
            {
                while (VL_LTS_III(32, __Vtask_uvm_string_split__e_2518, 
                                  VL_LEN_IN(this->__Vtask_uvm_string_split__str_2515))) {
                    if ((VL_GETC_N(this->__Vtask_uvm_string_split__str_2515,__Vtask_uvm_string_split__e_2518) 
                         == (::IData)(__Vtask_uvm_string_split__sep_2516))) {
                        goto __Vlabel1;
                    }
                    __Vtask_uvm_string_split__e_2518 
                        = ((::IData)(1U) + __Vtask_uvm_string_split__e_2518);
                }
                __Vlabel1: ;
            }
            split_val.push_back(VL_SUBSTR_N(this->__Vtask_uvm_string_split__str_2515,__Vtask_uvm_string_split__s_2517,
                                            (__Vtask_uvm_string_split__e_2518 
                                             - (::IData)(1U))));
            __Vtask_uvm_string_split__e_2518 = ((::IData)(1U) 
                                                + __Vtask_uvm_string_split__e_2518);
        } while (VL_LTS_III(32, __Vtask_uvm_string_split__e_2518, __Vtask_uvm_string_split__limit_2519));
        if (VL_UNLIKELY(((3U != split_val.size())))) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "UVM_CMDLINE_PROC"s, 
                                               VL_CVT_PACK_STR_NN(
                                                                  VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Invalid setting for +uvm_set_inst_override="s, ovr), ", setting must specify <requested_type>,<override_type>,<instance_path>"s)), 0U, ""s, 0U, ""s, 0U);
            goto __Vlabel0;
        }
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "INSTOVR"s, 
                                          VL_CVT_PACK_STR_NN(
                                                             VL_CONCATN_NNN("Applying instance override from the command line: +uvm_set_inst_override="s, ovr)), 0U, ""s, 0U, ""s, 0U);
        VL_NULL_CHECK(factory, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 969)->__VnoInFunc_set_inst_override_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(split_val.at(0U)), 
                                                                                VL_CVT_PACK_STR_NN(split_val.at(1U)), 
                                                                                VL_CVT_PACK_STR_NN(split_val.at(2U)));
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_process_type_override(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string ovr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_process_type_override\n"); );
    // Locals
    ::CData/*7:0*/ __Vtask_uvm_string_split__sep_2521;
    __Vtask_uvm_string_split__sep_2521 = 0;
    ::IData/*31:0*/ __Vtask_uvm_string_split__s_2522;
    __Vtask_uvm_string_split__s_2522 = 0;
    ::IData/*31:0*/ __Vtask_uvm_string_split__e_2523;
    __Vtask_uvm_string_split__e_2523 = 0;
    ::IData/*31:0*/ __Vtask_uvm_string_split__limit_2524;
    __Vtask_uvm_string_split__limit_2524 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlQueue<::std::string> split_val;
    ::IData/*31:0*/ replace;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> cs;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_factory> factory;
    {
        split_val.clear();
        split_val.atDefault().clear();
        replace = 1U;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, cs);
        VL_NULL_CHECK(cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 980)->__VnoInFunc_get_factory(vlProcess, vlSymsp, factory);
        __Vtask_uvm_string_split__sep_2521 = 0x2cU;
        this->__Vtask_uvm_string_split__str_2520 = ovr;
        __Vtask_uvm_string_split__s_2522 = 0U;
        __Vtask_uvm_string_split__e_2523 = 0U;
        __Vtask_uvm_string_split__limit_2524 = 0U;
        split_val.clear();
        __Vtask_uvm_string_split__limit_2524 = ((::IData)(1U) 
                                                + VL_LEN_IN(this->__Vtask_uvm_string_split__str_2520));
        do {
            __Vtask_uvm_string_split__s_2522 = __Vtask_uvm_string_split__e_2523;
            {
                while (VL_LTS_III(32, __Vtask_uvm_string_split__e_2523, 
                                  VL_LEN_IN(this->__Vtask_uvm_string_split__str_2520))) {
                    if ((VL_GETC_N(this->__Vtask_uvm_string_split__str_2520,__Vtask_uvm_string_split__e_2523) 
                         == (::IData)(__Vtask_uvm_string_split__sep_2521))) {
                        goto __Vlabel1;
                    }
                    __Vtask_uvm_string_split__e_2523 
                        = ((::IData)(1U) + __Vtask_uvm_string_split__e_2523);
                }
                __Vlabel1: ;
            }
            split_val.push_back(VL_SUBSTR_N(this->__Vtask_uvm_string_split__str_2520,__Vtask_uvm_string_split__s_2522,
                                            (__Vtask_uvm_string_split__e_2523 
                                             - (::IData)(1U))));
            __Vtask_uvm_string_split__e_2523 = ((::IData)(1U) 
                                                + __Vtask_uvm_string_split__e_2523);
        } while (VL_LTS_III(32, __Vtask_uvm_string_split__e_2523, __Vtask_uvm_string_split__limit_2524));
        if (VL_UNLIKELY(((VL_LTS_III(32, 3U, split_val.size()) 
                          | VL_GTS_III(32, 2U, split_val.size()))))) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "UVM_CMDLINE_PROC"s, 
                                               VL_CVT_PACK_STR_NN(
                                                                  VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Invalid setting for +uvm_set_type_override="s, ovr), ", setting must specify <requested_type>,<override_type>[,<replace>]"s)), 0U, ""s, 0U, ""s, 0U);
            goto __Vlabel0;
        }
        if ((3U == split_val.size())) {
            if (("0"s == split_val.at(2U))) {
                replace = 0U;
            } else if (VL_LIKELY((("1"s == split_val.at(2U))))) {
                replace = 1U;
            } else {
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "UVM_CMDLINE_PROC"s, 
                                                   VL_CVT_PACK_STR_NN(
                                                                      VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Invalid replace arg for +uvm_set_type_override="s, ovr), " value must be 0 or 1"s)), 0U, ""s, 0U, ""s, 0U);
                goto __Vlabel0;
            }
        }
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "UVM_CMDLINE_PROC"s, 
                                          VL_CVT_PACK_STR_NN(
                                                             VL_CONCATN_NNN("Applying type override from the command line: +uvm_set_type_override="s, ovr)), 0U, ""s, 0U, ""s, 0U);
        VL_NULL_CHECK(factory, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 1007)->__VnoInFunc_set_type_override_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(split_val.at(0U)), 
                                                                                VL_CVT_PACK_STR_NN(split_val.at(1U)), 
                                                                                (1U 
                                                                                & replace));
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_process_config(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string cfg, ::CData/*0:0*/ is_int, ::CData/*0:0*/ is_bitstream) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_process_config\n"); );
    // Locals
    ::CData/*7:0*/ __Vtask_uvm_string_split__sep_2526;
    __Vtask_uvm_string_split__sep_2526 = 0;
    ::IData/*31:0*/ __Vtask_uvm_string_split__s_2527;
    __Vtask_uvm_string_split__s_2527 = 0;
    ::IData/*31:0*/ __Vtask_uvm_string_split__e_2528;
    __Vtask_uvm_string_split__e_2528 = 0;
    ::IData/*31:0*/ __Vtask_uvm_string_split__limit_2529;
    __Vtask_uvm_string_split__limit_2529 = 0;
    ::VlWide<128>/*4095:0*/ __Vfunc_from_string__val_1284;
    VL_ZERO_W(4096, __Vfunc_from_string__val_1284);
    ::IData/*31:0*/ __Vilp1;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string unnamedblk252__DOT__base;
    ::std::string unnamedblk252__DOT__extval;
    ::IData/*31:0*/ unnamedblk253__DOT__success;
    ::VlWide<128>/*4095:0*/ v;
    ::VlQueue<::std::string> split_val;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> m_uvm_top;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> cs;
    {
        VL_ZERO_W(4096, v);
        split_val.clear();
        split_val.atDefault().clear();
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, cs);
        VL_NULL_CHECK(cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 1020)->__VnoInFunc_get_root(vlProcess, vlSymsp, m_uvm_top);
        __Vtask_uvm_string_split__sep_2526 = 0x2cU;
        this->__Vtask_uvm_string_split__str_2525 = cfg;
        __Vtask_uvm_string_split__s_2527 = 0U;
        __Vtask_uvm_string_split__e_2528 = 0U;
        __Vtask_uvm_string_split__limit_2529 = 0U;
        split_val.clear();
        __Vtask_uvm_string_split__limit_2529 = ((::IData)(1U) 
                                                + VL_LEN_IN(this->__Vtask_uvm_string_split__str_2525));
        do {
            __Vtask_uvm_string_split__s_2527 = __Vtask_uvm_string_split__e_2528;
            {
                while (VL_LTS_III(32, __Vtask_uvm_string_split__e_2528, 
                                  VL_LEN_IN(this->__Vtask_uvm_string_split__str_2525))) {
                    if ((VL_GETC_N(this->__Vtask_uvm_string_split__str_2525,__Vtask_uvm_string_split__e_2528) 
                         == (::IData)(__Vtask_uvm_string_split__sep_2526))) {
                        goto __Vlabel1;
                    }
                    __Vtask_uvm_string_split__e_2528 
                        = ((::IData)(1U) + __Vtask_uvm_string_split__e_2528);
                }
                __Vlabel1: ;
            }
            split_val.push_back(VL_SUBSTR_N(this->__Vtask_uvm_string_split__str_2525,__Vtask_uvm_string_split__s_2527,
                                            (__Vtask_uvm_string_split__e_2528 
                                             - (::IData)(1U))));
            __Vtask_uvm_string_split__e_2528 = ((::IData)(1U) 
                                                + __Vtask_uvm_string_split__e_2528);
        } while (VL_LTS_III(32, __Vtask_uvm_string_split__e_2528, __Vtask_uvm_string_split__limit_2529));
        if (VL_UNLIKELY(((1U == split_val.size())))) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "UVM_CMDLINE_PROC"s, 
                                               VL_CVT_PACK_STR_NN(
                                                                  VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Invalid +uvm_set_config command\""s, cfg), "\" missing field and value: component is \""s), split_val.at(0U)), "\""s)), 0U, ""s, 0U, ""s, 0U);
            goto __Vlabel0;
        }
        if (VL_UNLIKELY(((2U == split_val.size())))) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "UVM_CMDLINE_PROC"s, 
                                               VL_CVT_PACK_STR_NN(
                                                                  VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Invalid +uvm_set_config command\""s, cfg), "\" missing value: component is \""s), split_val.at(0U)), "\"  field is \""s), split_val.at(1U)), "\""s)), 0U, ""s, 0U, ""s, 0U);
            goto __Vlabel0;
        }
        if (VL_UNLIKELY((VL_LTS_III(32, 3U, split_val.size())))) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "UVM_CMDLINE_PROC"s, VL_SFORMATF_N_NX("Invalid +uvm_set_config command\"%s\" : expected only 3 fields (component, field and value).",1
                                                                                , 'S',&(cfg)) , 0U, ""s, 0U, ""s, 0U);
            goto __Vlabel0;
        }
        if (VL_UNLIKELY((is_int))) {
            if (VL_LTS_III(32, 2U, VL_LEN_IN(split_val.at(2U)))) {
                unnamedblk252__DOT__base = ""s;
                unnamedblk252__DOT__extval = ""s;
                unnamedblk252__DOT__base = VL_SUBSTR_N(split_val.at(2U),0U,1U);
                unnamedblk252__DOT__extval = VL_SUBSTR_N(split_val.at(2U),2U,
                                                         (VL_LEN_IN(split_val.at(2U)) 
                                                          - (::IData)(1U)));
                if (("'b"s == unnamedblk252__DOT__base)) {
                    VL_EXTENDS_WI(4096,32, v, VL_ATOI_N(unnamedblk252__DOT__extval, 2));
                } else if (("0b"s == unnamedblk252__DOT__base)) {
                    VL_EXTENDS_WI(4096,32, v, VL_ATOI_N(unnamedblk252__DOT__extval, 2));
                } else if (("'o"s == unnamedblk252__DOT__base)) {
                    VL_EXTENDS_WI(4096,32, v, VL_ATOI_N(unnamedblk252__DOT__extval, 8));
                } else if (("'d"s == unnamedblk252__DOT__base)) {
                    VL_EXTENDS_WI(4096,32, v, VL_ATOI_N(unnamedblk252__DOT__extval, 10));
                } else if (("'h"s == unnamedblk252__DOT__base)) {
                    VL_EXTENDS_WI(4096,32, v, VL_ATOI_N(unnamedblk252__DOT__extval, 16));
                } else if (("'x"s == unnamedblk252__DOT__base)) {
                    VL_EXTENDS_WI(4096,32, v, VL_ATOI_N(unnamedblk252__DOT__extval, 16));
                } else if (("0x"s == unnamedblk252__DOT__base)) {
                    VL_EXTENDS_WI(4096,32, v, VL_ATOI_N(unnamedblk252__DOT__extval, 16));
                } else {
                    VL_EXTENDS_WI(4096,32, v, VL_ATOI_N(split_val.at(2U), 10));
                }
            } else {
                VL_EXTENDS_WI(4096,32, v, VL_ATOI_N(split_val.at(2U), 10));
            }
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "UVM_CMDLINE_PROC"s, 
                                              VL_CVT_PACK_STR_NN(
                                                                 VL_CONCATN_NNN("Applying config setting from the command line: +uvm_set_config_int="s, cfg)), 0U, ""s, 0U, ""s, 0U);
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_config_db__Tz39e91f07__Vclpkg.__VnoInFunc_set(vlProcess, vlSymsp, m_uvm_top, 
                                                                                VL_CVT_PACK_STR_NN(split_val.at(0U)), 
                                                                                VL_CVT_PACK_STR_NN(split_val.at(1U)), v);
        } else if (VL_LIKELY((is_bitstream))) {
            unnamedblk253__DOT__success = 0U;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_bit_vector_utils__pie19bc520__Vclpkg.__VnoInFunc_from_string(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(split_val.at(2U)), __Vfunc_from_string__val_1284, unnamedblk253__DOT__success);
            __Vilp1 = 0U;
            while ((__Vilp1 <= 0x0000007fU)) {
                v[__Vilp1] = __Vfunc_from_string__val_1284
                    [__Vilp1];
                __Vilp1 = ((::IData)(1U) + __Vilp1);
            }
            if (VL_UNLIKELY(((1U == unnamedblk253__DOT__success)))) {
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "UVM_CMDLINE_PROC"s, 
                                                  VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN("Applying config setting from the command line: +uvm_set_config_bitstream="s, cfg)), 0U, ""s, 0U, ""s, 0U);
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_config_db__Tz39e91f07__Vclpkg.__VnoInFunc_set(vlProcess, vlSymsp, m_uvm_top, 
                                                                                VL_CVT_PACK_STR_NN(split_val.at(0U)), 
                                                                                VL_CVT_PACK_STR_NN(split_val.at(1U)), v);
            }
        } else {
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "UVM_CMDLINE_PROC"s, 
                                              VL_CVT_PACK_STR_NN(
                                                                 VL_CONCATN_NNN("Applying config setting from the command line: +uvm_set_config_string="s, cfg)), 0U, ""s, 0U, ""s, 0U);
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_config_db__Tz2757cb3c__Vclpkg.__VnoInFunc_set(vlProcess, vlSymsp, m_uvm_top, 
                                                                                VL_CVT_PACK_STR_NN(split_val.at(0U)), 
                                                                                VL_CVT_PACK_STR_NN(split_val.at(1U)), 
                                                                                VL_CVT_PACK_STR_NN(split_val.at(2U)));
        }
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_process_default_sequence(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string cfg) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_process_default_sequence\n"); );
    // Locals
    ::CData/*7:0*/ __Vtask_uvm_string_split__sep_2531;
    __Vtask_uvm_string_split__sep_2531 = 0;
    ::IData/*31:0*/ __Vtask_uvm_string_split__s_2532;
    __Vtask_uvm_string_split__s_2532 = 0;
    ::IData/*31:0*/ __Vtask_uvm_string_split__e_2533;
    __Vtask_uvm_string_split__e_2533 = 0;
    ::IData/*31:0*/ __Vtask_uvm_string_split__limit_2534;
    __Vtask_uvm_string_split__limit_2534 = 0;
    ::std::string __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlQueue<::std::string> split_val;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> cs;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> m_uvm_top;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_factory> f;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> w;
    {
        split_val.clear();
        split_val.atDefault().clear();
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, cs);
        VL_NULL_CHECK(cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 1111)->__VnoInFunc_get_root(vlProcess, vlSymsp, m_uvm_top);
        VL_NULL_CHECK(cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 1112)->__VnoInFunc_get_factory(vlProcess, vlSymsp, f);
        __Vtask_uvm_string_split__sep_2531 = 0x2cU;
        this->__Vtask_uvm_string_split__str_2530 = cfg;
        __Vtask_uvm_string_split__s_2532 = 0U;
        __Vtask_uvm_string_split__e_2533 = 0U;
        __Vtask_uvm_string_split__limit_2534 = 0U;
        split_val.clear();
        __Vtask_uvm_string_split__limit_2534 = ((::IData)(1U) 
                                                + VL_LEN_IN(this->__Vtask_uvm_string_split__str_2530));
        do {
            __Vtask_uvm_string_split__s_2532 = __Vtask_uvm_string_split__e_2533;
            {
                while (VL_LTS_III(32, __Vtask_uvm_string_split__e_2533, 
                                  VL_LEN_IN(this->__Vtask_uvm_string_split__str_2530))) {
                    if ((VL_GETC_N(this->__Vtask_uvm_string_split__str_2530,__Vtask_uvm_string_split__e_2533) 
                         == (::IData)(__Vtask_uvm_string_split__sep_2531))) {
                        goto __Vlabel1;
                    }
                    __Vtask_uvm_string_split__e_2533 
                        = ((::IData)(1U) + __Vtask_uvm_string_split__e_2533);
                }
                __Vlabel1: ;
            }
            split_val.push_back(VL_SUBSTR_N(this->__Vtask_uvm_string_split__str_2530,__Vtask_uvm_string_split__s_2532,
                                            (__Vtask_uvm_string_split__e_2533 
                                             - (::IData)(1U))));
            __Vtask_uvm_string_split__e_2533 = ((::IData)(1U) 
                                                + __Vtask_uvm_string_split__e_2533);
        } while (VL_LTS_III(32, __Vtask_uvm_string_split__e_2533, __Vtask_uvm_string_split__limit_2534));
        if (VL_UNLIKELY(((1U == split_val.size())))) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "UVM_CMDLINE_PROC"s, 
                                               VL_CVT_PACK_STR_NN(
                                                                  VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Invalid +uvm_set_default_sequence command\""s, cfg), "\" missing phase and type: sequencer is \""s), split_val.at(0U)), "\""s)), 0U, ""s, 0U, ""s, 0U);
            goto __Vlabel0;
        }
        if (VL_UNLIKELY(((2U == split_val.size())))) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "UVM_CMDLINE_PROC"s, 
                                               VL_CVT_PACK_STR_NN(
                                                                  VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Invalid +uvm_set_default_sequence command\""s, cfg), "\" missing type: sequencer is \""s), split_val.at(0U)), "\"  phase is \""s), split_val.at(1U)), "\""s)), 0U, ""s, 0U, ""s, 0U);
            goto __Vlabel0;
        }
        if (VL_UNLIKELY((VL_LTS_III(32, 3U, split_val.size())))) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "UVM_CMDLINE_PROC"s, VL_SFORMATF_N_NX("Invalid +uvm_set_default_sequence command\"%s\" : expected only 3 fields (sequencer, phase and type).",1
                                                                                , 'S',&(cfg)) , 0U, ""s, 0U, ""s, 0U);
            goto __Vlabel0;
        }
        VL_NULL_CHECK(f, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 1134)->__VnoInFunc_find_wrapper_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(split_val.at(2U)), w);
        if ((VlNull{} == w)) {
            __Vtemp_1 = split_val.at(2U);
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "UVM_CMDLINE_PROC"s, VL_SFORMATF_N_NX("Invalid type '%s' provided to +uvm_set_default_sequence",1
                                                                                , 'S',&(__Vtemp_1)) , 0U, ""s, 0U, ""s, 0U);
        } else {
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "UVM_CMDLINE_PROC"s, 
                                              VL_CVT_PACK_STR_NN(
                                                                 VL_CONCATN_NNN("Setting default sequence from the command line: +uvm_set_default_sequence="s, cfg)), 0U, ""s, 0U, ""s, 0U);
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_config_db__Tzd665aaf6__Vclpkg.__VnoInFunc_set(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root>{this}, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(split_val.at(0U), "."s), split_val.at(1U))), "default_sequence"s, w);
        }
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_do_config_settings(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_do_config_settings\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_get_arg_matches__Vfuncout_2535;
    __Vtask_get_arg_matches__Vfuncout_2535 = 0;
    ::IData/*31:0*/ __Vtask_get_arg_matches__Vfuncout_2536;
    __Vtask_get_arg_matches__Vfuncout_2536 = 0;
    ::IData/*31:0*/ __Vtask_get_arg_matches__Vfuncout_2537;
    __Vtask_get_arg_matches__Vfuncout_2537 = 0;
    ::IData/*31:0*/ __Vtask_get_arg_matches__Vfuncout_2538;
    __Vtask_get_arg_matches__Vfuncout_2538 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ unnamedblk254__DOT__i;
    unnamedblk254__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk254__DOT__i__Vloopsize;
    unnamedblk254__DOT__i__Vloopsize = 0;
    ::IData/*31:0*/ unnamedblk255__DOT__i;
    unnamedblk255__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk255__DOT__i__Vloopsize;
    unnamedblk255__DOT__i__Vloopsize = 0;
    ::IData/*31:0*/ unnamedblk256__DOT__i;
    unnamedblk256__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk256__DOT__i__Vloopsize;
    unnamedblk256__DOT__i__Vloopsize = 0;
    ::IData/*31:0*/ unnamedblk257__DOT__i;
    unnamedblk257__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk257__DOT__i__Vloopsize;
    unnamedblk257__DOT__i__Vloopsize = 0;
    ::VlQueue<::std::string> args;
    args.clear();
    args.atDefault().clear();
    VL_NULL_CHECK(this->__PVT__clp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 1155)->__VnoInFunc_get_arg_matches(vlSymsp, "/^\\+(UVM_SET_CONFIG_INT|uvm_set_config_int)=/"s, args, __Vtask_get_arg_matches__Vfuncout_2535);
    unnamedblk254__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk254__DOT__i, args.size())) {
        unnamedblk254__DOT__i__Vloopsize = args.size();
        this->__VnoInFunc_m_process_config(vlProcess, vlSymsp, 
                                           VL_CVT_PACK_STR_NN(
                                                              VL_SUBSTR_N(args.at(unnamedblk254__DOT__i),0x00000014U,
                                                                          (VL_LEN_IN(args.at(unnamedblk254__DOT__i)) 
                                                                           - (::IData)(1U)))), 1U, 0U);
        if ((unnamedblk254__DOT__i__Vloopsize <= args.size())) {
            unnamedblk254__DOT__i = ((::IData)(1U) 
                                     + unnamedblk254__DOT__i);
        }
    }
    VL_NULL_CHECK(this->__PVT__clp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 1159)->__VnoInFunc_get_arg_matches(vlSymsp, "/^\\+(UVM_SET_CONFIG_BITSTREAM|uvm_set_config_bitstream)=/"s, args, __Vtask_get_arg_matches__Vfuncout_2536);
    unnamedblk255__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk255__DOT__i, args.size())) {
        unnamedblk255__DOT__i__Vloopsize = args.size();
        this->__VnoInFunc_m_process_config(vlProcess, vlSymsp, 
                                           VL_CVT_PACK_STR_NN(
                                                              VL_SUBSTR_N(args.at(unnamedblk255__DOT__i),0x0000001aU,
                                                                          (VL_LEN_IN(args.at(unnamedblk255__DOT__i)) 
                                                                           - (::IData)(1U)))), 0U, 1U);
        if ((unnamedblk255__DOT__i__Vloopsize <= args.size())) {
            unnamedblk255__DOT__i = ((::IData)(1U) 
                                     + unnamedblk255__DOT__i);
        }
    }
    VL_NULL_CHECK(this->__PVT__clp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 1163)->__VnoInFunc_get_arg_matches(vlSymsp, "/^\\+(UVM_SET_CONFIG_STRING|uvm_set_config_string)=/"s, args, __Vtask_get_arg_matches__Vfuncout_2537);
    unnamedblk256__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk256__DOT__i, args.size())) {
        unnamedblk256__DOT__i__Vloopsize = args.size();
        this->__VnoInFunc_m_process_config(vlProcess, vlSymsp, 
                                           VL_CVT_PACK_STR_NN(
                                                              VL_SUBSTR_N(args.at(unnamedblk256__DOT__i),0x00000017U,
                                                                          (VL_LEN_IN(args.at(unnamedblk256__DOT__i)) 
                                                                           - (::IData)(1U)))), 0U, 0U);
        if ((unnamedblk256__DOT__i__Vloopsize <= args.size())) {
            unnamedblk256__DOT__i = ((::IData)(1U) 
                                     + unnamedblk256__DOT__i);
        }
    }
    VL_NULL_CHECK(this->__PVT__clp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 1167)->__VnoInFunc_get_arg_matches(vlSymsp, "/^\\+(UVM_SET_DEFAULT_SEQUENCE|uvm_set_default_sequence)=/"s, args, __Vtask_get_arg_matches__Vfuncout_2538);
    unnamedblk257__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk257__DOT__i, args.size())) {
        unnamedblk257__DOT__i__Vloopsize = args.size();
        this->__VnoInFunc_m_process_default_sequence(vlProcess, vlSymsp, 
                                                     VL_CVT_PACK_STR_NN(
                                                                        VL_SUBSTR_N(args.at(unnamedblk257__DOT__i),0x0000001aU,
                                                                                (VL_LEN_IN(args.at(unnamedblk257__DOT__i)) 
                                                                                - (::IData)(1U)))));
        if ((unnamedblk257__DOT__i__Vloopsize <= args.size())) {
            unnamedblk257__DOT__i = ((::IData)(1U) 
                                     + unnamedblk257__DOT__i);
        }
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_do_max_quit_settings(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_do_max_quit_settings\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_get_arg_values__Vfuncout_2539;
    __Vtask_get_arg_values__Vfuncout_2539 = 0;
    ::CData/*7:0*/ __Vtask_uvm_string_split__sep_2541;
    __Vtask_uvm_string_split__sep_2541 = 0;
    ::IData/*31:0*/ __Vtask_uvm_string_split__s_2542;
    __Vtask_uvm_string_split__s_2542 = 0;
    ::IData/*31:0*/ __Vtask_uvm_string_split__e_2543;
    __Vtask_uvm_string_split__e_2543 = 0;
    ::IData/*31:0*/ __Vtask_uvm_string_split__limit_2544;
    __Vtask_uvm_string_split__limit_2544 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string unnamedblk258__DOT__max_quit_list;
    ::std::string unnamedblk258__DOT__sep;
    ::IData/*31:0*/ unnamedblk258__DOT__unnamedblk259__DOT__i;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_server> srvr;
    ::VlQueue<::std::string> max_quit_settings;
    ::IData/*31:0*/ max_quit_count;
    ::std::string max_quit;
    ::VlQueue<::std::string> split_max_quit;
    ::IData/*31:0*/ max_quit_int;
    ::IData/*31:0*/ i;
    ::std::string tmp;
    max_quit_settings.clear();
    max_quit_settings.atDefault().clear();
    max_quit_count = 0U;
    max_quit = ""s;
    split_max_quit.clear();
    split_max_quit.atDefault().clear();
    max_quit_int = 0U;
    i = 0U;
    tmp = ""s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_report_server__Vclpkg.__VnoInFunc_get_server(vlProcess, vlSymsp, srvr);
    VL_NULL_CHECK(this->__PVT__clp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 1187)->__VnoInFunc_get_arg_values(vlSymsp, "+UVM_MAX_QUIT_COUNT="s, max_quit_settings, __Vtask_get_arg_values__Vfuncout_2539);
    max_quit_count = __Vtask_get_arg_values__Vfuncout_2539;
    if (VL_UNLIKELY(((0U != max_quit_count)))) {
        max_quit = max_quit_settings.at(0U);
        if (VL_UNLIKELY((VL_LTS_III(32, 1U, max_quit_count)))) {
            unnamedblk258__DOT__max_quit_list = ""s;
            unnamedblk258__DOT__sep = ""s;
            unnamedblk258__DOT__unnamedblk259__DOT__i = 0U;
            unnamedblk258__DOT__unnamedblk259__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk258__DOT__unnamedblk259__DOT__i, max_quit_settings.size())) {
                if ((0U != unnamedblk258__DOT__unnamedblk259__DOT__i)) {
                    unnamedblk258__DOT__sep = "; "s;
                }
                unnamedblk258__DOT__max_quit_list = 
                    VL_CONCATN_NNN(VL_CONCATN_NNN(unnamedblk258__DOT__max_quit_list, unnamedblk258__DOT__sep), max_quit_settings.at(unnamedblk258__DOT__unnamedblk259__DOT__i));
                unnamedblk258__DOT__unnamedblk259__DOT__i 
                    = ((::IData)(1U) + unnamedblk258__DOT__unnamedblk259__DOT__i);
            }
            this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "MULTMAXQUIT"s, VL_SFORMATF_N_NX("Multiple (%0d) +UVM_MAX_QUIT_COUNT arguments provided on the command line.  '%s' will be used.  Provided list: %s.",3
                                                                                , '~',32,max_quit_count
                                                                                , 'S',&(max_quit)
                                                                                , 'S',&(unnamedblk258__DOT__max_quit_list)) , 0U, ""s, 0U, ""s, 0U);
        }
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "MAXQUITSET"s, VL_SFORMATF_N_NX("'+UVM_MAX_QUIT_COUNT=%s' provided on the command line is being applied.",1
                                                                                , 'S',&(max_quit)) , 0U, ""s, 0U, ""s, 0U);
        __Vtask_uvm_string_split__sep_2541 = 0x2cU;
        this->__Vtask_uvm_string_split__str_2540 = max_quit;
        __Vtask_uvm_string_split__s_2542 = 0U;
        __Vtask_uvm_string_split__e_2543 = 0U;
        __Vtask_uvm_string_split__limit_2544 = 0U;
        split_max_quit.clear();
        __Vtask_uvm_string_split__limit_2544 = ((::IData)(1U) 
                                                + VL_LEN_IN(this->__Vtask_uvm_string_split__str_2540));
        do {
            __Vtask_uvm_string_split__s_2542 = __Vtask_uvm_string_split__e_2543;
            {
                while (VL_LTS_III(32, __Vtask_uvm_string_split__e_2543, 
                                  VL_LEN_IN(this->__Vtask_uvm_string_split__str_2540))) {
                    if ((VL_GETC_N(this->__Vtask_uvm_string_split__str_2540,__Vtask_uvm_string_split__e_2543) 
                         == (::IData)(__Vtask_uvm_string_split__sep_2541))) {
                        goto __Vlabel0;
                    }
                    __Vtask_uvm_string_split__e_2543 
                        = ((::IData)(1U) + __Vtask_uvm_string_split__e_2543);
                }
                __Vlabel0: ;
            }
            split_max_quit.push_back(VL_SUBSTR_N(this->__Vtask_uvm_string_split__str_2540,__Vtask_uvm_string_split__s_2542,
                                                 (__Vtask_uvm_string_split__e_2543 
                                                  - (::IData)(1U))));
            __Vtask_uvm_string_split__e_2543 = ((::IData)(1U) 
                                                + __Vtask_uvm_string_split__e_2543);
        } while (VL_LTS_III(32, __Vtask_uvm_string_split__e_2543, __Vtask_uvm_string_split__limit_2544));
        tmp = split_max_quit.at(0U);
        i = VL_SSCANF_INNX(64,tmp,"%d",1, '#',32,&(max_quit_int)) ;
        if (("YES"s == split_max_quit.at(1U))) {
            VL_NULL_CHECK(srvr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 1217)->__VnoInFunc_set_max_quit_count(vlProcess, vlSymsp, max_quit_int, 1U);
        } else if (("NO"s == split_max_quit.at(1U))) {
            VL_NULL_CHECK(srvr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 1221)->__VnoInFunc_set_max_quit_count(vlProcess, vlSymsp, max_quit_int, 0U);
        } else {
            VL_NULL_CHECK(srvr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 1225)->__VnoInFunc_set_max_quit_count(vlProcess, vlSymsp, max_quit_int, 1U);
        }
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_do_dump_args(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_do_dump_args\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_get_arg_matches__Vfuncout_2545;
    __Vtask_get_arg_matches__Vfuncout_2545 = 0;
    ::VlQueue<::std::string> __Vtask_get_args__args_2546;
    ::std::string __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCall_0__get_arg_matches;
    ::IData/*31:0*/ unnamedblk260__DOT__idx;
    unnamedblk260__DOT__idx = 0;
    ::IData/*31:0*/ unnamedblk260__DOT__idx__Vloopsize;
    unnamedblk260__DOT__idx__Vloopsize = 0;
    ::VlQueue<::std::string> dump_args;
    ::VlQueue<::std::string> all_args;
    dump_args.clear();
    dump_args.atDefault().clear();
    all_args.clear();
    all_args.atDefault().clear();
    VL_NULL_CHECK(this->__PVT__clp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 1239)->__VnoInFunc_get_arg_matches(vlSymsp, "+UVM_DUMP_CMDLINE_ARGS"s, dump_args, __Vtask_get_arg_matches__Vfuncout_2545);
    __VlefCall_0__get_arg_matches = __Vtask_get_arg_matches__Vfuncout_2545;
    if (VL_UNLIKELY(((0U != __VlefCall_0__get_arg_matches)))) {
        VL_NULL_CHECK(this->__PVT__clp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 1240)->__VnoInFunc_get_args(vlSymsp, __Vtask_get_args__args_2546);
        all_args = __Vtask_get_args__args_2546;
        unnamedblk260__DOT__idx = 0U;
        while (VL_LTS_III(32, unnamedblk260__DOT__idx, all_args.size())) {
            unnamedblk260__DOT__idx__Vloopsize = all_args.size();
            __Vtemp_1 = all_args.at(unnamedblk260__DOT__idx);
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "DUMPARGS"s, VL_SFORMATF_N_NX("idx=%0d arg=[%s]",2
                                                                                , '~',32,unnamedblk260__DOT__idx
                                                                                , 'S',&(__Vtemp_1)) , 0U, ""s, 0U, ""s, 0U);
            if ((unnamedblk260__DOT__idx__Vloopsize 
                 <= all_args.size())) {
                unnamedblk260__DOT__idx = ((::IData)(1U) 
                                           + unnamedblk260__DOT__idx);
            }
        }
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_check_verbosity(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_check_verbosity\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ verbosity;
    verbosity = 0x000000c8U;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_cmdline_verbosity__Vclpkg.__VnoInFunc_init(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root>{this});
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_cmdline_verbosity__Vclpkg.__VnoInFunc_check(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root>{this});
    if (VL_LTS_III(32, 0U, vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_cmdline_verbosity__Vclpkg.__Vnontrivs.__PVT__settings.size())) {
        verbosity = VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_cmdline_verbosity__Vclpkg.__Vnontrivs.__PVT__settings.at(0U), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 1260)
            ->__PVT__verbosity;
    }
    this->__VnoInFunc_set_report_verbosity_level_hier(vlProcess, vlSymsp, verbosity);
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_run_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_run_phase\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk261__DOT___local_report_object_;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_cmdline_set_action__Vclpkg.__VnoInFunc_check(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root>{this});
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_cmdline_set_severity__Vclpkg.__VnoInFunc_check(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root>{this});
    if ((0ULL < VL_TIME_UNITED_Q(1000))) {
        this->__VnoInFunc_uvm_get_report_object(vlSymsp, __VlefCall_0__uvm_get_report_object);
        VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 1291)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk261__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk261__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 1291)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 3U, "RUNPHSTIME"s, __VlefCall_1__get_report_verbosity_level);
        __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
        if (__VlefLogAnd_3) {
            VL_NULL_CHECK(unnamedblk261__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh", 1291)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 3U, "RUNPHSTIME"s, __VlefCall_2__get_report_action);
            __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_3))) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "RUNPHSTIME"s, 
                                               VL_CVT_PACK_STR_NN(
                                                                  VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("The run phase must start at time 0, current time is "s, VL_SFORMATF_N_NX("%0t",2, 'T',-9
                                                                                , 'D',VL_TIME_UNITED_D(1000)) ), ". No non-zero delays are allowed before "s), "run_test(), and pre-run user defined phases may not consume "s), "simulation time before the start of the run phase."s)), 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_root.svh"s, 0x0000050bU, ""s, 1U);
        }
    }
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_root::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_root::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_phase_all_done = 0;
}

Vtb_top_uvm_pkg__03a__03auvm_root::~Vtb_top_uvm_pkg__03a__03auvm_root() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_root::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_root::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_root::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_root::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_root::to_string_middle\n"); );
    // Body
    std::string out;
    out += "clp:" + VL_TO_STRING(__PVT__clp);
    out += ", finish_on_completion:" + VL_TO_STRING(__PVT__finish_on_completion);
    out += ", top_levels:" + VL_TO_STRING(__PVT__top_levels);
    out += ", enable_print_topology:" + VL_TO_STRING(__PVT__enable_print_topology);
    out += ", phase_timeout:" + VL_TO_STRING(__PVT__phase_timeout);
    out += ", m_uvm_verbosity_settings:" + VL_TO_STRING(__PVT__m_uvm_verbosity_settings);
    out += ", m_time_settings:" + VL_TO_STRING(__PVT__m_time_settings);
    out += ", m_phase_all_done:" + VL_TO_STRING(__PVT__m_phase_all_done);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_component::to_string_middle();
    return (out);
}
