// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_resource_base::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::std::string s) {
    Vtb_top_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_resource_base::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__modified = 0U;
    this->__PVT__read_only = 0U;
    if (("<not provided>"s == s)) {
        this->__PVT__scope = s;
    } else {
        this->__Vfunc_uvm_glob_to_re__glob_499 = s;
        this->__PVT__scope = this->__Vfunc_uvm_glob_to_re__glob_499;
    }
    this->__PVT__precedence = 0x000003e8U;
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_get_type_handle(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_base> &get_type_handle__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_get_type_handle\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_is_read_only(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &is_read_only__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_is_read_only\n"); );
    // Body
    is_read_only__Vfuncrtn = this->__PVT__read_only;
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_convert2string\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_1__m_value_as_string;
    ::std::string __VlefCall_0__m_value_type_name;
    convert2string__Vfuncrtn = ""s;
    this->__VnoInFunc_m_value_type_name(vlSymsp, __VlefCall_0__m_value_type_name);
    this->__VnoInFunc_m_value_as_string(vlSymsp, __VlefCall_1__m_value_as_string);
    VL_SFORMAT_NX(convert2string__Vfuncrtn,"(%s) %s",2
                  , 'S',&(__VlefCall_0__m_value_type_name)
                  , 'S',&(__VlefCall_1__m_value_as_string));
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_m_value_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &m_value_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_m_value_type_name\n"); );
    // Body
    m_value_type_name__Vfuncrtn = ""s;
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_m_value_as_string(Vtb_top__Syms* __restrict vlSymsp, ::std::string &m_value_as_string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_m_value_as_string\n"); );
    // Body
    m_value_as_string__Vfuncrtn = ""s;
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_do_print\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_1__m_value_as_string;
    ::std::string __VlefCall_0__m_value_type_name;
    Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
    this->__VnoInFunc_m_value_type_name(vlSymsp, __VlefCall_0__m_value_type_name);
    this->__VnoInFunc_m_value_as_string(vlSymsp, __VlefCall_1__m_value_as_string);
    VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_base.svh", 478)->__VnoInFunc_print_generic_element(vlProcess, vlSymsp, "val"s, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__m_value_type_name), ""s, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__m_value_as_string));
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_record_read_access(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> accessor) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_record_read_access\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    if ((VlNull{} == this->__PVT__dbg)) {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pi304ccaa6__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "dbg"s, VlNull{}, ""s, this->__PVT__dbg);
    }
    VL_NULL_CHECK(this->__PVT__dbg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_base.svh", 525)->__VnoInFunc_record_read_access(vlProcess, vlSymsp, accessor);
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_record_write_access(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> accessor) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_record_write_access\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    if ((VlNull{} == this->__PVT__dbg)) {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pi304ccaa6__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "dbg"s, VlNull{}, ""s, this->__PVT__dbg);
    }
    VL_NULL_CHECK(this->__PVT__dbg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_base.svh", 541)->__VnoInFunc_record_write_access(vlProcess, vlSymsp, accessor);
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_print_accessors(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_print_accessors\n"); );
    // Body
    if ((VlNull{} != this->__PVT__dbg)) {
        VL_NULL_CHECK(this->__PVT__dbg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_base.svh", 556)->__VnoInFunc_print_accessors(vlSymsp);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_m_set_scope(Vtb_top__Syms* __restrict vlSymsp, ::std::string s) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_m_set_scope\n"); );
    // Body
    this->__PVT__scope = s;
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_get_scope(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_scope__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_get_scope\n"); );
    // Body
    get_scope__Vfuncrtn = this->__PVT__scope;
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_set_priority(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ pri) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_set_priority\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_base::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_resource_base::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__modified = 0;
    __PVT__read_only = 0;
    __PVT__precedence = 0;
}

Vtb_top_uvm_pkg__03a__03auvm_resource_base::~Vtb_top_uvm_pkg__03a__03auvm_resource_base() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_resource_base::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_resource_base::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_resource_base::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_resource_base::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_resource_base::to_string_middle\n"); );
    // Body
    std::string out;
    out += "modified:" + VL_TO_STRING(__PVT__modified);
    out += ", read_only:" + VL_TO_STRING(__PVT__read_only);
    out += ", dbg:" + VL_TO_STRING(__PVT__dbg);
    out += ", scope:" + VL_TO_STRING(__PVT__scope);
    out += ", precedence:" + VL_TO_STRING(__PVT__precedence);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
