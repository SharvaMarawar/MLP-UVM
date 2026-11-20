// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_OBJECTION__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_OBJECTION__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_std__03a__03aprocess;
class Vtb_top_uvm_pkg__03a__03a__VDynScope_38;
class Vtb_top_uvm_pkg__03a__03a__VDynScope_39;
class Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pi54e4cdf5;
class Vtb_top_uvm_pkg__03a__03auvm_cmdline_processor;
class Vtb_top_uvm_pkg__03a__03auvm_component;
class Vtb_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_top_uvm_pkg__03a__03auvm_object;
class Vtb_top_uvm_pkg__03a__03auvm_objection;
class Vtb_top_uvm_pkg__03a__03auvm_objection_callback;
class Vtb_top_uvm_pkg__03a__03auvm_objection_context_object;
class Vtb_top_uvm_pkg__03a__03auvm_objection_events;
class Vtb_top_uvm_pkg__03a__03auvm_report_object;
class Vtb_top_uvm_pkg__03a__03auvm_root;
class Vtb_top_uvm_pkg__03a__03auvm_sequence_base;
class Vtb_top_uvm_pkg__03a__03auvm_sequencer_base;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_objection__Vclpkg final {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*0:0*/ __PVT__m_register_cb_uvm_objection_callback;

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    union {
        struct {
            ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_objection>> __PVT__m_objections;
            ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_objection_context_object>> __PVT__m_context_pool;
            ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_objection_context_object>> __PVT__m_scheduled_list;
        } __Vnontrivs;
    };

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03auvm_objection__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_objection__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_objection__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_objection__Vclpkg);

    // INTERNAL METHODS
    VlCoroutine __VnoInFunc_m_execute_scheduled_forks(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_m_execute_scheduled_forks____Vfork_1__0(VlProcessRef vlProcess, ::VlClassRef<Vtb_top_uvm_pkg__03a__03a__VDynScope_39> unnamedblk6__DOT___Vwrapped_guard_3__DOT____VDynScope_guard_3);
  public:
    void __VnoInFunc_m_init_objections(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_m_init_objections____Vfork_2__0(VlProcessRef vlProcess);
};

#include "Vtb_top_uvm_pkg__03a__03auvm_report_object__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_objection : public Vtb_top_uvm_pkg__03a__03auvm_report_object {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*0:0*/ __PVT__m_trace_mode;
    ::CData/*0:0*/ __PVT__m_top_all_dropped;
    ::CData/*0:0*/ __PVT__m_prop_mode;
    ::CData/*0:0*/ __PVT__m_cleared;

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::VlAssocArray<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object>, ::IData/*31:0*/> __PVT__m_source_count;
    ::VlAssocArray<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object>, ::IData/*31:0*/> __PVT__m_total_count;
    ::VlAssocArray<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object>, ::QData/*63:0*/> __PVT__m_drain_time;
    ::VlAssocArray<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object>, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_objection_events>> __PVT__m_events;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __PVT__m_top;
    ::VlAssocArray<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object>, ::VlClassRef<Vtb_top_std__03a__03aprocess>> __PVT__m_drain_proc;
    ::VlAssocArray<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object>, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_objection_context_object>> __PVT__m_scheduled_contexts;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_objection_context_object>> __PVT__m_forked_list;
    ::VlAssocArray<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object>, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_objection_context_object>> __PVT__m_forked_contexts;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_objection"; }
    VlClass* clone() const { Vtb_top_uvm_pkg__03a__03auvm_objection* const clonep = new Vtb_top_uvm_pkg__03a__03auvm_objection(*this); clonep->__VnoInFunc___VupdateRandVars();
        return clonep; }
    virtual void __VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc___VupdateRandVars();
    virtual void __VnoInFunc_all_dropped(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> obj, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> source_obj, ::std::string description, ::IData/*31:0*/ count);
    void __VnoInFunc_clear(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> obj);
    virtual void __VnoInFunc_convert2string(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string &convert2string__Vfuncrtn);
    virtual void __VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_drop_objection(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> obj, ::std::string description, ::IData/*31:0*/ count);
    virtual void __VnoInFunc_dropped(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> obj, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> source_obj, ::std::string description, ::IData/*31:0*/ count);
    void __VnoInFunc_get_objection_total(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> obj, ::IData/*31:0*/ &get_objection_total__Vfuncrtn);
    void __VnoInFunc_get_objectors(Vtb_top__Syms* __restrict vlSymsp, ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object>> &list);
    virtual void __VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_m_display_objections(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> obj, ::CData/*0:0*/ show_header, ::std::string &m_display_objections__Vfuncrtn);
    void __VnoInFunc_m_drop(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> obj, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> source_obj, ::std::string description, ::IData/*31:0*/ count, ::IData/*31:0*/ in_top_thread);
    VlCoroutine __VnoInFunc_m_forked_drain(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> obj, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> source_obj, ::std::string description, ::IData/*31:0*/ count, ::IData/*31:0*/ in_top_thread);
    void __VnoInFunc_m_get_parent(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> obj, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &m_get_parent__Vfuncrtn);
    void __VnoInFunc_m_propagate(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> obj, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> source_obj, ::std::string description, ::IData/*31:0*/ count, ::CData/*0:0*/ raise, ::IData/*31:0*/ in_top_thread);
    void __VnoInFunc_m_raise(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> obj, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> source_obj, ::std::string description, ::IData/*31:0*/ count);
    void __VnoInFunc_m_report(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> obj, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> source_obj, ::std::string description, ::IData/*31:0*/ count, ::std::string action);
    virtual void __VnoInFunc_raise_objection(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> obj, ::std::string description, ::IData/*31:0*/ count);
    virtual void __VnoInFunc_raised(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> obj, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> source_obj, ::std::string description, ::IData/*31:0*/ count);
    virtual void __VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn);
    VlCoroutine __VnoInFunc_wait_for(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ objt_event, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> obj);
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_uvm_pkg__03a__03auvm_objection() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_top_uvm_pkg__03a__03auvm_objection();
};


#endif  // guard
