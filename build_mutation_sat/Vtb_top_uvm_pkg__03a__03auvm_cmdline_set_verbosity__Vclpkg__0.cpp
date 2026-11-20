// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_verbosity__Vclpkg::__VnoInFunc_init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> ro) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_verbosity__Vclpkg::__VnoInFunc_init\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_get_arg_values__Vfuncout_2555;
    __Vtask_get_arg_values__Vfuncout_2555 = 0;
    ::CData/*7:0*/ __Vtask_uvm_string_split__sep_2557;
    __Vtask_uvm_string_split__sep_2557 = 0;
    ::IData/*31:0*/ __Vtask_uvm_string_split__s_2558;
    __Vtask_uvm_string_split__s_2558 = 0;
    ::IData/*31:0*/ __Vtask_uvm_string_split__e_2559;
    __Vtask_uvm_string_split__e_2559 = 0;
    ::IData/*31:0*/ __Vtask_uvm_string_split__limit_2560;
    __Vtask_uvm_string_split__limit_2560 = 0;
    ::IData/*31:0*/ __Vfunc_uvm_string_to_verbosity__verb_enum_1301;
    __Vfunc_uvm_string_to_verbosity__verb_enum_1301 = 0;
    ::std::string __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_4;
    ::IData/*31:0*/ __VlefCall_3__get_report_action;
    ::IData/*31:0*/ __VlefCall_2__get_report_verbosity_level;
    ::CData/*0:0*/ __VlefCall_1__uvm_string_to_verbosity;
    ::IData/*31:0*/ __VlefCall_0__get_arg_values;
    ::IData/*31:0*/ unnamedblk1__DOT__temp_verb;
    ::VlQueue<::std::string> unnamedblk1__DOT__args;
    ::std::string unnamedblk1__DOT__message;
    ::CData/*0:0*/ unnamedblk1__DOT__skip;
    ::IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__i;
    unnamedblk1__DOT__unnamedblk2__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__i__Vloopsize;
    unnamedblk1__DOT__unnamedblk2__DOT__i__Vloopsize = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT___local_report_object_;
    ::IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__rt_val;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_verbosity> unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__setting;
    ::VlQueue<::std::string> setting_str;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_cmdline_processor> clp;
    setting_str.clear();
    setting_str.atDefault().clear();
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg.__VnoInFunc_get_inst(vlProcess, vlSymsp, clp);
    VL_NULL_CHECK(clp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 195)->__VnoInFunc_get_arg_values(vlSymsp, "+uvm_set_verbosity="s, setting_str, __Vtask_get_arg_values__Vfuncout_2555);
    __VlefCall_0__get_arg_values = __Vtask_get_arg_values__Vfuncout_2555;
    if (VL_LTS_III(32, 0U, __VlefCall_0__get_arg_values)) {
        unnamedblk1__DOT__temp_verb = 0U;
        unnamedblk1__DOT__args.clear();
        unnamedblk1__DOT__args.atDefault().clear();
        unnamedblk1__DOT__message = ""s;
        unnamedblk1__DOT__skip = 0U;
        unnamedblk1__DOT__unnamedblk2__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk1__DOT__unnamedblk2__DOT__i, setting_str.size())) {
            unnamedblk1__DOT__unnamedblk2__DOT__i__Vloopsize 
                = setting_str.size();
            unnamedblk1__DOT__skip = 0U;
            __Vtask_uvm_string_split__sep_2557 = 0x2cU;
            this->__Vnontrivs.__Vtask_uvm_string_split__str_2556 
                = VL_CVT_PACK_STR_NN(setting_str.at(unnamedblk1__DOT__unnamedblk2__DOT__i));
            __Vtask_uvm_string_split__s_2558 = 0U;
            __Vtask_uvm_string_split__e_2559 = 0U;
            __Vtask_uvm_string_split__limit_2560 = 0U;
            unnamedblk1__DOT__args.clear();
            __Vtask_uvm_string_split__limit_2560 = 
                ((::IData)(1U) + VL_LEN_IN(this->__Vnontrivs.__Vtask_uvm_string_split__str_2556));
            do {
                __Vtask_uvm_string_split__s_2558 = __Vtask_uvm_string_split__e_2559;
                {
                    while (VL_LTS_III(32, __Vtask_uvm_string_split__e_2559, 
                                      VL_LEN_IN(this->__Vnontrivs.__Vtask_uvm_string_split__str_2556))) {
                        if ((VL_GETC_N(this->__Vnontrivs.__Vtask_uvm_string_split__str_2556,__Vtask_uvm_string_split__e_2559) 
                             == (::IData)(__Vtask_uvm_string_split__sep_2557))) {
                            goto __Vlabel0;
                        }
                        __Vtask_uvm_string_split__e_2559 
                            = ((::IData)(1U) + __Vtask_uvm_string_split__e_2559);
                    }
                    __Vlabel0: ;
                }
                unnamedblk1__DOT__args.push_back(VL_SUBSTR_N(this->__Vnontrivs.__Vtask_uvm_string_split__str_2556,__Vtask_uvm_string_split__s_2558,
                                                             (__Vtask_uvm_string_split__e_2559 
                                                              - (::IData)(1U))));
                __Vtask_uvm_string_split__e_2559 = 
                    ((::IData)(1U) + __Vtask_uvm_string_split__e_2559);
            } while (VL_LTS_III(32, __Vtask_uvm_string_split__e_2559, __Vtask_uvm_string_split__limit_2560));
            if ((VL_GTS_III(32, 4U, unnamedblk1__DOT__args.size()) 
                 | VL_LTS_III(32, 5U, unnamedblk1__DOT__args.size()))) {
                unnamedblk1__DOT__message = "Invalid number of arguments found, expected 4 or 5"s;
                unnamedblk1__DOT__skip = 1U;
            }
            if (((5U == unnamedblk1__DOT__args.size()) 
                 & ("time"s != unnamedblk1__DOT__args.at(3U)))) {
                unnamedblk1__DOT__message = "Too many arguments found for <phase>, expected only 4"s;
                unnamedblk1__DOT__skip = 1U;
            }
            if (((4U == unnamedblk1__DOT__args.size()) 
                 & ("time"s == unnamedblk1__DOT__args.at(3U)))) {
                unnamedblk1__DOT__message = "Too few arguments found for <time>, expected 5"s;
                unnamedblk1__DOT__skip = 1U;
            }
            this->__Vnontrivs.__Vfunc_uvm_string_to_verbosity__verb_str_1300 
                = VL_CVT_PACK_STR_NN(unnamedblk1__DOT__args.at(2U));
            __VlefCall_1__uvm_string_to_verbosity = 0U;
            __Vfunc_uvm_string_to_verbosity__verb_enum_1301 = 0U;
            if ((((((((("NONE"s == this->__Vnontrivs.__Vfunc_uvm_string_to_verbosity__verb_str_1300) 
                       | ("UVM_NONE"s == this->__Vnontrivs.__Vfunc_uvm_string_to_verbosity__verb_str_1300)) 
                      | ("LOW"s == this->__Vnontrivs.__Vfunc_uvm_string_to_verbosity__verb_str_1300)) 
                     | ("UVM_LOW"s == this->__Vnontrivs.__Vfunc_uvm_string_to_verbosity__verb_str_1300)) 
                    | ("MEDIUM"s == this->__Vnontrivs.__Vfunc_uvm_string_to_verbosity__verb_str_1300)) 
                   | ("UVM_MEDIUM"s == this->__Vnontrivs.__Vfunc_uvm_string_to_verbosity__verb_str_1300)) 
                  | ("HIGH"s == this->__Vnontrivs.__Vfunc_uvm_string_to_verbosity__verb_str_1300)) 
                 | ("UVM_HIGH"s == this->__Vnontrivs.__Vfunc_uvm_string_to_verbosity__verb_str_1300))) {
                __Vfunc_uvm_string_to_verbosity__verb_enum_1301 
                    = (("NONE"s == this->__Vnontrivs.__Vfunc_uvm_string_to_verbosity__verb_str_1300)
                        ? 0U : (("UVM_NONE"s == this->__Vnontrivs.__Vfunc_uvm_string_to_verbosity__verb_str_1300)
                                 ? 0U : (("LOW"s == this->__Vnontrivs.__Vfunc_uvm_string_to_verbosity__verb_str_1300)
                                          ? 0x00000064U
                                          : (("UVM_LOW"s 
                                              == this->__Vnontrivs.__Vfunc_uvm_string_to_verbosity__verb_str_1300)
                                              ? 0x00000064U
                                              : (("MEDIUM"s 
                                                  == this->__Vnontrivs.__Vfunc_uvm_string_to_verbosity__verb_str_1300)
                                                  ? 0x000000c8U
                                                  : 
                                                 (("UVM_MEDIUM"s 
                                                   == this->__Vnontrivs.__Vfunc_uvm_string_to_verbosity__verb_str_1300)
                                                   ? 0x000000c8U
                                                   : 0x0000012cU))))));
                __VlefCall_1__uvm_string_to_verbosity = 1U;
            } else if (("FULL"s == this->__Vnontrivs.__Vfunc_uvm_string_to_verbosity__verb_str_1300)) {
                __Vfunc_uvm_string_to_verbosity__verb_enum_1301 = 0x00000190U;
                __VlefCall_1__uvm_string_to_verbosity = 1U;
            } else if (("UVM_FULL"s == this->__Vnontrivs.__Vfunc_uvm_string_to_verbosity__verb_str_1300)) {
                __Vfunc_uvm_string_to_verbosity__verb_enum_1301 = 0x00000190U;
                __VlefCall_1__uvm_string_to_verbosity = 1U;
            } else if (("DEBUG"s == this->__Vnontrivs.__Vfunc_uvm_string_to_verbosity__verb_str_1300)) {
                __Vfunc_uvm_string_to_verbosity__verb_enum_1301 = 0x000001f4U;
                __VlefCall_1__uvm_string_to_verbosity = 1U;
            } else if (("UVM_DEBUG"s == this->__Vnontrivs.__Vfunc_uvm_string_to_verbosity__verb_str_1300)) {
                __Vfunc_uvm_string_to_verbosity__verb_enum_1301 = 0x000001f4U;
                __VlefCall_1__uvm_string_to_verbosity = 1U;
            } else {
                __VlefCall_1__uvm_string_to_verbosity = 0U;
            }
            unnamedblk1__DOT__temp_verb = __Vfunc_uvm_string_to_verbosity__verb_enum_1301;
            if ((1U & (~ (::IData)(__VlefCall_1__uvm_string_to_verbosity)))) {
                unnamedblk1__DOT__message = "Invalid verbosity found"s;
                unnamedblk1__DOT__skip = 1U;
            }
            if (unnamedblk1__DOT__skip) {
                if ((VlNull{} != ro)) {
                    VL_NULL_CHECK(ro, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 246)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT___local_report_object_);
                    VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 246)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "INVLCMDARGS"s, __VlefCall_2__get_report_verbosity_level);
                    __VlefLogAnd_4 = VL_LTES_III(32, 0U, __VlefCall_2__get_report_verbosity_level);
                    if (__VlefLogAnd_4) {
                        VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 246)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "INVLCMDARGS"s, __VlefCall_3__get_report_action);
                        __VlefLogAnd_4 = (0U != __VlefCall_3__get_report_action);
                    }
                    if (VL_UNLIKELY((__VlefLogAnd_4))) {
                        __Vtemp_1 = setting_str.at(unnamedblk1__DOT__unnamedblk2__DOT__i);
                        VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 246)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "INVLCMDARGS"s, VL_SFORMATF_N_NX("%s, setting '+uvm_set_verbosity=%s' will be ignored.",2
                                                                                , 'S',&(unnamedblk1__DOT__message)
                                                                                , 'S',&(__Vtemp_1)) , 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh"s, 0x000000f6U, ""s, 1U);
                    }
                }
            } else {
                unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__rt_val = 0U;
                unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__setting 
                    = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_verbosity, vlSymsp);
                VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 225)->__PVT__arg 
                    = setting_str.at(unnamedblk1__DOT__unnamedblk2__DOT__i);
                VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 226)->__PVT__comp 
                    = unnamedblk1__DOT__args.at(0U);
                VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 227)->__PVT__id 
                    = unnamedblk1__DOT__args.at(1U);
                VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 228)->__PVT__verbosity 
                    = unnamedblk1__DOT__temp_verb;
                VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 229)->__PVT__phase 
                    = unnamedblk1__DOT__args.at(3U);
                if (("time"s == VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 230)
                     ->__PVT__phase)) {
                    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__rt_val 
                        = VL_SSCANF_INNX(64,unnamedblk1__DOT__args.at(4U),"%d",1
                                         , '#',64,&(VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 231)
                                                    ->__PVT__offset)) ;
                } else {
                    VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 235)->__PVT__offset = 0ULL;
                }
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

void Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_verbosity__Vclpkg::__VnoInFunc_check(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> ro) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_verbosity__Vclpkg::__VnoInFunc_check\n"); );
    // Locals
    ::std::string __Vtemp_1;
    ::std::string __Vtemp_2;
    ::std::string __Vtemp_3;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_8;
    ::IData/*31:0*/ __VlefCall_7__get_report_action;
    ::IData/*31:0*/ __VlefCall_6__get_report_verbosity_level;
    ::CData/*0:0*/ __VlefLogAnd_5;
    ::IData/*31:0*/ __VlefCall_4__get_report_action;
    ::IData/*31:0*/ __VlefCall_3__get_report_verbosity_level;
    ::CData/*0:0*/ __VlefLogAnd_2;
    ::IData/*31:0*/ __VlefCall_1__get_report_action;
    ::IData/*31:0*/ __VlefCall_0__get_report_verbosity_level;
    ::IData/*31:0*/ unnamedblk5__DOT__i;
    unnamedblk5__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk5__DOT__i__Vloopsize;
    unnamedblk5__DOT__i__Vloopsize = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk5__DOT__unnamedblk6__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk5__DOT__unnamedblk7__DOT___local_report_object_;
    ::CData/*0:0*/ unnamedblk5__DOT__unnamedblk8__DOT__hit;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_verbosity> unnamedblk5__DOT__unnamedblk8__DOT__setting;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> unnamedblk5__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> unnamedblk5__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i__Vnext;
    ::CData/*0:0*/ unnamedblk5__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i__Vmore;
    unnamedblk5__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i__Vmore = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk5__DOT__unnamedblk8__DOT__unnamedblk10__DOT___local_report_object_;
    unnamedblk5__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk5__DOT__i, this->__Vnontrivs.__PVT__settings.size())) {
        unnamedblk5__DOT__i__Vloopsize = this->__Vnontrivs.__PVT__settings.size();
        if ((0U == VL_NULL_CHECK(this->__Vnontrivs.__PVT__settings.at(unnamedblk5__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 262)
             ->__PVT__used.size())) {
            VL_NULL_CHECK(ro, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 268)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk5__DOT__unnamedblk6__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk5__DOT__unnamedblk6__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 268)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "INVLCMDARGS"s, __VlefCall_0__get_report_verbosity_level);
            __VlefLogAnd_2 = VL_LTES_III(32, 0U, __VlefCall_0__get_report_verbosity_level);
            if (__VlefLogAnd_2) {
                VL_NULL_CHECK(unnamedblk5__DOT__unnamedblk6__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 268)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "INVLCMDARGS"s, __VlefCall_1__get_report_action);
                __VlefLogAnd_2 = (0U != __VlefCall_1__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_2))) {
                __Vtemp_1 = VL_NULL_CHECK(this->__Vnontrivs.__PVT__settings.at(unnamedblk5__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 268)
                    ->__PVT__arg;
                VL_NULL_CHECK(unnamedblk5__DOT__unnamedblk6__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 268)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "INVLCMDARGS"s, VL_SFORMATF_N_NX("\"+uvm_set_verbosity=%s\" never took effect due to either a mismatching component pattern.",1
                                                                                , 'S',&(__Vtemp_1)) , 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh"s, 0x0000010cU, ""s, 1U);
            }
        } else if (("time"s == VL_NULL_CHECK(this->__Vnontrivs.__PVT__settings.at(unnamedblk5__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 271)
                    ->__PVT__phase)) {
            if ((VL_TIME_UNITED_Q(1000) < VL_NULL_CHECK(this->__Vnontrivs.__PVT__settings.at(unnamedblk5__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 272)
                 ->__PVT__offset)) {
                VL_NULL_CHECK(ro, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 278)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk5__DOT__unnamedblk7__DOT___local_report_object_);
                VL_NULL_CHECK(unnamedblk5__DOT__unnamedblk7__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 278)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "INVLCMDARGS"s, __VlefCall_3__get_report_verbosity_level);
                __VlefLogAnd_5 = VL_LTES_III(32, 0U, __VlefCall_3__get_report_verbosity_level);
                if (__VlefLogAnd_5) {
                    VL_NULL_CHECK(unnamedblk5__DOT__unnamedblk7__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 278)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "INVLCMDARGS"s, __VlefCall_4__get_report_action);
                    __VlefLogAnd_5 = (0U != __VlefCall_4__get_report_action);
                }
                if (VL_UNLIKELY((__VlefLogAnd_5))) {
                    __Vtemp_2 = VL_NULL_CHECK(this->__Vnontrivs.__PVT__settings.at(unnamedblk5__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 278)
                        ->__PVT__arg;
                    VL_NULL_CHECK(unnamedblk5__DOT__unnamedblk7__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 278)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "INVLCMDARGS"s, VL_SFORMATF_N_NX("\"+uvm_set_verbosity=%s\" never took effect due to test ending before offset was reached.",1
                                                                                , 'S',&(__Vtemp_2)) , 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh"s, 0x00000116U, ""s, 1U);
                }
            }
        } else {
            unnamedblk5__DOT__unnamedblk8__DOT__hit = 0U;
            unnamedblk5__DOT__unnamedblk8__DOT__setting 
                = this->__Vnontrivs.__PVT__settings.at(unnamedblk5__DOT__i);
            {
                unnamedblk5__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i__Vmore 
                    = (0U != VL_NULL_CHECK(unnamedblk5__DOT__unnamedblk8__DOT__setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 285)
                       ->__PVT__used.first(unnamedblk5__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i__Vnext));
                while (unnamedblk5__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i__Vmore) {
                    unnamedblk5__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i 
                        = unnamedblk5__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i__Vnext;
                    unnamedblk5__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i__Vmore 
                        = (0U != VL_NULL_CHECK(unnamedblk5__DOT__unnamedblk8__DOT__setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 285)
                           ->__PVT__used.next(unnamedblk5__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i__Vnext));
                    if (VL_NULL_CHECK(unnamedblk5__DOT__unnamedblk8__DOT__setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 286)
                        ->__PVT__used.at(unnamedblk5__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i)) {
                        unnamedblk5__DOT__unnamedblk8__DOT__hit = 1U;
                        goto __Vlabel0;
                    }
                }
                __Vlabel0: ;
            }
            if ((1U & (~ (::IData)(unnamedblk5__DOT__unnamedblk8__DOT__hit)))) {
                VL_NULL_CHECK(ro, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 298)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk5__DOT__unnamedblk8__DOT__unnamedblk10__DOT___local_report_object_);
                VL_NULL_CHECK(unnamedblk5__DOT__unnamedblk8__DOT__unnamedblk10__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 298)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "INVLCMDARGS"s, __VlefCall_6__get_report_verbosity_level);
                __VlefLogAnd_8 = VL_LTES_III(32, 0U, __VlefCall_6__get_report_verbosity_level);
                if (__VlefLogAnd_8) {
                    VL_NULL_CHECK(unnamedblk5__DOT__unnamedblk8__DOT__unnamedblk10__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 298)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "INVLCMDARGS"s, __VlefCall_7__get_report_action);
                    __VlefLogAnd_8 = (0U != __VlefCall_7__get_report_action);
                }
                if (VL_UNLIKELY((__VlefLogAnd_8))) {
                    __Vtemp_3 = VL_NULL_CHECK(this->__Vnontrivs.__PVT__settings.at(unnamedblk5__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 298)
                        ->__PVT__arg;
                    VL_NULL_CHECK(unnamedblk5__DOT__unnamedblk8__DOT__unnamedblk10__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 298)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "INVLCMDARGS"s, VL_SFORMATF_N_NX("\"+uvm_set_verbosity=%s\" never took effect due to phase never occurring for matching component(s).",1
                                                                                , 'S',&(__Vtemp_3)) , 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh"s, 0x0000012aU, ""s, 1U);
                }
            }
        }
        if ((unnamedblk5__DOT__i__Vloopsize <= this->__Vnontrivs.__PVT__settings.size())) {
            unnamedblk5__DOT__i = ((::IData)(1U) + unnamedblk5__DOT__i);
        }
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_verbosity__Vclpkg::__VnoInFunc_dump(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string &dump__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_verbosity__Vclpkg::__VnoInFunc_dump\n"); );
    // Locals
    ::std::string __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ unnamedblk11__DOT__i;
    unnamedblk11__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk11__DOT__i__Vloopsize;
    unnamedblk11__DOT__i__Vloopsize = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_verbosity> unnamedblk11__DOT__unnamedblk12__DOT__setting;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk13__DOT__j;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk13__DOT__j__Vnext;
    ::CData/*0:0*/ unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk13__DOT__j__Vmore;
    unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk13__DOT__j__Vmore = 0;
    ::IData/*31:0*/ unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk14__DOT__j;
    unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk14__DOT__j = 0;
    ::IData/*31:0*/ unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk14__DOT__j__Vloopsize;
    unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk14__DOT__j__Vloopsize = 0;
    ::std::string unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk14__DOT__unnamedblk15__DOT__full_name;
    ::VlQueue<::std::string> msgs;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component>> sorted_list;
    dump__Vfuncrtn = ""s;
    msgs.clear();
    msgs.atDefault().clear();
    sorted_list.clear();
    unnamedblk11__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk11__DOT__i, this->__Vnontrivs.__PVT__settings.size())) {
        unnamedblk11__DOT__i__Vloopsize = this->__Vnontrivs.__PVT__settings.size();
        unnamedblk11__DOT__unnamedblk12__DOT__setting 
            = this->__Vnontrivs.__PVT__settings.at(unnamedblk11__DOT__i);
        __Vtemp_1 = VL_NULL_CHECK(unnamedblk11__DOT__unnamedblk12__DOT__setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 315)
            ->__PVT__arg;
        msgs.push_back(VL_SFORMATF_N_NX("\n+uvm_set_verbosity=%s",1
                                        , 'S',&(__Vtemp_1)) );
        msgs.push_back("\n  matching components:"s);
        if ((0U == VL_NULL_CHECK(unnamedblk11__DOT__unnamedblk12__DOT__setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 317)
             ->__PVT__used.size())) {
            msgs.push_back("\n    <none>"s);
        } else {
            sorted_list.clear();
            unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk13__DOT__j__Vmore 
                = (0U != VL_NULL_CHECK(unnamedblk11__DOT__unnamedblk12__DOT__setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 324)
                   ->__PVT__used.first(unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk13__DOT__j__Vnext));
            while (unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk13__DOT__j__Vmore) {
                unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk13__DOT__j 
                    = unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk13__DOT__j__Vnext;
                unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk13__DOT__j__Vmore 
                    = (0U != VL_NULL_CHECK(unnamedblk11__DOT__unnamedblk12__DOT__setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 324)
                       ->__PVT__used.next(unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk13__DOT__j__Vnext));
                sorted_list.push_back(unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk13__DOT__j);
            }
            sorted_list.sort([&](::IData/*31:0*/ item__DOT__index, 
                                 ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> item) -> 
                             ::std::string {
                    return (([&]() {
                                VL_NULL_CHECK(item, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 329)
                             ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, this->__Vnontrivs.__Vtask_get_full_name__Vfuncout_2561);
                            }(), this->__Vnontrivs.__Vtask_get_full_name__Vfuncout_2561));
                }
            );
            unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk14__DOT__j = 0U;
            while (VL_LTS_III(32, unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk14__DOT__j, sorted_list.size())) {
                unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk14__DOT__j__Vloopsize 
                    = sorted_list.size();
                unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk14__DOT__unnamedblk15__DOT__full_name = ""s;
                VL_NULL_CHECK(sorted_list.at(unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk14__DOT__j), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 332)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk14__DOT__unnamedblk15__DOT__full_name);
                if ((""s == unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk14__DOT__unnamedblk15__DOT__full_name)) {
                    unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk14__DOT__unnamedblk15__DOT__full_name = "<uvm_root>"s;
                }
                msgs.push_back("\n    "s);
                msgs.push_back(unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk14__DOT__unnamedblk15__DOT__full_name);
                msgs.push_back(": "s);
                if (((("time"s == VL_NULL_CHECK(unnamedblk11__DOT__unnamedblk12__DOT__setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 341)
                       ->__PVT__phase) && VL_NULL_CHECK(unnamedblk11__DOT__unnamedblk12__DOT__setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 341)
                      ->__PVT__used.at(sorted_list.at(unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk14__DOT__j))) 
                     || (("time"s != VL_NULL_CHECK(unnamedblk11__DOT__unnamedblk12__DOT__setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 342)
                          ->__PVT__phase) && VL_NULL_CHECK(unnamedblk11__DOT__unnamedblk12__DOT__setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 342)
                         ->__PVT__used.at(sorted_list.at(unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk14__DOT__j))))) {
                    msgs.push_back("Applied"s);
                } else {
                    msgs.push_back("Not applied "s);
                    if (("time"s == VL_NULL_CHECK(unnamedblk11__DOT__unnamedblk12__DOT__setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 349)
                         ->__PVT__phase)) {
                        msgs.push_back("(component never reached offset)"s);
                    } else {
                        msgs.push_back("(component never saw phase)"s);
                    }
                }
                if ((unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk14__DOT__j__Vloopsize 
                     <= sorted_list.size())) {
                    unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk14__DOT__j 
                        = ((::IData)(1U) + unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk14__DOT__j);
                }
            }
        }
        if ((unnamedblk11__DOT__i__Vloopsize <= this->__Vnontrivs.__PVT__settings.size())) {
            unnamedblk11__DOT__i = ((::IData)(1U) + unnamedblk11__DOT__i);
        }
    }
    this->__Vnontrivs.__Vfunc_m_uvm_string_queue_join__Vfuncout_1302 
        = VL_CVT_PACK_STR_ND(VL_STREAMR_NRI(0, msgs, 1U));
    dump__Vfuncrtn = this->__Vnontrivs.__Vfunc_m_uvm_string_queue_join__Vfuncout_1302;
}

void Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_verbosity::init(Vtb_top__Syms* __restrict vlSymsp) {
    Vtb_top_uvm_pkg__03a__03auvm_cmdline_setting_base::init(vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_verbosity::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_verbosity::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_verbosity::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__verbosity = 0;
    __PVT__offset = VL_SCOPED_RAND_RESET_Q(64, 368816589718337671ULL, 10670815542329643570ull);
}

Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_verbosity::~Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_verbosity() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_verbosity::~\n"); );
}
