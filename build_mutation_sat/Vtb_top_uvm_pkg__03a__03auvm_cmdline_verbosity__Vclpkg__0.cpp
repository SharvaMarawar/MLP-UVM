// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_cmdline_verbosity__Vclpkg::__VnoInFunc_init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> ro) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_cmdline_verbosity__Vclpkg::__VnoInFunc_init\n"); );
    // Locals
    ::IData/*31:0*/ __Vfunc_uvm_string_to_verbosity__verb_enum_1297;
    __Vfunc_uvm_string_to_verbosity__verb_enum_1297 = 0;
    ::std::string __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::CData/*0:0*/ __VlefCall_0__uvm_string_to_verbosity;
    ::IData/*31:0*/ unnamedblk1__DOT__i;
    unnamedblk1__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk1__DOT__i__Vloopsize;
    unnamedblk1__DOT__i__Vloopsize = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_cmdline_verbosity> unnamedblk1__DOT__unnamedblk2__DOT__setting;
    ::IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__temp_verb;
    ::IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__code;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___local_report_object_;
    ::VlQueue<::std::string> setting_str;
    ::IData/*31:0*/ verbosity;
    ::IData/*31:0*/ verb_count;
    ::std::string verb_string;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_cmdline_processor> clp;
    setting_str.clear();
    setting_str.atDefault().clear();
    verbosity = 0U;
    verb_count = 0U;
    verb_string = ""s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg.__VnoInFunc_get_inst(vlProcess, vlSymsp, clp);
    verb_count = VL_VALUEPLUSARGS_INN(64, "UVM_VERBOSITY=%s"s, 
                                      verb_string);
    if ((0U != verb_count)) {
        setting_str.push_back(verb_string);
    }
    unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk1__DOT__i, setting_str.size())) {
        unnamedblk1__DOT__i__Vloopsize = setting_str.size();
        unnamedblk1__DOT__unnamedblk2__DOT__temp_verb = 0U;
        unnamedblk1__DOT__unnamedblk2__DOT__setting 
            = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_cmdline_verbosity, vlSymsp);
        VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 75)->__PVT__arg 
            = setting_str.at(unnamedblk1__DOT__i);
        VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 76)->__PVT__src = 0U;
        this->__Vnontrivs.__Vfunc_uvm_string_to_verbosity__verb_str_1296 
            = VL_CVT_PACK_STR_NN(setting_str.at(unnamedblk1__DOT__i));
        __VlefCall_0__uvm_string_to_verbosity = 0U;
        __Vfunc_uvm_string_to_verbosity__verb_enum_1297 = 0U;
        if ((((((((("NONE"s == this->__Vnontrivs.__Vfunc_uvm_string_to_verbosity__verb_str_1296) 
                   | ("UVM_NONE"s == this->__Vnontrivs.__Vfunc_uvm_string_to_verbosity__verb_str_1296)) 
                  | ("LOW"s == this->__Vnontrivs.__Vfunc_uvm_string_to_verbosity__verb_str_1296)) 
                 | ("UVM_LOW"s == this->__Vnontrivs.__Vfunc_uvm_string_to_verbosity__verb_str_1296)) 
                | ("MEDIUM"s == this->__Vnontrivs.__Vfunc_uvm_string_to_verbosity__verb_str_1296)) 
               | ("UVM_MEDIUM"s == this->__Vnontrivs.__Vfunc_uvm_string_to_verbosity__verb_str_1296)) 
              | ("HIGH"s == this->__Vnontrivs.__Vfunc_uvm_string_to_verbosity__verb_str_1296)) 
             | ("UVM_HIGH"s == this->__Vnontrivs.__Vfunc_uvm_string_to_verbosity__verb_str_1296))) {
            __Vfunc_uvm_string_to_verbosity__verb_enum_1297 
                = (("NONE"s == this->__Vnontrivs.__Vfunc_uvm_string_to_verbosity__verb_str_1296)
                    ? 0U : (("UVM_NONE"s == this->__Vnontrivs.__Vfunc_uvm_string_to_verbosity__verb_str_1296)
                             ? 0U : (("LOW"s == this->__Vnontrivs.__Vfunc_uvm_string_to_verbosity__verb_str_1296)
                                      ? 0x00000064U
                                      : (("UVM_LOW"s 
                                          == this->__Vnontrivs.__Vfunc_uvm_string_to_verbosity__verb_str_1296)
                                          ? 0x00000064U
                                          : (("MEDIUM"s 
                                              == this->__Vnontrivs.__Vfunc_uvm_string_to_verbosity__verb_str_1296)
                                              ? 0x000000c8U
                                              : (("UVM_MEDIUM"s 
                                                  == this->__Vnontrivs.__Vfunc_uvm_string_to_verbosity__verb_str_1296)
                                                  ? 0x000000c8U
                                                  : 0x0000012cU))))));
            __VlefCall_0__uvm_string_to_verbosity = 1U;
        } else if (("FULL"s == this->__Vnontrivs.__Vfunc_uvm_string_to_verbosity__verb_str_1296)) {
            __Vfunc_uvm_string_to_verbosity__verb_enum_1297 = 0x00000190U;
            __VlefCall_0__uvm_string_to_verbosity = 1U;
        } else if (("UVM_FULL"s == this->__Vnontrivs.__Vfunc_uvm_string_to_verbosity__verb_str_1296)) {
            __Vfunc_uvm_string_to_verbosity__verb_enum_1297 = 0x00000190U;
            __VlefCall_0__uvm_string_to_verbosity = 1U;
        } else if (("DEBUG"s == this->__Vnontrivs.__Vfunc_uvm_string_to_verbosity__verb_str_1296)) {
            __Vfunc_uvm_string_to_verbosity__verb_enum_1297 = 0x000001f4U;
            __VlefCall_0__uvm_string_to_verbosity = 1U;
        } else if (("UVM_DEBUG"s == this->__Vnontrivs.__Vfunc_uvm_string_to_verbosity__verb_str_1296)) {
            __Vfunc_uvm_string_to_verbosity__verb_enum_1297 = 0x000001f4U;
            __VlefCall_0__uvm_string_to_verbosity = 1U;
        } else {
            __VlefCall_0__uvm_string_to_verbosity = 0U;
        }
        unnamedblk1__DOT__unnamedblk2__DOT__temp_verb 
            = __Vfunc_uvm_string_to_verbosity__verb_enum_1297;
        if (__VlefCall_0__uvm_string_to_verbosity) {
            VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 95)->__PVT__verbosity 
                = unnamedblk1__DOT__unnamedblk2__DOT__temp_verb;
        } else {
            unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__code = 0U;
            unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__code 
                = VL_SSCANF_INNX(64,setting_str.at(unnamedblk1__DOT__i),"%d",1
                                 , '#',32,&(VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 80)
                                            ->__PVT__verbosity)) ;
            if (VL_LTS_III(32, 0U, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__code)) {
                VL_NULL_CHECK(ro, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 86)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___local_report_object_);
                VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 86)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "NSTVERB"s, __VlefCall_1__get_report_verbosity_level);
                __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
                if (__VlefLogAnd_3) {
                    VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 86)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "NSTVERB"s, __VlefCall_2__get_report_action);
                    __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
                }
                if (VL_UNLIKELY((__VlefLogAnd_3))) {
                    __Vtemp_1 = setting_str.at(unnamedblk1__DOT__i);
                    VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 86)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "NSTVERB"s, VL_SFORMATF_N_NX("Non-standard verbosity value '%s', converted to '%0d'.",2
                                                                                , 'S',&(__Vtemp_1)
                                                                                , '~',32,verbosity) , 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh"s, 0x00000056U, ""s, 1U);
                }
                VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 87)->__PVT__src = 1U;
            } else {
                VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 90)->__PVT__verbosity = 0x000000c8U;
                VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 91)->__PVT__src = 2U;
            }
        }
        this->__Vnontrivs.__PVT__settings.push_back(unnamedblk1__DOT__unnamedblk2__DOT__setting);
        if ((unnamedblk1__DOT__i__Vloopsize <= setting_str.size())) {
            unnamedblk1__DOT__i = ((::IData)(1U) + unnamedblk1__DOT__i);
        }
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_cmdline_verbosity__Vclpkg::__VnoInFunc_check(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> ro) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_cmdline_verbosity__Vclpkg::__VnoInFunc_check\n"); );
    // Locals
    ::std::string __Vtemp_1;
    ::std::string __Vtemp_2;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_6__m_uvm_string_queue_join;
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
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk7__DOT___local_report_object_;
    ::VlQueue<::std::string> verb_q;
    verb_q.clear();
    verb_q.atDefault().clear();
    unnamedblk5__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk5__DOT__i, this->__Vnontrivs.__PVT__settings.size())) {
        unnamedblk5__DOT__i__Vloopsize = this->__Vnontrivs.__PVT__settings.size();
        if ((2U == VL_NULL_CHECK(this->__Vnontrivs.__PVT__settings.at(unnamedblk5__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 111)
             ->__PVT__src)) {
            VL_NULL_CHECK(ro, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 115)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk5__DOT__unnamedblk6__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk5__DOT__unnamedblk6__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 115)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "ILLVERB"s, __VlefCall_0__get_report_verbosity_level);
            __VlefLogAnd_2 = VL_LTES_III(32, 0U, __VlefCall_0__get_report_verbosity_level);
            if (__VlefLogAnd_2) {
                VL_NULL_CHECK(unnamedblk5__DOT__unnamedblk6__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 115)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "ILLVERB"s, __VlefCall_1__get_report_action);
                __VlefLogAnd_2 = (0U != __VlefCall_1__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_2))) {
                __Vtemp_1 = VL_NULL_CHECK(this->__Vnontrivs.__PVT__settings.at(unnamedblk5__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 115)
                    ->__PVT__arg;
                VL_NULL_CHECK(unnamedblk5__DOT__unnamedblk6__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 115)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "ILLVERB"s, VL_SFORMATF_N_NX("Illegal verbosity value '%s', converted to default of UVM_MEDIUM.",1
                                                                                , 'S',&(__Vtemp_1)) , 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh"s, 0x00000073U, ""s, 1U);
            }
        }
        if ((0U != unnamedblk5__DOT__i)) {
            verb_q.push_back(", "s);
        }
        verb_q.push_back(VL_NULL_CHECK(this->__Vnontrivs.__PVT__settings.at(unnamedblk5__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 122)
                         ->__PVT__arg);
        if ((unnamedblk5__DOT__i__Vloopsize <= this->__Vnontrivs.__PVT__settings.size())) {
            unnamedblk5__DOT__i = ((::IData)(1U) + unnamedblk5__DOT__i);
        }
    }
    if (VL_LTS_III(32, 1U, this->__Vnontrivs.__PVT__settings.size())) {
        VL_NULL_CHECK(ro, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 131)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk7__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk7__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 131)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "MULTVERB"s, __VlefCall_3__get_report_verbosity_level);
        __VlefLogAnd_5 = VL_LTES_III(32, 0U, __VlefCall_3__get_report_verbosity_level);
        if (__VlefLogAnd_5) {
            VL_NULL_CHECK(unnamedblk7__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 131)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "MULTVERB"s, __VlefCall_4__get_report_action);
            __VlefLogAnd_5 = (0U != __VlefCall_4__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_5))) {
            this->__Vnontrivs.__Vfunc_m_uvm_string_queue_join__Vfuncout_1298 = ""s;
            this->__Vnontrivs.__Vfunc_m_uvm_string_queue_join__Vfuncout_1298 
                = VL_CVT_PACK_STR_ND(VL_STREAMR_NRI(0, verb_q, 1U));
            __VlefCall_6__m_uvm_string_queue_join = this->__Vnontrivs.__Vfunc_m_uvm_string_queue_join__Vfuncout_1298;
            __Vtemp_2 = VL_NULL_CHECK(this->__Vnontrivs.__PVT__settings.at(0U), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 131)
                ->__PVT__arg;
            VL_NULL_CHECK(unnamedblk7__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 131)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "MULTVERB"s, VL_SFORMATF_N_NX("Multiple (%0d) +UVM_VERBOSITY arguments provided on the command line.  '%s' will be used.  Provided list: %s.",3
                                                                                , '~',32,this->__Vnontrivs.__PVT__settings.size()
                                                                                , 'S',&(__Vtemp_2)
                                                                                , 'S',&(__VlefCall_6__m_uvm_string_queue_join)) , 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh"s, 0x00000083U, ""s, 1U);
        }
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_cmdline_verbosity__Vclpkg::__VnoInFunc_dump(Vtb_top__Syms* __restrict vlSymsp, ::std::string &dump__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_cmdline_verbosity__Vclpkg::__VnoInFunc_dump\n"); );
    // Locals
    ::std::string __Vtemp_1;
    // Body
    ::IData/*31:0*/ unnamedblk8__DOT__i;
    unnamedblk8__DOT__i = 0;
    ::VlQueue<::std::string> msgs;
    msgs.clear();
    msgs.atDefault().clear();
    unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk8__DOT__i, this->__Vnontrivs.__PVT__settings.size())) {
        __Vtemp_1 = VL_NULL_CHECK(this->__Vnontrivs.__PVT__settings.at(unnamedblk8__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 143)
            ->__PVT__arg;
        msgs.push_back(VL_SFORMATF_N_NX("\n+UVM_VERBOSITY=%s: ",1
                                        , 'S',&(__Vtemp_1)) );
        if ((0U == unnamedblk8__DOT__i)) {
            msgs.push_back("Applied"s);
        } else {
            msgs.push_back("Not applied (not first on command line)"s);
        }
        if ((1U == VL_NULL_CHECK(this->__Vnontrivs.__PVT__settings.at(unnamedblk8__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 154)
             ->__PVT__src)) {
            msgs.push_back(VL_SFORMATF_N_NX(", converted as non-standard to '%0d'",1
                                            , '~',32,VL_NULL_CHECK(this->__Vnontrivs.__PVT__settings.at(unnamedblk8__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 156)
                                            ->__PVT__verbosity) );
        } else if ((2U == VL_NULL_CHECK(this->__Vnontrivs.__PVT__settings.at(unnamedblk8__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_cmdline_report.svh", 159)
                    ->__PVT__src)) {
            msgs.push_back(", converted as ILLEGAL to UVM_MEDIUM"s);
        }
        unnamedblk8__DOT__i = ((::IData)(1U) + unnamedblk8__DOT__i);
    }
    this->__Vnontrivs.__Vfunc_m_uvm_string_queue_join__Vfuncout_1299 
        = VL_CVT_PACK_STR_ND(VL_STREAMR_NRI(0, msgs, 1U));
    dump__Vfuncrtn = this->__Vnontrivs.__Vfunc_m_uvm_string_queue_join__Vfuncout_1299;
}

void Vtb_top_uvm_pkg__03a__03auvm_cmdline_verbosity::init(Vtb_top__Syms* __restrict vlSymsp) {
    Vtb_top_uvm_pkg__03a__03auvm_cmdline_setting_base::init(vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_cmdline_verbosity::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void Vtb_top_uvm_pkg__03a__03auvm_cmdline_verbosity::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_cmdline_verbosity::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__verbosity = 0;
    __PVT__src = 0;
}

Vtb_top_uvm_pkg__03a__03auvm_cmdline_verbosity::~Vtb_top_uvm_pkg__03a__03auvm_cmdline_verbosity() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_cmdline_verbosity::~\n"); );
}
