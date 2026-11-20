// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_table_printer__Vclpkg::__VnoInFunc_get_default(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_table_printer> &get_default__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_table_printer__Vclpkg::__VnoInFunc_get_default\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    if ((VlNull{} == vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_default_table_printer)) {
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_default_table_printer 
            = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_table_printer, vlProcess, vlSymsp, ""s);
    }
    get_default__Vfuncrtn = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_default_table_printer;
}

void Vtb_top_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_registry__pibd6c254f> __Vfunc_get__Vfuncout_872;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pibd6c254f__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_872);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_872;
}

void Vtb_top_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_table_printer> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_table_printer, vlProcess, vlSymsp, ""s);
    } else {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_table_printer, vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vtb_top_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_table_printer"s;
}

void Vtb_top_uvm_pkg__03a__03auvm_table_printer::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_uvm_pkg__03a__03auvm_printer::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_table_printer::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    this->__PVT__m_max_name = 4U;
    this->__PVT__m_max_type = 4U;
    this->__PVT__m_max_size = 4U;
    this->__PVT__m_max_value = 5U;
    /*super.new*/;
}

void Vtb_top_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc_pop_element(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc_pop_element\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_2__get_indent;
    ::IData/*31:0*/ __VlefCall_1__get_indent;
    ::IData/*31:0*/ __VlefCall_0__m_get_stack_size;
    ::IData/*31:0*/ level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer_element> popped;
    ::std::string name_str;
    ::std::string type_name_str;
    ::std::string size_str;
    ::std::string value_str;
    level = 0U;
    name_str = ""s;
    type_name_str = ""s;
    size_str = ""s;
    value_str = ""s;
    this->__VnoInFunc_get_top_element(vlSymsp, popped);
    this->__VnoInFunc_m_get_stack_size(vlSymsp, __VlefCall_0__m_get_stack_size);
    level = (__VlefCall_0__m_get_stack_size - (::IData)(1U));
    VL_NULL_CHECK(popped, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1445)->__VnoInFunc_get_element_name(vlSymsp, name_str);
    VL_NULL_CHECK(popped, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1446)->__VnoInFunc_get_element_type_name(vlSymsp, type_name_str);
    VL_NULL_CHECK(popped, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1447)->__VnoInFunc_get_element_size(vlSymsp, size_str);
    VL_NULL_CHECK(popped, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1448)->__VnoInFunc_get_element_value(vlSymsp, value_str);
    this->__VnoInFunc_get_indent(vlSymsp, __VlefCall_1__get_indent);
    if (VL_GTS_III(32, (VL_LEN_IN(name_str) + VL_MULS_III(32, __VlefCall_1__get_indent, level)), this->__PVT__m_max_name)) {
        this->__VnoInFunc_get_indent(vlSymsp, __VlefCall_2__get_indent);
        this->__PVT__m_max_name = (VL_LEN_IN(name_str) 
                                   + VL_MULS_III(32, __VlefCall_2__get_indent, level));
    }
    if (VL_GTS_III(32, VL_LEN_IN(type_name_str), this->__PVT__m_max_type)) {
        this->__PVT__m_max_type = VL_LEN_IN(type_name_str);
    }
    if (VL_GTS_III(32, VL_LEN_IN(size_str), this->__PVT__m_max_size)) {
        this->__PVT__m_max_size = VL_LEN_IN(size_str);
    }
    if (VL_GTS_III(32, VL_LEN_IN(value_str), this->__PVT__m_max_value)) {
        this->__PVT__m_max_value = VL_LEN_IN(value_str);
    }
    Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_pop_element(vlSymsp);
}

void Vtb_top_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc_emit(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string &emit__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc_emit\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_873;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1442;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_1445;
    __Vtask_uvm_report_error__verbosity_1445 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_1447;
    __Vtask_uvm_report_error__line_1447 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_1449;
    __Vtask_uvm_report_error__report_enabled_checked_1449 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_874;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1450;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_10__get_line_prefix;
    ::std::string __VlefCall_9__m_emit_element;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer_element> __VlefCall_8__get_bottom_element;
    ::CData/*0:0*/ __VlefCall_7__get_size_enabled;
    ::CData/*0:0*/ __VlefCall_6__get_type_name_enabled;
    ::CData/*0:0*/ __VlefCall_5__get_name_enabled;
    ::std::string __VlefCall_4__get_line_prefix;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk52__DOT___local_report_object_;
    ::VlUnpacked<::IData/*31:0*/, 5> unnamedblk53__DOT__q;
    ::IData/*31:0*/ unnamedblk53__DOT__m;
    ::VlQueue<::IData/*31:0*/> unnamedblk53__DOT__qq;
    ::std::string unnamedblk54__DOT__header;
    emit__Vfuncrtn = ""s;
    ::std::string s;
    ::std::string user_format;
    ::std::string dashes;
    ::std::string linefeed;
    s = ""s;
    user_format = ""s;
    dashes = ""s;
    linefeed = ""s;
    if (Vtb_top_uvm_pkg__03a__03auvm_printer::__PVT__m_flushed) {
        Vtb_top_uvm_pkg__03a__03auvm_printer::__PVT__m_flushed = 0U;
    } else {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_873);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
            = __Vfunc_get__Vfuncout_873;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1442);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
            = __Vtask_get_root__Vfuncout_1442;
        __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
        VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1484)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk52__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk52__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1484)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "UVM/PRINT/NO_FLUSH"s, __VlefCall_1__get_report_verbosity_level);
        __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
        if (__VlefLogAnd_3) {
            VL_NULL_CHECK(unnamedblk52__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1484)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "UVM/PRINT/NO_FLUSH"s, __VlefCall_2__get_report_action);
            __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_3))) {
            __Vtask_uvm_report_error__report_enabled_checked_1449 = 1U;
            this->__Vtask_uvm_report_error__context_name_1448 = ""s;
            __Vtask_uvm_report_error__line_1447 = 0x000005ccU;
            this->__Vtask_uvm_report_error__filename_1446 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh"s;
            __Vtask_uvm_report_error__verbosity_1445 = 0U;
            this->__Vtask_uvm_report_error__message_1444 = "printer emit() method called twice without intervening uvm_printer::flush()"s;
            this->__Vtask_uvm_report_error__id_1443 = "UVM/PRINT/NO_FLUSH"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_874);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__Vfuncout_874;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1450);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__Vfuncout_1450;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_1443, this->__Vtask_uvm_report_error__message_1444, __Vtask_uvm_report_error__verbosity_1445, this->__Vtask_uvm_report_error__filename_1446, __Vtask_uvm_report_error__line_1447, this->__Vtask_uvm_report_error__context_name_1448, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_1449));
        }
    }
    this->__VnoInFunc_get_line_prefix(vlSymsp, __VlefCall_4__get_line_prefix);
    linefeed = VL_CONCATN_NNN("\n"s, __VlefCall_4__get_line_prefix);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        unnamedblk53__DOT__q[__Vi0] = 0;
    }
    unnamedblk53__DOT__m = 0U;
    unnamedblk53__DOT__qq.clear();
    unnamedblk53__DOT__qq.atDefault() = 0;
    unnamedblk53__DOT__q[0U] = this->__PVT__m_max_name;
    unnamedblk53__DOT__q[1U] = this->__PVT__m_max_type;
    unnamedblk53__DOT__q[2U] = this->__PVT__m_max_size;
    unnamedblk53__DOT__q[3U] = this->__PVT__m_max_value;
    unnamedblk53__DOT__q[4U] = 0x00000064U;
    unnamedblk53__DOT__qq = unnamedblk53__DOT__q.max();
    unnamedblk53__DOT__m = unnamedblk53__DOT__qq.at(0U);
    if (VL_LTS_III(32, VL_LEN_IN(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg.__Vnontrivs.__PVT__emit__Vstatic__dash), unnamedblk53__DOT__m)) {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg.__Vnontrivs.__PVT__emit__Vstatic__dash 
            = VL_REPLICATEN_NNI("-"s, unnamedblk53__DOT__m);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg.__Vnontrivs.__PVT__m_space 
            = VL_REPLICATEN_NNI(" "s, unnamedblk53__DOT__m);
    }
    if (VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_printer::__PVT__knobs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1507)
        ->__PVT__header) {
        this->__VnoInFunc_format_header(vlSymsp, user_format);
        if ((""s != user_format)) {
            s = VL_CONCATN_NNN(VL_CONCATN_NNN(s, user_format), linefeed);
        } else {
            unnamedblk54__DOT__header = ""s;
            this->__VnoInFunc_get_name_enabled(vlSymsp, __VlefCall_5__get_name_enabled);
            if (__VlefCall_5__get_name_enabled) {
                dashes = VL_SUBSTR_N(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg.__Vnontrivs.__PVT__emit__Vstatic__dash,1U,
                                     ((::IData)(2U) 
                                      + this->__PVT__m_max_name));
                unnamedblk54__DOT__header = VL_CONCATN_NNN("Name"s, 
                                                           VL_SUBSTR_N(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg.__Vnontrivs.__PVT__m_space,1U,
                                                                       (this->__PVT__m_max_name 
                                                                        - (::IData)(2U))));
            }
            this->__VnoInFunc_get_type_name_enabled(vlSymsp, __VlefCall_6__get_type_name_enabled);
            if (__VlefCall_6__get_type_name_enabled) {
                dashes = VL_CONCATN_NNN(dashes, VL_SUBSTR_N(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg.__Vnontrivs.__PVT__emit__Vstatic__dash,1U,
                                                            ((::IData)(2U) 
                                                             + this->__PVT__m_max_type)));
                unnamedblk54__DOT__header = VL_CONCATN_NNN(
                                                           VL_CONCATN_NNN(unnamedblk54__DOT__header, "Type"s), 
                                                           VL_SUBSTR_N(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg.__Vnontrivs.__PVT__m_space,1U,
                                                                       (this->__PVT__m_max_type 
                                                                        - (::IData)(2U))));
            }
            this->__VnoInFunc_get_size_enabled(vlSymsp, __VlefCall_7__get_size_enabled);
            if (__VlefCall_7__get_size_enabled) {
                dashes = VL_CONCATN_NNN(dashes, VL_SUBSTR_N(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg.__Vnontrivs.__PVT__emit__Vstatic__dash,1U,
                                                            ((::IData)(2U) 
                                                             + this->__PVT__m_max_size)));
                unnamedblk54__DOT__header = VL_CONCATN_NNN(
                                                           VL_CONCATN_NNN(unnamedblk54__DOT__header, "Size"s), 
                                                           VL_SUBSTR_N(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg.__Vnontrivs.__PVT__m_space,1U,
                                                                       (this->__PVT__m_max_size 
                                                                        - (::IData)(2U))));
            }
            dashes = VL_CONCATN_NNN(VL_CONCATN_NNN(dashes, 
                                                   VL_SUBSTR_N(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg.__Vnontrivs.__PVT__emit__Vstatic__dash,1U,this->__PVT__m_max_value)), linefeed);
            unnamedblk54__DOT__header = VL_CONCATN_NNN(
                                                       VL_CONCATN_NNN(
                                                                      VL_CONCATN_NNN(unnamedblk54__DOT__header, "Value"s), 
                                                                      VL_SUBSTR_N(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg.__Vnontrivs.__PVT__m_space,1U,
                                                                                (this->__PVT__m_max_value 
                                                                                - (::IData)(5U)))), linefeed);
            s = VL_CONCATN_NNN(VL_CONCATN_NNN(VL_CONCATN_NNN(s, dashes), unnamedblk54__DOT__header), dashes);
        }
    }
    this->__VnoInFunc_get_bottom_element(vlSymsp, __VlefCall_8__get_bottom_element);
    this->__VnoInFunc_m_emit_element(vlSymsp, __VlefCall_8__get_bottom_element, 0U, __VlefCall_9__m_emit_element);
    s = VL_CONCATN_NNN(s, __VlefCall_9__m_emit_element);
    if (VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_printer::__PVT__knobs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1539)
        ->__PVT__footer) {
        this->__VnoInFunc_format_footer(vlSymsp, user_format);
        s = ((""s != user_format) ? VL_CONCATN_NNN(
                                                   VL_CONCATN_NNN(s, user_format), linefeed)
              : VL_CONCATN_NNN(s, dashes));
    }
    this->__VnoInFunc_get_line_prefix(vlSymsp, __VlefCall_10__get_line_prefix);
    emit__Vfuncrtn = VL_CONCATN_NNN(__VlefCall_10__get_line_prefix, s);
}

void Vtb_top_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc_m_emit_element(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer_element> element, ::IData/*31:0*/ level, ::std::string &m_emit_element__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc_m_emit_element\n"); );
    // Body
    ::std::string __VlefCall_10__m_emit_element;
    ::CData/*0:0*/ __VlefCall_9__get_size_enabled;
    ::CData/*0:0*/ __VlefCall_8__get_type_name_enabled;
    ::IData/*31:0*/ __VlefCall_7__get_indent;
    ::IData/*31:0*/ __VlefCall_6__get_indent;
    ::CData/*0:0*/ __VlefCall_5__get_name_enabled;
    ::std::string __VlefCall_4__get_element_value;
    ::std::string __VlefCall_3__get_element_size;
    ::std::string __VlefCall_2__get_element_type_name;
    ::std::string __VlefCall_1__get_element_name;
    ::std::string __VlefCall_0__get_line_prefix;
    ::std::string unnamedblk55__DOT__row_str;
    ::std::string unnamedblk55__DOT__name_str;
    ::std::string unnamedblk55__DOT__value_str;
    ::std::string unnamedblk55__DOT__type_name_str;
    ::std::string unnamedblk55__DOT__size_str;
    ::IData/*31:0*/ unnamedblk56__DOT__i;
    unnamedblk56__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk56__DOT__i__Vloopsize;
    unnamedblk56__DOT__i__Vloopsize = 0;
    ::std::string result;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer_element>> element_children;
    ::std::string linefeed;
    Vtb_top_uvm_printer_row_info__struct__0 row;
    ::std::string user_format;
    m_emit_element__Vfuncrtn = ""s;
    result = ""s;
    element_children.clear();
    this->__VnoInFunc_get_line_prefix(vlSymsp, __VlefCall_0__get_line_prefix);
    linefeed = VL_CONCATN_NNN("\n"s, __VlefCall_0__get_line_prefix);
    row.__PVT__level = 0;
    row.__PVT__name.clear();
    row.__PVT__type_name.clear();
    row.__PVT__size.clear();
    row.__PVT__val.clear();
    user_format = ""s;
    row.__PVT__level = level;
    VL_NULL_CHECK(element, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1563)->__VnoInFunc_get_element_name(vlSymsp, __VlefCall_1__get_element_name);
    row.__PVT__name = __VlefCall_1__get_element_name;
    VL_NULL_CHECK(element, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1564)->__VnoInFunc_get_element_type_name(vlSymsp, __VlefCall_2__get_element_type_name);
    row.__PVT__type_name = __VlefCall_2__get_element_type_name;
    VL_NULL_CHECK(element, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1565)->__VnoInFunc_get_element_size(vlSymsp, __VlefCall_3__get_element_size);
    row.__PVT__size = __VlefCall_3__get_element_size;
    VL_NULL_CHECK(element, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1566)->__VnoInFunc_get_element_value(vlSymsp, __VlefCall_4__get_element_value);
    row.__PVT__val = __VlefCall_4__get_element_value;
    this->__VnoInFunc_format_row(vlSymsp, row, user_format);
    if ((""s != user_format)) {
        result = VL_CONCATN_NNN(user_format, linefeed);
    } else {
        unnamedblk55__DOT__row_str = ""s;
        unnamedblk55__DOT__name_str = ""s;
        unnamedblk55__DOT__value_str = ""s;
        unnamedblk55__DOT__type_name_str = ""s;
        unnamedblk55__DOT__size_str = ""s;
        VL_NULL_CHECK(element, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1580)->__VnoInFunc_get_element_name(vlSymsp, unnamedblk55__DOT__name_str);
        VL_NULL_CHECK(element, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1581)->__VnoInFunc_get_element_value(vlSymsp, unnamedblk55__DOT__value_str);
        VL_NULL_CHECK(element, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1582)->__VnoInFunc_get_element_type_name(vlSymsp, unnamedblk55__DOT__type_name_str);
        VL_NULL_CHECK(element, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1583)->__VnoInFunc_get_element_size(vlSymsp, unnamedblk55__DOT__size_str);
        this->__VnoInFunc_get_name_enabled(vlSymsp, __VlefCall_5__get_name_enabled);
        if (__VlefCall_5__get_name_enabled) {
            this->__VnoInFunc_get_indent(vlSymsp, __VlefCall_6__get_indent);
            this->__VnoInFunc_get_indent(vlSymsp, __VlefCall_7__get_indent);
            result = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                   VL_CONCATN_NNN(result, 
                                                                  VL_SUBSTR_N(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg.__Vnontrivs.__PVT__m_space,1U,
                                                                              (level 
                                                                               * __VlefCall_6__get_indent))), unnamedblk55__DOT__name_str), 
                                    VL_SUBSTR_N(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg.__Vnontrivs.__PVT__m_space,1U,
                                                ((::IData)(2U) 
                                                 + 
                                                 ((this->__PVT__m_max_name 
                                                   - 
                                                   VL_LEN_IN(unnamedblk55__DOT__name_str)) 
                                                  - 
                                                  (level 
                                                   * __VlefCall_7__get_indent)))));
        }
        this->__VnoInFunc_get_type_name_enabled(vlSymsp, __VlefCall_8__get_type_name_enabled);
        if (__VlefCall_8__get_type_name_enabled) {
            result = VL_CONCATN_NNN(VL_CONCATN_NNN(result, unnamedblk55__DOT__type_name_str), 
                                    VL_SUBSTR_N(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg.__Vnontrivs.__PVT__m_space,1U,
                                                ((::IData)(2U) 
                                                 + 
                                                 (this->__PVT__m_max_type 
                                                  - 
                                                  VL_LEN_IN(unnamedblk55__DOT__type_name_str)))));
        }
        this->__VnoInFunc_get_size_enabled(vlSymsp, __VlefCall_9__get_size_enabled);
        if (__VlefCall_9__get_size_enabled) {
            result = VL_CONCATN_NNN(VL_CONCATN_NNN(result, unnamedblk55__DOT__size_str), 
                                    VL_SUBSTR_N(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg.__Vnontrivs.__PVT__m_space,1U,
                                                ((::IData)(2U) 
                                                 + 
                                                 (this->__PVT__m_max_size 
                                                  - 
                                                  VL_LEN_IN(unnamedblk55__DOT__size_str)))));
        }
        result = VL_CONCATN_NNN(VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                              VL_CONCATN_NNN(result, unnamedblk55__DOT__row_str), unnamedblk55__DOT__value_str), 
                                               VL_SUBSTR_N(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg.__Vnontrivs.__PVT__m_space,1U,
                                                           (this->__PVT__m_max_value 
                                                            - 
                                                            VL_LEN_IN(unnamedblk55__DOT__value_str)))), linefeed);
    }
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg.__Vnontrivs.__PVT__m_emit_element__Vstatic__proxy, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1602)->__VnoInFunc_get_immediate_children(vlSymsp, element, element_children);
    unnamedblk56__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk56__DOT__i, element_children.size())) {
        unnamedblk56__DOT__i__Vloopsize = element_children.size();
        this->__VnoInFunc_m_emit_element(vlSymsp, element_children.at(unnamedblk56__DOT__i), 
                                         ((::IData)(1U) 
                                          + level), __VlefCall_10__m_emit_element);
        result = VL_CONCATN_NNN(result, __VlefCall_10__m_emit_element);
        if ((unnamedblk56__DOT__i__Vloopsize <= element_children.size())) {
            unnamedblk56__DOT__i = ((::IData)(1U) + unnamedblk56__DOT__i);
        }
    }
    m_emit_element__Vfuncrtn = result;
}

void Vtb_top_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc_set_indent(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ indent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc_set_indent\n"); );
    // Body
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03am_uvm_printer_knobs> _knobs;
    this->__VnoInFunc_get_knobs(vlSymsp, _knobs);
    VL_NULL_CHECK(_knobs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1806)->__PVT__indent 
        = indent;
}

void Vtb_top_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc_get_indent(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_indent__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc_get_indent\n"); );
    // Body
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03am_uvm_printer_knobs> _knobs;
    get_indent__Vfuncrtn = 0U;
    this->__VnoInFunc_get_knobs(vlSymsp, _knobs);
    get_indent__Vfuncrtn = VL_NULL_CHECK(_knobs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1810)
        ->__PVT__indent;
}

void Vtb_top_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc_flush(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc_flush\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_flush(vlProcess, vlSymsp);
    this->__PVT__m_max_name = 4U;
    this->__PVT__m_max_type = 4U;
    this->__PVT__m_max_size = 4U;
    this->__PVT__m_max_value = 5U;
}

void Vtb_top_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_table_printer::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_table_printer::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_top_uvm_pkg__03a__03auvm_table_printer::~Vtb_top_uvm_pkg__03a__03auvm_table_printer() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_table_printer::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_table_printer::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_table_printer::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_table_printer::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_table_printer::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_max_name:" + VL_TO_STRING(__PVT__m_max_name);
    out += ", m_max_type:" + VL_TO_STRING(__PVT__m_max_type);
    out += ", m_max_size:" + VL_TO_STRING(__PVT__m_max_size);
    out += ", m_max_value:" + VL_TO_STRING(__PVT__m_max_value);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_printer::to_string_middle();
    return (out);
}
