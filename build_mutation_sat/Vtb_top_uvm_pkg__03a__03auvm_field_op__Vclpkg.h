// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_FIELD_OP__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_FIELD_OP__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_top_uvm_pkg__03a__03auvm_field_op;
class Vtb_top_uvm_pkg__03a__03auvm_object;
class Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi056e729a;
class Vtb_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vtb_top_uvm_pkg__03a__03auvm_policy;
class Vtb_top_uvm_pkg__03a__03auvm_report_object;
class Vtb_top_uvm_pkg__03a__03auvm_root;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_field_op__Vclpkg final {
  public:

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    union {
        struct {
            ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_field_op>> __PVT__m_recycled_op;
        } __Vnontrivs;
    };

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03auvm_field_op__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_field_op__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_field_op__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_field_op__Vclpkg);

    // INTERNAL METHODS
    void __VnoInFunc_m_get_available_op(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_field_op> &m_get_available_op__Vfuncrtn);
};

#include "Vtb_top_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_field_op : public Vtb_top_uvm_pkg__03a__03auvm_object {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*0:0*/ __PVT__m_user_hook;
    ::CData/*0:0*/ __PVT__m_is_set;
    ::IData/*27:0*/ __PVT__m_op_type;

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::std::string __Vfunc_m_uvm_string_queue_join__Vfuncout_848;
    ::std::string __Vtask_uvm_report_error__id_1359;
    ::std::string __Vtask_uvm_report_error__message_1360;
    ::std::string __Vtask_uvm_report_error__filename_1362;
    ::std::string __Vtask_uvm_report_error__context_name_1364;
    ::std::string __Vtask_uvm_report_error__id_1368;
    ::std::string __Vtask_uvm_report_error__message_1369;
    ::std::string __Vtask_uvm_report_error__filename_1371;
    ::std::string __Vtask_uvm_report_error__context_name_1373;
    ::std::string __Vtask_uvm_report_error__id_1377;
    ::std::string __Vtask_uvm_report_error__message_1378;
    ::std::string __Vtask_uvm_report_error__filename_1380;
    ::std::string __Vtask_uvm_report_error__context_name_1382;
    ::std::string __Vtask_uvm_report_error__id_1386;
    ::std::string __Vtask_uvm_report_error__message_1387;
    ::std::string __Vtask_uvm_report_error__filename_1389;
    ::std::string __Vtask_uvm_report_error__context_name_1391;
    ::std::string __Vtask_uvm_report_error__id_1395;
    ::std::string __Vtask_uvm_report_error__message_1396;
    ::std::string __Vtask_uvm_report_error__filename_1398;
    ::std::string __Vtask_uvm_report_error__context_name_1400;
    ::std::string __Vtask_uvm_report_error__id_1404;
    ::std::string __Vtask_uvm_report_error__message_1405;
    ::std::string __Vtask_uvm_report_error__filename_1407;
    ::std::string __Vtask_uvm_report_error__context_name_1409;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_policy> __PVT__m_policy;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> __PVT__m_object;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_field_op"; }
    VlClass* clone() const { Vtb_top_uvm_pkg__03a__03auvm_field_op* const clonep = new Vtb_top_uvm_pkg__03a__03auvm_field_op(*this); clonep->__VnoInFunc___VupdateRandVars();
        return clonep; }
    virtual void __VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc___VupdateRandVars();
    virtual void __VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_flush(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    void __VnoInFunc_get_op_type(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*27:0*/ &get_op_type__Vfuncrtn);
    void __VnoInFunc_get_policy(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_policy> &get_policy__Vfuncrtn);
    void __VnoInFunc_get_rhs(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &get_rhs__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_m_recycle(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_set(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*27:0*/ op_type, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_policy> policy, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> rhs);
    void __VnoInFunc_user_hook_enabled(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &user_hook_enabled__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_uvm_pkg__03a__03auvm_field_op() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_top_uvm_pkg__03a__03auvm_field_op();
};


#endif  // guard
