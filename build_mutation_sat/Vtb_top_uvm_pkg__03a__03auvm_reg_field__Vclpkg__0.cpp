// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_reg_field__Vclpkg::__VnoInFunc_define_access(Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::CData/*0:0*/ &define_access__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_reg_field__Vclpkg::__VnoInFunc_define_access\n"); );
    // Locals
    ::CData/*0:0*/ __Vfunc_m_predefine_policies__Vfuncout_1581;
    __Vfunc_m_predefine_policies__Vfuncout_1581 = 0;
    // Body
    {
        define_access__Vfuncrtn = 0U;
        if ((1U & (~ (::IData)(this->__PVT__m_predefined)))) {
            this->__VnoInFunc_m_predefine_policies(vlSymsp, __Vfunc_m_predefine_policies__Vfuncout_1581);
            this->__PVT__m_predefined = __Vfunc_m_predefine_policies__Vfuncout_1581;
        }
        name = VL_TOUPPER_NN(name);
        if ((0U != this->__Vnontrivs.__PVT__m_policy_names.exists(name))) {
            define_access__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        this->__Vnontrivs.__PVT__m_policy_names.atWrite(name) = 1U;
        define_access__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_field__Vclpkg::__VnoInFunc_m_predefine_policies(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &m_predefine_policies__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_reg_field__Vclpkg::__VnoInFunc_m_predefine_policies\n"); );
    // Locals
    ::CData/*0:0*/ __Vtask_define_access__Vfuncout_3846;
    __Vtask_define_access__Vfuncout_3846 = 0;
    ::CData/*0:0*/ __Vtask_define_access__Vfuncout_3847;
    __Vtask_define_access__Vfuncout_3847 = 0;
    ::CData/*0:0*/ __Vtask_define_access__Vfuncout_3848;
    __Vtask_define_access__Vfuncout_3848 = 0;
    ::CData/*0:0*/ __Vtask_define_access__Vfuncout_3849;
    __Vtask_define_access__Vfuncout_3849 = 0;
    ::CData/*0:0*/ __Vtask_define_access__Vfuncout_3850;
    __Vtask_define_access__Vfuncout_3850 = 0;
    ::CData/*0:0*/ __Vtask_define_access__Vfuncout_3851;
    __Vtask_define_access__Vfuncout_3851 = 0;
    ::CData/*0:0*/ __Vtask_define_access__Vfuncout_3852;
    __Vtask_define_access__Vfuncout_3852 = 0;
    ::CData/*0:0*/ __Vtask_define_access__Vfuncout_3853;
    __Vtask_define_access__Vfuncout_3853 = 0;
    ::CData/*0:0*/ __Vtask_define_access__Vfuncout_3854;
    __Vtask_define_access__Vfuncout_3854 = 0;
    ::CData/*0:0*/ __Vtask_define_access__Vfuncout_3855;
    __Vtask_define_access__Vfuncout_3855 = 0;
    ::CData/*0:0*/ __Vtask_define_access__Vfuncout_3856;
    __Vtask_define_access__Vfuncout_3856 = 0;
    ::CData/*0:0*/ __Vtask_define_access__Vfuncout_3857;
    __Vtask_define_access__Vfuncout_3857 = 0;
    ::CData/*0:0*/ __Vtask_define_access__Vfuncout_3858;
    __Vtask_define_access__Vfuncout_3858 = 0;
    ::CData/*0:0*/ __Vtask_define_access__Vfuncout_3859;
    __Vtask_define_access__Vfuncout_3859 = 0;
    ::CData/*0:0*/ __Vtask_define_access__Vfuncout_3860;
    __Vtask_define_access__Vfuncout_3860 = 0;
    ::CData/*0:0*/ __Vtask_define_access__Vfuncout_3861;
    __Vtask_define_access__Vfuncout_3861 = 0;
    ::CData/*0:0*/ __Vtask_define_access__Vfuncout_3862;
    __Vtask_define_access__Vfuncout_3862 = 0;
    ::CData/*0:0*/ __Vtask_define_access__Vfuncout_3863;
    __Vtask_define_access__Vfuncout_3863 = 0;
    ::CData/*0:0*/ __Vtask_define_access__Vfuncout_3864;
    __Vtask_define_access__Vfuncout_3864 = 0;
    ::CData/*0:0*/ __Vtask_define_access__Vfuncout_3865;
    __Vtask_define_access__Vfuncout_3865 = 0;
    ::CData/*0:0*/ __Vtask_define_access__Vfuncout_3866;
    __Vtask_define_access__Vfuncout_3866 = 0;
    ::CData/*0:0*/ __Vtask_define_access__Vfuncout_3867;
    __Vtask_define_access__Vfuncout_3867 = 0;
    ::CData/*0:0*/ __Vtask_define_access__Vfuncout_3868;
    __Vtask_define_access__Vfuncout_3868 = 0;
    ::CData/*0:0*/ __Vtask_define_access__Vfuncout_3869;
    __Vtask_define_access__Vfuncout_3869 = 0;
    ::CData/*0:0*/ __Vtask_define_access__Vfuncout_3870;
    __Vtask_define_access__Vfuncout_3870 = 0;
    // Body
    {
        m_predefine_policies__Vfuncrtn = 0U;
        if (this->__PVT__m_predefined) {
            m_predefine_policies__Vfuncrtn = 1U;
            goto __Vlabel0;
        }
        this->__PVT__m_predefined = 1U;
        this->__VnoInFunc_define_access(vlSymsp, "RO"s, __Vtask_define_access__Vfuncout_3846);
        this->__VnoInFunc_define_access(vlSymsp, "RW"s, __Vtask_define_access__Vfuncout_3847);
        this->__VnoInFunc_define_access(vlSymsp, "RC"s, __Vtask_define_access__Vfuncout_3848);
        this->__VnoInFunc_define_access(vlSymsp, "RS"s, __Vtask_define_access__Vfuncout_3849);
        this->__VnoInFunc_define_access(vlSymsp, "WRC"s, __Vtask_define_access__Vfuncout_3850);
        this->__VnoInFunc_define_access(vlSymsp, "WRS"s, __Vtask_define_access__Vfuncout_3851);
        this->__VnoInFunc_define_access(vlSymsp, "WC"s, __Vtask_define_access__Vfuncout_3852);
        this->__VnoInFunc_define_access(vlSymsp, "WS"s, __Vtask_define_access__Vfuncout_3853);
        this->__VnoInFunc_define_access(vlSymsp, "WSRC"s, __Vtask_define_access__Vfuncout_3854);
        this->__VnoInFunc_define_access(vlSymsp, "WCRS"s, __Vtask_define_access__Vfuncout_3855);
        this->__VnoInFunc_define_access(vlSymsp, "W1C"s, __Vtask_define_access__Vfuncout_3856);
        this->__VnoInFunc_define_access(vlSymsp, "W1S"s, __Vtask_define_access__Vfuncout_3857);
        this->__VnoInFunc_define_access(vlSymsp, "W1T"s, __Vtask_define_access__Vfuncout_3858);
        this->__VnoInFunc_define_access(vlSymsp, "W0C"s, __Vtask_define_access__Vfuncout_3859);
        this->__VnoInFunc_define_access(vlSymsp, "W0S"s, __Vtask_define_access__Vfuncout_3860);
        this->__VnoInFunc_define_access(vlSymsp, "W0T"s, __Vtask_define_access__Vfuncout_3861);
        this->__VnoInFunc_define_access(vlSymsp, "W1SRC"s, __Vtask_define_access__Vfuncout_3862);
        this->__VnoInFunc_define_access(vlSymsp, "W1CRS"s, __Vtask_define_access__Vfuncout_3863);
        this->__VnoInFunc_define_access(vlSymsp, "W0SRC"s, __Vtask_define_access__Vfuncout_3864);
        this->__VnoInFunc_define_access(vlSymsp, "W0CRS"s, __Vtask_define_access__Vfuncout_3865);
        this->__VnoInFunc_define_access(vlSymsp, "WO"s, __Vtask_define_access__Vfuncout_3866);
        this->__VnoInFunc_define_access(vlSymsp, "WOC"s, __Vtask_define_access__Vfuncout_3867);
        this->__VnoInFunc_define_access(vlSymsp, "WOS"s, __Vtask_define_access__Vfuncout_3868);
        this->__VnoInFunc_define_access(vlSymsp, "W1"s, __Vtask_define_access__Vfuncout_3869);
        this->__VnoInFunc_define_access(vlSymsp, "WO1"s, __Vtask_define_access__Vfuncout_3870);
        m_predefine_policies__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi24f2ccc5> __Vfunc_get__Vfuncout_1526;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pi24f2ccc5__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1526);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_1526;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_field> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_reg_field, vlProcess, vlSymsp, "uvm_reg_field"s);
    } else {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_reg_field, vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_field"s;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_pre_write(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_pre_write\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_post_write(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_post_write\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_pre_read(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_pre_read\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_post_read(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_post_read\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_field::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_field::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    ::IData/*31:0*/ __VrandBlock__0__DOT__i;
    __VrandBlock__0__DOT__i = 0;
    /*super.new*/;
    ::IData/*31:0*/ __VoldSize__0;
    __VoldSize__0 = 0;
    __VoldSize__0 = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT____Vrandmode.size();
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT____Vrandmode.resize(1U);
    __VrandBlock__0__DOT__i = __VoldSize__0;
    while ((__VrandBlock__0__DOT__i < Vtb_top_uvm_pkg__03a__03auvm_void::__PVT____Vrandmode.size())) {
        Vtb_top_uvm_pkg__03a__03auvm_void::__PVT____Vrandmode.atWrite(__VrandBlock__0__DOT__i) = 1U;
        __VrandBlock__0__DOT__i = ((::IData)(1U) + __VrandBlock__0__DOT__i);
    }
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.write_var(this->__PVT__value, 0x0000000000000040ULL, 
                                                                   "value", 0ULL, 0ULL);
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_configure(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg> parent, ::IData/*31:0*/ size, ::IData/*31:0*/ lsb_pos, ::std::string access, ::CData/*0:0*/ __SYM__volatile, ::QData/*63:0*/ reset, ::CData/*0:0*/ has_reset, ::CData/*0:0*/ is_rand, ::CData/*0:0*/ individually_accessible) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_configure\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1527;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3613;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_3616;
    __Vtask_uvm_report_error__verbosity_3616 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_3618;
    __Vtask_uvm_report_error__line_3618 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3620;
    __Vtask_uvm_report_error__report_enabled_checked_3620 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1528;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3621;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1529;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3622;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_3625;
    __Vtask_uvm_report_error__verbosity_3625 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_3627;
    __Vtask_uvm_report_error__line_3627 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3629;
    __Vtask_uvm_report_error__report_enabled_checked_3629 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1530;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3630;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_9__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_8;
    ::IData/*31:0*/ __VlefCall_7__get_report_action;
    ::IData/*31:0*/ __VlefCall_6__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_5__uvm_get_report_object;
    ::std::string __VlefCall_4__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk427__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk428__DOT___local_report_object_;
    this->__PVT__m_parent = parent;
    if ((0U == size)) {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1527);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1527;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3613);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
            = __Vtask_get_root__Vfuncout_3613;
        __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
        VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 456)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk427__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk427__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 456)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_1__get_report_verbosity_level);
        __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
        if (__VlefLogAnd_3) {
            VL_NULL_CHECK(unnamedblk427__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 456)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_2__get_report_action);
            __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_3))) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
            __Vtask_uvm_report_error__report_enabled_checked_3620 = 1U;
            this->__Vtask_uvm_report_error__context_name_3619 = ""s;
            __Vtask_uvm_report_error__line_3618 = 0x000001c8U;
            this->__Vtask_uvm_report_error__filename_3617 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh"s;
            __Vtask_uvm_report_error__verbosity_3616 = 0U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_error__message_3615
                          ,"Field \"%s\" cannot have 0 bits",1
                          , 'S',&(__VlefCall_4__get_full_name));
            this->__Vtask_uvm_report_error__id_3614 = "RegModel"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1528);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1528;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3621);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__Vfuncout_3621;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_3614, this->__Vtask_uvm_report_error__message_3615, __Vtask_uvm_report_error__verbosity_3616, this->__Vtask_uvm_report_error__filename_3617, __Vtask_uvm_report_error__line_3618, this->__Vtask_uvm_report_error__context_name_3619, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3620));
        }
        size = 1U;
    }
    this->__PVT__m_size = size;
    this->__PVT__m_volatile = __SYM__volatile;
    this->__PVT__m_access = VL_TOUPPER_NN(access);
    this->__PVT__m_lsb = lsb_pos;
    this->__PVT__m_cover_on = 0U;
    this->__PVT__m_written = 0U;
    this->__PVT__m_check = ((::IData)(__SYM__volatile)
                             ? 0U : 1U);
    this->__PVT__m_individually_accessible = individually_accessible;
    if (has_reset) {
        this->__VnoInFunc_set_reset(vlSymsp, reset, "HARD"s);
    }
    VL_NULL_CHECK(this->__PVT__m_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 475)->__VnoInFunc_add_field(vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_field>{this});
    if ((1U & (~ (0U != vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_reg_field__Vclpkg.__Vnontrivs.__PVT__m_policy_names.exists(this->__PVT__m_access))))) {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1529);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1529;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3622);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
            = __Vtask_get_root__Vfuncout_3622;
        __VlefCall_5__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
        VL_NULL_CHECK(__VlefCall_5__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 479)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk428__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk428__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 479)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_6__get_report_verbosity_level);
        __VlefLogAnd_8 = VL_LTES_III(32, 0U, __VlefCall_6__get_report_verbosity_level);
        if (__VlefLogAnd_8) {
            VL_NULL_CHECK(unnamedblk428__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 479)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_7__get_report_action);
            __VlefLogAnd_8 = (0U != __VlefCall_7__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_8))) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_9__get_full_name);
            __Vtask_uvm_report_error__report_enabled_checked_3629 = 1U;
            this->__Vtask_uvm_report_error__context_name_3628 = ""s;
            __Vtask_uvm_report_error__line_3627 = 0x000001dfU;
            this->__Vtask_uvm_report_error__filename_3626 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh"s;
            __Vtask_uvm_report_error__verbosity_3625 = 0U;
            this->__Vtask_uvm_report_error__message_3624 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Access policy '"s, access), "' for field '"s), __VlefCall_9__get_full_name), "' is not defined. Setting to RW"s));
            this->__Vtask_uvm_report_error__id_3623 = "RegModel"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1530);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1530;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3630);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__Vfuncout_3630;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_3623, this->__Vtask_uvm_report_error__message_3624, __Vtask_uvm_report_error__verbosity_3625, this->__Vtask_uvm_report_error__filename_3626, __Vtask_uvm_report_error__line_3627, this->__Vtask_uvm_report_error__context_name_3628, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3629));
        }
        this->__PVT__m_access = "RW"s;
    }
    if ((size > vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_reg_field__Vclpkg.__PVT__m_max_size)) {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_reg_field__Vclpkg.__PVT__m_max_size 
            = size;
    }
    if (((((((((((((((((((("RO"s == access) || ("RC"s 
                                                == access)) 
                         || ("RS"s == access)) || ("WC"s 
                                                   == access)) 
                       || ("WS"s == access)) || ("W1C"s 
                                                 == access)) 
                     || ("W1S"s == access)) || ("W1T"s 
                                                == access)) 
                   || ("W0C"s == access)) || ("W0S"s 
                                              == access)) 
                 || ("W0T"s == access)) || ("W1SRC"s 
                                            == access)) 
               || ("W1CRS"s == access)) || ("W0SRC"s 
                                            == access)) 
             || ("W0CRS"s == access)) || ("WSRC"s == access)) 
           || ("WCRS"s == access)) || ("WOC"s == access)) 
         || ("WOS"s == access))) {
        is_rand = 0U;
    }
    if ((1U & (~ (::IData)(is_rand)))) {
        this->__VnoInFunc_set_rand_mode(vlSymsp, 0U);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_parent(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg> &get_parent__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_parent\n"); );
    // Body
    get_parent__Vfuncrtn = this->__PVT__m_parent;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_full_name(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_full_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_full_name\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_1__get_name;
    ::std::string __VlefCall_0__get_full_name;
    get_full_name__Vfuncrtn = ""s;
    VL_NULL_CHECK(this->__PVT__m_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 520)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
    get_full_name__Vfuncrtn = VL_CONCATN_NNN(VL_CONCATN_NNN(__VlefCall_0__get_full_name, "."s), __VlefCall_1__get_name);
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_register(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg> &get_register__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_register\n"); );
    // Body
    get_register__Vfuncrtn = this->__PVT__m_parent;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_lsb_pos(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_lsb_pos__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_lsb_pos\n"); );
    // Body
    get_lsb_pos__Vfuncrtn = this->__PVT__m_lsb;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_n_bits(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_n_bits__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_n_bits\n"); );
    // Body
    get_n_bits__Vfuncrtn = this->__PVT__m_size;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_is_known_access(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::CData/*0:0*/ &is_known_access__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_is_known_access\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string acc;
    {
        is_known_access__Vfuncrtn = 0U;
        this->__VnoInFunc_get_access(vlProcess, vlSymsp, map, acc);
        if (((((((((((((((((((((((((("RO"s == acc) 
                                    || ("RW"s == acc)) 
                                   || ("RC"s == acc)) 
                                  || ("RS"s == acc)) 
                                 || ("WC"s == acc)) 
                                || ("WS"s == acc)) 
                               || ("W1C"s == acc)) 
                              || ("W1S"s == acc)) || 
                             ("W1T"s == acc)) || ("W0C"s 
                                                  == acc)) 
                           || ("W0S"s == acc)) || ("W0T"s 
                                                   == acc)) 
                         || ("WRC"s == acc)) || ("WRS"s 
                                                 == acc)) 
                       || ("W1SRC"s == acc)) || ("W1CRS"s 
                                                 == acc)) 
                     || ("W0SRC"s == acc)) || ("W0CRS"s 
                                               == acc)) 
                   || ("WSRC"s == acc)) || ("WCRS"s 
                                            == acc)) 
                 || ("WO"s == acc)) || ("WOC"s == acc)) 
               || ("WOS"s == acc)) || ("W1"s == acc)) 
             || ("WO1"s == acc))) {
            is_known_access__Vfuncrtn = 1U;
            goto __Vlabel0;
        }
        is_known_access__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_access(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::std::string &get_access__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_access\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1531;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3631;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_3634;
    __Vtask_uvm_report_warning__verbosity_3634 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_3636;
    __Vtask_uvm_report_warning__line_3636 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_3638;
    __Vtask_uvm_report_warning__report_enabled_checked_3638 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1532;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3639;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_8__get_rights;
    ::std::string __VlefCall_7__get_full_name;
    ::std::string __VlefCall_6__get_name;
    ::std::string __VlefCall_5__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_4;
    ::IData/*31:0*/ __VlefCall_3__get_report_action;
    ::IData/*31:0*/ __VlefCall_2__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_1__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> __VlefCall_0__backdoor;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk429__DOT___local_report_object_;
    ::std::string __VCase_h7ad10c91__0;
    ::std::string field_access;
    {
        get_access__Vfuncrtn = ""s;
        field_access = this->__PVT__m_access;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_reg_map__Vclpkg.__VnoInFunc_backdoor(vlProcess, vlSymsp, __VlefCall_0__backdoor);
        if ((map == __VlefCall_0__backdoor)) {
            get_access__Vfuncrtn = field_access;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__m_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 581)->__VnoInFunc_get_rights(vlProcess, vlSymsp, map, __VCase_h7ad10c91__0);
        if (("RW"s == __VCase_h7ad10c91__0)) {
            get_access__Vfuncrtn = field_access;
            goto __Vlabel0;
        } else if (("RO"s == __VCase_h7ad10c91__0)) {
            if (((((((((((("RW"s == field_access) || 
                          ("RO"s == field_access)) 
                         || ("WC"s == field_access)) 
                        || ("WS"s == field_access)) 
                       || ("W1C"s == field_access)) 
                      || ("W1S"s == field_access)) 
                     || ("W1T"s == field_access)) || 
                    ("W0C"s == field_access)) || ("W0S"s 
                                                  == field_access)) 
                  || ("W0T"s == field_access)) || ("W1"s 
                                                   == field_access))) {
                field_access = "RO"s;
            } else if (((((("RC"s == field_access) 
                           || ("WRC"s == field_access)) 
                          || ("W1SRC"s == field_access)) 
                         || ("W0SRC"s == field_access)) 
                        || ("WSRC"s == field_access))) {
                field_access = "RC"s;
            } else if (((((("RS"s == field_access) 
                           || ("WRS"s == field_access)) 
                          || ("W1CRS"s == field_access)) 
                         || ("W0CRS"s == field_access)) 
                        || ("WCRS"s == field_access))) {
                field_access = "RS"s;
            } else if ((((("WO"s == field_access) || 
                          ("WOC"s == field_access)) 
                         || ("WOS"s == field_access)) 
                        || ("WO1"s == field_access))) {
                field_access = "NOACCESS"s;
            }
        } else if (("WO"s == __VCase_h7ad10c91__0)) {
            if ((((((((((("RW"s == field_access) || 
                         ("WRC"s == field_access)) 
                        || ("WRS"s == field_access)) 
                       | ("W1SRC"s == field_access)) 
                      | ("W0SRC"s == field_access)) 
                     | ("W1CRS"s == field_access)) 
                    | ("W0CRS"s == field_access)) | 
                   ("WCRS"s == field_access)) | ("W1"s 
                                                 == field_access)) 
                 | ("WO1"s == field_access))) {
                field_access = (((("RW"s == field_access) 
                                  || ("WRC"s == field_access)) 
                                 || ("WRS"s == field_access))
                                 ? "WO"s : (("W1SRC"s 
                                             == field_access)
                                             ? "W1S"s
                                             : (("W0SRC"s 
                                                 == field_access)
                                                 ? "W0S"s
                                                 : 
                                                (("W1CRS"s 
                                                  == field_access)
                                                  ? "W1C"s
                                                  : 
                                                 (("W0CRS"s 
                                                   == field_access)
                                                   ? "W0C"s
                                                   : 
                                                  (("WCRS"s 
                                                    == field_access)
                                                    ? "WC"s
                                                    : 
                                                   (("W1"s 
                                                     == field_access)
                                                     ? "W1"s
                                                     : "WO1"s)))))));
            } else if (("WSRC"s == field_access)) {
                field_access = "WS"s;
            } else if (((("RO"s == field_access) || 
                         ("RC"s == field_access)) || 
                        ("RS"s == field_access))) {
                field_access = "NOACCESS"s;
            }
        } else {
            field_access = "NOACCESS"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1531);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1531;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3631);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_3631;
            __VlefCall_1__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_1__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 676)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk429__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk429__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 676)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_2__get_report_verbosity_level);
            __VlefLogAnd_4 = VL_LTES_III(32, 0U, __VlefCall_2__get_report_verbosity_level);
            if (__VlefLogAnd_4) {
                VL_NULL_CHECK(unnamedblk429__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 676)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_3__get_report_action);
                __VlefLogAnd_4 = (0U != __VlefCall_3__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_4))) {
                VL_NULL_CHECK(this->__PVT__m_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 676)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_6__get_name);
                VL_NULL_CHECK(map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 676)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_7__get_full_name);
                VL_NULL_CHECK(this->__PVT__m_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 676)->__VnoInFunc_get_rights(vlProcess, vlSymsp, map, __VlefCall_8__get_rights);
                __Vtask_uvm_report_warning__report_enabled_checked_3638 = 1U;
                this->__Vtask_uvm_report_warning__context_name_3637 = ""s;
                __Vtask_uvm_report_warning__line_3636 = 0x000002a4U;
                this->__Vtask_uvm_report_warning__filename_3635 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh"s;
                __Vtask_uvm_report_warning__verbosity_3634 = 0U;
                this->__Vtask_uvm_report_warning__message_3633 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Register '"s, __VlefCall_5__get_full_name), "' containing field '"s), __VlefCall_6__get_name), "' is mapped in map '"s), __VlefCall_7__get_full_name), "' with unknown access right '"s), __VlefCall_8__get_rights), "'"s));
                this->__Vtask_uvm_report_warning__id_3632 = "RegModel"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1532);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1532;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3639);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_3639;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_3632, this->__Vtask_uvm_report_warning__message_3633, __Vtask_uvm_report_warning__verbosity_3634, this->__Vtask_uvm_report_warning__filename_3635, __Vtask_uvm_report_warning__line_3636, this->__Vtask_uvm_report_warning__context_name_3637, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_3638));
            }
        }
        get_access__Vfuncrtn = field_access;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_set_rand_mode(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ rand_mode) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_set_rand_mode\n"); );
    // Body
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT____Vrandmode.atWrite(0U) 
        = rand_mode;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_is_volatile(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &is_volatile__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_is_volatile\n"); );
    // Body
    is_volatile__Vfuncrtn = this->__PVT__m_volatile;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_XpredictX(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ cur_val, ::QData/*63:0*/ wr_val, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::QData/*63:0*/ &XpredictX__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_XpredictX\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VCase_hde746fb1__0;
    ::QData/*63:0*/ mask;
    XpredictX__Vfuncrtn = 0ULL;
    mask = (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
            - 1ULL);
    this->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __VCase_hde746fb1__0);
    XpredictX__Vfuncrtn = ((((((((("RO"s == __VCase_hde746fb1__0) 
                                  | ("RW"s == __VCase_hde746fb1__0)) 
                                 | ("RC"s == __VCase_hde746fb1__0)) 
                                | ("RS"s == __VCase_hde746fb1__0)) 
                               | ("WC"s == __VCase_hde746fb1__0)) 
                              | ("WS"s == __VCase_hde746fb1__0)) 
                             | ("WRC"s == __VCase_hde746fb1__0)) 
                            | ("WRS"s == __VCase_hde746fb1__0))
                            ? (("RO"s == __VCase_hde746fb1__0)
                                ? cur_val : (("RW"s 
                                              == __VCase_hde746fb1__0)
                                              ? wr_val
                                              : (("RC"s 
                                                  == __VCase_hde746fb1__0)
                                                  ? cur_val
                                                  : 
                                                 (("RS"s 
                                                   == __VCase_hde746fb1__0)
                                                   ? cur_val
                                                   : 
                                                  (("WC"s 
                                                    == __VCase_hde746fb1__0)
                                                    ? 0ULL
                                                    : 
                                                   (("WS"s 
                                                     == __VCase_hde746fb1__0)
                                                     ? mask
                                                     : wr_val))))))
                            : ((((((((("WSRC"s == __VCase_hde746fb1__0) 
                                      | ("WCRS"s == __VCase_hde746fb1__0)) 
                                     | ("W1C"s == __VCase_hde746fb1__0)) 
                                    | ("W1S"s == __VCase_hde746fb1__0)) 
                                   | ("W1T"s == __VCase_hde746fb1__0)) 
                                  | ("W0C"s == __VCase_hde746fb1__0)) 
                                 | ("W0S"s == __VCase_hde746fb1__0)) 
                                | ("W0T"s == __VCase_hde746fb1__0))
                                ? (("WSRC"s == __VCase_hde746fb1__0)
                                    ? mask : (("WCRS"s 
                                               == __VCase_hde746fb1__0)
                                               ? 0ULL
                                               : (("W1C"s 
                                                   == __VCase_hde746fb1__0)
                                                   ? 
                                                  (cur_val 
                                                   & (~ wr_val))
                                                   : 
                                                  (("W1S"s 
                                                    == __VCase_hde746fb1__0)
                                                    ? 
                                                   (cur_val 
                                                    | wr_val)
                                                    : 
                                                   (("W1T"s 
                                                     == __VCase_hde746fb1__0)
                                                     ? 
                                                    (cur_val 
                                                     ^ wr_val)
                                                     : 
                                                    (("W0C"s 
                                                      == __VCase_hde746fb1__0)
                                                      ? 
                                                     (cur_val 
                                                      & wr_val)
                                                      : 
                                                     (("W0S"s 
                                                       == __VCase_hde746fb1__0)
                                                       ? 
                                                      (cur_val 
                                                       | ((~ wr_val) 
                                                          & mask))
                                                       : 
                                                      (cur_val 
                                                       ^ 
                                                       ((~ wr_val) 
                                                        & mask)))))))))
                                : ((((((((("W1SRC"s 
                                           == __VCase_hde746fb1__0) 
                                          | ("W1CRS"s 
                                             == __VCase_hde746fb1__0)) 
                                         | ("W0SRC"s 
                                            == __VCase_hde746fb1__0)) 
                                        | ("W0CRS"s 
                                           == __VCase_hde746fb1__0)) 
                                       | ("WO"s == __VCase_hde746fb1__0)) 
                                      | ("WOC"s == __VCase_hde746fb1__0)) 
                                     | ("WOS"s == __VCase_hde746fb1__0)) 
                                    | ("W1"s == __VCase_hde746fb1__0))
                                    ? (("W1SRC"s == __VCase_hde746fb1__0)
                                        ? (cur_val 
                                           | wr_val)
                                        : (("W1CRS"s 
                                            == __VCase_hde746fb1__0)
                                            ? (cur_val 
                                               & (~ wr_val))
                                            : (("W0SRC"s 
                                                == __VCase_hde746fb1__0)
                                                ? (cur_val 
                                                   | ((~ wr_val) 
                                                      & mask))
                                                : (
                                                   ("W0CRS"s 
                                                    == __VCase_hde746fb1__0)
                                                    ? 
                                                   (cur_val 
                                                    & wr_val)
                                                    : 
                                                   (("WO"s 
                                                     == __VCase_hde746fb1__0)
                                                     ? wr_val
                                                     : 
                                                    (("WOC"s 
                                                      == __VCase_hde746fb1__0)
                                                      ? 0ULL
                                                      : 
                                                     (("WOS"s 
                                                       == __VCase_hde746fb1__0)
                                                       ? mask
                                                       : 
                                                      ((::IData)(this->__PVT__m_written)
                                                        ? cur_val
                                                        : wr_val))))))))
                                    : (("WO1"s == __VCase_hde746fb1__0)
                                        ? ((::IData)(this->__PVT__m_written)
                                            ? cur_val
                                            : wr_val)
                                        : (("NOACCESS"s 
                                            == __VCase_hde746fb1__0)
                                            ? cur_val
                                            : wr_val)))));
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_predict(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw, ::IData/*31:0*/ kind, ::CData/*7:0*/ be) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_predict\n"); );
    // Locals
    ::QData/*63:0*/ __Vtask_post_predict__value_3641;
    __Vtask_post_predict__value_3641 = 0;
    ::QData/*63:0*/ __Vtask_post_predict__value_3642;
    __Vtask_post_predict__value_3642 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1534;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3643;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_3646;
    __Vtask_uvm_report_warning__verbosity_3646 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_3648;
    __Vtask_uvm_report_warning__line_3648 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_3650;
    __Vtask_uvm_report_warning__report_enabled_checked_3650 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1535;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3651;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_20__get_full_name;
    ::std::string __VlefCall_19__get_name;
    ::CData/*0:0*/ __VlefLogAnd_18;
    ::IData/*31:0*/ __VlefCall_17__get_report_action;
    ::IData/*31:0*/ __VlefCall_16__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_15__uvm_get_report_object;
    ::CData/*0:0*/ __VlefCall_14__is_busy;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> __VlefCall_13__get_map;
    ::IData/*31:0*/ __VlefCall_12__get_door;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> __VlefCall_11__get_map;
    ::CData/*0:0*/ __VlefLogOr_10;
    ::IData/*31:0*/ __VlefCall_9__get_door;
    ::IData/*31:0*/ __VlefCall_8__get_door;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> __VlefCall_7__get_map;
    ::IData/*31:0*/ __VlefCall_6__get_door;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> __VlefCall_5__get_map;
    ::CData/*0:0*/ __VlefLogOr_4;
    ::IData/*31:0*/ __VlefCall_3__get_door;
    ::IData/*31:0*/ __VlefCall_2__get_door;
    ::IData/*31:0*/ __VlefCall_1__get_status;
    ::QData/*63:0*/ __VlefCall_0__get_value;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pif43a684e> unnamedblk432__DOT__cbs;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk432__DOT__unnamedblk433__DOT__cb;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pif43a684e> unnamedblk434__DOT__cbs;
    ::std::string unnamedblk434__DOT__unnamedblk435__DOT__acc;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk434__DOT__unnamedblk436__DOT__cb;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk437__DOT___local_report_object_;
    ::QData/*63:0*/ field_val;
    {
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 933)->__VnoInFunc_get_value(vlSymsp, 0U, __VlefCall_0__get_value);
        field_val = (__VlefCall_0__get_value & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
                                                - 1ULL));
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 935)->__VnoInFunc_get_status(vlSymsp, __VlefCall_1__get_status);
        if ((1U != __VlefCall_1__get_status)) {
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 937)->__VnoInFunc_set_status(vlSymsp, 0U);
        }
        if ((1U & (~ (::IData)(be)))) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 948)->__VnoInFunc_get_fname(vlSymsp, this->__PVT__m_fname);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 949)->__VnoInFunc_get_line(vlSymsp, this->__PVT__m_lineno);
        if ((2U == kind)) {
            unnamedblk432__DOT__cbs = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pif43a684e, vlProcess, vlSymsp, 
                                             ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_field>{this});
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 957)->__VnoInFunc_get_door(vlSymsp, __VlefCall_2__get_door);
            __VlefLogOr_4 = (0U == __VlefCall_2__get_door);
            if ((1U & (~ (::IData)(__VlefLogOr_4)))) {
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 957)->__VnoInFunc_get_door(vlSymsp, __VlefCall_3__get_door);
                __VlefLogOr_4 = (2U == __VlefCall_3__get_door);
            }
            if (__VlefLogOr_4) {
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 959)->__VnoInFunc_get_map(vlSymsp, __VlefCall_5__get_map);
                this->__VnoInFunc_XpredictX(vlProcess, vlSymsp, this->__PVT__m_mirrored, field_val, __VlefCall_5__get_map, field_val);
            }
            this->__PVT__m_written = 1U;
            VL_NULL_CHECK(unnamedblk432__DOT__cbs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 965)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk432__DOT__unnamedblk433__DOT__cb);
            while ((VlNull{} != unnamedblk432__DOT__unnamedblk433__DOT__cb)) {
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 968)->__VnoInFunc_get_door(vlSymsp, __VlefCall_6__get_door);
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 968)->__VnoInFunc_get_map(vlSymsp, __VlefCall_7__get_map);
                __Vtask_post_predict__value_3641 = field_val;
                VL_NULL_CHECK(unnamedblk432__DOT__unnamedblk433__DOT__cb, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 967)->__VnoInFunc_post_predict(vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_field>{this}, this->__PVT__m_mirrored, __Vtask_post_predict__value_3641, 2U, __VlefCall_6__get_door, __VlefCall_7__get_map);
                field_val = __Vtask_post_predict__value_3641;
                VL_NULL_CHECK(unnamedblk432__DOT__cbs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 965)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk432__DOT__unnamedblk433__DOT__cb);
            }
            field_val = (field_val & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
                                      - 1ULL));
        } else if ((1U == kind)) {
            unnamedblk434__DOT__cbs = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pif43a684e, vlProcess, vlSymsp, 
                                             ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_field>{this});
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 980)->__VnoInFunc_get_door(vlSymsp, __VlefCall_8__get_door);
            __VlefLogOr_10 = (0U == __VlefCall_8__get_door);
            if ((1U & (~ (::IData)(__VlefLogOr_10)))) {
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 980)->__VnoInFunc_get_door(vlSymsp, __VlefCall_9__get_door);
                __VlefLogOr_10 = (2U == __VlefCall_9__get_door);
            }
            if (__VlefLogOr_10) {
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 982)->__VnoInFunc_get_map(vlSymsp, __VlefCall_11__get_map);
                this->__VnoInFunc_get_access(vlProcess, vlSymsp, __VlefCall_11__get_map, unnamedblk434__DOT__unnamedblk435__DOT__acc);
                if (((((("RC"s == unnamedblk434__DOT__unnamedblk435__DOT__acc) 
                        | ("WRC"s == unnamedblk434__DOT__unnamedblk435__DOT__acc)) 
                       | ("WSRC"s == unnamedblk434__DOT__unnamedblk435__DOT__acc)) 
                      | ("W1SRC"s == unnamedblk434__DOT__unnamedblk435__DOT__acc)) 
                     | ("W0SRC"s == unnamedblk434__DOT__unnamedblk435__DOT__acc))) {
                    field_val = 0ULL;
                } else if (((((("RS"s == unnamedblk434__DOT__unnamedblk435__DOT__acc) 
                               | ("WRS"s == unnamedblk434__DOT__unnamedblk435__DOT__acc)) 
                              | ("WCRS"s == unnamedblk434__DOT__unnamedblk435__DOT__acc)) 
                             | ("W1CRS"s == unnamedblk434__DOT__unnamedblk435__DOT__acc)) 
                            | ("W0CRS"s == unnamedblk434__DOT__unnamedblk435__DOT__acc))) {
                    field_val = (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
                                 - 1ULL);
                } else if (((((("WO"s == unnamedblk434__DOT__unnamedblk435__DOT__acc) 
                               | ("WOC"s == unnamedblk434__DOT__unnamedblk435__DOT__acc)) 
                              | ("WOS"s == unnamedblk434__DOT__unnamedblk435__DOT__acc)) 
                             | ("WO1"s == unnamedblk434__DOT__unnamedblk435__DOT__acc)) 
                            | ("NOACCESS"s == unnamedblk434__DOT__unnamedblk435__DOT__acc))) {
                    goto __Vlabel0;
                }
            }
            VL_NULL_CHECK(unnamedblk434__DOT__cbs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1015)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk434__DOT__unnamedblk436__DOT__cb);
            while ((VlNull{} != unnamedblk434__DOT__unnamedblk436__DOT__cb)) {
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1018)->__VnoInFunc_get_door(vlSymsp, __VlefCall_12__get_door);
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1018)->__VnoInFunc_get_map(vlSymsp, __VlefCall_13__get_map);
                __Vtask_post_predict__value_3642 = field_val;
                VL_NULL_CHECK(unnamedblk434__DOT__unnamedblk436__DOT__cb, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1017)->__VnoInFunc_post_predict(vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_field>{this}, this->__PVT__m_mirrored, __Vtask_post_predict__value_3642, 1U, __VlefCall_12__get_door, __VlefCall_13__get_map);
                field_val = __Vtask_post_predict__value_3642;
                VL_NULL_CHECK(unnamedblk434__DOT__cbs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1015)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk434__DOT__unnamedblk436__DOT__cb);
            }
            field_val = (field_val & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
                                      - 1ULL));
        } else if ((0U == kind)) {
            VL_NULL_CHECK(this->__PVT__m_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1028)->__VnoInFunc_is_busy(vlSymsp, __VlefCall_14__is_busy);
            if (__VlefCall_14__is_busy) {
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1534);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1534;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3643);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_3643;
                __VlefCall_15__uvm_get_report_object 
                    = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
                VL_NULL_CHECK(__VlefCall_15__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1031)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk437__DOT___local_report_object_);
                VL_NULL_CHECK(unnamedblk437__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1031)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_16__get_report_verbosity_level);
                __VlefLogAnd_18 = VL_LTES_III(32, 0U, __VlefCall_16__get_report_verbosity_level);
                if (__VlefLogAnd_18) {
                    VL_NULL_CHECK(unnamedblk437__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1031)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_17__get_report_action);
                    __VlefLogAnd_18 = (0U != __VlefCall_17__get_report_action);
                }
                if (VL_UNLIKELY((__VlefLogAnd_18))) {
                    this->__VnoInFunc_get_name(vlSymsp, __VlefCall_19__get_name);
                    VL_NULL_CHECK(this->__PVT__m_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1031)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_20__get_full_name);
                    __Vtask_uvm_report_warning__report_enabled_checked_3650 = 1U;
                    this->__Vtask_uvm_report_warning__context_name_3649 = ""s;
                    __Vtask_uvm_report_warning__line_3648 = 0x00000407U;
                    this->__Vtask_uvm_report_warning__filename_3647 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh"s;
                    __Vtask_uvm_report_warning__verbosity_3646 = 0U;
                    this->__Vtask_uvm_report_warning__message_3645 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN(
                                                                           VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Trying to predict value of field '"s, __VlefCall_19__get_name), "' while register '"s), __VlefCall_20__get_full_name), "' is being accessed"s));
                    this->__Vtask_uvm_report_warning__id_3644 = "RegModel"s;
                    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1535);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__Vfuncout_1535;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3651);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__Vfuncout_3651;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_3644, this->__Vtask_uvm_report_warning__message_3645, __Vtask_uvm_report_warning__verbosity_3646, this->__Vtask_uvm_report_warning__filename_3647, __Vtask_uvm_report_warning__line_3648, this->__Vtask_uvm_report_warning__context_name_3649, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_3650));
                }
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1032)->__VnoInFunc_set_status(vlSymsp, 1U);
            }
        }
        this->__PVT__m_mirrored = field_val;
        this->__PVT__m_desired = field_val;
        this->__PVT__value = field_val;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_XupdateX(Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ &XupdateX__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_XupdateX\n"); );
    // Body
    XupdateX__Vfuncrtn = ((((((((("RO"s == this->__PVT__m_access) 
                                 | ("RW"s == this->__PVT__m_access)) 
                                | ("RC"s == this->__PVT__m_access)) 
                               | ("RS"s == this->__PVT__m_access)) 
                              | ("WRC"s == this->__PVT__m_access)) 
                             | ("WRS"s == this->__PVT__m_access)) 
                            | ("WC"s == this->__PVT__m_access)) 
                           | ("WS"s == this->__PVT__m_access))
                           ? this->__PVT__m_desired
                           : ((((((((("WSRC"s == this->__PVT__m_access) 
                                     | ("WCRS"s == this->__PVT__m_access)) 
                                    | ("W1C"s == this->__PVT__m_access)) 
                                   | ("W1S"s == this->__PVT__m_access)) 
                                  | ("W1T"s == this->__PVT__m_access)) 
                                 | ("W0C"s == this->__PVT__m_access)) 
                                | ("W0S"s == this->__PVT__m_access)) 
                               | ("W0T"s == this->__PVT__m_access))
                               ? (("WSRC"s == this->__PVT__m_access)
                                   ? this->__PVT__m_desired
                                   : (("WCRS"s == this->__PVT__m_access)
                                       ? this->__PVT__m_desired
                                       : (("W1C"s == this->__PVT__m_access)
                                           ? (~ this->__PVT__m_desired)
                                           : (("W1S"s 
                                               == this->__PVT__m_access)
                                               ? this->__PVT__m_desired
                                               : (("W1T"s 
                                                   == this->__PVT__m_access)
                                                   ? 
                                                  (this->__PVT__m_desired 
                                                   ^ this->__PVT__m_mirrored)
                                                   : 
                                                  (("W0C"s 
                                                    == this->__PVT__m_access)
                                                    ? this->__PVT__m_desired
                                                    : 
                                                   (("W0S"s 
                                                     == this->__PVT__m_access)
                                                     ? 
                                                    (~ this->__PVT__m_desired)
                                                     : 
                                                    (~ 
                                                     (this->__PVT__m_desired 
                                                      ^ this->__PVT__m_mirrored)))))))))
                               : ((((((((("W1SRC"s 
                                          == this->__PVT__m_access) 
                                         | ("W1CRS"s 
                                            == this->__PVT__m_access)) 
                                        | ("W0SRC"s 
                                           == this->__PVT__m_access)) 
                                       | ("W0CRS"s 
                                          == this->__PVT__m_access)) 
                                      | ("WO"s == this->__PVT__m_access)) 
                                     | ("WOC"s == this->__PVT__m_access)) 
                                    | ("WOS"s == this->__PVT__m_access)) 
                                   | ("W1"s == this->__PVT__m_access))
                                   ? (("W1SRC"s == this->__PVT__m_access)
                                       ? this->__PVT__m_desired
                                       : (("W1CRS"s 
                                           == this->__PVT__m_access)
                                           ? (~ this->__PVT__m_desired)
                                           : (("W0SRC"s 
                                               == this->__PVT__m_access)
                                               ? (~ this->__PVT__m_desired)
                                               : this->__PVT__m_desired)))
                                   : this->__PVT__m_desired)));
    XupdateX__Vfuncrtn = (XupdateX__Vfuncrtn & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
                                                - 1ULL));
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_set(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ value, ::std::string fname, ::IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_set\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1536;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3652;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_3655;
    __Vtask_uvm_report_warning__verbosity_3655 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_3657;
    __Vtask_uvm_report_warning__line_3657 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_3659;
    __Vtask_uvm_report_warning__report_enabled_checked_3659 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1537;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3660;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1538;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3661;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_3664;
    __Vtask_uvm_report_warning__verbosity_3664 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_3666;
    __Vtask_uvm_report_warning__line_3666 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_3668;
    __Vtask_uvm_report_warning__report_enabled_checked_3668 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1539;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3669;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_11__get_full_name;
    ::std::string __VlefCall_10__get_name;
    ::CData/*0:0*/ __VlefLogAnd_9;
    ::IData/*31:0*/ __VlefCall_8__get_report_action;
    ::IData/*31:0*/ __VlefCall_7__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_6__uvm_get_report_object;
    ::CData/*0:0*/ __VlefCall_5__is_busy;
    ::std::string __VlefCall_4__get_name;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk438__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk439__DOT___local_report_object_;
    ::QData/*63:0*/ mask;
    mask = (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
            - 1ULL);
    this->__PVT__m_fname = fname;
    this->__PVT__m_lineno = lineno;
    if ((0U != VL_SHIFTR_QQI(64,64,32, value, this->__PVT__m_size))) {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1536);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1536;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3652);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
            = __Vtask_get_root__Vfuncout_3652;
        __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
        VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1175)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk438__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk438__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1175)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_1__get_report_verbosity_level);
        __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
        if (__VlefLogAnd_3) {
            VL_NULL_CHECK(unnamedblk438__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1175)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_2__get_report_action);
            __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_3))) {
            this->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
            __Vtask_uvm_report_warning__report_enabled_checked_3659 = 1U;
            this->__Vtask_uvm_report_warning__context_name_3658 = ""s;
            __Vtask_uvm_report_warning__line_3657 = 0x00000497U;
            this->__Vtask_uvm_report_warning__filename_3656 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh"s;
            __Vtask_uvm_report_warning__verbosity_3655 = 0U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_warning__message_3654
                          ,"Specified value (0x%h) greater than field \"%s\" size (%0d bits)",3
                          , '#',64,value, 'S',&(__VlefCall_4__get_name)
                          , '#',32,this->__PVT__m_size);
            this->__Vtask_uvm_report_warning__id_3653 = "RegModel"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1537);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1537;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3660);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__Vfuncout_3660;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_3653, this->__Vtask_uvm_report_warning__message_3654, __Vtask_uvm_report_warning__verbosity_3655, this->__Vtask_uvm_report_warning__filename_3656, __Vtask_uvm_report_warning__line_3657, this->__Vtask_uvm_report_warning__context_name_3658, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_3659));
        }
        value = (value & mask);
    }
    VL_NULL_CHECK(this->__PVT__m_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1179)->__VnoInFunc_is_busy(vlSymsp, __VlefCall_5__is_busy);
    if (__VlefCall_5__is_busy) {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1538);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1538;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3661);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
            = __Vtask_get_root__Vfuncout_3661;
        __VlefCall_6__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
        VL_NULL_CHECK(__VlefCall_6__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1182)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk439__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk439__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1182)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "UVM/FLD/SET/BSY"s, __VlefCall_7__get_report_verbosity_level);
        __VlefLogAnd_9 = VL_LTES_III(32, 0U, __VlefCall_7__get_report_verbosity_level);
        if (__VlefLogAnd_9) {
            VL_NULL_CHECK(unnamedblk439__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1182)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "UVM/FLD/SET/BSY"s, __VlefCall_8__get_report_action);
            __VlefLogAnd_9 = (0U != __VlefCall_8__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_9))) {
            this->__VnoInFunc_get_name(vlSymsp, __VlefCall_10__get_name);
            VL_NULL_CHECK(this->__PVT__m_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1182)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_11__get_full_name);
            __Vtask_uvm_report_warning__report_enabled_checked_3668 = 1U;
            this->__Vtask_uvm_report_warning__context_name_3667 = ""s;
            __Vtask_uvm_report_warning__line_3666 = 0x0000049eU;
            this->__Vtask_uvm_report_warning__filename_3665 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh"s;
            __Vtask_uvm_report_warning__verbosity_3664 = 0U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_warning__message_3663
                          ,"Setting the value of field \"%s\" while containing register \"%s\" is being accessed may result in loss of desired field value. A race condition between threads concurrently accessing the register model is the likely cause of the problem.",2
                          , 'S',&(__VlefCall_10__get_name)
                          , 'S',&(__VlefCall_11__get_full_name));
            this->__Vtask_uvm_report_warning__id_3662 = "UVM/FLD/SET/BSY"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1539);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1539;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3669);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__Vfuncout_3669;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_3662, this->__Vtask_uvm_report_warning__message_3663, __Vtask_uvm_report_warning__verbosity_3664, this->__Vtask_uvm_report_warning__filename_3665, __Vtask_uvm_report_warning__line_3666, this->__Vtask_uvm_report_warning__context_name_3667, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_3668));
        }
    }
    if ((((((((("RO"s == this->__PVT__m_access) | ("RW"s 
                                                   == this->__PVT__m_access)) 
              | ("RC"s == this->__PVT__m_access)) | 
             ("RS"s == this->__PVT__m_access)) | ("WC"s 
                                                  == this->__PVT__m_access)) 
           | ("WS"s == this->__PVT__m_access)) | ("WRC"s 
                                                  == this->__PVT__m_access)) 
         | ("WRS"s == this->__PVT__m_access))) {
        if ((1U & (~ ("RO"s == this->__PVT__m_access)))) {
            if (("RW"s == this->__PVT__m_access)) {
                this->__PVT__m_desired = value;
            } else if ((1U & (~ ("RC"s == this->__PVT__m_access)))) {
                if ((1U & (~ ("RS"s == this->__PVT__m_access)))) {
                    this->__PVT__m_desired = (("WC"s 
                                               == this->__PVT__m_access)
                                               ? 0ULL
                                               : (("WS"s 
                                                   == this->__PVT__m_access)
                                                   ? mask
                                                   : value));
                }
            }
        }
    } else {
        this->__PVT__m_desired = ((((((((("WSRC"s == this->__PVT__m_access) 
                                         | ("WCRS"s 
                                            == this->__PVT__m_access)) 
                                        | ("W1C"s == this->__PVT__m_access)) 
                                       | ("W1S"s == this->__PVT__m_access)) 
                                      | ("W1T"s == this->__PVT__m_access)) 
                                     | ("W0C"s == this->__PVT__m_access)) 
                                    | ("W0S"s == this->__PVT__m_access)) 
                                   | ("W0T"s == this->__PVT__m_access))
                                   ? (("WSRC"s == this->__PVT__m_access)
                                       ? mask : (("WCRS"s 
                                                  == this->__PVT__m_access)
                                                  ? 0ULL
                                                  : 
                                                 (("W1C"s 
                                                   == this->__PVT__m_access)
                                                   ? 
                                                  (this->__PVT__m_desired 
                                                   & (~ value))
                                                   : 
                                                  (("W1S"s 
                                                    == this->__PVT__m_access)
                                                    ? 
                                                   (this->__PVT__m_desired 
                                                    | value)
                                                    : 
                                                   (("W1T"s 
                                                     == this->__PVT__m_access)
                                                     ? 
                                                    (this->__PVT__m_desired 
                                                     ^ value)
                                                     : 
                                                    (("W0C"s 
                                                      == this->__PVT__m_access)
                                                      ? 
                                                     (this->__PVT__m_desired 
                                                      & value)
                                                      : 
                                                     (("W0S"s 
                                                       == this->__PVT__m_access)
                                                       ? 
                                                      (this->__PVT__m_desired 
                                                       | ((~ value) 
                                                          & mask))
                                                       : 
                                                      (this->__PVT__m_desired 
                                                       ^ 
                                                       ((~ value) 
                                                        & mask)))))))))
                                   : ((((((((("W1SRC"s 
                                              == this->__PVT__m_access) 
                                             | ("W1CRS"s 
                                                == this->__PVT__m_access)) 
                                            | ("W0SRC"s 
                                               == this->__PVT__m_access)) 
                                           | ("W0CRS"s 
                                              == this->__PVT__m_access)) 
                                          | ("WO"s 
                                             == this->__PVT__m_access)) 
                                         | ("WOC"s 
                                            == this->__PVT__m_access)) 
                                        | ("WOS"s == this->__PVT__m_access)) 
                                       | ("W1"s == this->__PVT__m_access))
                                       ? (("W1SRC"s 
                                           == this->__PVT__m_access)
                                           ? (this->__PVT__m_desired 
                                              | value)
                                           : (("W1CRS"s 
                                               == this->__PVT__m_access)
                                               ? (this->__PVT__m_desired 
                                                  & (~ value))
                                               : (("W0SRC"s 
                                                   == this->__PVT__m_access)
                                                   ? 
                                                  (this->__PVT__m_desired 
                                                   | ((~ value) 
                                                      & mask))
                                                   : 
                                                  (("W0CRS"s 
                                                    == this->__PVT__m_access)
                                                    ? 
                                                   (this->__PVT__m_desired 
                                                    & value)
                                                    : 
                                                   (("WO"s 
                                                     == this->__PVT__m_access)
                                                     ? value
                                                     : 
                                                    (("WOC"s 
                                                      == this->__PVT__m_access)
                                                      ? 0ULL
                                                      : 
                                                     (("WOS"s 
                                                       == this->__PVT__m_access)
                                                       ? mask
                                                       : 
                                                      ((::IData)(this->__PVT__m_written)
                                                        ? this->__PVT__m_desired
                                                        : value))))))))
                                       : (("WO1"s == this->__PVT__m_access)
                                           ? ((::IData)(this->__PVT__m_written)
                                               ? this->__PVT__m_desired
                                               : value)
                                           : value)));
    }
    this->__PVT__value = this->__PVT__m_desired;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get(Vtb_top__Syms* __restrict vlSymsp, ::std::string fname, ::IData/*31:0*/ lineno, ::QData/*63:0*/ &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get\n"); );
    // Body
    this->__PVT__m_fname = fname;
    this->__PVT__m_lineno = lineno;
    get__Vfuncrtn = this->__PVT__m_desired;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_mirrored_value(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string fname, ::IData/*31:0*/ lineno, ::QData/*63:0*/ &get_mirrored_value__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_mirrored_value\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1540;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3670;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_3673;
    __Vtask_uvm_report_warning__verbosity_3673 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_3675;
    __Vtask_uvm_report_warning__line_3675 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_3677;
    __Vtask_uvm_report_warning__report_enabled_checked_3677 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1541;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3678;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_5__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_4;
    ::IData/*31:0*/ __VlefCall_3__get_report_action;
    ::IData/*31:0*/ __VlefCall_2__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_1__uvm_get_report_object;
    ::CData/*0:0*/ __VlefCall_0__is_volatile;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk440__DOT___local_report_object_;
    get_mirrored_value__Vfuncrtn = 0ULL;
    this->__VnoInFunc_is_volatile(vlSymsp, __VlefCall_0__is_volatile);
    if (__VlefCall_0__is_volatile) {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1540);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1540;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3670);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
            = __Vtask_get_root__Vfuncout_3670;
        __VlefCall_1__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
        VL_NULL_CHECK(__VlefCall_1__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1310)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk440__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk440__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1310)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "UVM/FLD/GET_MIRRORED_VAL/VOL"s, __VlefCall_2__get_report_verbosity_level);
        __VlefLogAnd_4 = VL_LTES_III(32, 0U, __VlefCall_2__get_report_verbosity_level);
        if (__VlefLogAnd_4) {
            VL_NULL_CHECK(unnamedblk440__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1310)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "UVM/FLD/GET_MIRRORED_VAL/VOL"s, __VlefCall_3__get_report_action);
            __VlefLogAnd_4 = (0U != __VlefCall_3__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_4))) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
            __Vtask_uvm_report_warning__report_enabled_checked_3677 = 1U;
            this->__Vtask_uvm_report_warning__context_name_3676 = ""s;
            __Vtask_uvm_report_warning__line_3675 = 0x0000051eU;
            this->__Vtask_uvm_report_warning__filename_3674 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh"s;
            __Vtask_uvm_report_warning__verbosity_3673 = 0U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_warning__message_3672
                          ,"Mirrored value returned for volatile field \"%s\" may not reflect the actual current value.",1
                          , 'S',&(__VlefCall_5__get_full_name));
            this->__Vtask_uvm_report_warning__id_3671 = "UVM/FLD/GET_MIRRORED_VAL/VOL"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1541);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1541;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3678);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__Vfuncout_3678;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_3671, this->__Vtask_uvm_report_warning__message_3672, __Vtask_uvm_report_warning__verbosity_3673, this->__Vtask_uvm_report_warning__filename_3674, __Vtask_uvm_report_warning__line_3675, this->__Vtask_uvm_report_warning__context_name_3676, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_3677));
        }
    }
    this->__PVT__m_fname = fname;
    this->__PVT__m_lineno = lineno;
    get_mirrored_value__Vfuncrtn = this->__PVT__m_mirrored;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_reset(Vtb_top__Syms* __restrict vlSymsp, ::std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_reset\n"); );
    // Body
    {
        if ((1U & (~ (0U != this->__PVT__m_reset.exists(kind))))) {
            goto __Vlabel0;
        }
        this->__PVT__m_mirrored = this->__PVT__m_reset
            .at(kind);
        this->__PVT__m_desired = this->__PVT__m_mirrored;
        this->__PVT__value = this->__PVT__m_mirrored;
        if (("HARD"s == kind)) {
            this->__PVT__m_written = 0U;
        }
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_has_reset(Vtb_top__Syms* __restrict vlSymsp, ::std::string kind, ::CData/*0:0*/ __SYM__delete, ::CData/*0:0*/ &has_reset__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_has_reset\n"); );
    // Body
    {
        has_reset__Vfuncrtn = 0U;
        if ((1U & (~ (0U != this->__PVT__m_reset.exists(kind))))) {
            has_reset__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        if (__SYM__delete) {
            this->__PVT__m_reset.erase(kind);
        }
        has_reset__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_reset(Vtb_top__Syms* __restrict vlSymsp, ::std::string kind, ::QData/*63:0*/ &get_reset__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_reset\n"); );
    // Body
    {
        get_reset__Vfuncrtn = 0ULL;
        if ((1U & (~ (0U != this->__PVT__m_reset.exists(kind))))) {
            get_reset__Vfuncrtn = this->__PVT__m_desired;
            goto __Vlabel0;
        }
        get_reset__Vfuncrtn = this->__PVT__m_reset.at(kind);
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_set_reset(Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ value, ::std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_set_reset\n"); );
    // Body
    this->__PVT__m_reset.atWrite(kind) = (value & (
                                                   VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
                                                   - 1ULL));
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_needs_update(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &needs_update__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_needs_update\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::std::string __VInside_ha172a4d4__0;
    {
        needs_update__Vfuncrtn = 0U;
        this->__VnoInFunc_get_access(vlProcess, vlSymsp, VlNull{}, __VInside_ha172a4d4__0);
        if (((("RO"s == __VInside_ha172a4d4__0) || 
              ("RC"s == __VInside_ha172a4d4__0)) || 
             ("RS"s == __VInside_ha172a4d4__0))) {
            needs_update__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        needs_update__Vfuncrtn = ((this->__PVT__m_mirrored 
                                   != this->__PVT__m_desired) 
                                  | (::IData)(this->__PVT__m_volatile));
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_Xcheck_accessX(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map_info> &map_info, ::CData/*0:0*/ &Xcheck_accessX__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_Xcheck_accessX\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1542;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3679;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_3682;
    __Vtask_uvm_report_warning__verbosity_3682 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_3684;
    __Vtask_uvm_report_warning__line_3684 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_3686;
    __Vtask_uvm_report_warning__report_enabled_checked_3686 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1543;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3687;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1544;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3688;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_3691;
    __Vtask_uvm_report_error__verbosity_3691 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_3693;
    __Vtask_uvm_report_error__line_3693 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3695;
    __Vtask_uvm_report_error__report_enabled_checked_3695 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1545;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3696;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1546;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3697;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_3700;
    __Vtask_uvm_report_error__verbosity_3700 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_3702;
    __Vtask_uvm_report_error__line_3702 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3704;
    __Vtask_uvm_report_error__report_enabled_checked_3704 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1547;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3705;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> __VlefCall_31__get_local_map;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> __VlefCall_30__get_map;
    ::std::string __VlefCall_29__get_full_name;
    ::std::string __VlefCall_28__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_27;
    ::IData/*31:0*/ __VlefCall_26__get_report_action;
    ::IData/*31:0*/ __VlefCall_25__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_24__uvm_get_report_object;
    ::std::string __VlefCall_23__get_full_name;
    ::std::string __VlefCall_22__get_type_name;
    ::CData/*0:0*/ __VlefLogAnd_21;
    ::IData/*31:0*/ __VlefCall_20__get_report_action;
    ::std::string __VlefCall_19__get_type_name;
    ::IData/*31:0*/ __VlefCall_18__get_report_verbosity_level;
    ::std::string __VlefCall_17__get_type_name;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_16__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> __VlefCall_15__get_local_map;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> __VlefCall_14__get_local_map;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> __VlefCall_13__get_map;
    ::IData/*31:0*/ __VlefCall_12__get_door;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> __VlefCall_11__backdoor;
    ::std::string __VlefCall_10__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_9;
    ::IData/*31:0*/ __VlefCall_8__get_report_action;
    ::IData/*31:0*/ __VlefCall_7__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_6__uvm_get_report_object;
    ::CData/*0:0*/ __VlefLogAnd_5;
    ::CData/*0:0*/ __VlefCall_4__has_hdl_path;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_backdoor> __VlefCall_3__get_backdoor;
    ::IData/*31:0*/ __VlefCall_2__get_door;
    ::IData/*31:0*/ __VlefCall_1__get_default_door;
    ::IData/*31:0*/ __VlefCall_0__get_door;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk441__DOT__blk;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk442__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk443__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk444__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> local_tmp_map;
    {
        Xcheck_accessX__Vfuncrtn = 0U;
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1405)->__VnoInFunc_get_door(vlSymsp, __VlefCall_0__get_door);
        if ((3U == __VlefCall_0__get_door)) {
            VL_NULL_CHECK(this->__PVT__m_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1406)->__VnoInFunc_get_block(vlSymsp, unnamedblk441__DOT__blk);
            VL_NULL_CHECK(unnamedblk441__DOT__blk, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1407)->__VnoInFunc_get_default_door(vlSymsp, __VlefCall_1__get_default_door);
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1407)->__VnoInFunc_set_door(vlSymsp, __VlefCall_1__get_default_door);
        }
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1410)->__VnoInFunc_get_door(vlSymsp, __VlefCall_2__get_door);
        if ((1U == __VlefCall_2__get_door)) {
            VL_NULL_CHECK(this->__PVT__m_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1411)->__VnoInFunc_get_backdoor(vlSymsp, 1U, __VlefCall_3__get_backdoor);
            __VlefLogAnd_5 = (VlNull{} == __VlefCall_3__get_backdoor);
            if (__VlefLogAnd_5) {
                VL_NULL_CHECK(this->__PVT__m_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1411)->__VnoInFunc_has_hdl_path(vlSymsp, ""s, __VlefCall_4__has_hdl_path);
                __VlefLogAnd_5 = (1U & (~ (::IData)(__VlefCall_4__has_hdl_path)));
            }
            if (__VlefLogAnd_5) {
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1542);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1542;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3679);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_3679;
                __VlefCall_6__uvm_get_report_object 
                    = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
                VL_NULL_CHECK(__VlefCall_6__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1414)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk442__DOT___local_report_object_);
                VL_NULL_CHECK(unnamedblk442__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1414)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_7__get_report_verbosity_level);
                __VlefLogAnd_9 = VL_LTES_III(32, 0U, __VlefCall_7__get_report_verbosity_level);
                if (__VlefLogAnd_9) {
                    VL_NULL_CHECK(unnamedblk442__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1414)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_8__get_report_action);
                    __VlefLogAnd_9 = (0U != __VlefCall_8__get_report_action);
                }
                if (VL_UNLIKELY((__VlefLogAnd_9))) {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_10__get_full_name);
                    __Vtask_uvm_report_warning__report_enabled_checked_3686 = 1U;
                    this->__Vtask_uvm_report_warning__context_name_3685 = ""s;
                    __Vtask_uvm_report_warning__line_3684 = 0x00000586U;
                    this->__Vtask_uvm_report_warning__filename_3683 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh"s;
                    __Vtask_uvm_report_warning__verbosity_3682 = 0U;
                    this->__Vtask_uvm_report_warning__message_3681 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN("No backdoor access available for field '"s, __VlefCall_10__get_full_name), "' . Using frontdoor instead."s));
                    this->__Vtask_uvm_report_warning__id_3680 = "RegModel"s;
                    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1543);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__Vfuncout_1543;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3687);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__Vfuncout_3687;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_3680, this->__Vtask_uvm_report_warning__message_3681, __Vtask_uvm_report_warning__verbosity_3682, this->__Vtask_uvm_report_warning__filename_3683, __Vtask_uvm_report_warning__line_3684, this->__Vtask_uvm_report_warning__context_name_3685, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_3686));
                }
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1415)->__VnoInFunc_set_door(vlSymsp, 0U);
            } else {
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_reg_map__Vclpkg.__VnoInFunc_backdoor(vlProcess, vlSymsp, __VlefCall_11__backdoor);
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1419)->__VnoInFunc_set_map(vlSymsp, __VlefCall_11__backdoor);
            }
        }
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1424)->__VnoInFunc_get_door(vlSymsp, __VlefCall_12__get_door);
        if ((1U != __VlefCall_12__get_door)) {
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1426)->__VnoInFunc_get_map(vlSymsp, __VlefCall_13__get_map);
            VL_NULL_CHECK(this->__PVT__m_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1426)->__VnoInFunc_get_local_map(vlProcess, vlSymsp, __VlefCall_13__get_map, __VlefCall_14__get_local_map);
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1426)->__VnoInFunc_set_local_map(vlSymsp, __VlefCall_14__get_local_map);
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1428)->__VnoInFunc_get_local_map(vlSymsp, __VlefCall_15__get_local_map);
            if ((VlNull{} == __VlefCall_15__get_local_map)) {
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1429)->__VnoInFunc_get_map(vlSymsp, local_tmp_map);
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1544);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1544;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3688);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_3688;
                __VlefCall_16__uvm_get_report_object 
                    = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
                VL_NULL_CHECK(__VlefCall_16__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1432)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk443__DOT___local_report_object_);
                this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_17__get_type_name);
                VL_NULL_CHECK(unnamedblk443__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1432)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_17__get_type_name), __VlefCall_18__get_report_verbosity_level);
                __VlefLogAnd_21 = VL_LTES_III(32, 0U, __VlefCall_18__get_report_verbosity_level);
                if (__VlefLogAnd_21) {
                    this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_19__get_type_name);
                    VL_NULL_CHECK(unnamedblk443__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1432)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_19__get_type_name), __VlefCall_20__get_report_action);
                    __VlefLogAnd_21 = (0U != __VlefCall_20__get_report_action);
                }
                if (VL_UNLIKELY((__VlefLogAnd_21))) {
                    this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_22__get_type_name);
                    VL_NULL_CHECK(local_tmp_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1432)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_23__get_full_name);
                    __Vtask_uvm_report_error__report_enabled_checked_3695 = 1U;
                    this->__Vtask_uvm_report_error__context_name_3694 = ""s;
                    __Vtask_uvm_report_error__line_3693 = 0x00000598U;
                    this->__Vtask_uvm_report_error__filename_3692 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh"s;
                    __Vtask_uvm_report_error__verbosity_3691 = 0U;
                    this->__Vtask_uvm_report_error__message_3690 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN("No transactor available to physically access memory from map '"s, __VlefCall_23__get_full_name), "'"s));
                    this->__Vtask_uvm_report_error__id_3689 
                        = VL_CVT_PACK_STR_NN(__VlefCall_22__get_type_name);
                    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1545);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__Vfuncout_1545;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3696);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__Vfuncout_3696;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_3689, this->__Vtask_uvm_report_error__message_3690, __Vtask_uvm_report_error__verbosity_3691, this->__Vtask_uvm_report_error__filename_3692, __Vtask_uvm_report_error__line_3693, this->__Vtask_uvm_report_error__context_name_3694, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3695));
                }
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1433)->__VnoInFunc_set_status(vlSymsp, 1U);
                Xcheck_accessX__Vfuncrtn = 0U;
                goto __Vlabel0;
            }
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1437)->__VnoInFunc_get_local_map(vlSymsp, local_tmp_map);
            VL_NULL_CHECK(local_tmp_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1438)->__VnoInFunc_get_reg_map_info(vlProcess, vlSymsp, this->__PVT__m_parent, 1U, map_info);
            if (((VlNull{} == VL_NULL_CHECK(map_info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1440)
                  ->__PVT__frontdoor) && VL_NULL_CHECK(map_info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1440)
                 ->__PVT__unmapped)) {
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1546);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1546;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3697);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_3697;
                __VlefCall_24__uvm_get_report_object 
                    = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
                VL_NULL_CHECK(__VlefCall_24__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1444)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk444__DOT___local_report_object_);
                VL_NULL_CHECK(unnamedblk444__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1444)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_25__get_report_verbosity_level);
                __VlefLogAnd_27 = VL_LTES_III(32, 0U, __VlefCall_25__get_report_verbosity_level);
                if (__VlefLogAnd_27) {
                    VL_NULL_CHECK(unnamedblk444__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1444)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_26__get_report_action);
                    __VlefLogAnd_27 = (0U != __VlefCall_26__get_report_action);
                }
                if (VL_UNLIKELY((__VlefLogAnd_27))) {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_28__get_full_name);
                    VL_NULL_CHECK(local_tmp_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1444)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_29__get_full_name);
                    __Vtask_uvm_report_error__report_enabled_checked_3704 = 1U;
                    this->__Vtask_uvm_report_error__context_name_3703 = ""s;
                    __Vtask_uvm_report_error__line_3702 = 0x000005a4U;
                    this->__Vtask_uvm_report_error__filename_3701 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh"s;
                    __Vtask_uvm_report_error__verbosity_3700 = 0U;
                    this->__Vtask_uvm_report_error__message_3699 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN(
                                                                           VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Field '"s, __VlefCall_28__get_full_name), "' in register that is unmapped in map '"s), __VlefCall_29__get_full_name), "' and does not have a user-defined frontdoor"s));
                    this->__Vtask_uvm_report_error__id_3698 = "RegModel"s;
                    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1547);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__Vfuncout_1547;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3705);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__Vfuncout_3705;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_3698, this->__Vtask_uvm_report_error__message_3699, __Vtask_uvm_report_error__verbosity_3700, this->__Vtask_uvm_report_error__filename_3701, __Vtask_uvm_report_error__line_3702, this->__Vtask_uvm_report_error__context_name_3703, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3704));
                }
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1445)->__VnoInFunc_set_status(vlSymsp, 1U);
                Xcheck_accessX__Vfuncrtn = 0U;
                goto __Vlabel0;
            }
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1449)->__VnoInFunc_get_map(vlSymsp, __VlefCall_30__get_map);
            if ((VlNull{} == __VlefCall_30__get_map)) {
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1451)->__VnoInFunc_get_local_map(vlSymsp, __VlefCall_31__get_local_map);
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1451)->__VnoInFunc_set_map(vlSymsp, __VlefCall_31__get_local_map);
            }
        }
        Xcheck_accessX__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_write(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &status, ::QData/*63:0*/ value, ::IData/*31:0*/ path, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> parent, ::IData/*31:0*/ prior, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> extension, ::std::string fname, ::IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_write\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::std::string __VlefCall_0__get_full_name;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw;
    status = 0U;
    this->__VnoInFunc_set(vlProcess, vlSymsp, value, ""s, 0U);
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pi3429b725__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "field_write_item"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), rw);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1477)->__VnoInFunc_set_element(vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_field>{this});
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1478)->__VnoInFunc_set_element_kind(vlSymsp, 1U);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1479)->__VnoInFunc_set_kind(vlSymsp, 1U);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1480)->__VnoInFunc_set_value(vlSymsp, value, 0U);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1481)->__VnoInFunc_set_door(vlSymsp, path);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1482)->__VnoInFunc_set_map(vlSymsp, map);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1483)->__VnoInFunc_set_parent_sequence(vlSymsp, parent);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1484)->__VnoInFunc_set_priority(vlSymsp, prior);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1485)->__VnoInFunc_set_extension(vlSymsp, extension);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1486)->__VnoInFunc_set_fname(vlSymsp, fname);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1487)->__VnoInFunc_set_line(vlSymsp, lineno);
    co_await this->__VnoInFunc_do_write(vlSymsp, rw);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1491)->__VnoInFunc_get_status(vlSymsp, status);
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_write(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_write\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map_info> __Vfunc_Xcheck_accessX__map_info_1548;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1549;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3706;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_3709;
    __Vtask_uvm_report_warning__verbosity_3709 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_3711;
    __Vtask_uvm_report_warning__line_3711 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_3713;
    __Vtask_uvm_report_warning__report_enabled_checked_3713 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1550;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3714;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1551;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3715;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_3718;
    __Vtask_uvm_report_warning__verbosity_3718 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_3720;
    __Vtask_uvm_report_warning__line_3720 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_3722;
    __Vtask_uvm_report_warning__report_enabled_checked_3722 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1552;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3723;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::std::string __VlefCall_21__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_20;
    ::IData/*31:0*/ __VlefCall_19__get_report_action;
    ::IData/*31:0*/ __VlefCall_18__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_17__uvm_get_report_object;
    ::CData/*0:0*/ __VlefCall_16__get_auto_predict;
    ::IData/*31:0*/ __VlefCall_15__get_status;
    ::CData/*0:0*/ __VlefCall_14__is_indv_accessible;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> __VlefCall_13__get_local_map;
    ::IData/*31:0*/ __VlefCall_12__get_door;
    ::IData/*31:0*/ __VlefCall_11__get_lsb_pos;
    ::IData/*31:0*/ __VlefCall_10__get_lsb_pos;
    ::IData/*31:0*/ __VlefCall_9__get_n_bits;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> __VlefCall_8__get_local_map;
    ::QData/*63:0*/ __VlefCall_7__get_value;
    ::std::string __VlefCall_6__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_5;
    ::IData/*31:0*/ __VlefCall_4__get_report_action;
    ::IData/*31:0*/ __VlefCall_3__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_2__uvm_get_report_object;
    ::QData/*63:0*/ __VlefCall_1__get_value;
    ::CData/*0:0*/ __VlefCall_0__Xcheck_accessX;
    ::QData/*63:0*/ unnamedblk445__DOT__tmp_value;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk445__DOT__unnamedblk446__DOT___local_report_object_;
    ::IData/*31:0*/ unnamedblk447__DOT__i;
    unnamedblk447__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk447__DOT__i__Vloopsize;
    unnamedblk447__DOT__i__Vloopsize = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk449__DOT__item_map;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk449__DOT__system_map;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pif43a684e> unnamedblk449__DOT__cbs;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk449__DOT__unnamedblk450__DOT__cb;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk449__DOT__unnamedblk451__DOT__cb;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk448__DOT___local_report_object_;
    ::std::string __VCase_h26b8ec54__0;
    ::QData/*63:0*/ value_adjust;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_field>> fields;
    ::CData/*0:0*/ bad_side_effect;
    {
        value_adjust = 0ULL;
        fields.clear();
        bad_side_effect = 0U;
        co_await VL_NULL_CHECK(this->__PVT__m_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1505)->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 1U);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1506)->__VnoInFunc_get_fname(vlSymsp, this->__PVT__m_fname);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1507)->__VnoInFunc_get_line(vlSymsp, this->__PVT__m_lineno);
        this->__VnoInFunc_Xcheck_accessX(vlSymsp, rw, __Vfunc_Xcheck_accessX__map_info_1548, __VlefCall_0__Xcheck_accessX);
        if ((1U & (~ (::IData)(__VlefCall_0__Xcheck_accessX)))) {
            co_await VL_NULL_CHECK(this->__PVT__m_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1510)->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
            goto __Vlabel0;
        }
        this->__PVT__m_write_in_progress = 1U;
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1516)->__VnoInFunc_get_value(vlSymsp, 0U, __VlefCall_1__get_value);
        if ((0U != VL_SHIFTR_QQI(64,64,32, __VlefCall_1__get_value, this->__PVT__m_size))) {
            unnamedblk445__DOT__tmp_value = 0ULL;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1549);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1549;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3706);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_3706;
            __VlefCall_2__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_2__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1519)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk445__DOT__unnamedblk446__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk445__DOT__unnamedblk446__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1519)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_3__get_report_verbosity_level);
            __VlefLogAnd_5 = VL_LTES_III(32, 0U, __VlefCall_3__get_report_verbosity_level);
            if (__VlefLogAnd_5) {
                VL_NULL_CHECK(unnamedblk445__DOT__unnamedblk446__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1519)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_4__get_report_action);
                __VlefLogAnd_5 = (0U != __VlefCall_4__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_5))) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
                __Vtask_uvm_report_warning__report_enabled_checked_3713 = 1U;
                this->__Vtask_uvm_report_warning__context_name_3712 = ""s;
                __Vtask_uvm_report_warning__line_3711 = 0x000005efU;
                this->__Vtask_uvm_report_warning__filename_3710 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh"s;
                __Vtask_uvm_report_warning__verbosity_3709 = 0U;
                this->__Vtask_uvm_report_warning__message_3708 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("uvm_reg_field::write(): Value greater than field '"s, __VlefCall_6__get_full_name), "'"s));
                this->__Vtask_uvm_report_warning__id_3707 = "RegModel"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1550);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1550;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3714);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_3714;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_3707, this->__Vtask_uvm_report_warning__message_3708, __Vtask_uvm_report_warning__verbosity_3709, this->__Vtask_uvm_report_warning__filename_3710, __Vtask_uvm_report_warning__line_3711, this->__Vtask_uvm_report_warning__context_name_3712, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_3713));
            }
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1520)->__VnoInFunc_get_value(vlSymsp, 0U, unnamedblk445__DOT__tmp_value);
            unnamedblk445__DOT__tmp_value = (unnamedblk445__DOT__tmp_value 
                                             & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
                                                - 1ULL));
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1522)->__VnoInFunc_set_value(vlSymsp, unnamedblk445__DOT__tmp_value, 0U);
        }
        VL_NULL_CHECK(this->__PVT__m_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1526)->__VnoInFunc_get_fields(vlSymsp, fields);
        unnamedblk447__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk447__DOT__i, fields.size())) {
            unnamedblk447__DOT__i__Vloopsize = fields.size();
            {
                if ((fields.at(unnamedblk447__DOT__i) 
                     == ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_field>{this})) {
                    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1530)->__VnoInFunc_get_value(vlSymsp, 0U, __VlefCall_7__get_value);
                    value_adjust = (value_adjust | 
                                    VL_SHIFTL_QQI(64,64,32, __VlefCall_7__get_value, this->__PVT__m_lsb));
                    goto __Vlabel1;
                }
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1535)->__VnoInFunc_get_local_map(vlSymsp, __VlefCall_8__get_local_map);
                VL_NULL_CHECK(fields.at(unnamedblk447__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1535)->__VnoInFunc_get_access(vlProcess, vlSymsp, __VlefCall_8__get_local_map, __VCase_h26b8ec54__0);
                if ((1U & (~ (((((((("RO"s == __VCase_h26b8ec54__0) 
                                    || ("RC"s == __VCase_h26b8ec54__0)) 
                                   || ("RS"s == __VCase_h26b8ec54__0)) 
                                  || ("W1C"s == __VCase_h26b8ec54__0)) 
                                 || ("W1S"s == __VCase_h26b8ec54__0)) 
                                || ("W1T"s == __VCase_h26b8ec54__0)) 
                               || ("W1SRC"s == __VCase_h26b8ec54__0)) 
                              || ("W1CRC"s == __VCase_h26b8ec54__0))))) {
                    if (((((("W0C"s == __VCase_h26b8ec54__0) 
                            || ("W0S"s == __VCase_h26b8ec54__0)) 
                           || ("W0T"s == __VCase_h26b8ec54__0)) 
                          || ("W0SRC"s == __VCase_h26b8ec54__0)) 
                         || ("W0CRS"s == __VCase_h26b8ec54__0))) {
                        VL_NULL_CHECK(fields.at(unnamedblk447__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1548)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_9__get_n_bits);
                        VL_NULL_CHECK(fields.at(unnamedblk447__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1548)->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_10__get_lsb_pos);
                        value_adjust = (value_adjust 
                                        | VL_SHIFTL_QQI(64,64,32, 
                                                        (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_9__get_n_bits) 
                                                         - 1ULL), __VlefCall_10__get_lsb_pos));
                    } else if ((((((("WC"s == __VCase_h26b8ec54__0) 
                                    || ("WS"s == __VCase_h26b8ec54__0)) 
                                   || ("WCRS"s == __VCase_h26b8ec54__0)) 
                                  || ("WSRC"s == __VCase_h26b8ec54__0)) 
                                 || ("WOC"s == __VCase_h26b8ec54__0)) 
                                || ("WOS"s == __VCase_h26b8ec54__0))) {
                        bad_side_effect = 1U;
                    } else {
                        VL_NULL_CHECK(fields.at(unnamedblk447__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1561)->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_11__get_lsb_pos);
                        value_adjust = (value_adjust 
                                        | VL_SHIFTL_QQI(64,64,32, VL_NULL_CHECK(fields.at(unnamedblk447__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1561)
                                                        ->__PVT__m_mirrored, __VlefCall_11__get_lsb_pos));
                    }
                }
                __Vlabel1: ;
            }
            if ((unnamedblk447__DOT__i__Vloopsize <= fields.size())) {
                unnamedblk447__DOT__i = ((::IData)(1U) 
                                         + unnamedblk447__DOT__i);
            }
        }
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1575)->__VnoInFunc_get_door(vlSymsp, __VlefCall_12__get_door);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1575)->__VnoInFunc_get_local_map(vlSymsp, __VlefCall_13__get_local_map);
        this->__VnoInFunc_is_indv_accessible(vlSymsp, __VlefCall_12__get_door, __VlefCall_13__get_local_map, __VlefCall_14__is_indv_accessible);
        if (__VlefCall_14__is_indv_accessible) {
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1586)->__VnoInFunc_get_local_map(vlSymsp, unnamedblk449__DOT__item_map);
            VL_NULL_CHECK(unnamedblk449__DOT__item_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1587)->__VnoInFunc_get_root_map(vlSymsp, unnamedblk449__DOT__system_map);
            unnamedblk449__DOT__cbs = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pif43a684e, vlProcess, vlSymsp, 
                                             ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_field>{this});
            VL_NULL_CHECK(this->__PVT__m_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1590)->__VnoInFunc_Xset_busyX(vlSymsp, 1U);
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1592)->__VnoInFunc_set_status(vlSymsp, 0U);
            this->__VnoInFunc_pre_write(vlSymsp, rw);
            VL_NULL_CHECK(unnamedblk449__DOT__cbs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1595)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk449__DOT__unnamedblk450__DOT__cb);
            while ((VlNull{} != unnamedblk449__DOT__unnamedblk450__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk449__DOT__unnamedblk450__DOT__cb, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1597)->__VnoInFunc_pre_write(vlProcess, vlSymsp, rw);
                VL_NULL_CHECK(unnamedblk449__DOT__cbs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1595)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk449__DOT__unnamedblk450__DOT__cb);
            }
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1601)->__VnoInFunc_get_status(vlSymsp, __VlefCall_15__get_status);
            if ((0U != __VlefCall_15__get_status)) {
                this->__PVT__m_write_in_progress = 0U;
                VL_NULL_CHECK(this->__PVT__m_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1603)->__VnoInFunc_Xset_busyX(vlSymsp, 0U);
                co_await VL_NULL_CHECK(this->__PVT__m_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1604)->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
                goto __Vlabel0;
            }
            co_await VL_NULL_CHECK(unnamedblk449__DOT__item_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1609)->__VnoInFunc_do_write(vlProcess, vlSymsp, rw);
            VL_NULL_CHECK(unnamedblk449__DOT__system_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1611)->__VnoInFunc_get_auto_predict(vlSymsp, __VlefCall_16__get_auto_predict);
            if (__VlefCall_16__get_auto_predict) {
                this->__VnoInFunc_do_predict(vlProcess, vlSymsp, rw, 2U, 0xffU);
            }
            this->__VnoInFunc_post_write(vlSymsp, rw);
            VL_NULL_CHECK(unnamedblk449__DOT__cbs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1619)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk449__DOT__unnamedblk451__DOT__cb);
            while ((VlNull{} != unnamedblk449__DOT__unnamedblk451__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk449__DOT__unnamedblk451__DOT__cb, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1621)->__VnoInFunc_post_write(vlSymsp, rw);
                VL_NULL_CHECK(unnamedblk449__DOT__cbs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1619)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk449__DOT__unnamedblk451__DOT__cb);
            }
            VL_NULL_CHECK(this->__PVT__m_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1625)->__VnoInFunc_Xset_busyX(vlSymsp, 0U);
        } else {
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1576)->__VnoInFunc_set_element_kind(vlSymsp, 0U);
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1577)->__VnoInFunc_set_element(vlSymsp, this->__PVT__m_parent);
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1578)->__VnoInFunc_set_value(vlSymsp, value_adjust, 0U);
            co_await VL_NULL_CHECK(this->__PVT__m_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1579)->__VnoInFunc_do_write(vlProcess, vlSymsp, rw);
            if (bad_side_effect) {
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1551);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1551;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3715);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_3715;
                __VlefCall_17__uvm_get_report_object 
                    = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
                VL_NULL_CHECK(__VlefCall_17__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1582)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk448__DOT___local_report_object_);
                VL_NULL_CHECK(unnamedblk448__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1582)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_18__get_report_verbosity_level);
                __VlefLogAnd_20 = VL_LTES_III(32, 0U, __VlefCall_18__get_report_verbosity_level);
                if (__VlefLogAnd_20) {
                    VL_NULL_CHECK(unnamedblk448__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1582)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_19__get_report_action);
                    __VlefLogAnd_20 = (0U != __VlefCall_19__get_report_action);
                }
                if (VL_UNLIKELY((__VlefLogAnd_20))) {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_21__get_full_name);
                    __Vtask_uvm_report_warning__report_enabled_checked_3722 = 1U;
                    this->__Vtask_uvm_report_warning__context_name_3721 = ""s;
                    __Vtask_uvm_report_warning__line_3720 = 0x0000062eU;
                    this->__Vtask_uvm_report_warning__filename_3719 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh"s;
                    __Vtask_uvm_report_warning__verbosity_3718 = 0U;
                    VL_SFORMAT_NX(this->__Vtask_uvm_report_warning__message_3717
                                  ,"Writing field \"%s\" will cause unintended side effects in adjoining Write-to-Clear or Write-to-Set fields in the same register",1
                                  , 'S',&(__VlefCall_21__get_full_name));
                    this->__Vtask_uvm_report_warning__id_3716 = "RegModel"s;
                    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1552);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__Vfuncout_1552;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3723);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__Vfuncout_3723;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_3716, this->__Vtask_uvm_report_warning__message_3717, __Vtask_uvm_report_warning__verbosity_3718, this->__Vtask_uvm_report_warning__filename_3719, __Vtask_uvm_report_warning__line_3720, this->__Vtask_uvm_report_warning__context_name_3721, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_3722));
                }
            }
        }
        this->__PVT__m_write_in_progress = 0U;
        co_await VL_NULL_CHECK(this->__PVT__m_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1632)->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
        __Vlabel0: ;
    }
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_read(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &status, ::QData/*63:0*/ &value, ::IData/*31:0*/ path, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> parent, ::IData/*31:0*/ prior, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> extension, ::std::string fname, ::IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_read\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::std::string __VlefCall_0__get_full_name;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw;
    status = 0U;
    value = 0ULL;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pi3429b725__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "field_read_item"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), rw);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1651)->__VnoInFunc_set_element(vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_field>{this});
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1652)->__VnoInFunc_set_element_kind(vlSymsp, 1U);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1653)->__VnoInFunc_set_kind(vlSymsp, 0U);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1654)->__VnoInFunc_set_value(vlSymsp, 0ULL, 0U);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1655)->__VnoInFunc_set_door(vlSymsp, path);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1656)->__VnoInFunc_set_map(vlSymsp, map);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1657)->__VnoInFunc_set_parent_sequence(vlSymsp, parent);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1658)->__VnoInFunc_set_priority(vlSymsp, prior);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1659)->__VnoInFunc_set_extension(vlSymsp, extension);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1660)->__VnoInFunc_set_fname(vlSymsp, fname);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1661)->__VnoInFunc_set_line(vlSymsp, lineno);
    co_await this->__VnoInFunc_do_read(vlSymsp, rw);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1665)->__VnoInFunc_get_value(vlSymsp, 0U, value);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1666)->__VnoInFunc_get_status(vlSymsp, status);
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_read(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_read\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map_info> __Vfunc_Xcheck_accessX__map_info_1553;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1554;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3724;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_3727;
    __Vtask_uvm_report_warning__verbosity_3727 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_3729;
    __Vtask_uvm_report_warning__line_3729 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_3731;
    __Vtask_uvm_report_warning__report_enabled_checked_3731 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1555;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3732;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::std::string __VlefCall_9__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_8;
    ::IData/*31:0*/ __VlefCall_7__get_report_action;
    ::IData/*31:0*/ __VlefCall_6__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_5__uvm_get_report_object;
    ::CData/*0:0*/ __VlefCall_4__get_auto_predict;
    ::IData/*31:0*/ __VlefCall_3__get_status;
    ::CData/*0:0*/ __VlefCall_2__is_indv_accessible;
    ::IData/*31:0*/ __VlefCall_1__get_door;
    ::CData/*0:0*/ __VlefCall_0__Xcheck_accessX;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk453__DOT__system_map;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pif43a684e> unnamedblk453__DOT__cbs;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk453__DOT__unnamedblk454__DOT__cb;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk453__DOT__unnamedblk455__DOT__cb;
    ::QData/*63:0*/ unnamedblk452__DOT__value;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_field>> unnamedblk456__DOT__fields;
    ::IData/*31:0*/ unnamedblk456__DOT__unnamedblk457__DOT__i;
    unnamedblk456__DOT__unnamedblk457__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk456__DOT__unnamedblk457__DOT__i__Vloopsize;
    unnamedblk456__DOT__unnamedblk457__DOT__i__Vloopsize = 0;
    ::std::string unnamedblk456__DOT__unnamedblk457__DOT__unnamedblk458__DOT__mode;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk456__DOT__unnamedblk457__DOT__unnamedblk458__DOT__unnamedblk459__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> rw_local_map;
    ::CData/*0:0*/ bad_side_effect;
    {
        bad_side_effect = 0U;
        co_await VL_NULL_CHECK(this->__PVT__m_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1679)->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 1U);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1680)->__VnoInFunc_get_fname(vlSymsp, this->__PVT__m_fname);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1681)->__VnoInFunc_get_line(vlSymsp, this->__PVT__m_lineno);
        this->__PVT__m_read_in_progress = 1U;
        this->__VnoInFunc_Xcheck_accessX(vlSymsp, rw, __Vfunc_Xcheck_accessX__map_info_1553, __VlefCall_0__Xcheck_accessX);
        if ((1U & (~ (::IData)(__VlefCall_0__Xcheck_accessX)))) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1690)->__VnoInFunc_get_local_map(vlSymsp, rw_local_map);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1700)->__VnoInFunc_get_door(vlSymsp, __VlefCall_1__get_door);
        this->__VnoInFunc_is_indv_accessible(vlSymsp, __VlefCall_1__get_door, rw_local_map, __VlefCall_2__is_indv_accessible);
        if (__VlefCall_2__is_indv_accessible) {
            VL_NULL_CHECK(rw_local_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1711)->__VnoInFunc_get_root_map(vlSymsp, unnamedblk453__DOT__system_map);
            unnamedblk453__DOT__cbs = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pif43a684e, vlProcess, vlSymsp, 
                                             ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_field>{this});
            VL_NULL_CHECK(this->__PVT__m_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1714)->__VnoInFunc_Xset_busyX(vlSymsp, 1U);
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1716)->__VnoInFunc_set_status(vlSymsp, 0U);
            this->__VnoInFunc_pre_read(vlSymsp, rw);
            VL_NULL_CHECK(unnamedblk453__DOT__cbs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1719)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk453__DOT__unnamedblk454__DOT__cb);
            while ((VlNull{} != unnamedblk453__DOT__unnamedblk454__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk453__DOT__unnamedblk454__DOT__cb, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1721)->__VnoInFunc_pre_read(vlProcess, vlSymsp, rw);
                VL_NULL_CHECK(unnamedblk453__DOT__cbs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1719)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk453__DOT__unnamedblk454__DOT__cb);
            }
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1725)->__VnoInFunc_get_status(vlSymsp, __VlefCall_3__get_status);
            if ((0U != __VlefCall_3__get_status)) {
                this->__PVT__m_read_in_progress = 0U;
                VL_NULL_CHECK(this->__PVT__m_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1727)->__VnoInFunc_Xset_busyX(vlSymsp, 0U);
                co_await VL_NULL_CHECK(this->__PVT__m_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1728)->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
                goto __Vlabel0;
            }
            co_await VL_NULL_CHECK(rw_local_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1733)->__VnoInFunc_do_read(vlProcess, vlSymsp, rw);
            VL_NULL_CHECK(unnamedblk453__DOT__system_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1736)->__VnoInFunc_get_auto_predict(vlSymsp, __VlefCall_4__get_auto_predict);
            if (__VlefCall_4__get_auto_predict) {
                this->__VnoInFunc_do_predict(vlProcess, vlSymsp, rw, 1U, 0xffU);
            }
            this->__VnoInFunc_post_read(vlSymsp, rw);
            VL_NULL_CHECK(unnamedblk453__DOT__cbs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1744)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk453__DOT__unnamedblk455__DOT__cb);
            while ((VlNull{} != unnamedblk453__DOT__unnamedblk455__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk453__DOT__unnamedblk455__DOT__cb, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1746)->__VnoInFunc_post_read(vlSymsp, rw);
                VL_NULL_CHECK(unnamedblk453__DOT__cbs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1744)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk453__DOT__unnamedblk455__DOT__cb);
            }
            VL_NULL_CHECK(this->__PVT__m_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1750)->__VnoInFunc_Xset_busyX(vlSymsp, 0U);
        } else {
            unnamedblk452__DOT__value = 0ULL;
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1702)->__VnoInFunc_set_element_kind(vlSymsp, 0U);
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1703)->__VnoInFunc_set_element(vlSymsp, this->__PVT__m_parent);
            bad_side_effect = 1U;
            co_await VL_NULL_CHECK(this->__PVT__m_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1705)->__VnoInFunc_do_read(vlProcess, vlSymsp, rw);
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1706)->__VnoInFunc_get_value(vlSymsp, 0U, unnamedblk452__DOT__value);
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1707)->__VnoInFunc_set_value(vlSymsp, 
                                                                                (VL_SHIFTR_QQI(64,64,32, unnamedblk452__DOT__value, this->__PVT__m_lsb) 
                                                                                & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
                                                                                - 1ULL)), 0U);
        }
        this->__PVT__m_read_in_progress = 0U;
        co_await VL_NULL_CHECK(this->__PVT__m_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1757)->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
        if (bad_side_effect) {
            unnamedblk456__DOT__fields.clear();
            VL_NULL_CHECK(this->__PVT__m_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1761)->__VnoInFunc_get_fields(vlSymsp, unnamedblk456__DOT__fields);
            unnamedblk456__DOT__unnamedblk457__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk456__DOT__unnamedblk457__DOT__i, unnamedblk456__DOT__fields.size())) {
                unnamedblk456__DOT__unnamedblk457__DOT__i__Vloopsize 
                    = unnamedblk456__DOT__fields.size();
                {
                    unnamedblk456__DOT__unnamedblk457__DOT__unnamedblk458__DOT__mode = ""s;
                    if ((unnamedblk456__DOT__fields.at(unnamedblk456__DOT__unnamedblk457__DOT__i) 
                         == ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_field>{this})) {
                        goto __Vlabel1;
                    }
                    VL_NULL_CHECK(unnamedblk456__DOT__fields.at(unnamedblk456__DOT__unnamedblk457__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1769)->__VnoInFunc_get_access(vlProcess, vlSymsp, VlNull{}, unnamedblk456__DOT__unnamedblk457__DOT__unnamedblk458__DOT__mode);
                    if ((((((((((("RC"s == unnamedblk456__DOT__unnamedblk457__DOT__unnamedblk458__DOT__mode) 
                                 | ("RS"s == unnamedblk456__DOT__unnamedblk457__DOT__unnamedblk458__DOT__mode)) 
                                | ("WRC"s == unnamedblk456__DOT__unnamedblk457__DOT__unnamedblk458__DOT__mode)) 
                               | ("WRS"s == unnamedblk456__DOT__unnamedblk457__DOT__unnamedblk458__DOT__mode)) 
                              | ("WSRC"s == unnamedblk456__DOT__unnamedblk457__DOT__unnamedblk458__DOT__mode)) 
                             | ("WCRS"s == unnamedblk456__DOT__unnamedblk457__DOT__unnamedblk458__DOT__mode)) 
                            | ("W1SRC"s == unnamedblk456__DOT__unnamedblk457__DOT__unnamedblk458__DOT__mode)) 
                           | ("W1CRS"s == unnamedblk456__DOT__unnamedblk457__DOT__unnamedblk458__DOT__mode)) 
                          | ("W0SRC"s == unnamedblk456__DOT__unnamedblk457__DOT__unnamedblk458__DOT__mode)) 
                         | ("W0CRS"s == unnamedblk456__DOT__unnamedblk457__DOT__unnamedblk458__DOT__mode))) {
                        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1554);
                        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                            = __Vfunc_get__Vfuncout_1554;
                        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3724);
                        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                            = __Vtask_get_root__Vfuncout_3724;
                        __VlefCall_5__uvm_get_report_object 
                            = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
                        VL_NULL_CHECK(__VlefCall_5__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1782)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk456__DOT__unnamedblk457__DOT__unnamedblk458__DOT__unnamedblk459__DOT___local_report_object_);
                        VL_NULL_CHECK(unnamedblk456__DOT__unnamedblk457__DOT__unnamedblk458__DOT__unnamedblk459__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1782)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_6__get_report_verbosity_level);
                        __VlefLogAnd_8 = VL_LTES_III(32, 0U, __VlefCall_6__get_report_verbosity_level);
                        if (__VlefLogAnd_8) {
                            VL_NULL_CHECK(unnamedblk456__DOT__unnamedblk457__DOT__unnamedblk458__DOT__unnamedblk459__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1782)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_7__get_report_action);
                            __VlefLogAnd_8 = (0U != __VlefCall_7__get_report_action);
                        }
                        if (VL_UNLIKELY((__VlefLogAnd_8))) {
                            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_9__get_full_name);
                            __Vtask_uvm_report_warning__report_enabled_checked_3731 = 1U;
                            this->__Vtask_uvm_report_warning__context_name_3730 = ""s;
                            __Vtask_uvm_report_warning__line_3729 = 0x000006f6U;
                            this->__Vtask_uvm_report_warning__filename_3728 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh"s;
                            __Vtask_uvm_report_warning__verbosity_3727 = 0U;
                            this->__Vtask_uvm_report_warning__message_3726 
                                = VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(
                                                                    VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Reading field '"s, __VlefCall_9__get_full_name), "' will cause unintended side effects in adjoining "s), "Read-to-Clear or Read-to-Set fields in the same register"s));
                            this->__Vtask_uvm_report_warning__id_3725 = "RegModel"s;
                            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1555);
                            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                                = __Vfunc_get__Vfuncout_1555;
                            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3732);
                            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                                = __Vtask_get_root__Vfuncout_3732;
                            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_3725, this->__Vtask_uvm_report_warning__message_3726, __Vtask_uvm_report_warning__verbosity_3727, this->__Vtask_uvm_report_warning__filename_3728, __Vtask_uvm_report_warning__line_3729, this->__Vtask_uvm_report_warning__context_name_3730, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_3731));
                        }
                    }
                    __Vlabel1: ;
                }
                if ((unnamedblk456__DOT__unnamedblk457__DOT__i__Vloopsize 
                     <= unnamedblk456__DOT__fields.size())) {
                    unnamedblk456__DOT__unnamedblk457__DOT__i 
                        = ((::IData)(1U) + unnamedblk456__DOT__unnamedblk457__DOT__i);
                }
            }
        }
        __Vlabel0: ;
    }
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_is_indv_accessible(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ path, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> local_map, ::CData/*0:0*/ &is_indv_accessible__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_is_indv_accessible\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1556;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3733;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_3736;
    __Vtask_uvm_report_warning__verbosity_3736 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_3738;
    __Vtask_uvm_report_warning__line_3738 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_3740;
    __Vtask_uvm_report_warning__report_enabled_checked_3740 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1557;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3741;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1558;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3742;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_3745;
    __Vtask_uvm_report_warning__verbosity_3745 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_3747;
    __Vtask_uvm_report_warning__line_3747 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_3749;
    __Vtask_uvm_report_warning__report_enabled_checked_3749 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1559;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3750;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1560;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3751;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_3754;
    __Vtask_uvm_report_warning__verbosity_3754 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_3756;
    __Vtask_uvm_report_warning__line_3756 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_3758;
    __Vtask_uvm_report_warning__report_enabled_checked_3758 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1561;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3759;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1562;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3760;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_3763;
    __Vtask_uvm_report_warning__verbosity_3763 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_3765;
    __Vtask_uvm_report_warning__line_3765 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_3767;
    __Vtask_uvm_report_warning__report_enabled_checked_3767 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1563;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3768;
    ::IData/*31:0*/ __Vtask_get_n_bytes__Vfuncout_3769;
    __Vtask_get_n_bytes__Vfuncout_3769 = 0;
    ::IData/*31:0*/ __Vtask_get_lsb_pos__Vfuncout_3770;
    __Vtask_get_lsb_pos__Vfuncout_3770 = 0;
    ::IData/*31:0*/ __Vtask_get_n_bits__Vfuncout_3771;
    __Vtask_get_n_bits__Vfuncout_3771 = 0;
    ::IData/*31:0*/ __Vtask_get_lsb_pos__Vfuncout_3772;
    __Vtask_get_lsb_pos__Vfuncout_3772 = 0;
    ::IData/*31:0*/ __Vtask_get_n_bits__Vfuncout_3773;
    __Vtask_get_n_bits__Vfuncout_3773 = 0;
    ::IData/*31:0*/ __Vtask_get_lsb_pos__Vfuncout_3774;
    __Vtask_get_lsb_pos__Vfuncout_3774 = 0;
    ::IData/*31:0*/ __Vtask_get_n_bits__Vfuncout_3775;
    __Vtask_get_n_bits__Vfuncout_3775 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1564;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3776;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_3779;
    __Vtask_uvm_report_warning__verbosity_3779 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_3781;
    __Vtask_uvm_report_warning__line_3781 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_3783;
    __Vtask_uvm_report_warning__report_enabled_checked_3783 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1565;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3784;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_26__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_25;
    ::IData/*31:0*/ __VlefCall_24__get_report_action;
    ::IData/*31:0*/ __VlefCall_23__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_22__uvm_get_report_object;
    ::std::string __VlefCall_21__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_20;
    ::IData/*31:0*/ __VlefCall_19__get_report_action;
    ::IData/*31:0*/ __VlefCall_18__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_17__uvm_get_report_object;
    ::std::string __VlefCall_16__get_full_name;
    ::std::string __VlefCall_15__get_name;
    ::CData/*0:0*/ __VlefLogAnd_14;
    ::IData/*31:0*/ __VlefCall_13__get_report_action;
    ::IData/*31:0*/ __VlefCall_12__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_11__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_frontdoor> __VlefCall_10__get_frontdoor;
    ::std::string __VlefCall_9__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_8;
    ::IData/*31:0*/ __VlefCall_7__get_report_action;
    ::IData/*31:0*/ __VlefCall_6__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_5__uvm_get_report_object;
    ::std::string __VlefCall_4__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk460__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk461__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk462__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk463__DOT__system_map;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_adapter> unnamedblk463__DOT__adapter;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk463__DOT__unnamedblk464__DOT___local_report_object_;
    ::IData/*31:0*/ unnamedblk465__DOT__fld_idx;
    ::IData/*31:0*/ unnamedblk465__DOT__bus_width;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_field>> unnamedblk465__DOT__fields;
    ::IData/*31:0*/ unnamedblk465__DOT__unnamedblk466__DOT__prev_lsb;
    ::IData/*31:0*/ unnamedblk465__DOT__unnamedblk466__DOT__this_lsb;
    ::IData/*31:0*/ unnamedblk465__DOT__unnamedblk466__DOT__next_lsb;
    ::IData/*31:0*/ unnamedblk465__DOT__unnamedblk466__DOT__prev_sz;
    ::IData/*31:0*/ unnamedblk465__DOT__unnamedblk466__DOT__this_sz;
    ::IData/*31:0*/ unnamedblk465__DOT__unnamedblk466__DOT__bus_sz;
    ::IData/*31:0*/ unnamedblk465__DOT__unnamedblk466__DOT__unnamedblk467__DOT__i;
    unnamedblk465__DOT__unnamedblk466__DOT__unnamedblk467__DOT__i = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk468__DOT___local_report_object_;
    {
        is_indv_accessible__Vfuncrtn = 0U;
        if ((1U == path)) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1556);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1556;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3733);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_3733;
            __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1798)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk460__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk460__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1798)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_1__get_report_verbosity_level);
            __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
            if (__VlefLogAnd_3) {
                VL_NULL_CHECK(unnamedblk460__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1798)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_2__get_report_action);
                __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_3))) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                __Vtask_uvm_report_warning__report_enabled_checked_3740 = 1U;
                this->__Vtask_uvm_report_warning__context_name_3739 = ""s;
                __Vtask_uvm_report_warning__line_3738 = 0x00000706U;
                this->__Vtask_uvm_report_warning__filename_3737 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh"s;
                __Vtask_uvm_report_warning__verbosity_3736 = 0U;
                this->__Vtask_uvm_report_warning__message_3735 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("Individual BACKDOOR field access not available for field '"s, __VlefCall_4__get_full_name), "'. Accessing complete register instead."s));
                this->__Vtask_uvm_report_warning__id_3734 = "RegModel"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1557);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1557;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3741);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_3741;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_3734, this->__Vtask_uvm_report_warning__message_3735, __Vtask_uvm_report_warning__verbosity_3736, this->__Vtask_uvm_report_warning__filename_3737, __Vtask_uvm_report_warning__line_3738, this->__Vtask_uvm_report_warning__context_name_3739, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_3740));
            }
            is_indv_accessible__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        if ((1U & (~ (::IData)(this->__PVT__m_individually_accessible)))) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1558);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1558;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3742);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_3742;
            __VlefCall_5__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_5__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1805)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk461__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk461__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1805)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_6__get_report_verbosity_level);
            __VlefLogAnd_8 = VL_LTES_III(32, 0U, __VlefCall_6__get_report_verbosity_level);
            if (__VlefLogAnd_8) {
                VL_NULL_CHECK(unnamedblk461__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1805)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_7__get_report_action);
                __VlefLogAnd_8 = (0U != __VlefCall_7__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_8))) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_9__get_full_name);
                __Vtask_uvm_report_warning__report_enabled_checked_3749 = 1U;
                this->__Vtask_uvm_report_warning__context_name_3748 = ""s;
                __Vtask_uvm_report_warning__line_3747 = 0x0000070dU;
                this->__Vtask_uvm_report_warning__filename_3746 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh"s;
                __Vtask_uvm_report_warning__verbosity_3745 = 0U;
                this->__Vtask_uvm_report_warning__message_3744 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("Individual field access not available for field '"s, __VlefCall_9__get_full_name), "'. Accessing complete register instead."s));
                this->__Vtask_uvm_report_warning__id_3743 = "RegModel"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1559);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1559;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3750);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_3750;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_3743, this->__Vtask_uvm_report_warning__message_3744, __Vtask_uvm_report_warning__verbosity_3745, this->__Vtask_uvm_report_warning__filename_3746, __Vtask_uvm_report_warning__line_3747, this->__Vtask_uvm_report_warning__context_name_3748, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_3749));
            }
            is_indv_accessible__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__m_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1811)->__VnoInFunc_get_frontdoor(vlSymsp, local_map, __VlefCall_10__get_frontdoor);
        if ((VlNull{} != __VlefCall_10__get_frontdoor)) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1560);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1560;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3751);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_3751;
            __VlefCall_11__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_11__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1814)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk462__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk462__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1814)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_12__get_report_verbosity_level);
            __VlefLogAnd_14 = VL_LTES_III(32, 0U, __VlefCall_12__get_report_verbosity_level);
            if (__VlefLogAnd_14) {
                VL_NULL_CHECK(unnamedblk462__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1814)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_13__get_report_action);
                __VlefLogAnd_14 = (0U != __VlefCall_13__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_14))) {
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_15__get_name);
                VL_NULL_CHECK(this->__PVT__m_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1814)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_16__get_full_name);
                __Vtask_uvm_report_warning__report_enabled_checked_3758 = 1U;
                this->__Vtask_uvm_report_warning__context_name_3757 = ""s;
                __Vtask_uvm_report_warning__line_3756 = 0x00000716U;
                this->__Vtask_uvm_report_warning__filename_3755 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh"s;
                __Vtask_uvm_report_warning__verbosity_3754 = 0U;
                this->__Vtask_uvm_report_warning__message_3753 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Individual field access not available for field '"s, __VlefCall_15__get_name), "' because register '"s), __VlefCall_16__get_full_name), "' has a user-defined front-door. Accessing complete register instead."s));
                this->__Vtask_uvm_report_warning__id_3752 = "RegModel"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1561);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1561;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3759);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_3759;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_3752, this->__Vtask_uvm_report_warning__message_3753, __Vtask_uvm_report_warning__verbosity_3754, this->__Vtask_uvm_report_warning__filename_3755, __Vtask_uvm_report_warning__line_3756, this->__Vtask_uvm_report_warning__context_name_3757, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_3758));
            }
            is_indv_accessible__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(local_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1819)->__VnoInFunc_get_root_map(vlSymsp, unnamedblk463__DOT__system_map);
        VL_NULL_CHECK(unnamedblk463__DOT__system_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1820)->__VnoInFunc_get_adapter(vlSymsp, 1U, unnamedblk463__DOT__adapter);
        if (((VlNull{} != unnamedblk463__DOT__adapter) 
             && (1U & (~ VL_NULL_CHECK(unnamedblk463__DOT__adapter, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1821)
                       ->__PVT__supports_byte_enable)))) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1562);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1562;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3760);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_3760;
            __VlefCall_17__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_17__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1824)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk463__DOT__unnamedblk464__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk463__DOT__unnamedblk464__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1824)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_18__get_report_verbosity_level);
            __VlefLogAnd_20 = VL_LTES_III(32, 0U, __VlefCall_18__get_report_verbosity_level);
            if (__VlefLogAnd_20) {
                VL_NULL_CHECK(unnamedblk463__DOT__unnamedblk464__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1824)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_19__get_report_action);
                __VlefLogAnd_20 = (0U != __VlefCall_19__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_20))) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_21__get_full_name);
                __Vtask_uvm_report_warning__report_enabled_checked_3767 = 1U;
                this->__Vtask_uvm_report_warning__context_name_3766 = ""s;
                __Vtask_uvm_report_warning__line_3765 = 0x00000720U;
                this->__Vtask_uvm_report_warning__filename_3764 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh"s;
                __Vtask_uvm_report_warning__verbosity_3763 = 0U;
                this->__Vtask_uvm_report_warning__message_3762 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("Target bus does not support byte enable, field '"s, __VlefCall_21__get_full_name), ". Accessing complete register instead."s));
                this->__Vtask_uvm_report_warning__id_3761 = "RegModel"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1563);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1563;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3768);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_3768;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_3761, this->__Vtask_uvm_report_warning__message_3762, __Vtask_uvm_report_warning__verbosity_3763, this->__Vtask_uvm_report_warning__filename_3764, __Vtask_uvm_report_warning__line_3765, this->__Vtask_uvm_report_warning__context_name_3766, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_3767));
            }
            is_indv_accessible__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        unnamedblk465__DOT__fld_idx = 0U;
        VL_NULL_CHECK(local_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1831)->__VnoInFunc_get_n_bytes(vlSymsp, 1U, __Vtask_get_n_bytes__Vfuncout_3769);
        unnamedblk465__DOT__bus_width = __Vtask_get_n_bytes__Vfuncout_3769;
        unnamedblk465__DOT__fields.clear();
        VL_NULL_CHECK(this->__PVT__m_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1834)->__VnoInFunc_get_fields(vlSymsp, unnamedblk465__DOT__fields);
        if ((1U == unnamedblk465__DOT__fields.size())) {
            is_indv_accessible__Vfuncrtn = 1U;
            goto __Vlabel0;
        } else {
            unnamedblk465__DOT__unnamedblk466__DOT__prev_lsb = 0U;
            unnamedblk465__DOT__unnamedblk466__DOT__this_lsb = 0U;
            unnamedblk465__DOT__unnamedblk466__DOT__next_lsb = 0U;
            unnamedblk465__DOT__unnamedblk466__DOT__prev_sz = 0U;
            unnamedblk465__DOT__unnamedblk466__DOT__this_sz = 0U;
            unnamedblk465__DOT__unnamedblk466__DOT__bus_sz 
                = VL_MULS_III(32, (::IData)(8U), unnamedblk465__DOT__bus_width);
            {
                unnamedblk465__DOT__unnamedblk466__DOT__unnamedblk467__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk465__DOT__unnamedblk466__DOT__unnamedblk467__DOT__i, unnamedblk465__DOT__fields.size())) {
                    if ((unnamedblk465__DOT__fields.at(unnamedblk465__DOT__unnamedblk466__DOT__unnamedblk467__DOT__i) 
                         == ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_field>{this})) {
                        unnamedblk465__DOT__fld_idx 
                            = unnamedblk465__DOT__unnamedblk466__DOT__unnamedblk467__DOT__i;
                        goto __Vlabel1;
                    }
                    unnamedblk465__DOT__unnamedblk466__DOT__unnamedblk467__DOT__i 
                        = ((::IData)(1U) + unnamedblk465__DOT__unnamedblk466__DOT__unnamedblk467__DOT__i);
                }
                __Vlabel1: ;
            }
            VL_NULL_CHECK(unnamedblk465__DOT__fields.at(unnamedblk465__DOT__fld_idx), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1851)->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__Vfuncout_3770);
            unnamedblk465__DOT__unnamedblk466__DOT__this_lsb 
                = __Vtask_get_lsb_pos__Vfuncout_3770;
            VL_NULL_CHECK(unnamedblk465__DOT__fields.at(unnamedblk465__DOT__fld_idx), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1852)->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__Vfuncout_3771);
            unnamedblk465__DOT__unnamedblk466__DOT__this_sz 
                = __Vtask_get_n_bits__Vfuncout_3771;
            if (VL_LTS_III(32, 0U, unnamedblk465__DOT__fld_idx)) {
                VL_NULL_CHECK(unnamedblk465__DOT__fields.at(
                                                            (unnamedblk465__DOT__fld_idx 
                                                             - (::IData)(1U))), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1855)->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__Vfuncout_3772);
                unnamedblk465__DOT__unnamedblk466__DOT__prev_lsb 
                    = __Vtask_get_lsb_pos__Vfuncout_3772;
                VL_NULL_CHECK(unnamedblk465__DOT__fields.at(
                                                            (unnamedblk465__DOT__fld_idx 
                                                             - (::IData)(1U))), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1856)->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__Vfuncout_3773);
                unnamedblk465__DOT__unnamedblk466__DOT__prev_sz 
                    = __Vtask_get_n_bits__Vfuncout_3773;
            }
            if (VL_LTS_III(32, unnamedblk465__DOT__fld_idx, 
                           (unnamedblk465__DOT__fields.size() 
                            - (::IData)(1U)))) {
                VL_NULL_CHECK(unnamedblk465__DOT__fields.at(
                                                            ((::IData)(1U) 
                                                             + unnamedblk465__DOT__fld_idx)), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1860)->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__Vfuncout_3774);
                unnamedblk465__DOT__unnamedblk466__DOT__next_lsb 
                    = __Vtask_get_lsb_pos__Vfuncout_3774;
                VL_NULL_CHECK(unnamedblk465__DOT__fields.at(
                                                            ((::IData)(1U) 
                                                             + unnamedblk465__DOT__fld_idx)), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1861)->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__Vfuncout_3775);
            }
            if (((0U == unnamedblk465__DOT__fld_idx) 
                 & ((0U == VL_MODDIVS_III(32, unnamedblk465__DOT__unnamedblk466__DOT__next_lsb, unnamedblk465__DOT__unnamedblk466__DOT__bus_sz)) 
                    | VL_GTS_III(32, (unnamedblk465__DOT__unnamedblk466__DOT__next_lsb 
                                      - unnamedblk465__DOT__unnamedblk466__DOT__this_sz), 
                                 VL_MODDIVS_III(32, unnamedblk465__DOT__unnamedblk466__DOT__next_lsb, unnamedblk465__DOT__unnamedblk466__DOT__bus_sz))))) {
                is_indv_accessible__Vfuncrtn = 1U;
                goto __Vlabel0;
            } else if (((unnamedblk465__DOT__fld_idx 
                         == (unnamedblk465__DOT__fields.size() 
                             - (::IData)(1U))) & ((0U 
                                                   == 
                                                   VL_MODDIVS_III(32, unnamedblk465__DOT__unnamedblk466__DOT__this_lsb, unnamedblk465__DOT__unnamedblk466__DOT__bus_sz)) 
                                                  | VL_GTES_III(32, 
                                                                (unnamedblk465__DOT__unnamedblk466__DOT__this_lsb 
                                                                 - 
                                                                 (unnamedblk465__DOT__unnamedblk466__DOT__prev_lsb 
                                                                  + unnamedblk465__DOT__unnamedblk466__DOT__prev_sz)), 
                                                                VL_MODDIVS_III(32, unnamedblk465__DOT__unnamedblk466__DOT__this_lsb, unnamedblk465__DOT__unnamedblk466__DOT__bus_sz))))) {
                is_indv_accessible__Vfuncrtn = 1U;
                goto __Vlabel0;
            } else if ((0U == VL_MODDIVS_III(32, unnamedblk465__DOT__unnamedblk466__DOT__this_lsb, unnamedblk465__DOT__unnamedblk466__DOT__bus_sz))) {
                if (((0U == VL_MODDIVS_III(32, unnamedblk465__DOT__unnamedblk466__DOT__next_lsb, unnamedblk465__DOT__unnamedblk466__DOT__bus_sz)) 
                     | VL_GTES_III(32, (unnamedblk465__DOT__unnamedblk466__DOT__next_lsb 
                                        - (unnamedblk465__DOT__unnamedblk466__DOT__this_lsb 
                                           + unnamedblk465__DOT__unnamedblk466__DOT__this_sz)), 
                                   VL_MODDIVS_III(32, unnamedblk465__DOT__unnamedblk466__DOT__next_lsb, unnamedblk465__DOT__unnamedblk466__DOT__bus_sz)))) {
                    is_indv_accessible__Vfuncrtn = 1U;
                    goto __Vlabel0;
                }
            } else if ((VL_GTES_III(32, (unnamedblk465__DOT__unnamedblk466__DOT__next_lsb 
                                         - (unnamedblk465__DOT__unnamedblk466__DOT__this_lsb 
                                            + unnamedblk465__DOT__unnamedblk466__DOT__this_sz)), 
                                    VL_MODDIVS_III(32, unnamedblk465__DOT__unnamedblk466__DOT__next_lsb, unnamedblk465__DOT__unnamedblk466__DOT__bus_sz)) 
                        & VL_GTES_III(32, (unnamedblk465__DOT__unnamedblk466__DOT__this_lsb 
                                           - (unnamedblk465__DOT__unnamedblk466__DOT__prev_lsb 
                                              + unnamedblk465__DOT__unnamedblk466__DOT__prev_sz)), 
                                      VL_MODDIVS_III(32, unnamedblk465__DOT__unnamedblk466__DOT__this_lsb, unnamedblk465__DOT__unnamedblk466__DOT__bus_sz)))) {
                is_indv_accessible__Vfuncrtn = 1U;
                goto __Vlabel0;
            }
        }
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1564);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1564;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3776);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
            = __Vtask_get_root__Vfuncout_3776;
        __VlefCall_22__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
        VL_NULL_CHECK(__VlefCall_22__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1907)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk468__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk468__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1907)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_23__get_report_verbosity_level);
        __VlefLogAnd_25 = VL_LTES_III(32, 0U, __VlefCall_23__get_report_verbosity_level);
        if (__VlefLogAnd_25) {
            VL_NULL_CHECK(unnamedblk468__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1907)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_24__get_report_action);
            __VlefLogAnd_25 = (0U != __VlefCall_24__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_25))) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_26__get_full_name);
            __Vtask_uvm_report_warning__report_enabled_checked_3783 = 1U;
            this->__Vtask_uvm_report_warning__context_name_3782 = ""s;
            __Vtask_uvm_report_warning__line_3781 = 0x00000773U;
            this->__Vtask_uvm_report_warning__filename_3780 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh"s;
            __Vtask_uvm_report_warning__verbosity_3779 = 0U;
            this->__Vtask_uvm_report_warning__message_3778 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Field '"s, __VlefCall_26__get_full_name), "' is not the only field within the entire bus width. "s), "Individual field access will not be available. "s), "Accessing complete register instead."s));
            this->__Vtask_uvm_report_warning__id_3777 = "RegModel"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1565);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1565;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3784);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__Vfuncout_3784;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_3777, this->__Vtask_uvm_report_warning__message_3778, __Vtask_uvm_report_warning__verbosity_3779, this->__Vtask_uvm_report_warning__filename_3780, __Vtask_uvm_report_warning__line_3781, this->__Vtask_uvm_report_warning__context_name_3782, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_3783));
        }
        is_indv_accessible__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

extern const ::VlUnpacked<::std::string, 4> Vtb_top__ConstPool__CONSARRAY_10;

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_poke(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &status, ::QData/*63:0*/ value, ::std::string kind, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> parent, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> extension, ::std::string fname, ::IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_poke\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1566;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3785;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_3788;
    __Vtask_uvm_report_warning__verbosity_3788 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_3790;
    __Vtask_uvm_report_warning__line_3790 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_3792;
    __Vtask_uvm_report_warning__report_enabled_checked_3792 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1567;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3793;
    ::IData/*31:0*/ __Vtask_peek__status_3794;
    __Vtask_peek__status_3794 = 0;
    ::QData/*63:0*/ __Vtask_peek__value_3795;
    __Vtask_peek__value_3795 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1568;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3796;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_3799;
    __Vtask_uvm_report_error__verbosity_3799 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_3801;
    __Vtask_uvm_report_error__line_3801 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3803;
    __Vtask_uvm_report_error__report_enabled_checked_3803 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1569;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3804;
    ::IData/*31:0*/ __Vtask_poke__status_3805;
    __Vtask_poke__status_3805 = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::std::string __VlefCall_9__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_8;
    ::IData/*31:0*/ __VlefCall_7__get_report_action;
    ::IData/*31:0*/ __VlefCall_6__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_5__uvm_get_report_object;
    ::std::string __VlefCall_4__get_name;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk469__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk470__DOT___local_report_object_;
    ::QData/*63:0*/ tmp;
    {
        status = 0U;
        tmp = 0ULL;
        this->__PVT__m_fname = fname;
        this->__PVT__m_lineno = lineno;
        if ((0U != VL_SHIFTR_QQI(64,64,32, value, this->__PVT__m_size))) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1566);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1566;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3785);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_3785;
            __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1931)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk469__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk469__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1931)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_1__get_report_verbosity_level);
            __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
            if (__VlefLogAnd_3) {
                VL_NULL_CHECK(unnamedblk469__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1931)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_2__get_report_action);
                __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_3))) {
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
                __Vtask_uvm_report_warning__report_enabled_checked_3792 = 1U;
                this->__Vtask_uvm_report_warning__context_name_3791 = ""s;
                __Vtask_uvm_report_warning__line_3790 = 0x0000078bU;
                this->__Vtask_uvm_report_warning__filename_3789 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh"s;
                __Vtask_uvm_report_warning__verbosity_3788 = 0U;
                this->__Vtask_uvm_report_warning__message_3787 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("uvm_reg_field::poke(): Value exceeds size of field '"s, __VlefCall_4__get_name), "'"s));
                this->__Vtask_uvm_report_warning__id_3786 = "RegModel"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1567);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1567;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3793);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_3793;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_3786, this->__Vtask_uvm_report_warning__message_3787, __Vtask_uvm_report_warning__verbosity_3788, this->__Vtask_uvm_report_warning__filename_3789, __Vtask_uvm_report_warning__line_3790, this->__Vtask_uvm_report_warning__context_name_3791, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_3792));
            }
            value = (value & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
                              - 1ULL));
        }
        co_await VL_NULL_CHECK(this->__PVT__m_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1936)->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 1U);
        VL_NULL_CHECK(this->__PVT__m_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1937)->__PVT__m_is_locked_by_field = 1U;
        tmp = 0ULL;
        co_await VL_NULL_CHECK(this->__PVT__m_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1942)->__VnoInFunc_peek(vlSymsp, __Vtask_peek__status_3794, __Vtask_peek__value_3795, kind, parent, extension, fname, lineno);
        status = __Vtask_peek__status_3794;
        tmp = __Vtask_peek__value_3795;
        if ((1U == status)) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1568);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1568;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3796);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_3796;
            __VlefCall_5__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_5__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1946)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk470__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk470__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1946)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_6__get_report_verbosity_level);
            __VlefLogAnd_8 = VL_LTES_III(32, 0U, __VlefCall_6__get_report_verbosity_level);
            if (__VlefLogAnd_8) {
                VL_NULL_CHECK(unnamedblk470__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1946)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_7__get_report_action);
                __VlefLogAnd_8 = (0U != __VlefCall_7__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_8))) {
                VL_NULL_CHECK(this->__PVT__m_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1946)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_9__get_full_name);
                __Vtask_uvm_report_error__report_enabled_checked_3803 = 1U;
                this->__Vtask_uvm_report_error__context_name_3802 = ""s;
                __Vtask_uvm_report_error__line_3801 = 0x0000079aU;
                this->__Vtask_uvm_report_error__filename_3800 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh"s;
                __Vtask_uvm_report_error__verbosity_3799 = 0U;
                this->__Vtask_uvm_report_error__message_3798 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN("uvm_reg_field::poke(): Peek of register '"s, __VlefCall_9__get_full_name), "' returned status "s), 
                                                        ((2U 
                                                          < status)
                                                          ? ""s
                                                          : Vtb_top__ConstPool__CONSARRAY_10
                                                         [
                                                         (3U 
                                                          & status)])));
                this->__Vtask_uvm_report_error__id_3797 = "RegModel"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1569);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1569;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3804);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_3804;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_3797, this->__Vtask_uvm_report_error__message_3798, __Vtask_uvm_report_error__verbosity_3799, this->__Vtask_uvm_report_error__filename_3800, __Vtask_uvm_report_error__line_3801, this->__Vtask_uvm_report_error__context_name_3802, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3803));
            }
            co_await VL_NULL_CHECK(this->__PVT__m_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1947)->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
            VL_NULL_CHECK(this->__PVT__m_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1948)->__PVT__m_is_locked_by_field = 0U;
            goto __Vlabel0;
        }
        tmp = (tmp & (~ VL_SHIFTL_QQI(64,64,32, (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
                                                 - 1ULL), this->__PVT__m_lsb)));
        tmp = (tmp | VL_SHIFTL_QQI(64,64,32, value, this->__PVT__m_lsb));
        co_await VL_NULL_CHECK(this->__PVT__m_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1955)->__VnoInFunc_poke(vlSymsp, __Vtask_poke__status_3805, tmp, kind, parent, extension, fname, lineno);
        status = __Vtask_poke__status_3805;
        co_await VL_NULL_CHECK(this->__PVT__m_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1957)->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
        VL_NULL_CHECK(this->__PVT__m_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1958)->__PVT__m_is_locked_by_field = 0U;
        __Vlabel0: ;
    }
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_peek(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &status, ::QData/*63:0*/ &value, ::std::string kind, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> parent, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> extension, ::std::string fname, ::IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_peek\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_peek__status_3806;
    __Vtask_peek__status_3806 = 0;
    ::QData/*63:0*/ __Vtask_peek__value_3807;
    __Vtask_peek__value_3807 = 0;
    // Body
    VL_KEEP_THIS;
    ::QData/*63:0*/ reg_value;
    status = 0U;
    value = 0ULL;
    reg_value = 0ULL;
    this->__PVT__m_fname = fname;
    this->__PVT__m_lineno = lineno;
    co_await VL_NULL_CHECK(this->__PVT__m_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1976)->__VnoInFunc_peek(vlSymsp, __Vtask_peek__status_3806, __Vtask_peek__value_3807, kind, parent, extension, fname, lineno);
    status = __Vtask_peek__status_3806;
    reg_value = __Vtask_peek__value_3807;
    value = (VL_SHIFTR_QQI(64,64,32, reg_value, this->__PVT__m_lsb) 
             & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
                - 1ULL));
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_mirror(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &status, ::IData/*31:0*/ check, ::IData/*31:0*/ path, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> parent, ::IData/*31:0*/ prior, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> extension, ::std::string fname, ::IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_mirror\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_mirror__status_3808;
    __Vtask_mirror__status_3808 = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    status = 0U;
    this->__PVT__m_fname = fname;
    this->__PVT__m_lineno = lineno;
    co_await VL_NULL_CHECK(this->__PVT__m_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 1995)->__VnoInFunc_mirror(vlProcess, vlSymsp, __Vtask_mirror__status_3808, check, path, map, parent, prior, extension, fname, lineno);
    status = __Vtask_mirror__status_3808;
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_set_compare(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ check) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_set_compare\n"); );
    // Body
    this->__PVT__m_check = check;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_compare(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_compare__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_compare\n"); );
    // Body
    get_compare__Vfuncrtn = this->__PVT__m_check;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_pre_randomize(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_pre_randomize\n"); );
    // Body
    this->__PVT__value = this->__PVT__m_desired;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_post_randomize(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_post_randomize\n"); );
    // Body
    this->__PVT__m_desired = this->__PVT__value;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_print\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_2__convert2string;
    ::std::string __VlefCall_1__get_type_name;
    ::std::string __VlefCall_0__get_name;
    this->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
    this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_1__get_type_name);
    this->__VnoInFunc_convert2string(vlProcess, vlSymsp, __VlefCall_2__convert2string);
    VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 2033)->__VnoInFunc_print_generic(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_name), 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__get_type_name), 0xffffffffU, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_2__convert2string), 0x2eU);
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_convert2string\n"); );
    // Locals
    ::std::string __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCall_6__get_lsb_pos;
    ::IData/*31:0*/ __VlefCall_5__get_n_bits;
    ::IData/*31:0*/ __VlefCall_4__get_lsb_pos;
    ::std::string __VlefCall_3__get_name;
    ::std::string __VlefCall_2__get_access;
    ::IData/*31:0*/ __VlefCall_1__get_n_bits;
    ::IData/*31:0*/ __VlefCall_0__get_n_bits;
    convert2string__Vfuncrtn = ""s;
    ::std::string fmt;
    ::std::string res_str;
    ::std::string prefix;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg> reg_;
    fmt = ""s;
    res_str = ""s;
    prefix = ""s;
    this->__VnoInFunc_get_register(vlSymsp, reg_);
    this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_0__get_n_bits);
    this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_1__get_n_bits);
    VL_SFORMAT_NX(fmt,"%0d'h%%%0dh",2, '#',32,__VlefCall_0__get_n_bits
                  , '#',32,((::IData)(1U) + ((__VlefCall_1__get_n_bits 
                                              - (::IData)(1U)) 
                                             >> 2U)));
    this->__VnoInFunc_get_access(vlProcess, vlSymsp, VlNull{}, __VlefCall_2__get_access);
    VL_NULL_CHECK(reg_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 2051)->__VnoInFunc_get_name(vlSymsp, __VlefCall_3__get_name);
    this->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_4__get_lsb_pos);
    this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_5__get_n_bits);
    this->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_6__get_lsb_pos);
    __Vtemp_1 = ((this->__PVT__m_desired != this->__PVT__m_mirrored)
                  ? VL_SFORMATF_N_NX(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(" (Mirror: "s, fmt), ")"s),3, 'M',vlSymsp->name(),"uvm_pkg.uvm_reg_field.convert2string", 'T',-9
                                     , '#',64,this->__PVT__m_mirrored) 
                  : ""s);
    VL_SFORMAT_NX(convert2string__Vfuncrtn,VL_CONCATN_NNN(
                                                          VL_CONCATN_NNN("%s %s %s[%0d:%0d]="s, fmt), "%s"s),9, 'M',vlSymsp->name(),"uvm_pkg.uvm_reg_field.convert2string", 'T',-9
                  , 'S',&(prefix), 'S',&(__VlefCall_2__get_access)
                  , 'S',&(__VlefCall_3__get_name), '#',32,
                  ((__VlefCall_4__get_lsb_pos + __VlefCall_5__get_n_bits) 
                   - (::IData)(1U)), '#',32,__VlefCall_6__get_lsb_pos
                  , '#',64,this->__PVT__m_desired, 'S',&(__Vtemp_1));
    if (this->__PVT__m_read_in_progress) {
        if (((""s != this->__PVT__m_fname) & (0U != this->__PVT__m_lineno))) {
            VL_SFORMAT_NX(res_str," from %s:%0d",2, 'S',&(this->__PVT__m_fname)
                          , '~',32,this->__PVT__m_lineno);
        }
        convert2string__Vfuncrtn = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                                 VL_CONCATN_NNN(convert2string__Vfuncrtn, "\n"s), "currently being read"s), res_str);
    }
    if (this->__PVT__m_write_in_progress) {
        if (((""s != this->__PVT__m_fname) & (0U != this->__PVT__m_lineno))) {
            VL_SFORMAT_NX(res_str," from %s:%0d",2, 'S',&(this->__PVT__m_fname)
                          , '~',32,this->__PVT__m_lineno);
        }
        convert2string__Vfuncrtn = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                                 VL_CONCATN_NNN(convert2string__Vfuncrtn, "\n"s), res_str), "currently being written"s);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_clone(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_clone\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1570;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3809;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk471__DOT___local_report_object_;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1570);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1570;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3809);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
        = __Vtask_get_root__Vfuncout_3809;
    __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
    VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 2079)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk471__DOT___local_report_object_);
    VL_NULL_CHECK(unnamedblk471__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 2079)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 3U, "RegModel"s, __VlefCall_1__get_report_verbosity_level);
    __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
    if (__VlefLogAnd_3) {
        VL_NULL_CHECK(unnamedblk471__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 2079)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 3U, "RegModel"s, __VlefCall_2__get_report_action);
        __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
    }
    if (VL_UNLIKELY((__VlefLogAnd_3))) {
        vlSymsp->vlInst.TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, "RegModel field cannot be cloned"s, 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh"s, 0x0000081fU, ""s, 1U);
    }
    clone__Vfuncrtn = VlNull{};
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_copy\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1571;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3810;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_3813;
    __Vtask_uvm_report_warning__verbosity_3813 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_3815;
    __Vtask_uvm_report_warning__line_3815 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_3817;
    __Vtask_uvm_report_warning__report_enabled_checked_3817 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1572;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3818;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk472__DOT___local_report_object_;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1571);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1571;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3810);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
        = __Vtask_get_root__Vfuncout_3810;
    __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
    VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 2086)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk472__DOT___local_report_object_);
    VL_NULL_CHECK(unnamedblk472__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 2086)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_1__get_report_verbosity_level);
    __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
    if (__VlefLogAnd_3) {
        VL_NULL_CHECK(unnamedblk472__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 2086)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_2__get_report_action);
        __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
    }
    if (VL_UNLIKELY((__VlefLogAnd_3))) {
        __Vtask_uvm_report_warning__report_enabled_checked_3817 = 1U;
        this->__Vtask_uvm_report_warning__context_name_3816 = ""s;
        __Vtask_uvm_report_warning__line_3815 = 0x00000826U;
        this->__Vtask_uvm_report_warning__filename_3814 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh"s;
        __Vtask_uvm_report_warning__verbosity_3813 = 0U;
        this->__Vtask_uvm_report_warning__message_3812 = "RegModel field copy not yet implemented"s;
        this->__Vtask_uvm_report_warning__id_3811 = "RegModel"s;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1572);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1572;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3818);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__Vfuncout_3818;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_3811, this->__Vtask_uvm_report_warning__message_3812, __Vtask_uvm_report_warning__verbosity_3813, this->__Vtask_uvm_report_warning__filename_3814, __Vtask_uvm_report_warning__line_3815, this->__Vtask_uvm_report_warning__context_name_3816, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_3817));
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_compare(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> rhs, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_comparer> comparer, ::CData/*0:0*/ &do_compare__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_compare\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1573;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3819;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_3822;
    __Vtask_uvm_report_warning__verbosity_3822 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_3824;
    __Vtask_uvm_report_warning__line_3824 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_3826;
    __Vtask_uvm_report_warning__report_enabled_checked_3826 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1574;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3827;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk473__DOT___local_report_object_;
    do_compare__Vfuncrtn = 0U;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1573);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1573;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3819);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
        = __Vtask_get_root__Vfuncout_3819;
    __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
    VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 2095)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk473__DOT___local_report_object_);
    VL_NULL_CHECK(unnamedblk473__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 2095)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_1__get_report_verbosity_level);
    __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
    if (__VlefLogAnd_3) {
        VL_NULL_CHECK(unnamedblk473__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 2095)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_2__get_report_action);
        __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
    }
    if (VL_UNLIKELY((__VlefLogAnd_3))) {
        __Vtask_uvm_report_warning__report_enabled_checked_3826 = 1U;
        this->__Vtask_uvm_report_warning__context_name_3825 = ""s;
        __Vtask_uvm_report_warning__line_3824 = 0x0000082fU;
        this->__Vtask_uvm_report_warning__filename_3823 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh"s;
        __Vtask_uvm_report_warning__verbosity_3822 = 0U;
        this->__Vtask_uvm_report_warning__message_3821 = "RegModel field compare not yet implemented"s;
        this->__Vtask_uvm_report_warning__id_3820 = "RegModel"s;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1574);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1574;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3827);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__Vfuncout_3827;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_3820, this->__Vtask_uvm_report_warning__message_3821, __Vtask_uvm_report_warning__verbosity_3822, this->__Vtask_uvm_report_warning__filename_3823, __Vtask_uvm_report_warning__line_3824, this->__Vtask_uvm_report_warning__context_name_3825, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_3826));
    }
    do_compare__Vfuncrtn = 0U;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_pack(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_pack\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1575;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3828;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_3831;
    __Vtask_uvm_report_warning__verbosity_3831 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_3833;
    __Vtask_uvm_report_warning__line_3833 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_3835;
    __Vtask_uvm_report_warning__report_enabled_checked_3835 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1576;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3836;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk474__DOT___local_report_object_;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1575);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1575;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3828);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
        = __Vtask_get_root__Vfuncout_3828;
    __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
    VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 2104)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk474__DOT___local_report_object_);
    VL_NULL_CHECK(unnamedblk474__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 2104)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_1__get_report_verbosity_level);
    __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
    if (__VlefLogAnd_3) {
        VL_NULL_CHECK(unnamedblk474__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 2104)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_2__get_report_action);
        __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
    }
    if (VL_UNLIKELY((__VlefLogAnd_3))) {
        __Vtask_uvm_report_warning__report_enabled_checked_3835 = 1U;
        this->__Vtask_uvm_report_warning__context_name_3834 = ""s;
        __Vtask_uvm_report_warning__line_3833 = 0x00000838U;
        this->__Vtask_uvm_report_warning__filename_3832 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh"s;
        __Vtask_uvm_report_warning__verbosity_3831 = 0U;
        this->__Vtask_uvm_report_warning__message_3830 = "RegModel field cannot be packed"s;
        this->__Vtask_uvm_report_warning__id_3829 = "RegModel"s;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1576);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1576;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3836);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__Vfuncout_3836;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_3829, this->__Vtask_uvm_report_warning__message_3830, __Vtask_uvm_report_warning__verbosity_3831, this->__Vtask_uvm_report_warning__filename_3832, __Vtask_uvm_report_warning__line_3833, this->__Vtask_uvm_report_warning__context_name_3834, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_3835));
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_unpack(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_unpack\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1577;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3837;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_3840;
    __Vtask_uvm_report_warning__verbosity_3840 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_3842;
    __Vtask_uvm_report_warning__line_3842 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_3844;
    __Vtask_uvm_report_warning__report_enabled_checked_3844 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1578;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3845;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk475__DOT___local_report_object_;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1577);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1577;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3837);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
        = __Vtask_get_root__Vfuncout_3837;
    __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
    VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 2111)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk475__DOT___local_report_object_);
    VL_NULL_CHECK(unnamedblk475__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 2111)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_1__get_report_verbosity_level);
    __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
    if (__VlefLogAnd_3) {
        VL_NULL_CHECK(unnamedblk475__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 2111)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_2__get_report_action);
        __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
    }
    if (VL_UNLIKELY((__VlefLogAnd_3))) {
        __Vtask_uvm_report_warning__report_enabled_checked_3844 = 1U;
        this->__Vtask_uvm_report_warning__context_name_3843 = ""s;
        __Vtask_uvm_report_warning__line_3842 = 0x0000083fU;
        this->__Vtask_uvm_report_warning__filename_3841 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh"s;
        __Vtask_uvm_report_warning__verbosity_3840 = 0U;
        this->__Vtask_uvm_report_warning__message_3839 = "RegModel field cannot be unpacked"s;
        this->__Vtask_uvm_report_warning__id_3838 = "RegModel"s;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1578);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1578;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3845);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__Vfuncout_3845;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_3838, this->__Vtask_uvm_report_warning__message_3839, __Vtask_uvm_report_warning__verbosity_3840, this->__Vtask_uvm_report_warning__filename_3841, __Vtask_uvm_report_warning__line_3842, this->__Vtask_uvm_report_warning__context_name_3843, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_3844));
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    {
        // Inlined CFunc: __VnoInFunc_pre_randomize
        this->__PVT__value = this->__PVT__m_desired;
    }
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
    {
        // Inlined CFunc: __VnoInFunc_post_randomize
        this->__PVT__m_desired = this->__PVT__value;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_uvm_reg_field_valid_setup_constraint(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_uvm_reg_field_valid_setup_constraint\n"); );
    // Locals
    ::std::string __Vtemp_1;
    ::std::string __Vtemp_2;
    ::std::string __Vtemp_3;
    ::std::string __Vtemp_4;
    // Body
    __Vtemp_1 = (Vtb_top_uvm_pkg__03a__03auvm_void::__PVT____Vrandmode.at(0U)
                  ? "value"s : VL_SFORMATF_N_NX("#x%x",1
                                                , '#',64,this->__PVT__value) );
    VL_SFORMAT_NX(__Vtemp_2,"#x%x",1, '#',64,VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size));
    VL_SFORMAT_NX(__Vtemp_3,"#b%b",1, '#',1,(0x00000040U 
                                             > this->__PVT__m_size));
    VL_SFORMAT_NX(__Vtemp_4,"(__Vbv (bvult %s %s))",2
                  , 'S',&(__Vtemp_1), 'S',&(__Vtemp_2));
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.hard(VL_SFORMATF_N_NX("(__Vbv (=> (__Vbool %s) (__Vbool %s)))",2
                                                                               , 'S',&(__Vtemp_3)
                                                                               , 'S',&(__Vtemp_4)) , "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_field.svh", 0x00000050U, 
                                                              "      if (64 > m_size) {");
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc___Vsetup_constraints\n"); );
    // Body
    this->__VnoInFunc_uvm_reg_field_valid_setup_constraint(vlSymsp);
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc___VupdateRandVars\n"); );
    // Body
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.update_var(this->__PVT__value, 
                                                                    "value");
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_field::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_field::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__value = 0;
    __PVT__m_mirrored = 0;
    __PVT__m_desired = 0;
    __PVT__m_lsb = 0;
    __PVT__m_size = 0;
    __PVT__m_volatile = 0;
    __PVT__m_reset.atDefault() = 0;
    __PVT__m_written = 0;
    __PVT__m_read_in_progress = 0;
    __PVT__m_write_in_progress = 0;
    __PVT__m_lineno = 0;
    __PVT__m_cover_on = 0;
    __PVT__m_individually_accessible = 0;
    __PVT__m_check = 0;
}

Vtb_top_uvm_pkg__03a__03auvm_reg_field::~Vtb_top_uvm_pkg__03a__03auvm_reg_field() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_field::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_reg_field::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_field::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_reg_field::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_field::to_string_middle\n"); );
    // Body
    std::string out;
    out += "value:" + VL_TO_STRING(__PVT__value);
    out += ", m_mirrored:" + VL_TO_STRING(__PVT__m_mirrored);
    out += ", m_desired:" + VL_TO_STRING(__PVT__m_desired);
    out += ", m_access:" + VL_TO_STRING(__PVT__m_access);
    out += ", m_parent:" + VL_TO_STRING(__PVT__m_parent);
    out += ", m_lsb:" + VL_TO_STRING(__PVT__m_lsb);
    out += ", m_size:" + VL_TO_STRING(__PVT__m_size);
    out += ", m_volatile:" + VL_TO_STRING(__PVT__m_volatile);
    out += ", m_reset:" + VL_TO_STRING(__PVT__m_reset);
    out += ", m_written:" + VL_TO_STRING(__PVT__m_written);
    out += ", m_read_in_progress:" + VL_TO_STRING(__PVT__m_read_in_progress);
    out += ", m_write_in_progress:" + VL_TO_STRING(__PVT__m_write_in_progress);
    out += ", m_fname:" + VL_TO_STRING(__PVT__m_fname);
    out += ", m_lineno:" + VL_TO_STRING(__PVT__m_lineno);
    out += ", m_cover_on:" + VL_TO_STRING(__PVT__m_cover_on);
    out += ", m_individually_accessible:" + VL_TO_STRING(__PVT__m_individually_accessible);
    out += ", m_check:" + VL_TO_STRING(__PVT__m_check);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
