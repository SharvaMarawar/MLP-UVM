// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_ABSTRACT_OBJECT_REGISTRY__PIA1B84DF2__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_ABSTRACT_OBJECT_REGISTRY__PIA1B84DF2__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_uvm_pkg__03a__03auvm_abstract_object_registry__pia1b84df2;
class Vtb_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_top_uvm_pkg__03a__03auvm_object;
class Vtb_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vtb_top_uvm_pkg__03a__03auvm_registry_common__pif9332562;
class Vtb_top_uvm_pkg__03a__03auvm_report_object;
class Vtb_top_uvm_pkg__03a__03auvm_root;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_abstract_object_registry__pia1b84df2__Vclpkg final {
  public:

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    union {
        struct {
            ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_abstract_object_registry__pia1b84df2> __PVT__get__Vstatic__m_inst;
        } __Vnontrivs;
    };

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03auvm_abstract_object_registry__pia1b84df2__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_abstract_object_registry__pia1b84df2__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_abstract_object_registry__pia1b84df2__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_abstract_object_registry__pia1b84df2__Vclpkg);

    // INTERNAL METHODS
    void __VnoInFunc_get(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_abstract_object_registry__pia1b84df2> &get__Vfuncrtn);
};

#include "Vtb_top_uvm_pkg__03a__03auvm_object_wrapper__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_abstract_object_registry__pia1b84df2 : public Vtb_top_uvm_pkg__03a__03auvm_object_wrapper {
  public:

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::std::string __Vtask_uvm_report_error__id_425;
    ::std::string __Vtask_uvm_report_error__message_426;
    ::std::string __Vtask_uvm_report_error__filename_428;
    ::std::string __Vtask_uvm_report_error__context_name_430;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_abstract_object_registry__pia1b84df2"; }
    VlClass* clone() const { return new Vtb_top_uvm_pkg__03a__03auvm_abstract_object_registry__pia1b84df2(*this); }
    virtual void __VnoInFunc_create_object(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create_object__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_initialize(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_uvm_pkg__03a__03auvm_abstract_object_registry__pia1b84df2() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_top_uvm_pkg__03a__03auvm_abstract_object_registry__pia1b84df2();
};


#endif  // guard
