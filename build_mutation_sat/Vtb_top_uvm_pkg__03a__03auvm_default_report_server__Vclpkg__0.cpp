// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_default_report_server"s;
}

extern const ::VlUnpacked<::CData/*1:0*/, 4> Vtb_top__ConstPool__CONSARRAY_0;

void Vtb_top_uvm_pkg__03a__03auvm_default_report_server::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_uvm_pkg__03a__03auvm_report_server::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_report_server::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    this->__PVT__max_quit_overridable = 1U;
    this->__PVT__enable_report_id_count_summary = 1U;
    this->__PVT__record_all_messages = 0U;
    this->__PVT__show_verbosity = 0U;
    this->__PVT__show_terminator = 0U;
    this->__PVT__m_report_summarize_in_stack = 0U;
    /*super.new*/;
    this->__VnoInFunc_set_max_quit_count(vlProcess, vlSymsp, 0U, 1U);
    {
        // Inlined CFunc: __VnoInFunc_reset_quit_count
        this->__PVT__m_quit_count = 0U;
    }
    {
        // Inlined CFunc: __VnoInFunc_reset_severity_counts
        ::CData/*1:0*/ __Vinline_0___VnoInFunc_reset_severity_counts_s;
        __Vinline_0___VnoInFunc_reset_severity_counts_s = 0U;
        {
            while (true) {
                this->__PVT__m_severity_count.atWrite((::IData)(__Vinline_0___VnoInFunc_reset_severity_counts_s)) = 0U;
                if ((3U == (::IData)(__Vinline_0___VnoInFunc_reset_severity_counts_s))) {
                    goto __Vlabel0;
                }
                __Vinline_0___VnoInFunc_reset_severity_counts_s 
                    = Vtb_top__ConstPool__CONSARRAY_0
                    [__Vinline_0___VnoInFunc_reset_severity_counts_s];
            }
            __Vlabel0: ;
        }
    }
}

extern const ::VlUnpacked<::std::string, 4> Vtb_top__ConstPool__CONSARRAY_4;

void Vtb_top_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_do_print\n"); );
    // Locals
    ::VlWide<128>/*4095:0*/ __Vtemp_1;
    ::VlWide<128>/*4095:0*/ __Vtemp_2;
    ::VlWide<128>/*4095:0*/ __Vtemp_3;
    ::std::string __Vtemp_4;
    ::VlWide<128>/*4095:0*/ __Vtemp_5;
    ::VlWide<128>/*4095:0*/ __Vtemp_6;
    ::VlWide<128>/*4095:0*/ __Vtemp_7;
    ::VlWide<128>/*4095:0*/ __Vtemp_8;
    ::VlWide<128>/*4095:0*/ __Vtemp_9;
    ::VlWide<128>/*4095:0*/ __Vtemp_10;
    ::IData/*31:0*/ __Vilp1;
    ::IData/*31:0*/ __Vilp2;
    ::IData/*31:0*/ __Vilp3;
    ::IData/*31:0*/ __Vilp4;
    ::IData/*31:0*/ __Vilp5;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefExpr_3;
    ::CData/*0:0*/ __VlefExpr_2;
    ::CData/*0:0*/ __VlefExpr_1;
    ::CData/*0:0*/ __VlefExpr_0;
    ::CData/*1:0*/ l_severity_count_index;
    ::std::string l_id_count_index;
    l_severity_count_index = 0U;
    l_id_count_index = ""s;
    VL_EXTENDS_WI(4096,32, __Vtemp_1, this->__PVT__m_quit_count);
    VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 363)->__VnoInFunc_print_field(vlProcess, vlSymsp, "quit_count"s, __Vtemp_1, 0x00000020U, 0x02000000U, 0x2eU, "int"s);
    VL_EXTENDS_WI(4096,32, __Vtemp_2, this->__PVT__m_max_quit_count);
    VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 365)->__VnoInFunc_print_field(vlProcess, vlSymsp, "max_quit_count"s, __Vtemp_2, 0x00000020U, 0x02000000U, 0x2eU, "int"s);
    __Vtemp_3[0U] = this->__PVT__max_quit_overridable;
    __Vilp1 = 1U;
    while ((__Vilp1 <= 0x0000007fU)) {
        __Vtemp_3[__Vilp1] = 0U;
        __Vilp1 = ((::IData)(1U) + __Vilp1);
    }
    VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 367)->__VnoInFunc_print_field(vlProcess, vlSymsp, "max_quit_overridable"s, __Vtemp_3, 1U, 0x01000000U, 0x2eU, "bit"s);
    __VlefExpr_0 = (0U != this->__PVT__m_severity_count.first(l_severity_count_index));
    if (__VlefExpr_0) {
        VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 371)->__VnoInFunc_print_array_header(vlProcess, vlSymsp, "severity_count"s, this->__PVT__m_severity_count.size(), "severity counts"s, 0x2eU);
        do {
            __Vtemp_4 = Vtb_top__ConstPool__CONSARRAY_4
                [l_severity_count_index];
            VL_EXTENDS_WI(4096,32, __Vtemp_5, this->__PVT__m_severity_count
                          .at((::IData)(l_severity_count_index)));
            VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 374)->__VnoInFunc_print_field(vlProcess, vlSymsp, VL_SFORMATF_N_NX("[%s]",1
                                                                                , 'S',&(__Vtemp_4)) , __Vtemp_5, 0x00000020U, 0x02000000U, 0x2eU, ""s);
            __VlefExpr_1 = (0U != this->__PVT__m_severity_count.next(l_severity_count_index));
        } while (__VlefExpr_1);
        VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 379)->__VnoInFunc_print_array_footer(vlSymsp, 0U);
    }
    __VlefExpr_2 = (0U != this->__PVT__m_id_count.first(l_id_count_index));
    if (__VlefExpr_2) {
        VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 383)->__VnoInFunc_print_array_header(vlProcess, vlSymsp, "id_count"s, this->__PVT__m_id_count.size(), "id counts"s, 0x2eU);
        do {
            VL_EXTENDS_WI(4096,32, __Vtemp_6, this->__PVT__m_id_count
                          .at(l_id_count_index));
            VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 386)->__VnoInFunc_print_field(vlProcess, vlSymsp, VL_SFORMATF_N_NX("[%s]",1
                                                                                , 'S',&(l_id_count_index)) , __Vtemp_6, 0x00000020U, 0x02000000U, 0x2eU, ""s);
            __VlefExpr_3 = (0U != this->__PVT__m_id_count.next(l_id_count_index));
        } while (__VlefExpr_3);
        VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 391)->__VnoInFunc_print_array_footer(vlSymsp, 0U);
    }
    __Vtemp_7[0U] = this->__PVT__enable_report_id_count_summary;
    __Vilp2 = 1U;
    while ((__Vilp2 <= 0x0000007fU)) {
        __Vtemp_7[__Vilp2] = 0U;
        __Vilp2 = ((::IData)(1U) + __Vilp2);
    }
    VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 394)->__VnoInFunc_print_field(vlProcess, vlSymsp, "enable_report_id_count_summary"s, __Vtemp_7, 1U, 0x01000000U, 0x2eU, "bit"s);
    __Vtemp_8[0U] = this->__PVT__record_all_messages;
    __Vilp3 = 1U;
    while ((__Vilp3 <= 0x0000007fU)) {
        __Vtemp_8[__Vilp3] = 0U;
        __Vilp3 = ((::IData)(1U) + __Vilp3);
    }
    VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 396)->__VnoInFunc_print_field(vlProcess, vlSymsp, "record_all_messages"s, __Vtemp_8, 1U, 0x01000000U, 0x2eU, "bit"s);
    __Vtemp_9[0U] = this->__PVT__show_verbosity;
    __Vilp4 = 1U;
    while ((__Vilp4 <= 0x0000007fU)) {
        __Vtemp_9[__Vilp4] = 0U;
        __Vilp4 = ((::IData)(1U) + __Vilp4);
    }
    VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 398)->__VnoInFunc_print_field(vlProcess, vlSymsp, "show_verbosity"s, __Vtemp_9, 1U, 0x01000000U, 0x2eU, "bit"s);
    __Vtemp_10[0U] = this->__PVT__show_terminator;
    __Vilp5 = 1U;
    while ((__Vilp5 <= 0x0000007fU)) {
        __Vtemp_10[__Vilp5] = 0U;
        __Vilp5 = ((::IData)(1U) + __Vilp5);
    }
    VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 400)->__VnoInFunc_print_field(vlProcess, vlSymsp, "show_terminator"s, __Vtemp_10, 1U, 0x01000000U, 0x2eU, "bit"s);
}

void Vtb_top_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_get_max_quit_count(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_max_quit_count__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_get_max_quit_count\n"); );
    // Body
    get_max_quit_count__Vfuncrtn = this->__PVT__m_max_quit_count;
}

void Vtb_top_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_set_max_quit_count(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ count, ::CData/*0:0*/ overridable) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_set_max_quit_count\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_info__verbosity_1962;
    __Vtask_uvm_report_info__verbosity_1962 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__line_1964;
    __Vtask_uvm_report_info__line_1964 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_info__report_enabled_checked_1966;
    __Vtask_uvm_report_info__report_enabled_checked_1966 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1101;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1967;
    // Body
    VlProcess::currentp(vlProcess.get());
    {
        if (VL_UNLIKELY(((1U & (~ (::IData)(this->__PVT__max_quit_overridable)))))) {
            __Vtask_uvm_report_info__report_enabled_checked_1966 = 0U;
            this->__Vtask_uvm_report_info__context_name_1965 = ""s;
            __Vtask_uvm_report_info__line_1964 = 0U;
            this->__Vtask_uvm_report_info__filename_1963 = ""s;
            __Vtask_uvm_report_info__verbosity_1962 = 0U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_info__message_1961
                          ,"The max quit count setting of %0d is not overridable to %0d due to a previous setting.",2
                          , '~',32,this->__PVT__m_max_quit_count
                          , '~',32,count);
            this->__Vtask_uvm_report_info__id_1960 = "NOMAXQUITOVR"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1101);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1101;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 147)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1967);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__Vfuncout_1967;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 148)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__id_1960, this->__Vtask_uvm_report_info__message_1961, __Vtask_uvm_report_info__verbosity_1962, this->__Vtask_uvm_report_info__filename_1963, __Vtask_uvm_report_info__line_1964, this->__Vtask_uvm_report_info__context_name_1965, (::IData)(__Vtask_uvm_report_info__report_enabled_checked_1966));
            goto __Vlabel0;
        }
        this->__PVT__max_quit_overridable = overridable;
        this->__PVT__m_max_quit_count = (VL_GTS_III(32, 0U, count)
                                          ? 0U : count);
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_get_quit_count(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_quit_count__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_get_quit_count\n"); );
    // Body
    get_quit_count__Vfuncrtn = this->__PVT__m_quit_count;
}

void Vtb_top_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_set_quit_count(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ quit_count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_set_quit_count\n"); );
    // Body
    this->__PVT__m_quit_count = (VL_GTS_III(32, 0U, quit_count)
                                  ? 0U : quit_count);
}

void Vtb_top_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_incr_quit_count(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_incr_quit_count\n"); );
    // Body
    this->__PVT__m_quit_count = ((::IData)(1U) + this->__PVT__m_quit_count);
}

void Vtb_top_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_reset_quit_count(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_reset_quit_count\n"); );
    // Body
    this->__PVT__m_quit_count = 0U;
}

void Vtb_top_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_is_quit_count_reached(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &is_quit_count_reached__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_is_quit_count_reached\n"); );
    // Body
    is_quit_count_reached__Vfuncrtn = VL_GTES_III(32, this->__PVT__m_quit_count, this->__PVT__m_max_quit_count);
}

void Vtb_top_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_get_severity_count(Vtb_top__Syms* __restrict vlSymsp, ::CData/*1:0*/ severity, ::IData/*31:0*/ &get_severity_count__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_get_severity_count\n"); );
    // Body
    get_severity_count__Vfuncrtn = this->__PVT__m_severity_count
        .at((::IData)(severity));
}

void Vtb_top_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_set_severity_count(Vtb_top__Syms* __restrict vlSymsp, ::CData/*1:0*/ severity, ::IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_set_severity_count\n"); );
    // Body
    this->__PVT__m_severity_count.atWrite((::IData)(severity)) 
        = (VL_GTS_III(32, 0U, count) ? 0U : count);
}

void Vtb_top_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_incr_severity_count(Vtb_top__Syms* __restrict vlSymsp, ::CData/*1:0*/ severity) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_incr_severity_count\n"); );
    // Body
    this->__PVT__m_severity_count.atWrite((::IData)(severity)) 
        = ((::IData)(1U) + this->__PVT__m_severity_count
           .at((::IData)(severity)));
}

void Vtb_top_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_reset_severity_counts(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_reset_severity_counts\n"); );
    // Body
    ::CData/*1:0*/ s;
    s = 0U;
    {
        while (true) {
            this->__PVT__m_severity_count.atWrite((::IData)(s)) = 0U;
            if ((3U == (::IData)(s))) {
                goto __Vlabel0;
            }
            s = Vtb_top__ConstPool__CONSARRAY_0[s];
        }
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_get_id_count(Vtb_top__Syms* __restrict vlSymsp, ::std::string id, ::IData/*31:0*/ &get_id_count__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_get_id_count\n"); );
    // Body
    {
        get_id_count__Vfuncrtn = 0U;
        if ((0U != this->__PVT__m_id_count.exists(id))) {
            get_id_count__Vfuncrtn = this->__PVT__m_id_count
                .at(id);
            goto __Vlabel0;
        }
        get_id_count__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_set_id_count(Vtb_top__Syms* __restrict vlSymsp, ::std::string id, ::IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_set_id_count\n"); );
    // Body
    this->__PVT__m_id_count.atWrite(id) = (VL_GTS_III(32, 0U, count)
                                            ? 0U : count);
}

void Vtb_top_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_incr_id_count(Vtb_top__Syms* __restrict vlSymsp, ::std::string id) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_incr_id_count\n"); );
    // Body
    if ((0U != this->__PVT__m_id_count.exists(id))) {
        this->__PVT__m_id_count.atWrite(id) = ((::IData)(1U) 
                                               + this->__PVT__m_id_count
                                               .at(id));
    } else {
        this->__PVT__m_id_count.atWrite(id) = 1U;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_set_message_database(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tr_database> database) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_set_message_database\n"); );
    // Body
    this->__PVT__m_message_db = database;
}

void Vtb_top_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_get_message_database(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tr_database> &get_message_database__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_get_message_database\n"); );
    // Body
    get_message_database__Vfuncrtn = this->__PVT__m_message_db;
}

void Vtb_top_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_get_severity_set(Vtb_top__Syms* __restrict vlSymsp, ::VlQueue<::CData/*1:0*/> &q) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_get_severity_set\n"); );
    // Body
    ::CData/*1:0*/ unnamedblk1__DOT__idx;
    unnamedblk1__DOT__idx = 0;
    ::CData/*1:0*/ unnamedblk1__DOT__idx__Vnext;
    unnamedblk1__DOT__idx__Vnext = 0;
    ::CData/*0:0*/ unnamedblk1__DOT__idx__Vmore;
    unnamedblk1__DOT__idx__Vmore = 0;
    q.clear();
    q.atDefault() = 0;
    unnamedblk1__DOT__idx__Vmore = (0U != this->__PVT__m_severity_count.first(unnamedblk1__DOT__idx__Vnext));
    while (unnamedblk1__DOT__idx__Vmore) {
        unnamedblk1__DOT__idx = unnamedblk1__DOT__idx__Vnext;
        unnamedblk1__DOT__idx__Vmore = (0U != this->__PVT__m_severity_count.next(unnamedblk1__DOT__idx__Vnext));
        q.push_back(unnamedblk1__DOT__idx);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_get_id_set(Vtb_top__Syms* __restrict vlSymsp, ::VlQueue<::std::string> &q) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_get_id_set\n"); );
    // Body
    ::std::string unnamedblk2__DOT__idx;
    ::std::string unnamedblk2__DOT__idx__Vnext;
    ::CData/*0:0*/ unnamedblk2__DOT__idx__Vmore;
    unnamedblk2__DOT__idx__Vmore = 0;
    q.clear();
    q.atDefault().clear();
    unnamedblk2__DOT__idx__Vmore = (0U != this->__PVT__m_id_count.first(unnamedblk2__DOT__idx__Vnext));
    while (unnamedblk2__DOT__idx__Vmore) {
        unnamedblk2__DOT__idx = unnamedblk2__DOT__idx__Vnext;
        unnamedblk2__DOT__idx__Vmore = (0U != this->__PVT__m_id_count.next(unnamedblk2__DOT__idx__Vnext));
        q.push_back(unnamedblk2__DOT__idx);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_f_display(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ file, ::std::string str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_f_display\n"); );
    // Body
    if ((0U == file)) {
        VL_WRITEF_NX("%s\n",1, 'S',&(str));
    } else {
        VL_FWRITEF_NX(file,"%s\n",1, 'S',&(str));
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_process_report_message(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_message> report_message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_process_report_message\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCall_10__get_action;
    ::IData/*31:0*/ __VlefCall_9__get_action;
    ::IData/*31:0*/ __VlefCall_8__process_all_report_catchers;
    ::IData/*31:0*/ __VlefCall_7__get_line;
    ::std::string __VlefCall_6__get_filename;
    ::IData/*31:0*/ __VlefCall_5__get_verbosity;
    ::std::string __VlefCall_4__get_message;
    ::std::string __VlefCall_3__get_id;
    ::CData/*1:0*/ __VlefCall_2__get_severity;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_1__get_report_object;
    ::IData/*31:0*/ __VlefCall_0__get_action;
    ::std::string unnamedblk3__DOT__m;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> unnamedblk3__DOT__cs;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_server> unnamedblk3__DOT__svr;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_handler> l_report_handler;
    ::VlClassRef<Vtb_top_std__03a__03aprocess> p;
    ::CData/*0:0*/ report_ok;
    VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 626)->__VnoInFunc_get_report_handler(vlSymsp, l_report_handler);
    vlSymsp->vlInst.TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, p);
    report_ok = 1U;
    VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 631)->__VnoInFunc_set_report_server(vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_default_report_server>{this});
    VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 634)->__VnoInFunc_get_action(vlSymsp, __VlefCall_0__get_action);
    if ((0U != (0x00000010U & __VlefCall_0__get_action))) {
        VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 637)->__VnoInFunc_get_report_object(vlSymsp, __VlefCall_1__get_report_object);
        VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 638)->__VnoInFunc_get_severity(vlSymsp, __VlefCall_2__get_severity);
        VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 639)->__VnoInFunc_get_id(vlSymsp, __VlefCall_3__get_id);
        VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 640)->__VnoInFunc_get_message(vlSymsp, __VlefCall_4__get_message);
        VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 641)->__VnoInFunc_get_verbosity(vlSymsp, __VlefCall_5__get_verbosity);
        VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 642)->__VnoInFunc_get_filename(vlSymsp, __VlefCall_6__get_filename);
        VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 643)->__VnoInFunc_get_line(vlSymsp, __VlefCall_7__get_line);
        VL_NULL_CHECK(l_report_handler, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 636)->__VnoInFunc_run_hooks(vlSymsp, __VlefCall_1__get_report_object, __VlefCall_2__get_severity, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_3__get_id), 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_4__get_message), __VlefCall_5__get_verbosity, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_6__get_filename), __VlefCall_7__get_line, report_ok);
    }
    if (report_ok) {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__VnoInFunc_process_all_report_catchers(vlProcess, vlSymsp, report_message, __VlefCall_8__process_all_report_catchers);
        report_ok = (1U & __VlefCall_8__process_all_report_catchers);
    }
    VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 653)->__VnoInFunc_get_action(vlSymsp, __VlefCall_9__get_action);
    if ((0U == __VlefCall_9__get_action)) {
        report_ok = 0U;
    }
    if (report_ok) {
        unnamedblk3__DOT__m = ""s;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk3__DOT__cs);
        VL_NULL_CHECK(unnamedblk3__DOT__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 663)->__VnoInFunc_get_report_server(vlProcess, vlSymsp, unnamedblk3__DOT__svr);
        VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 666)->__VnoInFunc_get_action(vlSymsp, __VlefCall_10__get_action);
        if ((0U != (3U & __VlefCall_10__get_action))) {
            VL_NULL_CHECK(unnamedblk3__DOT__svr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 668)->__VnoInFunc_compose_report_message(vlProcess, vlSymsp, report_message, ""s, unnamedblk3__DOT__m);
        }
        VL_NULL_CHECK(unnamedblk3__DOT__svr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 672)->__VnoInFunc_execute_report_message(vlProcess, vlSymsp, report_message, unnamedblk3__DOT__m);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_execute_report_message(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_message> report_message, ::std::string composed_message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_execute_report_message\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCall_28__get_action;
    ::IData/*31:0*/ __VlefCall_27__get_action;
    ::IData/*31:0*/ __VlefCall_26__get_action;
    ::CData/*0:0*/ __VlefCall_25__is_quit_count_reached;
    ::IData/*31:0*/ __VlefCall_24__get_max_quit_count;
    ::IData/*31:0*/ __VlefCall_23__get_action;
    ::IData/*31:0*/ __VlefCall_22__get_file;
    ::IData/*31:0*/ __VlefCall_21__get_file;
    ::CData/*0:0*/ __VlefLogOr_20;
    ::IData/*31:0*/ __VlefCall_19__get_file;
    ::IData/*31:0*/ __VlefCall_18__get_file;
    ::IData/*31:0*/ __VlefCall_17__get_action;
    ::IData/*31:0*/ __VlefCall_16__get_action;
    ::std::string __VlefCall_15__get_type_name;
    ::std::string __VlefCall_14__get_name;
    ::std::string __VlefCall_13__get_name;
    ::std::string __VlefCall_12__get_name;
    ::std::string __VlefCall_11__get_name;
    ::std::string __VlefCall_10__get_name;
    ::std::string __VlefCall_9__get_name;
    ::std::string __VlefCall_8__get_name;
    ::CData/*0:0*/ __VlefLogAnd_7;
    ::std::string __VlefCall_6__get_name;
    ::std::string __VlefCall_5__get_name;
    ::std::string __VlefCall_4__get_name;
    ::IData/*31:0*/ __VlefCall_3__get_action;
    ::IData/*31:0*/ __VlefCall_2__get_action;
    ::std::string __VlefCall_1__get_id;
    ::CData/*1:0*/ __VlefCall_0__get_severity;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tr_stream> unnamedblk4__DOT__stream;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk4__DOT__ro;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_handler> unnamedblk4__DOT__rh;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tr_database> unnamedblk4__DOT__unnamedblk5__DOT__db;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__cs;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_recorder> unnamedblk4__DOT__unnamedblk7__DOT__recorder;
    ::IData/*31:0*/ unnamedblk8__DOT__tmp_file;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> unnamedblk9__DOT__l_root;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> unnamedblk9__DOT__cs;
    ::VlClassRef<Vtb_top_std__03a__03aprocess> p;
    vlSymsp->vlInst.TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, p);
    VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 695)->__VnoInFunc_get_severity(vlSymsp, __VlefCall_0__get_severity);
    this->__VnoInFunc_incr_severity_count(vlSymsp, __VlefCall_0__get_severity);
    VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 696)->__VnoInFunc_get_id(vlSymsp, __VlefCall_1__get_id);
    this->__VnoInFunc_incr_id_count(vlSymsp, VL_CVT_PACK_STR_NN(__VlefCall_1__get_id));
    if (this->__PVT__record_all_messages) {
        VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 700)->__VnoInFunc_get_action(vlSymsp, __VlefCall_2__get_action);
        VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 700)->__VnoInFunc_set_action(vlSymsp, 
                                                                                (0x00000040U 
                                                                                | __VlefCall_2__get_action));
    }
    VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 705)->__VnoInFunc_get_action(vlSymsp, __VlefCall_3__get_action);
    if ((0U != (0x00000040U & __VlefCall_3__get_action))) {
        VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 707)->__VnoInFunc_get_report_object(vlSymsp, unnamedblk4__DOT__ro);
        VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 708)->__VnoInFunc_get_report_handler(vlSymsp, unnamedblk4__DOT__rh);
        VL_NULL_CHECK(unnamedblk4__DOT__ro, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 711)->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
        __VlefLogAnd_7 = (0U != this->__PVT__m_streams.exists(__VlefCall_4__get_name));
        if (__VlefLogAnd_7) {
            VL_NULL_CHECK(unnamedblk4__DOT__ro, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 711)->__VnoInFunc_get_name(vlSymsp, __VlefCall_5__get_name);
            VL_NULL_CHECK(unnamedblk4__DOT__rh, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 711)->__VnoInFunc_get_name(vlSymsp, __VlefCall_6__get_name);
            __VlefLogAnd_7 = (0U != this->__PVT__m_streams
                              .at(__VlefCall_5__get_name).exists(__VlefCall_6__get_name));
        }
        if (__VlefLogAnd_7) {
            VL_NULL_CHECK(unnamedblk4__DOT__ro, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 713)->__VnoInFunc_get_name(vlSymsp, __VlefCall_8__get_name);
            VL_NULL_CHECK(unnamedblk4__DOT__rh, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 713)->__VnoInFunc_get_name(vlSymsp, __VlefCall_9__get_name);
            unnamedblk4__DOT__stream = this->__PVT__m_streams
                .at(__VlefCall_8__get_name).at(__VlefCall_9__get_name);
        }
        if ((VlNull{} == unnamedblk4__DOT__stream)) {
            this->__VnoInFunc_get_message_database(vlSymsp, unnamedblk4__DOT__unnamedblk5__DOT__db);
            if ((VlNull{} == unnamedblk4__DOT__unnamedblk5__DOT__db)) {
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__cs);
                VL_NULL_CHECK(unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 727)->__VnoInFunc_get_default_tr_database(vlProcess, vlSymsp, unnamedblk4__DOT__unnamedblk5__DOT__db);
            }
            if ((VlNull{} != unnamedblk4__DOT__unnamedblk5__DOT__db)) {
                VL_NULL_CHECK(unnamedblk4__DOT__ro, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 731)->__VnoInFunc_get_name(vlSymsp, __VlefCall_10__get_name);
                VL_NULL_CHECK(unnamedblk4__DOT__rh, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 731)->__VnoInFunc_get_name(vlSymsp, __VlefCall_11__get_name);
                VL_NULL_CHECK(unnamedblk4__DOT__unnamedblk5__DOT__db, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 731)->__VnoInFunc_open_stream(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_10__get_name), 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_11__get_name), "MESSAGES"s, unnamedblk4__DOT__stream);
                VL_NULL_CHECK(unnamedblk4__DOT__ro, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 733)->__VnoInFunc_get_name(vlSymsp, __VlefCall_12__get_name);
                VL_NULL_CHECK(unnamedblk4__DOT__rh, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 733)->__VnoInFunc_get_name(vlSymsp, __VlefCall_13__get_name);
                this->__PVT__m_streams.atWrite(__VlefCall_12__get_name).atWrite(__VlefCall_13__get_name) 
                    = unnamedblk4__DOT__stream;
            }
        }
        if ((VlNull{} != unnamedblk4__DOT__stream)) {
            VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 737)->__VnoInFunc_get_name(vlSymsp, __VlefCall_14__get_name);
            VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 737)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_15__get_type_name);
            VL_NULL_CHECK(unnamedblk4__DOT__stream, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 737)->__VnoInFunc_open_recorder(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_14__get_name), 0ULL, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_15__get_type_name), unnamedblk4__DOT__unnamedblk7__DOT__recorder);
            if ((VlNull{} != unnamedblk4__DOT__unnamedblk7__DOT__recorder)) {
                VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 739)->__VnoInFunc_record(vlProcess, vlSymsp, unnamedblk4__DOT__unnamedblk7__DOT__recorder);
                VL_NULL_CHECK(unnamedblk4__DOT__unnamedblk7__DOT__recorder, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 740)->__VnoInFunc_free(vlProcess, vlSymsp, 0ULL);
            }
        }
    }
    VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 746)->__VnoInFunc_get_action(vlSymsp, __VlefCall_16__get_action);
    if (VL_UNLIKELY(((0U != (1U & __VlefCall_16__get_action))))) {
        VL_WRITEF_NX("%s\n",1, 'S',&(composed_message));
    }
    VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 756)->__VnoInFunc_get_action(vlSymsp, __VlefCall_17__get_action);
    if ((0U != (2U & __VlefCall_17__get_action))) {
        VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 758)->__VnoInFunc_get_file(vlSymsp, __VlefCall_18__get_file);
        __VlefLogOr_20 = (0U == __VlefCall_18__get_file);
        if ((1U & (~ (::IData)(__VlefLogOr_20)))) {
            VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 759)->__VnoInFunc_get_file(vlSymsp, __VlefCall_19__get_file);
            __VlefLogOr_20 = (0x80000001U != __VlefCall_19__get_file);
        }
        if (__VlefLogOr_20) {
            VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 760)->__VnoInFunc_get_file(vlSymsp, unnamedblk8__DOT__tmp_file);
            VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 761)->__VnoInFunc_get_file(vlSymsp, __VlefCall_21__get_file);
            if ((0U == (0x80000000U & __VlefCall_21__get_file))) {
                VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 762)->__VnoInFunc_get_file(vlSymsp, __VlefCall_22__get_file);
                unnamedblk8__DOT__tmp_file = (0xfffffffeU 
                                              & __VlefCall_22__get_file);
            }
            this->__VnoInFunc_f_display(vlSymsp, unnamedblk8__DOT__tmp_file, composed_message);
        }
    }
    VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 770)->__VnoInFunc_get_action(vlSymsp, __VlefCall_23__get_action);
    if ((0U != (4U & __VlefCall_23__get_action))) {
        this->__VnoInFunc_get_max_quit_count(vlSymsp, __VlefCall_24__get_max_quit_count);
        if ((0U != __VlefCall_24__get_max_quit_count)) {
            {
                // Inlined CFunc: __VnoInFunc_incr_quit_count
                this->__PVT__m_quit_count = ((::IData)(1U) 
                                             + this->__PVT__m_quit_count);
            }
            this->__VnoInFunc_is_quit_count_reached(vlSymsp, __VlefCall_25__is_quit_count_reached);
            if (__VlefCall_25__is_quit_count_reached) {
                VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 775)->__VnoInFunc_get_action(vlSymsp, __VlefCall_26__get_action);
                VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 775)->__VnoInFunc_set_action(vlSymsp, 
                                                                                (8U 
                                                                                | __VlefCall_26__get_action));
            }
        }
    }
    VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 781)->__VnoInFunc_get_action(vlSymsp, __VlefCall_27__get_action);
    if ((0U != (8U & __VlefCall_27__get_action))) {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk9__DOT__cs);
        VL_NULL_CHECK(unnamedblk9__DOT__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 785)->__VnoInFunc_get_root(vlProcess, vlSymsp, unnamedblk9__DOT__l_root);
        VL_NULL_CHECK(unnamedblk9__DOT__l_root, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 786)->__VnoInFunc_die(vlProcess, vlSymsp);
    }
    VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 790)->__VnoInFunc_get_action(vlSymsp, __VlefCall_28__get_action);
    if (VL_UNLIKELY(((0U != (0x00000020U & __VlefCall_28__get_action))))) {
        VL_STOP_MT("/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 792, "");
    }
}

extern const ::VlAssocArray<::IData/*31:0*/, ::CData/*0:0*/> Vtb_top__ConstPool__CONSASSOC_3;
extern const ::VlAssocArray<::IData/*31:0*/, ::std::string> Vtb_top__ConstPool__CONSASSOC_2;

void Vtb_top_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_compose_report_message(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_message> report_message, ::std::string report_object_name, ::std::string &compose_report_message__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_compose_report_message\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_11__get_id;
    ::std::string __VlefCall_10__sprint;
    ::std::string __VlefCall_9__get_message;
    ::IData/*31:0*/ __VlefCall_8__size;
    ::IData/*31:0*/ __VlefCall_7__get_verbosity;
    ::IData/*31:0*/ __VlefCond_6;
    ::IData/*31:0*/ __VlefCall_5__get_verbosity;
    ::std::string __VlefCall_4__get_context;
    ::std::string __VlefCall_3__get_context;
    ::std::string __VlefCall_2__get_filename;
    ::IData/*31:0*/ __VlefCall_1__get_line;
    ::std::string __VlefCall_0__get_filename;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer> unnamedblk10__DOT__uvm_default_printer;
    compose_report_message__Vfuncrtn = ""s;
    ::std::string sev_string;
    ::CData/*1:0*/ l_severity;
    ::IData/*31:0*/ l_verbosity;
    ::std::string filename_line_string;
    ::std::string time_str;
    ::std::string line_str;
    ::std::string context_str;
    ::std::string verbosity_str;
    ::std::string terminator_str;
    ::std::string msg_body_str;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_message_element_container> el_container;
    ::std::string prefix;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_handler> l_report_handler;
    sev_string = ""s;
    l_severity = 0U;
    l_verbosity = 0U;
    filename_line_string = ""s;
    time_str = ""s;
    line_str = ""s;
    context_str = ""s;
    verbosity_str = ""s;
    terminator_str = ""s;
    msg_body_str = ""s;
    prefix = ""s;
    VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 882)->__VnoInFunc_get_severity(vlSymsp, l_severity);
    sev_string = Vtb_top__ConstPool__CONSARRAY_4[l_severity];
    VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 885)->__VnoInFunc_get_filename(vlSymsp, __VlefCall_0__get_filename);
    if ((""s != __VlefCall_0__get_filename)) {
        VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 886)->__VnoInFunc_get_line(vlSymsp, __VlefCall_1__get_line);
        VL_SFORMAT_NX(line_str,"%0d",1, '~',32,__VlefCall_1__get_line);
        VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 887)->__VnoInFunc_get_filename(vlSymsp, __VlefCall_2__get_filename);
        filename_line_string = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                             VL_CONCATN_NNN(__VlefCall_2__get_filename, "("s), line_str), ") "s);
    }
    VL_SFORMAT_NX(time_str,"%0t",2, 'T',-9, 'D',VL_TIME_UNITED_D(1000));
    VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 893)->__VnoInFunc_get_context(vlSymsp, __VlefCall_3__get_context);
    if ((""s != __VlefCall_3__get_context)) {
        VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 895)->__VnoInFunc_get_context(vlSymsp, __VlefCall_4__get_context);
        context_str = VL_CONCATN_NNN("@@"s, __VlefCall_4__get_context);
    }
    if (this->__PVT__show_verbosity) {
        VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 900)->__VnoInFunc_get_verbosity(vlSymsp, __VlefCall_5__get_verbosity);
        if (Vtb_top__ConstPool__CONSASSOC_3.at(__VlefCall_5__get_verbosity)) {
            VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 900)->__VnoInFunc_get_verbosity(vlSymsp, l_verbosity);
            __VlefCond_6 = 1U;
        } else {
            __VlefCond_6 = 0U;
        }
        if ((0U != __VlefCond_6)) {
            verbosity_str = Vtb_top__ConstPool__CONSASSOC_2
                .at(l_verbosity);
        } else {
            VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 907)->__VnoInFunc_get_verbosity(vlSymsp, __VlefCall_7__get_verbosity);
            VL_SFORMAT_NX(verbosity_str,"%0d",1, '~',32,__VlefCall_7__get_verbosity);
        }
        verbosity_str = VL_CONCATN_NNN(VL_CONCATN_NNN("("s, verbosity_str), ")"s);
    }
    if (this->__PVT__show_terminator) {
        terminator_str = VL_CONCATN_NNN(" -"s, sev_string);
    }
    VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 919)->__VnoInFunc_get_element_container(vlSymsp, el_container);
    VL_NULL_CHECK(el_container, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 920)->__VnoInFunc_size(vlSymsp, __VlefCall_8__size);
    if ((0U == __VlefCall_8__size)) {
        VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 922)->__VnoInFunc_get_message(vlSymsp, msg_body_str);
    } else {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_printer__Vclpkg.__VnoInFunc_get_default(vlProcess, vlSymsp, unnamedblk10__DOT__uvm_default_printer);
        VL_NULL_CHECK(unnamedblk10__DOT__uvm_default_printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 927)->__VnoInFunc_get_line_prefix(vlSymsp, prefix);
        VL_NULL_CHECK(unnamedblk10__DOT__uvm_default_printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 928)->__VnoInFunc_set_line_prefix(vlSymsp, " +"s);
        VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 929)->__VnoInFunc_get_message(vlSymsp, __VlefCall_9__get_message);
        VL_NULL_CHECK(el_container, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 929)->__VnoInFunc_sprint(vlProcess, vlSymsp, VlNull{}, __VlefCall_10__sprint);
        msg_body_str = VL_CONCATN_NNN(VL_CONCATN_NNN(__VlefCall_9__get_message, "\n"s), __VlefCall_10__sprint);
        VL_NULL_CHECK(unnamedblk10__DOT__uvm_default_printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 930)->__VnoInFunc_set_line_prefix(vlSymsp, prefix);
    }
    if ((""s == report_object_name)) {
        VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 934)->__VnoInFunc_get_report_handler(vlSymsp, l_report_handler);
        VL_NULL_CHECK(l_report_handler, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 935)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, report_object_name);
    }
    VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 940)->__VnoInFunc_get_id(vlSymsp, __VlefCall_11__get_id);
    compose_report_message__Vfuncrtn = VL_CONCATN_NNN(
                                                      VL_CONCATN_NNN(
                                                                     VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(sev_string, verbosity_str), " "s), filename_line_string), "@ "s), time_str), ": "s), report_object_name), context_str), " ["s), __VlefCall_11__get_id), "] "s), msg_body_str), terminator_str);
}

void Vtb_top_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_report_summarize(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_report_summarize\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__PVT__m_report_summarize_in_stack = 1U;
    this->__VnoInFunc_summarize(vlProcess, vlSymsp, file);
    this->__PVT__m_report_summarize_in_stack = 0U;
}

void Vtb_top_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_summarize(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_summarize\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    if (this->__PVT__m_report_summarize_in_stack) {
        this->__VnoInFunc_m_report_summarize(vlProcess, vlSymsp, file);
    } else {
        this->__VnoInFunc_report_summarize(vlProcess, vlSymsp, file);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_m_report_summarize(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_m_report_summarize\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1102;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1968;
    ::IData/*31:0*/ __Vtask_uvm_report_info__verbosity_1971;
    __Vtask_uvm_report_info__verbosity_1971 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__line_1973;
    __Vtask_uvm_report_info__line_1973 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_info__report_enabled_checked_1975;
    __Vtask_uvm_report_info__report_enabled_checked_1975 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1104;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1976;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1105;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1977;
    ::IData/*31:0*/ __Vtask_uvm_report_info__verbosity_1980;
    __Vtask_uvm_report_info__verbosity_1980 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__line_1982;
    __Vtask_uvm_report_info__line_1982 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_info__report_enabled_checked_1984;
    __Vtask_uvm_report_info__report_enabled_checked_1984 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1107;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1985;
    ::std::string __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_9__m_uvm_string_queue_join;
    ::CData/*0:0*/ __VlefLogAnd_8;
    ::IData/*31:0*/ __VlefCall_7__get_report_action;
    ::IData/*31:0*/ __VlefCall_6__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_5__uvm_get_report_object;
    ::std::string __VlefCall_4__m_uvm_string_queue_join;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::CData/*1:0*/ unnamedblk11__DOT__s;
    unnamedblk11__DOT__s = 0;
    ::CData/*1:0*/ unnamedblk11__DOT__s__Vnext;
    unnamedblk11__DOT__s__Vnext = 0;
    ::CData/*0:0*/ unnamedblk11__DOT__s__Vmore;
    unnamedblk11__DOT__s__Vmore = 0;
    ::std::string unnamedblk12__DOT__id;
    ::std::string unnamedblk12__DOT__id__Vnext;
    ::CData/*0:0*/ unnamedblk12__DOT__id__Vmore;
    unnamedblk12__DOT__id__Vmore = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk13__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk14__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> root;
    ::IData/*31:0*/ action;
    ::VlQueue<::std::string> q;
    action = 0U;
    q.clear();
    q.atDefault().clear();
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__VnoInFunc_summarize(vlProcess, vlSymsp, file);
    q.push_back("\n--- UVM Report Summary ---\n\n"s);
    if ((0U != this->__PVT__m_max_quit_count)) {
        if (VL_GTES_III(32, this->__PVT__m_quit_count, this->__PVT__m_max_quit_count)) {
            q.push_back("Quit count reached!\n"s);
        }
        q.push_back(VL_SFORMATF_N_NX("Quit count : %5d of %5d\n",2
                                     , '~',32,this->__PVT__m_quit_count
                                     , '~',32,this->__PVT__m_max_quit_count) );
    }
    q.push_back("** Report counts by severity\n"s);
    unnamedblk11__DOT__s__Vmore = (0U != this->__PVT__m_severity_count.first(unnamedblk11__DOT__s__Vnext));
    while (unnamedblk11__DOT__s__Vmore) {
        unnamedblk11__DOT__s = unnamedblk11__DOT__s__Vnext;
        unnamedblk11__DOT__s__Vmore = (0U != this->__PVT__m_severity_count.next(unnamedblk11__DOT__s__Vnext));
        __Vtemp_1 = Vtb_top__ConstPool__CONSARRAY_4
            [unnamedblk11__DOT__s];
        q.push_back(VL_SFORMATF_N_NX("%s :%5d\n",2, 'S',&(__Vtemp_1)
                                     , '~',32,this->__PVT__m_severity_count
                                     .at((::IData)(unnamedblk11__DOT__s))) );
    }
    if (this->__PVT__enable_report_id_count_summary) {
        q.push_back("** Report counts by id\n"s);
        unnamedblk12__DOT__id__Vmore = (0U != this->__PVT__m_id_count.first(unnamedblk12__DOT__id__Vnext));
        while (unnamedblk12__DOT__id__Vmore) {
            unnamedblk12__DOT__id = unnamedblk12__DOT__id__Vnext;
            unnamedblk12__DOT__id__Vmore = (0U != this->__PVT__m_id_count.next(unnamedblk12__DOT__id__Vnext));
            q.push_back(VL_SFORMATF_N_NX("[%s] %5d\n",2
                                         , 'S',&(unnamedblk12__DOT__id)
                                         , '~',32,this->__PVT__m_id_count
                                         .at(unnamedblk12__DOT__id)) );
        }
    }
    if ((0x80000001U == file)) {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1102);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1102;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1968);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
            = __Vtask_get_root__Vfuncout_1968;
        __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
        VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 1009)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk13__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk13__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 1009)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "UVM/REPORT/SERVER"s, __VlefCall_1__get_report_verbosity_level);
        __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
        if (__VlefLogAnd_3) {
            VL_NULL_CHECK(unnamedblk13__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 1009)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "UVM/REPORT/SERVER"s, __VlefCall_2__get_report_action);
            __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_3))) {
            this->__Vfunc_m_uvm_string_queue_join__Vfuncout_1103 = ""s;
            this->__Vfunc_m_uvm_string_queue_join__Vfuncout_1103 
                = VL_CVT_PACK_STR_ND(VL_STREAMR_NRI(0, q, 1U));
            __VlefCall_4__m_uvm_string_queue_join = this->__Vfunc_m_uvm_string_queue_join__Vfuncout_1103;
            __Vtask_uvm_report_info__report_enabled_checked_1975 = 1U;
            this->__Vtask_uvm_report_info__context_name_1974 = ""s;
            __Vtask_uvm_report_info__line_1973 = 0x000003f1U;
            this->__Vtask_uvm_report_info__filename_1972 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh"s;
            __Vtask_uvm_report_info__verbosity_1971 = 0U;
            this->__Vtask_uvm_report_info__message_1970 
                = VL_CVT_PACK_STR_NN(__VlefCall_4__m_uvm_string_queue_join);
            this->__Vtask_uvm_report_info__id_1969 = "UVM/REPORT/SERVER"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1104);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1104;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 147)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1976);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__Vfuncout_1976;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 148)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__id_1969, this->__Vtask_uvm_report_info__message_1970, __Vtask_uvm_report_info__verbosity_1971, this->__Vtask_uvm_report_info__filename_1972, __Vtask_uvm_report_info__line_1973, this->__Vtask_uvm_report_info__context_name_1974, (::IData)(__Vtask_uvm_report_info__report_enabled_checked_1975));
        }
    } else {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, root);
        VL_NULL_CHECK(root, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 1014)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "UVM/REPORT/SERVER"s, action);
        VL_NULL_CHECK(root, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 1015)->__VnoInFunc_set_report_id_action(vlProcess, vlSymsp, "UVM/REPORT/SERVER"s, 2U);
        VL_NULL_CHECK(root, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 1016)->__VnoInFunc_set_report_id_file(vlProcess, vlSymsp, "UVM/REPORT/SERVER"s, file);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1105);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1105;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1977);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
            = __Vtask_get_root__Vfuncout_1977;
        __VlefCall_5__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
        VL_NULL_CHECK(__VlefCall_5__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 1017)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk14__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk14__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 1017)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "UVM/REPORT/SERVER"s, __VlefCall_6__get_report_verbosity_level);
        __VlefLogAnd_8 = VL_LTES_III(32, 0U, __VlefCall_6__get_report_verbosity_level);
        if (__VlefLogAnd_8) {
            VL_NULL_CHECK(unnamedblk14__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 1017)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "UVM/REPORT/SERVER"s, __VlefCall_7__get_report_action);
            __VlefLogAnd_8 = (0U != __VlefCall_7__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_8))) {
            this->__Vfunc_m_uvm_string_queue_join__Vfuncout_1106 = ""s;
            this->__Vfunc_m_uvm_string_queue_join__Vfuncout_1106 
                = VL_CVT_PACK_STR_ND(VL_STREAMR_NRI(0, q, 1U));
            __VlefCall_9__m_uvm_string_queue_join = this->__Vfunc_m_uvm_string_queue_join__Vfuncout_1106;
            __Vtask_uvm_report_info__report_enabled_checked_1984 = 1U;
            this->__Vtask_uvm_report_info__context_name_1983 = ""s;
            __Vtask_uvm_report_info__line_1982 = 0x000003f9U;
            this->__Vtask_uvm_report_info__filename_1981 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh"s;
            __Vtask_uvm_report_info__verbosity_1980 = 0U;
            this->__Vtask_uvm_report_info__message_1979 
                = VL_CVT_PACK_STR_NN(__VlefCall_9__m_uvm_string_queue_join);
            this->__Vtask_uvm_report_info__id_1978 = "UVM/REPORT/SERVER"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1107);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1107;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 147)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1985);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__Vfuncout_1985;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 148)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__id_1978, this->__Vtask_uvm_report_info__message_1979, __Vtask_uvm_report_info__verbosity_1980, this->__Vtask_uvm_report_info__filename_1981, __Vtask_uvm_report_info__line_1982, this->__Vtask_uvm_report_info__context_name_1983, (::IData)(__Vtask_uvm_report_info__report_enabled_checked_1984));
        }
        VL_NULL_CHECK(root, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 1018)->__VnoInFunc_set_report_id_action(vlProcess, vlSymsp, "UVM/REPORT/SERVER"s, action);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_default_report_server::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_report_server::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_quit_count = 0;
    __PVT__m_max_quit_count = 0;
    __PVT__m_severity_count.atDefault() = 0;
    __PVT__m_id_count.atDefault() = 0;
}

Vtb_top_uvm_pkg__03a__03auvm_default_report_server::~Vtb_top_uvm_pkg__03a__03auvm_default_report_server() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_report_server::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_default_report_server::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_report_server::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_default_report_server::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_report_server::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_quit_count:" + VL_TO_STRING(__PVT__m_quit_count);
    out += ", m_max_quit_count:" + VL_TO_STRING(__PVT__m_max_quit_count);
    out += ", max_quit_overridable:" + VL_TO_STRING(__PVT__max_quit_overridable);
    out += ", m_severity_count:" + VL_TO_STRING(__PVT__m_severity_count);
    out += ", m_id_count:" + VL_TO_STRING(__PVT__m_id_count);
    out += ", m_message_db:" + VL_TO_STRING(__PVT__m_message_db);
    out += ", m_streams:" + VL_TO_STRING(__PVT__m_streams);
    out += ", enable_report_id_count_summary:" + VL_TO_STRING(__PVT__enable_report_id_count_summary);
    out += ", record_all_messages:" + VL_TO_STRING(__PVT__record_all_messages);
    out += ", show_verbosity:" + VL_TO_STRING(__PVT__show_verbosity);
    out += ", show_terminator:" + VL_TO_STRING(__PVT__show_terminator);
    out += ", m_report_summarize_in_stack:" + VL_TO_STRING(__PVT__m_report_summarize_in_stack);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_report_server::to_string_middle();
    return (out);
}
