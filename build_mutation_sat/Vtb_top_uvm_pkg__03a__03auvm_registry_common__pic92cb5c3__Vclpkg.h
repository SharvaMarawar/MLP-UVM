// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_REGISTRY_COMMON__PIC92CB5C3__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_REGISTRY_COMMON__PIC92CB5C3__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_uvm_pkg__03a__03auvm_abstract_component_registry__pi9b24f6f5;
class Vtb_top_uvm_pkg__03a__03auvm_factory;
class Vtb_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vtb_top_uvm_pkg__03a__03auvm_registry_common__pic92cb5c3;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_registry_common__pic92cb5c3__Vclpkg final {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*0:0*/ __PVT__m___05Finitialized;

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    union {
        struct {
            ::VlQueue<::std::string> __PVT__m___05Ftype_aliases;
            ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_registry_common__pic92cb5c3> __PVT__get__Vstatic__m_inst;
        } __Vnontrivs;
    };

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03auvm_registry_common__pic92cb5c3__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_registry_common__pic92cb5c3__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_registry_common__pic92cb5c3__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_registry_common__pic92cb5c3__Vclpkg);

    // INTERNAL METHODS
    void __VnoInFunc____05Fdeferred_init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &___05Fdeferred_init__Vfuncrtn);
    void __VnoInFunc_get(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_registry_common__pic92cb5c3> &get__Vfuncrtn);
    void __VnoInFunc_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &type_name__Vfuncrtn);
};


class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_registry_common__pic92cb5c3 : public virtual VlClass {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_registry_common__pic92cb5c3"; }
    VlClass* clone() const { return new Vtb_top_uvm_pkg__03a__03auvm_registry_common__pic92cb5c3(*this); }
    virtual void __VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_initialize(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
    Vtb_top_uvm_pkg__03a__03auvm_registry_common__pic92cb5c3() = default;
    void init(Vtb_top__Syms* __restrict vlSymsp) {}
    ~Vtb_top_uvm_pkg__03a__03auvm_registry_common__pic92cb5c3() {}
};


#endif  // guard
