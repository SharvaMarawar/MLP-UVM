// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_VREG_FIELD__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_VREG_FIELD__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pi664dc15a;
class Vtb_top_uvm_pkg__03a__03auvm_comparer;
class Vtb_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_top_uvm_pkg__03a__03auvm_mem;
class Vtb_top_uvm_pkg__03a__03auvm_object;
class Vtb_top_uvm_pkg__03a__03auvm_object_registry__pif56357fd;
class Vtb_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vtb_top_uvm_pkg__03a__03auvm_packer;
class Vtb_top_uvm_pkg__03a__03auvm_printer;
class Vtb_top_uvm_pkg__03a__03auvm_reg_backdoor;
class Vtb_top_uvm_pkg__03a__03auvm_reg_block;
class Vtb_top_uvm_pkg__03a__03auvm_reg_map;
class Vtb_top_uvm_pkg__03a__03auvm_report_object;
class Vtb_top_uvm_pkg__03a__03auvm_root;
class Vtb_top_uvm_pkg__03a__03auvm_sequence_base;
class Vtb_top_uvm_pkg__03a__03auvm_vreg;
class Vtb_top_uvm_pkg__03a__03auvm_vreg_field;
class Vtb_top_uvm_pkg__03a__03auvm_vreg_field_cbs;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_vreg_field__Vclpkg final {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*0:0*/ __PVT__m_register_cb_uvm_vreg_field_cbs;

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03auvm_vreg_field__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_vreg_field__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_vreg_field__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_vreg_field__Vclpkg);

    // INTERNAL METHODS
};

#include "Vtb_top_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_vreg_field : public Vtb_top_uvm_pkg__03a__03auvm_object {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*0:0*/ __PVT__read_in_progress;
    ::CData/*0:0*/ __PVT__write_in_progress;
    ::IData/*31:0*/ __PVT__lsb;
    ::IData/*31:0*/ __PVT__size;
    ::IData/*31:0*/ __PVT__lineno;

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::std::string __PVT__fname;
    ::std::string __Vtask_uvm_report_error__id_3872;
    ::std::string __Vtask_uvm_report_error__message_3873;
    ::std::string __Vtask_uvm_report_error__filename_3875;
    ::std::string __Vtask_uvm_report_error__context_name_3877;
    ::std::string __Vtask_uvm_report_error__id_3881;
    ::std::string __Vtask_uvm_report_error__message_3882;
    ::std::string __Vtask_uvm_report_error__filename_3884;
    ::std::string __Vtask_uvm_report_error__context_name_3886;
    ::std::string __Vtask_uvm_report_warning__id_3890;
    ::std::string __Vtask_uvm_report_warning__message_3891;
    ::std::string __Vtask_uvm_report_warning__filename_3893;
    ::std::string __Vtask_uvm_report_warning__context_name_3895;
    ::std::string __Vtask_uvm_report_error__id_3901;
    ::std::string __Vtask_uvm_report_error__message_3902;
    ::std::string __Vtask_uvm_report_error__filename_3904;
    ::std::string __Vtask_uvm_report_error__context_name_3906;
    ::std::string __Vtask_uvm_report_error__id_3912;
    ::std::string __Vtask_uvm_report_error__message_3913;
    ::std::string __Vtask_uvm_report_error__filename_3915;
    ::std::string __Vtask_uvm_report_error__context_name_3917;
    ::std::string __Vtask_uvm_report_info__id_3922;
    ::std::string __Vtask_uvm_report_info__message_3923;
    ::std::string __Vtask_uvm_report_info__filename_3925;
    ::std::string __Vtask_uvm_report_info__context_name_3927;
    ::std::string __Vtask_uvm_report_error__id_3931;
    ::std::string __Vtask_uvm_report_error__message_3932;
    ::std::string __Vtask_uvm_report_error__filename_3934;
    ::std::string __Vtask_uvm_report_error__context_name_3936;
    ::std::string __Vtask_uvm_report_info__id_3942;
    ::std::string __Vtask_uvm_report_info__message_3943;
    ::std::string __Vtask_uvm_report_info__filename_3945;
    ::std::string __Vtask_uvm_report_info__context_name_3947;
    ::std::string __Vtask_uvm_report_error__id_3951;
    ::std::string __Vtask_uvm_report_error__message_3952;
    ::std::string __Vtask_uvm_report_error__filename_3954;
    ::std::string __Vtask_uvm_report_error__context_name_3956;
    ::std::string __Vtask_uvm_report_warning__id_3960;
    ::std::string __Vtask_uvm_report_warning__message_3961;
    ::std::string __Vtask_uvm_report_warning__filename_3963;
    ::std::string __Vtask_uvm_report_warning__context_name_3965;
    ::std::string __Vtask_uvm_report_error__id_3971;
    ::std::string __Vtask_uvm_report_error__message_3972;
    ::std::string __Vtask_uvm_report_error__filename_3974;
    ::std::string __Vtask_uvm_report_error__context_name_3976;
    ::std::string __Vtask_uvm_report_error__id_3982;
    ::std::string __Vtask_uvm_report_error__message_3983;
    ::std::string __Vtask_uvm_report_error__filename_3985;
    ::std::string __Vtask_uvm_report_error__context_name_3987;
    ::std::string __Vtask_uvm_report_info__id_3992;
    ::std::string __Vtask_uvm_report_info__message_3993;
    ::std::string __Vtask_uvm_report_info__filename_3995;
    ::std::string __Vtask_uvm_report_info__context_name_3997;
    ::std::string __Vtask_uvm_report_error__id_4001;
    ::std::string __Vtask_uvm_report_error__message_4002;
    ::std::string __Vtask_uvm_report_error__filename_4004;
    ::std::string __Vtask_uvm_report_error__context_name_4006;
    ::std::string __Vtask_uvm_report_info__id_4012;
    ::std::string __Vtask_uvm_report_info__message_4013;
    ::std::string __Vtask_uvm_report_info__filename_4015;
    ::std::string __Vtask_uvm_report_info__context_name_4017;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_vreg> __PVT__parent;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_vreg_field"; }
    VlClass* clone() const { Vtb_top_uvm_pkg__03a__03auvm_vreg_field* const clonep = new Vtb_top_uvm_pkg__03a__03auvm_vreg_field(*this); clonep->__VnoInFunc___VupdateRandVars();
        return clonep; }
    virtual void __VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc___VupdateRandVars();
    virtual void __VnoInFunc_clone(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn);
    virtual void __VnoInFunc_convert2string(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string &convert2string__Vfuncrtn);
    virtual void __VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_do_compare(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> rhs, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_comparer> comparer, ::CData/*0:0*/ &do_compare__Vfuncrtn);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_pack(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_packer> packer);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_do_unpack(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_packer> packer);
    virtual void __VnoInFunc_get_access(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::std::string &get_access__Vfuncrtn);
    virtual void __VnoInFunc_get_full_name(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_full_name__Vfuncrtn);
    void __VnoInFunc_get_lsb_pos_in_register(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_lsb_pos_in_register__Vfuncrtn);
    virtual void __VnoInFunc_get_n_bits(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_n_bits__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_parent(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_vreg> &get_parent__Vfuncrtn);
    virtual void __VnoInFunc_get_register(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_vreg> &get_register__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_peek(Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ idx, ::IData/*31:0*/ &status, ::QData/*63:0*/ &value, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> parent, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> extension, ::std::string fname, ::IData/*31:0*/ lineno);
    virtual VlCoroutine __VnoInFunc_poke(Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ idx, ::IData/*31:0*/ &status, ::QData/*63:0*/ value, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> parent, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> extension, ::std::string fname, ::IData/*31:0*/ lineno);
    virtual void __VnoInFunc_post_read(Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ idx, ::QData/*63:0*/ &rdat, ::IData/*31:0*/ &path, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> &map, ::IData/*31:0*/ &status);
    virtual void __VnoInFunc_post_write(Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ idx, ::QData/*63:0*/ wdat, ::IData/*31:0*/ path, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::IData/*31:0*/ &status);
    virtual void __VnoInFunc_pre_read(Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ idx, ::IData/*31:0*/ &path, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> &map);
    virtual void __VnoInFunc_pre_write(Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ idx, ::QData/*63:0*/ &wdat, ::IData/*31:0*/ &path, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> &map);
    virtual void __VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_read(Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ idx, ::IData/*31:0*/ &status, ::QData/*63:0*/ &value, ::IData/*31:0*/ path, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> parent, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> extension, ::std::string fname, ::IData/*31:0*/ lineno);
    virtual VlCoroutine __VnoInFunc_write(Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ idx, ::IData/*31:0*/ &status, ::QData/*63:0*/ value, ::IData/*31:0*/ path, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> parent, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> extension, ::std::string fname, ::IData/*31:0*/ lineno);
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_uvm_pkg__03a__03auvm_vreg_field() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_top_uvm_pkg__03a__03auvm_vreg_field();
};


#endif  // guard
