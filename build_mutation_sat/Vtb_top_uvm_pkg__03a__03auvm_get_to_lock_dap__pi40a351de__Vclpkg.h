// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_GET_TO_LOCK_DAP__PI40A351DE__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_GET_TO_LOCK_DAP__PI40A351DE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pi40a351de;
class Vtb_top_uvm_pkg__03a__03auvm_object;
class Vtb_top_uvm_pkg__03a__03auvm_object_registry__pid4fbee54;
class Vtb_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vtb_top_uvm_pkg__03a__03auvm_packer;
class Vtb_top_uvm_pkg__03a__03auvm_printer;
class Vtb_top_uvm_pkg__03a__03auvm_report_object;
class Vtb_top_uvm_pkg__03a__03auvm_root;
class Vtb_top_uvm_pkg__03a__03auvm_set_get_dap_base__pi3031eef4;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pi40a351de__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pi40a351de__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pi40a351de__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pi40a351de__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pi40a351de__Vclpkg);

    // INTERNAL METHODS
};

#include "Vtb_top_uvm_pkg__03a__03auvm_set_get_dap_base__pi3031eef4__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pi40a351de : public Vtb_top_uvm_pkg__03a__03auvm_set_get_dap_base__pi3031eef4 {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*0:0*/ __PVT__m_value;
    ::CData/*0:0*/ __PVT__m_locked;

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::std::string __Vtask_uvm_report_error__id_2675;
    ::std::string __Vtask_uvm_report_error__message_2676;
    ::std::string __Vtask_uvm_report_error__filename_2678;
    ::std::string __Vtask_uvm_report_error__context_name_2680;
    ::std::string __Vtask_uvm_report_error__id_2684;
    ::std::string __Vtask_uvm_report_error__message_2685;
    ::std::string __Vtask_uvm_report_error__filename_2687;
    ::std::string __Vtask_uvm_report_error__context_name_2689;
    ::std::string __Vtask_uvm_report_error__id_2693;
    ::std::string __Vtask_uvm_report_error__message_2694;
    ::std::string __Vtask_uvm_report_error__filename_2696;
    ::std::string __Vtask_uvm_report_error__context_name_2698;
    ::std::string __Vtask_uvm_report_error__id_2702;
    ::std::string __Vtask_uvm_report_error__message_2703;
    ::std::string __Vtask_uvm_report_error__filename_2705;
    ::std::string __Vtask_uvm_report_error__context_name_2707;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_get_to_lock_dap__pi40a351de"; }
    VlClass* clone() const { Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pi40a351de* const clonep = new Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pi40a351de(*this); clonep->__VnoInFunc___VupdateRandVars();
        return clonep; }
    virtual void __VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc___VupdateRandVars();
    virtual void __VnoInFunc_convert2string(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string &convert2string__Vfuncrtn);
    virtual void __VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_pack(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_packer> packer);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_do_unpack(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_packer> packer);
    virtual void __VnoInFunc_get(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &get__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_set(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ value);
    virtual void __VnoInFunc_try_get(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &value, ::CData/*0:0*/ &try_get__Vfuncrtn);
    virtual void __VnoInFunc_try_set(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ value, ::CData/*0:0*/ &try_set__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pi40a351de() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pi40a351de();
};


#endif  // guard
