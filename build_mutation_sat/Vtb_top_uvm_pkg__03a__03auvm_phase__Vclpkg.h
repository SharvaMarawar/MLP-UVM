// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_PHASE__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_PHASE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_std__03a__03amailbox__Tz287f54b5;
class Vtb_top_std__03a__03aprocess;
class Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pi0eb11e0b;
class Vtb_top_uvm_pkg__03a__03auvm_cmdline_processor;
class Vtb_top_uvm_pkg__03a__03auvm_component;
class Vtb_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_top_uvm_pkg__03a__03auvm_domain;
class Vtb_top_uvm_pkg__03a__03auvm_object;
class Vtb_top_uvm_pkg__03a__03auvm_objection;
class Vtb_top_uvm_pkg__03a__03auvm_phase;
class Vtb_top_uvm_pkg__03a__03auvm_phase_cb;
class Vtb_top_uvm_pkg__03a__03auvm_phase_state_change;
class Vtb_top_uvm_pkg__03a__03auvm_report_object;
class Vtb_top_uvm_pkg__03a__03auvm_root;
class Vtb_top_uvm_pkg__03a__03auvm_task_phase;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_phase__Vclpkg final {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*0:0*/ __PVT__m_register_cb_uvm_phase_cb;
    ::CData/*0:0*/ __PVT__m_phase_trace;
    ::CData/*0:0*/ __PVT__m_use_ovm_run_semantic;
    ::IData/*31:0*/ __PVT__m_default_max_ready_to_end_iters;

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    union {
        struct {
            ::VlAssocArray<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase>, ::CData/*0:0*/> __PVT__m_executing_phases;
            ::VlClassRef<Vtb_top_std__03a__03amailbox__Tz287f54b5> __PVT__m_phase_hopper;
        } __Vnontrivs;
    };

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03auvm_phase__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_phase__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_phase__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_phase__Vclpkg);

    // INTERNAL METHODS
    void __VnoInFunc_get_default_max_ready_to_end_iterations(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_default_max_ready_to_end_iterations__Vfuncrtn);
};

#include "Vtb_top_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_phase : public Vtb_top_uvm_pkg__03a__03auvm_object {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*0:0*/ __PVT__m_jump_bkwd;
    ::CData/*0:0*/ __PVT__m_jump_fwd;
    ::CData/*0:0*/ __PVT__m_premature_end;
    ::IData/*31:0*/ __PVT__m_phase_type;
    ::IData/*31:0*/ __PVT__m_state;
    ::IData/*31:0*/ __PVT__m_run_count;
    ::IData/*31:0*/ __PVT__max_ready_to_end_iters;
    ::IData/*31:0*/ __PVT__m_num_procs_not_yet_returned;

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::VlAssocArray<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase>, ::CData/*0:0*/> __PVT__m_predecessors;
    ::VlAssocArray<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase>, ::CData/*0:0*/> __PVT__m_successors;
    ::std::string __Vtask_uvm_report_info__id_2019;
    ::std::string __Vtask_uvm_report_info__message_2020;
    ::std::string __Vtask_uvm_report_info__filename_2022;
    ::std::string __Vtask_uvm_report_info__context_name_2024;
    ::std::string __Vtask_uvm_report_info__id_2030;
    ::std::string __Vtask_uvm_report_info__message_2031;
    ::std::string __Vtask_uvm_report_info__filename_2033;
    ::std::string __Vtask_uvm_report_info__context_name_2035;
    ::std::string __Vtask_uvm_report_info__id_2039;
    ::std::string __Vtask_uvm_report_info__message_2040;
    ::std::string __Vtask_uvm_report_info__filename_2042;
    ::std::string __Vtask_uvm_report_info__context_name_2044;
    ::std::string __Vtask_uvm_report_info__id_2048;
    ::std::string __Vtask_uvm_report_info__message_2049;
    ::std::string __Vtask_uvm_report_info__filename_2051;
    ::std::string __Vtask_uvm_report_info__context_name_2053;
    ::std::string __Vtask_uvm_report_info__id_2057;
    ::std::string __Vtask_uvm_report_info__message_2058;
    ::std::string __Vtask_uvm_report_info__filename_2060;
    ::std::string __Vtask_uvm_report_info__context_name_2062;
    ::std::string __Vtask_uvm_report_error__id_2066;
    ::std::string __Vtask_uvm_report_error__message_2067;
    ::std::string __Vtask_uvm_report_error__filename_2069;
    ::std::string __Vtask_uvm_report_error__context_name_2071;
    ::std::string __Vtask_uvm_report_error__id_2075;
    ::std::string __Vtask_uvm_report_error__message_2076;
    ::std::string __Vtask_uvm_report_error__filename_2078;
    ::std::string __Vtask_uvm_report_error__context_name_2080;
    ::std::string __Vtask_uvm_report_info__id_2085;
    ::std::string __Vtask_uvm_report_info__message_2086;
    ::std::string __Vtask_uvm_report_info__filename_2088;
    ::std::string __Vtask_uvm_report_info__context_name_2090;
    ::std::string __Vtask_uvm_report_info__id_2094;
    ::std::string __Vtask_uvm_report_info__message_2095;
    ::std::string __Vtask_uvm_report_info__filename_2097;
    ::std::string __Vtask_uvm_report_info__context_name_2099;
    ::std::string __Vtask_uvm_report_info__id_2103;
    ::std::string __Vtask_uvm_report_info__message_2104;
    ::std::string __Vtask_uvm_report_info__filename_2106;
    ::std::string __Vtask_uvm_report_info__context_name_2108;
    ::std::string __Vtask_uvm_report_info__id_2113;
    ::std::string __Vtask_uvm_report_info__message_2114;
    ::std::string __Vtask_uvm_report_info__filename_2116;
    ::std::string __Vtask_uvm_report_info__context_name_2118;
    ::std::string __Vtask_uvm_report_info__id_2122;
    ::std::string __Vtask_uvm_report_info__message_2123;
    ::std::string __Vtask_uvm_report_info__filename_2125;
    ::std::string __Vtask_uvm_report_info__context_name_2127;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> __PVT__m_parent;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> __PVT__m_imp;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase_state_change> __PVT__m_state_chg;
    ::VlClassRef<Vtb_top_std__03a__03aprocess> __PVT__m_phase_proc;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> __PVT__m_end_node;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase>> __PVT__m_sync;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_objection> __PVT__phase_done;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> __PVT__m_jump_phase;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_phase"; }
    VlClass* clone() const { Vtb_top_uvm_pkg__03a__03auvm_phase* const clonep = new Vtb_top_uvm_pkg__03a__03auvm_phase(*this); clonep->__VnoInFunc___VupdateRandVars();
        return clonep; }
    virtual void __VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc___VupdateRandVars();
    void __VnoInFunc_add(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> with_phase, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> after_phase, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> before_phase, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> start_with_phase, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> end_with_phase);
    void __VnoInFunc_clear(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ state);
    void __VnoInFunc_clear_successors(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ state, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> end_state);
    virtual void __VnoInFunc_convert2string(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string &convert2string__Vfuncrtn);
    virtual void __VnoInFunc_drop_objection(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> obj, ::std::string description, ::IData/*31:0*/ count);
    virtual void __VnoInFunc_exec_func(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> comp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase);
    virtual VlCoroutine __VnoInFunc_exec_task(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> comp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_execute(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> comp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase);
    void __VnoInFunc_find(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase, ::CData/*0:0*/ stay_in_scope, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> &find__Vfuncrtn);
    void __VnoInFunc_get_adjacent_successor_nodes(Vtb_top__Syms* __restrict vlSymsp, ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase>> &succ);
    void __VnoInFunc_get_domain(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_domain> &get_domain__Vfuncrtn);
    void __VnoInFunc_get_domain_name(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_domain_name__Vfuncrtn);
    virtual void __VnoInFunc_get_full_name(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_full_name__Vfuncrtn);
    void __VnoInFunc_get_imp(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> &get_imp__Vfuncrtn);
    void __VnoInFunc_get_jump_target(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> &get_jump_target__Vfuncrtn);
    void __VnoInFunc_get_max_ready_to_end_iterations(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_max_ready_to_end_iterations__Vfuncrtn);
    void __VnoInFunc_get_objection(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_objection> &get_objection__Vfuncrtn);
    void __VnoInFunc_get_phase_type(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_phase_type__Vfuncrtn);
    void __VnoInFunc_get_predecessors(Vtb_top__Syms* __restrict vlSymsp, ::VlAssocArray<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase>, ::CData/*0:0*/> &predecessors);
    void __VnoInFunc_get_predecessors_for_successors(Vtb_top__Syms* __restrict vlSymsp, ::VlAssocArray<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase>, ::CData/*0:0*/> &pred_of_succ);
    void __VnoInFunc_get_schedule(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ hier, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> &get_schedule__Vfuncrtn);
    void __VnoInFunc_get_schedule_name(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ hier, ::std::string &get_schedule_name__Vfuncrtn);
    void __VnoInFunc_get_state(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_state__Vfuncrtn);
    void __VnoInFunc_get_successors(Vtb_top__Syms* __restrict vlSymsp, ::VlAssocArray<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase>, ::CData/*0:0*/> &successors);
    void __VnoInFunc_get_sync_relationships(Vtb_top__Syms* __restrict vlSymsp, ::VlAssocArray<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase>, ::CData/*0:0*/> &relationships);
    void __VnoInFunc_is(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase, ::CData/*0:0*/ &is__Vfuncrtn);
    void __VnoInFunc_is_before(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase, ::CData/*0:0*/ &is_before__Vfuncrtn);
    void __VnoInFunc_is_jumping_forward(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &is_jumping_forward__Vfuncrtn);
    void __VnoInFunc_m_aa2string(Vtb_top__Syms* __restrict vlSymsp, ::VlAssocArray<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase>, ::CData/*0:0*/> aa, ::std::string &m_aa2string__Vfuncrtn);
    void __VnoInFunc_m_find_predecessor(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase, ::CData/*0:0*/ stay_in_scope, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> orig_phase, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> &m_find_predecessor__Vfuncrtn);
    void __VnoInFunc_m_find_successor(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase, ::CData/*0:0*/ stay_in_scope, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> orig_phase, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> &m_find_successor__Vfuncrtn);
    void __VnoInFunc_m_report_null_objection(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> obj, ::std::string description, ::IData/*31:0*/ count, ::std::string action);
    VlCoroutine __VnoInFunc_m_wait_for_pred(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_raise_objection(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> obj, ::std::string description, ::IData/*31:0*/ count);
    virtual void __VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_set_jump_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase);
    void __VnoInFunc_set_state(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ state);
    virtual void __VnoInFunc_traverse(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> comp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase, ::IData/*31:0*/ state);
    VlCoroutine __VnoInFunc_wait_for_self_and_siblings_to_drop(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_wait_for_state(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ state, ::IData/*31:0*/ op);
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_uvm_pkg__03a__03auvm_phase() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::IData/*31:0*/ phase_type, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> parent);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_top_uvm_pkg__03a__03auvm_phase();
};


#endif  // guard
