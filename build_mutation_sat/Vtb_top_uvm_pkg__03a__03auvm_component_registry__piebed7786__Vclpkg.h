// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_COMPONENT_REGISTRY__PIEBED7786__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_COMPONENT_REGISTRY__PIEBED7786__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_mlp_pkg__03a__03amlp_coverage;
class Vtb_top_uvm_pkg__03a__03auvm_component;
class Vtb_top_uvm_pkg__03a__03auvm_component_registry__piebed7786;
class Vtb_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vtb_top_uvm_pkg__03a__03auvm_registry_common__pi2d4f3b61;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_component_registry__piebed7786__Vclpkg final {
  public:

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    union {
        struct {
            ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component_registry__piebed7786> __PVT__get__Vstatic__m_inst;
        } __Vnontrivs;
    };

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03auvm_component_registry__piebed7786__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_component_registry__piebed7786__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_component_registry__piebed7786__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_component_registry__piebed7786__Vclpkg);

    // INTERNAL METHODS
    void __VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> parent, ::std::string contxt, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_coverage> &create__Vfuncrtn);
    void __VnoInFunc_get(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component_registry__piebed7786> &get__Vfuncrtn);
    void __VnoInFunc_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &type_name__Vfuncrtn);
};

#include "Vtb_top_uvm_pkg__03a__03auvm_object_wrapper__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_component_registry__piebed7786 : public Vtb_top_uvm_pkg__03a__03auvm_object_wrapper {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_component_registry__piebed7786"; }
    VlClass* clone() const { return new Vtb_top_uvm_pkg__03a__03auvm_component_registry__piebed7786(*this); }
    virtual void __VnoInFunc_create_component(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> parent, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> &create_component__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_initialize(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
    Vtb_top_uvm_pkg__03a__03auvm_component_registry__piebed7786() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_top_uvm_pkg__03a__03auvm_component_registry__piebed7786();
};


#endif  // guard
