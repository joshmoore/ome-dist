// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `Scripts.ice'

#ifndef __omero__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_Scripts_h__
#define __omero__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_Scripts_h__

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
#include <omero/RTypes.h>
#include <omero/System.h>
#include <omero/ServerErrors.h>
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

class Internal;

class RInternal;

class Plane;

class Point;

class Color;

namespace grid
{

class Param;

class JobParams;

class ProcessCallback;

class Process;

class ScriptProcess;

class Processor;

class ProcessorCallback;

class InteractiveProcessor;

}

}

}

namespace omero
{

class Internal;
bool operator==(const Internal&, const Internal&);
bool operator<(const Internal&, const Internal&);

class RInternal;
bool operator==(const RInternal&, const RInternal&);
bool operator<(const RInternal&, const RInternal&);

class Plane;
bool operator==(const Plane&, const Plane&);
bool operator<(const Plane&, const Plane&);

class Point;
bool operator==(const Point&, const Point&);
bool operator<(const Point&, const Point&);

class Color;
bool operator==(const Color&, const Color&);
bool operator<(const Color&, const Color&);

namespace grid
{

class Param;
bool operator==(const Param&, const Param&);
bool operator<(const Param&, const Param&);

class JobParams;
bool operator==(const JobParams&, const JobParams&);
bool operator<(const JobParams&, const JobParams&);

class ProcessCallback;
bool operator==(const ProcessCallback&, const ProcessCallback&);
bool operator<(const ProcessCallback&, const ProcessCallback&);

class Process;
bool operator==(const Process&, const Process&);
bool operator<(const Process&, const Process&);

class ScriptProcess;
bool operator==(const ScriptProcess&, const ScriptProcess&);
bool operator<(const ScriptProcess&, const ScriptProcess&);

class Processor;
bool operator==(const Processor&, const Processor&);
bool operator<(const Processor&, const Processor&);

class ProcessorCallback;
bool operator==(const ProcessorCallback&, const ProcessorCallback&);
bool operator<(const ProcessorCallback&, const ProcessorCallback&);

class InteractiveProcessor;
bool operator==(const InteractiveProcessor&, const InteractiveProcessor&);
bool operator<(const InteractiveProcessor&, const InteractiveProcessor&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::Internal*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::Internal*);

::Ice::Object* upCast(::omero::RInternal*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::RInternal*);

::Ice::Object* upCast(::omero::Plane*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::Plane*);

::Ice::Object* upCast(::omero::Point*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::Point*);

::Ice::Object* upCast(::omero::Color*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::Color*);

::Ice::Object* upCast(::omero::grid::Param*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::grid::Param*);

::Ice::Object* upCast(::omero::grid::JobParams*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::grid::JobParams*);

::Ice::Object* upCast(::omero::grid::ProcessCallback*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::grid::ProcessCallback*);

::Ice::Object* upCast(::omero::grid::Process*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::grid::Process*);

::Ice::Object* upCast(::omero::grid::ScriptProcess*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::grid::ScriptProcess*);

::Ice::Object* upCast(::omero::grid::Processor*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::grid::Processor*);

::Ice::Object* upCast(::omero::grid::ProcessorCallback*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::grid::ProcessorCallback*);

::Ice::Object* upCast(::omero::grid::InteractiveProcessor*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::grid::InteractiveProcessor*);

}

namespace omero
{

typedef ::IceInternal::Handle< ::omero::Internal> InternalPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::Internal> InternalPrx;

void __read(::IceInternal::BasicStream*, InternalPrx&);
void __patch__InternalPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::RInternal> RInternalPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::RInternal> RInternalPrx;

void __read(::IceInternal::BasicStream*, RInternalPrx&);
void __patch__RInternalPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::Plane> PlanePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::Plane> PlanePrx;

void __read(::IceInternal::BasicStream*, PlanePrx&);
void __patch__PlanePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::Point> PointPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::Point> PointPrx;

void __read(::IceInternal::BasicStream*, PointPrx&);
void __patch__PointPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::Color> ColorPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::Color> ColorPrx;

void __read(::IceInternal::BasicStream*, ColorPrx&);
void __patch__ColorPtr(void*, ::Ice::ObjectPtr&);

namespace grid
{

typedef ::IceInternal::Handle< ::omero::grid::Param> ParamPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::grid::Param> ParamPrx;

void __read(::IceInternal::BasicStream*, ParamPrx&);
void __patch__ParamPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::grid::JobParams> JobParamsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::grid::JobParams> JobParamsPrx;

void __read(::IceInternal::BasicStream*, JobParamsPrx&);
void __patch__JobParamsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::grid::ProcessCallback> ProcessCallbackPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::grid::ProcessCallback> ProcessCallbackPrx;

void __read(::IceInternal::BasicStream*, ProcessCallbackPrx&);
void __patch__ProcessCallbackPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::grid::Process> ProcessPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::grid::Process> ProcessPrx;

void __read(::IceInternal::BasicStream*, ProcessPrx&);
void __patch__ProcessPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::grid::ScriptProcess> ScriptProcessPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::grid::ScriptProcess> ScriptProcessPrx;

void __read(::IceInternal::BasicStream*, ScriptProcessPrx&);
void __patch__ScriptProcessPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::grid::Processor> ProcessorPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::grid::Processor> ProcessorPrx;

void __read(::IceInternal::BasicStream*, ProcessorPrx&);
void __patch__ProcessorPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::grid::ProcessorCallback> ProcessorCallbackPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::grid::ProcessorCallback> ProcessorCallbackPrx;

void __read(::IceInternal::BasicStream*, ProcessorCallbackPrx&);
void __patch__ProcessorCallbackPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::grid::InteractiveProcessor> InteractiveProcessorPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::grid::InteractiveProcessor> InteractiveProcessorPrx;

void __read(::IceInternal::BasicStream*, InteractiveProcessorPrx&);
void __patch__InteractiveProcessorPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace omero
{

typedef ::std::vector< ::Ice::ByteSeq> Bytes2D;
void __writeBytes2D(::IceInternal::BasicStream*, const ::Ice::ByteSeq*, const ::Ice::ByteSeq*);
void __readBytes2D(::IceInternal::BasicStream*, Bytes2D&);

namespace grid
{

typedef ::std::map< ::std::string, ::omero::grid::ParamPtr> ParamMap;
void __writeParamMap(::IceInternal::BasicStream*, const ParamMap&);
void __readParamMap(::IceInternal::BasicStream*, ParamMap&);

typedef ::std::vector< ::omero::grid::InteractiveProcessorPrx> InteractiveProcessorList;
void __writeInteractiveProcessorList(::IceInternal::BasicStream*, const ::omero::grid::InteractiveProcessorPrx*, const ::omero::grid::InteractiveProcessorPrx*);
void __readInteractiveProcessorList(::IceInternal::BasicStream*, InteractiveProcessorList&);

}

}

namespace omero
{

namespace grid
{

class AMI_ProcessCallback_processFinished : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::grid::ProcessCallbackPrx&, ::Ice::Int, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::grid::AMI_ProcessCallback_processFinished> AMI_ProcessCallback_processFinishedPtr;

class AMI_ProcessCallback_processCancelled : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::grid::ProcessCallbackPrx&, bool, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::grid::AMI_ProcessCallback_processCancelled> AMI_ProcessCallback_processCancelledPtr;

class AMI_ProcessCallback_processKilled : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::grid::ProcessCallbackPrx&, bool, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::grid::AMI_ProcessCallback_processKilled> AMI_ProcessCallback_processKilledPtr;

class AMI_Process_poll : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::RIntPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::grid::ProcessPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::grid::AMI_Process_poll> AMI_Process_pollPtr;

class AMI_Process_wait : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::grid::ProcessPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::grid::AMI_Process_wait> AMI_Process_waitPtr;

class AMI_Process_cancel : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(bool) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::grid::ProcessPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::grid::AMI_Process_cancel> AMI_Process_cancelPtr;

class AMI_Process_kill : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(bool) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::grid::ProcessPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::grid::AMI_Process_kill> AMI_Process_killPtr;

class AMI_Process_shutdown : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::grid::ProcessPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::grid::AMI_Process_shutdown> AMI_Process_shutdownPtr;

class AMI_Process_registerCallback : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::grid::ProcessPrx&, const ::omero::grid::ProcessCallbackPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::grid::AMI_Process_registerCallback> AMI_Process_registerCallbackPtr;

class AMI_Process_unregisterCallback : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::grid::ProcessPrx&, const ::omero::grid::ProcessCallbackPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::grid::AMI_Process_unregisterCallback> AMI_Process_unregisterCallbackPtr;

class AMI_Processor_willAccept : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::grid::ProcessorPrx&, const ::omero::model::ExperimenterPtr&, const ::omero::model::ExperimenterGroupPtr&, const ::omero::model::JobPtr&, const ::omero::grid::ProcessorCallbackPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::grid::AMI_Processor_willAccept> AMI_Processor_willAcceptPtr;

class AMI_Processor_requestRunning : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::grid::ProcessorPrx&, const ::omero::grid::ProcessorCallbackPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::grid::AMI_Processor_requestRunning> AMI_Processor_requestRunningPtr;

class AMI_Processor_parseJob : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::grid::JobParamsPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::grid::ProcessorPrx&, const ::std::string&, const ::omero::model::JobPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::grid::AMI_Processor_parseJob> AMI_Processor_parseJobPtr;

class AMI_Processor_processJob : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::grid::ProcessPrx&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::grid::ProcessorPrx&, const ::std::string&, const ::omero::grid::JobParamsPtr&, const ::omero::model::JobPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::grid::AMI_Processor_processJob> AMI_Processor_processJobPtr;

class AMI_InteractiveProcessor_expires : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(::Ice::Long) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::grid::InteractiveProcessorPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::grid::AMI_InteractiveProcessor_expires> AMI_InteractiveProcessor_expiresPtr;

class AMI_InteractiveProcessor_getJob : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::model::JobPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::grid::InteractiveProcessorPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::grid::AMI_InteractiveProcessor_getJob> AMI_InteractiveProcessor_getJobPtr;

class AMI_InteractiveProcessor_params : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::grid::JobParamsPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::grid::InteractiveProcessorPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::grid::AMI_InteractiveProcessor_params> AMI_InteractiveProcessor_paramsPtr;

class AMI_InteractiveProcessor_execute : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::grid::ProcessPrx&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::grid::InteractiveProcessorPrx&, const ::omero::RMapPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::grid::AMI_InteractiveProcessor_execute> AMI_InteractiveProcessor_executePtr;

class AMI_InteractiveProcessor_getResults : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::RMapPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::grid::InteractiveProcessorPrx&, const ::omero::grid::ProcessPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::grid::AMI_InteractiveProcessor_getResults> AMI_InteractiveProcessor_getResultsPtr;

class AMI_InteractiveProcessor_setDetach : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(bool) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::grid::InteractiveProcessorPrx&, bool, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::grid::AMI_InteractiveProcessor_setDetach> AMI_InteractiveProcessor_setDetachPtr;

class AMI_InteractiveProcessor_stop : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::grid::InteractiveProcessorPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::grid::AMI_InteractiveProcessor_stop> AMI_InteractiveProcessor_stopPtr;

}

}

namespace IceProxy
{

namespace omero
{

class Internal : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<Internal> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Internal*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Internal*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Internal> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Internal*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Internal*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Internal> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Internal*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Internal*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Internal> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Internal*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Internal*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Internal> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Internal*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Internal*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Internal> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Internal*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Internal*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Internal> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Internal*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Internal*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Internal> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Internal*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Internal*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Internal> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Internal*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Internal*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Internal> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Internal*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Internal*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Internal> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Internal*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Internal*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Internal> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Internal*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Internal*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Internal> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Internal*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Internal*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Internal> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Internal*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Internal*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Internal> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Internal*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Internal*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Internal> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Internal*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Internal*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Internal> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Internal*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Internal*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Internal> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Internal*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Internal*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Internal> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Internal*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Internal*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class RInternal : virtual public ::IceProxy::omero::RType
{
public:

    ::omero::InternalPtr getValue()
    {
        return getValue(0);
    }
    ::omero::InternalPtr getValue(const ::Ice::Context& __ctx)
    {
        return getValue(&__ctx);
    }
    
private:

    ::omero::InternalPtr getValue(const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<RInternal> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RInternal*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<RInternal*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RInternal> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RInternal*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<RInternal*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RInternal> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RInternal*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<RInternal*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RInternal> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RInternal*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<RInternal*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RInternal> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RInternal*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<RInternal*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RInternal> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RInternal*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<RInternal*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RInternal> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RInternal*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<RInternal*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RInternal> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RInternal*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<RInternal*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RInternal> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RInternal*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<RInternal*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RInternal> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RInternal*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<RInternal*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RInternal> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RInternal*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<RInternal*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RInternal> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RInternal*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<RInternal*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RInternal> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RInternal*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<RInternal*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RInternal> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RInternal*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<RInternal*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RInternal> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RInternal*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<RInternal*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RInternal> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RInternal*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<RInternal*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RInternal> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RInternal*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<RInternal*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RInternal> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RInternal*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<RInternal*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RInternal> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RInternal*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<RInternal*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class Plane : virtual public ::IceProxy::omero::Internal
{
public:
    
    ::IceInternal::ProxyHandle<Plane> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Plane*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Plane*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Plane> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Plane*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Plane*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Plane> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Plane*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Plane*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Plane> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Plane*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Plane*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Plane> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Plane*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Plane*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Plane> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Plane*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Plane*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Plane> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Plane*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Plane*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Plane> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Plane*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Plane*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Plane> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Plane*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Plane*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Plane> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Plane*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Plane*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Plane> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Plane*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Plane*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Plane> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Plane*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Plane*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Plane> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Plane*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Plane*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Plane> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Plane*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Plane*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Plane> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Plane*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Plane*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Plane> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Plane*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Plane*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Plane> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Plane*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Plane*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Plane> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Plane*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Plane*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Plane> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Plane*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Plane*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class Point : virtual public ::IceProxy::omero::Internal
{
public:
    
    ::IceInternal::ProxyHandle<Point> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Point*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Point*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Point> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Point*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Point*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Point> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Point*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Point*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Point> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Point*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Point*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Point> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Point*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Point*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Point> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Point*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Point*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Point> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Point*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Point*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Point> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Point*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Point*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Point> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Point*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Point*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Point> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Point*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Point*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Point> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Point*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Point*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Point> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Point*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Point*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Point> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Point*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Point*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Point> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Point*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Point*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Point> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Point*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Point*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Point> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Point*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Point*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Point> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Point*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Point*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Point> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Point*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Point*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Point> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Point*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Point*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class Color : virtual public ::IceProxy::omero::Internal
{
public:
    
    ::IceInternal::ProxyHandle<Color> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Color*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Color*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Color> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Color*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Color*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Color> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Color*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Color*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Color> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Color*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Color*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Color> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Color*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Color*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Color> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Color*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Color*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Color> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Color*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Color*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Color> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Color*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Color*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Color> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Color*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Color*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Color> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Color*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Color*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Color> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Color*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Color*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Color> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Color*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Color*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Color> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Color*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Color*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Color> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Color*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Color*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Color> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Color*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Color*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Color> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Color*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Color*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Color> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Color*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Color*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Color> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Color*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Color*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Color> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Color*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Color*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

namespace grid
{

class Param : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<Param> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Param*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Param*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Param> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Param*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Param*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Param> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Param*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Param*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Param> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Param*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Param*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Param> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Param*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Param*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Param> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Param*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Param*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Param> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Param*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Param*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Param> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Param*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Param*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Param> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Param*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Param*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Param> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Param*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Param*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Param> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Param*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Param*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Param> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Param*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Param*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Param> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Param*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Param*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Param> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Param*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Param*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Param> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Param*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Param*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Param> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Param*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Param*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Param> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Param*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Param*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Param> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Param*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Param*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Param> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Param*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Param*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class JobParams : virtual public ::IceProxy::omero::Internal
{
public:
    
    ::IceInternal::ProxyHandle<JobParams> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<JobParams*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<JobParams*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<JobParams> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<JobParams*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<JobParams*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<JobParams> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<JobParams*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<JobParams*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<JobParams> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<JobParams*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<JobParams*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<JobParams> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<JobParams*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<JobParams*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<JobParams> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<JobParams*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<JobParams*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<JobParams> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<JobParams*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<JobParams*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<JobParams> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<JobParams*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<JobParams*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<JobParams> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<JobParams*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<JobParams*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<JobParams> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<JobParams*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<JobParams*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<JobParams> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<JobParams*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<JobParams*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<JobParams> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<JobParams*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<JobParams*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<JobParams> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<JobParams*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<JobParams*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<JobParams> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<JobParams*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<JobParams*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<JobParams> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<JobParams*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<JobParams*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<JobParams> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<JobParams*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<JobParams*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<JobParams> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<JobParams*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<JobParams*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<JobParams> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<JobParams*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<JobParams*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<JobParams> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<JobParams*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<JobParams*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class ProcessCallback : virtual public ::IceProxy::Ice::Object
{
public:

    void processFinished(::Ice::Int returncode)
    {
        processFinished(returncode, 0);
    }
    void processFinished(::Ice::Int returncode, const ::Ice::Context& __ctx)
    {
        processFinished(returncode, &__ctx);
    }
    
private:

    void processFinished(::Ice::Int, const ::Ice::Context*);
    
public:
    bool processFinished_async(const ::omero::grid::AMI_ProcessCallback_processFinishedPtr&, ::Ice::Int);
    bool processFinished_async(const ::omero::grid::AMI_ProcessCallback_processFinishedPtr&, ::Ice::Int, const ::Ice::Context&);

    void processCancelled(bool success)
    {
        processCancelled(success, 0);
    }
    void processCancelled(bool success, const ::Ice::Context& __ctx)
    {
        processCancelled(success, &__ctx);
    }
    
private:

    void processCancelled(bool, const ::Ice::Context*);
    
public:
    bool processCancelled_async(const ::omero::grid::AMI_ProcessCallback_processCancelledPtr&, bool);
    bool processCancelled_async(const ::omero::grid::AMI_ProcessCallback_processCancelledPtr&, bool, const ::Ice::Context&);

    void processKilled(bool success)
    {
        processKilled(success, 0);
    }
    void processKilled(bool success, const ::Ice::Context& __ctx)
    {
        processKilled(success, &__ctx);
    }
    
private:

    void processKilled(bool, const ::Ice::Context*);
    
public:
    bool processKilled_async(const ::omero::grid::AMI_ProcessCallback_processKilledPtr&, bool);
    bool processKilled_async(const ::omero::grid::AMI_ProcessCallback_processKilledPtr&, bool, const ::Ice::Context&);
    
    ::IceInternal::ProxyHandle<ProcessCallback> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ProcessCallback*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<ProcessCallback*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ProcessCallback> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ProcessCallback*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<ProcessCallback*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ProcessCallback> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ProcessCallback*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<ProcessCallback*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ProcessCallback> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ProcessCallback*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<ProcessCallback*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ProcessCallback> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ProcessCallback*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<ProcessCallback*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ProcessCallback> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ProcessCallback*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<ProcessCallback*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ProcessCallback> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ProcessCallback*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<ProcessCallback*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ProcessCallback> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ProcessCallback*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<ProcessCallback*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ProcessCallback> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ProcessCallback*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<ProcessCallback*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ProcessCallback> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ProcessCallback*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<ProcessCallback*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ProcessCallback> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ProcessCallback*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<ProcessCallback*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ProcessCallback> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ProcessCallback*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<ProcessCallback*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ProcessCallback> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ProcessCallback*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<ProcessCallback*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ProcessCallback> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ProcessCallback*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<ProcessCallback*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ProcessCallback> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ProcessCallback*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<ProcessCallback*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ProcessCallback> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ProcessCallback*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<ProcessCallback*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ProcessCallback> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ProcessCallback*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<ProcessCallback*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ProcessCallback> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ProcessCallback*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<ProcessCallback*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ProcessCallback> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ProcessCallback*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<ProcessCallback*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class Process : virtual public ::IceProxy::Ice::Object
{
public:

    ::omero::RIntPtr poll()
    {
        return poll(0);
    }
    ::omero::RIntPtr poll(const ::Ice::Context& __ctx)
    {
        return poll(&__ctx);
    }
    
private:

    ::omero::RIntPtr poll(const ::Ice::Context*);
    
public:
    bool poll_async(const ::omero::grid::AMI_Process_pollPtr&);
    bool poll_async(const ::omero::grid::AMI_Process_pollPtr&, const ::Ice::Context&);

    ::Ice::Int wait()
    {
        return wait(0);
    }
    ::Ice::Int wait(const ::Ice::Context& __ctx)
    {
        return wait(&__ctx);
    }
    
private:

    ::Ice::Int wait(const ::Ice::Context*);
    
public:
    bool wait_async(const ::omero::grid::AMI_Process_waitPtr&);
    bool wait_async(const ::omero::grid::AMI_Process_waitPtr&, const ::Ice::Context&);

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
    bool cancel_async(const ::omero::grid::AMI_Process_cancelPtr&);
    bool cancel_async(const ::omero::grid::AMI_Process_cancelPtr&, const ::Ice::Context&);

    bool kill()
    {
        return kill(0);
    }
    bool kill(const ::Ice::Context& __ctx)
    {
        return kill(&__ctx);
    }
    
private:

    bool kill(const ::Ice::Context*);
    
public:
    bool kill_async(const ::omero::grid::AMI_Process_killPtr&);
    bool kill_async(const ::omero::grid::AMI_Process_killPtr&, const ::Ice::Context&);

    void shutdown()
    {
        shutdown(0);
    }
    void shutdown(const ::Ice::Context& __ctx)
    {
        shutdown(&__ctx);
    }
    
private:

    void shutdown(const ::Ice::Context*);
    
public:
    bool shutdown_async(const ::omero::grid::AMI_Process_shutdownPtr&);
    bool shutdown_async(const ::omero::grid::AMI_Process_shutdownPtr&, const ::Ice::Context&);

    void registerCallback(const ::omero::grid::ProcessCallbackPrx& cb)
    {
        registerCallback(cb, 0);
    }
    void registerCallback(const ::omero::grid::ProcessCallbackPrx& cb, const ::Ice::Context& __ctx)
    {
        registerCallback(cb, &__ctx);
    }
    
private:

    void registerCallback(const ::omero::grid::ProcessCallbackPrx&, const ::Ice::Context*);
    
public:
    bool registerCallback_async(const ::omero::grid::AMI_Process_registerCallbackPtr&, const ::omero::grid::ProcessCallbackPrx&);
    bool registerCallback_async(const ::omero::grid::AMI_Process_registerCallbackPtr&, const ::omero::grid::ProcessCallbackPrx&, const ::Ice::Context&);

    void unregisterCallback(const ::omero::grid::ProcessCallbackPrx& cb)
    {
        unregisterCallback(cb, 0);
    }
    void unregisterCallback(const ::omero::grid::ProcessCallbackPrx& cb, const ::Ice::Context& __ctx)
    {
        unregisterCallback(cb, &__ctx);
    }
    
private:

    void unregisterCallback(const ::omero::grid::ProcessCallbackPrx&, const ::Ice::Context*);
    
public:
    bool unregisterCallback_async(const ::omero::grid::AMI_Process_unregisterCallbackPtr&, const ::omero::grid::ProcessCallbackPrx&);
    bool unregisterCallback_async(const ::omero::grid::AMI_Process_unregisterCallbackPtr&, const ::omero::grid::ProcessCallbackPrx&, const ::Ice::Context&);
    
    ::IceInternal::ProxyHandle<Process> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Process*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Process*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Process> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Process*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Process*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Process> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Process*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Process*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Process> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Process*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Process*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Process> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Process*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Process*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Process> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Process*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Process*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Process> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Process*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Process*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Process> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Process*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Process*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Process> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Process*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Process*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Process> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Process*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Process*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Process> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Process*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Process*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Process> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Process*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Process*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Process> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Process*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Process*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Process> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Process*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Process*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Process> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Process*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Process*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Process> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Process*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Process*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Process> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Process*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Process*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Process> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Process*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Process*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Process> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Process*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Process*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class ScriptProcess : virtual public ::IceProxy::omero::grid::Process
{
public:

    ::omero::model::ScriptJobPtr getJob()
    {
        return getJob(0);
    }
    ::omero::model::ScriptJobPtr getJob(const ::Ice::Context& __ctx)
    {
        return getJob(&__ctx);
    }
    
private:

    ::omero::model::ScriptJobPtr getJob(const ::Ice::Context*);
    
public:

    ::omero::RTypeDict getResults(::Ice::Int waitSecs)
    {
        return getResults(waitSecs, 0);
    }
    ::omero::RTypeDict getResults(::Ice::Int waitSecs, const ::Ice::Context& __ctx)
    {
        return getResults(waitSecs, &__ctx);
    }
    
private:

    ::omero::RTypeDict getResults(::Ice::Int, const ::Ice::Context*);
    
public:

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

    void close(bool detach)
    {
        close(detach, 0);
    }
    void close(bool detach, const ::Ice::Context& __ctx)
    {
        close(detach, &__ctx);
    }
    
private:

    void close(bool, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<ScriptProcess> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ScriptProcess*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<ScriptProcess*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ScriptProcess> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ScriptProcess*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<ScriptProcess*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ScriptProcess> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ScriptProcess*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<ScriptProcess*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ScriptProcess> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ScriptProcess*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<ScriptProcess*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ScriptProcess> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ScriptProcess*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<ScriptProcess*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ScriptProcess> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ScriptProcess*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<ScriptProcess*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ScriptProcess> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ScriptProcess*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<ScriptProcess*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ScriptProcess> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ScriptProcess*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<ScriptProcess*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ScriptProcess> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ScriptProcess*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<ScriptProcess*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ScriptProcess> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ScriptProcess*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<ScriptProcess*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ScriptProcess> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ScriptProcess*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<ScriptProcess*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ScriptProcess> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ScriptProcess*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<ScriptProcess*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ScriptProcess> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ScriptProcess*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<ScriptProcess*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ScriptProcess> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ScriptProcess*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<ScriptProcess*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ScriptProcess> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ScriptProcess*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<ScriptProcess*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ScriptProcess> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ScriptProcess*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<ScriptProcess*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ScriptProcess> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ScriptProcess*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<ScriptProcess*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ScriptProcess> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ScriptProcess*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<ScriptProcess*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ScriptProcess> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ScriptProcess*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<ScriptProcess*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class ProcessorCallback : virtual public ::IceProxy::Ice::Object
{
public:

    void isAccepted(bool accepted, const ::std::string& sessionUuid, const ::std::string& procConn)
    {
        isAccepted(accepted, sessionUuid, procConn, 0);
    }
    void isAccepted(bool accepted, const ::std::string& sessionUuid, const ::std::string& procConn, const ::Ice::Context& __ctx)
    {
        isAccepted(accepted, sessionUuid, procConn, &__ctx);
    }
    
private:

    void isAccepted(bool, const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    void isProxyAccepted(bool accepted, const ::std::string& sessionUuid, const ::omero::grid::ProcessorPrx& procProxy)
    {
        isProxyAccepted(accepted, sessionUuid, procProxy, 0);
    }
    void isProxyAccepted(bool accepted, const ::std::string& sessionUuid, const ::omero::grid::ProcessorPrx& procProxy, const ::Ice::Context& __ctx)
    {
        isProxyAccepted(accepted, sessionUuid, procProxy, &__ctx);
    }
    
private:

    void isProxyAccepted(bool, const ::std::string&, const ::omero::grid::ProcessorPrx&, const ::Ice::Context*);
    
public:

    void responseRunning(const ::omero::api::LongList& jobIds)
    {
        responseRunning(jobIds, 0);
    }
    void responseRunning(const ::omero::api::LongList& jobIds, const ::Ice::Context& __ctx)
    {
        responseRunning(jobIds, &__ctx);
    }
    
private:

    void responseRunning(const ::omero::api::LongList&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<ProcessorCallback> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ProcessorCallback*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<ProcessorCallback*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ProcessorCallback> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ProcessorCallback*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<ProcessorCallback*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ProcessorCallback> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ProcessorCallback*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<ProcessorCallback*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ProcessorCallback> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ProcessorCallback*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<ProcessorCallback*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ProcessorCallback> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ProcessorCallback*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<ProcessorCallback*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ProcessorCallback> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ProcessorCallback*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<ProcessorCallback*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ProcessorCallback> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ProcessorCallback*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<ProcessorCallback*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ProcessorCallback> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ProcessorCallback*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<ProcessorCallback*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ProcessorCallback> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ProcessorCallback*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<ProcessorCallback*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ProcessorCallback> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ProcessorCallback*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<ProcessorCallback*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ProcessorCallback> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ProcessorCallback*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<ProcessorCallback*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ProcessorCallback> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ProcessorCallback*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<ProcessorCallback*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ProcessorCallback> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ProcessorCallback*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<ProcessorCallback*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ProcessorCallback> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ProcessorCallback*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<ProcessorCallback*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ProcessorCallback> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ProcessorCallback*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<ProcessorCallback*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ProcessorCallback> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ProcessorCallback*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<ProcessorCallback*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ProcessorCallback> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ProcessorCallback*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<ProcessorCallback*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ProcessorCallback> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ProcessorCallback*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<ProcessorCallback*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ProcessorCallback> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ProcessorCallback*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<ProcessorCallback*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class Processor : virtual public ::IceProxy::Ice::Object
{
public:

    void willAccept(const ::omero::model::ExperimenterPtr& userContext, const ::omero::model::ExperimenterGroupPtr& groupContext, const ::omero::model::JobPtr& scriptContext, const ::omero::grid::ProcessorCallbackPrx& cb)
    {
        willAccept(userContext, groupContext, scriptContext, cb, 0);
    }
    void willAccept(const ::omero::model::ExperimenterPtr& userContext, const ::omero::model::ExperimenterGroupPtr& groupContext, const ::omero::model::JobPtr& scriptContext, const ::omero::grid::ProcessorCallbackPrx& cb, const ::Ice::Context& __ctx)
    {
        willAccept(userContext, groupContext, scriptContext, cb, &__ctx);
    }
    
private:

    void willAccept(const ::omero::model::ExperimenterPtr&, const ::omero::model::ExperimenterGroupPtr&, const ::omero::model::JobPtr&, const ::omero::grid::ProcessorCallbackPrx&, const ::Ice::Context*);
    
public:
    bool willAccept_async(const ::omero::grid::AMI_Processor_willAcceptPtr&, const ::omero::model::ExperimenterPtr&, const ::omero::model::ExperimenterGroupPtr&, const ::omero::model::JobPtr&, const ::omero::grid::ProcessorCallbackPrx&);
    bool willAccept_async(const ::omero::grid::AMI_Processor_willAcceptPtr&, const ::omero::model::ExperimenterPtr&, const ::omero::model::ExperimenterGroupPtr&, const ::omero::model::JobPtr&, const ::omero::grid::ProcessorCallbackPrx&, const ::Ice::Context&);

    void requestRunning(const ::omero::grid::ProcessorCallbackPrx& cb)
    {
        requestRunning(cb, 0);
    }
    void requestRunning(const ::omero::grid::ProcessorCallbackPrx& cb, const ::Ice::Context& __ctx)
    {
        requestRunning(cb, &__ctx);
    }
    
private:

    void requestRunning(const ::omero::grid::ProcessorCallbackPrx&, const ::Ice::Context*);
    
public:
    bool requestRunning_async(const ::omero::grid::AMI_Processor_requestRunningPtr&, const ::omero::grid::ProcessorCallbackPrx&);
    bool requestRunning_async(const ::omero::grid::AMI_Processor_requestRunningPtr&, const ::omero::grid::ProcessorCallbackPrx&, const ::Ice::Context&);

    ::omero::grid::JobParamsPtr parseJob(const ::std::string& session, const ::omero::model::JobPtr& jobObject)
    {
        return parseJob(session, jobObject, 0);
    }
    ::omero::grid::JobParamsPtr parseJob(const ::std::string& session, const ::omero::model::JobPtr& jobObject, const ::Ice::Context& __ctx)
    {
        return parseJob(session, jobObject, &__ctx);
    }
    
private:

    ::omero::grid::JobParamsPtr parseJob(const ::std::string&, const ::omero::model::JobPtr&, const ::Ice::Context*);
    
public:
    bool parseJob_async(const ::omero::grid::AMI_Processor_parseJobPtr&, const ::std::string&, const ::omero::model::JobPtr&);
    bool parseJob_async(const ::omero::grid::AMI_Processor_parseJobPtr&, const ::std::string&, const ::omero::model::JobPtr&, const ::Ice::Context&);

    ::omero::grid::ProcessPrx processJob(const ::std::string& session, const ::omero::grid::JobParamsPtr& params, const ::omero::model::JobPtr& jobObject)
    {
        return processJob(session, params, jobObject, 0);
    }
    ::omero::grid::ProcessPrx processJob(const ::std::string& session, const ::omero::grid::JobParamsPtr& params, const ::omero::model::JobPtr& jobObject, const ::Ice::Context& __ctx)
    {
        return processJob(session, params, jobObject, &__ctx);
    }
    
private:

    ::omero::grid::ProcessPrx processJob(const ::std::string&, const ::omero::grid::JobParamsPtr&, const ::omero::model::JobPtr&, const ::Ice::Context*);
    
public:
    bool processJob_async(const ::omero::grid::AMI_Processor_processJobPtr&, const ::std::string&, const ::omero::grid::JobParamsPtr&, const ::omero::model::JobPtr&);
    bool processJob_async(const ::omero::grid::AMI_Processor_processJobPtr&, const ::std::string&, const ::omero::grid::JobParamsPtr&, const ::omero::model::JobPtr&, const ::Ice::Context&);
    
    ::IceInternal::ProxyHandle<Processor> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Processor*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Processor*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Processor> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Processor*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Processor*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Processor> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Processor*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Processor*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Processor> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Processor*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Processor*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Processor> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Processor*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Processor*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Processor> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Processor*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Processor*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Processor> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Processor*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Processor*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Processor> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Processor*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Processor*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Processor> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Processor*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Processor*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Processor> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Processor*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Processor*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Processor> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Processor*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Processor*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Processor> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Processor*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Processor*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Processor> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Processor*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Processor*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Processor> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Processor*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Processor*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Processor> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Processor*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Processor*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Processor> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Processor*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Processor*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Processor> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Processor*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Processor*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Processor> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Processor*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Processor*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Processor> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Processor*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Processor*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class InteractiveProcessor : virtual public ::IceProxy::Ice::Object
{
public:

    ::Ice::Long expires()
    {
        return expires(0);
    }
    ::Ice::Long expires(const ::Ice::Context& __ctx)
    {
        return expires(&__ctx);
    }
    
private:

    ::Ice::Long expires(const ::Ice::Context*);
    
public:
    bool expires_async(const ::omero::grid::AMI_InteractiveProcessor_expiresPtr&);
    bool expires_async(const ::omero::grid::AMI_InteractiveProcessor_expiresPtr&, const ::Ice::Context&);

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
    bool getJob_async(const ::omero::grid::AMI_InteractiveProcessor_getJobPtr&);
    bool getJob_async(const ::omero::grid::AMI_InteractiveProcessor_getJobPtr&, const ::Ice::Context&);

    ::omero::grid::JobParamsPtr params()
    {
        return params(0);
    }
    ::omero::grid::JobParamsPtr params(const ::Ice::Context& __ctx)
    {
        return params(&__ctx);
    }
    
private:

    ::omero::grid::JobParamsPtr params(const ::Ice::Context*);
    
public:
    bool params_async(const ::omero::grid::AMI_InteractiveProcessor_paramsPtr&);
    bool params_async(const ::omero::grid::AMI_InteractiveProcessor_paramsPtr&, const ::Ice::Context&);

    ::omero::grid::ProcessPrx execute(const ::omero::RMapPtr& inputs)
    {
        return execute(inputs, 0);
    }
    ::omero::grid::ProcessPrx execute(const ::omero::RMapPtr& inputs, const ::Ice::Context& __ctx)
    {
        return execute(inputs, &__ctx);
    }
    
private:

    ::omero::grid::ProcessPrx execute(const ::omero::RMapPtr&, const ::Ice::Context*);
    
public:
    bool execute_async(const ::omero::grid::AMI_InteractiveProcessor_executePtr&, const ::omero::RMapPtr&);
    bool execute_async(const ::omero::grid::AMI_InteractiveProcessor_executePtr&, const ::omero::RMapPtr&, const ::Ice::Context&);

    ::omero::RMapPtr getResults(const ::omero::grid::ProcessPrx& proc)
    {
        return getResults(proc, 0);
    }
    ::omero::RMapPtr getResults(const ::omero::grid::ProcessPrx& proc, const ::Ice::Context& __ctx)
    {
        return getResults(proc, &__ctx);
    }
    
private:

    ::omero::RMapPtr getResults(const ::omero::grid::ProcessPrx&, const ::Ice::Context*);
    
public:
    bool getResults_async(const ::omero::grid::AMI_InteractiveProcessor_getResultsPtr&, const ::omero::grid::ProcessPrx&);
    bool getResults_async(const ::omero::grid::AMI_InteractiveProcessor_getResultsPtr&, const ::omero::grid::ProcessPrx&, const ::Ice::Context&);

    bool setDetach(bool detach)
    {
        return setDetach(detach, 0);
    }
    bool setDetach(bool detach, const ::Ice::Context& __ctx)
    {
        return setDetach(detach, &__ctx);
    }
    
private:

    bool setDetach(bool, const ::Ice::Context*);
    
public:
    bool setDetach_async(const ::omero::grid::AMI_InteractiveProcessor_setDetachPtr&, bool);
    bool setDetach_async(const ::omero::grid::AMI_InteractiveProcessor_setDetachPtr&, bool, const ::Ice::Context&);

    void stop()
    {
        stop(0);
    }
    void stop(const ::Ice::Context& __ctx)
    {
        stop(&__ctx);
    }
    
private:

    void stop(const ::Ice::Context*);
    
public:
    bool stop_async(const ::omero::grid::AMI_InteractiveProcessor_stopPtr&);
    bool stop_async(const ::omero::grid::AMI_InteractiveProcessor_stopPtr&, const ::Ice::Context&);
    
    ::IceInternal::ProxyHandle<InteractiveProcessor> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<InteractiveProcessor*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<InteractiveProcessor*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<InteractiveProcessor> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<InteractiveProcessor*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<InteractiveProcessor*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<InteractiveProcessor> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<InteractiveProcessor*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<InteractiveProcessor*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<InteractiveProcessor> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<InteractiveProcessor*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<InteractiveProcessor*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<InteractiveProcessor> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<InteractiveProcessor*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<InteractiveProcessor*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<InteractiveProcessor> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<InteractiveProcessor*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<InteractiveProcessor*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<InteractiveProcessor> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<InteractiveProcessor*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<InteractiveProcessor*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<InteractiveProcessor> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<InteractiveProcessor*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<InteractiveProcessor*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<InteractiveProcessor> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<InteractiveProcessor*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<InteractiveProcessor*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<InteractiveProcessor> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<InteractiveProcessor*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<InteractiveProcessor*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<InteractiveProcessor> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<InteractiveProcessor*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<InteractiveProcessor*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<InteractiveProcessor> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<InteractiveProcessor*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<InteractiveProcessor*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<InteractiveProcessor> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<InteractiveProcessor*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<InteractiveProcessor*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<InteractiveProcessor> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<InteractiveProcessor*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<InteractiveProcessor*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<InteractiveProcessor> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<InteractiveProcessor*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<InteractiveProcessor*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<InteractiveProcessor> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<InteractiveProcessor*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<InteractiveProcessor*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<InteractiveProcessor> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<InteractiveProcessor*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<InteractiveProcessor*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<InteractiveProcessor> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<InteractiveProcessor*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<InteractiveProcessor*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<InteractiveProcessor> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<InteractiveProcessor*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<InteractiveProcessor*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class Internal : virtual public ::IceDelegate::Ice::Object
{
public:
};

class RInternal : virtual public ::IceDelegate::omero::RType
{
public:

    virtual ::omero::InternalPtr getValue(const ::Ice::Context*) = 0;
};

class Plane : virtual public ::IceDelegate::omero::Internal
{
public:
};

class Point : virtual public ::IceDelegate::omero::Internal
{
public:
};

class Color : virtual public ::IceDelegate::omero::Internal
{
public:
};

namespace grid
{

class Param : virtual public ::IceDelegate::Ice::Object
{
public:
};

class JobParams : virtual public ::IceDelegate::omero::Internal
{
public:
};

class ProcessCallback : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual void processFinished(::Ice::Int, const ::Ice::Context*) = 0;

    virtual void processCancelled(bool, const ::Ice::Context*) = 0;

    virtual void processKilled(bool, const ::Ice::Context*) = 0;
};

class Process : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::omero::RIntPtr poll(const ::Ice::Context*) = 0;

    virtual ::Ice::Int wait(const ::Ice::Context*) = 0;

    virtual bool cancel(const ::Ice::Context*) = 0;

    virtual bool kill(const ::Ice::Context*) = 0;

    virtual void shutdown(const ::Ice::Context*) = 0;

    virtual void registerCallback(const ::omero::grid::ProcessCallbackPrx&, const ::Ice::Context*) = 0;

    virtual void unregisterCallback(const ::omero::grid::ProcessCallbackPrx&, const ::Ice::Context*) = 0;
};

class ScriptProcess : virtual public ::IceDelegate::omero::grid::Process
{
public:

    virtual ::omero::model::ScriptJobPtr getJob(const ::Ice::Context*) = 0;

    virtual ::omero::RTypeDict getResults(::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::std::string setMessage(const ::std::string&, const ::Ice::Context*) = 0;

    virtual void close(bool, const ::Ice::Context*) = 0;
};

class ProcessorCallback : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual void isAccepted(bool, const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual void isProxyAccepted(bool, const ::std::string&, const ::omero::grid::ProcessorPrx&, const ::Ice::Context*) = 0;

    virtual void responseRunning(const ::omero::api::LongList&, const ::Ice::Context*) = 0;
};

class Processor : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual void willAccept(const ::omero::model::ExperimenterPtr&, const ::omero::model::ExperimenterGroupPtr&, const ::omero::model::JobPtr&, const ::omero::grid::ProcessorCallbackPrx&, const ::Ice::Context*) = 0;

    virtual void requestRunning(const ::omero::grid::ProcessorCallbackPrx&, const ::Ice::Context*) = 0;

    virtual ::omero::grid::JobParamsPtr parseJob(const ::std::string&, const ::omero::model::JobPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::grid::ProcessPrx processJob(const ::std::string&, const ::omero::grid::JobParamsPtr&, const ::omero::model::JobPtr&, const ::Ice::Context*) = 0;
};

class InteractiveProcessor : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::Ice::Long expires(const ::Ice::Context*) = 0;

    virtual ::omero::model::JobPtr getJob(const ::Ice::Context*) = 0;

    virtual ::omero::grid::JobParamsPtr params(const ::Ice::Context*) = 0;

    virtual ::omero::grid::ProcessPrx execute(const ::omero::RMapPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RMapPtr getResults(const ::omero::grid::ProcessPrx&, const ::Ice::Context*) = 0;

    virtual bool setDetach(bool, const ::Ice::Context*) = 0;

    virtual void stop(const ::Ice::Context*) = 0;
};

}

}

}

namespace IceDelegateM
{

namespace omero
{

class Internal : virtual public ::IceDelegate::omero::Internal,
                 virtual public ::IceDelegateM::Ice::Object
{
public:
};

class RInternal : virtual public ::IceDelegate::omero::RInternal,
                  virtual public ::IceDelegateM::omero::RType
{
public:

    virtual ::omero::InternalPtr getValue(const ::Ice::Context*);
};

class Plane : virtual public ::IceDelegate::omero::Plane,
              virtual public ::IceDelegateM::omero::Internal
{
public:
};

class Point : virtual public ::IceDelegate::omero::Point,
              virtual public ::IceDelegateM::omero::Internal
{
public:
};

class Color : virtual public ::IceDelegate::omero::Color,
              virtual public ::IceDelegateM::omero::Internal
{
public:
};

namespace grid
{

class Param : virtual public ::IceDelegate::omero::grid::Param,
              virtual public ::IceDelegateM::Ice::Object
{
public:
};

class JobParams : virtual public ::IceDelegate::omero::grid::JobParams,
                  virtual public ::IceDelegateM::omero::Internal
{
public:
};

class ProcessCallback : virtual public ::IceDelegate::omero::grid::ProcessCallback,
                        virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual void processFinished(::Ice::Int, const ::Ice::Context*);

    virtual void processCancelled(bool, const ::Ice::Context*);

    virtual void processKilled(bool, const ::Ice::Context*);
};

class Process : virtual public ::IceDelegate::omero::grid::Process,
                virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::omero::RIntPtr poll(const ::Ice::Context*);

    virtual ::Ice::Int wait(const ::Ice::Context*);

    virtual bool cancel(const ::Ice::Context*);

    virtual bool kill(const ::Ice::Context*);

    virtual void shutdown(const ::Ice::Context*);

    virtual void registerCallback(const ::omero::grid::ProcessCallbackPrx&, const ::Ice::Context*);

    virtual void unregisterCallback(const ::omero::grid::ProcessCallbackPrx&, const ::Ice::Context*);
};

class ScriptProcess : virtual public ::IceDelegate::omero::grid::ScriptProcess,
                      virtual public ::IceDelegateM::omero::grid::Process
{
public:

    virtual ::omero::model::ScriptJobPtr getJob(const ::Ice::Context*);

    virtual ::omero::RTypeDict getResults(::Ice::Int, const ::Ice::Context*);

    virtual ::std::string setMessage(const ::std::string&, const ::Ice::Context*);

    virtual void close(bool, const ::Ice::Context*);
};

class ProcessorCallback : virtual public ::IceDelegate::omero::grid::ProcessorCallback,
                          virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual void isAccepted(bool, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual void isProxyAccepted(bool, const ::std::string&, const ::omero::grid::ProcessorPrx&, const ::Ice::Context*);

    virtual void responseRunning(const ::omero::api::LongList&, const ::Ice::Context*);
};

class Processor : virtual public ::IceDelegate::omero::grid::Processor,
                  virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual void willAccept(const ::omero::model::ExperimenterPtr&, const ::omero::model::ExperimenterGroupPtr&, const ::omero::model::JobPtr&, const ::omero::grid::ProcessorCallbackPrx&, const ::Ice::Context*);

    virtual void requestRunning(const ::omero::grid::ProcessorCallbackPrx&, const ::Ice::Context*);

    virtual ::omero::grid::JobParamsPtr parseJob(const ::std::string&, const ::omero::model::JobPtr&, const ::Ice::Context*);

    virtual ::omero::grid::ProcessPrx processJob(const ::std::string&, const ::omero::grid::JobParamsPtr&, const ::omero::model::JobPtr&, const ::Ice::Context*);
};

class InteractiveProcessor : virtual public ::IceDelegate::omero::grid::InteractiveProcessor,
                             virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::Ice::Long expires(const ::Ice::Context*);

    virtual ::omero::model::JobPtr getJob(const ::Ice::Context*);

    virtual ::omero::grid::JobParamsPtr params(const ::Ice::Context*);

    virtual ::omero::grid::ProcessPrx execute(const ::omero::RMapPtr&, const ::Ice::Context*);

    virtual ::omero::RMapPtr getResults(const ::omero::grid::ProcessPrx&, const ::Ice::Context*);

    virtual bool setDetach(bool, const ::Ice::Context*);

    virtual void stop(const ::Ice::Context*);
};

}

}

}

namespace IceDelegateD
{

namespace omero
{

class Internal : virtual public ::IceDelegate::omero::Internal,
                 virtual public ::IceDelegateD::Ice::Object
{
public:
};

class RInternal : virtual public ::IceDelegate::omero::RInternal,
                  virtual public ::IceDelegateD::omero::RType
{
public:

    virtual ::omero::InternalPtr getValue(const ::Ice::Context*);
};

class Plane : virtual public ::IceDelegate::omero::Plane,
              virtual public ::IceDelegateD::omero::Internal
{
public:
};

class Point : virtual public ::IceDelegate::omero::Point,
              virtual public ::IceDelegateD::omero::Internal
{
public:
};

class Color : virtual public ::IceDelegate::omero::Color,
              virtual public ::IceDelegateD::omero::Internal
{
public:
};

namespace grid
{

class Param : virtual public ::IceDelegate::omero::grid::Param,
              virtual public ::IceDelegateD::Ice::Object
{
public:
};

class JobParams : virtual public ::IceDelegate::omero::grid::JobParams,
                  virtual public ::IceDelegateD::omero::Internal
{
public:
};

class ProcessCallback : virtual public ::IceDelegate::omero::grid::ProcessCallback,
                        virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual void processFinished(::Ice::Int, const ::Ice::Context*);

    virtual void processCancelled(bool, const ::Ice::Context*);

    virtual void processKilled(bool, const ::Ice::Context*);
};

class Process : virtual public ::IceDelegate::omero::grid::Process,
                virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::omero::RIntPtr poll(const ::Ice::Context*);

    virtual ::Ice::Int wait(const ::Ice::Context*);

    virtual bool cancel(const ::Ice::Context*);

    virtual bool kill(const ::Ice::Context*);

    virtual void shutdown(const ::Ice::Context*);

    virtual void registerCallback(const ::omero::grid::ProcessCallbackPrx&, const ::Ice::Context*);

    virtual void unregisterCallback(const ::omero::grid::ProcessCallbackPrx&, const ::Ice::Context*);
};

class ScriptProcess : virtual public ::IceDelegate::omero::grid::ScriptProcess,
                      virtual public ::IceDelegateD::omero::grid::Process
{
public:

    virtual ::omero::model::ScriptJobPtr getJob(const ::Ice::Context*);

    virtual ::omero::RTypeDict getResults(::Ice::Int, const ::Ice::Context*);

    virtual ::std::string setMessage(const ::std::string&, const ::Ice::Context*);

    virtual void close(bool, const ::Ice::Context*);
};

class ProcessorCallback : virtual public ::IceDelegate::omero::grid::ProcessorCallback,
                          virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual void isAccepted(bool, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual void isProxyAccepted(bool, const ::std::string&, const ::omero::grid::ProcessorPrx&, const ::Ice::Context*);

    virtual void responseRunning(const ::omero::api::LongList&, const ::Ice::Context*);
};

class Processor : virtual public ::IceDelegate::omero::grid::Processor,
                  virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual void willAccept(const ::omero::model::ExperimenterPtr&, const ::omero::model::ExperimenterGroupPtr&, const ::omero::model::JobPtr&, const ::omero::grid::ProcessorCallbackPrx&, const ::Ice::Context*);

    virtual void requestRunning(const ::omero::grid::ProcessorCallbackPrx&, const ::Ice::Context*);

    virtual ::omero::grid::JobParamsPtr parseJob(const ::std::string&, const ::omero::model::JobPtr&, const ::Ice::Context*);

    virtual ::omero::grid::ProcessPrx processJob(const ::std::string&, const ::omero::grid::JobParamsPtr&, const ::omero::model::JobPtr&, const ::Ice::Context*);
};

class InteractiveProcessor : virtual public ::IceDelegate::omero::grid::InteractiveProcessor,
                             virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::Ice::Long expires(const ::Ice::Context*);

    virtual ::omero::model::JobPtr getJob(const ::Ice::Context*);

    virtual ::omero::grid::JobParamsPtr params(const ::Ice::Context*);

    virtual ::omero::grid::ProcessPrx execute(const ::omero::RMapPtr&, const ::Ice::Context*);

    virtual ::omero::RMapPtr getResults(const ::omero::grid::ProcessPrx&, const ::Ice::Context*);

    virtual bool setDetach(bool, const ::Ice::Context*);

    virtual void stop(const ::Ice::Context*);
};

}

}

}

namespace omero
{

class Internal : virtual public ::Ice::Object
{
public:

    typedef InternalPrx ProxyType;
    typedef InternalPtr PointerType;
    
    Internal() {}
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

    virtual ~Internal() {}

    friend class Internal__staticInit;
};

class Internal__staticInit
{
public:

    ::omero::Internal _init;
};

static Internal__staticInit _Internal_init;

class RInternal : virtual public ::omero::RType
{
public:

    typedef RInternalPrx ProxyType;
    typedef RInternalPtr PointerType;
    
    RInternal() {}
    explicit RInternal(const ::omero::InternalPtr&);
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

    virtual ::omero::InternalPtr getValue(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getValue(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

protected:

    ::omero::InternalPtr val;
};

class Plane : virtual public ::omero::Internal
{
public:

    typedef PlanePrx ProxyType;
    typedef PlanePtr PointerType;
    
    Plane() {}
    explicit Plane(const ::omero::Bytes2D&);
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

    virtual ~Plane() {}

public:

    ::omero::Bytes2D data;
};

class Point : virtual public ::omero::Internal
{
public:

    typedef PointPrx ProxyType;
    typedef PointPtr PointerType;
    
    Point() {}
    Point(::Ice::Int, ::Ice::Int);
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

    virtual ~Point() {}

public:

    ::Ice::Int x;

    ::Ice::Int y;
};

class Color : virtual public ::omero::Internal
{
public:

    typedef ColorPrx ProxyType;
    typedef ColorPtr PointerType;
    
    Color() {}
    explicit Color(::Ice::Long);
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

    virtual ~Color() {}

public:

    ::Ice::Long packedColor;
};

namespace grid
{

class Param : virtual public ::Ice::Object
{
public:

    typedef ParamPrx ProxyType;
    typedef ParamPtr PointerType;
    
    Param() {}
    Param(const ::std::string&, bool, bool, const ::omero::RTypePtr&, const ::omero::RTypePtr&, const ::omero::RTypePtr&, const ::omero::RListPtr&, const ::std::string&, const ::omero::api::StringSet&);
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

    virtual ~Param() {}

public:

    ::std::string description;

    bool optional;

    bool useDefault;

    ::omero::RTypePtr prototype;

    ::omero::RTypePtr min;

    ::omero::RTypePtr max;

    ::omero::RListPtr values;

    ::std::string grouping;

    ::omero::api::StringSet namespaces;
};

class JobParams : virtual public ::omero::Internal
{
public:

    typedef JobParamsPrx ProxyType;
    typedef JobParamsPtr PointerType;
    
    JobParams() {}
    JobParams(const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, const ::omero::api::StringArray&, const ::omero::api::StringArray&, const ::omero::api::IntegerArrayArray&, const ::omero::grid::ParamMap&, const ::omero::grid::ParamMap&, const ::std::string&, const ::std::string&, const ::omero::api::StringSet&);
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

    virtual ~JobParams() {}

public:

    ::std::string name;

    ::std::string version;

    ::std::string description;

    ::std::string contact;

    ::omero::api::StringArray authors;

    ::omero::api::StringArray institutions;

    ::omero::api::IntegerArrayArray authorsInstitutions;

    ::omero::grid::ParamMap inputs;

    ::omero::grid::ParamMap outputs;

    ::std::string stdoutFormat;

    ::std::string stderrFormat;

    ::omero::api::StringSet namespaces;
};

class ProcessCallback : virtual public ::Ice::Object
{
public:

    typedef ProcessCallbackPrx ProxyType;
    typedef ProcessCallbackPtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void processFinished(::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___processFinished(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void processCancelled(bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___processCancelled(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void processKilled(bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___processKilled(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

class Process : virtual public ::Ice::Object
{
public:

    typedef ProcessPrx ProxyType;
    typedef ProcessPtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::omero::RIntPtr poll(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___poll(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int wait(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___wait(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual bool cancel(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___cancel(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual bool kill(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___kill(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void shutdown(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___shutdown(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void registerCallback(const ::omero::grid::ProcessCallbackPrx&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___registerCallback(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unregisterCallback(const ::omero::grid::ProcessCallbackPrx&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unregisterCallback(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

class ScriptProcess : virtual public ::omero::grid::Process
{
public:

    typedef ScriptProcessPrx ProxyType;
    typedef ScriptProcessPtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::omero::model::ScriptJobPtr getJob(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getJob(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RTypeDict getResults(::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getResults(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::std::string setMessage(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setMessage(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void close(bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___close(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

class ProcessorCallback : virtual public ::Ice::Object
{
public:

    typedef ProcessorCallbackPrx ProxyType;
    typedef ProcessorCallbackPtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void isAccepted(bool, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___isAccepted(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void isProxyAccepted(bool, const ::std::string&, const ::omero::grid::ProcessorPrx&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___isProxyAccepted(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void responseRunning(const ::omero::api::LongList&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___responseRunning(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

class Processor : virtual public ::Ice::Object
{
public:

    typedef ProcessorPrx ProxyType;
    typedef ProcessorPtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void willAccept(const ::omero::model::ExperimenterPtr&, const ::omero::model::ExperimenterGroupPtr&, const ::omero::model::JobPtr&, const ::omero::grid::ProcessorCallbackPrx&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___willAccept(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void requestRunning(const ::omero::grid::ProcessorCallbackPrx&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___requestRunning(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::grid::JobParamsPtr parseJob(const ::std::string&, const ::omero::model::JobPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___parseJob(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::grid::ProcessPrx processJob(const ::std::string&, const ::omero::grid::JobParamsPtr&, const ::omero::model::JobPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___processJob(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

class InteractiveProcessor : virtual public ::Ice::Object
{
public:

    typedef InteractiveProcessorPrx ProxyType;
    typedef InteractiveProcessorPtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::Ice::Long expires(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___expires(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::JobPtr getJob(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getJob(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::grid::JobParamsPtr params(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___params(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::grid::ProcessPrx execute(const ::omero::RMapPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___execute(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RMapPtr getResults(const ::omero::grid::ProcessPrx&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getResults(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual bool setDetach(bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setDetach(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void stop(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___stop(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

}

}

#endif
