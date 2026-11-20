// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_registry__pib4905b7b> __Vfunc_get__Vfuncout_875;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pib4905b7b__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_875);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_875;
}

void Vtb_top_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tree_printer> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_tree_printer, vlProcess, vlSymsp, ""s);
    } else {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_tree_printer, vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vtb_top_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_tree_printer"s;
}

void Vtb_top_uvm_pkg__03a__03auvm_tree_printer::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_uvm_pkg__03a__03auvm_printer::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_tree_printer::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    this->__PVT__m_newline = "\n"s;
    /*super.new*/;
    this->__VnoInFunc_set_size_enabled(vlSymsp, 0U);
    this->__VnoInFunc_set_type_name_enabled(vlSymsp, 0U);
    VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_printer::__PVT__knobs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1623)->__PVT__header = 0U;
    VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_printer::__PVT__knobs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1624)->__PVT__footer = 0U;
}

void Vtb_top_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc_set_indent(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ indent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc_set_indent\n"); );
    // Body
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03am_uvm_printer_knobs> _knobs;
    this->__VnoInFunc_get_knobs(vlSymsp, _knobs);
    VL_NULL_CHECK(_knobs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1630)->__PVT__indent 
        = indent;
}

void Vtb_top_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc_get_indent(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_indent__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc_get_indent\n"); );
    // Body
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03am_uvm_printer_knobs> _knobs;
    get_indent__Vfuncrtn = 0U;
    this->__VnoInFunc_get_knobs(vlSymsp, _knobs);
    get_indent__Vfuncrtn = VL_NULL_CHECK(_knobs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1634)
        ->__PVT__indent;
}

void Vtb_top_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc_get_separators(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_separators__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc_get_separators\n"); );
    // Body
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03am_uvm_printer_knobs> _knobs;
    get_separators__Vfuncrtn = ""s;
    this->__VnoInFunc_get_knobs(vlSymsp, _knobs);
    get_separators__Vfuncrtn = VL_NULL_CHECK(_knobs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1643)
        ->__PVT__separator;
}

void Vtb_top_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc_flush(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc_flush\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_flush(vlProcess, vlSymsp);
}

void Vtb_top_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc_emit(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string &emit__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc_emit\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_876;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1451;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_1454;
    __Vtask_uvm_report_error__verbosity_1454 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_1456;
    __Vtask_uvm_report_error__line_1456 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_1458;
    __Vtask_uvm_report_error__report_enabled_checked_1458 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_877;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1459;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_7__m_emit_element;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer_element> __VlefCall_6__get_bottom_element;
    ::std::string __VlefCond_5;
    ::std::string __VlefCall_4__get_line_prefix;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk57__DOT___local_report_object_;
    ::std::string s;
    ::std::string user_format;
    emit__Vfuncrtn = ""s;
    s = ""s;
    user_format = ""s;
    if (Vtb_top_uvm_pkg__03a__03auvm_printer::__PVT__m_flushed) {
        Vtb_top_uvm_pkg__03a__03auvm_printer::__PVT__m_flushed = 0U;
    } else {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_876);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
            = __Vfunc_get__Vfuncout_876;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1451);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
            = __Vtask_get_root__Vfuncout_1451;
        __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
        VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1663)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk57__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk57__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1663)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "UVM/PRINT/NO_FLUSH"s, __VlefCall_1__get_report_verbosity_level);
        __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
        if (__VlefLogAnd_3) {
            VL_NULL_CHECK(unnamedblk57__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1663)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "UVM/PRINT/NO_FLUSH"s, __VlefCall_2__get_report_action);
            __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_3))) {
            __Vtask_uvm_report_error__report_enabled_checked_1458 = 1U;
            this->__Vtask_uvm_report_error__context_name_1457 = ""s;
            __Vtask_uvm_report_error__line_1456 = 0x0000067fU;
            this->__Vtask_uvm_report_error__filename_1455 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh"s;
            __Vtask_uvm_report_error__verbosity_1454 = 0U;
            this->__Vtask_uvm_report_error__message_1453 = "printer emit() method called twice without intervening uvm_printer::flush()"s;
            this->__Vtask_uvm_report_error__id_1452 = "UVM/PRINT/NO_FLUSH"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_877);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__Vfuncout_877;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1459);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__Vfuncout_1459;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_1452, this->__Vtask_uvm_report_error__message_1453, __Vtask_uvm_report_error__verbosity_1454, this->__Vtask_uvm_report_error__filename_1455, __Vtask_uvm_report_error__line_1456, this->__Vtask_uvm_report_error__context_name_1457, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_1458));
        }
    }
    this->__VnoInFunc_get_line_prefix(vlSymsp, s);
    if (((""s == this->__PVT__m_newline) | (" "s == this->__PVT__m_newline))) {
        __VlefCond_5 = this->__PVT__m_newline;
    } else {
        this->__VnoInFunc_get_line_prefix(vlSymsp, __VlefCall_4__get_line_prefix);
        __VlefCond_5 = VL_CONCATN_NNN(this->__PVT__m_newline, __VlefCall_4__get_line_prefix);
    }
    this->__PVT__m_linefeed = __VlefCond_5;
    if (VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_printer::__PVT__knobs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1674)
        ->__PVT__header) {
        this->__VnoInFunc_format_header(vlSymsp, user_format);
        if ((""s != user_format)) {
            s = VL_CONCATN_NNN(VL_CONCATN_NNN(s, user_format), this->__PVT__m_linefeed);
        }
    }
    this->__VnoInFunc_get_bottom_element(vlSymsp, __VlefCall_6__get_bottom_element);
    this->__VnoInFunc_m_emit_element(vlSymsp, __VlefCall_6__get_bottom_element, 0U, __VlefCall_7__m_emit_element);
    s = VL_CONCATN_NNN(s, __VlefCall_7__m_emit_element);
    if (VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_printer::__PVT__knobs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1686)
        ->__PVT__footer) {
        this->__VnoInFunc_format_footer(vlSymsp, user_format);
        if ((""s != user_format)) {
            s = VL_CONCATN_NNN(VL_CONCATN_NNN(s, user_format), this->__PVT__m_linefeed);
        }
    }
    if (((""s == this->__PVT__m_newline) | (" "s == this->__PVT__m_newline))) {
        s = VL_CONCATN_NNN(s, "\n"s);
    }
    emit__Vfuncrtn = s;
}

void Vtb_top_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc_m_emit_element(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer_element> element, ::IData/*31:0*/ level, ::std::string &m_emit_element__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc_m_emit_element\n"); );
    // Body
    ::std::string __VlefCall_22__m_emit_element;
    ::std::string __VlefCall_21__get_element_size;
    ::CData/*0:0*/ __VlefLogOr_20;
    ::std::string __VlefCall_19__get_element_size;
    ::std::string __VlefCall_18__get_element_size;
    ::CData/*0:0*/ __VlefCall_17__get_size_enabled;
    ::std::string __VlefCall_16__get_element_type_name;
    ::std::string __VlefCall_15__get_element_type_name;
    ::CData/*0:0*/ __VlefLogOr_14;
    ::std::string __VlefCall_13__get_element_type_name;
    ::std::string __VlefCall_12__get_element_type_name;
    ::CData/*0:0*/ __VlefCall_11__get_type_name_enabled;
    ::std::string __VlefCall_10__get_element_type_name;
    ::CData/*0:0*/ __VlefLogAnd_9;
    ::std::string __VlefCall_8__get_element_name;
    ::std::string __VlefCall_7__get_element_name;
    ::std::string __VlefCall_6__get_element_name;
    ::CData/*0:0*/ __VlefCall_5__get_name_enabled;
    ::std::string __VlefCall_4__get_element_value;
    ::std::string __VlefCall_3__get_element_size;
    ::std::string __VlefCall_2__get_element_type_name;
    ::std::string __VlefCall_1__get_element_name;
    ::IData/*31:0*/ __VlefCall_0__get_indent;
    Vtb_top_uvm_printer_row_info__struct__0 unnamedblk58__DOT__row;
    ::std::string unnamedblk59__DOT__value_str;
    ::IData/*31:0*/ unnamedblk60__DOT__i;
    unnamedblk60__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk60__DOT__i__Vloopsize;
    unnamedblk60__DOT__i__Vloopsize = 0;
    ::std::string result;
    ::std::string space;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer_element>> element_children;
    ::std::string separators;
    ::std::string indent_str;
    ::std::string user_format;
    m_emit_element__Vfuncrtn = ""s;
    result = ""s;
    space = "                                                                                                   "s;
    element_children.clear();
    separators = ""s;
    indent_str = ""s;
    user_format = ""s;
    this->__VnoInFunc_get_separators(vlSymsp, separators);
    this->__VnoInFunc_get_indent(vlSymsp, __VlefCall_0__get_indent);
    indent_str = VL_SUBSTR_N(space,1U,(level * __VlefCall_0__get_indent));
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_tree_printer__Vclpkg.__Vnontrivs.__PVT__m_emit_element__Vstatic__proxy, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1715)->__VnoInFunc_get_immediate_children(vlSymsp, element, element_children);
    unnamedblk58__DOT__row.__PVT__level = 0;
    unnamedblk58__DOT__row.__PVT__name.clear();
    unnamedblk58__DOT__row.__PVT__type_name.clear();
    unnamedblk58__DOT__row.__PVT__size.clear();
    unnamedblk58__DOT__row.__PVT__val.clear();
    unnamedblk58__DOT__row.__PVT__level = level;
    VL_NULL_CHECK(element, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1721)->__VnoInFunc_get_element_name(vlSymsp, __VlefCall_1__get_element_name);
    unnamedblk58__DOT__row.__PVT__name = __VlefCall_1__get_element_name;
    VL_NULL_CHECK(element, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1722)->__VnoInFunc_get_element_type_name(vlSymsp, __VlefCall_2__get_element_type_name);
    unnamedblk58__DOT__row.__PVT__type_name = __VlefCall_2__get_element_type_name;
    VL_NULL_CHECK(element, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1723)->__VnoInFunc_get_element_size(vlSymsp, __VlefCall_3__get_element_size);
    unnamedblk58__DOT__row.__PVT__size = __VlefCall_3__get_element_size;
    VL_NULL_CHECK(element, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1724)->__VnoInFunc_get_element_value(vlSymsp, __VlefCall_4__get_element_value);
    unnamedblk58__DOT__row.__PVT__val = __VlefCall_4__get_element_value;
    this->__VnoInFunc_format_row(vlSymsp, unnamedblk58__DOT__row, user_format);
    if ((""s != user_format)) {
        result = user_format;
    } else {
        unnamedblk59__DOT__value_str = ""s;
        this->__VnoInFunc_get_name_enabled(vlSymsp, __VlefCall_5__get_name_enabled);
        if (__VlefCall_5__get_name_enabled) {
            VL_NULL_CHECK(element, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1738)->__VnoInFunc_get_element_name(vlSymsp, __VlefCall_6__get_element_name);
            result = VL_CONCATN_NNN(VL_CONCATN_NNN(result, indent_str), __VlefCall_6__get_element_name);
            VL_NULL_CHECK(element, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1739)->__VnoInFunc_get_element_name(vlSymsp, __VlefCall_7__get_element_name);
            __VlefLogAnd_9 = (""s != __VlefCall_7__get_element_name);
            if (__VlefLogAnd_9) {
                VL_NULL_CHECK(element, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1739)->__VnoInFunc_get_element_name(vlSymsp, __VlefCall_8__get_element_name);
                __VlefLogAnd_9 = ("..."s != __VlefCall_8__get_element_name);
            }
            if (__VlefLogAnd_9) {
                result = VL_CONCATN_NNN(result, ": "s);
            }
        }
        VL_NULL_CHECK(element, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1747)->__VnoInFunc_get_element_value(vlSymsp, unnamedblk59__DOT__value_str);
        if ((VL_LTS_III(32, 0U, VL_LEN_IN(unnamedblk59__DOT__value_str)) 
             & (0x40U == VL_GETC_N(unnamedblk59__DOT__value_str,0U)))) {
            VL_NULL_CHECK(element, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1750)->__VnoInFunc_get_element_type_name(vlSymsp, __VlefCall_10__get_element_type_name);
            result = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                   VL_CONCATN_NNN(
                                                                  VL_CONCATN_NNN(result, "("s), __VlefCall_10__get_element_type_name), unnamedblk59__DOT__value_str), ") "s);
        } else {
            this->__VnoInFunc_get_type_name_enabled(vlSymsp, __VlefCall_11__get_type_name_enabled);
            if (__VlefCall_11__get_type_name_enabled) {
                VL_NULL_CHECK(element, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1755)->__VnoInFunc_get_element_type_name(vlSymsp, __VlefCall_12__get_element_type_name);
                __VlefLogOr_14 = (""s != __VlefCall_12__get_element_type_name);
                if ((1U & (~ (::IData)(__VlefLogOr_14)))) {
                    VL_NULL_CHECK(element, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1756)->__VnoInFunc_get_element_type_name(vlSymsp, __VlefCall_13__get_element_type_name);
                    __VlefLogOr_14 = ("-"s != __VlefCall_13__get_element_type_name);
                }
                if ((1U & (~ (::IData)(__VlefLogOr_14)))) {
                    VL_NULL_CHECK(element, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1757)->__VnoInFunc_get_element_type_name(vlSymsp, __VlefCall_15__get_element_type_name);
                    __VlefLogOr_14 = ("..."s != __VlefCall_15__get_element_type_name);
                }
                __VlefCall_11__get_type_name_enabled 
                    = __VlefLogOr_14;
            }
            if (__VlefCall_11__get_type_name_enabled) {
                VL_NULL_CHECK(element, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1759)->__VnoInFunc_get_element_type_name(vlSymsp, __VlefCall_16__get_element_type_name);
                result = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                       VL_CONCATN_NNN(result, "("s), __VlefCall_16__get_element_type_name), ") "s);
            }
        }
        this->__VnoInFunc_get_size_enabled(vlSymsp, __VlefCall_17__get_size_enabled);
        if (__VlefCall_17__get_size_enabled) {
            VL_NULL_CHECK(element, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1765)->__VnoInFunc_get_element_size(vlSymsp, __VlefCall_18__get_element_size);
            __VlefLogOr_20 = (""s != __VlefCall_18__get_element_size);
            if ((1U & (~ (::IData)(__VlefLogOr_20)))) {
                VL_NULL_CHECK(element, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1765)->__VnoInFunc_get_element_size(vlSymsp, __VlefCall_19__get_element_size);
                __VlefLogOr_20 = ("-"s != __VlefCall_19__get_element_size);
            }
            if (__VlefLogOr_20) {
                VL_NULL_CHECK(element, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1767)->__VnoInFunc_get_element_size(vlSymsp, __VlefCall_21__get_element_size);
                result = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                       VL_CONCATN_NNN(result, "("s), __VlefCall_21__get_element_size), ") "s);
            }
        }
        result = (VL_LTS_III(32, 0U, element_children.size())
                   ? VL_CONCATN_NNN(VL_CONCATN_NNN(result, 
                                                   VL_CVT_PACK_STR_NI(
                                                                      VL_GETC_N(separators,0U))), this->__PVT__m_linefeed)
                   : VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                   VL_CONCATN_NNN(result, unnamedblk59__DOT__value_str), " "s), this->__PVT__m_linefeed));
    }
    unnamedblk60__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk60__DOT__i, element_children.size())) {
        unnamedblk60__DOT__i__Vloopsize = element_children.size();
        this->__VnoInFunc_m_emit_element(vlSymsp, element_children.at(unnamedblk60__DOT__i), 
                                         ((::IData)(1U) 
                                          + level), __VlefCall_22__m_emit_element);
        result = VL_CONCATN_NNN(result, __VlefCall_22__m_emit_element);
        if ((unnamedblk60__DOT__i__Vloopsize <= element_children.size())) {
            unnamedblk60__DOT__i = ((::IData)(1U) + unnamedblk60__DOT__i);
        }
    }
    if (((""s == user_format) & VL_LTS_III(32, 0U, element_children.size()))) {
        result = VL_CONCATN_NNN(VL_CONCATN_NNN(VL_CONCATN_NNN(result, indent_str), 
                                               VL_CVT_PACK_STR_NI(
                                                                  VL_GETC_N(separators,1U))), this->__PVT__m_linefeed);
    }
    m_emit_element__Vfuncrtn = result;
}

void Vtb_top_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_tree_printer::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_tree_printer::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_top_uvm_pkg__03a__03auvm_tree_printer::~Vtb_top_uvm_pkg__03a__03auvm_tree_printer() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_tree_printer::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_tree_printer::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_tree_printer::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_tree_printer::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_tree_printer::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_newline:" + VL_TO_STRING(__PVT__m_newline);
    out += ", m_linefeed:" + VL_TO_STRING(__PVT__m_linefeed);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_printer::to_string_middle();
    return (out);
}
