// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_SEQUENCE_BASE__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_SEQUENCE_BASE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_std__03a__03aprocess;
class Vtb_top_std__03a__03asemaphore;
class Vtb_top_uvm_pkg__03a__03auvm_abstract_object_registry__pif3ea0ac9;
class Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pi40a351de;
class Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pibcc32653;
class Vtb_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vtb_top_uvm_pkg__03a__03auvm_phase;
class Vtb_top_uvm_pkg__03a__03auvm_process_guard__Tz05d526ac;
class Vtb_top_uvm_pkg__03a__03auvm_recorder;
class Vtb_top_uvm_pkg__03a__03auvm_report_object;
class Vtb_top_uvm_pkg__03a__03auvm_sequence_base;
class Vtb_top_uvm_pkg__03a__03auvm_sequence_item;
class Vtb_top_uvm_pkg__03a__03auvm_sequencer_base;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_sequence_base__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03auvm_sequence_base__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_sequence_base__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_sequence_base__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_sequence_base__Vclpkg);

    // INTERNAL METHODS
};

#include "Vtb_top_uvm_pkg__03a__03auvm_sequence_item__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_sequence_base : public Vtb_top_uvm_pkg__03a__03auvm_sequence_item {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*0:0*/ __PVT__response_queue_error_report_enabled;
    ::CData/*0:0*/ __PVT__do_not_randomize;
    ::CData/*0:0*/ __PVT__m_use_response_handler;
    ::CData/*0:0*/ __PVT__is_rel_default;
    ::CData/*0:0*/ __PVT__wait_rel_default;
    ::IData/*31:0*/ __PVT__m_sequence_state;
    ::IData/*31:0*/ __PVT__m_next_transaction_id;
    ::IData/*31:0*/ __PVT__m_priority;
    ::IData/*31:0*/ __PVT__m_wait_for_grant_semaphore;
    ::IData/*31:0*/ __PVT__response_queue_depth;

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::VlAssocArray<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base>, ::CData/*0:0*/> __PVT__children_array;
    ::VlAssocArray<::IData/*31:0*/, ::IData/*31:0*/> __PVT__m_sqr_seq_ids;
    ::VlClassRef<Vtb_top_std__03a__03asemaphore> __PVT__m_sequence_state_mutex;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_recorder> __PVT__m_tr_recorder;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item>> __PVT__response_queue;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_process_guard__Tz05d526ac> __PVT__m_parent_process_guard;
    ::VlClassRef<Vtb_top_std__03a__03aprocess> __PVT__m_sequence_process;
    ::VlClassRef<Vtb_top_std__03a__03aprocess> __PVT__m_killing_process;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pi40a351de> __PVT__m_automatic_phase_objection_dap;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pibcc32653> __PVT__m_starting_phase_dap;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> __PVT__starting_phase;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_sequence_base"; }
    virtual void __VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc___VupdateRandVars();
    virtual VlCoroutine __VnoInFunc_body(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_clean_exit_sequence(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_clear_response_queue(Vtb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_do_kill(Vtb_top__Syms* __restrict vlSymsp) {}
    VlCoroutine __VnoInFunc_finish_item(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> item, ::IData/*31:0*/ set_priority);
    void __VnoInFunc_get_automatic_phase_objection(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &get_automatic_phase_objection__Vfuncrtn);
    VlCoroutine __VnoInFunc_get_base_response(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> &response, ::IData/*31:0*/ transaction_id);
    virtual void __VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    void __VnoInFunc_get_priority(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_priority__Vfuncrtn);
    void __VnoInFunc_get_randomize_enabled(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &get_randomize_enabled__Vfuncrtn);
    void __VnoInFunc_get_sequence_state(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_sequence_state__Vfuncrtn);
    void __VnoInFunc_get_starting_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> &get_starting_phase__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_get_use_response_handler(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &get_use_response_handler__Vfuncrtn);
    virtual void __VnoInFunc_is_item(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &is_item__Vfuncrtn);
    void __VnoInFunc_is_relevant(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &is_relevant__Vfuncrtn);
    void __VnoInFunc_kill(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_get_sqr_sequence_id(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ sequencer_id, ::CData/*0:0*/ update_sequence_id, ::IData/*31:0*/ &m_get_sqr_sequence_id__Vfuncrtn);
    void __VnoInFunc_m_init_phase_daps(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ create);
    void __VnoInFunc_m_kill(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_killed(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_safe_drop_starting_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string description, ::IData/*31:0*/ count);
    void __VnoInFunc_m_safe_raise_starting_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string description, ::IData/*31:0*/ count);
    void __VnoInFunc_m_set_sqr_sequence_id(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ sequencer_id, ::IData/*31:0*/ sequence_id);
    void __VnoInFunc_mid_do(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> this_item);
    void __VnoInFunc_post_body(Vtb_top__Syms* __restrict vlSymsp) {}
    void __VnoInFunc_post_do(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> this_item);
    void __VnoInFunc_post_start(Vtb_top__Syms* __restrict vlSymsp) {}
    void __VnoInFunc_pre_body(Vtb_top__Syms* __restrict vlSymsp) {}
    void __VnoInFunc_pre_do(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ is_item);
    void __VnoInFunc_pre_start(Vtb_top__Syms* __restrict vlSymsp) {}
    void __VnoInFunc_process_guard_triggered(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_process_guard__Tz05d526ac> guard);
    void __VnoInFunc_put_base_response(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> response);
    virtual void __VnoInFunc_put_response(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> response_item);
    virtual void __VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_response_handler(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> response);
    virtual void __VnoInFunc_send_request(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> request, ::CData/*0:0*/ rerandomize);
    void __VnoInFunc_set_automatic_phase_objection(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ value);
    void __VnoInFunc_set_starting_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase);
    virtual VlCoroutine __VnoInFunc_start(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequencer_base> sequencer, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> parent_sequence, ::IData/*31:0*/ this_priority, ::CData/*0:0*/ call_pre_post);
  private:
    VlCoroutine __VnoInFunc_start____Vfork_1__0(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlForkSync __Vfork_1__sync, ::CData/*0:0*/ &__VlefCall_7__get_automatic_phase_objection, ::CData/*0:0*/ &call_pre_post, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> &parent_sequence, ::CData/*0:0*/ &__VlefCall_8__get_automatic_phase_objection);
    VlCoroutine __VnoInFunc_start____Vfork_2__0(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlForkSync __Vfork_2__sync);
    VlCoroutine __VnoInFunc_start____Vfork_2__0____Vfork_3__0(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlForkSync __Vfork_3__sync);
    VlCoroutine __VnoInFunc_start____Vfork_2__0____Vfork_3__1(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlForkSync __Vfork_3__sync);
  public:
    VlCoroutine __VnoInFunc_start_item(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> item, ::IData/*31:0*/ set_priority, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequencer_base> sequencer);
    virtual VlCoroutine __VnoInFunc_wait_for_grant(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ item_priority, ::CData/*0:0*/ lock_request);
    virtual VlCoroutine __VnoInFunc_wait_for_item_done(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ transaction_id);
    VlCoroutine __VnoInFunc_wait_for_relevant(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_uvm_pkg__03a__03auvm_sequence_base() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_top_uvm_pkg__03a__03auvm_sequence_base();
};


#endif  // guard
