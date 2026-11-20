// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_registry__pif57ef8fe> __Vfunc_get__Vfuncout_1966;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pif57ef8fe__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1966);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_1966;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq, vlProcess, vlSymsp, "uvm_reg_mem_hdl_paths_seq"s);
    } else {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq, vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_mem_hdl_paths_seq"s;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_do_execute_op(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_field_op> op) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_do_execute_op\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_execute_op(vlProcess, vlSymsp, op);
    this->__VnoInFunc____05Fm_uvm_execute_field_op(vlProcess, vlSymsp, op);
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc____05Fm_uvm_execute_field_op(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_field_op> ___05Flocal_op___05F) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc____05Fm_uvm_execute_field_op\n"); );
    // Locals
    ::CData/*0:0*/ __Vtask_compare_field_int__Vfuncout_5260;
    __Vtask_compare_field_int__Vfuncout_5260 = 0;
    ::CData/*0:0*/ __Vtask_compare_string__Vfuncout_5261;
    __Vtask_compare_string__Vfuncout_5261 = 0;
    ::IData/*31:0*/ __Vtask_read__Vfuncout_5262;
    __Vtask_read__Vfuncout_5262 = 0;
    ::std::string __Vtemp_1;
    ::std::string __Vtemp_2;
    ::std::string __Vtemp_3;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefExpr_60;
    ::std::string __VlefCall_59__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_58;
    ::IData/*31:0*/ __VlefCall_57__get_report_action;
    ::IData/*31:0*/ __VlefCall_56__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_55__uvm_get_report_object;
    ::IData/*31:0*/ __VlefExpr_54;
    ::IData/*31:0*/ __VlefExpr_53;
    ::VlWide<128>/*4095:0*/ __VlefCall_52__read;
    ::IData/*31:0*/ __VlefExpr_51;
    ::QData/*63:0*/ __VlefCall_50__read;
    ::IData/*31:0*/ __VlefExpr_49;
    ::CData/*0:0*/ __VlefLogOr_48;
    ::IData/*31:0*/ __VlefCall_47__get_max_depth;
    ::IData/*31:0*/ __VlefCall_46__get_active_object_depth;
    ::IData/*31:0*/ __VlefCall_45__get_max_depth;
    ::CData/*0:0*/ __VlefCall_44__use_record_attribute;
    ::CData/*0:0*/ __VlefCall_43__is_open;
    ::CData/*0:0*/ __VlefCall_42__use_record_attribute;
    ::CData/*0:0*/ __VlefCall_41__is_open;
    ::CData/*0:0*/ __VlefCall_40__use_record_attribute;
    ::CData/*0:0*/ __VlefCall_39__is_open;
    ::CData/*0:0*/ __VlefCall_38__use_record_attribute;
    ::CData/*0:0*/ __VlefCall_37__is_open;
    ::std::string __VlefCall_36__unpack_string;
    ::QData/*63:0*/ __VlefCall_35__unpack_field_int;
    ::CData/*0:0*/ __VlefLogOr_34;
    ::IData/*31:0*/ __VlefCall_33__get_threshold;
    ::IData/*31:0*/ __VlefCall_32__get_result;
    ::IData/*31:0*/ __VlefCall_31__get_threshold;
    ::CData/*0:0*/ __VlefLogOr_30;
    ::IData/*31:0*/ __VlefCall_29__get_threshold;
    ::IData/*31:0*/ __VlefCall_28__get_result;
    ::IData/*31:0*/ __VlefCall_27__get_threshold;
    ::CData/*0:0*/ __VlefLogOr_26;
    ::IData/*31:0*/ __VlefCall_25__get_threshold;
    ::IData/*31:0*/ __VlefCall_24__get_result;
    ::IData/*31:0*/ __VlefCall_23__get_threshold;
    ::CData/*0:0*/ __VlefLogOr_22;
    ::IData/*31:0*/ __VlefCall_21__get_threshold;
    ::IData/*31:0*/ __VlefCall_20__get_result;
    ::IData/*31:0*/ __VlefCall_19__get_threshold;
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
    ::IData/*31:0*/ unnamedblk4__DOT__i;
    unnamedblk4__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk4__DOT__i__Vloopsize;
    unnamedblk4__DOT__i__Vloopsize = 0;
    ::IData/*31:0*/ unnamedblk5__DOT__i;
    unnamedblk5__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk5__DOT__i__Vloopsize;
    unnamedblk5__DOT__i__Vloopsize = 0;
    ::IData/*31:0*/ unnamedblk6__DOT__i;
    unnamedblk6__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk6__DOT__i__Vloopsize;
    unnamedblk6__DOT__i__Vloopsize = 0;
    ::IData/*31:0*/ unnamedblk7__DOT__sz___05F;
    ::IData/*31:0*/ unnamedblk7__DOT__unnamedblk8__DOT__i;
    unnamedblk7__DOT__unnamedblk8__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk7__DOT__unnamedblk9__DOT__i;
    unnamedblk7__DOT__unnamedblk9__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk7__DOT__unnamedblk9__DOT__i__Vloopsize;
    unnamedblk7__DOT__unnamedblk9__DOT__i__Vloopsize = 0;
    ::std::string unnamedblk7__DOT__unnamedblk9__DOT__unnamedblk10__DOT__nm___05F;
    ::IData/*31:0*/ unnamedblk7__DOT__unnamedblk11__DOT__i;
    ::std::string unnamedblk7__DOT__unnamedblk11__DOT__unnamedblk12__DOT__nm___05F;
    ::IData/*31:0*/ unnamedblk7__DOT__unnamedblk13__DOT__i;
    ::std::string unnamedblk7__DOT__unnamedblk13__DOT__unnamedblk14__DOT__nm___05F;
    ::IData/*31:0*/ unnamedblk15__DOT_____05Ftmp_max;
    ::IData/*31:0*/ unnamedblk15__DOT__unnamedblk16__DOT_____05Ftmp_begin_elements;
    ::IData/*31:0*/ unnamedblk15__DOT__unnamedblk16__DOT_____05Ftmp_end_elements;
    ::IData/*31:0*/ unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk17__DOT_____05Ftmp_index;
    unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk17__DOT_____05Ftmp_index = 0;
    ::IData/*31:0*/ unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk17__DOT_____05Ftmp_index__Vloopsize;
    unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk17__DOT_____05Ftmp_index__Vloopsize = 0;
    ::IData/*31:0*/ unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT_____05Ftmp_curr;
    ::IData/*31:0*/ unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__unnamedblk19__DOT_____05Ftmp_index;
    unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__unnamedblk19__DOT_____05Ftmp_index = 0;
    ::IData/*31:0*/ unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__unnamedblk19__DOT_____05Ftmp_index__Vloopsize;
    unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__unnamedblk19__DOT_____05Ftmp_index__Vloopsize = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource__Tzb939a3ab> unnamedblk20__DOT_____05Ftmp_rsrc___05F;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource__Tz39e91f07> unnamedblk21__DOT_____05Ftmp_rsrc___05F;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_> unnamedblk22__DOT_____05Ftmp_rsrc___05F;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource__Tza70e6849> unnamedblk23__DOT_____05Ftmp_rsrc___05F;
    ::std::string unnamedblk24__DOT__local_name___05F;
    ::std::string unnamedblk24__DOT__unnamedblk25__DOT__local_index_str___05F;
    ::IData/*31:0*/ unnamedblk24__DOT__unnamedblk25__DOT__local_index___05F;
    ::IData/*31:0*/ unnamedblk24__DOT__unnamedblk25__DOT__local_code___05F;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk24__DOT__unnamedblk25__DOT__unnamedblk26__DOT___local_report_object_;
    ::std::string unnamedblk24__DOT__unnamedblk25__DOT__unnamedblk27__DOT__tmp_string___05F;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource__Tz2757cb3c> unnamedblk24__DOT__unnamedblk25__DOT__unnamedblk27__DOT__unnamedblk28__DOT_____05Ftmp_rsrc___05F;
    ::IData/*27:0*/ local_op_type___05F;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq> local_rhs___05F;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_base> local_rsrc___05F;
    ::std::string local_rsrc_name___05F;
    ::CData/*0:0*/ local_success___05F;
    ::IData/*31:0*/ local_size___05F;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer> ___05Flocal_printer___05F;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_comparer> ___05Flocal_comparer___05F;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_recorder> ___05Flocal_recorder___05F;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_packer> ___05Flocal_packer___05F;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_copier> ___05Flocal_copier___05F;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_queue__Tz613e3271> ___05Flocal_field_names___05F;
    {
        local_op_type___05F = 0U;
        local_rsrc_name___05F = ""s;
        local_success___05F = 0U;
        local_size___05F = 0U;
        VL_NULL_CHECK(___05Flocal_op___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 66)->__VnoInFunc_get_rhs(vlProcess, vlSymsp, __VlefCall_0__get_rhs);
        std::ignore = VL_CAST_DYNAMIC(__VlefCall_0__get_rhs, local_rhs___05F);
        VL_NULL_CHECK(___05Flocal_op___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 66)->__VnoInFunc_get_rhs(vlProcess, vlSymsp, __VlefCall_1__get_rhs);
        __VlefExpr_2 = VL_CAST_DYNAMIC(__VlefCall_1__get_rhs, local_rsrc___05F);
        if (((0U != __VlefExpr_2) && (VlNull{} != local_rsrc___05F))) {
            VL_NULL_CHECK(local_rsrc___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 66)->__VnoInFunc_get_name(vlSymsp, local_rsrc_name___05F);
        }
        VL_NULL_CHECK(___05Flocal_op___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 66)->__VnoInFunc_get_op_type(vlProcess, vlSymsp, local_op_type___05F);
        if ((0x00000010U == local_op_type___05F)) {
            VL_NULL_CHECK(___05Flocal_op___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 66)->__VnoInFunc_get_policy(vlProcess, vlSymsp, __VlefCall_3__get_policy);
            __VlefExpr_4 = VL_CAST_DYNAMIC(__VlefCall_3__get_policy, ___05Flocal_printer___05F);
            if (VL_UNLIKELY(((1U & (~ (0U != __VlefExpr_4)))))) {
                VL_WRITEF_NX("[%0t] %%Error: uvm_reg_mem_hdl_paths_seq.svh:66: Assertion failed in %m: '$cast' failed.\n",3, 'M',vlSymsp->name(),"uvm_pkg.uvm_reg_mem_hdl_paths_seq.__m_uvm_execute_field_op", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 66, "");
            }
        } else if ((4U == local_op_type___05F)) {
            if ((VlNull{} == local_rhs___05F)) {
                goto __Vlabel0;
            }
            VL_NULL_CHECK(___05Flocal_op___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 66)->__VnoInFunc_get_policy(vlProcess, vlSymsp, __VlefCall_5__get_policy);
            __VlefExpr_6 = VL_CAST_DYNAMIC(__VlefCall_5__get_policy, ___05Flocal_comparer___05F);
            if (VL_UNLIKELY(((1U & (~ (0U != __VlefExpr_6)))))) {
                VL_WRITEF_NX("[%0t] %%Error: uvm_reg_mem_hdl_paths_seq.svh:66: Assertion failed in %m: '$cast' failed.\n",3, 'M',vlSymsp->name(),"uvm_pkg.uvm_reg_mem_hdl_paths_seq.__m_uvm_execute_field_op", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 66, "");
            }
        } else if ((0x00000040U == local_op_type___05F)) {
            VL_NULL_CHECK(___05Flocal_op___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 66)->__VnoInFunc_get_policy(vlProcess, vlSymsp, __VlefCall_7__get_policy);
            __VlefExpr_8 = VL_CAST_DYNAMIC(__VlefCall_7__get_policy, ___05Flocal_recorder___05F);
            if (VL_UNLIKELY(((1U & (~ (0U != __VlefExpr_8)))))) {
                VL_WRITEF_NX("[%0t] %%Error: uvm_reg_mem_hdl_paths_seq.svh:66: Assertion failed in %m: '$cast' failed.\n",3, 'M',vlSymsp->name(),"uvm_pkg.uvm_reg_mem_hdl_paths_seq.__m_uvm_execute_field_op", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 66, "");
            }
        } else if (((0x00000100U == local_op_type___05F) 
                    || (0x00000400U == local_op_type___05F))) {
            VL_NULL_CHECK(___05Flocal_op___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 66)->__VnoInFunc_get_policy(vlProcess, vlSymsp, __VlefCall_9__get_policy);
            __VlefExpr_10 = VL_CAST_DYNAMIC(__VlefCall_9__get_policy, ___05Flocal_packer___05F);
            if (VL_UNLIKELY(((1U & (~ (0U != __VlefExpr_10)))))) {
                VL_WRITEF_NX("[%0t] %%Error: uvm_reg_mem_hdl_paths_seq.svh:66: Assertion failed in %m: '$cast' failed.\n",3, 'M',vlSymsp->name(),"uvm_pkg.uvm_reg_mem_hdl_paths_seq.__m_uvm_execute_field_op", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 66, "");
            }
        } else if ((1U == local_op_type___05F)) {
            if ((VlNull{} == local_rhs___05F)) {
                goto __Vlabel0;
            }
            VL_NULL_CHECK(___05Flocal_op___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 66)->__VnoInFunc_get_policy(vlProcess, vlSymsp, __VlefCall_11__get_policy);
            __VlefExpr_12 = VL_CAST_DYNAMIC(__VlefCall_11__get_policy, ___05Flocal_copier___05F);
            if (VL_UNLIKELY(((1U & (~ (0U != __VlefExpr_12)))))) {
                VL_WRITEF_NX("[%0t] %%Error: uvm_reg_mem_hdl_paths_seq.svh:66: Assertion failed in %m: '$cast' failed.\n",3, 'M',vlSymsp->name(),"uvm_pkg.uvm_reg_mem_hdl_paths_seq.__m_uvm_execute_field_op", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 66, "");
            }
        } else if ((0x00000800U == local_op_type___05F)) {
            if ((VlNull{} == local_rsrc___05F)) {
                goto __Vlabel0;
            }
        } else if ((0x00080002U == local_op_type___05F)) {
            VL_NULL_CHECK(___05Flocal_op___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 66)->__VnoInFunc_get_rhs(vlProcess, vlSymsp, __VlefCall_13__get_rhs);
            __VlefExpr_14 = VL_CAST_DYNAMIC(__VlefCall_13__get_rhs, ___05Flocal_field_names___05F);
            if (VL_UNLIKELY(((1U & (~ (0U != __VlefExpr_14)))))) {
                VL_WRITEF_NX("[%0t] %%Error: uvm_reg_mem_hdl_paths_seq.svh:66: Assertion failed in %m: '$cast' failed.\n",3, 'M',vlSymsp->name(),"uvm_pkg.uvm_reg_mem_hdl_paths_seq.__m_uvm_execute_field_op", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 66, "");
            }
        } else {
            goto __Vlabel0;
        }
        if (((((((((0x00080002U == local_op_type___05F) 
                   | (1U == local_op_type___05F)) | 
                  (4U == local_op_type___05F)) | (0x00000100U 
                                                  == local_op_type___05F)) 
                | (0x00000400U == local_op_type___05F)) 
               | (0x00000040U == local_op_type___05F)) 
              | (0x00000010U == local_op_type___05F)) 
             | (0x00000800U == local_op_type___05F))) {
            if ((0x00080002U == local_op_type___05F)) {
                VL_NULL_CHECK(___05Flocal_field_names___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 67)->__VnoInFunc_push_back(vlSymsp, 
                                                                                Vtb_top_uvm_acs_name_struct__struct__0{
                        "abstractions"s,
                        "abstractions[+]"s
                    });
            } else if ((1U == local_op_type___05F)) {
                this->__PVT__abstractions = VL_NULL_CHECK(local_rhs___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 67)
                    ->__PVT__abstractions;
            } else if ((4U == local_op_type___05F)) {
                VL_NULL_CHECK(___05Flocal_comparer___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 67)->__VnoInFunc_get_threshold(vlSymsp, __VlefCall_19__get_threshold);
                __VlefLogOr_22 = (1U & (~ (0U != __VlefCall_19__get_threshold)));
                if ((1U & (~ (::IData)(__VlefLogOr_22)))) {
                    VL_NULL_CHECK(___05Flocal_comparer___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 67)->__VnoInFunc_get_result(vlSymsp, __VlefCall_20__get_result);
                    VL_NULL_CHECK(___05Flocal_comparer___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 67)->__VnoInFunc_get_threshold(vlSymsp, __VlefCall_21__get_threshold);
                    __VlefLogOr_22 = (__VlefCall_20__get_result 
                                      < __VlefCall_21__get_threshold);
                }
                if (__VlefLogOr_22) {
                    if ((this->__PVT__abstractions 
                         != VL_NULL_CHECK(local_rhs___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 67)
                         ->__PVT__abstractions)) {
                        VL_NULL_CHECK(___05Flocal_comparer___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 67)->__VnoInFunc_get_threshold(vlSymsp, __VlefCall_23__get_threshold);
                        __VlefLogOr_26 = (1U & (~ (0U 
                                                   != __VlefCall_23__get_threshold)));
                        if ((1U & (~ (::IData)(__VlefLogOr_26)))) {
                            VL_NULL_CHECK(___05Flocal_comparer___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 67)->__VnoInFunc_get_result(vlSymsp, __VlefCall_24__get_result);
                            VL_NULL_CHECK(___05Flocal_comparer___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 67)->__VnoInFunc_get_threshold(vlSymsp, __VlefCall_25__get_threshold);
                            __VlefLogOr_26 = (__VlefCall_24__get_result 
                                              < __VlefCall_25__get_threshold);
                        }
                        if (__VlefLogOr_26) {
                            if ((this->__PVT__abstractions.size() 
                                 != VL_NULL_CHECK(local_rhs___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 67)
                                 ->__PVT__abstractions.size())) {
                                VL_NULL_CHECK(___05Flocal_comparer___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 67)->__VnoInFunc_compare_field_int(vlProcess, vlSymsp, "abstractions.size()"s, 
                                                                                VL_EXTENDS_QI(64,32, this->__PVT__abstractions.size()), 
                                                                                VL_EXTENDS_QI(64,32, VL_NULL_CHECK(local_rhs___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 67)
                                                                                ->__PVT__abstractions.size()), 0x00000020U, 0x02000000U, __Vtask_compare_field_int__Vfuncout_5260);
                            }
                        }
                        VL_NULL_CHECK(___05Flocal_comparer___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 67)->__VnoInFunc_get_threshold(vlSymsp, __VlefCall_27__get_threshold);
                        __VlefLogOr_30 = (1U & (~ (0U 
                                                   != __VlefCall_27__get_threshold)));
                        if ((1U & (~ (::IData)(__VlefLogOr_30)))) {
                            VL_NULL_CHECK(___05Flocal_comparer___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 67)->__VnoInFunc_get_result(vlSymsp, __VlefCall_28__get_result);
                            VL_NULL_CHECK(___05Flocal_comparer___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 67)->__VnoInFunc_get_threshold(vlSymsp, __VlefCall_29__get_threshold);
                            __VlefLogOr_30 = (__VlefCall_28__get_result 
                                              < __VlefCall_29__get_threshold);
                        }
                        if (__VlefLogOr_30) {
                            if ((this->__PVT__abstractions 
                                 != VL_NULL_CHECK(local_rhs___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 67)
                                 ->__PVT__abstractions)) {
                                unnamedblk4__DOT__i = 0U;
                                while (VL_LTS_III(32, unnamedblk4__DOT__i, this->__PVT__abstractions.size())) {
                                    unnamedblk4__DOT__i__Vloopsize 
                                        = this->__PVT__abstractions.size();
                                    VL_NULL_CHECK(___05Flocal_comparer___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 67)->__VnoInFunc_get_threshold(vlSymsp, __VlefCall_31__get_threshold);
                                    __VlefLogOr_34 
                                        = (1U & (~ 
                                                 (0U 
                                                  != __VlefCall_31__get_threshold)));
                                    if ((1U & (~ (::IData)(__VlefLogOr_34)))) {
                                        VL_NULL_CHECK(___05Flocal_comparer___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 67)->__VnoInFunc_get_result(vlSymsp, __VlefCall_32__get_result);
                                        VL_NULL_CHECK(___05Flocal_comparer___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 67)->__VnoInFunc_get_threshold(vlSymsp, __VlefCall_33__get_threshold);
                                        __VlefLogOr_34 
                                            = (__VlefCall_32__get_result 
                                               < __VlefCall_33__get_threshold);
                                    }
                                    if (__VlefLogOr_34) {
                                        if ((this->__PVT__abstractions.at(unnamedblk4__DOT__i) 
                                             != VL_NULL_CHECK(local_rhs___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 67)
                                             ->__PVT__abstractions.at(unnamedblk4__DOT__i))) {
                                            VL_NULL_CHECK(___05Flocal_comparer___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 67)->__VnoInFunc_compare_string(vlProcess, vlSymsp, VL_SFORMATF_N_NX("abstractions[%0d]",1
                                                                                , '~',32,unnamedblk4__DOT__i) , 
                                                                                VL_CVT_PACK_STR_NN(this->__PVT__abstractions.at(unnamedblk4__DOT__i)), 
                                                                                VL_CVT_PACK_STR_NN(VL_NULL_CHECK(local_rhs___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 67)
                                                                                ->__PVT__abstractions.at(unnamedblk4__DOT__i)), __Vtask_compare_string__Vfuncout_5261);
                                        }
                                    }
                                    if ((unnamedblk4__DOT__i__Vloopsize 
                                         <= this->__PVT__abstractions.size())) {
                                        unnamedblk4__DOT__i 
                                            = ((::IData)(1U) 
                                               + unnamedblk4__DOT__i);
                                    }
                                }
                            }
                        }
                    }
                }
            } else if ((0x00000100U == local_op_type___05F)) {
                VL_NULL_CHECK(___05Flocal_packer___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 67)->__VnoInFunc_pack_field_int(vlSymsp, 
                                                                                VL_EXTENDS_QI(64,32, this->__PVT__abstractions.size()), 0x00000020U);
                unnamedblk5__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk5__DOT__i, this->__PVT__abstractions.size())) {
                    unnamedblk5__DOT__i__Vloopsize 
                        = this->__PVT__abstractions.size();
                    VL_NULL_CHECK(___05Flocal_packer___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 67)->__VnoInFunc_pack_string(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(this->__PVT__abstractions.at(unnamedblk5__DOT__i)));
                    if ((unnamedblk5__DOT__i__Vloopsize 
                         <= this->__PVT__abstractions.size())) {
                        unnamedblk5__DOT__i = ((::IData)(1U) 
                                               + unnamedblk5__DOT__i);
                    }
                }
            } else if ((0x00000400U == local_op_type___05F)) {
                VL_NULL_CHECK(___05Flocal_packer___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 67)->__VnoInFunc_unpack_field_int(vlProcess, vlSymsp, 0x00000020U, __VlefCall_35__unpack_field_int);
                local_size___05F = (::IData)(__VlefCall_35__unpack_field_int);
                if (VL_GTS_III(32, this->__PVT__abstractions.size(), local_size___05F)) {
                    this->__PVT__abstractions = this->__PVT__abstractions.slice(0U, 
                                                                                (local_size___05F 
                                                                                - (::IData)(1U)));
                } else {
                    while (VL_LTS_III(32, this->__PVT__abstractions.size(), local_size___05F)) {
                        this->__PVT__abstractions.push_back(this->__PVT__abstractions.at(local_size___05F));
                    }
                }
                unnamedblk6__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk6__DOT__i, this->__PVT__abstractions.size())) {
                    unnamedblk6__DOT__i__Vloopsize 
                        = this->__PVT__abstractions.size();
                    VL_NULL_CHECK(___05Flocal_packer___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 67)->__VnoInFunc_unpack_string(vlProcess, vlSymsp, __VlefCall_36__unpack_string);
                    this->__PVT__abstractions.atWriteAppend(unnamedblk6__DOT__i) 
                        = __VlefCall_36__unpack_string;
                    if ((unnamedblk6__DOT__i__Vloopsize 
                         <= this->__PVT__abstractions.size())) {
                        unnamedblk6__DOT__i = ((::IData)(1U) 
                                               + unnamedblk6__DOT__i);
                    }
                }
            } else if ((0x00000040U == local_op_type___05F)) {
                unnamedblk7__DOT__sz___05F = 0U;
                unnamedblk7__DOT__unnamedblk8__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk7__DOT__unnamedblk8__DOT__i, this->__PVT__abstractions.size())) {
                    unnamedblk7__DOT__sz___05F = unnamedblk7__DOT__unnamedblk8__DOT__i;
                    unnamedblk7__DOT__unnamedblk8__DOT__i 
                        = ((::IData)(1U) + unnamedblk7__DOT__unnamedblk8__DOT__i);
                }
                if ((0U == unnamedblk7__DOT__sz___05F)) {
                    __VlefCall_37__is_open = (VlNull{} 
                                              != ___05Flocal_recorder___05F);
                    if (__VlefCall_37__is_open) {
                        VL_NULL_CHECK(___05Flocal_recorder___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 67)->__VnoInFunc_is_open(vlSymsp, __VlefCall_37__is_open);
                    }
                    if (__VlefCall_37__is_open) {
                        VL_NULL_CHECK(___05Flocal_recorder___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 67)->__VnoInFunc_use_record_attribute(vlSymsp, __VlefCall_38__use_record_attribute);
                        if (__VlefCall_38__use_record_attribute) {
                            VL_NULL_CHECK(___05Flocal_recorder___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 67)->__VnoInFunc_record_generic(vlProcess, vlSymsp, "abstractions"s, "0"s, ""s);
                        } else {
                            VL_NULL_CHECK(___05Flocal_recorder___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 67)->__VnoInFunc_record_field_int(vlProcess, vlSymsp, "abstractions"s, 0ULL, 0x00000020U, 0x02000000U);
                        }
                    }
                } else if (VL_GTS_III(32, 0x0000000aU, unnamedblk7__DOT__sz___05F)) {
                    unnamedblk7__DOT__unnamedblk9__DOT__i = 0U;
                    while (VL_LTS_III(32, unnamedblk7__DOT__unnamedblk9__DOT__i, this->__PVT__abstractions.size())) {
                        unnamedblk7__DOT__unnamedblk9__DOT__i__Vloopsize 
                            = this->__PVT__abstractions.size();
                        VL_SFORMAT_NX(unnamedblk7__DOT__unnamedblk9__DOT__unnamedblk10__DOT__nm___05F
                                      ,"abstractions[%0d]",1
                                      , '~',32,unnamedblk7__DOT__unnamedblk9__DOT__i);
                        __VlefCall_39__is_open = (VlNull{} 
                                                  != ___05Flocal_recorder___05F);
                        if (__VlefCall_39__is_open) {
                            VL_NULL_CHECK(___05Flocal_recorder___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 67)->__VnoInFunc_is_open(vlSymsp, __VlefCall_39__is_open);
                        }
                        if (__VlefCall_39__is_open) {
                            VL_NULL_CHECK(___05Flocal_recorder___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 67)->__VnoInFunc_use_record_attribute(vlSymsp, __VlefCall_40__use_record_attribute);
                            if (__VlefCall_40__use_record_attribute) {
                                __Vtemp_1 = this->__PVT__abstractions.at(unnamedblk7__DOT__unnamedblk9__DOT__i);
                                VL_NULL_CHECK(___05Flocal_recorder___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 67)->__VnoInFunc_record_generic(vlProcess, vlSymsp, unnamedblk7__DOT__unnamedblk9__DOT__unnamedblk10__DOT__nm___05F, VL_SFORMATF_N_NX("%p",1
                                                                                , 'S',&(__Vtemp_1)) , ""s);
                            } else {
                                VL_NULL_CHECK(___05Flocal_recorder___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 67)->__VnoInFunc_record_string(vlProcess, vlSymsp, unnamedblk7__DOT__unnamedblk9__DOT__unnamedblk10__DOT__nm___05F, 
                                                                                VL_CVT_PACK_STR_NN(this->__PVT__abstractions.at(unnamedblk7__DOT__unnamedblk9__DOT__i)));
                            }
                        }
                        if ((unnamedblk7__DOT__unnamedblk9__DOT__i__Vloopsize 
                             <= this->__PVT__abstractions.size())) {
                            unnamedblk7__DOT__unnamedblk9__DOT__i 
                                = ((::IData)(1U) + unnamedblk7__DOT__unnamedblk9__DOT__i);
                        }
                    }
                } else {
                    unnamedblk7__DOT__unnamedblk11__DOT__i = 0U;
                    unnamedblk7__DOT__unnamedblk11__DOT__i = 0U;
                    while (VL_GTS_III(32, 5U, unnamedblk7__DOT__unnamedblk11__DOT__i)) {
                        VL_SFORMAT_NX(unnamedblk7__DOT__unnamedblk11__DOT__unnamedblk12__DOT__nm___05F
                                      ,"abstractions[%0d]",1
                                      , '~',32,unnamedblk7__DOT__unnamedblk11__DOT__i);
                        __VlefCall_41__is_open = (VlNull{} 
                                                  != ___05Flocal_recorder___05F);
                        if (__VlefCall_41__is_open) {
                            VL_NULL_CHECK(___05Flocal_recorder___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 67)->__VnoInFunc_is_open(vlSymsp, __VlefCall_41__is_open);
                        }
                        if (__VlefCall_41__is_open) {
                            VL_NULL_CHECK(___05Flocal_recorder___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 67)->__VnoInFunc_use_record_attribute(vlSymsp, __VlefCall_42__use_record_attribute);
                            if (__VlefCall_42__use_record_attribute) {
                                __Vtemp_2 = this->__PVT__abstractions.at(unnamedblk7__DOT__unnamedblk11__DOT__i);
                                VL_NULL_CHECK(___05Flocal_recorder___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 67)->__VnoInFunc_record_generic(vlProcess, vlSymsp, unnamedblk7__DOT__unnamedblk11__DOT__unnamedblk12__DOT__nm___05F, VL_SFORMATF_N_NX("%p",1
                                                                                , 'S',&(__Vtemp_2)) , ""s);
                            } else {
                                VL_NULL_CHECK(___05Flocal_recorder___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 67)->__VnoInFunc_record_string(vlProcess, vlSymsp, unnamedblk7__DOT__unnamedblk11__DOT__unnamedblk12__DOT__nm___05F, 
                                                                                VL_CVT_PACK_STR_NN(this->__PVT__abstractions.at(unnamedblk7__DOT__unnamedblk11__DOT__i)));
                            }
                        }
                        unnamedblk7__DOT__unnamedblk11__DOT__i 
                            = ((::IData)(1U) + unnamedblk7__DOT__unnamedblk11__DOT__i);
                    }
                    unnamedblk7__DOT__unnamedblk13__DOT__i = 0U;
                    unnamedblk7__DOT__unnamedblk13__DOT__i 
                        = (unnamedblk7__DOT__sz___05F 
                           - (::IData)(5U));
                    while (VL_LTS_III(32, unnamedblk7__DOT__unnamedblk13__DOT__i, unnamedblk7__DOT__sz___05F)) {
                        VL_SFORMAT_NX(unnamedblk7__DOT__unnamedblk13__DOT__unnamedblk14__DOT__nm___05F
                                      ,"abstractions[%0d]",1
                                      , '~',32,unnamedblk7__DOT__unnamedblk13__DOT__i);
                        __VlefCall_43__is_open = (VlNull{} 
                                                  != ___05Flocal_recorder___05F);
                        if (__VlefCall_43__is_open) {
                            VL_NULL_CHECK(___05Flocal_recorder___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 67)->__VnoInFunc_is_open(vlSymsp, __VlefCall_43__is_open);
                        }
                        if (__VlefCall_43__is_open) {
                            VL_NULL_CHECK(___05Flocal_recorder___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 67)->__VnoInFunc_use_record_attribute(vlSymsp, __VlefCall_44__use_record_attribute);
                            if (__VlefCall_44__use_record_attribute) {
                                __Vtemp_3 = this->__PVT__abstractions.at(unnamedblk7__DOT__unnamedblk13__DOT__i);
                                VL_NULL_CHECK(___05Flocal_recorder___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 67)->__VnoInFunc_record_generic(vlProcess, vlSymsp, unnamedblk7__DOT__unnamedblk13__DOT__unnamedblk14__DOT__nm___05F, VL_SFORMATF_N_NX("%p",1
                                                                                , 'S',&(__Vtemp_3)) , ""s);
                            } else {
                                VL_NULL_CHECK(___05Flocal_recorder___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 67)->__VnoInFunc_record_string(vlProcess, vlSymsp, unnamedblk7__DOT__unnamedblk13__DOT__unnamedblk14__DOT__nm___05F, 
                                                                                VL_CVT_PACK_STR_NN(this->__PVT__abstractions.at(unnamedblk7__DOT__unnamedblk13__DOT__i)));
                            }
                        }
                        unnamedblk7__DOT__unnamedblk13__DOT__i 
                            = ((::IData)(1U) + unnamedblk7__DOT__unnamedblk13__DOT__i);
                    }
                }
            } else if ((0x00000010U == local_op_type___05F)) {
                unnamedblk15__DOT_____05Ftmp_max = 
                    ((::IData)(1U) + (this->__PVT__abstractions.size() 
                                      - (::IData)(1U)));
                VL_NULL_CHECK(___05Flocal_printer___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 67)->__VnoInFunc_print_array_header(vlProcess, vlSymsp, "abstractions"s, unnamedblk15__DOT_____05Ftmp_max, "queue(string)"s, 0x2eU);
                VL_NULL_CHECK(___05Flocal_printer___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 67)->__VnoInFunc_get_max_depth(vlSymsp, __VlefCall_45__get_max_depth);
                __VlefLogOr_48 = (0xffffffffU == __VlefCall_45__get_max_depth);
                if ((1U & (~ (::IData)(__VlefLogOr_48)))) {
                    VL_NULL_CHECK(___05Flocal_printer___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 67)->__VnoInFunc_get_active_object_depth(vlSymsp, __VlefCall_46__get_active_object_depth);
                    VL_NULL_CHECK(___05Flocal_printer___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 67)->__VnoInFunc_get_max_depth(vlSymsp, __VlefCall_47__get_max_depth);
                    __VlefLogOr_48 = (__VlefCall_46__get_active_object_depth 
                                      < ((::IData)(1U) 
                                         + __VlefCall_47__get_max_depth));
                }
                if (__VlefLogOr_48) {
                    unnamedblk15__DOT__unnamedblk16__DOT_____05Ftmp_begin_elements = 0U;
                    unnamedblk15__DOT__unnamedblk16__DOT_____05Ftmp_end_elements = 0U;
                    VL_NULL_CHECK(___05Flocal_printer___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 67)->__VnoInFunc_get_begin_elements(vlSymsp, unnamedblk15__DOT__unnamedblk16__DOT_____05Ftmp_begin_elements);
                    VL_NULL_CHECK(___05Flocal_printer___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 67)->__VnoInFunc_get_end_elements(vlSymsp, unnamedblk15__DOT__unnamedblk16__DOT_____05Ftmp_end_elements);
                    if (((0xffffffffU == unnamedblk15__DOT__unnamedblk16__DOT_____05Ftmp_begin_elements) 
                         | (0xffffffffU == unnamedblk15__DOT__unnamedblk16__DOT_____05Ftmp_end_elements))) {
                        unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk17__DOT_____05Ftmp_index = 0U;
                        while (VL_LTS_III(32, unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk17__DOT_____05Ftmp_index, this->__PVT__abstractions.size())) {
                            unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk17__DOT_____05Ftmp_index__Vloopsize 
                                = this->__PVT__abstractions.size();
                            VL_NULL_CHECK(___05Flocal_printer___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 67)->__VnoInFunc_print_string(vlProcess, vlSymsp, VL_SFORMATF_N_NX("[%0d]",1
                                                                                , '~',32,unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk17__DOT_____05Ftmp_index) , 
                                                                                VL_CVT_PACK_STR_NN(this->__PVT__abstractions.at(unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk17__DOT_____05Ftmp_index)), 0x2eU);
                            if ((unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk17__DOT_____05Ftmp_index__Vloopsize 
                                 <= this->__PVT__abstractions.size())) {
                                unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk17__DOT_____05Ftmp_index 
                                    = ((::IData)(1U) 
                                       + unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk17__DOT_____05Ftmp_index);
                            }
                        }
                    } else {
                        unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT_____05Ftmp_curr = 0U;
                        {
                            unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__unnamedblk19__DOT_____05Ftmp_index = 0U;
                            while (VL_LTS_III(32, unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__unnamedblk19__DOT_____05Ftmp_index, this->__PVT__abstractions.size())) {
                                unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__unnamedblk19__DOT_____05Ftmp_index__Vloopsize 
                                    = this->__PVT__abstractions.size();
                                if (VL_LTS_III(32, unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT_____05Ftmp_curr, unnamedblk15__DOT__unnamedblk16__DOT_____05Ftmp_begin_elements)) {
                                    VL_NULL_CHECK(___05Flocal_printer___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 67)->__VnoInFunc_print_string(vlProcess, vlSymsp, VL_SFORMATF_N_NX("[%0d]",1
                                                                                , '~',32,unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__unnamedblk19__DOT_____05Ftmp_index) , 
                                                                                VL_CVT_PACK_STR_NN(this->__PVT__abstractions.at(unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__unnamedblk19__DOT_____05Ftmp_index)), 0x2eU);
                                } else {
                                    goto __Vlabel1;
                                }
                                unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT_____05Ftmp_curr 
                                    = ((::IData)(1U) 
                                       + unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT_____05Ftmp_curr);
                                if ((unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__unnamedblk19__DOT_____05Ftmp_index__Vloopsize 
                                     <= this->__PVT__abstractions.size())) {
                                    unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__unnamedblk19__DOT_____05Ftmp_index 
                                        = ((::IData)(1U) 
                                           + unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__unnamedblk19__DOT_____05Ftmp_index);
                                }
                            }
                            __Vlabel1: ;
                        }
                        if (VL_LTS_III(32, unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT_____05Ftmp_curr, unnamedblk15__DOT_____05Ftmp_max)) {
                            if (VL_GTS_III(32, (unnamedblk15__DOT_____05Ftmp_max 
                                                - unnamedblk15__DOT__unnamedblk16__DOT_____05Ftmp_end_elements), unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT_____05Ftmp_curr)) {
                                unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT_____05Ftmp_curr 
                                    = (unnamedblk15__DOT_____05Ftmp_max 
                                       - unnamedblk15__DOT__unnamedblk16__DOT_____05Ftmp_end_elements);
                            }
                            if (VL_LTS_III(32, unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT_____05Ftmp_curr, unnamedblk15__DOT__unnamedblk16__DOT_____05Ftmp_begin_elements)) {
                                unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT_____05Ftmp_curr 
                                    = unnamedblk15__DOT__unnamedblk16__DOT_____05Ftmp_begin_elements;
                            } else {
                                VL_NULL_CHECK(___05Flocal_printer___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 67)->__VnoInFunc_print_array_range(vlProcess, vlSymsp, unnamedblk15__DOT__unnamedblk16__DOT_____05Ftmp_begin_elements, 
                                                                                (unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT_____05Ftmp_curr 
                                                                                - (::IData)(1U)));
                            }
                            while (VL_LTS_III(32, unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT_____05Ftmp_curr, unnamedblk15__DOT_____05Ftmp_max)) {
                                VL_NULL_CHECK(___05Flocal_printer___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 67)->__VnoInFunc_print_string(vlProcess, vlSymsp, VL_SFORMATF_N_NX("[%0d]",1
                                                                                , '~',32,unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT_____05Ftmp_curr) , 
                                                                                VL_CVT_PACK_STR_NN(this->__PVT__abstractions.at(unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT_____05Ftmp_curr)), 0x2eU);
                                unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT_____05Ftmp_curr 
                                    = ((::IData)(1U) 
                                       + unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT_____05Ftmp_curr);
                            }
                        }
                    }
                }
                VL_NULL_CHECK(___05Flocal_printer___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 67)->__VnoInFunc_print_array_footer(vlSymsp, unnamedblk15__DOT_____05Ftmp_max);
            } else if (("abstractions"s == local_rsrc_name___05F)) {
                __VlefExpr_49 = VL_CAST_DYNAMIC(local_rsrc___05F, unnamedblk20__DOT_____05Ftmp_rsrc___05F);
                local_success___05F = (1U & __VlefExpr_49);
                if (local_success___05F) {
                    VL_NULL_CHECK(unnamedblk20__DOT_____05Ftmp_rsrc___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 67)->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq>{this}, __VlefCall_50__read);
                    local_size___05F = (::IData)(__VlefCall_50__read);
                }
                if ((1U & (~ (::IData)(local_success___05F)))) {
                    __VlefExpr_51 = VL_CAST_DYNAMIC(local_rsrc___05F, unnamedblk21__DOT_____05Ftmp_rsrc___05F);
                    local_success___05F = (1U & __VlefExpr_51);
                    if (local_success___05F) {
                        VL_NULL_CHECK(unnamedblk21__DOT_____05Ftmp_rsrc___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 67)->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq>{this}, __VlefCall_52__read);
                        local_size___05F = __VlefCall_52__read[0U];
                    }
                }
                if ((1U & (~ (::IData)(local_success___05F)))) {
                    __VlefExpr_53 = VL_CAST_DYNAMIC(local_rsrc___05F, unnamedblk22__DOT_____05Ftmp_rsrc___05F);
                    local_success___05F = (1U & __VlefExpr_53);
                    if (local_success___05F) {
                        VL_NULL_CHECK(unnamedblk22__DOT_____05Ftmp_rsrc___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 67)->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq>{this}, local_size___05F);
                    }
                }
                if ((1U & (~ (::IData)(local_success___05F)))) {
                    __VlefExpr_54 = VL_CAST_DYNAMIC(local_rsrc___05F, unnamedblk23__DOT_____05Ftmp_rsrc___05F);
                    local_success___05F = (1U & __VlefExpr_54);
                    if (local_success___05F) {
                        VL_NULL_CHECK(unnamedblk23__DOT_____05Ftmp_rsrc___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 67)->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq>{this}, __Vtask_read__Vfuncout_5262);
                        local_size___05F = __Vtask_read__Vfuncout_5262;
                    }
                }
                if (local_success___05F) {
                    if (VL_GTS_III(32, this->__PVT__abstractions.size(), local_size___05F)) {
                        this->__PVT__abstractions = this->__PVT__abstractions.slice(0U, 
                                                                                (local_size___05F 
                                                                                - (::IData)(1U)));
                    } else {
                        while (VL_LTS_III(32, this->__PVT__abstractions.size(), local_size___05F)) {
                            this->__PVT__abstractions.push_back(this->__PVT__abstractions.at(local_size___05F));
                        }
                    }
                }
            } else {
                unnamedblk24__DOT__local_name___05F = "abstractions["s;
                if ((((0U != VL_LEN_IN(local_rsrc_name___05F)) 
                      & (0x5dU == VL_GETC_N(local_rsrc_name___05F,
                                            (VL_LEN_IN(local_rsrc_name___05F) 
                                             - (::IData)(1U))))) 
                     & (VL_SUBSTR_N(local_rsrc_name___05F,0U,
                                    (VL_LEN_IN(unnamedblk24__DOT__local_name___05F) 
                                     - (::IData)(1U))) 
                        == unnamedblk24__DOT__local_name___05F))) {
                    unnamedblk24__DOT__unnamedblk25__DOT__local_index_str___05F 
                        = VL_SUBSTR_N(local_rsrc_name___05F,
                                      VL_LEN_IN(unnamedblk24__DOT__local_name___05F),
                                      (VL_LEN_IN(local_rsrc_name___05F) 
                                       - (::IData)(2U)));
                    unnamedblk24__DOT__unnamedblk25__DOT__local_index___05F = 0U;
                    unnamedblk24__DOT__unnamedblk25__DOT__local_code___05F 
                        = VL_SSCANF_INNX(64,unnamedblk24__DOT__unnamedblk25__DOT__local_index_str___05F,"%d",1
                                         , '#',32,&(unnamedblk24__DOT__unnamedblk25__DOT__local_index___05F)) ;
                    if (VL_LTS_III(32, 0U, unnamedblk24__DOT__unnamedblk25__DOT__local_code___05F)) {
                        if (VL_GTS_III(32, 0U, unnamedblk24__DOT__unnamedblk25__DOT__local_index___05F)) {
                            this->__VnoInFunc_uvm_get_report_object(vlProcess, vlSymsp, __VlefCall_55__uvm_get_report_object);
                            VL_NULL_CHECK(__VlefCall_55__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 67)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk24__DOT__unnamedblk25__DOT__unnamedblk26__DOT___local_report_object_);
                            VL_NULL_CHECK(unnamedblk24__DOT__unnamedblk25__DOT__unnamedblk26__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 67)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "UVM/FIELDS/QDA_IDX"s, __VlefCall_56__get_report_verbosity_level);
                            __VlefLogAnd_58 = VL_LTES_III(32, 0U, __VlefCall_56__get_report_verbosity_level);
                            if (__VlefLogAnd_58) {
                                VL_NULL_CHECK(unnamedblk24__DOT__unnamedblk25__DOT__unnamedblk26__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 67)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "UVM/FIELDS/QDA_IDX"s, __VlefCall_57__get_report_action);
                                __VlefLogAnd_58 = (0U 
                                                   != __VlefCall_57__get_report_action);
                            }
                            if (VL_UNLIKELY((__VlefLogAnd_58))) {
                                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_59__get_full_name);
                                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "UVM/FIELDS/QDA_IDX"s, VL_SFORMATF_N_NX("Index '%0d' is not valid for field '%s.abstractions' of size '%0d'",3
                                                                                , '~',32,unnamedblk24__DOT__unnamedblk25__DOT__local_index___05F
                                                                                , 'S',&(__VlefCall_59__get_full_name)
                                                                                , '~',32,this->__PVT__abstractions.size()) , 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh"s, 0x00000043U, ""s, 1U);
                            }
                        } else {
                            unnamedblk24__DOT__unnamedblk25__DOT__unnamedblk27__DOT__tmp_string___05F = ""s;
                            __VlefExpr_60 = VL_CAST_DYNAMIC(local_rsrc___05F, unnamedblk24__DOT__unnamedblk25__DOT__unnamedblk27__DOT__unnamedblk28__DOT_____05Ftmp_rsrc___05F);
                            local_success___05F = (1U 
                                                   & __VlefExpr_60);
                            if (local_success___05F) {
                                VL_NULL_CHECK(unnamedblk24__DOT__unnamedblk25__DOT__unnamedblk27__DOT__unnamedblk28__DOT_____05Ftmp_rsrc___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 67)->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq>{this}, unnamedblk24__DOT__unnamedblk25__DOT__unnamedblk27__DOT__tmp_string___05F);
                            }
                            if (local_success___05F) {
                                if (VL_GTES_III(32, unnamedblk24__DOT__unnamedblk25__DOT__local_index___05F, this->__PVT__abstractions.size())) {
                                    if (VL_GTS_III(32, this->__PVT__abstractions.size(), 
                                                   ((::IData)(1U) 
                                                    + unnamedblk24__DOT__unnamedblk25__DOT__local_index___05F))) {
                                        this->__PVT__abstractions 
                                            = this->__PVT__abstractions.slice(0U, unnamedblk24__DOT__unnamedblk25__DOT__local_index___05F);
                                    } else {
                                        while (VL_LTS_III(32, this->__PVT__abstractions.size(), 
                                                          ((::IData)(1U) 
                                                           + unnamedblk24__DOT__unnamedblk25__DOT__local_index___05F))) {
                                            this->__PVT__abstractions.push_back(this->__PVT__abstractions.at(
                                                                                ((::IData)(1U) 
                                                                                + unnamedblk24__DOT__unnamedblk25__DOT__local_index___05F)));
                                        }
                                    }
                                }
                                this->__PVT__abstractions.atWriteAppend(unnamedblk24__DOT__unnamedblk25__DOT__local_index___05F) 
                                    = unnamedblk24__DOT__unnamedblk25__DOT__unnamedblk27__DOT__tmp_string___05F;
                            }
                        }
                    }
                }
            }
        }
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_uvm_pkg__03a__03auvm_reg_sequence_::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_body(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_body\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::CData/*0:0*/ __VlefLogAnd_8;
    ::IData/*31:0*/ __VlefCall_7__get_report_action;
    ::IData/*31:0*/ __VlefCall_6__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_5__uvm_get_report_object;
    ::std::string __VlefCall_4__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk29__DOT___local_report_object_;
    ::IData/*31:0*/ unnamedblk30__DOT__i;
    unnamedblk30__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk30__DOT__i__Vloopsize;
    unnamedblk30__DOT__i__Vloopsize = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk31__DOT___local_report_object_;
    {
        if (VL_UNLIKELY(((VlNull{} == Vtb_top_uvm_pkg__03a__03auvm_reg_sequence_::__PVT__model)))) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_mem_hdl_paths_seq"s, "Register model handle is null"s, 0U, ""s, 0U, ""s, 0U);
            goto __Vlabel0;
        }
        this->__VnoInFunc_uvm_get_report_object(vlProcess, vlSymsp, __VlefCall_0__uvm_get_report_object);
        VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 84)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk29__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk29__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 84)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "uvm_reg_mem_hdl_paths_seq"s, __VlefCall_1__get_report_verbosity_level);
        __VlefLogAnd_3 = VL_LTES_III(32, 0x00000064U, __VlefCall_1__get_report_verbosity_level);
        if (__VlefLogAnd_3) {
            VL_NULL_CHECK(unnamedblk29__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 84)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "uvm_reg_mem_hdl_paths_seq"s, __VlefCall_2__get_report_action);
            __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_3))) {
            VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_reg_sequence_::__PVT__model, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 84)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "uvm_reg_mem_hdl_paths_seq"s, 
                                              VL_CVT_PACK_STR_NN(
                                                                 VL_CONCATN_NNN("checking HDL paths for all registers/memories in "s, __VlefCall_4__get_full_name)), 0x00000064U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh"s, 0x00000054U, ""s, 1U);
        }
        if ((0U == this->__PVT__abstractions.size())) {
            this->__VnoInFunc_do_block(vlProcess, vlSymsp, Vtb_top_uvm_pkg__03a__03auvm_reg_sequence_::__PVT__model, ""s);
        } else {
            unnamedblk30__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk30__DOT__i, this->__PVT__abstractions.size())) {
                unnamedblk30__DOT__i__Vloopsize = this->__PVT__abstractions.size();
                this->__VnoInFunc_do_block(vlProcess, vlSymsp, Vtb_top_uvm_pkg__03a__03auvm_reg_sequence_::__PVT__model, 
                                           VL_CVT_PACK_STR_NN(this->__PVT__abstractions.at(unnamedblk30__DOT__i)));
                if ((unnamedblk30__DOT__i__Vloopsize 
                     <= this->__PVT__abstractions.size())) {
                    unnamedblk30__DOT__i = ((::IData)(1U) 
                                            + unnamedblk30__DOT__i);
                }
            }
        }
        this->__VnoInFunc_uvm_get_report_object(vlProcess, vlSymsp, __VlefCall_5__uvm_get_report_object);
        VL_NULL_CHECK(__VlefCall_5__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 99)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk31__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk31__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 99)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "uvm_reg_mem_hdl_paths_seq"s, __VlefCall_6__get_report_verbosity_level);
        __VlefLogAnd_8 = VL_LTES_III(32, 0x00000064U, __VlefCall_6__get_report_verbosity_level);
        if (__VlefLogAnd_8) {
            VL_NULL_CHECK(unnamedblk31__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 99)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "uvm_reg_mem_hdl_paths_seq"s, __VlefCall_7__get_report_action);
            __VlefLogAnd_8 = (0U != __VlefCall_7__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_8))) {
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "uvm_reg_mem_hdl_paths_seq"s, "HDL path validation completed "s, 0x00000064U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh"s, 0x00000063U, ""s, 1U);
        }
        __Vlabel0: ;
    }
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_reset_blk(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_block> blk) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_reset_blk\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_do_block(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_block> blk, ::std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_do_block\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_4__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk32__DOT___local_report_object_;
    ::IData/*31:0*/ unnamedblk33__DOT__i;
    unnamedblk33__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk33__DOT__i__Vloopsize;
    unnamedblk33__DOT__i__Vloopsize = 0;
    ::IData/*31:0*/ unnamedblk34__DOT__i;
    unnamedblk34__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk34__DOT__i__Vloopsize;
    unnamedblk34__DOT__i__Vloopsize = 0;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_block>> unnamedblk35__DOT__blks;
    ::IData/*31:0*/ unnamedblk35__DOT__unnamedblk36__DOT__i;
    unnamedblk35__DOT__unnamedblk36__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk35__DOT__unnamedblk36__DOT__i__Vloopsize;
    unnamedblk35__DOT__unnamedblk36__DOT__i__Vloopsize = 0;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg>> regs;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_mem>> mems;
    regs.clear();
    mems.clear();
    this->__VnoInFunc_uvm_get_report_object(vlProcess, vlSymsp, __VlefCall_0__uvm_get_report_object);
    VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 118)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk32__DOT___local_report_object_);
    VL_NULL_CHECK(unnamedblk32__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 118)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "uvm_reg_mem_hdl_paths_seq"s, __VlefCall_1__get_report_verbosity_level);
    __VlefLogAnd_3 = VL_LTES_III(32, 0x000000c8U, __VlefCall_1__get_report_verbosity_level);
    if (__VlefLogAnd_3) {
        VL_NULL_CHECK(unnamedblk32__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 118)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "uvm_reg_mem_hdl_paths_seq"s, __VlefCall_2__get_report_action);
        __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
    }
    if (VL_UNLIKELY((__VlefLogAnd_3))) {
        VL_NULL_CHECK(blk, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 118)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "uvm_reg_mem_hdl_paths_seq"s, 
                                          VL_CVT_PACK_STR_NN(
                                                             VL_CONCATN_NNN(
                                                                            VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Validating HDL paths in "s, __VlefCall_4__get_full_name), " for "s), 
                                                                                ((""s 
                                                                                == kind)
                                                                                 ? "default"s
                                                                                 : kind)), " design abstraction"s)), 0x000000c8U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh"s, 0x00000076U, ""s, 1U);
    }
    VL_NULL_CHECK(blk, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 121)->__VnoInFunc_get_registers(vlSymsp, regs, 0U);
    unnamedblk33__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk33__DOT__i, regs.size())) {
        unnamedblk33__DOT__i__Vloopsize = regs.size();
        this->__VnoInFunc_check_reg(vlProcess, vlSymsp, regs.at(unnamedblk33__DOT__i), kind);
        if ((unnamedblk33__DOT__i__Vloopsize <= regs.size())) {
            unnamedblk33__DOT__i = ((::IData)(1U) + unnamedblk33__DOT__i);
        }
    }
    VL_NULL_CHECK(blk, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 128)->__VnoInFunc_get_memories(vlSymsp, mems, 0U);
    unnamedblk34__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk34__DOT__i, mems.size())) {
        unnamedblk34__DOT__i__Vloopsize = mems.size();
        this->__VnoInFunc_check_mem(vlProcess, vlSymsp, mems.at(unnamedblk34__DOT__i), kind);
        if ((unnamedblk34__DOT__i__Vloopsize <= mems.size())) {
            unnamedblk34__DOT__i = ((::IData)(1U) + unnamedblk34__DOT__i);
        }
    }
    unnamedblk35__DOT__blks.clear();
    VL_NULL_CHECK(blk, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 138)->__VnoInFunc_get_blocks(vlSymsp, unnamedblk35__DOT__blks, 1U);
    unnamedblk35__DOT__unnamedblk36__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk35__DOT__unnamedblk36__DOT__i, unnamedblk35__DOT__blks.size())) {
        unnamedblk35__DOT__unnamedblk36__DOT__i__Vloopsize 
            = unnamedblk35__DOT__blks.size();
        this->__VnoInFunc_do_block(vlProcess, vlSymsp, unnamedblk35__DOT__blks.at(unnamedblk35__DOT__unnamedblk36__DOT__i), kind);
        if ((unnamedblk35__DOT__unnamedblk36__DOT__i__Vloopsize 
             <= unnamedblk35__DOT__blks.size())) {
            unnamedblk35__DOT__unnamedblk36__DOT__i 
                = ((::IData)(1U) + unnamedblk35__DOT__unnamedblk36__DOT__i);
        }
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_check_reg(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg> r, ::std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_check_reg\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_12__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_11;
    ::IData/*31:0*/ __VlefCall_10__get_report_action;
    ::IData/*31:0*/ __VlefCall_9__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_8__uvm_get_report_object;
    ::IData/*31:0*/ __VlefCall_7__uvm_hdl_check_path;
    ::std::string __VlefCall_6__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_5;
    ::IData/*31:0*/ __VlefCall_4__get_report_action;
    ::IData/*31:0*/ __VlefCall_3__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_2__uvm_get_report_object;
    ::IData/*31:0*/ __VlefCall_1__uvm_hdl_read;
    ::CData/*0:0*/ __VlefCall_0__has_hdl_path;
    ::IData/*31:0*/ unnamedblk37__DOT__p;
    unnamedblk37__DOT__p = 0;
    ::IData/*31:0*/ unnamedblk37__DOT__p__Vloopsize;
    unnamedblk37__DOT__p__Vloopsize = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_hdl_path_concat> unnamedblk37__DOT__unnamedblk38__DOT__path;
    ::IData/*31:0*/ unnamedblk37__DOT__unnamedblk38__DOT__unnamedblk39__DOT__j;
    unnamedblk37__DOT__unnamedblk38__DOT__unnamedblk39__DOT__j = 0;
    ::IData/*31:0*/ unnamedblk37__DOT__unnamedblk38__DOT__unnamedblk39__DOT__j__Vloopsize;
    unnamedblk37__DOT__unnamedblk38__DOT__unnamedblk39__DOT__j__Vloopsize = 0;
    ::std::string unnamedblk37__DOT__unnamedblk38__DOT__unnamedblk39__DOT__unnamedblk40__DOT__p_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk37__DOT__unnamedblk38__DOT__unnamedblk39__DOT__unnamedblk40__DOT__unnamedblk41__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk37__DOT__unnamedblk38__DOT__unnamedblk39__DOT__unnamedblk40__DOT__unnamedblk42__DOT___local_report_object_;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_hdl_path_concat>> paths;
    {
        paths.clear();
        VL_NULL_CHECK(r, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 151)->__VnoInFunc_has_hdl_path(vlSymsp, kind, __VlefCall_0__has_hdl_path);
        if ((1U & (~ (::IData)(__VlefCall_0__has_hdl_path)))) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(r, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 157)->__VnoInFunc_get_full_hdl_path(vlProcess, vlSymsp, paths, kind, "."s);
        if ((0U == paths.size())) {
            goto __Vlabel0;
        }
        unnamedblk37__DOT__p = 0U;
        while (VL_LTS_III(32, unnamedblk37__DOT__p, paths.size())) {
            unnamedblk37__DOT__p__Vloopsize = paths.size();
            unnamedblk37__DOT__unnamedblk38__DOT__path 
                = paths.at(unnamedblk37__DOT__p);
            unnamedblk37__DOT__unnamedblk38__DOT__unnamedblk39__DOT__j = 0U;
            while (VL_LTS_III(32, unnamedblk37__DOT__unnamedblk38__DOT__unnamedblk39__DOT__j, VL_NULL_CHECK(unnamedblk37__DOT__unnamedblk38__DOT__path, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 165)
                              ->__PVT__slices.size())) {
                unnamedblk37__DOT__unnamedblk38__DOT__unnamedblk39__DOT__j__Vloopsize 
                    = VL_NULL_CHECK(unnamedblk37__DOT__unnamedblk38__DOT__path, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 165)
                    ->__PVT__slices.size();
                unnamedblk37__DOT__unnamedblk38__DOT__unnamedblk39__DOT__unnamedblk40__DOT__p_ 
                    = VL_NULL_CHECK(unnamedblk37__DOT__unnamedblk38__DOT__path, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 166)
                    ->__PVT__slices.at(unnamedblk37__DOT__unnamedblk38__DOT__unnamedblk39__DOT__j)
                    .__PVT__path;
                vlSymsp->vlInst.TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "UVM_HDL_READ"s, "uvm_hdl DPI routines are compiled off. Recompile without +define+UVM_HDL_NO_DPI"s, 0U, ""s, 0U, ""s, 0U);
                __VlefCall_1__uvm_hdl_read = 0U;
                if ((1U & (~ (0U != __VlefCall_1__uvm_hdl_read)))) {
                    this->__VnoInFunc_uvm_get_report_object(vlProcess, vlSymsp, __VlefCall_2__uvm_get_report_object);
                    VL_NULL_CHECK(__VlefCall_2__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 171)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk37__DOT__unnamedblk38__DOT__unnamedblk39__DOT__unnamedblk40__DOT__unnamedblk41__DOT___local_report_object_);
                    VL_NULL_CHECK(unnamedblk37__DOT__unnamedblk38__DOT__unnamedblk39__DOT__unnamedblk40__DOT__unnamedblk41__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 171)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "uvm_reg_mem_hdl_paths_seq"s, __VlefCall_3__get_report_verbosity_level);
                    __VlefLogAnd_5 = VL_LTES_III(32, 0U, __VlefCall_3__get_report_verbosity_level);
                    if (__VlefLogAnd_5) {
                        VL_NULL_CHECK(unnamedblk37__DOT__unnamedblk38__DOT__unnamedblk39__DOT__unnamedblk40__DOT__unnamedblk41__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 171)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "uvm_reg_mem_hdl_paths_seq"s, __VlefCall_4__get_report_action);
                        __VlefLogAnd_5 = (0U != __VlefCall_4__get_report_action);
                    }
                    if (VL_UNLIKELY((__VlefLogAnd_5))) {
                        VL_NULL_CHECK(r, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 171)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
                        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_mem_hdl_paths_seq"s, VL_SFORMATF_N_NX("HDL path \"%s\" for register \"%s\" is not readable",2
                                                                                , 'S',&(unnamedblk37__DOT__unnamedblk38__DOT__unnamedblk39__DOT__unnamedblk40__DOT__p_)
                                                                                , 'S',&(__VlefCall_6__get_full_name)) , 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh"s, 0x000000abU, ""s, 1U);
                    }
                }
                vlSymsp->vlInst.TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "UVM_HDL_CHECK_PATH"s, "uvm_hdl DPI routines are compiled off. Recompile without +define+UVM_HDL_NO_DPI"s, 0U, ""s, 0U, ""s, 0U);
                __VlefCall_7__uvm_hdl_check_path = 0U;
                if ((1U & (~ (0U != __VlefCall_7__uvm_hdl_check_path)))) {
                    this->__VnoInFunc_uvm_get_report_object(vlProcess, vlSymsp, __VlefCall_8__uvm_get_report_object);
                    VL_NULL_CHECK(__VlefCall_8__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 176)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk37__DOT__unnamedblk38__DOT__unnamedblk39__DOT__unnamedblk40__DOT__unnamedblk42__DOT___local_report_object_);
                    VL_NULL_CHECK(unnamedblk37__DOT__unnamedblk38__DOT__unnamedblk39__DOT__unnamedblk40__DOT__unnamedblk42__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 176)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "uvm_reg_mem_hdl_paths_seq"s, __VlefCall_9__get_report_verbosity_level);
                    __VlefLogAnd_11 = VL_LTES_III(32, 0U, __VlefCall_9__get_report_verbosity_level);
                    if (__VlefLogAnd_11) {
                        VL_NULL_CHECK(unnamedblk37__DOT__unnamedblk38__DOT__unnamedblk39__DOT__unnamedblk40__DOT__unnamedblk42__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 176)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "uvm_reg_mem_hdl_paths_seq"s, __VlefCall_10__get_report_action);
                        __VlefLogAnd_11 = (0U != __VlefCall_10__get_report_action);
                    }
                    if (VL_UNLIKELY((__VlefLogAnd_11))) {
                        VL_NULL_CHECK(r, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 176)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_12__get_full_name);
                        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_mem_hdl_paths_seq"s, VL_SFORMATF_N_NX("HDL path \"%s\" for register \"%s\" is not accessible",2
                                                                                , 'S',&(unnamedblk37__DOT__unnamedblk38__DOT__unnamedblk39__DOT__unnamedblk40__DOT__p_)
                                                                                , 'S',&(__VlefCall_12__get_full_name)) , 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh"s, 0x000000b0U, ""s, 1U);
                    }
                }
                if ((unnamedblk37__DOT__unnamedblk38__DOT__unnamedblk39__DOT__j__Vloopsize 
                     <= VL_NULL_CHECK(unnamedblk37__DOT__unnamedblk38__DOT__path, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 165)
                     ->__PVT__slices.size())) {
                    unnamedblk37__DOT__unnamedblk38__DOT__unnamedblk39__DOT__j 
                        = ((::IData)(1U) + unnamedblk37__DOT__unnamedblk38__DOT__unnamedblk39__DOT__j);
                }
            }
            if ((unnamedblk37__DOT__p__Vloopsize <= paths.size())) {
                unnamedblk37__DOT__p = ((::IData)(1U) 
                                        + unnamedblk37__DOT__p);
            }
        }
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_check_mem(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_mem> m, ::std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_check_mem\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_6__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_5;
    ::IData/*31:0*/ __VlefCall_4__get_report_action;
    ::IData/*31:0*/ __VlefCall_3__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_2__uvm_get_report_object;
    ::IData/*31:0*/ __VlefCall_1__uvm_hdl_check_path;
    ::CData/*0:0*/ __VlefCall_0__has_hdl_path;
    ::IData/*31:0*/ unnamedblk43__DOT__p;
    unnamedblk43__DOT__p = 0;
    ::IData/*31:0*/ unnamedblk43__DOT__p__Vloopsize;
    unnamedblk43__DOT__p__Vloopsize = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_hdl_path_concat> unnamedblk43__DOT__unnamedblk44__DOT__path;
    ::IData/*31:0*/ unnamedblk43__DOT__unnamedblk44__DOT__unnamedblk45__DOT__j;
    unnamedblk43__DOT__unnamedblk44__DOT__unnamedblk45__DOT__j = 0;
    ::IData/*31:0*/ unnamedblk43__DOT__unnamedblk44__DOT__unnamedblk45__DOT__j__Vloopsize;
    unnamedblk43__DOT__unnamedblk44__DOT__unnamedblk45__DOT__j__Vloopsize = 0;
    ::std::string unnamedblk43__DOT__unnamedblk44__DOT__unnamedblk45__DOT__unnamedblk46__DOT__p_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk43__DOT__unnamedblk44__DOT__unnamedblk45__DOT__unnamedblk46__DOT__unnamedblk47__DOT___local_report_object_;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_hdl_path_concat>> paths;
    {
        paths.clear();
        VL_NULL_CHECK(m, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 188)->__VnoInFunc_has_hdl_path(vlSymsp, kind, __VlefCall_0__has_hdl_path);
        if ((1U & (~ (::IData)(__VlefCall_0__has_hdl_path)))) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(m, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 194)->__VnoInFunc_get_full_hdl_path(vlProcess, vlSymsp, paths, kind, "."s);
        if ((0U == paths.size())) {
            goto __Vlabel0;
        }
        unnamedblk43__DOT__p = 0U;
        while (VL_LTS_III(32, unnamedblk43__DOT__p, paths.size())) {
            unnamedblk43__DOT__p__Vloopsize = paths.size();
            unnamedblk43__DOT__unnamedblk44__DOT__path 
                = paths.at(unnamedblk43__DOT__p);
            unnamedblk43__DOT__unnamedblk44__DOT__unnamedblk45__DOT__j = 0U;
            while (VL_LTS_III(32, unnamedblk43__DOT__unnamedblk44__DOT__unnamedblk45__DOT__j, VL_NULL_CHECK(unnamedblk43__DOT__unnamedblk44__DOT__path, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 202)
                              ->__PVT__slices.size())) {
                unnamedblk43__DOT__unnamedblk44__DOT__unnamedblk45__DOT__j__Vloopsize 
                    = VL_NULL_CHECK(unnamedblk43__DOT__unnamedblk44__DOT__path, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 202)
                    ->__PVT__slices.size();
                unnamedblk43__DOT__unnamedblk44__DOT__unnamedblk45__DOT__unnamedblk46__DOT__p_ 
                    = VL_NULL_CHECK(unnamedblk43__DOT__unnamedblk44__DOT__path, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 204)
                    ->__PVT__slices.at(unnamedblk43__DOT__unnamedblk44__DOT__unnamedblk45__DOT__j)
                    .__PVT__path;
                vlSymsp->vlInst.TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "UVM_HDL_CHECK_PATH"s, "uvm_hdl DPI routines are compiled off. Recompile without +define+UVM_HDL_NO_DPI"s, 0U, ""s, 0U, ""s, 0U);
                __VlefCall_1__uvm_hdl_check_path = 0U;
                if ((1U & (~ (0U != __VlefCall_1__uvm_hdl_check_path)))) {
                    this->__VnoInFunc_uvm_get_report_object(vlProcess, vlSymsp, __VlefCall_2__uvm_get_report_object);
                    VL_NULL_CHECK(__VlefCall_2__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 208)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk43__DOT__unnamedblk44__DOT__unnamedblk45__DOT__unnamedblk46__DOT__unnamedblk47__DOT___local_report_object_);
                    VL_NULL_CHECK(unnamedblk43__DOT__unnamedblk44__DOT__unnamedblk45__DOT__unnamedblk46__DOT__unnamedblk47__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 208)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "uvm_reg_mem_hdl_paths_seq"s, __VlefCall_3__get_report_verbosity_level);
                    __VlefLogAnd_5 = VL_LTES_III(32, 0U, __VlefCall_3__get_report_verbosity_level);
                    if (__VlefLogAnd_5) {
                        VL_NULL_CHECK(unnamedblk43__DOT__unnamedblk44__DOT__unnamedblk45__DOT__unnamedblk46__DOT__unnamedblk47__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 208)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "uvm_reg_mem_hdl_paths_seq"s, __VlefCall_4__get_report_action);
                        __VlefLogAnd_5 = (0U != __VlefCall_4__get_report_action);
                    }
                    if (VL_UNLIKELY((__VlefLogAnd_5))) {
                        VL_NULL_CHECK(m, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 208)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
                        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_mem_hdl_paths_seq"s, VL_SFORMATF_N_NX("HDL path \"%s\" for memory \"%s\" is not accessible",2
                                                                                , 'S',&(unnamedblk43__DOT__unnamedblk44__DOT__unnamedblk45__DOT__unnamedblk46__DOT__p_)
                                                                                , 'S',&(__VlefCall_6__get_full_name)) , 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh"s, 0x000000d0U, ""s, 1U);
                    }
                }
                if ((unnamedblk43__DOT__unnamedblk44__DOT__unnamedblk45__DOT__j__Vloopsize 
                     <= VL_NULL_CHECK(unnamedblk43__DOT__unnamedblk44__DOT__path, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 202)
                     ->__PVT__slices.size())) {
                    unnamedblk43__DOT__unnamedblk44__DOT__unnamedblk45__DOT__j 
                        = ((::IData)(1U) + unnamedblk43__DOT__unnamedblk44__DOT__unnamedblk45__DOT__j);
                }
            }
            if ((unnamedblk43__DOT__p__Vloopsize <= paths.size())) {
                unnamedblk43__DOT__p = ((::IData)(1U) 
                                        + unnamedblk43__DOT__p);
            }
        }
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::~Vtb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::to_string_middle\n"); );
    // Body
    std::string out;
    out += "abstractions:" + VL_TO_STRING(__PVT__abstractions);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_reg_sequence_::to_string_middle();
    return (out);
}
