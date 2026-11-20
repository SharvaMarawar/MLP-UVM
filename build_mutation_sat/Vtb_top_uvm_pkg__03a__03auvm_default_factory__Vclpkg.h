// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_DEFAULT_FACTORY__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_DEFAULT_FACTORY__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "Vtb_top_uvm_pkg.h"
#include "Vtb_top_uvm_pkg__03a__03auvm_default_factory__Vclpkg.h"
class Vtb_top_uvm_pkg__03a__03auvm_component;
class Vtb_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_top_uvm_pkg__03a__03auvm_factory;
class Vtb_top_uvm_pkg__03a__03auvm_factory_override;
class Vtb_top_uvm_pkg__03a__03auvm_object;
class Vtb_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vtb_top_uvm_pkg__03a__03auvm_report_object;
class Vtb_top_uvm_pkg__03a__03auvm_root;


class Vtb_top__Syms;
struct Vtb_top_m_inst_typename_alias_t__struct__0 {
    Vtb_top_m_uvm_factory_type_pair_t__struct__0 __PVT__orig;
    ::std::string __PVT__alias_type_name;
    ::std::string __PVT__full_inst_path;

    bool operator==(const Vtb_top_m_inst_typename_alias_t__struct__0& rhs) const {
        return __PVT__orig == rhs.__PVT__orig
            && __PVT__alias_type_name == rhs.__PVT__alias_type_name
            && __PVT__full_inst_path == rhs.__PVT__full_inst_path;
    }
    bool operator!=(const Vtb_top_m_inst_typename_alias_t__struct__0& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const Vtb_top_m_inst_typename_alias_t__struct__0& rhs) const {
        if (__PVT__orig < rhs.__PVT__orig) return true;
        if (rhs.__PVT__orig < __PVT__orig) return false;
        if (__PVT__alias_type_name < rhs.__PVT__alias_type_name) return true;
        if (rhs.__PVT__alias_type_name < __PVT__alias_type_name) return false;
        if (__PVT__full_inst_path < rhs.__PVT__full_inst_path) return true;
        if (rhs.__PVT__full_inst_path < __PVT__full_inst_path) return false;
        return false;
    }
};
template <>
struct VlIsCustomStruct<Vtb_top_m_inst_typename_alias_t__struct__0> : public std::true_type {};

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_default_factory__Vclpkg final {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*0:0*/ __PVT__m_debug_pass;

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03auvm_default_factory__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_default_factory__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_default_factory__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_default_factory__Vclpkg);

    // INTERNAL METHODS
};

#include "Vtb_top_uvm_pkg__03a__03auvm_factory__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_default_factory : public Vtb_top_uvm_pkg__03a__03auvm_factory {
  public:

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::VlAssocArray<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper>, ::CData/*0:0*/> __PVT__m_types;
    ::VlAssocArray<::std::string, ::CData/*0:0*/> __PVT__m_lookup_strs;
    ::VlQueue<Vtb_top_m_inst_typename_alias_t__struct__0> __PVT__m_inst_aliases;
    ::std::string __Vtask_uvm_report_warning__id_90;
    ::std::string __Vtask_uvm_report_warning__message_91;
    ::std::string __Vtask_uvm_report_warning__filename_93;
    ::std::string __Vtask_uvm_report_warning__context_name_95;
    ::std::string __Vtask_uvm_report_warning__id_98;
    ::std::string __Vtask_uvm_report_warning__message_99;
    ::std::string __Vtask_uvm_report_warning__filename_101;
    ::std::string __Vtask_uvm_report_warning__context_name_103;
    ::std::string __Vtask_uvm_report_warning__id_106;
    ::std::string __Vtask_uvm_report_warning__message_107;
    ::std::string __Vtask_uvm_report_warning__filename_109;
    ::std::string __Vtask_uvm_report_warning__context_name_111;
    ::std::string __Vtask_uvm_report_info__id_114;
    ::std::string __Vtask_uvm_report_info__message_115;
    ::std::string __Vtask_uvm_report_info__filename_117;
    ::std::string __Vtask_uvm_report_info__context_name_119;
    ::std::string __Vtask_uvm_report_info__id_122;
    ::std::string __Vtask_uvm_report_info__message_123;
    ::std::string __Vtask_uvm_report_info__filename_125;
    ::std::string __Vtask_uvm_report_info__context_name_127;
    ::std::string __Vtask_uvm_report_info__id_130;
    ::std::string __Vtask_uvm_report_info__message_131;
    ::std::string __Vtask_uvm_report_info__filename_133;
    ::std::string __Vtask_uvm_report_info__context_name_135;
    ::std::string __Vtask_uvm_report_warning__id_138;
    ::std::string __Vtask_uvm_report_warning__message_139;
    ::std::string __Vtask_uvm_report_warning__filename_141;
    ::std::string __Vtask_uvm_report_warning__context_name_143;
    ::std::string __Vtask_uvm_report_warning__id_146;
    ::std::string __Vtask_uvm_report_warning__message_147;
    ::std::string __Vtask_uvm_report_warning__filename_149;
    ::std::string __Vtask_uvm_report_warning__context_name_151;
    ::std::string __Vtask_uvm_report_warning__id_154;
    ::std::string __Vtask_uvm_report_warning__message_155;
    ::std::string __Vtask_uvm_report_warning__filename_157;
    ::std::string __Vtask_uvm_report_warning__context_name_159;
    ::std::string __Vtask_uvm_report_error__id_162;
    ::std::string __Vtask_uvm_report_error__message_163;
    ::std::string __Vtask_uvm_report_error__filename_165;
    ::std::string __Vtask_uvm_report_error__context_name_167;
    ::std::string __Vtask_uvm_report_error__id_170;
    ::std::string __Vtask_uvm_report_error__message_171;
    ::std::string __Vtask_uvm_report_error__filename_173;
    ::std::string __Vtask_uvm_report_error__context_name_175;
    ::std::string __Vtask_uvm_report_error__id_178;
    ::std::string __Vtask_uvm_report_error__message_179;
    ::std::string __Vtask_uvm_report_error__filename_181;
    ::std::string __Vtask_uvm_report_error__context_name_183;
    ::std::string __Vtask_uvm_report_warning__id_186;
    ::std::string __Vtask_uvm_report_warning__message_187;
    ::std::string __Vtask_uvm_report_warning__filename_189;
    ::std::string __Vtask_uvm_report_warning__context_name_191;
    ::std::string __Vfunc_m_uvm_string_queue_join__Vfuncout_150;
    ::std::string __Vtask_uvm_report_info__id_195;
    ::std::string __Vtask_uvm_report_info__message_196;
    ::std::string __Vtask_uvm_report_info__filename_198;
    ::std::string __Vtask_uvm_report_info__context_name_200;
    ::std::string __Vfunc_uvm_is_match__expr_153;
    ::std::string __Vfunc_uvm_is_match__str_154;
    ::std::string __Vfunc_uvm_re_match__re_157;
    ::std::string __Vfunc_uvm_re_match__str_158;
    ::std::string __Vfunc_uvm_is_match__expr_161;
    ::std::string __Vfunc_uvm_is_match__str_162;
    ::std::string __Vfunc_uvm_re_match__re_165;
    ::std::string __Vfunc_uvm_re_match__str_166;
    ::VlAssocArray<::std::string, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper>> __PVT__m_type_names;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_factory_override>> __PVT__m_type_overrides;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_factory_override>> __PVT__m_inst_overrides;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_factory_override>> __PVT__m_override_info;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_default_factory"; }
    VlClass* clone() const { return new Vtb_top_uvm_pkg__03a__03auvm_default_factory(*this); }
    void __VnoInFunc_check_inst_override_exists(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> original_type, ::std::string original_type_name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> override_type, ::std::string override_type_name, ::std::string full_inst_path, ::CData/*0:0*/ &check_inst_override_exists__Vfuncrtn);
    virtual void __VnoInFunc_create_component_by_name(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string requested_type_name, ::std::string parent_inst_path, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> parent, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> &create_component_by_name__Vfuncrtn);
    virtual void __VnoInFunc_create_component_by_type(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> requested_type, ::std::string parent_inst_path, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> parent, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> &create_component_by_type__Vfuncrtn);
    virtual void __VnoInFunc_create_object_by_type(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> requested_type, ::std::string parent_inst_path, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create_object_by_type__Vfuncrtn);
    virtual void __VnoInFunc_debug_create_by_type(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> requested_type, ::std::string parent_inst_path, ::std::string name);
    virtual void __VnoInFunc_find_override_by_name(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string requested_type_name, ::std::string full_inst_path, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &find_override_by_name__Vfuncrtn);
    virtual void __VnoInFunc_find_override_by_type(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> requested_type, ::std::string full_inst_path, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &find_override_by_type__Vfuncrtn);
    virtual void __VnoInFunc_find_wrapper_by_name(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string type_name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &find_wrapper_by_name__Vfuncrtn);
    virtual void __VnoInFunc_is_type_registered(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> obj, ::CData/*0:0*/ &is_type_registered__Vfuncrtn);
    void __VnoInFunc_m_debug_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string requested_type_name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> requested_type, ::std::string parent_inst_path, ::std::string name);
    void __VnoInFunc_m_debug_display(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string requested_type_name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> result, ::std::string full_inst_path);
    void __VnoInFunc_m_find_override_by_type(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> requested_type, ::std::string full_inst_path, ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_factory_override>> &override_info, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &m_find_override_by_type__Vfuncrtn);
    void __VnoInFunc_m_matches_inst_override(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_factory_override> __SYM__override, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> requested_type, ::std::string requested_type_name, ::std::string full_inst_path, ::CData/*0:0*/ &m_matches_inst_override__Vfuncrtn);
    void __VnoInFunc_m_matches_type_override(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_factory_override> __SYM__override, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> requested_type, ::std::string requested_type_name, ::std::string full_inst_path, ::CData/*0:0*/ match_original_type, ::CData/*0:0*/ resolve_null_type_by_inst, ::CData/*0:0*/ &m_matches_type_override__Vfuncrtn);
    void __VnoInFunc_m_matches_type_pair(Vtb_top__Syms* __restrict vlSymsp, Vtb_top_m_uvm_factory_type_pair_t__struct__0 match_type_pair, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> requested_type, ::std::string requested_type_name, ::CData/*0:0*/ &m_matches_type_pair__Vfuncrtn);
    void __VnoInFunc_m_resolve_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string requested_type_name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &m_resolve_type_name__Vfuncrtn);
    void __VnoInFunc_m_resolve_type_name_by_inst(Vtb_top__Syms* __restrict vlSymsp, ::std::string requested_type_name, ::std::string full_inst_path, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &m_resolve_type_name_by_inst__Vfuncrtn);
    virtual void __VnoInFunc_register(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> obj);
    virtual void __VnoInFunc_set_inst_override_by_name(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string original_type_name, ::std::string override_type_name, ::std::string full_inst_path);
    virtual void __VnoInFunc_set_type_alias(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string alias_type_name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> original_type);
    virtual void __VnoInFunc_set_type_override_by_name(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string original_type_name, ::std::string override_type_name, ::CData/*0:0*/ replace);
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_uvm_pkg__03a__03auvm_default_factory() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
    virtual ~Vtb_top_uvm_pkg__03a__03auvm_default_factory();
};


#endif  // guard
