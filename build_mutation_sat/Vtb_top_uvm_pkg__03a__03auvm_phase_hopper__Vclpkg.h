// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_PHASE_HOPPER__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_PHASE_HOPPER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_std__03a__03aprocess;
class Vtb_top_uvm_pkg__03a__03a__VDynScope_27;
class Vtb_top_uvm_pkg__03a__03a__VDynScope_30;
class Vtb_top_uvm_pkg__03a__03a__VDynScope_31;
class Vtb_top_uvm_pkg__03a__03a__VDynScope_32;
class Vtb_top_uvm_pkg__03a__03auvm_component;
class Vtb_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_top_uvm_pkg__03a__03auvm_domain;
class Vtb_top_uvm_pkg__03a__03auvm_object;
class Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi6a3b1ffb;
class Vtb_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vtb_top_uvm_pkg__03a__03auvm_objection;
class Vtb_top_uvm_pkg__03a__03auvm_phase;
class Vtb_top_uvm_pkg__03a__03auvm_phase_hopper;
class Vtb_top_uvm_pkg__03a__03auvm_report_object;
class Vtb_top_uvm_pkg__03a__03auvm_root;
class Vtb_top_uvm_pkg__03a__03auvm_task_phase;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_phase_hopper__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03auvm_phase_hopper__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_phase_hopper__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_phase_hopper__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_phase_hopper__Vclpkg);

    // INTERNAL METHODS
    void __VnoInFunc_get_global_hopper(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase_hopper> &get_global_hopper__Vfuncrtn);
};

#include "Vtb_top_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_phase_hopper : public Vtb_top_uvm_pkg__03a__03auvm_object {
  public:

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::std::string __Vtask_uvm_report_info__id_2216;
    ::std::string __Vtask_uvm_report_info__message_2217;
    ::std::string __Vtask_uvm_report_info__filename_2219;
    ::std::string __Vtask_uvm_report_info__context_name_2221;
    ::std::string __Vtask_uvm_report_info__id_2225;
    ::std::string __Vtask_uvm_report_info__message_2226;
    ::std::string __Vtask_uvm_report_info__filename_2228;
    ::std::string __Vtask_uvm_report_info__context_name_2230;
    ::std::string __Vtask___VforkTask_3____VlefCall_4__get_full_name_2238;
    ::std::string __Vtask_get_full_name__Vfuncout_2248;
    ::std::string __Vtask_uvm_report_info__id_2250;
    ::std::string __Vtask_uvm_report_info__message_2251;
    ::std::string __Vtask_uvm_report_info__filename_2253;
    ::std::string __Vtask_uvm_report_info__context_name_2255;
    ::std::string __Vtask___VforkTask_4____VlefCall_25__get_full_name_2264;
    ::std::string __Vtask___VforkTask_4____VlefCall_19__get_full_name_2270;
    ::std::string __Vtask___VforkTask_4____VlefCall_13__get_full_name_2276;
    ::std::string __Vtask___VforkTask_4____VlefCall_7__get_full_name_2282;
    ::std::string __Vtask___VforkTask_4____VlefCall_1__get_name_2288;
    ::std::string __Vtask_get_name__Vfuncout_2299;
    ::std::string __Vtask_get_full_name__Vfuncout_2304;
    ::std::string __Vtask_uvm_report_info__id_2306;
    ::std::string __Vtask_uvm_report_info__message_2307;
    ::std::string __Vtask_uvm_report_info__filename_2309;
    ::std::string __Vtask_uvm_report_info__context_name_2311;
    ::std::string __Vtask_get_full_name__Vfuncout_2318;
    ::std::string __Vtask_uvm_report_info__id_2320;
    ::std::string __Vtask_uvm_report_info__message_2321;
    ::std::string __Vtask_uvm_report_info__filename_2323;
    ::std::string __Vtask_uvm_report_info__context_name_2325;
    ::std::string __Vtask_get_full_name__Vfuncout_2332;
    ::std::string __Vtask_uvm_report_info__id_2334;
    ::std::string __Vtask_uvm_report_info__message_2335;
    ::std::string __Vtask_uvm_report_info__filename_2337;
    ::std::string __Vtask_uvm_report_info__context_name_2339;
    ::std::string __Vtask_get_full_name__Vfuncout_2346;
    ::std::string __Vtask_uvm_report_info__id_2348;
    ::std::string __Vtask_uvm_report_info__message_2349;
    ::std::string __Vtask_uvm_report_info__filename_2351;
    ::std::string __Vtask_uvm_report_info__context_name_2353;
    ::std::string __Vtask___VforkTask_5____VlefCall_23__convert2string_2364;
    ::std::string __Vtask___VforkTask_5____VlefCall_22__get_full_name_2365;
    ::std::string __Vtask___VforkTask_5____VlefCall_20__get_full_name_2367;
    ::std::string __Vtask___VforkTask_5____VlefCall_11__get_full_name_2376;
    ::std::string __Vtask___VforkTask_5____VlefCall_5__get_full_name_2382;
    ::std::string __Vtask___VforkTask_5____VlefCall_0__get_name_2387;
    ::std::string __Vtask___VforkTask_5__unnamedblk208__DOT__delay_type_2388;
    ::std::string __Vtask_get_name__Vfuncout_2399;
    ::std::string __Vtask_get_full_name__Vfuncout_2404;
    ::std::string __Vtask_uvm_report_info__id_2406;
    ::std::string __Vtask_uvm_report_info__message_2407;
    ::std::string __Vtask_uvm_report_info__filename_2409;
    ::std::string __Vtask_uvm_report_info__context_name_2411;
    ::std::string __Vtask_get_full_name__Vfuncout_2418;
    ::std::string __Vtask_uvm_report_info__id_2420;
    ::std::string __Vtask_uvm_report_info__message_2421;
    ::std::string __Vtask_uvm_report_info__filename_2423;
    ::std::string __Vtask_uvm_report_info__context_name_2425;
    ::std::string __Vtask_get_full_name__Vfuncout_2434;
    ::std::string __Vtask_get_full_name__Vfuncout_2436;
    ::std::string __Vtask_convert2string__Vfuncout_2437;
    ::std::string __Vtask_uvm_report_info__id_2438;
    ::std::string __Vtask_uvm_report_info__message_2439;
    ::std::string __Vtask_uvm_report_info__filename_2441;
    ::std::string __Vtask_uvm_report_info__context_name_2443;
    ::std::string __Vtask_uvm_report_info__id_2451;
    ::std::string __Vtask_uvm_report_info__message_2452;
    ::std::string __Vtask_uvm_report_info__filename_2454;
    ::std::string __Vtask_uvm_report_info__context_name_2456;
    ::std::string __Vtask_uvm_report_info__id_2460;
    ::std::string __Vtask_uvm_report_info__message_2461;
    ::std::string __Vtask_uvm_report_info__filename_2463;
    ::std::string __Vtask_uvm_report_info__context_name_2465;
    ::std::string __Vtask_uvm_report_info__id_2469;
    ::std::string __Vtask_uvm_report_info__message_2470;
    ::std::string __Vtask_uvm_report_info__filename_2472;
    ::std::string __Vtask_uvm_report_info__context_name_2474;
    ::std::string __Vtask_uvm_report_info__id_2478;
    ::std::string __Vtask_uvm_report_info__message_2479;
    ::std::string __Vtask_uvm_report_info__filename_2481;
    ::std::string __Vtask_uvm_report_info__context_name_2483;
    ::std::string __Vtask_uvm_report_info__id_2487;
    ::std::string __Vtask_uvm_report_info__message_2488;
    ::std::string __Vtask_uvm_report_info__filename_2490;
    ::std::string __Vtask_uvm_report_info__context_name_2492;
    ::std::string __Vtask_get_full_name__Vfuncout_2495;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase>> __PVT__m_queue;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_objection> __PVT__m_objection;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_phase_hopper"; }
    VlClass* clone() const { Vtb_top_uvm_pkg__03a__03auvm_phase_hopper* const clonep = new Vtb_top_uvm_pkg__03a__03auvm_phase_hopper(*this); clonep->__VnoInFunc___VupdateRandVars();
        return clonep; }
    virtual void __VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    VlCoroutine __VnoInFunc___VforkTask_1(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03a__VDynScope_27> __VDynScope_run_phases_0);
  private:
    VlCoroutine __VnoInFunc___VforkTask_1____Vfork_11__0(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03a__VDynScope_30> _Vwrapped_unnamedblk195_3__DOT____VDynScope_unnamedblk195_3);
  public:
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc___VupdateRandVars();
    VlCoroutine __VnoInFunc_cleanup_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_drop_objection(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> obj, ::std::string description, ::IData/*31:0*/ count);
    VlCoroutine __VnoInFunc_end_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase);
    void __VnoInFunc_execute_on(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> imp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> comp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> node);
    VlCoroutine __VnoInFunc_execute_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase);
  private:
    VlCoroutine __VnoInFunc_execute_phase____Vfork_2__0(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03a__VDynScope_32> unnamedblk201__DOT____VDynScope_unnamedblk201_5, ::VlClassRef<Vtb_top_uvm_pkg__03a__03a__VDynScope_31> __VDynScope_execute_phase_4);
    VlCoroutine __VnoInFunc_execute_phase____Vfork_3__0(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_execute_phase____Vfork_3__0____Vfork_4__0(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ __Vintraval_h5242ab7a__0);
    VlCoroutine __VnoInFunc_execute_phase____Vfork_5__0(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlForkSync __Vfork_5__sync, ::VlClassRef<Vtb_top_uvm_pkg__03a__03a__VDynScope_31> &__VDynScope_execute_phase_4, ::VlClassRef<Vtb_top_uvm_pkg__03a__03a__VDynScope_32> &unnamedblk201__DOT____VDynScope_unnamedblk201_5);
    VlCoroutine __VnoInFunc_execute_phase____Vfork_5__0____Vfork_6__0(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlForkSync __Vfork_6__sync, ::VlClassRef<Vtb_top_uvm_pkg__03a__03a__VDynScope_31> __VDynScope_execute_phase_4);
    VlCoroutine __VnoInFunc_execute_phase____Vfork_5__0____Vfork_6__1(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlForkSync __Vfork_6__sync, ::VlClassRef<Vtb_top_uvm_pkg__03a__03a__VDynScope_32> unnamedblk201__DOT____VDynScope_unnamedblk201_5, ::VlClassRef<Vtb_top_uvm_pkg__03a__03a__VDynScope_31> __VDynScope_execute_phase_4);
    VlCoroutine __VnoInFunc_execute_phase____Vfork_5__0____Vfork_6__1____Vfork_7__0(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_execute_phase____Vfork_5__0____Vfork_6__1____Vfork_7__0____Vfork_8__0(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ __Vintraval_h5242ab7a__1);
    VlCoroutine __VnoInFunc_execute_phase____Vfork_5__0____Vfork_6__1____Vfork_9__0(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_execute_phase____Vfork_5__0____Vfork_6__1____Vfork_9__0____Vfork_10__0(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ __Vintraval_h5242ab7a__2);
    VlCoroutine __VnoInFunc_execute_phase____Vfork_5__0____Vfork_6__2(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlForkSync __Vfork_6__sync, ::VlClassRef<Vtb_top_uvm_pkg__03a__03a__VDynScope_32> unnamedblk201__DOT____VDynScope_unnamedblk201_5, ::VlClassRef<Vtb_top_uvm_pkg__03a__03a__VDynScope_31> __VDynScope_execute_phase_4);
  public:
    VlCoroutine __VnoInFunc_finish_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase);
    virtual VlCoroutine __VnoInFunc_get(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> &phase);
    virtual void __VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    void __VnoInFunc_get_objection(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_objection> &get_objection__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_peek(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> &phase);
    VlCoroutine __VnoInFunc_process_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_raise_objection(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> obj, ::std::string description, ::IData/*31:0*/ count);
    virtual void __VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn);
    VlCoroutine __VnoInFunc_run_phases(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_run_phases____Vfork_1__0(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03a__VDynScope_27> __VDynScope_run_phases_0);
  public:
    VlCoroutine __VnoInFunc_schedule_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> from_phase);
    VlCoroutine __VnoInFunc_start_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase);
    VlCoroutine __VnoInFunc_sync_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase);
    void __VnoInFunc_traverse_on(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> imp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> comp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> node, ::IData/*31:0*/ state);
    virtual void __VnoInFunc_try_get(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> &phase, ::CData/*0:0*/ &try_get__Vfuncrtn);
    virtual void __VnoInFunc_try_peek(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> &phase, ::CData/*0:0*/ &try_peek__Vfuncrtn);
    virtual void __VnoInFunc_try_put(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase, ::CData/*0:0*/ &try_put__Vfuncrtn);
    VlCoroutine __VnoInFunc_wait_for_objection(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ objt_event, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> obj);
    VlCoroutine __VnoInFunc_wait_for_waiters(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase, ::IData/*31:0*/ prev_state);
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_uvm_pkg__03a__03auvm_phase_hopper() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_top_uvm_pkg__03a__03auvm_phase_hopper();
};


#endif  // guard
