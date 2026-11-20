// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_get_factory(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_factory> &get_factory__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_get_factory\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_default_factory> unnamedblk1__DOT__f;
    if ((VlNull{} == this->__PVT__factory)) {
        unnamedblk1__DOT__f = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_default_factory, vlProcess, vlSymsp);
        this->__PVT__factory = unnamedblk1__DOT__f;
    }
    get_factory__Vfuncrtn = this->__PVT__factory;
}

void Vtb_top_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_get_default_tr_database(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tr_database> &get_default_tr_database__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_get_default_tr_database\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_std__03a__03aprocess> unnamedblk2__DOT__p;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_text_tr_database> unnamedblk2__DOT__tx_db;
    ::std::string unnamedblk2__DOT__s;
    if ((VlNull{} == this->__PVT__tr_database)) {
        vlSymsp->vlInst.TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, unnamedblk2__DOT__p);
        unnamedblk2__DOT__s = ""s;
        if ((VlNull{} != unnamedblk2__DOT__p)) {
            VL_NULL_CHECK(unnamedblk2__DOT__p, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_coreservice.svh", 229)->__VnoInFunc_get_randstate(vlSymsp, unnamedblk2__DOT__s);
        }
        unnamedblk2__DOT__tx_db = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_text_tr_database, vlProcess, vlSymsp, "default_tr_database"s);
        this->__PVT__tr_database = unnamedblk2__DOT__tx_db;
        if ((VlNull{} != unnamedblk2__DOT__p)) {
            VL_NULL_CHECK(unnamedblk2__DOT__p, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_coreservice.svh", 238)->__VnoInFunc_set_randstate(vlSymsp, unnamedblk2__DOT__s);
        }
    }
    get_default_tr_database__Vfuncrtn = this->__PVT__tr_database;
}

void Vtb_top_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_get_report_server(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_server> &get_report_server__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_get_report_server\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_default_report_server> unnamedblk3__DOT__f;
    if ((VlNull{} == this->__PVT__report_server)) {
        unnamedblk3__DOT__f = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_default_report_server, vlProcess, vlSymsp, "uvm_report_server"s);
        this->__PVT__report_server = unnamedblk3__DOT__f;
    }
    get_report_server__Vfuncrtn = this->__PVT__report_server;
}

void Vtb_top_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_set_report_server(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_server> server) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_set_report_server\n"); );
    // Body
    this->__PVT__report_server = server;
}

void Vtb_top_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_get_root(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> &get_root__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_get_root\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_m_uvm_get_root(vlProcess, vlSymsp, get_root__Vfuncrtn);
}

void Vtb_top_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_get_component_visitor(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_visitor_> &get_component_visitor__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_get_component_visitor\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component_name_check_visitor> unnamedblk4__DOT__v;
    if ((VlNull{} == this->__PVT___visitor)) {
        unnamedblk4__DOT__v = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_component_name_check_visitor, vlProcess, vlSymsp, "name-check-visitor"s);
        this->__PVT___visitor = unnamedblk4__DOT__v;
    }
    get_component_visitor__Vfuncrtn = this->__PVT___visitor;
}

void Vtb_top_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_get_default_printer(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer> &get_default_printer__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_get_default_printer\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_table_printer> __Vfunc_get_default__Vfuncout_114;
    // Body
    VlProcess::currentp(vlProcess.get());
    if ((VlNull{} == vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_default_printer)) {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg.__VnoInFunc_get_default(vlProcess, vlSymsp, __Vfunc_get_default__Vfuncout_114);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_default_printer 
            = __Vfunc_get_default__Vfuncout_114;
    }
    get_default_printer__Vfuncrtn = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_default_printer;
}

void Vtb_top_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_get_resource_pool(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_pool> &get_resource_pool__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_get_resource_pool\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    if ((VlNull{} == this->__PVT__m_rp)) {
        this->__PVT__m_rp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_resource_pool, vlProcess, vlSymsp);
    }
    get_resource_pool__Vfuncrtn = this->__PVT__m_rp;
}

void Vtb_top_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_get_resource_pool_default_precedence(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_resource_pool_default_precedence__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_get_resource_pool_default_precedence\n"); );
    // Body
    get_resource_pool_default_precedence__Vfuncrtn = 0x000003e8U;
}

void Vtb_top_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_get_phase_hopper(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase_hopper> &get_phase_hopper__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_get_phase_hopper\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    if ((VlNull{} == this->__PVT__m_hopper)) {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pi6a3b1ffb__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "default_hopper"s, VlNull{}, ""s, this->__PVT__m_hopper);
    }
    get_phase_hopper__Vfuncrtn = this->__PVT__m_hopper;
}

void Vtb_top_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_get_uvm_seeding(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &get_uvm_seeding__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_get_uvm_seeding\n"); );
    // Body
    get_uvm_seeding__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_get_default_copier(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_copier> &get_default_copier__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_get_default_copier\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    if ((VlNull{} == this->__PVT__m_copier)) {
        this->__PVT__m_copier = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_copier, vlProcess, vlSymsp, "uvm_default_copier"s);
    }
    get_default_copier__Vfuncrtn = this->__PVT__m_copier;
}

void Vtb_top_uvm_pkg__03a__03auvm_default_coreservice_t::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    Vtb_top_uvm_pkg__03a__03auvm_coreservice_t::init(vlProcess, vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_coreservice_t::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    this->__PVT__m_default_max_ready_to_end_iters = 0x00000014U;
    this->__PVT__m_uvm_global_seed = VL_RANDOM_I();
    /*super.new*/;
}

void Vtb_top_uvm_pkg__03a__03auvm_default_coreservice_t::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_coreservice_t::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_top_uvm_pkg__03a__03auvm_default_coreservice_t::~Vtb_top_uvm_pkg__03a__03auvm_default_coreservice_t() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_default_coreservice_t::~\n"); );
}
