// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_CONFIG_DB_IMPLEMENTATION_T__PI814132C0__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_CONFIG_DB_IMPLEMENTATION_T__PI814132C0__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi19b2c9c0;
class Vtb_top_uvm_pkg__03a__03auvm_component;
class Vtb_top_uvm_pkg__03a__03auvm_config_db_default_implementation_t__pi711fa4f0;
class Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pi814132c0;
class Vtb_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_top_uvm_pkg__03a__03auvm_factory;
class Vtb_top_uvm_pkg__03a__03auvm_object;
class Vtb_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vtb_top_uvm_pkg__03a__03auvm_pool__pi233523da;
class Vtb_top_uvm_pkg__03a__03auvm_resource__Tzd665aaf6;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pi814132c0__Vclpkg final {
  public:

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    union {
        struct {
            ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pi814132c0> __PVT__m_config_db_imp;
        } __Vnontrivs;
    };

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pi814132c0__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pi814132c0__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pi814132c0__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pi814132c0__Vclpkg);

    // INTERNAL METHODS
    void __VnoInFunc_get_imp(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pi814132c0> &get_imp__Vfuncrtn);
    void __VnoInFunc_get_type(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi19b2c9c0> &get_type__Vfuncrtn);
    void __VnoInFunc_set_imp(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pi814132c0> imp);
};

#include "Vtb_top_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pi814132c0 : public Vtb_top_uvm_pkg__03a__03auvm_object {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_config_db_implementation_t__pi814132c0"; }
    virtual void __VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc___VupdateRandVars();
    virtual void __VnoInFunc_exists(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> cntxt, ::std::string inst_name, ::std::string field_name, ::CData/*0:0*/ rpterr, ::CData/*0:0*/ &exists__Vfuncrtn);
    virtual void __VnoInFunc_get(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> cntxt, ::std::string inst_name, ::std::string field_name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &value, ::CData/*0:0*/ &get__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_set(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string cntxt_name, ::std::string inst_name, ::std::string field_name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> value, ::IData/*31:0*/ cntxt_depth, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_pool__pi233523da> pool, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> cntxt);
    virtual void __VnoInFunc_show_msg(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string id, ::std::string rtype, ::std::string action, ::std::string scope, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> accessor, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource__Tzd665aaf6> rsrc);
    virtual void __VnoInFunc_trigger_modified(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string inst_name, ::std::string field_name);
    Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pi814132c0() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pi814132c0();
};


#endif  // guard
