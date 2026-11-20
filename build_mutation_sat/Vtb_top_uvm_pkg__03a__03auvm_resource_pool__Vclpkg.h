// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_RESOURCE_POOL__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_RESOURCE_POOL__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_std__03a__03aprocess;
class Vtb_top_uvm_pkg__03a__03aget_t;
class Vtb_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_top_uvm_pkg__03a__03auvm_queue__Tzf640760b;
class Vtb_top_uvm_pkg__03a__03auvm_resource_base;
class Vtb_top_uvm_pkg__03a__03auvm_resource_pool;
class Vtb_top_uvm_pkg__03a__03auvm_root;
class Vtb_top_uvm_pkg__03a__03auvm_shared__Tzdc5d07fc;
class Vtb_top_uvm_pkg__03a__03auvm_tree_printer;
class Vtb_top_uvm_pkg__03a__03auvm_void;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_resource_pool__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03auvm_resource_pool__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_resource_pool__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_resource_pool__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_resource_pool__Vclpkg);

    // INTERNAL METHODS
    void __VnoInFunc_get(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_pool> &get__Vfuncrtn);
    void __VnoInFunc_get_default_precedence(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_default_precedence__Vfuncrtn);
    void __VnoInFunc_get_highest_precedence(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_queue__Tzf640760b> &q, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_base> &get_highest_precedence__Vfuncrtn);
    void __VnoInFunc_sort_by_precedence(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_queue__Tzf640760b> &q);
    void __VnoInFunc_sort_by_precedence_q(Vtb_top__Syms* __restrict vlSymsp, ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_base>> &q);
};

#include "Vtb_top_uvm_pkg__03a__03auvm_void__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_resource_pool : public Vtb_top_uvm_pkg__03a__03auvm_void {
  public:

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::std::string __Vtask_uvm_report_warning__id_716;
    ::std::string __Vtask_uvm_report_warning__message_717;
    ::std::string __Vtask_uvm_report_warning__filename_719;
    ::std::string __Vtask_uvm_report_warning__context_name_721;
    ::std::string __Vfunc_uvm_is_match__expr_502;
    ::std::string __Vfunc_uvm_is_match__str_503;
    ::std::string __Vfunc_uvm_re_match__re_506;
    ::std::string __Vfunc_uvm_re_match__str_507;
    ::std::string __Vfunc_uvm_is_match__expr_510;
    ::std::string __Vfunc_uvm_is_match__str_511;
    ::std::string __Vfunc_uvm_re_match__re_514;
    ::std::string __Vfunc_uvm_re_match__str_515;
    ::std::string __Vfunc_uvm_is_match__expr_518;
    ::std::string __Vfunc_uvm_is_match__str_519;
    ::std::string __Vfunc_uvm_re_match__re_522;
    ::std::string __Vfunc_uvm_re_match__str_523;
    ::std::string __Vfunc_uvm_is_match__expr_526;
    ::std::string __Vfunc_uvm_is_match__str_527;
    ::std::string __Vfunc_uvm_re_match__re_530;
    ::std::string __Vfunc_uvm_re_match__str_531;
    ::std::string __Vfunc_uvm_is_match__expr_534;
    ::std::string __Vfunc_uvm_is_match__str_535;
    ::std::string __Vfunc_uvm_re_match__re_538;
    ::std::string __Vfunc_uvm_re_match__str_539;
    ::std::string __Vtask_uvm_report_error__id_726;
    ::std::string __Vtask_uvm_report_error__message_727;
    ::std::string __Vtask_uvm_report_error__filename_729;
    ::std::string __Vtask_uvm_report_error__context_name_731;
    ::std::string __Vtask_uvm_report_warning__id_734;
    ::std::string __Vtask_uvm_report_warning__message_735;
    ::std::string __Vtask_uvm_report_warning__filename_737;
    ::std::string __Vtask_uvm_report_warning__context_name_739;
    ::std::string __Vtask_uvm_report_error__id_742;
    ::std::string __Vtask_uvm_report_error__message_743;
    ::std::string __Vtask_uvm_report_error__filename_745;
    ::std::string __Vtask_uvm_report_error__context_name_747;
    ::std::string __Vtask_uvm_report_warning__id_750;
    ::std::string __Vtask_uvm_report_warning__message_751;
    ::std::string __Vtask_uvm_report_warning__filename_753;
    ::std::string __Vtask_uvm_report_warning__context_name_755;
    ::std::string __Vtask_uvm_report_error__id_758;
    ::std::string __Vtask_uvm_report_error__message_759;
    ::std::string __Vtask_uvm_report_error__filename_761;
    ::std::string __Vtask_uvm_report_error__context_name_763;
    ::std::string __Vtask_uvm_report_warning__id_766;
    ::std::string __Vtask_uvm_report_warning__message_767;
    ::std::string __Vtask_uvm_report_warning__filename_769;
    ::std::string __Vtask_uvm_report_warning__context_name_771;
    ::std::string __Vtask_uvm_report_warning__id_774;
    ::std::string __Vtask_uvm_report_warning__message_775;
    ::std::string __Vtask_uvm_report_warning__filename_777;
    ::std::string __Vtask_uvm_report_warning__context_name_779;
    ::std::string __Vtask_uvm_report_warning__id_782;
    ::std::string __Vtask_uvm_report_warning__message_783;
    ::std::string __Vtask_uvm_report_warning__filename_785;
    ::std::string __Vtask_uvm_report_warning__context_name_787;
    ::std::string __Vtask_uvm_report_warning__id_790;
    ::std::string __Vtask_uvm_report_warning__message_791;
    ::std::string __Vtask_uvm_report_warning__filename_793;
    ::std::string __Vtask_uvm_report_warning__context_name_795;
    ::VlAssocArray<::std::string, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_shared__Tzdc5d07fc>> __PVT__rtab;
    ::VlAssocArray<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_base>, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_shared__Tzdc5d07fc>> __PVT__ttab;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03aget_t>> __PVT__get_record;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_resource_pool"; }
    VlClass* clone() const { return new Vtb_top_uvm_pkg__03a__03auvm_resource_pool(*this); }
    virtual void __VnoInFunc_delete(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_base> rsrc);
    void __VnoInFunc_get_by_name(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string scope, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_base> type_handle, ::CData/*0:0*/ rpterr, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_base> &get_by_name__Vfuncrtn);
    void __VnoInFunc_get_precedence(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_base> r, ::IData/*31:0*/ &get_precedence__Vfuncrtn);
    void __VnoInFunc_lookup_name(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string scope, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_base> type_handle, ::CData/*0:0*/ rpterr, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_queue__Tzf640760b> &lookup_name__Vfuncrtn);
    void __VnoInFunc_lookup_regex(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string re, ::std::string scope, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_queue__Tzf640760b> &lookup_regex__Vfuncrtn);
    void __VnoInFunc_lookup_scope(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string scope, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_queue__Tzf640760b> &lookup_scope__Vfuncrtn);
    void __VnoInFunc_push_get_record(Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::std::string scope, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_base> rsrc);
    void __VnoInFunc_set_precedence(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_base> r, ::IData/*31:0*/ p);
    void __VnoInFunc_set_priority(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_base> rsrc, ::IData/*31:0*/ pri);
    void __VnoInFunc_set_priority_name(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_base> rsrc, ::IData/*31:0*/ pri);
    void __VnoInFunc_set_priority_queue(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_base> rsrc, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_shared__Tzdc5d07fc> rq, ::IData/*31:0*/ pri);
    void __VnoInFunc_set_priority_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_base> rsrc, ::IData/*31:0*/ pri);
    void __VnoInFunc_set_scope(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_base> rsrc, ::std::string scope);
    void __VnoInFunc_spell_check(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string s, ::CData/*0:0*/ &spell_check__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_uvm_pkg__03a__03auvm_resource_pool() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
    virtual ~Vtb_top_uvm_pkg__03a__03auvm_resource_pool();
};


#endif  // guard
