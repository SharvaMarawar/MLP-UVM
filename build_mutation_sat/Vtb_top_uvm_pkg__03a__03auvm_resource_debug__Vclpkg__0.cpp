// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_resource_debug::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_resource_debug::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi304ccaa6> __Vfunc_get__Vfuncout_495;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pi304ccaa6__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_495);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_495;
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_debug::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_resource_debug::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_debug> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_resource_debug, vlProcess, vlSymsp, ""s);
    } else {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_resource_debug, vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_debug::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_resource_debug::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_resource_debug"s;
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_debug::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_resource_debug::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_debug::__VnoInFunc_record_read_access(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> accessor) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_resource_debug::__VnoInFunc_record_read_access\n"); );
    // Locals
    Vtb_top_access_t__struct__0 __Vtask_init_access_record__access_record_705;
    __Vtask_init_access_record__access_record_705.__PVT__read_time = 0;
    __Vtask_init_access_record__access_record_705.__PVT__write_time = 0;
    __Vtask_init_access_record__access_record_705.__PVT__read_count = 0;
    __Vtask_init_access_record__access_record_705.__PVT__write_count = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string str;
    Vtb_top_access_t__struct__0 access_record;
    str = ""s;
    access_record.__PVT__read_time = 0;
    access_record.__PVT__write_time = 0;
    access_record.__PVT__read_count = 0;
    access_record.__PVT__write_count = 0;
    if ((VlNull{} != accessor)) {
        VL_NULL_CHECK(accessor, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_base.svh", 237)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, str);
    } else {
        str = "<empty>"s;
    }
    if ((0U != this->__PVT__access.exists(str))) {
        access_record = this->__PVT__access.at(str);
    } else {
        __Vtask_init_access_record__access_record_705 
            = access_record;
        this->__VnoInFunc_init_access_record(vlSymsp, __Vtask_init_access_record__access_record_705);
        access_record = __Vtask_init_access_record__access_record_705;
    }
    access_record.__PVT__read_count = ((::IData)(1U) 
                                       + access_record
                                       .__PVT__read_count);
    access_record.__PVT__read_time = VL_RTOIROUND_Q_D(VL_TIME_UNITED_D(1000));
    this->__PVT__access.atWrite(str) = access_record;
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_debug::__VnoInFunc_record_write_access(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> accessor) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_resource_debug::__VnoInFunc_record_write_access\n"); );
    // Locals
    Vtb_top_access_t__struct__0 __Vtask_init_access_record__access_record_706;
    __Vtask_init_access_record__access_record_706.__PVT__read_time = 0;
    __Vtask_init_access_record__access_record_706.__PVT__write_time = 0;
    __Vtask_init_access_record__access_record_706.__PVT__read_count = 0;
    __Vtask_init_access_record__access_record_706.__PVT__write_count = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    Vtb_top_access_t__struct__0 unnamedblk1__DOT__access_record;
    ::std::string unnamedblk1__DOT__str;
    if ((VlNull{} != accessor)) {
        unnamedblk1__DOT__access_record.__PVT__read_time = 0;
        unnamedblk1__DOT__access_record.__PVT__write_time = 0;
        unnamedblk1__DOT__access_record.__PVT__read_count = 0;
        unnamedblk1__DOT__access_record.__PVT__write_count = 0;
        unnamedblk1__DOT__str = ""s;
        VL_NULL_CHECK(accessor, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_base.svh", 283)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, unnamedblk1__DOT__str);
        if ((0U != this->__PVT__access.exists(unnamedblk1__DOT__str))) {
            unnamedblk1__DOT__access_record = this->__PVT__access
                .at(unnamedblk1__DOT__str);
        } else {
            __Vtask_init_access_record__access_record_706 
                = unnamedblk1__DOT__access_record;
            this->__VnoInFunc_init_access_record(vlSymsp, __Vtask_init_access_record__access_record_706);
            unnamedblk1__DOT__access_record = __Vtask_init_access_record__access_record_706;
        }
        unnamedblk1__DOT__access_record.__PVT__write_count 
            = ((::IData)(1U) + unnamedblk1__DOT__access_record
               .__PVT__write_count);
        unnamedblk1__DOT__access_record.__PVT__write_time 
            = VL_RTOIROUND_Q_D(VL_TIME_UNITED_D(1000));
        this->__PVT__access.atWrite(unnamedblk1__DOT__str) 
            = unnamedblk1__DOT__access_record;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_debug::__VnoInFunc_print_accessors(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_resource_debug::__VnoInFunc_print_accessors\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_496;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_707;
    ::IData/*31:0*/ __Vtask_uvm_report_info__verbosity_710;
    __Vtask_uvm_report_info__verbosity_710 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__line_712;
    __Vtask_uvm_report_info__line_712 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_info__report_enabled_checked_714;
    __Vtask_uvm_report_info__report_enabled_checked_714 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_498;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_715;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_4__m_uvm_string_queue_join;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::std::string unnamedblk2__DOT__i;
    ::std::string unnamedblk2__DOT__i__Vnext;
    ::CData/*0:0*/ unnamedblk2__DOT__i__Vmore;
    unnamedblk2__DOT__i__Vmore = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk3__DOT___local_report_object_;
    ::std::string str;
    Vtb_top_access_t__struct__0 access_record;
    ::VlQueue<::std::string> qs;
    {
        str = ""s;
        access_record.__PVT__read_time = 0;
        access_record.__PVT__write_time = 0;
        access_record.__PVT__read_count = 0;
        access_record.__PVT__write_count = 0;
        qs.clear();
        qs.atDefault().clear();
        if ((0U == this->__PVT__access.size())) {
            goto __Vlabel0;
        }
        unnamedblk2__DOT__i__Vmore = (0U != this->__PVT__access.first(unnamedblk2__DOT__i__Vnext));
        while (unnamedblk2__DOT__i__Vmore) {
            unnamedblk2__DOT__i = unnamedblk2__DOT__i__Vnext;
            unnamedblk2__DOT__i__Vmore = (0U != this->__PVT__access.next(unnamedblk2__DOT__i__Vnext));
            str = unnamedblk2__DOT__i;
            access_record = this->__PVT__access.at(str);
            qs.push_back(VL_SFORMATF_N_NX("%s reads: %0d @ %0t  writes: %0d @ %0t\n",6, 'T',-9
                                          , 'S',&(str)
                                          , '#',32,access_record
                                          .__PVT__read_count
                                          , '#',64,access_record
                                          .__PVT__read_time
                                          , '#',32,access_record
                                          .__PVT__write_count
                                          , '#',64,access_record
                                          .__PVT__write_time) );
        }
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_496);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
            = __Vfunc_get__Vfuncout_496;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_707);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
            = __Vtask_get_root__Vfuncout_707;
        __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
        VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_base.svh", 330)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk3__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk3__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_base.svh", 330)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "UVM/RESOURCE/ACCESSOR"s, __VlefCall_1__get_report_verbosity_level);
        __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
        if (__VlefLogAnd_3) {
            VL_NULL_CHECK(unnamedblk3__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_base.svh", 330)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "UVM/RESOURCE/ACCESSOR"s, __VlefCall_2__get_report_action);
            __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_3))) {
            this->__Vfunc_m_uvm_string_queue_join__Vfuncout_497 = ""s;
            this->__Vfunc_m_uvm_string_queue_join__Vfuncout_497 
                = VL_CVT_PACK_STR_ND(VL_STREAMR_NRI(0, qs, 1U));
            __VlefCall_4__m_uvm_string_queue_join = this->__Vfunc_m_uvm_string_queue_join__Vfuncout_497;
            __Vtask_uvm_report_info__report_enabled_checked_714 = 1U;
            this->__Vtask_uvm_report_info__context_name_713 = ""s;
            __Vtask_uvm_report_info__line_712 = 0x0000014aU;
            this->__Vtask_uvm_report_info__filename_711 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_base.svh"s;
            __Vtask_uvm_report_info__verbosity_710 = 0U;
            this->__Vtask_uvm_report_info__message_709 
                = VL_CVT_PACK_STR_NN(__VlefCall_4__m_uvm_string_queue_join);
            this->__Vtask_uvm_report_info__id_708 = "UVM/RESOURCE/ACCESSOR"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_498);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__Vfuncout_498;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 147)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_715);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__Vfuncout_715;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 148)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__id_708, this->__Vtask_uvm_report_info__message_709, __Vtask_uvm_report_info__verbosity_710, this->__Vtask_uvm_report_info__filename_711, __Vtask_uvm_report_info__line_712, this->__Vtask_uvm_report_info__context_name_713, (::IData)(__Vtask_uvm_report_info__report_enabled_checked_714));
        }
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_debug::__VnoInFunc_init_access_record(Vtb_top__Syms* __restrict vlSymsp, Vtb_top_access_t__struct__0 &access_record) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_resource_debug::__VnoInFunc_init_access_record\n"); );
    // Body
    access_record.__PVT__read_time = 0ULL;
    access_record.__PVT__write_time = 0ULL;
    access_record.__PVT__read_count = 0U;
    access_record.__PVT__write_count = 0U;
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_debug::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_resource_debug::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_debug::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_resource_debug::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_debug::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_resource_debug::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_debug::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_resource_debug::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_debug::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_resource_debug::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__access.atDefault().__PVT__read_time = VL_SCOPED_RAND_RESET_Q(64, 14330959093309445077ULL, 12049826633365357964ull);
    __PVT__access.atDefault().__PVT__write_time = VL_SCOPED_RAND_RESET_Q(64, 14330959093309445077ULL, 12049826633365357964ull);
    __PVT__access.atDefault().__PVT__read_count = 0;
    __PVT__access.atDefault().__PVT__write_count = 0;
}

Vtb_top_uvm_pkg__03a__03auvm_resource_debug::~Vtb_top_uvm_pkg__03a__03auvm_resource_debug() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_resource_debug::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_resource_debug::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_resource_debug::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_resource_debug::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_resource_debug::to_string_middle\n"); );
    // Body
    std::string out;
    out += "access:" + VL_TO_STRING(__PVT__access);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
