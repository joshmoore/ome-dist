// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `API.ice'

#ifndef __omero_cmd__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_cmd_API_h__
#define __omero_cmd__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_cmd_API_h__

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
#include <Ice/IncomingAsync.h>
#include <Ice/Direct.h>
#include <Ice/UserExceptionFactory.h>
#include <Ice/FactoryTable.h>
#include <Ice/StreamF.h>
#include <omero/RTypes.h>
#include <omero/ServerErrors.h>
#include <Glacier2/Session.h>
#include <Ice/BuiltinSequences.h>
#include <Ice/Identity.h>
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

namespace cmd
{

class Handle;

class Status;

class Request;

class Response;

class OK;

class ERR;

class Unknown;

class CmdCallback;

class Session;

}

}

}

namespace omero
{

namespace cmd
{

class Handle;
bool operator==(const Handle&, const Handle&);
bool operator<(const Handle&, const Handle&);

class Status;
bool operator==(const Status&, const Status&);
bool operator<(const Status&, const Status&);

class Request;
bool operator==(const Request&, const Request&);
bool operator<(const Request&, const Request&);

class Response;
bool operator==(const Response&, const Response&);
bool operator<(const Response&, const Response&);

class OK;
bool operator==(const OK&, const OK&);
bool operator<(const OK&, const OK&);

class ERR;
bool operator==(const ERR&, const ERR&);
bool operator<(const ERR&, const ERR&);

class Unknown;
bool operator==(const Unknown&, const Unknown&);
bool operator<(const Unknown&, const Unknown&);

class CmdCallback;
bool operator==(const CmdCallback&, const CmdCallback&);
bool operator<(const CmdCallback&, const CmdCallback&);

class Session;
bool operator==(const Session&, const Session&);
bool operator<(const Session&, const Session&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::cmd::Handle*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::cmd::Handle*);

::Ice::Object* upCast(::omero::cmd::Status*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::cmd::Status*);

::Ice::Object* upCast(::omero::cmd::Request*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::cmd::Request*);

::Ice::Object* upCast(::omero::cmd::Response*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::cmd::Response*);

::Ice::Object* upCast(::omero::cmd::OK*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::cmd::OK*);

::Ice::Object* upCast(::omero::cmd::ERR*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::cmd::ERR*);

::Ice::Object* upCast(::omero::cmd::Unknown*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::cmd::Unknown*);

::Ice::Object* upCast(::omero::cmd::CmdCallback*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::cmd::CmdCallback*);

::Ice::Object* upCast(::omero::cmd::Session*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::cmd::Session*);

}

namespace omero
{

namespace cmd
{

typedef ::IceInternal::Handle< ::omero::cmd::Handle> HandlePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::cmd::Handle> HandlePrx;

void __read(::IceInternal::BasicStream*, HandlePrx&);
void __patch__HandlePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::cmd::Status> StatusPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::cmd::Status> StatusPrx;

void __read(::IceInternal::BasicStream*, StatusPrx&);
void __patch__StatusPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::cmd::Request> RequestPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::cmd::Request> RequestPrx;

void __read(::IceInternal::BasicStream*, RequestPrx&);
void __patch__RequestPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::cmd::Response> ResponsePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::cmd::Response> ResponsePrx;

void __read(::IceInternal::BasicStream*, ResponsePrx&);
void __patch__ResponsePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::cmd::OK> OKPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::cmd::OK> OKPrx;

void __read(::IceInternal::BasicStream*, OKPrx&);
void __patch__OKPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::cmd::ERR> ERRPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::cmd::ERR> ERRPrx;

void __read(::IceInternal::BasicStream*, ERRPrx&);
void __patch__ERRPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::cmd::Unknown> UnknownPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::cmd::Unknown> UnknownPrx;

void __read(::IceInternal::BasicStream*, UnknownPrx&);
void __patch__UnknownPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::cmd::CmdCallback> CmdCallbackPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::cmd::CmdCallback> CmdCallbackPrx;

void __read(::IceInternal::BasicStream*, CmdCallbackPrx&);
void __patch__CmdCallbackPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::cmd::Session> SessionPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::cmd::Session> SessionPrx;

void __read(::IceInternal::BasicStream*, SessionPrx&);
void __patch__SessionPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace omero
{

namespace cmd
{

typedef ::std::map< ::std::string, ::std::string> StringMap;
void __writeStringMap(::IceInternal::BasicStream*, const StringMap&);
void __readStringMap(::IceInternal::BasicStream*, StringMap&);

typedef ::std::vector< ::omero::cmd::StringMap> StringMapList;
void __writeStringMapList(::IceInternal::BasicStream*, const ::omero::cmd::StringMap*, const ::omero::cmd::StringMap*);
void __readStringMapList(::IceInternal::BasicStream*, StringMapList&);

enum State
{
    ALL,
    ACTIVE,
    INACTIVE,
    SUCCESS,
    FAILURE,
    CANCELLED
};

void __write(::IceInternal::BasicStream*, State);
void __read(::IceInternal::BasicStream*, State&);

typedef ::std::vector< ::omero::cmd::State> StateList;
void __writeStateList(::IceInternal::BasicStream*, const ::omero::cmd::State*, const ::omero::cmd::State*);
void __readStateList(::IceInternal::BasicStream*, StateList&);

typedef ::std::vector< ::omero::cmd::StatusPtr> StatusList;
void __writeStatusList(::IceInternal::BasicStream*, const ::omero::cmd::StatusPtr*, const ::omero::cmd::StatusPtr*);
void __readStatusList(::IceInternal::BasicStream*, StatusList&);

typedef ::std::vector< ::omero::cmd::RequestPtr> RequestList;
void __writeRequestList(::IceInternal::BasicStream*, const ::omero::cmd::RequestPtr*, const ::omero::cmd::RequestPtr*);
void __readRequestList(::IceInternal::BasicStream*, RequestList&);

typedef ::std::vector< ::omero::cmd::ResponsePtr> ResponseList;
void __writeResponseList(::IceInternal::BasicStream*, const ::omero::cmd::ResponsePtr*, const ::omero::cmd::ResponsePtr*);
void __readResponseList(::IceInternal::BasicStream*, ResponseList&);

typedef ::std::vector< ::omero::cmd::HandlePrx> HandleList;
void __writeHandleList(::IceInternal::BasicStream*, const ::omero::cmd::HandlePrx*, const ::omero::cmd::HandlePrx*);
void __readHandleList(::IceInternal::BasicStream*, HandleList&);

}

}

namespace omero
{

namespace cmd
{

class AMI_Handle_addCallback : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::cmd::HandlePrx&, const ::omero::cmd::CmdCallbackPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::cmd::AMI_Handle_addCallback> AMI_Handle_addCallbackPtr;

class AMI_Handle_removeCallback : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::cmd::HandlePrx&, const ::omero::cmd::CmdCallbackPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::cmd::AMI_Handle_removeCallback> AMI_Handle_removeCallbackPtr;

class AMI_Handle_getRequest : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::cmd::RequestPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::cmd::HandlePrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::cmd::AMI_Handle_getRequest> AMI_Handle_getRequestPtr;

class AMI_Handle_getResponse : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::cmd::ResponsePtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::cmd::HandlePrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::cmd::AMI_Handle_getResponse> AMI_Handle_getResponsePtr;

class AMI_Handle_getStatus : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::cmd::StatusPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::cmd::HandlePrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::cmd::AMI_Handle_getStatus> AMI_Handle_getStatusPtr;

class AMI_Handle_cancel : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(bool) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::cmd::HandlePrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::cmd::AMI_Handle_cancel> AMI_Handle_cancelPtr;

class AMI_Handle_close : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::cmd::HandlePrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::cmd::AMI_Handle_close> AMI_Handle_closePtr;

class AMI_Session_submit : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::cmd::HandlePrx&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::cmd::SessionPrx&, const ::omero::cmd::RequestPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::cmd::AMI_Session_submit> AMI_Session_submitPtr;

class AMD_Session_submit : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::cmd::HandlePrx&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::cmd::AMD_Session_submit> AMD_Session_submitPtr;

}

}

namespace IceAsync
{

namespace omero
{

namespace cmd
{

class AMD_Session_submit : public ::omero::cmd::AMD_Session_submit, public ::IceInternal::IncomingAsync
{
public:

    AMD_Session_submit(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::cmd::HandlePrx&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

}

}

}

namespace IceProxy
{

namespace omero
{

namespace cmd
{

class Status : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<Status> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Status*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Status*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Status> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Status*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Status*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Status> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Status*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Status*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Status> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Status*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Status*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Status> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Status*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Status*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Status> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Status*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Status*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Status> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Status*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Status*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Status> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Status*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Status*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Status> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Status*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Status*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Status> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Status*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Status*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Status> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Status*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Status*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Status> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Status*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Status*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Status> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Status*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Status*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Status> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Status*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Status*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Status> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Status*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Status*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Status> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Status*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Status*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Status> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Status*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Status*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Status> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Status*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Status*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Status> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Status*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Status*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class Request : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<Request> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Request*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Request*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Request> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Request*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Request*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Request> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Request*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Request*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Request> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Request*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Request*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Request> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Request*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Request*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Request> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Request*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Request*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Request> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Request*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Request*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Request> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Request*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Request*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Request> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Request*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Request*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Request> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Request*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Request*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Request> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Request*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Request*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Request> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Request*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Request*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Request> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Request*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Request*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Request> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Request*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Request*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Request> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Request*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Request*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Request> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Request*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Request*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Request> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Request*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Request*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Request> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Request*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Request*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Request> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Request*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Request*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class Response : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<Response> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Response*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Response*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Response> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Response*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Response*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Response> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Response*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Response*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Response> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Response*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Response*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Response> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Response*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Response*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Response> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Response*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Response*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Response> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Response*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Response*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Response> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Response*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Response*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Response> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Response*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Response*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Response> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Response*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Response*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Response> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Response*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Response*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Response> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Response*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Response*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Response> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Response*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Response*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Response> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Response*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Response*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Response> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Response*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Response*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Response> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Response*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Response*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Response> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Response*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Response*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Response> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Response*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Response*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Response> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Response*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Response*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class OK : virtual public ::IceProxy::omero::cmd::Response
{
public:
    
    ::IceInternal::ProxyHandle<OK> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OK*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<OK*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OK> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OK*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<OK*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OK> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OK*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<OK*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OK> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OK*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<OK*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OK> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OK*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<OK*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OK> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OK*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<OK*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OK> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OK*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<OK*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OK> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OK*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<OK*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OK> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OK*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<OK*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OK> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OK*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<OK*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OK> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OK*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<OK*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OK> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OK*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<OK*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OK> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OK*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<OK*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OK> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OK*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<OK*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OK> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OK*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<OK*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OK> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OK*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<OK*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OK> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OK*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<OK*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OK> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OK*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<OK*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OK> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OK*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<OK*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class ERR : virtual public ::IceProxy::omero::cmd::Response
{
public:
    
    ::IceInternal::ProxyHandle<ERR> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ERR*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<ERR*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ERR> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ERR*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<ERR*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ERR> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ERR*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<ERR*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ERR> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ERR*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<ERR*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ERR> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ERR*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<ERR*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ERR> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ERR*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<ERR*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ERR> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ERR*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<ERR*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ERR> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ERR*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<ERR*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ERR> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ERR*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<ERR*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ERR> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ERR*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<ERR*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ERR> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ERR*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<ERR*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ERR> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ERR*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<ERR*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ERR> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ERR*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<ERR*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ERR> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ERR*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<ERR*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ERR> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ERR*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<ERR*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ERR> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ERR*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<ERR*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ERR> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ERR*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<ERR*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ERR> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ERR*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<ERR*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ERR> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ERR*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<ERR*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class Unknown : virtual public ::IceProxy::omero::cmd::ERR
{
public:
    
    ::IceInternal::ProxyHandle<Unknown> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Unknown*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Unknown*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Unknown> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Unknown*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Unknown*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Unknown> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Unknown*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Unknown*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Unknown> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Unknown*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Unknown*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Unknown> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Unknown*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Unknown*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Unknown> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Unknown*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Unknown*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Unknown> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Unknown*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Unknown*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Unknown> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Unknown*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Unknown*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Unknown> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Unknown*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Unknown*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Unknown> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Unknown*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Unknown*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Unknown> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Unknown*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Unknown*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Unknown> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Unknown*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Unknown*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Unknown> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Unknown*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Unknown*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Unknown> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Unknown*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Unknown*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Unknown> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Unknown*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Unknown*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Unknown> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Unknown*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Unknown*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Unknown> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Unknown*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Unknown*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Unknown> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Unknown*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Unknown*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Unknown> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Unknown*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Unknown*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class CmdCallback : virtual public ::IceProxy::Ice::Object
{
public:

    void step(::Ice::Int complete, ::Ice::Int total)
    {
        step(complete, total, 0);
    }
    void step(::Ice::Int complete, ::Ice::Int total, const ::Ice::Context& __ctx)
    {
        step(complete, total, &__ctx);
    }
    
private:

    void step(::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:

    void finished(const ::omero::cmd::ResponsePtr& rsp, const ::omero::cmd::StatusPtr& s)
    {
        finished(rsp, s, 0);
    }
    void finished(const ::omero::cmd::ResponsePtr& rsp, const ::omero::cmd::StatusPtr& s, const ::Ice::Context& __ctx)
    {
        finished(rsp, s, &__ctx);
    }
    
private:

    void finished(const ::omero::cmd::ResponsePtr&, const ::omero::cmd::StatusPtr&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<CmdCallback> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CmdCallback*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<CmdCallback*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CmdCallback> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CmdCallback*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<CmdCallback*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CmdCallback> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CmdCallback*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<CmdCallback*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CmdCallback> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CmdCallback*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<CmdCallback*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CmdCallback> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CmdCallback*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<CmdCallback*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CmdCallback> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CmdCallback*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<CmdCallback*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CmdCallback> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CmdCallback*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<CmdCallback*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CmdCallback> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CmdCallback*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<CmdCallback*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CmdCallback> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CmdCallback*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<CmdCallback*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CmdCallback> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CmdCallback*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<CmdCallback*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CmdCallback> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CmdCallback*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<CmdCallback*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CmdCallback> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CmdCallback*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<CmdCallback*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CmdCallback> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CmdCallback*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<CmdCallback*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CmdCallback> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CmdCallback*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<CmdCallback*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CmdCallback> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CmdCallback*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<CmdCallback*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CmdCallback> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CmdCallback*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<CmdCallback*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CmdCallback> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CmdCallback*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<CmdCallback*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CmdCallback> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CmdCallback*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<CmdCallback*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<CmdCallback> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<CmdCallback*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<CmdCallback*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class Handle : virtual public ::IceProxy::Ice::Object
{
public:

    void addCallback(const ::omero::cmd::CmdCallbackPrx& cb)
    {
        addCallback(cb, 0);
    }
    void addCallback(const ::omero::cmd::CmdCallbackPrx& cb, const ::Ice::Context& __ctx)
    {
        addCallback(cb, &__ctx);
    }
    
private:

    void addCallback(const ::omero::cmd::CmdCallbackPrx&, const ::Ice::Context*);
    
public:
    bool addCallback_async(const ::omero::cmd::AMI_Handle_addCallbackPtr&, const ::omero::cmd::CmdCallbackPrx&);
    bool addCallback_async(const ::omero::cmd::AMI_Handle_addCallbackPtr&, const ::omero::cmd::CmdCallbackPrx&, const ::Ice::Context&);

    void removeCallback(const ::omero::cmd::CmdCallbackPrx& cb)
    {
        removeCallback(cb, 0);
    }
    void removeCallback(const ::omero::cmd::CmdCallbackPrx& cb, const ::Ice::Context& __ctx)
    {
        removeCallback(cb, &__ctx);
    }
    
private:

    void removeCallback(const ::omero::cmd::CmdCallbackPrx&, const ::Ice::Context*);
    
public:
    bool removeCallback_async(const ::omero::cmd::AMI_Handle_removeCallbackPtr&, const ::omero::cmd::CmdCallbackPrx&);
    bool removeCallback_async(const ::omero::cmd::AMI_Handle_removeCallbackPtr&, const ::omero::cmd::CmdCallbackPrx&, const ::Ice::Context&);

    ::omero::cmd::RequestPtr getRequest()
    {
        return getRequest(0);
    }
    ::omero::cmd::RequestPtr getRequest(const ::Ice::Context& __ctx)
    {
        return getRequest(&__ctx);
    }
    
private:

    ::omero::cmd::RequestPtr getRequest(const ::Ice::Context*);
    
public:
    bool getRequest_async(const ::omero::cmd::AMI_Handle_getRequestPtr&);
    bool getRequest_async(const ::omero::cmd::AMI_Handle_getRequestPtr&, const ::Ice::Context&);

    ::omero::cmd::ResponsePtr getResponse()
    {
        return getResponse(0);
    }
    ::omero::cmd::ResponsePtr getResponse(const ::Ice::Context& __ctx)
    {
        return getResponse(&__ctx);
    }
    
private:

    ::omero::cmd::ResponsePtr getResponse(const ::Ice::Context*);
    
public:
    bool getResponse_async(const ::omero::cmd::AMI_Handle_getResponsePtr&);
    bool getResponse_async(const ::omero::cmd::AMI_Handle_getResponsePtr&, const ::Ice::Context&);

    ::omero::cmd::StatusPtr getStatus()
    {
        return getStatus(0);
    }
    ::omero::cmd::StatusPtr getStatus(const ::Ice::Context& __ctx)
    {
        return getStatus(&__ctx);
    }
    
private:

    ::omero::cmd::StatusPtr getStatus(const ::Ice::Context*);
    
public:
    bool getStatus_async(const ::omero::cmd::AMI_Handle_getStatusPtr&);
    bool getStatus_async(const ::omero::cmd::AMI_Handle_getStatusPtr&, const ::Ice::Context&);

    bool cancel()
    {
        return cancel(0);
    }
    bool cancel(const ::Ice::Context& __ctx)
    {
        return cancel(&__ctx);
    }
    
private:

    bool cancel(const ::Ice::Context*);
    
public:
    bool cancel_async(const ::omero::cmd::AMI_Handle_cancelPtr&);
    bool cancel_async(const ::omero::cmd::AMI_Handle_cancelPtr&, const ::Ice::Context&);

    void close()
    {
        close(0);
    }
    void close(const ::Ice::Context& __ctx)
    {
        close(&__ctx);
    }
    
private:

    void close(const ::Ice::Context*);
    
public:
    bool close_async(const ::omero::cmd::AMI_Handle_closePtr&);
    bool close_async(const ::omero::cmd::AMI_Handle_closePtr&, const ::Ice::Context&);
    
    ::IceInternal::ProxyHandle<Handle> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Handle*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Handle*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Handle> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Handle*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Handle*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Handle> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Handle*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Handle*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Handle> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Handle*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Handle*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Handle> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Handle*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Handle*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Handle> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Handle*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Handle*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Handle> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Handle*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Handle*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Handle> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Handle*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Handle*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Handle> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Handle*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Handle*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Handle> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Handle*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Handle*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Handle> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Handle*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Handle*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Handle> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Handle*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Handle*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Handle> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Handle*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Handle*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Handle> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Handle*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Handle*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Handle> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Handle*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Handle*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Handle> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Handle*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Handle*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Handle> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Handle*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Handle*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Handle> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Handle*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Handle*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Handle> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Handle*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Handle*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class Session : virtual public ::IceProxy::Glacier2::Session
{
public:

    ::omero::cmd::HandlePrx submit(const ::omero::cmd::RequestPtr& req)
    {
        return submit(req, 0);
    }
    ::omero::cmd::HandlePrx submit(const ::omero::cmd::RequestPtr& req, const ::Ice::Context& __ctx)
    {
        return submit(req, &__ctx);
    }
    
private:

    ::omero::cmd::HandlePrx submit(const ::omero::cmd::RequestPtr&, const ::Ice::Context*);
    
public:
    bool submit_async(const ::omero::cmd::AMI_Session_submitPtr&, const ::omero::cmd::RequestPtr&);
    bool submit_async(const ::omero::cmd::AMI_Session_submitPtr&, const ::omero::cmd::RequestPtr&, const ::Ice::Context&);
    
    ::IceInternal::ProxyHandle<Session> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Session*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Session*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Session> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Session*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Session*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Session> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Session*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Session*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Session> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Session*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Session*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Session> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Session*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Session*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Session> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Session*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Session*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Session> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Session*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Session*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Session> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Session*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Session*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Session> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Session*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Session*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Session> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Session*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Session*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Session> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Session*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Session*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Session> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Session*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Session*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Session> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Session*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Session*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Session> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Session*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Session*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Session> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Session*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Session*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Session> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Session*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Session*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Session> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Session*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Session*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Session> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Session*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Session*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Session> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Session*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Session*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

namespace cmd
{

class Status : virtual public ::IceDelegate::Ice::Object
{
public:
};

class Request : virtual public ::IceDelegate::Ice::Object
{
public:
};

class Response : virtual public ::IceDelegate::Ice::Object
{
public:
};

class OK : virtual public ::IceDelegate::omero::cmd::Response
{
public:
};

class ERR : virtual public ::IceDelegate::omero::cmd::Response
{
public:
};

class Unknown : virtual public ::IceDelegate::omero::cmd::ERR
{
public:
};

class CmdCallback : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual void step(::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual void finished(const ::omero::cmd::ResponsePtr&, const ::omero::cmd::StatusPtr&, const ::Ice::Context*) = 0;
};

class Handle : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual void addCallback(const ::omero::cmd::CmdCallbackPrx&, const ::Ice::Context*) = 0;

    virtual void removeCallback(const ::omero::cmd::CmdCallbackPrx&, const ::Ice::Context*) = 0;

    virtual ::omero::cmd::RequestPtr getRequest(const ::Ice::Context*) = 0;

    virtual ::omero::cmd::ResponsePtr getResponse(const ::Ice::Context*) = 0;

    virtual ::omero::cmd::StatusPtr getStatus(const ::Ice::Context*) = 0;

    virtual bool cancel(const ::Ice::Context*) = 0;

    virtual void close(const ::Ice::Context*) = 0;
};

class Session : virtual public ::IceDelegate::Glacier2::Session
{
public:

    virtual ::omero::cmd::HandlePrx submit(const ::omero::cmd::RequestPtr&, const ::Ice::Context*) = 0;
};

}

}

}

namespace IceDelegateM
{

namespace omero
{

namespace cmd
{

class Status : virtual public ::IceDelegate::omero::cmd::Status,
               virtual public ::IceDelegateM::Ice::Object
{
public:
};

class Request : virtual public ::IceDelegate::omero::cmd::Request,
                virtual public ::IceDelegateM::Ice::Object
{
public:
};

class Response : virtual public ::IceDelegate::omero::cmd::Response,
                 virtual public ::IceDelegateM::Ice::Object
{
public:
};

class OK : virtual public ::IceDelegate::omero::cmd::OK,
           virtual public ::IceDelegateM::omero::cmd::Response
{
public:
};

class ERR : virtual public ::IceDelegate::omero::cmd::ERR,
            virtual public ::IceDelegateM::omero::cmd::Response
{
public:
};

class Unknown : virtual public ::IceDelegate::omero::cmd::Unknown,
                virtual public ::IceDelegateM::omero::cmd::ERR
{
public:
};

class CmdCallback : virtual public ::IceDelegate::omero::cmd::CmdCallback,
                    virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual void step(::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual void finished(const ::omero::cmd::ResponsePtr&, const ::omero::cmd::StatusPtr&, const ::Ice::Context*);
};

class Handle : virtual public ::IceDelegate::omero::cmd::Handle,
               virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual void addCallback(const ::omero::cmd::CmdCallbackPrx&, const ::Ice::Context*);

    virtual void removeCallback(const ::omero::cmd::CmdCallbackPrx&, const ::Ice::Context*);

    virtual ::omero::cmd::RequestPtr getRequest(const ::Ice::Context*);

    virtual ::omero::cmd::ResponsePtr getResponse(const ::Ice::Context*);

    virtual ::omero::cmd::StatusPtr getStatus(const ::Ice::Context*);

    virtual bool cancel(const ::Ice::Context*);

    virtual void close(const ::Ice::Context*);
};

class Session : virtual public ::IceDelegate::omero::cmd::Session,
                virtual public ::IceDelegateM::Glacier2::Session
{
public:

    virtual ::omero::cmd::HandlePrx submit(const ::omero::cmd::RequestPtr&, const ::Ice::Context*);
};

}

}

}

namespace IceDelegateD
{

namespace omero
{

namespace cmd
{

class Status : virtual public ::IceDelegate::omero::cmd::Status,
               virtual public ::IceDelegateD::Ice::Object
{
public:
};

class Request : virtual public ::IceDelegate::omero::cmd::Request,
                virtual public ::IceDelegateD::Ice::Object
{
public:
};

class Response : virtual public ::IceDelegate::omero::cmd::Response,
                 virtual public ::IceDelegateD::Ice::Object
{
public:
};

class OK : virtual public ::IceDelegate::omero::cmd::OK,
           virtual public ::IceDelegateD::omero::cmd::Response
{
public:
};

class ERR : virtual public ::IceDelegate::omero::cmd::ERR,
            virtual public ::IceDelegateD::omero::cmd::Response
{
public:
};

class Unknown : virtual public ::IceDelegate::omero::cmd::Unknown,
                virtual public ::IceDelegateD::omero::cmd::ERR
{
public:
};

class CmdCallback : virtual public ::IceDelegate::omero::cmd::CmdCallback,
                    virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual void step(::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual void finished(const ::omero::cmd::ResponsePtr&, const ::omero::cmd::StatusPtr&, const ::Ice::Context*);
};

class Handle : virtual public ::IceDelegate::omero::cmd::Handle,
               virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual void addCallback(const ::omero::cmd::CmdCallbackPrx&, const ::Ice::Context*);

    virtual void removeCallback(const ::omero::cmd::CmdCallbackPrx&, const ::Ice::Context*);

    virtual ::omero::cmd::RequestPtr getRequest(const ::Ice::Context*);

    virtual ::omero::cmd::ResponsePtr getResponse(const ::Ice::Context*);

    virtual ::omero::cmd::StatusPtr getStatus(const ::Ice::Context*);

    virtual bool cancel(const ::Ice::Context*);

    virtual void close(const ::Ice::Context*);
};

class Session : virtual public ::IceDelegate::omero::cmd::Session,
                virtual public ::IceDelegateD::Glacier2::Session
{
public:

    virtual ::omero::cmd::HandlePrx submit(const ::omero::cmd::RequestPtr&, const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace cmd
{

class Status : virtual public ::Ice::Object
{
public:

    typedef StatusPrx ProxyType;
    typedef StatusPtr PointerType;
    
    Status() {}
    Status(const ::omero::cmd::HandlePrx&, const ::std::string&, const ::std::string&, const ::omero::cmd::StateList&, const ::omero::cmd::StringMap&, ::Ice::Int, ::Ice::Long, const ::Ice::LongSeq&, const ::Ice::LongSeq&, ::Ice::Long);
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

    virtual ~Status() {}

    friend class Status__staticInit;

public:

    ::omero::cmd::HandlePrx source;

    ::std::string category;

    ::std::string name;

    ::omero::cmd::StateList flags;

    ::omero::cmd::StringMap parameters;

    ::Ice::Int steps;

    ::Ice::Long startTime;

    ::Ice::LongSeq stepStartTimes;

    ::Ice::LongSeq stepStopTimes;

    ::Ice::Long stopTime;
};

class Status__staticInit
{
public:

    ::omero::cmd::Status _init;
};

static Status__staticInit _Status_init;

class Request : virtual public ::Ice::Object
{
public:

    typedef RequestPrx ProxyType;
    typedef RequestPtr PointerType;
    
    Request() {}
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

    virtual ~Request() {}
};

class Response : virtual public ::Ice::Object
{
public:

    typedef ResponsePrx ProxyType;
    typedef ResponsePtr PointerType;
    
    Response() {}
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

    virtual ~Response() {}
};

class OK : virtual public ::omero::cmd::Response
{
public:

    typedef OKPrx ProxyType;
    typedef OKPtr PointerType;
    
    OK() {}
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

    virtual ~OK() {}
};

class ERR : virtual public ::omero::cmd::Response
{
public:

    typedef ERRPrx ProxyType;
    typedef ERRPtr PointerType;
    
    ERR() {}
    ERR(const ::std::string&, const ::std::string&, const ::omero::cmd::StringMap&);
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

    virtual ~ERR() {}

public:

    ::std::string category;

    ::std::string name;

    ::omero::cmd::StringMap parameters;
};

class Unknown : virtual public ::omero::cmd::ERR
{
public:

    typedef UnknownPrx ProxyType;
    typedef UnknownPtr PointerType;
    
    Unknown() {}
    Unknown(const ::std::string&, const ::std::string&, const ::omero::cmd::StringMap&);
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

    virtual ~Unknown() {}
};

class CmdCallback : virtual public ::Ice::Object
{
public:

    typedef CmdCallbackPrx ProxyType;
    typedef CmdCallbackPtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void step(::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___step(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void finished(const ::omero::cmd::ResponsePtr&, const ::omero::cmd::StatusPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___finished(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

class Handle : virtual public ::Ice::Object
{
public:

    typedef HandlePrx ProxyType;
    typedef HandlePtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void addCallback(const ::omero::cmd::CmdCallbackPrx&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addCallback(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeCallback(const ::omero::cmd::CmdCallbackPrx&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeCallback(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::cmd::RequestPtr getRequest(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getRequest(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::cmd::ResponsePtr getResponse(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getResponse(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::cmd::StatusPtr getStatus(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getStatus(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual bool cancel(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___cancel(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void close(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___close(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

class Session : virtual public ::Glacier2::Session
{
public:

    typedef SessionPrx ProxyType;
    typedef SessionPtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void submit_async(const ::omero::cmd::AMD_Session_submitPtr&, const ::omero::cmd::RequestPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___submit(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

}

}

#endif
