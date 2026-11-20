// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_REG_FIELD__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_REG_FIELD__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pif43a684e;
class Vtb_top_uvm_pkg__03a__03auvm_comparer;
class Vtb_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_top_uvm_pkg__03a__03auvm_object;
class Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi24f2ccc5;
class Vtb_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vtb_top_uvm_pkg__03a__03auvm_packer;
class Vtb_top_uvm_pkg__03a__03auvm_printer;
class Vtb_top_uvm_pkg__03a__03auvm_reg;
class Vtb_top_uvm_pkg__03a__03auvm_reg_adapter;
class Vtb_top_uvm_pkg__03a__03auvm_reg_backdoor;
class Vtb_top_uvm_pkg__03a__03auvm_reg_block;
class Vtb_top_uvm_pkg__03a__03auvm_reg_cbs;
class Vtb_top_uvm_pkg__03a__03auvm_reg_field;
class Vtb_top_uvm_pkg__03a__03auvm_reg_frontdoor;
class Vtb_top_uvm_pkg__03a__03auvm_reg_item;
class Vtb_top_uvm_pkg__03a__03auvm_reg_map;
class Vtb_top_uvm_pkg__03a__03auvm_reg_map_info;
class Vtb_top_uvm_pkg__03a__03auvm_report_object;
class Vtb_top_uvm_pkg__03a__03auvm_root;
class Vtb_top_uvm_pkg__03a__03auvm_sequence_base;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_reg_field__Vclpkg final {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*0:0*/ __PVT__m_predefined;
    ::CData/*0:0*/ __PVT__m_register_cb_uvm_reg_cbs;
    ::IData/*31:0*/ __PVT__m_max_size;

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    union {
        struct {
            ::VlAssocArray<::std::string, ::CData/*0:0*/> __PVT__m_policy_names;
            ::VlAssocArray<::std::string, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_field>> __PVT__m_reg_field_registry;
        } __Vnontrivs;
    };

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03auvm_reg_field__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_reg_field__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_reg_field__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_reg_field__Vclpkg);

    // INTERNAL METHODS
    void __VnoInFunc_define_access(Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::CData/*0:0*/ &define_access__Vfuncrtn);
    void __VnoInFunc_m_predefine_policies(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &m_predefine_policies__Vfuncrtn);
};

#include "Vtb_top_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_reg_field : public Vtb_top_uvm_pkg__03a__03auvm_object {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*0:0*/ __PVT__m_volatile;
    ::CData/*0:0*/ __PVT__m_written;
    ::CData/*0:0*/ __PVT__m_read_in_progress;
    ::CData/*0:0*/ __PVT__m_write_in_progress;
    ::CData/*0:0*/ __PVT__m_individually_accessible;
    ::IData/*31:0*/ __PVT__m_lsb;
    ::IData/*31:0*/ __PVT__m_size;
    ::IData/*31:0*/ __PVT__m_lineno;
    ::IData/*31:0*/ __PVT__m_cover_on;
    ::IData/*31:0*/ __PVT__m_check;
    ::QData/*63:0*/ __PVT__value;
    ::QData/*63:0*/ __PVT__m_mirrored;
    ::QData/*63:0*/ __PVT__m_desired;

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::VlAssocArray<::std::string, ::QData/*63:0*/> __PVT__m_reset;
    ::std::string __PVT__m_access;
    ::std::string __PVT__m_fname;
    ::std::string __Vtask_uvm_report_error__id_3614;
    ::std::string __Vtask_uvm_report_error__message_3615;
    ::std::string __Vtask_uvm_report_error__filename_3617;
    ::std::string __Vtask_uvm_report_error__context_name_3619;
    ::std::string __Vtask_uvm_report_error__id_3623;
    ::std::string __Vtask_uvm_report_error__message_3624;
    ::std::string __Vtask_uvm_report_error__filename_3626;
    ::std::string __Vtask_uvm_report_error__context_name_3628;
    ::std::string __Vtask_uvm_report_warning__id_3632;
    ::std::string __Vtask_uvm_report_warning__message_3633;
    ::std::string __Vtask_uvm_report_warning__filename_3635;
    ::std::string __Vtask_uvm_report_warning__context_name_3637;
    ::std::string __Vtask_uvm_report_warning__id_3644;
    ::std::string __Vtask_uvm_report_warning__message_3645;
    ::std::string __Vtask_uvm_report_warning__filename_3647;
    ::std::string __Vtask_uvm_report_warning__context_name_3649;
    ::std::string __Vtask_uvm_report_warning__id_3653;
    ::std::string __Vtask_uvm_report_warning__message_3654;
    ::std::string __Vtask_uvm_report_warning__filename_3656;
    ::std::string __Vtask_uvm_report_warning__context_name_3658;
    ::std::string __Vtask_uvm_report_warning__id_3662;
    ::std::string __Vtask_uvm_report_warning__message_3663;
    ::std::string __Vtask_uvm_report_warning__filename_3665;
    ::std::string __Vtask_uvm_report_warning__context_name_3667;
    ::std::string __Vtask_uvm_report_warning__id_3671;
    ::std::string __Vtask_uvm_report_warning__message_3672;
    ::std::string __Vtask_uvm_report_warning__filename_3674;
    ::std::string __Vtask_uvm_report_warning__context_name_3676;
    ::std::string __Vtask_uvm_report_warning__id_3680;
    ::std::string __Vtask_uvm_report_warning__message_3681;
    ::std::string __Vtask_uvm_report_warning__filename_3683;
    ::std::string __Vtask_uvm_report_warning__context_name_3685;
    ::std::string __Vtask_uvm_report_error__id_3689;
    ::std::string __Vtask_uvm_report_error__message_3690;
    ::std::string __Vtask_uvm_report_error__filename_3692;
    ::std::string __Vtask_uvm_report_error__context_name_3694;
    ::std::string __Vtask_uvm_report_error__id_3698;
    ::std::string __Vtask_uvm_report_error__message_3699;
    ::std::string __Vtask_uvm_report_error__filename_3701;
    ::std::string __Vtask_uvm_report_error__context_name_3703;
    ::std::string __Vtask_uvm_report_warning__id_3707;
    ::std::string __Vtask_uvm_report_warning__message_3708;
    ::std::string __Vtask_uvm_report_warning__filename_3710;
    ::std::string __Vtask_uvm_report_warning__context_name_3712;
    ::std::string __Vtask_uvm_report_warning__id_3716;
    ::std::string __Vtask_uvm_report_warning__message_3717;
    ::std::string __Vtask_uvm_report_warning__filename_3719;
    ::std::string __Vtask_uvm_report_warning__context_name_3721;
    ::std::string __Vtask_uvm_report_warning__id_3725;
    ::std::string __Vtask_uvm_report_warning__message_3726;
    ::std::string __Vtask_uvm_report_warning__filename_3728;
    ::std::string __Vtask_uvm_report_warning__context_name_3730;
    ::std::string __Vtask_uvm_report_warning__id_3734;
    ::std::string __Vtask_uvm_report_warning__message_3735;
    ::std::string __Vtask_uvm_report_warning__filename_3737;
    ::std::string __Vtask_uvm_report_warning__context_name_3739;
    ::std::string __Vtask_uvm_report_warning__id_3743;
    ::std::string __Vtask_uvm_report_warning__message_3744;
    ::std::string __Vtask_uvm_report_warning__filename_3746;
    ::std::string __Vtask_uvm_report_warning__context_name_3748;
    ::std::string __Vtask_uvm_report_warning__id_3752;
    ::std::string __Vtask_uvm_report_warning__message_3753;
    ::std::string __Vtask_uvm_report_warning__filename_3755;
    ::std::string __Vtask_uvm_report_warning__context_name_3757;
    ::std::string __Vtask_uvm_report_warning__id_3761;
    ::std::string __Vtask_uvm_report_warning__message_3762;
    ::std::string __Vtask_uvm_report_warning__filename_3764;
    ::std::string __Vtask_uvm_report_warning__context_name_3766;
    ::std::string __Vtask_uvm_report_warning__id_3777;
    ::std::string __Vtask_uvm_report_warning__message_3778;
    ::std::string __Vtask_uvm_report_warning__filename_3780;
    ::std::string __Vtask_uvm_report_warning__context_name_3782;
    ::std::string __Vtask_uvm_report_warning__id_3786;
    ::std::string __Vtask_uvm_report_warning__message_3787;
    ::std::string __Vtask_uvm_report_warning__filename_3789;
    ::std::string __Vtask_uvm_report_warning__context_name_3791;
    ::std::string __Vtask_uvm_report_error__id_3797;
    ::std::string __Vtask_uvm_report_error__message_3798;
    ::std::string __Vtask_uvm_report_error__filename_3800;
    ::std::string __Vtask_uvm_report_error__context_name_3802;
    ::std::string __Vtask_uvm_report_warning__id_3811;
    ::std::string __Vtask_uvm_report_warning__message_3812;
    ::std::string __Vtask_uvm_report_warning__filename_3814;
    ::std::string __Vtask_uvm_report_warning__context_name_3816;
    ::std::string __Vtask_uvm_report_warning__id_3820;
    ::std::string __Vtask_uvm_report_warning__message_3821;
    ::std::string __Vtask_uvm_report_warning__filename_3823;
    ::std::string __Vtask_uvm_report_warning__context_name_3825;
    ::std::string __Vtask_uvm_report_warning__id_3829;
    ::std::string __Vtask_uvm_report_warning__message_3830;
    ::std::string __Vtask_uvm_report_warning__filename_3832;
    ::std::string __Vtask_uvm_report_warning__context_name_3834;
    ::std::string __Vtask_uvm_report_warning__id_3838;
    ::std::string __Vtask_uvm_report_warning__message_3839;
    ::std::string __Vtask_uvm_report_warning__filename_3841;
    ::std::string __Vtask_uvm_report_warning__context_name_3843;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg> __PVT__m_parent;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_reg_field"; }
    VlClass* clone() const { Vtb_top_uvm_pkg__03a__03auvm_reg_field* const clonep = new Vtb_top_uvm_pkg__03a__03auvm_reg_field(*this); clonep->__VnoInFunc___VupdateRandVars();
        return clonep; }
    void __VnoInFunc_Xcheck_accessX(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map_info> &map_info, ::CData/*0:0*/ &Xcheck_accessX__Vfuncrtn);
    void __VnoInFunc_XpredictX(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ cur_val, ::QData/*63:0*/ wr_val, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::QData/*63:0*/ &XpredictX__Vfuncrtn);
    void __VnoInFunc_XupdateX(Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ &XupdateX__Vfuncrtn);
    virtual void __VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc___VupdateRandVars();
    virtual void __VnoInFunc_clone(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn);
    void __VnoInFunc_configure(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg> parent, ::IData/*31:0*/ size, ::IData/*31:0*/ lsb_pos, ::std::string access, ::CData/*0:0*/ __SYM__volatile, ::QData/*63:0*/ reset, ::CData/*0:0*/ has_reset, ::CData/*0:0*/ is_rand, ::CData/*0:0*/ individually_accessible);
    virtual void __VnoInFunc_convert2string(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string &convert2string__Vfuncrtn);
    virtual void __VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_do_compare(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> rhs, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_comparer> comparer, ::CData/*0:0*/ &do_compare__Vfuncrtn);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_pack(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_packer> packer);
    virtual void __VnoInFunc_do_predict(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw, ::IData/*31:0*/ kind, ::CData/*7:0*/ be);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer> printer);
    virtual VlCoroutine __VnoInFunc_do_read(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_do_unpack(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_packer> packer);
    virtual VlCoroutine __VnoInFunc_do_write(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_get(Vtb_top__Syms* __restrict vlSymsp, ::std::string fname, ::IData/*31:0*/ lineno, ::QData/*63:0*/ &get__Vfuncrtn);
    virtual void __VnoInFunc_get_access(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::std::string &get_access__Vfuncrtn);
    void __VnoInFunc_get_compare(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_compare__Vfuncrtn);
    virtual void __VnoInFunc_get_full_name(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_full_name__Vfuncrtn);
    void __VnoInFunc_get_lsb_pos(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_lsb_pos__Vfuncrtn);
    virtual void __VnoInFunc_get_mirrored_value(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string fname, ::IData/*31:0*/ lineno, ::QData/*63:0*/ &get_mirrored_value__Vfuncrtn);
    virtual void __VnoInFunc_get_n_bits(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_n_bits__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_parent(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg> &get_parent__Vfuncrtn);
    virtual void __VnoInFunc_get_register(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg> &get_register__Vfuncrtn);
    virtual void __VnoInFunc_get_reset(Vtb_top__Syms* __restrict vlSymsp, ::std::string kind, ::QData/*63:0*/ &get_reset__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_has_reset(Vtb_top__Syms* __restrict vlSymsp, ::std::string kind, ::CData/*0:0*/ __SYM__delete, ::CData/*0:0*/ &has_reset__Vfuncrtn);
    void __VnoInFunc_is_indv_accessible(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ path, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> local_map, ::CData/*0:0*/ &is_indv_accessible__Vfuncrtn);
    void __VnoInFunc_is_known_access(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::CData/*0:0*/ &is_known_access__Vfuncrtn);
    void __VnoInFunc_is_volatile(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &is_volatile__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_mirror(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &status, ::IData/*31:0*/ check, ::IData/*31:0*/ path, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> parent, ::IData/*31:0*/ prior, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> extension, ::std::string fname, ::IData/*31:0*/ lineno);
    virtual void __VnoInFunc_needs_update(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &needs_update__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_peek(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &status, ::QData/*63:0*/ &value, ::std::string kind, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> parent, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> extension, ::std::string fname, ::IData/*31:0*/ lineno);
    virtual VlCoroutine __VnoInFunc_poke(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &status, ::QData/*63:0*/ value, ::std::string kind, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> parent, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> extension, ::std::string fname, ::IData/*31:0*/ lineno);
    void __VnoInFunc_post_randomize(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_post_read(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_post_write(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw);
    void __VnoInFunc_pre_randomize(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_pre_read(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_pre_write(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_read(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &status, ::QData/*63:0*/ &value, ::IData/*31:0*/ path, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> parent, ::IData/*31:0*/ prior, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> extension, ::std::string fname, ::IData/*31:0*/ lineno);
    virtual void __VnoInFunc_reset(Vtb_top__Syms* __restrict vlSymsp, ::std::string kind);
    virtual void __VnoInFunc_set(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ value, ::std::string fname, ::IData/*31:0*/ lineno);
    void __VnoInFunc_set_compare(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ check);
    void __VnoInFunc_set_rand_mode(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ rand_mode);
    virtual void __VnoInFunc_set_reset(Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ value, ::std::string kind);
    void __VnoInFunc_uvm_reg_field_valid_setup_constraint(Vtb_top__Syms* __restrict vlSymsp);
    virtual VlCoroutine __VnoInFunc_write(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &status, ::QData/*63:0*/ value, ::IData/*31:0*/ path, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> parent, ::IData/*31:0*/ prior, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> extension, ::std::string fname, ::IData/*31:0*/ lineno);
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_uvm_pkg__03a__03auvm_reg_field() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_top_uvm_pkg__03a__03auvm_reg_field();
};


#endif  // guard
