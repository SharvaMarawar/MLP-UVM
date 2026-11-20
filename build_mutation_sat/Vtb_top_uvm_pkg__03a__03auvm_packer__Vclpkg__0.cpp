// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi6438d778> __Vfunc_get__Vfuncout_889;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pi6438d778__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_889);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_889;
}

void Vtb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_packer> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_packer, vlProcess, vlSymsp, ""s);
    } else {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_packer, vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vtb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_packer"s;
}

void Vtb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_enough_bits(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ needed, ::std::string id, ::CData/*0:0*/ &enough_bits__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_enough_bits\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_1508;
    __Vtask_uvm_report_error__verbosity_1508 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_1510;
    __Vtask_uvm_report_error__line_1510 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_1512;
    __Vtask_uvm_report_error__report_enabled_checked_1512 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_890;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1513;
    // Body
    VlProcess::currentp(vlProcess.get());
    {
        enough_bits__Vfuncrtn = 0U;
        if (VL_UNLIKELY((VL_LTS_III(32, (this->__PVT__m_pack_iter 
                                         - this->__PVT__m_unpack_iter), needed)))) {
            __Vtask_uvm_report_error__report_enabled_checked_1512 = 0U;
            this->__Vtask_uvm_report_error__context_name_1511 = ""s;
            __Vtask_uvm_report_error__line_1510 = 0U;
            this->__Vtask_uvm_report_error__filename_1509 = ""s;
            __Vtask_uvm_report_error__verbosity_1508 = 0U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_error__message_1507
                          ,"%0d bits needed to unpack %0s, yet only %0d available.",3
                          , '~',32,needed, 'S',&(id)
                          , '~',32,(this->__PVT__m_pack_iter 
                                    - this->__PVT__m_unpack_iter));
            this->__Vtask_uvm_report_error__id_1506 = "PCKSZ"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_890);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__Vfuncout_890;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1513);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__Vfuncout_1513;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_1506, this->__Vtask_uvm_report_error__message_1507, __Vtask_uvm_report_error__verbosity_1508, this->__Vtask_uvm_report_error__filename_1509, __Vtask_uvm_report_error__line_1510, this->__Vtask_uvm_report_error__context_name_1511, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_1512));
            enough_bits__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        enough_bits__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

extern const ::VlWide<1024>/*32767:0*/ Vtb_top__ConstPool__CONST_2;

void Vtb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_flush(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_flush\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__PVT__m_pack_iter = 0x00000040U;
    this->__PVT__m_unpack_iter = 0x00000040U;
    VL_ASSIGN_W(32768, this->__PVT__m_bits, Vtb_top__ConstPool__CONST_2);
    this->__PVT__m_object_references.clear();
    this->__PVT__m_object_references.atWrite(0U) = VlNull{};
    this->__PVT__m_factory = VlNull{};
    Vtb_top_uvm_pkg__03a__03auvm_policy::__VnoInFunc_flush(vlProcess, vlSymsp);
}

void Vtb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_pack_field_int(Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ value, ::IData/*31:0*/ size) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_pack_field_int\n"); );
    // Body
    ::IData/*31:0*/ unnamedblk72__DOT__i;
    unnamedblk72__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk72__DOT__i, size)) {
        this->__PVT__m_bits[(0x000003ffU & ((this->__PVT__m_pack_iter 
                                             + unnamedblk72__DOT__i) 
                                            >> 5U))] 
            = (((~ ((::IData)(1U) << (0x0000001fU & 
                                      (this->__PVT__m_pack_iter 
                                       + unnamedblk72__DOT__i)))) 
                & this->__PVT__m_bits[(0x000003ffU 
                                       & ((this->__PVT__m_pack_iter 
                                           + unnamedblk72__DOT__i) 
                                          >> 5U))]) 
               | ((1U & (::IData)((value >> (0x0000003fU 
                                             & unnamedblk72__DOT__i)))) 
                  << (0x0000001fU & (this->__PVT__m_pack_iter 
                                     + unnamedblk72__DOT__i))));
        unnamedblk72__DOT__i = ((::IData)(1U) + unnamedblk72__DOT__i);
    }
    this->__PVT__m_pack_iter = (this->__PVT__m_pack_iter 
                                + size);
}

void Vtb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_pack_string(Vtb_top__Syms* __restrict vlSymsp, ::std::string value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_pack_string\n"); );
    // Body
    ::IData/*31:0*/ unnamedblk81__DOT__index;
    unnamedblk81__DOT__index = 0;
    unnamedblk81__DOT__index = 0U;
    while (VL_LTS_III(32, unnamedblk81__DOT__index, 
                      VL_LEN_IN(value))) {
        VL_ASSIGNSEL_WI(32768, 8, (0x00007fffU & this->__PVT__m_pack_iter), this->__PVT__m_bits, 
                        VL_GETC_N(value,unnamedblk81__DOT__index));
        this->__PVT__m_pack_iter = ((::IData)(8U) + this->__PVT__m_pack_iter);
        unnamedblk81__DOT__index = ((::IData)(1U) + unnamedblk81__DOT__index);
    }
    VL_ASSIGNSEL_WI(32768, 8, (0x00007fffU & this->__PVT__m_pack_iter), this->__PVT__m_bits, 0U);
    this->__PVT__m_pack_iter = ((::IData)(8U) + this->__PVT__m_pack_iter);
}

void Vtb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_unpack_field_int(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ size, ::QData/*63:0*/ &unpack_field_int__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_unpack_field_int\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefCall_0__enough_bits;
    ::IData/*31:0*/ unnamedblk86__DOT__i;
    unpack_field_int__Vfuncrtn = 0ULL;
    this->__VnoInFunc_enough_bits(vlProcess, vlSymsp, size, "integral"s, __VlefCall_0__enough_bits);
    if (__VlefCall_0__enough_bits) {
        this->__PVT__m_unpack_iter = (this->__PVT__m_unpack_iter 
                                      + size);
        unnamedblk86__DOT__i = 0U;
        unnamedblk86__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk86__DOT__i, size)) {
            unpack_field_int__Vfuncrtn = (((~ (1ULL 
                                               << (0x0000003fU 
                                                   & unnamedblk86__DOT__i))) 
                                           & unpack_field_int__Vfuncrtn) 
                                          | ((::QData)((::IData)(
                                                                 (1U 
                                                                  & (this->__PVT__m_bits
                                                                     [
                                                                     (0x000003ffU 
                                                                      & (((this->__PVT__m_unpack_iter 
                                                                           - size) 
                                                                          + unnamedblk86__DOT__i) 
                                                                         >> 5U))] 
                                                                     >> 
                                                                     (0x0000001fU 
                                                                      & ((this->__PVT__m_unpack_iter 
                                                                          - size) 
                                                                         + unnamedblk86__DOT__i)))))) 
                                             << (0x0000003fU 
                                                 & unnamedblk86__DOT__i)));
            unnamedblk86__DOT__i = ((::IData)(1U) + unnamedblk86__DOT__i);
        }
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_unpack_bits(Vtb_top__Syms* __restrict vlSymsp, ::VlQueue<::CData/*0:0*/> &value, ::IData/*31:0*/ size) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_unpack_bits\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_891;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1514;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_1517;
    __Vtask_uvm_report_error__verbosity_1517 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_1519;
    __Vtask_uvm_report_error__line_1519 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_1521;
    __Vtask_uvm_report_error__report_enabled_checked_1521 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_892;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1522;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefCall_4__enough_bits;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk87__DOT___local_report_object_;
    ::IData/*31:0*/ unnamedblk88__DOT__i;
    {
        if (VL_GTS_III(32, 0U, size)) {
            size = value.size();
        }
        if (VL_GTS_III(32, size, value.size())) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_891);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_891;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1514);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_1514;
            __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_packer.svh", 901)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk87__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk87__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_packer.svh", 901)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "UVM/BASE/PACKER/BAD_SIZE"s, __VlefCall_1__get_report_verbosity_level);
            __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
            if (__VlefLogAnd_3) {
                VL_NULL_CHECK(unnamedblk87__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_packer.svh", 901)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "UVM/BASE/PACKER/BAD_SIZE"s, __VlefCall_2__get_report_action);
                __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_3))) {
                __Vtask_uvm_report_error__report_enabled_checked_1521 = 1U;
                this->__Vtask_uvm_report_error__context_name_1520 = ""s;
                __Vtask_uvm_report_error__line_1519 = 0x00000385U;
                this->__Vtask_uvm_report_error__filename_1518 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_packer.svh"s;
                __Vtask_uvm_report_error__verbosity_1517 = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__message_1516
                              ,"unpack_bits called with size '%0d', which exceeds value.size() of '%0d'",2
                              , '~',32,size, '~',32,value.size());
                this->__Vtask_uvm_report_error__id_1515 = "UVM/BASE/PACKER/BAD_SIZE"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_892);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_892;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1522);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_1522;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_1515, this->__Vtask_uvm_report_error__message_1516, __Vtask_uvm_report_error__verbosity_1517, this->__Vtask_uvm_report_error__filename_1518, __Vtask_uvm_report_error__line_1519, this->__Vtask_uvm_report_error__context_name_1520, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_1521));
            }
            goto __Vlabel0;
        }
        this->__VnoInFunc_enough_bits(vlProcess, vlSymsp, size, "integral"s, __VlefCall_4__enough_bits);
        if (__VlefCall_4__enough_bits) {
            this->__PVT__m_unpack_iter = (this->__PVT__m_unpack_iter 
                                          + size);
            unnamedblk88__DOT__i = 0U;
            unnamedblk88__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk88__DOT__i, size)) {
                value.atWrite(unnamedblk88__DOT__i) 
                    = (1U & (this->__PVT__m_bits[(0x000003ffU 
                                                  & (((this->__PVT__m_unpack_iter 
                                                       - size) 
                                                      + unnamedblk88__DOT__i) 
                                                     >> 5U))] 
                             >> (0x0000001fU & ((this->__PVT__m_unpack_iter 
                                                 - size) 
                                                + unnamedblk88__DOT__i))));
                unnamedblk88__DOT__i = ((::IData)(1U) 
                                        + unnamedblk88__DOT__i);
            }
        }
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_unpack_string(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string &unpack_string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_unpack_string\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefCall_1__enough_bits;
    ::CData/*0:0*/ __VlefCall_0__enough_bits;
    unpack_string__Vfuncrtn = ""s;
    ::IData/*31:0*/ i;
    i = 0U;
    while (true) {
        this->__VnoInFunc_enough_bits(vlProcess, vlSymsp, 8U, "string"s, __VlefCall_0__enough_bits);
        if (!(((::IData)(__VlefCall_0__enough_bits) 
               && (0U != (0x000000ffU & (((0U == (0x0000001fU 
                                                  & this->__PVT__m_unpack_iter))
                                           ? 0U : (this->__PVT__m_bits
                                                   [
                                                   (((::IData)(7U) 
                                                     + 
                                                     (0x00007fffU 
                                                      & this->__PVT__m_unpack_iter)) 
                                                    >> 5U)] 
                                                   << 
                                                   ((::IData)(0x00000020U) 
                                                    - 
                                                    (0x0000001fU 
                                                     & this->__PVT__m_unpack_iter)))) 
                                         | (this->__PVT__m_bits
                                            [(0x000003ffU 
                                              & (this->__PVT__m_unpack_iter 
                                                 >> 5U))] 
                                            >> (0x0000001fU 
                                                & this->__PVT__m_unpack_iter)))))))) break;
        unpack_string__Vfuncrtn = VL_CONCATN_NNN(unpack_string__Vfuncrtn, " "s);
        unpack_string__Vfuncrtn = VL_PUTC_N(unpack_string__Vfuncrtn, i, 
                                            (0x000000ffU 
                                             & (((0U 
                                                  == 
                                                  (0x0000001fU 
                                                   & this->__PVT__m_unpack_iter))
                                                  ? 0U
                                                  : 
                                                 (this->__PVT__m_bits
                                                  [
                                                  (((::IData)(7U) 
                                                    + 
                                                    (0x00007fffU 
                                                     & this->__PVT__m_unpack_iter)) 
                                                   >> 5U)] 
                                                  << 
                                                  ((::IData)(0x00000020U) 
                                                   - 
                                                   (0x0000001fU 
                                                    & this->__PVT__m_unpack_iter)))) 
                                                | (this->__PVT__m_bits
                                                   [
                                                   (0x000003ffU 
                                                    & (this->__PVT__m_unpack_iter 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x0000001fU 
                                                    & this->__PVT__m_unpack_iter)))));
        this->__PVT__m_unpack_iter = ((::IData)(8U) 
                                      + this->__PVT__m_unpack_iter);
        i = ((::IData)(1U) + i);
    }
    this->__VnoInFunc_enough_bits(vlProcess, vlSymsp, 8U, "string"s, __VlefCall_1__enough_bits);
    if (__VlefCall_1__enough_bits) {
        this->__PVT__m_unpack_iter = ((::IData)(8U) 
                                      + this->__PVT__m_unpack_iter);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_packer::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_uvm_pkg__03a__03auvm_policy::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_packer::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    this->__PVT__byte_size = 8U;
    this->__PVT__word_size = 0x00000010U;
    this->__PVT__physical = 1U;
    this->__PVT__abstract = 1U;
    /*super.new*/;
    this->__VnoInFunc_flush(vlProcess, vlSymsp);
}

void Vtb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_packer::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_packer::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_pack_iter = 0;
    __PVT__m_unpack_iter = 0;
    __PVT__reverse_order = 0;
    __PVT__nopack = 0;
    VL_ZERO_W(32768, __PVT__m_bits);
}

Vtb_top_uvm_pkg__03a__03auvm_packer::~Vtb_top_uvm_pkg__03a__03auvm_packer() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_packer::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_packer::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_packer::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_packer::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_packer::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_factory:" + VL_TO_STRING(__PVT__m_factory);
    out += ", m_object_references:" + VL_TO_STRING(__PVT__m_object_references);
    out += ", m_pack_iter:" + VL_TO_STRING(__PVT__m_pack_iter);
    out += ", m_unpack_iter:" + VL_TO_STRING(__PVT__m_unpack_iter);
    out += ", reverse_order:" + VL_TO_STRING(__PVT__reverse_order);
    out += ", byte_size:" + VL_TO_STRING(__PVT__byte_size);
    out += ", word_size:" + VL_TO_STRING(__PVT__word_size);
    out += ", nopack:" + VL_TO_STRING(__PVT__nopack);
    out += ", m_bits:" + VL_TO_STRING_W(1024, __PVT__m_bits);
    out += ", physical:" + VL_TO_STRING(__PVT__physical);
    out += ", abstract:" + VL_TO_STRING(__PVT__abstract);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_policy::to_string_middle();
    return (out);
}
