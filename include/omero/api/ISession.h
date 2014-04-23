// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `ISession.ice'

#ifndef __omero_api__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_api_ISession_h__
#define __omero_api__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_api_ISession_h__

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
#include <omero/ModelF.h>
#include <omero/ServicesF.h>
#include <omero/System.h>
#include <omero/Collections.h>
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

namespace api
{

class ISession;

}

}

}

namespace omero
{

namespace api
{

class ISession;
bool operator==(const ISession&, const ISession&);
bool operator<(const ISession&, const ISession&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::api::ISession*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::api::ISession*);

}

namespace omero
{

namespace api
{

typedef ::IceInternal::Handle< ::omero::api::ISession> ISessionPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::api::ISession> ISessionPrx;

void __read(::IceInternal::BasicStream*, ISessionPrx&);
void __patch__ISessionPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace omero
{

namespace api
{

class AMI_ISession_createSession : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::model::SessionPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ISessionPrx&, const ::omero::sys::PrincipalPtr&, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_ISession_createSession> AMI_ISession_createSessionPtr;

class AMD_ISession_createSession : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::model::SessionPtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_ISession_createSession> AMD_ISession_createSessionPtr;

class AMI_ISession_createUserSession : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::model::SessionPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ISessionPrx&, ::Ice::Long, ::Ice::Long, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_ISession_createUserSession> AMI_ISession_createUserSessionPtr;

class AMD_ISession_createUserSession : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::model::SessionPtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_ISession_createUserSession> AMD_ISession_createUserSessionPtr;

class AMI_ISession_createSessionWithTimeout : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::model::SessionPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ISessionPrx&, const ::omero::sys::PrincipalPtr&, ::Ice::Long, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_ISession_createSessionWithTimeout> AMI_ISession_createSessionWithTimeoutPtr;

class AMD_ISession_createSessionWithTimeout : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::model::SessionPtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_ISession_createSessionWithTimeout> AMD_ISession_createSessionWithTimeoutPtr;

class AMI_ISession_createSessionWithTimeouts : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::model::SessionPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ISessionPrx&, const ::omero::sys::PrincipalPtr&, ::Ice::Long, ::Ice::Long, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_ISession_createSessionWithTimeouts> AMI_ISession_createSessionWithTimeoutsPtr;

class AMD_ISession_createSessionWithTimeouts : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::model::SessionPtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_ISession_createSessionWithTimeouts> AMD_ISession_createSessionWithTimeoutsPtr;

class AMI_ISession_getSession : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::model::SessionPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ISessionPrx&, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_ISession_getSession> AMI_ISession_getSessionPtr;

class AMD_ISession_getSession : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::model::SessionPtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_ISession_getSession> AMD_ISession_getSessionPtr;

class AMI_ISession_getReferenceCount : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ISessionPrx&, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_ISession_getReferenceCount> AMI_ISession_getReferenceCountPtr;

class AMD_ISession_getReferenceCount : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_ISession_getReferenceCount> AMD_ISession_getReferenceCountPtr;

class AMI_ISession_closeSession : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ISessionPrx&, const ::omero::model::SessionPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_ISession_closeSession> AMI_ISession_closeSessionPtr;

class AMD_ISession_closeSession : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_ISession_closeSession> AMD_ISession_closeSessionPtr;

class AMI_ISession_getMyOpenSessions : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::SessionList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ISessionPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_ISession_getMyOpenSessions> AMI_ISession_getMyOpenSessionsPtr;

class AMD_ISession_getMyOpenSessions : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::SessionList&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_ISession_getMyOpenSessions> AMD_ISession_getMyOpenSessionsPtr;

class AMI_ISession_getMyOpenAgentSessions : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::SessionList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ISessionPrx&, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_ISession_getMyOpenAgentSessions> AMI_ISession_getMyOpenAgentSessionsPtr;

class AMD_ISession_getMyOpenAgentSessions : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::SessionList&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_ISession_getMyOpenAgentSessions> AMD_ISession_getMyOpenAgentSessionsPtr;

class AMI_ISession_getMyOpenClientSessions : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::SessionList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ISessionPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_ISession_getMyOpenClientSessions> AMI_ISession_getMyOpenClientSessionsPtr;

class AMD_ISession_getMyOpenClientSessions : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::SessionList&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_ISession_getMyOpenClientSessions> AMD_ISession_getMyOpenClientSessionsPtr;

class AMI_ISession_getInput : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::RTypePtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ISessionPrx&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_ISession_getInput> AMI_ISession_getInputPtr;

class AMD_ISession_getInput : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::RTypePtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_ISession_getInput> AMD_ISession_getInputPtr;

class AMI_ISession_getOutput : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::RTypePtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ISessionPrx&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_ISession_getOutput> AMI_ISession_getOutputPtr;

class AMD_ISession_getOutput : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::RTypePtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_ISession_getOutput> AMD_ISession_getOutputPtr;

class AMI_ISession_setInput : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ISessionPrx&, const ::std::string&, const ::std::string&, const ::omero::RTypePtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_ISession_setInput> AMI_ISession_setInputPtr;

class AMD_ISession_setInput : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_ISession_setInput> AMD_ISession_setInputPtr;

class AMI_ISession_setOutput : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ISessionPrx&, const ::std::string&, const ::std::string&, const ::omero::RTypePtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_ISession_setOutput> AMI_ISession_setOutputPtr;

class AMD_ISession_setOutput : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_ISession_setOutput> AMD_ISession_setOutputPtr;

class AMI_ISession_getInputKeys : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::StringSet&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ISessionPrx&, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_ISession_getInputKeys> AMI_ISession_getInputKeysPtr;

class AMD_ISession_getInputKeys : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::StringSet&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_ISession_getInputKeys> AMD_ISession_getInputKeysPtr;

class AMI_ISession_getOutputKeys : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::StringSet&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ISessionPrx&, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_ISession_getOutputKeys> AMI_ISession_getOutputKeysPtr;

class AMD_ISession_getOutputKeys : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::StringSet&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_ISession_getOutputKeys> AMD_ISession_getOutputKeysPtr;

class AMI_ISession_getInputs : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::RTypeDict&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ISessionPrx&, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_ISession_getInputs> AMI_ISession_getInputsPtr;

class AMD_ISession_getInputs : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::RTypeDict&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_ISession_getInputs> AMD_ISession_getInputsPtr;

class AMI_ISession_getOutputs : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::RTypeDict&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ISessionPrx&, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_ISession_getOutputs> AMI_ISession_getOutputsPtr;

class AMD_ISession_getOutputs : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::RTypeDict&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_ISession_getOutputs> AMD_ISession_getOutputsPtr;

}

}

namespace IceAsync
{

namespace omero
{

namespace api
{

class AMD_ISession_createSession : public ::omero::api::AMD_ISession_createSession, public ::IceInternal::IncomingAsync
{
public:

    AMD_ISession_createSession(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::model::SessionPtr&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_ISession_createUserSession : public ::omero::api::AMD_ISession_createUserSession, public ::IceInternal::IncomingAsync
{
public:

    AMD_ISession_createUserSession(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::model::SessionPtr&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_ISession_createSessionWithTimeout : public ::omero::api::AMD_ISession_createSessionWithTimeout, public ::IceInternal::IncomingAsync
{
public:

    AMD_ISession_createSessionWithTimeout(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::model::SessionPtr&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_ISession_createSessionWithTimeouts : public ::omero::api::AMD_ISession_createSessionWithTimeouts, public ::IceInternal::IncomingAsync
{
public:

    AMD_ISession_createSessionWithTimeouts(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::model::SessionPtr&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_ISession_getSession : public ::omero::api::AMD_ISession_getSession, public ::IceInternal::IncomingAsync
{
public:

    AMD_ISession_getSession(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::model::SessionPtr&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_ISession_getReferenceCount : public ::omero::api::AMD_ISession_getReferenceCount, public ::IceInternal::IncomingAsync
{
public:

    AMD_ISession_getReferenceCount(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_ISession_closeSession : public ::omero::api::AMD_ISession_closeSession, public ::IceInternal::IncomingAsync
{
public:

    AMD_ISession_closeSession(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_ISession_getMyOpenSessions : public ::omero::api::AMD_ISession_getMyOpenSessions, public ::IceInternal::IncomingAsync
{
public:

    AMD_ISession_getMyOpenSessions(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::SessionList&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_ISession_getMyOpenAgentSessions : public ::omero::api::AMD_ISession_getMyOpenAgentSessions, public ::IceInternal::IncomingAsync
{
public:

    AMD_ISession_getMyOpenAgentSessions(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::SessionList&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_ISession_getMyOpenClientSessions : public ::omero::api::AMD_ISession_getMyOpenClientSessions, public ::IceInternal::IncomingAsync
{
public:

    AMD_ISession_getMyOpenClientSessions(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::SessionList&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_ISession_getInput : public ::omero::api::AMD_ISession_getInput, public ::IceInternal::IncomingAsync
{
public:

    AMD_ISession_getInput(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::RTypePtr&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_ISession_getOutput : public ::omero::api::AMD_ISession_getOutput, public ::IceInternal::IncomingAsync
{
public:

    AMD_ISession_getOutput(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::RTypePtr&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_ISession_setInput : public ::omero::api::AMD_ISession_setInput, public ::IceInternal::IncomingAsync
{
public:

    AMD_ISession_setInput(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_ISession_setOutput : public ::omero::api::AMD_ISession_setOutput, public ::IceInternal::IncomingAsync
{
public:

    AMD_ISession_setOutput(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_ISession_getInputKeys : public ::omero::api::AMD_ISession_getInputKeys, public ::IceInternal::IncomingAsync
{
public:

    AMD_ISession_getInputKeys(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::StringSet&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_ISession_getOutputKeys : public ::omero::api::AMD_ISession_getOutputKeys, public ::IceInternal::IncomingAsync
{
public:

    AMD_ISession_getOutputKeys(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::StringSet&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_ISession_getInputs : public ::omero::api::AMD_ISession_getInputs, public ::IceInternal::IncomingAsync
{
public:

    AMD_ISession_getInputs(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::RTypeDict&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_ISession_getOutputs : public ::omero::api::AMD_ISession_getOutputs, public ::IceInternal::IncomingAsync
{
public:

    AMD_ISession_getOutputs(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::RTypeDict&);
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

namespace api
{

class ISession : virtual public ::IceProxy::omero::api::ServiceInterface
{
public:

    ::omero::model::SessionPtr createSession(const ::omero::sys::PrincipalPtr& p, const ::std::string& credentials)
    {
        return createSession(p, credentials, 0);
    }
    ::omero::model::SessionPtr createSession(const ::omero::sys::PrincipalPtr& p, const ::std::string& credentials, const ::Ice::Context& __ctx)
    {
        return createSession(p, credentials, &__ctx);
    }
    
private:

    ::omero::model::SessionPtr createSession(const ::omero::sys::PrincipalPtr&, const ::std::string&, const ::Ice::Context*);
    
public:
    bool createSession_async(const ::omero::api::AMI_ISession_createSessionPtr&, const ::omero::sys::PrincipalPtr&, const ::std::string&);
    bool createSession_async(const ::omero::api::AMI_ISession_createSessionPtr&, const ::omero::sys::PrincipalPtr&, const ::std::string&, const ::Ice::Context&);

    ::omero::model::SessionPtr createUserSession(::Ice::Long timeToLiveMilliseconds, ::Ice::Long timeToIdleMilliseconds, const ::std::string& defaultGroup)
    {
        return createUserSession(timeToLiveMilliseconds, timeToIdleMilliseconds, defaultGroup, 0);
    }
    ::omero::model::SessionPtr createUserSession(::Ice::Long timeToLiveMilliseconds, ::Ice::Long timeToIdleMilliseconds, const ::std::string& defaultGroup, const ::Ice::Context& __ctx)
    {
        return createUserSession(timeToLiveMilliseconds, timeToIdleMilliseconds, defaultGroup, &__ctx);
    }
    
private:

    ::omero::model::SessionPtr createUserSession(::Ice::Long, ::Ice::Long, const ::std::string&, const ::Ice::Context*);
    
public:
    bool createUserSession_async(const ::omero::api::AMI_ISession_createUserSessionPtr&, ::Ice::Long, ::Ice::Long, const ::std::string&);
    bool createUserSession_async(const ::omero::api::AMI_ISession_createUserSessionPtr&, ::Ice::Long, ::Ice::Long, const ::std::string&, const ::Ice::Context&);

    ::omero::model::SessionPtr createSessionWithTimeout(const ::omero::sys::PrincipalPtr& p, ::Ice::Long timeToLiveMilliseconds)
    {
        return createSessionWithTimeout(p, timeToLiveMilliseconds, 0);
    }
    ::omero::model::SessionPtr createSessionWithTimeout(const ::omero::sys::PrincipalPtr& p, ::Ice::Long timeToLiveMilliseconds, const ::Ice::Context& __ctx)
    {
        return createSessionWithTimeout(p, timeToLiveMilliseconds, &__ctx);
    }
    
private:

    ::omero::model::SessionPtr createSessionWithTimeout(const ::omero::sys::PrincipalPtr&, ::Ice::Long, const ::Ice::Context*);
    
public:
    bool createSessionWithTimeout_async(const ::omero::api::AMI_ISession_createSessionWithTimeoutPtr&, const ::omero::sys::PrincipalPtr&, ::Ice::Long);
    bool createSessionWithTimeout_async(const ::omero::api::AMI_ISession_createSessionWithTimeoutPtr&, const ::omero::sys::PrincipalPtr&, ::Ice::Long, const ::Ice::Context&);

    ::omero::model::SessionPtr createSessionWithTimeouts(const ::omero::sys::PrincipalPtr& p, ::Ice::Long timeToLiveMilliseconds, ::Ice::Long timeToIdleMilliseconds)
    {
        return createSessionWithTimeouts(p, timeToLiveMilliseconds, timeToIdleMilliseconds, 0);
    }
    ::omero::model::SessionPtr createSessionWithTimeouts(const ::omero::sys::PrincipalPtr& p, ::Ice::Long timeToLiveMilliseconds, ::Ice::Long timeToIdleMilliseconds, const ::Ice::Context& __ctx)
    {
        return createSessionWithTimeouts(p, timeToLiveMilliseconds, timeToIdleMilliseconds, &__ctx);
    }
    
private:

    ::omero::model::SessionPtr createSessionWithTimeouts(const ::omero::sys::PrincipalPtr&, ::Ice::Long, ::Ice::Long, const ::Ice::Context*);
    
public:
    bool createSessionWithTimeouts_async(const ::omero::api::AMI_ISession_createSessionWithTimeoutsPtr&, const ::omero::sys::PrincipalPtr&, ::Ice::Long, ::Ice::Long);
    bool createSessionWithTimeouts_async(const ::omero::api::AMI_ISession_createSessionWithTimeoutsPtr&, const ::omero::sys::PrincipalPtr&, ::Ice::Long, ::Ice::Long, const ::Ice::Context&);

    ::omero::model::SessionPtr getSession(const ::std::string& sessionUuid)
    {
        return getSession(sessionUuid, 0);
    }
    ::omero::model::SessionPtr getSession(const ::std::string& sessionUuid, const ::Ice::Context& __ctx)
    {
        return getSession(sessionUuid, &__ctx);
    }
    
private:

    ::omero::model::SessionPtr getSession(const ::std::string&, const ::Ice::Context*);
    
public:
    bool getSession_async(const ::omero::api::AMI_ISession_getSessionPtr&, const ::std::string&);
    bool getSession_async(const ::omero::api::AMI_ISession_getSessionPtr&, const ::std::string&, const ::Ice::Context&);

    ::Ice::Int getReferenceCount(const ::std::string& sessionUuid)
    {
        return getReferenceCount(sessionUuid, 0);
    }
    ::Ice::Int getReferenceCount(const ::std::string& sessionUuid, const ::Ice::Context& __ctx)
    {
        return getReferenceCount(sessionUuid, &__ctx);
    }
    
private:

    ::Ice::Int getReferenceCount(const ::std::string&, const ::Ice::Context*);
    
public:
    bool getReferenceCount_async(const ::omero::api::AMI_ISession_getReferenceCountPtr&, const ::std::string&);
    bool getReferenceCount_async(const ::omero::api::AMI_ISession_getReferenceCountPtr&, const ::std::string&, const ::Ice::Context&);

    ::Ice::Int closeSession(const ::omero::model::SessionPtr& sess)
    {
        return closeSession(sess, 0);
    }
    ::Ice::Int closeSession(const ::omero::model::SessionPtr& sess, const ::Ice::Context& __ctx)
    {
        return closeSession(sess, &__ctx);
    }
    
private:

    ::Ice::Int closeSession(const ::omero::model::SessionPtr&, const ::Ice::Context*);
    
public:
    bool closeSession_async(const ::omero::api::AMI_ISession_closeSessionPtr&, const ::omero::model::SessionPtr&);
    bool closeSession_async(const ::omero::api::AMI_ISession_closeSessionPtr&, const ::omero::model::SessionPtr&, const ::Ice::Context&);

    ::omero::api::SessionList getMyOpenSessions()
    {
        return getMyOpenSessions(0);
    }
    ::omero::api::SessionList getMyOpenSessions(const ::Ice::Context& __ctx)
    {
        return getMyOpenSessions(&__ctx);
    }
    
private:

    ::omero::api::SessionList getMyOpenSessions(const ::Ice::Context*);
    
public:
    bool getMyOpenSessions_async(const ::omero::api::AMI_ISession_getMyOpenSessionsPtr&);
    bool getMyOpenSessions_async(const ::omero::api::AMI_ISession_getMyOpenSessionsPtr&, const ::Ice::Context&);

    ::omero::api::SessionList getMyOpenAgentSessions(const ::std::string& agent)
    {
        return getMyOpenAgentSessions(agent, 0);
    }
    ::omero::api::SessionList getMyOpenAgentSessions(const ::std::string& agent, const ::Ice::Context& __ctx)
    {
        return getMyOpenAgentSessions(agent, &__ctx);
    }
    
private:

    ::omero::api::SessionList getMyOpenAgentSessions(const ::std::string&, const ::Ice::Context*);
    
public:
    bool getMyOpenAgentSessions_async(const ::omero::api::AMI_ISession_getMyOpenAgentSessionsPtr&, const ::std::string&);
    bool getMyOpenAgentSessions_async(const ::omero::api::AMI_ISession_getMyOpenAgentSessionsPtr&, const ::std::string&, const ::Ice::Context&);

    ::omero::api::SessionList getMyOpenClientSessions()
    {
        return getMyOpenClientSessions(0);
    }
    ::omero::api::SessionList getMyOpenClientSessions(const ::Ice::Context& __ctx)
    {
        return getMyOpenClientSessions(&__ctx);
    }
    
private:

    ::omero::api::SessionList getMyOpenClientSessions(const ::Ice::Context*);
    
public:
    bool getMyOpenClientSessions_async(const ::omero::api::AMI_ISession_getMyOpenClientSessionsPtr&);
    bool getMyOpenClientSessions_async(const ::omero::api::AMI_ISession_getMyOpenClientSessionsPtr&, const ::Ice::Context&);

    ::omero::RTypePtr getInput(const ::std::string& sess, const ::std::string& key)
    {
        return getInput(sess, key, 0);
    }
    ::omero::RTypePtr getInput(const ::std::string& sess, const ::std::string& key, const ::Ice::Context& __ctx)
    {
        return getInput(sess, key, &__ctx);
    }
    
private:

    ::omero::RTypePtr getInput(const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:
    bool getInput_async(const ::omero::api::AMI_ISession_getInputPtr&, const ::std::string&, const ::std::string&);
    bool getInput_async(const ::omero::api::AMI_ISession_getInputPtr&, const ::std::string&, const ::std::string&, const ::Ice::Context&);

    ::omero::RTypePtr getOutput(const ::std::string& sess, const ::std::string& key)
    {
        return getOutput(sess, key, 0);
    }
    ::omero::RTypePtr getOutput(const ::std::string& sess, const ::std::string& key, const ::Ice::Context& __ctx)
    {
        return getOutput(sess, key, &__ctx);
    }
    
private:

    ::omero::RTypePtr getOutput(const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:
    bool getOutput_async(const ::omero::api::AMI_ISession_getOutputPtr&, const ::std::string&, const ::std::string&);
    bool getOutput_async(const ::omero::api::AMI_ISession_getOutputPtr&, const ::std::string&, const ::std::string&, const ::Ice::Context&);

    void setInput(const ::std::string& sess, const ::std::string& key, const ::omero::RTypePtr& value)
    {
        setInput(sess, key, value, 0);
    }
    void setInput(const ::std::string& sess, const ::std::string& key, const ::omero::RTypePtr& value, const ::Ice::Context& __ctx)
    {
        setInput(sess, key, value, &__ctx);
    }
    
private:

    void setInput(const ::std::string&, const ::std::string&, const ::omero::RTypePtr&, const ::Ice::Context*);
    
public:
    bool setInput_async(const ::omero::api::AMI_ISession_setInputPtr&, const ::std::string&, const ::std::string&, const ::omero::RTypePtr&);
    bool setInput_async(const ::omero::api::AMI_ISession_setInputPtr&, const ::std::string&, const ::std::string&, const ::omero::RTypePtr&, const ::Ice::Context&);

    void setOutput(const ::std::string& sess, const ::std::string& key, const ::omero::RTypePtr& value)
    {
        setOutput(sess, key, value, 0);
    }
    void setOutput(const ::std::string& sess, const ::std::string& key, const ::omero::RTypePtr& value, const ::Ice::Context& __ctx)
    {
        setOutput(sess, key, value, &__ctx);
    }
    
private:

    void setOutput(const ::std::string&, const ::std::string&, const ::omero::RTypePtr&, const ::Ice::Context*);
    
public:
    bool setOutput_async(const ::omero::api::AMI_ISession_setOutputPtr&, const ::std::string&, const ::std::string&, const ::omero::RTypePtr&);
    bool setOutput_async(const ::omero::api::AMI_ISession_setOutputPtr&, const ::std::string&, const ::std::string&, const ::omero::RTypePtr&, const ::Ice::Context&);

    ::omero::api::StringSet getInputKeys(const ::std::string& sess)
    {
        return getInputKeys(sess, 0);
    }
    ::omero::api::StringSet getInputKeys(const ::std::string& sess, const ::Ice::Context& __ctx)
    {
        return getInputKeys(sess, &__ctx);
    }
    
private:

    ::omero::api::StringSet getInputKeys(const ::std::string&, const ::Ice::Context*);
    
public:
    bool getInputKeys_async(const ::omero::api::AMI_ISession_getInputKeysPtr&, const ::std::string&);
    bool getInputKeys_async(const ::omero::api::AMI_ISession_getInputKeysPtr&, const ::std::string&, const ::Ice::Context&);

    ::omero::api::StringSet getOutputKeys(const ::std::string& sess)
    {
        return getOutputKeys(sess, 0);
    }
    ::omero::api::StringSet getOutputKeys(const ::std::string& sess, const ::Ice::Context& __ctx)
    {
        return getOutputKeys(sess, &__ctx);
    }
    
private:

    ::omero::api::StringSet getOutputKeys(const ::std::string&, const ::Ice::Context*);
    
public:
    bool getOutputKeys_async(const ::omero::api::AMI_ISession_getOutputKeysPtr&, const ::std::string&);
    bool getOutputKeys_async(const ::omero::api::AMI_ISession_getOutputKeysPtr&, const ::std::string&, const ::Ice::Context&);

    ::omero::RTypeDict getInputs(const ::std::string& sess)
    {
        return getInputs(sess, 0);
    }
    ::omero::RTypeDict getInputs(const ::std::string& sess, const ::Ice::Context& __ctx)
    {
        return getInputs(sess, &__ctx);
    }
    
private:

    ::omero::RTypeDict getInputs(const ::std::string&, const ::Ice::Context*);
    
public:
    bool getInputs_async(const ::omero::api::AMI_ISession_getInputsPtr&, const ::std::string&);
    bool getInputs_async(const ::omero::api::AMI_ISession_getInputsPtr&, const ::std::string&, const ::Ice::Context&);

    ::omero::RTypeDict getOutputs(const ::std::string& sess)
    {
        return getOutputs(sess, 0);
    }
    ::omero::RTypeDict getOutputs(const ::std::string& sess, const ::Ice::Context& __ctx)
    {
        return getOutputs(sess, &__ctx);
    }
    
private:

    ::omero::RTypeDict getOutputs(const ::std::string&, const ::Ice::Context*);
    
public:
    bool getOutputs_async(const ::omero::api::AMI_ISession_getOutputsPtr&, const ::std::string&);
    bool getOutputs_async(const ::omero::api::AMI_ISession_getOutputsPtr&, const ::std::string&, const ::Ice::Context&);
    
    ::IceInternal::ProxyHandle<ISession> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ISession*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<ISession*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ISession> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ISession*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<ISession*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ISession> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ISession*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<ISession*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ISession> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ISession*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<ISession*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ISession> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ISession*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<ISession*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ISession> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ISession*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<ISession*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ISession> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ISession*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<ISession*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ISession> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ISession*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<ISession*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ISession> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ISession*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<ISession*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ISession> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ISession*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<ISession*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ISession> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ISession*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<ISession*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ISession> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ISession*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<ISession*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ISession> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ISession*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<ISession*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ISession> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ISession*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<ISession*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ISession> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ISession*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<ISession*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ISession> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ISession*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<ISession*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ISession> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ISession*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<ISession*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ISession> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ISession*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<ISession*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ISession> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ISession*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<ISession*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

namespace api
{

class ISession : virtual public ::IceDelegate::omero::api::ServiceInterface
{
public:

    virtual ::omero::model::SessionPtr createSession(const ::omero::sys::PrincipalPtr&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::omero::model::SessionPtr createUserSession(::Ice::Long, ::Ice::Long, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::omero::model::SessionPtr createSessionWithTimeout(const ::omero::sys::PrincipalPtr&, ::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::omero::model::SessionPtr createSessionWithTimeouts(const ::omero::sys::PrincipalPtr&, ::Ice::Long, ::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::omero::model::SessionPtr getSession(const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getReferenceCount(const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int closeSession(const ::omero::model::SessionPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::api::SessionList getMyOpenSessions(const ::Ice::Context*) = 0;

    virtual ::omero::api::SessionList getMyOpenAgentSessions(const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::omero::api::SessionList getMyOpenClientSessions(const ::Ice::Context*) = 0;

    virtual ::omero::RTypePtr getInput(const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::omero::RTypePtr getOutput(const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual void setInput(const ::std::string&, const ::std::string&, const ::omero::RTypePtr&, const ::Ice::Context*) = 0;

    virtual void setOutput(const ::std::string&, const ::std::string&, const ::omero::RTypePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::api::StringSet getInputKeys(const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::omero::api::StringSet getOutputKeys(const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::omero::RTypeDict getInputs(const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::omero::RTypeDict getOutputs(const ::std::string&, const ::Ice::Context*) = 0;
};

}

}

}

namespace IceDelegateM
{

namespace omero
{

namespace api
{

class ISession : virtual public ::IceDelegate::omero::api::ISession,
                 virtual public ::IceDelegateM::omero::api::ServiceInterface
{
public:

    virtual ::omero::model::SessionPtr createSession(const ::omero::sys::PrincipalPtr&, const ::std::string&, const ::Ice::Context*);

    virtual ::omero::model::SessionPtr createUserSession(::Ice::Long, ::Ice::Long, const ::std::string&, const ::Ice::Context*);

    virtual ::omero::model::SessionPtr createSessionWithTimeout(const ::omero::sys::PrincipalPtr&, ::Ice::Long, const ::Ice::Context*);

    virtual ::omero::model::SessionPtr createSessionWithTimeouts(const ::omero::sys::PrincipalPtr&, ::Ice::Long, ::Ice::Long, const ::Ice::Context*);

    virtual ::omero::model::SessionPtr getSession(const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int getReferenceCount(const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int closeSession(const ::omero::model::SessionPtr&, const ::Ice::Context*);

    virtual ::omero::api::SessionList getMyOpenSessions(const ::Ice::Context*);

    virtual ::omero::api::SessionList getMyOpenAgentSessions(const ::std::string&, const ::Ice::Context*);

    virtual ::omero::api::SessionList getMyOpenClientSessions(const ::Ice::Context*);

    virtual ::omero::RTypePtr getInput(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::omero::RTypePtr getOutput(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual void setInput(const ::std::string&, const ::std::string&, const ::omero::RTypePtr&, const ::Ice::Context*);

    virtual void setOutput(const ::std::string&, const ::std::string&, const ::omero::RTypePtr&, const ::Ice::Context*);

    virtual ::omero::api::StringSet getInputKeys(const ::std::string&, const ::Ice::Context*);

    virtual ::omero::api::StringSet getOutputKeys(const ::std::string&, const ::Ice::Context*);

    virtual ::omero::RTypeDict getInputs(const ::std::string&, const ::Ice::Context*);

    virtual ::omero::RTypeDict getOutputs(const ::std::string&, const ::Ice::Context*);
};

}

}

}

namespace IceDelegateD
{

namespace omero
{

namespace api
{

class ISession : virtual public ::IceDelegate::omero::api::ISession,
                 virtual public ::IceDelegateD::omero::api::ServiceInterface
{
public:

    virtual ::omero::model::SessionPtr createSession(const ::omero::sys::PrincipalPtr&, const ::std::string&, const ::Ice::Context*);

    virtual ::omero::model::SessionPtr createUserSession(::Ice::Long, ::Ice::Long, const ::std::string&, const ::Ice::Context*);

    virtual ::omero::model::SessionPtr createSessionWithTimeout(const ::omero::sys::PrincipalPtr&, ::Ice::Long, const ::Ice::Context*);

    virtual ::omero::model::SessionPtr createSessionWithTimeouts(const ::omero::sys::PrincipalPtr&, ::Ice::Long, ::Ice::Long, const ::Ice::Context*);

    virtual ::omero::model::SessionPtr getSession(const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int getReferenceCount(const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int closeSession(const ::omero::model::SessionPtr&, const ::Ice::Context*);

    virtual ::omero::api::SessionList getMyOpenSessions(const ::Ice::Context*);

    virtual ::omero::api::SessionList getMyOpenAgentSessions(const ::std::string&, const ::Ice::Context*);

    virtual ::omero::api::SessionList getMyOpenClientSessions(const ::Ice::Context*);

    virtual ::omero::RTypePtr getInput(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::omero::RTypePtr getOutput(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual void setInput(const ::std::string&, const ::std::string&, const ::omero::RTypePtr&, const ::Ice::Context*);

    virtual void setOutput(const ::std::string&, const ::std::string&, const ::omero::RTypePtr&, const ::Ice::Context*);

    virtual ::omero::api::StringSet getInputKeys(const ::std::string&, const ::Ice::Context*);

    virtual ::omero::api::StringSet getOutputKeys(const ::std::string&, const ::Ice::Context*);

    virtual ::omero::RTypeDict getInputs(const ::std::string&, const ::Ice::Context*);

    virtual ::omero::RTypeDict getOutputs(const ::std::string&, const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace api
{

class ISession : virtual public ::omero::api::ServiceInterface
{
public:

    typedef ISessionPrx ProxyType;
    typedef ISessionPtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void createSession_async(const ::omero::api::AMD_ISession_createSessionPtr&, const ::omero::sys::PrincipalPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___createSession(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void createUserSession_async(const ::omero::api::AMD_ISession_createUserSessionPtr&, ::Ice::Long, ::Ice::Long, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___createUserSession(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void createSessionWithTimeout_async(const ::omero::api::AMD_ISession_createSessionWithTimeoutPtr&, const ::omero::sys::PrincipalPtr&, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___createSessionWithTimeout(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void createSessionWithTimeouts_async(const ::omero::api::AMD_ISession_createSessionWithTimeoutsPtr&, const ::omero::sys::PrincipalPtr&, ::Ice::Long, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___createSessionWithTimeouts(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getSession_async(const ::omero::api::AMD_ISession_getSessionPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getSession(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getReferenceCount_async(const ::omero::api::AMD_ISession_getReferenceCountPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getReferenceCount(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void closeSession_async(const ::omero::api::AMD_ISession_closeSessionPtr&, const ::omero::model::SessionPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___closeSession(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getMyOpenSessions_async(const ::omero::api::AMD_ISession_getMyOpenSessionsPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getMyOpenSessions(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getMyOpenAgentSessions_async(const ::omero::api::AMD_ISession_getMyOpenAgentSessionsPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getMyOpenAgentSessions(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getMyOpenClientSessions_async(const ::omero::api::AMD_ISession_getMyOpenClientSessionsPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getMyOpenClientSessions(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getInput_async(const ::omero::api::AMD_ISession_getInputPtr&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getInput(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getOutput_async(const ::omero::api::AMD_ISession_getOutputPtr&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getOutput(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setInput_async(const ::omero::api::AMD_ISession_setInputPtr&, const ::std::string&, const ::std::string&, const ::omero::RTypePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setInput(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setOutput_async(const ::omero::api::AMD_ISession_setOutputPtr&, const ::std::string&, const ::std::string&, const ::omero::RTypePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setOutput(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getInputKeys_async(const ::omero::api::AMD_ISession_getInputKeysPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getInputKeys(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getOutputKeys_async(const ::omero::api::AMD_ISession_getOutputKeysPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getOutputKeys(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getInputs_async(const ::omero::api::AMD_ISession_getInputsPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getInputs(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getOutputs_async(const ::omero::api::AMD_ISession_getOutputsPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getOutputs(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

}

}

#endif
