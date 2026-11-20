// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_reg_block__Vclpkg::__VnoInFunc_get_root_blocks(Vtb_top__Syms* __restrict vlSymsp, ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_block>> &blks) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_reg_block__Vclpkg::__VnoInFunc_get_root_blocks\n"); );
    // Body
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk1034__DOT__blk;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk1034__DOT__blk__Vnext;
    ::CData/*0:0*/ unnamedblk1034__DOT__blk__Vmore;
    unnamedblk1034__DOT__blk__Vmore = 0;
    unnamedblk1034__DOT__blk__Vmore = (0U != this->__Vnontrivs.__PVT__m_roots.first(unnamedblk1034__DOT__blk__Vnext));
    while (unnamedblk1034__DOT__blk__Vmore) {
        unnamedblk1034__DOT__blk = unnamedblk1034__DOT__blk__Vnext;
        unnamedblk1034__DOT__blk__Vmore = (0U != this->__Vnontrivs.__PVT__m_roots.next(unnamedblk1034__DOT__blk__Vnext));
        blks.push_back(unnamedblk1034__DOT__blk);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_registry__pid4ac347c> __Vfunc_get__Vfuncout_1935;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pid4ac347c__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1935);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_1935;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_block> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_reg_block, vlProcess, vlSymsp, ""s, 0U);
    } else {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_reg_block, vlProcess, vlSymsp, name, 0U);
    }
    create__Vfuncrtn = tmp;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_block"s;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_sample(Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ offset, ::CData/*0:0*/ is_read, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_sample\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_set_lock(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ v) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_set_lock\n"); );
    // Body
    ::IData/*31:0*/ unnamedblk4__DOT__idx;
    unnamedblk4__DOT__idx = 0;
    ::IData/*31:0*/ unnamedblk4__DOT__idx__Vnext;
    unnamedblk4__DOT__idx__Vnext = 0;
    ::CData/*0:0*/ unnamedblk4__DOT__idx__Vmore;
    unnamedblk4__DOT__idx__Vmore = 0;
    this->__PVT__locked = v;
    unnamedblk4__DOT__idx__Vmore = (0U != this->__PVT__blks.first(unnamedblk4__DOT__idx__Vnext));
    while (unnamedblk4__DOT__idx__Vmore) {
        unnamedblk4__DOT__idx = unnamedblk4__DOT__idx__Vnext;
        unnamedblk4__DOT__idx__Vmore = (0U != this->__PVT__blks.next(unnamedblk4__DOT__idx__Vnext));
        VL_NULL_CHECK(this->__PVT__blks.at(unnamedblk4__DOT__idx), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 1056)->__VnoInFunc_set_lock(vlSymsp, v);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_unregister(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> m) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_unregister\n"); );
    // Body
    ::CData/*0:0*/ __VlefCall_2__is_in_map;
    ::CData/*0:0*/ __VlefCall_1__is_in_map;
    ::CData/*0:0*/ __VlefCall_0__is_in_map;
    ::IData/*31:0*/ unnamedblk5__DOT__idx;
    unnamedblk5__DOT__idx = 0;
    ::IData/*31:0*/ unnamedblk5__DOT__idx__Vnext;
    unnamedblk5__DOT__idx__Vnext = 0;
    ::CData/*0:0*/ unnamedblk5__DOT__idx__Vmore;
    unnamedblk5__DOT__idx__Vmore = 0;
    ::IData/*31:0*/ unnamedblk6__DOT__idx;
    unnamedblk6__DOT__idx = 0;
    ::IData/*31:0*/ unnamedblk6__DOT__idx__Vnext;
    unnamedblk6__DOT__idx__Vnext = 0;
    ::CData/*0:0*/ unnamedblk6__DOT__idx__Vmore;
    unnamedblk6__DOT__idx__Vmore = 0;
    ::IData/*31:0*/ unnamedblk7__DOT__idx;
    unnamedblk7__DOT__idx = 0;
    ::IData/*31:0*/ unnamedblk7__DOT__idx__Vnext;
    unnamedblk7__DOT__idx__Vnext = 0;
    ::CData/*0:0*/ unnamedblk7__DOT__idx__Vmore;
    unnamedblk7__DOT__idx__Vmore = 0;
    unnamedblk5__DOT__idx__Vmore = (0U != this->__PVT__regs.first(unnamedblk5__DOT__idx__Vnext));
    while (unnamedblk5__DOT__idx__Vmore) {
        unnamedblk5__DOT__idx = unnamedblk5__DOT__idx__Vnext;
        unnamedblk5__DOT__idx__Vmore = (0U != this->__PVT__regs.next(unnamedblk5__DOT__idx__Vnext));
        VL_NULL_CHECK(this->__PVT__regs.at(unnamedblk5__DOT__idx), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 1066)->__VnoInFunc_is_in_map(vlSymsp, m, __VlefCall_0__is_in_map);
        if (__VlefCall_0__is_in_map) {
            this->__PVT__regs.erase(unnamedblk5__DOT__idx);
        }
    }
    unnamedblk6__DOT__idx__Vmore = (0U != this->__PVT__mems.first(unnamedblk6__DOT__idx__Vnext));
    while (unnamedblk6__DOT__idx__Vmore) {
        unnamedblk6__DOT__idx = unnamedblk6__DOT__idx__Vnext;
        unnamedblk6__DOT__idx__Vmore = (0U != this->__PVT__mems.next(unnamedblk6__DOT__idx__Vnext));
        VL_NULL_CHECK(this->__PVT__mems.at(unnamedblk6__DOT__idx), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 1073)->__VnoInFunc_is_in_map(vlSymsp, m, __VlefCall_1__is_in_map);
        if (__VlefCall_1__is_in_map) {
            this->__PVT__mems.erase(unnamedblk6__DOT__idx);
        }
    }
    unnamedblk7__DOT__idx__Vmore = (0U != this->__PVT__vregs.first(unnamedblk7__DOT__idx__Vnext));
    while (unnamedblk7__DOT__idx__Vmore) {
        unnamedblk7__DOT__idx = unnamedblk7__DOT__idx__Vnext;
        unnamedblk7__DOT__idx__Vmore = (0U != this->__PVT__vregs.next(unnamedblk7__DOT__idx__Vnext));
        VL_NULL_CHECK(this->__PVT__vregs.at(unnamedblk7__DOT__idx), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 1080)->__VnoInFunc_is_in_map(vlSymsp, m, __VlefCall_2__is_in_map);
        if (__VlefCall_2__is_in_map) {
            this->__PVT__vregs.erase(unnamedblk7__DOT__idx);
        }
    }
    this->__PVT__maps.erase(m);
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_block::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::IData/*31:0*/ has_coverage) {
    Vtb_top_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_block::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    this->__PVT__default_path = 3U;
    this->__PVT__default_hdl_path = "RTL"s;
    /*super.new*/;
    this->__PVT__hdl_paths_pool = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_object_string_pool__pi7a622f08, vlProcess, vlSymsp, "hdl_paths"s);
    this->__PVT__has_cover = has_coverage;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__Vnontrivs.__PVT__m_roots.atWrite(
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_block>{this}) = 0U;
    if ((0U != vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__Vnontrivs.__PVT__m_root_names.exists(name))) {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__Vnontrivs.__PVT__m_root_names.atWrite(name) 
            = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__Vnontrivs.__PVT__m_root_names
               .at(name));
    } else {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__Vnontrivs.__PVT__m_root_names.atWrite(name) = 1U;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_is_locked(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &is_locked__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_is_locked\n"); );
    // Body
    is_locked__Vfuncrtn = this->__PVT__locked;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_full_name(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_full_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_full_name\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_1__get_name;
    ::std::string __VlefCall_0__get_full_name;
    {
        get_full_name__Vfuncrtn = ""s;
        if ((""s == this->__PVT__m_name)) {
            if ((VlNull{} == this->__PVT__parent)) {
                this->__VnoInFunc_get_name(vlSymsp, get_full_name__Vfuncrtn);
            } else {
                VL_NULL_CHECK(this->__PVT__parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 1375)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
                get_full_name__Vfuncrtn = VL_CONCATN_NNN(
                                                         VL_CONCATN_NNN(__VlefCall_0__get_full_name, "."s), __VlefCall_1__get_name);
            }
            goto __Vlabel0;
        }
        get_full_name__Vfuncrtn = this->__PVT__m_name;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_fields(Vtb_top__Syms* __restrict vlSymsp, ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_field>> &fields, ::IData/*31:0*/ hier) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_fields\n"); );
    // Body
    ::IData/*31:0*/ unnamedblk1023__DOT__rg_;
    unnamedblk1023__DOT__rg_ = 0;
    ::IData/*31:0*/ unnamedblk1023__DOT__rg___Vnext;
    unnamedblk1023__DOT__rg___Vnext = 0;
    ::CData/*0:0*/ unnamedblk1023__DOT__rg___Vmore;
    unnamedblk1023__DOT__rg___Vmore = 0;
    ::IData/*31:0*/ unnamedblk1024__DOT__blk_;
    unnamedblk1024__DOT__blk_ = 0;
    ::IData/*31:0*/ unnamedblk1024__DOT__blk___Vnext;
    unnamedblk1024__DOT__blk___Vnext = 0;
    ::CData/*0:0*/ unnamedblk1024__DOT__blk___Vmore;
    unnamedblk1024__DOT__blk___Vmore = 0;
    unnamedblk1023__DOT__rg___Vmore = (0U != this->__PVT__regs.first(unnamedblk1023__DOT__rg___Vnext));
    while (unnamedblk1023__DOT__rg___Vmore) {
        unnamedblk1023__DOT__rg_ = unnamedblk1023__DOT__rg___Vnext;
        unnamedblk1023__DOT__rg___Vmore = (0U != this->__PVT__regs.next(unnamedblk1023__DOT__rg___Vnext));
        VL_NULL_CHECK(this->__PVT__regs.at(unnamedblk1023__DOT__rg_), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 1390)->__VnoInFunc_get_fields(vlSymsp, fields);
    }
    if ((1U == hier)) {
        unnamedblk1024__DOT__blk___Vmore = (0U != this->__PVT__blks.first(unnamedblk1024__DOT__blk___Vnext));
        while (unnamedblk1024__DOT__blk___Vmore) {
            unnamedblk1024__DOT__blk_ = unnamedblk1024__DOT__blk___Vnext;
            unnamedblk1024__DOT__blk___Vmore = (0U 
                                                != this->__PVT__blks.next(unnamedblk1024__DOT__blk___Vnext));
            VL_NULL_CHECK(this->__PVT__blks.at(unnamedblk1024__DOT__blk_), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 1397)->__VnoInFunc_get_fields(vlSymsp, fields, 1U);
        }
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_registers(Vtb_top__Syms* __restrict vlSymsp, ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg>> &regs, ::IData/*31:0*/ hier) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_registers\n"); );
    // Body
    ::IData/*31:0*/ unnamedblk1027__DOT__rg;
    unnamedblk1027__DOT__rg = 0;
    ::IData/*31:0*/ unnamedblk1027__DOT__rg__Vnext;
    unnamedblk1027__DOT__rg__Vnext = 0;
    ::CData/*0:0*/ unnamedblk1027__DOT__rg__Vmore;
    unnamedblk1027__DOT__rg__Vmore = 0;
    ::IData/*31:0*/ unnamedblk1028__DOT__blk_;
    unnamedblk1028__DOT__blk_ = 0;
    ::IData/*31:0*/ unnamedblk1028__DOT__blk___Vnext;
    unnamedblk1028__DOT__blk___Vnext = 0;
    ::CData/*0:0*/ unnamedblk1028__DOT__blk___Vmore;
    unnamedblk1028__DOT__blk___Vmore = 0;
    unnamedblk1027__DOT__rg__Vmore = (0U != this->__PVT__regs.first(unnamedblk1027__DOT__rg__Vnext));
    while (unnamedblk1027__DOT__rg__Vmore) {
        unnamedblk1027__DOT__rg = unnamedblk1027__DOT__rg__Vnext;
        unnamedblk1027__DOT__rg__Vmore = (0U != this->__PVT__regs.next(unnamedblk1027__DOT__rg__Vnext));
        regs.push_back(this->__PVT__regs.at(unnamedblk1027__DOT__rg));
    }
    if ((1U == hier)) {
        unnamedblk1028__DOT__blk___Vmore = (0U != this->__PVT__blks.first(unnamedblk1028__DOT__blk___Vnext));
        while (unnamedblk1028__DOT__blk___Vmore) {
            unnamedblk1028__DOT__blk_ = unnamedblk1028__DOT__blk___Vnext;
            unnamedblk1028__DOT__blk___Vmore = (0U 
                                                != this->__PVT__blks.next(unnamedblk1028__DOT__blk___Vnext));
            VL_NULL_CHECK(this->__PVT__blks.at(unnamedblk1028__DOT__blk_), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 1437)->__VnoInFunc_get_registers(vlSymsp, regs, 1U);
        }
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_virtual_registers(Vtb_top__Syms* __restrict vlSymsp, ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_vreg>> &regs, ::IData/*31:0*/ hier) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_virtual_registers\n"); );
    // Body
    ::IData/*31:0*/ unnamedblk1029__DOT__rg;
    unnamedblk1029__DOT__rg = 0;
    ::IData/*31:0*/ unnamedblk1029__DOT__rg__Vnext;
    unnamedblk1029__DOT__rg__Vnext = 0;
    ::CData/*0:0*/ unnamedblk1029__DOT__rg__Vmore;
    unnamedblk1029__DOT__rg__Vmore = 0;
    ::IData/*31:0*/ unnamedblk1030__DOT__blk_;
    unnamedblk1030__DOT__blk_ = 0;
    ::IData/*31:0*/ unnamedblk1030__DOT__blk___Vnext;
    unnamedblk1030__DOT__blk___Vnext = 0;
    ::CData/*0:0*/ unnamedblk1030__DOT__blk___Vmore;
    unnamedblk1030__DOT__blk___Vmore = 0;
    unnamedblk1029__DOT__rg__Vmore = (0U != this->__PVT__vregs.first(unnamedblk1029__DOT__rg__Vnext));
    while (unnamedblk1029__DOT__rg__Vmore) {
        unnamedblk1029__DOT__rg = unnamedblk1029__DOT__rg__Vnext;
        unnamedblk1029__DOT__rg__Vmore = (0U != this->__PVT__vregs.next(unnamedblk1029__DOT__rg__Vnext));
        regs.push_back(this->__PVT__vregs.at(unnamedblk1029__DOT__rg));
    }
    if ((1U == hier)) {
        unnamedblk1030__DOT__blk___Vmore = (0U != this->__PVT__blks.first(unnamedblk1030__DOT__blk___Vnext));
        while (unnamedblk1030__DOT__blk___Vmore) {
            unnamedblk1030__DOT__blk_ = unnamedblk1030__DOT__blk___Vnext;
            unnamedblk1030__DOT__blk___Vmore = (0U 
                                                != this->__PVT__blks.next(unnamedblk1030__DOT__blk___Vnext));
            VL_NULL_CHECK(this->__PVT__blks.at(unnamedblk1030__DOT__blk_), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 1458)->__VnoInFunc_get_virtual_registers(vlSymsp, regs, 1U);
        }
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_memories(Vtb_top__Syms* __restrict vlSymsp, ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_mem>> &mems, ::IData/*31:0*/ hier) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_memories\n"); );
    // Body
    ::IData/*31:0*/ unnamedblk1031__DOT__mem_;
    unnamedblk1031__DOT__mem_ = 0;
    ::IData/*31:0*/ unnamedblk1031__DOT__mem___Vnext;
    unnamedblk1031__DOT__mem___Vnext = 0;
    ::CData/*0:0*/ unnamedblk1031__DOT__mem___Vmore;
    unnamedblk1031__DOT__mem___Vmore = 0;
    ::IData/*31:0*/ unnamedblk1032__DOT__blk_;
    unnamedblk1032__DOT__blk_ = 0;
    ::IData/*31:0*/ unnamedblk1032__DOT__blk___Vnext;
    unnamedblk1032__DOT__blk___Vnext = 0;
    ::CData/*0:0*/ unnamedblk1032__DOT__blk___Vmore;
    unnamedblk1032__DOT__blk___Vmore = 0;
    unnamedblk1031__DOT__mem___Vmore = (0U != this->__PVT__mems.first(unnamedblk1031__DOT__mem___Vnext));
    while (unnamedblk1031__DOT__mem___Vmore) {
        unnamedblk1031__DOT__mem_ = unnamedblk1031__DOT__mem___Vnext;
        unnamedblk1031__DOT__mem___Vmore = (0U != this->__PVT__mems.next(unnamedblk1031__DOT__mem___Vnext));
        mems.push_back(this->__PVT__mems.at(unnamedblk1031__DOT__mem_));
    }
    if ((1U == hier)) {
        unnamedblk1032__DOT__blk___Vmore = (0U != this->__PVT__blks.first(unnamedblk1032__DOT__blk___Vnext));
        while (unnamedblk1032__DOT__blk___Vmore) {
            unnamedblk1032__DOT__blk_ = unnamedblk1032__DOT__blk___Vnext;
            unnamedblk1032__DOT__blk___Vmore = (0U 
                                                != this->__PVT__blks.next(unnamedblk1032__DOT__blk___Vnext));
            VL_NULL_CHECK(this->__PVT__blks.at(unnamedblk1032__DOT__blk_), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 1477)->__VnoInFunc_get_memories(vlSymsp, mems, 1U);
        }
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_blocks(Vtb_top__Syms* __restrict vlSymsp, ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_block>> &blks, ::IData/*31:0*/ hier) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_blocks\n"); );
    // Body
    ::IData/*31:0*/ unnamedblk1033__DOT__blk_;
    unnamedblk1033__DOT__blk_ = 0;
    ::IData/*31:0*/ unnamedblk1033__DOT__blk___Vnext;
    unnamedblk1033__DOT__blk___Vnext = 0;
    ::CData/*0:0*/ unnamedblk1033__DOT__blk___Vmore;
    unnamedblk1033__DOT__blk___Vmore = 0;
    unnamedblk1033__DOT__blk___Vmore = (0U != this->__PVT__blks.first(unnamedblk1033__DOT__blk___Vnext));
    while (unnamedblk1033__DOT__blk___Vmore) {
        unnamedblk1033__DOT__blk_ = unnamedblk1033__DOT__blk___Vnext;
        unnamedblk1033__DOT__blk___Vmore = (0U != this->__PVT__blks.next(unnamedblk1033__DOT__blk___Vnext));
        blks.push_back(this->__PVT__blks.at(unnamedblk1033__DOT__blk_));
        if ((1U == hier)) {
            VL_NULL_CHECK(this->__PVT__blks.at(unnamedblk1033__DOT__blk_), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 1494)->__VnoInFunc_get_blocks(vlSymsp, blks, 1U);
        }
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_maps(Vtb_top__Syms* __restrict vlSymsp, ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map>> &maps) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_maps\n"); );
    // Body
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk1038__DOT__map;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk1038__DOT__map__Vnext;
    ::CData/*0:0*/ unnamedblk1038__DOT__map__Vmore;
    unnamedblk1038__DOT__map__Vmore = 0;
    unnamedblk1038__DOT__map__Vmore = (0U != this->__PVT__maps.first(unnamedblk1038__DOT__map__Vnext));
    while (unnamedblk1038__DOT__map__Vmore) {
        unnamedblk1038__DOT__map = unnamedblk1038__DOT__map__Vnext;
        unnamedblk1038__DOT__map__Vmore = (0U != this->__PVT__maps.next(unnamedblk1038__DOT__map__Vnext));
        maps.push_back(unnamedblk1038__DOT__map);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_parent(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_block> &get_parent__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_parent\n"); );
    // Body
    get_parent__Vfuncrtn = this->__PVT__parent;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_set_coverage(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ is_on, ::IData/*31:0*/ &set_coverage__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_set_coverage\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_set_coverage__Vfuncout_5148;
    __Vtask_set_coverage__Vfuncout_5148 = 0;
    ::IData/*31:0*/ __Vtask_set_coverage__Vfuncout_5149;
    __Vtask_set_coverage__Vfuncout_5149 = 0;
    ::IData/*31:0*/ __Vtask_set_coverage__Vfuncout_5150;
    __Vtask_set_coverage__Vfuncout_5150 = 0;
    // Body
    ::IData/*31:0*/ unnamedblk1075__DOT__rg_;
    unnamedblk1075__DOT__rg_ = 0;
    ::IData/*31:0*/ unnamedblk1075__DOT__rg___Vnext;
    unnamedblk1075__DOT__rg___Vnext = 0;
    ::CData/*0:0*/ unnamedblk1075__DOT__rg___Vmore;
    unnamedblk1075__DOT__rg___Vmore = 0;
    ::IData/*31:0*/ unnamedblk1076__DOT__mem_;
    unnamedblk1076__DOT__mem_ = 0;
    ::IData/*31:0*/ unnamedblk1076__DOT__mem___Vnext;
    unnamedblk1076__DOT__mem___Vnext = 0;
    ::CData/*0:0*/ unnamedblk1076__DOT__mem___Vmore;
    unnamedblk1076__DOT__mem___Vmore = 0;
    ::IData/*31:0*/ unnamedblk1077__DOT__blk_;
    unnamedblk1077__DOT__blk_ = 0;
    ::IData/*31:0*/ unnamedblk1077__DOT__blk___Vnext;
    unnamedblk1077__DOT__blk___Vnext = 0;
    ::CData/*0:0*/ unnamedblk1077__DOT__blk___Vmore;
    unnamedblk1077__DOT__blk___Vmore = 0;
    set_coverage__Vfuncrtn = 0U;
    this->__PVT__cover_on = (this->__PVT__has_cover 
                             & is_on);
    unnamedblk1075__DOT__rg___Vmore = (0U != this->__PVT__regs.first(unnamedblk1075__DOT__rg___Vnext));
    while (unnamedblk1075__DOT__rg___Vmore) {
        unnamedblk1075__DOT__rg_ = unnamedblk1075__DOT__rg___Vnext;
        unnamedblk1075__DOT__rg___Vmore = (0U != this->__PVT__regs.next(unnamedblk1075__DOT__rg___Vnext));
        VL_NULL_CHECK(this->__PVT__regs.at(unnamedblk1075__DOT__rg_), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 1864)->__VnoInFunc_set_coverage(vlSymsp, is_on, __Vtask_set_coverage__Vfuncout_5148);
    }
    unnamedblk1076__DOT__mem___Vmore = (0U != this->__PVT__mems.first(unnamedblk1076__DOT__mem___Vnext));
    while (unnamedblk1076__DOT__mem___Vmore) {
        unnamedblk1076__DOT__mem_ = unnamedblk1076__DOT__mem___Vnext;
        unnamedblk1076__DOT__mem___Vmore = (0U != this->__PVT__mems.next(unnamedblk1076__DOT__mem___Vnext));
        VL_NULL_CHECK(this->__PVT__mems.at(unnamedblk1076__DOT__mem_), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 1868)->__VnoInFunc_set_coverage(vlSymsp, is_on, __Vtask_set_coverage__Vfuncout_5149);
    }
    unnamedblk1077__DOT__blk___Vmore = (0U != this->__PVT__blks.first(unnamedblk1077__DOT__blk___Vnext));
    while (unnamedblk1077__DOT__blk___Vmore) {
        unnamedblk1077__DOT__blk_ = unnamedblk1077__DOT__blk___Vnext;
        unnamedblk1077__DOT__blk___Vmore = (0U != this->__PVT__blks.next(unnamedblk1077__DOT__blk___Vnext));
        VL_NULL_CHECK(this->__PVT__blks.at(unnamedblk1077__DOT__blk_), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 1872)->__VnoInFunc_set_coverage(vlSymsp, is_on, __Vtask_set_coverage__Vfuncout_5150);
    }
    set_coverage__Vfuncrtn = this->__PVT__cover_on;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_sample_values(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_sample_values\n"); );
    // Body
    ::IData/*31:0*/ unnamedblk1078__DOT__rg_;
    unnamedblk1078__DOT__rg_ = 0;
    ::IData/*31:0*/ unnamedblk1078__DOT__rg___Vnext;
    unnamedblk1078__DOT__rg___Vnext = 0;
    ::CData/*0:0*/ unnamedblk1078__DOT__rg___Vmore;
    unnamedblk1078__DOT__rg___Vmore = 0;
    ::IData/*31:0*/ unnamedblk1079__DOT__blk_;
    unnamedblk1079__DOT__blk_ = 0;
    ::IData/*31:0*/ unnamedblk1079__DOT__blk___Vnext;
    unnamedblk1079__DOT__blk___Vnext = 0;
    ::CData/*0:0*/ unnamedblk1079__DOT__blk___Vmore;
    unnamedblk1079__DOT__blk___Vmore = 0;
    unnamedblk1078__DOT__rg___Vmore = (0U != this->__PVT__regs.first(unnamedblk1078__DOT__rg___Vnext));
    while (unnamedblk1078__DOT__rg___Vmore) {
        unnamedblk1078__DOT__rg_ = unnamedblk1078__DOT__rg___Vnext;
        unnamedblk1078__DOT__rg___Vmore = (0U != this->__PVT__regs.next(unnamedblk1078__DOT__rg___Vnext));
        VL_NULL_CHECK(this->__PVT__regs.at(unnamedblk1078__DOT__rg_), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 1883)->__VnoInFunc_sample_values(vlSymsp);
    }
    unnamedblk1079__DOT__blk___Vmore = (0U != this->__PVT__blks.first(unnamedblk1079__DOT__blk___Vnext));
    while (unnamedblk1079__DOT__blk___Vmore) {
        unnamedblk1079__DOT__blk_ = unnamedblk1079__DOT__blk___Vnext;
        unnamedblk1079__DOT__blk___Vmore = (0U != this->__PVT__blks.next(unnamedblk1079__DOT__blk___Vnext));
        VL_NULL_CHECK(this->__PVT__blks.at(unnamedblk1079__DOT__blk_), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 1887)->__VnoInFunc_sample_values(vlSymsp);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_XsampleX(Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ addr, ::CData/*0:0*/ is_read, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_XsampleX\n"); );
    // Body
    this->__VnoInFunc_sample(vlSymsp, addr, (::IData)(is_read), map);
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_reset(Vtb_top__Syms* __restrict vlSymsp, ::std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_reset\n"); );
    // Body
    ::IData/*31:0*/ unnamedblk1080__DOT__rg_;
    unnamedblk1080__DOT__rg_ = 0;
    ::IData/*31:0*/ unnamedblk1080__DOT__rg___Vnext;
    unnamedblk1080__DOT__rg___Vnext = 0;
    ::CData/*0:0*/ unnamedblk1080__DOT__rg___Vmore;
    unnamedblk1080__DOT__rg___Vmore = 0;
    ::IData/*31:0*/ unnamedblk1081__DOT__blk_;
    unnamedblk1081__DOT__blk_ = 0;
    ::IData/*31:0*/ unnamedblk1081__DOT__blk___Vnext;
    unnamedblk1081__DOT__blk___Vnext = 0;
    ::CData/*0:0*/ unnamedblk1081__DOT__blk___Vmore;
    unnamedblk1081__DOT__blk___Vmore = 0;
    unnamedblk1080__DOT__rg___Vmore = (0U != this->__PVT__regs.first(unnamedblk1080__DOT__rg___Vnext));
    while (unnamedblk1080__DOT__rg___Vmore) {
        unnamedblk1080__DOT__rg_ = unnamedblk1080__DOT__rg___Vnext;
        unnamedblk1080__DOT__rg___Vmore = (0U != this->__PVT__regs.next(unnamedblk1080__DOT__rg___Vnext));
        VL_NULL_CHECK(this->__PVT__regs.at(unnamedblk1080__DOT__rg_), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 1950)->__VnoInFunc_reset(vlSymsp, kind);
    }
    unnamedblk1081__DOT__blk___Vmore = (0U != this->__PVT__blks.first(unnamedblk1081__DOT__blk___Vnext));
    while (unnamedblk1081__DOT__blk___Vmore) {
        unnamedblk1081__DOT__blk_ = unnamedblk1081__DOT__blk___Vnext;
        unnamedblk1081__DOT__blk___Vmore = (0U != this->__PVT__blks.next(unnamedblk1081__DOT__blk___Vnext));
        VL_NULL_CHECK(this->__PVT__blks.at(unnamedblk1081__DOT__blk_), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 1954)->__VnoInFunc_reset(vlSymsp, kind);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_needs_update(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &needs_update__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_needs_update\n"); );
    // Body
    ::CData/*0:0*/ __VlefCall_1__needs_update;
    ::CData/*0:0*/ __VlefCall_0__needs_update;
    ::IData/*31:0*/ unnamedblk1082__DOT__rg_;
    unnamedblk1082__DOT__rg_ = 0;
    ::IData/*31:0*/ unnamedblk1082__DOT__rg___Vnext;
    unnamedblk1082__DOT__rg___Vnext = 0;
    ::CData/*0:0*/ unnamedblk1082__DOT__rg___Vmore;
    unnamedblk1082__DOT__rg___Vmore = 0;
    ::IData/*31:0*/ unnamedblk1083__DOT__blk_;
    unnamedblk1083__DOT__blk_ = 0;
    ::IData/*31:0*/ unnamedblk1083__DOT__blk___Vnext;
    unnamedblk1083__DOT__blk___Vnext = 0;
    ::CData/*0:0*/ unnamedblk1083__DOT__blk___Vmore;
    unnamedblk1083__DOT__blk___Vmore = 0;
    {
        needs_update__Vfuncrtn = 0U;
        needs_update__Vfuncrtn = 0U;
        unnamedblk1082__DOT__rg___Vmore = (0U != this->__PVT__regs.first(unnamedblk1082__DOT__rg___Vnext));
        while (unnamedblk1082__DOT__rg___Vmore) {
            unnamedblk1082__DOT__rg_ = unnamedblk1082__DOT__rg___Vnext;
            unnamedblk1082__DOT__rg___Vmore = (0U != this->__PVT__regs.next(unnamedblk1082__DOT__rg___Vnext));
            VL_NULL_CHECK(this->__PVT__regs.at(unnamedblk1082__DOT__rg_), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 1965)->__VnoInFunc_needs_update(vlSymsp, __VlefCall_0__needs_update);
            if (__VlefCall_0__needs_update) {
                needs_update__Vfuncrtn = 1U;
                goto __Vlabel0;
            }
        }
        unnamedblk1083__DOT__blk___Vmore = (0U != this->__PVT__blks.first(unnamedblk1083__DOT__blk___Vnext));
        while (unnamedblk1083__DOT__blk___Vmore) {
            unnamedblk1083__DOT__blk_ = unnamedblk1083__DOT__blk___Vnext;
            unnamedblk1083__DOT__blk___Vmore = (0U 
                                                != this->__PVT__blks.next(unnamedblk1083__DOT__blk___Vnext));
            VL_NULL_CHECK(this->__PVT__blks.at(unnamedblk1083__DOT__blk_), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 1972)->__VnoInFunc_needs_update(vlSymsp, __VlefCall_1__needs_update);
            if (__VlefCall_1__needs_update) {
                needs_update__Vfuncrtn = 1U;
                goto __Vlabel0;
            }
        }
        __Vlabel0: ;
    }
}

extern const ::VlUnpacked<::std::string, 4> Vtb_top__ConstPool__CONSARRAY_9;

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_update(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &status, ::IData/*31:0*/ path, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> parent, ::IData/*31:0*/ prior, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> extension, ::std::string fname, ::IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_update\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1936;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_5151;
    ::IData/*31:0*/ __Vtask_uvm_report_info__verbosity_5154;
    __Vtask_uvm_report_info__verbosity_5154 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__line_5156;
    __Vtask_uvm_report_info__line_5156 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_info__report_enabled_checked_5158;
    __Vtask_uvm_report_info__report_enabled_checked_5158 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1937;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_5159;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1938;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_5160;
    ::IData/*31:0*/ __Vtask_uvm_report_info__verbosity_5163;
    __Vtask_uvm_report_info__verbosity_5163 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__line_5165;
    __Vtask_uvm_report_info__line_5165 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_info__report_enabled_checked_5167;
    __Vtask_uvm_report_info__report_enabled_checked_5167 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1939;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_5168;
    ::IData/*31:0*/ __Vtask_update__status_5169;
    __Vtask_update__status_5169 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1940;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_5170;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_5173;
    __Vtask_uvm_report_error__verbosity_5173 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_5175;
    __Vtask_uvm_report_error__line_5175 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_5177;
    __Vtask_uvm_report_error__report_enabled_checked_5177 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1941;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_5178;
    ::IData/*31:0*/ __Vtask_update__status_5179;
    __Vtask_update__status_5179 = 0;
    ::std::string __Vtemp_1;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::std::string __VlefCall_16__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_15;
    ::IData/*31:0*/ __VlefCall_14__get_report_action;
    ::IData/*31:0*/ __VlefCall_13__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_12__uvm_get_report_object;
    ::CData/*0:0*/ __VlefCall_11__needs_update;
    ::std::string __VlefCall_10__get_name;
    ::CData/*0:0*/ __VlefLogAnd_9;
    ::IData/*31:0*/ __VlefCall_8__get_report_action;
    ::IData/*31:0*/ __VlefCall_7__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_6__uvm_get_report_object;
    ::std::string __VlefCall_5__get_name;
    ::CData/*0:0*/ __VlefLogAnd_4;
    ::IData/*31:0*/ __VlefCall_3__get_report_action;
    ::IData/*31:0*/ __VlefCall_2__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_1__uvm_get_report_object;
    ::CData/*0:0*/ __VlefCall_0__needs_update;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk1084__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk1085__DOT___local_report_object_;
    ::IData/*31:0*/ unnamedblk1086__DOT__rg_;
    unnamedblk1086__DOT__rg_ = 0;
    ::IData/*31:0*/ unnamedblk1086__DOT__rg___Vnext;
    unnamedblk1086__DOT__rg___Vnext = 0;
    ::CData/*0:0*/ unnamedblk1086__DOT__rg___Vmore;
    unnamedblk1086__DOT__rg___Vmore = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk1086__DOT__unnamedblk1087__DOT___local_report_object_;
    ::IData/*31:0*/ unnamedblk1088__DOT__blk_;
    unnamedblk1088__DOT__blk_ = 0;
    ::IData/*31:0*/ unnamedblk1088__DOT__blk___Vnext;
    unnamedblk1088__DOT__blk___Vnext = 0;
    ::CData/*0:0*/ unnamedblk1088__DOT__blk___Vmore;
    unnamedblk1088__DOT__blk___Vmore = 0;
    {
        status = 0U;
        status = 0U;
        this->__VnoInFunc_needs_update(vlSymsp, __VlefCall_0__needs_update);
        if ((1U & (~ (::IData)(__VlefCall_0__needs_update)))) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1936);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1936;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_5151);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_5151;
            __VlefCall_1__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_1__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 1994)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk1084__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk1084__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 1994)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "RegModel"s, __VlefCall_2__get_report_verbosity_level);
            __VlefLogAnd_4 = VL_LTES_III(32, 0x0000012cU, __VlefCall_2__get_report_verbosity_level);
            if (__VlefLogAnd_4) {
                VL_NULL_CHECK(unnamedblk1084__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 1994)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "RegModel"s, __VlefCall_3__get_report_action);
                __VlefLogAnd_4 = (0U != __VlefCall_3__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_4))) {
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_5__get_name);
                __Vtask_uvm_report_info__report_enabled_checked_5158 = 1U;
                this->__Vtask_uvm_report_info__context_name_5157 = ""s;
                __Vtask_uvm_report_info__line_5156 = 0x000007caU;
                this->__Vtask_uvm_report_info__filename_5155 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh"s;
                __Vtask_uvm_report_info__verbosity_5154 = 0x0000012cU;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_info__message_5153
                              ,"%s:%0d - RegModel block %s does not need updating",3
                              , 'S',&(fname), '~',32,lineno
                              , 'S',&(__VlefCall_5__get_name));
                this->__Vtask_uvm_report_info__id_5152 = "RegModel"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1937);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1937;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 147)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_5159);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_5159;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 148)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__id_5152, this->__Vtask_uvm_report_info__message_5153, __Vtask_uvm_report_info__verbosity_5154, this->__Vtask_uvm_report_info__filename_5155, __Vtask_uvm_report_info__line_5156, this->__Vtask_uvm_report_info__context_name_5157, (::IData)(__Vtask_uvm_report_info__report_enabled_checked_5158));
            }
            goto __Vlabel0;
        }
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1938);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1938;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_5160);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
            = __Vtask_get_root__Vfuncout_5160;
        __VlefCall_6__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
        VL_NULL_CHECK(__VlefCall_6__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 1999)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk1085__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk1085__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 1999)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "RegModel"s, __VlefCall_7__get_report_verbosity_level);
        __VlefLogAnd_9 = VL_LTES_III(32, 0x0000012cU, __VlefCall_7__get_report_verbosity_level);
        if (__VlefLogAnd_9) {
            VL_NULL_CHECK(unnamedblk1085__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 1999)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "RegModel"s, __VlefCall_8__get_report_action);
            __VlefLogAnd_9 = (0U != __VlefCall_8__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_9))) {
            this->__VnoInFunc_get_name(vlSymsp, __VlefCall_10__get_name);
            __Vtask_uvm_report_info__report_enabled_checked_5167 = 1U;
            this->__Vtask_uvm_report_info__context_name_5166 = ""s;
            __Vtask_uvm_report_info__line_5165 = 0x000007cfU;
            this->__Vtask_uvm_report_info__filename_5164 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh"s;
            __Vtask_uvm_report_info__verbosity_5163 = 0x0000012cU;
            __Vtemp_1 = ((3U < path) ? ""s : Vtb_top__ConstPool__CONSARRAY_9
                         [(3U & path)]);
            VL_SFORMAT_NX(this->__Vtask_uvm_report_info__message_5162
                          ,"%s:%0d - Updating model block %s with %s path",4
                          , 'S',&(fname), '~',32,lineno
                          , 'S',&(__VlefCall_10__get_name)
                          , 'S',&(__Vtemp_1));
            this->__Vtask_uvm_report_info__id_5161 = "RegModel"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1939);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1939;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 147)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_5168);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__Vfuncout_5168;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 148)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__id_5161, this->__Vtask_uvm_report_info__message_5162, __Vtask_uvm_report_info__verbosity_5163, this->__Vtask_uvm_report_info__filename_5164, __Vtask_uvm_report_info__line_5165, this->__Vtask_uvm_report_info__context_name_5166, (::IData)(__Vtask_uvm_report_info__report_enabled_checked_5167));
        }
        unnamedblk1086__DOT__rg___Vmore = (0U != this->__PVT__regs.first(unnamedblk1086__DOT__rg___Vnext));
        while (unnamedblk1086__DOT__rg___Vmore) {
            unnamedblk1086__DOT__rg_ = unnamedblk1086__DOT__rg___Vnext;
            unnamedblk1086__DOT__rg___Vmore = (0U != this->__PVT__regs.next(unnamedblk1086__DOT__rg___Vnext));
            VL_NULL_CHECK(this->__PVT__regs.at(unnamedblk1086__DOT__rg_), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 2002)->__VnoInFunc_needs_update(vlSymsp, __VlefCall_11__needs_update);
            if (__VlefCall_11__needs_update) {
                co_await VL_NULL_CHECK(this->__PVT__regs
                                       .at(unnamedblk1086__DOT__rg_), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 2003)->__VnoInFunc_update(vlSymsp, __Vtask_update__status_5169, path, VlNull{}, parent, prior, extension, ""s, 0U);
                status = __Vtask_update__status_5169;
                if (((0U != status) & (2U != status))) {
                    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1940);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                        = __Vfunc_get__Vfuncout_1940;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_5170);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                        = __Vtask_get_root__Vfuncout_5170;
                    __VlefCall_12__uvm_get_report_object 
                        = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
                    VL_NULL_CHECK(__VlefCall_12__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 2006)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk1086__DOT__unnamedblk1087__DOT___local_report_object_);
                    VL_NULL_CHECK(unnamedblk1086__DOT__unnamedblk1087__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 2006)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_13__get_report_verbosity_level);
                    __VlefLogAnd_15 = VL_LTES_III(32, 0U, __VlefCall_13__get_report_verbosity_level);
                    if (__VlefLogAnd_15) {
                        VL_NULL_CHECK(unnamedblk1086__DOT__unnamedblk1087__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 2006)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_14__get_report_action);
                        __VlefLogAnd_15 = (0U != __VlefCall_14__get_report_action);
                    }
                    if (VL_UNLIKELY((__VlefLogAnd_15))) {
                        VL_NULL_CHECK(this->__PVT__regs
                                      .at(unnamedblk1086__DOT__rg_), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 2006)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_16__get_full_name);
                        __Vtask_uvm_report_error__report_enabled_checked_5177 = 1U;
                        this->__Vtask_uvm_report_error__context_name_5176 = ""s;
                        __Vtask_uvm_report_error__line_5175 = 0x000007d6U;
                        this->__Vtask_uvm_report_error__filename_5174 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh"s;
                        __Vtask_uvm_report_error__verbosity_5173 = 0U;
                        VL_SFORMAT_NX(this->__Vtask_uvm_report_error__message_5172
                                      ,"Register \"%s\" could not be updated",1
                                      , 'S',&(__VlefCall_16__get_full_name));
                        this->__Vtask_uvm_report_error__id_5171 = "RegModel"s;
                        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1941);
                        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                            = __Vfunc_get__Vfuncout_1941;
                        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_5178);
                        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                            = __Vtask_get_root__Vfuncout_5178;
                        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_5171, this->__Vtask_uvm_report_error__message_5172, __Vtask_uvm_report_error__verbosity_5173, this->__Vtask_uvm_report_error__filename_5174, __Vtask_uvm_report_error__line_5175, this->__Vtask_uvm_report_error__context_name_5176, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_5177));
                    }
                    goto __Vlabel0;
                }
            }
        }
        unnamedblk1088__DOT__blk___Vmore = (0U != this->__PVT__blks.first(unnamedblk1088__DOT__blk___Vnext));
        while (unnamedblk1088__DOT__blk___Vmore) {
            unnamedblk1088__DOT__blk_ = unnamedblk1088__DOT__blk___Vnext;
            unnamedblk1088__DOT__blk___Vmore = (0U 
                                                != this->__PVT__blks.next(unnamedblk1088__DOT__blk___Vnext));
            co_await VL_NULL_CHECK(this->__PVT__blks
                                   .at(unnamedblk1088__DOT__blk_), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 2013)->__VnoInFunc_update(vlSymsp, __Vtask_update__status_5179, path, parent, prior, extension, fname, lineno);
            status = __Vtask_update__status_5179;
        }
        __Vlabel0: ;
    }
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_mirror(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &status, ::IData/*31:0*/ check, ::IData/*31:0*/ path, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> parent, ::IData/*31:0*/ prior, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> extension, ::std::string fname, ::IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_mirror\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_mirror__status_5180;
    __Vtask_mirror__status_5180 = 0;
    ::IData/*31:0*/ __Vtask_mirror__status_5181;
    __Vtask_mirror__status_5181 = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::IData/*31:0*/ unnamedblk1089__DOT__rg_;
    unnamedblk1089__DOT__rg_ = 0;
    ::IData/*31:0*/ unnamedblk1089__DOT__rg___Vnext;
    unnamedblk1089__DOT__rg___Vnext = 0;
    ::CData/*0:0*/ unnamedblk1089__DOT__rg___Vmore;
    unnamedblk1089__DOT__rg___Vmore = 0;
    ::IData/*31:0*/ unnamedblk1090__DOT__blk_;
    unnamedblk1090__DOT__blk_ = 0;
    ::IData/*31:0*/ unnamedblk1090__DOT__blk___Vnext;
    unnamedblk1090__DOT__blk___Vnext = 0;
    ::CData/*0:0*/ unnamedblk1090__DOT__blk___Vmore;
    unnamedblk1090__DOT__blk___Vmore = 0;
    status = 0U;
    unnamedblk1089__DOT__rg___Vmore = (0U != this->__PVT__regs.first(unnamedblk1089__DOT__rg___Vnext));
    while (unnamedblk1089__DOT__rg___Vmore) {
        unnamedblk1089__DOT__rg_ = unnamedblk1089__DOT__rg___Vnext;
        unnamedblk1089__DOT__rg___Vmore = (0U != this->__PVT__regs.next(unnamedblk1089__DOT__rg___Vnext));
        co_await VL_NULL_CHECK(this->__PVT__regs.at(unnamedblk1089__DOT__rg_), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 2031)->__VnoInFunc_mirror(vlProcess, vlSymsp, __Vtask_mirror__status_5180, check, path, VlNull{}, parent, prior, extension, fname, lineno);
        status = __Vtask_mirror__status_5180;
    }
    unnamedblk1090__DOT__blk___Vmore = (0U != this->__PVT__blks.first(unnamedblk1090__DOT__blk___Vnext));
    while (unnamedblk1090__DOT__blk___Vmore) {
        unnamedblk1090__DOT__blk_ = unnamedblk1090__DOT__blk___Vnext;
        unnamedblk1090__DOT__blk___Vmore = (0U != this->__PVT__blks.next(unnamedblk1090__DOT__blk___Vnext));
        co_await VL_NULL_CHECK(this->__PVT__blks.at(unnamedblk1090__DOT__blk_), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 2039)->__VnoInFunc_mirror(vlSymsp, __Vtask_mirror__status_5181, check, path, parent, prior, extension, fname, lineno);
        status = __Vtask_mirror__status_5181;
    }
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_default_map(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> &get_default_map__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_default_map\n"); );
    // Body
    get_default_map__Vfuncrtn = this->__PVT__default_map;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_default_door(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_default_door__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_default_door\n"); );
    // Body
    {
        get_default_door__Vfuncrtn = 0U;
        if ((3U != this->__PVT__default_path)) {
            get_default_door__Vfuncrtn = this->__PVT__default_path;
            goto __Vlabel0;
        }
        if ((VlNull{} != this->__PVT__parent)) {
            VL_NULL_CHECK(this->__PVT__parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 2283)->__VnoInFunc_get_default_door(vlSymsp, get_default_door__Vfuncrtn);
            goto __Vlabel0;
        }
        get_default_door__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_backdoor(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ inherited, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_backdoor> &get_backdoor__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_backdoor\n"); );
    // Body
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk1102__DOT__blk;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_backdoor> unnamedblk1102__DOT__unnamedblk1103__DOT__bkdr;
    {
        if (((VlNull{} == this->__PVT__backdoor) & (::IData)(inherited))) {
            this->__VnoInFunc_get_parent(vlSymsp, unnamedblk1102__DOT__blk);
            while ((VlNull{} != unnamedblk1102__DOT__blk)) {
                VL_NULL_CHECK(unnamedblk1102__DOT__blk, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 2335)->__VnoInFunc_get_backdoor(vlSymsp, 1U, unnamedblk1102__DOT__unnamedblk1103__DOT__bkdr);
                if ((VlNull{} != unnamedblk1102__DOT__unnamedblk1103__DOT__bkdr)) {
                    get_backdoor__Vfuncrtn = unnamedblk1102__DOT__unnamedblk1103__DOT__bkdr;
                    goto __Vlabel0;
                }
                VL_NULL_CHECK(unnamedblk1102__DOT__blk, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 2341)->__VnoInFunc_get_parent(vlSymsp, unnamedblk1102__DOT__blk);
            }
        }
        get_backdoor__Vfuncrtn = this->__PVT__backdoor;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_has_hdl_path(Vtb_top__Syms* __restrict vlSymsp, ::std::string kind, ::CData/*0:0*/ &has_hdl_path__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_has_hdl_path\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0__exists;
    has_hdl_path__Vfuncrtn = 0U;
    if ((""s == kind)) {
        this->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
    }
    VL_NULL_CHECK(this->__PVT__hdl_paths_pool, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 2392)->__VnoInFunc_exists(vlSymsp, kind, __VlefCall_0__exists);
    has_hdl_path__Vfuncrtn = (1U & __VlefCall_0__exists);
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_full_hdl_path(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlQueue<::std::string> &paths, ::std::string kind, ::std::string separator) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_full_hdl_path\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1942;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_5182;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_5185;
    __Vtask_uvm_report_error__verbosity_5185 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_5187;
    __Vtask_uvm_report_error__line_5187 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_5189;
    __Vtask_uvm_report_error__report_enabled_checked_5189 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1943;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_5190;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCall_6__size;
    ::CData/*0:0*/ __VlefLogAnd_5;
    ::IData/*31:0*/ __VlefCall_4__get_report_action;
    ::IData/*31:0*/ __VlefCall_3__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_2__uvm_get_report_object;
    ::CData/*0:0*/ __VlefCall_1__has_hdl_path;
    ::CData/*0:0*/ __VlefCall_0__is_hdl_path_root;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk1107__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_queue__Tz2757cb3c> unnamedblk1108__DOT__hdl_paths;
    ::VlQueue<::std::string> unnamedblk1108__DOT__parent_paths;
    ::IData/*31:0*/ unnamedblk1108__DOT__unnamedblk1109__DOT__i;
    ::std::string unnamedblk1108__DOT__unnamedblk1109__DOT__unnamedblk1110__DOT__hdl_path;
    ::IData/*31:0*/ unnamedblk1108__DOT__unnamedblk1109__DOT__unnamedblk1110__DOT__unnamedblk1111__DOT__j;
    unnamedblk1108__DOT__unnamedblk1109__DOT__unnamedblk1110__DOT__unnamedblk1111__DOT__j = 0;
    {
        if ((""s == kind)) {
            this->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
        }
        paths.clear();
        this->__VnoInFunc_is_hdl_path_root(vlSymsp, kind, __VlefCall_0__is_hdl_path_root);
        if (__VlefCall_0__is_hdl_path_root) {
            if ((""s != this->__PVT__root_hdl_paths
                 .at(kind))) {
                paths.push_back(this->__PVT__root_hdl_paths
                                .at(kind));
            }
            goto __Vlabel0;
        }
        this->__VnoInFunc_has_hdl_path(vlSymsp, kind, __VlefCall_1__has_hdl_path);
        if ((1U & (~ (::IData)(__VlefCall_1__has_hdl_path)))) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1942);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1942;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_5182);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_5182;
            __VlefCall_2__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_2__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 2447)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk1107__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk1107__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 2447)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_3__get_report_verbosity_level);
            __VlefLogAnd_5 = VL_LTES_III(32, 0U, __VlefCall_3__get_report_verbosity_level);
            if (__VlefLogAnd_5) {
                VL_NULL_CHECK(unnamedblk1107__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 2447)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_4__get_report_action);
                __VlefLogAnd_5 = (0U != __VlefCall_4__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_5))) {
                __Vtask_uvm_report_error__report_enabled_checked_5189 = 1U;
                this->__Vtask_uvm_report_error__context_name_5188 = ""s;
                __Vtask_uvm_report_error__line_5187 = 0x0000098fU;
                this->__Vtask_uvm_report_error__filename_5186 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh"s;
                __Vtask_uvm_report_error__verbosity_5185 = 0U;
                this->__Vtask_uvm_report_error__message_5184 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("Block does not have hdl path defined for abstraction '"s, kind), "'"s));
                this->__Vtask_uvm_report_error__id_5183 = "RegModel"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1943);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1943;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_5190);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_5190;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_5183, this->__Vtask_uvm_report_error__message_5184, __Vtask_uvm_report_error__verbosity_5185, this->__Vtask_uvm_report_error__filename_5186, __Vtask_uvm_report_error__line_5187, this->__Vtask_uvm_report_error__context_name_5188, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_5189));
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__hdl_paths_pool, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 2452)->__VnoInFunc_get(vlProcess, vlSymsp, kind, unnamedblk1108__DOT__hdl_paths);
        unnamedblk1108__DOT__parent_paths.clear();
        unnamedblk1108__DOT__parent_paths.atDefault().clear();
        if ((VlNull{} != this->__PVT__parent)) {
            VL_NULL_CHECK(this->__PVT__parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 2457)->__VnoInFunc_get_full_hdl_path(vlProcess, vlSymsp, unnamedblk1108__DOT__parent_paths, kind, separator);
        }
        unnamedblk1108__DOT__unnamedblk1109__DOT__i = 0U;
        unnamedblk1108__DOT__unnamedblk1109__DOT__i = 0U;
        while (true) {
            VL_NULL_CHECK(unnamedblk1108__DOT__hdl_paths, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 2461)->__VnoInFunc_size(vlSymsp, __VlefCall_6__size);
            if (!(VL_LTS_III(32, unnamedblk1108__DOT__unnamedblk1109__DOT__i, __VlefCall_6__size))) break;
            {
                VL_NULL_CHECK(unnamedblk1108__DOT__hdl_paths, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 2462)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk1108__DOT__unnamedblk1109__DOT__i, unnamedblk1108__DOT__unnamedblk1109__DOT__unnamedblk1110__DOT__hdl_path);
                if ((0U == unnamedblk1108__DOT__parent_paths.size())) {
                    if ((""s != unnamedblk1108__DOT__unnamedblk1109__DOT__unnamedblk1110__DOT__hdl_path)) {
                        paths.push_back(unnamedblk1108__DOT__unnamedblk1109__DOT__unnamedblk1110__DOT__hdl_path);
                    }
                    goto __Vlabel1;
                }
                unnamedblk1108__DOT__unnamedblk1109__DOT__unnamedblk1110__DOT__unnamedblk1111__DOT__j = 0U;
                while (VL_LTS_III(32, unnamedblk1108__DOT__unnamedblk1109__DOT__unnamedblk1110__DOT__unnamedblk1111__DOT__j, unnamedblk1108__DOT__parent_paths.size())) {
                    if ((""s == unnamedblk1108__DOT__unnamedblk1109__DOT__unnamedblk1110__DOT__hdl_path)) {
                        paths.push_back(unnamedblk1108__DOT__parent_paths.at(unnamedblk1108__DOT__unnamedblk1109__DOT__unnamedblk1110__DOT__unnamedblk1111__DOT__j));
                    } else {
                        paths.push_back(VL_CONCATN_NNN(
                                                       VL_CONCATN_NNN(unnamedblk1108__DOT__parent_paths.at(unnamedblk1108__DOT__unnamedblk1109__DOT__unnamedblk1110__DOT__unnamedblk1111__DOT__j), separator), unnamedblk1108__DOT__unnamedblk1109__DOT__unnamedblk1110__DOT__hdl_path));
                    }
                    unnamedblk1108__DOT__unnamedblk1109__DOT__unnamedblk1110__DOT__unnamedblk1111__DOT__j 
                        = ((::IData)(1U) + unnamedblk1108__DOT__unnamedblk1109__DOT__unnamedblk1110__DOT__unnamedblk1111__DOT__j);
                }
                __Vlabel1: ;
            }
            unnamedblk1108__DOT__unnamedblk1109__DOT__i 
                = ((::IData)(1U) + unnamedblk1108__DOT__unnamedblk1109__DOT__i);
        }
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_default_hdl_path(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_default_hdl_path__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_default_hdl_path\n"); );
    // Body
    {
        get_default_hdl_path__Vfuncrtn = ""s;
        if (((""s == this->__PVT__default_hdl_path) 
             & (VlNull{} != this->__PVT__parent))) {
            VL_NULL_CHECK(this->__PVT__parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 2497)->__VnoInFunc_get_default_hdl_path(vlSymsp, get_default_hdl_path__Vfuncrtn);
            goto __Vlabel0;
        }
        get_default_hdl_path__Vfuncrtn = this->__PVT__default_hdl_path;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_is_hdl_path_root(Vtb_top__Syms* __restrict vlSymsp, ::std::string kind, ::CData/*0:0*/ &is_hdl_path_root__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_is_hdl_path_root\n"); );
    // Body
    is_hdl_path_root__Vfuncrtn = 0U;
    if ((""s == kind)) {
        this->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
    }
    is_hdl_path_root__Vfuncrtn = (1U & this->__PVT__root_hdl_paths.exists(kind));
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_do_print\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_4__get_name;
    ::std::string __VlefCall_3__get_name;
    ::std::string __VlefCall_2__get_name;
    ::std::string __VlefCall_1__get_name;
    ::std::string __VlefCall_0__get_name;
    ::IData/*31:0*/ unnamedblk1113__DOT__i;
    unnamedblk1113__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk1113__DOT__i__Vnext;
    unnamedblk1113__DOT__i__Vnext = 0;
    ::CData/*0:0*/ unnamedblk1113__DOT__i__Vmore;
    unnamedblk1113__DOT__i__Vmore = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> unnamedblk1113__DOT__unnamedblk1114__DOT__obj;
    ::IData/*31:0*/ unnamedblk1115__DOT__i;
    unnamedblk1115__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk1115__DOT__i__Vnext;
    unnamedblk1115__DOT__i__Vnext = 0;
    ::CData/*0:0*/ unnamedblk1115__DOT__i__Vmore;
    unnamedblk1115__DOT__i__Vmore = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> unnamedblk1115__DOT__unnamedblk1116__DOT__obj;
    ::IData/*31:0*/ unnamedblk1117__DOT__i;
    unnamedblk1117__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk1117__DOT__i__Vnext;
    unnamedblk1117__DOT__i__Vnext = 0;
    ::CData/*0:0*/ unnamedblk1117__DOT__i__Vmore;
    unnamedblk1117__DOT__i__Vmore = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> unnamedblk1117__DOT__unnamedblk1118__DOT__obj;
    ::IData/*31:0*/ unnamedblk1119__DOT__i;
    unnamedblk1119__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk1119__DOT__i__Vnext;
    unnamedblk1119__DOT__i__Vnext = 0;
    ::CData/*0:0*/ unnamedblk1119__DOT__i__Vmore;
    unnamedblk1119__DOT__i__Vmore = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> unnamedblk1119__DOT__unnamedblk1120__DOT__obj;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk1121__DOT__i;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk1121__DOT__i__Vnext;
    ::CData/*0:0*/ unnamedblk1121__DOT__i__Vmore;
    unnamedblk1121__DOT__i__Vmore = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk1121__DOT__unnamedblk1122__DOT__m;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> unnamedblk1121__DOT__unnamedblk1122__DOT__obj;
    Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
    unnamedblk1113__DOT__i__Vmore = (0U != this->__PVT__blks.first(unnamedblk1113__DOT__i__Vnext));
    while (unnamedblk1113__DOT__i__Vmore) {
        unnamedblk1113__DOT__i = unnamedblk1113__DOT__i__Vnext;
        unnamedblk1113__DOT__i__Vmore = (0U != this->__PVT__blks.next(unnamedblk1113__DOT__i__Vnext));
        unnamedblk1113__DOT__unnamedblk1114__DOT__obj 
            = this->__PVT__blks.at(unnamedblk1113__DOT__i);
        VL_NULL_CHECK(unnamedblk1113__DOT__unnamedblk1114__DOT__obj, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 2556)->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
        VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 2556)->__VnoInFunc_print_object(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_name), unnamedblk1113__DOT__unnamedblk1114__DOT__obj, 0x2eU);
    }
    unnamedblk1115__DOT__i__Vmore = (0U != this->__PVT__regs.first(unnamedblk1115__DOT__i__Vnext));
    while (unnamedblk1115__DOT__i__Vmore) {
        unnamedblk1115__DOT__i = unnamedblk1115__DOT__i__Vnext;
        unnamedblk1115__DOT__i__Vmore = (0U != this->__PVT__regs.next(unnamedblk1115__DOT__i__Vnext));
        unnamedblk1115__DOT__unnamedblk1116__DOT__obj 
            = this->__PVT__regs.at(unnamedblk1115__DOT__i);
        VL_NULL_CHECK(unnamedblk1115__DOT__unnamedblk1116__DOT__obj, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 2561)->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
        VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 2561)->__VnoInFunc_print_object(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__get_name), unnamedblk1115__DOT__unnamedblk1116__DOT__obj, 0x2eU);
    }
    unnamedblk1117__DOT__i__Vmore = (0U != this->__PVT__vregs.first(unnamedblk1117__DOT__i__Vnext));
    while (unnamedblk1117__DOT__i__Vmore) {
        unnamedblk1117__DOT__i = unnamedblk1117__DOT__i__Vnext;
        unnamedblk1117__DOT__i__Vmore = (0U != this->__PVT__vregs.next(unnamedblk1117__DOT__i__Vnext));
        unnamedblk1117__DOT__unnamedblk1118__DOT__obj 
            = this->__PVT__vregs.at(unnamedblk1117__DOT__i);
        VL_NULL_CHECK(unnamedblk1117__DOT__unnamedblk1118__DOT__obj, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 2566)->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
        VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 2566)->__VnoInFunc_print_object(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_2__get_name), unnamedblk1117__DOT__unnamedblk1118__DOT__obj, 0x2eU);
    }
    unnamedblk1119__DOT__i__Vmore = (0U != this->__PVT__mems.first(unnamedblk1119__DOT__i__Vnext));
    while (unnamedblk1119__DOT__i__Vmore) {
        unnamedblk1119__DOT__i = unnamedblk1119__DOT__i__Vnext;
        unnamedblk1119__DOT__i__Vmore = (0U != this->__PVT__mems.next(unnamedblk1119__DOT__i__Vnext));
        unnamedblk1119__DOT__unnamedblk1120__DOT__obj 
            = this->__PVT__mems.at(unnamedblk1119__DOT__i);
        VL_NULL_CHECK(unnamedblk1119__DOT__unnamedblk1120__DOT__obj, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 2571)->__VnoInFunc_get_name(vlSymsp, __VlefCall_3__get_name);
        VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 2571)->__VnoInFunc_print_object(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_3__get_name), unnamedblk1119__DOT__unnamedblk1120__DOT__obj, 0x2eU);
    }
    unnamedblk1121__DOT__i__Vmore = (0U != this->__PVT__maps.first(unnamedblk1121__DOT__i__Vnext));
    while (unnamedblk1121__DOT__i__Vmore) {
        unnamedblk1121__DOT__i = unnamedblk1121__DOT__i__Vnext;
        unnamedblk1121__DOT__i__Vmore = (0U != this->__PVT__maps.next(unnamedblk1121__DOT__i__Vnext));
        unnamedblk1121__DOT__unnamedblk1122__DOT__m 
            = unnamedblk1121__DOT__i;
        unnamedblk1121__DOT__unnamedblk1122__DOT__obj 
            = unnamedblk1121__DOT__unnamedblk1122__DOT__m;
        VL_NULL_CHECK(unnamedblk1121__DOT__unnamedblk1122__DOT__obj, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 2577)->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
        VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 2577)->__VnoInFunc_print_object(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_4__get_name), unnamedblk1121__DOT__unnamedblk1122__DOT__obj, 0x2eU);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_clone(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_clone\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1944;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_5191;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk1123__DOT___local_report_object_;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1944);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1944;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_5191);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
        = __Vtask_get_root__Vfuncout_5191;
    __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
    VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 2587)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk1123__DOT___local_report_object_);
    VL_NULL_CHECK(unnamedblk1123__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 2587)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 3U, "RegModel"s, __VlefCall_1__get_report_verbosity_level);
    __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
    if (__VlefLogAnd_3) {
        VL_NULL_CHECK(unnamedblk1123__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 2587)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 3U, "RegModel"s, __VlefCall_2__get_report_action);
        __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
    }
    if (VL_UNLIKELY((__VlefLogAnd_3))) {
        vlSymsp->vlInst.TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, "RegModel blocks cannot be cloned"s, 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh"s, 0x00000a1bU, ""s, 1U);
    }
    clone__Vfuncrtn = VlNull{};
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_do_copy\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1945;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_5192;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk1124__DOT___local_report_object_;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1945);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1945;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_5192);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
        = __Vtask_get_root__Vfuncout_5192;
    __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
    VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 2594)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk1124__DOT___local_report_object_);
    VL_NULL_CHECK(unnamedblk1124__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 2594)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 3U, "RegModel"s, __VlefCall_1__get_report_verbosity_level);
    __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
    if (__VlefLogAnd_3) {
        VL_NULL_CHECK(unnamedblk1124__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 2594)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 3U, "RegModel"s, __VlefCall_2__get_report_action);
        __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
    }
    if (VL_UNLIKELY((__VlefLogAnd_3))) {
        vlSymsp->vlInst.TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, "RegModel blocks cannot be copied"s, 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh"s, 0x00000a22U, ""s, 1U);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_do_compare(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> rhs, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_comparer> comparer, ::CData/*0:0*/ &do_compare__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_do_compare\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1946;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_5193;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_5196;
    __Vtask_uvm_report_warning__verbosity_5196 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_5198;
    __Vtask_uvm_report_warning__line_5198 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_5200;
    __Vtask_uvm_report_warning__report_enabled_checked_5200 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1947;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_5201;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk1125__DOT___local_report_object_;
    do_compare__Vfuncrtn = 0U;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1946);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1946;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_5193);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
        = __Vtask_get_root__Vfuncout_5193;
    __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
    VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 2602)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk1125__DOT___local_report_object_);
    VL_NULL_CHECK(unnamedblk1125__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 2602)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_1__get_report_verbosity_level);
    __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
    if (__VlefLogAnd_3) {
        VL_NULL_CHECK(unnamedblk1125__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 2602)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_2__get_report_action);
        __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
    }
    if (VL_UNLIKELY((__VlefLogAnd_3))) {
        __Vtask_uvm_report_warning__report_enabled_checked_5200 = 1U;
        this->__Vtask_uvm_report_warning__context_name_5199 = ""s;
        __Vtask_uvm_report_warning__line_5198 = 0x00000a2aU;
        this->__Vtask_uvm_report_warning__filename_5197 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh"s;
        __Vtask_uvm_report_warning__verbosity_5196 = 0U;
        this->__Vtask_uvm_report_warning__message_5195 = "RegModel blocks cannot be compared"s;
        this->__Vtask_uvm_report_warning__id_5194 = "RegModel"s;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1947);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1947;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_5201);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__Vfuncout_5201;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_5194, this->__Vtask_uvm_report_warning__message_5195, __Vtask_uvm_report_warning__verbosity_5196, this->__Vtask_uvm_report_warning__filename_5197, __Vtask_uvm_report_warning__line_5198, this->__Vtask_uvm_report_warning__context_name_5199, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_5200));
    }
    do_compare__Vfuncrtn = 0U;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_do_pack(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_do_pack\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1948;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_5202;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_5205;
    __Vtask_uvm_report_warning__verbosity_5205 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_5207;
    __Vtask_uvm_report_warning__line_5207 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_5209;
    __Vtask_uvm_report_warning__report_enabled_checked_5209 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1949;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_5210;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk1126__DOT___local_report_object_;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1948);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1948;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_5202);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
        = __Vtask_get_root__Vfuncout_5202;
    __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
    VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 2610)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk1126__DOT___local_report_object_);
    VL_NULL_CHECK(unnamedblk1126__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 2610)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_1__get_report_verbosity_level);
    __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
    if (__VlefLogAnd_3) {
        VL_NULL_CHECK(unnamedblk1126__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 2610)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_2__get_report_action);
        __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
    }
    if (VL_UNLIKELY((__VlefLogAnd_3))) {
        __Vtask_uvm_report_warning__report_enabled_checked_5209 = 1U;
        this->__Vtask_uvm_report_warning__context_name_5208 = ""s;
        __Vtask_uvm_report_warning__line_5207 = 0x00000a32U;
        this->__Vtask_uvm_report_warning__filename_5206 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh"s;
        __Vtask_uvm_report_warning__verbosity_5205 = 0U;
        this->__Vtask_uvm_report_warning__message_5204 = "RegModel blocks cannot be packed"s;
        this->__Vtask_uvm_report_warning__id_5203 = "RegModel"s;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1949);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1949;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_5210);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__Vfuncout_5210;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_5203, this->__Vtask_uvm_report_warning__message_5204, __Vtask_uvm_report_warning__verbosity_5205, this->__Vtask_uvm_report_warning__filename_5206, __Vtask_uvm_report_warning__line_5207, this->__Vtask_uvm_report_warning__context_name_5208, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_5209));
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_do_unpack(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_do_unpack\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1950;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_5211;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_5214;
    __Vtask_uvm_report_warning__verbosity_5214 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_5216;
    __Vtask_uvm_report_warning__line_5216 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_5218;
    __Vtask_uvm_report_warning__report_enabled_checked_5218 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1951;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_5219;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk1127__DOT___local_report_object_;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1950);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1950;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_5211);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
        = __Vtask_get_root__Vfuncout_5211;
    __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
    VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 2617)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk1127__DOT___local_report_object_);
    VL_NULL_CHECK(unnamedblk1127__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 2617)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_1__get_report_verbosity_level);
    __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
    if (__VlefLogAnd_3) {
        VL_NULL_CHECK(unnamedblk1127__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh", 2617)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_2__get_report_action);
        __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
    }
    if (VL_UNLIKELY((__VlefLogAnd_3))) {
        __Vtask_uvm_report_warning__report_enabled_checked_5218 = 1U;
        this->__Vtask_uvm_report_warning__context_name_5217 = ""s;
        __Vtask_uvm_report_warning__line_5216 = 0x00000a39U;
        this->__Vtask_uvm_report_warning__filename_5215 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_block.svh"s;
        __Vtask_uvm_report_warning__verbosity_5214 = 0U;
        this->__Vtask_uvm_report_warning__message_5213 = "RegModel blocks cannot be unpacked"s;
        this->__Vtask_uvm_report_warning__id_5212 = "RegModel"s;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1951);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1951;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_5219);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__Vfuncout_5219;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_5212, this->__Vtask_uvm_report_warning__message_5213, __Vtask_uvm_report_warning__verbosity_5214, this->__Vtask_uvm_report_warning__filename_5215, __Vtask_uvm_report_warning__line_5216, this->__Vtask_uvm_report_warning__context_name_5217, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_5218));
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_convert2string\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    convert2string__Vfuncrtn = ""s;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_block::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_block::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__maps.atDefault() = 0;
    __PVT__locked = 0;
    __PVT__has_cover = 0;
    __PVT__cover_on = 0;
    __PVT__lineno = 0;
}

Vtb_top_uvm_pkg__03a__03auvm_reg_block::~Vtb_top_uvm_pkg__03a__03auvm_reg_block() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_block::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_reg_block::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_block::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_reg_block::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_block::to_string_middle\n"); );
    // Body
    std::string out;
    out += "parent:" + VL_TO_STRING(__PVT__parent);
    out += ", m_name:" + VL_TO_STRING(__PVT__m_name);
    out += ", blks:" + VL_TO_STRING(__PVT__blks);
    out += ", regs:" + VL_TO_STRING(__PVT__regs);
    out += ", vregs:" + VL_TO_STRING(__PVT__vregs);
    out += ", mems:" + VL_TO_STRING(__PVT__mems);
    out += ", maps:" + VL_TO_STRING(__PVT__maps);
    out += ", default_path:" + VL_TO_STRING(__PVT__default_path);
    out += ", default_hdl_path:" + VL_TO_STRING(__PVT__default_hdl_path);
    out += ", backdoor:" + VL_TO_STRING(__PVT__backdoor);
    out += ", hdl_paths_pool:" + VL_TO_STRING(__PVT__hdl_paths_pool);
    out += ", root_hdl_paths:" + VL_TO_STRING(__PVT__root_hdl_paths);
    out += ", locked:" + VL_TO_STRING(__PVT__locked);
    out += ", has_cover:" + VL_TO_STRING(__PVT__has_cover);
    out += ", cover_on:" + VL_TO_STRING(__PVT__cover_on);
    out += ", fname:" + VL_TO_STRING(__PVT__fname);
    out += ", lineno:" + VL_TO_STRING(__PVT__lineno);
    out += ", m_uvm_lock_model_complete:" + VL_TO_STRING(__PVT__m_uvm_lock_model_complete);
    out += ", default_map:" + VL_TO_STRING(__PVT__default_map);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
