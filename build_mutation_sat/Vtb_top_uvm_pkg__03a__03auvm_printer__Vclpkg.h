// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_PRINTER__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_PRINTER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "Vtb_top_uvm_pkg.h"
class Vtb_top_uvm_pkg__03a__03am_uvm_printer_knobs;
class Vtb_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi61e9e728;
class Vtb_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_top_uvm_pkg__03a__03auvm_field_op;
class Vtb_top_uvm_pkg__03a__03auvm_object;
class Vtb_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vtb_top_uvm_pkg__03a__03auvm_policy;
class Vtb_top_uvm_pkg__03a__03auvm_printer;
class Vtb_top_uvm_pkg__03a__03auvm_printer_element;
class Vtb_top_uvm_pkg__03a__03auvm_report_object;
class Vtb_top_uvm_pkg__03a__03auvm_root;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_printer__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03auvm_printer__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_printer__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_printer__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_printer__Vclpkg);

    // INTERNAL METHODS
    void __VnoInFunc_get_default(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer> &get_default__Vfuncrtn);
};

#include "Vtb_top_uvm_pkg__03a__03auvm_policy__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_printer : public Vtb_top_uvm_pkg__03a__03auvm_policy {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*0:0*/ __PVT__m_flushed;

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::VlAssocArray<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object>, ::VlAssocArray<::IData/*27:0*/, ::IData/*31:0*/>> __PVT__m_recur_states;
    ::std::string __PVT__m_string;
    ::std::string __Vfunc_uvm_leaf_scope__full_name_866;
    ::std::string __Vtask_uvm_report_error__id_1432;
    ::std::string __Vtask_uvm_report_error__message_1433;
    ::std::string __Vtask_uvm_report_error__filename_1435;
    ::std::string __Vtask_uvm_report_error__context_name_1437;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03am_uvm_printer_knobs> __PVT__knobs;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer_element>> __PVT__m_element_stack;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer_element>> __PVT__m_recycled_elements;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_printer"; }
    virtual void __VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc___VupdateRandVars();
    void __VnoInFunc_adjust_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string id, ::CData/*7:0*/ scope_separator, ::std::string &adjust_name__Vfuncrtn);
    virtual void __VnoInFunc_emit(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string &emit__Vfuncrtn);
    virtual void __VnoInFunc_flush(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_format_footer(Vtb_top__Syms* __restrict vlSymsp, ::std::string &format_footer__Vfuncrtn);
    void __VnoInFunc_format_header(Vtb_top__Syms* __restrict vlSymsp, ::std::string &format_header__Vfuncrtn);
    void __VnoInFunc_format_row(Vtb_top__Syms* __restrict vlSymsp, Vtb_top_uvm_printer_row_info__struct__0 row, ::std::string &format_row__Vfuncrtn);
    void __VnoInFunc_get_begin_elements(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_begin_elements__Vfuncrtn);
    void __VnoInFunc_get_bottom_element(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer_element> &get_bottom_element__Vfuncrtn);
    virtual void __VnoInFunc_get_default_radix(Vtb_top__Syms* __restrict vlSymsp, ::IData/*27:0*/ &get_default_radix__Vfuncrtn);
    void __VnoInFunc_get_end_elements(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_end_elements__Vfuncrtn);
    virtual void __VnoInFunc_get_file(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_file__Vfuncrtn);
    virtual void __VnoInFunc_get_id_enabled(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &get_id_enabled__Vfuncrtn);
    void __VnoInFunc_get_knobs(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03am_uvm_printer_knobs> &get_knobs__Vfuncrtn);
    void __VnoInFunc_get_line_prefix(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_line_prefix__Vfuncrtn);
    void __VnoInFunc_get_max_depth(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_max_depth__Vfuncrtn);
    void __VnoInFunc_get_name_enabled(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &get_name_enabled__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    void __VnoInFunc_get_radix_string(Vtb_top__Syms* __restrict vlSymsp, ::IData/*27:0*/ radix, ::std::string &get_radix_string__Vfuncrtn);
    virtual void __VnoInFunc_get_recursion_policy(Vtb_top__Syms* __restrict vlSymsp, ::IData/*27:0*/ &get_recursion_policy__Vfuncrtn);
    void __VnoInFunc_get_root_enabled(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &get_root_enabled__Vfuncrtn);
    void __VnoInFunc_get_size_enabled(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &get_size_enabled__Vfuncrtn);
    void __VnoInFunc_get_top_element(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer_element> &get_top_element__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_get_type_name_enabled(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &get_type_name_enabled__Vfuncrtn);
    void __VnoInFunc_get_unused_element(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer_element> &get_unused_element__Vfuncrtn);
    void __VnoInFunc_istop(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &istop__Vfuncrtn);
    void __VnoInFunc_m_get_stack_size(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &m_get_stack_size__Vfuncrtn);
    virtual void __VnoInFunc_pop_element(Vtb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_print_array_footer(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ size);
    void __VnoInFunc_print_array_header(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::IData/*31:0*/ size, ::std::string arraytype, ::CData/*7:0*/ scope_separator);
    void __VnoInFunc_print_array_range(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ min, ::IData/*31:0*/ max);
    void __VnoInFunc_print_field(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlWide<128>/*4095:0*/ value, ::IData/*31:0*/ size, ::IData/*27:0*/ radix, ::CData/*7:0*/ scope_separator, ::std::string type_name);
    void __VnoInFunc_print_field_int(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::QData/*63:0*/ value, ::IData/*31:0*/ size, ::IData/*27:0*/ radix, ::CData/*7:0*/ scope_separator, ::std::string type_name);
    void __VnoInFunc_print_generic(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::std::string type_name, ::IData/*31:0*/ size, ::std::string value, ::CData/*7:0*/ scope_separator);
    void __VnoInFunc_print_generic_element(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::std::string type_name, ::std::string size, ::std::string value);
    void __VnoInFunc_print_object(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> value, ::CData/*7:0*/ scope_separator);
    void __VnoInFunc_print_object_header(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> value, ::CData/*7:0*/ scope_separator);
    void __VnoInFunc_print_string(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::std::string value, ::CData/*7:0*/ scope_separator);
    void __VnoInFunc_print_time(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::QData/*63:0*/ value, ::CData/*7:0*/ scope_separator);
    void __VnoInFunc_push_element(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::std::string type_name, ::std::string size, ::std::string value);
    virtual void __VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_set_file(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ fl);
    void __VnoInFunc_set_line_prefix(Vtb_top__Syms* __restrict vlSymsp, ::std::string prefix);
    virtual void __VnoInFunc_set_recursion_policy(Vtb_top__Syms* __restrict vlSymsp, ::IData/*27:0*/ policy);
    void __VnoInFunc_set_size_enabled(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ enabled);
    void __VnoInFunc_set_type_name_enabled(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ enabled);
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_uvm_pkg__03a__03auvm_printer() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_top_uvm_pkg__03a__03auvm_printer();
};


#endif  // guard
