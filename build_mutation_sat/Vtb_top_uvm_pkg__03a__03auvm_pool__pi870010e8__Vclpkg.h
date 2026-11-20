// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_POOL__PI870010E8__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_POOL__PI870010E8__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_top_uvm_pkg__03a__03auvm_object;
class Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi15f6ef64;
class Vtb_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vtb_top_uvm_pkg__03a__03auvm_pool__pi870010e8;
class Vtb_top_uvm_pkg__03a__03auvm_printer;
class Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4eb997f4;
class Vtb_top_uvm_pkg__03a__03auvm_root;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_pool__pi870010e8__Vclpkg final {
  public:

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    union {
        struct {
            ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_pool__pi870010e8> __PVT__m_global_pool;
        } __Vnontrivs;
    };

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03auvm_pool__pi870010e8__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_pool__pi870010e8__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_pool__pi870010e8__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_pool__pi870010e8__Vclpkg);

    // INTERNAL METHODS
};

#include "Vtb_top_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_pool__pi870010e8 : public Vtb_top_uvm_pkg__03a__03auvm_object {
  public:

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::std::string __Vtask_uvm_report_warning__id_288;
    ::std::string __Vtask_uvm_report_warning__message_289;
    ::std::string __Vtask_uvm_report_warning__filename_291;
    ::std::string __Vtask_uvm_report_warning__context_name_293;
    ::VlAssocArray<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object>, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4eb997f4>> __PVT__pool;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_pool__pi870010e8"; }
    VlClass* clone() const { Vtb_top_uvm_pkg__03a__03auvm_pool__pi870010e8* const clonep = new Vtb_top_uvm_pkg__03a__03auvm_pool__pi870010e8(*this); clonep->__VnoInFunc___VupdateRandVars();
        return clonep; }
    virtual void __VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc___VupdateRandVars();
    virtual void __VnoInFunc_add(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> key, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4eb997f4> item);
    virtual void __VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_delete(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> key);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_exists(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> key, ::IData/*31:0*/ &exists__Vfuncrtn);
    virtual void __VnoInFunc_first(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &key, ::IData/*31:0*/ &first__Vfuncrtn);
    virtual void __VnoInFunc_get(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> key, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4eb997f4> &get__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_next(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &key, ::IData/*31:0*/ &next__Vfuncrtn);
    virtual void __VnoInFunc_num(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &num__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_uvm_pkg__03a__03auvm_pool__pi870010e8() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_top_uvm_pkg__03a__03auvm_pool__pi870010e8();
};


#endif  // guard
