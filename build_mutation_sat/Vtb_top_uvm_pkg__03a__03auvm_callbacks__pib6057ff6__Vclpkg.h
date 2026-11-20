// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_CALLBACKS__PIB6057FF6__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_CALLBACKS__PIB6057FF6__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_uvm_pkg__03a__03auvm_callback;
class Vtb_top_uvm_pkg__03a__03auvm_callbacks__Tz00a28700;
class Vtb_top_uvm_pkg__03a__03auvm_callbacks__pib6057ff6;
class Vtb_top_uvm_pkg__03a__03auvm_callbacks_base;
class Vtb_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_top_uvm_pkg__03a__03auvm_event__Tz2757cb3c;
class Vtb_top_uvm_pkg__03a__03auvm_event_callback__Tz2757cb3c;
class Vtb_top_uvm_pkg__03a__03auvm_object;
class Vtb_top_uvm_pkg__03a__03auvm_pool__pi870010e8;
class Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4eb997f4;
class Vtb_top_uvm_pkg__03a__03auvm_report_object;
class Vtb_top_uvm_pkg__03a__03auvm_root;
class Vtb_top_uvm_pkg__03a__03auvm_typed_callbacks__pia9716edd;
class Vtb_top_uvm_pkg__03a__03auvm_typeid__Tz00a28700;
class Vtb_top_uvm_pkg__03a__03auvm_typeid__Tz14919d72;
class Vtb_top_uvm_pkg__03a__03auvm_typeid__Tz4eb997f4;
class Vtb_top_uvm_pkg__03a__03auvm_typeid_base;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_callbacks__pib6057ff6__Vclpkg final {
  public:

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    union {
        struct {
            ::std::string __PVT__m_typename;
            ::std::string __PVT__m_cb_typename;
            ::std::string __Vtask_uvm_report_error__id_1893;
            ::std::string __Vtask_uvm_report_error__message_1894;
            ::std::string __Vtask_uvm_report_error__filename_1896;
            ::std::string __Vtask_uvm_report_error__context_name_1898;
            ::std::string __Vtask_uvm_report_warning__id_1901;
            ::std::string __Vtask_uvm_report_warning__message_1902;
            ::std::string __Vtask_uvm_report_warning__filename_1904;
            ::std::string __Vtask_uvm_report_warning__context_name_1906;
            ::std::string __Vtask_uvm_report_warning__id_1909;
            ::std::string __Vtask_uvm_report_warning__message_1910;
            ::std::string __Vtask_uvm_report_warning__filename_1912;
            ::std::string __Vtask_uvm_report_warning__context_name_1914;
            ::std::string __Vtask_uvm_report_warning__id_1917;
            ::std::string __Vtask_uvm_report_warning__message_1918;
            ::std::string __Vtask_uvm_report_warning__filename_1920;
            ::std::string __Vtask_uvm_report_warning__context_name_1922;
            ::std::string __Vtask_uvm_report_warning__id_1926;
            ::std::string __Vtask_uvm_report_warning__message_1927;
            ::std::string __Vtask_uvm_report_warning__filename_1929;
            ::std::string __Vtask_uvm_report_warning__context_name_1931;
            ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callbacks__pib6057ff6> __PVT__m_inst;
            ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_typeid_base> __PVT__m_typeid;
            ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_typeid_base> __PVT__m_cb_typeid;
            ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callbacks__Tz00a28700> __PVT__m_base_inst;
        } __Vnontrivs;
    };

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03auvm_callbacks__pib6057ff6__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_callbacks__pib6057ff6__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_callbacks__pib6057ff6__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_callbacks__pib6057ff6__Vclpkg);

    // INTERNAL METHODS
    void __VnoInFunc_add(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_event__Tz2757cb3c> obj, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callback> cb, ::IData/*31:0*/ ordering);
    void __VnoInFunc_delete(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_event__Tz2757cb3c> obj, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callback> cb);
    void __VnoInFunc_get(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callbacks__pib6057ff6> &get__Vfuncrtn);
    void __VnoInFunc_get_all(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_event_callback__Tz2757cb3c>> &all_callbacks, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_event__Tz2757cb3c> obj);
    void __VnoInFunc_m_register_pair(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string tname, ::std::string cbname, ::CData/*0:0*/ &m_register_pair__Vfuncrtn);
};

#include "Vtb_top_uvm_pkg__03a__03auvm_typed_callbacks__pia9716edd__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_callbacks__pib6057ff6 : public Vtb_top_uvm_pkg__03a__03auvm_typed_callbacks__pia9716edd {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*0:0*/ __PVT__m_registered;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_callbacks__pib6057ff6"; }
    VlClass* clone() const { Vtb_top_uvm_pkg__03a__03auvm_callbacks__pib6057ff6* const clonep = new Vtb_top_uvm_pkg__03a__03auvm_callbacks__pib6057ff6(*this); clonep->__VnoInFunc___VupdateRandVars();
        return clonep; }
    virtual void __VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc___VupdateRandVars();
    virtual void __VnoInFunc_m_is_for_me(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callback> cb, ::CData/*0:0*/ &m_is_for_me__Vfuncrtn);
    virtual void __VnoInFunc_m_is_registered(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> obj, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callback> cb, ::CData/*0:0*/ &m_is_registered__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_uvm_pkg__03a__03auvm_callbacks__pib6057ff6() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_top_uvm_pkg__03a__03auvm_callbacks__pib6057ff6();
};


#endif  // guard
