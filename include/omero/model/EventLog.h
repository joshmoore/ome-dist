// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `EventLog.ice'

#ifndef __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_EventLog_h__
#define __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_EventLog_h__

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
#include <omero/model/IObject.h>
#include <omero/RTypes.h>
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

namespace model
{

class Event;

class Details;

class EventLog;

}

}

}

namespace omero
{

namespace model
{

class Event;
bool operator==(const Event&, const Event&);
bool operator<(const Event&, const Event&);

class Details;
bool operator==(const Details&, const Details&);
bool operator<(const Details&, const Details&);

class EventLog;
bool operator==(const EventLog&, const EventLog&);
bool operator<(const EventLog&, const EventLog&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::model::Event*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Event*);

::Ice::Object* upCast(::omero::model::Details*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Details*);

::Ice::Object* upCast(::omero::model::EventLog*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::EventLog*);

}

namespace omero
{

namespace model
{

typedef ::IceInternal::Handle< ::omero::model::Event> EventPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Event> EventPrx;

void __read(::IceInternal::BasicStream*, EventPrx&);
void __patch__EventPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Details> DetailsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Details> DetailsPrx;

void __read(::IceInternal::BasicStream*, DetailsPrx&);
void __patch__DetailsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::EventLog> EventLogPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::EventLog> EventLogPrx;

void __read(::IceInternal::BasicStream*, EventLogPrx&);
void __patch__EventLogPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace IceProxy
{

namespace omero
{

namespace model
{

class EventLog : virtual public ::IceProxy::omero::model::IObject
{
public:

    ::omero::RLongPtr getEntityId()
    {
        return getEntityId(0);
    }
    ::omero::RLongPtr getEntityId(const ::Ice::Context& __ctx)
    {
        return getEntityId(&__ctx);
    }
    
private:

    ::omero::RLongPtr getEntityId(const ::Ice::Context*);
    
public:

    void setEntityId(const ::omero::RLongPtr& theEntityId)
    {
        setEntityId(theEntityId, 0);
    }
    void setEntityId(const ::omero::RLongPtr& theEntityId, const ::Ice::Context& __ctx)
    {
        setEntityId(theEntityId, &__ctx);
    }
    
private:

    void setEntityId(const ::omero::RLongPtr&, const ::Ice::Context*);
    
public:

    ::omero::RStringPtr getEntityType()
    {
        return getEntityType(0);
    }
    ::omero::RStringPtr getEntityType(const ::Ice::Context& __ctx)
    {
        return getEntityType(&__ctx);
    }
    
private:

    ::omero::RStringPtr getEntityType(const ::Ice::Context*);
    
public:

    void setEntityType(const ::omero::RStringPtr& theEntityType)
    {
        setEntityType(theEntityType, 0);
    }
    void setEntityType(const ::omero::RStringPtr& theEntityType, const ::Ice::Context& __ctx)
    {
        setEntityType(theEntityType, &__ctx);
    }
    
private:

    void setEntityType(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:

    ::omero::RStringPtr getAction()
    {
        return getAction(0);
    }
    ::omero::RStringPtr getAction(const ::Ice::Context& __ctx)
    {
        return getAction(&__ctx);
    }
    
private:

    ::omero::RStringPtr getAction(const ::Ice::Context*);
    
public:

    void setAction(const ::omero::RStringPtr& theAction)
    {
        setAction(theAction, 0);
    }
    void setAction(const ::omero::RStringPtr& theAction, const ::Ice::Context& __ctx)
    {
        setAction(theAction, &__ctx);
    }
    
private:

    void setAction(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:

    ::omero::model::EventPtr getEvent()
    {
        return getEvent(0);
    }
    ::omero::model::EventPtr getEvent(const ::Ice::Context& __ctx)
    {
        return getEvent(&__ctx);
    }
    
private:

    ::omero::model::EventPtr getEvent(const ::Ice::Context*);
    
public:

    void setEvent(const ::omero::model::EventPtr& theEvent)
    {
        setEvent(theEvent, 0);
    }
    void setEvent(const ::omero::model::EventPtr& theEvent, const ::Ice::Context& __ctx)
    {
        setEvent(theEvent, &__ctx);
    }
    
private:

    void setEvent(const ::omero::model::EventPtr&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<EventLog> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<EventLog*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<EventLog*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<EventLog> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<EventLog*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<EventLog*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<EventLog> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<EventLog*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<EventLog*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<EventLog> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<EventLog*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<EventLog*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<EventLog> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<EventLog*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<EventLog*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<EventLog> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<EventLog*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<EventLog*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<EventLog> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<EventLog*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<EventLog*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<EventLog> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<EventLog*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<EventLog*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<EventLog> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<EventLog*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<EventLog*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<EventLog> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<EventLog*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<EventLog*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<EventLog> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<EventLog*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<EventLog*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<EventLog> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<EventLog*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<EventLog*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<EventLog> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<EventLog*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<EventLog*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<EventLog> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<EventLog*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<EventLog*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<EventLog> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<EventLog*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<EventLog*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<EventLog> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<EventLog*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<EventLog*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<EventLog> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<EventLog*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<EventLog*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<EventLog> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<EventLog*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<EventLog*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<EventLog> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<EventLog*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<EventLog*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

namespace model
{

class EventLog : virtual public ::IceDelegate::omero::model::IObject
{
public:

    virtual ::omero::RLongPtr getEntityId(const ::Ice::Context*) = 0;

    virtual void setEntityId(const ::omero::RLongPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getEntityType(const ::Ice::Context*) = 0;

    virtual void setEntityType(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getAction(const ::Ice::Context*) = 0;

    virtual void setAction(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::EventPtr getEvent(const ::Ice::Context*) = 0;

    virtual void setEvent(const ::omero::model::EventPtr&, const ::Ice::Context*) = 0;
};

}

}

}

namespace IceDelegateM
{

namespace omero
{

namespace model
{

class EventLog : virtual public ::IceDelegate::omero::model::EventLog,
                 virtual public ::IceDelegateM::omero::model::IObject
{
public:

    virtual ::omero::RLongPtr getEntityId(const ::Ice::Context*);

    virtual void setEntityId(const ::omero::RLongPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getEntityType(const ::Ice::Context*);

    virtual void setEntityType(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getAction(const ::Ice::Context*);

    virtual void setAction(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::model::EventPtr getEvent(const ::Ice::Context*);

    virtual void setEvent(const ::omero::model::EventPtr&, const ::Ice::Context*);
};

}

}

}

namespace IceDelegateD
{

namespace omero
{

namespace model
{

class EventLog : virtual public ::IceDelegate::omero::model::EventLog,
                 virtual public ::IceDelegateD::omero::model::IObject
{
public:

    virtual ::omero::RLongPtr getEntityId(const ::Ice::Context*);

    virtual void setEntityId(const ::omero::RLongPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getEntityType(const ::Ice::Context*);

    virtual void setEntityType(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getAction(const ::Ice::Context*);

    virtual void setAction(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::model::EventPtr getEvent(const ::Ice::Context*);

    virtual void setEvent(const ::omero::model::EventPtr&, const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace model
{

class EventLog : virtual public ::omero::model::IObject
{
public:

    typedef EventLogPrx ProxyType;
    typedef EventLogPtr PointerType;
    
    EventLog() {}
    EventLog(const ::omero::RLongPtr&, const ::omero::model::DetailsPtr&, bool, const ::omero::RLongPtr&, const ::omero::RStringPtr&, const ::omero::RStringPtr&, const ::omero::model::EventPtr&);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void __gcReachable(::IceInternal::GCCountMap&) const;
    virtual void __gcClear();

    virtual ::omero::RLongPtr getEntityId(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getEntityId(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setEntityId(const ::omero::RLongPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setEntityId(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getEntityType(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getEntityType(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setEntityType(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setEntityType(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getAction(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getAction(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setAction(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setAction(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::EventPtr getEvent(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getEvent(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setEvent(const ::omero::model::EventPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setEvent(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

protected:

    ::omero::RLongPtr entityId;

    ::omero::RStringPtr entityType;

    ::omero::RStringPtr action;

    ::omero::model::EventPtr event;
};

}

}

#endif
