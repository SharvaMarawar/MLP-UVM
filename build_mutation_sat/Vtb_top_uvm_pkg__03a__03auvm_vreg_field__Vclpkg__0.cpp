// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_registry__pif56357fd> __Vfunc_get__Vfuncout_1582;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pif56357fd__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1582);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_1582;
}

void Vtb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_vreg_field> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_vreg_field, vlProcess, vlSymsp, "uvm_vreg_field"s);
    } else {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_vreg_field, vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vtb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_vreg_field"s;
}

void Vtb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_pre_write(Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ idx, ::QData/*63:0*/ &wdat, ::IData/*31:0*/ &path, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> &map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_pre_write\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_post_write(Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ idx, ::QData/*63:0*/ wdat, ::IData/*31:0*/ path, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::IData/*31:0*/ &status) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_post_write\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_pre_read(Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ idx, ::IData/*31:0*/ &path, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> &map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_pre_read\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_post_read(Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ idx, ::QData/*63:0*/ &rdat, ::IData/*31:0*/ &path, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> &map, ::IData/*31:0*/ &status) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_post_read\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_vreg_field::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg_field::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void Vtb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_full_name(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_full_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_full_name\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_1__get_name;
    ::std::string __VlefCall_0__get_full_name;
    get_full_name__Vfuncrtn = ""s;
    VL_NULL_CHECK(this->__PVT__parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 349)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
    get_full_name__Vfuncrtn = VL_CONCATN_NNN(VL_CONCATN_NNN(__VlefCall_0__get_full_name, "."s), __VlefCall_1__get_name);
}

void Vtb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_register(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_vreg> &get_register__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_register\n"); );
    // Body
    get_register__Vfuncrtn = this->__PVT__parent;
}

void Vtb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_parent(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_vreg> &get_parent__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_parent\n"); );
    // Body
    get_parent__Vfuncrtn = this->__PVT__parent;
}

void Vtb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_lsb_pos_in_register(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_lsb_pos_in_register__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_lsb_pos_in_register\n"); );
    // Body
    get_lsb_pos_in_register__Vfuncrtn = this->__PVT__lsb;
}

void Vtb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_n_bits(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_n_bits__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_n_bits\n"); );
    // Body
    get_n_bits__Vfuncrtn = this->__PVT__size;
}

void Vtb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_access(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::std::string &get_access__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_access\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1583;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3871;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_3874;
    __Vtask_uvm_report_error__verbosity_3874 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_3876;
    __Vtask_uvm_report_error__line_3876 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3878;
    __Vtask_uvm_report_error__report_enabled_checked_3878 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1584;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3879;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_5__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_4;
    ::IData/*31:0*/ __VlefCall_3__get_report_action;
    ::IData/*31:0*/ __VlefCall_2__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_1__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_mem> __VlefCall_0__get_memory;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk478__DOT___local_report_object_;
    {
        get_access__Vfuncrtn = ""s;
        VL_NULL_CHECK(this->__PVT__parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 375)->__VnoInFunc_get_memory(vlSymsp, __VlefCall_0__get_memory);
        if ((VlNull{} == __VlefCall_0__get_memory)) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1583);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1583;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3871);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_3871;
            __VlefCall_1__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_1__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 377)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk478__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk478__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 377)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_2__get_report_verbosity_level);
            __VlefLogAnd_4 = VL_LTES_III(32, 0U, __VlefCall_2__get_report_verbosity_level);
            if (__VlefLogAnd_4) {
                VL_NULL_CHECK(unnamedblk478__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 377)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_3__get_report_action);
                __VlefLogAnd_4 = (0U != __VlefCall_3__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_4))) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
                __Vtask_uvm_report_error__report_enabled_checked_3878 = 1U;
                this->__Vtask_uvm_report_error__context_name_3877 = ""s;
                __Vtask_uvm_report_error__line_3876 = 0x00000179U;
                this->__Vtask_uvm_report_error__filename_3875 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh"s;
                __Vtask_uvm_report_error__verbosity_3874 = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__message_3873
                              ,"Cannot call uvm_vreg_field::get_rights() on unimplemented virtual field \"%s\"",1
                              , 'S',&(__VlefCall_5__get_full_name));
                this->__Vtask_uvm_report_error__id_3872 = "RegModel"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1584);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1584;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3879);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_3879;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_3872, this->__Vtask_uvm_report_error__message_3873, __Vtask_uvm_report_error__verbosity_3874, this->__Vtask_uvm_report_error__filename_3875, __Vtask_uvm_report_error__line_3876, this->__Vtask_uvm_report_error__context_name_3877, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3878));
            }
            get_access__Vfuncrtn = "RW"s;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 381)->__VnoInFunc_get_access(vlSymsp, map, get_access__Vfuncrtn);
        __Vlabel0: ;
    }
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_write(Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ idx, ::IData/*31:0*/ &status, ::QData/*63:0*/ value, ::IData/*31:0*/ path, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> parent, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> extension, ::std::string fname, ::IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_write\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1585;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3880;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_3883;
    __Vtask_uvm_report_error__verbosity_3883 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_3885;
    __Vtask_uvm_report_error__line_3885 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3887;
    __Vtask_uvm_report_error__report_enabled_checked_3887 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1586;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3888;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1587;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3889;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_3892;
    __Vtask_uvm_report_warning__verbosity_3892 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_3894;
    __Vtask_uvm_report_warning__line_3894 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_3896;
    __Vtask_uvm_report_warning__report_enabled_checked_3896 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1588;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3897;
    ::IData/*31:0*/ __Vfunc_get_lsb_pos_in_register__Vfuncout_1589;
    __Vfunc_get_lsb_pos_in_register__Vfuncout_1589 = 0;
    ::IData/*31:0*/ __Vtask_read__status_3898;
    __Vtask_read__status_3898 = 0;
    ::QData/*63:0*/ __Vtask_read__value_3899;
    __Vtask_read__value_3899 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1590;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3900;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_3903;
    __Vtask_uvm_report_error__verbosity_3903 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_3905;
    __Vtask_uvm_report_error__line_3905 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3907;
    __Vtask_uvm_report_error__report_enabled_checked_3907 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1591;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3908;
    ::IData/*31:0*/ __Vtask_read__status_3909;
    __Vtask_read__status_3909 = 0;
    ::QData/*63:0*/ __Vtask_read__value_3910;
    __Vtask_read__value_3910 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1592;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3911;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_3914;
    __Vtask_uvm_report_error__verbosity_3914 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_3916;
    __Vtask_uvm_report_error__line_3916 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3918;
    __Vtask_uvm_report_error__report_enabled_checked_3918 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1593;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3919;
    ::IData/*31:0*/ __Vtask_write__status_3920;
    __Vtask_write__status_3920 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1594;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3921;
    ::IData/*31:0*/ __Vtask_uvm_report_info__verbosity_3924;
    __Vtask_uvm_report_info__verbosity_3924 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__line_3926;
    __Vtask_uvm_report_info__line_3926 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_info__report_enabled_checked_3928;
    __Vtask_uvm_report_info__report_enabled_checked_3928 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1595;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3929;
    ::VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::std::string __VlefCall_32__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_31;
    ::IData/*31:0*/ __VlefCall_30__get_report_action;
    ::IData/*31:0*/ __VlefCall_29__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_28__uvm_get_report_object;
    ::std::string __VlefCall_27__get_full_name;
    ::std::string __VlefCall_26__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_25;
    ::IData/*31:0*/ __VlefCall_24__get_report_action;
    ::IData/*31:0*/ __VlefCall_23__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_22__uvm_get_report_object;
    ::IData/*31:0*/ __VlefCall_21__get_n_bits;
    ::std::string __VlefCall_20__get_full_name;
    ::std::string __VlefCall_19__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_18;
    ::IData/*31:0*/ __VlefCall_17__get_report_action;
    ::IData/*31:0*/ __VlefCall_16__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_15__uvm_get_report_object;
    ::IData/*31:0*/ __VlefCall_14__get_n_bits;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_backdoor> __VlefCall_13__get_backdoor;
    ::QData/*63:0*/ __VlefCall_12__get_offset_in_memory;
    ::IData/*31:0*/ __VlefCall_11__get_n_bytes;
    ::IData/*31:0*/ __VlefCall_10__get_n_bits;
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
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk479__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk480__DOT__blk;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk481__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_vreg_field_cbs> unnamedblk482__DOT__cb;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk483__DOT__unnamedblk484__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk485__DOT___local_report_object_;
    ::IData/*31:0*/ unnamedblk1_1__DOT____Vrepeat0;
    unnamedblk1_1__DOT____Vrepeat0 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_vreg_field_cbs> unnamedblk486__DOT__cb;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk487__DOT___local_report_object_;
    ::QData/*63:0*/ tmp;
    ::QData/*63:0*/ segoff;
    ::IData/*31:0*/ st;
    ::IData/*31:0*/ flsb;
    ::IData/*31:0*/ fmsb;
    ::IData/*31:0*/ rmwbits;
    ::IData/*31:0*/ segsiz;
    ::IData/*31:0*/ segn;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_mem> mem;
    ::IData/*31:0*/ rm_path;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pi664dc15a> cbs;
    {
        status = 0U;
        tmp = 0ULL;
        segoff = 0ULL;
        st = 0U;
        flsb = 0U;
        fmsb = 0U;
        rmwbits = 0U;
        segsiz = 0U;
        segn = 0U;
        rm_path = 0U;
        cbs = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pi664dc15a, vlProcess, vlSymsp, 
                     ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_vreg_field>{this});
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        this->__PVT__write_in_progress = 1U;
        VL_NULL_CHECK(this->__PVT__parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 410)->__VnoInFunc_get_memory(vlSymsp, mem);
        if ((VlNull{} == mem)) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1585);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1585;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3880);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_3880;
            __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 413)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk479__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk479__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 413)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_1__get_report_verbosity_level);
            __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
            if (__VlefLogAnd_3) {
                VL_NULL_CHECK(unnamedblk479__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 413)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_2__get_report_action);
                __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_3))) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                __Vtask_uvm_report_error__report_enabled_checked_3887 = 1U;
                this->__Vtask_uvm_report_error__context_name_3886 = ""s;
                __Vtask_uvm_report_error__line_3885 = 0x0000019dU;
                this->__Vtask_uvm_report_error__filename_3884 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh"s;
                __Vtask_uvm_report_error__verbosity_3883 = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__message_3882
                              ,"Cannot call uvm_vreg_field::write() on unimplemented virtual register \"%s\"",1
                              , 'S',&(__VlefCall_4__get_full_name));
                this->__Vtask_uvm_report_error__id_3881 = "RegModel"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1586);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1586;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3888);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_3888;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_3881, this->__Vtask_uvm_report_error__message_3882, __Vtask_uvm_report_error__verbosity_3883, this->__Vtask_uvm_report_error__filename_3884, __Vtask_uvm_report_error__line_3885, this->__Vtask_uvm_report_error__context_name_3886, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3887));
            }
            status = 1U;
            goto __Vlabel0;
        }
        if ((3U == path)) {
            VL_NULL_CHECK(this->__PVT__parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 419)->__VnoInFunc_get_block(vlSymsp, unnamedblk480__DOT__blk);
            VL_NULL_CHECK(unnamedblk480__DOT__blk, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 420)->__VnoInFunc_get_default_door(vlSymsp, path);
        }
        status = 0U;
        co_await VL_NULL_CHECK(this->__PVT__parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 425)->__VnoInFunc_XatomicX(vlSymsp, 1U);
        if ((0U != VL_SHIFTR_QQI(64,64,32, value, this->__PVT__size))) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1587);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1587;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3889);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_3889;
            __VlefCall_5__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_5__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 428)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk481__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk481__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 428)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_6__get_report_verbosity_level);
            __VlefLogAnd_8 = VL_LTES_III(32, 0U, __VlefCall_6__get_report_verbosity_level);
            if (__VlefLogAnd_8) {
                VL_NULL_CHECK(unnamedblk481__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 428)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_7__get_report_action);
                __VlefLogAnd_8 = (0U != __VlefCall_7__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_8))) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_9__get_full_name);
                this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_10__get_n_bits);
                __Vtask_uvm_report_warning__report_enabled_checked_3896 = 1U;
                this->__Vtask_uvm_report_warning__context_name_3895 = ""s;
                __Vtask_uvm_report_warning__line_3894 = 0x000001acU;
                this->__Vtask_uvm_report_warning__filename_3893 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh"s;
                __Vtask_uvm_report_warning__verbosity_3892 = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_warning__message_3891
                              ,"Writing value 'h%h that is greater than field \"%s\" size (%0d bits)",3
                              , '#',64,value, 'S',&(__VlefCall_9__get_full_name)
                              , '#',32,__VlefCall_10__get_n_bits);
                this->__Vtask_uvm_report_warning__id_3890 = "RegModel"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1588);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1588;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3897);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_3897;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_3890, this->__Vtask_uvm_report_warning__message_3891, __Vtask_uvm_report_warning__verbosity_3892, this->__Vtask_uvm_report_warning__filename_3893, __Vtask_uvm_report_warning__line_3894, this->__Vtask_uvm_report_warning__context_name_3895, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_3896));
            }
            value = (value & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__size) 
                              - 1ULL));
        }
        tmp = 0ULL;
        this->__VnoInFunc_pre_write(vlSymsp, idx, value, path, map);
        VL_NULL_CHECK(cbs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 434)->__VnoInFunc_first(vlSymsp, unnamedblk482__DOT__cb);
        while ((VlNull{} != unnamedblk482__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk482__DOT__cb, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 436)->__PVT__fname 
                = this->__PVT__fname;
            VL_NULL_CHECK(unnamedblk482__DOT__cb, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 437)->__PVT__lineno 
                = this->__PVT__lineno;
            VL_NULL_CHECK(unnamedblk482__DOT__cb, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 438)->__VnoInFunc_pre_write(vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_vreg_field>{this}, idx, value, path, map);
            VL_NULL_CHECK(cbs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 435)->__VnoInFunc_next(vlSymsp, unnamedblk482__DOT__cb);
        }
        VL_NULL_CHECK(mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 441)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_11__get_n_bytes);
        segsiz = (__VlefCall_11__get_n_bytes << 3U);
        this->__VnoInFunc_get_lsb_pos_in_register(vlSymsp, __Vfunc_get_lsb_pos_in_register__Vfuncout_1589);
        flsb = __Vfunc_get_lsb_pos_in_register__Vfuncout_1589;
        VL_NULL_CHECK(this->__PVT__parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 443)->__VnoInFunc_get_offset_in_memory(vlProcess, vlSymsp, idx, __VlefCall_12__get_offset_in_memory);
        segoff = (__VlefCall_12__get_offset_in_memory 
                  + VL_DIV_QQQ(64, (::QData)((::IData)(flsb)), (::QData)((::IData)(segsiz))));
        rm_path = 3U;
        VL_NULL_CHECK(mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 447)->__VnoInFunc_get_backdoor(vlSymsp, 1U, __VlefCall_13__get_backdoor);
        if ((VlNull{} != __VlefCall_13__get_backdoor)) {
            rm_path = 1U;
        }
        rmwbits = VL_MODDIVS_III(32, flsb, segsiz);
        this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_14__get_n_bits);
        segn = ((::IData)(1U) + VL_DIV_III(32, ((rmwbits 
                                                 + __VlefCall_14__get_n_bits) 
                                                - (::IData)(1U)), segsiz));
        if (VL_LTS_III(32, 0U, rmwbits)) {
            co_await VL_NULL_CHECK(mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 461)->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__status_3898, segoff, __Vtask_read__value_3899, rm_path, map, parent, 0xffffffffU, extension, fname, lineno);
            st = __Vtask_read__status_3898;
            tmp = __Vtask_read__value_3899;
            if (((0U != st) & (2U != st))) {
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1590);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1590;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3900);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_3900;
                __VlefCall_15__uvm_get_report_object 
                    = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
                VL_NULL_CHECK(__VlefCall_15__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 465)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk483__DOT__unnamedblk484__DOT___local_report_object_);
                VL_NULL_CHECK(unnamedblk483__DOT__unnamedblk484__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 465)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_16__get_report_verbosity_level);
                __VlefLogAnd_18 = VL_LTES_III(32, 0U, __VlefCall_16__get_report_verbosity_level);
                if (__VlefLogAnd_18) {
                    VL_NULL_CHECK(unnamedblk483__DOT__unnamedblk484__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 465)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_17__get_report_action);
                    __VlefLogAnd_18 = (0U != __VlefCall_17__get_report_action);
                }
                if (VL_UNLIKELY((__VlefLogAnd_18))) {
                    VL_NULL_CHECK(mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 465)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_19__get_full_name);
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_20__get_full_name);
                    __Vtask_uvm_report_error__report_enabled_checked_3907 = 1U;
                    this->__Vtask_uvm_report_error__context_name_3906 = ""s;
                    __Vtask_uvm_report_error__line_3905 = 0x000001d1U;
                    this->__Vtask_uvm_report_error__filename_3904 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh"s;
                    __Vtask_uvm_report_error__verbosity_3903 = 0U;
                    VL_SFORMAT_NX(this->__Vtask_uvm_report_error__message_3902
                                  ,"Unable to read LSB bits in %s[%0d] to for RMW cycle on virtual field %s.",3
                                  , 'S',&(__VlefCall_19__get_full_name)
                                  , '#',64,segoff, 'S',&(__VlefCall_20__get_full_name));
                    this->__Vtask_uvm_report_error__id_3901 = "RegModel"s;
                    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1591);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__Vfuncout_1591;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3908);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__Vfuncout_3908;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_3901, this->__Vtask_uvm_report_error__message_3902, __Vtask_uvm_report_error__verbosity_3903, this->__Vtask_uvm_report_error__filename_3904, __Vtask_uvm_report_error__line_3905, this->__Vtask_uvm_report_error__context_name_3906, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3907));
                }
                status = 1U;
                co_await VL_NULL_CHECK(this->__PVT__parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 467)->__VnoInFunc_XatomicX(vlSymsp, 0U);
                goto __Vlabel0;
            }
            value = (VL_SHIFTL_QQI(64,64,32, value, rmwbits) 
                     | (tmp & (VL_SHIFTL_QQI(64,64,32, 1ULL, rmwbits) 
                               - 1ULL)));
        }
        this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_21__get_n_bits);
        fmsb = ((rmwbits + __VlefCall_21__get_n_bits) 
                - (::IData)(1U));
        rmwbits = VL_MODDIVS_III(32, ((::IData)(1U) 
                                      + fmsb), segsiz);
        if (VL_LTS_III(32, 0U, rmwbits)) {
            if (VL_LTS_III(32, 0U, segn)) {
                co_await VL_NULL_CHECK(mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 479)->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__status_3909, 
                                                                                ((segoff 
                                                                                + (::QData)((::IData)(segn))) 
                                                                                - 1ULL), __Vtask_read__value_3910, rm_path, map, parent, 0xffffffffU, extension, fname, lineno);
                st = __Vtask_read__status_3909;
                tmp = __Vtask_read__value_3910;
                if (((0U != st) & (2U != st))) {
                    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1592);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                        = __Vfunc_get__Vfuncout_1592;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3911);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                        = __Vtask_get_root__Vfuncout_3911;
                    __VlefCall_22__uvm_get_report_object 
                        = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
                    VL_NULL_CHECK(__VlefCall_22__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 484)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk485__DOT___local_report_object_);
                    VL_NULL_CHECK(unnamedblk485__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 484)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_23__get_report_verbosity_level);
                    __VlefLogAnd_25 = VL_LTES_III(32, 0U, __VlefCall_23__get_report_verbosity_level);
                    if (__VlefLogAnd_25) {
                        VL_NULL_CHECK(unnamedblk485__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 484)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_24__get_report_action);
                        __VlefLogAnd_25 = (0U != __VlefCall_24__get_report_action);
                    }
                    if (VL_UNLIKELY((__VlefLogAnd_25))) {
                        VL_NULL_CHECK(mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 484)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_26__get_full_name);
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_27__get_full_name);
                        __Vtask_uvm_report_error__report_enabled_checked_3918 = 1U;
                        this->__Vtask_uvm_report_error__context_name_3917 = ""s;
                        __Vtask_uvm_report_error__line_3916 = 0x000001e4U;
                        this->__Vtask_uvm_report_error__filename_3915 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh"s;
                        __Vtask_uvm_report_error__verbosity_3914 = 0U;
                        VL_SFORMAT_NX(this->__Vtask_uvm_report_error__message_3913
                                      ,"Unable to read MSB bits in %s[%0d] to for RMW cycle on virtual field %s.",3
                                      , 'S',&(__VlefCall_26__get_full_name)
                                      , '#',64,((segoff 
                                                 + (::QData)((::IData)(segn))) 
                                                - 1ULL)
                                      , 'S',&(__VlefCall_27__get_full_name));
                        this->__Vtask_uvm_report_error__id_3912 = "RegModel"s;
                        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1593);
                        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                            = __Vfunc_get__Vfuncout_1593;
                        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3919);
                        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                            = __Vtask_get_root__Vfuncout_3919;
                        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_3912, this->__Vtask_uvm_report_error__message_3913, __Vtask_uvm_report_error__verbosity_3914, this->__Vtask_uvm_report_error__filename_3915, __Vtask_uvm_report_error__line_3916, this->__Vtask_uvm_report_error__context_name_3917, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3918));
                    }
                    status = 1U;
                    co_await VL_NULL_CHECK(this->__PVT__parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 486)->__VnoInFunc_XatomicX(vlSymsp, 0U);
                    goto __Vlabel0;
                }
            }
            value = (value | VL_SHIFTL_QQI(64,64,32, 
                                           (tmp & (~ 
                                                   (VL_SHIFTL_QQI(64,64,32, 1ULL, rmwbits) 
                                                    - 1ULL))), 
                                           VL_MULS_III(32, 
                                                       (segn 
                                                        - (::IData)(1U)), segsiz)));
        }
        tmp = value;
        unnamedblk1_1__DOT____Vrepeat0 = segn;
        while (VL_LTS_III(32, 0U, unnamedblk1_1__DOT____Vrepeat0)) {
            co_await VL_NULL_CHECK(mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 496)->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__status_3920, segoff, tmp, path, map, parent, 0xffffffffU, extension, fname, lineno);
            st = __Vtask_write__status_3920;
            if (((0U != st) & (2U != st))) {
                status = 1U;
            }
            segoff = (1ULL + segoff);
            tmp = VL_SHIFTR_QQI(64,64,32, tmp, segsiz);
            unnamedblk1_1__DOT____Vrepeat0 = (unnamedblk1_1__DOT____Vrepeat0 
                                              - (::IData)(1U));
        }
        this->__VnoInFunc_post_write(vlSymsp, idx, value, path, map, status);
        VL_NULL_CHECK(cbs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 507)->__VnoInFunc_first(vlSymsp, unnamedblk486__DOT__cb);
        while ((VlNull{} != unnamedblk486__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk486__DOT__cb, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 509)->__PVT__fname 
                = this->__PVT__fname;
            VL_NULL_CHECK(unnamedblk486__DOT__cb, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 510)->__PVT__lineno 
                = this->__PVT__lineno;
            VL_NULL_CHECK(unnamedblk486__DOT__cb, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 511)->__VnoInFunc_post_write(vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_vreg_field>{this}, idx, value, path, map, status);
            VL_NULL_CHECK(cbs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 508)->__VnoInFunc_next(vlSymsp, unnamedblk486__DOT__cb);
        }
        co_await VL_NULL_CHECK(this->__PVT__parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 514)->__VnoInFunc_XatomicX(vlSymsp, 0U);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1594);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1594;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3921);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
            = __Vtask_get_root__Vfuncout_3921;
        __VlefCall_28__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
        VL_NULL_CHECK(__VlefCall_28__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 520)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk487__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk487__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 520)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "RegModel"s, __VlefCall_29__get_report_verbosity_level);
        __VlefLogAnd_31 = VL_LTES_III(32, 0x000000c8U, __VlefCall_29__get_report_verbosity_level);
        if (__VlefLogAnd_31) {
            VL_NULL_CHECK(unnamedblk487__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 520)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "RegModel"s, __VlefCall_30__get_report_action);
            __VlefLogAnd_31 = (0U != __VlefCall_30__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_31))) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_32__get_full_name);
            __Vtask_uvm_report_info__report_enabled_checked_3928 = 1U;
            this->__Vtask_uvm_report_info__context_name_3927 = ""s;
            __Vtask_uvm_report_info__line_3926 = 0x00000208U;
            this->__Vtask_uvm_report_info__filename_3925 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh"s;
            __Vtask_uvm_report_info__verbosity_3924 = 0x000000c8U;
            if ((0U == path)) {
                __Vtemp_1[0U] = 0x646f6f72U;
                __Vtemp_1[1U] = 0x726f6e74U;
                __Vtemp_1[2U] = 0x00000066U;
            } else {
                __Vtemp_1[0U] = 0x646f6f72U;
                __Vtemp_1[1U] = 0x6261636bU;
                __Vtemp_1[2U] = 0U;
            }
            VL_SFORMAT_NX(this->__Vtask_uvm_report_info__message_3923
                          ,"Wrote virtual field \"%s\"[%0d] via %s with: 'h%h",4
                          , 'S',&(__VlefCall_32__get_full_name)
                          , '#',64,idx, '#',72,__Vtemp_1.data()
                          , '#',64,value);
            this->__Vtask_uvm_report_info__id_3922 = "RegModel"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1595);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1595;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 147)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3929);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__Vfuncout_3929;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 148)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__id_3922, this->__Vtask_uvm_report_info__message_3923, __Vtask_uvm_report_info__verbosity_3924, this->__Vtask_uvm_report_info__filename_3925, __Vtask_uvm_report_info__line_3926, this->__Vtask_uvm_report_info__context_name_3927, (::IData)(__Vtask_uvm_report_info__report_enabled_checked_3928));
        }
        this->__PVT__write_in_progress = 0U;
        this->__PVT__fname = ""s;
        this->__PVT__lineno = 0U;
        __Vlabel0: ;
    }
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_read(Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ idx, ::IData/*31:0*/ &status, ::QData/*63:0*/ &value, ::IData/*31:0*/ path, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> parent, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> extension, ::std::string fname, ::IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_read\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1596;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3930;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_3933;
    __Vtask_uvm_report_error__verbosity_3933 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_3935;
    __Vtask_uvm_report_error__line_3935 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3937;
    __Vtask_uvm_report_error__report_enabled_checked_3937 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1597;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3938;
    ::IData/*31:0*/ __Vfunc_get_lsb_pos_in_register__Vfuncout_1598;
    __Vfunc_get_lsb_pos_in_register__Vfuncout_1598 = 0;
    ::IData/*31:0*/ __Vtask_read__status_3939;
    __Vtask_read__status_3939 = 0;
    ::QData/*63:0*/ __Vtask_read__value_3940;
    __Vtask_read__value_3940 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1599;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3941;
    ::IData/*31:0*/ __Vtask_uvm_report_info__verbosity_3944;
    __Vtask_uvm_report_info__verbosity_3944 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__line_3946;
    __Vtask_uvm_report_info__line_3946 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_info__report_enabled_checked_3948;
    __Vtask_uvm_report_info__report_enabled_checked_3948 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1600;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3949;
    ::VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::std::string __VlefCall_13__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_12;
    ::IData/*31:0*/ __VlefCall_11__get_report_action;
    ::IData/*31:0*/ __VlefCall_10__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_9__uvm_get_report_object;
    ::IData/*31:0*/ __VlefCall_8__get_n_bits;
    ::IData/*31:0*/ __VlefCall_7__get_n_bits;
    ::QData/*63:0*/ __VlefCall_6__get_offset_in_memory;
    ::IData/*31:0*/ __VlefCall_5__get_n_bytes;
    ::std::string __VlefCall_4__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk488__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk489__DOT__blk;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_vreg_field_cbs> unnamedblk490__DOT__cb;
    ::IData/*31:0*/ unnamedblk1_2__DOT____Vrepeat1;
    unnamedblk1_2__DOT____Vrepeat1 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_vreg_field_cbs> unnamedblk491__DOT__cb;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk492__DOT___local_report_object_;
    ::QData/*63:0*/ tmp;
    ::QData/*63:0*/ segoff;
    ::IData/*31:0*/ st;
    ::IData/*31:0*/ flsb;
    ::IData/*31:0*/ lsb;
    ::IData/*31:0*/ segsiz;
    ::IData/*31:0*/ segn;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_mem> mem;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pi664dc15a> cbs;
    {
        status = 0U;
        value = 0ULL;
        tmp = 0ULL;
        segoff = 0ULL;
        st = 0U;
        flsb = 0U;
        lsb = 0U;
        segsiz = 0U;
        segn = 0U;
        cbs = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pi664dc15a, vlProcess, vlSymsp, 
                     ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_vreg_field>{this});
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        this->__PVT__read_in_progress = 1U;
        VL_NULL_CHECK(this->__PVT__parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 552)->__VnoInFunc_get_memory(vlSymsp, mem);
        if ((VlNull{} == mem)) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1596);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1596;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3930);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_3930;
            __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 555)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk488__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk488__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 555)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_1__get_report_verbosity_level);
            __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
            if (__VlefLogAnd_3) {
                VL_NULL_CHECK(unnamedblk488__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 555)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_2__get_report_action);
                __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_3))) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                __Vtask_uvm_report_error__report_enabled_checked_3937 = 1U;
                this->__Vtask_uvm_report_error__context_name_3936 = ""s;
                __Vtask_uvm_report_error__line_3935 = 0x0000022bU;
                this->__Vtask_uvm_report_error__filename_3934 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh"s;
                __Vtask_uvm_report_error__verbosity_3933 = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__message_3932
                              ,"Cannot call uvm_vreg_field::read() on unimplemented virtual register \"%s\"",1
                              , 'S',&(__VlefCall_4__get_full_name));
                this->__Vtask_uvm_report_error__id_3931 = "RegModel"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1597);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1597;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3938);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_3938;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_3931, this->__Vtask_uvm_report_error__message_3932, __Vtask_uvm_report_error__verbosity_3933, this->__Vtask_uvm_report_error__filename_3934, __Vtask_uvm_report_error__line_3935, this->__Vtask_uvm_report_error__context_name_3936, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3937));
            }
            status = 1U;
            goto __Vlabel0;
        }
        if ((3U == path)) {
            VL_NULL_CHECK(this->__PVT__parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 561)->__VnoInFunc_get_block(vlSymsp, unnamedblk489__DOT__blk);
            VL_NULL_CHECK(unnamedblk489__DOT__blk, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 562)->__VnoInFunc_get_default_door(vlSymsp, path);
        }
        status = 0U;
        co_await VL_NULL_CHECK(this->__PVT__parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 567)->__VnoInFunc_XatomicX(vlSymsp, 1U);
        value = 0ULL;
        this->__VnoInFunc_pre_read(vlSymsp, idx, path, map);
        VL_NULL_CHECK(cbs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 572)->__VnoInFunc_first(vlSymsp, unnamedblk490__DOT__cb);
        while ((VlNull{} != unnamedblk490__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk490__DOT__cb, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 574)->__PVT__fname 
                = this->__PVT__fname;
            VL_NULL_CHECK(unnamedblk490__DOT__cb, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 575)->__PVT__lineno 
                = this->__PVT__lineno;
            VL_NULL_CHECK(unnamedblk490__DOT__cb, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 576)->__VnoInFunc_pre_read(vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_vreg_field>{this}, idx, path, map);
            VL_NULL_CHECK(cbs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 573)->__VnoInFunc_next(vlSymsp, unnamedblk490__DOT__cb);
        }
        VL_NULL_CHECK(mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 579)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_5__get_n_bytes);
        segsiz = (__VlefCall_5__get_n_bytes << 3U);
        this->__VnoInFunc_get_lsb_pos_in_register(vlSymsp, __Vfunc_get_lsb_pos_in_register__Vfuncout_1598);
        flsb = __Vfunc_get_lsb_pos_in_register__Vfuncout_1598;
        VL_NULL_CHECK(this->__PVT__parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 581)->__VnoInFunc_get_offset_in_memory(vlProcess, vlSymsp, idx, __VlefCall_6__get_offset_in_memory);
        segoff = (__VlefCall_6__get_offset_in_memory 
                  + VL_DIV_QQQ(64, (::QData)((::IData)(flsb)), (::QData)((::IData)(segsiz))));
        lsb = VL_MODDIVS_III(32, flsb, segsiz);
        this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_7__get_n_bits);
        segn = ((::IData)(1U) + VL_DIV_III(32, ((lsb 
                                                 + __VlefCall_7__get_n_bits) 
                                                - (::IData)(1U)), segsiz));
        segoff = (segoff + ((::QData)((::IData)(segn)) 
                            - 1ULL));
        unnamedblk1_2__DOT____Vrepeat1 = segn;
        while (VL_LTS_III(32, 0U, unnamedblk1_2__DOT____Vrepeat1)) {
            value = VL_SHIFTL_QQI(64,64,32, value, segsiz);
            co_await VL_NULL_CHECK(mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 592)->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__status_3939, segoff, __Vtask_read__value_3940, path, map, parent, 0xffffffffU, extension, fname, lineno);
            st = __Vtask_read__status_3939;
            tmp = __Vtask_read__value_3940;
            if (((0U != st) & (2U != st))) {
                status = 1U;
            }
            segoff = (segoff - 1ULL);
            value = (value | tmp);
            unnamedblk1_2__DOT____Vrepeat1 = (unnamedblk1_2__DOT____Vrepeat1 
                                              - (::IData)(1U));
        }
        value = VL_SHIFTR_QQI(64,64,32, value, lsb);
        this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_8__get_n_bits);
        value = (value & (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_8__get_n_bits) 
                          - 1ULL));
        this->__VnoInFunc_post_read(vlSymsp, idx, value, path, map, status);
        VL_NULL_CHECK(cbs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 609)->__VnoInFunc_first(vlSymsp, unnamedblk491__DOT__cb);
        while ((VlNull{} != unnamedblk491__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk491__DOT__cb, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 611)->__PVT__fname 
                = this->__PVT__fname;
            VL_NULL_CHECK(unnamedblk491__DOT__cb, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 612)->__PVT__lineno 
                = this->__PVT__lineno;
            VL_NULL_CHECK(unnamedblk491__DOT__cb, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 613)->__VnoInFunc_post_read(vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_vreg_field>{this}, idx, value, path, map, status);
            VL_NULL_CHECK(cbs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 610)->__VnoInFunc_next(vlSymsp, unnamedblk491__DOT__cb);
        }
        co_await VL_NULL_CHECK(this->__PVT__parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 616)->__VnoInFunc_XatomicX(vlSymsp, 0U);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1599);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1599;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3941);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
            = __Vtask_get_root__Vfuncout_3941;
        __VlefCall_9__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
        VL_NULL_CHECK(__VlefCall_9__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 621)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk492__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk492__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 621)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "RegModel"s, __VlefCall_10__get_report_verbosity_level);
        __VlefLogAnd_12 = VL_LTES_III(32, 0x000000c8U, __VlefCall_10__get_report_verbosity_level);
        if (__VlefLogAnd_12) {
            VL_NULL_CHECK(unnamedblk492__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 621)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "RegModel"s, __VlefCall_11__get_report_action);
            __VlefLogAnd_12 = (0U != __VlefCall_11__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_12))) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_13__get_full_name);
            __Vtask_uvm_report_info__report_enabled_checked_3948 = 1U;
            this->__Vtask_uvm_report_info__context_name_3947 = ""s;
            __Vtask_uvm_report_info__line_3946 = 0x0000026dU;
            this->__Vtask_uvm_report_info__filename_3945 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh"s;
            __Vtask_uvm_report_info__verbosity_3944 = 0x000000c8U;
            if ((0U == path)) {
                __Vtemp_1[0U] = 0x646f6f72U;
                __Vtemp_1[1U] = 0x726f6e74U;
                __Vtemp_1[2U] = 0x00000066U;
            } else {
                __Vtemp_1[0U] = 0x646f6f72U;
                __Vtemp_1[1U] = 0x6261636bU;
                __Vtemp_1[2U] = 0U;
            }
            VL_SFORMAT_NX(this->__Vtask_uvm_report_info__message_3943
                          ,"Read virtual field \"%s\"[%0d] via %s: 'h%h",4
                          , 'S',&(__VlefCall_13__get_full_name)
                          , '#',64,idx, '#',72,__Vtemp_1.data()
                          , '#',64,value);
            this->__Vtask_uvm_report_info__id_3942 = "RegModel"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1600);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1600;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 147)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3949);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__Vfuncout_3949;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 148)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__id_3942, this->__Vtask_uvm_report_info__message_3943, __Vtask_uvm_report_info__verbosity_3944, this->__Vtask_uvm_report_info__filename_3945, __Vtask_uvm_report_info__line_3946, this->__Vtask_uvm_report_info__context_name_3947, (::IData)(__Vtask_uvm_report_info__report_enabled_checked_3948));
        }
        this->__PVT__read_in_progress = 0U;
        this->__PVT__fname = ""s;
        this->__PVT__lineno = 0U;
        __Vlabel0: ;
    }
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_poke(Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ idx, ::IData/*31:0*/ &status, ::QData/*63:0*/ value, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> parent, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> extension, ::std::string fname, ::IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_poke\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1601;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3950;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_3953;
    __Vtask_uvm_report_error__verbosity_3953 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_3955;
    __Vtask_uvm_report_error__line_3955 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3957;
    __Vtask_uvm_report_error__report_enabled_checked_3957 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1602;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3958;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1603;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3959;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_3962;
    __Vtask_uvm_report_warning__verbosity_3962 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_3964;
    __Vtask_uvm_report_warning__line_3964 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_3966;
    __Vtask_uvm_report_warning__report_enabled_checked_3966 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1604;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3967;
    ::IData/*31:0*/ __Vfunc_get_lsb_pos_in_register__Vfuncout_1605;
    __Vfunc_get_lsb_pos_in_register__Vfuncout_1605 = 0;
    ::IData/*31:0*/ __Vtask_peek__status_3968;
    __Vtask_peek__status_3968 = 0;
    ::QData/*63:0*/ __Vtask_peek__value_3969;
    __Vtask_peek__value_3969 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1606;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3970;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_3973;
    __Vtask_uvm_report_error__verbosity_3973 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_3975;
    __Vtask_uvm_report_error__line_3975 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3977;
    __Vtask_uvm_report_error__report_enabled_checked_3977 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1607;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3978;
    ::IData/*31:0*/ __Vtask_peek__status_3979;
    __Vtask_peek__status_3979 = 0;
    ::QData/*63:0*/ __Vtask_peek__value_3980;
    __Vtask_peek__value_3980 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1608;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3981;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_3984;
    __Vtask_uvm_report_error__verbosity_3984 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_3986;
    __Vtask_uvm_report_error__line_3986 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3988;
    __Vtask_uvm_report_error__report_enabled_checked_3988 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1609;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3989;
    ::IData/*31:0*/ __Vtask_poke__status_3990;
    __Vtask_poke__status_3990 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1610;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3991;
    ::IData/*31:0*/ __Vtask_uvm_report_info__verbosity_3994;
    __Vtask_uvm_report_info__verbosity_3994 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__line_3996;
    __Vtask_uvm_report_info__line_3996 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_info__report_enabled_checked_3998;
    __Vtask_uvm_report_info__report_enabled_checked_3998 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1611;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3999;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::std::string __VlefCall_31__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_30;
    ::IData/*31:0*/ __VlefCall_29__get_report_action;
    ::IData/*31:0*/ __VlefCall_28__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_27__uvm_get_report_object;
    ::std::string __VlefCall_26__get_full_name;
    ::std::string __VlefCall_25__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_24;
    ::IData/*31:0*/ __VlefCall_23__get_report_action;
    ::IData/*31:0*/ __VlefCall_22__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_21__uvm_get_report_object;
    ::IData/*31:0*/ __VlefCall_20__get_n_bits;
    ::std::string __VlefCall_19__get_full_name;
    ::std::string __VlefCall_18__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_17;
    ::IData/*31:0*/ __VlefCall_16__get_report_action;
    ::IData/*31:0*/ __VlefCall_15__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_14__uvm_get_report_object;
    ::IData/*31:0*/ __VlefCall_13__get_n_bits;
    ::QData/*63:0*/ __VlefCall_12__get_offset_in_memory;
    ::IData/*31:0*/ __VlefCall_11__get_n_bytes;
    ::IData/*31:0*/ __VlefCall_10__get_n_bits;
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
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk493__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk494__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk495__DOT__unnamedblk496__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk497__DOT___local_report_object_;
    ::IData/*31:0*/ unnamedblk1_3__DOT____Vrepeat2;
    unnamedblk1_3__DOT____Vrepeat2 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk498__DOT___local_report_object_;
    ::QData/*63:0*/ tmp;
    ::QData/*63:0*/ segoff;
    ::IData/*31:0*/ st;
    ::IData/*31:0*/ flsb;
    ::IData/*31:0*/ fmsb;
    ::IData/*31:0*/ rmwbits;
    ::IData/*31:0*/ segsiz;
    ::IData/*31:0*/ segn;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_mem> mem;
    {
        status = 0U;
        tmp = 0ULL;
        segoff = 0ULL;
        st = 0U;
        flsb = 0U;
        fmsb = 0U;
        rmwbits = 0U;
        segsiz = 0U;
        segn = 0U;
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        VL_NULL_CHECK(this->__PVT__parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 649)->__VnoInFunc_get_memory(vlSymsp, mem);
        if ((VlNull{} == mem)) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1601);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1601;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3950);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_3950;
            __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 652)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk493__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk493__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 652)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_1__get_report_verbosity_level);
            __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
            if (__VlefLogAnd_3) {
                VL_NULL_CHECK(unnamedblk493__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 652)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_2__get_report_action);
                __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_3))) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                __Vtask_uvm_report_error__report_enabled_checked_3957 = 1U;
                this->__Vtask_uvm_report_error__context_name_3956 = ""s;
                __Vtask_uvm_report_error__line_3955 = 0x0000028cU;
                this->__Vtask_uvm_report_error__filename_3954 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh"s;
                __Vtask_uvm_report_error__verbosity_3953 = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__message_3952
                              ,"Cannot call uvm_vreg_field::poke() on unimplemented virtual register \"%s\"",1
                              , 'S',&(__VlefCall_4__get_full_name));
                this->__Vtask_uvm_report_error__id_3951 = "RegModel"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1602);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1602;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3958);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_3958;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_3951, this->__Vtask_uvm_report_error__message_3952, __Vtask_uvm_report_error__verbosity_3953, this->__Vtask_uvm_report_error__filename_3954, __Vtask_uvm_report_error__line_3955, this->__Vtask_uvm_report_error__context_name_3956, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3957));
            }
            status = 1U;
            goto __Vlabel0;
        }
        status = 0U;
        co_await VL_NULL_CHECK(this->__PVT__parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 659)->__VnoInFunc_XatomicX(vlSymsp, 1U);
        if ((0U != VL_SHIFTR_QQI(64,64,32, value, this->__PVT__size))) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1603);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1603;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3959);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_3959;
            __VlefCall_5__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_5__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 662)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk494__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk494__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 662)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_6__get_report_verbosity_level);
            __VlefLogAnd_8 = VL_LTES_III(32, 0U, __VlefCall_6__get_report_verbosity_level);
            if (__VlefLogAnd_8) {
                VL_NULL_CHECK(unnamedblk494__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 662)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_7__get_report_action);
                __VlefLogAnd_8 = (0U != __VlefCall_7__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_8))) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_9__get_full_name);
                this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_10__get_n_bits);
                __Vtask_uvm_report_warning__report_enabled_checked_3966 = 1U;
                this->__Vtask_uvm_report_warning__context_name_3965 = ""s;
                __Vtask_uvm_report_warning__line_3964 = 0x00000296U;
                this->__Vtask_uvm_report_warning__filename_3963 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh"s;
                __Vtask_uvm_report_warning__verbosity_3962 = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_warning__message_3961
                              ,"Writing value 'h%h that is greater than field \"%s\" size (%0d bits)",3
                              , '#',64,value, 'S',&(__VlefCall_9__get_full_name)
                              , '#',32,__VlefCall_10__get_n_bits);
                this->__Vtask_uvm_report_warning__id_3960 = "RegModel"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1604);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1604;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3967);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_3967;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_3960, this->__Vtask_uvm_report_warning__message_3961, __Vtask_uvm_report_warning__verbosity_3962, this->__Vtask_uvm_report_warning__filename_3963, __Vtask_uvm_report_warning__line_3964, this->__Vtask_uvm_report_warning__context_name_3965, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_3966));
            }
            value = (value & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__size) 
                              - 1ULL));
        }
        tmp = 0ULL;
        VL_NULL_CHECK(mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 667)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_11__get_n_bytes);
        segsiz = (__VlefCall_11__get_n_bytes << 3U);
        this->__VnoInFunc_get_lsb_pos_in_register(vlSymsp, __Vfunc_get_lsb_pos_in_register__Vfuncout_1605);
        flsb = __Vfunc_get_lsb_pos_in_register__Vfuncout_1605;
        VL_NULL_CHECK(this->__PVT__parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 669)->__VnoInFunc_get_offset_in_memory(vlProcess, vlSymsp, idx, __VlefCall_12__get_offset_in_memory);
        segoff = (__VlefCall_12__get_offset_in_memory 
                  + VL_DIV_QQQ(64, (::QData)((::IData)(flsb)), (::QData)((::IData)(segsiz))));
        rmwbits = VL_MODDIVS_III(32, flsb, segsiz);
        this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_13__get_n_bits);
        segn = ((::IData)(1U) + VL_DIV_III(32, ((rmwbits 
                                                 + __VlefCall_13__get_n_bits) 
                                                - (::IData)(1U)), segsiz));
        if (VL_LTS_III(32, 0U, rmwbits)) {
            VL_NULL_CHECK(mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 680)->__VnoInFunc_peek(vlProcess, vlSymsp, __Vtask_peek__status_3968, segoff, __Vtask_peek__value_3969, ""s, parent, extension, fname, lineno);
            st = __Vtask_peek__status_3968;
            tmp = __Vtask_peek__value_3969;
            if (((0U != st) & (2U != st))) {
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1606);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1606;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3970);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_3970;
                __VlefCall_14__uvm_get_report_object 
                    = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
                VL_NULL_CHECK(__VlefCall_14__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 684)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk495__DOT__unnamedblk496__DOT___local_report_object_);
                VL_NULL_CHECK(unnamedblk495__DOT__unnamedblk496__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 684)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_15__get_report_verbosity_level);
                __VlefLogAnd_17 = VL_LTES_III(32, 0U, __VlefCall_15__get_report_verbosity_level);
                if (__VlefLogAnd_17) {
                    VL_NULL_CHECK(unnamedblk495__DOT__unnamedblk496__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 684)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_16__get_report_action);
                    __VlefLogAnd_17 = (0U != __VlefCall_16__get_report_action);
                }
                if (VL_UNLIKELY((__VlefLogAnd_17))) {
                    VL_NULL_CHECK(mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 684)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_18__get_full_name);
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_19__get_full_name);
                    __Vtask_uvm_report_error__report_enabled_checked_3977 = 1U;
                    this->__Vtask_uvm_report_error__context_name_3976 = ""s;
                    __Vtask_uvm_report_error__line_3975 = 0x000002acU;
                    this->__Vtask_uvm_report_error__filename_3974 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh"s;
                    __Vtask_uvm_report_error__verbosity_3973 = 0U;
                    VL_SFORMAT_NX(this->__Vtask_uvm_report_error__message_3972
                                  ,"Unable to read LSB bits in %s[%0d] to for RMW cycle on virtual field %s.",3
                                  , 'S',&(__VlefCall_18__get_full_name)
                                  , '#',64,segoff, 'S',&(__VlefCall_19__get_full_name));
                    this->__Vtask_uvm_report_error__id_3971 = "RegModel"s;
                    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1607);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__Vfuncout_1607;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3978);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__Vfuncout_3978;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_3971, this->__Vtask_uvm_report_error__message_3972, __Vtask_uvm_report_error__verbosity_3973, this->__Vtask_uvm_report_error__filename_3974, __Vtask_uvm_report_error__line_3975, this->__Vtask_uvm_report_error__context_name_3976, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3977));
                }
                status = 1U;
                co_await VL_NULL_CHECK(this->__PVT__parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 686)->__VnoInFunc_XatomicX(vlSymsp, 0U);
                goto __Vlabel0;
            }
            value = (VL_SHIFTL_QQI(64,64,32, value, rmwbits) 
                     | (tmp & (VL_SHIFTL_QQI(64,64,32, 1ULL, rmwbits) 
                               - 1ULL)));
        }
        this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_20__get_n_bits);
        fmsb = ((rmwbits + __VlefCall_20__get_n_bits) 
                - (::IData)(1U));
        rmwbits = VL_MODDIVS_III(32, ((::IData)(1U) 
                                      + fmsb), segsiz);
        if (VL_LTS_III(32, 0U, rmwbits)) {
            if (VL_LTS_III(32, 0U, segn)) {
                VL_NULL_CHECK(mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 698)->__VnoInFunc_peek(vlProcess, vlSymsp, __Vtask_peek__status_3979, 
                                                                                ((segoff 
                                                                                + (::QData)((::IData)(segn))) 
                                                                                - 1ULL), __Vtask_peek__value_3980, ""s, parent, extension, fname, lineno);
                st = __Vtask_peek__status_3979;
                tmp = __Vtask_peek__value_3980;
                if (((0U != st) & (2U != st))) {
                    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1608);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                        = __Vfunc_get__Vfuncout_1608;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3981);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                        = __Vtask_get_root__Vfuncout_3981;
                    __VlefCall_21__uvm_get_report_object 
                        = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
                    VL_NULL_CHECK(__VlefCall_21__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 703)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk497__DOT___local_report_object_);
                    VL_NULL_CHECK(unnamedblk497__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 703)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_22__get_report_verbosity_level);
                    __VlefLogAnd_24 = VL_LTES_III(32, 0U, __VlefCall_22__get_report_verbosity_level);
                    if (__VlefLogAnd_24) {
                        VL_NULL_CHECK(unnamedblk497__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 703)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_23__get_report_action);
                        __VlefLogAnd_24 = (0U != __VlefCall_23__get_report_action);
                    }
                    if (VL_UNLIKELY((__VlefLogAnd_24))) {
                        VL_NULL_CHECK(mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 703)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_25__get_full_name);
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_26__get_full_name);
                        __Vtask_uvm_report_error__report_enabled_checked_3988 = 1U;
                        this->__Vtask_uvm_report_error__context_name_3987 = ""s;
                        __Vtask_uvm_report_error__line_3986 = 0x000002bfU;
                        this->__Vtask_uvm_report_error__filename_3985 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh"s;
                        __Vtask_uvm_report_error__verbosity_3984 = 0U;
                        VL_SFORMAT_NX(this->__Vtask_uvm_report_error__message_3983
                                      ,"Unable to read MSB bits in %s[%0d] to for RMW cycle on virtual field %s.",3
                                      , 'S',&(__VlefCall_25__get_full_name)
                                      , '#',64,((segoff 
                                                 + (::QData)((::IData)(segn))) 
                                                - 1ULL)
                                      , 'S',&(__VlefCall_26__get_full_name));
                        this->__Vtask_uvm_report_error__id_3982 = "RegModel"s;
                        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1609);
                        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                            = __Vfunc_get__Vfuncout_1609;
                        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3989);
                        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                            = __Vtask_get_root__Vfuncout_3989;
                        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_3982, this->__Vtask_uvm_report_error__message_3983, __Vtask_uvm_report_error__verbosity_3984, this->__Vtask_uvm_report_error__filename_3985, __Vtask_uvm_report_error__line_3986, this->__Vtask_uvm_report_error__context_name_3987, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3988));
                    }
                    status = 1U;
                    co_await VL_NULL_CHECK(this->__PVT__parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 705)->__VnoInFunc_XatomicX(vlSymsp, 0U);
                    goto __Vlabel0;
                }
            }
            value = (value | VL_SHIFTL_QQI(64,64,32, 
                                           (tmp & (~ 
                                                   (VL_SHIFTL_QQI(64,64,32, 1ULL, rmwbits) 
                                                    - 1ULL))), 
                                           VL_MULS_III(32, 
                                                       (segn 
                                                        - (::IData)(1U)), segsiz)));
        }
        tmp = value;
        unnamedblk1_3__DOT____Vrepeat2 = segn;
        while (VL_LTS_III(32, 0U, unnamedblk1_3__DOT____Vrepeat2)) {
            VL_NULL_CHECK(mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 715)->__VnoInFunc_poke(vlProcess, vlSymsp, __Vtask_poke__status_3990, segoff, tmp, ""s, parent, extension, fname, lineno);
            st = __Vtask_poke__status_3990;
            if (((0U != st) & (2U != st))) {
                status = 1U;
            }
            segoff = (1ULL + segoff);
            tmp = VL_SHIFTR_QQI(64,64,32, tmp, segsiz);
            unnamedblk1_3__DOT____Vrepeat2 = (unnamedblk1_3__DOT____Vrepeat2 
                                              - (::IData)(1U));
        }
        co_await VL_NULL_CHECK(this->__PVT__parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 725)->__VnoInFunc_XatomicX(vlSymsp, 0U);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1610);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1610;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3991);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
            = __Vtask_get_root__Vfuncout_3991;
        __VlefCall_27__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
        VL_NULL_CHECK(__VlefCall_27__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 728)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk498__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk498__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 728)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "RegModel"s, __VlefCall_28__get_report_verbosity_level);
        __VlefLogAnd_30 = VL_LTES_III(32, 0x000000c8U, __VlefCall_28__get_report_verbosity_level);
        if (__VlefLogAnd_30) {
            VL_NULL_CHECK(unnamedblk498__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 728)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "RegModel"s, __VlefCall_29__get_report_action);
            __VlefLogAnd_30 = (0U != __VlefCall_29__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_30))) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_31__get_full_name);
            __Vtask_uvm_report_info__report_enabled_checked_3998 = 1U;
            this->__Vtask_uvm_report_info__context_name_3997 = ""s;
            __Vtask_uvm_report_info__line_3996 = 0x000002d8U;
            this->__Vtask_uvm_report_info__filename_3995 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh"s;
            __Vtask_uvm_report_info__verbosity_3994 = 0x000000c8U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_info__message_3993
                          ,"Wrote virtual field \"%s\"[%0d] with: 'h%h",3
                          , 'S',&(__VlefCall_31__get_full_name)
                          , '#',64,idx, '#',64,value);
            this->__Vtask_uvm_report_info__id_3992 = "RegModel"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1611);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1611;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 147)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3999);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__Vfuncout_3999;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 148)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__id_3992, this->__Vtask_uvm_report_info__message_3993, __Vtask_uvm_report_info__verbosity_3994, this->__Vtask_uvm_report_info__filename_3995, __Vtask_uvm_report_info__line_3996, this->__Vtask_uvm_report_info__context_name_3997, (::IData)(__Vtask_uvm_report_info__report_enabled_checked_3998));
        }
        this->__PVT__fname = ""s;
        this->__PVT__lineno = 0U;
        __Vlabel0: ;
    }
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_peek(Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ idx, ::IData/*31:0*/ &status, ::QData/*63:0*/ &value, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> parent, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> extension, ::std::string fname, ::IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_peek\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1612;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4000;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_4003;
    __Vtask_uvm_report_error__verbosity_4003 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_4005;
    __Vtask_uvm_report_error__line_4005 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_4007;
    __Vtask_uvm_report_error__report_enabled_checked_4007 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1613;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4008;
    ::IData/*31:0*/ __Vfunc_get_lsb_pos_in_register__Vfuncout_1614;
    __Vfunc_get_lsb_pos_in_register__Vfuncout_1614 = 0;
    ::IData/*31:0*/ __Vtask_peek__status_4009;
    __Vtask_peek__status_4009 = 0;
    ::QData/*63:0*/ __Vtask_peek__value_4010;
    __Vtask_peek__value_4010 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1615;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4011;
    ::IData/*31:0*/ __Vtask_uvm_report_info__verbosity_4014;
    __Vtask_uvm_report_info__verbosity_4014 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__line_4016;
    __Vtask_uvm_report_info__line_4016 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_info__report_enabled_checked_4018;
    __Vtask_uvm_report_info__report_enabled_checked_4018 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1616;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4019;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::std::string __VlefCall_13__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_12;
    ::IData/*31:0*/ __VlefCall_11__get_report_action;
    ::IData/*31:0*/ __VlefCall_10__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_9__uvm_get_report_object;
    ::IData/*31:0*/ __VlefCall_8__get_n_bits;
    ::IData/*31:0*/ __VlefCall_7__get_n_bits;
    ::QData/*63:0*/ __VlefCall_6__get_offset_in_memory;
    ::IData/*31:0*/ __VlefCall_5__get_n_bytes;
    ::std::string __VlefCall_4__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk499__DOT___local_report_object_;
    ::IData/*31:0*/ unnamedblk1_4__DOT____Vrepeat3;
    unnamedblk1_4__DOT____Vrepeat3 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk500__DOT___local_report_object_;
    ::QData/*63:0*/ tmp;
    ::QData/*63:0*/ segoff;
    ::IData/*31:0*/ st;
    ::IData/*31:0*/ flsb;
    ::IData/*31:0*/ lsb;
    ::IData/*31:0*/ segsiz;
    ::IData/*31:0*/ segn;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_mem> mem;
    {
        status = 0U;
        value = 0ULL;
        tmp = 0ULL;
        segoff = 0ULL;
        st = 0U;
        flsb = 0U;
        lsb = 0U;
        segsiz = 0U;
        segn = 0U;
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        VL_NULL_CHECK(this->__PVT__parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 753)->__VnoInFunc_get_memory(vlSymsp, mem);
        if ((VlNull{} == mem)) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1612);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1612;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4000);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_4000;
            __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 756)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk499__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk499__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 756)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_1__get_report_verbosity_level);
            __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
            if (__VlefLogAnd_3) {
                VL_NULL_CHECK(unnamedblk499__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 756)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_2__get_report_action);
                __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_3))) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                __Vtask_uvm_report_error__report_enabled_checked_4007 = 1U;
                this->__Vtask_uvm_report_error__context_name_4006 = ""s;
                __Vtask_uvm_report_error__line_4005 = 0x000002f4U;
                this->__Vtask_uvm_report_error__filename_4004 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh"s;
                __Vtask_uvm_report_error__verbosity_4003 = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__message_4002
                              ,"Cannot call uvm_vreg_field::peek() on unimplemented virtual register \"%s\"",1
                              , 'S',&(__VlefCall_4__get_full_name));
                this->__Vtask_uvm_report_error__id_4001 = "RegModel"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1613);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1613;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4008);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_4008;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_4001, this->__Vtask_uvm_report_error__message_4002, __Vtask_uvm_report_error__verbosity_4003, this->__Vtask_uvm_report_error__filename_4004, __Vtask_uvm_report_error__line_4005, this->__Vtask_uvm_report_error__context_name_4006, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_4007));
            }
            status = 1U;
            goto __Vlabel0;
        }
        status = 0U;
        co_await VL_NULL_CHECK(this->__PVT__parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 763)->__VnoInFunc_XatomicX(vlSymsp, 1U);
        value = 0ULL;
        VL_NULL_CHECK(mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 767)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_5__get_n_bytes);
        segsiz = (__VlefCall_5__get_n_bytes << 3U);
        this->__VnoInFunc_get_lsb_pos_in_register(vlSymsp, __Vfunc_get_lsb_pos_in_register__Vfuncout_1614);
        flsb = __Vfunc_get_lsb_pos_in_register__Vfuncout_1614;
        VL_NULL_CHECK(this->__PVT__parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 769)->__VnoInFunc_get_offset_in_memory(vlProcess, vlSymsp, idx, __VlefCall_6__get_offset_in_memory);
        segoff = (__VlefCall_6__get_offset_in_memory 
                  + VL_DIV_QQQ(64, (::QData)((::IData)(flsb)), (::QData)((::IData)(segsiz))));
        lsb = VL_MODDIVS_III(32, flsb, segsiz);
        this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_7__get_n_bits);
        segn = ((::IData)(1U) + VL_DIV_III(32, ((lsb 
                                                 + __VlefCall_7__get_n_bits) 
                                                - (::IData)(1U)), segsiz));
        segoff = (segoff + ((::QData)((::IData)(segn)) 
                            - 1ULL));
        unnamedblk1_4__DOT____Vrepeat3 = segn;
        while (VL_LTS_III(32, 0U, unnamedblk1_4__DOT____Vrepeat3)) {
            value = VL_SHIFTL_QQI(64,64,32, value, segsiz);
            VL_NULL_CHECK(mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 780)->__VnoInFunc_peek(vlProcess, vlSymsp, __Vtask_peek__status_4009, segoff, __Vtask_peek__value_4010, ""s, parent, extension, fname, lineno);
            st = __Vtask_peek__status_4009;
            tmp = __Vtask_peek__value_4010;
            if (((0U != st) & (2U != st))) {
                status = 1U;
            }
            segoff = (segoff - 1ULL);
            value = (value | tmp);
            unnamedblk1_4__DOT____Vrepeat3 = (unnamedblk1_4__DOT____Vrepeat3 
                                              - (::IData)(1U));
        }
        value = VL_SHIFTR_QQI(64,64,32, value, lsb);
        this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_8__get_n_bits);
        value = (value & (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_8__get_n_bits) 
                          - 1ULL));
        co_await VL_NULL_CHECK(this->__PVT__parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 797)->__VnoInFunc_XatomicX(vlSymsp, 0U);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1615);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1615;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4011);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
            = __Vtask_get_root__Vfuncout_4011;
        __VlefCall_9__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
        VL_NULL_CHECK(__VlefCall_9__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 799)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk500__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk500__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 799)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "RegModel"s, __VlefCall_10__get_report_verbosity_level);
        __VlefLogAnd_12 = VL_LTES_III(32, 0x000000c8U, __VlefCall_10__get_report_verbosity_level);
        if (__VlefLogAnd_12) {
            VL_NULL_CHECK(unnamedblk500__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 799)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "RegModel"s, __VlefCall_11__get_report_action);
            __VlefLogAnd_12 = (0U != __VlefCall_11__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_12))) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_13__get_full_name);
            __Vtask_uvm_report_info__report_enabled_checked_4018 = 1U;
            this->__Vtask_uvm_report_info__context_name_4017 = ""s;
            __Vtask_uvm_report_info__line_4016 = 0x0000031fU;
            this->__Vtask_uvm_report_info__filename_4015 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh"s;
            __Vtask_uvm_report_info__verbosity_4014 = 0x000000c8U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_info__message_4013
                          ,"Peeked virtual field \"%s\"[%0d]: 'h%h",3
                          , 'S',&(__VlefCall_13__get_full_name)
                          , '#',64,idx, '#',64,value);
            this->__Vtask_uvm_report_info__id_4012 = "RegModel"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1616);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1616;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 147)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4019);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__Vfuncout_4019;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 148)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__id_4012, this->__Vtask_uvm_report_info__message_4013, __Vtask_uvm_report_info__verbosity_4014, this->__Vtask_uvm_report_info__filename_4015, __Vtask_uvm_report_info__line_4016, this->__Vtask_uvm_report_info__context_name_4017, (::IData)(__Vtask_uvm_report_info__report_enabled_checked_4018));
        }
        this->__PVT__fname = ""s;
        this->__PVT__lineno = 0U;
        __Vlabel0: ;
    }
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_do_print\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_1__convert2string;
    ::std::string __VlefCall_0__get_type_name;
    Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
    VL_NULL_CHECK(this->__PVT__parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 808)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_0__get_type_name);
    this->__VnoInFunc_convert2string(vlProcess, vlSymsp, __VlefCall_1__convert2string);
    VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_vreg_field.svh", 808)->__VnoInFunc_print_generic(vlProcess, vlSymsp, "initiator"s, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_type_name), 0xffffffffU, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__convert2string), 0x2eU);
}

void Vtb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_convert2string\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCall_3__get_lsb_pos_in_register;
    ::IData/*31:0*/ __VlefCall_2__get_n_bits;
    ::IData/*31:0*/ __VlefCall_1__get_lsb_pos_in_register;
    ::std::string __VlefCall_0__get_name;
    convert2string__Vfuncrtn = ""s;
    ::std::string res_str;
    res_str = ""s;
    this->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
    this->__VnoInFunc_get_lsb_pos_in_register(vlSymsp, __VlefCall_1__get_lsb_pos_in_register);
    this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_2__get_n_bits);
    this->__VnoInFunc_get_lsb_pos_in_register(vlSymsp, __VlefCall_3__get_lsb_pos_in_register);
    VL_SFORMAT_NX(convert2string__Vfuncrtn,"%s[%0d-%0d]"s,5, 'M',vlSymsp->name(),"uvm_pkg.uvm_vreg_field.convert2string", 'T',-9
                  , 'S',&(__VlefCall_0__get_name), '#',32,
                  ((__VlefCall_1__get_lsb_pos_in_register 
                    + __VlefCall_2__get_n_bits) - (::IData)(1U))
                  , '#',32,__VlefCall_3__get_lsb_pos_in_register);
    if (this->__PVT__read_in_progress) {
        if (((""s != this->__PVT__fname) & (0U != this->__PVT__lineno))) {
            VL_SFORMAT_NX(res_str,"%s:%0d ",2, 'S',&(this->__PVT__fname)
                          , '~',32,this->__PVT__lineno);
        }
        convert2string__Vfuncrtn = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                                 VL_CONCATN_NNN(convert2string__Vfuncrtn, "\n"s), res_str), "currently executing read method"s);
    }
    if (this->__PVT__write_in_progress) {
        if (((""s != this->__PVT__fname) & (0U != this->__PVT__lineno))) {
            VL_SFORMAT_NX(res_str,"%s:%0d ",2, 'S',&(this->__PVT__fname)
                          , '~',32,this->__PVT__lineno);
        }
        convert2string__Vfuncrtn = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                                 VL_CONCATN_NNN(convert2string__Vfuncrtn, "\n"s), res_str), "currently executing write method"s);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_clone(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_clone\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    clone__Vfuncrtn = VlNull{};
}

void Vtb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_do_copy\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_do_compare(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> rhs, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_comparer> comparer, ::CData/*0:0*/ &do_compare__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_do_compare\n"); );
    // Body
    do_compare__Vfuncrtn = 0U;
}

void Vtb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_do_pack(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_do_pack\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_do_unpack(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_do_unpack\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_vreg_field::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg_field::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__lsb = 0;
    __PVT__size = 0;
    __PVT__lineno = 0;
    __PVT__read_in_progress = 0;
    __PVT__write_in_progress = 0;
}

Vtb_top_uvm_pkg__03a__03auvm_vreg_field::~Vtb_top_uvm_pkg__03a__03auvm_vreg_field() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg_field::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_vreg_field::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg_field::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_vreg_field::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_vreg_field::to_string_middle\n"); );
    // Body
    std::string out;
    out += "parent:" + VL_TO_STRING(__PVT__parent);
    out += ", lsb:" + VL_TO_STRING(__PVT__lsb);
    out += ", size:" + VL_TO_STRING(__PVT__size);
    out += ", fname:" + VL_TO_STRING(__PVT__fname);
    out += ", lineno:" + VL_TO_STRING(__PVT__lineno);
    out += ", read_in_progress:" + VL_TO_STRING(__PVT__read_in_progress);
    out += ", write_in_progress:" + VL_TO_STRING(__PVT__write_in_progress);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
