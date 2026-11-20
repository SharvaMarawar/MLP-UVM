// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_SEQUENCER_BASE__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_SEQUENCER_BASE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_std__03a__03aprocess;
class Vtb_top_uvm_pkg__03a__03a__VDynScope_45;
class Vtb_top_uvm_pkg__03a__03a__VDynScope_51;
class Vtb_top_uvm_pkg__03a__03a__VDynScope_52;
class Vtb_top_uvm_pkg__03a__03auvm_component;
class Vtb_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_top_uvm_pkg__03a__03auvm_factory;
class Vtb_top_uvm_pkg__03a__03auvm_object;
class Vtb_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vtb_top_uvm_pkg__03a__03auvm_phase;
class Vtb_top_uvm_pkg__03a__03auvm_printer;
class Vtb_top_uvm_pkg__03a__03auvm_queue__Tzf640760b;
class Vtb_top_uvm_pkg__03a__03auvm_report_object;
class Vtb_top_uvm_pkg__03a__03auvm_resource__Tz05d526ac;
class Vtb_top_uvm_pkg__03a__03auvm_resource__Tzd665aaf6;
class Vtb_top_uvm_pkg__03a__03auvm_resource_base;
class Vtb_top_uvm_pkg__03a__03auvm_resource_pool;
class Vtb_top_uvm_pkg__03a__03auvm_root;
class Vtb_top_uvm_pkg__03a__03auvm_seed_map;
class Vtb_top_uvm_pkg__03a__03auvm_sequence_base;
class Vtb_top_uvm_pkg__03a__03auvm_sequence_item;
class Vtb_top_uvm_pkg__03a__03auvm_sequence_process_wrapper;
class Vtb_top_uvm_pkg__03a__03auvm_sequence_request;
class Vtb_top_uvm_pkg__03a__03auvm_sequencer_base;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_sequencer_base__Vclpkg final {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::IData/*31:0*/ __PVT__g_request_id;
    ::IData/*31:0*/ __PVT__g_sequence_id;
    ::IData/*31:0*/ __PVT__g_sequencer_id;

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    union {
        struct {
            ::VlAssocArray<::IData/*31:0*/, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequencer_base>> __PVT__all_sequencer_insts;
        } __Vnontrivs;
    };

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03auvm_sequencer_base__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_sequencer_base__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_sequencer_base__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_sequencer_base__Vclpkg);

    // INTERNAL METHODS
};

#include "Vtb_top_uvm_pkg__03a__03auvm_component__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_sequencer_base : public Vtb_top_uvm_pkg__03a__03auvm_component {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*0:0*/ __PVT__m_auto_item_recording;
    ::IData/*31:0*/ __PVT__m_sequencer_id;
    ::IData/*31:0*/ __PVT__m_lock_arb_size;
    ::IData/*31:0*/ __PVT__m_arb_size;
    ::IData/*31:0*/ __PVT__m_wait_for_item_sequence_id;
    ::IData/*31:0*/ __PVT__m_wait_for_item_transaction_id;
    ::IData/*31:0*/ __PVT__m_wait_relevant_count;
    ::IData/*31:0*/ __PVT__m_max_zero_time_wait_relevant_count;
    ::IData/*31:0*/ __PVT__m_arbitration;
    ::IData/*31:0*/ __PVT__m_wait_for_sequences_count;
    ::IData/*31:0*/ __PVT__m_is_relevant_completed;
    ::QData/*63:0*/ __PVT__m_last_wait_relevant_time;

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::VlAssocArray<::IData/*31:0*/, ::CData/*0:0*/> __PVT__arb_completed;
    ::std::string __Vtask___VforkTask_3____VlefCall_2__get_full_name_3503;
    ::std::string __Vtask___VforkTask_3____VlefCall_1__get_type_name_3504;
    ::std::string __Vtask_get_type_name__Vfuncout_3507;
    ::std::string __Vfunc_get_full_name__Vfuncout_1482;
    ::std::string __Vfunc_uvm_create_random_seed__type_id_1484;
    ::std::string __Vfunc_uvm_create_random_seed__inst_id_1485;
    ::std::string __Vfunc_uvm_create_random_seed____VlefCall_1__uvm_instance_scope_1487;
    ::std::string __Vfunc_uvm_instance_scope__Vfuncout_1489;
    ::std::string __Vtask_uvm_report_error__id_3508;
    ::std::string __Vtask_uvm_report_error__message_3509;
    ::std::string __Vtask_uvm_report_error__filename_3511;
    ::std::string __Vtask_uvm_report_error__context_name_3513;
    ::std::string __Vfunc_uvm_oneway_hash__string_in_1493;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_request>> __PVT__arb_sequence_q;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base>> __PVT__lock_list;
    ::VlAssocArray<::IData/*31:0*/, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base>> __PVT__reg_sequences;
    ::VlAssocArray<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase>, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_process_wrapper>> __PVT__m_default_sequences;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_sequencer_base"; }
    virtual void __VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    VlCoroutine __VnoInFunc___VforkTask_1(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03a__VDynScope_45> __VDynScope_m_wait_for_available_sequence_0, ::VlQueue<::IData/*31:0*/> is_relevant_entries);
  private:
    VlCoroutine __VnoInFunc___VforkTask_1____Vfork_6__0(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03a__VDynScope_51> _Vwrapped_unnamedblk352_6__DOT____VDynScope_unnamedblk352_6, ::VlQueue<::IData/*31:0*/> is_relevant_entries);
  public:
    VlCoroutine __VnoInFunc___VforkTask_2(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03a__VDynScope_45> __VDynScope_m_wait_for_available_sequence_0, ::VlQueue<::IData/*31:0*/> is_relevant_entries);
  private:
    VlCoroutine __VnoInFunc___VforkTask_2____Vfork_7__0(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlForkSync __Vfork_7__sync, ::VlClassRef<Vtb_top_uvm_pkg__03a__03a__VDynScope_45> __VDynScope_m_wait_for_available_sequence_0, ::VlQueue<::IData/*31:0*/> is_relevant_entries);
    VlCoroutine __VnoInFunc___VforkTask_2____Vfork_7__1(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlForkSync __Vfork_7__sync);
  public:
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc___VupdateRandVars();
    virtual void __VnoInFunc_analysis_write(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> t);
    virtual void __VnoInFunc_build_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_convert2string(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string &convert2string__Vfuncrtn);
    virtual void __VnoInFunc_disable_auto_item_recording(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer> printer);
    void __VnoInFunc_grant_queued_locks(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_has_do_available(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &has_do_available__Vfuncrtn);
    virtual void __VnoInFunc_is_auto_item_recording_enabled(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &is_auto_item_recording_enabled__Vfuncrtn);
    void __VnoInFunc_is_blocked(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, ::CData/*0:0*/ &is_blocked__Vfuncrtn);
    void __VnoInFunc_is_child(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> parent, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> child, ::CData/*0:0*/ &is_child__Vfuncrtn);
    void __VnoInFunc_kill_sequence(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr);
    void __VnoInFunc_m_choose_next_request(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &m_choose_next_request__Vfuncrtn);
    void __VnoInFunc_m_find_sequence(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ sequence_id, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> &m_find_sequence__Vfuncrtn);
    void __VnoInFunc_m_get_seq_item_priority(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_request> seq_q_entry, ::IData/*31:0*/ &m_get_seq_item_priority__Vfuncrtn);
    void __VnoInFunc_m_register_sequence(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, ::IData/*31:0*/ &m_register_sequence__Vfuncrtn);
    VlCoroutine __VnoInFunc_m_select_sequence(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_request> &selected_sequence_request);
    void __VnoInFunc_m_sequence_exiting(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr);
    void __VnoInFunc_m_set_arbitration_completed(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ request_id);
    void __VnoInFunc_m_unregister_sequence(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ sequence_id);
    void __VnoInFunc_m_update_lists(Vtb_top__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_m_wait_arb_not_equal(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_m_wait_for_arbitration_completed(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ request_id);
    VlCoroutine __VnoInFunc_m_wait_for_available_sequence(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_m_wait_for_available_sequence____Vfork_1__0(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlForkSync __Vfork_1__sync, ::VlClassRef<Vtb_top_uvm_pkg__03a__03a__VDynScope_45> &__VDynScope_m_wait_for_available_sequence_0, ::VlQueue<::IData/*31:0*/> &is_relevant_entries);
    VlCoroutine __VnoInFunc_m_wait_for_available_sequence____Vfork_1__0____Vfork_2__0(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlForkSync __Vfork_2__sync, ::VlClassRef<Vtb_top_uvm_pkg__03a__03a__VDynScope_45> __VDynScope_m_wait_for_available_sequence_0, ::VlQueue<::IData/*31:0*/> is_relevant_entries);
  public:
    virtual void __VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_remove_sequence_from_queues(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr);
    virtual void __VnoInFunc_send_request(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> t, ::CData/*0:0*/ rerandomize);
    void __VnoInFunc_start_phase_sequence(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase);
  private:
    VlCoroutine __VnoInFunc_start_phase_sequence____Vfork_5__0(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03a__VDynScope_52> __VDynScope_start_phase_sequence_7);
  public:
    void __VnoInFunc_stop_phase_sequence(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_stop_sequences(Vtb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_user_priority_arbitration(Vtb_top__Syms* __restrict vlSymsp, ::VlQueue<::IData/*31:0*/> avail_sequences, ::IData/*31:0*/ &user_priority_arbitration__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_wait_for_grant(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, ::IData/*31:0*/ item_priority, ::CData/*0:0*/ lock_request);
    virtual VlCoroutine __VnoInFunc_wait_for_item_done(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, ::IData/*31:0*/ transaction_id);
    virtual VlCoroutine __VnoInFunc_wait_for_sequences(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_wait_for_sequences____Vfork_3__0(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_wait_for_sequences____Vfork_3__0____Vfork_4__0(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ __Vintraval_h5242ab7a__3);
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_uvm_pkg__03a__03auvm_sequencer_base() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> parent);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_top_uvm_pkg__03a__03auvm_sequencer_base();
};


#endif  // guard
