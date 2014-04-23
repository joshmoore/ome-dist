// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `ITimeline.ice'

#ifndef __omero_api__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_api_ITimeline_h__
#define __omero_api__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_api_ITimeline_h__

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

class ITimeline;

}

}

}

namespace omero
{

namespace api
{

class ITimeline;
bool operator==(const ITimeline&, const ITimeline&);
bool operator<(const ITimeline&, const ITimeline&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::api::ITimeline*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::api::ITimeline*);

}

namespace omero
{

namespace api
{

typedef ::IceInternal::Handle< ::omero::api::ITimeline> ITimelinePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::api::ITimeline> ITimelinePrx;

void __read(::IceInternal::BasicStream*, ITimelinePrx&);
void __patch__ITimelinePtr(void*, ::Ice::ObjectPtr&);

}

}

namespace omero
{

namespace api
{

class AMI_ITimeline_getMostRecentAnnotationLinks : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::IObjectList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ITimelinePrx&, const ::omero::api::StringSet&, const ::omero::api::StringSet&, const ::omero::api::StringSet&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_ITimeline_getMostRecentAnnotationLinks> AMI_ITimeline_getMostRecentAnnotationLinksPtr;

class AMD_ITimeline_getMostRecentAnnotationLinks : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::IObjectList&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_ITimeline_getMostRecentAnnotationLinks> AMD_ITimeline_getMostRecentAnnotationLinksPtr;

class AMI_ITimeline_getMostRecentShareCommentLinks : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::IObjectList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ITimelinePrx&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_ITimeline_getMostRecentShareCommentLinks> AMI_ITimeline_getMostRecentShareCommentLinksPtr;

class AMD_ITimeline_getMostRecentShareCommentLinks : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::IObjectList&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_ITimeline_getMostRecentShareCommentLinks> AMD_ITimeline_getMostRecentShareCommentLinksPtr;

class AMI_ITimeline_getMostRecentObjects : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::IObjectListMap&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ITimelinePrx&, const ::omero::api::StringSet&, const ::omero::sys::ParametersPtr&, bool, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_ITimeline_getMostRecentObjects> AMI_ITimeline_getMostRecentObjectsPtr;

class AMD_ITimeline_getMostRecentObjects : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::IObjectListMap&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_ITimeline_getMostRecentObjects> AMD_ITimeline_getMostRecentObjectsPtr;

class AMI_ITimeline_getByPeriod : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::IObjectListMap&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ITimelinePrx&, const ::omero::api::StringSet&, const ::omero::RTimePtr&, const ::omero::RTimePtr&, const ::omero::sys::ParametersPtr&, bool, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_ITimeline_getByPeriod> AMI_ITimeline_getByPeriodPtr;

class AMD_ITimeline_getByPeriod : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::IObjectListMap&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_ITimeline_getByPeriod> AMD_ITimeline_getByPeriodPtr;

class AMI_ITimeline_countByPeriod : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::StringLongMap&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ITimelinePrx&, const ::omero::api::StringSet&, const ::omero::RTimePtr&, const ::omero::RTimePtr&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_ITimeline_countByPeriod> AMI_ITimeline_countByPeriodPtr;

class AMD_ITimeline_countByPeriod : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::StringLongMap&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_ITimeline_countByPeriod> AMD_ITimeline_countByPeriodPtr;

class AMI_ITimeline_getEventLogsByPeriod : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::EventLogList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ITimelinePrx&, const ::omero::RTimePtr&, const ::omero::RTimePtr&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_ITimeline_getEventLogsByPeriod> AMI_ITimeline_getEventLogsByPeriodPtr;

class AMD_ITimeline_getEventLogsByPeriod : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::EventLogList&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_ITimeline_getEventLogsByPeriod> AMD_ITimeline_getEventLogsByPeriodPtr;

}

}

namespace IceAsync
{

namespace omero
{

namespace api
{

class AMD_ITimeline_getMostRecentAnnotationLinks : public ::omero::api::AMD_ITimeline_getMostRecentAnnotationLinks, public ::IceInternal::IncomingAsync
{
public:

    AMD_ITimeline_getMostRecentAnnotationLinks(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::IObjectList&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_ITimeline_getMostRecentShareCommentLinks : public ::omero::api::AMD_ITimeline_getMostRecentShareCommentLinks, public ::IceInternal::IncomingAsync
{
public:

    AMD_ITimeline_getMostRecentShareCommentLinks(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::IObjectList&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_ITimeline_getMostRecentObjects : public ::omero::api::AMD_ITimeline_getMostRecentObjects, public ::IceInternal::IncomingAsync
{
public:

    AMD_ITimeline_getMostRecentObjects(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::IObjectListMap&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_ITimeline_getByPeriod : public ::omero::api::AMD_ITimeline_getByPeriod, public ::IceInternal::IncomingAsync
{
public:

    AMD_ITimeline_getByPeriod(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::IObjectListMap&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_ITimeline_countByPeriod : public ::omero::api::AMD_ITimeline_countByPeriod, public ::IceInternal::IncomingAsync
{
public:

    AMD_ITimeline_countByPeriod(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::StringLongMap&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_ITimeline_getEventLogsByPeriod : public ::omero::api::AMD_ITimeline_getEventLogsByPeriod, public ::IceInternal::IncomingAsync
{
public:

    AMD_ITimeline_getEventLogsByPeriod(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::EventLogList&);
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

class ITimeline : virtual public ::IceProxy::omero::api::ServiceInterface
{
public:

    ::omero::api::IObjectList getMostRecentAnnotationLinks(const ::omero::api::StringSet& parentTypes, const ::omero::api::StringSet& childTypes, const ::omero::api::StringSet& namespaces, const ::omero::sys::ParametersPtr& p)
    {
        return getMostRecentAnnotationLinks(parentTypes, childTypes, namespaces, p, 0);
    }
    ::omero::api::IObjectList getMostRecentAnnotationLinks(const ::omero::api::StringSet& parentTypes, const ::omero::api::StringSet& childTypes, const ::omero::api::StringSet& namespaces, const ::omero::sys::ParametersPtr& p, const ::Ice::Context& __ctx)
    {
        return getMostRecentAnnotationLinks(parentTypes, childTypes, namespaces, p, &__ctx);
    }
    
private:

    ::omero::api::IObjectList getMostRecentAnnotationLinks(const ::omero::api::StringSet&, const ::omero::api::StringSet&, const ::omero::api::StringSet&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);
    
public:
    bool getMostRecentAnnotationLinks_async(const ::omero::api::AMI_ITimeline_getMostRecentAnnotationLinksPtr&, const ::omero::api::StringSet&, const ::omero::api::StringSet&, const ::omero::api::StringSet&, const ::omero::sys::ParametersPtr&);
    bool getMostRecentAnnotationLinks_async(const ::omero::api::AMI_ITimeline_getMostRecentAnnotationLinksPtr&, const ::omero::api::StringSet&, const ::omero::api::StringSet&, const ::omero::api::StringSet&, const ::omero::sys::ParametersPtr&, const ::Ice::Context&);

    ::omero::api::IObjectList getMostRecentShareCommentLinks(const ::omero::sys::ParametersPtr& p)
    {
        return getMostRecentShareCommentLinks(p, 0);
    }
    ::omero::api::IObjectList getMostRecentShareCommentLinks(const ::omero::sys::ParametersPtr& p, const ::Ice::Context& __ctx)
    {
        return getMostRecentShareCommentLinks(p, &__ctx);
    }
    
private:

    ::omero::api::IObjectList getMostRecentShareCommentLinks(const ::omero::sys::ParametersPtr&, const ::Ice::Context*);
    
public:
    bool getMostRecentShareCommentLinks_async(const ::omero::api::AMI_ITimeline_getMostRecentShareCommentLinksPtr&, const ::omero::sys::ParametersPtr&);
    bool getMostRecentShareCommentLinks_async(const ::omero::api::AMI_ITimeline_getMostRecentShareCommentLinksPtr&, const ::omero::sys::ParametersPtr&, const ::Ice::Context&);

    ::omero::api::IObjectListMap getMostRecentObjects(const ::omero::api::StringSet& types, const ::omero::sys::ParametersPtr& p, bool merge)
    {
        return getMostRecentObjects(types, p, merge, 0);
    }
    ::omero::api::IObjectListMap getMostRecentObjects(const ::omero::api::StringSet& types, const ::omero::sys::ParametersPtr& p, bool merge, const ::Ice::Context& __ctx)
    {
        return getMostRecentObjects(types, p, merge, &__ctx);
    }
    
private:

    ::omero::api::IObjectListMap getMostRecentObjects(const ::omero::api::StringSet&, const ::omero::sys::ParametersPtr&, bool, const ::Ice::Context*);
    
public:
    bool getMostRecentObjects_async(const ::omero::api::AMI_ITimeline_getMostRecentObjectsPtr&, const ::omero::api::StringSet&, const ::omero::sys::ParametersPtr&, bool);
    bool getMostRecentObjects_async(const ::omero::api::AMI_ITimeline_getMostRecentObjectsPtr&, const ::omero::api::StringSet&, const ::omero::sys::ParametersPtr&, bool, const ::Ice::Context&);

    ::omero::api::IObjectListMap getByPeriod(const ::omero::api::StringSet& types, const ::omero::RTimePtr& start, const ::omero::RTimePtr& end, const ::omero::sys::ParametersPtr& p, bool merge)
    {
        return getByPeriod(types, start, end, p, merge, 0);
    }
    ::omero::api::IObjectListMap getByPeriod(const ::omero::api::StringSet& types, const ::omero::RTimePtr& start, const ::omero::RTimePtr& end, const ::omero::sys::ParametersPtr& p, bool merge, const ::Ice::Context& __ctx)
    {
        return getByPeriod(types, start, end, p, merge, &__ctx);
    }
    
private:

    ::omero::api::IObjectListMap getByPeriod(const ::omero::api::StringSet&, const ::omero::RTimePtr&, const ::omero::RTimePtr&, const ::omero::sys::ParametersPtr&, bool, const ::Ice::Context*);
    
public:
    bool getByPeriod_async(const ::omero::api::AMI_ITimeline_getByPeriodPtr&, const ::omero::api::StringSet&, const ::omero::RTimePtr&, const ::omero::RTimePtr&, const ::omero::sys::ParametersPtr&, bool);
    bool getByPeriod_async(const ::omero::api::AMI_ITimeline_getByPeriodPtr&, const ::omero::api::StringSet&, const ::omero::RTimePtr&, const ::omero::RTimePtr&, const ::omero::sys::ParametersPtr&, bool, const ::Ice::Context&);

    ::omero::api::StringLongMap countByPeriod(const ::omero::api::StringSet& types, const ::omero::RTimePtr& start, const ::omero::RTimePtr& end, const ::omero::sys::ParametersPtr& p)
    {
        return countByPeriod(types, start, end, p, 0);
    }
    ::omero::api::StringLongMap countByPeriod(const ::omero::api::StringSet& types, const ::omero::RTimePtr& start, const ::omero::RTimePtr& end, const ::omero::sys::ParametersPtr& p, const ::Ice::Context& __ctx)
    {
        return countByPeriod(types, start, end, p, &__ctx);
    }
    
private:

    ::omero::api::StringLongMap countByPeriod(const ::omero::api::StringSet&, const ::omero::RTimePtr&, const ::omero::RTimePtr&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);
    
public:
    bool countByPeriod_async(const ::omero::api::AMI_ITimeline_countByPeriodPtr&, const ::omero::api::StringSet&, const ::omero::RTimePtr&, const ::omero::RTimePtr&, const ::omero::sys::ParametersPtr&);
    bool countByPeriod_async(const ::omero::api::AMI_ITimeline_countByPeriodPtr&, const ::omero::api::StringSet&, const ::omero::RTimePtr&, const ::omero::RTimePtr&, const ::omero::sys::ParametersPtr&, const ::Ice::Context&);

    ::omero::api::EventLogList getEventLogsByPeriod(const ::omero::RTimePtr& start, const ::omero::RTimePtr& end, const ::omero::sys::ParametersPtr& p)
    {
        return getEventLogsByPeriod(start, end, p, 0);
    }
    ::omero::api::EventLogList getEventLogsByPeriod(const ::omero::RTimePtr& start, const ::omero::RTimePtr& end, const ::omero::sys::ParametersPtr& p, const ::Ice::Context& __ctx)
    {
        return getEventLogsByPeriod(start, end, p, &__ctx);
    }
    
private:

    ::omero::api::EventLogList getEventLogsByPeriod(const ::omero::RTimePtr&, const ::omero::RTimePtr&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);
    
public:
    bool getEventLogsByPeriod_async(const ::omero::api::AMI_ITimeline_getEventLogsByPeriodPtr&, const ::omero::RTimePtr&, const ::omero::RTimePtr&, const ::omero::sys::ParametersPtr&);
    bool getEventLogsByPeriod_async(const ::omero::api::AMI_ITimeline_getEventLogsByPeriodPtr&, const ::omero::RTimePtr&, const ::omero::RTimePtr&, const ::omero::sys::ParametersPtr&, const ::Ice::Context&);
    
    ::IceInternal::ProxyHandle<ITimeline> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ITimeline*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<ITimeline*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ITimeline> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ITimeline*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<ITimeline*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ITimeline> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ITimeline*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<ITimeline*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ITimeline> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ITimeline*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<ITimeline*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ITimeline> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ITimeline*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<ITimeline*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ITimeline> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ITimeline*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<ITimeline*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ITimeline> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ITimeline*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<ITimeline*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ITimeline> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ITimeline*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<ITimeline*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ITimeline> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ITimeline*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<ITimeline*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ITimeline> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ITimeline*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<ITimeline*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ITimeline> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ITimeline*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<ITimeline*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ITimeline> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ITimeline*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<ITimeline*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ITimeline> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ITimeline*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<ITimeline*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ITimeline> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ITimeline*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<ITimeline*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ITimeline> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ITimeline*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<ITimeline*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ITimeline> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ITimeline*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<ITimeline*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ITimeline> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ITimeline*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<ITimeline*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ITimeline> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ITimeline*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<ITimeline*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ITimeline> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ITimeline*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<ITimeline*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class ITimeline : virtual public ::IceDelegate::omero::api::ServiceInterface
{
public:

    virtual ::omero::api::IObjectList getMostRecentAnnotationLinks(const ::omero::api::StringSet&, const ::omero::api::StringSet&, const ::omero::api::StringSet&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::api::IObjectList getMostRecentShareCommentLinks(const ::omero::sys::ParametersPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::api::IObjectListMap getMostRecentObjects(const ::omero::api::StringSet&, const ::omero::sys::ParametersPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::api::IObjectListMap getByPeriod(const ::omero::api::StringSet&, const ::omero::RTimePtr&, const ::omero::RTimePtr&, const ::omero::sys::ParametersPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::api::StringLongMap countByPeriod(const ::omero::api::StringSet&, const ::omero::RTimePtr&, const ::omero::RTimePtr&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::api::EventLogList getEventLogsByPeriod(const ::omero::RTimePtr&, const ::omero::RTimePtr&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*) = 0;
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

class ITimeline : virtual public ::IceDelegate::omero::api::ITimeline,
                  virtual public ::IceDelegateM::omero::api::ServiceInterface
{
public:

    virtual ::omero::api::IObjectList getMostRecentAnnotationLinks(const ::omero::api::StringSet&, const ::omero::api::StringSet&, const ::omero::api::StringSet&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

    virtual ::omero::api::IObjectList getMostRecentShareCommentLinks(const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

    virtual ::omero::api::IObjectListMap getMostRecentObjects(const ::omero::api::StringSet&, const ::omero::sys::ParametersPtr&, bool, const ::Ice::Context*);

    virtual ::omero::api::IObjectListMap getByPeriod(const ::omero::api::StringSet&, const ::omero::RTimePtr&, const ::omero::RTimePtr&, const ::omero::sys::ParametersPtr&, bool, const ::Ice::Context*);

    virtual ::omero::api::StringLongMap countByPeriod(const ::omero::api::StringSet&, const ::omero::RTimePtr&, const ::omero::RTimePtr&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

    virtual ::omero::api::EventLogList getEventLogsByPeriod(const ::omero::RTimePtr&, const ::omero::RTimePtr&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);
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

class ITimeline : virtual public ::IceDelegate::omero::api::ITimeline,
                  virtual public ::IceDelegateD::omero::api::ServiceInterface
{
public:

    virtual ::omero::api::IObjectList getMostRecentAnnotationLinks(const ::omero::api::StringSet&, const ::omero::api::StringSet&, const ::omero::api::StringSet&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

    virtual ::omero::api::IObjectList getMostRecentShareCommentLinks(const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

    virtual ::omero::api::IObjectListMap getMostRecentObjects(const ::omero::api::StringSet&, const ::omero::sys::ParametersPtr&, bool, const ::Ice::Context*);

    virtual ::omero::api::IObjectListMap getByPeriod(const ::omero::api::StringSet&, const ::omero::RTimePtr&, const ::omero::RTimePtr&, const ::omero::sys::ParametersPtr&, bool, const ::Ice::Context*);

    virtual ::omero::api::StringLongMap countByPeriod(const ::omero::api::StringSet&, const ::omero::RTimePtr&, const ::omero::RTimePtr&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

    virtual ::omero::api::EventLogList getEventLogsByPeriod(const ::omero::RTimePtr&, const ::omero::RTimePtr&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace api
{

class ITimeline : virtual public ::omero::api::ServiceInterface
{
public:

    typedef ITimelinePrx ProxyType;
    typedef ITimelinePtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void getMostRecentAnnotationLinks_async(const ::omero::api::AMD_ITimeline_getMostRecentAnnotationLinksPtr&, const ::omero::api::StringSet&, const ::omero::api::StringSet&, const ::omero::api::StringSet&, const ::omero::sys::ParametersPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getMostRecentAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getMostRecentShareCommentLinks_async(const ::omero::api::AMD_ITimeline_getMostRecentShareCommentLinksPtr&, const ::omero::sys::ParametersPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getMostRecentShareCommentLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getMostRecentObjects_async(const ::omero::api::AMD_ITimeline_getMostRecentObjectsPtr&, const ::omero::api::StringSet&, const ::omero::sys::ParametersPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getMostRecentObjects(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getByPeriod_async(const ::omero::api::AMD_ITimeline_getByPeriodPtr&, const ::omero::api::StringSet&, const ::omero::RTimePtr&, const ::omero::RTimePtr&, const ::omero::sys::ParametersPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getByPeriod(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void countByPeriod_async(const ::omero::api::AMD_ITimeline_countByPeriodPtr&, const ::omero::api::StringSet&, const ::omero::RTimePtr&, const ::omero::RTimePtr&, const ::omero::sys::ParametersPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___countByPeriod(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getEventLogsByPeriod_async(const ::omero::api::AMD_ITimeline_getEventLogsByPeriodPtr&, const ::omero::RTimePtr&, const ::omero::RTimePtr&, const ::omero::sys::ParametersPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getEventLogsByPeriod(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

}

}

#endif
