// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_severity__Vclpkg::__VnoInFunc_init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> ro) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_severity__Vclpkg::__VnoInFunc_init\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_get_arg_values__Vfuncout_2574;
    __Vtask_get_arg_values__Vfuncout_2574 = 0;
    ::CData/*7:0*/ __Vtask_uvm_string_split__sep_2576;
    __Vtask_uvm_string_split__sep_2576 = 0;
    ::IData/*31:0*/ __Vtask_uvm_string_split__s_2577;
    __Vtask_uvm_string_split__s_2577 = 0;
    ::IData/*31:0*/ __Vtask_uvm_string_split__e_2578;
    __Vtask_uvm_string_split__e_2578 = 0;
    ::IData/*31:0*/ __Vtask_uvm_string_split__limit_2579;
    __Vtask_uvm_string_split__limit_2579 = 0;
    ::CData/*1:0*/ __Vfunc_uvm_string_to_severity__sev_1311;
    __Vfunc_uvm_string_to_severity__sev_1311 = 0;
    ::CData/*1:0*/ __Vfunc_uvm_string_to_severity__sev_1313;
    __Vfunc_uvm_string_to_severity__sev_1313 = 0;
    ::std::string __Vtemp_1;
    ::std::string __Vtemp_2;
    ::std::string __Vtemp_3;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_5;
    ::IData/*31:0*/ __VlefCall_4__get_report_action;
    ::IData/*31:0*/ __VlefCall_3__get_report_verbosity_level;
    ::CData/*0:0*/ __VlefCall_2__uvm_string_to_severity;
    ::CData/*0:0*/ __VlefCall_1__uvm_string_to_severity;
    ::IData/*31:0*/ __VlefCall_0__get_arg_values;
    ::CData/*1:0*/ unnamedblk1__DOT__orig_sev;
    ::CData/*1:0*/ unnamedblk1__DOT__sev;
    ::VlQueue<::std::string> unnamedblk1__DOT__args;
    ::std::string unnamedblk1__DOT__message;
    ::CData/*0:0*/ unnamedblk1__DOT__skip;
    ::IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__i;
    unnamedblk1__DOT__unnamedblk2__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__i__Vloopsize;
    unnamedblk1__DOT__unnamedblk2__DOT__i__Vloopsize = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_severity> unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__setting;
    ::VlQueue<::std::string> setting_str;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_cmdline_processor> clp;
    setting_str.clear();
    setting_str.atDefault().clear();
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg.__VnoInFunc_get_inst(vlProcess, vlSymsp, clp);
    VL_NULL_CHECK(clp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 522)->__VnoInFunc_get_arg_values(vlSymsp, "+uvm_set_severity="s, setting_str, __Vtask_get_arg_values__Vfuncout_2574);
    __VlefCall_0__get_arg_values = __Vtask_get_arg_values__Vfuncout_2574;
    if (VL_LTS_III(32, 0U, __VlefCall_0__get_arg_values)) {
        unnamedblk1__DOT__orig_sev = 0U;
        unnamedblk1__DOT__sev = 0U;
        unnamedblk1__DOT__args.clear();
        unnamedblk1__DOT__args.atDefault().clear();
        unnamedblk1__DOT__message = ""s;
        unnamedblk1__DOT__skip = 0U;
        unnamedblk1__DOT__unnamedblk2__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk1__DOT__unnamedblk2__DOT__i, setting_str.size())) {
            unnamedblk1__DOT__unnamedblk2__DOT__i__Vloopsize 
                = setting_str.size();
            unnamedblk1__DOT__skip = 0U;
            __Vtask_uvm_string_split__sep_2576 = 0x2cU;
            this->__Vnontrivs.__Vtask_uvm_string_split__str_2575 
                = VL_CVT_PACK_STR_NN(setting_str.at(unnamedblk1__DOT__unnamedblk2__DOT__i));
            __Vtask_uvm_string_split__s_2577 = 0U;
            __Vtask_uvm_string_split__e_2578 = 0U;
            __Vtask_uvm_string_split__limit_2579 = 0U;
            unnamedblk1__DOT__args.clear();
            __Vtask_uvm_string_split__limit_2579 = 
                ((::IData)(1U) + VL_LEN_IN(this->__Vnontrivs.__Vtask_uvm_string_split__str_2575));
            do {
                __Vtask_uvm_string_split__s_2577 = __Vtask_uvm_string_split__e_2578;
                {
                    while (VL_LTS_III(32, __Vtask_uvm_string_split__e_2578, 
                                      VL_LEN_IN(this->__Vnontrivs.__Vtask_uvm_string_split__str_2575))) {
                        if ((VL_GETC_N(this->__Vnontrivs.__Vtask_uvm_string_split__str_2575,__Vtask_uvm_string_split__e_2578) 
                             == (::IData)(__Vtask_uvm_string_split__sep_2576))) {
                            goto __Vlabel0;
                        }
                        __Vtask_uvm_string_split__e_2578 
                            = ((::IData)(1U) + __Vtask_uvm_string_split__e_2578);
                    }
                    __Vlabel0: ;
                }
                unnamedblk1__DOT__args.push_back(VL_SUBSTR_N(this->__Vnontrivs.__Vtask_uvm_string_split__str_2575,__Vtask_uvm_string_split__s_2577,
                                                             (__Vtask_uvm_string_split__e_2578 
                                                              - (::IData)(1U))));
                __Vtask_uvm_string_split__e_2578 = 
                    ((::IData)(1U) + __Vtask_uvm_string_split__e_2578);
            } while (VL_LTS_III(32, __Vtask_uvm_string_split__e_2578, __Vtask_uvm_string_split__limit_2579));
            if ((4U != unnamedblk1__DOT__args.size())) {
                unnamedblk1__DOT__message = "Invalid number of arguments found, expected 4"s;
                unnamedblk1__DOT__skip = 1U;
            }
            this->__Vnontrivs.__Vfunc_uvm_string_to_severity__sev_str_1310 
                = VL_CVT_PACK_STR_NN(unnamedblk1__DOT__args.at(2U));
            {
                __Vfunc_uvm_string_to_severity__sev_1311 = 0U;
                if (("UVM_INFO"s == this->__Vnontrivs.__Vfunc_uvm_string_to_severity__sev_str_1310)) {
                    __Vfunc_uvm_string_to_severity__sev_1311 = 0U;
                } else if (("UVM_WARNING"s == this->__Vnontrivs.__Vfunc_uvm_string_to_severity__sev_str_1310)) {
                    __Vfunc_uvm_string_to_severity__sev_1311 = 1U;
                } else if (("UVM_ERROR"s == this->__Vnontrivs.__Vfunc_uvm_string_to_severity__sev_str_1310)) {
                    __Vfunc_uvm_string_to_severity__sev_1311 = 2U;
                } else if (("UVM_FATAL"s == this->__Vnontrivs.__Vfunc_uvm_string_to_severity__sev_str_1310)) {
                    __Vfunc_uvm_string_to_severity__sev_1311 = 3U;
                } else {
                    __VlefCall_1__uvm_string_to_severity = 0U;
                    goto __Vlabel1;
                }
                __VlefCall_1__uvm_string_to_severity = 1U;
                __Vlabel1: ;
            }
            unnamedblk1__DOT__orig_sev = __Vfunc_uvm_string_to_severity__sev_1311;
            if ((("_ALL_"s != unnamedblk1__DOT__args.at(2U)) 
                 & (~ (::IData)(__VlefCall_1__uvm_string_to_severity)))) {
                __Vtemp_1 = unnamedblk1__DOT__args.at(2U);
                VL_SFORMAT_NX(unnamedblk1__DOT__message
                              ,"Bad severity argument '%s'",1
                              , 'S',&(__Vtemp_1));
                unnamedblk1__DOT__skip = 1U;
            }
            this->__Vnontrivs.__Vfunc_uvm_string_to_severity__sev_str_1312 
                = VL_CVT_PACK_STR_NN(unnamedblk1__DOT__args.at(3U));
            {
                __Vfunc_uvm_string_to_severity__sev_1313 = 0U;
                if (("UVM_INFO"s == this->__Vnontrivs.__Vfunc_uvm_string_to_severity__sev_str_1312)) {
                    __Vfunc_uvm_string_to_severity__sev_1313 = 0U;
                } else if (("UVM_WARNING"s == this->__Vnontrivs.__Vfunc_uvm_string_to_severity__sev_str_1312)) {
                    __Vfunc_uvm_string_to_severity__sev_1313 = 1U;
                } else if (("UVM_ERROR"s == this->__Vnontrivs.__Vfunc_uvm_string_to_severity__sev_str_1312)) {
                    __Vfunc_uvm_string_to_severity__sev_1313 = 2U;
                } else if (("UVM_FATAL"s == this->__Vnontrivs.__Vfunc_uvm_string_to_severity__sev_str_1312)) {
                    __Vfunc_uvm_string_to_severity__sev_1313 = 3U;
                } else {
                    __VlefCall_2__uvm_string_to_severity = 0U;
                    goto __Vlabel2;
                }
                __VlefCall_2__uvm_string_to_severity = 1U;
                __Vlabel2: ;
            }
            unnamedblk1__DOT__sev = __Vfunc_uvm_string_to_severity__sev_1313;
            if ((1U & (~ (::IData)(__VlefCall_2__uvm_string_to_severity)))) {
                __Vtemp_2 = unnamedblk1__DOT__args.at(3U);
                VL_SFORMAT_NX(unnamedblk1__DOT__message
                              ,"Bad severity argument '%s'",1
                              , 'S',&(__Vtemp_2));
                unnamedblk1__DOT__skip = 1U;
            }
            if (unnamedblk1__DOT__skip) {
                if ((VlNull{} != ro)) {
                    VL_NULL_CHECK(ro, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 561)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT___local_report_object_);
                    VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 561)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "INVLCMDARGS"s, __VlefCall_3__get_report_verbosity_level);
                    __VlefLogAnd_5 = VL_LTES_III(32, 0U, __VlefCall_3__get_report_verbosity_level);
                    if (__VlefLogAnd_5) {
                        VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 561)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "INVLCMDARGS"s, __VlefCall_4__get_report_action);
                        __VlefLogAnd_5 = (0U != __VlefCall_4__get_report_action);
                    }
                    if (VL_UNLIKELY((__VlefLogAnd_5))) {
                        __Vtemp_3 = setting_str.at(unnamedblk1__DOT__unnamedblk2__DOT__i);
                        VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 561)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "INVLCMDARGS"s, VL_SFORMATF_N_NX("%s, setting '+uvm_set_severity=%s' will be ignored.",2
                                                                                , 'S',&(unnamedblk1__DOT__message)
                                                                                , 'S',&(__Vtemp_3)) , 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh"s, 0x00000231U, ""s, 1U);
                    }
                }
            } else {
                unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__setting 
                    = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_severity, vlSymsp);
                VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 547)->__PVT__arg 
                    = setting_str.at(unnamedblk1__DOT__unnamedblk2__DOT__i);
                VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 548)->__PVT__comp 
                    = unnamedblk1__DOT__args.at(0U);
                VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 549)->__PVT__id 
                    = unnamedblk1__DOT__args.at(1U);
                VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 550)->__PVT__all_sev 
                    = ("_ALL_"s == unnamedblk1__DOT__args.at(2U));
                VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 551)->__PVT__orig_sev 
                    = unnamedblk1__DOT__orig_sev;
                VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 552)->__PVT__sev 
                    = unnamedblk1__DOT__sev;
                this->__Vnontrivs.__PVT__settings.push_back(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__setting);
            }
            if ((unnamedblk1__DOT__unnamedblk2__DOT__i__Vloopsize 
                 <= setting_str.size())) {
                unnamedblk1__DOT__unnamedblk2__DOT__i 
                    = ((::IData)(1U) + unnamedblk1__DOT__unnamedblk2__DOT__i);
            }
        }
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_severity__Vclpkg::__VnoInFunc_check(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> ro) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_severity__Vclpkg::__VnoInFunc_check\n"); );
    // Locals
    ::std::string __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_2;
    ::IData/*31:0*/ __VlefCall_1__get_report_action;
    ::IData/*31:0*/ __VlefCall_0__get_report_verbosity_level;
    ::IData/*31:0*/ unnamedblk5__DOT__i;
    unnamedblk5__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk5__DOT__i__Vloopsize;
    unnamedblk5__DOT__i__Vloopsize = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk5__DOT__unnamedblk6__DOT___local_report_object_;
    unnamedblk5__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk5__DOT__i, this->__Vnontrivs.__PVT__settings.size())) {
        unnamedblk5__DOT__i__Vloopsize = this->__Vnontrivs.__PVT__settings.size();
        if ((0U == VL_NULL_CHECK(this->__Vnontrivs.__PVT__settings.at(unnamedblk5__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 575)
             ->__PVT__used.size())) {
            VL_NULL_CHECK(ro, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 580)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk5__DOT__unnamedblk6__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk5__DOT__unnamedblk6__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 580)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "INVLCMDARGS"s, __VlefCall_0__get_report_verbosity_level);
            __VlefLogAnd_2 = VL_LTES_III(32, 0U, __VlefCall_0__get_report_verbosity_level);
            if (__VlefLogAnd_2) {
                VL_NULL_CHECK(unnamedblk5__DOT__unnamedblk6__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 580)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "INVLCMDARGS"s, __VlefCall_1__get_report_action);
                __VlefLogAnd_2 = (0U != __VlefCall_1__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_2))) {
                __Vtemp_1 = VL_NULL_CHECK(this->__Vnontrivs.__PVT__settings.at(unnamedblk5__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 580)
                    ->__PVT__arg;
                VL_NULL_CHECK(unnamedblk5__DOT__unnamedblk6__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 580)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "INVLCMDARGS"s, VL_SFORMATF_N_NX("\"+uvm_set_severity=%s\" never took effect due to a mismatching component pattern",1
                                                                                , 'S',&(__Vtemp_1)) , 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh"s, 0x00000244U, ""s, 1U);
            }
        }
        if ((unnamedblk5__DOT__i__Vloopsize <= this->__Vnontrivs.__PVT__settings.size())) {
            unnamedblk5__DOT__i = ((::IData)(1U) + unnamedblk5__DOT__i);
        }
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_severity__Vclpkg::__VnoInFunc_dump(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string &dump__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_severity__Vclpkg::__VnoInFunc_dump\n"); );
    // Locals
    ::std::string __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ unnamedblk7__DOT__i;
    unnamedblk7__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk7__DOT__i__Vloopsize;
    unnamedblk7__DOT__i__Vloopsize = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_severity> unnamedblk7__DOT__unnamedblk8__DOT__setting;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__j;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__j__Vnext;
    ::CData/*0:0*/ unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__j__Vmore;
    unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__j__Vmore = 0;
    ::IData/*31:0*/ unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk10__DOT__j;
    unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk10__DOT__j = 0;
    ::IData/*31:0*/ unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk10__DOT__j__Vloopsize;
    unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk10__DOT__j__Vloopsize = 0;
    ::std::string unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk10__DOT__unnamedblk11__DOT__full_name;
    ::VlQueue<::std::string> msgs;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component>> sorted_list;
    dump__Vfuncrtn = ""s;
    msgs.clear();
    msgs.atDefault().clear();
    sorted_list.clear();
    unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk7__DOT__i, this->__Vnontrivs.__PVT__settings.size())) {
        unnamedblk7__DOT__i__Vloopsize = this->__Vnontrivs.__PVT__settings.size();
        unnamedblk7__DOT__unnamedblk8__DOT__setting 
            = this->__Vnontrivs.__PVT__settings.at(unnamedblk7__DOT__i);
        __Vtemp_1 = VL_NULL_CHECK(unnamedblk7__DOT__unnamedblk8__DOT__setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 594)
            ->__PVT__arg;
        msgs.push_back(VL_SFORMATF_N_NX("\n+uvm_set_severity=%s",1
                                        , 'S',&(__Vtemp_1)) );
        msgs.push_back("\n  matching components:"s);
        if ((0U == VL_NULL_CHECK(unnamedblk7__DOT__unnamedblk8__DOT__setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 596)
             ->__PVT__used.size())) {
            msgs.push_back("\n    <none>"s);
        } else {
            sorted_list.clear();
            unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__j__Vmore 
                = (0U != VL_NULL_CHECK(unnamedblk7__DOT__unnamedblk8__DOT__setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 603)
                   ->__PVT__used.first(unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__j__Vnext));
            while (unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__j__Vmore) {
                unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__j 
                    = unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__j__Vnext;
                unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__j__Vmore 
                    = (0U != VL_NULL_CHECK(unnamedblk7__DOT__unnamedblk8__DOT__setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 603)
                       ->__PVT__used.next(unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__j__Vnext));
                sorted_list.push_back(unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__j);
            }
            sorted_list.sort([&](::IData/*31:0*/ item__DOT__index, 
                                 ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> item) -> 
                             ::std::string {
                    return (([&]() {
                                VL_NULL_CHECK(item, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 608)
                             ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, this->__Vnontrivs.__Vtask_get_full_name__Vfuncout_2580);
                            }(), this->__Vnontrivs.__Vtask_get_full_name__Vfuncout_2580));
                }
            );
            unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk10__DOT__j = 0U;
            while (VL_LTS_III(32, unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk10__DOT__j, sorted_list.size())) {
                unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk10__DOT__j__Vloopsize 
                    = sorted_list.size();
                unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk10__DOT__unnamedblk11__DOT__full_name = ""s;
                VL_NULL_CHECK(sorted_list.at(unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk10__DOT__j), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 611)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk10__DOT__unnamedblk11__DOT__full_name);
                if ((""s == unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk10__DOT__unnamedblk11__DOT__full_name)) {
                    unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk10__DOT__unnamedblk11__DOT__full_name = "<uvm_root>"s;
                }
                msgs.push_back("\n    "s);
                msgs.push_back(unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk10__DOT__unnamedblk11__DOT__full_name);
                msgs.push_back(": Applied"s);
                if ((unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk10__DOT__j__Vloopsize 
                     <= sorted_list.size())) {
                    unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk10__DOT__j 
                        = ((::IData)(1U) + unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk10__DOT__j);
                }
            }
        }
        if ((unnamedblk7__DOT__i__Vloopsize <= this->__Vnontrivs.__PVT__settings.size())) {
            unnamedblk7__DOT__i = ((::IData)(1U) + unnamedblk7__DOT__i);
        }
    }
    this->__Vnontrivs.__Vfunc_m_uvm_string_queue_join__Vfuncout_1314 
        = VL_CVT_PACK_STR_ND(VL_STREAMR_NRI(0, msgs, 1U));
    dump__Vfuncrtn = this->__Vnontrivs.__Vfunc_m_uvm_string_queue_join__Vfuncout_1314;
}

void Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_severity::init(Vtb_top__Syms* __restrict vlSymsp) {
    Vtb_top_uvm_pkg__03a__03auvm_cmdline_setting_base::init(vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_severity::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_severity::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_severity::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__all_sev = 0;
    __PVT__orig_sev = 0;
    __PVT__sev = 0;
}

Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_severity::~Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_severity() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_severity::~\n"); );
}
