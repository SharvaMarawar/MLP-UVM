// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_registry__pic75a47a4> __Vfunc_get__Vfuncout_920;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pic75a47a4__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_920);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_920;
}

void Vtb_top_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_text_tr_stream> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_text_tr_stream, vlProcess, vlSymsp, "unnamed-uvm_text_tr_stream"s);
    } else {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_text_tr_stream, vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vtb_top_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_text_tr_stream"s;
}

void Vtb_top_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc_do_execute_op(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_field_op> op) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc_do_execute_op\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_execute_op(vlProcess, vlSymsp, op);
    this->__VnoInFunc____05Fm_uvm_execute_field_op(vlProcess, vlSymsp, op);
}

void Vtb_top_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc____05Fm_uvm_execute_field_op(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_field_op> ___05Flocal_op___05F) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc____05Fm_uvm_execute_field_op\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefExpr_14;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> __VlefCall_13__get_rhs;
    ::IData/*31:0*/ __VlefExpr_12;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_policy> __VlefCall_11__get_policy;
    ::IData/*31:0*/ __VlefExpr_10;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_policy> __VlefCall_9__get_policy;
    ::IData/*31:0*/ __VlefExpr_8;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_policy> __VlefCall_7__get_policy;
    ::IData/*31:0*/ __VlefExpr_6;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_policy> __VlefCall_5__get_policy;
    ::IData/*31:0*/ __VlefExpr_4;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_policy> __VlefCall_3__get_policy;
    ::IData/*31:0*/ __VlefExpr_2;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> __VlefCall_1__get_rhs;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> __VlefCall_0__get_rhs;
    ::IData/*27:0*/ local_op_type___05F;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_text_tr_stream> local_rhs___05F;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_base> local_rsrc___05F;
    ::std::string local_rsrc_name___05F;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer> ___05Flocal_printer___05F;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_comparer> ___05Flocal_comparer___05F;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_recorder> ___05Flocal_recorder___05F;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_packer> ___05Flocal_packer___05F;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_copier> ___05Flocal_copier___05F;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_queue__Tz613e3271> ___05Flocal_field_names___05F;
    {
        local_op_type___05F = 0U;
        local_rsrc_name___05F = ""s;
        VL_NULL_CHECK(___05Flocal_op___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_text_tr_stream.svh", 51)->__VnoInFunc_get_rhs(vlProcess, vlSymsp, __VlefCall_0__get_rhs);
        std::ignore = VL_CAST_DYNAMIC(__VlefCall_0__get_rhs, local_rhs___05F);
        VL_NULL_CHECK(___05Flocal_op___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_text_tr_stream.svh", 51)->__VnoInFunc_get_rhs(vlProcess, vlSymsp, __VlefCall_1__get_rhs);
        __VlefExpr_2 = VL_CAST_DYNAMIC(__VlefCall_1__get_rhs, local_rsrc___05F);
        if (((0U != __VlefExpr_2) && (VlNull{} != local_rsrc___05F))) {
            VL_NULL_CHECK(local_rsrc___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_text_tr_stream.svh", 51)->__VnoInFunc_get_name(vlSymsp, local_rsrc_name___05F);
        }
        VL_NULL_CHECK(___05Flocal_op___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_text_tr_stream.svh", 51)->__VnoInFunc_get_op_type(vlProcess, vlSymsp, local_op_type___05F);
        if ((0x00000010U == local_op_type___05F)) {
            VL_NULL_CHECK(___05Flocal_op___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_text_tr_stream.svh", 51)->__VnoInFunc_get_policy(vlProcess, vlSymsp, __VlefCall_3__get_policy);
            __VlefExpr_4 = VL_CAST_DYNAMIC(__VlefCall_3__get_policy, ___05Flocal_printer___05F);
            if (VL_UNLIKELY(((1U & (~ (0U != __VlefExpr_4)))))) {
                VL_WRITEF_NX("[%0t] %%Error: uvm_text_tr_stream.svh:51: Assertion failed in %m: '$cast' failed.\n",3, 'M',vlSymsp->name(),"uvm_pkg.uvm_text_tr_stream.__m_uvm_execute_field_op", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_text_tr_stream.svh", 51, "");
            }
        } else if ((4U == local_op_type___05F)) {
            if ((VlNull{} == local_rhs___05F)) {
                goto __Vlabel0;
            }
            VL_NULL_CHECK(___05Flocal_op___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_text_tr_stream.svh", 51)->__VnoInFunc_get_policy(vlProcess, vlSymsp, __VlefCall_5__get_policy);
            __VlefExpr_6 = VL_CAST_DYNAMIC(__VlefCall_5__get_policy, ___05Flocal_comparer___05F);
            if (VL_UNLIKELY(((1U & (~ (0U != __VlefExpr_6)))))) {
                VL_WRITEF_NX("[%0t] %%Error: uvm_text_tr_stream.svh:51: Assertion failed in %m: '$cast' failed.\n",3, 'M',vlSymsp->name(),"uvm_pkg.uvm_text_tr_stream.__m_uvm_execute_field_op", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_text_tr_stream.svh", 51, "");
            }
        } else if ((0x00000040U == local_op_type___05F)) {
            VL_NULL_CHECK(___05Flocal_op___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_text_tr_stream.svh", 51)->__VnoInFunc_get_policy(vlProcess, vlSymsp, __VlefCall_7__get_policy);
            __VlefExpr_8 = VL_CAST_DYNAMIC(__VlefCall_7__get_policy, ___05Flocal_recorder___05F);
            if (VL_UNLIKELY(((1U & (~ (0U != __VlefExpr_8)))))) {
                VL_WRITEF_NX("[%0t] %%Error: uvm_text_tr_stream.svh:51: Assertion failed in %m: '$cast' failed.\n",3, 'M',vlSymsp->name(),"uvm_pkg.uvm_text_tr_stream.__m_uvm_execute_field_op", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_text_tr_stream.svh", 51, "");
            }
        } else if (((0x00000100U == local_op_type___05F) 
                    || (0x00000400U == local_op_type___05F))) {
            VL_NULL_CHECK(___05Flocal_op___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_text_tr_stream.svh", 51)->__VnoInFunc_get_policy(vlProcess, vlSymsp, __VlefCall_9__get_policy);
            __VlefExpr_10 = VL_CAST_DYNAMIC(__VlefCall_9__get_policy, ___05Flocal_packer___05F);
            if (VL_UNLIKELY(((1U & (~ (0U != __VlefExpr_10)))))) {
                VL_WRITEF_NX("[%0t] %%Error: uvm_text_tr_stream.svh:51: Assertion failed in %m: '$cast' failed.\n",3, 'M',vlSymsp->name(),"uvm_pkg.uvm_text_tr_stream.__m_uvm_execute_field_op", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_text_tr_stream.svh", 51, "");
            }
        } else if ((1U == local_op_type___05F)) {
            if ((VlNull{} == local_rhs___05F)) {
                goto __Vlabel0;
            }
            VL_NULL_CHECK(___05Flocal_op___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_text_tr_stream.svh", 51)->__VnoInFunc_get_policy(vlProcess, vlSymsp, __VlefCall_11__get_policy);
            __VlefExpr_12 = VL_CAST_DYNAMIC(__VlefCall_11__get_policy, ___05Flocal_copier___05F);
            if (VL_UNLIKELY(((1U & (~ (0U != __VlefExpr_12)))))) {
                VL_WRITEF_NX("[%0t] %%Error: uvm_text_tr_stream.svh:51: Assertion failed in %m: '$cast' failed.\n",3, 'M',vlSymsp->name(),"uvm_pkg.uvm_text_tr_stream.__m_uvm_execute_field_op", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_text_tr_stream.svh", 51, "");
            }
        } else if ((0x00000800U != local_op_type___05F)) {
            if ((0x00080002U == local_op_type___05F)) {
                VL_NULL_CHECK(___05Flocal_op___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_text_tr_stream.svh", 51)->__VnoInFunc_get_rhs(vlProcess, vlSymsp, __VlefCall_13__get_rhs);
                __VlefExpr_14 = VL_CAST_DYNAMIC(__VlefCall_13__get_rhs, ___05Flocal_field_names___05F);
                if (VL_UNLIKELY(((1U & (~ (0U != __VlefExpr_14)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: uvm_text_tr_stream.svh:51: Assertion failed in %m: '$cast' failed.\n",3, 'M',vlSymsp->name(),"uvm_pkg.uvm_text_tr_stream.__m_uvm_execute_field_op", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_text_tr_stream.svh", 51, "");
                }
            }
        }
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_text_tr_stream::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_uvm_pkg__03a__03auvm_tr_stream::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_text_tr_stream::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void Vtb_top_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc_do_open(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tr_database> db, ::std::string scope, ::std::string stream_type_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc_do_open\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_3__get_handle;
    ::std::string __VlefCall_2__get_name;
    ::CData/*0:0*/ __VlefCall_1__open_db;
    ::IData/*31:0*/ __VlefExpr_0;
    __VlefExpr_0 = VL_CAST_DYNAMIC(db, this->__PVT__m_text_db);
    if (VL_UNLIKELY(((1U & (~ (0U != __VlefExpr_0)))))) {
        VL_WRITEF_NX("[%0t] %%Error: uvm_text_tr_stream.svh:72: Assertion failed in %m: '$cast' failed.\n",3, 'M',vlSymsp->name(),"uvm_pkg.uvm_text_tr_stream.do_open", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_text_tr_stream.svh", 72, "");
    }
    VL_NULL_CHECK(this->__PVT__m_text_db, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_text_tr_stream.svh", 73)->__VnoInFunc_open_db(vlSymsp, __VlefCall_1__open_db);
    if (VL_UNLIKELY((__VlefCall_1__open_db))) {
        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
        this->__VnoInFunc_get_handle(vlSymsp, __VlefCall_3__get_handle);
        VL_FWRITEF_NX(VL_NULL_CHECK(this->__PVT__m_text_db, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_text_tr_stream.svh", 75)
                      ->__PVT__m_file,"  CREATE_STREAM @%0t {NAME:%s T:%s SCOPE:%s STREAM:%0d}\n",6, 'T',-9
                      , '#',64,VL_TIME_UNITED_Q(1000)
                      , 'S',&(__VlefCall_2__get_name)
                      , 'S',&(stream_type_name), 'S',&(scope)
                      , '~',32,__VlefCall_3__get_handle);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc_do_close(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc_do_close\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_4__get_handle;
    ::std::string __VlefCall_3__get_scope;
    ::std::string __VlefCall_2__get_stream_type_name;
    ::std::string __VlefCall_1__get_name;
    ::CData/*0:0*/ __VlefCall_0__open_db;
    VL_NULL_CHECK(this->__PVT__m_text_db, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_text_tr_stream.svh", 91)->__VnoInFunc_open_db(vlSymsp, __VlefCall_0__open_db);
    if (VL_UNLIKELY((__VlefCall_0__open_db))) {
        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
        this->__VnoInFunc_get_stream_type_name(vlSymsp, __VlefCall_2__get_stream_type_name);
        this->__VnoInFunc_get_scope(vlSymsp, __VlefCall_3__get_scope);
        this->__VnoInFunc_get_handle(vlSymsp, __VlefCall_4__get_handle);
        VL_FWRITEF_NX(VL_NULL_CHECK(this->__PVT__m_text_db, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_text_tr_stream.svh", 93)
                      ->__PVT__m_file,"  CLOSE_STREAM @%0t {NAME:%s T:%s SCOPE:%s STREAM:%0d}\n",6, 'T',-9
                      , '#',64,VL_TIME_UNITED_Q(1000)
                      , 'S',&(__VlefCall_1__get_name)
                      , 'S',&(__VlefCall_2__get_stream_type_name)
                      , 'S',&(__VlefCall_3__get_scope)
                      , '~',32,__VlefCall_4__get_handle);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc_do_free(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc_do_free\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_4__get_handle;
    ::std::string __VlefCall_3__get_scope;
    ::std::string __VlefCall_2__get_stream_type_name;
    ::std::string __VlefCall_1__get_name;
    ::CData/*0:0*/ __VlefCall_0__open_db;
    VL_NULL_CHECK(this->__PVT__m_text_db, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_text_tr_stream.svh", 109)->__VnoInFunc_open_db(vlSymsp, __VlefCall_0__open_db);
    if (VL_UNLIKELY((__VlefCall_0__open_db))) {
        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
        this->__VnoInFunc_get_stream_type_name(vlSymsp, __VlefCall_2__get_stream_type_name);
        this->__VnoInFunc_get_scope(vlSymsp, __VlefCall_3__get_scope);
        this->__VnoInFunc_get_handle(vlSymsp, __VlefCall_4__get_handle);
        VL_FWRITEF_NX(VL_NULL_CHECK(this->__PVT__m_text_db, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_text_tr_stream.svh", 111)
                      ->__PVT__m_file,"  FREE_STREAM @%0t {NAME:%s T:%s SCOPE:%s STREAM:%0d}\n",6, 'T',-9
                      , '#',64,VL_TIME_UNITED_Q(1000)
                      , 'S',&(__VlefCall_1__get_name)
                      , 'S',&(__VlefCall_2__get_stream_type_name)
                      , 'S',&(__VlefCall_3__get_scope)
                      , '~',32,__VlefCall_4__get_handle);
    }
    this->__PVT__m_text_db = VlNull{};
}

void Vtb_top_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc_do_open_recorder(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::QData/*63:0*/ open_time, ::std::string type_name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_recorder> &do_open_recorder__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc_do_open_recorder\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_text_recorder> __Vfunc_create__Vfuncout_921;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefCall_0__open_db;
    {
        VL_NULL_CHECK(this->__PVT__m_text_db, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_text_tr_stream.svh", 133)->__VnoInFunc_open_db(vlSymsp, __VlefCall_0__open_db);
        if (__VlefCall_0__open_db) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pia5e93c1c__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, name, VlNull{}, ""s, __Vfunc_create__Vfuncout_921);
            do_open_recorder__Vfuncrtn = __Vfunc_create__Vfuncout_921;
            goto __Vlabel0;
        }
        do_open_recorder__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_text_tr_stream::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_text_tr_stream::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_top_uvm_pkg__03a__03auvm_text_tr_stream::~Vtb_top_uvm_pkg__03a__03auvm_text_tr_stream() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_text_tr_stream::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_text_tr_stream::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_text_tr_stream::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_text_tr_stream::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_text_tr_stream::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_text_db:" + VL_TO_STRING(__PVT__m_text_db);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_tr_stream::to_string_middle();
    return (out);
}
