// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_printer__Vclpkg::__VnoInFunc_get_default(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer> &get_default__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_printer__Vclpkg::__VnoInFunc_get_default\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> coreservice;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, coreservice);
    VL_NULL_CHECK(coreservice, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 817)->__VnoInFunc_get_default_printer(vlProcess, vlSymsp, get_default__Vfuncrtn);
}

void Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi61e9e728> __Vfunc_get__Vfuncout_865;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_abstract_object_registry__pi61e9e728__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_865);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_865;
}

void Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_printer"s;
}

void Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_knobs(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03am_uvm_printer_knobs> &get_knobs__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_knobs\n"); );
    // Body
    get_knobs__Vfuncrtn = this->__PVT__knobs;
}

void Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_m_get_stack_size(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &m_get_stack_size__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_m_get_stack_size\n"); );
    // Body
    m_get_stack_size__Vfuncrtn = this->__PVT__m_element_stack.size();
}

void Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_format_row(Vtb_top__Syms* __restrict vlSymsp, Vtb_top_uvm_printer_row_info__struct__0 row, ::std::string &format_row__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_format_row\n"); );
    // Body
    format_row__Vfuncrtn = ""s;
}

void Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_format_header(Vtb_top__Syms* __restrict vlSymsp, ::std::string &format_header__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_format_header\n"); );
    // Body
    format_header__Vfuncrtn = ""s;
}

void Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_format_footer(Vtb_top__Syms* __restrict vlSymsp, ::std::string &format_footer__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_format_footer\n"); );
    // Body
    format_footer__Vfuncrtn = ""s;
}

extern const ::VlWide<256>/*8191:0*/ Vtb_top__ConstPool__CONST_0;

void Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_adjust_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string id, ::CData/*7:0*/ scope_separator, ::std::string &adjust_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_adjust_name\n"); );
    // Locals
    ::CData/*7:0*/ __Vfunc_uvm_leaf_scope__scope_separator_867;
    __Vfunc_uvm_leaf_scope__scope_separator_867 = 0;
    // Body
    ::CData/*0:0*/ __VlefCall_0__get_root_enabled;
    {
        adjust_name__Vfuncrtn = ""s;
        this->__VnoInFunc_get_root_enabled(vlSymsp, __VlefCall_0__get_root_enabled);
        if (__VlefCall_0__get_root_enabled) {
            this->__VnoInFunc_istop(vlSymsp, __VlefCall_0__get_root_enabled);
        }
        if ((((::IData)(__VlefCall_0__get_root_enabled) 
              || VL_NULL_CHECK(this->__PVT__knobs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 358)
              ->__PVT__full_name) || ("..."s == id))) {
            adjust_name__Vfuncrtn = id;
            goto __Vlabel0;
        }
        __Vfunc_uvm_leaf_scope__scope_separator_867 
            = scope_separator;
        this->__Vfunc_uvm_leaf_scope__full_name_866 
            = id;
        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bmatches = 0U;
        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bracket_match 
            = (0x000000ffU & Vtb_top__ConstPool__CONST_0
               [(0x07ffffffU & (::IData)(__Vfunc_uvm_leaf_scope__scope_separator_867))]);
        if (((0U != (::IData)(vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bracket_match)) 
             & ((::IData)(vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bracket_match) 
                != VL_GETC_N(this->__Vfunc_uvm_leaf_scope__full_name_866,
                             (VL_LEN_IN(this->__Vfunc_uvm_leaf_scope__full_name_866) 
                              - (::IData)(1U)))))) {
            vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bracket_match = 0U;
        }
        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos 
            = (VL_LEN_IN(this->__Vfunc_uvm_leaf_scope__full_name_866) 
               - (::IData)(1U));
        {
            while (VL_LTS_III(32, 0U, vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos)) {
                if ((VL_GETC_N(this->__Vfunc_uvm_leaf_scope__full_name_866,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos) 
                     == (::IData)(vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bracket_match))) {
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bmatches 
                        = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bmatches);
                } else if ((VL_GETC_N(this->__Vfunc_uvm_leaf_scope__full_name_866,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos) 
                            == (::IData)(__Vfunc_uvm_leaf_scope__scope_separator_867))) {
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bmatches 
                        = (vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bmatches 
                           - (::IData)(1U));
                    if ((1U & ((~ (0U != vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bmatches)) 
                               | (0U == (::IData)(vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bracket_match))))) {
                        goto __Vlabel1;
                    }
                }
                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos 
                    = (vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos 
                       - (::IData)(1U));
            }
            __Vlabel1: ;
        }
        if ((0U != vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos)) {
            if ((0x2eU != (::IData)(__Vfunc_uvm_leaf_scope__scope_separator_867))) {
                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos 
                    = (vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos 
                       - (::IData)(1U));
            }
            adjust_name__Vfuncrtn = VL_SUBSTR_N(this->__Vfunc_uvm_leaf_scope__full_name_866,
                                                ((::IData)(1U) 
                                                 + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos),
                                                (VL_LEN_IN(this->__Vfunc_uvm_leaf_scope__full_name_866) 
                                                 - (::IData)(1U)));
        } else {
            adjust_name__Vfuncrtn = this->__Vfunc_uvm_leaf_scope__full_name_866;
        }
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_printer::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_uvm_pkg__03a__03auvm_policy::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_printer::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__knobs = VL_NEW(Vtb_top_uvm_pkg__03a__03am_uvm_printer_knobs, vlSymsp);
    this->__VnoInFunc_flush(vlProcess, vlSymsp);
}

void Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_field(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlWide<128>/*4095:0*/ value, ::IData/*31:0*/ size, ::IData/*27:0*/ radix, ::CData/*7:0*/ scope_separator, ::std::string type_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_field\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_0__get_radix_string;
    ::std::string sz_str;
    ::std::string val_str;
    val_str = ""s;
    if ((""s == type_name)) {
        type_name = ((0x09000000U == radix) ? "time"s
                      : ((0x08000000U == radix) ? "string"s
                          : "integral"s));
    }
    VL_SFORMAT_NX(sz_str,"%0d",1, '~',32,size);
    if ((0U == radix)) {
        this->__VnoInFunc_get_default_radix(vlSymsp, radix);
    }
    this->__VnoInFunc_get_radix_string(vlSymsp, radix, __VlefCall_0__get_radix_string);
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_bit_vector_utils__pie19bc520__Vclpkg.__VnoInFunc_to_string(vlSymsp, value, size, radix, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_radix_string), val_str);
    this->__VnoInFunc_adjust_name(vlSymsp, name, (::IData)(scope_separator), name);
    this->__VnoInFunc_push_element(vlProcess, vlSymsp, name, type_name, sz_str, val_str);
    this->__VnoInFunc_pop_element(vlSymsp);
}

void Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_field_int(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::QData/*63:0*/ value, ::IData/*31:0*/ size, ::IData/*27:0*/ radix, ::CData/*7:0*/ scope_separator, ::std::string type_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_field_int\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_0__get_radix_string;
    ::std::string sz_str;
    ::std::string val_str;
    val_str = ""s;
    if ((""s == type_name)) {
        type_name = ((0x09000000U == radix) ? "time"s
                      : ((0x08000000U == radix) ? "string"s
                          : "integral"s));
    }
    VL_SFORMAT_NX(sz_str,"%0d",1, '~',32,size);
    if ((0U == radix)) {
        this->__VnoInFunc_get_default_radix(vlSymsp, radix);
    }
    this->__VnoInFunc_get_radix_string(vlSymsp, radix, __VlefCall_0__get_radix_string);
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_bit_vector_utils__pi72d50063__Vclpkg.__VnoInFunc_to_string(vlSymsp, value, size, radix, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_radix_string), val_str);
    this->__VnoInFunc_adjust_name(vlSymsp, name, (::IData)(scope_separator), name);
    this->__VnoInFunc_push_element(vlProcess, vlSymsp, name, type_name, sz_str, val_str);
    this->__VnoInFunc_pop_element(vlSymsp);
}

void Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_emit(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string &emit__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_emit\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_868;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1431;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_1434;
    __Vtask_uvm_report_error__verbosity_1434 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_1436;
    __Vtask_uvm_report_error__line_1436 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_1438;
    __Vtask_uvm_report_error__report_enabled_checked_1438 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_869;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1439;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk48__DOT___local_report_object_;
    emit__Vfuncrtn = ""s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_868);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
        = __Vfunc_get__Vfuncout_868;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1431);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
        = __Vtask_get_root__Vfuncout_1431;
    __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
    VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 918)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk48__DOT___local_report_object_);
    VL_NULL_CHECK(unnamedblk48__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 918)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "NO_OVERRIDE"s, __VlefCall_1__get_report_verbosity_level);
    __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
    if (__VlefLogAnd_3) {
        VL_NULL_CHECK(unnamedblk48__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 918)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "NO_OVERRIDE"s, __VlefCall_2__get_report_action);
        __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
    }
    if (VL_UNLIKELY((__VlefLogAnd_3))) {
        __Vtask_uvm_report_error__report_enabled_checked_1438 = 1U;
        this->__Vtask_uvm_report_error__context_name_1437 = ""s;
        __Vtask_uvm_report_error__line_1436 = 0x00000396U;
        this->__Vtask_uvm_report_error__filename_1435 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh"s;
        __Vtask_uvm_report_error__verbosity_1434 = 0U;
        this->__Vtask_uvm_report_error__message_1433 = "emit() method not overridden in printer subtype"s;
        this->__Vtask_uvm_report_error__id_1432 = "NO_OVERRIDE"s;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_869);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
            = __Vfunc_get__Vfuncout_869;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1439);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
            = __Vtask_get_root__Vfuncout_1439;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_1432, this->__Vtask_uvm_report_error__message_1433, __Vtask_uvm_report_error__verbosity_1434, this->__Vtask_uvm_report_error__filename_1435, __Vtask_uvm_report_error__line_1436, this->__Vtask_uvm_report_error__context_name_1437, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_1438));
    }
    emit__Vfuncrtn = ""s;
}

void Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_flush(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_flush\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ unnamedblk49__DOT__i;
    unnamedblk49__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk49__DOT__i__Vloopsize;
    unnamedblk49__DOT__i__Vloopsize = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer_element> element;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer_element>> all_descendent_elements;
    this->__VnoInFunc_get_bottom_element(vlSymsp, element);
    all_descendent_elements.clear();
    this->__VnoInFunc_get_bottom_element(vlSymsp, element);
    if ((VlNull{} != element)) {
        VL_NULL_CHECK(element, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 929)->__VnoInFunc_get_children(vlSymsp, all_descendent_elements, 1U);
        unnamedblk49__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk49__DOT__i, all_descendent_elements.size())) {
            unnamedblk49__DOT__i__Vloopsize = all_descendent_elements.size();
            this->__PVT__m_recycled_elements.push_back(all_descendent_elements.at(unnamedblk49__DOT__i));
            VL_NULL_CHECK(all_descendent_elements.at(unnamedblk49__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 932)->__VnoInFunc_clear_children(vlSymsp);
            if ((unnamedblk49__DOT__i__Vloopsize <= all_descendent_elements.size())) {
                unnamedblk49__DOT__i = ((::IData)(1U) 
                                        + unnamedblk49__DOT__i);
            }
        }
        VL_NULL_CHECK(element, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 934)->__VnoInFunc_clear_children(vlSymsp);
        this->__PVT__m_recycled_elements.push_back(element);
        this->__PVT__m_element_stack.clear();
    }
    this->__PVT__m_recur_states.clear();
    this->__PVT__m_flushed = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_name_enabled(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &get_name_enabled__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_name_enabled\n"); );
    // Body
    get_name_enabled__Vfuncrtn = VL_NULL_CHECK(this->__PVT__knobs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 947)
        ->__PVT__identifier;
}

void Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_set_type_name_enabled(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ enabled) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_set_type_name_enabled\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__knobs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 951)->__PVT__type_name 
        = enabled;
}

void Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_type_name_enabled(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &get_type_name_enabled__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_type_name_enabled\n"); );
    // Body
    get_type_name_enabled__Vfuncrtn = VL_NULL_CHECK(this->__PVT__knobs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 954)
        ->__PVT__type_name;
}

void Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_set_size_enabled(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ enabled) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_set_size_enabled\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__knobs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 958)->__PVT__size 
        = enabled;
}

void Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_size_enabled(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &get_size_enabled__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_size_enabled\n"); );
    // Body
    get_size_enabled__Vfuncrtn = VL_NULL_CHECK(this->__PVT__knobs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 961)
        ->__PVT__size;
}

void Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_id_enabled(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &get_id_enabled__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_id_enabled\n"); );
    // Body
    get_id_enabled__Vfuncrtn = VL_NULL_CHECK(this->__PVT__knobs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 968)
        ->__PVT__reference;
}

void Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_radix_string(Vtb_top__Syms* __restrict vlSymsp, ::IData/*27:0*/ radix, ::std::string &get_radix_string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_radix_string\n"); );
    // Body
    get_radix_string__Vfuncrtn = ((0x02000000U == radix)
                                   ? VL_NULL_CHECK(this->__PVT__knobs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1005)
                                  ->__PVT__dec_radix
                                   : ((0x01000000U 
                                       == radix) ? VL_NULL_CHECK(this->__PVT__knobs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1009)
                                      ->__PVT__bin_radix
                                       : ((0x06000000U 
                                           == radix)
                                           ? VL_NULL_CHECK(this->__PVT__knobs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1013)
                                          ->__PVT__oct_radix
                                           : ((0x03000000U 
                                               == radix)
                                               ? VL_NULL_CHECK(this->__PVT__knobs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1017)
                                              ->__PVT__unsigned_radix
                                               : ((0x07000000U 
                                                   == radix)
                                                   ? VL_NULL_CHECK(this->__PVT__knobs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1021)
                                                  ->__PVT__hex_radix
                                                   : ""s)))));
}

void Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_default_radix(Vtb_top__Syms* __restrict vlSymsp, ::IData/*27:0*/ &get_default_radix__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_default_radix\n"); );
    // Body
    get_default_radix__Vfuncrtn = VL_NULL_CHECK(this->__PVT__knobs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1034)
        ->__PVT__default_radix;
}

void Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_root_enabled(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &get_root_enabled__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_root_enabled\n"); );
    // Body
    get_root_enabled__Vfuncrtn = VL_NULL_CHECK(this->__PVT__knobs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1041)
        ->__PVT__show_root;
}

void Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_set_recursion_policy(Vtb_top__Syms* __restrict vlSymsp, ::IData/*27:0*/ policy) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_set_recursion_policy\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__knobs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1045)->__PVT__recursion_policy 
        = policy;
}

void Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_recursion_policy(Vtb_top__Syms* __restrict vlSymsp, ::IData/*27:0*/ &get_recursion_policy__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_recursion_policy\n"); );
    // Body
    get_recursion_policy__Vfuncrtn = VL_NULL_CHECK(this->__PVT__knobs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1048)
        ->__PVT__recursion_policy;
}

void Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_max_depth(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_max_depth__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_max_depth\n"); );
    // Body
    get_max_depth__Vfuncrtn = VL_NULL_CHECK(this->__PVT__knobs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1055)
        ->__PVT__depth;
}

void Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_set_file(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ fl) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_set_file\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__knobs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1059)->__PVT__mcd 
        = fl;
}

void Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_file(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_file__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_file\n"); );
    // Body
    get_file__Vfuncrtn = VL_NULL_CHECK(this->__PVT__knobs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1062)
        ->__PVT__mcd;
}

void Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_set_line_prefix(Vtb_top__Syms* __restrict vlSymsp, ::std::string prefix) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_set_line_prefix\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__knobs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1066)->__PVT__prefix 
        = prefix;
}

void Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_line_prefix(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_line_prefix__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_line_prefix\n"); );
    // Body
    get_line_prefix__Vfuncrtn = VL_NULL_CHECK(this->__PVT__knobs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1069)
        ->__PVT__prefix;
}

void Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_begin_elements(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_begin_elements__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_begin_elements\n"); );
    // Body
    get_begin_elements__Vfuncrtn = VL_NULL_CHECK(this->__PVT__knobs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1076)
        ->__PVT__begin_elements;
}

void Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_end_elements(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_end_elements__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_end_elements\n"); );
    // Body
    get_end_elements__Vfuncrtn = VL_NULL_CHECK(this->__PVT__knobs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1083)
        ->__PVT__end_elements;
}

void Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_bottom_element(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer_element> &get_bottom_element__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_bottom_element\n"); );
    // Body
    get_bottom_element__Vfuncrtn = (VL_LTS_III(32, 0U, this->__PVT__m_element_stack.size())
                                     ? this->__PVT__m_element_stack.at(0U)
                                     : VlNull{});
}

void Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_top_element(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer_element> &get_top_element__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_top_element\n"); );
    // Body
    get_top_element__Vfuncrtn = (VL_LTS_III(32, 0U, this->__PVT__m_element_stack.size())
                                  ? this->__PVT__m_element_stack.atBack(0U)
                                  : VlNull{});
}

void Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_push_element(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::std::string type_name, ::std::string size, ::std::string value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_push_element\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_0__get_element_name;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer_element> element;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer_element> parent;
    this->__VnoInFunc_get_unused_element(vlProcess, vlSymsp, element);
    this->__VnoInFunc_get_top_element(vlSymsp, parent);
    if ((VL_NULL_CHECK(this->__PVT__knobs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1127)
         ->__PVT__full_name && (VlNull{} != parent))) {
        VL_NULL_CHECK(parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1128)->__VnoInFunc_get_element_name(vlSymsp, __VlefCall_0__get_element_name);
        VL_SFORMAT_NX(name,"%s.%s",2, 'S',&(__VlefCall_0__get_element_name)
                      , 'S',&(name));
    }
    VL_NULL_CHECK(element, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1130)->__VnoInFunc_set(vlSymsp, name, type_name, size, value);
    if ((VlNull{} != parent)) {
        VL_NULL_CHECK(parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1132)->__VnoInFunc_add_child(vlSymsp, element);
    }
    this->__PVT__m_element_stack.push_back(element);
}

void Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_pop_element(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_pop_element\n"); );
    // Body
    if (VL_LTS_III(32, 1U, this->__PVT__m_element_stack.size())) {
        std::ignore = this->__PVT__m_element_stack.pop_back();
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_unused_element(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer_element> &get_unused_element__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_unused_element\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer_element> element;
    if (VL_LTS_III(32, 0U, this->__PVT__m_recycled_elements.size())) {
        element = this->__PVT__m_recycled_elements.pop_back();
    } else {
        element = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_printer_element, vlProcess, vlSymsp, ""s);
    }
    get_unused_element__Vfuncrtn = element;
}

void Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_array_header(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::IData/*31:0*/ size, ::std::string arraytype, ::CData/*7:0*/ scope_separator) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_array_header\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_push_element(vlProcess, vlSymsp, name, arraytype, VL_SFORMATF_N_NX("%0d",1
                                                                                , '~',32,size) , "-"s);
}

void Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_array_footer(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ size) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_array_footer\n"); );
    // Body
    this->__VnoInFunc_pop_element(vlSymsp);
}

void Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_array_range(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ min, ::IData/*31:0*/ max) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_array_range\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    {
        if (((0xffffffffU == min) & (0xffffffffU == max))) {
            goto __Vlabel0;
        }
        if ((0xffffffffU == min)) {
            min = max;
        }
        if ((0xffffffffU == max)) {
            max = min;
        }
        if (VL_LTS_III(32, max, min)) {
            goto __Vlabel0;
        }
        this->__VnoInFunc_print_generic_element(vlProcess, vlSymsp, "..."s, "..."s, "..."s, "..."s);
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_object_header(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> value, ::CData/*7:0*/ scope_separator) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_object_header\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> __Vfunc_uvm_object_value_str__v_870;
    ::IData/*31:0*/ __Vfunc_uvm_object_value_str____VlefCall_0__get_inst_id_871;
    __Vfunc_uvm_object_value_str____VlefCall_0__get_inst_id_871 = 0;
    ::IData/*31:0*/ __Vtask_get_inst_id__Vfuncout_1440;
    __Vtask_get_inst_id__Vfuncout_1440 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_2__uvm_object_value_str;
    ::CData/*0:0*/ __VlefCall_1__get_id_enabled;
    ::std::string __VlefCall_0__get_type_name;
    if ((""s == name)) {
        name = "<unnamed>"s;
    }
    if ((VlNull{} != value)) {
        VL_NULL_CHECK(value, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1217)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_0__get_type_name);
    } else {
        __VlefCall_0__get_type_name = "object"s;
    }
    this->__VnoInFunc_get_id_enabled(vlSymsp, __VlefCall_1__get_id_enabled);
    if (__VlefCall_1__get_id_enabled) {
        __Vfunc_uvm_object_value_str__v_870 = value;
        {
            if ((VlNull{} == __Vfunc_uvm_object_value_str__v_870)) {
                __VlefCall_2__uvm_object_value_str = "<null>"s;
                goto __Vlabel0;
            }
            VL_NULL_CHECK(__Vfunc_uvm_object_value_str__v_870, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_misc.svh", 233)->__VnoInFunc_get_inst_id(vlSymsp, __Vtask_get_inst_id__Vfuncout_1440);
            __Vfunc_uvm_object_value_str____VlefCall_0__get_inst_id_871 
                = __Vtask_get_inst_id__Vfuncout_1440;
            VL_SFORMAT_NX(__VlefCall_2__uvm_object_value_str
                          ,"%0d",1, '~',32,__Vfunc_uvm_object_value_str____VlefCall_0__get_inst_id_871);
            __VlefCall_2__uvm_object_value_str = VL_CONCATN_NNN("@"s, __VlefCall_2__uvm_object_value_str);
            __Vlabel0: ;
        }
    } else {
        __VlefCall_2__uvm_object_value_str = "-"s;
    }
    this->__VnoInFunc_push_element(vlProcess, vlSymsp, name, 
                                   VL_CVT_PACK_STR_NN(__VlefCall_0__get_type_name), "-"s, 
                                   VL_CVT_PACK_STR_NN(__VlefCall_2__uvm_object_value_str));
}

void Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_object(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> value, ::CData/*7:0*/ scope_separator) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_object\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> __Vtask_pop_active_object__Vfuncout_1441;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefCall_3__user_hook_enabled;
    ::CData/*0:0*/ __VlefLogOr_2;
    ::IData/*31:0*/ __VlefCall_1__get_active_object_depth;
    ::IData/*31:0*/ __VlefCall_0__get_max_depth;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_field_op> field_op;
    ::IData/*27:0*/ recursion_policy;
    recursion_policy = 0U;
    this->__VnoInFunc_get_recursion_policy(vlSymsp, recursion_policy);
    __VlefLogOr_2 = ((VlNull{} == value) | (0x00040000U 
                                            == recursion_policy));
    if ((1U & (~ (::IData)(__VlefLogOr_2)))) {
        this->__VnoInFunc_get_max_depth(vlSymsp, __VlefCall_0__get_max_depth);
        this->__VnoInFunc_get_active_object_depth(vlSymsp, __VlefCall_1__get_active_object_depth);
        __VlefLogOr_2 = (__VlefCall_0__get_max_depth 
                         == __VlefCall_1__get_active_object_depth);
    }
    if (__VlefLogOr_2) {
        this->__VnoInFunc_print_object_header(vlProcess, vlSymsp, name, value, scope_separator);
        this->__VnoInFunc_pop_element(vlSymsp);
    } else {
        this->__VnoInFunc_push_active_object(vlProcess, vlSymsp, value);
        this->__PVT__m_recur_states.atWrite(value).atWrite(recursion_policy) = 1U;
        this->__VnoInFunc_print_object_header(vlProcess, vlSymsp, name, value, scope_separator);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_field_op__Vclpkg.__VnoInFunc_m_get_available_op(vlProcess, vlSymsp, field_op);
        VL_NULL_CHECK(field_op, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1245)->__VnoInFunc_set(vlProcess, vlSymsp, 0x00000010U, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer>{this}, VlNull{});
        VL_NULL_CHECK(value, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1246)->__VnoInFunc_do_execute_op(vlProcess, vlSymsp, field_op);
        VL_NULL_CHECK(field_op, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1247)->__VnoInFunc_user_hook_enabled(vlProcess, vlSymsp, __VlefCall_3__user_hook_enabled);
        if (__VlefCall_3__user_hook_enabled) {
            VL_NULL_CHECK(value, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1249)->__VnoInFunc_do_print(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer>{this});
        }
        VL_NULL_CHECK(field_op, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_printer.svh", 1252)->__VnoInFunc_m_recycle(vlSymsp);
        this->__VnoInFunc_pop_element(vlSymsp);
        this->__PVT__m_recur_states.atWrite(value).atWrite(recursion_policy) = 2U;
        this->__VnoInFunc_pop_active_object(vlProcess, vlSymsp, __Vtask_pop_active_object__Vfuncout_1441);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_istop(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &istop__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_istop\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0__get_active_object_depth;
    istop__Vfuncrtn = 0U;
    this->__VnoInFunc_get_active_object_depth(vlSymsp, __VlefCall_0__get_active_object_depth);
    istop__Vfuncrtn = (0U == __VlefCall_0__get_active_object_depth);
}

void Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_generic(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::std::string type_name, ::IData/*31:0*/ size, ::std::string value, ::CData/*7:0*/ scope_separator) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_generic\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_push_element(vlProcess, vlSymsp, name, type_name, 
                                   VL_CVT_PACK_STR_NN(
                                                      ((0xfffffffeU 
                                                        == size)
                                                        ? "..."s
                                                        : VL_SFORMATF_N_NX("%0d",1
                                                                           , '~',32,size) )), value);
    this->__VnoInFunc_pop_element(vlSymsp);
}

void Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_generic_element(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::std::string type_name, ::std::string size, ::std::string value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_generic_element\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_push_element(vlProcess, vlSymsp, name, type_name, size, value);
    this->__VnoInFunc_pop_element(vlSymsp);
}

void Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_time(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::QData/*63:0*/ value, ::CData/*7:0*/ scope_separator) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_time\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_print_field_int(vlProcess, vlSymsp, name, value, 0x00000040U, 0x09000000U, (::IData)(scope_separator), ""s);
}

void Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_string(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::std::string value, ::CData/*7:0*/ scope_separator) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_string\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_push_element(vlProcess, vlSymsp, name, "string"s, VL_SFORMATF_N_NX("%0d",1
                                                                                , '~',32,
                                                                                VL_LEN_IN(value)) , 
                                   VL_CVT_PACK_STR_NN(
                                                      ((""s 
                                                        == value)
                                                        ? "\"\""s
                                                        : value)));
    this->__VnoInFunc_pop_element(vlSymsp);
}

void Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_printer::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_printer::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_flushed = 0;
    __PVT__m_recur_states.atDefault().atDefault() = 0;
}

Vtb_top_uvm_pkg__03a__03auvm_printer::~Vtb_top_uvm_pkg__03a__03auvm_printer() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_printer::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_printer::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_printer::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_printer::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_printer::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_flushed:" + VL_TO_STRING(__PVT__m_flushed);
    out += ", knobs:" + VL_TO_STRING(__PVT__knobs);
    out += ", m_recur_states:" + VL_TO_STRING(__PVT__m_recur_states);
    out += ", m_element_stack:" + VL_TO_STRING(__PVT__m_element_stack);
    out += ", m_recycled_elements:" + VL_TO_STRING(__PVT__m_recycled_elements);
    out += ", m_string:" + VL_TO_STRING(__PVT__m_string);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_policy::to_string_middle();
    return (out);
}
