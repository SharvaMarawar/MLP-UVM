// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_CONFIG_DB_IMPLEMENTATION_T__PIB6F3C793__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_CONFIG_DB_IMPLEMENTATION_T__PIB6F3C793__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi54eca5bd;
class Vtb_top_uvm_pkg__03a__03auvm_component;
class Vtb_top_uvm_pkg__03a__03auvm_config_db_default_implementation_t__pi7e00bfc2;
class Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pib6f3c793;
class Vtb_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_top_uvm_pkg__03a__03auvm_factory;
class Vtb_top_uvm_pkg__03a__03auvm_object;
class Vtb_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vtb_top_uvm_pkg__03a__03auvm_pool__pi23ee3f20;
class Vtb_top_uvm_pkg__03a__03auvm_resource_;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pib6f3c793__Vclpkg final {
  public:

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    union {
        struct {
            ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pib6f3c793> __PVT__m_config_db_imp;
        } __Vnontrivs;
    };

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pib6f3c793__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pib6f3c793__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pib6f3c793__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pib6f3c793__Vclpkg);

    // INTERNAL METHODS
    void __VnoInFunc_get_imp(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pib6f3c793> &get_imp__Vfuncrtn);
    void __VnoInFunc_get_type(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi54eca5bd> &get_type__Vfuncrtn);
    void __VnoInFunc_set_imp(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pib6f3c793> imp);
};

#include "Vtb_top_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pib6f3c793 : public Vtb_top_uvm_pkg__03a__03auvm_object {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_config_db_implementation_t__pib6f3c793"; }
    virtual void __VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc___VupdateRandVars();
    virtual void __VnoInFunc_exists(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> cntxt, ::std::string inst_name, ::std::string field_name, ::CData/*0:0*/ rpterr, ::CData/*0:0*/ &exists__Vfuncrtn);
    virtual void __VnoInFunc_get(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> cntxt, ::std::string inst_name, ::std::string field_name, ::IData/*31:0*/ &value, ::CData/*0:0*/ &get__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_set(Vtb_top__Syms* __restrict vlSymsp, ::std::string cntxt_name, ::std::string inst_name, ::std::string field_name, ::IData/*31:0*/ value, ::IData/*31:0*/ cntxt_depth, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_pool__pi23ee3f20> pool, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> cntxt);
    virtual void __VnoInFunc_show_msg(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string id, ::std::string rtype, ::std::string action, ::std::string scope, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> accessor, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_> rsrc);
    virtual void __VnoInFunc_trigger_modified(Vtb_top__Syms* __restrict vlSymsp, ::std::string inst_name, ::std::string field_name);
    Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pib6f3c793() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pib6f3c793();
};


#endif  // guard
