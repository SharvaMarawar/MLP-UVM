// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_CONFIG_DB_DEFAULT_IMPLEMENTATION_T__PI6A1C347D__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_CONFIG_DB_DEFAULT_IMPLEMENTATION_T__PI6A1C347D__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_std__03a__03aprocess;
class Vtb_top_uvm_pkg__03a__03am_uvm_waiter;
class Vtb_top_uvm_pkg__03a__03auvm_component;
class Vtb_top_uvm_pkg__03a__03auvm_config_db_default_implementation_t__pi6a1c347d;
class Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pi109dd6e3;
class Vtb_top_uvm_pkg__03a__03auvm_config_object_wrapper;
class Vtb_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_top_uvm_pkg__03a__03auvm_object;
class Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi71ee752b;
class Vtb_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vtb_top_uvm_pkg__03a__03auvm_phase;
class Vtb_top_uvm_pkg__03a__03auvm_pool__pi97ff0c82;
class Vtb_top_uvm_pkg__03a__03auvm_queue__Tz9752cd2b;
class Vtb_top_uvm_pkg__03a__03auvm_queue__Tzf640760b;
class Vtb_top_uvm_pkg__03a__03auvm_report_object;
class Vtb_top_uvm_pkg__03a__03auvm_resource__Tz918fb8f1;
class Vtb_top_uvm_pkg__03a__03auvm_resource_pool;
class Vtb_top_uvm_pkg__03a__03auvm_root;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_config_db_default_implementation_t__pi6a1c347d__Vclpkg final {
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
    Vtb_top_uvm_pkg__03a__03auvm_config_db_default_implementation_t__pi6a1c347d__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_config_db_default_implementation_t__pi6a1c347d__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_config_db_default_implementation_t__pi6a1c347d__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_config_db_default_implementation_t__pi6a1c347d__Vclpkg);

    // INTERNAL METHODS
};

#include "Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pi109dd6e3__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_config_db_default_implementation_t__pi6a1c347d : public Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pi109dd6e3 {
  public:

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::std::string __Vfunc_uvm_is_match__expr_743;
    ::std::string __Vfunc_uvm_is_match__str_744;
    ::std::string __Vfunc_uvm_re_match__re_747;
    ::std::string __Vfunc_uvm_re_match__str_748;
    ::std::string __Vtask_uvm_report_info__id_1136;
    ::std::string __Vtask_uvm_report_info__message_1137;
    ::std::string __Vtask_uvm_report_info__filename_1139;
    ::std::string __Vtask_uvm_report_info__context_name_1141;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_config_db_default_implementation_t__pi6a1c347d"; }
    VlClass* clone() const { Vtb_top_uvm_pkg__03a__03auvm_config_db_default_implementation_t__pi6a1c347d* const clonep = new Vtb_top_uvm_pkg__03a__03auvm_config_db_default_implementation_t__pi6a1c347d(*this); clonep->__VnoInFunc___VupdateRandVars();
        return clonep; }
    virtual void __VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc___VupdateRandVars();
    virtual void __VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_exists(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> cntxt, ::std::string inst_name, ::std::string field_name, ::CData/*0:0*/ rpterr, ::CData/*0:0*/ &exists__Vfuncrtn);
    virtual void __VnoInFunc_get(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> cntxt, ::std::string inst_name, ::std::string field_name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_config_object_wrapper> &value, ::CData/*0:0*/ &get__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_set(Vtb_top__Syms* __restrict vlSymsp, ::std::string cntxt_name, ::std::string inst_name, ::std::string field_name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_config_object_wrapper> value, ::IData/*31:0*/ cntxt_depth, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_pool__pi97ff0c82> pool, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> cntxt);
    virtual void __VnoInFunc_show_msg(Vtb_top__Syms* __restrict vlSymsp, ::std::string id, ::std::string rtype, ::std::string action, ::std::string scope, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> accessor, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource__Tz918fb8f1> rsrc);
    virtual void __VnoInFunc_trigger_modified(Vtb_top__Syms* __restrict vlSymsp, ::std::string inst_name, ::std::string field_name);
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_uvm_pkg__03a__03auvm_config_db_default_implementation_t__pi6a1c347d() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_top_uvm_pkg__03a__03auvm_config_db_default_implementation_t__pi6a1c347d();
};


#endif  // guard
