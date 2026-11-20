// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_mlp_pkg__03a__03amlp_base_test::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_mlp_pkg__03a__03amlp_base_test::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component_registry__pi6d76cef8> __Vfunc_get__Vfuncout_93;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_component_registry__pi6d76cef8__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_93);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_93;
}

void Vtb_top_mlp_pkg__03a__03amlp_base_test::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_mlp_pkg__03a__03amlp_base_test::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "mlp_base_test"s;
}

void Vtb_top_mlp_pkg__03a__03amlp_base_test::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> parent) {
    Vtb_top_uvm_pkg__03a__03auvm_test::init(vlProcess, vlSymsp, name, parent);
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_mlp_pkg__03a__03amlp_base_test::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void Vtb_top_mlp_pkg__03a__03amlp_base_test::__VnoInFunc_build_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_mlp_pkg__03a__03amlp_base_test::__VnoInFunc_build_phase\n"); );
    // Locals
    ::std::string __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCall_32__size;
    ::IData/*31:0*/ __VlefCall_31__size;
    ::CData/*0:0*/ __VlefLogAnd_30;
    ::IData/*31:0*/ __VlefCall_29__get_report_action;
    ::IData/*31:0*/ __VlefCall_28__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_27__uvm_get_report_object;
    ::CData/*0:0*/ __VlefLogAnd_26;
    ::IData/*31:0*/ __VlefCall_25__get_report_action;
    ::IData/*31:0*/ __VlefCall_24__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_23__uvm_get_report_object;
    ::CData/*0:0*/ __VlefCall_22__load_vectors;
    ::CData/*0:0*/ __VlefLogAnd_21;
    ::IData/*31:0*/ __VlefCall_20__get_report_action;
    ::IData/*31:0*/ __VlefCall_19__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_18__uvm_get_report_object;
    ::CData/*0:0*/ __VlefCall_17__load_cfg;
    ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_dataset> __VlefCall_16__create;
    ::IData/*31:0*/ __VlefCall_15__size;
    ::CData/*0:0*/ __VlefLogAnd_14;
    ::IData/*31:0*/ __VlefCall_13__get_report_action;
    ::IData/*31:0*/ __VlefCall_12__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_11__uvm_get_report_object;
    ::CData/*0:0*/ __VlefCall_10__load_vectors;
    ::CData/*0:0*/ __VlefLogAnd_9;
    ::IData/*31:0*/ __VlefCall_8__get_report_action;
    ::IData/*31:0*/ __VlefCall_7__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_6__uvm_get_report_object;
    ::CData/*0:0*/ __VlefCall_5__load_cfg;
    ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_dataset> __VlefCall_4__create;
    ::IData/*31:0*/ __VlefExpr_3;
    ::IData/*31:0*/ __VlefExpr_2;
    ::IData/*31:0*/ __VlefExpr_1;
    ::IData/*31:0*/ __VlefExpr_0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk1__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk2__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk3__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk4__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk5__DOT___local_report_object_;
    ::std::string dir;
    ::std::string f_cfg;
    ::std::string f_vec;
    ::IData/*31:0*/ n;
    dir = ""s;
    f_cfg = ""s;
    f_vec = ""s;
    n = 0U;
    Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_build_phase(vlProcess, vlSymsp, phase);
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pif2ab676e__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "cfg"s, VlNull{}, ""s, this->__PVT__cfg);
    __VlefExpr_0 = VL_VALUEPLUSARGS_INN(64, "DATA_DIR=%s"s, 
                                        dir);
    if ((0U != __VlefExpr_0)) {
        VL_NULL_CHECK(this->__PVT__cfg, "mlp_tests.sv", 22)->__PVT__data_dir 
            = dir;
    }
    __VlefExpr_1 = VL_VALUEPLUSARGS_INI(32, "NUM_ITEMS=%d"s, 
                                        n);
    if ((0U != __VlefExpr_1)) {
        VL_NULL_CHECK(this->__PVT__cfg, "mlp_tests.sv", 23)->__PVT__num_items 
            = n;
    }
    __VlefExpr_2 = VL_VALUEPLUSARGS_INI(32, "IMG_IDX=%d"s, 
                                        n);
    if ((0U != __VlefExpr_2)) {
        VL_NULL_CHECK(this->__PVT__cfg, "mlp_tests.sv", 24)->__PVT__img_idx 
            = n;
    }
    __VlefExpr_3 = VL_VALUEPLUSARGS_INI(32, "MIN_ACC=%d"s, 
                                        n);
    if ((0U != __VlefExpr_3)) {
        VL_NULL_CHECK(this->__PVT__cfg, "mlp_tests.sv", 25)->__PVT__min_acc_pct 
            = n;
    }
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pi68a5ab13__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "iris_ds"s, VlNull{}, ""s, __VlefCall_4__create);
    VL_NULL_CHECK(this->__PVT__cfg, "mlp_tests.sv", 28)->__PVT__iris_ds 
        = __VlefCall_4__create;
    f_cfg = VL_CONCATN_NNN(VL_NULL_CHECK(this->__PVT__cfg, "mlp_tests.sv", 29)
                           ->__PVT__data_dir, "/iris_cfg.txt"s);
    f_vec = VL_CONCATN_NNN(VL_NULL_CHECK(this->__PVT__cfg, "mlp_tests.sv", 30)
                           ->__PVT__data_dir, "/iris_vectors.txt"s);
    VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__cfg, "mlp_tests.sv", 31)
                  ->__PVT__iris_ds, "mlp_tests.sv", 31)->__VnoInFunc_load_cfg(vlSymsp, f_cfg, __VlefCall_5__load_cfg);
    if ((1U & (~ (::IData)(__VlefCall_5__load_cfg)))) {
        this->__VnoInFunc_uvm_get_report_object(vlSymsp, __VlefCall_6__uvm_get_report_object);
        VL_NULL_CHECK(__VlefCall_6__uvm_get_report_object, "mlp_tests.sv", 31)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk1__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk1__DOT___local_report_object_, "mlp_tests.sv", 31)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 3U, "DATA"s, __VlefCall_7__get_report_verbosity_level);
        __VlefLogAnd_9 = VL_LTES_III(32, 0U, __VlefCall_7__get_report_verbosity_level);
        if (__VlefLogAnd_9) {
            VL_NULL_CHECK(unnamedblk1__DOT___local_report_object_, "mlp_tests.sv", 31)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 3U, "DATA"s, __VlefCall_8__get_report_action);
            __VlefLogAnd_9 = (0U != __VlefCall_8__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_9))) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "DATA"s, 
                                               VL_CVT_PACK_STR_NN(
                                                                  VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("cannot read "s, f_cfg), " (set +DATA_DIR)"s)), 0U, "mlp_tests.sv"s, 0x0000001fU, ""s, 1U);
        }
    }
    VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__cfg, "mlp_tests.sv", 32)
                  ->__PVT__iris_ds, "mlp_tests.sv", 32)->__VnoInFunc_load_vectors(vlSymsp, f_vec, __VlefCall_10__load_vectors);
    if ((1U & (~ (::IData)(__VlefCall_10__load_vectors)))) {
        this->__VnoInFunc_uvm_get_report_object(vlSymsp, __VlefCall_11__uvm_get_report_object);
        VL_NULL_CHECK(__VlefCall_11__uvm_get_report_object, "mlp_tests.sv", 32)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk2__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk2__DOT___local_report_object_, "mlp_tests.sv", 32)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 3U, "DATA"s, __VlefCall_12__get_report_verbosity_level);
        __VlefLogAnd_14 = VL_LTES_III(32, 0U, __VlefCall_12__get_report_verbosity_level);
        if (__VlefLogAnd_14) {
            VL_NULL_CHECK(unnamedblk2__DOT___local_report_object_, "mlp_tests.sv", 32)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 3U, "DATA"s, __VlefCall_13__get_report_action);
            __VlefLogAnd_14 = (0U != __VlefCall_13__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_14))) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "DATA"s, 
                                               VL_CVT_PACK_STR_NN(
                                                                  VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("cannot read "s, f_vec), " (set +DATA_DIR)"s)), 0U, "mlp_tests.sv"s, 0x00000020U, ""s, 1U);
        }
    }
    VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__cfg, "mlp_tests.sv", 33)
                  ->__PVT__iris_ds, "mlp_tests.sv", 33)->__VnoInFunc_size(vlSymsp, __VlefCall_15__size);
    if (VL_LTS_III(32, 0x000000ffU, __VlefCall_15__size)) {
        VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__cfg, "mlp_tests.sv", 33)
                      ->__PVT__iris_ds, "mlp_tests.sv", 33)->__PVT__test_n = 0x000000ffU;
    }
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pi68a5ab13__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "sat_ds"s, VlNull{}, ""s, __VlefCall_16__create);
    VL_NULL_CHECK(this->__PVT__cfg, "mlp_tests.sv", 36)->__PVT__sat_ds 
        = __VlefCall_16__create;
    f_cfg = VL_CONCATN_NNN(VL_NULL_CHECK(this->__PVT__cfg, "mlp_tests.sv", 37)
                           ->__PVT__data_dir, "/sat_cfg.txt"s);
    f_vec = VL_CONCATN_NNN(VL_NULL_CHECK(this->__PVT__cfg, "mlp_tests.sv", 38)
                           ->__PVT__data_dir, "/sat_vectors.txt"s);
    VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__cfg, "mlp_tests.sv", 39)
                  ->__PVT__sat_ds, "mlp_tests.sv", 39)->__VnoInFunc_load_cfg(vlSymsp, f_cfg, __VlefCall_17__load_cfg);
    if ((1U & (~ (::IData)(__VlefCall_17__load_cfg)))) {
        this->__VnoInFunc_uvm_get_report_object(vlSymsp, __VlefCall_18__uvm_get_report_object);
        VL_NULL_CHECK(__VlefCall_18__uvm_get_report_object, "mlp_tests.sv", 39)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk3__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk3__DOT___local_report_object_, "mlp_tests.sv", 39)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 3U, "DATA"s, __VlefCall_19__get_report_verbosity_level);
        __VlefLogAnd_21 = VL_LTES_III(32, 0U, __VlefCall_19__get_report_verbosity_level);
        if (__VlefLogAnd_21) {
            VL_NULL_CHECK(unnamedblk3__DOT___local_report_object_, "mlp_tests.sv", 39)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 3U, "DATA"s, __VlefCall_20__get_report_action);
            __VlefLogAnd_21 = (0U != __VlefCall_20__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_21))) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "DATA"s, 
                                               VL_CVT_PACK_STR_NN(
                                                                  VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("cannot read "s, f_cfg), " (run: make sat_vectors)"s)), 0U, "mlp_tests.sv"s, 0x00000027U, ""s, 1U);
        }
    }
    VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__cfg, "mlp_tests.sv", 40)
                  ->__PVT__sat_ds, "mlp_tests.sv", 40)->__VnoInFunc_load_vectors(vlSymsp, f_vec, __VlefCall_22__load_vectors);
    if ((1U & (~ (::IData)(__VlefCall_22__load_vectors)))) {
        this->__VnoInFunc_uvm_get_report_object(vlSymsp, __VlefCall_23__uvm_get_report_object);
        VL_NULL_CHECK(__VlefCall_23__uvm_get_report_object, "mlp_tests.sv", 40)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk4__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk4__DOT___local_report_object_, "mlp_tests.sv", 40)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 3U, "DATA"s, __VlefCall_24__get_report_verbosity_level);
        __VlefLogAnd_26 = VL_LTES_III(32, 0U, __VlefCall_24__get_report_verbosity_level);
        if (__VlefLogAnd_26) {
            VL_NULL_CHECK(unnamedblk4__DOT___local_report_object_, "mlp_tests.sv", 40)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 3U, "DATA"s, __VlefCall_25__get_report_action);
            __VlefLogAnd_26 = (0U != __VlefCall_25__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_26))) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "DATA"s, 
                                               VL_CVT_PACK_STR_NN(
                                                                  VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("cannot read "s, f_vec), " (run: make sat_vectors)"s)), 0U, "mlp_tests.sv"s, 0x00000028U, ""s, 1U);
        }
    }
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_config_db__Tz648eaeea__Vclpkg.__VnoInFunc_set(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_base_test>{this}, "*"s, "cfg"s, this->__PVT__cfg);
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_component_registry__pi4386cde4__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "env"s, 
                                                                                ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_base_test>{this}, ""s, this->__PVT__env);
    this->__VnoInFunc_uvm_get_report_object(vlSymsp, __VlefCall_27__uvm_get_report_object);
    VL_NULL_CHECK(__VlefCall_27__uvm_get_report_object, "mlp_tests.sv", 46)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk5__DOT___local_report_object_);
    VL_NULL_CHECK(unnamedblk5__DOT___local_report_object_, "mlp_tests.sv", 46)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "TEST"s, __VlefCall_28__get_report_verbosity_level);
    __VlefLogAnd_30 = VL_LTES_III(32, 0x00000064U, __VlefCall_28__get_report_verbosity_level);
    if (__VlefLogAnd_30) {
        VL_NULL_CHECK(unnamedblk5__DOT___local_report_object_, "mlp_tests.sv", 46)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "TEST"s, __VlefCall_29__get_report_action);
        __VlefLogAnd_30 = (0U != __VlefCall_29__get_report_action);
    }
    if (VL_UNLIKELY((__VlefLogAnd_30))) {
        VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__cfg, "mlp_tests.sv", 46)
                      ->__PVT__iris_ds, "mlp_tests.sv", 46)->__VnoInFunc_size(vlSymsp, __VlefCall_31__size);
        VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__cfg, "mlp_tests.sv", 46)
                      ->__PVT__sat_ds, "mlp_tests.sv", 46)->__VnoInFunc_size(vlSymsp, __VlefCall_32__size);
        __Vtemp_1 = VL_NULL_CHECK(this->__PVT__cfg, "mlp_tests.sv", 46)
            ->__PVT__data_dir;
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "TEST"s, VL_SFORMATF_N_NX("data_dir=%s  iris vectors=%0d (test set %0d)  sat vectors=%0d  NUM_ITEMS=%0d  IMG_IDX=%0d",6
                                                                                , 'S',&(__Vtemp_1)
                                                                                , '~',32,__VlefCall_31__size
                                                                                , '~',32,VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__cfg, "mlp_tests.sv", 46)
                                                                                ->__PVT__iris_ds, "mlp_tests.sv", 46)
                                                                                ->__PVT__test_n
                                                                                , '~',32,__VlefCall_32__size
                                                                                , '#',32,VL_NULL_CHECK(this->__PVT__cfg, "mlp_tests.sv", 46)
                                                                                ->__PVT__num_items
                                                                                , '#',32,VL_NULL_CHECK(this->__PVT__cfg, "mlp_tests.sv", 46)
                                                                                ->__PVT__img_idx) , 0x00000064U, "mlp_tests.sv"s, 0x0000002eU, ""s, 1U);
    }
}

void Vtb_top_mlp_pkg__03a__03amlp_base_test::__VnoInFunc_make_seq(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_base_seq> &make_seq__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_mlp_pkg__03a__03amlp_base_test::__VnoInFunc_make_seq\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    make_seq__Vfuncrtn = VlNull{};
}

VlCoroutine Vtb_top_mlp_pkg__03a__03amlp_base_test::__VnoInFunc_run_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_mlp_pkg__03a__03amlp_base_test::__VnoInFunc_run_phase\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk6__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_base_seq> seq;
    this->__VnoInFunc_make_seq(vlProcess, vlSymsp, seq);
    if ((VlNull{} == seq)) {
        this->__VnoInFunc_uvm_get_report_object(vlSymsp, __VlefCall_0__uvm_get_report_object);
        VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "mlp_tests.sv", 56)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk6__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk6__DOT___local_report_object_, "mlp_tests.sv", 56)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 3U, "TEST"s, __VlefCall_1__get_report_verbosity_level);
        __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
        if (__VlefLogAnd_3) {
            VL_NULL_CHECK(unnamedblk6__DOT___local_report_object_, "mlp_tests.sv", 56)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 3U, "TEST"s, __VlefCall_2__get_report_action);
            __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_3))) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "TEST"s, "make_seq() returned null"s, 0U, "mlp_tests.sv"s, 0x00000038U, ""s, 1U);
        }
    }
    VL_NULL_CHECK(phase, "mlp_tests.sv", 57)->__VnoInFunc_raise_objection(vlProcess, vlSymsp, 
                                                                          ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_base_test>{this}, ""s, 1U);
    VL_NULL_CHECK(seq, "mlp_tests.sv", 58)->__PVT__cfg 
        = this->__PVT__cfg;
    co_await VL_NULL_CHECK(seq, "mlp_tests.sv", 59)->__VnoInFunc_start(vlProcess, vlSymsp, VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__env, "mlp_tests.sv", 59)
                                                                                ->__PVT__agt, "mlp_tests.sv", 59)
                                                                       ->__PVT__sqr, VlNull{}, 0xffffffffU, 1U);
    VL_NULL_CHECK(phase, "mlp_tests.sv", 60)->__VnoInFunc_drop_objection(vlProcess, vlSymsp, 
                                                                         ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_base_test>{this}, ""s, 1U);
    co_return;
}

void Vtb_top_mlp_pkg__03a__03amlp_base_test::__VnoInFunc_end_of_elaboration_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_mlp_pkg__03a__03amlp_base_test::__VnoInFunc_end_of_elaboration_phase\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefExpr_0;
    ::std::string unnamedblk7__DOT__v;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_top, "mlp_tests.sv", 64)->__VnoInFunc_set_timeout(vlProcess, vlSymsp, 0x0000000002faf080ULL, 0U);
    unnamedblk7__DOT__v = ""s;
    __VlefExpr_0 = VL_VALUEPLUSARGS_INN(64, "UVM_VERBOSITY=%s"s, 
                                        unnamedblk7__DOT__v);
    if ((0U != __VlefExpr_0)) {
        if (("UVM_NONE"s == unnamedblk7__DOT__v)) {
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_top, "mlp_tests.sv", 71)->__VnoInFunc_set_report_verbosity_level_hier(vlProcess, vlSymsp, 0U);
        } else if (("UVM_LOW"s == unnamedblk7__DOT__v)) {
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_top, "mlp_tests.sv", 72)->__VnoInFunc_set_report_verbosity_level_hier(vlProcess, vlSymsp, 0x00000064U);
        } else if (("UVM_MEDIUM"s == unnamedblk7__DOT__v)) {
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_top, "mlp_tests.sv", 73)->__VnoInFunc_set_report_verbosity_level_hier(vlProcess, vlSymsp, 0x000000c8U);
        } else if (("UVM_HIGH"s == unnamedblk7__DOT__v)) {
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_top, "mlp_tests.sv", 74)->__VnoInFunc_set_report_verbosity_level_hier(vlProcess, vlSymsp, 0x0000012cU);
        } else if (("UVM_FULL"s == unnamedblk7__DOT__v)) {
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_top, "mlp_tests.sv", 75)->__VnoInFunc_set_report_verbosity_level_hier(vlProcess, vlSymsp, 0x00000190U);
        }
    }
}

void Vtb_top_mlp_pkg__03a__03amlp_base_test::__VnoInFunc_report_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_mlp_pkg__03a__03amlp_base_test::__VnoInFunc_report_phase\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_get_severity_count__Vfuncout_16;
    __Vtask_get_severity_count__Vfuncout_16 = 0;
    ::IData/*31:0*/ __Vtask_get_severity_count__Vfuncout_17;
    __Vtask_get_severity_count__Vfuncout_17 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_7;
    ::IData/*31:0*/ __VlefCall_6__get_report_action;
    ::IData/*31:0*/ __VlefCall_5__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_4__uvm_get_report_object;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk8__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk9__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_server> srv;
    ::IData/*31:0*/ errs;
    ::IData/*31:0*/ fats;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_report_server__Vclpkg.__VnoInFunc_get_server(vlProcess, vlSymsp, srv);
    VL_NULL_CHECK(srv, "mlp_tests.sv", 85)->__VnoInFunc_get_severity_count(vlSymsp, 2U, __Vtask_get_severity_count__Vfuncout_16);
    errs = __Vtask_get_severity_count__Vfuncout_16;
    VL_NULL_CHECK(srv, "mlp_tests.sv", 86)->__VnoInFunc_get_severity_count(vlSymsp, 3U, __Vtask_get_severity_count__Vfuncout_17);
    fats = __Vtask_get_severity_count__Vfuncout_17;
    if (((0U == errs) & (0U == fats))) {
        this->__VnoInFunc_uvm_get_report_object(vlSymsp, __VlefCall_0__uvm_get_report_object);
        VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "mlp_tests.sv", 88)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk8__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk8__DOT___local_report_object_, "mlp_tests.sv", 88)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "RESULT"s, __VlefCall_1__get_report_verbosity_level);
        __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
        if (__VlefLogAnd_3) {
            VL_NULL_CHECK(unnamedblk8__DOT___local_report_object_, "mlp_tests.sv", 88)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "RESULT"s, __VlefCall_2__get_report_action);
            __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_3))) {
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "RESULT"s, "*** TEST PASSED ***"s, 0U, "mlp_tests.sv"s, 0x00000058U, ""s, 1U);
        }
    } else {
        this->__VnoInFunc_uvm_get_report_object(vlSymsp, __VlefCall_4__uvm_get_report_object);
        VL_NULL_CHECK(__VlefCall_4__uvm_get_report_object, "mlp_tests.sv", 90)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk9__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk9__DOT___local_report_object_, "mlp_tests.sv", 90)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "RESULT"s, __VlefCall_5__get_report_verbosity_level);
        __VlefLogAnd_7 = VL_LTES_III(32, 0U, __VlefCall_5__get_report_verbosity_level);
        if (__VlefLogAnd_7) {
            VL_NULL_CHECK(unnamedblk9__DOT___local_report_object_, "mlp_tests.sv", 90)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "RESULT"s, __VlefCall_6__get_report_action);
            __VlefLogAnd_7 = (0U != __VlefCall_6__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_7))) {
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "RESULT"s, VL_SFORMATF_N_NX("*** TEST FAILED ***  UVM_ERROR=%0d UVM_FATAL=%0d",2
                                                                                , '#',32,errs
                                                                                , '#',32,fats) , 0U, "mlp_tests.sv"s, 0x0000005aU, ""s, 1U);
        }
    }
}

void Vtb_top_mlp_pkg__03a__03amlp_base_test::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_mlp_pkg__03a__03amlp_base_test::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_mlp_pkg__03a__03amlp_base_test::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_mlp_pkg__03a__03amlp_base_test::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_mlp_pkg__03a__03amlp_base_test::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_mlp_pkg__03a__03amlp_base_test::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_mlp_pkg__03a__03amlp_base_test::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_mlp_pkg__03a__03amlp_base_test::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_mlp_pkg__03a__03amlp_base_test::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_mlp_pkg__03a__03amlp_base_test::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_top_mlp_pkg__03a__03amlp_base_test::~Vtb_top_mlp_pkg__03a__03amlp_base_test() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_mlp_pkg__03a__03amlp_base_test::~\n"); );
}

std::string Vtb_top_mlp_pkg__03a__03amlp_base_test::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_mlp_pkg__03a__03amlp_base_test::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_mlp_pkg__03a__03amlp_base_test::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_mlp_pkg__03a__03amlp_base_test::to_string_middle\n"); );
    // Body
    std::string out;
    out += "env:" + VL_TO_STRING(__PVT__env);
    out += ", cfg:" + VL_TO_STRING(__PVT__cfg);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_test::to_string_middle();
    return (out);
}
