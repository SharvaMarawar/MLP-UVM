// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_default_factory::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    Vtb_top_uvm_pkg__03a__03auvm_factory::init(vlProcess, vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_factory::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void Vtb_top_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_register(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_register\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_92;
    __Vtask_uvm_report_warning__verbosity_92 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_94;
    __Vtask_uvm_report_warning__line_94 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_96;
    __Vtask_uvm_report_warning__report_enabled_checked_96 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_135;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_97;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_100;
    __Vtask_uvm_report_warning__verbosity_100 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_102;
    __Vtask_uvm_report_warning__line_102 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_104;
    __Vtask_uvm_report_warning__report_enabled_checked_104 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_136;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_105;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefCall_13__m_matches_type_pair;
    ::std::string __VlefCall_12__get_type_name;
    ::CData/*0:0*/ __VlefCall_11__m_matches_type_pair;
    ::std::string __VlefCall_10__get_type_name;
    ::std::string __VlefCall_9__get_type_name;
    ::CData/*0:0*/ __VlefLogAnd_8;
    ::std::string __VlefCall_7__get_type_name;
    ::std::string __VlefCall_6__get_type_name;
    ::std::string __VlefCall_5__get_type_name;
    ::std::string __VlefCall_4__get_type_name;
    ::std::string __VlefCall_3__get_type_name;
    ::CData/*0:0*/ __VlefLogAnd_2;
    ::std::string __VlefCall_1__get_type_name;
    ::std::string __VlefCall_0__get_type_name;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_factory_override>> unnamedblk18__DOT__overrides;
    ::IData/*31:0*/ unnamedblk18__DOT__unnamedblk19__DOT__index;
    unnamedblk18__DOT__unnamedblk19__DOT__index = 0;
    ::IData/*31:0*/ unnamedblk18__DOT__unnamedblk19__DOT__index__Vloopsize;
    unnamedblk18__DOT__unnamedblk19__DOT__index__Vloopsize = 0;
    if (VL_UNLIKELY(((VlNull{} == obj)))) {
        vlSymsp->vlInst.TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "NULLWR"s, "Attempting to register a null object with the factory"s, 0U, ""s, 0U, ""s, 0U);
    }
    VL_NULL_CHECK(obj, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 1063)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_0__get_type_name);
    __VlefLogAnd_2 = (""s != __VlefCall_0__get_type_name);
    if (__VlefLogAnd_2) {
        VL_NULL_CHECK(obj, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 1063)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_1__get_type_name);
        __VlefLogAnd_2 = ("<unknown>"s != __VlefCall_1__get_type_name);
    }
    if (__VlefLogAnd_2) {
        VL_NULL_CHECK(obj, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 1064)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_3__get_type_name);
        if (VL_UNLIKELY(((0U != this->__PVT__m_type_names.exists(__VlefCall_3__get_type_name))))) {
            VL_NULL_CHECK(obj, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 1066)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_4__get_type_name);
            __Vtask_uvm_report_warning__report_enabled_checked_96 = 0U;
            this->__Vtask_uvm_report_warning__context_name_95 = ""s;
            __Vtask_uvm_report_warning__line_94 = 0U;
            this->__Vtask_uvm_report_warning__filename_93 = ""s;
            __Vtask_uvm_report_warning__verbosity_92 = 0U;
            this->__Vtask_uvm_report_warning__message_91 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN("Type name '"s, __VlefCall_4__get_type_name), "' already registered with factory. No string-based lookup "s), "support for multiple types with the same type name."s));
            this->__Vtask_uvm_report_warning__id_90 = "TPRGED"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_135);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__Vfuncout_135;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_97);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__Vfuncout_97;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_90, this->__Vtask_uvm_report_warning__message_91, __Vtask_uvm_report_warning__verbosity_92, this->__Vtask_uvm_report_warning__filename_93, __Vtask_uvm_report_warning__line_94, this->__Vtask_uvm_report_warning__context_name_95, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_96));
        } else {
            VL_NULL_CHECK(obj, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 1073)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_5__get_type_name);
            this->__PVT__m_type_names.atWrite(__VlefCall_5__get_type_name) 
                = obj;
        }
    }
    if ((0U != this->__PVT__m_types.exists(obj))) {
        VL_NULL_CHECK(obj, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 1079)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_6__get_type_name);
        __VlefLogAnd_8 = (""s != __VlefCall_6__get_type_name);
        if (__VlefLogAnd_8) {
            VL_NULL_CHECK(obj, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 1079)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_7__get_type_name);
            __VlefLogAnd_8 = ("<unknown>"s != __VlefCall_7__get_type_name);
        }
        if (VL_UNLIKELY((__VlefLogAnd_8))) {
            VL_NULL_CHECK(obj, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 1081)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_9__get_type_name);
            __Vtask_uvm_report_warning__report_enabled_checked_104 = 0U;
            this->__Vtask_uvm_report_warning__context_name_103 = ""s;
            __Vtask_uvm_report_warning__line_102 = 0U;
            this->__Vtask_uvm_report_warning__filename_101 = ""s;
            __Vtask_uvm_report_warning__verbosity_100 = 0U;
            this->__Vtask_uvm_report_warning__message_99 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN("Object type '"s, __VlefCall_9__get_type_name), "' already registered with factory. "s));
            this->__Vtask_uvm_report_warning__id_98 = "TPRGED"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_136);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__Vfuncout_136;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_105);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__Vfuncout_105;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_98, this->__Vtask_uvm_report_warning__message_99, __Vtask_uvm_report_warning__verbosity_100, this->__Vtask_uvm_report_warning__filename_101, __Vtask_uvm_report_warning__line_102, this->__Vtask_uvm_report_warning__context_name_103, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_104));
        }
    } else {
        unnamedblk18__DOT__overrides.clear();
        this->__PVT__m_types.atWrite(obj) = 1U;
        unnamedblk18__DOT__overrides = ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_factory_override>>{
            this->__PVT__m_type_overrides,
            this->__PVT__m_inst_overrides
        };
        unnamedblk18__DOT__unnamedblk19__DOT__index = 0U;
        while (VL_LTS_III(32, unnamedblk18__DOT__unnamedblk19__DOT__index, unnamedblk18__DOT__overrides.size())) {
            unnamedblk18__DOT__unnamedblk19__DOT__index__Vloopsize 
                = unnamedblk18__DOT__overrides.size();
            VL_NULL_CHECK(obj, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 1097)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_10__get_type_name);
            this->__VnoInFunc_m_matches_type_pair(vlSymsp, VL_NULL_CHECK(unnamedblk18__DOT__overrides.at(unnamedblk18__DOT__unnamedblk19__DOT__index), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 1095)
                                                  ->__PVT__orig, VlNull{}, 
                                                  VL_CVT_PACK_STR_NN(__VlefCall_10__get_type_name), __VlefCall_11__m_matches_type_pair);
            if (__VlefCall_11__m_matches_type_pair) {
                VL_NULL_CHECK(unnamedblk18__DOT__overrides.atWriteAppend(unnamedblk18__DOT__unnamedblk19__DOT__index), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 1098)->__PVT__orig.__PVT__m_type 
                    = obj;
            }
            VL_NULL_CHECK(obj, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 1102)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_12__get_type_name);
            this->__VnoInFunc_m_matches_type_pair(vlSymsp, VL_NULL_CHECK(unnamedblk18__DOT__overrides.at(unnamedblk18__DOT__unnamedblk19__DOT__index), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 1100)
                                                  ->__PVT__ovrd, VlNull{}, 
                                                  VL_CVT_PACK_STR_NN(__VlefCall_12__get_type_name), __VlefCall_13__m_matches_type_pair);
            if (__VlefCall_13__m_matches_type_pair) {
                VL_NULL_CHECK(unnamedblk18__DOT__overrides.atWriteAppend(unnamedblk18__DOT__unnamedblk19__DOT__index), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 1103)->__PVT__ovrd.__PVT__m_type 
                    = obj;
            }
            if ((unnamedblk18__DOT__unnamedblk19__DOT__index__Vloopsize 
                 <= unnamedblk18__DOT__overrides.size())) {
                unnamedblk18__DOT__unnamedblk19__DOT__index 
                    = ((::IData)(1U) + unnamedblk18__DOT__unnamedblk19__DOT__index);
            }
        }
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_set_type_override_by_name(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string original_type_name, ::std::string override_type_name, ::CData/*0:0*/ replace) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_set_type_override_by_name\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_108;
    __Vtask_uvm_report_warning__verbosity_108 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_110;
    __Vtask_uvm_report_warning__line_110 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_112;
    __Vtask_uvm_report_warning__report_enabled_checked_112 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_137;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_113;
    ::IData/*31:0*/ __Vtask_uvm_report_info__verbosity_116;
    __Vtask_uvm_report_info__verbosity_116 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__line_118;
    __Vtask_uvm_report_info__line_118 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_info__report_enabled_checked_120;
    __Vtask_uvm_report_info__report_enabled_checked_120 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_138;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_121;
    ::IData/*31:0*/ __Vtask_uvm_report_info__verbosity_124;
    __Vtask_uvm_report_info__verbosity_124 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__line_126;
    __Vtask_uvm_report_info__line_126 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_info__report_enabled_checked_128;
    __Vtask_uvm_report_info__report_enabled_checked_128 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_139;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_129;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefCall_0__m_matches_type_override;
    ::IData/*31:0*/ unnamedblk23__DOT__index;
    unnamedblk23__DOT__index = 0;
    ::IData/*31:0*/ unnamedblk23__DOT__index__Vloopsize;
    unnamedblk23__DOT__index__Vloopsize = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_factory_override> unnamedblk24__DOT__override;
    ::CData/*0:0*/ replaced;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> original_type;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> override_type;
    {
        replaced = 0U;
        if ((0U != this->__PVT__m_type_names.exists(original_type_name))) {
            original_type = this->__PVT__m_type_names
                .at(original_type_name);
        }
        if ((0U != this->__PVT__m_type_names.exists(override_type_name))) {
            override_type = this->__PVT__m_type_names
                .at(override_type_name);
        }
        if (VL_UNLIKELY(((original_type_name == override_type_name)))) {
            __Vtask_uvm_report_warning__report_enabled_checked_112 = 0U;
            this->__Vtask_uvm_report_warning__context_name_111 = ""s;
            __Vtask_uvm_report_warning__line_110 = 0U;
            this->__Vtask_uvm_report_warning__filename_109 = ""s;
            __Vtask_uvm_report_warning__verbosity_108 = 0U;
            this->__Vtask_uvm_report_warning__message_107 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN("Requested and actual type name  arguments are identical: "s, original_type_name), ". Ignoring this override."s));
            this->__Vtask_uvm_report_warning__id_106 = "TYPDUP"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_137);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__Vfuncout_137;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_113);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__Vfuncout_113;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_106, this->__Vtask_uvm_report_warning__message_107, __Vtask_uvm_report_warning__verbosity_108, this->__Vtask_uvm_report_warning__filename_109, __Vtask_uvm_report_warning__line_110, this->__Vtask_uvm_report_warning__context_name_111, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_112));
            goto __Vlabel0;
        }
        {
            unnamedblk23__DOT__index = 0U;
            while (VL_LTS_III(32, unnamedblk23__DOT__index, this->__PVT__m_type_overrides.size())) {
                unnamedblk23__DOT__index__Vloopsize 
                    = this->__PVT__m_type_overrides.size();
                this->__VnoInFunc_m_matches_type_override(vlSymsp, this->__PVT__m_type_overrides.at(unnamedblk23__DOT__index), original_type, original_type_name, ""s, 1U, 0U, __VlefCall_0__m_matches_type_override);
                if (VL_UNLIKELY((__VlefCall_0__m_matches_type_override))) {
                    if (VL_UNLIKELY(((1U & (~ (::IData)(replace)))))) {
                        __Vtask_uvm_report_info__report_enabled_checked_120 = 0U;
                        this->__Vtask_uvm_report_info__context_name_119 = ""s;
                        __Vtask_uvm_report_info__line_118 = 0U;
                        this->__Vtask_uvm_report_info__filename_117 = ""s;
                        __Vtask_uvm_report_info__verbosity_116 = 0x000000c8U;
                        this->__Vtask_uvm_report_info__message_115 
                            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                                VL_CONCATN_NNN(
                                                                               VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Original type '"s, original_type_name), "'/'"s), VL_NULL_CHECK(this->__PVT__m_type_overrides.at(unnamedblk23__DOT__index), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 1244)
                                                                                ->__PVT__orig
                                                                                .__PVT__m_type_name), "' already registered to produce '"s), VL_NULL_CHECK(this->__PVT__m_type_overrides.at(unnamedblk23__DOT__index), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 1245)
                                                                               ->__PVT__ovrd
                                                                               .__PVT__m_type_name), "'.  Set 'replace' argument to replace the existing entry."s));
                        this->__Vtask_uvm_report_info__id_114 = "TPREGD"s;
                        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_138);
                        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs 
                            = __Vfunc_get__Vfuncout_138;
                        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 147)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_121);
                        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top 
                            = __Vtask_get_root__Vfuncout_121;
                        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 148)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__id_114, this->__Vtask_uvm_report_info__message_115, __Vtask_uvm_report_info__verbosity_116, this->__Vtask_uvm_report_info__filename_117, __Vtask_uvm_report_info__line_118, this->__Vtask_uvm_report_info__context_name_119, (::IData)(__Vtask_uvm_report_info__report_enabled_checked_120));
                        goto __Vlabel0;
                    }
                    __Vtask_uvm_report_info__report_enabled_checked_128 = 0U;
                    this->__Vtask_uvm_report_info__context_name_127 = ""s;
                    __Vtask_uvm_report_info__line_126 = 0U;
                    this->__Vtask_uvm_report_info__filename_125 = ""s;
                    __Vtask_uvm_report_info__verbosity_124 = 0x000000c8U;
                    this->__Vtask_uvm_report_info__message_123 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN(
                                                                           VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Original object type '"s, original_type_name), "'/'"s), VL_NULL_CHECK(this->__PVT__m_type_overrides.at(unnamedblk23__DOT__index), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 1249)
                                                                                ->__PVT__orig
                                                                                .__PVT__m_type_name), "' already registered to produce '"s), VL_NULL_CHECK(this->__PVT__m_type_overrides.at(unnamedblk23__DOT__index), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 1250)
                                                                                ->__PVT__ovrd
                                                                                .__PVT__m_type_name), "'.  Replacing with override to produce type '"s), override_type_name), "'."s));
                    this->__Vtask_uvm_report_info__id_122 = "TPREGR"s;
                    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_139);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs 
                        = __Vfunc_get__Vfuncout_139;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 147)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_129);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top 
                        = __Vtask_get_root__Vfuncout_129;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 148)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__id_122, this->__Vtask_uvm_report_info__message_123, __Vtask_uvm_report_info__verbosity_124, this->__Vtask_uvm_report_info__filename_125, __Vtask_uvm_report_info__line_126, this->__Vtask_uvm_report_info__context_name_127, (::IData)(__Vtask_uvm_report_info__report_enabled_checked_128));
                    replaced = 1U;
                    VL_NULL_CHECK(this->__PVT__m_type_overrides.atWriteAppend(unnamedblk23__DOT__index), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 1253)->__PVT__ovrd.__PVT__m_type 
                        = override_type;
                    VL_NULL_CHECK(this->__PVT__m_type_overrides.atWriteAppend(unnamedblk23__DOT__index), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 1254)->__PVT__ovrd.__PVT__m_type_name 
                        = override_type_name;
                    VL_NULL_CHECK(this->__PVT__m_type_overrides.atWriteAppend(unnamedblk23__DOT__index), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 1255)->__PVT__replace 
                        = replace;
                } else if (((VlNull{} == VL_NULL_CHECK(this->__PVT__m_type_overrides.at(unnamedblk23__DOT__index), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 1257)
                             ->__PVT__orig.__PVT__m_type) 
                            || (VlNull{} == original_type))) {
                    goto __Vlabel1;
                }
                if ((unnamedblk23__DOT__index__Vloopsize 
                     <= this->__PVT__m_type_overrides.size())) {
                    unnamedblk23__DOT__index = ((::IData)(1U) 
                                                + unnamedblk23__DOT__index);
                }
            }
            __Vlabel1: ;
        }
        if ((VlNull{} == original_type)) {
            this->__PVT__m_lookup_strs.atWrite(original_type_name) = 1U;
        }
        if ((1U & (~ (::IData)(replaced)))) {
            unnamedblk24__DOT__override = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_factory_override, vlSymsp, ""s, original_type_name, original_type, override_type, override_type_name, (::IData)(replace));
            this->__PVT__m_type_overrides.push_front(unnamedblk24__DOT__override);
        }
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_check_inst_override_exists(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> original_type, ::std::string original_type_name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> override_type, ::std::string override_type_name, ::std::string full_inst_path, ::CData/*0:0*/ &check_inst_override_exists__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_check_inst_override_exists\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_info__verbosity_132;
    __Vtask_uvm_report_info__verbosity_132 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__line_134;
    __Vtask_uvm_report_info__line_134 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_info__report_enabled_checked_136;
    __Vtask_uvm_report_info__report_enabled_checked_136 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_140;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_137;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ unnamedblk25__DOT__i;
    unnamedblk25__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk25__DOT__i__Vloopsize;
    unnamedblk25__DOT__i__Vloopsize = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_factory_override> __SYM__override;
    {
        check_inst_override_exists__Vfuncrtn = 0U;
        unnamedblk25__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk25__DOT__i, this->__PVT__m_inst_overrides.size())) {
            unnamedblk25__DOT__i__Vloopsize = this->__PVT__m_inst_overrides.size();
            __SYM__override = this->__PVT__m_inst_overrides.at(unnamedblk25__DOT__i);
            if (VL_UNLIKELY(((((((VL_NULL_CHECK(__SYM__override, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 1300)
                                  ->__PVT__full_inst_path 
                                  == full_inst_path) 
                                 && (VL_NULL_CHECK(__SYM__override, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 1301)
                                     ->__PVT__orig.__PVT__m_type 
                                     == original_type)) 
                                && (VL_NULL_CHECK(__SYM__override, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 1302)
                                    ->__PVT__orig.__PVT__m_type_name 
                                    == original_type_name)) 
                               && (VL_NULL_CHECK(__SYM__override, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 1303)
                                   ->__PVT__ovrd.__PVT__m_type 
                                   == override_type)) 
                              && (VL_NULL_CHECK(__SYM__override, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 1304)
                                  ->__PVT__ovrd.__PVT__m_type_name 
                                  == override_type_name))))) {
                __Vtask_uvm_report_info__report_enabled_checked_136 = 0U;
                this->__Vtask_uvm_report_info__context_name_135 = ""s;
                __Vtask_uvm_report_info__line_134 = 0U;
                this->__Vtask_uvm_report_info__filename_133 = ""s;
                __Vtask_uvm_report_info__verbosity_132 = 0x0000012cU;
                this->__Vtask_uvm_report_info__message_131 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Instance override for '"s, original_type_name), "' already exists: override type '"s), override_type_name), "' with full_inst_path '"s), full_inst_path), "'"s));
                this->__Vtask_uvm_report_info__id_130 = "DUPOVRD"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_140);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_140;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 147)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_137);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_137;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 148)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__id_130, this->__Vtask_uvm_report_info__message_131, __Vtask_uvm_report_info__verbosity_132, this->__Vtask_uvm_report_info__filename_133, __Vtask_uvm_report_info__line_134, this->__Vtask_uvm_report_info__context_name_135, (::IData)(__Vtask_uvm_report_info__report_enabled_checked_136));
                check_inst_override_exists__Vfuncrtn = 1U;
                goto __Vlabel0;
            }
            if ((unnamedblk25__DOT__i__Vloopsize <= this->__PVT__m_inst_overrides.size())) {
                unnamedblk25__DOT__i = ((::IData)(1U) 
                                        + unnamedblk25__DOT__i);
            }
        }
        check_inst_override_exists__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_set_inst_override_by_name(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string original_type_name, ::std::string override_type_name, ::std::string full_inst_path) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_set_inst_override_by_name\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefCall_0__check_inst_override_exists;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_factory_override> __SYM__override;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> original_type;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> override_type;
    {
        if ((0U != this->__PVT__m_type_names.exists(original_type_name))) {
            original_type = this->__PVT__m_type_names
                .at(original_type_name);
        }
        if ((0U != this->__PVT__m_type_names.exists(override_type_name))) {
            override_type = this->__PVT__m_type_names
                .at(override_type_name);
        }
        if ((VlNull{} == original_type)) {
            this->__PVT__m_lookup_strs.atWrite(original_type_name) = 1U;
        }
        __SYM__override = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_factory_override, vlSymsp, full_inst_path, original_type_name, original_type, override_type, override_type_name, 0U);
        this->__VnoInFunc_check_inst_override_exists(vlProcess, vlSymsp, original_type, original_type_name, override_type, override_type_name, full_inst_path, __VlefCall_0__check_inst_override_exists);
        if (__VlefCall_0__check_inst_override_exists) {
            goto __Vlabel0;
        }
        this->__PVT__m_inst_overrides.push_back(__SYM__override);
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_set_type_alias(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string alias_type_name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> original_type) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_set_type_alias\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_140;
    __Vtask_uvm_report_warning__verbosity_140 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_142;
    __Vtask_uvm_report_warning__line_142 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_144;
    __Vtask_uvm_report_warning__report_enabled_checked_144 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_141;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_145;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_3__get_type_name;
    ::CData/*0:0*/ __VlefCall_2__m_matches_type_pair;
    ::CData/*0:0*/ __VlefCall_1__m_matches_type_pair;
    ::CData/*0:0*/ __VlefCall_0__is_type_registered;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_factory_override>> unnamedblk26__DOT__overrides;
    ::IData/*31:0*/ unnamedblk26__DOT__unnamedblk27__DOT__index;
    unnamedblk26__DOT__unnamedblk27__DOT__index = 0;
    ::IData/*31:0*/ unnamedblk26__DOT__unnamedblk27__DOT__index__Vloopsize;
    unnamedblk26__DOT__unnamedblk27__DOT__index__Vloopsize = 0;
    this->__VnoInFunc_is_type_registered(vlSymsp, original_type, __VlefCall_0__is_type_registered);
    if (VL_LIKELY((__VlefCall_0__is_type_registered))) {
        if ((1U & (~ (0U != this->__PVT__m_type_names.exists(alias_type_name))))) {
            unnamedblk26__DOT__overrides.clear();
            this->__PVT__m_type_names.atWrite(alias_type_name) 
                = original_type;
            unnamedblk26__DOT__overrides = ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_factory_override>>{
                this->__PVT__m_type_overrides,
                this->__PVT__m_inst_overrides
            };
            unnamedblk26__DOT__unnamedblk27__DOT__index = 0U;
            while (VL_LTS_III(32, unnamedblk26__DOT__unnamedblk27__DOT__index, unnamedblk26__DOT__overrides.size())) {
                unnamedblk26__DOT__unnamedblk27__DOT__index__Vloopsize 
                    = unnamedblk26__DOT__overrides.size();
                this->__VnoInFunc_m_matches_type_pair(vlSymsp, VL_NULL_CHECK(unnamedblk26__DOT__overrides.at(unnamedblk26__DOT__unnamedblk27__DOT__index), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 1441)
                                                      ->__PVT__orig, VlNull{}, alias_type_name, __VlefCall_1__m_matches_type_pair);
                if (__VlefCall_1__m_matches_type_pair) {
                    VL_NULL_CHECK(unnamedblk26__DOT__overrides.atWriteAppend(unnamedblk26__DOT__unnamedblk27__DOT__index), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 1444)->__PVT__orig.__PVT__m_type 
                        = original_type;
                }
                this->__VnoInFunc_m_matches_type_pair(vlSymsp, VL_NULL_CHECK(unnamedblk26__DOT__overrides.at(unnamedblk26__DOT__unnamedblk27__DOT__index), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 1446)
                                                      ->__PVT__ovrd, VlNull{}, alias_type_name, __VlefCall_2__m_matches_type_pair);
                if (__VlefCall_2__m_matches_type_pair) {
                    VL_NULL_CHECK(unnamedblk26__DOT__overrides.atWriteAppend(unnamedblk26__DOT__unnamedblk27__DOT__index), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 1449)->__PVT__ovrd.__PVT__m_type 
                        = original_type;
                }
                if ((unnamedblk26__DOT__unnamedblk27__DOT__index__Vloopsize 
                     <= unnamedblk26__DOT__overrides.size())) {
                    unnamedblk26__DOT__unnamedblk27__DOT__index 
                        = ((::IData)(1U) + unnamedblk26__DOT__unnamedblk27__DOT__index);
                }
            }
        }
    } else {
        VL_NULL_CHECK(original_type, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 1430)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_3__get_type_name);
        __Vtask_uvm_report_warning__report_enabled_checked_144 = 0U;
        this->__Vtask_uvm_report_warning__context_name_143 = ""s;
        __Vtask_uvm_report_warning__line_142 = 0U;
        this->__Vtask_uvm_report_warning__filename_141 = ""s;
        __Vtask_uvm_report_warning__verbosity_140 = 0U;
        this->__Vtask_uvm_report_warning__message_139 
            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_CONCATN_NNN("Cannot define alias of type '"s, __VlefCall_3__get_type_name), "' because it is not registered with the factory."s));
        this->__Vtask_uvm_report_warning__id_138 = "BDTYP"s;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_141);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__Vfuncout_141;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_145);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__Vfuncout_145;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_138, this->__Vtask_uvm_report_warning__message_139, __Vtask_uvm_report_warning__verbosity_140, this->__Vtask_uvm_report_warning__filename_141, __Vtask_uvm_report_warning__line_142, this->__Vtask_uvm_report_warning__context_name_143, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_144));
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_create_object_by_type(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> requested_type, ::std::string parent_inst_path, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create_object_by_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_create_object_by_type\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string full_inst_path;
    full_inst_path = ((""s == parent_inst_path) ? name
                       : ((""s != name) ? VL_CONCATN_NNN(
                                                         VL_CONCATN_NNN(parent_inst_path, "."s), name)
                           : parent_inst_path));
    this->__VnoInFunc_find_override_by_type(vlProcess, vlSymsp, requested_type, full_inst_path, requested_type);
    VL_NULL_CHECK(requested_type, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 1558)->__VnoInFunc_create_object(vlProcess, vlSymsp, name, create_object_by_type__Vfuncrtn);
}

void Vtb_top_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_is_type_registered(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> obj, ::CData/*0:0*/ &is_type_registered__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_is_type_registered\n"); );
    // Body
    is_type_registered__Vfuncrtn = (1U & this->__PVT__m_types.exists(obj));
}

void Vtb_top_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_create_component_by_name(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string requested_type_name, ::std::string parent_inst_path, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> parent, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> &create_component_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_create_component_by_name\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_148;
    __Vtask_uvm_report_warning__verbosity_148 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_150;
    __Vtask_uvm_report_warning__line_150 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_152;
    __Vtask_uvm_report_warning__report_enabled_checked_152 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_142;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_153;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> wrapper;
    ::std::string inst_path;
    {
        inst_path = ""s;
        inst_path = ((""s == parent_inst_path) ? name
                      : ((""s != name) ? VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(parent_inst_path, "."s), name)
                          : parent_inst_path));
        this->__PVT__m_override_info.clear();
        this->__VnoInFunc_find_override_by_name(vlProcess, vlSymsp, requested_type_name, inst_path, wrapper);
        if ((VlNull{} == wrapper)) {
            if (VL_UNLIKELY(((1U & (~ (0U != this->__PVT__m_type_names.exists(requested_type_name))))))) {
                __Vtask_uvm_report_warning__report_enabled_checked_152 = 0U;
                this->__Vtask_uvm_report_warning__context_name_151 = ""s;
                __Vtask_uvm_report_warning__line_150 = 0U;
                this->__Vtask_uvm_report_warning__filename_149 = ""s;
                __Vtask_uvm_report_warning__verbosity_148 = 0U;
                this->__Vtask_uvm_report_warning__message_147 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("Cannot create a component of type '"s, requested_type_name), "' because it is not registered with the factory."s));
                this->__Vtask_uvm_report_warning__id_146 = "BDTYP"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_142);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_142;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_153);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_153;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_146, this->__Vtask_uvm_report_warning__message_147, __Vtask_uvm_report_warning__verbosity_148, this->__Vtask_uvm_report_warning__filename_149, __Vtask_uvm_report_warning__line_150, this->__Vtask_uvm_report_warning__context_name_151, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_152));
                create_component_by_name__Vfuncrtn = VlNull{};
                goto __Vlabel0;
            }
            wrapper = this->__PVT__m_type_names.at(requested_type_name);
        }
        VL_NULL_CHECK(wrapper, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 1617)->__VnoInFunc_create_component(vlProcess, vlSymsp, name, parent, create_component_by_name__Vfuncrtn);
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_create_component_by_type(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> requested_type, ::std::string parent_inst_path, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> parent, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> &create_component_by_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_create_component_by_type\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string full_inst_path;
    full_inst_path = ((""s == parent_inst_path) ? name
                       : ((""s != name) ? VL_CONCATN_NNN(
                                                         VL_CONCATN_NNN(parent_inst_path, "."s), name)
                           : parent_inst_path));
    this->__VnoInFunc_find_override_by_type(vlProcess, vlSymsp, requested_type, full_inst_path, requested_type);
    VL_NULL_CHECK(requested_type, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 1649)->__VnoInFunc_create_component(vlProcess, vlSymsp, name, parent, create_component_by_type__Vfuncrtn);
}

void Vtb_top_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_find_wrapper_by_name(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string type_name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &find_wrapper_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_find_wrapper_by_name\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_156;
    __Vtask_uvm_report_warning__verbosity_156 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_158;
    __Vtask_uvm_report_warning__line_158 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_160;
    __Vtask_uvm_report_warning__report_enabled_checked_160 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_143;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_161;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> wrapper;
    {
        this->__VnoInFunc_m_resolve_type_name(vlSymsp, type_name, wrapper);
        if ((VlNull{} != wrapper)) {
            find_wrapper_by_name__Vfuncrtn = wrapper;
            goto __Vlabel0;
        }
        __Vtask_uvm_report_warning__report_enabled_checked_160 = 0U;
        this->__Vtask_uvm_report_warning__context_name_159 = ""s;
        __Vtask_uvm_report_warning__line_158 = 0U;
        this->__Vtask_uvm_report_warning__filename_157 = ""s;
        __Vtask_uvm_report_warning__verbosity_156 = 0U;
        this->__Vtask_uvm_report_warning__message_155 
            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_CONCATN_NNN("find_wrapper_by_name: Type name '"s, type_name), "' not registered with the factory."s));
        this->__Vtask_uvm_report_warning__id_154 = "UnknownTypeName"s;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_143);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__Vfuncout_143;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_161);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__Vfuncout_161;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_154, this->__Vtask_uvm_report_warning__message_155, __Vtask_uvm_report_warning__verbosity_156, this->__Vtask_uvm_report_warning__filename_157, __Vtask_uvm_report_warning__line_158, this->__Vtask_uvm_report_warning__context_name_159, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_160));
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_find_override_by_name(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string requested_type_name, ::std::string full_inst_path, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &find_override_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_find_override_by_name\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_164;
    __Vtask_uvm_report_error__verbosity_164 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_166;
    __Vtask_uvm_report_error__line_166 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_168;
    __Vtask_uvm_report_error__report_enabled_checked_168 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_144;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_169;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefCall_2__m_matches_type_override;
    ::CData/*0:0*/ __VlefCall_1__m_matches_type_override;
    ::CData/*0:0*/ __VlefCall_0__m_matches_inst_override;
    ::IData/*31:0*/ unnamedblk28__DOT__i;
    unnamedblk28__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk28__DOT__i__Vloopsize;
    unnamedblk28__DOT__i__Vloopsize = 0;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_factory_override>> unnamedblk29__DOT__matched_overrides;
    ::IData/*31:0*/ unnamedblk29__DOT__unnamedblk30__DOT__index;
    unnamedblk29__DOT__unnamedblk30__DOT__index = 0;
    ::IData/*31:0*/ unnamedblk29__DOT__unnamedblk30__DOT__index__Vloopsize;
    unnamedblk29__DOT__unnamedblk30__DOT__index__Vloopsize = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> unnamedblk31__DOT__override;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> rtype;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_factory_override> lindex;
    {
        this->__VnoInFunc_m_resolve_type_name_by_inst(vlSymsp, requested_type_name, full_inst_path, rtype);
        if ((""s != full_inst_path)) {
            {
                unnamedblk28__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk28__DOT__i, this->__PVT__m_inst_overrides.size())) {
                    unnamedblk28__DOT__i__Vloopsize 
                        = this->__PVT__m_inst_overrides.size();
                    this->__VnoInFunc_m_matches_inst_override(vlSymsp, this->__PVT__m_inst_overrides.at(unnamedblk28__DOT__i), rtype, requested_type_name, full_inst_path, __VlefCall_0__m_matches_inst_override);
                    if (__VlefCall_0__m_matches_inst_override) {
                        this->__PVT__m_override_info.push_back(this->__PVT__m_inst_overrides.at(unnamedblk28__DOT__i));
                        if ((VlNull{} == lindex)) {
                            lindex = this->__PVT__m_inst_overrides.at(unnamedblk28__DOT__i);
                            if ((1U & (~ (::IData)(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_default_factory__Vclpkg.__PVT__m_debug_pass)))) {
                                goto __Vlabel1;
                            }
                        }
                    }
                    if ((unnamedblk28__DOT__i__Vloopsize 
                         <= this->__PVT__m_inst_overrides.size())) {
                        unnamedblk28__DOT__i = ((::IData)(1U) 
                                                + unnamedblk28__DOT__i);
                    }
                }
                __Vlabel1: ;
            }
        }
        if (((VlNull{} == lindex) | (::IData)(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_default_factory__Vclpkg.__PVT__m_debug_pass))) {
            unnamedblk29__DOT__matched_overrides.clear();
            {
                unnamedblk29__DOT__unnamedblk30__DOT__index = 0U;
                while (VL_LTS_III(32, unnamedblk29__DOT__unnamedblk30__DOT__index, this->__PVT__m_type_overrides.size())) {
                    unnamedblk29__DOT__unnamedblk30__DOT__index__Vloopsize 
                        = this->__PVT__m_type_overrides.size();
                    this->__VnoInFunc_m_matches_type_override(vlSymsp, this->__PVT__m_type_overrides.at(unnamedblk29__DOT__unnamedblk30__DOT__index), rtype, requested_type_name, full_inst_path, 1U, 1U, __VlefCall_1__m_matches_type_override);
                    if (__VlefCall_1__m_matches_type_override) {
                        unnamedblk29__DOT__matched_overrides.push_back(this->__PVT__m_type_overrides.at(unnamedblk29__DOT__unnamedblk30__DOT__index));
                        if (((VlNull{} == lindex) || 
                             (1U & (~ VL_NULL_CHECK(lindex, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 1712)
                                    ->__PVT__replace)))) {
                            lindex = this->__PVT__m_type_overrides.at(unnamedblk29__DOT__unnamedblk30__DOT__index);
                            if (((1U & (~ (::IData)(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_default_factory__Vclpkg.__PVT__m_debug_pass))) 
                                 && VL_NULL_CHECK(lindex, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 1719)
                                 ->__PVT__replace)) {
                                goto __Vlabel2;
                            }
                        }
                    }
                    if ((unnamedblk29__DOT__unnamedblk30__DOT__index__Vloopsize 
                         <= this->__PVT__m_type_overrides.size())) {
                        unnamedblk29__DOT__unnamedblk30__DOT__index 
                            = ((::IData)(1U) + unnamedblk29__DOT__unnamedblk30__DOT__index);
                    }
                }
                __Vlabel2: ;
            }
            if ((0U != unnamedblk29__DOT__matched_overrides.size())) {
                if (vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_default_factory__Vclpkg.__PVT__m_debug_pass) {
                    this->__PVT__m_override_info = 
                        ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_factory_override>>{
                        this->__PVT__m_override_info,
                        unnamedblk29__DOT__matched_overrides
                    };
                } else {
                    this->__PVT__m_override_info.push_back(unnamedblk29__DOT__matched_overrides.atBack(0U));
                }
            }
        }
        if ((VlNull{} != lindex)) {
            unnamedblk31__DOT__override = VL_NULL_CHECK(lindex, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 1736)
                ->__PVT__ovrd.__PVT__m_type;
            VL_NULL_CHECK(lindex, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 1738)->__PVT__used 
                = ((::IData)(1U) + VL_NULL_CHECK(lindex, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 1738)
                   ->__PVT__used);
            if (vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_default_factory__Vclpkg.__PVT__m_debug_pass) {
                VL_NULL_CHECK(lindex, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 1740)->__PVT__selected = 1U;
            }
            this->__VnoInFunc_m_matches_type_override(vlSymsp, lindex, rtype, requested_type_name, full_inst_path, 0U, 1U, __VlefCall_2__m_matches_type_override);
            if (__VlefCall_2__m_matches_type_override) {
                if ((VlNull{} == unnamedblk31__DOT__override)) {
                    this->__VnoInFunc_m_resolve_type_name_by_inst(vlSymsp, 
                                                                  VL_CVT_PACK_STR_NN(VL_NULL_CHECK(lindex, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 1757)
                                                                                ->__PVT__ovrd
                                                                                .__PVT__m_type_name), full_inst_path, unnamedblk31__DOT__override);
                }
            } else if ((VlNull{} == unnamedblk31__DOT__override)) {
                this->__VnoInFunc_find_override_by_name(vlProcess, vlSymsp, 
                                                        VL_CVT_PACK_STR_NN(VL_NULL_CHECK(lindex, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 1750)
                                                                           ->__PVT__ovrd
                                                                           .__PVT__m_type_name), full_inst_path, unnamedblk31__DOT__override);
            } else {
                this->__VnoInFunc_find_override_by_type(vlProcess, vlSymsp, unnamedblk31__DOT__override, full_inst_path, unnamedblk31__DOT__override);
            }
            if (VL_UNLIKELY(((VlNull{} == unnamedblk31__DOT__override)))) {
                __Vtask_uvm_report_error__report_enabled_checked_168 = 0U;
                this->__Vtask_uvm_report_error__context_name_167 = ""s;
                __Vtask_uvm_report_error__line_166 = 0U;
                this->__Vtask_uvm_report_error__filename_165 = ""s;
                __Vtask_uvm_report_error__verbosity_164 = 0U;
                this->__Vtask_uvm_report_error__message_163 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Cannot resolve override for original type '"s, VL_NULL_CHECK(lindex, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 1761)
                                                                                ->__PVT__orig
                                                                                .__PVT__m_type_name), "' because the override type '"s), VL_NULL_CHECK(lindex, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 1762)
                                                                       ->__PVT__ovrd
                                                                       .__PVT__m_type_name), "' is not registered with the factory."s));
                this->__Vtask_uvm_report_error__id_162 = "TYPNTF"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_144);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_144;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_169);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_169;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_162, this->__Vtask_uvm_report_error__message_163, __Vtask_uvm_report_error__verbosity_164, this->__Vtask_uvm_report_error__filename_165, __Vtask_uvm_report_error__line_166, this->__Vtask_uvm_report_error__context_name_167, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_168));
            }
            find_override_by_name__Vfuncrtn = unnamedblk31__DOT__override;
            goto __Vlabel0;
        }
        find_override_by_name__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_find_override_by_type(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> requested_type, ::std::string full_inst_path, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &find_override_by_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_find_override_by_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> __Vfunc_m_find_override_by_type__Vfuncout_145;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_factory_override>> override_info;
    override_info.clear();
    this->__VnoInFunc_m_find_override_by_type(vlProcess, vlSymsp, requested_type, full_inst_path, override_info, __Vfunc_m_find_override_by_type__Vfuncout_145);
    find_override_by_type__Vfuncrtn = __Vfunc_m_find_override_by_type__Vfuncout_145;
}

void Vtb_top_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_m_find_override_by_type(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> requested_type, ::std::string full_inst_path, ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_factory_override>> &override_info, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &m_find_override_by_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_m_find_override_by_type\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_172;
    __Vtask_uvm_report_error__verbosity_172 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_174;
    __Vtask_uvm_report_error__line_174 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_176;
    __Vtask_uvm_report_error__report_enabled_checked_176 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_146;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_177;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_180;
    __Vtask_uvm_report_error__verbosity_180 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_182;
    __Vtask_uvm_report_error__line_182 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_184;
    __Vtask_uvm_report_error__report_enabled_checked_184 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_147;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_185;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefCall_5__m_matches_type_override;
    ::std::string __VlefCall_4__get_type_name;
    ::CData/*0:0*/ __VlefCall_3__m_matches_type_override;
    ::std::string __VlefCall_2__get_type_name;
    ::CData/*0:0*/ __VlefCall_1__m_matches_inst_override;
    ::std::string __VlefCall_0__get_type_name;
    ::IData/*31:0*/ unnamedblk32__DOT__index;
    unnamedblk32__DOT__index = 0;
    ::IData/*31:0*/ unnamedblk32__DOT__index__Vloopsize;
    unnamedblk32__DOT__index__Vloopsize = 0;
    ::IData/*31:0*/ unnamedblk33__DOT__i;
    unnamedblk33__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk33__DOT__i__Vloopsize;
    unnamedblk33__DOT__i__Vloopsize = 0;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_factory_override>> unnamedblk34__DOT__matched_overrides;
    ::IData/*31:0*/ unnamedblk34__DOT__unnamedblk35__DOT__index;
    unnamedblk34__DOT__unnamedblk35__DOT__index = 0;
    ::IData/*31:0*/ unnamedblk34__DOT__unnamedblk35__DOT__index__Vloopsize;
    unnamedblk34__DOT__unnamedblk35__DOT__index__Vloopsize = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> unnamedblk36__DOT__override;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_factory_override> lindex;
    {
        unnamedblk32__DOT__index = 0U;
        while (VL_LTS_III(32, unnamedblk32__DOT__index, override_info.size())) {
            unnamedblk32__DOT__index__Vloopsize = override_info.size();
            if (VL_UNLIKELY(((VL_NULL_CHECK(override_info.at(unnamedblk32__DOT__index), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 1795)
                              ->__PVT__orig.__PVT__m_type 
                              == requested_type)))) {
                __Vtask_uvm_report_error__report_enabled_checked_176 = 0U;
                this->__Vtask_uvm_report_error__context_name_175 = ""s;
                __Vtask_uvm_report_error__line_174 = 0U;
                this->__Vtask_uvm_report_error__filename_173 = ""s;
                __Vtask_uvm_report_error__verbosity_172 = 0U;
                this->__Vtask_uvm_report_error__message_171 = "Recursive loop detected while finding override."s;
                this->__Vtask_uvm_report_error__id_170 = "OVRDLOOP"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_146);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_146;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_177);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_177;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_170, this->__Vtask_uvm_report_error__message_171, __Vtask_uvm_report_error__verbosity_172, this->__Vtask_uvm_report_error__filename_173, __Vtask_uvm_report_error__line_174, this->__Vtask_uvm_report_error__context_name_175, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_176));
                VL_NULL_CHECK(override_info.atWriteAppend(unnamedblk32__DOT__index), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 1797)->__PVT__used 
                    = ((::IData)(1U) + VL_NULL_CHECK(override_info.at(unnamedblk32__DOT__index), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 1797)
                       ->__PVT__used);
                if ((1U & (~ (::IData)(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_default_factory__Vclpkg.__PVT__m_debug_pass)))) {
                    this->__VnoInFunc_debug_create_by_type(vlProcess, vlSymsp, requested_type, full_inst_path, ""s);
                }
                m_find_override_by_type__Vfuncrtn = requested_type;
                goto __Vlabel0;
            }
            if ((unnamedblk32__DOT__index__Vloopsize 
                 <= override_info.size())) {
                unnamedblk32__DOT__index = ((::IData)(1U) 
                                            + unnamedblk32__DOT__index);
            }
        }
        if ((""s != full_inst_path)) {
            {
                unnamedblk33__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk33__DOT__i, this->__PVT__m_inst_overrides.size())) {
                    unnamedblk33__DOT__i__Vloopsize 
                        = this->__PVT__m_inst_overrides.size();
                    VL_NULL_CHECK(requested_type, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 1812)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_0__get_type_name);
                    this->__VnoInFunc_m_matches_inst_override(vlSymsp, this->__PVT__m_inst_overrides.at(unnamedblk33__DOT__i), requested_type, 
                                                              VL_CVT_PACK_STR_NN(__VlefCall_0__get_type_name), full_inst_path, __VlefCall_1__m_matches_inst_override);
                    if (__VlefCall_1__m_matches_inst_override) {
                        override_info.push_back(this->__PVT__m_inst_overrides.at(unnamedblk33__DOT__i));
                        if ((VlNull{} == lindex)) {
                            lindex = this->__PVT__m_inst_overrides.at(unnamedblk33__DOT__i);
                            if ((1U & (~ (::IData)(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_default_factory__Vclpkg.__PVT__m_debug_pass)))) {
                                goto __Vlabel1;
                            }
                        }
                    }
                    if ((unnamedblk33__DOT__i__Vloopsize 
                         <= this->__PVT__m_inst_overrides.size())) {
                        unnamedblk33__DOT__i = ((::IData)(1U) 
                                                + unnamedblk33__DOT__i);
                    }
                }
                __Vlabel1: ;
            }
        }
        if (((VlNull{} == lindex) | (::IData)(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_default_factory__Vclpkg.__PVT__m_debug_pass))) {
            unnamedblk34__DOT__matched_overrides.clear();
            {
                unnamedblk34__DOT__unnamedblk35__DOT__index = 0U;
                while (VL_LTS_III(32, unnamedblk34__DOT__unnamedblk35__DOT__index, this->__PVT__m_type_overrides.size())) {
                    unnamedblk34__DOT__unnamedblk35__DOT__index__Vloopsize 
                        = this->__PVT__m_type_overrides.size();
                    VL_NULL_CHECK(requested_type, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 1831)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_2__get_type_name);
                    this->__VnoInFunc_m_matches_type_override(vlSymsp, this->__PVT__m_type_overrides.at(unnamedblk34__DOT__unnamedblk35__DOT__index), requested_type, 
                                                              VL_CVT_PACK_STR_NN(__VlefCall_2__get_type_name), full_inst_path, 1U, 1U, __VlefCall_3__m_matches_type_override);
                    if (__VlefCall_3__m_matches_type_override) {
                        unnamedblk34__DOT__matched_overrides.push_back(this->__PVT__m_type_overrides.at(unnamedblk34__DOT__unnamedblk35__DOT__index));
                        if (((VlNull{} == lindex) || 
                             (1U & (~ VL_NULL_CHECK(lindex, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 1835)
                                    ->__PVT__replace)))) {
                            lindex = this->__PVT__m_type_overrides.at(unnamedblk34__DOT__unnamedblk35__DOT__index);
                            if (((1U & (~ (::IData)(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_default_factory__Vclpkg.__PVT__m_debug_pass))) 
                                 && VL_NULL_CHECK(lindex, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 1842)
                                 ->__PVT__replace)) {
                                goto __Vlabel2;
                            }
                        }
                    }
                    if ((unnamedblk34__DOT__unnamedblk35__DOT__index__Vloopsize 
                         <= this->__PVT__m_type_overrides.size())) {
                        unnamedblk34__DOT__unnamedblk35__DOT__index 
                            = ((::IData)(1U) + unnamedblk34__DOT__unnamedblk35__DOT__index);
                    }
                }
                __Vlabel2: ;
            }
            if ((0U != unnamedblk34__DOT__matched_overrides.size())) {
                if (vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_default_factory__Vclpkg.__PVT__m_debug_pass) {
                    override_info = ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_factory_override>>{
                        override_info,
                        unnamedblk34__DOT__matched_overrides
                    };
                } else {
                    override_info.push_back(unnamedblk34__DOT__matched_overrides.atBack(0U));
                }
            }
        }
        if ((VlNull{} != lindex)) {
            unnamedblk36__DOT__override = VL_NULL_CHECK(lindex, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 1859)
                ->__PVT__ovrd.__PVT__m_type;
            VL_NULL_CHECK(lindex, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 1861)->__PVT__used 
                = ((::IData)(1U) + VL_NULL_CHECK(lindex, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 1861)
                   ->__PVT__used);
            if (vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_default_factory__Vclpkg.__PVT__m_debug_pass) {
                VL_NULL_CHECK(lindex, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 1863)->__PVT__selected = 1U;
            }
            VL_NULL_CHECK(requested_type, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 1868)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_4__get_type_name);
            this->__VnoInFunc_m_matches_type_override(vlSymsp, lindex, requested_type, 
                                                      VL_CVT_PACK_STR_NN(__VlefCall_4__get_type_name), full_inst_path, 0U, 1U, __VlefCall_5__m_matches_type_override);
            if (__VlefCall_5__m_matches_type_override) {
                if ((VlNull{} == unnamedblk36__DOT__override)) {
                    this->__VnoInFunc_m_resolve_type_name_by_inst(vlSymsp, 
                                                                  VL_CVT_PACK_STR_NN(VL_NULL_CHECK(lindex, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 1880)
                                                                                ->__PVT__ovrd
                                                                                .__PVT__m_type_name), full_inst_path, unnamedblk36__DOT__override);
                }
            } else if ((VlNull{} == unnamedblk36__DOT__override)) {
                this->__VnoInFunc_find_override_by_name(vlProcess, vlSymsp, 
                                                        VL_CVT_PACK_STR_NN(VL_NULL_CHECK(lindex, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 1873)
                                                                           ->__PVT__ovrd
                                                                           .__PVT__m_type_name), full_inst_path, unnamedblk36__DOT__override);
            } else {
                this->__VnoInFunc_find_override_by_type(vlProcess, vlSymsp, unnamedblk36__DOT__override, full_inst_path, unnamedblk36__DOT__override);
            }
            if (VL_UNLIKELY(((VlNull{} == unnamedblk36__DOT__override)))) {
                __Vtask_uvm_report_error__report_enabled_checked_184 = 0U;
                this->__Vtask_uvm_report_error__context_name_183 = ""s;
                __Vtask_uvm_report_error__line_182 = 0U;
                this->__Vtask_uvm_report_error__filename_181 = ""s;
                __Vtask_uvm_report_error__verbosity_180 = 0U;
                this->__Vtask_uvm_report_error__message_179 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Cannot resolve override for original type '"s, VL_NULL_CHECK(lindex, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 1884)
                                                                                ->__PVT__orig
                                                                                .__PVT__m_type_name), "' because the override type '"s), VL_NULL_CHECK(lindex, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 1885)
                                                                       ->__PVT__ovrd
                                                                       .__PVT__m_type_name), "' is not registered with the factory."s));
                this->__Vtask_uvm_report_error__id_178 = "TYPNTF"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_147);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_147;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_185);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_185;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_178, this->__Vtask_uvm_report_error__message_179, __Vtask_uvm_report_error__verbosity_180, this->__Vtask_uvm_report_error__filename_181, __Vtask_uvm_report_error__line_182, this->__Vtask_uvm_report_error__context_name_183, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_184));
            }
            m_find_override_by_type__Vfuncrtn = unnamedblk36__DOT__override;
            goto __Vlabel0;
        }
        m_find_override_by_type__Vfuncrtn = requested_type;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_debug_create_by_type(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> requested_type, ::std::string parent_inst_path, ::std::string name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_debug_create_by_type\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_m_debug_create(vlProcess, vlSymsp, ""s, requested_type, parent_inst_path, name);
}

void Vtb_top_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_m_debug_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string requested_type_name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> requested_type, ::std::string parent_inst_path, ::std::string name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_m_debug_create\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_188;
    __Vtask_uvm_report_warning__verbosity_188 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_190;
    __Vtask_uvm_report_warning__line_190 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_192;
    __Vtask_uvm_report_warning__report_enabled_checked_192 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_148;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_193;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ unnamedblk44__DOT__index;
    unnamedblk44__DOT__index = 0;
    ::IData/*31:0*/ unnamedblk44__DOT__index__Vloopsize;
    unnamedblk44__DOT__index__Vloopsize = 0;
    ::std::string full_inst_path;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> result;
    {
        full_inst_path = ""s;
        full_inst_path = ((""s == parent_inst_path)
                           ? name : ((""s != name) ? 
                                     VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(parent_inst_path, "."s), name)
                                      : parent_inst_path));
        this->__PVT__m_override_info.clear();
        if ((VlNull{} == requested_type)) {
            if (VL_UNLIKELY(((1U & ((~ (0U != this->__PVT__m_type_names.exists(requested_type_name))) 
                                    & (~ (0U != this->__PVT__m_lookup_strs.exists(requested_type_name)))))))) {
                __Vtask_uvm_report_warning__report_enabled_checked_192 = 0U;
                this->__Vtask_uvm_report_warning__context_name_191 = ""s;
                __Vtask_uvm_report_warning__line_190 = 0U;
                this->__Vtask_uvm_report_warning__filename_189 = ""s;
                __Vtask_uvm_report_warning__verbosity_188 = 0U;
                this->__Vtask_uvm_report_warning__message_187 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("The factory does not recognize '"s, requested_type_name), "' as a registered type."s));
                this->__Vtask_uvm_report_warning__id_186 = "Factory Warning"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_148);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_148;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_193);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_193;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_186, this->__Vtask_uvm_report_warning__message_187, __Vtask_uvm_report_warning__verbosity_188, this->__Vtask_uvm_report_warning__filename_189, __Vtask_uvm_report_warning__line_190, this->__Vtask_uvm_report_warning__context_name_191, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_192));
                goto __Vlabel0;
            }
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_default_factory__Vclpkg.__PVT__m_debug_pass = 1U;
            this->__VnoInFunc_find_override_by_name(vlProcess, vlSymsp, requested_type_name, full_inst_path, result);
        } else {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_default_factory__Vclpkg.__PVT__m_debug_pass = 1U;
            if ((1U & (~ (0U != this->__PVT__m_types.exists(requested_type))))) {
                this->__VnoInFunc_register(vlProcess, vlSymsp, requested_type);
            }
            this->__VnoInFunc_find_override_by_type(vlProcess, vlSymsp, requested_type, full_inst_path, result);
            if ((""s == requested_type_name)) {
                VL_NULL_CHECK(requested_type, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 2124)->__VnoInFunc_get_type_name(vlSymsp, requested_type_name);
            }
        }
        this->__VnoInFunc_m_debug_display(vlProcess, vlSymsp, requested_type_name, result, full_inst_path);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_default_factory__Vclpkg.__PVT__m_debug_pass = 0U;
        unnamedblk44__DOT__index = 0U;
        while (VL_LTS_III(32, unnamedblk44__DOT__index, this->__PVT__m_override_info.size())) {
            unnamedblk44__DOT__index__Vloopsize = this->__PVT__m_override_info.size();
            VL_NULL_CHECK(this->__PVT__m_override_info.atWriteAppend(unnamedblk44__DOT__index), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 2134)->__PVT__selected = 0U;
            if ((unnamedblk44__DOT__index__Vloopsize 
                 <= this->__PVT__m_override_info.size())) {
                unnamedblk44__DOT__index = ((::IData)(1U) 
                                            + unnamedblk44__DOT__index);
            }
        }
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_m_debug_display(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string requested_type_name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> result, ::std::string full_inst_path) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_m_debug_display\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_149;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_194;
    ::IData/*31:0*/ __Vtask_uvm_report_info__verbosity_197;
    __Vtask_uvm_report_info__verbosity_197 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__line_199;
    __Vtask_uvm_report_info__line_199 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_info__report_enabled_checked_201;
    __Vtask_uvm_report_info__report_enabled_checked_201 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_151;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_202;
    ::std::string __Vtemp_1;
    ::std::string __Vtemp_2;
    ::std::string __Vtemp_3;
    ::std::string __Vtemp_4;
    ::std::string __Vtemp_5;
    ::std::string __Vtemp_6;
    ::std::string __Vtemp_7;
    ::std::string __Vtemp_8;
    ::std::string __Vtemp_9;
    ::std::string __Vtemp_10;
    ::std::string __Vtemp_11;
    ::std::string __Vtemp_12;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_5__m_uvm_string_queue_join;
    ::CData/*0:0*/ __VlefLogAnd_4;
    ::IData/*31:0*/ __VlefCall_3__get_report_action;
    ::IData/*31:0*/ __VlefCall_2__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_1__uvm_get_report_object;
    ::std::string __VlefCall_0__get_type_name;
    ::IData/*31:0*/ unnamedblk45__DOT__i;
    unnamedblk45__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk46__DOT__i;
    unnamedblk46__DOT__i = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk47__DOT___local_report_object_;
    ::IData/*31:0*/ max1;
    ::IData/*31:0*/ max2;
    ::IData/*31:0*/ max3;
    ::std::string dash;
    ::std::string space;
    ::VlQueue<::std::string> qs;
    max1 = 0U;
    max2 = 0U;
    max3 = 0U;
    dash = "---------------------------------------------------------------------------------------------------"s;
    space = "                                                                                                   "s;
    qs.clear();
    qs.atDefault().clear();
    qs.push_back("\n#### Factory Override Information (*)\n\n"s);
    qs.push_back(VL_SFORMATF_N_NX("Given a request for an object of type '%s' with an instance\npath of '%s' the factory encountered\n\n",2
                                  , 'S',&(requested_type_name)
                                  , 'S',&(full_inst_path)) );
    if ((0U == this->__PVT__m_override_info.size())) {
        qs.push_back("no relevant overrides.\n\n"s);
    } else {
        qs.push_back("the following relevant overrides. An 'x' next to a match indicates a\nmatch that was ignored.\n\n"s);
        unnamedblk45__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk45__DOT__i, this->__PVT__m_override_info.size())) {
            if (VL_GTS_III(32, VL_LEN_IN(VL_NULL_CHECK(this->__PVT__m_override_info.at(unnamedblk45__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 2168)
                                         ->__PVT__orig
                                         .__PVT__m_type_name), max1)) {
                max1 = VL_LEN_IN(VL_NULL_CHECK(this->__PVT__m_override_info.at(unnamedblk45__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 2170)
                                 ->__PVT__orig.__PVT__m_type_name);
            }
            if (VL_GTS_III(32, VL_LEN_IN(VL_NULL_CHECK(this->__PVT__m_override_info.at(unnamedblk45__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 2173)
                                         ->__PVT__full_inst_path), max2)) {
                max2 = VL_LEN_IN(VL_NULL_CHECK(this->__PVT__m_override_info.at(unnamedblk45__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 2175)
                                 ->__PVT__full_inst_path);
            }
            if (VL_GTS_III(32, VL_LEN_IN(VL_NULL_CHECK(this->__PVT__m_override_info.at(unnamedblk45__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 2178)
                                         ->__PVT__ovrd
                                         .__PVT__m_type_name), max3)) {
                max3 = VL_LEN_IN(VL_NULL_CHECK(this->__PVT__m_override_info.at(unnamedblk45__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 2180)
                                 ->__PVT__ovrd.__PVT__m_type_name);
            }
            unnamedblk45__DOT__i = ((::IData)(1U) + unnamedblk45__DOT__i);
        }
        if (VL_GTS_III(32, 0x0000000dU, max1)) {
            max1 = 0x0000000dU;
        }
        if (VL_GTS_III(32, 0x0000000dU, max2)) {
            max2 = 0x0000000dU;
        }
        if (VL_GTS_III(32, 0x0000000dU, max3)) {
            max3 = 0x0000000dU;
        }
        __Vtemp_1 = VL_SUBSTR_N(space,1U,(max1 - (::IData)(0x0000000dU)));
        __Vtemp_2 = VL_SUBSTR_N(space,1U,(max2 - (::IData)(0x0000000dU)));
        __Vtemp_3 = VL_SUBSTR_N(space,1U,(max3 - (::IData)(0x0000000dU)));
        qs.push_back(VL_SFORMATF_N_NX("Original Type%0s  Instance Path%0s  Override Type%0s\n",3
                                      , 'S',&(__Vtemp_1)
                                      , 'S',&(__Vtemp_2)
                                      , 'S',&(__Vtemp_3)) );
        __Vtemp_4 = VL_SUBSTR_N(dash,1U,max1);
        __Vtemp_5 = VL_SUBSTR_N(dash,1U,max2);
        __Vtemp_6 = VL_SUBSTR_N(dash,1U,max3);
        qs.push_back(VL_SFORMATF_N_NX("  %0s  %0s  %0s\n",3
                                      , 'S',&(__Vtemp_4)
                                      , 'S',&(__Vtemp_5)
                                      , 'S',&(__Vtemp_6)) );
        unnamedblk46__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk46__DOT__i, this->__PVT__m_override_info.size())) {
            __Vtemp_7 = VL_NULL_CHECK(this->__PVT__m_override_info.at(unnamedblk46__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 2208)
                ->__PVT__orig.__PVT__m_type_name;
            __Vtemp_8 = VL_SUBSTR_N(space,1U,(max1 
                                              - VL_LEN_IN(VL_NULL_CHECK(this->__PVT__m_override_info.at(unnamedblk46__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 2209)
                                                          ->__PVT__orig
                                                          .__PVT__m_type_name)));
            qs.push_back(VL_SFORMATF_N_NX("%s%0s%0s\n",3
                                          , '#',16,
                                          (VL_NULL_CHECK(this->__PVT__m_override_info.at(unnamedblk46__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 2207)
                                           ->__PVT__selected
                                            ? 0x2020U
                                            : 0x7820U)
                                          , 'S',&(__Vtemp_7)
                                          , 'S',&(__Vtemp_8)) );
            __Vtemp_9 = VL_NULL_CHECK(this->__PVT__m_override_info.at(unnamedblk46__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 2210)
                ->__PVT__full_inst_path;
            __Vtemp_10 = VL_SUBSTR_N(space,1U,(max2 
                                               - VL_LEN_IN(VL_NULL_CHECK(this->__PVT__m_override_info.at(unnamedblk46__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 2211)
                                                           ->__PVT__full_inst_path)));
            qs.push_back(VL_SFORMATF_N_NX("  %0s%0s",2
                                          , 'S',&(__Vtemp_9)
                                          , 'S',&(__Vtemp_10)) );
            __Vtemp_11 = VL_NULL_CHECK(this->__PVT__m_override_info.at(unnamedblk46__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 2212)
                ->__PVT__ovrd.__PVT__m_type_name;
            __Vtemp_12 = VL_SUBSTR_N(space,1U,(max3 
                                               - VL_LEN_IN(VL_NULL_CHECK(this->__PVT__m_override_info.at(unnamedblk46__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 2213)
                                                           ->__PVT__ovrd
                                                           .__PVT__m_type_name)));
            qs.push_back(VL_SFORMATF_N_NX("  %0s%0s",2
                                          , 'S',&(__Vtemp_11)
                                          , 'S',&(__Vtemp_12)) );
            if (("*"s == VL_NULL_CHECK(this->__PVT__m_override_info.at(unnamedblk46__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 2214)
                 ->__PVT__full_inst_path)) {
                qs.push_back("  <type override>"s);
            } else {
                qs.push_back("\n"s);
            }
            unnamedblk46__DOT__i = ((::IData)(1U) + unnamedblk46__DOT__i);
        }
        qs.push_back("\n"s);
    }
    qs.push_back("Result:\n\n"s);
    if ((VlNull{} == result)) {
        __VlefCall_0__get_type_name = requested_type_name;
    } else {
        VL_NULL_CHECK(result, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 2231)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_0__get_type_name);
    }
    qs.push_back(VL_SFORMATF_N_NX("  The factory will produce an object of type '%0s'\n",1
                                  , 'S',&(__VlefCall_0__get_type_name)) );
    qs.push_back("\n(*) Types with no associated type name will be printed as <unknown>\n\n####\n\n"s);
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_149);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
        = __Vfunc_get__Vfuncout_149;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_194);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
        = __Vtask_get_root__Vfuncout_194;
    __VlefCall_1__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
    VL_NULL_CHECK(__VlefCall_1__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 2235)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk47__DOT___local_report_object_);
    VL_NULL_CHECK(unnamedblk47__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 2235)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "UVM/FACTORY/DUMP"s, __VlefCall_2__get_report_verbosity_level);
    __VlefLogAnd_4 = VL_LTES_III(32, 0U, __VlefCall_2__get_report_verbosity_level);
    if (__VlefLogAnd_4) {
        VL_NULL_CHECK(unnamedblk47__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 2235)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "UVM/FACTORY/DUMP"s, __VlefCall_3__get_report_action);
        __VlefLogAnd_4 = (0U != __VlefCall_3__get_report_action);
    }
    if (VL_UNLIKELY((__VlefLogAnd_4))) {
        this->__Vfunc_m_uvm_string_queue_join__Vfuncout_150 = ""s;
        this->__Vfunc_m_uvm_string_queue_join__Vfuncout_150 
            = VL_CVT_PACK_STR_ND(VL_STREAMR_NRI(0, qs, 1U));
        __VlefCall_5__m_uvm_string_queue_join = this->__Vfunc_m_uvm_string_queue_join__Vfuncout_150;
        __Vtask_uvm_report_info__report_enabled_checked_201 = 1U;
        this->__Vtask_uvm_report_info__context_name_200 = ""s;
        __Vtask_uvm_report_info__line_199 = 0x000008bbU;
        this->__Vtask_uvm_report_info__filename_198 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh"s;
        __Vtask_uvm_report_info__verbosity_197 = 0U;
        this->__Vtask_uvm_report_info__message_196 
            = VL_CVT_PACK_STR_NN(__VlefCall_5__m_uvm_string_queue_join);
        this->__Vtask_uvm_report_info__id_195 = "UVM/FACTORY/DUMP"s;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_151);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs 
            = __Vfunc_get__Vfuncout_151;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 147)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_202);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top 
            = __Vtask_get_root__Vfuncout_202;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 148)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__id_195, this->__Vtask_uvm_report_info__message_196, __Vtask_uvm_report_info__verbosity_197, this->__Vtask_uvm_report_info__filename_198, __Vtask_uvm_report_info__line_199, this->__Vtask_uvm_report_info__context_name_200, (::IData)(__Vtask_uvm_report_info__report_enabled_checked_201));
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_m_resolve_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string requested_type_name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &m_resolve_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_m_resolve_type_name\n"); );
    // Body
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> wrapper;
    wrapper = VlNull{};
    if ((0U != this->__PVT__m_type_names.exists(requested_type_name))) {
        wrapper = this->__PVT__m_type_names.at(requested_type_name);
    }
    m_resolve_type_name__Vfuncrtn = wrapper;
}

void Vtb_top_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_m_resolve_type_name_by_inst(Vtb_top__Syms* __restrict vlSymsp, ::std::string requested_type_name, ::std::string full_inst_path, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &m_resolve_type_name_by_inst__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_m_resolve_type_name_by_inst\n"); );
    // Locals
    ::CData/*0:0*/ __Vfunc_uvm_is_match__Vfuncout_152;
    __Vfunc_uvm_is_match__Vfuncout_152 = 0;
    ::IData/*31:0*/ __Vfunc_uvm_is_match____VlefCall_0__uvm_re_match_155;
    __Vfunc_uvm_is_match____VlefCall_0__uvm_re_match_155 = 0;
    ::IData/*31:0*/ __Vfunc_uvm_re_match__Vfuncout_156;
    __Vfunc_uvm_re_match__Vfuncout_156 = 0;
    ::IData/*31:0*/ __Vfunc_uvm_re_match____Vincrement1_160;
    __Vfunc_uvm_re_match____Vincrement1_160 = 0;
    // Body
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> wrapper;
    ::VlQueue<Vtb_top_m_inst_typename_alias_t__struct__0> type_alias_inst;
    wrapper = VlNull{};
    type_alias_inst = this->__PVT__m_inst_aliases.find(
                                                       [&](
                                                           ::IData/*31:0*/ i__DOT__index, 
                                                           Vtb_top_m_inst_typename_alias_t__struct__0 i) -> 
                                                       ::CData/*31:0*/ {
            return (((i.__PVT__alias_type_name == requested_type_name) 
                     && ([&]() {
                            this->__Vfunc_uvm_is_match__str_154 
                                = full_inst_path;
                            this->__Vfunc_uvm_is_match__expr_153 
                                = VL_CVT_PACK_STR_NN(
                                                     i
                                                     .__PVT__full_inst_path);
                            this->__Vfunc_uvm_re_match__str_158 
                                = this->__Vfunc_uvm_is_match__str_154;
                            this->__Vfunc_uvm_re_match__re_157 
                                = this->__Vfunc_uvm_is_match__expr_153;
                            __Vfunc_uvm_re_match____Vincrement1_160 = 0U;
                            {
                                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e = 0U;
                                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s = 0U;
                                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es = 0U;
                                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss = 0U;
                                if ((0U == VL_LEN_IN(this->__Vfunc_uvm_re_match__re_157))) {
                                    __Vfunc_uvm_re_match__Vfuncout_156 = 0U;
                                    goto __Vlabel0;
                                }
                                if ((0x5eU == VL_GETC_N(this->__Vfunc_uvm_re_match__re_157,0U))) {
                                    this->__Vfunc_uvm_re_match__re_157 
                                        = VL_SUBSTR_N(this->__Vfunc_uvm_re_match__re_157,1U,
                                                      (VL_LEN_IN(this->__Vfunc_uvm_re_match__re_157) 
                                                       - (::IData)(1U)));
                                }
                                while (((vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                         != VL_LEN_IN(this->__Vfunc_uvm_re_match__str_158)) 
                                        & (0x2aU != 
                                           VL_GETC_N(this->__Vfunc_uvm_re_match__re_157,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                    if (((VL_GETC_N(this->__Vfunc_uvm_re_match__re_157,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                          != VL_GETC_N(this->__Vfunc_uvm_re_match__str_158,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                         & (0x3fU != 
                                            VL_GETC_N(this->__Vfunc_uvm_re_match__re_157,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                        __Vfunc_uvm_re_match__Vfuncout_156 = 1U;
                                        goto __Vlabel0;
                                    }
                                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                        = ((::IData)(1U) 
                                           + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                        = ((::IData)(1U) 
                                           + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                                }
                                while ((vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                        != VL_LEN_IN(this->__Vfunc_uvm_re_match__str_158))) {
                                    if ((0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__re_157,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                            = ((::IData)(1U) 
                                               + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                        if ((vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                             == VL_LEN_IN(this->__Vfunc_uvm_re_match__re_157))) {
                                            __Vfunc_uvm_re_match__Vfuncout_156 = 0U;
                                            goto __Vlabel0;
                                        }
                                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es 
                                            = vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e;
                                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                            = ((::IData)(1U) 
                                               + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                                    } else if (((VL_GETC_N(this->__Vfunc_uvm_re_match__re_157,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                                 == 
                                                 VL_GETC_N(this->__Vfunc_uvm_re_match__str_158,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                                | (0x3fU 
                                                   == 
                                                   VL_GETC_N(this->__Vfunc_uvm_re_match__re_157,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                            = ((::IData)(1U) 
                                               + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                            = ((::IData)(1U) 
                                               + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                                    } else {
                                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                            = vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es;
                                        __Vfunc_uvm_re_match____Vincrement1_160 
                                            = vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss;
                                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                            = ((::IData)(1U) 
                                               + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss);
                                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                            = __Vfunc_uvm_re_match____Vincrement1_160;
                                    }
                                }
                                while ((VL_LTS_III(32, vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                                   VL_LEN_IN(this->__Vfunc_uvm_re_match__re_157)) 
                                        & (0x2aU == 
                                           VL_GETC_N(this->__Vfunc_uvm_re_match__re_157,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                        = ((::IData)(1U) 
                                           + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                }
                                __Vfunc_uvm_re_match__Vfuncout_156 
                                    = ((vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                        == VL_LEN_IN(this->__Vfunc_uvm_re_match__re_157))
                                        ? 0U : 1U);
                                __Vlabel0: ;
                            }
                            __Vfunc_uvm_is_match____VlefCall_0__uvm_re_match_155 
                                = __Vfunc_uvm_re_match__Vfuncout_156;
                            __Vfunc_uvm_is_match__Vfuncout_152 
                                = (0U == __Vfunc_uvm_is_match____VlefCall_0__uvm_re_match_155);
                        }(), (::IData)(__Vfunc_uvm_is_match__Vfuncout_152))));
        }
    );
    if (VL_LTS_III(32, 0U, type_alias_inst.size())) {
        wrapper = type_alias_inst.at(0U).__PVT__orig
            .__PVT__m_type;
    } else {
        this->__VnoInFunc_m_resolve_type_name(vlSymsp, requested_type_name, wrapper);
    }
    m_resolve_type_name_by_inst__Vfuncrtn = wrapper;
}

void Vtb_top_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_m_matches_type_pair(Vtb_top__Syms* __restrict vlSymsp, Vtb_top_m_uvm_factory_type_pair_t__struct__0 match_type_pair, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> requested_type, ::std::string requested_type_name, ::CData/*0:0*/ &m_matches_type_pair__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_m_matches_type_pair\n"); );
    // Body
    m_matches_type_pair__Vfuncrtn = (((VlNull{} != match_type_pair
                                       .__PVT__m_type) 
                                      & (match_type_pair
                                         .__PVT__m_type 
                                         == requested_type)) 
                                     | ((("<unknown>"s 
                                          != match_type_pair
                                          .__PVT__m_type_name) 
                                         & (""s != match_type_pair
                                            .__PVT__m_type_name)) 
                                        & (match_type_pair
                                           .__PVT__m_type_name 
                                           == requested_type_name)));
}

void Vtb_top_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_m_matches_inst_override(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_factory_override> __SYM__override, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> requested_type, ::std::string requested_type_name, ::std::string full_inst_path, ::CData/*0:0*/ &m_matches_inst_override__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_m_matches_inst_override\n"); );
    // Locals
    ::IData/*31:0*/ __Vfunc_uvm_is_match____VlefCall_0__uvm_re_match_163;
    __Vfunc_uvm_is_match____VlefCall_0__uvm_re_match_163 = 0;
    ::IData/*31:0*/ __Vfunc_uvm_re_match__Vfuncout_164;
    __Vfunc_uvm_re_match__Vfuncout_164 = 0;
    ::IData/*31:0*/ __Vfunc_uvm_re_match____Vincrement1_168;
    __Vfunc_uvm_re_match____Vincrement1_168 = 0;
    // Body
    ::CData/*0:0*/ __VlefCall_2__uvm_is_match;
    ::CData/*0:0*/ __VlefCall_1__m_matches_type_pair;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> __VlefCall_0__m_resolve_type_name_by_inst;
    Vtb_top_m_uvm_factory_type_pair_t__struct__0 match_type_pair;
    {
        m_matches_inst_override__Vfuncrtn = 0U;
        match_type_pair = VL_NULL_CHECK(__SYM__override, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 2291)
            ->__PVT__orig;
        if ((VlNull{} == match_type_pair.__PVT__m_type)) {
            this->__VnoInFunc_m_resolve_type_name_by_inst(vlSymsp, 
                                                          VL_CVT_PACK_STR_NN(match_type_pair
                                                                             .__PVT__m_type_name), full_inst_path, __VlefCall_0__m_resolve_type_name_by_inst);
            match_type_pair.__PVT__m_type = __VlefCall_0__m_resolve_type_name_by_inst;
        }
        this->__VnoInFunc_m_matches_type_pair(vlSymsp, match_type_pair, requested_type, requested_type_name, __VlefCall_1__m_matches_type_pair);
        if (__VlefCall_1__m_matches_type_pair) {
            if (VL_NULL_CHECK(__SYM__override, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 2298)
                ->__PVT__has_wildcard) {
                __VlefCall_2__uvm_is_match = ("*"s 
                                              == VL_NULL_CHECK(__SYM__override, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 2299)
                                              ->__PVT__full_inst_path);
                if ((1U & (~ (::IData)(__VlefCall_2__uvm_is_match)))) {
                    this->__Vfunc_uvm_is_match__str_162 
                        = full_inst_path;
                    this->__Vfunc_uvm_is_match__expr_161 
                        = VL_CVT_PACK_STR_NN(VL_NULL_CHECK(__SYM__override, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 2300)
                                             ->__PVT__full_inst_path);
                    this->__Vfunc_uvm_re_match__str_166 
                        = this->__Vfunc_uvm_is_match__str_162;
                    this->__Vfunc_uvm_re_match__re_165 
                        = this->__Vfunc_uvm_is_match__expr_161;
                    __Vfunc_uvm_re_match____Vincrement1_168 = 0U;
                    {
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e = 0U;
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s = 0U;
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es = 0U;
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss = 0U;
                        if ((0U == VL_LEN_IN(this->__Vfunc_uvm_re_match__re_165))) {
                            __Vfunc_uvm_re_match__Vfuncout_164 = 0U;
                            goto __Vlabel1;
                        }
                        if ((0x5eU == VL_GETC_N(this->__Vfunc_uvm_re_match__re_165,0U))) {
                            this->__Vfunc_uvm_re_match__re_165 
                                = VL_SUBSTR_N(this->__Vfunc_uvm_re_match__re_165,1U,
                                              (VL_LEN_IN(this->__Vfunc_uvm_re_match__re_165) 
                                               - (::IData)(1U)));
                        }
                        while (((vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                 != VL_LEN_IN(this->__Vfunc_uvm_re_match__str_166)) 
                                & (0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__re_165,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                            if (((VL_GETC_N(this->__Vfunc_uvm_re_match__re_165,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                  != VL_GETC_N(this->__Vfunc_uvm_re_match__str_166,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                 & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__re_165,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                __Vfunc_uvm_re_match__Vfuncout_164 = 1U;
                                goto __Vlabel1;
                            }
                            vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                            vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                        }
                        while ((vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                != VL_LEN_IN(this->__Vfunc_uvm_re_match__str_166))) {
                            if ((0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__re_165,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                    = ((::IData)(1U) 
                                       + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                if ((vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                     == VL_LEN_IN(this->__Vfunc_uvm_re_match__re_165))) {
                                    __Vfunc_uvm_re_match__Vfuncout_164 = 0U;
                                    goto __Vlabel1;
                                }
                                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es 
                                    = vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e;
                                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                    = ((::IData)(1U) 
                                       + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                            } else if (((VL_GETC_N(this->__Vfunc_uvm_re_match__re_165,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                         == VL_GETC_N(this->__Vfunc_uvm_re_match__str_166,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                        | (0x3fU == 
                                           VL_GETC_N(this->__Vfunc_uvm_re_match__re_165,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                    = ((::IData)(1U) 
                                       + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                    = ((::IData)(1U) 
                                       + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                            } else {
                                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                    = vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es;
                                __Vfunc_uvm_re_match____Vincrement1_168 
                                    = vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss;
                                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                    = ((::IData)(1U) 
                                       + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss);
                                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                    = __Vfunc_uvm_re_match____Vincrement1_168;
                            }
                        }
                        while ((VL_LTS_III(32, vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                           VL_LEN_IN(this->__Vfunc_uvm_re_match__re_165)) 
                                & (0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__re_165,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                            vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                        }
                        __Vfunc_uvm_re_match__Vfuncout_164 
                            = ((vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                == VL_LEN_IN(this->__Vfunc_uvm_re_match__re_165))
                                ? 0U : 1U);
                        __Vlabel1: ;
                    }
                    __Vfunc_uvm_is_match____VlefCall_0__uvm_re_match_163 
                        = __Vfunc_uvm_re_match__Vfuncout_164;
                    __VlefCall_2__uvm_is_match = (0U 
                                                  == __Vfunc_uvm_is_match____VlefCall_0__uvm_re_match_163);
                }
                m_matches_inst_override__Vfuncrtn = __VlefCall_2__uvm_is_match;
            } else {
                m_matches_inst_override__Vfuncrtn = 
                    (VL_NULL_CHECK(__SYM__override, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 2303)
                     ->__PVT__full_inst_path == full_inst_path);
            }
            goto __Vlabel0;
        }
        m_matches_inst_override__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_m_matches_type_override(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_factory_override> __SYM__override, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> requested_type, ::std::string requested_type_name, ::std::string full_inst_path, ::CData/*0:0*/ match_original_type, ::CData/*0:0*/ resolve_null_type_by_inst, ::CData/*0:0*/ &m_matches_type_override__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_m_matches_type_override\n"); );
    // Body
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> __VlefCall_1__m_resolve_type_name;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> __VlefCall_0__m_resolve_type_name_by_inst;
    Vtb_top_m_uvm_factory_type_pair_t__struct__0 match_type_pair;
    m_matches_type_override__Vfuncrtn = 0U;
    match_type_pair = ((::IData)(match_original_type)
                        ? VL_NULL_CHECK(__SYM__override, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 2318)
                       ->__PVT__orig : VL_NULL_CHECK(__SYM__override, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_factory.svh", 2318)
                       ->__PVT__ovrd);
    if ((VlNull{} == match_type_pair.__PVT__m_type)) {
        if (resolve_null_type_by_inst) {
            this->__VnoInFunc_m_resolve_type_name_by_inst(vlSymsp, 
                                                          VL_CVT_PACK_STR_NN(match_type_pair
                                                                             .__PVT__m_type_name), full_inst_path, __VlefCall_0__m_resolve_type_name_by_inst);
            match_type_pair.__PVT__m_type = __VlefCall_0__m_resolve_type_name_by_inst;
        } else {
            this->__VnoInFunc_m_resolve_type_name(vlSymsp, 
                                                  VL_CVT_PACK_STR_NN(match_type_pair
                                                                     .__PVT__m_type_name), __VlefCall_1__m_resolve_type_name);
            match_type_pair.__PVT__m_type = __VlefCall_1__m_resolve_type_name;
        }
    }
    this->__VnoInFunc_m_matches_type_pair(vlSymsp, match_type_pair, requested_type, requested_type_name, m_matches_type_override__Vfuncrtn);
}

void Vtb_top_uvm_pkg__03a__03auvm_default_factory::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_factory::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_types.atDefault() = 0;
    __PVT__m_lookup_strs.atDefault() = 0;
}

Vtb_top_uvm_pkg__03a__03auvm_default_factory::~Vtb_top_uvm_pkg__03a__03auvm_default_factory() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_factory::~\n"); );
}
