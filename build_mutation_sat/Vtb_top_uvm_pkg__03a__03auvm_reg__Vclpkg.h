// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_REG__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_REG__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "Vtb_top_uvm_pkg.h"
class Vtb_top_std__03a__03aprocess;
class Vtb_top_std__03a__03asemaphore;
class Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pif1ab9aeb;
class Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pif43a684e;
class Vtb_top_uvm_pkg__03a__03auvm_comparer;
class Vtb_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_top_uvm_pkg__03a__03auvm_hdl_path_concat;
class Vtb_top_uvm_pkg__03a__03auvm_object;
class Vtb_top_uvm_pkg__03a__03auvm_object_string_pool__pi90f94445;
class Vtb_top_uvm_pkg__03a__03auvm_packer;
class Vtb_top_uvm_pkg__03a__03auvm_printer;
class Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4ea7d76f;
class Vtb_top_uvm_pkg__03a__03auvm_reg;
class Vtb_top_uvm_pkg__03a__03auvm_reg_backdoor;
class Vtb_top_uvm_pkg__03a__03auvm_reg_block;
class Vtb_top_uvm_pkg__03a__03auvm_reg_cbs;
class Vtb_top_uvm_pkg__03a__03auvm_reg_err_service;
class Vtb_top_uvm_pkg__03a__03auvm_reg_field;
class Vtb_top_uvm_pkg__03a__03auvm_reg_file;
class Vtb_top_uvm_pkg__03a__03auvm_reg_frontdoor;
class Vtb_top_uvm_pkg__03a__03auvm_reg_item;
class Vtb_top_uvm_pkg__03a__03auvm_reg_map;
class Vtb_top_uvm_pkg__03a__03auvm_reg_map_info;
class Vtb_top_uvm_pkg__03a__03auvm_report_object;
class Vtb_top_uvm_pkg__03a__03auvm_root;
class Vtb_top_uvm_pkg__03a__03auvm_sequence_base;
class Vtb_top_uvm_pkg__03a__03auvm_sequencer_base;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_reg__Vclpkg final {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*0:0*/ __PVT__m_register_cb_uvm_reg_cbs;
    ::IData/*31:0*/ __PVT__m_max_size;

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    union {
        struct {
            ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_err_service> __PVT__m_err_service;
            ::VlAssocArray<::std::string, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg>> __PVT__m_reg_registry;
        } __Vnontrivs;
    };

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03auvm_reg__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_reg__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_reg__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_reg__Vclpkg);

    // INTERNAL METHODS
};

#include "Vtb_top_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_reg : public Vtb_top_uvm_pkg__03a__03auvm_object {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*0:0*/ __PVT__m_locked;
    ::CData/*0:0*/ __PVT__m_read_in_progress;
    ::CData/*0:0*/ __PVT__m_write_in_progress;
    ::CData/*0:0*/ __PVT__m_update_in_progress;
    ::CData/*0:0*/ __PVT__m_is_busy;
    ::CData/*0:0*/ __PVT__m_is_locked_by_field;
    ::IData/*31:0*/ __PVT__m_n_bits;
    ::IData/*31:0*/ __PVT__m_n_used_bits;
    ::IData/*31:0*/ __PVT__m_has_cover;
    ::IData/*31:0*/ __PVT__m_cover_on;
    ::IData/*31:0*/ __PVT__m_lineno;
    ::IData/*31:0*/ __PVT__m_atomic_cnt;

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::VlAssocArray<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map>, ::CData/*0:0*/> __PVT__m_maps;
    ::std::string __PVT__m_fname;
    ::std::string __Vtask_uvm_report_error__id_4039;
    ::std::string __Vtask_uvm_report_error__message_4040;
    ::std::string __Vtask_uvm_report_error__filename_4042;
    ::std::string __Vtask_uvm_report_error__context_name_4044;
    ::std::string __Vtask_uvm_report_error__id_4048;
    ::std::string __Vtask_uvm_report_error__message_4049;
    ::std::string __Vtask_uvm_report_error__filename_4051;
    ::std::string __Vtask_uvm_report_error__context_name_4053;
    ::std::string __Vtask_uvm_report_error__id_4059;
    ::std::string __Vtask_uvm_report_error__message_4060;
    ::std::string __Vtask_uvm_report_error__filename_4062;
    ::std::string __Vtask_uvm_report_error__context_name_4064;
    ::std::string __Vtask_uvm_report_error__id_4068;
    ::std::string __Vtask_uvm_report_error__message_4069;
    ::std::string __Vtask_uvm_report_error__filename_4071;
    ::std::string __Vtask_uvm_report_error__context_name_4073;
    ::std::string __Vtask_uvm_report_error__id_4077;
    ::std::string __Vtask_uvm_report_error__message_4078;
    ::std::string __Vtask_uvm_report_error__filename_4080;
    ::std::string __Vtask_uvm_report_error__context_name_4082;
    ::std::string __Vtask_uvm_report_error__id_4086;
    ::std::string __Vtask_uvm_report_error__message_4087;
    ::std::string __Vtask_uvm_report_error__filename_4089;
    ::std::string __Vtask_uvm_report_error__context_name_4091;
    ::std::string __Vtask_uvm_report_error__id_4095;
    ::std::string __Vtask_uvm_report_error__message_4096;
    ::std::string __Vtask_uvm_report_error__filename_4098;
    ::std::string __Vtask_uvm_report_error__context_name_4100;
    ::std::string __Vtask_uvm_report_warning__id_4104;
    ::std::string __Vtask_uvm_report_warning__message_4105;
    ::std::string __Vtask_uvm_report_warning__filename_4107;
    ::std::string __Vtask_uvm_report_warning__context_name_4109;
    ::std::string __Vtask_uvm_report_warning__id_4113;
    ::std::string __Vtask_uvm_report_warning__message_4114;
    ::std::string __Vtask_uvm_report_warning__filename_4116;
    ::std::string __Vtask_uvm_report_warning__context_name_4118;
    ::std::string __Vtask_uvm_report_warning__id_4122;
    ::std::string __Vtask_uvm_report_warning__message_4123;
    ::std::string __Vtask_uvm_report_warning__filename_4125;
    ::std::string __Vtask_uvm_report_warning__context_name_4127;
    ::std::string __Vtask_uvm_report_warning__id_4131;
    ::std::string __Vtask_uvm_report_warning__message_4132;
    ::std::string __Vtask_uvm_report_warning__filename_4134;
    ::std::string __Vtask_uvm_report_warning__context_name_4136;
    ::std::string __Vtask_uvm_report_warning__id_4142;
    ::std::string __Vtask_uvm_report_warning__message_4143;
    ::std::string __Vtask_uvm_report_warning__filename_4145;
    ::std::string __Vtask_uvm_report_warning__context_name_4147;
    ::std::string __Vtask_uvm_report_warning__id_4151;
    ::std::string __Vtask_uvm_report_warning__message_4152;
    ::std::string __Vtask_uvm_report_warning__filename_4154;
    ::std::string __Vtask_uvm_report_warning__context_name_4156;
    ::std::string __Vfunc_uvm_report_enabled__id_1655;
    ::std::string __Vtask_uvm_report_info__id_4165;
    ::std::string __Vtask_uvm_report_info__message_4166;
    ::std::string __Vtask_uvm_report_info__filename_4168;
    ::std::string __Vtask_uvm_report_info__context_name_4170;
    ::std::string __Vfunc_uvm_report_enabled__id_1661;
    ::std::string __Vtask_uvm_report_info__id_4179;
    ::std::string __Vtask_uvm_report_info__message_4180;
    ::std::string __Vtask_uvm_report_info__filename_4182;
    ::std::string __Vtask_uvm_report_info__context_name_4184;
    ::std::string __Vtask_uvm_report_warning__id_4188;
    ::std::string __Vtask_uvm_report_warning__message_4189;
    ::std::string __Vtask_uvm_report_warning__filename_4191;
    ::std::string __Vtask_uvm_report_warning__context_name_4193;
    ::std::string __Vtask_uvm_report_error__id_4197;
    ::std::string __Vtask_uvm_report_error__message_4198;
    ::std::string __Vtask_uvm_report_error__filename_4200;
    ::std::string __Vtask_uvm_report_error__context_name_4202;
    ::std::string __Vtask_uvm_report_error__id_4206;
    ::std::string __Vtask_uvm_report_error__message_4207;
    ::std::string __Vtask_uvm_report_error__filename_4209;
    ::std::string __Vtask_uvm_report_error__context_name_4211;
    ::std::string __Vtask_uvm_report_error__id_4215;
    ::std::string __Vtask_uvm_report_error__message_4216;
    ::std::string __Vtask_uvm_report_error__filename_4218;
    ::std::string __Vtask_uvm_report_error__context_name_4220;
    ::std::string __Vtask_uvm_report_info__id_4224;
    ::std::string __Vtask_uvm_report_info__message_4225;
    ::std::string __Vtask_uvm_report_info__filename_4227;
    ::std::string __Vtask_uvm_report_info__context_name_4229;
    ::std::string __Vtask_uvm_report_info__id_4233;
    ::std::string __Vtask_uvm_report_info__message_4234;
    ::std::string __Vtask_uvm_report_info__filename_4236;
    ::std::string __Vtask_uvm_report_info__context_name_4238;
    ::std::string __Vfunc_uvm_hdl_concat2string__image_1689;
    ::std::string __Vfunc_uvm_hdl_concat2string__image_1694;
    ::std::string __Vtask_uvm_report_error__id_4242;
    ::std::string __Vtask_uvm_report_error__message_4243;
    ::std::string __Vtask_uvm_report_error__filename_4245;
    ::std::string __Vtask_uvm_report_error__context_name_4247;
    ::std::string __Vtask_uvm_report_info__id_4251;
    ::std::string __Vtask_uvm_report_info__message_4252;
    ::std::string __Vtask_uvm_report_info__filename_4254;
    ::std::string __Vtask_uvm_report_info__context_name_4256;
    ::std::string __Vtask_uvm_report_error__id_4260;
    ::std::string __Vtask_uvm_report_error__message_4261;
    ::std::string __Vtask_uvm_report_error__filename_4263;
    ::std::string __Vtask_uvm_report_error__context_name_4265;
    ::std::string __Vtask_uvm_report_info__id_4269;
    ::std::string __Vtask_uvm_report_info__message_4270;
    ::std::string __Vtask_uvm_report_info__filename_4272;
    ::std::string __Vtask_uvm_report_info__context_name_4274;
    ::std::string __Vtask_uvm_report_error__id_4278;
    ::std::string __Vtask_uvm_report_error__message_4279;
    ::std::string __Vtask_uvm_report_error__filename_4281;
    ::std::string __Vtask_uvm_report_error__context_name_4283;
    ::std::string __Vtask_uvm_report_info__id_4287;
    ::std::string __Vtask_uvm_report_info__message_4288;
    ::std::string __Vtask_uvm_report_info__filename_4290;
    ::std::string __Vtask_uvm_report_info__context_name_4292;
    ::std::string __Vtask_uvm_report_error__id_4299;
    ::std::string __Vtask_uvm_report_error__message_4300;
    ::std::string __Vtask_uvm_report_error__filename_4302;
    ::std::string __Vtask_uvm_report_error__context_name_4304;
    ::std::string __Vtask_uvm_report_warning__id_4311;
    ::std::string __Vtask_uvm_report_warning__message_4312;
    ::std::string __Vtask_uvm_report_warning__filename_4314;
    ::std::string __Vtask_uvm_report_warning__context_name_4316;
    ::std::string __Vtask_uvm_report_warning__id_4320;
    ::std::string __Vtask_uvm_report_warning__message_4321;
    ::std::string __Vtask_uvm_report_warning__filename_4323;
    ::std::string __Vtask_uvm_report_warning__context_name_4325;
    ::std::string __Vtask_uvm_report_warning__id_4329;
    ::std::string __Vtask_uvm_report_warning__message_4330;
    ::std::string __Vtask_uvm_report_warning__filename_4332;
    ::std::string __Vtask_uvm_report_warning__context_name_4334;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_block> __PVT__m_parent;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_file> __PVT__m_regfile_parent;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_field>> __PVT__m_fields;
    ::VlClassRef<Vtb_top_std__03a__03asemaphore> __PVT__m_atomic;
    ::VlClassRef<Vtb_top_std__03a__03aprocess> __PVT__m_process;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_backdoor> __PVT__m_backdoor;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_string_pool__pi90f94445> __PVT__m_hdl_paths_pool;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_reg"; }
    VlClass* clone() const { Vtb_top_uvm_pkg__03a__03auvm_reg* const clonep = new Vtb_top_uvm_pkg__03a__03auvm_reg(*this); clonep->__VnoInFunc___VupdateRandVars();
        return clonep; }
    VlCoroutine __VnoInFunc_XatomicX(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ on);
    void __VnoInFunc_Xcheck_accessX(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map_info> &map_info, ::CData/*0:0*/ &Xcheck_accessX__Vfuncrtn);
    void __VnoInFunc_Xget_fields_accessX(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::std::string &Xget_fields_accessX__Vfuncrtn);
    VlCoroutine __VnoInFunc_XreadX(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &status, ::QData/*63:0*/ &value, ::IData/*31:0*/ path, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> parent, ::IData/*31:0*/ prior, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> extension, ::std::string fname, ::IData/*31:0*/ lineno);
    void __VnoInFunc_Xset_busyX(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ busy);
    virtual void __VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc___VupdateRandVars();
    virtual void __VnoInFunc_add_field(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_field> field);
    virtual void __VnoInFunc_add_map(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map);
    virtual void __VnoInFunc_backdoor_read(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_backdoor_read_func(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw, ::IData/*31:0*/ &backdoor_read_func__Vfuncrtn);
    virtual void __VnoInFunc_backdoor_write(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_clone(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn);
    virtual void __VnoInFunc_convert2string(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string &convert2string__Vfuncrtn);
    void __VnoInFunc_do_check(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ expected, ::QData/*63:0*/ actual, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::CData/*0:0*/ &do_check__Vfuncrtn);
    virtual void __VnoInFunc_do_compare(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> rhs, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_comparer> comparer, ::CData/*0:0*/ &do_compare__Vfuncrtn);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_pack(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_packer> packer);
    virtual void __VnoInFunc_do_predict(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw, ::IData/*31:0*/ kind, ::CData/*7:0*/ be);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer> printer);
    virtual VlCoroutine __VnoInFunc_do_read(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_do_unpack(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_packer> packer);
    virtual VlCoroutine __VnoInFunc_do_write(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_get(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string fname, ::IData/*31:0*/ lineno, ::QData/*63:0*/ &get__Vfuncrtn);
    virtual void __VnoInFunc_get_address(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::QData/*63:0*/ &get_address__Vfuncrtn);
    virtual void __VnoInFunc_get_addresses(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::VlQueue<::QData/*63:0*/> &addr, ::IData/*31:0*/ &get_addresses__Vfuncrtn);
    void __VnoInFunc_get_backdoor(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ inherited, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_backdoor> &get_backdoor__Vfuncrtn);
    virtual void __VnoInFunc_get_block(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_block> &get_block__Vfuncrtn);
    void __VnoInFunc_get_default_map(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> &get_default_map__Vfuncrtn);
    virtual void __VnoInFunc_get_fields(Vtb_top__Syms* __restrict vlSymsp, ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_field>> &fields);
    void __VnoInFunc_get_frontdoor(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_frontdoor> &get_frontdoor__Vfuncrtn);
    void __VnoInFunc_get_full_hdl_path(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_hdl_path_concat>> &paths, ::std::string kind, ::std::string separator);
    virtual void __VnoInFunc_get_full_name(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_full_name__Vfuncrtn);
    virtual void __VnoInFunc_get_local_map(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> &get_local_map__Vfuncrtn);
    virtual void __VnoInFunc_get_maps(Vtb_top__Syms* __restrict vlSymsp, ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map>> &maps);
    virtual void __VnoInFunc_get_mirrored_value(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string fname, ::IData/*31:0*/ lineno, ::QData/*63:0*/ &get_mirrored_value__Vfuncrtn);
    virtual void __VnoInFunc_get_n_bits(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_n_bits__Vfuncrtn);
    virtual void __VnoInFunc_get_n_bytes(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_n_bytes__Vfuncrtn);
    virtual void __VnoInFunc_get_n_maps(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_n_maps__Vfuncrtn);
    virtual void __VnoInFunc_get_offset(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::QData/*63:0*/ &get_offset__Vfuncrtn);
    virtual void __VnoInFunc_get_parent(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_block> &get_parent__Vfuncrtn);
    virtual void __VnoInFunc_get_reset(Vtb_top__Syms* __restrict vlSymsp, ::std::string kind, ::QData/*63:0*/ &get_reset__Vfuncrtn);
    virtual void __VnoInFunc_get_rights(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::std::string &get_rights__Vfuncrtn);
    void __VnoInFunc_has_hdl_path(Vtb_top__Syms* __restrict vlSymsp, ::std::string kind, ::CData/*0:0*/ &has_hdl_path__Vfuncrtn);
    virtual void __VnoInFunc_has_reset(Vtb_top__Syms* __restrict vlSymsp, ::std::string kind, ::CData/*0:0*/ __SYM__delete, ::CData/*0:0*/ &has_reset__Vfuncrtn);
    void __VnoInFunc_is_busy(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &is_busy__Vfuncrtn);
    void __VnoInFunc_is_in_map(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::CData/*0:0*/ &is_in_map__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_mirror(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &status, ::IData/*31:0*/ check, ::IData/*31:0*/ path, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> parent, ::IData/*31:0*/ prior, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> extension, ::std::string fname, ::IData/*31:0*/ lineno);
    virtual void __VnoInFunc_needs_update(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &needs_update__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_peek(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &status, ::QData/*63:0*/ &value, ::std::string kind, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> parent, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> extension, ::std::string fname, ::IData/*31:0*/ lineno);
    virtual VlCoroutine __VnoInFunc_poke(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &status, ::QData/*63:0*/ value, ::std::string kind, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> parent, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> extension, ::std::string fname, ::IData/*31:0*/ lineno);
    virtual void __VnoInFunc_post_read(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_post_write(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_pre_read(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_pre_write(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_read(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &status, ::QData/*63:0*/ &value, ::IData/*31:0*/ path, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> parent, ::IData/*31:0*/ prior, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> extension, ::std::string fname, ::IData/*31:0*/ lineno);
    virtual void __VnoInFunc_reset(Vtb_top__Syms* __restrict vlSymsp, ::std::string kind);
    virtual void __VnoInFunc_sample(Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ data, ::QData/*63:0*/ byte_en, ::CData/*0:0*/ is_read, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map);
    virtual void __VnoInFunc_sample_values(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_set(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ value, ::std::string fname, ::IData/*31:0*/ lineno);
    virtual void __VnoInFunc_set_coverage(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ is_on, ::IData/*31:0*/ &set_coverage__Vfuncrtn);
    void __VnoInFunc_set_frontdoor(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_frontdoor> ftdr, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::std::string fname, ::IData/*31:0*/ lineno);
    virtual void __VnoInFunc_set_offset(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::QData/*63:0*/ offset, ::CData/*0:0*/ unmapped);
    virtual void __VnoInFunc_set_reset(Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ value, ::std::string kind);
    virtual void __VnoInFunc_unregister(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map);
    virtual VlCoroutine __VnoInFunc_update(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &status, ::IData/*31:0*/ path, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> parent, ::IData/*31:0*/ prior, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> extension, ::std::string fname, ::IData/*31:0*/ lineno);
    virtual VlCoroutine __VnoInFunc_write(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &status, ::QData/*63:0*/ value, ::IData/*31:0*/ path, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> parent, ::IData/*31:0*/ prior, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> extension, ::std::string fname, ::IData/*31:0*/ lineno);
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_uvm_pkg__03a__03auvm_reg() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::IData/*31:0*/ n_bits, ::IData/*31:0*/ has_coverage);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_top_uvm_pkg__03a__03auvm_reg();
};


#endif  // guard
