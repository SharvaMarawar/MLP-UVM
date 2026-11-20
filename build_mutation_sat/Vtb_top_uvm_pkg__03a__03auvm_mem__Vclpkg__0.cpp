// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_pre_write(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_pre_write\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_post_write(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_post_write\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_pre_read(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_pre_read\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_post_read(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_post_read\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_sample(Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ offset, ::CData/*0:0*/ is_read, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_sample\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_XsampleX(Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ addr, ::CData/*0:0*/ is_read, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_XsampleX\n"); );
    // Body
    this->__VnoInFunc_sample(vlSymsp, addr, (::IData)(is_read), map);
}

void Vtb_top_uvm_pkg__03a__03auvm_mem::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::QData/*63:0*/ size, ::IData/*31:0*/ n_bits, ::std::string access, ::IData/*31:0*/ has_coverage) {
    Vtb_top_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem::new\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1791;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4659;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_4662;
    __Vtask_uvm_report_error__verbosity_4662 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_4664;
    __Vtask_uvm_report_error__line_4664 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_4666;
    __Vtask_uvm_report_error__report_enabled_checked_4666 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1792;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4667;
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    ::std::string __VlefCall_4__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk744__DOT___local_report_object_;
    /*super.new*/;
    this->__PVT__m_locked = 0U;
    if ((0U == n_bits)) {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1791);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1791;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4659);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
            = __Vtask_get_root__Vfuncout_4659;
        __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
        VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 548)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk744__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk744__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 548)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_1__get_report_verbosity_level);
        __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
        if (__VlefLogAnd_3) {
            VL_NULL_CHECK(unnamedblk744__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 548)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_2__get_report_action);
            __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_3))) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
            __Vtask_uvm_report_error__report_enabled_checked_4666 = 1U;
            this->__Vtask_uvm_report_error__context_name_4665 = ""s;
            __Vtask_uvm_report_error__line_4664 = 0x00000224U;
            this->__Vtask_uvm_report_error__filename_4663 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh"s;
            __Vtask_uvm_report_error__verbosity_4662 = 0U;
            this->__Vtask_uvm_report_error__message_4661 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN("Memory '"s, __VlefCall_4__get_full_name), "' cannot have 0 bits"s));
            this->__Vtask_uvm_report_error__id_4660 = "RegModel"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1792);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1792;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4667);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__Vfuncout_4667;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_4660, this->__Vtask_uvm_report_error__message_4661, __Vtask_uvm_report_error__verbosity_4662, this->__Vtask_uvm_report_error__filename_4663, __Vtask_uvm_report_error__line_4664, this->__Vtask_uvm_report_error__context_name_4665, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_4666));
        }
        n_bits = 1U;
    }
    this->__PVT__m_size = size;
    this->__PVT__m_n_bits = n_bits;
    this->__PVT__m_backdoor = VlNull{};
    this->__PVT__m_access = VL_TOUPPER_NN(access);
    this->__PVT__m_has_cover = has_coverage;
    this->__PVT__m_hdl_paths_pool = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_object_string_pool__pi90f94445, vlProcess, vlSymsp, "hdl_paths"s);
    if ((n_bits > vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_mem__Vclpkg.__PVT__m_max_size)) {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_mem__Vclpkg.__PVT__m_max_size 
            = n_bits;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_set_offset(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::QData/*63:0*/ offset, ::CData/*0:0*/ unmapped) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_set_offset\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1793;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4668;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_4671;
    __Vtask_uvm_report_error__verbosity_4671 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_4673;
    __Vtask_uvm_report_error__line_4673 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_4675;
    __Vtask_uvm_report_error__report_enabled_checked_4675 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1794;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4676;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_4__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk748__DOT___local_report_object_;
    {
        if ((VL_LTS_III(32, 1U, this->__PVT__m_maps.size()) 
             & (VlNull{} == map))) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1793);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1793;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4668);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_4668;
            __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 615)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk748__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk748__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 615)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_1__get_report_verbosity_level);
            __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
            if (__VlefLogAnd_3) {
                VL_NULL_CHECK(unnamedblk748__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 615)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_2__get_report_action);
                __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_3))) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                __Vtask_uvm_report_error__report_enabled_checked_4675 = 1U;
                this->__Vtask_uvm_report_error__context_name_4674 = ""s;
                __Vtask_uvm_report_error__line_4673 = 0x00000267U;
                this->__Vtask_uvm_report_error__filename_4672 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh"s;
                __Vtask_uvm_report_error__verbosity_4671 = 0U;
                this->__Vtask_uvm_report_error__message_4670 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("set_offset requires a non-null map when memory '"s, __VlefCall_4__get_full_name), "' belongs to more than one map."s));
                this->__Vtask_uvm_report_error__id_4669 = "RegModel"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1794);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1794;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4676);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_4676;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_4669, this->__Vtask_uvm_report_error__message_4670, __Vtask_uvm_report_error__verbosity_4671, this->__Vtask_uvm_report_error__filename_4672, __Vtask_uvm_report_error__line_4673, this->__Vtask_uvm_report_error__context_name_4674, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_4675));
            }
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, map);
        if ((VlNull{} == map)) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 627)->__VnoInFunc_m_set_mem_offset(vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_mem>{this}, offset, (::IData)(unmapped));
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_full_name(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_full_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_full_name\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_1__get_name;
    ::std::string __VlefCall_0__get_full_name;
    {
        get_full_name__Vfuncrtn = ""s;
        if ((VlNull{} == this->__PVT__m_parent)) {
            this->__VnoInFunc_get_name(vlSymsp, get_full_name__Vfuncrtn);
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__m_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 654)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
        get_full_name__Vfuncrtn = VL_CONCATN_NNN(VL_CONCATN_NNN(__VlefCall_0__get_full_name, "."s), __VlefCall_1__get_name);
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_block(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_block> &get_block__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_block\n"); );
    // Body
    get_block__Vfuncrtn = this->__PVT__m_parent;
}

void Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_n_maps(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_n_maps__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_n_maps\n"); );
    // Body
    get_n_maps__Vfuncrtn = this->__PVT__m_maps.size();
}

void Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_maps(Vtb_top__Syms* __restrict vlSymsp, ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map>> &maps) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_maps\n"); );
    // Body
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk749__DOT__map;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk749__DOT__map__Vnext;
    ::CData/*0:0*/ unnamedblk749__DOT__map__Vmore;
    unnamedblk749__DOT__map__Vmore = 0;
    unnamedblk749__DOT__map__Vmore = (0U != this->__PVT__m_maps.first(unnamedblk749__DOT__map__Vnext));
    while (unnamedblk749__DOT__map__Vmore) {
        unnamedblk749__DOT__map = unnamedblk749__DOT__map__Vnext;
        unnamedblk749__DOT__map__Vmore = (0U != this->__PVT__m_maps.next(unnamedblk749__DOT__map__Vnext));
        maps.push_back(unnamedblk749__DOT__map);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_is_in_map(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::CData/*0:0*/ &is_in_map__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_is_in_map\n"); );
    // Body
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk750__DOT__l;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk750__DOT__l__Vnext;
    ::CData/*0:0*/ unnamedblk750__DOT__l__Vmore;
    unnamedblk750__DOT__l__Vmore = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk750__DOT__unnamedblk751__DOT__local_map;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk750__DOT__unnamedblk751__DOT__parent_map;
    {
        is_in_map__Vfuncrtn = 0U;
        if ((0U != this->__PVT__m_maps.exists(map))) {
            is_in_map__Vfuncrtn = 1U;
            goto __Vlabel0;
        }
        unnamedblk750__DOT__l__Vmore = (0U != this->__PVT__m_maps.first(unnamedblk750__DOT__l__Vnext));
        while (unnamedblk750__DOT__l__Vmore) {
            unnamedblk750__DOT__l = unnamedblk750__DOT__l__Vnext;
            unnamedblk750__DOT__l__Vmore = (0U != this->__PVT__m_maps.next(unnamedblk750__DOT__l__Vnext));
            unnamedblk750__DOT__unnamedblk751__DOT__local_map 
                = unnamedblk750__DOT__l;
            VL_NULL_CHECK(unnamedblk750__DOT__unnamedblk751__DOT__local_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 694)->__VnoInFunc_get_parent_map(vlSymsp, unnamedblk750__DOT__unnamedblk751__DOT__parent_map);
            while ((VlNull{} != unnamedblk750__DOT__unnamedblk751__DOT__parent_map)) {
                if ((unnamedblk750__DOT__unnamedblk751__DOT__parent_map 
                     == map)) {
                    is_in_map__Vfuncrtn = 1U;
                    goto __Vlabel0;
                }
                VL_NULL_CHECK(unnamedblk750__DOT__unnamedblk751__DOT__parent_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 702)->__VnoInFunc_get_parent_map(vlSymsp, unnamedblk750__DOT__unnamedblk751__DOT__parent_map);
            }
        }
        is_in_map__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_local_map(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> &get_local_map__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_local_map\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1795;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4677;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_4680;
    __Vtask_uvm_report_warning__verbosity_4680 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_4682;
    __Vtask_uvm_report_warning__line_4682 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_4684;
    __Vtask_uvm_report_warning__report_enabled_checked_4684 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1796;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4685;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_5__get_full_name;
    ::std::string __VlefCall_4__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk752__DOT__l;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk752__DOT__l__Vnext;
    ::CData/*0:0*/ unnamedblk752__DOT__l__Vmore;
    unnamedblk752__DOT__l__Vmore = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk752__DOT__unnamedblk753__DOT__local_map;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk752__DOT__unnamedblk753__DOT__parent_map;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk754__DOT___local_report_object_;
    {
        if ((VlNull{} == map)) {
            this->__VnoInFunc_get_default_map(vlProcess, vlSymsp, get_local_map__Vfuncrtn);
            goto __Vlabel0;
        }
        if ((0U != this->__PVT__m_maps.exists(map))) {
            get_local_map__Vfuncrtn = map;
            goto __Vlabel0;
        }
        unnamedblk752__DOT__l__Vmore = (0U != this->__PVT__m_maps.first(unnamedblk752__DOT__l__Vnext));
        while (unnamedblk752__DOT__l__Vmore) {
            unnamedblk752__DOT__l = unnamedblk752__DOT__l__Vnext;
            unnamedblk752__DOT__l__Vmore = (0U != this->__PVT__m_maps.next(unnamedblk752__DOT__l__Vnext));
            unnamedblk752__DOT__unnamedblk753__DOT__local_map 
                = unnamedblk752__DOT__l;
            VL_NULL_CHECK(unnamedblk752__DOT__unnamedblk753__DOT__local_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 724)->__VnoInFunc_get_parent_map(vlSymsp, unnamedblk752__DOT__unnamedblk753__DOT__parent_map);
            while ((VlNull{} != unnamedblk752__DOT__unnamedblk753__DOT__parent_map)) {
                if ((unnamedblk752__DOT__unnamedblk753__DOT__parent_map 
                     == map)) {
                    get_local_map__Vfuncrtn = unnamedblk752__DOT__unnamedblk753__DOT__local_map;
                    goto __Vlabel0;
                }
                VL_NULL_CHECK(unnamedblk752__DOT__unnamedblk753__DOT__parent_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 732)->__VnoInFunc_get_parent_map(vlSymsp, unnamedblk752__DOT__unnamedblk753__DOT__parent_map);
            }
        }
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1795);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1795;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4677);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
            = __Vtask_get_root__Vfuncout_4677;
        __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
        VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 736)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk754__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk754__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 736)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_1__get_report_verbosity_level);
        __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
        if (__VlefLogAnd_3) {
            VL_NULL_CHECK(unnamedblk754__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 736)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_2__get_report_action);
            __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_3))) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
            VL_NULL_CHECK(map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 736)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
            __Vtask_uvm_report_warning__report_enabled_checked_4684 = 1U;
            this->__Vtask_uvm_report_warning__context_name_4683 = ""s;
            __Vtask_uvm_report_warning__line_4682 = 0x000002e0U;
            this->__Vtask_uvm_report_warning__filename_4681 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh"s;
            __Vtask_uvm_report_warning__verbosity_4680 = 0U;
            this->__Vtask_uvm_report_warning__message_4679 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Memory '"s, __VlefCall_4__get_full_name), "' is not contained within map '"s), __VlefCall_5__get_full_name), "'"s));
            this->__Vtask_uvm_report_warning__id_4678 = "RegModel"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1796);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1796;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4685);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__Vfuncout_4685;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_4678, this->__Vtask_uvm_report_warning__message_4679, __Vtask_uvm_report_warning__verbosity_4680, this->__Vtask_uvm_report_warning__filename_4681, __Vtask_uvm_report_warning__line_4682, this->__Vtask_uvm_report_warning__context_name_4683, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_4684));
        }
        get_local_map__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_default_map(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> &get_default_map__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_default_map\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1797;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4686;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_4689;
    __Vtask_uvm_report_warning__verbosity_4689 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_4691;
    __Vtask_uvm_report_warning__line_4691 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_4693;
    __Vtask_uvm_report_warning__report_enabled_checked_4693 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1798;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4694;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_4__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk755__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk756__DOT__l;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk756__DOT__l__Vnext;
    ::CData/*0:0*/ unnamedblk756__DOT__l__Vmore;
    unnamedblk756__DOT__l__Vmore = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk756__DOT__unnamedblk757__DOT__map;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk756__DOT__unnamedblk757__DOT__blk;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk756__DOT__unnamedblk757__DOT__default_map;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk756__DOT__unnamedblk757__DOT__unnamedblk758__DOT__local_map;
    {
        if ((0U == this->__PVT__m_maps.size())) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1797);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1797;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4686);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_4686;
            __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 748)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk755__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk755__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 748)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_1__get_report_verbosity_level);
            __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
            if (__VlefLogAnd_3) {
                VL_NULL_CHECK(unnamedblk755__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 748)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_2__get_report_action);
                __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_3))) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                __Vtask_uvm_report_warning__report_enabled_checked_4693 = 1U;
                this->__Vtask_uvm_report_warning__context_name_4692 = ""s;
                __Vtask_uvm_report_warning__line_4691 = 0x000002ecU;
                this->__Vtask_uvm_report_warning__filename_4690 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh"s;
                __Vtask_uvm_report_warning__verbosity_4689 = 0U;
                this->__Vtask_uvm_report_warning__message_4688 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("Memory '"s, __VlefCall_4__get_full_name), "' is not registered with any map"s));
                this->__Vtask_uvm_report_warning__id_4687 = "RegModel"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1798);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1798;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4694);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_4694;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_4687, this->__Vtask_uvm_report_warning__message_4688, __Vtask_uvm_report_warning__verbosity_4689, this->__Vtask_uvm_report_warning__filename_4690, __Vtask_uvm_report_warning__line_4691, this->__Vtask_uvm_report_warning__context_name_4692, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_4693));
            }
            get_default_map__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        if ((1U == this->__PVT__m_maps.size())) {
            std::ignore = this->__PVT__m_maps.first(get_default_map__Vfuncrtn);
            goto __Vlabel0;
        }
        unnamedblk756__DOT__l__Vmore = (0U != this->__PVT__m_maps.first(unnamedblk756__DOT__l__Vnext));
        while (unnamedblk756__DOT__l__Vmore) {
            unnamedblk756__DOT__l = unnamedblk756__DOT__l__Vnext;
            unnamedblk756__DOT__l__Vmore = (0U != this->__PVT__m_maps.next(unnamedblk756__DOT__l__Vnext));
            unnamedblk756__DOT__unnamedblk757__DOT__map 
                = unnamedblk756__DOT__l;
            VL_NULL_CHECK(unnamedblk756__DOT__unnamedblk757__DOT__map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 761)->__VnoInFunc_get_parent(vlSymsp, unnamedblk756__DOT__unnamedblk757__DOT__blk);
            VL_NULL_CHECK(unnamedblk756__DOT__unnamedblk757__DOT__blk, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 762)->__VnoInFunc_get_default_map(vlSymsp, unnamedblk756__DOT__unnamedblk757__DOT__default_map);
            if ((VlNull{} != unnamedblk756__DOT__unnamedblk757__DOT__default_map)) {
                this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, unnamedblk756__DOT__unnamedblk757__DOT__default_map, unnamedblk756__DOT__unnamedblk757__DOT__unnamedblk758__DOT__local_map);
                if ((VlNull{} != unnamedblk756__DOT__unnamedblk757__DOT__unnamedblk758__DOT__local_map)) {
                    get_default_map__Vfuncrtn = unnamedblk756__DOT__unnamedblk757__DOT__unnamedblk758__DOT__local_map;
                    goto __Vlabel0;
                }
            }
        }
        std::ignore = this->__PVT__m_maps.first(get_default_map__Vfuncrtn);
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_access(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::std::string &get_access__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_access\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1799;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4695;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_4698;
    __Vtask_uvm_report_error__verbosity_4698 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_4700;
    __Vtask_uvm_report_error__line_4700 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_4702;
    __Vtask_uvm_report_error__report_enabled_checked_4702 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1800;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4703;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1801;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4704;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_4707;
    __Vtask_uvm_report_error__verbosity_4707 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_4709;
    __Vtask_uvm_report_error__line_4709 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_4711;
    __Vtask_uvm_report_error__report_enabled_checked_4711 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1802;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4712;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1803;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4713;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_4716;
    __Vtask_uvm_report_error__verbosity_4716 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_4718;
    __Vtask_uvm_report_error__line_4718 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_4720;
    __Vtask_uvm_report_error__report_enabled_checked_4720 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1804;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4721;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1805;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4722;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_4725;
    __Vtask_uvm_report_error__verbosity_4725 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_4727;
    __Vtask_uvm_report_error__line_4727 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_4729;
    __Vtask_uvm_report_error__report_enabled_checked_4729 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1806;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4730;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1807;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4731;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_4734;
    __Vtask_uvm_report_error__verbosity_4734 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_4736;
    __Vtask_uvm_report_error__line_4736 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_4738;
    __Vtask_uvm_report_error__report_enabled_checked_4738 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1808;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4739;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_28__get_full_name;
    ::std::string __VlefCall_27__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_26;
    ::IData/*31:0*/ __VlefCall_25__get_report_action;
    ::IData/*31:0*/ __VlefCall_24__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_23__uvm_get_report_object;
    ::std::string __VlefCall_22__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_21;
    ::IData/*31:0*/ __VlefCall_20__get_report_action;
    ::IData/*31:0*/ __VlefCall_19__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_18__uvm_get_report_object;
    ::std::string __VlefCall_17__get_full_name;
    ::std::string __VlefCall_16__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_15;
    ::IData/*31:0*/ __VlefCall_14__get_report_action;
    ::IData/*31:0*/ __VlefCall_13__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_12__uvm_get_report_object;
    ::std::string __VlefCall_11__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_10;
    ::IData/*31:0*/ __VlefCall_9__get_report_action;
    ::IData/*31:0*/ __VlefCall_8__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_7__uvm_get_report_object;
    ::std::string __VlefCall_6__get_full_name;
    ::std::string __VlefCall_5__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_4;
    ::IData/*31:0*/ __VlefCall_3__get_report_action;
    ::IData/*31:0*/ __VlefCall_2__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_1__uvm_get_report_object;
    ::IData/*31:0*/ __VlefCall_0__get_n_maps;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk759__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk760__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk761__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk762__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk763__DOT___local_report_object_;
    ::std::string __VCase_he6c53980__0;
    {
        get_access__Vfuncrtn = ""s;
        get_access__Vfuncrtn = this->__PVT__m_access;
        this->__VnoInFunc_get_n_maps(vlSymsp, __VlefCall_0__get_n_maps);
        if ((1U == __VlefCall_0__get_n_maps)) {
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, map);
        if ((VlNull{} == map)) {
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_rights(vlProcess, vlSymsp, map, __VCase_he6c53980__0);
        if ((1U & (~ ("RW"s == __VCase_he6c53980__0)))) {
            if (("RO"s == __VCase_he6c53980__0)) {
                if ((("RW"s == get_access__Vfuncrtn) 
                     || ("RO"s == get_access__Vfuncrtn))) {
                    get_access__Vfuncrtn = "RO"s;
                } else if (("WO"s == get_access__Vfuncrtn)) {
                    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1799);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                        = __Vfunc_get__Vfuncout_1799;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4695);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                        = __Vtask_get_root__Vfuncout_4695;
                    __VlefCall_1__uvm_get_report_object 
                        = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
                    VL_NULL_CHECK(__VlefCall_1__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 814)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk759__DOT___local_report_object_);
                    VL_NULL_CHECK(unnamedblk759__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 814)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_2__get_report_verbosity_level);
                    __VlefLogAnd_4 = VL_LTES_III(32, 0U, __VlefCall_2__get_report_verbosity_level);
                    if (__VlefLogAnd_4) {
                        VL_NULL_CHECK(unnamedblk759__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 814)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_3__get_report_action);
                        __VlefLogAnd_4 = (0U != __VlefCall_3__get_report_action);
                    }
                    if (VL_UNLIKELY((__VlefLogAnd_4))) {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
                        VL_NULL_CHECK(map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 814)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
                        __Vtask_uvm_report_error__report_enabled_checked_4702 = 1U;
                        this->__Vtask_uvm_report_error__context_name_4701 = ""s;
                        __Vtask_uvm_report_error__line_4700 = 0x0000032eU;
                        this->__Vtask_uvm_report_error__filename_4699 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh"s;
                        __Vtask_uvm_report_error__verbosity_4698 = 0U;
                        this->__Vtask_uvm_report_error__message_4697 
                            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                                VL_CONCATN_NNN(
                                                                               VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("WO memory '"s, __VlefCall_5__get_full_name), "' restricted to RO in map '"s), __VlefCall_6__get_full_name), "'"s));
                        this->__Vtask_uvm_report_error__id_4696 = "RegModel"s;
                        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1800);
                        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                            = __Vfunc_get__Vfuncout_1800;
                        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4703);
                        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                            = __Vtask_get_root__Vfuncout_4703;
                        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_4696, this->__Vtask_uvm_report_error__message_4697, __Vtask_uvm_report_error__verbosity_4698, this->__Vtask_uvm_report_error__filename_4699, __Vtask_uvm_report_error__line_4700, this->__Vtask_uvm_report_error__context_name_4701, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_4702));
                    }
                } else {
                    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1801);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                        = __Vfunc_get__Vfuncout_1801;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4704);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                        = __Vtask_get_root__Vfuncout_4704;
                    __VlefCall_7__uvm_get_report_object 
                        = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
                    VL_NULL_CHECK(__VlefCall_7__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 819)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk760__DOT___local_report_object_);
                    VL_NULL_CHECK(unnamedblk760__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 819)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_8__get_report_verbosity_level);
                    __VlefLogAnd_10 = VL_LTES_III(32, 0U, __VlefCall_8__get_report_verbosity_level);
                    if (__VlefLogAnd_10) {
                        VL_NULL_CHECK(unnamedblk760__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 819)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_9__get_report_action);
                        __VlefLogAnd_10 = (0U != __VlefCall_9__get_report_action);
                    }
                    if (VL_UNLIKELY((__VlefLogAnd_10))) {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_11__get_full_name);
                        __Vtask_uvm_report_error__report_enabled_checked_4711 = 1U;
                        this->__Vtask_uvm_report_error__context_name_4710 = ""s;
                        __Vtask_uvm_report_error__line_4709 = 0x00000333U;
                        this->__Vtask_uvm_report_error__filename_4708 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh"s;
                        __Vtask_uvm_report_error__verbosity_4707 = 0U;
                        this->__Vtask_uvm_report_error__message_4706 
                            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                                VL_CONCATN_NNN(
                                                                               VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Memory '"s, __VlefCall_11__get_full_name), "' has invalid access mode, '"s), get_access__Vfuncrtn), "'"s));
                        this->__Vtask_uvm_report_error__id_4705 = "RegModel"s;
                        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1802);
                        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                            = __Vfunc_get__Vfuncout_1802;
                        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4712);
                        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                            = __Vtask_get_root__Vfuncout_4712;
                        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_4705, this->__Vtask_uvm_report_error__message_4706, __Vtask_uvm_report_error__verbosity_4707, this->__Vtask_uvm_report_error__filename_4708, __Vtask_uvm_report_error__line_4709, this->__Vtask_uvm_report_error__context_name_4710, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_4711));
                    }
                }
            } else if (("WO"s == __VCase_he6c53980__0)) {
                if ((("RW"s == get_access__Vfuncrtn) 
                     || ("WO"s == get_access__Vfuncrtn))) {
                    get_access__Vfuncrtn = "WO"s;
                } else if (("RO"s == get_access__Vfuncrtn)) {
                    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1803);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                        = __Vfunc_get__Vfuncout_1803;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4713);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                        = __Vtask_get_root__Vfuncout_4713;
                    __VlefCall_12__uvm_get_report_object 
                        = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
                    VL_NULL_CHECK(__VlefCall_12__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 835)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk761__DOT___local_report_object_);
                    VL_NULL_CHECK(unnamedblk761__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 835)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_13__get_report_verbosity_level);
                    __VlefLogAnd_15 = VL_LTES_III(32, 0U, __VlefCall_13__get_report_verbosity_level);
                    if (__VlefLogAnd_15) {
                        VL_NULL_CHECK(unnamedblk761__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 835)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_14__get_report_action);
                        __VlefLogAnd_15 = (0U != __VlefCall_14__get_report_action);
                    }
                    if (VL_UNLIKELY((__VlefLogAnd_15))) {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_16__get_full_name);
                        VL_NULL_CHECK(map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 835)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_17__get_full_name);
                        __Vtask_uvm_report_error__report_enabled_checked_4720 = 1U;
                        this->__Vtask_uvm_report_error__context_name_4719 = ""s;
                        __Vtask_uvm_report_error__line_4718 = 0x00000343U;
                        this->__Vtask_uvm_report_error__filename_4717 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh"s;
                        __Vtask_uvm_report_error__verbosity_4716 = 0U;
                        this->__Vtask_uvm_report_error__message_4715 
                            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                                VL_CONCATN_NNN(
                                                                               VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("RO memory '"s, __VlefCall_16__get_full_name), "' restricted to WO in map '"s), __VlefCall_17__get_full_name), "'"s));
                        this->__Vtask_uvm_report_error__id_4714 = "RegModel"s;
                        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1804);
                        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                            = __Vfunc_get__Vfuncout_1804;
                        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4721);
                        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                            = __Vtask_get_root__Vfuncout_4721;
                        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_4714, this->__Vtask_uvm_report_error__message_4715, __Vtask_uvm_report_error__verbosity_4716, this->__Vtask_uvm_report_error__filename_4717, __Vtask_uvm_report_error__line_4718, this->__Vtask_uvm_report_error__context_name_4719, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_4720));
                    }
                } else {
                    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1805);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                        = __Vfunc_get__Vfuncout_1805;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4722);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                        = __Vtask_get_root__Vfuncout_4722;
                    __VlefCall_18__uvm_get_report_object 
                        = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
                    VL_NULL_CHECK(__VlefCall_18__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 840)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk762__DOT___local_report_object_);
                    VL_NULL_CHECK(unnamedblk762__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 840)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_19__get_report_verbosity_level);
                    __VlefLogAnd_21 = VL_LTES_III(32, 0U, __VlefCall_19__get_report_verbosity_level);
                    if (__VlefLogAnd_21) {
                        VL_NULL_CHECK(unnamedblk762__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 840)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_20__get_report_action);
                        __VlefLogAnd_21 = (0U != __VlefCall_20__get_report_action);
                    }
                    if (VL_UNLIKELY((__VlefLogAnd_21))) {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_22__get_full_name);
                        __Vtask_uvm_report_error__report_enabled_checked_4729 = 1U;
                        this->__Vtask_uvm_report_error__context_name_4728 = ""s;
                        __Vtask_uvm_report_error__line_4727 = 0x00000348U;
                        this->__Vtask_uvm_report_error__filename_4726 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh"s;
                        __Vtask_uvm_report_error__verbosity_4725 = 0U;
                        this->__Vtask_uvm_report_error__message_4724 
                            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                                VL_CONCATN_NNN(
                                                                               VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Memory '"s, __VlefCall_22__get_full_name), "' has invalid access mode, '"s), get_access__Vfuncrtn), "'"s));
                        this->__Vtask_uvm_report_error__id_4723 = "RegModel"s;
                        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1806);
                        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                            = __Vfunc_get__Vfuncout_1806;
                        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4730);
                        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                            = __Vtask_get_root__Vfuncout_4730;
                        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_4723, this->__Vtask_uvm_report_error__message_4724, __Vtask_uvm_report_error__verbosity_4725, this->__Vtask_uvm_report_error__filename_4726, __Vtask_uvm_report_error__line_4727, this->__Vtask_uvm_report_error__context_name_4728, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_4729));
                    }
                }
            } else {
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1807);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1807;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4731);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_4731;
                __VlefCall_23__uvm_get_report_object 
                    = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
                VL_NULL_CHECK(__VlefCall_23__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 848)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk763__DOT___local_report_object_);
                VL_NULL_CHECK(unnamedblk763__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 848)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_24__get_report_verbosity_level);
                __VlefLogAnd_26 = VL_LTES_III(32, 0U, __VlefCall_24__get_report_verbosity_level);
                if (__VlefLogAnd_26) {
                    VL_NULL_CHECK(unnamedblk763__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 848)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_25__get_report_action);
                    __VlefLogAnd_26 = (0U != __VlefCall_25__get_report_action);
                }
                if (VL_UNLIKELY((__VlefLogAnd_26))) {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_27__get_full_name);
                    VL_NULL_CHECK(map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 848)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_28__get_full_name);
                    __Vtask_uvm_report_error__report_enabled_checked_4738 = 1U;
                    this->__Vtask_uvm_report_error__context_name_4737 = ""s;
                    __Vtask_uvm_report_error__line_4736 = 0x00000350U;
                    this->__Vtask_uvm_report_error__filename_4735 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh"s;
                    __Vtask_uvm_report_error__verbosity_4734 = 0U;
                    this->__Vtask_uvm_report_error__message_4733 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN(
                                                                           VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Shared memory '"s, __VlefCall_27__get_full_name), "' is not shared in map '"s), __VlefCall_28__get_full_name), "'"s));
                    this->__Vtask_uvm_report_error__id_4732 = "RegModel"s;
                    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1808);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__Vfuncout_1808;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4739);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__Vfuncout_4739;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_4732, this->__Vtask_uvm_report_error__message_4733, __Vtask_uvm_report_error__verbosity_4734, this->__Vtask_uvm_report_error__filename_4735, __Vtask_uvm_report_error__line_4736, this->__Vtask_uvm_report_error__context_name_4737, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_4738));
                }
            }
        }
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_rights(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::std::string &get_rights__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_rights\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map_info> info;
    {
        get_rights__Vfuncrtn = ""s;
        if (VL_GTES_III(32, 1U, this->__PVT__m_maps.size())) {
            get_rights__Vfuncrtn = "RW"s;
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, map);
        if ((VlNull{} == map)) {
            get_rights__Vfuncrtn = "RW"s;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 873)->__VnoInFunc_get_mem_map_info(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_mem>{this}, 1U, info);
        get_rights__Vfuncrtn = VL_NULL_CHECK(info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 874)
            ->__PVT__rights;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_offset(Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ offset, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::QData/*63:0*/ &get_offset__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_offset\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1809;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4740;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_4743;
    __Vtask_uvm_report_warning__verbosity_4743 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_4745;
    __Vtask_uvm_report_warning__line_4745 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_4747;
    __Vtask_uvm_report_warning__report_enabled_checked_4747 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1810;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4748;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_5__get_full_name;
    ::std::string __VlefCall_4__get_name;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk764__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map_info> map_info;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> orig_map;
    {
        get_offset__Vfuncrtn = 0ULL;
        orig_map = map;
        this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, map);
        if ((VlNull{} == map)) {
            get_offset__Vfuncrtn = 0xffffffffffffffffULL;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 895)->__VnoInFunc_get_mem_map_info(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_mem>{this}, 1U, map_info);
        if (VL_NULL_CHECK(map_info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 897)
            ->__PVT__unmapped) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1809);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1809;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4740);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_4740;
            __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 900)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk764__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk764__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 900)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_1__get_report_verbosity_level);
            __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
            if (__VlefLogAnd_3) {
                VL_NULL_CHECK(unnamedblk764__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 900)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_2__get_report_action);
                __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_3))) {
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
                if ((VlNull{} == orig_map)) {
                    VL_NULL_CHECK(map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 900)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
                } else {
                    VL_NULL_CHECK(orig_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 900)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
                }
                __Vtask_uvm_report_warning__report_enabled_checked_4747 = 1U;
                this->__Vtask_uvm_report_warning__context_name_4746 = ""s;
                __Vtask_uvm_report_warning__line_4745 = 0x00000384U;
                this->__Vtask_uvm_report_warning__filename_4744 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh"s;
                __Vtask_uvm_report_warning__verbosity_4743 = 0U;
                this->__Vtask_uvm_report_warning__message_4742 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Memory '"s, __VlefCall_4__get_name), "' is unmapped in map '"s), __VlefCall_5__get_full_name), "'"s));
                this->__Vtask_uvm_report_warning__id_4741 = "RegModel"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1810);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1810;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4748);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_4748;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_4741, this->__Vtask_uvm_report_warning__message_4742, __Vtask_uvm_report_warning__verbosity_4743, this->__Vtask_uvm_report_warning__filename_4744, __Vtask_uvm_report_warning__line_4745, this->__Vtask_uvm_report_warning__context_name_4746, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_4747));
            }
            get_offset__Vfuncrtn = 0xffffffffffffffffULL;
            goto __Vlabel0;
        }
        get_offset__Vfuncrtn = VL_NULL_CHECK(map_info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 904)
            ->__PVT__offset;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_virtual_registers(Vtb_top__Syms* __restrict vlSymsp, ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_vreg>> &regs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_virtual_registers\n"); );
    // Body
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_vreg> unnamedblk765__DOT__vreg;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_vreg> unnamedblk765__DOT__vreg__Vnext;
    ::CData/*0:0*/ unnamedblk765__DOT__vreg__Vmore;
    unnamedblk765__DOT__vreg__Vmore = 0;
    unnamedblk765__DOT__vreg__Vmore = (0U != this->__PVT__m_vregs.first(unnamedblk765__DOT__vreg__Vnext));
    while (unnamedblk765__DOT__vreg__Vmore) {
        unnamedblk765__DOT__vreg = unnamedblk765__DOT__vreg__Vnext;
        unnamedblk765__DOT__vreg__Vmore = (0U != this->__PVT__m_vregs.next(unnamedblk765__DOT__vreg__Vnext));
        regs.push_back(unnamedblk765__DOT__vreg);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_addresses(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ offset, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::VlQueue<::QData/*63:0*/> &addr, ::IData/*31:0*/ &get_addresses__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_addresses\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1811;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4749;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_4752;
    __Vtask_uvm_report_warning__verbosity_4752 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_4754;
    __Vtask_uvm_report_warning__line_4754 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_4756;
    __Vtask_uvm_report_warning__report_enabled_checked_4756 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1812;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4757;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1813;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4758;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_4761;
    __Vtask_uvm_report_warning__verbosity_4761 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_4763;
    __Vtask_uvm_report_warning__line_4763 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_4765;
    __Vtask_uvm_report_warning__report_enabled_checked_4765 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1814;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4766;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1815;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4767;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_4770;
    __Vtask_uvm_report_warning__verbosity_4770 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_4772;
    __Vtask_uvm_report_warning__line_4772 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_4774;
    __Vtask_uvm_report_warning__report_enabled_checked_4774 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1816;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4775;
    ::IData/*31:0*/ __Vtask_get_n_bytes__Vfuncout_4776;
    __Vtask_get_n_bytes__Vfuncout_4776 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_16__get_full_name;
    ::std::string __VlefCall_15__get_name;
    ::CData/*0:0*/ __VlefLogAnd_14;
    ::IData/*31:0*/ __VlefCall_13__get_report_action;
    ::IData/*31:0*/ __VlefCall_12__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_11__uvm_get_report_object;
    ::std::string __VlefCall_10__get_full_name;
    ::std::string __VlefCall_9__get_name;
    ::CData/*0:0*/ __VlefLogAnd_8;
    ::IData/*31:0*/ __VlefCall_7__get_report_action;
    ::IData/*31:0*/ __VlefCall_6__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_5__uvm_get_report_object;
    ::std::string __VlefCall_4__get_name;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk774__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk775__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk776__DOT___local_report_object_;
    ::IData/*31:0*/ unnamedblk777__DOT__i;
    unnamedblk777__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk777__DOT__i__Vloopsize;
    unnamedblk777__DOT__i__Vloopsize = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map_info> map_info;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> orig_map;
    {
        get_addresses__Vfuncrtn = 0U;
        orig_map = map;
        if ((offset >= this->__PVT__m_size)) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1811);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1811;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4749);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_4749;
            __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1002)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk774__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk774__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1002)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_1__get_report_verbosity_level);
            __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
            if (__VlefLogAnd_3) {
                VL_NULL_CHECK(unnamedblk774__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1002)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_2__get_report_action);
                __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_3))) {
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
                __Vtask_uvm_report_warning__report_enabled_checked_4756 = 1U;
                this->__Vtask_uvm_report_warning__context_name_4755 = ""s;
                __Vtask_uvm_report_warning__line_4754 = 0x000003eaU;
                this->__Vtask_uvm_report_warning__filename_4753 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh"s;
                __Vtask_uvm_report_warning__verbosity_4752 = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_warning__message_4751
                              ,"Offset '%0x' lies outside of memory '%s', which has a size of %0x",3
                              , '#',64,offset, 'S',&(__VlefCall_4__get_name)
                              , '#',64,this->__PVT__m_size);
                this->__Vtask_uvm_report_warning__id_4750 = "RegModel"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1812);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1812;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4757);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_4757;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_4750, this->__Vtask_uvm_report_warning__message_4751, __Vtask_uvm_report_warning__verbosity_4752, this->__Vtask_uvm_report_warning__filename_4753, __Vtask_uvm_report_warning__line_4754, this->__Vtask_uvm_report_warning__context_name_4755, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_4756));
            }
            get_addresses__Vfuncrtn = 0xffffffffU;
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, map);
        if ((VlNull{} == map)) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1813);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1813;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4758);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_4758;
            __VlefCall_5__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_5__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1011)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk775__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk775__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1011)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_6__get_report_verbosity_level);
            __VlefLogAnd_8 = VL_LTES_III(32, 0U, __VlefCall_6__get_report_verbosity_level);
            if (__VlefLogAnd_8) {
                VL_NULL_CHECK(unnamedblk775__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1011)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_7__get_report_action);
                __VlefLogAnd_8 = (0U != __VlefCall_7__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_8))) {
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_9__get_name);
                if ((VlNull{} == orig_map)) {
                    __VlefCall_10__get_full_name = "<null>"s;
                } else {
                    VL_NULL_CHECK(orig_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1011)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_10__get_full_name);
                }
                __Vtask_uvm_report_warning__report_enabled_checked_4765 = 1U;
                this->__Vtask_uvm_report_warning__context_name_4764 = ""s;
                __Vtask_uvm_report_warning__line_4763 = 0x000003f3U;
                this->__Vtask_uvm_report_warning__filename_4762 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh"s;
                __Vtask_uvm_report_warning__verbosity_4761 = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_warning__message_4760
                              ,"Memory '%s' not found in map '%s'",2
                              , 'S',&(__VlefCall_9__get_name)
                              , 'S',&(__VlefCall_10__get_full_name));
                this->__Vtask_uvm_report_warning__id_4759 = "RegModel"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1814);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1814;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4766);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_4766;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_4759, this->__Vtask_uvm_report_warning__message_4760, __Vtask_uvm_report_warning__verbosity_4761, this->__Vtask_uvm_report_warning__filename_4762, __Vtask_uvm_report_warning__line_4763, this->__Vtask_uvm_report_warning__context_name_4764, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_4765));
            }
            get_addresses__Vfuncrtn = 0xffffffffU;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1015)->__VnoInFunc_get_mem_map_info(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_mem>{this}, 1U, map_info);
        if (VL_NULL_CHECK(map_info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1017)
            ->__PVT__unmapped) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1815);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1815;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4767);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_4767;
            __VlefCall_11__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_11__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1020)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk776__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk776__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1020)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_12__get_report_verbosity_level);
            __VlefLogAnd_14 = VL_LTES_III(32, 0U, __VlefCall_12__get_report_verbosity_level);
            if (__VlefLogAnd_14) {
                VL_NULL_CHECK(unnamedblk776__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1020)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_13__get_report_action);
                __VlefLogAnd_14 = (0U != __VlefCall_13__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_14))) {
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_15__get_name);
                if ((VlNull{} == orig_map)) {
                    VL_NULL_CHECK(map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1020)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_16__get_full_name);
                } else {
                    VL_NULL_CHECK(orig_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1020)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_16__get_full_name);
                }
                __Vtask_uvm_report_warning__report_enabled_checked_4774 = 1U;
                this->__Vtask_uvm_report_warning__context_name_4773 = ""s;
                __Vtask_uvm_report_warning__line_4772 = 0x000003fcU;
                this->__Vtask_uvm_report_warning__filename_4771 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh"s;
                __Vtask_uvm_report_warning__verbosity_4770 = 0U;
                this->__Vtask_uvm_report_warning__message_4769 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Memory '"s, __VlefCall_15__get_name), "' is unmapped in map '"s), __VlefCall_16__get_full_name), "'"s));
                this->__Vtask_uvm_report_warning__id_4768 = "RegModel"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1816);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1816;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4775);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_4775;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_4768, this->__Vtask_uvm_report_warning__message_4769, __Vtask_uvm_report_warning__verbosity_4770, this->__Vtask_uvm_report_warning__filename_4771, __Vtask_uvm_report_warning__line_4772, this->__Vtask_uvm_report_warning__context_name_4773, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_4774));
            }
            get_addresses__Vfuncrtn = 0xffffffffU;
            goto __Vlabel0;
        }
        addr = VL_NULL_CHECK(map_info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1024)
            ->__PVT__addr;
        unnamedblk777__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk777__DOT__i, addr.size())) {
            unnamedblk777__DOT__i__Vloopsize = addr.size();
            addr.atWrite(unnamedblk777__DOT__i) = (addr.at(unnamedblk777__DOT__i) 
                                                   + 
                                                   ((::QData)((::IData)(VL_NULL_CHECK(map_info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1028)
                                                                        ->__PVT__mem_range[0U])) 
                                                    * offset));
            if ((unnamedblk777__DOT__i__Vloopsize <= addr.size())) {
                unnamedblk777__DOT__i = ((::IData)(1U) 
                                         + unnamedblk777__DOT__i);
            }
        }
        VL_NULL_CHECK(map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1032)->__VnoInFunc_get_n_bytes(vlSymsp, 1U, __Vtask_get_n_bytes__Vfuncout_4776);
        get_addresses__Vfuncrtn = __Vtask_get_n_bytes__Vfuncout_4776;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_address(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ offset, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::QData/*63:0*/ &get_address__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_address\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_get_addresses__Vfuncout_4777;
    __Vtask_get_addresses__Vfuncout_4777 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlQueue<::QData/*63:0*/> addr;
    get_address__Vfuncrtn = 0ULL;
    addr.clear();
    addr.atDefault() = 0;
    this->__VnoInFunc_get_addresses(vlProcess, vlSymsp, offset, map, addr, __Vtask_get_addresses__Vfuncout_4777);
    get_address__Vfuncrtn = addr.at(0U);
}

void Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_size(Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ &get_size__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_size\n"); );
    // Body
    get_size__Vfuncrtn = this->__PVT__m_size;
}

void Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_n_bits(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_n_bits__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_n_bits\n"); );
    // Body
    get_n_bits__Vfuncrtn = this->__PVT__m_n_bits;
}

void Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_n_bytes(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_n_bytes__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_n_bytes\n"); );
    // Body
    get_n_bytes__Vfuncrtn = ((::IData)(1U) + ((this->__PVT__m_n_bits 
                                               - (::IData)(1U)) 
                                              >> 3U));
}

void Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_set_coverage(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ is_on, ::IData/*31:0*/ &set_coverage__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_set_coverage\n"); );
    // Body
    {
        set_coverage__Vfuncrtn = 0U;
        if ((0U == is_on)) {
            this->__PVT__m_cover_on = is_on;
            set_coverage__Vfuncrtn = this->__PVT__m_cover_on;
            goto __Vlabel0;
        }
        this->__PVT__m_cover_on = (this->__PVT__m_has_cover 
                                   & is_on);
        set_coverage__Vfuncrtn = this->__PVT__m_cover_on;
        __Vlabel0: ;
    }
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_write(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &status, ::QData/*63:0*/ offset, ::QData/*63:0*/ value, ::IData/*31:0*/ path, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> parent, ::IData/*31:0*/ prior, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> extension, ::std::string fname, ::IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_write\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::std::string __VlefCall_0__get_full_name;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw;
    status = 0U;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pi3429b725__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "mem_write"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), rw);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1152)->__VnoInFunc_set_element(vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_mem>{this});
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1153)->__VnoInFunc_set_element_kind(vlSymsp, 2U);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1154)->__VnoInFunc_set_kind(vlSymsp, 1U);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1155)->__VnoInFunc_set_value(vlSymsp, value, 0U);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1156)->__VnoInFunc_set_offset(vlSymsp, offset);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1157)->__VnoInFunc_set_door(vlSymsp, path);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1158)->__VnoInFunc_set_map(vlSymsp, map);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1159)->__VnoInFunc_set_parent_sequence(vlSymsp, parent);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1160)->__VnoInFunc_set_priority(vlSymsp, prior);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1161)->__VnoInFunc_set_extension(vlSymsp, extension);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1162)->__VnoInFunc_set_fname(vlSymsp, fname);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1163)->__VnoInFunc_set_line(vlSymsp, lineno);
    co_await this->__VnoInFunc_do_write(vlProcess, vlSymsp, rw);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1167)->__VnoInFunc_get_status(vlSymsp, status);
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_read(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &status, ::QData/*63:0*/ offset, ::QData/*63:0*/ &value, ::IData/*31:0*/ path, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> parent, ::IData/*31:0*/ prior, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> extension, ::std::string fname, ::IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_read\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::std::string __VlefCall_0__get_full_name;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw;
    status = 0U;
    value = 0ULL;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pi3429b725__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "mem_read"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), rw);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1187)->__VnoInFunc_set_element(vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_mem>{this});
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1188)->__VnoInFunc_set_element_kind(vlSymsp, 2U);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1189)->__VnoInFunc_set_kind(vlSymsp, 0U);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1190)->__VnoInFunc_set_value(vlSymsp, 0ULL, 0U);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1191)->__VnoInFunc_set_offset(vlSymsp, offset);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1192)->__VnoInFunc_set_door(vlSymsp, path);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1193)->__VnoInFunc_set_map(vlSymsp, map);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1194)->__VnoInFunc_set_parent_sequence(vlSymsp, parent);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1195)->__VnoInFunc_set_priority(vlSymsp, prior);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1196)->__VnoInFunc_set_extension(vlSymsp, extension);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1197)->__VnoInFunc_set_fname(vlSymsp, fname);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1198)->__VnoInFunc_set_line(vlSymsp, lineno);
    co_await this->__VnoInFunc_do_read(vlProcess, vlSymsp, rw);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1202)->__VnoInFunc_get_status(vlSymsp, status);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1203)->__VnoInFunc_get_value(vlSymsp, 0U, value);
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_write(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_write\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map_info> __Vfunc_Xcheck_accessX__map_info_1817;
    ::IData/*31:0*/ __Vfunc_uvm_report_enabled__verbosity_1818;
    __Vfunc_uvm_report_enabled__verbosity_1818 = 0;
    ::CData/*1:0*/ __Vfunc_uvm_report_enabled__severity_1819;
    __Vfunc_uvm_report_enabled__severity_1819 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1821;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4778;
    ::IData/*31:0*/ __Vtask_get_value_size__Vfuncout_4779;
    __Vtask_get_value_size__Vfuncout_4779 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1822;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4780;
    ::IData/*31:0*/ __Vtask_uvm_report_info__verbosity_4783;
    __Vtask_uvm_report_info__verbosity_4783 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__line_4785;
    __Vtask_uvm_report_info__line_4785 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_info__report_enabled_checked_4787;
    __Vtask_uvm_report_info__report_enabled_checked_4787 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1823;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4788;
    ::VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::std::string __VlefCall_27__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_26;
    ::IData/*31:0*/ __VlefCall_25__get_report_action;
    ::IData/*31:0*/ __VlefCall_24__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_23__uvm_get_report_object;
    ::QData/*63:0*/ __VlefCall_22__get_offset;
    ::QData/*63:0*/ __VlefCall_21__get_value;
    ::IData/*31:0*/ __VlefCall_20__get_value_size;
    ::QData/*63:0*/ __VlefCall_19__get_offset;
    ::QData/*63:0*/ __VlefCall_18__get_offset;
    ::QData/*63:0*/ __VlefCall_17__get_value;
    ::IData/*31:0*/ __VlefCall_16__get_value_size;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_backdoor> __VlefCall_15__get_backdoor;
    ::std::string __VlefCond_14;
    ::std::string __VlefCall_13__get_full_name;
    ::IData/*31:0*/ __VlefCall_12__get_door;
    ::IData/*31:0*/ __VlefCall_11__uvm_report_enabled;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> __VlefCall_10__get_map;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> __VlefCall_9__get_map;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> __VlefCall_8__get_map;
    ::IData/*31:0*/ __VlefCall_7__get_value_size;
    ::QData/*63:0*/ __VlefCall_6__get_offset;
    ::IData/*31:0*/ __VlefCall_5__get_status;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> __VlefCall_4__get_parent_sequence;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequencer_base> __VlefCall_3__get_sequencer;
    ::IData/*31:0*/ __VlefCall_2__get_door;
    ::IData/*31:0*/ __VlefCall_1__get_status;
    ::CData/*0:0*/ __VlefCall_0__Xcheck_accessX;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk778__DOT__cb;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk779__DOT__rw_local_map;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk779__DOT__system_map;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_frontdoor> unnamedblk779__DOT__unnamedblk780__DOT__fd;
    ::QData/*63:0*/ unnamedblk779__DOT__unnamedblk781__DOT__idx;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_backdoor> unnamedblk782__DOT__bkdr;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk783__DOT__cb;
    ::std::string unnamedblk784__DOT__path_s;
    ::std::string unnamedblk784__DOT__value_s;
    ::std::string unnamedblk784__DOT__pre_s;
    ::std::string unnamedblk784__DOT__range_s;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk784__DOT__rw_map;
    ::IData/*31:0*/ unnamedblk784__DOT__unnamedblk785__DOT__rw_value_size;
    ::IData/*31:0*/ unnamedblk784__DOT__unnamedblk785__DOT__unnamedblk786__DOT__i;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk784__DOT__unnamedblk787__DOT___local_report_object_;
    ::std::string __VInside_he937bc78__0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pie43eb369> cbs;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map_info> map_info;
    {
        cbs = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pie43eb369, vlProcess, vlSymsp, 
                     ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_mem>{this});
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1286)->__VnoInFunc_get_fname(vlSymsp, this->__PVT__m_fname);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1287)->__VnoInFunc_get_line(vlSymsp, this->__PVT__m_lineno);
        this->__VnoInFunc_Xcheck_accessX(vlProcess, vlSymsp, rw, __Vfunc_Xcheck_accessX__map_info_1817, __VlefCall_0__Xcheck_accessX);
        map_info = __Vfunc_Xcheck_accessX__map_info_1817;
        if ((1U & (~ (::IData)(__VlefCall_0__Xcheck_accessX)))) {
            goto __Vlabel0;
        }
        this->__PVT__m_write_in_progress = 1U;
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1297)->__VnoInFunc_set_status(vlSymsp, 0U);
        this->__VnoInFunc_pre_write(vlSymsp, rw);
        VL_NULL_CHECK(cbs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1301)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk778__DOT__cb);
        while ((VlNull{} != unnamedblk778__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk778__DOT__cb, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1303)->__VnoInFunc_pre_write(vlProcess, vlSymsp, rw);
            VL_NULL_CHECK(cbs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1301)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk778__DOT__cb);
        }
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1307)->__VnoInFunc_get_status(vlSymsp, __VlefCall_1__get_status);
        if ((0U != __VlefCall_1__get_status)) {
            this->__PVT__m_write_in_progress = 0U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1313)->__VnoInFunc_set_status(vlSymsp, 1U);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1316)->__VnoInFunc_get_door(vlSymsp, __VlefCall_2__get_door);
        if ((0U == __VlefCall_2__get_door)) {
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1317)->__VnoInFunc_get_local_map(vlSymsp, unnamedblk779__DOT__rw_local_map);
            VL_NULL_CHECK(unnamedblk779__DOT__rw_local_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1318)->__VnoInFunc_get_root_map(vlSymsp, unnamedblk779__DOT__system_map);
            if ((VlNull{} != VL_NULL_CHECK(map_info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1320)
                 ->__PVT__frontdoor)) {
                unnamedblk779__DOT__unnamedblk780__DOT__fd 
                    = VL_NULL_CHECK(map_info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1321)
                    ->__PVT__frontdoor;
                VL_NULL_CHECK(unnamedblk779__DOT__unnamedblk780__DOT__fd, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1322)->__PVT__rw_info 
                    = rw;
                if ((VlNull{} == VL_NULL_CHECK(unnamedblk779__DOT__unnamedblk780__DOT__fd, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1323)
                     ->__PVT__sequencer)) {
                    VL_NULL_CHECK(unnamedblk779__DOT__system_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1325)->__VnoInFunc_get_sequencer(vlSymsp, 1U, __VlefCall_3__get_sequencer);
                    VL_NULL_CHECK(unnamedblk779__DOT__unnamedblk780__DOT__fd, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1325)->__PVT__sequencer 
                        = __VlefCall_3__get_sequencer;
                }
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1328)->__VnoInFunc_get_parent_sequence(vlSymsp, __VlefCall_4__get_parent_sequence);
                co_await VL_NULL_CHECK(unnamedblk779__DOT__unnamedblk780__DOT__fd, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1328)->__VnoInFunc_start(vlProcess, vlSymsp, VL_NULL_CHECK(unnamedblk779__DOT__unnamedblk780__DOT__fd, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1328)
                                                                                ->__PVT__sequencer, __VlefCall_4__get_parent_sequence, 0xffffffffU, 1U);
            } else {
                co_await VL_NULL_CHECK(unnamedblk779__DOT__rw_local_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1331)->__VnoInFunc_do_write(vlProcess, vlSymsp, rw);
            }
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1334)->__VnoInFunc_get_status(vlSymsp, __VlefCall_5__get_status);
            if ((1U != __VlefCall_5__get_status)) {
                unnamedblk779__DOT__unnamedblk781__DOT__idx = 0ULL;
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1336)->__VnoInFunc_get_offset(vlSymsp, unnamedblk779__DOT__unnamedblk781__DOT__idx);
                while (true) {
                    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1337)->__VnoInFunc_get_offset(vlSymsp, __VlefCall_6__get_offset);
                    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1337)->__VnoInFunc_get_value_size(vlSymsp, __VlefCall_7__get_value_size);
                    if (!((unnamedblk779__DOT__unnamedblk781__DOT__idx 
                           <= (__VlefCall_6__get_offset 
                               + (::QData)((::IData)(__VlefCall_7__get_value_size)))))) break;
                    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1339)->__VnoInFunc_get_map(vlSymsp, __VlefCall_8__get_map);
                    this->__VnoInFunc_XsampleX(vlSymsp, 
                                               ((::QData)((::IData)(VL_NULL_CHECK(map_info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1339)
                                                                    ->__PVT__mem_range[0U])) 
                                                * unnamedblk779__DOT__unnamedblk781__DOT__idx), 0U, __VlefCall_8__get_map);
                    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1342)->__VnoInFunc_get_map(vlSymsp, __VlefCall_9__get_map);
                    VL_NULL_CHECK(this->__PVT__m_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1340)->__VnoInFunc_XsampleX(vlSymsp, 
                                                                                (VL_NULL_CHECK(map_info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1340)
                                                                                ->__PVT__offset 
                                                                                + 
                                                                                ((::QData)((::IData)(VL_NULL_CHECK(map_info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1341)
                                                                                ->__PVT__mem_range[0U])) 
                                                                                * unnamedblk779__DOT__unnamedblk781__DOT__idx)), 0U, __VlefCall_9__get_map);
                    unnamedblk779__DOT__unnamedblk781__DOT__idx 
                        = (1ULL + unnamedblk779__DOT__unnamedblk781__DOT__idx);
                }
            }
        } else {
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1351)->__VnoInFunc_get_map(vlSymsp, __VlefCall_10__get_map);
            this->__VnoInFunc_get_access(vlProcess, vlSymsp, __VlefCall_10__get_map, __VInside_he937bc78__0);
            if ((("RW"s == __VInside_he937bc78__0) 
                 || ("WO"s == __VInside_he937bc78__0))) {
                this->__VnoInFunc_get_backdoor(vlSymsp, 1U, unnamedblk782__DOT__bkdr);
                if ((VlNull{} != unnamedblk782__DOT__bkdr)) {
                    VL_NULL_CHECK(unnamedblk782__DOT__bkdr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1355)->__VnoInFunc_write(vlProcess, vlSymsp, rw);
                } else {
                    this->__VnoInFunc_backdoor_write(vlProcess, vlSymsp, rw);
                }
            } else {
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1366)->__VnoInFunc_set_status(vlSymsp, 1U);
            }
        }
        this->__VnoInFunc_post_write(vlSymsp, rw);
        VL_NULL_CHECK(cbs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1373)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk783__DOT__cb);
        while ((VlNull{} != unnamedblk783__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk783__DOT__cb, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1375)->__VnoInFunc_post_write(vlSymsp, rw);
            VL_NULL_CHECK(cbs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1373)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk783__DOT__cb);
        }
        this->__Vfunc_uvm_report_enabled__id_1820 = "RegModel"s;
        __Vfunc_uvm_report_enabled__severity_1819 = 0U;
        __Vfunc_uvm_report_enabled__verbosity_1818 = 0x0000012cU;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1821);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1821;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_enabled__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 100)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4778);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__Vfuncout_4778;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_enabled__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 101)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__verbosity_1818, (::IData)(__Vfunc_uvm_report_enabled__severity_1819), this->__Vfunc_uvm_report_enabled__id_1820, __VlefCall_11__uvm_report_enabled);
        if ((0U != __VlefCall_11__uvm_report_enabled)) {
            unnamedblk784__DOT__path_s = ""s;
            unnamedblk784__DOT__value_s = ""s;
            unnamedblk784__DOT__pre_s = ""s;
            unnamedblk784__DOT__range_s = ""s;
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1382)->__VnoInFunc_get_map(vlSymsp, unnamedblk784__DOT__rw_map);
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1383)->__VnoInFunc_get_door(vlSymsp, __VlefCall_12__get_door);
            if ((0U == __VlefCall_12__get_door)) {
                if ((VlNull{} != VL_NULL_CHECK(map_info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1385)
                     ->__PVT__frontdoor)) {
                    __VlefCond_14 = "user frontdoor"s;
                } else {
                    VL_NULL_CHECK(unnamedblk784__DOT__rw_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1386)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_13__get_full_name);
                    __VlefCond_14 = VL_CONCATN_NNN("map "s, __VlefCall_13__get_full_name);
                }
                unnamedblk784__DOT__path_s = __VlefCond_14;
            } else {
                this->__VnoInFunc_get_backdoor(vlSymsp, 1U, __VlefCall_15__get_backdoor);
                if ((VlNull{} != __VlefCall_15__get_backdoor)) {
                    __Vtemp_1[0U] = 0x646f6f72U;
                    __Vtemp_1[1U] = 0x6261636bU;
                    __Vtemp_1[2U] = 0x73657220U;
                    __Vtemp_1[3U] = 0x00000075U;
                } else {
                    __Vtemp_1[0U] = 0x646f6f72U;
                    __Vtemp_1[1U] = 0x6261636bU;
                    __Vtemp_1[2U] = 0x44504920U;
                    __Vtemp_1[3U] = 0U;
                }
                unnamedblk784__DOT__path_s = VL_CVT_PACK_STR_NW(4, __Vtemp_1);
            }
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1395)->__VnoInFunc_get_value_size(vlSymsp, __VlefCall_16__get_value_size);
            if ((1U < __VlefCall_16__get_value_size)) {
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1396)->__VnoInFunc_get_value_size(vlSymsp, __Vtask_get_value_size__Vfuncout_4779);
                unnamedblk784__DOT__unnamedblk785__DOT__rw_value_size 
                    = __Vtask_get_value_size__Vfuncout_4779;
                unnamedblk784__DOT__value_s = "='{"s;
                unnamedblk784__DOT__pre_s = "Burst "s;
                unnamedblk784__DOT__unnamedblk785__DOT__unnamedblk786__DOT__i = 0U;
                unnamedblk784__DOT__unnamedblk785__DOT__unnamedblk786__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk784__DOT__unnamedblk785__DOT__unnamedblk786__DOT__i, unnamedblk784__DOT__unnamedblk785__DOT__rw_value_size)) {
                    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1401)->__VnoInFunc_get_value(vlSymsp, unnamedblk784__DOT__unnamedblk785__DOT__unnamedblk786__DOT__i, __VlefCall_17__get_value);
                    unnamedblk784__DOT__value_s = VL_CONCATN_NNN(unnamedblk784__DOT__value_s, VL_SFORMATF_N_NX("%0h,",1
                                                                                , '#',64,__VlefCall_17__get_value) );
                    unnamedblk784__DOT__unnamedblk785__DOT__unnamedblk786__DOT__i 
                        = ((::IData)(1U) + unnamedblk784__DOT__unnamedblk785__DOT__unnamedblk786__DOT__i);
                }
                unnamedblk784__DOT__value_s = VL_PUTC_N(unnamedblk784__DOT__value_s, 
                                                        (VL_LEN_IN(unnamedblk784__DOT__value_s) 
                                                         - (::IData)(1U)), 0x7dU);
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1405)->__VnoInFunc_get_offset(vlSymsp, __VlefCall_18__get_offset);
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1405)->__VnoInFunc_get_offset(vlSymsp, __VlefCall_19__get_offset);
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1405)->__VnoInFunc_get_value_size(vlSymsp, __VlefCall_20__get_value_size);
                VL_SFORMAT_NX(unnamedblk784__DOT__range_s
                              ,"[%0d:%0d]",2, '#',64,__VlefCall_18__get_offset
                              , '#',64,(__VlefCall_19__get_offset 
                                        + (::QData)((::IData)(__VlefCall_20__get_value_size))));
            } else {
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1408)->__VnoInFunc_get_value(vlSymsp, 0U, __VlefCall_21__get_value);
                VL_SFORMAT_NX(unnamedblk784__DOT__value_s
                              ,"=%0h",1, '#',64,__VlefCall_21__get_value);
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1409)->__VnoInFunc_get_offset(vlSymsp, __VlefCall_22__get_offset);
                VL_SFORMAT_NX(unnamedblk784__DOT__range_s
                              ,"[%0d]",1, '#',64,__VlefCall_22__get_offset);
            }
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1822);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1822;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4780);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_4780;
            __VlefCall_23__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_23__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1413)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk784__DOT__unnamedblk787__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk784__DOT__unnamedblk787__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1413)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "RegModel"s, __VlefCall_24__get_report_verbosity_level);
            __VlefLogAnd_26 = VL_LTES_III(32, 0x0000012cU, __VlefCall_24__get_report_verbosity_level);
            if (__VlefLogAnd_26) {
                VL_NULL_CHECK(unnamedblk784__DOT__unnamedblk787__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1413)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "RegModel"s, __VlefCall_25__get_report_action);
                __VlefLogAnd_26 = (0U != __VlefCall_25__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_26))) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_27__get_full_name);
                __Vtask_uvm_report_info__report_enabled_checked_4787 = 1U;
                this->__Vtask_uvm_report_info__context_name_4786 = ""s;
                __Vtask_uvm_report_info__line_4785 = 0x00000585U;
                this->__Vtask_uvm_report_info__filename_4784 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh"s;
                __Vtask_uvm_report_info__verbosity_4783 = 0x0000012cU;
                this->__Vtask_uvm_report_info__message_4782 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(unnamedblk784__DOT__pre_s, "Wrote memory via "s), unnamedblk784__DOT__path_s), ": "s), __VlefCall_27__get_full_name), unnamedblk784__DOT__range_s), unnamedblk784__DOT__value_s));
                this->__Vtask_uvm_report_info__id_4781 = "RegModel"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1823);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1823;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 147)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4788);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_4788;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 148)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__id_4781, this->__Vtask_uvm_report_info__message_4782, __Vtask_uvm_report_info__verbosity_4783, this->__Vtask_uvm_report_info__filename_4784, __Vtask_uvm_report_info__line_4785, this->__Vtask_uvm_report_info__context_name_4786, (::IData)(__Vtask_uvm_report_info__report_enabled_checked_4787));
            }
        }
        this->__PVT__m_write_in_progress = 0U;
        __Vlabel0: ;
    }
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_read(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_read\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map_info> __Vfunc_Xcheck_accessX__map_info_1824;
    ::IData/*31:0*/ __Vfunc_uvm_report_enabled__verbosity_1825;
    __Vfunc_uvm_report_enabled__verbosity_1825 = 0;
    ::CData/*1:0*/ __Vfunc_uvm_report_enabled__severity_1826;
    __Vfunc_uvm_report_enabled__severity_1826 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1828;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4789;
    ::IData/*31:0*/ __Vtask_get_value_size__Vfuncout_4790;
    __Vtask_get_value_size__Vfuncout_4790 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1829;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4791;
    ::IData/*31:0*/ __Vtask_uvm_report_info__verbosity_4794;
    __Vtask_uvm_report_info__verbosity_4794 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__line_4796;
    __Vtask_uvm_report_info__line_4796 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_info__report_enabled_checked_4798;
    __Vtask_uvm_report_info__report_enabled_checked_4798 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1830;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4799;
    ::VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::std::string __VlefCall_26__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_25;
    ::IData/*31:0*/ __VlefCall_24__get_report_action;
    ::IData/*31:0*/ __VlefCall_23__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_22__uvm_get_report_object;
    ::QData/*63:0*/ __VlefCall_21__get_offset;
    ::QData/*63:0*/ __VlefCall_20__get_value;
    ::QData/*63:0*/ __VlefCall_19__get_offset;
    ::QData/*63:0*/ __VlefCall_18__get_offset;
    ::QData/*63:0*/ __VlefCall_17__get_value;
    ::IData/*31:0*/ __VlefCall_16__get_value_size;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_backdoor> __VlefCall_15__get_backdoor;
    ::std::string __VlefCond_14;
    ::std::string __VlefCall_13__get_full_name;
    ::IData/*31:0*/ __VlefCall_12__get_door;
    ::IData/*31:0*/ __VlefCall_11__uvm_report_enabled;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> __VlefCall_10__get_map;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> __VlefCall_9__get_map;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> __VlefCall_8__get_map;
    ::IData/*31:0*/ __VlefCall_7__get_value_size;
    ::QData/*63:0*/ __VlefCall_6__get_offset;
    ::IData/*31:0*/ __VlefCall_5__get_status;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> __VlefCall_4__get_parent_sequence;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequencer_base> __VlefCall_3__get_sequencer;
    ::IData/*31:0*/ __VlefCall_2__get_door;
    ::IData/*31:0*/ __VlefCall_1__get_status;
    ::CData/*0:0*/ __VlefCall_0__Xcheck_accessX;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk788__DOT__cb;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk789__DOT__rw_local_map;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk789__DOT__system_map;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_frontdoor> unnamedblk789__DOT__unnamedblk790__DOT__fd;
    ::QData/*63:0*/ unnamedblk789__DOT__unnamedblk791__DOT__idx;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_backdoor> unnamedblk792__DOT__bkdr;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk793__DOT__cb;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk794__DOT__rw_map;
    ::std::string unnamedblk794__DOT__path_s;
    ::std::string unnamedblk794__DOT__value_s;
    ::std::string unnamedblk794__DOT__pre_s;
    ::std::string unnamedblk794__DOT__range_s;
    ::IData/*31:0*/ unnamedblk794__DOT__unnamedblk795__DOT__rw_value_size;
    ::IData/*31:0*/ unnamedblk794__DOT__unnamedblk795__DOT__unnamedblk796__DOT__i;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk794__DOT__unnamedblk797__DOT___local_report_object_;
    ::std::string __VInside_he96819b8__0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pie43eb369> cbs;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map_info> map_info;
    {
        cbs = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pie43eb369, vlProcess, vlSymsp, 
                     ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_mem>{this});
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1428)->__VnoInFunc_get_fname(vlSymsp, this->__PVT__m_fname);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1429)->__VnoInFunc_get_line(vlSymsp, this->__PVT__m_lineno);
        this->__VnoInFunc_Xcheck_accessX(vlProcess, vlSymsp, rw, __Vfunc_Xcheck_accessX__map_info_1824, __VlefCall_0__Xcheck_accessX);
        map_info = __Vfunc_Xcheck_accessX__map_info_1824;
        if ((1U & (~ (::IData)(__VlefCall_0__Xcheck_accessX)))) {
            goto __Vlabel0;
        }
        this->__PVT__m_read_in_progress = 1U;
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1439)->__VnoInFunc_set_status(vlSymsp, 0U);
        this->__VnoInFunc_pre_read(vlSymsp, rw);
        VL_NULL_CHECK(cbs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1443)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk788__DOT__cb);
        while ((VlNull{} != unnamedblk788__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk788__DOT__cb, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1445)->__VnoInFunc_pre_read(vlProcess, vlSymsp, rw);
            VL_NULL_CHECK(cbs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1443)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk788__DOT__cb);
        }
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1449)->__VnoInFunc_get_status(vlSymsp, __VlefCall_1__get_status);
        if ((0U != __VlefCall_1__get_status)) {
            this->__PVT__m_read_in_progress = 0U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1455)->__VnoInFunc_set_status(vlSymsp, 1U);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1458)->__VnoInFunc_get_door(vlSymsp, __VlefCall_2__get_door);
        if ((0U == __VlefCall_2__get_door)) {
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1459)->__VnoInFunc_get_local_map(vlSymsp, unnamedblk789__DOT__rw_local_map);
            VL_NULL_CHECK(unnamedblk789__DOT__rw_local_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1460)->__VnoInFunc_get_root_map(vlSymsp, unnamedblk789__DOT__system_map);
            if ((VlNull{} != VL_NULL_CHECK(map_info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1462)
                 ->__PVT__frontdoor)) {
                unnamedblk789__DOT__unnamedblk790__DOT__fd 
                    = VL_NULL_CHECK(map_info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1463)
                    ->__PVT__frontdoor;
                VL_NULL_CHECK(unnamedblk789__DOT__unnamedblk790__DOT__fd, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1464)->__PVT__rw_info 
                    = rw;
                if ((VlNull{} == VL_NULL_CHECK(unnamedblk789__DOT__unnamedblk790__DOT__fd, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1465)
                     ->__PVT__sequencer)) {
                    VL_NULL_CHECK(unnamedblk789__DOT__system_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1467)->__VnoInFunc_get_sequencer(vlSymsp, 1U, __VlefCall_3__get_sequencer);
                    VL_NULL_CHECK(unnamedblk789__DOT__unnamedblk790__DOT__fd, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1467)->__PVT__sequencer 
                        = __VlefCall_3__get_sequencer;
                }
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1470)->__VnoInFunc_get_parent_sequence(vlSymsp, __VlefCall_4__get_parent_sequence);
                co_await VL_NULL_CHECK(unnamedblk789__DOT__unnamedblk790__DOT__fd, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1470)->__VnoInFunc_start(vlProcess, vlSymsp, VL_NULL_CHECK(unnamedblk789__DOT__unnamedblk790__DOT__fd, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1470)
                                                                                ->__PVT__sequencer, __VlefCall_4__get_parent_sequence, 0xffffffffU, 1U);
            } else {
                co_await VL_NULL_CHECK(unnamedblk789__DOT__rw_local_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1473)->__VnoInFunc_do_read(vlProcess, vlSymsp, rw);
            }
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1476)->__VnoInFunc_get_status(vlSymsp, __VlefCall_5__get_status);
            if ((1U != __VlefCall_5__get_status)) {
                unnamedblk789__DOT__unnamedblk791__DOT__idx = 0ULL;
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1478)->__VnoInFunc_get_offset(vlSymsp, unnamedblk789__DOT__unnamedblk791__DOT__idx);
                while (true) {
                    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1479)->__VnoInFunc_get_offset(vlSymsp, __VlefCall_6__get_offset);
                    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1479)->__VnoInFunc_get_value_size(vlSymsp, __VlefCall_7__get_value_size);
                    if (!((unnamedblk789__DOT__unnamedblk791__DOT__idx 
                           <= (__VlefCall_6__get_offset 
                               + (::QData)((::IData)(__VlefCall_7__get_value_size)))))) break;
                    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1481)->__VnoInFunc_get_map(vlSymsp, __VlefCall_8__get_map);
                    this->__VnoInFunc_XsampleX(vlSymsp, 
                                               ((::QData)((::IData)(VL_NULL_CHECK(map_info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1481)
                                                                    ->__PVT__mem_range[0U])) 
                                                * unnamedblk789__DOT__unnamedblk791__DOT__idx), 1U, __VlefCall_8__get_map);
                    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1484)->__VnoInFunc_get_map(vlSymsp, __VlefCall_9__get_map);
                    VL_NULL_CHECK(this->__PVT__m_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1482)->__VnoInFunc_XsampleX(vlSymsp, 
                                                                                (VL_NULL_CHECK(map_info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1482)
                                                                                ->__PVT__offset 
                                                                                + 
                                                                                ((::QData)((::IData)(VL_NULL_CHECK(map_info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1483)
                                                                                ->__PVT__mem_range[0U])) 
                                                                                * unnamedblk789__DOT__unnamedblk791__DOT__idx)), 1U, __VlefCall_9__get_map);
                    unnamedblk789__DOT__unnamedblk791__DOT__idx 
                        = (1ULL + unnamedblk789__DOT__unnamedblk791__DOT__idx);
                }
            }
        } else {
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1493)->__VnoInFunc_get_map(vlSymsp, __VlefCall_10__get_map);
            this->__VnoInFunc_get_access(vlProcess, vlSymsp, __VlefCall_10__get_map, __VInside_he96819b8__0);
            if ((("RW"s == __VInside_he96819b8__0) 
                 || ("RO"s == __VInside_he96819b8__0))) {
                this->__VnoInFunc_get_backdoor(vlSymsp, 1U, unnamedblk792__DOT__bkdr);
                if ((VlNull{} != unnamedblk792__DOT__bkdr)) {
                    VL_NULL_CHECK(unnamedblk792__DOT__bkdr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1497)->__VnoInFunc_read(vlProcess, vlSymsp, rw);
                } else {
                    this->__VnoInFunc_backdoor_read(vlProcess, vlSymsp, rw);
                }
            } else {
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1508)->__VnoInFunc_set_status(vlSymsp, 1U);
            }
        }
        VL_NULL_CHECK(cbs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1515)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk793__DOT__cb);
        while ((VlNull{} != unnamedblk793__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk793__DOT__cb, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1517)->__VnoInFunc_post_read(vlSymsp, rw);
            VL_NULL_CHECK(cbs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1515)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk793__DOT__cb);
        }
        this->__VnoInFunc_post_read(vlSymsp, rw);
        this->__Vfunc_uvm_report_enabled__id_1827 = "RegModel"s;
        __Vfunc_uvm_report_enabled__severity_1826 = 0U;
        __Vfunc_uvm_report_enabled__verbosity_1825 = 0x0000012cU;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1828);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1828;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_enabled__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 100)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4789);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__Vfuncout_4789;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_enabled__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 101)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__verbosity_1825, (::IData)(__Vfunc_uvm_report_enabled__severity_1826), this->__Vfunc_uvm_report_enabled__id_1827, __VlefCall_11__uvm_report_enabled);
        if ((0U != __VlefCall_11__uvm_report_enabled)) {
            unnamedblk794__DOT__path_s = ""s;
            unnamedblk794__DOT__value_s = ""s;
            unnamedblk794__DOT__pre_s = ""s;
            unnamedblk794__DOT__range_s = ""s;
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1527)->__VnoInFunc_get_map(vlSymsp, unnamedblk794__DOT__rw_map);
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1528)->__VnoInFunc_get_door(vlSymsp, __VlefCall_12__get_door);
            if ((0U == __VlefCall_12__get_door)) {
                if ((VlNull{} != VL_NULL_CHECK(map_info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1530)
                     ->__PVT__frontdoor)) {
                    __VlefCond_14 = "user frontdoor"s;
                } else {
                    VL_NULL_CHECK(unnamedblk794__DOT__rw_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1531)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_13__get_full_name);
                    __VlefCond_14 = VL_CONCATN_NNN("map "s, __VlefCall_13__get_full_name);
                }
                unnamedblk794__DOT__path_s = __VlefCond_14;
            } else {
                this->__VnoInFunc_get_backdoor(vlSymsp, 1U, __VlefCall_15__get_backdoor);
                if ((VlNull{} != __VlefCall_15__get_backdoor)) {
                    __Vtemp_1[0U] = 0x646f6f72U;
                    __Vtemp_1[1U] = 0x6261636bU;
                    __Vtemp_1[2U] = 0x73657220U;
                    __Vtemp_1[3U] = 0x00000075U;
                } else {
                    __Vtemp_1[0U] = 0x646f6f72U;
                    __Vtemp_1[1U] = 0x6261636bU;
                    __Vtemp_1[2U] = 0x44504920U;
                    __Vtemp_1[3U] = 0U;
                }
                unnamedblk794__DOT__path_s = VL_CVT_PACK_STR_NW(4, __Vtemp_1);
            }
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1540)->__VnoInFunc_get_value_size(vlSymsp, __VlefCall_16__get_value_size);
            if ((1U < __VlefCall_16__get_value_size)) {
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1541)->__VnoInFunc_get_value_size(vlSymsp, __Vtask_get_value_size__Vfuncout_4790);
                unnamedblk794__DOT__unnamedblk795__DOT__rw_value_size 
                    = __Vtask_get_value_size__Vfuncout_4790;
                unnamedblk794__DOT__value_s = "='{"s;
                unnamedblk794__DOT__pre_s = "Burst "s;
                unnamedblk794__DOT__unnamedblk795__DOT__unnamedblk796__DOT__i = 0U;
                unnamedblk794__DOT__unnamedblk795__DOT__unnamedblk796__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk794__DOT__unnamedblk795__DOT__unnamedblk796__DOT__i, unnamedblk794__DOT__unnamedblk795__DOT__rw_value_size)) {
                    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1546)->__VnoInFunc_get_value(vlSymsp, unnamedblk794__DOT__unnamedblk795__DOT__unnamedblk796__DOT__i, __VlefCall_17__get_value);
                    unnamedblk794__DOT__value_s = VL_CONCATN_NNN(unnamedblk794__DOT__value_s, VL_SFORMATF_N_NX("%0h,",1
                                                                                , '#',64,__VlefCall_17__get_value) );
                    unnamedblk794__DOT__unnamedblk795__DOT__unnamedblk796__DOT__i 
                        = ((::IData)(1U) + unnamedblk794__DOT__unnamedblk795__DOT__unnamedblk796__DOT__i);
                }
                unnamedblk794__DOT__value_s = VL_PUTC_N(unnamedblk794__DOT__value_s, 
                                                        (VL_LEN_IN(unnamedblk794__DOT__value_s) 
                                                         - (::IData)(1U)), 0x7dU);
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1550)->__VnoInFunc_get_offset(vlSymsp, __VlefCall_18__get_offset);
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1550)->__VnoInFunc_get_offset(vlSymsp, __VlefCall_19__get_offset);
                VL_SFORMAT_NX(unnamedblk794__DOT__range_s
                              ,"[%0d:%0d]",2, '#',64,__VlefCall_18__get_offset
                              , '#',64,(__VlefCall_19__get_offset 
                                        + (::QData)((::IData)(unnamedblk794__DOT__unnamedblk795__DOT__rw_value_size))));
            } else {
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1553)->__VnoInFunc_get_value(vlSymsp, 0U, __VlefCall_20__get_value);
                VL_SFORMAT_NX(unnamedblk794__DOT__value_s
                              ,"=%0h",1, '#',64,__VlefCall_20__get_value);
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1554)->__VnoInFunc_get_offset(vlSymsp, __VlefCall_21__get_offset);
                VL_SFORMAT_NX(unnamedblk794__DOT__range_s
                              ,"[%0d]",1, '#',64,__VlefCall_21__get_offset);
            }
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1829);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1829;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4791);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_4791;
            __VlefCall_22__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_22__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1558)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk794__DOT__unnamedblk797__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk794__DOT__unnamedblk797__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1558)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "RegModel"s, __VlefCall_23__get_report_verbosity_level);
            __VlefLogAnd_25 = VL_LTES_III(32, 0x0000012cU, __VlefCall_23__get_report_verbosity_level);
            if (__VlefLogAnd_25) {
                VL_NULL_CHECK(unnamedblk794__DOT__unnamedblk797__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1558)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "RegModel"s, __VlefCall_24__get_report_action);
                __VlefLogAnd_25 = (0U != __VlefCall_24__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_25))) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_26__get_full_name);
                __Vtask_uvm_report_info__report_enabled_checked_4798 = 1U;
                this->__Vtask_uvm_report_info__context_name_4797 = ""s;
                __Vtask_uvm_report_info__line_4796 = 0x00000616U;
                this->__Vtask_uvm_report_info__filename_4795 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh"s;
                __Vtask_uvm_report_info__verbosity_4794 = 0x0000012cU;
                this->__Vtask_uvm_report_info__message_4793 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(unnamedblk794__DOT__pre_s, "Read memory via "s), unnamedblk794__DOT__path_s), ": "s), __VlefCall_26__get_full_name), unnamedblk794__DOT__range_s), unnamedblk794__DOT__value_s));
                this->__Vtask_uvm_report_info__id_4792 = "RegModel"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1830);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1830;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 147)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4799);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_4799;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 148)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__id_4792, this->__Vtask_uvm_report_info__message_4793, __Vtask_uvm_report_info__verbosity_4794, this->__Vtask_uvm_report_info__filename_4795, __Vtask_uvm_report_info__line_4796, this->__Vtask_uvm_report_info__context_name_4797, (::IData)(__Vtask_uvm_report_info__report_enabled_checked_4798));
            }
        }
        this->__PVT__m_read_in_progress = 0U;
        __Vlabel0: ;
    }
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_Xcheck_accessX(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map_info> &map_info, ::CData/*0:0*/ &Xcheck_accessX__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_Xcheck_accessX\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1831;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4800;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_4803;
    __Vtask_uvm_report_error__verbosity_4803 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_4805;
    __Vtask_uvm_report_error__line_4805 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_4807;
    __Vtask_uvm_report_error__report_enabled_checked_4807 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1832;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4808;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1833;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4809;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_4812;
    __Vtask_uvm_report_warning__verbosity_4812 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_4814;
    __Vtask_uvm_report_warning__line_4814 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_4816;
    __Vtask_uvm_report_warning__report_enabled_checked_4816 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1834;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4817;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1835;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4818;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_4821;
    __Vtask_uvm_report_error__verbosity_4821 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_4823;
    __Vtask_uvm_report_error__line_4823 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_4825;
    __Vtask_uvm_report_error__report_enabled_checked_4825 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1836;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4826;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1837;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4827;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_4830;
    __Vtask_uvm_report_error__verbosity_4830 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_4832;
    __Vtask_uvm_report_error__line_4832 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_4834;
    __Vtask_uvm_report_error__report_enabled_checked_4834 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1838;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4835;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1839;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4836;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_4839;
    __Vtask_uvm_report_error__verbosity_4839 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_4841;
    __Vtask_uvm_report_error__line_4841 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_4843;
    __Vtask_uvm_report_error__report_enabled_checked_4843 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1840;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4844;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1841;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4845;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_4848;
    __Vtask_uvm_report_error__verbosity_4848 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_4850;
    __Vtask_uvm_report_error__line_4850 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_4852;
    __Vtask_uvm_report_error__report_enabled_checked_4852 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1842;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4853;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> __VlefCall_59__get_local_map;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> __VlefCall_58__get_map;
    ::QData/*63:0*/ __VlefCall_57__get_offset;
    ::IData/*31:0*/ __VlefCall_56__get_value_size;
    ::CData/*0:0*/ __VlefLogAnd_55;
    ::IData/*31:0*/ __VlefCall_54__get_report_action;
    ::IData/*31:0*/ __VlefCall_53__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_52__uvm_get_report_object;
    ::IData/*31:0*/ __VlefCall_51__get_value_size;
    ::QData/*63:0*/ __VlefCall_50__get_offset;
    ::IData/*31:0*/ __VlefCall_49__get_n_bytes;
    ::IData/*31:0*/ __VlefCall_48__get_n_bits;
    ::CData/*0:0*/ __VlefLogAnd_47;
    ::IData/*31:0*/ __VlefCall_46__get_report_action;
    ::IData/*31:0*/ __VlefCall_45__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_44__uvm_get_report_object;
    ::IData/*31:0*/ __VlefCall_43__get_n_bytes;
    ::IData/*31:0*/ __VlefCall_42__get_n_bits;
    ::IData/*31:0*/ __VlefCall_41__get_value_size;
    ::std::string __VlefCall_40__get_full_name;
    ::std::string __VlefCall_39__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_38;
    ::IData/*31:0*/ __VlefCall_37__get_report_action;
    ::IData/*31:0*/ __VlefCall_36__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_35__uvm_get_report_object;
    ::std::string __VlefCall_34__get_full_name;
    ::std::string __VlefCall_33__get_type_name;
    ::CData/*0:0*/ __VlefLogAnd_32;
    ::IData/*31:0*/ __VlefCall_31__get_report_action;
    ::std::string __VlefCall_30__get_type_name;
    ::IData/*31:0*/ __VlefCall_29__get_report_verbosity_level;
    ::std::string __VlefCall_28__get_type_name;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_27__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> __VlefCall_26__get_local_map;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> __VlefCall_25__get_local_map;
    ::IData/*31:0*/ __VlefCall_24__get_door;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> __VlefCall_23__backdoor;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> __VlefCall_22__get_default_map;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> __VlefCall_21__get_default_map;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> __VlefCall_20__get_map;
    ::std::string __VlefCall_19__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_18;
    ::IData/*31:0*/ __VlefCall_17__get_report_action;
    ::IData/*31:0*/ __VlefCall_16__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_15__uvm_get_report_object;
    ::CData/*0:0*/ __VlefLogAnd_14;
    ::CData/*0:0*/ __VlefCall_13__has_hdl_path;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_backdoor> __VlefCall_12__get_backdoor;
    ::IData/*31:0*/ __VlefCall_11__get_door;
    ::IData/*31:0*/ __VlefCall_10__get_default_door;
    ::IData/*31:0*/ __VlefCall_9__get_door;
    ::QData/*63:0*/ __VlefCall_8__get_offset;
    ::std::string __VlefCall_7__get_type_name;
    ::CData/*0:0*/ __VlefLogAnd_6;
    ::IData/*31:0*/ __VlefCall_5__get_report_action;
    ::std::string __VlefCall_4__get_type_name;
    ::IData/*31:0*/ __VlefCall_3__get_report_verbosity_level;
    ::std::string __VlefCall_2__get_type_name;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_1__uvm_get_report_object;
    ::QData/*63:0*/ __VlefCall_0__get_offset;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk798__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk799__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk800__DOT__rw_local_map;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk800__DOT__rw_map;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk800__DOT__unnamedblk801__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk800__DOT__unnamedblk802__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk800__DOT__unnamedblk803__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk800__DOT__unnamedblk804__DOT___local_report_object_;
    {
        Xcheck_accessX__Vfuncrtn = 0U;
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1571)->__VnoInFunc_get_offset(vlSymsp, __VlefCall_0__get_offset);
        if ((__VlefCall_0__get_offset >= this->__PVT__m_size)) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1831);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1831;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4800);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_4800;
            __VlefCall_1__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_1__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1574)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk798__DOT___local_report_object_);
            this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_2__get_type_name);
            VL_NULL_CHECK(unnamedblk798__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1574)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_2__get_type_name), __VlefCall_3__get_report_verbosity_level);
            __VlefLogAnd_6 = VL_LTES_III(32, 0U, __VlefCall_3__get_report_verbosity_level);
            if (__VlefLogAnd_6) {
                this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_4__get_type_name);
                VL_NULL_CHECK(unnamedblk798__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1574)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_4__get_type_name), __VlefCall_5__get_report_action);
                __VlefLogAnd_6 = (0U != __VlefCall_5__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_6))) {
                this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_7__get_type_name);
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1574)->__VnoInFunc_get_offset(vlSymsp, __VlefCall_8__get_offset);
                __Vtask_uvm_report_error__report_enabled_checked_4807 = 1U;
                this->__Vtask_uvm_report_error__context_name_4806 = ""s;
                __Vtask_uvm_report_error__line_4805 = 0x00000626U;
                this->__Vtask_uvm_report_error__filename_4804 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh"s;
                __Vtask_uvm_report_error__verbosity_4803 = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__message_4802
                              ,"Offset 'h%0h exceeds size of memory, 'h%0h",2
                              , '#',64,__VlefCall_8__get_offset
                              , '#',64,this->__PVT__m_size);
                this->__Vtask_uvm_report_error__id_4801 
                    = VL_CVT_PACK_STR_NN(__VlefCall_7__get_type_name);
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1832);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1832;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4808);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_4808;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_4801, this->__Vtask_uvm_report_error__message_4802, __Vtask_uvm_report_error__verbosity_4803, this->__Vtask_uvm_report_error__filename_4804, __Vtask_uvm_report_error__line_4805, this->__Vtask_uvm_report_error__context_name_4806, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_4807));
            }
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1575)->__VnoInFunc_set_status(vlSymsp, 1U);
            Xcheck_accessX__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1579)->__VnoInFunc_get_door(vlSymsp, __VlefCall_9__get_door);
        if ((3U == __VlefCall_9__get_door)) {
            VL_NULL_CHECK(this->__PVT__m_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1581)->__VnoInFunc_get_default_door(vlSymsp, __VlefCall_10__get_default_door);
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1581)->__VnoInFunc_set_door(vlSymsp, __VlefCall_10__get_default_door);
        }
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1585)->__VnoInFunc_get_door(vlSymsp, __VlefCall_11__get_door);
        if ((1U == __VlefCall_11__get_door)) {
            this->__VnoInFunc_get_backdoor(vlSymsp, 1U, __VlefCall_12__get_backdoor);
            __VlefLogAnd_14 = (VlNull{} == __VlefCall_12__get_backdoor);
            if (__VlefLogAnd_14) {
                this->__VnoInFunc_has_hdl_path(vlSymsp, ""s, __VlefCall_13__has_hdl_path);
                __VlefLogAnd_14 = (1U & (~ (::IData)(__VlefCall_13__has_hdl_path)));
            }
            if (__VlefLogAnd_14) {
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1833);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1833;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4809);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_4809;
                __VlefCall_15__uvm_get_report_object 
                    = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
                VL_NULL_CHECK(__VlefCall_15__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1589)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk799__DOT___local_report_object_);
                VL_NULL_CHECK(unnamedblk799__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1589)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_16__get_report_verbosity_level);
                __VlefLogAnd_18 = VL_LTES_III(32, 0U, __VlefCall_16__get_report_verbosity_level);
                if (__VlefLogAnd_18) {
                    VL_NULL_CHECK(unnamedblk799__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1589)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_17__get_report_action);
                    __VlefLogAnd_18 = (0U != __VlefCall_17__get_report_action);
                }
                if (VL_UNLIKELY((__VlefLogAnd_18))) {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_19__get_full_name);
                    __Vtask_uvm_report_warning__report_enabled_checked_4816 = 1U;
                    this->__Vtask_uvm_report_warning__context_name_4815 = ""s;
                    __Vtask_uvm_report_warning__line_4814 = 0x00000635U;
                    this->__Vtask_uvm_report_warning__filename_4813 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh"s;
                    __Vtask_uvm_report_warning__verbosity_4812 = 0U;
                    this->__Vtask_uvm_report_warning__message_4811 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN("No backdoor access available for memory '"s, __VlefCall_19__get_full_name), "' . Using frontdoor instead."s));
                    this->__Vtask_uvm_report_warning__id_4810 = "RegModel"s;
                    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1834);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__Vfuncout_1834;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4817);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__Vfuncout_4817;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_4810, this->__Vtask_uvm_report_warning__message_4811, __Vtask_uvm_report_warning__verbosity_4812, this->__Vtask_uvm_report_warning__filename_4813, __Vtask_uvm_report_warning__line_4814, this->__Vtask_uvm_report_warning__context_name_4815, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_4816));
                }
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1590)->__VnoInFunc_set_door(vlSymsp, 0U);
            } else {
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1592)->__VnoInFunc_get_map(vlSymsp, __VlefCall_20__get_map);
                if ((VlNull{} == __VlefCall_20__get_map)) {
                    this->__VnoInFunc_get_default_map(vlProcess, vlSymsp, __VlefCall_21__get_default_map);
                    if ((VlNull{} != __VlefCall_21__get_default_map)) {
                        this->__VnoInFunc_get_default_map(vlProcess, vlSymsp, __VlefCall_22__get_default_map);
                        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1595)->__VnoInFunc_set_map(vlSymsp, __VlefCall_22__get_default_map);
                    } else {
                        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_reg_map__Vclpkg.__VnoInFunc_backdoor(vlProcess, vlSymsp, __VlefCall_23__backdoor);
                        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1600)->__VnoInFunc_set_map(vlSymsp, __VlefCall_23__backdoor);
                    }
                }
            }
        }
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1607)->__VnoInFunc_get_door(vlSymsp, __VlefCall_24__get_door);
        if ((1U != __VlefCall_24__get_door)) {
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1611)->__VnoInFunc_get_map(vlSymsp, unnamedblk800__DOT__rw_map);
            this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, unnamedblk800__DOT__rw_map, __VlefCall_25__get_local_map);
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1612)->__VnoInFunc_set_local_map(vlSymsp, __VlefCall_25__get_local_map);
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1615)->__VnoInFunc_get_local_map(vlSymsp, __VlefCall_26__get_local_map);
            if ((VlNull{} == __VlefCall_26__get_local_map)) {
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1835);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1835;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4818);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_4818;
                __VlefCall_27__uvm_get_report_object 
                    = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
                VL_NULL_CHECK(__VlefCall_27__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1618)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk800__DOT__unnamedblk801__DOT___local_report_object_);
                this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_28__get_type_name);
                VL_NULL_CHECK(unnamedblk800__DOT__unnamedblk801__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1618)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_28__get_type_name), __VlefCall_29__get_report_verbosity_level);
                __VlefLogAnd_32 = VL_LTES_III(32, 0U, __VlefCall_29__get_report_verbosity_level);
                if (__VlefLogAnd_32) {
                    this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_30__get_type_name);
                    VL_NULL_CHECK(unnamedblk800__DOT__unnamedblk801__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1618)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_30__get_type_name), __VlefCall_31__get_report_action);
                    __VlefLogAnd_32 = (0U != __VlefCall_31__get_report_action);
                }
                if (VL_UNLIKELY((__VlefLogAnd_32))) {
                    this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_33__get_type_name);
                    VL_NULL_CHECK(unnamedblk800__DOT__rw_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1618)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_34__get_full_name);
                    __Vtask_uvm_report_error__report_enabled_checked_4825 = 1U;
                    this->__Vtask_uvm_report_error__context_name_4824 = ""s;
                    __Vtask_uvm_report_error__line_4823 = 0x00000652U;
                    this->__Vtask_uvm_report_error__filename_4822 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh"s;
                    __Vtask_uvm_report_error__verbosity_4821 = 0U;
                    this->__Vtask_uvm_report_error__message_4820 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN("No transactor available to physically access memory from map '"s, __VlefCall_34__get_full_name), "'"s));
                    this->__Vtask_uvm_report_error__id_4819 
                        = VL_CVT_PACK_STR_NN(__VlefCall_33__get_type_name);
                    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1836);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__Vfuncout_1836;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4826);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__Vfuncout_4826;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_4819, this->__Vtask_uvm_report_error__message_4820, __Vtask_uvm_report_error__verbosity_4821, this->__Vtask_uvm_report_error__filename_4822, __Vtask_uvm_report_error__line_4823, this->__Vtask_uvm_report_error__context_name_4824, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_4825));
                }
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1619)->__VnoInFunc_set_status(vlSymsp, 1U);
                Xcheck_accessX__Vfuncrtn = 0U;
                goto __Vlabel0;
            }
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1623)->__VnoInFunc_get_local_map(vlSymsp, unnamedblk800__DOT__rw_local_map);
            VL_NULL_CHECK(unnamedblk800__DOT__rw_local_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1624)->__VnoInFunc_get_mem_map_info(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_mem>{this}, 1U, map_info);
            if ((VlNull{} == VL_NULL_CHECK(map_info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1626)
                 ->__PVT__frontdoor)) {
                if (VL_NULL_CHECK(map_info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1628)
                    ->__PVT__unmapped) {
                    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1837);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                        = __Vfunc_get__Vfuncout_1837;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4827);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                        = __Vtask_get_root__Vfuncout_4827;
                    __VlefCall_35__uvm_get_report_object 
                        = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
                    VL_NULL_CHECK(__VlefCall_35__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1631)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk800__DOT__unnamedblk802__DOT___local_report_object_);
                    VL_NULL_CHECK(unnamedblk800__DOT__unnamedblk802__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1631)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_36__get_report_verbosity_level);
                    __VlefLogAnd_38 = VL_LTES_III(32, 0U, __VlefCall_36__get_report_verbosity_level);
                    if (__VlefLogAnd_38) {
                        VL_NULL_CHECK(unnamedblk800__DOT__unnamedblk802__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1631)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_37__get_report_action);
                        __VlefLogAnd_38 = (0U != __VlefCall_37__get_report_action);
                    }
                    if (VL_UNLIKELY((__VlefLogAnd_38))) {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_39__get_full_name);
                        VL_NULL_CHECK(unnamedblk800__DOT__rw_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1631)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_40__get_full_name);
                        __Vtask_uvm_report_error__report_enabled_checked_4834 = 1U;
                        this->__Vtask_uvm_report_error__context_name_4833 = ""s;
                        __Vtask_uvm_report_error__line_4832 = 0x0000065fU;
                        this->__Vtask_uvm_report_error__filename_4831 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh"s;
                        __Vtask_uvm_report_error__verbosity_4830 = 0U;
                        this->__Vtask_uvm_report_error__message_4829 
                            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                                VL_CONCATN_NNN(
                                                                               VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Memory '"s, __VlefCall_39__get_full_name), "' unmapped in map '"s), __VlefCall_40__get_full_name), "' and does not have a user-defined frontdoor"s));
                        this->__Vtask_uvm_report_error__id_4828 = "RegModel"s;
                        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1838);
                        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                            = __Vfunc_get__Vfuncout_1838;
                        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4835);
                        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                            = __Vtask_get_root__Vfuncout_4835;
                        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_4828, this->__Vtask_uvm_report_error__message_4829, __Vtask_uvm_report_error__verbosity_4830, this->__Vtask_uvm_report_error__filename_4831, __Vtask_uvm_report_error__line_4832, this->__Vtask_uvm_report_error__context_name_4833, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_4834));
                    }
                    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1632)->__VnoInFunc_set_status(vlSymsp, 1U);
                    Xcheck_accessX__Vfuncrtn = 0U;
                    goto __Vlabel0;
                }
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1636)->__VnoInFunc_get_value_size(vlSymsp, __VlefCall_41__get_value_size);
                if ((1U < __VlefCall_41__get_value_size)) {
                    this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_42__get_n_bits);
                    VL_NULL_CHECK(unnamedblk800__DOT__rw_local_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1637)->__VnoInFunc_get_n_bytes(vlSymsp, 1U, __VlefCall_43__get_n_bytes);
                    if ((__VlefCall_42__get_n_bits 
                         > (__VlefCall_43__get_n_bytes 
                            << 3U))) {
                        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1839);
                        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                            = __Vfunc_get__Vfuncout_1839;
                        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4836);
                        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                            = __Vtask_get_root__Vfuncout_4836;
                        __VlefCall_44__uvm_get_report_object 
                            = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
                        VL_NULL_CHECK(__VlefCall_44__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1640)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk800__DOT__unnamedblk803__DOT___local_report_object_);
                        VL_NULL_CHECK(unnamedblk800__DOT__unnamedblk803__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1640)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_45__get_report_verbosity_level);
                        __VlefLogAnd_47 = VL_LTES_III(32, 0U, __VlefCall_45__get_report_verbosity_level);
                        if (__VlefLogAnd_47) {
                            VL_NULL_CHECK(unnamedblk800__DOT__unnamedblk803__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1640)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_46__get_report_action);
                            __VlefLogAnd_47 = (0U != __VlefCall_46__get_report_action);
                        }
                        if (VL_UNLIKELY((__VlefLogAnd_47))) {
                            this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_48__get_n_bits);
                            VL_NULL_CHECK(unnamedblk800__DOT__rw_local_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1640)->__VnoInFunc_get_n_bytes(vlSymsp, 1U, __VlefCall_49__get_n_bytes);
                            __Vtask_uvm_report_error__report_enabled_checked_4843 = 1U;
                            this->__Vtask_uvm_report_error__context_name_4842 = ""s;
                            __Vtask_uvm_report_error__line_4841 = 0x00000668U;
                            this->__Vtask_uvm_report_error__filename_4840 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh"s;
                            __Vtask_uvm_report_error__verbosity_4839 = 0U;
                            VL_SFORMAT_NX(this->__Vtask_uvm_report_error__message_4838
                                          ,"Cannot burst a %0d-bit memory through a narrower data path (%0d bytes)",2
                                          , '#',32,__VlefCall_48__get_n_bits
                                          , '#',32,
                                          (__VlefCall_49__get_n_bytes 
                                           << 3U));
                            this->__Vtask_uvm_report_error__id_4837 = "RegModel"s;
                            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1840);
                            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                                = __Vfunc_get__Vfuncout_1840;
                            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4844);
                            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                                = __Vtask_get_root__Vfuncout_4844;
                            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_4837, this->__Vtask_uvm_report_error__message_4838, __Vtask_uvm_report_error__verbosity_4839, this->__Vtask_uvm_report_error__filename_4840, __Vtask_uvm_report_error__line_4841, this->__Vtask_uvm_report_error__context_name_4842, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_4843));
                        }
                        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1641)->__VnoInFunc_set_status(vlSymsp, 1U);
                        Xcheck_accessX__Vfuncrtn = 0U;
                        goto __Vlabel0;
                    }
                    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1644)->__VnoInFunc_get_offset(vlSymsp, __VlefCall_50__get_offset);
                    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1644)->__VnoInFunc_get_value_size(vlSymsp, __VlefCall_51__get_value_size);
                    if (((__VlefCall_50__get_offset 
                          + (::QData)((::IData)(__VlefCall_51__get_value_size))) 
                         > this->__PVT__m_size)) {
                        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1841);
                        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                            = __Vfunc_get__Vfuncout_1841;
                        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4845);
                        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                            = __Vtask_get_root__Vfuncout_4845;
                        __VlefCall_52__uvm_get_report_object 
                            = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
                        VL_NULL_CHECK(__VlefCall_52__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1647)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk800__DOT__unnamedblk804__DOT___local_report_object_);
                        VL_NULL_CHECK(unnamedblk800__DOT__unnamedblk804__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1647)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_53__get_report_verbosity_level);
                        __VlefLogAnd_55 = VL_LTES_III(32, 0U, __VlefCall_53__get_report_verbosity_level);
                        if (__VlefLogAnd_55) {
                            VL_NULL_CHECK(unnamedblk800__DOT__unnamedblk804__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1647)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_54__get_report_action);
                            __VlefLogAnd_55 = (0U != __VlefCall_54__get_report_action);
                        }
                        if (VL_UNLIKELY((__VlefLogAnd_55))) {
                            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1647)->__VnoInFunc_get_value_size(vlSymsp, __VlefCall_56__get_value_size);
                            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1647)->__VnoInFunc_get_offset(vlSymsp, __VlefCall_57__get_offset);
                            __Vtask_uvm_report_error__report_enabled_checked_4852 = 1U;
                            this->__Vtask_uvm_report_error__context_name_4851 = ""s;
                            __Vtask_uvm_report_error__line_4850 = 0x0000066fU;
                            this->__Vtask_uvm_report_error__filename_4849 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh"s;
                            __Vtask_uvm_report_error__verbosity_4848 = 0U;
                            VL_SFORMAT_NX(this->__Vtask_uvm_report_error__message_4847
                                          ,"Burst of size 'd%0d starting at offset 'd%0d exceeds size of memory, 'd%0d",3
                                          , '#',32,__VlefCall_56__get_value_size
                                          , '#',64,__VlefCall_57__get_offset
                                          , '#',64,this->__PVT__m_size);
                            this->__Vtask_uvm_report_error__id_4846 = "RegModel"s;
                            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1842);
                            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                                = __Vfunc_get__Vfuncout_1842;
                            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4853);
                            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                                = __Vtask_get_root__Vfuncout_4853;
                            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_4846, this->__Vtask_uvm_report_error__message_4847, __Vtask_uvm_report_error__verbosity_4848, this->__Vtask_uvm_report_error__filename_4849, __Vtask_uvm_report_error__line_4850, this->__Vtask_uvm_report_error__context_name_4851, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_4852));
                        }
                        Xcheck_accessX__Vfuncrtn = 0U;
                        goto __Vlabel0;
                    }
                }
            }
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1653)->__VnoInFunc_get_map(vlSymsp, __VlefCall_58__get_map);
            if ((VlNull{} == __VlefCall_58__get_map)) {
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1655)->__VnoInFunc_get_local_map(vlSymsp, __VlefCall_59__get_local_map);
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1655)->__VnoInFunc_set_map(vlSymsp, __VlefCall_59__get_local_map);
            }
        }
        Xcheck_accessX__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_poke(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &status, ::QData/*63:0*/ offset, ::QData/*63:0*/ value, ::std::string kind, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> parent, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> extension, ::std::string fname, ::IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_poke\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1843;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4854;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_4857;
    __Vtask_uvm_report_error__verbosity_4857 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_4859;
    __Vtask_uvm_report_error__line_4859 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_4861;
    __Vtask_uvm_report_error__report_enabled_checked_4861 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1844;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4862;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1845;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4863;
    ::IData/*31:0*/ __Vtask_uvm_report_info__verbosity_4866;
    __Vtask_uvm_report_info__verbosity_4866 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__line_4868;
    __Vtask_uvm_report_info__line_4868 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_info__report_enabled_checked_4870;
    __Vtask_uvm_report_info__report_enabled_checked_4870 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1846;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4871;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_12__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_11;
    ::IData/*31:0*/ __VlefCall_10__get_report_action;
    ::IData/*31:0*/ __VlefCall_9__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_8__uvm_get_report_object;
    ::std::string __VlefCall_7__get_full_name;
    ::std::string __VlefCall_6__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_5;
    ::IData/*31:0*/ __VlefCall_4__get_report_action;
    ::IData/*31:0*/ __VlefCall_3__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_2__uvm_get_report_object;
    ::CData/*0:0*/ __VlefLogAnd_1;
    ::CData/*0:0*/ __VlefCall_0__has_hdl_path;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk805__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk806__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_backdoor> bkdr;
    {
        status = 0U;
        this->__VnoInFunc_get_backdoor(vlSymsp, 1U, bkdr);
        this->__PVT__m_fname = fname;
        this->__PVT__m_lineno = lineno;
        __VlefLogAnd_1 = (VlNull{} == bkdr);
        if (__VlefLogAnd_1) {
            this->__VnoInFunc_has_hdl_path(vlSymsp, kind, __VlefCall_0__has_hdl_path);
            __VlefLogAnd_1 = (1U & (~ (::IData)(__VlefCall_0__has_hdl_path)));
        }
        if (__VlefLogAnd_1) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1843);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1843;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4854);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_4854;
            __VlefCall_2__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_2__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1686)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk805__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk805__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1686)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_3__get_report_verbosity_level);
            __VlefLogAnd_5 = VL_LTES_III(32, 0U, __VlefCall_3__get_report_verbosity_level);
            if (__VlefLogAnd_5) {
                VL_NULL_CHECK(unnamedblk805__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1686)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_4__get_report_action);
                __VlefLogAnd_5 = (0U != __VlefCall_4__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_5))) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
                __Vtask_uvm_report_error__report_enabled_checked_4861 = 1U;
                this->__Vtask_uvm_report_error__context_name_4860 = ""s;
                __Vtask_uvm_report_error__line_4859 = 0x00000696U;
                this->__Vtask_uvm_report_error__filename_4858 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh"s;
                __Vtask_uvm_report_error__verbosity_4857 = 0U;
                this->__Vtask_uvm_report_error__message_4856 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("No backdoor access available in memory '"s, __VlefCall_6__get_full_name), "'"s));
                this->__Vtask_uvm_report_error__id_4855 = "RegModel"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1844);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1844;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4862);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_4862;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_4855, this->__Vtask_uvm_report_error__message_4856, __Vtask_uvm_report_error__verbosity_4857, this->__Vtask_uvm_report_error__filename_4858, __Vtask_uvm_report_error__line_4859, this->__Vtask_uvm_report_error__context_name_4860, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_4861));
            }
            status = 1U;
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_7__get_full_name);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pi3429b725__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "mem_poke_item"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_7__get_full_name), rw);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1693)->__VnoInFunc_set_element(vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_mem>{this});
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1694)->__VnoInFunc_set_door(vlSymsp, 1U);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1695)->__VnoInFunc_set_element_kind(vlSymsp, 2U);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1696)->__VnoInFunc_set_kind(vlSymsp, 1U);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1697)->__VnoInFunc_set_offset(vlSymsp, offset);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1698)->__VnoInFunc_set_value(vlSymsp, 
                                                                                (value 
                                                                                & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_n_bits) 
                                                                                - 1ULL)), 0U);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1699)->__VnoInFunc_set_bd_kind(vlSymsp, kind);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1700)->__VnoInFunc_set_parent_sequence(vlSymsp, parent);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1701)->__VnoInFunc_set_extension(vlSymsp, extension);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1702)->__VnoInFunc_set_fname(vlSymsp, fname);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1703)->__VnoInFunc_set_line(vlSymsp, lineno);
        if ((VlNull{} != bkdr)) {
            VL_NULL_CHECK(bkdr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1707)->__VnoInFunc_write(vlProcess, vlSymsp, rw);
        } else {
            this->__VnoInFunc_backdoor_write(vlProcess, vlSymsp, rw);
        }
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1716)->__VnoInFunc_get_status(vlSymsp, status);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1845);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1845;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4863);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
            = __Vtask_get_root__Vfuncout_4863;
        __VlefCall_8__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
        VL_NULL_CHECK(__VlefCall_8__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1719)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk806__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk806__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1719)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "RegModel"s, __VlefCall_9__get_report_verbosity_level);
        __VlefLogAnd_11 = VL_LTES_III(32, 0x0000012cU, __VlefCall_9__get_report_verbosity_level);
        if (__VlefLogAnd_11) {
            VL_NULL_CHECK(unnamedblk806__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1719)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "RegModel"s, __VlefCall_10__get_report_action);
            __VlefLogAnd_11 = (0U != __VlefCall_10__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_11))) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_12__get_full_name);
            __Vtask_uvm_report_info__report_enabled_checked_4870 = 1U;
            this->__Vtask_uvm_report_info__context_name_4869 = ""s;
            __Vtask_uvm_report_info__line_4868 = 0x000006b7U;
            this->__Vtask_uvm_report_info__filename_4867 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh"s;
            __Vtask_uvm_report_info__verbosity_4866 = 0x0000012cU;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_info__message_4865
                          ,"Poked memory '%s[%0d]' with value 'h%h",3
                          , 'S',&(__VlefCall_12__get_full_name)
                          , '#',64,offset, '#',64,value);
            this->__Vtask_uvm_report_info__id_4864 = "RegModel"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1846);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1846;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 147)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4871);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__Vfuncout_4871;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 148)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__id_4864, this->__Vtask_uvm_report_info__message_4865, __Vtask_uvm_report_info__verbosity_4866, this->__Vtask_uvm_report_info__filename_4867, __Vtask_uvm_report_info__line_4868, this->__Vtask_uvm_report_info__context_name_4869, (::IData)(__Vtask_uvm_report_info__report_enabled_checked_4870));
        }
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_peek(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &status, ::QData/*63:0*/ offset, ::QData/*63:0*/ &value, ::std::string kind, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> parent, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> extension, ::std::string fname, ::IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_peek\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1847;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4872;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_4875;
    __Vtask_uvm_report_error__verbosity_4875 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_4877;
    __Vtask_uvm_report_error__line_4877 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_4879;
    __Vtask_uvm_report_error__report_enabled_checked_4879 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1848;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4880;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1849;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4881;
    ::IData/*31:0*/ __Vtask_uvm_report_info__verbosity_4884;
    __Vtask_uvm_report_info__verbosity_4884 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__line_4886;
    __Vtask_uvm_report_info__line_4886 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_info__report_enabled_checked_4888;
    __Vtask_uvm_report_info__report_enabled_checked_4888 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1850;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4889;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_12__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_11;
    ::IData/*31:0*/ __VlefCall_10__get_report_action;
    ::IData/*31:0*/ __VlefCall_9__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_8__uvm_get_report_object;
    ::std::string __VlefCall_7__get_full_name;
    ::std::string __VlefCall_6__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_5;
    ::IData/*31:0*/ __VlefCall_4__get_report_action;
    ::IData/*31:0*/ __VlefCall_3__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_2__uvm_get_report_object;
    ::CData/*0:0*/ __VlefLogAnd_1;
    ::CData/*0:0*/ __VlefCall_0__has_hdl_path;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk807__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk808__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_backdoor> bkdr;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw;
    {
        status = 0U;
        value = 0ULL;
        this->__VnoInFunc_get_backdoor(vlSymsp, 1U, bkdr);
        this->__PVT__m_fname = fname;
        this->__PVT__m_lineno = lineno;
        __VlefLogAnd_1 = (VlNull{} == bkdr);
        if (__VlefLogAnd_1) {
            this->__VnoInFunc_has_hdl_path(vlSymsp, kind, __VlefCall_0__has_hdl_path);
            __VlefLogAnd_1 = (1U & (~ (::IData)(__VlefCall_0__has_hdl_path)));
        }
        if (__VlefLogAnd_1) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1847);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1847;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4872);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_4872;
            __VlefCall_2__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_2__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1742)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk807__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk807__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1742)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_3__get_report_verbosity_level);
            __VlefLogAnd_5 = VL_LTES_III(32, 0U, __VlefCall_3__get_report_verbosity_level);
            if (__VlefLogAnd_5) {
                VL_NULL_CHECK(unnamedblk807__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1742)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_4__get_report_action);
                __VlefLogAnd_5 = (0U != __VlefCall_4__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_5))) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
                __Vtask_uvm_report_error__report_enabled_checked_4879 = 1U;
                this->__Vtask_uvm_report_error__context_name_4878 = ""s;
                __Vtask_uvm_report_error__line_4877 = 0x000006ceU;
                this->__Vtask_uvm_report_error__filename_4876 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh"s;
                __Vtask_uvm_report_error__verbosity_4875 = 0U;
                this->__Vtask_uvm_report_error__message_4874 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("No backdoor access available in memory '"s, __VlefCall_6__get_full_name), "'"s));
                this->__Vtask_uvm_report_error__id_4873 = "RegModel"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1848);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1848;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4880);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_4880;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_4873, this->__Vtask_uvm_report_error__message_4874, __Vtask_uvm_report_error__verbosity_4875, this->__Vtask_uvm_report_error__filename_4876, __Vtask_uvm_report_error__line_4877, this->__Vtask_uvm_report_error__context_name_4878, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_4879));
            }
            status = 1U;
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_7__get_full_name);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pi3429b725__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "mem_peek_item"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_7__get_full_name), rw);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1749)->__VnoInFunc_set_element(vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_mem>{this});
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1750)->__VnoInFunc_set_door(vlSymsp, 1U);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1751)->__VnoInFunc_set_element_kind(vlSymsp, 2U);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1752)->__VnoInFunc_set_kind(vlSymsp, 0U);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1753)->__VnoInFunc_set_offset(vlSymsp, offset);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1754)->__VnoInFunc_set_bd_kind(vlSymsp, kind);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1755)->__VnoInFunc_set_parent_sequence(vlSymsp, parent);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1756)->__VnoInFunc_set_extension(vlSymsp, extension);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1757)->__VnoInFunc_set_fname(vlSymsp, fname);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1758)->__VnoInFunc_set_line(vlSymsp, lineno);
        if ((VlNull{} != bkdr)) {
            VL_NULL_CHECK(bkdr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1762)->__VnoInFunc_read(vlProcess, vlSymsp, rw);
        } else {
            this->__VnoInFunc_backdoor_read(vlProcess, vlSymsp, rw);
        }
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1771)->__VnoInFunc_get_status(vlSymsp, status);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1772)->__VnoInFunc_get_value(vlSymsp, 0U, value);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1849);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1849;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4881);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
            = __Vtask_get_root__Vfuncout_4881;
        __VlefCall_8__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
        VL_NULL_CHECK(__VlefCall_8__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1775)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk808__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk808__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1775)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "RegModel"s, __VlefCall_9__get_report_verbosity_level);
        __VlefLogAnd_11 = VL_LTES_III(32, 0x0000012cU, __VlefCall_9__get_report_verbosity_level);
        if (__VlefLogAnd_11) {
            VL_NULL_CHECK(unnamedblk808__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1775)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "RegModel"s, __VlefCall_10__get_report_action);
            __VlefLogAnd_11 = (0U != __VlefCall_10__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_11))) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_12__get_full_name);
            __Vtask_uvm_report_info__report_enabled_checked_4888 = 1U;
            this->__Vtask_uvm_report_info__context_name_4887 = ""s;
            __Vtask_uvm_report_info__line_4886 = 0x000006efU;
            this->__Vtask_uvm_report_info__filename_4885 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh"s;
            __Vtask_uvm_report_info__verbosity_4884 = 0x0000012cU;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_info__message_4883
                          ,"Peeked memory '%s[%0d]' has value 'h%h",3
                          , 'S',&(__VlefCall_12__get_full_name)
                          , '#',64,offset, '#',64,value);
            this->__Vtask_uvm_report_info__id_4882 = "RegModel"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1850);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1850;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 147)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4889);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__Vfuncout_4889;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 148)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__id_4882, this->__Vtask_uvm_report_info__message_4883, __Vtask_uvm_report_info__verbosity_4884, this->__Vtask_uvm_report_info__filename_4885, __Vtask_uvm_report_info__line_4886, this->__Vtask_uvm_report_info__context_name_4887, (::IData)(__Vtask_uvm_report_info__report_enabled_checked_4888));
        }
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_backdoor(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ inherited, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_backdoor> &get_backdoor__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_backdoor\n"); );
    // Body
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk811__DOT__blk;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_backdoor> unnamedblk811__DOT__bkdr;
    if (((VlNull{} == this->__PVT__m_backdoor) & (::IData)(inherited))) {
        this->__VnoInFunc_get_parent(vlSymsp, unnamedblk811__DOT__blk);
        {
            while ((VlNull{} != unnamedblk811__DOT__blk)) {
                VL_NULL_CHECK(unnamedblk811__DOT__blk, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1849)->__VnoInFunc_get_backdoor(vlSymsp, 1U, unnamedblk811__DOT__bkdr);
                if ((VlNull{} != unnamedblk811__DOT__bkdr)) {
                    this->__PVT__m_backdoor = unnamedblk811__DOT__bkdr;
                    goto __Vlabel0;
                }
                VL_NULL_CHECK(unnamedblk811__DOT__blk, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1854)->__VnoInFunc_get_parent(vlSymsp, unnamedblk811__DOT__blk);
            }
            __Vlabel0: ;
        }
    }
    get_backdoor__Vfuncrtn = this->__PVT__m_backdoor;
}

extern const ::VlWide<32>/*1023:0*/ Vtb_top__ConstPool__CONST_3;
extern const ::VlWide<32>/*1023:0*/ Vtb_top__ConstPool__CONST_4;

void Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_backdoor_read_func(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw, ::IData/*31:0*/ &backdoor_read_func__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_backdoor_read_func\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_get_value_size__Vfuncout_4890;
    __Vtask_get_value_size__Vfuncout_4890 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1851;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4891;
    ::IData/*31:0*/ __Vtask_uvm_report_info__verbosity_4894;
    __Vtask_uvm_report_info__verbosity_4894 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__line_4896;
    __Vtask_uvm_report_info__line_4896 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_info__report_enabled_checked_4898;
    __Vtask_uvm_report_info__report_enabled_checked_4898 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1852;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4899;
    ::VlWide<32>/*1023:0*/ __Vfunc_uvm_hdl_read__value_1854;
    VL_ZERO_W(1024, __Vfunc_uvm_hdl_read__value_1854);
    ::VlWide<32>/*1023:0*/ __Vfunc_uvm_hdl_read__value_1856;
    VL_ZERO_W(1024, __Vfunc_uvm_hdl_read__value_1856);
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1857;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4900;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_hdl_path_concat> __Vfunc_uvm_hdl_concat2string__concat_1858;
    ::IData/*31:0*/ __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__i_1859;
    __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__i_1859 = 0;
    ::IData/*31:0*/ __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__i__Vloopsize_1860;
    __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__i__Vloopsize_1860 = 0;
    Vtb_top_uvm_hdl_path_slice__struct__0 __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__unnamedblk415__DOT__slice_1861;
    __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__unnamedblk415__DOT__slice_1861.__PVT__offset = 0;
    __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__unnamedblk415__DOT__slice_1861.__PVT__size = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_hdl_path_concat> __Vfunc_uvm_hdl_concat2string__concat_1863;
    ::IData/*31:0*/ __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__i_1864;
    __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__i_1864 = 0;
    ::IData/*31:0*/ __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__i__Vloopsize_1865;
    __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__i__Vloopsize_1865 = 0;
    Vtb_top_uvm_hdl_path_slice__struct__0 __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__unnamedblk415__DOT__slice_1866;
    __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__unnamedblk415__DOT__slice_1866.__PVT__offset = 0;
    __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__unnamedblk415__DOT__slice_1866.__PVT__size = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_4903;
    __Vtask_uvm_report_error__verbosity_4903 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_4905;
    __Vtask_uvm_report_error__line_4905 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_4907;
    __Vtask_uvm_report_error__report_enabled_checked_4907 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1868;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4908;
    ::VlWide<32>/*1023:0*/ __Vtemp_2;
    ::VlWide<32>/*1023:0*/ __Vtemp_3;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_16__uvm_hdl_concat2string;
    ::std::string __VlefCall_15__uvm_hdl_concat2string;
    ::QData/*63:0*/ __VlefCall_14__get_value;
    ::std::string __VlefCall_13__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_12;
    ::IData/*31:0*/ __VlefCall_11__get_report_action;
    ::IData/*31:0*/ __VlefCall_10__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_9__uvm_get_report_object;
    ::QData/*63:0*/ __VlefCall_8__get_value;
    ::IData/*31:0*/ __VlefCall_7__uvm_hdl_read;
    ::IData/*31:0*/ __VlefCall_6__uvm_hdl_read;
    ::CData/*0:0*/ __VlefLogAnd_5;
    ::IData/*31:0*/ __VlefCall_4__get_report_action;
    ::IData/*31:0*/ __VlefCall_3__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_2__uvm_get_report_object;
    ::QData/*63:0*/ __VlefCall_1__get_offset;
    ::std::string __VlefCall_0__get_bd_kind;
    ::IData/*31:0*/ unnamedblk812__DOT__mem_idx;
    ::std::string unnamedblk812__DOT__unnamedblk813__DOT__idx;
    ::IData/*31:0*/ unnamedblk812__DOT__unnamedblk813__DOT__unnamedblk814__DOT__i;
    unnamedblk812__DOT__unnamedblk813__DOT__unnamedblk814__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk812__DOT__unnamedblk813__DOT__unnamedblk814__DOT__i__Vloopsize;
    unnamedblk812__DOT__unnamedblk813__DOT__unnamedblk814__DOT__i__Vloopsize = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_hdl_path_concat> unnamedblk812__DOT__unnamedblk813__DOT__unnamedblk814__DOT__unnamedblk815__DOT__hdl_concat;
    ::IData/*31:0*/ unnamedblk812__DOT__unnamedblk813__DOT__unnamedblk814__DOT__unnamedblk815__DOT__unnamedblk816__DOT__j;
    unnamedblk812__DOT__unnamedblk813__DOT__unnamedblk814__DOT__unnamedblk815__DOT__unnamedblk816__DOT__j = 0;
    ::IData/*31:0*/ unnamedblk812__DOT__unnamedblk813__DOT__unnamedblk814__DOT__unnamedblk815__DOT__unnamedblk816__DOT__j__Vloopsize;
    unnamedblk812__DOT__unnamedblk813__DOT__unnamedblk814__DOT__unnamedblk815__DOT__unnamedblk816__DOT__j__Vloopsize = 0;
    ::std::string unnamedblk812__DOT__unnamedblk813__DOT__unnamedblk814__DOT__unnamedblk815__DOT__unnamedblk816__DOT__unnamedblk817__DOT__hdl_path;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk812__DOT__unnamedblk813__DOT__unnamedblk814__DOT__unnamedblk815__DOT__unnamedblk816__DOT__unnamedblk817__DOT__unnamedblk818__DOT___local_report_object_;
    ::QData/*63:0*/ unnamedblk812__DOT__unnamedblk813__DOT__unnamedblk814__DOT__unnamedblk815__DOT__unnamedblk816__DOT__unnamedblk817__DOT__unnamedblk819__DOT__slice;
    ::IData/*31:0*/ unnamedblk812__DOT__unnamedblk813__DOT__unnamedblk814__DOT__unnamedblk815__DOT__unnamedblk816__DOT__unnamedblk817__DOT__unnamedblk819__DOT__k;
    ::IData/*31:0*/ unnamedblk812__DOT__unnamedblk813__DOT__unnamedblk814__DOT__unnamedblk815__DOT__unnamedblk816__DOT__unnamedblk817__DOT__unnamedblk819__DOT__unnamedblk1_1__DOT____Vrepeat0;
    unnamedblk812__DOT__unnamedblk813__DOT__unnamedblk814__DOT__unnamedblk815__DOT__unnamedblk816__DOT__unnamedblk817__DOT__unnamedblk819__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk812__DOT__unnamedblk813__DOT__unnamedblk814__DOT__unnamedblk815__DOT__unnamedblk820__DOT___local_report_object_;
    ::IData/*31:0*/ __Vincrement1;
    __Vincrement1 = 0;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_hdl_path_concat>> paths;
    ::VlWide<32>/*1023:0*/ val;
    ::CData/*0:0*/ ok;
    ::IData/*31:0*/ rw_value_size;
    {
        backdoor_read_func__Vfuncrtn = 0U;
        paths.clear();
        VL_ZERO_W(1024, val);
        ok = 1U;
        rw_value_size = 0U;
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1871)->__VnoInFunc_get_bd_kind(vlSymsp, __VlefCall_0__get_bd_kind);
        this->__VnoInFunc_get_full_hdl_path(vlProcess, vlSymsp, paths, 
                                            VL_CVT_PACK_STR_NN(__VlefCall_0__get_bd_kind), "."s);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1873)->__VnoInFunc_get_value_size(vlSymsp, __Vtask_get_value_size__Vfuncout_4890);
        rw_value_size = __Vtask_get_value_size__Vfuncout_4890;
        unnamedblk812__DOT__mem_idx = 0U;
        unnamedblk812__DOT__mem_idx = 0U;
        while (VL_LTS_III(32, unnamedblk812__DOT__mem_idx, rw_value_size)) {
            unnamedblk812__DOT__unnamedblk813__DOT__idx = ""s;
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1878)->__VnoInFunc_get_offset(vlSymsp, __VlefCall_1__get_offset);
            VL_SFORMAT_NX(unnamedblk812__DOT__unnamedblk813__DOT__idx
                          ,"%0d",1, '~',32,((::IData)(__VlefCall_1__get_offset) 
                                            + unnamedblk812__DOT__mem_idx));
            unnamedblk812__DOT__unnamedblk813__DOT__unnamedblk814__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk812__DOT__unnamedblk813__DOT__unnamedblk814__DOT__i, paths.size())) {
                unnamedblk812__DOT__unnamedblk813__DOT__unnamedblk814__DOT__i__Vloopsize 
                    = paths.size();
                unnamedblk812__DOT__unnamedblk813__DOT__unnamedblk814__DOT__unnamedblk815__DOT__hdl_concat 
                    = paths.at(unnamedblk812__DOT__unnamedblk813__DOT__unnamedblk814__DOT__i);
                VL_ASSIGN_W(1024, val, Vtb_top__ConstPool__CONST_3);
                unnamedblk812__DOT__unnamedblk813__DOT__unnamedblk814__DOT__unnamedblk815__DOT__unnamedblk816__DOT__j = 0U;
                while (VL_LTS_III(32, unnamedblk812__DOT__unnamedblk813__DOT__unnamedblk814__DOT__unnamedblk815__DOT__unnamedblk816__DOT__j, VL_NULL_CHECK(unnamedblk812__DOT__unnamedblk813__DOT__unnamedblk814__DOT__unnamedblk815__DOT__hdl_concat, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1882)
                                  ->__PVT__slices.size())) {
                    unnamedblk812__DOT__unnamedblk813__DOT__unnamedblk814__DOT__unnamedblk815__DOT__unnamedblk816__DOT__j__Vloopsize 
                        = VL_NULL_CHECK(unnamedblk812__DOT__unnamedblk813__DOT__unnamedblk814__DOT__unnamedblk815__DOT__hdl_concat, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1882)
                        ->__PVT__slices.size();
                    {
                        unnamedblk812__DOT__unnamedblk813__DOT__unnamedblk814__DOT__unnamedblk815__DOT__unnamedblk816__DOT__unnamedblk817__DOT__hdl_path 
                            = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN(VL_NULL_CHECK(unnamedblk812__DOT__unnamedblk813__DOT__unnamedblk814__DOT__unnamedblk815__DOT__hdl_concat, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1883)
                                                                           ->__PVT__slices.at(unnamedblk812__DOT__unnamedblk813__DOT__unnamedblk814__DOT__unnamedblk815__DOT__unnamedblk816__DOT__j)
                                                                           .__PVT__path, "["s), unnamedblk812__DOT__unnamedblk813__DOT__idx), "]"s);
                        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1851);
                        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                            = __Vfunc_get__Vfuncout_1851;
                        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4891);
                        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                            = __Vtask_get_root__Vfuncout_4891;
                        __VlefCall_2__uvm_get_report_object 
                            = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
                        VL_NULL_CHECK(__VlefCall_2__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1885)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk812__DOT__unnamedblk813__DOT__unnamedblk814__DOT__unnamedblk815__DOT__unnamedblk816__DOT__unnamedblk817__DOT__unnamedblk818__DOT___local_report_object_);
                        VL_NULL_CHECK(unnamedblk812__DOT__unnamedblk813__DOT__unnamedblk814__DOT__unnamedblk815__DOT__unnamedblk816__DOT__unnamedblk817__DOT__unnamedblk818__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1885)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "RegModel"s, __VlefCall_3__get_report_verbosity_level);
                        __VlefLogAnd_5 = VL_LTES_III(32, 0x000001f4U, __VlefCall_3__get_report_verbosity_level);
                        if (__VlefLogAnd_5) {
                            VL_NULL_CHECK(unnamedblk812__DOT__unnamedblk813__DOT__unnamedblk814__DOT__unnamedblk815__DOT__unnamedblk816__DOT__unnamedblk817__DOT__unnamedblk818__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1885)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "RegModel"s, __VlefCall_4__get_report_action);
                            __VlefLogAnd_5 = (0U != __VlefCall_4__get_report_action);
                        }
                        if (VL_UNLIKELY((__VlefLogAnd_5))) {
                            __Vtask_uvm_report_info__report_enabled_checked_4898 = 1U;
                            this->__Vtask_uvm_report_info__context_name_4897 = ""s;
                            __Vtask_uvm_report_info__line_4896 = 0x0000075dU;
                            this->__Vtask_uvm_report_info__filename_4895 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh"s;
                            __Vtask_uvm_report_info__verbosity_4894 = 0x000001f4U;
                            this->__Vtask_uvm_report_info__message_4893 
                                = VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN("backdoor_read from "s, unnamedblk812__DOT__unnamedblk813__DOT__unnamedblk814__DOT__unnamedblk815__DOT__unnamedblk816__DOT__unnamedblk817__DOT__hdl_path));
                            this->__Vtask_uvm_report_info__id_4892 = "RegModel"s;
                            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1852);
                            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs 
                                = __Vfunc_get__Vfuncout_1852;
                            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 147)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4899);
                            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top 
                                = __Vtask_get_root__Vfuncout_4899;
                            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 148)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__id_4892, this->__Vtask_uvm_report_info__message_4893, __Vtask_uvm_report_info__verbosity_4894, this->__Vtask_uvm_report_info__filename_4895, __Vtask_uvm_report_info__line_4896, this->__Vtask_uvm_report_info__context_name_4897, (::IData)(__Vtask_uvm_report_info__report_enabled_checked_4898));
                        }
                        if (VL_UNLIKELY((VL_GTS_III(32, 0U, VL_NULL_CHECK(unnamedblk812__DOT__unnamedblk813__DOT__unnamedblk814__DOT__unnamedblk815__DOT__hdl_concat, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1887)
                                                    ->__PVT__slices.at(unnamedblk812__DOT__unnamedblk813__DOT__unnamedblk814__DOT__unnamedblk815__DOT__unnamedblk816__DOT__j)
                                                    .__PVT__offset)))) {
                            VL_ZERO_W(1024, __Vfunc_uvm_hdl_read__value_1854);
                            vlSymsp->vlInst.TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "UVM_HDL_READ"s, "uvm_hdl DPI routines are compiled off. Recompile without +define+UVM_HDL_NO_DPI"s, 0U, ""s, 0U, ""s, 0U);
                            __VlefCall_6__uvm_hdl_read = 0U;
                            val[0U] = __Vfunc_uvm_hdl_read__value_1854[0U];
                            val[1U] = __Vfunc_uvm_hdl_read__value_1854[1U];
                            val[2U] = __Vfunc_uvm_hdl_read__value_1854[2U];
                            val[3U] = __Vfunc_uvm_hdl_read__value_1854[3U];
                            val[4U] = __Vfunc_uvm_hdl_read__value_1854[4U];
                            val[5U] = __Vfunc_uvm_hdl_read__value_1854[5U];
                            val[6U] = __Vfunc_uvm_hdl_read__value_1854[6U];
                            val[7U] = __Vfunc_uvm_hdl_read__value_1854[7U];
                            val[8U] = __Vfunc_uvm_hdl_read__value_1854[8U];
                            val[9U] = __Vfunc_uvm_hdl_read__value_1854[9U];
                            val[10U] = __Vfunc_uvm_hdl_read__value_1854[10U];
                            val[11U] = __Vfunc_uvm_hdl_read__value_1854[11U];
                            val[12U] = __Vfunc_uvm_hdl_read__value_1854[12U];
                            val[13U] = __Vfunc_uvm_hdl_read__value_1854[13U];
                            val[14U] = __Vfunc_uvm_hdl_read__value_1854[14U];
                            val[15U] = __Vfunc_uvm_hdl_read__value_1854[15U];
                            val[16U] = __Vfunc_uvm_hdl_read__value_1854[16U];
                            val[17U] = __Vfunc_uvm_hdl_read__value_1854[17U];
                            val[18U] = __Vfunc_uvm_hdl_read__value_1854[18U];
                            val[19U] = __Vfunc_uvm_hdl_read__value_1854[19U];
                            val[20U] = __Vfunc_uvm_hdl_read__value_1854[20U];
                            val[21U] = __Vfunc_uvm_hdl_read__value_1854[21U];
                            val[22U] = __Vfunc_uvm_hdl_read__value_1854[22U];
                            val[23U] = __Vfunc_uvm_hdl_read__value_1854[23U];
                            val[24U] = __Vfunc_uvm_hdl_read__value_1854[24U];
                            val[25U] = __Vfunc_uvm_hdl_read__value_1854[25U];
                            val[26U] = __Vfunc_uvm_hdl_read__value_1854[26U];
                            val[27U] = __Vfunc_uvm_hdl_read__value_1854[27U];
                            val[28U] = __Vfunc_uvm_hdl_read__value_1854[28U];
                            val[29U] = __Vfunc_uvm_hdl_read__value_1854[29U];
                            val[30U] = __Vfunc_uvm_hdl_read__value_1854[30U];
                            val[31U] = __Vfunc_uvm_hdl_read__value_1854[31U];
                            ok = ((::IData)(ok) & __VlefCall_6__uvm_hdl_read);
                            goto __Vlabel1;
                        }
                        unnamedblk812__DOT__unnamedblk813__DOT__unnamedblk814__DOT__unnamedblk815__DOT__unnamedblk816__DOT__unnamedblk817__DOT__unnamedblk819__DOT__slice = 0ULL;
                        unnamedblk812__DOT__unnamedblk813__DOT__unnamedblk814__DOT__unnamedblk815__DOT__unnamedblk816__DOT__unnamedblk817__DOT__unnamedblk819__DOT__k 
                            = VL_NULL_CHECK(unnamedblk812__DOT__unnamedblk813__DOT__unnamedblk814__DOT__unnamedblk815__DOT__hdl_concat, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1893)
                            ->__PVT__slices.at(unnamedblk812__DOT__unnamedblk813__DOT__unnamedblk814__DOT__unnamedblk815__DOT__unnamedblk816__DOT__j)
                            .__PVT__offset;
                        VL_ZERO_W(1024, __Vfunc_uvm_hdl_read__value_1856);
                        vlSymsp->vlInst.TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "UVM_HDL_READ"s, "uvm_hdl DPI routines are compiled off. Recompile without +define+UVM_HDL_NO_DPI"s, 0U, ""s, 0U, ""s, 0U);
                        __VlefCall_7__uvm_hdl_read = 0U;
                        unnamedblk812__DOT__unnamedblk813__DOT__unnamedblk814__DOT__unnamedblk815__DOT__unnamedblk816__DOT__unnamedblk817__DOT__unnamedblk819__DOT__slice 
                            = (((::QData)((::IData)(__Vfunc_uvm_hdl_read__value_1856[1U])) 
                                << 0x00000020U) | (::QData)((::IData)(__Vfunc_uvm_hdl_read__value_1856[0U])));
                        ok = ((::IData)(ok) & __VlefCall_7__uvm_hdl_read);
                        unnamedblk812__DOT__unnamedblk813__DOT__unnamedblk814__DOT__unnamedblk815__DOT__unnamedblk816__DOT__unnamedblk817__DOT__unnamedblk819__DOT__unnamedblk1_1__DOT____Vrepeat0 
                            = VL_NULL_CHECK(unnamedblk812__DOT__unnamedblk813__DOT__unnamedblk814__DOT__unnamedblk815__DOT__hdl_concat, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1895)
                            ->__PVT__slices.at(unnamedblk812__DOT__unnamedblk813__DOT__unnamedblk814__DOT__unnamedblk815__DOT__unnamedblk816__DOT__j)
                            .__PVT__size;
                        while (VL_LTS_III(32, 0U, unnamedblk812__DOT__unnamedblk813__DOT__unnamedblk814__DOT__unnamedblk815__DOT__unnamedblk816__DOT__unnamedblk817__DOT__unnamedblk819__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
                            __Vincrement1 = unnamedblk812__DOT__unnamedblk813__DOT__unnamedblk814__DOT__unnamedblk815__DOT__unnamedblk816__DOT__unnamedblk817__DOT__unnamedblk819__DOT__k;
                            unnamedblk812__DOT__unnamedblk813__DOT__unnamedblk814__DOT__unnamedblk815__DOT__unnamedblk816__DOT__unnamedblk817__DOT__unnamedblk819__DOT__k 
                                = ((::IData)(1U) + unnamedblk812__DOT__unnamedblk813__DOT__unnamedblk814__DOT__unnamedblk815__DOT__unnamedblk816__DOT__unnamedblk817__DOT__unnamedblk819__DOT__k);
                            val[(0x0000001fU & (__Vincrement1 
                                                >> 5U))] 
                                = (((~ ((::IData)(1U) 
                                        << (0x0000001fU 
                                            & __Vincrement1))) 
                                    & val[(0x0000001fU 
                                           & (__Vincrement1 
                                              >> 5U))]) 
                                   | ((1U & (::IData)(unnamedblk812__DOT__unnamedblk813__DOT__unnamedblk814__DOT__unnamedblk815__DOT__unnamedblk816__DOT__unnamedblk817__DOT__unnamedblk819__DOT__slice)) 
                                      << (0x0000001fU 
                                          & __Vincrement1)));
                            unnamedblk812__DOT__unnamedblk813__DOT__unnamedblk814__DOT__unnamedblk815__DOT__unnamedblk816__DOT__unnamedblk817__DOT__unnamedblk819__DOT__slice 
                                = (unnamedblk812__DOT__unnamedblk813__DOT__unnamedblk814__DOT__unnamedblk815__DOT__unnamedblk816__DOT__unnamedblk817__DOT__unnamedblk819__DOT__slice 
                                   >> 1U);
                            unnamedblk812__DOT__unnamedblk813__DOT__unnamedblk814__DOT__unnamedblk815__DOT__unnamedblk816__DOT__unnamedblk817__DOT__unnamedblk819__DOT__unnamedblk1_1__DOT____Vrepeat0 
                                = (unnamedblk812__DOT__unnamedblk813__DOT__unnamedblk814__DOT__unnamedblk815__DOT__unnamedblk816__DOT__unnamedblk817__DOT__unnamedblk819__DOT__unnamedblk1_1__DOT____Vrepeat0 
                                   - (::IData)(1U));
                        }
                        __Vlabel1: ;
                    }
                    if ((unnamedblk812__DOT__unnamedblk813__DOT__unnamedblk814__DOT__unnamedblk815__DOT__unnamedblk816__DOT__j__Vloopsize 
                         <= VL_NULL_CHECK(unnamedblk812__DOT__unnamedblk813__DOT__unnamedblk814__DOT__unnamedblk815__DOT__hdl_concat, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1882)
                         ->__PVT__slices.size())) {
                        unnamedblk812__DOT__unnamedblk813__DOT__unnamedblk814__DOT__unnamedblk815__DOT__unnamedblk816__DOT__j 
                            = ((::IData)(1U) + unnamedblk812__DOT__unnamedblk813__DOT__unnamedblk814__DOT__unnamedblk815__DOT__unnamedblk816__DOT__j);
                    }
                }
                VL_SHIFTL_WWI(1024,1024,32, __Vtemp_2, Vtb_top__ConstPool__CONST_4, this->__PVT__m_n_bits);
                VL_SUB_W(32, __Vtemp_3, __Vtemp_2, Vtb_top__ConstPool__CONST_4);
                val[0U] = (val[0U] & __Vtemp_3[0U]);
                val[1U] = (val[1U] & __Vtemp_3[1U]);
                val[2U] = (val[2U] & __Vtemp_3[2U]);
                val[3U] = (val[3U] & __Vtemp_3[3U]);
                val[4U] = (val[4U] & __Vtemp_3[4U]);
                val[5U] = (val[5U] & __Vtemp_3[5U]);
                val[6U] = (val[6U] & __Vtemp_3[6U]);
                val[7U] = (val[7U] & __Vtemp_3[7U]);
                val[8U] = (val[8U] & __Vtemp_3[8U]);
                val[9U] = (val[9U] & __Vtemp_3[9U]);
                val[10U] = (val[10U] & __Vtemp_3[10U]);
                val[11U] = (val[11U] & __Vtemp_3[11U]);
                val[12U] = (val[12U] & __Vtemp_3[12U]);
                val[13U] = (val[13U] & __Vtemp_3[13U]);
                val[14U] = (val[14U] & __Vtemp_3[14U]);
                val[15U] = (val[15U] & __Vtemp_3[15U]);
                val[16U] = (val[16U] & __Vtemp_3[16U]);
                val[17U] = (val[17U] & __Vtemp_3[17U]);
                val[18U] = (val[18U] & __Vtemp_3[18U]);
                val[19U] = (val[19U] & __Vtemp_3[19U]);
                val[20U] = (val[20U] & __Vtemp_3[20U]);
                val[21U] = (val[21U] & __Vtemp_3[21U]);
                val[22U] = (val[22U] & __Vtemp_3[22U]);
                val[23U] = (val[23U] & __Vtemp_3[23U]);
                val[24U] = (val[24U] & __Vtemp_3[24U]);
                val[25U] = (val[25U] & __Vtemp_3[25U]);
                val[26U] = (val[26U] & __Vtemp_3[26U]);
                val[27U] = (val[27U] & __Vtemp_3[27U]);
                val[28U] = (val[28U] & __Vtemp_3[28U]);
                val[29U] = (val[29U] & __Vtemp_3[29U]);
                val[30U] = (val[30U] & __Vtemp_3[30U]);
                val[31U] = (val[31U] & __Vtemp_3[31U]);
                if ((0U == unnamedblk812__DOT__unnamedblk813__DOT__unnamedblk814__DOT__i)) {
                    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1906)->__VnoInFunc_set_value(vlSymsp, 
                                                                                (((::QData)((::IData)(val[1U])) 
                                                                                << 0x00000020U) 
                                                                                | (::QData)((::IData)(val[0U]))), unnamedblk812__DOT__mem_idx);
                }
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1910)->__VnoInFunc_get_value(vlSymsp, unnamedblk812__DOT__mem_idx, __VlefCall_8__get_value);
                if ((0U != ((((((((((((((((((((((((
                                                   ((((((((val[0U] 
                                                           ^ (::IData)(__VlefCall_8__get_value)) 
                                                          | (val[1U] 
                                                             ^ (::IData)(
                                                                         (__VlefCall_8__get_value 
                                                                          >> 0x00000020U)))) 
                                                         | val[2U]) 
                                                        | val[3U]) 
                                                       | val[4U]) 
                                                      | val[5U]) 
                                                     | val[6U]) 
                                                    | val[7U]) 
                                                   | val[8U]) 
                                                  | val[9U]) 
                                                 | val[10U]) 
                                                | val[11U]) 
                                               | val[12U]) 
                                              | val[13U]) 
                                             | val[14U]) 
                                            | val[15U]) 
                                           | val[16U]) 
                                          | val[17U]) 
                                         | val[18U]) 
                                        | val[19U]) 
                                       | val[20U]) 
                                      | val[21U]) | val[22U]) 
                                    | val[23U]) | val[24U]) 
                                  | val[25U]) | val[26U]) 
                                | val[27U]) | val[28U]) 
                              | val[29U]) | val[30U]) 
                            | val[31U]))) {
                    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1857);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                        = __Vfunc_get__Vfuncout_1857;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4900);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                        = __Vtask_get_root__Vfuncout_4900;
                    __VlefCall_9__uvm_get_report_object 
                        = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
                    VL_NULL_CHECK(__VlefCall_9__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1913)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk812__DOT__unnamedblk813__DOT__unnamedblk814__DOT__unnamedblk815__DOT__unnamedblk820__DOT___local_report_object_);
                    VL_NULL_CHECK(unnamedblk812__DOT__unnamedblk813__DOT__unnamedblk814__DOT__unnamedblk815__DOT__unnamedblk820__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1913)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_10__get_report_verbosity_level);
                    __VlefLogAnd_12 = VL_LTES_III(32, 0U, __VlefCall_10__get_report_verbosity_level);
                    if (__VlefLogAnd_12) {
                        VL_NULL_CHECK(unnamedblk812__DOT__unnamedblk813__DOT__unnamedblk814__DOT__unnamedblk815__DOT__unnamedblk820__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1913)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_11__get_report_action);
                        __VlefLogAnd_12 = (0U != __VlefCall_11__get_report_action);
                    }
                    if (VL_UNLIKELY((__VlefLogAnd_12))) {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_13__get_full_name);
                        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1913)->__VnoInFunc_get_value(vlSymsp, unnamedblk812__DOT__mem_idx, __VlefCall_14__get_value);
                        __Vfunc_uvm_hdl_concat2string__concat_1858 
                            = paths.at(0U);
                        __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__i_1859 = 0U;
                        __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__i__Vloopsize_1860 = 0;
                        {
                            __VlefCall_15__uvm_hdl_concat2string = ""s;
                            this->__Vfunc_uvm_hdl_concat2string__image_1862 = "{"s;
                            if ((((1U == VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__concat_1858, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_model.svh", 413)
                                   ->__PVT__slices.size()) 
                                  && (0xffffffffU == VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__concat_1858, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_model.svh", 414)
                                      ->__PVT__slices.at(0U)
                                      .__PVT__offset)) 
                                 && (0xffffffffU == VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__concat_1858, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_model.svh", 415)
                                     ->__PVT__slices.at(0U)
                                     .__PVT__size))) {
                                __VlefCall_15__uvm_hdl_concat2string 
                                    = VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__concat_1858, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_model.svh", 417)
                                    ->__PVT__slices.at(0U)
                                    .__PVT__path;
                                goto __Vlabel2;
                            }
                            __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__i_1859 = 0U;
                            while (VL_LTS_III(32, __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__i_1859, VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__concat_1858, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_model.svh", 421)
                                              ->__PVT__slices.size())) {
                                __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__i__Vloopsize_1860 
                                    = VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__concat_1858, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_model.svh", 421)
                                    ->__PVT__slices.size();
                                __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__unnamedblk415__DOT__slice_1861 
                                    = VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__concat_1858, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_model.svh", 423)
                                    ->__PVT__slices.at(__Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__i_1859);
                                this->__Vfunc_uvm_hdl_concat2string__image_1862 
                                    = VL_CONCATN_NNN(
                                                     VL_CONCATN_NNN(this->__Vfunc_uvm_hdl_concat2string__image_1862, 
                                                                    VL_CVT_PACK_STR_NI(
                                                                                ((0U 
                                                                                == __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__i_1859)
                                                                                 ? 0U
                                                                                 : 0x2c20U))), __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__unnamedblk415__DOT__slice_1861
                                                     .__PVT__path);
                                if (VL_LTES_III(32, 0U, __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__unnamedblk415__DOT__slice_1861
                                                .__PVT__offset)) {
                                    this->__Vfunc_uvm_hdl_concat2string__image_1862 
                                        = VL_CONCATN_NNN(
                                                         VL_CONCATN_NNN(this->__Vfunc_uvm_hdl_concat2string__image_1862, "@"s), VL_SFORMATF_N_NX("[%0d +: %0d]",2
                                                                                , '~',32,__Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__unnamedblk415__DOT__slice_1861
                                                                                .__PVT__offset
                                                                                , '~',32,__Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__unnamedblk415__DOT__slice_1861
                                                                                .__PVT__size) );
                                }
                                if ((__Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__i__Vloopsize_1860 
                                     <= VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__concat_1858, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_model.svh", 421)
                                     ->__PVT__slices.size())) {
                                    __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__i_1859 
                                        = ((::IData)(1U) 
                                           + __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__i_1859);
                                }
                            }
                            this->__Vfunc_uvm_hdl_concat2string__image_1862 
                                = VL_CONCATN_NNN(this->__Vfunc_uvm_hdl_concat2string__image_1862, "}"s);
                            __VlefCall_15__uvm_hdl_concat2string 
                                = this->__Vfunc_uvm_hdl_concat2string__image_1862;
                            __Vlabel2: ;
                        }
                        __Vfunc_uvm_hdl_concat2string__concat_1863 
                            = paths.at(unnamedblk812__DOT__unnamedblk813__DOT__unnamedblk814__DOT__i);
                        __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__i_1864 = 0U;
                        __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__i__Vloopsize_1865 = 0;
                        {
                            __VlefCall_16__uvm_hdl_concat2string = ""s;
                            this->__Vfunc_uvm_hdl_concat2string__image_1867 = "{"s;
                            if ((((1U == VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__concat_1863, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_model.svh", 413)
                                   ->__PVT__slices.size()) 
                                  && (0xffffffffU == VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__concat_1863, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_model.svh", 414)
                                      ->__PVT__slices.at(0U)
                                      .__PVT__offset)) 
                                 && (0xffffffffU == VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__concat_1863, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_model.svh", 415)
                                     ->__PVT__slices.at(0U)
                                     .__PVT__size))) {
                                __VlefCall_16__uvm_hdl_concat2string 
                                    = VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__concat_1863, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_model.svh", 417)
                                    ->__PVT__slices.at(0U)
                                    .__PVT__path;
                                goto __Vlabel3;
                            }
                            __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__i_1864 = 0U;
                            while (VL_LTS_III(32, __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__i_1864, VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__concat_1863, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_model.svh", 421)
                                              ->__PVT__slices.size())) {
                                __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__i__Vloopsize_1865 
                                    = VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__concat_1863, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_model.svh", 421)
                                    ->__PVT__slices.size();
                                __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__unnamedblk415__DOT__slice_1866 
                                    = VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__concat_1863, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_model.svh", 423)
                                    ->__PVT__slices.at(__Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__i_1864);
                                this->__Vfunc_uvm_hdl_concat2string__image_1867 
                                    = VL_CONCATN_NNN(
                                                     VL_CONCATN_NNN(this->__Vfunc_uvm_hdl_concat2string__image_1867, 
                                                                    VL_CVT_PACK_STR_NI(
                                                                                ((0U 
                                                                                == __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__i_1864)
                                                                                 ? 0U
                                                                                 : 0x2c20U))), __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__unnamedblk415__DOT__slice_1866
                                                     .__PVT__path);
                                if (VL_LTES_III(32, 0U, __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__unnamedblk415__DOT__slice_1866
                                                .__PVT__offset)) {
                                    this->__Vfunc_uvm_hdl_concat2string__image_1867 
                                        = VL_CONCATN_NNN(
                                                         VL_CONCATN_NNN(this->__Vfunc_uvm_hdl_concat2string__image_1867, "@"s), VL_SFORMATF_N_NX("[%0d +: %0d]",2
                                                                                , '~',32,__Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__unnamedblk415__DOT__slice_1866
                                                                                .__PVT__offset
                                                                                , '~',32,__Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__unnamedblk415__DOT__slice_1866
                                                                                .__PVT__size) );
                                }
                                if ((__Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__i__Vloopsize_1865 
                                     <= VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__concat_1863, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_model.svh", 421)
                                     ->__PVT__slices.size())) {
                                    __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__i_1864 
                                        = ((::IData)(1U) 
                                           + __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__i_1864);
                                }
                            }
                            this->__Vfunc_uvm_hdl_concat2string__image_1867 
                                = VL_CONCATN_NNN(this->__Vfunc_uvm_hdl_concat2string__image_1867, "}"s);
                            __VlefCall_16__uvm_hdl_concat2string 
                                = this->__Vfunc_uvm_hdl_concat2string__image_1867;
                            __Vlabel3: ;
                        }
                        __Vtask_uvm_report_error__report_enabled_checked_4907 = 1U;
                        this->__Vtask_uvm_report_error__context_name_4906 = ""s;
                        __Vtask_uvm_report_error__line_4905 = 0x00000779U;
                        this->__Vtask_uvm_report_error__filename_4904 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh"s;
                        __Vtask_uvm_report_error__verbosity_4903 = 0U;
                        VL_SFORMAT_NX(this->__Vtask_uvm_report_error__message_4902
                                      ,"Backdoor read of register %s with multiple HDL copies: values are not the same: %0h at path '%s', and %0h at path '%s'. Returning first value.",5
                                      , 'S',&(__VlefCall_13__get_full_name)
                                      , '#',64,__VlefCall_14__get_value
                                      , 'S',&(__VlefCall_15__uvm_hdl_concat2string)
                                      , '#',1024,val.data()
                                      , 'S',&(__VlefCall_16__uvm_hdl_concat2string));
                        this->__Vtask_uvm_report_error__id_4901 = "RegModel"s;
                        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1868);
                        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                            = __Vfunc_get__Vfuncout_1868;
                        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4908);
                        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                            = __Vtask_get_root__Vfuncout_4908;
                        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_4901, this->__Vtask_uvm_report_error__message_4902, __Vtask_uvm_report_error__verbosity_4903, this->__Vtask_uvm_report_error__filename_4904, __Vtask_uvm_report_error__line_4905, this->__Vtask_uvm_report_error__context_name_4906, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_4907));
                    }
                    backdoor_read_func__Vfuncrtn = 1U;
                    goto __Vlabel0;
                }
                if ((unnamedblk812__DOT__unnamedblk813__DOT__unnamedblk814__DOT__i__Vloopsize 
                     <= paths.size())) {
                    unnamedblk812__DOT__unnamedblk813__DOT__unnamedblk814__DOT__i 
                        = ((::IData)(1U) + unnamedblk812__DOT__unnamedblk813__DOT__unnamedblk814__DOT__i);
                }
            }
            unnamedblk812__DOT__mem_idx = ((::IData)(1U) 
                                           + unnamedblk812__DOT__mem_idx);
        }
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1919)->__VnoInFunc_set_status(vlSymsp, 
                                                                                ((::IData)(ok)
                                                                                 ? 0U
                                                                                 : 1U));
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1921)->__VnoInFunc_get_status(vlSymsp, backdoor_read_func__Vfuncrtn);
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_backdoor_read(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_backdoor_read\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCall_0__backdoor_read_func;
    this->__VnoInFunc_backdoor_read_func(vlProcess, vlSymsp, rw, __VlefCall_0__backdoor_read_func);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1928)->__VnoInFunc_set_status(vlSymsp, __VlefCall_0__backdoor_read_func);
}

void Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_backdoor_write(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_backdoor_write\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_get_value_size__Vfuncout_4909;
    __Vtask_get_value_size__Vfuncout_4909 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1869;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4910;
    ::IData/*31:0*/ __Vtask_uvm_report_info__verbosity_4913;
    __Vtask_uvm_report_info__verbosity_4913 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__line_4915;
    __Vtask_uvm_report_info__line_4915 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_info__report_enabled_checked_4917;
    __Vtask_uvm_report_info__report_enabled_checked_4917 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1870;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4918;
    ::std::string __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCall_9__uvm_hdl_deposit;
    ::QData/*63:0*/ __VlefCall_8__get_value;
    ::IData/*31:0*/ __VlefCall_7__uvm_hdl_deposit;
    ::QData/*63:0*/ __VlefCall_6__get_value;
    ::CData/*0:0*/ __VlefLogAnd_5;
    ::IData/*31:0*/ __VlefCall_4__get_report_action;
    ::IData/*31:0*/ __VlefCall_3__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_2__uvm_get_report_object;
    ::QData/*63:0*/ __VlefCall_1__get_offset;
    ::std::string __VlefCall_0__get_bd_kind;
    ::IData/*31:0*/ unnamedblk821__DOT__mem_idx;
    ::std::string unnamedblk821__DOT__unnamedblk822__DOT__idx;
    ::IData/*31:0*/ unnamedblk821__DOT__unnamedblk822__DOT__unnamedblk823__DOT__i;
    unnamedblk821__DOT__unnamedblk822__DOT__unnamedblk823__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk821__DOT__unnamedblk822__DOT__unnamedblk823__DOT__i__Vloopsize;
    unnamedblk821__DOT__unnamedblk822__DOT__unnamedblk823__DOT__i__Vloopsize = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_hdl_path_concat> unnamedblk821__DOT__unnamedblk822__DOT__unnamedblk823__DOT__unnamedblk824__DOT__hdl_concat;
    ::IData/*31:0*/ unnamedblk821__DOT__unnamedblk822__DOT__unnamedblk823__DOT__unnamedblk824__DOT__unnamedblk825__DOT__j;
    unnamedblk821__DOT__unnamedblk822__DOT__unnamedblk823__DOT__unnamedblk824__DOT__unnamedblk825__DOT__j = 0;
    ::IData/*31:0*/ unnamedblk821__DOT__unnamedblk822__DOT__unnamedblk823__DOT__unnamedblk824__DOT__unnamedblk825__DOT__j__Vloopsize;
    unnamedblk821__DOT__unnamedblk822__DOT__unnamedblk823__DOT__unnamedblk824__DOT__unnamedblk825__DOT__j__Vloopsize = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk821__DOT__unnamedblk822__DOT__unnamedblk823__DOT__unnamedblk824__DOT__unnamedblk825__DOT__unnamedblk826__DOT___local_report_object_;
    ::QData/*63:0*/ unnamedblk821__DOT__unnamedblk822__DOT__unnamedblk823__DOT__unnamedblk824__DOT__unnamedblk825__DOT__unnamedblk827__DOT__slice;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_hdl_path_concat>> paths;
    ::CData/*0:0*/ ok;
    ::IData/*31:0*/ rw_value_size;
    paths.clear();
    ok = 1U;
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1938)->__VnoInFunc_get_value_size(vlSymsp, __Vtask_get_value_size__Vfuncout_4909);
    rw_value_size = __Vtask_get_value_size__Vfuncout_4909;
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1940)->__VnoInFunc_get_bd_kind(vlSymsp, __VlefCall_0__get_bd_kind);
    this->__VnoInFunc_get_full_hdl_path(vlProcess, vlSymsp, paths, 
                                        VL_CVT_PACK_STR_NN(__VlefCall_0__get_bd_kind), "."s);
    unnamedblk821__DOT__mem_idx = 0U;
    unnamedblk821__DOT__mem_idx = 0U;
    while (VL_LTS_III(32, unnamedblk821__DOT__mem_idx, rw_value_size)) {
        unnamedblk821__DOT__unnamedblk822__DOT__idx = ""s;
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1945)->__VnoInFunc_get_offset(vlSymsp, __VlefCall_1__get_offset);
        VL_SFORMAT_NX(unnamedblk821__DOT__unnamedblk822__DOT__idx
                      ,"%0d",1, '~',32,((::IData)(__VlefCall_1__get_offset) 
                                        + unnamedblk821__DOT__mem_idx));
        unnamedblk821__DOT__unnamedblk822__DOT__unnamedblk823__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk821__DOT__unnamedblk822__DOT__unnamedblk823__DOT__i, paths.size())) {
            unnamedblk821__DOT__unnamedblk822__DOT__unnamedblk823__DOT__i__Vloopsize 
                = paths.size();
            unnamedblk821__DOT__unnamedblk822__DOT__unnamedblk823__DOT__unnamedblk824__DOT__hdl_concat 
                = paths.at(unnamedblk821__DOT__unnamedblk822__DOT__unnamedblk823__DOT__i);
            unnamedblk821__DOT__unnamedblk822__DOT__unnamedblk823__DOT__unnamedblk824__DOT__unnamedblk825__DOT__j = 0U;
            while (VL_LTS_III(32, unnamedblk821__DOT__unnamedblk822__DOT__unnamedblk823__DOT__unnamedblk824__DOT__unnamedblk825__DOT__j, VL_NULL_CHECK(unnamedblk821__DOT__unnamedblk822__DOT__unnamedblk823__DOT__unnamedblk824__DOT__hdl_concat, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1948)
                              ->__PVT__slices.size())) {
                unnamedblk821__DOT__unnamedblk822__DOT__unnamedblk823__DOT__unnamedblk824__DOT__unnamedblk825__DOT__j__Vloopsize 
                    = VL_NULL_CHECK(unnamedblk821__DOT__unnamedblk822__DOT__unnamedblk823__DOT__unnamedblk824__DOT__hdl_concat, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1948)
                    ->__PVT__slices.size();
                {
                    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1869);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                        = __Vfunc_get__Vfuncout_1869;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4910);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                        = __Vtask_get_root__Vfuncout_4910;
                    __VlefCall_2__uvm_get_report_object 
                        = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
                    VL_NULL_CHECK(__VlefCall_2__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1949)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk821__DOT__unnamedblk822__DOT__unnamedblk823__DOT__unnamedblk824__DOT__unnamedblk825__DOT__unnamedblk826__DOT___local_report_object_);
                    VL_NULL_CHECK(unnamedblk821__DOT__unnamedblk822__DOT__unnamedblk823__DOT__unnamedblk824__DOT__unnamedblk825__DOT__unnamedblk826__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1949)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "RegModel"s, __VlefCall_3__get_report_verbosity_level);
                    __VlefLogAnd_5 = VL_LTES_III(32, 0x000001f4U, __VlefCall_3__get_report_verbosity_level);
                    if (__VlefLogAnd_5) {
                        VL_NULL_CHECK(unnamedblk821__DOT__unnamedblk822__DOT__unnamedblk823__DOT__unnamedblk824__DOT__unnamedblk825__DOT__unnamedblk826__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1949)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "RegModel"s, __VlefCall_4__get_report_action);
                        __VlefLogAnd_5 = (0U != __VlefCall_4__get_report_action);
                    }
                    if (VL_UNLIKELY((__VlefLogAnd_5))) {
                        __Vtask_uvm_report_info__report_enabled_checked_4917 = 1U;
                        this->__Vtask_uvm_report_info__context_name_4916 = ""s;
                        __Vtask_uvm_report_info__line_4915 = 0x0000079dU;
                        this->__Vtask_uvm_report_info__filename_4914 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh"s;
                        __Vtask_uvm_report_info__verbosity_4913 = 0x000001f4U;
                        __Vtemp_1 = VL_NULL_CHECK(unnamedblk821__DOT__unnamedblk822__DOT__unnamedblk823__DOT__unnamedblk824__DOT__hdl_concat, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1949)
                            ->__PVT__slices.at(unnamedblk821__DOT__unnamedblk822__DOT__unnamedblk823__DOT__unnamedblk824__DOT__unnamedblk825__DOT__j)
                            .__PVT__path;
                        VL_SFORMAT_NX(this->__Vtask_uvm_report_info__message_4912
                                      ,"backdoor_write to %s ",1
                                      , 'S',&(__Vtemp_1));
                        this->__Vtask_uvm_report_info__id_4911 = "RegModel"s;
                        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1870);
                        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs 
                            = __Vfunc_get__Vfuncout_1870;
                        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 147)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4918);
                        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top 
                            = __Vtask_get_root__Vfuncout_4918;
                        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 148)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__id_4911, this->__Vtask_uvm_report_info__message_4912, __Vtask_uvm_report_info__verbosity_4913, this->__Vtask_uvm_report_info__filename_4914, __Vtask_uvm_report_info__line_4915, this->__Vtask_uvm_report_info__context_name_4916, (::IData)(__Vtask_uvm_report_info__report_enabled_checked_4917));
                    }
                    if (VL_UNLIKELY((VL_GTS_III(32, 0U, VL_NULL_CHECK(unnamedblk821__DOT__unnamedblk822__DOT__unnamedblk823__DOT__unnamedblk824__DOT__hdl_concat, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1951)
                                                ->__PVT__slices.at(unnamedblk821__DOT__unnamedblk822__DOT__unnamedblk823__DOT__unnamedblk824__DOT__unnamedblk825__DOT__j)
                                                .__PVT__offset)))) {
                        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1952)->__VnoInFunc_get_value(vlSymsp, unnamedblk821__DOT__mem_idx, __VlefCall_6__get_value);
                        vlSymsp->vlInst.TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "UVM_HDL_DEPOSIT"s, "uvm_hdl DPI routines are compiled off. Recompile without +define+UVM_HDL_NO_DPI"s, 0U, ""s, 0U, ""s, 0U);
                        __VlefCall_7__uvm_hdl_deposit = 0U;
                        ok = ((::IData)(ok) & __VlefCall_7__uvm_hdl_deposit);
                        goto __Vlabel0;
                    }
                    unnamedblk821__DOT__unnamedblk822__DOT__unnamedblk823__DOT__unnamedblk824__DOT__unnamedblk825__DOT__unnamedblk827__DOT__slice = 0ULL;
                    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1957)->__VnoInFunc_get_value(vlSymsp, unnamedblk821__DOT__mem_idx, __VlefCall_8__get_value);
                    unnamedblk821__DOT__unnamedblk822__DOT__unnamedblk823__DOT__unnamedblk824__DOT__unnamedblk825__DOT__unnamedblk827__DOT__slice 
                        = VL_SHIFTR_QQI(64,64,32, __VlefCall_8__get_value, VL_NULL_CHECK(unnamedblk821__DOT__unnamedblk822__DOT__unnamedblk823__DOT__unnamedblk824__DOT__hdl_concat, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1957)
                                        ->__PVT__slices.at(unnamedblk821__DOT__unnamedblk822__DOT__unnamedblk823__DOT__unnamedblk824__DOT__unnamedblk825__DOT__j)
                                        .__PVT__offset);
                    unnamedblk821__DOT__unnamedblk822__DOT__unnamedblk823__DOT__unnamedblk824__DOT__unnamedblk825__DOT__unnamedblk827__DOT__slice 
                        = (unnamedblk821__DOT__unnamedblk822__DOT__unnamedblk823__DOT__unnamedblk824__DOT__unnamedblk825__DOT__unnamedblk827__DOT__slice 
                           & (VL_SHIFTL_QQI(64,64,32, 1ULL, VL_NULL_CHECK(unnamedblk821__DOT__unnamedblk822__DOT__unnamedblk823__DOT__unnamedblk824__DOT__hdl_concat, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1958)
                                            ->__PVT__slices.at(unnamedblk821__DOT__unnamedblk822__DOT__unnamedblk823__DOT__unnamedblk824__DOT__unnamedblk825__DOT__j)
                                            .__PVT__size) 
                              - 1ULL));
                    vlSymsp->vlInst.TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "UVM_HDL_DEPOSIT"s, "uvm_hdl DPI routines are compiled off. Recompile without +define+UVM_HDL_NO_DPI"s, 0U, ""s, 0U, ""s, 0U);
                    __VlefCall_9__uvm_hdl_deposit = 0U;
                    ok = ((::IData)(ok) & __VlefCall_9__uvm_hdl_deposit);
                    __Vlabel0: ;
                }
                if ((unnamedblk821__DOT__unnamedblk822__DOT__unnamedblk823__DOT__unnamedblk824__DOT__unnamedblk825__DOT__j__Vloopsize 
                     <= VL_NULL_CHECK(unnamedblk821__DOT__unnamedblk822__DOT__unnamedblk823__DOT__unnamedblk824__DOT__hdl_concat, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1948)
                     ->__PVT__slices.size())) {
                    unnamedblk821__DOT__unnamedblk822__DOT__unnamedblk823__DOT__unnamedblk824__DOT__unnamedblk825__DOT__j 
                        = ((::IData)(1U) + unnamedblk821__DOT__unnamedblk822__DOT__unnamedblk823__DOT__unnamedblk824__DOT__unnamedblk825__DOT__j);
                }
            }
            if ((unnamedblk821__DOT__unnamedblk822__DOT__unnamedblk823__DOT__i__Vloopsize 
                 <= paths.size())) {
                unnamedblk821__DOT__unnamedblk822__DOT__unnamedblk823__DOT__i 
                    = ((::IData)(1U) + unnamedblk821__DOT__unnamedblk822__DOT__unnamedblk823__DOT__i);
            }
        }
        unnamedblk821__DOT__mem_idx = ((::IData)(1U) 
                                       + unnamedblk821__DOT__mem_idx);
    }
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 1964)->__VnoInFunc_set_status(vlSymsp, 
                                                                                ((::IData)(ok)
                                                                                 ? 0U
                                                                                 : 1U));
}

void Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_has_hdl_path(Vtb_top__Syms* __restrict vlSymsp, ::std::string kind, ::CData/*0:0*/ &has_hdl_path__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_has_hdl_path\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0__exists;
    has_hdl_path__Vfuncrtn = 0U;
    if ((""s == kind)) {
        VL_NULL_CHECK(this->__PVT__m_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 2033)->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
    }
    VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 2037)->__VnoInFunc_exists(vlSymsp, kind, __VlefCall_0__exists);
    has_hdl_path__Vfuncrtn = (1U & __VlefCall_0__exists);
}

void Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_full_hdl_path(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_hdl_path_concat>> &paths, ::std::string kind, ::std::string separator) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_full_hdl_path\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1875;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4919;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_4922;
    __Vtask_uvm_report_error__verbosity_4922 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_4924;
    __Vtask_uvm_report_error__line_4924 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_4926;
    __Vtask_uvm_report_error__report_enabled_checked_4926 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1876;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4927;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCall_5__size;
    ::CData/*0:0*/ __VlefLogAnd_4;
    ::IData/*31:0*/ __VlefCall_3__get_report_action;
    ::IData/*31:0*/ __VlefCall_2__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_1__uvm_get_report_object;
    ::CData/*0:0*/ __VlefCall_0__has_hdl_path;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk832__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4ea7d76f> unnamedblk833__DOT__hdl_paths;
    ::VlQueue<::std::string> unnamedblk833__DOT__parent_paths;
    ::IData/*31:0*/ unnamedblk833__DOT__unnamedblk834__DOT__i;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_hdl_path_concat> unnamedblk833__DOT__unnamedblk834__DOT__unnamedblk835__DOT__hdl_concat;
    ::IData/*31:0*/ unnamedblk833__DOT__unnamedblk834__DOT__unnamedblk835__DOT__unnamedblk836__DOT__j;
    unnamedblk833__DOT__unnamedblk834__DOT__unnamedblk835__DOT__unnamedblk836__DOT__j = 0;
    ::IData/*31:0*/ unnamedblk833__DOT__unnamedblk834__DOT__unnamedblk835__DOT__unnamedblk836__DOT__j__Vloopsize;
    unnamedblk833__DOT__unnamedblk834__DOT__unnamedblk835__DOT__unnamedblk836__DOT__j__Vloopsize = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_hdl_path_concat> unnamedblk833__DOT__unnamedblk834__DOT__unnamedblk835__DOT__unnamedblk836__DOT__unnamedblk837__DOT__t;
    ::IData/*31:0*/ unnamedblk833__DOT__unnamedblk834__DOT__unnamedblk835__DOT__unnamedblk836__DOT__unnamedblk837__DOT__unnamedblk838__DOT__k;
    unnamedblk833__DOT__unnamedblk834__DOT__unnamedblk835__DOT__unnamedblk836__DOT__unnamedblk837__DOT__unnamedblk838__DOT__k = 0;
    ::IData/*31:0*/ unnamedblk833__DOT__unnamedblk834__DOT__unnamedblk835__DOT__unnamedblk836__DOT__unnamedblk837__DOT__unnamedblk838__DOT__k__Vloopsize;
    unnamedblk833__DOT__unnamedblk834__DOT__unnamedblk835__DOT__unnamedblk836__DOT__unnamedblk837__DOT__unnamedblk838__DOT__k__Vloopsize = 0;
    {
        if ((""s == kind)) {
            VL_NULL_CHECK(this->__PVT__m_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 2096)->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
        }
        this->__VnoInFunc_has_hdl_path(vlSymsp, kind, __VlefCall_0__has_hdl_path);
        if ((1U & (~ (::IData)(__VlefCall_0__has_hdl_path)))) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1875);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1875;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4919);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_4919;
            __VlefCall_1__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_1__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 2102)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk832__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk832__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 2102)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_2__get_report_verbosity_level);
            __VlefLogAnd_4 = VL_LTES_III(32, 0U, __VlefCall_2__get_report_verbosity_level);
            if (__VlefLogAnd_4) {
                VL_NULL_CHECK(unnamedblk832__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 2102)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_3__get_report_action);
                __VlefLogAnd_4 = (0U != __VlefCall_3__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_4))) {
                __Vtask_uvm_report_error__report_enabled_checked_4926 = 1U;
                this->__Vtask_uvm_report_error__context_name_4925 = ""s;
                __Vtask_uvm_report_error__line_4924 = 0x00000836U;
                this->__Vtask_uvm_report_error__filename_4923 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh"s;
                __Vtask_uvm_report_error__verbosity_4922 = 0U;
                this->__Vtask_uvm_report_error__message_4921 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("Memory does not have hdl path defined for abstraction '"s, kind), "'"s));
                this->__Vtask_uvm_report_error__id_4920 = "RegModel"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1876);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1876;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4927);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_4927;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_4920, this->__Vtask_uvm_report_error__message_4921, __Vtask_uvm_report_error__verbosity_4922, this->__Vtask_uvm_report_error__filename_4923, __Vtask_uvm_report_error__line_4924, this->__Vtask_uvm_report_error__context_name_4925, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_4926));
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 2107)->__VnoInFunc_get(vlProcess, vlSymsp, kind, unnamedblk833__DOT__hdl_paths);
        unnamedblk833__DOT__parent_paths.clear();
        unnamedblk833__DOT__parent_paths.atDefault().clear();
        VL_NULL_CHECK(this->__PVT__m_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 2110)->__VnoInFunc_get_full_hdl_path(vlProcess, vlSymsp, unnamedblk833__DOT__parent_paths, kind, separator);
        unnamedblk833__DOT__unnamedblk834__DOT__i = 0U;
        unnamedblk833__DOT__unnamedblk834__DOT__i = 0U;
        while (true) {
            VL_NULL_CHECK(unnamedblk833__DOT__hdl_paths, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 2112)->__VnoInFunc_size(vlSymsp, __VlefCall_5__size);
            if (!(VL_LTS_III(32, unnamedblk833__DOT__unnamedblk834__DOT__i, __VlefCall_5__size))) break;
            VL_NULL_CHECK(unnamedblk833__DOT__hdl_paths, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 2113)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk833__DOT__unnamedblk834__DOT__i, unnamedblk833__DOT__unnamedblk834__DOT__unnamedblk835__DOT__hdl_concat);
            unnamedblk833__DOT__unnamedblk834__DOT__unnamedblk835__DOT__unnamedblk836__DOT__j = 0U;
            while (VL_LTS_III(32, unnamedblk833__DOT__unnamedblk834__DOT__unnamedblk835__DOT__unnamedblk836__DOT__j, unnamedblk833__DOT__parent_paths.size())) {
                unnamedblk833__DOT__unnamedblk834__DOT__unnamedblk835__DOT__unnamedblk836__DOT__j__Vloopsize 
                    = unnamedblk833__DOT__parent_paths.size();
                unnamedblk833__DOT__unnamedblk834__DOT__unnamedblk835__DOT__unnamedblk836__DOT__unnamedblk837__DOT__t 
                    = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_hdl_path_concat, vlProcess, vlSymsp);
                unnamedblk833__DOT__unnamedblk834__DOT__unnamedblk835__DOT__unnamedblk836__DOT__unnamedblk837__DOT__unnamedblk838__DOT__k = 0U;
                while (VL_LTS_III(32, unnamedblk833__DOT__unnamedblk834__DOT__unnamedblk835__DOT__unnamedblk836__DOT__unnamedblk837__DOT__unnamedblk838__DOT__k, VL_NULL_CHECK(unnamedblk833__DOT__unnamedblk834__DOT__unnamedblk835__DOT__hdl_concat, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 2118)
                                  ->__PVT__slices.size())) {
                    unnamedblk833__DOT__unnamedblk834__DOT__unnamedblk835__DOT__unnamedblk836__DOT__unnamedblk837__DOT__unnamedblk838__DOT__k__Vloopsize 
                        = VL_NULL_CHECK(unnamedblk833__DOT__unnamedblk834__DOT__unnamedblk835__DOT__hdl_concat, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 2118)
                        ->__PVT__slices.size();
                    if ((""s == VL_NULL_CHECK(unnamedblk833__DOT__unnamedblk834__DOT__unnamedblk835__DOT__hdl_concat, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 2119)
                         ->__PVT__slices.at(unnamedblk833__DOT__unnamedblk834__DOT__unnamedblk835__DOT__unnamedblk836__DOT__unnamedblk837__DOT__unnamedblk838__DOT__k)
                         .__PVT__path)) {
                        VL_NULL_CHECK(unnamedblk833__DOT__unnamedblk834__DOT__unnamedblk835__DOT__unnamedblk836__DOT__unnamedblk837__DOT__t, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 2121)->__VnoInFunc_add_path(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(unnamedblk833__DOT__parent_paths.at(unnamedblk833__DOT__unnamedblk834__DOT__unnamedblk835__DOT__unnamedblk836__DOT__j)), 0xffffffffU, 0xffffffffU);
                    } else {
                        VL_NULL_CHECK(unnamedblk833__DOT__unnamedblk834__DOT__unnamedblk835__DOT__unnamedblk836__DOT__unnamedblk837__DOT__t, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 2126)->__VnoInFunc_add_path(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(unnamedblk833__DOT__parent_paths.at(unnamedblk833__DOT__unnamedblk834__DOT__unnamedblk835__DOT__unnamedblk836__DOT__j), separator), VL_NULL_CHECK(unnamedblk833__DOT__unnamedblk834__DOT__unnamedblk835__DOT__hdl_concat, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 2126)
                                                                                ->__PVT__slices.at(unnamedblk833__DOT__unnamedblk834__DOT__unnamedblk835__DOT__unnamedblk836__DOT__unnamedblk837__DOT__unnamedblk838__DOT__k)
                                                                                .__PVT__path)), VL_NULL_CHECK(unnamedblk833__DOT__unnamedblk834__DOT__unnamedblk835__DOT__hdl_concat, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 2127)
                                                                                ->__PVT__slices.at(unnamedblk833__DOT__unnamedblk834__DOT__unnamedblk835__DOT__unnamedblk836__DOT__unnamedblk837__DOT__unnamedblk838__DOT__k)
                                                                                .__PVT__offset, VL_NULL_CHECK(unnamedblk833__DOT__unnamedblk834__DOT__unnamedblk835__DOT__hdl_concat, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 2128)
                                                                                ->__PVT__slices.at(unnamedblk833__DOT__unnamedblk834__DOT__unnamedblk835__DOT__unnamedblk836__DOT__unnamedblk837__DOT__unnamedblk838__DOT__k)
                                                                                .__PVT__size);
                    }
                    if ((unnamedblk833__DOT__unnamedblk834__DOT__unnamedblk835__DOT__unnamedblk836__DOT__unnamedblk837__DOT__unnamedblk838__DOT__k__Vloopsize 
                         <= VL_NULL_CHECK(unnamedblk833__DOT__unnamedblk834__DOT__unnamedblk835__DOT__hdl_concat, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 2118)
                         ->__PVT__slices.size())) {
                        unnamedblk833__DOT__unnamedblk834__DOT__unnamedblk835__DOT__unnamedblk836__DOT__unnamedblk837__DOT__unnamedblk838__DOT__k 
                            = ((::IData)(1U) + unnamedblk833__DOT__unnamedblk834__DOT__unnamedblk835__DOT__unnamedblk836__DOT__unnamedblk837__DOT__unnamedblk838__DOT__k);
                    }
                }
                paths.push_back(unnamedblk833__DOT__unnamedblk834__DOT__unnamedblk835__DOT__unnamedblk836__DOT__unnamedblk837__DOT__t);
                if ((unnamedblk833__DOT__unnamedblk834__DOT__unnamedblk835__DOT__unnamedblk836__DOT__j__Vloopsize 
                     <= unnamedblk833__DOT__parent_paths.size())) {
                    unnamedblk833__DOT__unnamedblk834__DOT__unnamedblk835__DOT__unnamedblk836__DOT__j 
                        = ((::IData)(1U) + unnamedblk833__DOT__unnamedblk834__DOT__unnamedblk835__DOT__unnamedblk836__DOT__j);
                }
            }
            unnamedblk833__DOT__unnamedblk834__DOT__i 
                = ((::IData)(1U) + unnamedblk833__DOT__unnamedblk834__DOT__i);
        }
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_parent(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_block> &get_parent__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_parent\n"); );
    // Body
    this->__VnoInFunc_get_block(vlSymsp, get_parent__Vfuncrtn);
}

extern const ::VlUnpacked<::std::string, 8> Vtb_top__ConstPool__CONSARRAY_11;

void Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_convert2string\n"); );
    // Locals
    ::std::string __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_7__get_access;
    ::QData/*63:0*/ __VlefCall_6__get_size;
    ::IData/*31:0*/ __VlefCall_5__get_n_bytes;
    ::std::string __VlefCall_4__get_full_name;
    ::QData/*63:0*/ __VlefCall_3__get_base_addr;
    ::IData/*31:0*/ __VlefCall_2__get_n_bits;
    ::QData/*63:0*/ __VlefCall_1__get_size;
    ::std::string __VlefCall_0__get_full_name;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk839__DOT__map;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk839__DOT__map__Vnext;
    ::CData/*0:0*/ unnamedblk839__DOT__map__Vmore;
    unnamedblk839__DOT__map__Vmore = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk839__DOT__unnamedblk840__DOT__parent_map;
    ::IData/*31:0*/ unnamedblk839__DOT__unnamedblk840__DOT__offset;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk839__DOT__unnamedblk840__DOT__unnamedblk841__DOT__this_map;
    ::IData/*31:0*/ unnamedblk839__DOT__unnamedblk840__DOT__unnamedblk841__DOT__endian_name;
    convert2string__Vfuncrtn = ""s;
    ::std::string res_str;
    ::std::string prefix;
    res_str = ""s;
    prefix = ""s;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    this->__VnoInFunc_get_size(vlSymsp, __VlefCall_1__get_size);
    this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_2__get_n_bits);
    VL_SFORMAT_NX(convert2string__Vfuncrtn,"%sMemory %s -- %0dx%0d bits",4
                  , 'S',&(prefix), 'S',&(__VlefCall_0__get_full_name)
                  , '#',64,__VlefCall_1__get_size, '#',32,__VlefCall_2__get_n_bits);
    convert2string__Vfuncrtn = ((0U == this->__PVT__m_maps.size())
                                 ? VL_CONCATN_NNN(convert2string__Vfuncrtn, "  (unmapped)\n"s)
                                 : VL_CONCATN_NNN(convert2string__Vfuncrtn, "\n"s));
    unnamedblk839__DOT__map__Vmore = (0U != this->__PVT__m_maps.first(unnamedblk839__DOT__map__Vnext));
    while (unnamedblk839__DOT__map__Vmore) {
        unnamedblk839__DOT__map = unnamedblk839__DOT__map__Vnext;
        unnamedblk839__DOT__map__Vmore = (0U != this->__PVT__m_maps.next(unnamedblk839__DOT__map__Vnext));
        unnamedblk839__DOT__unnamedblk840__DOT__parent_map 
            = unnamedblk839__DOT__map;
        unnamedblk839__DOT__unnamedblk840__DOT__offset = 0U;
        while ((VlNull{} != unnamedblk839__DOT__unnamedblk840__DOT__parent_map)) {
            unnamedblk839__DOT__unnamedblk840__DOT__unnamedblk841__DOT__this_map 
                = unnamedblk839__DOT__unnamedblk840__DOT__parent_map;
            unnamedblk839__DOT__unnamedblk840__DOT__unnamedblk841__DOT__endian_name = 0U;
            VL_NULL_CHECK(unnamedblk839__DOT__unnamedblk840__DOT__unnamedblk841__DOT__this_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 2179)->__VnoInFunc_get_parent_map(vlSymsp, unnamedblk839__DOT__unnamedblk840__DOT__parent_map);
            VL_NULL_CHECK(unnamedblk839__DOT__unnamedblk840__DOT__unnamedblk841__DOT__this_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 2180)->__VnoInFunc_get_endian(vlSymsp, 1U, unnamedblk839__DOT__unnamedblk840__DOT__unnamedblk841__DOT__endian_name);
            if ((VlNull{} == unnamedblk839__DOT__unnamedblk840__DOT__parent_map)) {
                VL_NULL_CHECK(unnamedblk839__DOT__unnamedblk840__DOT__unnamedblk841__DOT__this_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 2182)->__VnoInFunc_get_base_addr(vlProcess, vlSymsp, 0U, __VlefCall_3__get_base_addr);
            } else {
                VL_NULL_CHECK(unnamedblk839__DOT__unnamedblk840__DOT__parent_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 2183)->__VnoInFunc_get_submap_offset(vlProcess, vlSymsp, unnamedblk839__DOT__unnamedblk840__DOT__unnamedblk841__DOT__this_map, __VlefCall_3__get_base_addr);
            }
            unnamedblk839__DOT__unnamedblk840__DOT__offset 
                = (::IData)(__VlefCall_3__get_base_addr);
            prefix = VL_CONCATN_NNN(prefix, "  "s);
            VL_NULL_CHECK(unnamedblk839__DOT__unnamedblk840__DOT__unnamedblk841__DOT__this_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 2186)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
            VL_NULL_CHECK(unnamedblk839__DOT__unnamedblk840__DOT__unnamedblk841__DOT__this_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 2186)->__VnoInFunc_get_n_bytes(vlSymsp, 1U, __VlefCall_5__get_n_bytes);
            this->__VnoInFunc_get_size(vlSymsp, __VlefCall_6__get_size);
            this->__VnoInFunc_get_access(vlProcess, vlSymsp, unnamedblk839__DOT__unnamedblk840__DOT__unnamedblk841__DOT__this_map, __VlefCall_7__get_access);
            __Vtemp_1 = ((4U < unnamedblk839__DOT__unnamedblk840__DOT__unnamedblk841__DOT__endian_name)
                          ? ""s : Vtb_top__ConstPool__CONSARRAY_11
                         [(7U & unnamedblk839__DOT__unnamedblk840__DOT__unnamedblk841__DOT__endian_name)]);
            VL_SFORMAT_NX(convert2string__Vfuncrtn,"%sMapped in '%s' -- buswidth %0d bytes, %s, offset 'h%0h, size 'h%0h, %s\n",7
                          , 'S',&(prefix), 'S',&(__VlefCall_4__get_full_name)
                          , '#',32,__VlefCall_5__get_n_bytes
                          , 'S',&(__Vtemp_1), '#',32,unnamedblk839__DOT__unnamedblk840__DOT__offset
                          , '#',64,__VlefCall_6__get_size
                          , 'S',&(__VlefCall_7__get_access));
        }
    }
    prefix = "  "s;
    if (this->__PVT__m_read_in_progress) {
        if (((""s != this->__PVT__m_fname) & (0U != this->__PVT__m_lineno))) {
            VL_SFORMAT_NX(res_str,"%s:%0d ",2, 'S',&(this->__PVT__m_fname)
                          , '~',32,this->__PVT__m_lineno);
        }
        convert2string__Vfuncrtn = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                                 VL_CONCATN_NNN(convert2string__Vfuncrtn, "  "s), res_str), "currently executing read method"s);
    }
    if (this->__PVT__m_write_in_progress) {
        if (((""s != this->__PVT__m_fname) & (0U != this->__PVT__m_lineno))) {
            VL_SFORMAT_NX(res_str,"%s:%0d ",2, 'S',&(this->__PVT__m_fname)
                          , '~',32,this->__PVT__m_lineno);
        }
        convert2string__Vfuncrtn = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                                 VL_CONCATN_NNN(convert2string__Vfuncrtn, "  "s), res_str), "currently executing write method"s);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_print\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::QData/*63:0*/ __VlefCall_1__get_size;
    ::IData/*31:0*/ __VlefCall_0__get_n_bits;
    Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
    this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_0__get_n_bits);
    VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 2216)->__VnoInFunc_print_field_int(vlProcess, vlSymsp, "n_bits"s, (::QData)((::IData)(__VlefCall_0__get_n_bits)), 0x00000020U, 0x03000000U, 0x2eU, ""s);
    this->__VnoInFunc_get_size(vlSymsp, __VlefCall_1__get_size);
    VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 2217)->__VnoInFunc_print_field_int(vlProcess, vlSymsp, "size"s, __VlefCall_1__get_size, 0x00000020U, 0x03000000U, 0x2eU, ""s);
}

void Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_clone(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_clone\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1877;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4928;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk842__DOT___local_report_object_;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1877);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1877;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4928);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
        = __Vtask_get_root__Vfuncout_4928;
    __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
    VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 2224)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk842__DOT___local_report_object_);
    VL_NULL_CHECK(unnamedblk842__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 2224)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 3U, "RegModel"s, __VlefCall_1__get_report_verbosity_level);
    __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
    if (__VlefLogAnd_3) {
        VL_NULL_CHECK(unnamedblk842__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 2224)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 3U, "RegModel"s, __VlefCall_2__get_report_action);
        __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
    }
    if (VL_UNLIKELY((__VlefLogAnd_3))) {
        vlSymsp->vlInst.TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, "RegModel memories cannot be cloned"s, 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh"s, 0x000008b0U, ""s, 1U);
    }
    clone__Vfuncrtn = VlNull{};
}

void Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_copy\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1878;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4929;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk843__DOT___local_report_object_;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1878);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1878;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4929);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
        = __Vtask_get_root__Vfuncout_4929;
    __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
    VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 2231)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk843__DOT___local_report_object_);
    VL_NULL_CHECK(unnamedblk843__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 2231)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 3U, "RegModel"s, __VlefCall_1__get_report_verbosity_level);
    __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
    if (__VlefLogAnd_3) {
        VL_NULL_CHECK(unnamedblk843__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 2231)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 3U, "RegModel"s, __VlefCall_2__get_report_action);
        __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
    }
    if (VL_UNLIKELY((__VlefLogAnd_3))) {
        vlSymsp->vlInst.TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, "RegModel memories cannot be copied"s, 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh"s, 0x000008b7U, ""s, 1U);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_compare(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> rhs, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_comparer> comparer, ::CData/*0:0*/ &do_compare__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_compare\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1879;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4930;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_4933;
    __Vtask_uvm_report_warning__verbosity_4933 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_4935;
    __Vtask_uvm_report_warning__line_4935 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_4937;
    __Vtask_uvm_report_warning__report_enabled_checked_4937 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1880;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4938;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk844__DOT___local_report_object_;
    do_compare__Vfuncrtn = 0U;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1879);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1879;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4930);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
        = __Vtask_get_root__Vfuncout_4930;
    __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
    VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 2239)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk844__DOT___local_report_object_);
    VL_NULL_CHECK(unnamedblk844__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 2239)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_1__get_report_verbosity_level);
    __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
    if (__VlefLogAnd_3) {
        VL_NULL_CHECK(unnamedblk844__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 2239)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_2__get_report_action);
        __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
    }
    if (VL_UNLIKELY((__VlefLogAnd_3))) {
        __Vtask_uvm_report_warning__report_enabled_checked_4937 = 1U;
        this->__Vtask_uvm_report_warning__context_name_4936 = ""s;
        __Vtask_uvm_report_warning__line_4935 = 0x000008bfU;
        this->__Vtask_uvm_report_warning__filename_4934 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh"s;
        __Vtask_uvm_report_warning__verbosity_4933 = 0U;
        this->__Vtask_uvm_report_warning__message_4932 = "RegModel memories cannot be compared"s;
        this->__Vtask_uvm_report_warning__id_4931 = "RegModel"s;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1880);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1880;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4938);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__Vfuncout_4938;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_4931, this->__Vtask_uvm_report_warning__message_4932, __Vtask_uvm_report_warning__verbosity_4933, this->__Vtask_uvm_report_warning__filename_4934, __Vtask_uvm_report_warning__line_4935, this->__Vtask_uvm_report_warning__context_name_4936, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_4937));
    }
    do_compare__Vfuncrtn = 0U;
}

void Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_pack(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_pack\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1881;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4939;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_4942;
    __Vtask_uvm_report_warning__verbosity_4942 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_4944;
    __Vtask_uvm_report_warning__line_4944 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_4946;
    __Vtask_uvm_report_warning__report_enabled_checked_4946 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1882;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4947;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk845__DOT___local_report_object_;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1881);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1881;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4939);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
        = __Vtask_get_root__Vfuncout_4939;
    __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
    VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 2247)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk845__DOT___local_report_object_);
    VL_NULL_CHECK(unnamedblk845__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 2247)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_1__get_report_verbosity_level);
    __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
    if (__VlefLogAnd_3) {
        VL_NULL_CHECK(unnamedblk845__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 2247)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_2__get_report_action);
        __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
    }
    if (VL_UNLIKELY((__VlefLogAnd_3))) {
        __Vtask_uvm_report_warning__report_enabled_checked_4946 = 1U;
        this->__Vtask_uvm_report_warning__context_name_4945 = ""s;
        __Vtask_uvm_report_warning__line_4944 = 0x000008c7U;
        this->__Vtask_uvm_report_warning__filename_4943 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh"s;
        __Vtask_uvm_report_warning__verbosity_4942 = 0U;
        this->__Vtask_uvm_report_warning__message_4941 = "RegModel memories cannot be packed"s;
        this->__Vtask_uvm_report_warning__id_4940 = "RegModel"s;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1882);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1882;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4947);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__Vfuncout_4947;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_4940, this->__Vtask_uvm_report_warning__message_4941, __Vtask_uvm_report_warning__verbosity_4942, this->__Vtask_uvm_report_warning__filename_4943, __Vtask_uvm_report_warning__line_4944, this->__Vtask_uvm_report_warning__context_name_4945, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_4946));
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_unpack(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_unpack\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1883;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4948;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_4951;
    __Vtask_uvm_report_warning__verbosity_4951 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_4953;
    __Vtask_uvm_report_warning__line_4953 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_4955;
    __Vtask_uvm_report_warning__report_enabled_checked_4955 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1884;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4956;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk846__DOT___local_report_object_;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1883);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1883;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4948);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
        = __Vtask_get_root__Vfuncout_4948;
    __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
    VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 2254)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk846__DOT___local_report_object_);
    VL_NULL_CHECK(unnamedblk846__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 2254)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_1__get_report_verbosity_level);
    __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
    if (__VlefLogAnd_3) {
        VL_NULL_CHECK(unnamedblk846__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh", 2254)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_2__get_report_action);
        __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
    }
    if (VL_UNLIKELY((__VlefLogAnd_3))) {
        __Vtask_uvm_report_warning__report_enabled_checked_4955 = 1U;
        this->__Vtask_uvm_report_warning__context_name_4954 = ""s;
        __Vtask_uvm_report_warning__line_4953 = 0x000008ceU;
        this->__Vtask_uvm_report_warning__filename_4952 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem.svh"s;
        __Vtask_uvm_report_warning__verbosity_4951 = 0U;
        this->__Vtask_uvm_report_warning__message_4950 = "RegModel memories cannot be unpacked"s;
        this->__Vtask_uvm_report_warning__id_4949 = "RegModel"s;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1884);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1884;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4956);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__Vfuncout_4956;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_4949, this->__Vtask_uvm_report_warning__message_4950, __Vtask_uvm_report_warning__verbosity_4951, this->__Vtask_uvm_report_warning__filename_4952, __Vtask_uvm_report_warning__line_4953, this->__Vtask_uvm_report_warning__context_name_4954, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_4955));
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_mem::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_locked = 0;
    __PVT__m_read_in_progress = 0;
    __PVT__m_write_in_progress = 0;
    __PVT__m_size = 0;
    __PVT__m_maps.atDefault() = 0;
    __PVT__m_n_bits = 0;
    __PVT__m_is_powered_down = 0;
    __PVT__m_has_cover = 0;
    __PVT__m_cover_on = 0;
    __PVT__m_lineno = 0;
    __PVT__m_vregs.atDefault() = 0;
}

Vtb_top_uvm_pkg__03a__03auvm_mem::~Vtb_top_uvm_pkg__03a__03auvm_mem() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_mem::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_mem::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_locked:" + VL_TO_STRING(__PVT__m_locked);
    out += ", m_read_in_progress:" + VL_TO_STRING(__PVT__m_read_in_progress);
    out += ", m_write_in_progress:" + VL_TO_STRING(__PVT__m_write_in_progress);
    out += ", m_access:" + VL_TO_STRING(__PVT__m_access);
    out += ", m_size:" + VL_TO_STRING(__PVT__m_size);
    out += ", m_parent:" + VL_TO_STRING(__PVT__m_parent);
    out += ", m_maps:" + VL_TO_STRING(__PVT__m_maps);
    out += ", m_n_bits:" + VL_TO_STRING(__PVT__m_n_bits);
    out += ", m_backdoor:" + VL_TO_STRING(__PVT__m_backdoor);
    out += ", m_is_powered_down:" + VL_TO_STRING(__PVT__m_is_powered_down);
    out += ", m_has_cover:" + VL_TO_STRING(__PVT__m_has_cover);
    out += ", m_cover_on:" + VL_TO_STRING(__PVT__m_cover_on);
    out += ", m_fname:" + VL_TO_STRING(__PVT__m_fname);
    out += ", m_lineno:" + VL_TO_STRING(__PVT__m_lineno);
    out += ", m_vregs:" + VL_TO_STRING(__PVT__m_vregs);
    out += ", m_hdl_paths_pool:" + VL_TO_STRING(__PVT__m_hdl_paths_pool);
    out += ", mam:" + VL_TO_STRING(__PVT__mam);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
