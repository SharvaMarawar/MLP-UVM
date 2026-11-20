// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_REG_ITEM__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_REG_ITEM__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_uvm_pkg__03a__03auvm_object;
class Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi3429b725;
class Vtb_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vtb_top_uvm_pkg__03a__03auvm_reg_item;
class Vtb_top_uvm_pkg__03a__03auvm_reg_map;
class Vtb_top_uvm_pkg__03a__03auvm_report_object;
class Vtb_top_uvm_pkg__03a__03auvm_sequence_base;
class Vtb_top_uvm_pkg__03a__03auvm_sequence_item;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_reg_item__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03auvm_reg_item__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_reg_item__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_reg_item__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_reg_item__Vclpkg);

    // INTERNAL METHODS
};

#include "Vtb_top_uvm_pkg__03a__03auvm_sequence_item__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_reg_item : public Vtb_top_uvm_pkg__03a__03auvm_sequence_item {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::IData/*31:0*/ __PVT__element_kind;
    ::IData/*31:0*/ __PVT__kind;
    ::IData/*31:0*/ __PVT__status;
    ::IData/*31:0*/ __PVT__path;
    ::IData/*31:0*/ __PVT__prior;
    ::IData/*31:0*/ __PVT__lineno;
    ::IData/*31:0*/ __PVT____Vvalue_size;
    ::QData/*63:0*/ __PVT__offset;

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::VlQueue<::QData/*63:0*/> __PVT__value;
    ::std::string __PVT__bd_kind;
    ::std::string __PVT__fname;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> __PVT__element;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> __PVT__local_map;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> __PVT__map;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> __PVT__parent;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> __PVT__extension;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_reg_item"; }
    VlClass* clone() const { Vtb_top_uvm_pkg__03a__03auvm_reg_item* const clonep = new Vtb_top_uvm_pkg__03a__03auvm_reg_item(*this); clonep->__VnoInFunc___VupdateRandVars();
        return clonep; }
    virtual void __VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    void __VnoInFunc___VrandCb_post(Vtb_top__Syms* __restrict vlSymsp) {}
    void __VnoInFunc___VrandCb_pre(Vtb_top__Syms* __restrict vlSymsp) {}
    virtual void __VnoInFunc___Vresize_constrained_arrays(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc___VupdateRandVars();
    virtual void __VnoInFunc_convert2string(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string &convert2string__Vfuncrtn);
    virtual void __VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> rhs);
    void __VnoInFunc_get_bd_kind(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_bd_kind__Vfuncrtn);
    void __VnoInFunc_get_door(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_door__Vfuncrtn);
    void __VnoInFunc_get_element(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &get_element__Vfuncrtn);
    void __VnoInFunc_get_element_kind(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_element_kind__Vfuncrtn);
    virtual void __VnoInFunc_get_extension(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &get_extension__Vfuncrtn);
    void __VnoInFunc_get_fname(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_fname__Vfuncrtn);
    void __VnoInFunc_get_kind(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_kind__Vfuncrtn);
    virtual void __VnoInFunc_get_line(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_line__Vfuncrtn);
    virtual void __VnoInFunc_get_local_map(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> &get_local_map__Vfuncrtn);
    void __VnoInFunc_get_map(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> &get_map__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_offset(Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ &get_offset__Vfuncrtn);
    void __VnoInFunc_get_parent_sequence(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> &get_parent_sequence__Vfuncrtn);
    void __VnoInFunc_get_priority(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_priority__Vfuncrtn);
    void __VnoInFunc_get_status(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_status__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_get_value(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ idx, ::QData/*63:0*/ &get_value__Vfuncrtn);
    void __VnoInFunc_get_value_array(Vtb_top__Syms* __restrict vlSymsp, ::VlQueue<::QData/*63:0*/> &value);
    void __VnoInFunc_get_value_size(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_value_size__Vfuncrtn);
    void __VnoInFunc_max_values_resize_constrained_array(Vtb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_max_values_setup_constraint(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_set_bd_kind(Vtb_top__Syms* __restrict vlSymsp, ::std::string bd_kind);
    void __VnoInFunc_set_door(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ door);
    void __VnoInFunc_set_element(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> element);
    void __VnoInFunc_set_element_kind(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ element_kind);
    virtual void __VnoInFunc_set_extension(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> extension);
    void __VnoInFunc_set_fname(Vtb_top__Syms* __restrict vlSymsp, ::std::string fname);
    void __VnoInFunc_set_kind(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ kind);
    virtual void __VnoInFunc_set_line(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ line);
    void __VnoInFunc_set_local_map(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map);
    void __VnoInFunc_set_map(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map);
    virtual void __VnoInFunc_set_offset(Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ offset);
    void __VnoInFunc_set_parent_sequence(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> parent);
    virtual void __VnoInFunc_set_priority(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ value);
    void __VnoInFunc_set_status(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ status);
    virtual void __VnoInFunc_set_value(Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ value, ::IData/*31:0*/ idx);
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_uvm_pkg__03a__03auvm_reg_item() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_top_uvm_pkg__03a__03auvm_reg_item();
};


#endif  // guard
