// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_CONFIG_DB_DEFAULT_IMPLEMENTATION_T__PI7B04B783__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_CONFIG_DB_DEFAULT_IMPLEMENTATION_T__PI7B04B783__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_std__03a__03aprocess;
class Vtb_top_uvm_pkg__03a__03am_uvm_waiter;
class Vtb_top_uvm_pkg__03a__03auvm_component;
class Vtb_top_uvm_pkg__03a__03auvm_config_db_default_implementation_t__pi7b04b783;
class Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pi352710f7;
class Vtb_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_top_uvm_pkg__03a__03auvm_object;
class Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi436ef996;
class Vtb_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vtb_top_uvm_pkg__03a__03auvm_phase;
class Vtb_top_uvm_pkg__03a__03auvm_pool__pid285c596;
class Vtb_top_uvm_pkg__03a__03auvm_queue__Tz9752cd2b;
class Vtb_top_uvm_pkg__03a__03auvm_queue__Tzf640760b;
class Vtb_top_uvm_pkg__03a__03auvm_report_object;
class Vtb_top_uvm_pkg__03a__03auvm_resource__Tz973cbb7f;
class Vtb_top_uvm_pkg__03a__03auvm_resource_pool;
class Vtb_top_uvm_pkg__03a__03auvm_root;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_config_db_default_implementation_t__pi7b04b783__Vclpkg final {
  public:

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    union {
        struct {
            ::VlAssocArray<::std::string, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_queue__Tz9752cd2b>> __PVT__m_waiters;
        } __Vnontrivs;
    };

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03auvm_config_db_default_implementation_t__pi7b04b783__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_config_db_default_implementation_t__pi7b04b783__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_config_db_default_implementation_t__pi7b04b783__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_config_db_default_implementation_t__pi7b04b783__Vclpkg);

    // INTERNAL METHODS
};

#include "Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pi352710f7__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_config_db_default_implementation_t__pi7b04b783 : public Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pi352710f7 {
  public:

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::std::string __Vfunc_uvm_is_match__expr_682;
    ::std::string __Vfunc_uvm_is_match__str_683;
    ::std::string __Vfunc_uvm_re_match__re_686;
    ::std::string __Vfunc_uvm_re_match__str_687;
    ::std::string __Vtask_uvm_report_info__id_1043;
    ::std::string __Vtask_uvm_report_info__message_1044;
    ::std::string __Vtask_uvm_report_info__filename_1046;
    ::std::string __Vtask_uvm_report_info__context_name_1048;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_config_db_default_implementation_t__pi7b04b783"; }
    VlClass* clone() const { Vtb_top_uvm_pkg__03a__03auvm_config_db_default_implementation_t__pi7b04b783* const clonep = new Vtb_top_uvm_pkg__03a__03auvm_config_db_default_implementation_t__pi7b04b783(*this); clonep->__VnoInFunc___VupdateRandVars();
        return clonep; }
    virtual void __VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc___VupdateRandVars();
    virtual void __VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_exists(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> cntxt, ::std::string inst_name, ::std::string field_name, ::CData/*0:0*/ rpterr, ::CData/*0:0*/ &exists__Vfuncrtn);
    virtual void __VnoInFunc_get(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> cntxt, ::std::string inst_name, ::std::string field_name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &value, ::CData/*0:0*/ &get__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_set(Vtb_top__Syms* __restrict vlSymsp, ::std::string cntxt_name, ::std::string inst_name, ::std::string field_name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> value, ::IData/*31:0*/ cntxt_depth, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_pool__pid285c596> pool, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> cntxt);
    virtual void __VnoInFunc_show_msg(Vtb_top__Syms* __restrict vlSymsp, ::std::string id, ::std::string rtype, ::std::string action, ::std::string scope, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> accessor, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource__Tz973cbb7f> rsrc);
    virtual void __VnoInFunc_trigger_modified(Vtb_top__Syms* __restrict vlSymsp, ::std::string inst_name, ::std::string field_name);
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_uvm_pkg__03a__03auvm_config_db_default_implementation_t__pi7b04b783() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_top_uvm_pkg__03a__03auvm_config_db_default_implementation_t__pi7b04b783();
};


#endif  // guard
