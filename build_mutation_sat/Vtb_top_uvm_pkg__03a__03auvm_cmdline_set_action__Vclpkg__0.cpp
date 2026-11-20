// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_action__Vclpkg::__VnoInFunc_init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> ro) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_action__Vclpkg::__VnoInFunc_init\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_get_arg_values__Vfuncout_2562;
    __Vtask_get_arg_values__Vfuncout_2562 = 0;
    ::CData/*7:0*/ __Vtask_uvm_string_split__sep_2564;
    __Vtask_uvm_string_split__sep_2564 = 0;
    ::IData/*31:0*/ __Vtask_uvm_string_split__s_2565;
    __Vtask_uvm_string_split__s_2565 = 0;
    ::IData/*31:0*/ __Vtask_uvm_string_split__e_2566;
    __Vtask_uvm_string_split__e_2566 = 0;
    ::IData/*31:0*/ __Vtask_uvm_string_split__limit_2567;
    __Vtask_uvm_string_split__limit_2567 = 0;
    ::CData/*1:0*/ __Vfunc_uvm_string_to_severity__sev_1304;
    __Vfunc_uvm_string_to_severity__sev_1304 = 0;
    ::IData/*31:0*/ __Vfunc_uvm_string_to_action__action_1306;
    __Vfunc_uvm_string_to_action__action_1306 = 0;
    ::IData/*31:0*/ __Vfunc_uvm_string_to_action__unnamedblk4__DOT__i_1307;
    __Vfunc_uvm_string_to_action__unnamedblk4__DOT__i_1307 = 0;
    ::VlQueue<::std::string> __Vfunc_uvm_string_to_action__actions_1308;
    ::CData/*7:0*/ __Vtask_uvm_string_split__sep_2569;
    __Vtask_uvm_string_split__sep_2569 = 0;
    ::IData/*31:0*/ __Vtask_uvm_string_split__s_2570;
    __Vtask_uvm_string_split__s_2570 = 0;
    ::IData/*31:0*/ __Vtask_uvm_string_split__e_2571;
    __Vtask_uvm_string_split__e_2571 = 0;
    ::IData/*31:0*/ __Vtask_uvm_string_split__limit_2572;
    __Vtask_uvm_string_split__limit_2572 = 0;
    ::std::string __Vtemp_1;
    ::std::string __Vtemp_2;
    ::std::string __Vtemp_3;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_5;
    ::IData/*31:0*/ __VlefCall_4__get_report_action;
    ::IData/*31:0*/ __VlefCall_3__get_report_verbosity_level;
    ::CData/*0:0*/ __VlefCall_2__uvm_string_to_action;
    ::CData/*0:0*/ __VlefCall_1__uvm_string_to_severity;
    ::IData/*31:0*/ __VlefCall_0__get_arg_values;
    ::IData/*31:0*/ unnamedblk1__DOT__action;
    ::CData/*1:0*/ unnamedblk1__DOT__sev;
    ::VlQueue<::std::string> unnamedblk1__DOT__args;
    ::std::string unnamedblk1__DOT__message;
    ::CData/*0:0*/ unnamedblk1__DOT__skip;
    ::IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__i;
    unnamedblk1__DOT__unnamedblk2__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__i__Vloopsize;
    unnamedblk1__DOT__unnamedblk2__DOT__i__Vloopsize = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_action> unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__setting;
    ::VlQueue<::std::string> setting_str;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_cmdline_processor> clp;
    setting_str.clear();
    setting_str.atDefault().clear();
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg.__VnoInFunc_get_inst(vlProcess, vlSymsp, clp);
    VL_NULL_CHECK(clp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 391)->__VnoInFunc_get_arg_values(vlSymsp, "+uvm_set_action="s, setting_str, __Vtask_get_arg_values__Vfuncout_2562);
    __VlefCall_0__get_arg_values = __Vtask_get_arg_values__Vfuncout_2562;
    if (VL_LTS_III(32, 0U, __VlefCall_0__get_arg_values)) {
        unnamedblk1__DOT__action = 0U;
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
            __Vtask_uvm_string_split__sep_2564 = 0x2cU;
            this->__Vnontrivs.__Vtask_uvm_string_split__str_2563 
                = VL_CVT_PACK_STR_NN(setting_str.at(unnamedblk1__DOT__unnamedblk2__DOT__i));
            __Vtask_uvm_string_split__s_2565 = 0U;
            __Vtask_uvm_string_split__e_2566 = 0U;
            __Vtask_uvm_string_split__limit_2567 = 0U;
            unnamedblk1__DOT__args.clear();
            __Vtask_uvm_string_split__limit_2567 = 
                ((::IData)(1U) + VL_LEN_IN(this->__Vnontrivs.__Vtask_uvm_string_split__str_2563));
            do {
                __Vtask_uvm_string_split__s_2565 = __Vtask_uvm_string_split__e_2566;
                {
                    while (VL_LTS_III(32, __Vtask_uvm_string_split__e_2566, 
                                      VL_LEN_IN(this->__Vnontrivs.__Vtask_uvm_string_split__str_2563))) {
                        if ((VL_GETC_N(this->__Vnontrivs.__Vtask_uvm_string_split__str_2563,__Vtask_uvm_string_split__e_2566) 
                             == (::IData)(__Vtask_uvm_string_split__sep_2564))) {
                            goto __Vlabel0;
                        }
                        __Vtask_uvm_string_split__e_2566 
                            = ((::IData)(1U) + __Vtask_uvm_string_split__e_2566);
                    }
                    __Vlabel0: ;
                }
                unnamedblk1__DOT__args.push_back(VL_SUBSTR_N(this->__Vnontrivs.__Vtask_uvm_string_split__str_2563,__Vtask_uvm_string_split__s_2565,
                                                             (__Vtask_uvm_string_split__e_2566 
                                                              - (::IData)(1U))));
                __Vtask_uvm_string_split__e_2566 = 
                    ((::IData)(1U) + __Vtask_uvm_string_split__e_2566);
            } while (VL_LTS_III(32, __Vtask_uvm_string_split__e_2566, __Vtask_uvm_string_split__limit_2567));
            if ((4U != unnamedblk1__DOT__args.size())) {
                unnamedblk1__DOT__message = "Invalid number of arguments found, expected 4"s;
                unnamedblk1__DOT__skip = 1U;
            }
            this->__Vnontrivs.__Vfunc_uvm_string_to_severity__sev_str_1303 
                = VL_CVT_PACK_STR_NN(unnamedblk1__DOT__args.at(2U));
            {
                __Vfunc_uvm_string_to_severity__sev_1304 = 0U;
                if (("UVM_INFO"s == this->__Vnontrivs.__Vfunc_uvm_string_to_severity__sev_str_1303)) {
                    __Vfunc_uvm_string_to_severity__sev_1304 = 0U;
                } else if (("UVM_WARNING"s == this->__Vnontrivs.__Vfunc_uvm_string_to_severity__sev_str_1303)) {
                    __Vfunc_uvm_string_to_severity__sev_1304 = 1U;
                } else if (("UVM_ERROR"s == this->__Vnontrivs.__Vfunc_uvm_string_to_severity__sev_str_1303)) {
                    __Vfunc_uvm_string_to_severity__sev_1304 = 2U;
                } else if (("UVM_FATAL"s == this->__Vnontrivs.__Vfunc_uvm_string_to_severity__sev_str_1303)) {
                    __Vfunc_uvm_string_to_severity__sev_1304 = 3U;
                } else {
                    __VlefCall_1__uvm_string_to_severity = 0U;
                    goto __Vlabel1;
                }
                __VlefCall_1__uvm_string_to_severity = 1U;
                __Vlabel1: ;
            }
            unnamedblk1__DOT__sev = __Vfunc_uvm_string_to_severity__sev_1304;
            if ((("_ALL_"s != unnamedblk1__DOT__args.at(2U)) 
                 & (~ (::IData)(__VlefCall_1__uvm_string_to_severity)))) {
                __Vtemp_1 = unnamedblk1__DOT__args.at(2U);
                VL_SFORMAT_NX(unnamedblk1__DOT__message
                              ,"Bad severity argument '%s'",1
                              , 'S',&(__Vtemp_1));
                unnamedblk1__DOT__skip = 1U;
            }
            this->__Vnontrivs.__Vfunc_uvm_string_to_action__action_str_1305 
                = VL_CVT_PACK_STR_NN(unnamedblk1__DOT__args.at(3U));
            __Vfunc_uvm_string_to_action__unnamedblk4__DOT__i_1307 = 0U;
            __VlefCall_2__uvm_string_to_action = 0U;
            __Vfunc_uvm_string_to_action__action_1306 = 0U;
            __Vfunc_uvm_string_to_action__actions_1308.clear();
            __Vfunc_uvm_string_to_action__actions_1308.atDefault().clear();
            __Vtask_uvm_string_split__sep_2569 = 0x7cU;
            this->__Vnontrivs.__Vtask_uvm_string_split__str_2568 
                = this->__Vnontrivs.__Vfunc_uvm_string_to_action__action_str_1305;
            __Vtask_uvm_string_split__s_2570 = 0U;
            __Vtask_uvm_string_split__e_2571 = 0U;
            __Vtask_uvm_string_split__limit_2572 = 0U;
            __Vfunc_uvm_string_to_action__actions_1308.clear();
            __Vtask_uvm_string_split__limit_2572 = 
                ((::IData)(1U) + VL_LEN_IN(this->__Vnontrivs.__Vtask_uvm_string_split__str_2568));
            do {
                __Vtask_uvm_string_split__s_2570 = __Vtask_uvm_string_split__e_2571;
                {
                    while (VL_LTS_III(32, __Vtask_uvm_string_split__e_2571, 
                                      VL_LEN_IN(this->__Vnontrivs.__Vtask_uvm_string_split__str_2568))) {
                        if ((VL_GETC_N(this->__Vnontrivs.__Vtask_uvm_string_split__str_2568,__Vtask_uvm_string_split__e_2571) 
                             == (::IData)(__Vtask_uvm_string_split__sep_2569))) {
                            goto __Vlabel2;
                        }
                        __Vtask_uvm_string_split__e_2571 
                            = ((::IData)(1U) + __Vtask_uvm_string_split__e_2571);
                    }
                    __Vlabel2: ;
                }
                __Vfunc_uvm_string_to_action__actions_1308.push_back(
                                                                     VL_SUBSTR_N(this->__Vnontrivs.__Vtask_uvm_string_split__str_2568,__Vtask_uvm_string_split__s_2570,
                                                                                (__Vtask_uvm_string_split__e_2571 
                                                                                - (::IData)(1U))));
                __Vtask_uvm_string_split__e_2571 = 
                    ((::IData)(1U) + __Vtask_uvm_string_split__e_2571);
            } while (VL_LTS_III(32, __Vtask_uvm_string_split__e_2571, __Vtask_uvm_string_split__limit_2572));
            __VlefCall_2__uvm_string_to_action = 1U;
            __Vfunc_uvm_string_to_action__action_1306 = 0U;
            __Vfunc_uvm_string_to_action__unnamedblk4__DOT__i_1307 = 0U;
            while (VL_LTS_III(32, __Vfunc_uvm_string_to_action__unnamedblk4__DOT__i_1307, __Vfunc_uvm_string_to_action__actions_1308.size())) {
                if ((((((((("UVM_NO_ACTION"s == __Vfunc_uvm_string_to_action__actions_1308.at(__Vfunc_uvm_string_to_action__unnamedblk4__DOT__i_1307)) 
                           | ("UVM_DISPLAY"s == __Vfunc_uvm_string_to_action__actions_1308.at(__Vfunc_uvm_string_to_action__unnamedblk4__DOT__i_1307))) 
                          | ("UVM_LOG"s == __Vfunc_uvm_string_to_action__actions_1308.at(__Vfunc_uvm_string_to_action__unnamedblk4__DOT__i_1307))) 
                         | ("UVM_COUNT"s == __Vfunc_uvm_string_to_action__actions_1308.at(__Vfunc_uvm_string_to_action__unnamedblk4__DOT__i_1307))) 
                        | ("UVM_EXIT"s == __Vfunc_uvm_string_to_action__actions_1308.at(__Vfunc_uvm_string_to_action__unnamedblk4__DOT__i_1307))) 
                       | ("UVM_CALL_HOOK"s == __Vfunc_uvm_string_to_action__actions_1308.at(__Vfunc_uvm_string_to_action__unnamedblk4__DOT__i_1307))) 
                      | ("UVM_STOP"s == __Vfunc_uvm_string_to_action__actions_1308.at(__Vfunc_uvm_string_to_action__unnamedblk4__DOT__i_1307))) 
                     | ("UVM_RM_RECORD"s == __Vfunc_uvm_string_to_action__actions_1308.at(__Vfunc_uvm_string_to_action__unnamedblk4__DOT__i_1307)))) {
                    if ((1U & (~ ("UVM_NO_ACTION"s 
                                  == __Vfunc_uvm_string_to_action__actions_1308.at(__Vfunc_uvm_string_to_action__unnamedblk4__DOT__i_1307))))) {
                        __Vfunc_uvm_string_to_action__action_1306 
                            = (("UVM_DISPLAY"s == __Vfunc_uvm_string_to_action__actions_1308.at(__Vfunc_uvm_string_to_action__unnamedblk4__DOT__i_1307))
                                ? (1U | __Vfunc_uvm_string_to_action__action_1306)
                                : (("UVM_LOG"s == __Vfunc_uvm_string_to_action__actions_1308.at(__Vfunc_uvm_string_to_action__unnamedblk4__DOT__i_1307))
                                    ? (2U | __Vfunc_uvm_string_to_action__action_1306)
                                    : (("UVM_COUNT"s 
                                        == __Vfunc_uvm_string_to_action__actions_1308.at(__Vfunc_uvm_string_to_action__unnamedblk4__DOT__i_1307))
                                        ? (4U | __Vfunc_uvm_string_to_action__action_1306)
                                        : (("UVM_EXIT"s 
                                            == __Vfunc_uvm_string_to_action__actions_1308.at(__Vfunc_uvm_string_to_action__unnamedblk4__DOT__i_1307))
                                            ? (8U | __Vfunc_uvm_string_to_action__action_1306)
                                            : (("UVM_CALL_HOOK"s 
                                                == __Vfunc_uvm_string_to_action__actions_1308.at(__Vfunc_uvm_string_to_action__unnamedblk4__DOT__i_1307))
                                                ? (0x00000010U 
                                                   | __Vfunc_uvm_string_to_action__action_1306)
                                                : (
                                                   ("UVM_STOP"s 
                                                    == __Vfunc_uvm_string_to_action__actions_1308.at(__Vfunc_uvm_string_to_action__unnamedblk4__DOT__i_1307))
                                                    ? 
                                                   (0x00000020U 
                                                    | __Vfunc_uvm_string_to_action__action_1306)
                                                    : 
                                                   (0x00000040U 
                                                    | __Vfunc_uvm_string_to_action__action_1306)))))));
                    }
                } else {
                    __VlefCall_2__uvm_string_to_action = 0U;
                }
                __Vfunc_uvm_string_to_action__unnamedblk4__DOT__i_1307 
                    = ((::IData)(1U) + __Vfunc_uvm_string_to_action__unnamedblk4__DOT__i_1307);
            }
            unnamedblk1__DOT__action = __Vfunc_uvm_string_to_action__action_1306;
            if ((1U & (~ (::IData)(__VlefCall_2__uvm_string_to_action)))) {
                __Vtemp_2 = unnamedblk1__DOT__args.at(3U);
                VL_SFORMAT_NX(unnamedblk1__DOT__message
                              ,"Bad action argument '%s'",1
                              , 'S',&(__Vtemp_2));
                unnamedblk1__DOT__skip = 1U;
            }
            if (unnamedblk1__DOT__skip) {
                if ((VlNull{} != ro)) {
                    VL_NULL_CHECK(ro, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 432)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT___local_report_object_);
                    VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 432)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "INVLCMDARGS"s, __VlefCall_3__get_report_verbosity_level);
                    __VlefLogAnd_5 = VL_LTES_III(32, 0U, __VlefCall_3__get_report_verbosity_level);
                    if (__VlefLogAnd_5) {
                        VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 432)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "INVLCMDARGS"s, __VlefCall_4__get_report_action);
                        __VlefLogAnd_5 = (0U != __VlefCall_4__get_report_action);
                    }
                    if (VL_UNLIKELY((__VlefLogAnd_5))) {
                        __Vtemp_3 = setting_str.at(unnamedblk1__DOT__unnamedblk2__DOT__i);
                        VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 432)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "INVLCMDARGS"s, VL_SFORMATF_N_NX("%s, setting '+uvm_set_action=%s' will be ignored.",2
                                                                                , 'S',&(unnamedblk1__DOT__message)
                                                                                , 'S',&(__Vtemp_3)) , 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh"s, 0x000001b0U, ""s, 1U);
                    }
                }
            } else {
                unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__setting 
                    = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_action, vlSymsp);
                VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 417)->__PVT__arg 
                    = setting_str.at(unnamedblk1__DOT__unnamedblk2__DOT__i);
                VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 418)->__PVT__comp 
                    = unnamedblk1__DOT__args.at(0U);
                VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 419)->__PVT__id 
                    = unnamedblk1__DOT__args.at(1U);
                VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 420)->__PVT__all_sev 
                    = ("_ALL_"s == unnamedblk1__DOT__args.at(2U));
                VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 421)->__PVT__sev 
                    = unnamedblk1__DOT__sev;
                VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 422)->__PVT__action 
                    = unnamedblk1__DOT__action;
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

void Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_action__Vclpkg::__VnoInFunc_check(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> ro) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_action__Vclpkg::__VnoInFunc_check\n"); );
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
        if ((0U == VL_NULL_CHECK(this->__Vnontrivs.__PVT__settings.at(unnamedblk5__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 446)
             ->__PVT__used.size())) {
            VL_NULL_CHECK(ro, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 451)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk5__DOT__unnamedblk6__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk5__DOT__unnamedblk6__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 451)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "INVLCMDARGS"s, __VlefCall_0__get_report_verbosity_level);
            __VlefLogAnd_2 = VL_LTES_III(32, 0U, __VlefCall_0__get_report_verbosity_level);
            if (__VlefLogAnd_2) {
                VL_NULL_CHECK(unnamedblk5__DOT__unnamedblk6__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 451)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "INVLCMDARGS"s, __VlefCall_1__get_report_action);
                __VlefLogAnd_2 = (0U != __VlefCall_1__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_2))) {
                __Vtemp_1 = VL_NULL_CHECK(this->__Vnontrivs.__PVT__settings.at(unnamedblk5__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 451)
                    ->__PVT__arg;
                VL_NULL_CHECK(unnamedblk5__DOT__unnamedblk6__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 451)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "INVLCMDARGS"s, VL_SFORMATF_N_NX("\"+uvm_set_action=%s\" never took effect due to a mismatching component pattern",1
                                                                                , 'S',&(__Vtemp_1)) , 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh"s, 0x000001c3U, ""s, 1U);
            }
        }
        if ((unnamedblk5__DOT__i__Vloopsize <= this->__Vnontrivs.__PVT__settings.size())) {
            unnamedblk5__DOT__i = ((::IData)(1U) + unnamedblk5__DOT__i);
        }
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_action__Vclpkg::__VnoInFunc_dump(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string &dump__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_action__Vclpkg::__VnoInFunc_dump\n"); );
    // Locals
    ::std::string __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ unnamedblk7__DOT__i;
    unnamedblk7__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk7__DOT__i__Vloopsize;
    unnamedblk7__DOT__i__Vloopsize = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_action> unnamedblk7__DOT__unnamedblk8__DOT__setting;
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
        __Vtemp_1 = VL_NULL_CHECK(unnamedblk7__DOT__unnamedblk8__DOT__setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 465)
            ->__PVT__arg;
        msgs.push_back(VL_SFORMATF_N_NX("\n+uvm_set_action=%s",1
                                        , 'S',&(__Vtemp_1)) );
        msgs.push_back("\n  matching components:"s);
        if ((0U == VL_NULL_CHECK(unnamedblk7__DOT__unnamedblk8__DOT__setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 467)
             ->__PVT__used.size())) {
            msgs.push_back("\n    <none>"s);
        } else {
            sorted_list.clear();
            unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__j__Vmore 
                = (0U != VL_NULL_CHECK(unnamedblk7__DOT__unnamedblk8__DOT__setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 474)
                   ->__PVT__used.first(unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__j__Vnext));
            while (unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__j__Vmore) {
                unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__j 
                    = unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__j__Vnext;
                unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__j__Vmore 
                    = (0U != VL_NULL_CHECK(unnamedblk7__DOT__unnamedblk8__DOT__setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 474)
                       ->__PVT__used.next(unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__j__Vnext));
                sorted_list.push_back(unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__j);
            }
            sorted_list.sort([&](::IData/*31:0*/ item__DOT__index, 
                                 ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> item) -> 
                             ::std::string {
                    return (([&]() {
                                VL_NULL_CHECK(item, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 479)
                             ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, this->__Vnontrivs.__Vtask_get_full_name__Vfuncout_2573);
                            }(), this->__Vnontrivs.__Vtask_get_full_name__Vfuncout_2573));
                }
            );
            unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk10__DOT__j = 0U;
            while (VL_LTS_III(32, unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk10__DOT__j, sorted_list.size())) {
                unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk10__DOT__j__Vloopsize 
                    = sorted_list.size();
                unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk10__DOT__unnamedblk11__DOT__full_name = ""s;
                VL_NULL_CHECK(sorted_list.at(unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk10__DOT__j), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 482)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk10__DOT__unnamedblk11__DOT__full_name);
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
    this->__Vnontrivs.__Vfunc_m_uvm_string_queue_join__Vfuncout_1309 
        = VL_CVT_PACK_STR_ND(VL_STREAMR_NRI(0, msgs, 1U));
    dump__Vfuncrtn = this->__Vnontrivs.__Vfunc_m_uvm_string_queue_join__Vfuncout_1309;
}

void Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_action::init(Vtb_top__Syms* __restrict vlSymsp) {
    Vtb_top_uvm_pkg__03a__03auvm_cmdline_setting_base::init(vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_action::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_action::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_action::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__all_sev = 0;
    __PVT__sev = 0;
    __PVT__action = 0;
}

Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_action::~Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_action() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_action::~\n"); );
}
