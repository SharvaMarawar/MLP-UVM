// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_report_catcher__Vclpkg::__VnoInFunc_process_all_report_catchers(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_message> rm, ::IData/*31:0*/ &process_all_report_catchers__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_report_catcher__Vclpkg::__VnoInFunc_process_all_report_catchers\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_catcher> __Vfunc_get_first__Vfuncout_1094;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_catcher> __Vfunc_get_next__Vfuncout_1095;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_catcher> __Vfunc_get_next__Vfuncout_1096;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*1:0*/ __VlefCall_11__get_severity;
    ::CData/*1:0*/ __VlefCall_10__get_severity;
    ::CData/*1:0*/ __VlefCall_9__get_severity;
    ::IData/*31:0*/ __VlefCall_8__get_report_action;
    ::CData/*1:0*/ __VlefCall_7__get_severity;
    ::IData/*31:0*/ __VlefCall_6__get_report_action;
    ::IData/*31:0*/ __VlefCall_5__get_action;
    ::CData/*0:0*/ __VlefLogAnd_4;
    ::CData/*1:0*/ __VlefCall_3__get_severity;
    ::CData/*0:0*/ __VlefCall_2__callback_mode;
    ::IData/*31:0*/ __VlefExpr_1;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> __VlefCall_0__clone;
    ::VlClassRef<Vtb_top_std__03a__03aprocess> unnamedblk4__DOT__p;
    ::std::string unnamedblk4__DOT__randstate;
    ::CData/*1:0*/ unnamedblk5__DOT__prev_sev;
    ::IData/*31:0*/ iter;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_catcher> catcher;
    ::IData/*31:0*/ thrown;
    ::CData/*1:0*/ orig_severity;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> l_report_object;
    {
        process_all_report_catchers__Vfuncrtn = 0U;
        iter = 0U;
        thrown = 1U;
        orig_severity = 0U;
        VL_NULL_CHECK(rm, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_catcher.svh", 559)->__VnoInFunc_get_report_object(vlSymsp, l_report_object);
        if (this->__PVT__process_all_report_catchers__Vstatic__in_catcher) {
            process_all_report_catchers__Vfuncrtn = 1U;
            goto __Vlabel0;
        }
        this->__PVT__process_all_report_catchers__Vstatic__in_catcher = 1U;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_tracing = 0U;
        VL_NULL_CHECK(rm, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_catcher.svh", 567)->__VnoInFunc_get_severity(vlSymsp, orig_severity);
        this->__Vnontrivs.__PVT__m_modified_report_message 
            = rm;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_callbacks__pi0a4c0d29__Vclpkg.__VnoInFunc_get_first(vlProcess, vlSymsp, iter, l_report_object, __Vfunc_get_first__Vfuncout_1094);
        catcher = __Vfunc_get_first__Vfuncout_1094;
        if ((VlNull{} != catcher)) {
            if ((0U != (2U & this->__PVT__m_debug_flags))) {
                vlSymsp->vlInst.TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, unnamedblk4__DOT__p);
                unnamedblk4__DOT__randstate = ""s;
                if ((VlNull{} != unnamedblk4__DOT__p)) {
                    VL_NULL_CHECK(unnamedblk4__DOT__p, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_catcher.svh", 577)->__VnoInFunc_get_randstate(vlSymsp, unnamedblk4__DOT__randstate);
                }
                VL_NULL_CHECK(rm, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_catcher.svh", 580)->__VnoInFunc_clone(vlProcess, vlSymsp, __VlefCall_0__clone);
                __VlefExpr_1 = VL_CAST_DYNAMIC(__VlefCall_0__clone, this->__Vnontrivs.__PVT__m_orig_report_message);
                if (VL_UNLIKELY(((1U & (~ (0U != __VlefExpr_1)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: uvm_report_catcher.svh:580: Assertion failed in %m: '$cast' failed.\n",3, 'M',vlSymsp->name(),"uvm_pkg.uvm_report_catcher.process_all_report_catchers.unnamedblk4", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_catcher.svh", 580, "");
                }
                if ((VlNull{} != unnamedblk4__DOT__p)) {
                    VL_NULL_CHECK(unnamedblk4__DOT__p, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_catcher.svh", 583)->__VnoInFunc_set_randstate(vlSymsp, unnamedblk4__DOT__randstate);
                }
            }
        }
        {
            while ((VlNull{} != catcher)) {
                {
                    unnamedblk5__DOT__prev_sev = 0U;
                    VL_NULL_CHECK(catcher, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_catcher.svh", 591)->__VnoInFunc_callback_mode(vlSymsp, 0xffffffffU, __VlefCall_2__callback_mode);
                    if ((1U & (~ (::IData)(__VlefCall_2__callback_mode)))) {
                        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_callbacks__pi0a4c0d29__Vclpkg.__VnoInFunc_get_next(vlProcess, vlSymsp, iter, l_report_object, __Vfunc_get_next__Vfuncout_1095);
                        catcher = __Vfunc_get_next__Vfuncout_1095;
                        goto __Vlabel2;
                    }
                    VL_NULL_CHECK(this->__Vnontrivs.__PVT__m_modified_report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_catcher.svh", 596)->__VnoInFunc_get_severity(vlSymsp, unnamedblk5__DOT__prev_sev);
                    this->__PVT__m_set_action_called = 0U;
                    VL_NULL_CHECK(catcher, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_catcher.svh", 598)->__VnoInFunc_process_report_catcher(vlProcess, vlSymsp, thrown);
                    __VlefLogAnd_4 = (1U & (~ (::IData)(this->__PVT__m_set_action_called)));
                    if (__VlefLogAnd_4) {
                        VL_NULL_CHECK(this->__Vnontrivs.__PVT__m_modified_report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_catcher.svh", 604)->__VnoInFunc_get_severity(vlSymsp, __VlefCall_3__get_severity);
                        __VlefLogAnd_4 = ((::IData)(__VlefCall_3__get_severity) 
                                          != (::IData)(unnamedblk5__DOT__prev_sev));
                    }
                    if (__VlefLogAnd_4) {
                        VL_NULL_CHECK(this->__Vnontrivs.__PVT__m_modified_report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_catcher.svh", 605)->__VnoInFunc_get_action(vlSymsp, __VlefCall_5__get_action);
                        VL_NULL_CHECK(l_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_catcher.svh", 606)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, unnamedblk5__DOT__prev_sev, "*@&*^*^*#"s, __VlefCall_6__get_report_action);
                        __VlefLogAnd_4 = (__VlefCall_5__get_action 
                                          == __VlefCall_6__get_report_action);
                    }
                    if (__VlefLogAnd_4) {
                        VL_NULL_CHECK(this->__Vnontrivs.__PVT__m_modified_report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_catcher.svh", 609)->__VnoInFunc_get_severity(vlSymsp, __VlefCall_7__get_severity);
                        VL_NULL_CHECK(l_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_catcher.svh", 609)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, __VlefCall_7__get_severity, "*@&*^*^*#"s, __VlefCall_8__get_report_action);
                        VL_NULL_CHECK(this->__Vnontrivs.__PVT__m_modified_report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_catcher.svh", 608)->__VnoInFunc_set_action(vlSymsp, __VlefCall_8__get_report_action);
                    }
                    if ((0U == thrown)) {
                        if ((3U == (::IData)(orig_severity))) {
                            this->__PVT__m_caught_fatal 
                                = ((::IData)(1U) + this->__PVT__m_caught_fatal);
                        } else if ((2U == (::IData)(orig_severity))) {
                            this->__PVT__m_caught_error 
                                = ((::IData)(1U) + this->__PVT__m_caught_error);
                        } else if ((1U == (::IData)(orig_severity))) {
                            this->__PVT__m_caught_warning 
                                = ((::IData)(1U) + this->__PVT__m_caught_warning);
                        }
                        goto __Vlabel1;
                    }
                    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_callbacks__pi0a4c0d29__Vclpkg.__VnoInFunc_get_next(vlProcess, vlSymsp, iter, l_report_object, __Vfunc_get_next__Vfuncout_1096);
                    catcher = __Vfunc_get_next__Vfuncout_1096;
                    __Vlabel2: ;
                }
            }
            __Vlabel1: ;
        }
        if ((3U == (::IData)(orig_severity))) {
            VL_NULL_CHECK(this->__Vnontrivs.__PVT__m_modified_report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_catcher.svh", 636)->__VnoInFunc_get_severity(vlSymsp, __VlefCall_9__get_severity);
            if (((::IData)(__VlefCall_9__get_severity) 
                 < (::IData)(orig_severity))) {
                this->__PVT__m_demoted_fatal = ((::IData)(1U) 
                                                + this->__PVT__m_demoted_fatal);
            }
        } else if ((2U == (::IData)(orig_severity))) {
            VL_NULL_CHECK(this->__Vnontrivs.__PVT__m_modified_report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_catcher.svh", 645)->__VnoInFunc_get_severity(vlSymsp, __VlefCall_10__get_severity);
            if (((::IData)(__VlefCall_10__get_severity) 
                 < (::IData)(orig_severity))) {
                this->__PVT__m_demoted_error = ((::IData)(1U) 
                                                + this->__PVT__m_demoted_error);
            }
        } else if ((1U == (::IData)(orig_severity))) {
            VL_NULL_CHECK(this->__Vnontrivs.__PVT__m_modified_report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_catcher.svh", 654)->__VnoInFunc_get_severity(vlSymsp, __VlefCall_11__get_severity);
            if (((::IData)(__VlefCall_11__get_severity) 
                 < (::IData)(orig_severity))) {
                this->__PVT__m_demoted_warning = ((::IData)(1U) 
                                                  + this->__PVT__m_demoted_warning);
            }
        }
        this->__PVT__process_all_report_catchers__Vstatic__in_catcher = 0U;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_tracing = 1U;
        process_all_report_catchers__Vfuncrtn = thrown;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_report_catcher__Vclpkg::__VnoInFunc_summarize(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_report_catcher__Vclpkg::__VnoInFunc_summarize\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_7__m_uvm_string_queue_join;
    ::CData/*0:0*/ __VlefLogAnd_6;
    ::IData/*31:0*/ __VlefCall_5__get_report_action;
    ::IData/*31:0*/ __VlefCall_4__get_report_verbosity_level;
    ::std::string __VlefCall_3__m_uvm_string_queue_join;
    ::CData/*0:0*/ __VlefLogAnd_2;
    ::IData/*31:0*/ __VlefCall_1__get_report_action;
    ::IData/*31:0*/ __VlefCall_0__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk6__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk7__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> root;
    ::IData/*31:0*/ action;
    ::VlQueue<::std::string> q;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, root);
    action = 0U;
    q.clear();
    q.atDefault().clear();
    if (this->__PVT__do_report) {
        q.push_back("\n--- UVM Report catcher Summary ---\n\n\n"s);
        q.push_back(VL_SFORMATF_N_NX("Number of demoted UVM_FATAL reports  :%5d\n",1
                                     , '~',32,this->__PVT__m_demoted_fatal) );
        q.push_back(VL_SFORMATF_N_NX("Number of demoted UVM_ERROR reports  :%5d\n",1
                                     , '~',32,this->__PVT__m_demoted_error) );
        q.push_back(VL_SFORMATF_N_NX("Number of demoted UVM_WARNING reports:%5d\n",1
                                     , '~',32,this->__PVT__m_demoted_warning) );
        q.push_back(VL_SFORMATF_N_NX("Number of caught UVM_FATAL reports   :%5d\n",1
                                     , '~',32,this->__PVT__m_caught_fatal) );
        q.push_back(VL_SFORMATF_N_NX("Number of caught UVM_ERROR reports   :%5d\n",1
                                     , '~',32,this->__PVT__m_caught_error) );
        q.push_back(VL_SFORMATF_N_NX("Number of caught UVM_WARNING reports :%5d\n",1
                                     , '~',32,this->__PVT__m_caught_warning) );
        if ((0x80000001U == file)) {
            VL_NULL_CHECK(root, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_catcher.svh", 720)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk6__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk6__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_catcher.svh", 720)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "UVM/REPORT/CATCHER"s, __VlefCall_0__get_report_verbosity_level);
            __VlefLogAnd_2 = VL_LTES_III(32, 0x00000064U, __VlefCall_0__get_report_verbosity_level);
            if (__VlefLogAnd_2) {
                VL_NULL_CHECK(unnamedblk6__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_catcher.svh", 720)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "UVM/REPORT/CATCHER"s, __VlefCall_1__get_report_action);
                __VlefLogAnd_2 = (0U != __VlefCall_1__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_2))) {
                this->__Vnontrivs.__Vfunc_m_uvm_string_queue_join__Vfuncout_1097 = ""s;
                this->__Vnontrivs.__Vfunc_m_uvm_string_queue_join__Vfuncout_1097 
                    = VL_CVT_PACK_STR_ND(VL_STREAMR_NRI(0, q, 1U));
                __VlefCall_3__m_uvm_string_queue_join 
                    = this->__Vnontrivs.__Vfunc_m_uvm_string_queue_join__Vfuncout_1097;
                VL_NULL_CHECK(unnamedblk6__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_catcher.svh", 720)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "UVM/REPORT/CATCHER"s, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_3__m_uvm_string_queue_join), 0x00000064U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_catcher.svh"s, 0x000002d0U, ""s, 1U);
            }
        } else {
            VL_NULL_CHECK(root, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_catcher.svh", 724)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "UVM/REPORT/CATCHER"s, action);
            VL_NULL_CHECK(root, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_catcher.svh", 725)->__VnoInFunc_set_report_id_action(vlProcess, vlSymsp, "UVM/REPORT/CATCHER"s, 2U);
            VL_NULL_CHECK(root, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_catcher.svh", 726)->__VnoInFunc_set_report_id_file(vlProcess, vlSymsp, "UVM/REPORT/CATCHER"s, file);
            VL_NULL_CHECK(root, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_catcher.svh", 727)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk7__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk7__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_catcher.svh", 727)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "UVM/REPORT/CATCHER"s, __VlefCall_4__get_report_verbosity_level);
            __VlefLogAnd_6 = VL_LTES_III(32, 0x00000064U, __VlefCall_4__get_report_verbosity_level);
            if (__VlefLogAnd_6) {
                VL_NULL_CHECK(unnamedblk7__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_catcher.svh", 727)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "UVM/REPORT/CATCHER"s, __VlefCall_5__get_report_action);
                __VlefLogAnd_6 = (0U != __VlefCall_5__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_6))) {
                this->__Vnontrivs.__Vfunc_m_uvm_string_queue_join__Vfuncout_1098 = ""s;
                this->__Vnontrivs.__Vfunc_m_uvm_string_queue_join__Vfuncout_1098 
                    = VL_CVT_PACK_STR_ND(VL_STREAMR_NRI(0, q, 1U));
                __VlefCall_7__m_uvm_string_queue_join 
                    = this->__Vnontrivs.__Vfunc_m_uvm_string_queue_join__Vfuncout_1098;
                VL_NULL_CHECK(unnamedblk7__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_catcher.svh", 727)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "UVM/REPORT/CATCHER"s, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_7__m_uvm_string_queue_join), 0x00000064U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_catcher.svh"s, 0x000002d7U, ""s, 1U);
            }
            VL_NULL_CHECK(root, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_catcher.svh", 728)->__VnoInFunc_set_report_id_action(vlProcess, vlSymsp, "UVM/REPORT/CATCHER"s, action);
        }
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_report_catcher::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_uvm_pkg__03a__03auvm_callback::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_catcher::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__do_report = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_catch(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &catch__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_catch\n"); );
    // Body
    catch__Vfuncrtn = 0U;
}

void Vtb_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_uvm_report_error(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string id, ::std::string message, ::IData/*31:0*/ verbosity, ::std::string fname, ::IData/*31:0*/ line, ::std::string context_name, ::CData/*0:0*/ report_enabled_checked) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_uvm_report_error\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_uvm_report(vlProcess, vlSymsp, 2U, id, message, 0U, fname, line, context_name, (::IData)(report_enabled_checked));
}

void Vtb_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_uvm_report(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::CData/*1:0*/ severity, ::std::string id, ::std::string message, ::IData/*31:0*/ verbosity, ::std::string fname, ::IData/*31:0*/ line, ::std::string context_name, ::CData/*0:0*/ report_enabled_checked) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_uvm_report\n"); );
    // Locals
    ::IData/*31:0*/ __Vfunc_uvm_report_enabled__verbosity_1089;
    __Vfunc_uvm_report_enabled__verbosity_1089 = 0;
    ::CData/*1:0*/ __Vfunc_uvm_report_enabled__severity_1090;
    __Vfunc_uvm_report_enabled__severity_1090 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1092;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1948;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_message> l_report_message;
    {
        if ((1U & (~ (::IData)(report_enabled_checked)))) {
            this->__Vfunc_uvm_report_enabled__id_1091 
                = id;
            __Vfunc_uvm_report_enabled__severity_1090 
                = severity;
            __Vfunc_uvm_report_enabled__verbosity_1089 
                = verbosity;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1092);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1092;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_enabled__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 100)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1948);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__Vfuncout_1948;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_enabled__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 101)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__verbosity_1089, (::IData)(__Vfunc_uvm_report_enabled__severity_1090), this->__Vfunc_uvm_report_enabled__id_1091, __VlefCall_0__uvm_report_enabled);
            if ((1U & (~ (0U != __VlefCall_0__uvm_report_enabled)))) {
                goto __Vlabel0;
            }
        }
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_report_message__Vclpkg.__VnoInFunc_new_report_message(vlProcess, vlSymsp, "uvm_report_message"s, l_report_message);
        VL_NULL_CHECK(l_report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_catcher.svh", 495)->__VnoInFunc_set_report_message(vlSymsp, severity, id, message, verbosity, fname, line, context_name);
        this->__VnoInFunc_uvm_process_report_message(vlProcess, vlSymsp, l_report_message);
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_uvm_process_report_message(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_message> msg) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_uvm_process_report_message\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCall_5__get_report_file_handle;
    ::std::string __VlefCall_4__get_id;
    ::CData/*1:0*/ __VlefCall_3__get_severity;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_handler> __VlefCall_2__get_report_handler;
    ::std::string __VlefCall_1__get_id;
    ::CData/*1:0*/ __VlefCall_0__get_severity;
    ::std::string unnamedblk3__DOT__composed_message;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_server> unnamedblk3__DOT__rs;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> ro;
    ::IData/*31:0*/ a;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__Vnontrivs.__PVT__m_modified_report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_catcher.svh", 501)->__VnoInFunc_get_report_object(vlSymsp, ro);
    VL_NULL_CHECK(msg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_catcher.svh", 502)->__VnoInFunc_get_severity(vlSymsp, __VlefCall_0__get_severity);
    VL_NULL_CHECK(msg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_catcher.svh", 502)->__VnoInFunc_get_id(vlSymsp, __VlefCall_1__get_id);
    VL_NULL_CHECK(ro, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_catcher.svh", 502)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, __VlefCall_0__get_severity, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__get_id), a);
    if ((0U != a)) {
        unnamedblk3__DOT__composed_message = ""s;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__Vnontrivs.__PVT__m_modified_report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_catcher.svh", 506)->__VnoInFunc_get_report_server(vlSymsp, unnamedblk3__DOT__rs);
        VL_NULL_CHECK(msg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_catcher.svh", 508)->__VnoInFunc_set_report_object(vlSymsp, ro);
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__Vnontrivs.__PVT__m_modified_report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_catcher.svh", 509)->__VnoInFunc_get_report_handler(vlSymsp, __VlefCall_2__get_report_handler);
        VL_NULL_CHECK(msg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_catcher.svh", 509)->__VnoInFunc_set_report_handler(vlSymsp, __VlefCall_2__get_report_handler);
        VL_NULL_CHECK(msg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_catcher.svh", 510)->__VnoInFunc_set_report_server(vlSymsp, unnamedblk3__DOT__rs);
        VL_NULL_CHECK(msg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_catcher.svh", 511)->__VnoInFunc_get_severity(vlSymsp, __VlefCall_3__get_severity);
        VL_NULL_CHECK(msg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_catcher.svh", 511)->__VnoInFunc_get_id(vlSymsp, __VlefCall_4__get_id);
        VL_NULL_CHECK(ro, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_catcher.svh", 511)->__VnoInFunc_get_report_file_handle(vlProcess, vlSymsp, __VlefCall_3__get_severity, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_4__get_id), __VlefCall_5__get_report_file_handle);
        VL_NULL_CHECK(msg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_catcher.svh", 511)->__VnoInFunc_set_file(vlSymsp, __VlefCall_5__get_report_file_handle);
        VL_NULL_CHECK(msg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_catcher.svh", 512)->__VnoInFunc_set_action(vlSymsp, a);
        if ((0U != (3U & a))) {
            VL_NULL_CHECK(unnamedblk3__DOT__rs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_catcher.svh", 517)->__VnoInFunc_compose_report_message(vlProcess, vlSymsp, msg, ""s, unnamedblk3__DOT__composed_message);
        }
        VL_NULL_CHECK(unnamedblk3__DOT__rs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_catcher.svh", 520)->__VnoInFunc_execute_report_message(vlProcess, vlSymsp, msg, unnamedblk3__DOT__composed_message);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_process_report_catcher(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &process_report_catcher__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_process_report_catcher\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_0__get_name;
    ::IData/*31:0*/ act;
    {
        process_report_catcher__Vfuncrtn = 0U;
        act = 0U;
        this->__VnoInFunc_catch(vlSymsp, act);
        if (VL_UNLIKELY(((0U == act)))) {
            this->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "RPTCTHR"s, 
                                               VL_CVT_PACK_STR_NN(
                                                                  VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("uvm_report_this.catch() in catcher instance "s, __VlefCall_0__get_name), " must return THROW or CAUGHT"s)), 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_catcher.svh"s, 0x000002abU, ""s, 0U);
        }
        if ((0U != (2U & vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_debug_flags))) {
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__Vnontrivs.__PVT__m_modified_report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_catcher.svh", 688)->__VnoInFunc_copy(vlProcess, vlSymsp, vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__Vnontrivs.__PVT__m_orig_report_message, VlNull{});
        }
        if (((2U == act) & (~ (0U != (1U & vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_debug_flags))))) {
            process_report_catcher__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        process_report_catcher__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_report_catcher::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_catcher::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_top_uvm_pkg__03a__03auvm_report_catcher::~Vtb_top_uvm_pkg__03a__03auvm_report_catcher() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_catcher::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_report_catcher::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_catcher::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_report_catcher::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_catcher::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vtb_top_uvm_pkg__03a__03auvm_callback::to_string_middle();
    return (out);
}
