// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_field_op__Vclpkg::__VnoInFunc_m_get_available_op(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_field_op> &m_get_available_op__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_field_op__Vclpkg::__VnoInFunc_m_get_available_op\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_field_op> field_op;
    if (VL_LTS_III(32, 0U, this->__Vnontrivs.__PVT__m_recycled_op.size())) {
        field_op = this->__Vnontrivs.__PVT__m_recycled_op.pop_back();
    } else {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pi056e729a__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "field_op"s, VlNull{}, ""s, field_op);
    }
    m_get_available_op__Vfuncrtn = field_op;
}

void Vtb_top_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi056e729a> __Vfunc_get__Vfuncout_846;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pi056e729a__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_846);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_846;
}

void Vtb_top_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_field_op> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_field_op, vlProcess, vlSymsp, ""s);
    } else {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_field_op, vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vtb_top_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_field_op"s;
}

void Vtb_top_uvm_pkg__03a__03auvm_field_op::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_field_op::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__m_is_set = 0U;
    this->__PVT__m_user_hook = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_set(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*27:0*/ op_type, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_policy> policy, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_set\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_847;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1358;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_1361;
    __Vtask_uvm_report_error__verbosity_1361 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_1363;
    __Vtask_uvm_report_error__line_1363 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_1365;
    __Vtask_uvm_report_error__report_enabled_checked_1365 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_849;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1366;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_850;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1367;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_1370;
    __Vtask_uvm_report_error__verbosity_1370 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_1372;
    __Vtask_uvm_report_error__line_1372 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_1374;
    __Vtask_uvm_report_error__report_enabled_checked_1374 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_851;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1375;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_8;
    ::IData/*31:0*/ __VlefCall_7__get_report_action;
    ::IData/*31:0*/ __VlefCall_6__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_5__uvm_get_report_object;
    ::std::string __VlefCall_4__m_uvm_string_queue_join;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlQueue<::std::string> unnamedblk1__DOT__msg_queue;
    ::IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__i;
    unnamedblk1__DOT__unnamedblk2__DOT__i = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk1__DOT__unnamedblk3__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk4__DOT___local_report_object_;
    ::VlQueue<::std::string> matching_ops;
    matching_ops.clear();
    matching_ops.atDefault().clear();
    if ((0U != (1U & op_type))) {
        matching_ops.push_back("UVM_COPY"s);
    }
    if ((0U != (4U & op_type))) {
        matching_ops.push_back("UVM_COMPARE"s);
    }
    if ((0U != (0x00000010U & op_type))) {
        matching_ops.push_back("UVM_PRINT"s);
    }
    if ((0U != (0x00000040U & op_type))) {
        matching_ops.push_back("UVM_RECORD"s);
    }
    if ((0U != (0x00000100U & op_type))) {
        matching_ops.push_back("UVM_PACK"s);
    }
    if ((0U != (0x00000400U & op_type))) {
        matching_ops.push_back("UVM_UNPACK"s);
    }
    if ((0U != (0x00000800U & op_type))) {
        matching_ops.push_back("UVM_SET"s);
    }
    if (VL_LTS_III(32, 1U, matching_ops.size())) {
        unnamedblk1__DOT__msg_queue.clear();
        unnamedblk1__DOT__msg_queue.atDefault().clear();
        unnamedblk1__DOT__msg_queue.push_back("("s);
        unnamedblk1__DOT__unnamedblk2__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk1__DOT__unnamedblk2__DOT__i, matching_ops.size())) {
            unnamedblk1__DOT__msg_queue.push_back(matching_ops.at(unnamedblk1__DOT__unnamedblk2__DOT__i));
            if ((unnamedblk1__DOT__unnamedblk2__DOT__i 
                 != (matching_ops.size() - (::IData)(1U)))) {
                unnamedblk1__DOT__msg_queue.push_back(","s);
            }
            unnamedblk1__DOT__unnamedblk2__DOT__i = 
                ((::IData)(1U) + unnamedblk1__DOT__unnamedblk2__DOT__i);
        }
        unnamedblk1__DOT__msg_queue.push_back(")"s);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_847);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
            = __Vfunc_get__Vfuncout_847;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1358);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
            = __Vtask_get_root__Vfuncout_1358;
        __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
        VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_field_op.svh", 117)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk1__DOT__unnamedblk3__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk3__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_field_op.svh", 117)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "UVM/FIELD_OP/SET_BAD_OP_TYPE"s, __VlefCall_1__get_report_verbosity_level);
        __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
        if (__VlefLogAnd_3) {
            VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk3__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_field_op.svh", 117)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "UVM/FIELD_OP/SET_BAD_OP_TYPE"s, __VlefCall_2__get_report_action);
            __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_3))) {
            this->__Vfunc_m_uvm_string_queue_join__Vfuncout_848 = ""s;
            this->__Vfunc_m_uvm_string_queue_join__Vfuncout_848 
                = VL_CVT_PACK_STR_ND(VL_STREAMR_NRI(0, unnamedblk1__DOT__msg_queue, 1U));
            __VlefCall_4__m_uvm_string_queue_join = this->__Vfunc_m_uvm_string_queue_join__Vfuncout_848;
            __Vtask_uvm_report_error__report_enabled_checked_1365 = 1U;
            this->__Vtask_uvm_report_error__context_name_1364 = ""s;
            __Vtask_uvm_report_error__line_1363 = 0x00000075U;
            this->__Vtask_uvm_report_error__filename_1362 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_field_op.svh"s;
            __Vtask_uvm_report_error__verbosity_1361 = 0U;
            this->__Vtask_uvm_report_error__message_1360 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN("set() was passed op_type matching multiple operations: "s, __VlefCall_4__m_uvm_string_queue_join));
            this->__Vtask_uvm_report_error__id_1359 = "UVM/FIELD_OP/SET_BAD_OP_TYPE"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_849);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__Vfuncout_849;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1366);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__Vfuncout_1366;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_1359, this->__Vtask_uvm_report_error__message_1360, __Vtask_uvm_report_error__verbosity_1361, this->__Vtask_uvm_report_error__filename_1362, __Vtask_uvm_report_error__line_1363, this->__Vtask_uvm_report_error__context_name_1364, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_1365));
        }
    }
    if (this->__PVT__m_is_set) {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_850);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
            = __Vfunc_get__Vfuncout_850;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1367);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
            = __Vtask_get_root__Vfuncout_1367;
        __VlefCall_5__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
        VL_NULL_CHECK(__VlefCall_5__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_field_op.svh", 127)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk4__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk4__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_field_op.svh", 127)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "UVM/FIELD_OP/SET"s, __VlefCall_6__get_report_verbosity_level);
        __VlefLogAnd_8 = VL_LTES_III(32, 0U, __VlefCall_6__get_report_verbosity_level);
        if (__VlefLogAnd_8) {
            VL_NULL_CHECK(unnamedblk4__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_field_op.svh", 127)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "UVM/FIELD_OP/SET"s, __VlefCall_7__get_report_action);
            __VlefLogAnd_8 = (0U != __VlefCall_7__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_8))) {
            __Vtask_uvm_report_error__report_enabled_checked_1374 = 1U;
            this->__Vtask_uvm_report_error__context_name_1373 = ""s;
            __Vtask_uvm_report_error__line_1372 = 0x0000007fU;
            this->__Vtask_uvm_report_error__filename_1371 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_field_op.svh"s;
            __Vtask_uvm_report_error__verbosity_1370 = 0U;
            this->__Vtask_uvm_report_error__message_1369 = "Attempting to set values in policy without flushing"s;
            this->__Vtask_uvm_report_error__id_1368 = "UVM/FIELD_OP/SET"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_851);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__Vfuncout_851;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1375);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__Vfuncout_1375;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_1368, this->__Vtask_uvm_report_error__message_1369, __Vtask_uvm_report_error__verbosity_1370, this->__Vtask_uvm_report_error__filename_1371, __Vtask_uvm_report_error__line_1372, this->__Vtask_uvm_report_error__context_name_1373, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_1374));
        }
    } else {
        this->__PVT__m_op_type = op_type;
        this->__PVT__m_policy = policy;
        this->__PVT__m_object = rhs;
        this->__PVT__m_is_set = 1U;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_get_op_type(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*27:0*/ &get_op_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_get_op_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_852;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1376;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_1379;
    __Vtask_uvm_report_error__verbosity_1379 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_1381;
    __Vtask_uvm_report_error__line_1381 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_1383;
    __Vtask_uvm_report_error__report_enabled_checked_1383 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_853;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1384;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk5__DOT___local_report_object_;
    get_op_type__Vfuncrtn = 0U;
    if (this->__PVT__m_is_set) {
        get_op_type__Vfuncrtn = this->__PVT__m_op_type;
    } else {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_852);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
            = __Vfunc_get__Vfuncout_852;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1376);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
            = __Vtask_get_root__Vfuncout_1376;
        __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
        VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_field_op.svh", 177)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk5__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk5__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_field_op.svh", 177)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "UVM/FIELD_OP/GET_OP_TYPE"s, __VlefCall_1__get_report_verbosity_level);
        __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
        if (__VlefLogAnd_3) {
            VL_NULL_CHECK(unnamedblk5__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_field_op.svh", 177)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "UVM/FIELD_OP/GET_OP_TYPE"s, __VlefCall_2__get_report_action);
            __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_3))) {
            __Vtask_uvm_report_error__report_enabled_checked_1383 = 1U;
            this->__Vtask_uvm_report_error__context_name_1382 = ""s;
            __Vtask_uvm_report_error__line_1381 = 0x000000b1U;
            this->__Vtask_uvm_report_error__filename_1380 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_field_op.svh"s;
            __Vtask_uvm_report_error__verbosity_1379 = 0U;
            this->__Vtask_uvm_report_error__message_1378 = "Calling get_op_type() before calling set() is not allowed"s;
            this->__Vtask_uvm_report_error__id_1377 = "UVM/FIELD_OP/GET_OP_TYPE"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_853);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__Vfuncout_853;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1384);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__Vfuncout_1384;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_1377, this->__Vtask_uvm_report_error__message_1378, __Vtask_uvm_report_error__verbosity_1379, this->__Vtask_uvm_report_error__filename_1380, __Vtask_uvm_report_error__line_1381, this->__Vtask_uvm_report_error__context_name_1382, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_1383));
        }
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_get_policy(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_policy> &get_policy__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_get_policy\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_854;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1385;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_1388;
    __Vtask_uvm_report_error__verbosity_1388 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_1390;
    __Vtask_uvm_report_error__line_1390 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_1392;
    __Vtask_uvm_report_error__report_enabled_checked_1392 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_855;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1393;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk6__DOT___local_report_object_;
    if (this->__PVT__m_is_set) {
        get_policy__Vfuncrtn = this->__PVT__m_policy;
    } else {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_854);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
            = __Vfunc_get__Vfuncout_854;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1385);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
            = __Vtask_get_root__Vfuncout_1385;
        __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
        VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_field_op.svh", 190)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk6__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk6__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_field_op.svh", 190)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "UVM/FIELD_OP/GET_POLICY"s, __VlefCall_1__get_report_verbosity_level);
        __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
        if (__VlefLogAnd_3) {
            VL_NULL_CHECK(unnamedblk6__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_field_op.svh", 190)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "UVM/FIELD_OP/GET_POLICY"s, __VlefCall_2__get_report_action);
            __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_3))) {
            __Vtask_uvm_report_error__report_enabled_checked_1392 = 1U;
            this->__Vtask_uvm_report_error__context_name_1391 = ""s;
            __Vtask_uvm_report_error__line_1390 = 0x000000beU;
            this->__Vtask_uvm_report_error__filename_1389 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_field_op.svh"s;
            __Vtask_uvm_report_error__verbosity_1388 = 0U;
            this->__Vtask_uvm_report_error__message_1387 = "Attempting to call get_policy() before calling set() is not allowed"s;
            this->__Vtask_uvm_report_error__id_1386 = "UVM/FIELD_OP/GET_POLICY"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_855);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__Vfuncout_855;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1393);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__Vfuncout_1393;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_1386, this->__Vtask_uvm_report_error__message_1387, __Vtask_uvm_report_error__verbosity_1388, this->__Vtask_uvm_report_error__filename_1389, __Vtask_uvm_report_error__line_1390, this->__Vtask_uvm_report_error__context_name_1391, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_1392));
        }
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_get_rhs(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &get_rhs__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_get_rhs\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_856;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1394;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_1397;
    __Vtask_uvm_report_error__verbosity_1397 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_1399;
    __Vtask_uvm_report_error__line_1399 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_1401;
    __Vtask_uvm_report_error__report_enabled_checked_1401 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_857;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1402;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk7__DOT___local_report_object_;
    if (this->__PVT__m_is_set) {
        get_rhs__Vfuncrtn = this->__PVT__m_object;
    } else {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_856);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
            = __Vfunc_get__Vfuncout_856;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1394);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
            = __Vtask_get_root__Vfuncout_1394;
        __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
        VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_field_op.svh", 202)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk7__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk7__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_field_op.svh", 202)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "UVM/FIELD_OP/GET_RHS"s, __VlefCall_1__get_report_verbosity_level);
        __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
        if (__VlefLogAnd_3) {
            VL_NULL_CHECK(unnamedblk7__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_field_op.svh", 202)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "UVM/FIELD_OP/GET_RHS"s, __VlefCall_2__get_report_action);
            __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_3))) {
            __Vtask_uvm_report_error__report_enabled_checked_1401 = 1U;
            this->__Vtask_uvm_report_error__context_name_1400 = ""s;
            __Vtask_uvm_report_error__line_1399 = 0x000000caU;
            this->__Vtask_uvm_report_error__filename_1398 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_field_op.svh"s;
            __Vtask_uvm_report_error__verbosity_1397 = 0U;
            this->__Vtask_uvm_report_error__message_1396 = "Calling get_rhs() before calling set() is not allowed"s;
            this->__Vtask_uvm_report_error__id_1395 = "UVM/FIELD_OP/GET_RHS"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_857);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__Vfuncout_857;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1402);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__Vfuncout_1402;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_1395, this->__Vtask_uvm_report_error__message_1396, __Vtask_uvm_report_error__verbosity_1397, this->__Vtask_uvm_report_error__filename_1398, __Vtask_uvm_report_error__line_1399, this->__Vtask_uvm_report_error__context_name_1400, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_1401));
        }
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_user_hook_enabled(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &user_hook_enabled__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_user_hook_enabled\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_858;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1403;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_1406;
    __Vtask_uvm_report_error__verbosity_1406 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_1408;
    __Vtask_uvm_report_error__line_1408 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_1410;
    __Vtask_uvm_report_error__report_enabled_checked_1410 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_859;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1411;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk8__DOT___local_report_object_;
    user_hook_enabled__Vfuncrtn = 0U;
    if (this->__PVT__m_is_set) {
        user_hook_enabled__Vfuncrtn = this->__PVT__m_user_hook;
    } else {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_858);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
            = __Vfunc_get__Vfuncout_858;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1403);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
            = __Vtask_get_root__Vfuncout_1403;
        __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
        VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_field_op.svh", 214)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk8__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk8__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_field_op.svh", 214)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "UVM/FIELD_OP/GET_USER_HOOK"s, __VlefCall_1__get_report_verbosity_level);
        __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
        if (__VlefLogAnd_3) {
            VL_NULL_CHECK(unnamedblk8__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_field_op.svh", 214)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "UVM/FIELD_OP/GET_USER_HOOK"s, __VlefCall_2__get_report_action);
            __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_3))) {
            __Vtask_uvm_report_error__report_enabled_checked_1410 = 1U;
            this->__Vtask_uvm_report_error__context_name_1409 = ""s;
            __Vtask_uvm_report_error__line_1408 = 0x000000d6U;
            this->__Vtask_uvm_report_error__filename_1407 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_field_op.svh"s;
            __Vtask_uvm_report_error__verbosity_1406 = 0U;
            this->__Vtask_uvm_report_error__message_1405 = "Attempting to get_user_hook before calling set() is not allowed"s;
            this->__Vtask_uvm_report_error__id_1404 = "UVM/FIELD_OP/GET_USER_HOOK"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_859);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__Vfuncout_859;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1411);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__Vfuncout_1411;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_1404, this->__Vtask_uvm_report_error__message_1405, __Vtask_uvm_report_error__verbosity_1406, this->__Vtask_uvm_report_error__filename_1407, __Vtask_uvm_report_error__line_1408, this->__Vtask_uvm_report_error__context_name_1409, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_1410));
        }
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_flush(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_flush\n"); );
    // Body
    this->__PVT__m_policy = VlNull{};
    this->__PVT__m_object = VlNull{};
    this->__PVT__m_user_hook = 1U;
    this->__PVT__m_is_set = 0U;
}

void Vtb_top_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_m_recycle(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_m_recycle\n"); );
    // Body
    this->__VnoInFunc_flush(vlSymsp);
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_field_op__Vclpkg.__Vnontrivs.__PVT__m_recycled_op.push_back(
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_field_op>{this});
}

void Vtb_top_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_field_op::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_field_op::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_field_op::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_field_op::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_field_op::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_field_op::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_field_op::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_field_op::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_user_hook = 0;
    __PVT__m_is_set = 0;
    __PVT__m_op_type = 0;
}

Vtb_top_uvm_pkg__03a__03auvm_field_op::~Vtb_top_uvm_pkg__03a__03auvm_field_op() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_field_op::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_field_op::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_field_op::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_field_op::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_field_op::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_policy:" + VL_TO_STRING(__PVT__m_policy);
    out += ", m_user_hook:" + VL_TO_STRING(__PVT__m_user_hook);
    out += ", m_object:" + VL_TO_STRING(__PVT__m_object);
    out += ", m_is_set:" + VL_TO_STRING(__PVT__m_is_set);
    out += ", m_op_type:" + VL_TO_STRING(__PVT__m_op_type);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
