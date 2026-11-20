// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi142f147e__Vclpkg::__VnoInFunc_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi142f147e__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = ""s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_registry_common__pie3f9186f__Vclpkg.__VnoInFunc_type_name(vlSymsp, type_name__Vfuncrtn);
}

void Vtb_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi142f147e__Vclpkg::__VnoInFunc_get(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi142f147e> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi142f147e__Vclpkg::__VnoInFunc_get\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    if ((VlNull{} == this->__Vnontrivs.__PVT__get__Vstatic__m_inst)) {
        this->__Vnontrivs.__PVT__get__Vstatic__m_inst 
            = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi142f147e, vlProcess, vlSymsp);
    }
    get__Vfuncrtn = this->__Vnontrivs.__PVT__get__Vstatic__m_inst;
}

void Vtb_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi142f147e__Vclpkg::__VnoInFunc_create(Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> parent, ::std::string contxt, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_db_implementation_t__pi44a9f78c> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi142f147e__Vclpkg::__VnoInFunc_create\n"); );
    // Body
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_registry_common__pie3f9186f__Vclpkg.__VnoInFunc_create(vlSymsp, name, parent, contxt, create__Vfuncrtn);
}

void Vtb_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi142f147e::__VnoInFunc_create_object(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create_object__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi142f147e::__VnoInFunc_create_object\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_407;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_606;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_609;
    __Vtask_uvm_report_error__verbosity_609 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_611;
    __Vtask_uvm_report_error__line_611 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_613;
    __Vtask_uvm_report_error__report_enabled_checked_613 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_408;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_614;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_5__get_type_name;
    ::std::string __VlefCall_4__get_type_name;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk1__DOT___local_report_object_;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_407);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
        = __Vfunc_get__Vfuncout_407;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_606);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
        = __Vtask_get_root__Vfuncout_606;
    __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
    VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_registry.svh", 453)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk1__DOT___local_report_object_);
    VL_NULL_CHECK(unnamedblk1__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_registry.svh", 453)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "UVM/ABST_RGTRY/CREATE_ABSTRACT_OBJ"s, __VlefCall_1__get_report_verbosity_level);
    __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
    if (__VlefLogAnd_3) {
        VL_NULL_CHECK(unnamedblk1__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_registry.svh", 453)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "UVM/ABST_RGTRY/CREATE_ABSTRACT_OBJ"s, __VlefCall_2__get_report_action);
        __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
    }
    if (VL_UNLIKELY((__VlefLogAnd_3))) {
        this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_4__get_type_name);
        this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_5__get_type_name);
        __Vtask_uvm_report_error__report_enabled_checked_613 = 1U;
        this->__Vtask_uvm_report_error__context_name_612 = ""s;
        __Vtask_uvm_report_error__line_611 = 0x000001c5U;
        this->__Vtask_uvm_report_error__filename_610 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_registry.svh"s;
        __Vtask_uvm_report_error__verbosity_609 = 0U;
        VL_SFORMAT_NX(this->__Vtask_uvm_report_error__message_608
                      ,"Cannot create an instance of abstract class %s (with name %s). Check for missing factory overrides for %s.",3
                      , 'S',&(__VlefCall_4__get_type_name)
                      , 'S',&(name), 'S',&(__VlefCall_5__get_type_name));
        this->__Vtask_uvm_report_error__id_607 = "UVM/ABST_RGTRY/CREATE_ABSTRACT_OBJ"s;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_408);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
            = __Vfunc_get__Vfuncout_408;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_614);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
            = __Vtask_get_root__Vfuncout_614;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_607, this->__Vtask_uvm_report_error__message_608, __Vtask_uvm_report_error__verbosity_609, this->__Vtask_uvm_report_error__filename_610, __Vtask_uvm_report_error__line_611, this->__Vtask_uvm_report_error__context_name_612, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_613));
    }
    create_object__Vfuncrtn = VlNull{};
}

void Vtb_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi142f147e::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi142f147e::__VnoInFunc_get_type_name\n"); );
    // Body
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_registry_common__pie3f9186f> common;
    get_type_name__Vfuncrtn = ""s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_registry_common__pie3f9186f__Vclpkg.__VnoInFunc_get(vlSymsp, common);
    VL_NULL_CHECK(common, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_registry.svh", 468)->__VnoInFunc_get_type_name(vlSymsp, get_type_name__Vfuncrtn);
}

void Vtb_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi142f147e::__VnoInFunc_initialize(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi142f147e::__VnoInFunc_initialize\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_registry_common__pie3f9186f> common;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_registry_common__pie3f9186f__Vclpkg.__VnoInFunc_get(vlSymsp, common);
    VL_NULL_CHECK(common, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_registry.svh", 549)->__VnoInFunc_initialize(vlProcess, vlSymsp);
}

void Vtb_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi142f147e::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    Vtb_top_uvm_pkg__03a__03auvm_object_wrapper::init(vlProcess, vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi142f147e::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void Vtb_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi142f147e::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi142f147e::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi142f147e::~Vtb_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi142f147e() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi142f147e::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi142f147e::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi142f147e::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi142f147e::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi142f147e::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vtb_top_uvm_pkg__03a__03auvm_object_wrapper::to_string_middle();
    return (out);
}
