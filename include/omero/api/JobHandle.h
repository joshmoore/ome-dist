// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `JobHandle.ice'

#ifndef __omero_api__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_api_JobHandle_h__
#define __omero_api__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_api_JobHandle_h__

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

class JobHandle;

}

}

}

namespace omero
{

namespace api
{

class JobHandle;
bool operator==(const JobHandle&, const JobHandle&);
bool operator<(const JobHandle&, const JobHandle&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::api::JobHandle*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::api::JobHandle*);

}

namespace omero
{

namespace api
{

typedef ::IceInternal::Handle< ::omero::api::JobHandle> JobHandlePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::api::JobHandle> JobHandlePrx;

void __read(::IceInternal::BasicStream*, JobHandlePrx&);
void __patch__JobHandlePtr(void*, ::Ice::ObjectPtr&);

}

}

namespace omero
{

namespace api
{

class AMI_JobHandle_submit : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(::Ice::Long) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::JobHandlePrx&, const ::omero::model::JobPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_JobHandle_submit> AMI_JobHandle_submitPtr;

class AMD_JobHandle_submit : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Long) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_JobHandle_submit> AMD_JobHandle_submitPtr;

class AMI_JobHandle_attach : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::model::JobStatusPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::JobHandlePrx&, ::Ice::Long, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_JobHandle_attach> AMI_JobHandle_attachPtr;

class AMD_JobHandle_attach : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::model::JobStatusPtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_JobHandle_attach> AMD_JobHandle_attachPtr;

class AMI_JobHandle_getJob : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::model::JobPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::JobHandlePrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_JobHandle_getJob> AMI_JobHandle_getJobPtr;

class AMD_JobHandle_getJob : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::model::JobPtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_JobHandle_getJob> AMD_JobHandle_getJobPtr;

class AMI_JobHandle_jobStatus : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::model::JobStatusPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::JobHandlePrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_JobHandle_jobStatus> AMI_JobHandle_jobStatusPtr;

class AMD_JobHandle_jobStatus : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::model::JobStatusPtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_JobHandle_jobStatus> AMD_JobHandle_jobStatusPtr;

class AMI_JobHandle_jobFinished : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::RTimePtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::JobHandlePrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_JobHandle_jobFinished> AMI_JobHandle_jobFinishedPtr;

class AMD_JobHandle_jobFinished : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::RTimePtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_JobHandle_jobFinished> AMD_JobHandle_jobFinishedPtr;

class AMI_JobHandle_jobMessage : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::std::string&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::JobHandlePrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_JobHandle_jobMessage> AMI_JobHandle_jobMessagePtr;

class AMD_JobHandle_jobMessage : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::std::string&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_JobHandle_jobMessage> AMD_JobHandle_jobMessagePtr;

class AMI_JobHandle_jobRunning : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(bool) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::JobHandlePrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_JobHandle_jobRunning> AMI_JobHandle_jobRunningPtr;

class AMD_JobHandle_jobRunning : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(bool) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_JobHandle_jobRunning> AMD_JobHandle_jobRunningPtr;

class AMI_JobHandle_jobError : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(bool) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::JobHandlePrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_JobHandle_jobError> AMI_JobHandle_jobErrorPtr;

class AMD_JobHandle_jobError : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(bool) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_JobHandle_jobError> AMD_JobHandle_jobErrorPtr;

class AMI_JobHandle_cancelJob : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::JobHandlePrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_JobHandle_cancelJob> AMI_JobHandle_cancelJobPtr;

class AMD_JobHandle_cancelJob : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_JobHandle_cancelJob> AMD_JobHandle_cancelJobPtr;

class AMI_JobHandle_setStatus : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::std::string&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::JobHandlePrx&, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_JobHandle_setStatus> AMI_JobHandle_setStatusPtr;

class AMD_JobHandle_setStatus : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::std::string&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_JobHandle_setStatus> AMD_JobHandle_setStatusPtr;

class AMI_JobHandle_setMessage : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::std::string&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::JobHandlePrx&, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_JobHandle_setMessage> AMI_JobHandle_setMessagePtr;

class AMD_JobHandle_setMessage : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::std::string&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_JobHandle_setMessage> AMD_JobHandle_setMessagePtr;

class AMI_JobHandle_setStatusAndMessage : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::std::string&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::JobHandlePrx&, const ::std::string&, const ::omero::RStringPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_JobHandle_setStatusAndMessage> AMI_JobHandle_setStatusAndMessagePtr;

class AMD_JobHandle_setStatusAndMessage : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::std::string&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_JobHandle_setStatusAndMessage> AMD_JobHandle_setStatusAndMessagePtr;

}

}

namespace IceAsync
{

namespace omero
{

namespace api
{

class AMD_JobHandle_submit : public ::omero::api::AMD_JobHandle_submit, public ::IceInternal::IncomingAsync
{
public:

    AMD_JobHandle_submit(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Long);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_JobHandle_attach : public ::omero::api::AMD_JobHandle_attach, public ::IceInternal::IncomingAsync
{
public:

    AMD_JobHandle_attach(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::model::JobStatusPtr&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_JobHandle_getJob : public ::omero::api::AMD_JobHandle_getJob, public ::IceInternal::IncomingAsync
{
public:

    AMD_JobHandle_getJob(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::model::JobPtr&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_JobHandle_jobStatus : public ::omero::api::AMD_JobHandle_jobStatus, public ::IceInternal::IncomingAsync
{
public:

    AMD_JobHandle_jobStatus(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::model::JobStatusPtr&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_JobHandle_jobFinished : public ::omero::api::AMD_JobHandle_jobFinished, public ::IceInternal::IncomingAsync
{
public:

    AMD_JobHandle_jobFinished(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::RTimePtr&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_JobHandle_jobMessage : public ::omero::api::AMD_JobHandle_jobMessage, public ::IceInternal::IncomingAsync
{
public:

    AMD_JobHandle_jobMessage(::IceInternal::Incoming&);

    virtual void ice_response(const ::std::string&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_JobHandle_jobRunning : public ::omero::api::AMD_JobHandle_jobRunning, public ::IceInternal::IncomingAsync
{
public:

    AMD_JobHandle_jobRunning(::IceInternal::Incoming&);

    virtual void ice_response(bool);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_JobHandle_jobError : public ::omero::api::AMD_JobHandle_jobError, public ::IceInternal::IncomingAsync
{
public:

    AMD_JobHandle_jobError(::IceInternal::Incoming&);

    virtual void ice_response(bool);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_JobHandle_cancelJob : public ::omero::api::AMD_JobHandle_cancelJob, public ::IceInternal::IncomingAsync
{
public:

    AMD_JobHandle_cancelJob(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_JobHandle_setStatus : public ::omero::api::AMD_JobHandle_setStatus, public ::IceInternal::IncomingAsync
{
public:

    AMD_JobHandle_setStatus(::IceInternal::Incoming&);

    virtual void ice_response(const ::std::string&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_JobHandle_setMessage : public ::omero::api::AMD_JobHandle_setMessage, public ::IceInternal::IncomingAsync
{
public:

    AMD_JobHandle_setMessage(::IceInternal::Incoming&);

    virtual void ice_response(const ::std::string&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_JobHandle_setStatusAndMessage : public ::omero::api::AMD_JobHandle_setStatusAndMessage, public ::IceInternal::IncomingAsync
{
public:

    AMD_JobHandle_setStatusAndMessage(::IceInternal::Incoming&);

    virtual void ice_response(const ::std::string&);
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

class JobHandle : virtual public ::IceProxy::omero::api::StatefulServiceInterface
{
public:

    ::Ice::Long submit(const ::omero::model::JobPtr& j)
    {
        return submit(j, 0);
    }
    ::Ice::Long submit(const ::omero::model::JobPtr& j, const ::Ice::Context& __ctx)
    {
        return submit(j, &__ctx);
    }
    
private:

    ::Ice::Long submit(const ::omero::model::JobPtr&, const ::Ice::Context*);
    
public:
    bool submit_async(const ::omero::api::AMI_JobHandle_submitPtr&, const ::omero::model::JobPtr&);
    bool submit_async(const ::omero::api::AMI_JobHandle_submitPtr&, const ::omero::model::JobPtr&, const ::Ice::Context&);

    ::omero::model::JobStatusPtr attach(::Ice::Long jobId)
    {
        return attach(jobId, 0);
    }
    ::omero::model::JobStatusPtr attach(::Ice::Long jobId, const ::Ice::Context& __ctx)
    {
        return attach(jobId, &__ctx);
    }
    
private:

    ::omero::model::JobStatusPtr attach(::Ice::Long, const ::Ice::Context*);
    
public:
    bool attach_async(const ::omero::api::AMI_JobHandle_attachPtr&, ::Ice::Long);
    bool attach_async(const ::omero::api::AMI_JobHandle_attachPtr&, ::Ice::Long, const ::Ice::Context&);

    ::omero::model::JobPtr getJob()
    {
        return getJob(0);
    }
    ::omero::model::JobPtr getJob(const ::Ice::Context& __ctx)
    {
        return getJob(&__ctx);
    }
    
private:

    ::omero::model::JobPtr getJob(const ::Ice::Context*);
    
public:
    bool getJob_async(const ::omero::api::AMI_JobHandle_getJobPtr&);
    bool getJob_async(const ::omero::api::AMI_JobHandle_getJobPtr&, const ::Ice::Context&);

    ::omero::model::JobStatusPtr jobStatus()
    {
        return jobStatus(0);
    }
    ::omero::model::JobStatusPtr jobStatus(const ::Ice::Context& __ctx)
    {
        return jobStatus(&__ctx);
    }
    
private:

    ::omero::model::JobStatusPtr jobStatus(const ::Ice::Context*);
    
public:
    bool jobStatus_async(const ::omero::api::AMI_JobHandle_jobStatusPtr&);
    bool jobStatus_async(const ::omero::api::AMI_JobHandle_jobStatusPtr&, const ::Ice::Context&);

    ::omero::RTimePtr jobFinished()
    {
        return jobFinished(0);
    }
    ::omero::RTimePtr jobFinished(const ::Ice::Context& __ctx)
    {
        return jobFinished(&__ctx);
    }
    
private:

    ::omero::RTimePtr jobFinished(const ::Ice::Context*);
    
public:
    bool jobFinished_async(const ::omero::api::AMI_JobHandle_jobFinishedPtr&);
    bool jobFinished_async(const ::omero::api::AMI_JobHandle_jobFinishedPtr&, const ::Ice::Context&);

    ::std::string jobMessage()
    {
        return jobMessage(0);
    }
    ::std::string jobMessage(const ::Ice::Context& __ctx)
    {
        return jobMessage(&__ctx);
    }
    
private:

    ::std::string jobMessage(const ::Ice::Context*);
    
public:
    bool jobMessage_async(const ::omero::api::AMI_JobHandle_jobMessagePtr&);
    bool jobMessage_async(const ::omero::api::AMI_JobHandle_jobMessagePtr&, const ::Ice::Context&);

    bool jobRunning()
    {
        return jobRunning(0);
    }
    bool jobRunning(const ::Ice::Context& __ctx)
    {
        return jobRunning(&__ctx);
    }
    
private:

    bool jobRunning(const ::Ice::Context*);
    
public:
    bool jobRunning_async(const ::omero::api::AMI_JobHandle_jobRunningPtr&);
    bool jobRunning_async(const ::omero::api::AMI_JobHandle_jobRunningPtr&, const ::Ice::Context&);

    bool jobError()
    {
        return jobError(0);
    }
    bool jobError(const ::Ice::Context& __ctx)
    {
        return jobError(&__ctx);
    }
    
private:

    bool jobError(const ::Ice::Context*);
    
public:
    bool jobError_async(const ::omero::api::AMI_JobHandle_jobErrorPtr&);
    bool jobError_async(const ::omero::api::AMI_JobHandle_jobErrorPtr&, const ::Ice::Context&);

    void cancelJob()
    {
        cancelJob(0);
    }
    void cancelJob(const ::Ice::Context& __ctx)
    {
        cancelJob(&__ctx);
    }
    
private:

    void cancelJob(const ::Ice::Context*);
    
public:
    bool cancelJob_async(const ::omero::api::AMI_JobHandle_cancelJobPtr&);
    bool cancelJob_async(const ::omero::api::AMI_JobHandle_cancelJobPtr&, const ::Ice::Context&);

    ::std::string setStatus(const ::std::string& status)
    {
        return setStatus(status, 0);
    }
    ::std::string setStatus(const ::std::string& status, const ::Ice::Context& __ctx)
    {
        return setStatus(status, &__ctx);
    }
    
private:

    ::std::string setStatus(const ::std::string&, const ::Ice::Context*);
    
public:
    bool setStatus_async(const ::omero::api::AMI_JobHandle_setStatusPtr&, const ::std::string&);
    bool setStatus_async(const ::omero::api::AMI_JobHandle_setStatusPtr&, const ::std::string&, const ::Ice::Context&);

    ::std::string setMessage(const ::std::string& message)
    {
        return setMessage(message, 0);
    }
    ::std::string setMessage(const ::std::string& message, const ::Ice::Context& __ctx)
    {
        return setMessage(message, &__ctx);
    }
    
private:

    ::std::string setMessage(const ::std::string&, const ::Ice::Context*);
    
public:
    bool setMessage_async(const ::omero::api::AMI_JobHandle_setMessagePtr&, const ::std::string&);
    bool setMessage_async(const ::omero::api::AMI_JobHandle_setMessagePtr&, const ::std::string&, const ::Ice::Context&);

    ::std::string setStatusAndMessage(const ::std::string& status, const ::omero::RStringPtr& message)
    {
        return setStatusAndMessage(status, message, 0);
    }
    ::std::string setStatusAndMessage(const ::std::string& status, const ::omero::RStringPtr& message, const ::Ice::Context& __ctx)
    {
        return setStatusAndMessage(status, message, &__ctx);
    }
    
private:

    ::std::string setStatusAndMessage(const ::std::string&, const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:
    bool setStatusAndMessage_async(const ::omero::api::AMI_JobHandle_setStatusAndMessagePtr&, const ::std::string&, const ::omero::RStringPtr&);
    bool setStatusAndMessage_async(const ::omero::api::AMI_JobHandle_setStatusAndMessagePtr&, const ::std::string&, const ::omero::RStringPtr&, const ::Ice::Context&);
    
    ::IceInternal::ProxyHandle<JobHandle> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<JobHandle*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<JobHandle*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<JobHandle> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<JobHandle*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<JobHandle*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<JobHandle> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<JobHandle*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<JobHandle*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<JobHandle> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<JobHandle*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<JobHandle*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<JobHandle> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<JobHandle*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<JobHandle*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<JobHandle> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<JobHandle*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<JobHandle*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<JobHandle> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<JobHandle*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<JobHandle*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<JobHandle> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<JobHandle*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<JobHandle*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<JobHandle> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<JobHandle*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<JobHandle*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<JobHandle> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<JobHandle*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<JobHandle*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<JobHandle> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<JobHandle*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<JobHandle*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<JobHandle> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<JobHandle*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<JobHandle*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<JobHandle> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<JobHandle*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<JobHandle*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<JobHandle> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<JobHandle*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<JobHandle*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<JobHandle> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<JobHandle*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<JobHandle*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<JobHandle> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<JobHandle*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<JobHandle*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<JobHandle> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<JobHandle*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<JobHandle*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<JobHandle> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<JobHandle*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<JobHandle*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<JobHandle> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<JobHandle*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<JobHandle*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class JobHandle : virtual public ::IceDelegate::omero::api::StatefulServiceInterface
{
public:

    virtual ::Ice::Long submit(const ::omero::model::JobPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::JobStatusPtr attach(::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::omero::model::JobPtr getJob(const ::Ice::Context*) = 0;

    virtual ::omero::model::JobStatusPtr jobStatus(const ::Ice::Context*) = 0;

    virtual ::omero::RTimePtr jobFinished(const ::Ice::Context*) = 0;

    virtual ::std::string jobMessage(const ::Ice::Context*) = 0;

    virtual bool jobRunning(const ::Ice::Context*) = 0;

    virtual bool jobError(const ::Ice::Context*) = 0;

    virtual void cancelJob(const ::Ice::Context*) = 0;

    virtual ::std::string setStatus(const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::std::string setMessage(const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::std::string setStatusAndMessage(const ::std::string&, const ::omero::RStringPtr&, const ::Ice::Context*) = 0;
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

class JobHandle : virtual public ::IceDelegate::omero::api::JobHandle,
                  virtual public ::IceDelegateM::omero::api::StatefulServiceInterface
{
public:

    virtual ::Ice::Long submit(const ::omero::model::JobPtr&, const ::Ice::Context*);

    virtual ::omero::model::JobStatusPtr attach(::Ice::Long, const ::Ice::Context*);

    virtual ::omero::model::JobPtr getJob(const ::Ice::Context*);

    virtual ::omero::model::JobStatusPtr jobStatus(const ::Ice::Context*);

    virtual ::omero::RTimePtr jobFinished(const ::Ice::Context*);

    virtual ::std::string jobMessage(const ::Ice::Context*);

    virtual bool jobRunning(const ::Ice::Context*);

    virtual bool jobError(const ::Ice::Context*);

    virtual void cancelJob(const ::Ice::Context*);

    virtual ::std::string setStatus(const ::std::string&, const ::Ice::Context*);

    virtual ::std::string setMessage(const ::std::string&, const ::Ice::Context*);

    virtual ::std::string setStatusAndMessage(const ::std::string&, const ::omero::RStringPtr&, const ::Ice::Context*);
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

class JobHandle : virtual public ::IceDelegate::omero::api::JobHandle,
                  virtual public ::IceDelegateD::omero::api::StatefulServiceInterface
{
public:

    virtual ::Ice::Long submit(const ::omero::model::JobPtr&, const ::Ice::Context*);

    virtual ::omero::model::JobStatusPtr attach(::Ice::Long, const ::Ice::Context*);

    virtual ::omero::model::JobPtr getJob(const ::Ice::Context*);

    virtual ::omero::model::JobStatusPtr jobStatus(const ::Ice::Context*);

    virtual ::omero::RTimePtr jobFinished(const ::Ice::Context*);

    virtual ::std::string jobMessage(const ::Ice::Context*);

    virtual bool jobRunning(const ::Ice::Context*);

    virtual bool jobError(const ::Ice::Context*);

    virtual void cancelJob(const ::Ice::Context*);

    virtual ::std::string setStatus(const ::std::string&, const ::Ice::Context*);

    virtual ::std::string setMessage(const ::std::string&, const ::Ice::Context*);

    virtual ::std::string setStatusAndMessage(const ::std::string&, const ::omero::RStringPtr&, const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace api
{

class JobHandle : virtual public ::omero::api::StatefulServiceInterface
{
public:

    typedef JobHandlePrx ProxyType;
    typedef JobHandlePtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void submit_async(const ::omero::api::AMD_JobHandle_submitPtr&, const ::omero::model::JobPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___submit(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void attach_async(const ::omero::api::AMD_JobHandle_attachPtr&, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___attach(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getJob_async(const ::omero::api::AMD_JobHandle_getJobPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getJob(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void jobStatus_async(const ::omero::api::AMD_JobHandle_jobStatusPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___jobStatus(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void jobFinished_async(const ::omero::api::AMD_JobHandle_jobFinishedPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___jobFinished(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void jobMessage_async(const ::omero::api::AMD_JobHandle_jobMessagePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___jobMessage(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void jobRunning_async(const ::omero::api::AMD_JobHandle_jobRunningPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___jobRunning(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void jobError_async(const ::omero::api::AMD_JobHandle_jobErrorPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___jobError(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void cancelJob_async(const ::omero::api::AMD_JobHandle_cancelJobPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___cancelJob(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setStatus_async(const ::omero::api::AMD_JobHandle_setStatusPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setStatus(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setMessage_async(const ::omero::api::AMD_JobHandle_setMessagePtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setMessage(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setStatusAndMessage_async(const ::omero::api::AMD_JobHandle_setStatusAndMessagePtr&, const ::std::string&, const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setStatusAndMessage(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

}

}

#endif
