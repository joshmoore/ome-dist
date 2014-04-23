// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `ROMIO.ice'

#ifndef __omero__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_ROMIO_h__
#define __omero__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_ROMIO_h__

#include <Ice/LocalObjectF.h>
#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
#include <Ice/Proxy.h>
#include <Ice/Object.h>
#include <Ice/Outgoing.h>
#include <Ice/OutgoingAsync.h>
#include <Ice/Incoming.h>
#include <Ice/Direct.h>
#include <Ice/UserExceptionFactory.h>
#include <Ice/FactoryTable.h>
#include <Ice/StreamF.h>
#include <omero/ServerErrors.h>
#include <Ice/BuiltinSequences.h>
#include <Ice/UndefSysMacros.h>

#ifndef ICE_IGNORE_VERSION
#   if ICE_INT_VERSION / 100 != 303
#       error Ice version mismatch!
#   endif
#   if ICE_INT_VERSION % 100 > 50
#       error Beta header file detected
#   endif
#   if ICE_INT_VERSION % 100 < 1
#       error Ice patch level mismatch!
#   endif
#endif

namespace IceProxy
{

namespace omero
{

namespace romio
{

class RGBBuffer;

class RegionDef;

class PlaneDef;

class CodomainMapContext;

}

}

}

namespace omero
{

namespace romio
{

class RGBBuffer;
bool operator==(const RGBBuffer&, const RGBBuffer&);
bool operator<(const RGBBuffer&, const RGBBuffer&);

class RegionDef;
bool operator==(const RegionDef&, const RegionDef&);
bool operator<(const RegionDef&, const RegionDef&);

class PlaneDef;
bool operator==(const PlaneDef&, const PlaneDef&);
bool operator<(const PlaneDef&, const PlaneDef&);

class CodomainMapContext;
bool operator==(const CodomainMapContext&, const CodomainMapContext&);
bool operator<(const CodomainMapContext&, const CodomainMapContext&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::romio::RGBBuffer*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::romio::RGBBuffer*);

::Ice::Object* upCast(::omero::romio::RegionDef*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::romio::RegionDef*);

::Ice::Object* upCast(::omero::romio::PlaneDef*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::romio::PlaneDef*);

::Ice::Object* upCast(::omero::romio::CodomainMapContext*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::romio::CodomainMapContext*);

}

namespace omero
{

namespace romio
{

typedef ::IceInternal::Handle< ::omero::romio::RGBBuffer> RGBBufferPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::romio::RGBBuffer> RGBBufferPrx;

void __read(::IceInternal::BasicStream*, RGBBufferPrx&);
void __patch__RGBBufferPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::romio::RegionDef> RegionDefPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::romio::RegionDef> RegionDefPrx;

void __read(::IceInternal::BasicStream*, RegionDefPrx&);
void __patch__RegionDefPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::romio::PlaneDef> PlaneDefPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::romio::PlaneDef> PlaneDefPrx;

void __read(::IceInternal::BasicStream*, PlaneDefPrx&);
void __patch__PlaneDefPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::romio::CodomainMapContext> CodomainMapContextPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::romio::CodomainMapContext> CodomainMapContextPrx;

void __read(::IceInternal::BasicStream*, CodomainMapContextPrx&);
void __patch__CodomainMapContextPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace omero
{

namespace romio
{

typedef ::std::vector< ::Ice::ByteSeq> RGBBands;
void __writeRGBBands(::IceInternal::BasicStream*, const ::Ice::ByteSeq*, const ::Ice::ByteSeq*);
void __readRGBBands(::IceInternal::BasicStream*, RGBBands&);

const ::Ice::Int RedBand = 0;

const ::Ice::Int GreenBand = 1;

const ::Ice::Int BlueBand = 2;

const ::Ice::Int XY = 0;

const ::Ice::Int ZY = 1;

const ::Ice::Int XZ = 2;

}

}

namespace IceProxy
{

namespace omero
{

namespace romio
{

class RGBBuffer : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<RGBBuffer> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RGBBuffer*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<RGBBuffer*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RGBBuffer> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RGBBuffer*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<RGBBuffer*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RGBBuffer> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RGBBuffer*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<RGBBuffer*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RGBBuffer> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RGBBuffer*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<RGBBuffer*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RGBBuffer> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RGBBuffer*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<RGBBuffer*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RGBBuffer> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RGBBuffer*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<RGBBuffer*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RGBBuffer> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RGBBuffer*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<RGBBuffer*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RGBBuffer> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RGBBuffer*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<RGBBuffer*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RGBBuffer> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RGBBuffer*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<RGBBuffer*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RGBBuffer> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RGBBuffer*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<RGBBuffer*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RGBBuffer> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RGBBuffer*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<RGBBuffer*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RGBBuffer> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RGBBuffer*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<RGBBuffer*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RGBBuffer> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RGBBuffer*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<RGBBuffer*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RGBBuffer> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RGBBuffer*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<RGBBuffer*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RGBBuffer> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RGBBuffer*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<RGBBuffer*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RGBBuffer> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RGBBuffer*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<RGBBuffer*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RGBBuffer> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RGBBuffer*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<RGBBuffer*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RGBBuffer> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RGBBuffer*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<RGBBuffer*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RGBBuffer> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RGBBuffer*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<RGBBuffer*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class RegionDef : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<RegionDef> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RegionDef*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<RegionDef*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RegionDef> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RegionDef*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<RegionDef*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RegionDef> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RegionDef*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<RegionDef*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RegionDef> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RegionDef*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<RegionDef*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RegionDef> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RegionDef*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<RegionDef*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RegionDef> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RegionDef*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<RegionDef*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RegionDef> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RegionDef*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<RegionDef*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RegionDef> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RegionDef*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<RegionDef*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RegionDef> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RegionDef*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<RegionDef*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RegionDef> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RegionDef*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<RegionDef*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RegionDef> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RegionDef*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<RegionDef*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RegionDef> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RegionDef*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<RegionDef*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RegionDef> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RegionDef*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<RegionDef*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RegionDef> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RegionDef*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<RegionDef*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RegionDef> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RegionDef*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<RegionDef*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RegionDef> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RegionDef*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<RegionDef*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RegionDef> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RegionDef*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<RegionDef*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RegionDef> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RegionDef*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<RegionDef*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RegionDef> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RegionDef*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<RegionDef*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class PlaneDef : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<PlaneDef> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlaneDef*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<PlaneDef*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlaneDef> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlaneDef*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<PlaneDef*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlaneDef> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlaneDef*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<PlaneDef*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlaneDef> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlaneDef*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<PlaneDef*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlaneDef> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlaneDef*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<PlaneDef*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlaneDef> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlaneDef*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<PlaneDef*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlaneDef> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlaneDef*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<PlaneDef*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlaneDef> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlaneDef*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<PlaneDef*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlaneDef> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlaneDef*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<PlaneDef*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlaneDef> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlaneDef*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<PlaneDef*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlaneDef> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlaneDef*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<PlaneDef*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlaneDef> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlaneDef*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<PlaneDef*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlaneDef> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlaneDef*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<PlaneDef*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlaneDef> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlaneDef*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<PlaneDef*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlaneDef> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlaneDef*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<PlaneDef*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlaneDef> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlaneDef*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<PlaneDef*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlaneDef> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlaneDef*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<PlaneDef*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlaneDef> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlaneDef*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<PlaneDef*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlaneDef> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlaneDef*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<PlaneDef*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class CodomainMapContext : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<CodomainMapContext> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CodomainMapContext*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<CodomainMapContext*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CodomainMapContext> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CodomainMapContext*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<CodomainMapContext*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CodomainMapContext> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CodomainMapContext*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<CodomainMapContext*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CodomainMapContext> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CodomainMapContext*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<CodomainMapContext*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CodomainMapContext> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CodomainMapContext*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<CodomainMapContext*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CodomainMapContext> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CodomainMapContext*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<CodomainMapContext*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CodomainMapContext> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CodomainMapContext*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<CodomainMapContext*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CodomainMapContext> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CodomainMapContext*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<CodomainMapContext*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CodomainMapContext> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CodomainMapContext*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<CodomainMapContext*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CodomainMapContext> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CodomainMapContext*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<CodomainMapContext*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CodomainMapContext> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CodomainMapContext*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<CodomainMapContext*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CodomainMapContext> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CodomainMapContext*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<CodomainMapContext*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CodomainMapContext> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CodomainMapContext*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<CodomainMapContext*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CodomainMapContext> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CodomainMapContext*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<CodomainMapContext*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CodomainMapContext> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CodomainMapContext*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<CodomainMapContext*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CodomainMapContext> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CodomainMapContext*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<CodomainMapContext*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CodomainMapContext> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CodomainMapContext*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<CodomainMapContext*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CodomainMapContext> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CodomainMapContext*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<CodomainMapContext*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CodomainMapContext> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CodomainMapContext*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<CodomainMapContext*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

}

}

}

namespace IceDelegate
{

namespace omero
{

namespace romio
{

class RGBBuffer : virtual public ::IceDelegate::Ice::Object
{
public:
};

class RegionDef : virtual public ::IceDelegate::Ice::Object
{
public:
};

class PlaneDef : virtual public ::IceDelegate::Ice::Object
{
public:
};

class CodomainMapContext : virtual public ::IceDelegate::Ice::Object
{
public:
};

}

}

}

namespace IceDelegateM
{

namespace omero
{

namespace romio
{

class RGBBuffer : virtual public ::IceDelegate::omero::romio::RGBBuffer,
                  virtual public ::IceDelegateM::Ice::Object
{
public:
};

class RegionDef : virtual public ::IceDelegate::omero::romio::RegionDef,
                  virtual public ::IceDelegateM::Ice::Object
{
public:
};

class PlaneDef : virtual public ::IceDelegate::omero::romio::PlaneDef,
                 virtual public ::IceDelegateM::Ice::Object
{
public:
};

class CodomainMapContext : virtual public ::IceDelegate::omero::romio::CodomainMapContext,
                           virtual public ::IceDelegateM::Ice::Object
{
public:
};

}

}

}

namespace IceDelegateD
{

namespace omero
{

namespace romio
{

class RGBBuffer : virtual public ::IceDelegate::omero::romio::RGBBuffer,
                  virtual public ::IceDelegateD::Ice::Object
{
public:
};

class RegionDef : virtual public ::IceDelegate::omero::romio::RegionDef,
                  virtual public ::IceDelegateD::Ice::Object
{
public:
};

class PlaneDef : virtual public ::IceDelegate::omero::romio::PlaneDef,
                 virtual public ::IceDelegateD::Ice::Object
{
public:
};

class CodomainMapContext : virtual public ::IceDelegate::omero::romio::CodomainMapContext,
                           virtual public ::IceDelegateD::Ice::Object
{
public:
};

}

}

}

namespace omero
{

namespace romio
{

class RGBBuffer : virtual public ::Ice::Object
{
public:

    typedef RGBBufferPrx ProxyType;
    typedef RGBBufferPtr PointerType;
    
    RGBBuffer() {}
    RGBBuffer(const ::omero::romio::RGBBands&, ::Ice::Int, ::Ice::Int);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();


    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

    static const ::Ice::ObjectFactoryPtr& ice_factory();

protected:

    virtual ~RGBBuffer() {}

    friend class RGBBuffer__staticInit;

public:

    ::omero::romio::RGBBands bands;

    ::Ice::Int sizeX1;

    ::Ice::Int sizeX2;
};

class RGBBuffer__staticInit
{
public:

    ::omero::romio::RGBBuffer _init;
};

static RGBBuffer__staticInit _RGBBuffer_init;

class RegionDef : virtual public ::Ice::Object
{
public:

    typedef RegionDefPrx ProxyType;
    typedef RegionDefPtr PointerType;
    
    RegionDef() {}
    RegionDef(::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();


    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

    static const ::Ice::ObjectFactoryPtr& ice_factory();

protected:

    virtual ~RegionDef() {}

public:

    ::Ice::Int x;

    ::Ice::Int y;

    ::Ice::Int width;

    ::Ice::Int height;
};

class PlaneDef : virtual public ::Ice::Object
{
public:

    typedef PlaneDefPrx ProxyType;
    typedef PlaneDefPtr PointerType;
    
    PlaneDef() {}
    PlaneDef(::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::omero::romio::RegionDefPtr&, ::Ice::Int);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void __incRef();
    virtual void __decRef();
    virtual void __addObject(::IceInternal::GCCountMap&);
    virtual bool __usesClasses();
    virtual void __gcReachable(::IceInternal::GCCountMap&) const;
    virtual void __gcClear();

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

    static const ::Ice::ObjectFactoryPtr& ice_factory();

protected:

    virtual ~PlaneDef() {}

public:

    ::Ice::Int slice;

    ::Ice::Int x;

    ::Ice::Int y;

    ::Ice::Int z;

    ::Ice::Int t;

    ::omero::romio::RegionDefPtr region;

    ::Ice::Int stride;
};

class CodomainMapContext : virtual public ::Ice::Object
{
public:

    typedef CodomainMapContextPrx ProxyType;
    typedef CodomainMapContextPtr PointerType;
    
    CodomainMapContext() {}
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

    static const ::Ice::ObjectFactoryPtr& ice_factory();

protected:

    virtual ~CodomainMapContext() {}
};

}

}

#endif
