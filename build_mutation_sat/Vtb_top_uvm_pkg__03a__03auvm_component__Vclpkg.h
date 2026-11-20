// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_COMPONENT__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_COMPONENT__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "Vtb_top_uvm_pkg.h"
class Vtb_top_std__03a__03aprocess;
class Vtb_top_uvm_pkg__03a__03auvm_build_phase;
class Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_action;
class Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_severity;
class Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_verbosity;
class Vtb_top_uvm_pkg__03a__03auvm_component;
class Vtb_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_top_uvm_pkg__03a__03auvm_domain;
class Vtb_top_uvm_pkg__03a__03auvm_event_;
class Vtb_top_uvm_pkg__03a__03auvm_field_op;
class Vtb_top_uvm_pkg__03a__03auvm_object;
class Vtb_top_uvm_pkg__03a__03auvm_object_string_pool__pi5f4a92bc;
class Vtb_top_uvm_pkg__03a__03auvm_objection;
class Vtb_top_uvm_pkg__03a__03auvm_parent_child_link;
class Vtb_top_uvm_pkg__03a__03auvm_phase;
class Vtb_top_uvm_pkg__03a__03auvm_policy;
class Vtb_top_uvm_pkg__03a__03auvm_printer;
class Vtb_top_uvm_pkg__03a__03auvm_queue__Tz613e3271;
class Vtb_top_uvm_pkg__03a__03auvm_queue__Tzf640760b;
class Vtb_top_uvm_pkg__03a__03auvm_recorder;
class Vtb_top_uvm_pkg__03a__03auvm_related_link;
class Vtb_top_uvm_pkg__03a__03auvm_report_handler;
class Vtb_top_uvm_pkg__03a__03auvm_report_object;
class Vtb_top_uvm_pkg__03a__03auvm_resource_;
class Vtb_top_uvm_pkg__03a__03auvm_resource__Tz39e91f07;
class Vtb_top_uvm_pkg__03a__03auvm_resource__Tza70e6849;
class Vtb_top_uvm_pkg__03a__03auvm_resource__Tzb939a3ab;
class Vtb_top_uvm_pkg__03a__03auvm_resource_base;
class Vtb_top_uvm_pkg__03a__03auvm_resource_pool;
class Vtb_top_uvm_pkg__03a__03auvm_root;
class Vtb_top_uvm_pkg__03a__03auvm_sequence_base;
class Vtb_top_uvm_pkg__03a__03auvm_sequence_item;
class Vtb_top_uvm_pkg__03a__03auvm_tr_database;
class Vtb_top_uvm_pkg__03a__03auvm_tr_stream;
class Vtb_top_uvm_pkg__03a__03auvm_transaction;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_component__Vclpkg final {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*0:0*/ __PVT__print_config_matches;

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03auvm_component__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_component__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_component__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_component__Vclpkg);

    // INTERNAL METHODS
    void __VnoInFunc_get_print_config_matches(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &get_print_config_matches__Vfuncrtn);
};

#include "Vtb_top_uvm_pkg__03a__03auvm_report_object__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_component : public Vtb_top_uvm_pkg__03a__03auvm_report_object {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*0:0*/ __PVT__print_enabled;
    ::CData/*0:0*/ __PVT__m_build_done;
    ::IData/*31:0*/ __PVT__m_phasing_active;
    ::IData/*31:0*/ __PVT__recording_detail;

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::std::string __PVT__m_name;
    ::std::string __Vfunc_uvm_is_match__expr_1250;
    ::std::string __Vfunc_uvm_is_match__str_1251;
    ::std::string __Vfunc_uvm_re_match__re_1254;
    ::std::string __Vfunc_uvm_re_match__str_1255;
    ::std::string __Vfunc_uvm_is_match__expr_1258;
    ::std::string __Vfunc_uvm_is_match__str_1259;
    ::std::string __Vfunc_uvm_re_match__re_1262;
    ::std::string __Vfunc_uvm_re_match__str_1263;
    ::std::string __Vfunc_uvm_is_match__expr_1266;
    ::std::string __Vfunc_uvm_is_match__str_1267;
    ::std::string __Vfunc_uvm_re_match__re_1270;
    ::std::string __Vfunc_uvm_re_match__str_1271;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tr_database> __PVT__tr_database;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_domain> __PVT__m_domain;
    ::VlAssocArray<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase>, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase>> __PVT__m_phase_imps;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> __PVT__m_current_phase;
    ::VlClassRef<Vtb_top_std__03a__03aprocess> __PVT__m_phase_process;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> __PVT__m_parent;
    ::VlAssocArray<::std::string, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component>> __PVT__m_children;
    ::VlAssocArray<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component>, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component>> __PVT__m_children_by_handle;
    ::VlAssocArray<::std::string, ::VlAssocArray<::std::string, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tr_stream>>> __PVT__m_streams;
    ::VlAssocArray<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_transaction>, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_recorder>> __PVT__m_tr_h;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_string_pool__pi5f4a92bc> __PVT__event_pool;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_verbosity>> __PVT__m_verbosity_settings;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_base> __PVT__m_unsupported_resource_base;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_component"; }
    virtual void __VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc___VupdateRandVars();
    virtual void __VnoInFunc_all_dropped(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_objection> objection, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> source_obj, ::std::string description, ::IData/*31:0*/ count);
    void __VnoInFunc_apply_config_settings(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ verbose);
    void __VnoInFunc_apply_config_settings_mode(Vtb_top__Syms* __restrict vlSymsp, ::CData/*1:0*/ &apply_config_settings_mode__Vfuncrtn);
    void __VnoInFunc_begin_tr(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_transaction> tr, ::std::string stream_name, ::std::string label, ::std::string desc, ::QData/*63:0*/ begin_time, ::IData/*31:0*/ parent_handle, ::IData/*31:0*/ &begin_tr__Vfuncrtn);
    virtual void __VnoInFunc_build(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_build_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase);
    void __VnoInFunc_check(Vtb_top__Syms* __restrict vlSymsp) {}
    virtual void __VnoInFunc_check_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_clone(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn);
    void __VnoInFunc_configure_phase(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_connect(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_connect_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_do_begin_tr(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_transaction> tr, ::std::string stream_name, ::IData/*31:0*/ tr_handle);
    virtual void __VnoInFunc_do_end_tr(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_transaction> tr, ::IData/*31:0*/ tr_handle);
    virtual void __VnoInFunc_do_execute_op(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_field_op> op);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer> printer);
    void __VnoInFunc_do_resolve_bindings(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_dropped(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_objection> objection, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> source_obj, ::std::string description, ::IData/*31:0*/ count);
    void __VnoInFunc_end_of_elaboration(Vtb_top__Syms* __restrict vlSymsp) {}
    virtual void __VnoInFunc_end_of_elaboration_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase);
    void __VnoInFunc_end_tr(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_transaction> tr, ::QData/*63:0*/ end_time, ::CData/*0:0*/ free_handle);
    void __VnoInFunc_extract(Vtb_top__Syms* __restrict vlSymsp) {}
    void __VnoInFunc_extract_phase(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase);
    void __VnoInFunc_final_phase(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_flush(Vtb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_get_child(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> &get_child__Vfuncrtn);
    void __VnoInFunc_get_children(Vtb_top__Syms* __restrict vlSymsp, ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component>> &children);
    void __VnoInFunc_get_depth(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_depth__Vfuncrtn);
    void __VnoInFunc_get_domain(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_domain> &get_domain__Vfuncrtn);
    void __VnoInFunc_get_first_child(Vtb_top__Syms* __restrict vlSymsp, ::std::string &name, ::IData/*31:0*/ &get_first_child__Vfuncrtn);
    virtual void __VnoInFunc_get_full_name(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_full_name__Vfuncrtn);
    void __VnoInFunc_get_next_child(Vtb_top__Syms* __restrict vlSymsp, ::std::string &name, ::IData/*31:0*/ &get_next_child__Vfuncrtn);
    virtual void __VnoInFunc_get_parent(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> &get_parent__Vfuncrtn);
    void __VnoInFunc_get_recording_enabled(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &get_recording_enabled__Vfuncrtn);
    void __VnoInFunc_get_tr_database(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tr_database> &get_tr_database__Vfuncrtn);
    void __VnoInFunc_get_tr_stream(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::std::string stream_type_name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tr_stream> &get_tr_stream__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_has_child(Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::IData/*31:0*/ &has_child__Vfuncrtn);
    virtual void __VnoInFunc_m_add_child(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> child, ::CData/*0:0*/ &m_add_child__Vfuncrtn);
    void __VnoInFunc_m_apply_verbosity_settings(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase);
    void __VnoInFunc_m_begin_tr(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_transaction> tr, ::IData/*31:0*/ parent_handle, ::std::string stream_name, ::std::string label, ::std::string desc, ::QData/*63:0*/ begin_time, ::IData/*31:0*/ &m_begin_tr__Vfuncrtn);
    void __VnoInFunc_m_do_pre_abort(Vtb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_set_cl_action(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_set_cl_msg_args(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_set_cl_sev(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_set_cl_verb(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_set_full_name(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_main_phase(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase);
    void __VnoInFunc_phase_ended(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase);
    void __VnoInFunc_phase_ready_to_end(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_phase_started(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase);
    void __VnoInFunc_post_configure_phase(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase);
    void __VnoInFunc_post_main_phase(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase);
    void __VnoInFunc_post_reset_phase(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase);
    void __VnoInFunc_post_shutdown_phase(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_pre_abort(Vtb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_pre_configure_phase(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase);
    void __VnoInFunc_pre_main_phase(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase);
    void __VnoInFunc_pre_reset_phase(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase);
    void __VnoInFunc_pre_shutdown_phase(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_raised(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_objection> objection, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> source_obj, ::std::string description, ::IData/*31:0*/ count);
    virtual void __VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_report(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_report_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase);
    void __VnoInFunc_reset_phase(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_resolve_bindings(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_run(Vtb_top__Syms* __restrict vlSymsp) {}
    virtual VlCoroutine __VnoInFunc_run_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_set_local(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_base> rsrc);
    virtual void __VnoInFunc_set_name(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name);
    void __VnoInFunc_set_report_verbosity_level_hier(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ verbosity);
    void __VnoInFunc_shutdown_phase(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase);
    void __VnoInFunc_start_of_simulation(Vtb_top__Syms* __restrict vlSymsp) {}
    void __VnoInFunc_start_of_simulation_phase(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_use_automatic_config(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &use_automatic_config__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_uvm_pkg__03a__03auvm_component() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> parent);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_top_uvm_pkg__03a__03auvm_component();
};


#endif  // guard
