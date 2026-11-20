// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_COMPARER__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_COMPARER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "Vtb_top_uvm_pkg__03a__03auvm_comparer__Vclpkg.h"
class Vtb_top_uvm_pkg__03a__03auvm_comparer;
class Vtb_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_top_uvm_pkg__03a__03auvm_field_op;
class Vtb_top_uvm_pkg__03a__03auvm_object;
class Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi10be4173;
class Vtb_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vtb_top_uvm_pkg__03a__03auvm_policy;
class Vtb_top_uvm_pkg__03a__03auvm_report_object;
class Vtb_top_uvm_pkg__03a__03auvm_root;


class Vtb_top__Syms;
struct Vtb_top_state_info_t__struct__0 {
    ::IData/*31:0*/ __PVT__state;
    ::CData/*0:0*/ __PVT__ret_val;

    bool operator==(const Vtb_top_state_info_t__struct__0& rhs) const {
        return __PVT__state == rhs.__PVT__state
            && __PVT__ret_val == rhs.__PVT__ret_val;
    }
    bool operator!=(const Vtb_top_state_info_t__struct__0& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const Vtb_top_state_info_t__struct__0& rhs) const {
        if (__PVT__state < rhs.__PVT__state) return true;
        if (rhs.__PVT__state < __PVT__state) return false;
        if (__PVT__ret_val < rhs.__PVT__ret_val) return true;
        if (rhs.__PVT__ret_val < __PVT__ret_val) return false;
        return false;
    }
};
template <>
struct VlIsCustomStruct<Vtb_top_state_info_t__struct__0> : public std::true_type {};

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_comparer__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03auvm_comparer__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_comparer__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_comparer__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_comparer__Vclpkg);

    // INTERNAL METHODS
};

std::string VL_TO_STRING(const Vtb_top_state_info_t__struct__0& obj);
#include "Vtb_top_uvm_pkg__03a__03auvm_policy__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_comparer : public Vtb_top_uvm_pkg__03a__03auvm_policy {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*0:0*/ __PVT__physical;
    ::CData/*0:0*/ __PVT__abstract;
    ::CData/*1:0*/ __PVT__sev;
    ::CData/*0:0*/ __PVT__check_type;
    ::IData/*27:0*/ __PVT__policy;
    ::IData/*31:0*/ __PVT__show_max;
    ::IData/*31:0*/ __PVT__verbosity;
    ::IData/*31:0*/ __PVT__result;
    ::IData/*31:0*/ __PVT__m_threshold;
    ::IData/*31:0*/ __PVT__depth;

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::VlAssocArray<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object>, ::VlAssocArray<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object>, ::VlAssocArray<::IData/*27:0*/, Vtb_top_state_info_t__struct__0>>> __PVT__m_recur_states;
    ::VlAssocArray<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object>, ::VlAssocArray<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object>, ::CData/*0:0*/>> __PVT__compare_map;
    ::VlQueue<::std::string> __PVT__m_object_names;
    ::std::string __PVT__miscompares;
    ::std::string __Vtask_uvm_report_error__id_1461;
    ::std::string __Vtask_uvm_report_error__message_1462;
    ::std::string __Vtask_uvm_report_error__filename_1464;
    ::std::string __Vtask_uvm_report_error__context_name_1466;
    ::std::string __Vtask_uvm_report_warning__id_1470;
    ::std::string __Vtask_uvm_report_warning__message_1471;
    ::std::string __Vtask_uvm_report_warning__filename_1473;
    ::std::string __Vtask_uvm_report_warning__context_name_1475;
    ::std::string __Vtask_uvm_report__id_1480;
    ::std::string __Vtask_uvm_report__message_1481;
    ::std::string __Vtask_uvm_report__filename_1483;
    ::std::string __Vtask_uvm_report__context_name_1485;
    ::std::string __Vtask_uvm_report__id_1489;
    ::std::string __Vtask_uvm_report__message_1490;
    ::std::string __Vtask_uvm_report__filename_1492;
    ::std::string __Vtask_uvm_report__context_name_1494;
    ::std::string __Vtask_uvm_report__id_1498;
    ::std::string __Vtask_uvm_report__message_1499;
    ::std::string __Vtask_uvm_report__filename_1501;
    ::std::string __Vtask_uvm_report__context_name_1503;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_comparer"; }
    VlClass* clone() const { Vtb_top_uvm_pkg__03a__03auvm_comparer* const clonep = new Vtb_top_uvm_pkg__03a__03auvm_comparer(*this); clonep->__VnoInFunc___VupdateRandVars();
        return clonep; }
    virtual void __VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc___VupdateRandVars();
    void __VnoInFunc_compare_field_int(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::QData/*63:0*/ lhs, ::QData/*63:0*/ rhs, ::IData/*31:0*/ size, ::IData/*27:0*/ radix, ::CData/*0:0*/ &compare_field_int__Vfuncrtn);
    void __VnoInFunc_compare_object(Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> lhs, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> rhs, ::CData/*0:0*/ &compare_object__Vfuncrtn);
    void __VnoInFunc_compare_string(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::std::string lhs, ::std::string rhs, ::CData/*0:0*/ &compare_string__Vfuncrtn);
    virtual void __VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_flush(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_get_check_type(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &get_check_type__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_recursion_policy(Vtb_top__Syms* __restrict vlSymsp, ::IData/*27:0*/ &get_recursion_policy__Vfuncrtn);
    void __VnoInFunc_get_result(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_result__Vfuncrtn);
    virtual void __VnoInFunc_get_severity(Vtb_top__Syms* __restrict vlSymsp, ::CData/*1:0*/ &get_severity__Vfuncrtn);
    void __VnoInFunc_get_show_max(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_show_max__Vfuncrtn);
    virtual void __VnoInFunc_get_threshold(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_threshold__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_get_verbosity(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_verbosity__Vfuncrtn);
    void __VnoInFunc_m_current_context(Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::std::string &m_current_context__Vfuncrtn);
    void __VnoInFunc_object_compared(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> lhs, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> rhs, ::IData/*27:0*/ recursion, ::CData/*0:0*/ &ret_val, ::IData/*31:0*/ &object_compared__Vfuncrtn);
    void __VnoInFunc_print_msg(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string msg);
    void __VnoInFunc_print_msg_object(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> lhs, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_set_recursion_policy(Vtb_top__Syms* __restrict vlSymsp, ::IData/*27:0*/ policy);
    virtual void __VnoInFunc_set_severity(Vtb_top__Syms* __restrict vlSymsp, ::CData/*1:0*/ severity);
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_uvm_pkg__03a__03auvm_comparer() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_top_uvm_pkg__03a__03auvm_comparer();
};


#endif  // guard
