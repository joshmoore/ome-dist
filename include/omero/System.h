// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `System.ice'

#ifndef __omero__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_System_h__
#define __omero__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_System_h__

#include <Ice/LocalObjectF.h>
#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
#include <Ice/Proxy.h>
#include <Ice/Object.h>
#include <Ice/Outgoing.h>
#include <Ice/Incoming.h>
#include <Ice/Direct.h>
#include <Ice/FactoryTable.h>
#include <Ice/StreamF.h>
#include <omero/RTypes.h>
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

namespace sys
{

class EventContext;

class Filter;

class Options;

class Parameters;

class Principal;

class Roles;

}

}

}

namespace omero
{

namespace sys
{

class EventContext;
bool operator==(const EventContext&, const EventContext&);
bool operator<(const EventContext&, const EventContext&);

class Filter;
bool operator==(const Filter&, const Filter&);
bool operator<(const Filter&, const Filter&);

class Options;
bool operator==(const Options&, const Options&);
bool operator<(const Options&, const Options&);

class Parameters;
bool operator==(const Parameters&, const Parameters&);
bool operator<(const Parameters&, const Parameters&);

class Principal;
bool operator==(const Principal&, const Principal&);
bool operator<(const Principal&, const Principal&);

class Roles;
bool operator==(const Roles&, const Roles&);
bool operator<(const Roles&, const Roles&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::sys::EventContext*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::sys::EventContext*);

::Ice::Object* upCast(::omero::sys::Filter*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::sys::Filter*);

::Ice::Object* upCast(::omero::sys::Options*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::sys::Options*);

::Ice::Object* upCast(::omero::sys::Parameters*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::sys::Parameters*);

::Ice::Object* upCast(::omero::sys::Principal*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::sys::Principal*);

::Ice::Object* upCast(::omero::sys::Roles*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::sys::Roles*);

}

namespace omero
{

namespace sys
{

typedef ::IceInternal::Handle< ::omero::sys::EventContext> EventContextPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::sys::EventContext> EventContextPrx;

void __read(::IceInternal::BasicStream*, EventContextPrx&);
void __patch__EventContextPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::sys::Filter> FilterPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::sys::Filter> FilterPrx;

void __read(::IceInternal::BasicStream*, FilterPrx&);
void __patch__FilterPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::sys::Options> OptionsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::sys::Options> OptionsPrx;

void __read(::IceInternal::BasicStream*, OptionsPrx&);
void __patch__OptionsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::sys::Parameters> ParametersPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::sys::Parameters> ParametersPrx;

void __read(::IceInternal::BasicStream*, ParametersPrx&);
void __patch__ParametersPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::sys::Principal> PrincipalPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::sys::Principal> PrincipalPrx;

void __read(::IceInternal::BasicStream*, PrincipalPrx&);
void __patch__PrincipalPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::sys::Roles> RolesPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::sys::Roles> RolesPrx;

void __read(::IceInternal::BasicStream*, RolesPrx&);
void __patch__RolesPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace omero
{

namespace sys
{

typedef ::std::vector< ::Ice::Long> LongList;

typedef ::std::vector< ::Ice::Int> IntList;

typedef ::std::map< ::Ice::Long, ::Ice::Long> CountMap;
void __writeCountMap(::IceInternal::BasicStream*, const CountMap&);
void __readCountMap(::IceInternal::BasicStream*, CountMap&);

typedef ::std::map< ::std::string, ::omero::RTypePtr> ParamMap;
void __writeParamMap(::IceInternal::BasicStream*, const ParamMap&);
void __readParamMap(::IceInternal::BasicStream*, ParamMap&);

typedef ::std::map< ::Ice::Long, ::Ice::ByteSeq> IdByteMap;
void __writeIdByteMap(::IceInternal::BasicStream*, const IdByteMap&);
void __readIdByteMap(::IceInternal::BasicStream*, IdByteMap&);

}

}

namespace IceProxy
{

namespace omero
{

namespace sys
{

class EventContext : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<EventContext> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<EventContext*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<EventContext*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<EventContext> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<EventContext*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<EventContext*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<EventContext> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<EventContext*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<EventContext*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<EventContext> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<EventContext*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<EventContext*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<EventContext> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<EventContext*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<EventContext*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<EventContext> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<EventContext*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<EventContext*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<EventContext> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<EventContext*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<EventContext*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<EventContext> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<EventContext*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<EventContext*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<EventContext> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<EventContext*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<EventContext*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<EventContext> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<EventContext*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<EventContext*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<EventContext> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<EventContext*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<EventContext*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<EventContext> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<EventContext*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<EventContext*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<EventContext> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<EventContext*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<EventContext*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<EventContext> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<EventContext*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<EventContext*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<EventContext> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<EventContext*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<EventContext*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<EventContext> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<EventContext*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<EventContext*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<EventContext> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<EventContext*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<EventContext*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<EventContext> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<EventContext*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<EventContext*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<EventContext> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<EventContext*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<EventContext*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class Filter : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<Filter> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Filter*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Filter*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Filter> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Filter*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Filter*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Filter> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Filter*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Filter*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Filter> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Filter*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Filter*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Filter> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Filter*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Filter*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Filter> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Filter*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Filter*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Filter> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Filter*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Filter*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Filter> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Filter*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Filter*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Filter> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Filter*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Filter*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Filter> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Filter*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Filter*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Filter> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Filter*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Filter*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Filter> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Filter*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Filter*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Filter> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Filter*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Filter*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Filter> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Filter*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Filter*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Filter> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Filter*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Filter*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Filter> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Filter*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Filter*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Filter> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Filter*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Filter*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Filter> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Filter*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Filter*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Filter> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Filter*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Filter*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class Options : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<Options> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Options*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Options*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Options> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Options*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Options*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Options> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Options*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Options*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Options> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Options*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Options*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Options> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Options*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Options*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Options> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Options*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Options*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Options> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Options*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Options*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Options> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Options*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Options*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Options> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Options*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Options*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Options> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Options*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Options*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Options> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Options*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Options*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Options> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Options*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Options*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Options> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Options*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Options*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Options> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Options*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Options*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Options> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Options*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Options*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Options> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Options*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Options*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Options> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Options*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Options*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Options> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Options*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Options*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Options> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Options*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Options*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class Parameters : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<Parameters> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Parameters*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Parameters*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Parameters> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Parameters*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Parameters*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Parameters> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Parameters*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Parameters*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Parameters> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Parameters*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Parameters*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Parameters> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Parameters*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Parameters*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Parameters> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Parameters*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Parameters*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Parameters> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Parameters*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Parameters*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Parameters> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Parameters*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Parameters*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Parameters> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Parameters*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Parameters*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Parameters> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Parameters*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Parameters*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Parameters> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Parameters*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Parameters*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Parameters> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Parameters*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Parameters*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Parameters> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Parameters*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Parameters*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Parameters> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Parameters*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Parameters*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Parameters> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Parameters*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Parameters*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Parameters> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Parameters*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Parameters*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Parameters> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Parameters*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Parameters*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Parameters> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Parameters*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Parameters*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Parameters> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Parameters*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Parameters*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class Principal : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<Principal> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Principal*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Principal*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Principal> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Principal*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Principal*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Principal> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Principal*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Principal*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Principal> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Principal*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Principal*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Principal> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Principal*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Principal*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Principal> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Principal*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Principal*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Principal> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Principal*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Principal*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Principal> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Principal*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Principal*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Principal> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Principal*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Principal*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Principal> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Principal*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Principal*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Principal> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Principal*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Principal*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Principal> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Principal*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Principal*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Principal> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Principal*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Principal*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Principal> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Principal*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Principal*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Principal> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Principal*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Principal*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Principal> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Principal*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Principal*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Principal> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Principal*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Principal*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Principal> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Principal*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Principal*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Principal> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Principal*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Principal*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class Roles : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<Roles> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Roles*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Roles*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Roles> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Roles*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Roles*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Roles> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Roles*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Roles*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Roles> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Roles*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Roles*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Roles> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Roles*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Roles*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Roles> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Roles*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Roles*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Roles> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Roles*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Roles*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Roles> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Roles*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Roles*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Roles> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Roles*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Roles*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Roles> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Roles*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Roles*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Roles> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Roles*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Roles*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Roles> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Roles*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Roles*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Roles> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Roles*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Roles*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Roles> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Roles*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Roles*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Roles> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Roles*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Roles*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Roles> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Roles*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Roles*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Roles> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Roles*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Roles*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Roles> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Roles*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Roles*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Roles> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Roles*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Roles*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

namespace sys
{

class EventContext : virtual public ::IceDelegate::Ice::Object
{
public:
};

class Filter : virtual public ::IceDelegate::Ice::Object
{
public:
};

class Options : virtual public ::IceDelegate::Ice::Object
{
public:
};

class Parameters : virtual public ::IceDelegate::Ice::Object
{
public:
};

class Principal : virtual public ::IceDelegate::Ice::Object
{
public:
};

class Roles : virtual public ::IceDelegate::Ice::Object
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

namespace sys
{

class EventContext : virtual public ::IceDelegate::omero::sys::EventContext,
                     virtual public ::IceDelegateM::Ice::Object
{
public:
};

class Filter : virtual public ::IceDelegate::omero::sys::Filter,
               virtual public ::IceDelegateM::Ice::Object
{
public:
};

class Options : virtual public ::IceDelegate::omero::sys::Options,
                virtual public ::IceDelegateM::Ice::Object
{
public:
};

class Parameters : virtual public ::IceDelegate::omero::sys::Parameters,
                   virtual public ::IceDelegateM::Ice::Object
{
public:
};

class Principal : virtual public ::IceDelegate::omero::sys::Principal,
                  virtual public ::IceDelegateM::Ice::Object
{
public:
};

class Roles : virtual public ::IceDelegate::omero::sys::Roles,
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

namespace sys
{

class EventContext : virtual public ::IceDelegate::omero::sys::EventContext,
                     virtual public ::IceDelegateD::Ice::Object
{
public:
};

class Filter : virtual public ::IceDelegate::omero::sys::Filter,
               virtual public ::IceDelegateD::Ice::Object
{
public:
};

class Options : virtual public ::IceDelegate::omero::sys::Options,
                virtual public ::IceDelegateD::Ice::Object
{
public:
};

class Parameters : virtual public ::IceDelegate::omero::sys::Parameters,
                   virtual public ::IceDelegateD::Ice::Object
{
public:
};

class Principal : virtual public ::IceDelegate::omero::sys::Principal,
                  virtual public ::IceDelegateD::Ice::Object
{
public:
};

class Roles : virtual public ::IceDelegate::omero::sys::Roles,
              virtual public ::IceDelegateD::Ice::Object
{
public:
};

}

}

}

namespace omero
{

namespace sys
{

class EventContext : virtual public ::Ice::Object
{
public:

    typedef EventContextPrx ProxyType;
    typedef EventContextPtr PointerType;
    
    EventContext() {}
    EventContext(::Ice::Long, ::Ice::Long, const ::std::string&, ::Ice::Long, const ::std::string&, ::Ice::Long, const ::std::string&, bool, ::Ice::Long, const ::std::string&, const ::omero::sys::LongList&, const ::omero::sys::LongList&, const ::omero::model::PermissionsPtr&);
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

    virtual ~EventContext() {}

    friend class EventContext__staticInit;

public:

    ::Ice::Long shareId;

    ::Ice::Long sessionId;

    ::std::string sessionUuid;

    ::Ice::Long userId;

    ::std::string userName;

    ::Ice::Long groupId;

    ::std::string groupName;

    bool isAdmin;

    ::Ice::Long eventId;

    ::std::string eventType;

    ::omero::sys::LongList memberOfGroups;

    ::omero::sys::LongList leaderOfGroups;

    ::omero::model::PermissionsPtr groupPermissions;
};

class EventContext__staticInit
{
public:

    ::omero::sys::EventContext _init;
};

static EventContext__staticInit _EventContext_init;

class Filter : virtual public ::Ice::Object
{
public:

    typedef FilterPrx ProxyType;
    typedef FilterPtr PointerType;
    
    Filter() {}
    Filter(const ::omero::RBoolPtr&, const ::omero::RLongPtr&, const ::omero::RLongPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RTimePtr&, const ::omero::RTimePtr&);
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

    virtual ~Filter() {}

public:

    ::omero::RBoolPtr unique;

    ::omero::RLongPtr ownerId;

    ::omero::RLongPtr groupId;

    ::omero::RIntPtr offset;

    ::omero::RIntPtr limit;

    ::omero::RTimePtr startTime;

    ::omero::RTimePtr endTime;
};

class Options : virtual public ::Ice::Object
{
public:

    typedef OptionsPrx ProxyType;
    typedef OptionsPtr PointerType;
    
    Options() {}
    Options(const ::omero::RBoolPtr&, const ::omero::RBoolPtr&, const ::omero::RBoolPtr&);
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

    virtual ~Options() {}

public:

    ::omero::RBoolPtr leaves;

    ::omero::RBoolPtr orphan;

    ::omero::RBoolPtr acquisitionData;
};

class Parameters : virtual public ::Ice::Object
{
public:

    typedef ParametersPrx ProxyType;
    typedef ParametersPtr PointerType;
    
    Parameters() {}
    Parameters(const ::omero::sys::ParamMap&, const ::omero::sys::FilterPtr&, const ::omero::sys::OptionsPtr&);
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

    virtual ~Parameters() {}

public:

    ::omero::sys::ParamMap map;

    ::omero::sys::FilterPtr theFilter;

    ::omero::sys::OptionsPtr theOptions;
};

class Principal : virtual public ::Ice::Object
{
public:

    typedef PrincipalPrx ProxyType;
    typedef PrincipalPtr PointerType;
    
    Principal() {}
    Principal(const ::std::string&, const ::std::string&, const ::std::string&, const ::omero::model::PermissionsPtr&);
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

    virtual ~Principal() {}

public:

    ::std::string name;

    ::std::string group;

    ::std::string eventType;

    ::omero::model::PermissionsPtr umask;
};

class Roles : virtual public ::Ice::Object
{
public:

    typedef RolesPrx ProxyType;
    typedef RolesPtr PointerType;
    
    Roles() {}
    Roles(::Ice::Long, const ::std::string&, ::Ice::Long, const ::std::string&, ::Ice::Long, const ::std::string&, ::Ice::Long, const ::std::string&, ::Ice::Long, const ::std::string&);
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

    virtual ~Roles() {}

public:

    ::Ice::Long rootId;

    ::std::string rootName;

    ::Ice::Long systemGroupId;

    ::std::string systemGroupName;

    ::Ice::Long userGroupId;

    ::std::string userGroupName;

    ::Ice::Long guestId;

    ::std::string guestName;

    ::Ice::Long guestGroupId;

    ::std::string guestGroupName;
};

}

}

#endif
