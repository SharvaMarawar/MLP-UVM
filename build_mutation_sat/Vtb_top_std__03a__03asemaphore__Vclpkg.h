// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_STD__03A__03ASEMAPHORE__VCLPKG_H_
#define VERILATED_VTB_TOP_STD__03A__03ASEMAPHORE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "Vtb_top_std__03a__03asemaphore__Vclpkg.h"
class Vtb_top_std__03a__03aprocess;


class Vtb_top__Syms;
struct Vtb_top_procKeys__struct__0 {
    ::VlClassRef<Vtb_top_std__03a__03aprocess> __PVT__proc;
    ::IData/*31:0*/ __PVT__reqKeys;

    bool operator==(const Vtb_top_procKeys__struct__0& rhs) const {
        return __PVT__proc == rhs.__PVT__proc
            && __PVT__reqKeys == rhs.__PVT__reqKeys;
    }
    bool operator!=(const Vtb_top_procKeys__struct__0& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const Vtb_top_procKeys__struct__0& rhs) const {
        if (__PVT__proc < rhs.__PVT__proc) return true;
        if (rhs.__PVT__proc < __PVT__proc) return false;
        if (__PVT__reqKeys < rhs.__PVT__reqKeys) return true;
        if (rhs.__PVT__reqKeys < __PVT__reqKeys) return false;
        return false;
    }
};
template <>
struct VlIsCustomStruct<Vtb_top_procKeys__struct__0> : public std::true_type {};

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_std__03a__03asemaphore__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_std__03a__03asemaphore__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_std__03a__03asemaphore__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_std__03a__03asemaphore__Vclpkg);
    VL_UNMOVABLE(Vtb_top_std__03a__03asemaphore__Vclpkg);

    // INTERNAL METHODS
};


class Vtb_top__Syms;

class Vtb_top_std__03a__03asemaphore : public virtual VlClass {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::IData/*31:0*/ __PVT__m_keyCount;

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::VlQueue<Vtb_top_procKeys__struct__0> __PVT__m_queue;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "std::semaphore"; }
    VlClass* clone() const { return new Vtb_top_std__03a__03asemaphore(*this); }
    void __VnoInFunc_dropKilled(Vtb_top__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_get(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ keyCount);
    void __VnoInFunc_put(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ keyCount);
    void __VnoInFunc_try_get(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ keyCount, ::IData/*31:0*/ &try_get__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_std__03a__03asemaphore() = default;
    void init(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ keyCount);
    ~Vtb_top_std__03a__03asemaphore() {}
};


#endif  // guard
