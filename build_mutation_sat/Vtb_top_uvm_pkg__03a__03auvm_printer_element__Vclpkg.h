// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_PRINTER_ELEMENT__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_PRINTER_ELEMENT__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_uvm_pkg__03a__03auvm_object;
class Vtb_top_uvm_pkg__03a__03auvm_printer_element;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_printer_element__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03auvm_printer_element__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_printer_element__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_printer_element__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_printer_element__Vclpkg);

    // INTERNAL METHODS
};

#include "Vtb_top_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_printer_element : public Vtb_top_uvm_pkg__03a__03auvm_object {
  public:

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::std::string __PVT__m_name;
    ::std::string __PVT__m_type_name;
    ::std::string __PVT__m_size;
    ::std::string __PVT__m_value;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer_element>> __PVT__m_children;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_printer_element"; }
    VlClass* clone() const { Vtb_top_uvm_pkg__03a__03auvm_printer_element* const clonep = new Vtb_top_uvm_pkg__03a__03auvm_printer_element(*this); clonep->__VnoInFunc___VupdateRandVars();
        return clonep; }
    virtual void __VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc___VupdateRandVars();
    void __VnoInFunc_add_child(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer_element> child);
    void __VnoInFunc_clear_children(Vtb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_get_children(Vtb_top__Syms* __restrict vlSymsp, ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer_element>> &children, ::CData/*0:0*/ recurse);
    void __VnoInFunc_get_element_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_element_name__Vfuncrtn);
    void __VnoInFunc_get_element_size(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_element_size__Vfuncrtn);
    void __VnoInFunc_get_element_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_element_type_name__Vfuncrtn);
    void __VnoInFunc_get_element_value(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_element_value__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_set(Vtb_top__Syms* __restrict vlSymsp, ::std::string element_name, ::std::string element_type_name, ::std::string element_size, ::std::string element_value);
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_uvm_pkg__03a__03auvm_printer_element() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_top_uvm_pkg__03a__03auvm_printer_element();
};


#endif  // guard
