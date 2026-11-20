// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_reg_read_only_cbs__Vclpkg::__VnoInFunc_get(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_read_only_cbs> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_reg_read_only_cbs__Vclpkg::__VnoInFunc_get\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    if ((VlNull{} == this->__Vnontrivs.__PVT__m_me)) {
        this->__Vnontrivs.__PVT__m_me = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_reg_read_only_cbs, vlProcess, vlSymsp, "uvm_reg_read_only_cbs"s);
    }
    get__Vfuncrtn = this->__Vnontrivs.__PVT__m_me;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_read_only_cbs__Vclpkg::__VnoInFunc_add(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg> rg) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_reg_read_only_cbs__Vclpkg::__VnoInFunc_add\n"); );
    // Body
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_read_only_cbs> __VlefCall_1__get;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_read_only_cbs> __VlefCall_0__get;
    ::IData/*31:0*/ unnamedblk3__DOT__i;
    unnamedblk3__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk3__DOT__i__Vloopsize;
    unnamedblk3__DOT__i__Vloopsize = 0;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_field>> flds;
    flds.clear();
    this->__VnoInFunc_get(vlSymsp, __VlefCall_0__get);
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_callbacks__pif2d69877__Vclpkg.__VnoInFunc_add(vlSymsp, rg, __VlefCall_0__get, 0U);
    VL_NULL_CHECK(rg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_cbs.svh", 270)->__VnoInFunc_get_fields(vlSymsp, flds);
    unnamedblk3__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk3__DOT__i, flds.size())) {
        unnamedblk3__DOT__i__Vloopsize = flds.size();
        this->__VnoInFunc_get(vlSymsp, __VlefCall_1__get);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_callbacks__pi67d85f05__Vclpkg.__VnoInFunc_add(vlSymsp, flds.at(unnamedblk3__DOT__i), __VlefCall_1__get, 0U);
        if ((unnamedblk3__DOT__i__Vloopsize <= flds.size())) {
            unnamedblk3__DOT__i = ((::IData)(1U) + unnamedblk3__DOT__i);
        }
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_read_only_cbs__Vclpkg::__VnoInFunc_remove(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg> rg) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_reg_read_only_cbs__Vclpkg::__VnoInFunc_remove\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_first__Vfuncout_3598;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_next__Vfuncout_3599;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_read_only_cbs> __VlefCall_4__get;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_read_only_cbs> __VlefCall_3__get;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_cbs> __VlefCall_2__get_cb;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_read_only_cbs> __VlefCall_1__get;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_cbs> __VlefCall_0__get_cb;
    ::IData/*31:0*/ unnamedblk4__DOT__i;
    unnamedblk4__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk4__DOT__i__Vloopsize;
    unnamedblk4__DOT__i__Vloopsize = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pif1ab9aeb> cbs;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_field>> flds;
    {
        cbs = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pif1ab9aeb, vlProcess, vlSymsp, rg);
        flds.clear();
        VL_NULL_CHECK(cbs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_cbs.svh", 283)->__VnoInFunc_first(vlProcess, vlSymsp, __Vtask_first__Vfuncout_3598);
        while (true) {
            VL_NULL_CHECK(cbs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_cbs.svh", 284)->__VnoInFunc_get_cb(vlSymsp, __VlefCall_0__get_cb);
            this->__VnoInFunc_get(vlSymsp, __VlefCall_1__get);
            if (!((__VlefCall_0__get_cb != __VlefCall_1__get))) break;
            VL_NULL_CHECK(cbs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_cbs.svh", 285)->__VnoInFunc_get_cb(vlSymsp, __VlefCall_2__get_cb);
            if ((VlNull{} == __VlefCall_2__get_cb)) {
                goto __Vlabel0;
            }
            VL_NULL_CHECK(cbs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_cbs.svh", 290)->__VnoInFunc_next(vlProcess, vlSymsp, __Vtask_next__Vfuncout_3599);
        }
        this->__VnoInFunc_get(vlSymsp, __VlefCall_3__get);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_callbacks__pif2d69877__Vclpkg.__VnoInFunc_delete(vlSymsp, rg, __VlefCall_3__get);
        VL_NULL_CHECK(rg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_cbs.svh", 293)->__VnoInFunc_get_fields(vlSymsp, flds);
        unnamedblk4__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk4__DOT__i, flds.size())) {
            unnamedblk4__DOT__i__Vloopsize = flds.size();
            this->__VnoInFunc_get(vlSymsp, __VlefCall_4__get);
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_callbacks__pi67d85f05__Vclpkg.__VnoInFunc_delete(vlSymsp, flds.at(unnamedblk4__DOT__i), __VlefCall_4__get);
            if ((unnamedblk4__DOT__i__Vloopsize <= flds.size())) {
                unnamedblk4__DOT__i = ((::IData)(1U) 
                                       + unnamedblk4__DOT__i);
            }
        }
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_read_only_cbs::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_uvm_pkg__03a__03auvm_reg_cbs::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_read_only_cbs::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_read_only_cbs::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_read_only_cbs::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_registry__pif3001831> __Vfunc_get__Vfuncout_1516;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pif3001831__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1516);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_1516;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_read_only_cbs::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_read_only_cbs::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_read_only_cbs> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_reg_read_only_cbs, vlProcess, vlSymsp, "uvm_reg_read_only_cbs"s);
    } else {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_reg_read_only_cbs, vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_read_only_cbs::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_read_only_cbs::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_read_only_cbs"s;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_read_only_cbs::__VnoInFunc_pre_write(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_read_only_cbs::__VnoInFunc_pre_write\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1517;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3589;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_3592;
    __Vtask_uvm_report_error__verbosity_3592 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_3594;
    __Vtask_uvm_report_error__line_3594 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3596;
    __Vtask_uvm_report_error__report_enabled_checked_3596 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1518;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3597;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_7;
    ::IData/*31:0*/ __VlefCall_6__get_report_action;
    ::IData/*31:0*/ __VlefCall_5__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_4__uvm_get_report_object;
    ::IData/*31:0*/ __VlefExpr_3;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> __VlefCall_2__get_element;
    ::IData/*31:0*/ __VlefCall_1__get_element_kind;
    ::IData/*31:0*/ __VlefCall_0__get_status;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_field> unnamedblk1__DOT__fld;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg> unnamedblk1__DOT__rg;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk2__DOT___local_report_object_;
    ::std::string name;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> obj;
    {
        name = ""s;
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_cbs.svh", 231)->__VnoInFunc_get_element(vlSymsp, obj);
        VL_NULL_CHECK(obj, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_cbs.svh", 232)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, name);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_cbs.svh", 234)->__VnoInFunc_get_status(vlSymsp, __VlefCall_0__get_status);
        if ((0U != __VlefCall_0__get_status)) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_cbs.svh", 240)->__VnoInFunc_get_element_kind(vlSymsp, __VlefCall_1__get_element_kind);
        if ((1U == __VlefCall_1__get_element_kind)) {
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_cbs.svh", 243)->__VnoInFunc_get_element(vlSymsp, __VlefCall_2__get_element);
            __VlefExpr_3 = VL_CAST_DYNAMIC(__VlefCall_2__get_element, unnamedblk1__DOT__fld);
            if (VL_UNLIKELY(((1U & (~ (0U != __VlefExpr_3)))))) {
                VL_WRITEF_NX("[%0t] %%Error: uvm_reg_cbs.svh:243: Assertion failed in %m: '$cast' failed.\n",3, 'M',vlSymsp->name(),"uvm_pkg.uvm_reg_read_only_cbs.pre_write.unnamedblk1", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_cbs.svh", 243, "");
            }
            VL_NULL_CHECK(unnamedblk1__DOT__fld, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_cbs.svh", 244)->__VnoInFunc_get_parent(vlSymsp, unnamedblk1__DOT__rg);
            VL_NULL_CHECK(unnamedblk1__DOT__rg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_cbs.svh", 245)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, name);
        }
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1517);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1517;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3589);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
            = __Vtask_get_root__Vfuncout_3589;
        __VlefCall_4__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
        VL_NULL_CHECK(__VlefCall_4__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_cbs.svh", 249)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk2__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk2__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_cbs.svh", 249)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "UVM/REG/READONLY"s, __VlefCall_5__get_report_verbosity_level);
        __VlefLogAnd_7 = VL_LTES_III(32, 0U, __VlefCall_5__get_report_verbosity_level);
        if (__VlefLogAnd_7) {
            VL_NULL_CHECK(unnamedblk2__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_cbs.svh", 249)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "UVM/REG/READONLY"s, __VlefCall_6__get_report_action);
            __VlefLogAnd_7 = (0U != __VlefCall_6__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_7))) {
            __Vtask_uvm_report_error__report_enabled_checked_3596 = 1U;
            this->__Vtask_uvm_report_error__context_name_3595 = ""s;
            __Vtask_uvm_report_error__line_3594 = 0x000000f9U;
            this->__Vtask_uvm_report_error__filename_3593 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_cbs.svh"s;
            __Vtask_uvm_report_error__verbosity_3592 = 0U;
            this->__Vtask_uvm_report_error__message_3591 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(name, " is read-only. Cannot call write() method."s));
            this->__Vtask_uvm_report_error__id_3590 = "UVM/REG/READONLY"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1518);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1518;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3597);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__Vfuncout_3597;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_3590, this->__Vtask_uvm_report_error__message_3591, __Vtask_uvm_report_error__verbosity_3592, this->__Vtask_uvm_report_error__filename_3593, __Vtask_uvm_report_error__line_3594, this->__Vtask_uvm_report_error__context_name_3595, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3596));
        }
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_cbs.svh", 251)->__VnoInFunc_set_status(vlSymsp, 1U);
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_read_only_cbs::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_read_only_cbs::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_read_only_cbs::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_read_only_cbs::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_read_only_cbs::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_read_only_cbs::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_read_only_cbs::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_read_only_cbs::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_read_only_cbs::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_read_only_cbs::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_top_uvm_pkg__03a__03auvm_reg_read_only_cbs::~Vtb_top_uvm_pkg__03a__03auvm_reg_read_only_cbs() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_read_only_cbs::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_reg_read_only_cbs::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_read_only_cbs::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_reg_read_only_cbs::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_read_only_cbs::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vtb_top_uvm_pkg__03a__03auvm_reg_cbs::to_string_middle();
    return (out);
}
