// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi05bf4996> __Vfunc_get__Vfuncout_1741;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pi05bf4996__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1741);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_1741;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_file> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_reg_file, vlProcess, vlSymsp, ""s);
    } else {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_reg_file, vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_file"s;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_file::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_file::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    this->__PVT__default_hdl_path = "RTL"s;
    /*super.new*/;
    this->__PVT__hdl_paths_pool = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_object_string_pool__pi7a622f08, vlProcess, vlSymsp, "hdl_paths"s);
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_block(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_block> &get_block__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_block\n"); );
    // Body
    get_block__Vfuncrtn = this->__PVT__parent;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_has_hdl_path(Vtb_top__Syms* __restrict vlSymsp, ::std::string kind, ::CData/*0:0*/ &has_hdl_path__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_has_hdl_path\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0__exists;
    has_hdl_path__Vfuncrtn = 0U;
    if ((""s == kind)) {
        if ((VlNull{} != this->__PVT__m_rf)) {
            VL_NULL_CHECK(this->__PVT__m_rf, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_file.svh", 235)->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
        } else {
            VL_NULL_CHECK(this->__PVT__parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_file.svh", 240)->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
        }
    }
    VL_NULL_CHECK(this->__PVT__hdl_paths_pool, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_file.svh", 245)->__VnoInFunc_exists(vlSymsp, kind, __VlefCall_0__exists);
    has_hdl_path__Vfuncrtn = (1U & __VlefCall_0__exists);
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_full_hdl_path(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlQueue<::std::string> &paths, ::std::string kind, ::std::string separator) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_full_hdl_path\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1742;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4448;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_4451;
    __Vtask_uvm_report_error__verbosity_4451 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_4453;
    __Vtask_uvm_report_error__line_4453 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_4455;
    __Vtask_uvm_report_error__report_enabled_checked_4455 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1743;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4456;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCall_5__size;
    ::CData/*0:0*/ __VlefLogAnd_4;
    ::IData/*31:0*/ __VlefCall_3__get_report_action;
    ::IData/*31:0*/ __VlefCall_2__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_1__uvm_get_report_object;
    ::CData/*0:0*/ __VlefCall_0__has_hdl_path;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk633__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_queue__Tz2757cb3c> unnamedblk634__DOT__hdl_paths;
    ::VlQueue<::std::string> unnamedblk634__DOT__parent_paths;
    ::IData/*31:0*/ unnamedblk634__DOT__unnamedblk635__DOT__i;
    ::std::string unnamedblk634__DOT__unnamedblk635__DOT__unnamedblk636__DOT__hdl_path;
    ::IData/*31:0*/ unnamedblk634__DOT__unnamedblk635__DOT__unnamedblk636__DOT__unnamedblk637__DOT__j;
    unnamedblk634__DOT__unnamedblk635__DOT__unnamedblk636__DOT__unnamedblk637__DOT__j = 0;
    {
        if ((""s == kind)) {
            this->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
        }
        this->__VnoInFunc_has_hdl_path(vlSymsp, kind, __VlefCall_0__has_hdl_path);
        if ((1U & (~ (::IData)(__VlefCall_0__has_hdl_path)))) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1742);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1742;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4448);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_4448;
            __VlefCall_1__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_1__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_file.svh", 299)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk633__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk633__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_file.svh", 299)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_2__get_report_verbosity_level);
            __VlefLogAnd_4 = VL_LTES_III(32, 0U, __VlefCall_2__get_report_verbosity_level);
            if (__VlefLogAnd_4) {
                VL_NULL_CHECK(unnamedblk633__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_file.svh", 299)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_3__get_report_action);
                __VlefLogAnd_4 = (0U != __VlefCall_3__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_4))) {
                __Vtask_uvm_report_error__report_enabled_checked_4455 = 1U;
                this->__Vtask_uvm_report_error__context_name_4454 = ""s;
                __Vtask_uvm_report_error__line_4453 = 0x0000012bU;
                this->__Vtask_uvm_report_error__filename_4452 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_file.svh"s;
                __Vtask_uvm_report_error__verbosity_4451 = 0U;
                this->__Vtask_uvm_report_error__message_4450 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("Register file does not have hdl path defined for abstraction '"s, kind), "'"s));
                this->__Vtask_uvm_report_error__id_4449 = "RegModel"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1743);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1743;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4456);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_4456;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_4449, this->__Vtask_uvm_report_error__message_4450, __Vtask_uvm_report_error__verbosity_4451, this->__Vtask_uvm_report_error__filename_4452, __Vtask_uvm_report_error__line_4453, this->__Vtask_uvm_report_error__context_name_4454, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_4455));
            }
            goto __Vlabel0;
        }
        paths.clear();
        VL_NULL_CHECK(this->__PVT__hdl_paths_pool, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_file.svh", 306)->__VnoInFunc_get(vlProcess, vlSymsp, kind, unnamedblk634__DOT__hdl_paths);
        unnamedblk634__DOT__parent_paths.clear();
        unnamedblk634__DOT__parent_paths.atDefault().clear();
        if ((VlNull{} != this->__PVT__m_rf)) {
            VL_NULL_CHECK(this->__PVT__m_rf, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_file.svh", 311)->__VnoInFunc_get_full_hdl_path(vlProcess, vlSymsp, unnamedblk634__DOT__parent_paths, kind, separator);
        } else if ((VlNull{} != this->__PVT__parent)) {
            VL_NULL_CHECK(this->__PVT__parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_file.svh", 316)->__VnoInFunc_get_full_hdl_path(vlProcess, vlSymsp, unnamedblk634__DOT__parent_paths, kind, separator);
        }
        unnamedblk634__DOT__unnamedblk635__DOT__i = 0U;
        unnamedblk634__DOT__unnamedblk635__DOT__i = 0U;
        while (true) {
            VL_NULL_CHECK(unnamedblk634__DOT__hdl_paths, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_file.svh", 320)->__VnoInFunc_size(vlSymsp, __VlefCall_5__size);
            if (!(VL_LTS_III(32, unnamedblk634__DOT__unnamedblk635__DOT__i, __VlefCall_5__size))) break;
            {
                VL_NULL_CHECK(unnamedblk634__DOT__hdl_paths, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_file.svh", 322)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk634__DOT__unnamedblk635__DOT__i, unnamedblk634__DOT__unnamedblk635__DOT__unnamedblk636__DOT__hdl_path);
                if ((0U == unnamedblk634__DOT__parent_paths.size())) {
                    if ((""s != unnamedblk634__DOT__unnamedblk635__DOT__unnamedblk636__DOT__hdl_path)) {
                        paths.push_back(unnamedblk634__DOT__unnamedblk635__DOT__unnamedblk636__DOT__hdl_path);
                    }
                    goto __Vlabel1;
                }
                unnamedblk634__DOT__unnamedblk635__DOT__unnamedblk636__DOT__unnamedblk637__DOT__j = 0U;
                while (VL_LTS_III(32, unnamedblk634__DOT__unnamedblk635__DOT__unnamedblk636__DOT__unnamedblk637__DOT__j, unnamedblk634__DOT__parent_paths.size())) {
                    if ((""s == unnamedblk634__DOT__unnamedblk635__DOT__unnamedblk636__DOT__hdl_path)) {
                        paths.push_back(unnamedblk634__DOT__parent_paths.at(unnamedblk634__DOT__unnamedblk635__DOT__unnamedblk636__DOT__unnamedblk637__DOT__j));
                    } else {
                        paths.push_back(VL_CONCATN_NNN(
                                                       VL_CONCATN_NNN(unnamedblk634__DOT__parent_paths.at(unnamedblk634__DOT__unnamedblk635__DOT__unnamedblk636__DOT__unnamedblk637__DOT__j), separator), unnamedblk634__DOT__unnamedblk635__DOT__unnamedblk636__DOT__hdl_path));
                    }
                    unnamedblk634__DOT__unnamedblk635__DOT__unnamedblk636__DOT__unnamedblk637__DOT__j 
                        = ((::IData)(1U) + unnamedblk634__DOT__unnamedblk635__DOT__unnamedblk636__DOT__unnamedblk637__DOT__j);
                }
                __Vlabel1: ;
            }
            unnamedblk634__DOT__unnamedblk635__DOT__i 
                = ((::IData)(1U) + unnamedblk634__DOT__unnamedblk635__DOT__i);
        }
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_default_hdl_path(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_default_hdl_path__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_default_hdl_path\n"); );
    // Body
    {
        get_default_hdl_path__Vfuncrtn = ""s;
        if ((""s == this->__PVT__default_hdl_path)) {
            if ((VlNull{} != this->__PVT__m_rf)) {
                VL_NULL_CHECK(this->__PVT__m_rf, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_file.svh", 361)->__VnoInFunc_get_default_hdl_path(vlSymsp, get_default_hdl_path__Vfuncrtn);
            } else {
                VL_NULL_CHECK(this->__PVT__parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_file.svh", 366)->__VnoInFunc_get_default_hdl_path(vlSymsp, get_default_hdl_path__Vfuncrtn);
            }
            goto __Vlabel0;
        }
        get_default_hdl_path__Vfuncrtn = this->__PVT__default_hdl_path;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_parent(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_block> &get_parent__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_parent\n"); );
    // Body
    this->__VnoInFunc_get_block(vlSymsp, get_parent__Vfuncrtn);
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_full_name(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_full_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_full_name\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_1__get_full_name;
    ::std::string __VlefCall_0__get_full_name;
    {
        get_full_name__Vfuncrtn = ""s;
        this->__VnoInFunc_get_name(vlSymsp, get_full_name__Vfuncrtn);
        if ((VlNull{} != this->__PVT__m_rf)) {
            VL_NULL_CHECK(this->__PVT__m_rf, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_file.svh", 420)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
            get_full_name__Vfuncrtn = VL_CONCATN_NNN(
                                                     VL_CONCATN_NNN(__VlefCall_0__get_full_name, "."s), get_full_name__Vfuncrtn);
            goto __Vlabel0;
        }
        if ((VlNull{} == this->__PVT__parent)) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_file.svh", 430)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
        get_full_name__Vfuncrtn = VL_CONCATN_NNN(VL_CONCATN_NNN(__VlefCall_1__get_full_name, "."s), get_full_name__Vfuncrtn);
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_convert2string\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1744;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4457;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk639__DOT___local_report_object_;
    convert2string__Vfuncrtn = ""s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1744);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1744;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4457);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
        = __Vtask_get_root__Vfuncout_4457;
    __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
    VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_file.svh", 441)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk639__DOT___local_report_object_);
    VL_NULL_CHECK(unnamedblk639__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_file.svh", 441)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 3U, "RegModel"s, __VlefCall_1__get_report_verbosity_level);
    __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
    if (__VlefLogAnd_3) {
        VL_NULL_CHECK(unnamedblk639__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_file.svh", 441)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 3U, "RegModel"s, __VlefCall_2__get_report_action);
        __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
    }
    if (VL_UNLIKELY((__VlefLogAnd_3))) {
        vlSymsp->vlInst.TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, "RegModel register files cannot be converted to strings"s, 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_file.svh"s, 0x000001b9U, ""s, 1U);
    }
    convert2string__Vfuncrtn = ""s;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_do_print\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_clone(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_clone\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1745;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4458;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk640__DOT___local_report_object_;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1745);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1745;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4458);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
        = __Vtask_get_root__Vfuncout_4458;
    __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
    VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_file.svh", 457)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk640__DOT___local_report_object_);
    VL_NULL_CHECK(unnamedblk640__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_file.svh", 457)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 3U, "RegModel"s, __VlefCall_1__get_report_verbosity_level);
    __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
    if (__VlefLogAnd_3) {
        VL_NULL_CHECK(unnamedblk640__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_file.svh", 457)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 3U, "RegModel"s, __VlefCall_2__get_report_action);
        __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
    }
    if (VL_UNLIKELY((__VlefLogAnd_3))) {
        vlSymsp->vlInst.TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, "RegModel register files cannot be cloned"s, 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_file.svh"s, 0x000001c9U, ""s, 1U);
    }
    clone__Vfuncrtn = VlNull{};
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_do_copy\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1746;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4459;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk641__DOT___local_report_object_;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1746);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1746;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4459);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
        = __Vtask_get_root__Vfuncout_4459;
    __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
    VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_file.svh", 464)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk641__DOT___local_report_object_);
    VL_NULL_CHECK(unnamedblk641__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_file.svh", 464)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 3U, "RegModel"s, __VlefCall_1__get_report_verbosity_level);
    __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
    if (__VlefLogAnd_3) {
        VL_NULL_CHECK(unnamedblk641__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_file.svh", 464)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 3U, "RegModel"s, __VlefCall_2__get_report_action);
        __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
    }
    if (VL_UNLIKELY((__VlefLogAnd_3))) {
        vlSymsp->vlInst.TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, "RegModel register files cannot be copied"s, 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_file.svh"s, 0x000001d0U, ""s, 1U);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_do_compare(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> rhs, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_comparer> comparer, ::CData/*0:0*/ &do_compare__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_do_compare\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1747;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4460;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_4463;
    __Vtask_uvm_report_warning__verbosity_4463 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_4465;
    __Vtask_uvm_report_warning__line_4465 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_4467;
    __Vtask_uvm_report_warning__report_enabled_checked_4467 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1748;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4468;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk642__DOT___local_report_object_;
    do_compare__Vfuncrtn = 0U;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1747);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1747;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4460);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
        = __Vtask_get_root__Vfuncout_4460;
    __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
    VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_file.svh", 472)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk642__DOT___local_report_object_);
    VL_NULL_CHECK(unnamedblk642__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_file.svh", 472)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_1__get_report_verbosity_level);
    __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
    if (__VlefLogAnd_3) {
        VL_NULL_CHECK(unnamedblk642__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_file.svh", 472)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_2__get_report_action);
        __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
    }
    if (VL_UNLIKELY((__VlefLogAnd_3))) {
        __Vtask_uvm_report_warning__report_enabled_checked_4467 = 1U;
        this->__Vtask_uvm_report_warning__context_name_4466 = ""s;
        __Vtask_uvm_report_warning__line_4465 = 0x000001d8U;
        this->__Vtask_uvm_report_warning__filename_4464 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_file.svh"s;
        __Vtask_uvm_report_warning__verbosity_4463 = 0U;
        this->__Vtask_uvm_report_warning__message_4462 = "RegModel register files cannot be compared"s;
        this->__Vtask_uvm_report_warning__id_4461 = "RegModel"s;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1748);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1748;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4468);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__Vfuncout_4468;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_4461, this->__Vtask_uvm_report_warning__message_4462, __Vtask_uvm_report_warning__verbosity_4463, this->__Vtask_uvm_report_warning__filename_4464, __Vtask_uvm_report_warning__line_4465, this->__Vtask_uvm_report_warning__context_name_4466, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_4467));
    }
    do_compare__Vfuncrtn = 0U;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_do_pack(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_do_pack\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1749;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4469;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_4472;
    __Vtask_uvm_report_warning__verbosity_4472 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_4474;
    __Vtask_uvm_report_warning__line_4474 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_4476;
    __Vtask_uvm_report_warning__report_enabled_checked_4476 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1750;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4477;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk643__DOT___local_report_object_;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1749);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1749;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4469);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
        = __Vtask_get_root__Vfuncout_4469;
    __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
    VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_file.svh", 480)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk643__DOT___local_report_object_);
    VL_NULL_CHECK(unnamedblk643__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_file.svh", 480)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_1__get_report_verbosity_level);
    __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
    if (__VlefLogAnd_3) {
        VL_NULL_CHECK(unnamedblk643__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_file.svh", 480)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_2__get_report_action);
        __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
    }
    if (VL_UNLIKELY((__VlefLogAnd_3))) {
        __Vtask_uvm_report_warning__report_enabled_checked_4476 = 1U;
        this->__Vtask_uvm_report_warning__context_name_4475 = ""s;
        __Vtask_uvm_report_warning__line_4474 = 0x000001e0U;
        this->__Vtask_uvm_report_warning__filename_4473 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_file.svh"s;
        __Vtask_uvm_report_warning__verbosity_4472 = 0U;
        this->__Vtask_uvm_report_warning__message_4471 = "RegModel register files cannot be packed"s;
        this->__Vtask_uvm_report_warning__id_4470 = "RegModel"s;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1750);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1750;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4477);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__Vfuncout_4477;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_4470, this->__Vtask_uvm_report_warning__message_4471, __Vtask_uvm_report_warning__verbosity_4472, this->__Vtask_uvm_report_warning__filename_4473, __Vtask_uvm_report_warning__line_4474, this->__Vtask_uvm_report_warning__context_name_4475, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_4476));
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_do_unpack(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_do_unpack\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1751;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4478;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_4481;
    __Vtask_uvm_report_warning__verbosity_4481 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_4483;
    __Vtask_uvm_report_warning__line_4483 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_4485;
    __Vtask_uvm_report_warning__report_enabled_checked_4485 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1752;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4486;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk644__DOT___local_report_object_;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1751);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1751;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4478);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
        = __Vtask_get_root__Vfuncout_4478;
    __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
    VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_file.svh", 487)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk644__DOT___local_report_object_);
    VL_NULL_CHECK(unnamedblk644__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_file.svh", 487)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_1__get_report_verbosity_level);
    __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
    if (__VlefLogAnd_3) {
        VL_NULL_CHECK(unnamedblk644__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_file.svh", 487)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_2__get_report_action);
        __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
    }
    if (VL_UNLIKELY((__VlefLogAnd_3))) {
        __Vtask_uvm_report_warning__report_enabled_checked_4485 = 1U;
        this->__Vtask_uvm_report_warning__context_name_4484 = ""s;
        __Vtask_uvm_report_warning__line_4483 = 0x000001e7U;
        this->__Vtask_uvm_report_warning__filename_4482 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_file.svh"s;
        __Vtask_uvm_report_warning__verbosity_4481 = 0U;
        this->__Vtask_uvm_report_warning__message_4480 = "RegModel register files cannot be unpacked"s;
        this->__Vtask_uvm_report_warning__id_4479 = "RegModel"s;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1752);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1752;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4486);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__Vfuncout_4486;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_4479, this->__Vtask_uvm_report_warning__message_4480, __Vtask_uvm_report_warning__verbosity_4481, this->__Vtask_uvm_report_warning__filename_4482, __Vtask_uvm_report_warning__line_4483, this->__Vtask_uvm_report_warning__context_name_4484, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_4485));
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_file::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_file::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_top_uvm_pkg__03a__03auvm_reg_file::~Vtb_top_uvm_pkg__03a__03auvm_reg_file() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_file::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_reg_file::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_file::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_reg_file::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_file::to_string_middle\n"); );
    // Body
    std::string out;
    out += "parent:" + VL_TO_STRING(__PVT__parent);
    out += ", m_rf:" + VL_TO_STRING(__PVT__m_rf);
    out += ", default_hdl_path:" + VL_TO_STRING(__PVT__default_hdl_path);
    out += ", hdl_paths_pool:" + VL_TO_STRING(__PVT__hdl_paths_pool);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
