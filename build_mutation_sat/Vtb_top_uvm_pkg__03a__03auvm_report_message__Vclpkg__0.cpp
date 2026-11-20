// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_report_message__Vclpkg::__VnoInFunc_new_report_message(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_message> &new_report_message__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_report_message__Vclpkg::__VnoInFunc_new_report_message\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_std__03a__03aprocess> p;
    ::std::string rand_state;
    rand_state = ""s;
    vlSymsp->vlInst.TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, p);
    if ((VlNull{} != p)) {
        VL_NULL_CHECK(p, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_message.svh", 567)->__VnoInFunc_get_randstate(vlSymsp, rand_state);
    }
    new_report_message__Vfuncrtn = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_report_message, vlProcess, vlSymsp, name);
    if ((VlNull{} != p)) {
        VL_NULL_CHECK(p, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_message.svh", 573)->__VnoInFunc_set_randstate(vlSymsp, rand_state);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_report_message::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_message::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT___report_message_element_container 
        = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_report_message_element_container, vlProcess, vlSymsp, "element_container"s);
}

extern const ::VlUnpacked<::std::string, 4> Vtb_top__ConstPool__CONSARRAY_4;
extern const ::VlAssocArray<::IData/*31:0*/, ::CData/*0:0*/> Vtb_top__ConstPool__CONSASSOC_3;
extern const ::VlAssocArray<::IData/*31:0*/, ::std::string> Vtb_top__ConstPool__CONSASSOC_2;

void Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_do_print\n"); );
    // Locals
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_message_element_base>> __Vtask_get_elements__Vfuncout_1656;
    ::VlWide<128>/*4095:0*/ __Vtemp_1;
    ::VlWide<128>/*4095:0*/ __Vtemp_2;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCall_1__size;
    ::IData/*31:0*/ __VlefCond_0;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_message_element_base>> unnamedblk1__DOT__elements;
    ::IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__i;
    unnamedblk1__DOT__unnamedblk2__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__i__Vloopsize;
    unnamedblk1__DOT__unnamedblk2__DOT__i__Vloopsize = 0;
    ::IData/*31:0*/ l_verbosity;
    l_verbosity = 0U;
    Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
    VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_message.svh", 611)->__VnoInFunc_print_generic(vlProcess, vlSymsp, "severity"s, "uvm_severity"s, 2U, 
                                                                                VL_CVT_PACK_STR_NN(Vtb_top__ConstPool__CONSARRAY_4
                                                                                [this->__PVT___severity]), 0x2eU);
    VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_message.svh", 613)->__VnoInFunc_print_string(vlProcess, vlSymsp, "id"s, this->__PVT___id, 0x2eU);
    VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_message.svh", 614)->__VnoInFunc_print_string(vlProcess, vlSymsp, "message"s, this->__PVT___message, 0x2eU);
    if (Vtb_top__ConstPool__CONSASSOC_3.at(this->__PVT___verbosity)) {
        l_verbosity = this->__PVT___verbosity;
        __VlefCond_0 = 1U;
    } else {
        __VlefCond_0 = 0U;
    }
    if ((0U != __VlefCond_0)) {
        VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_message.svh", 617)->__VnoInFunc_print_generic(vlProcess, vlSymsp, "verbosity"s, "uvm_verbosity"s, 0x00000020U, 
                                                                                VL_CVT_PACK_STR_NN(Vtb_top__ConstPool__CONSASSOC_2
                                                                                .at(l_verbosity)), 0x2eU);
    } else {
        VL_EXTENDS_WI(4096,32, __Vtemp_1, this->__PVT___verbosity);
        VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_message.svh", 623)->__VnoInFunc_print_field(vlProcess, vlSymsp, "verbosity"s, __Vtemp_1, 0x00000020U, 0x07000000U, 0x2eU, ""s);
    }
    VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_message.svh", 626)->__VnoInFunc_print_string(vlProcess, vlSymsp, "filename"s, this->__PVT___filename, 0x2eU);
    VL_EXTENDS_WI(4096,32, __Vtemp_2, this->__PVT___line);
    VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_message.svh", 627)->__VnoInFunc_print_field(vlProcess, vlSymsp, "line"s, __Vtemp_2, 0x00000020U, 0x03000000U, 0x2eU, ""s);
    VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_message.svh", 628)->__VnoInFunc_print_string(vlProcess, vlSymsp, "context_name"s, this->__PVT___context_name, 0x2eU);
    VL_NULL_CHECK(this->__PVT___report_message_element_container, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_message.svh", 630)->__VnoInFunc_size(vlSymsp, __VlefCall_1__size);
    if ((0U != __VlefCall_1__size)) {
        unnamedblk1__DOT__elements.clear();
        VL_NULL_CHECK(this->__PVT___report_message_element_container, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_message.svh", 633)->__VnoInFunc_get_elements(vlSymsp, __Vtask_get_elements__Vfuncout_1656);
        unnamedblk1__DOT__elements = __Vtask_get_elements__Vfuncout_1656;
        unnamedblk1__DOT__unnamedblk2__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk1__DOT__unnamedblk2__DOT__i, unnamedblk1__DOT__elements.size())) {
            unnamedblk1__DOT__unnamedblk2__DOT__i__Vloopsize 
                = unnamedblk1__DOT__elements.size();
            VL_NULL_CHECK(unnamedblk1__DOT__elements.at(unnamedblk1__DOT__unnamedblk2__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_message.svh", 636)->__VnoInFunc_print(vlProcess, vlSymsp, printer);
            if ((unnamedblk1__DOT__unnamedblk2__DOT__i__Vloopsize 
                 <= unnamedblk1__DOT__elements.size())) {
                unnamedblk1__DOT__unnamedblk2__DOT__i 
                    = ((::IData)(1U) + unnamedblk1__DOT__unnamedblk2__DOT__i);
            }
        }
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi58324c77> __Vfunc_get__Vfuncout_935;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pi58324c77__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_935);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_935;
}

void Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_message> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_report_message, vlProcess, vlSymsp, "uvm_report_message"s);
    } else {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_report_message, vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_report_message"s;
}

void Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_do_copy\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefExpr_0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_message> report_message;
    {
        Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_copy(vlProcess, vlSymsp, rhs);
        __VlefExpr_0 = VL_CAST_DYNAMIC(rhs, report_message);
        if (((1U & (~ (0U != __VlefExpr_0))) || (VlNull{} 
                                                 == rhs))) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_message.svh", 664)->__VnoInFunc_get_report_object(vlSymsp, this->__PVT___report_object);
        VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_message.svh", 665)->__VnoInFunc_get_report_handler(vlSymsp, this->__PVT___report_handler);
        VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_message.svh", 666)->__VnoInFunc_get_report_server(vlSymsp, this->__PVT___report_server);
        VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_message.svh", 667)->__VnoInFunc_get_context(vlSymsp, this->__PVT___context_name);
        VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_message.svh", 668)->__VnoInFunc_get_file(vlSymsp, this->__PVT___file);
        VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_message.svh", 669)->__VnoInFunc_get_filename(vlSymsp, this->__PVT___filename);
        VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_message.svh", 670)->__VnoInFunc_get_line(vlSymsp, this->__PVT___line);
        VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_message.svh", 671)->__VnoInFunc_get_action(vlSymsp, this->__PVT___action);
        VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_message.svh", 672)->__VnoInFunc_get_severity(vlSymsp, this->__PVT___severity);
        VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_message.svh", 673)->__VnoInFunc_get_id(vlSymsp, this->__PVT___id);
        VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_message.svh", 674)->__VnoInFunc_get_message(vlSymsp, this->__PVT___message);
        VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_message.svh", 675)->__VnoInFunc_get_verbosity(vlSymsp, this->__PVT___verbosity);
        VL_NULL_CHECK(this->__PVT___report_message_element_container, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_message.svh", 677)->__VnoInFunc_copy(vlProcess, vlSymsp, VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_message.svh", 677)
                                                                                ->__PVT___report_message_element_container, VlNull{});
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_report_object(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> &get_report_object__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_report_object\n"); );
    // Body
    get_report_object__Vfuncrtn = this->__PVT___report_object;
}

void Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_report_object(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> ro) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_report_object\n"); );
    // Body
    this->__PVT___report_object = ro;
}

void Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_report_handler(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_handler> &get_report_handler__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_report_handler\n"); );
    // Body
    get_report_handler__Vfuncrtn = this->__PVT___report_handler;
}

void Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_report_handler(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_handler> rh) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_report_handler\n"); );
    // Body
    this->__PVT___report_handler = rh;
}

void Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_report_server(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_server> &get_report_server__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_report_server\n"); );
    // Body
    get_report_server__Vfuncrtn = this->__PVT___report_server;
}

void Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_report_server(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_server> rs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_report_server\n"); );
    // Body
    this->__PVT___report_server = rs;
}

void Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_severity(Vtb_top__Syms* __restrict vlSymsp, ::CData/*1:0*/ &get_severity__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_severity\n"); );
    // Body
    get_severity__Vfuncrtn = this->__PVT___severity;
}

void Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_severity(Vtb_top__Syms* __restrict vlSymsp, ::CData/*1:0*/ sev) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_severity\n"); );
    // Body
    this->__PVT___severity = sev;
}

void Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_id(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_id__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_id\n"); );
    // Body
    get_id__Vfuncrtn = this->__PVT___id;
}

void Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_message(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_message__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_message\n"); );
    // Body
    get_message__Vfuncrtn = this->__PVT___message;
}

void Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_verbosity(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_verbosity__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_verbosity\n"); );
    // Body
    get_verbosity__Vfuncrtn = this->__PVT___verbosity;
}

void Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_filename(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_filename__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_filename\n"); );
    // Body
    get_filename__Vfuncrtn = this->__PVT___filename;
}

void Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_line(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_line__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_line\n"); );
    // Body
    get_line__Vfuncrtn = this->__PVT___line;
}

void Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_line(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ ln) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_line\n"); );
    // Body
    this->__PVT___line = ln;
}

void Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_context(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_context__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_context\n"); );
    // Body
    get_context__Vfuncrtn = this->__PVT___context_name;
}

void Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_context(Vtb_top__Syms* __restrict vlSymsp, ::std::string cn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_context\n"); );
    // Body
    this->__PVT___context_name = cn;
}

void Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_action(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_action__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_action\n"); );
    // Body
    get_action__Vfuncrtn = this->__PVT___action;
}

void Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_action(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ act) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_action\n"); );
    // Body
    this->__PVT___action = act;
}

void Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_file(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_file__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_file\n"); );
    // Body
    get_file__Vfuncrtn = this->__PVT___file;
}

void Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_file(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ fl) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_file\n"); );
    // Body
    this->__PVT___file = fl;
}

void Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_element_container(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_message_element_container> &get_element_container__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_element_container\n"); );
    // Body
    get_element_container__Vfuncrtn = this->__PVT___report_message_element_container;
}

void Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_report_message(Vtb_top__Syms* __restrict vlSymsp, ::CData/*1:0*/ severity, ::std::string id, ::std::string message, ::IData/*31:0*/ verbosity, ::std::string filename, ::IData/*31:0*/ line, ::std::string context_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_report_message\n"); );
    // Body
    this->__PVT___context_name = context_name;
    this->__PVT___filename = filename;
    this->__PVT___line = line;
    this->__PVT___severity = severity;
    this->__PVT___id = id;
    this->__PVT___message = message;
    this->__PVT___verbosity = verbosity;
}

void Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_m_record_message(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_recorder> recorder) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_m_record_message\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_NULL_CHECK(recorder, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_message.svh", 950)->__VnoInFunc_record_string(vlProcess, vlSymsp, "message"s, this->__PVT___message);
}

void Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_m_record_core_properties(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_recorder> recorder) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_m_record_core_properties\n"); );
    // Locals
    ::VlWide<128>/*4095:0*/ __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCond_0;
    ::std::string l_string;
    ::IData/*31:0*/ l_verbosity;
    l_string = ""s;
    l_verbosity = 0U;
    if ((""s != this->__PVT___context_name)) {
        VL_NULL_CHECK(recorder, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_message.svh", 962)->__VnoInFunc_record_string(vlProcess, vlSymsp, "context_name"s, this->__PVT___context_name);
    }
    VL_NULL_CHECK(recorder, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_message.svh", 965)->__VnoInFunc_record_string(vlProcess, vlSymsp, "filename"s, this->__PVT___filename);
    VL_EXTENDS_WI(4096,32, __Vtemp_1, this->__PVT___line);
    VL_NULL_CHECK(recorder, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_message.svh", 966)->__VnoInFunc_record_field(vlProcess, vlSymsp, "line"s, __Vtemp_1, 0x00000020U, 0x03000000U);
    VL_NULL_CHECK(recorder, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_message.svh", 967)->__VnoInFunc_record_string(vlProcess, vlSymsp, "severity"s, 
                                                                                VL_CVT_PACK_STR_NN(Vtb_top__ConstPool__CONSARRAY_4
                                                                                [this->__PVT___severity]));
    if (Vtb_top__ConstPool__CONSASSOC_3.at(this->__PVT___verbosity)) {
        l_verbosity = this->__PVT___verbosity;
        __VlefCond_0 = 1U;
    } else {
        __VlefCond_0 = 0U;
    }
    if ((0U != __VlefCond_0)) {
        VL_NULL_CHECK(recorder, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_message.svh", 970)->__VnoInFunc_record_string(vlProcess, vlSymsp, "verbosity"s, 
                                                                                VL_CVT_PACK_STR_NN(Vtb_top__ConstPool__CONSASSOC_2
                                                                                .at(l_verbosity)));
    } else {
        VL_SFORMAT_NX(l_string,"%0d",1, '~',32,this->__PVT___verbosity);
        VL_NULL_CHECK(recorder, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_message.svh", 976)->__VnoInFunc_record_string(vlProcess, vlSymsp, "verbosity"s, l_string);
    }
    VL_NULL_CHECK(recorder, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_message.svh", 979)->__VnoInFunc_record_string(vlProcess, vlSymsp, "id"s, this->__PVT___id);
    this->__VnoInFunc_m_record_message(vlProcess, vlSymsp, recorder);
}

void Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_do_record(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_recorder> recorder) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_do_record\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_record(vlProcess, vlSymsp, recorder);
    this->__VnoInFunc_m_record_core_properties(vlProcess, vlSymsp, recorder);
    VL_NULL_CHECK(this->__PVT___report_message_element_container, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_message.svh", 989)->__VnoInFunc_record(vlProcess, vlSymsp, recorder);
}

void Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_add_int(Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlWide<128>/*4095:0*/ value, ::IData/*31:0*/ size, ::IData/*27:0*/ radix, ::IData/*31:0*/ action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_add_int\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT___report_message_element_container, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_message.svh", 1011)->__VnoInFunc_add_int(vlSymsp, name, value, size, radix, action);
}

void Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_add_string(Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::std::string value, ::IData/*31:0*/ action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_add_string\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT___report_message_element_container, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_message.svh", 1024)->__VnoInFunc_add_string(vlSymsp, name, value, action);
}

void Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_add_object(Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> obj, ::IData/*31:0*/ action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_add_object\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT___report_message_element_container, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_message.svh", 1037)->__VnoInFunc_add_object(vlSymsp, name, obj, action);
}

void Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_message::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_report_message::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_message::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT___severity = 0;
    __PVT___verbosity = 0;
    __PVT___line = 0;
    __PVT___action = 0;
    __PVT___file = 0;
}

Vtb_top_uvm_pkg__03a__03auvm_report_message::~Vtb_top_uvm_pkg__03a__03auvm_report_message() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_message::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_report_message::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_message::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_report_message::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_message::to_string_middle\n"); );
    // Body
    std::string out;
    out += "_report_object:" + VL_TO_STRING(__PVT___report_object);
    out += ", _report_handler:" + VL_TO_STRING(__PVT___report_handler);
    out += ", _report_server:" + VL_TO_STRING(__PVT___report_server);
    out += ", _severity:" + VL_TO_STRING(__PVT___severity);
    out += ", _id:" + VL_TO_STRING(__PVT___id);
    out += ", _message:" + VL_TO_STRING(__PVT___message);
    out += ", _verbosity:" + VL_TO_STRING(__PVT___verbosity);
    out += ", _filename:" + VL_TO_STRING(__PVT___filename);
    out += ", _line:" + VL_TO_STRING(__PVT___line);
    out += ", _context_name:" + VL_TO_STRING(__PVT___context_name);
    out += ", _action:" + VL_TO_STRING(__PVT___action);
    out += ", _file:" + VL_TO_STRING(__PVT___file);
    out += ", _report_message_element_container:" + VL_TO_STRING(__PVT___report_message_element_container);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
