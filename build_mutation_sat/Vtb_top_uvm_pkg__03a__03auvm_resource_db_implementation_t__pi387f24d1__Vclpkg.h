// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_RESOURCE_DB_IMPLEMENTATION_T__PI387F24D1__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_RESOURCE_DB_IMPLEMENTATION_T__PI387F24D1__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_uvm_pkg__03a__03auvm_abstract_object_registry__pibf6d25bc;
class Vtb_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_top_uvm_pkg__03a__03auvm_factory;
class Vtb_top_uvm_pkg__03a__03auvm_object;
class Vtb_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vtb_top_uvm_pkg__03a__03auvm_resource__Tzd665aaf6;
class Vtb_top_uvm_pkg__03a__03auvm_resource_db_default_implementation_t__pi0f184a0c;
class Vtb_top_uvm_pkg__03a__03auvm_resource_db_implementation_t__pi387f24d1;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_resource_db_implementation_t__pi387f24d1__Vclpkg final {
  public:

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    union {
        struct {
            ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_db_implementation_t__pi387f24d1> __PVT__m_rsrc_db_imp;
        } __Vnontrivs;
    };

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03auvm_resource_db_implementation_t__pi387f24d1__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_resource_db_implementation_t__pi387f24d1__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_resource_db_implementation_t__pi387f24d1__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_resource_db_implementation_t__pi387f24d1__Vclpkg);

    // INTERNAL METHODS
    void __VnoInFunc_get_imp(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_db_implementation_t__pi387f24d1> &get_imp__Vfuncrtn);
    void __VnoInFunc_get_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_abstract_object_registry__pibf6d25bc> &get_type__Vfuncrtn);
    void __VnoInFunc_set_imp(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_db_implementation_t__pi387f24d1> imp);
};

#include "Vtb_top_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_resource_db_implementation_t__pi387f24d1 : public Vtb_top_uvm_pkg__03a__03auvm_object {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_resource_db_implementation_t__pi387f24d1"; }
    virtual void __VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc___VupdateRandVars();
    virtual void __VnoInFunc_get_by_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string scope, ::std::string name, ::CData/*0:0*/ rpterr, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource__Tzd665aaf6> &get_by_name__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_set(Vtb_top__Syms* __restrict vlSymsp, ::std::string scope, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> val, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> accessor);
    virtual void __VnoInFunc_show_msg(Vtb_top__Syms* __restrict vlSymsp, ::std::string id, ::std::string rtype, ::std::string action, ::std::string scope, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> accessor, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource__Tzd665aaf6> rsrc);
    Vtb_top_uvm_pkg__03a__03auvm_resource_db_implementation_t__pi387f24d1() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_top_uvm_pkg__03a__03auvm_resource_db_implementation_t__pi387f24d1();
};


#endif  // guard
