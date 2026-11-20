// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_report_message_int_element::__VnoInFunc_get_value(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &size, ::IData/*27:0*/ &radix, ::VlWide<128>/*4095:0*/ &get_value__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_message_int_element::__VnoInFunc_get_value\n"); );
    // Locals
    ::IData/*31:0*/ __Vilp1;
    // Body
    size = this->__PVT___size;
    radix = this->__PVT___radix;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x0000007fU)) {
        get_value__Vfuncrtn[__Vilp1] = this->__PVT___val
            [__Vilp1];
        __Vilp1 = ((::IData)(1U) + __Vilp1);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_report_message_int_element::__VnoInFunc_set_value(Vtb_top__Syms* __restrict vlSymsp, ::VlWide<128>/*4095:0*/ value, ::IData/*31:0*/ size, ::IData/*27:0*/ radix) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_message_int_element::__VnoInFunc_set_value\n"); );
    // Locals
    ::IData/*31:0*/ __Vilp1;
    // Body
    this->__PVT___size = size;
    this->__PVT___radix = radix;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x0000007fU)) {
        this->__PVT___val[__Vilp1] = value[__Vilp1];
        __Vilp1 = ((::IData)(1U) + __Vilp1);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_report_message_int_element::__VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_message_int_element::__VnoInFunc_do_print\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_message.svh", 162)->__VnoInFunc_print_field(vlProcess, vlSymsp, Vtb_top_uvm_pkg__03a__03auvm_report_message_element_base::__PVT___name, this->__PVT___val, this->__PVT___size, this->__PVT___radix, 0x2eU, ""s);
}

void Vtb_top_uvm_pkg__03a__03auvm_report_message_int_element::__VnoInFunc_do_record(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_recorder> recorder) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_message_int_element::__VnoInFunc_do_record\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_NULL_CHECK(recorder, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_message.svh", 166)->__VnoInFunc_record_field(vlProcess, vlSymsp, Vtb_top_uvm_pkg__03a__03auvm_report_message_element_base::__PVT___name, this->__PVT___val, this->__PVT___size, this->__PVT___radix);
}

void Vtb_top_uvm_pkg__03a__03auvm_report_message_int_element::__VnoInFunc_do_copy(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_message_element_base> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_message_int_element::__VnoInFunc_do_copy\n"); );
    // Body
    ::IData/*31:0*/ __VlefExpr_0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_message_int_element> _rhs;
    __VlefExpr_0 = VL_CAST_DYNAMIC(rhs, _rhs);
    if (VL_UNLIKELY(((1U & (~ (0U != __VlefExpr_0)))))) {
        VL_WRITEF_NX("[%0t] %%Error: uvm_report_message.svh:171: Assertion failed in %m: '$cast' failed.\n",3, 'M',vlSymsp->name(),"uvm_pkg.uvm_report_message_int_element.do_copy", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_message.svh", 171, "");
    }
    Vtb_top_uvm_pkg__03a__03auvm_report_message_element_base::__PVT___name 
        = VL_NULL_CHECK(_rhs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_message.svh", 172)
        ->__PVT___name;
    VL_ASSIGN_W(4096, this->__PVT___val, VL_NULL_CHECK(_rhs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_message.svh", 173)
                ->__PVT___val);
    this->__PVT___size = VL_NULL_CHECK(_rhs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_message.svh", 174)
        ->__PVT___size;
    this->__PVT___radix = VL_NULL_CHECK(_rhs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_message.svh", 175)
        ->__PVT___radix;
    Vtb_top_uvm_pkg__03a__03auvm_report_message_element_base::__PVT___action 
        = VL_NULL_CHECK(rhs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_message.svh", 176)
        ->__PVT___action;
}

void Vtb_top_uvm_pkg__03a__03auvm_report_message_int_element::__VnoInFunc_do_clone(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_message_element_base> &do_clone__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_message_int_element::__VnoInFunc_do_clone\n"); );
    // Body
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_message_int_element> tmp;
    tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_report_message_int_element, vlSymsp);
    VL_NULL_CHECK(tmp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_message.svh", 181)->__VnoInFunc_copy(vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_message_int_element>{this});
    do_clone__Vfuncrtn = tmp;
}

void Vtb_top_uvm_pkg__03a__03auvm_report_message_int_element::init(Vtb_top__Syms* __restrict vlSymsp) {
    Vtb_top_uvm_pkg__03a__03auvm_report_message_element_base::init(vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_message_int_element::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void Vtb_top_uvm_pkg__03a__03auvm_report_message_int_element::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_message_int_element::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    VL_SCOPED_RAND_RESET_W(4096, __PVT___val, 7558448463692394339ULL, 1123822410863971104ull);
    __PVT___size = 0;
    __PVT___radix = 0;
}

Vtb_top_uvm_pkg__03a__03auvm_report_message_int_element::~Vtb_top_uvm_pkg__03a__03auvm_report_message_int_element() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_message_int_element::~\n"); );
}
