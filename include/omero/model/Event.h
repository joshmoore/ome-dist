// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `Event.ice'

#ifndef __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_Event_h__
#define __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_Event_h__

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

class Experimenter;

class ExperimenterGroup;

class EventType;

class Event;

class EventLog;

class Session;

class Details;

}

}

}

namespace omero
{

namespace model
{

class Experimenter;
bool operator==(const Experimenter&, const Experimenter&);
bool operator<(const Experimenter&, const Experimenter&);

class ExperimenterGroup;
bool operator==(const ExperimenterGroup&, const ExperimenterGroup&);
bool operator<(const ExperimenterGroup&, const ExperimenterGroup&);

class EventType;
bool operator==(const EventType&, const EventType&);
bool operator<(const EventType&, const EventType&);

class Event;
bool operator==(const Event&, const Event&);
bool operator<(const Event&, const Event&);

class EventLog;
bool operator==(const EventLog&, const EventLog&);
bool operator<(const EventLog&, const EventLog&);

class Session;
bool operator==(const Session&, const Session&);
bool operator<(const Session&, const Session&);

class Details;
bool operator==(const Details&, const Details&);
bool operator<(const Details&, const Details&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::model::Experimenter*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Experimenter*);

::Ice::Object* upCast(::omero::model::ExperimenterGroup*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::ExperimenterGroup*);

::Ice::Object* upCast(::omero::model::EventType*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::EventType*);

::Ice::Object* upCast(::omero::model::Event*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Event*);

::Ice::Object* upCast(::omero::model::EventLog*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::EventLog*);

::Ice::Object* upCast(::omero::model::Session*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Session*);

::Ice::Object* upCast(::omero::model::Details*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Details*);

}

namespace omero
{

namespace model
{

typedef ::IceInternal::Handle< ::omero::model::Experimenter> ExperimenterPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Experimenter> ExperimenterPrx;

void __read(::IceInternal::BasicStream*, ExperimenterPrx&);
void __patch__ExperimenterPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::ExperimenterGroup> ExperimenterGroupPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::ExperimenterGroup> ExperimenterGroupPrx;

void __read(::IceInternal::BasicStream*, ExperimenterGroupPrx&);
void __patch__ExperimenterGroupPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::EventType> EventTypePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::EventType> EventTypePrx;

void __read(::IceInternal::BasicStream*, EventTypePrx&);
void __patch__EventTypePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Event> EventPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Event> EventPrx;

void __read(::IceInternal::BasicStream*, EventPrx&);
void __patch__EventPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::EventLog> EventLogPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::EventLog> EventLogPrx;

void __read(::IceInternal::BasicStream*, EventLogPrx&);
void __patch__EventLogPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Session> SessionPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Session> SessionPrx;

void __read(::IceInternal::BasicStream*, SessionPrx&);
void __patch__SessionPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Details> DetailsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Details> DetailsPrx;

void __read(::IceInternal::BasicStream*, DetailsPrx&);
void __patch__DetailsPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace omero
{

namespace model
{

typedef ::std::vector< ::omero::model::EventLogPtr> EventLogsSeq;
void __writeEventLogsSeq(::IceInternal::BasicStream*, const ::omero::model::EventLogPtr*, const ::omero::model::EventLogPtr*);
void __readEventLogsSeq(::IceInternal::BasicStream*, EventLogsSeq&);

}

}

namespace IceProxy
{

namespace omero
{

namespace model
{

class Event : virtual public ::IceProxy::omero::model::IObject
{
public:

    ::omero::RStringPtr getStatus()
    {
        return getStatus(0);
    }
    ::omero::RStringPtr getStatus(const ::Ice::Context& __ctx)
    {
        return getStatus(&__ctx);
    }
    
private:

    ::omero::RStringPtr getStatus(const ::Ice::Context*);
    
public:

    void setStatus(const ::omero::RStringPtr& theStatus)
    {
        setStatus(theStatus, 0);
    }
    void setStatus(const ::omero::RStringPtr& theStatus, const ::Ice::Context& __ctx)
    {
        setStatus(theStatus, &__ctx);
    }
    
private:

    void setStatus(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:

    ::omero::RTimePtr getTime()
    {
        return getTime(0);
    }
    ::omero::RTimePtr getTime(const ::Ice::Context& __ctx)
    {
        return getTime(&__ctx);
    }
    
private:

    ::omero::RTimePtr getTime(const ::Ice::Context*);
    
public:

    void setTime(const ::omero::RTimePtr& theTime)
    {
        setTime(theTime, 0);
    }
    void setTime(const ::omero::RTimePtr& theTime, const ::Ice::Context& __ctx)
    {
        setTime(theTime, &__ctx);
    }
    
private:

    void setTime(const ::omero::RTimePtr&, const ::Ice::Context*);
    
public:

    ::omero::model::ExperimenterPtr getExperimenter()
    {
        return getExperimenter(0);
    }
    ::omero::model::ExperimenterPtr getExperimenter(const ::Ice::Context& __ctx)
    {
        return getExperimenter(&__ctx);
    }
    
private:

    ::omero::model::ExperimenterPtr getExperimenter(const ::Ice::Context*);
    
public:

    void setExperimenter(const ::omero::model::ExperimenterPtr& theExperimenter)
    {
        setExperimenter(theExperimenter, 0);
    }
    void setExperimenter(const ::omero::model::ExperimenterPtr& theExperimenter, const ::Ice::Context& __ctx)
    {
        setExperimenter(theExperimenter, &__ctx);
    }
    
private:

    void setExperimenter(const ::omero::model::ExperimenterPtr&, const ::Ice::Context*);
    
public:

    ::omero::model::ExperimenterGroupPtr getExperimenterGroup()
    {
        return getExperimenterGroup(0);
    }
    ::omero::model::ExperimenterGroupPtr getExperimenterGroup(const ::Ice::Context& __ctx)
    {
        return getExperimenterGroup(&__ctx);
    }
    
private:

    ::omero::model::ExperimenterGroupPtr getExperimenterGroup(const ::Ice::Context*);
    
public:

    void setExperimenterGroup(const ::omero::model::ExperimenterGroupPtr& theExperimenterGroup)
    {
        setExperimenterGroup(theExperimenterGroup, 0);
    }
    void setExperimenterGroup(const ::omero::model::ExperimenterGroupPtr& theExperimenterGroup, const ::Ice::Context& __ctx)
    {
        setExperimenterGroup(theExperimenterGroup, &__ctx);
    }
    
private:

    void setExperimenterGroup(const ::omero::model::ExperimenterGroupPtr&, const ::Ice::Context*);
    
public:

    ::omero::model::EventTypePtr getType()
    {
        return getType(0);
    }
    ::omero::model::EventTypePtr getType(const ::Ice::Context& __ctx)
    {
        return getType(&__ctx);
    }
    
private:

    ::omero::model::EventTypePtr getType(const ::Ice::Context*);
    
public:

    void setType(const ::omero::model::EventTypePtr& theType)
    {
        setType(theType, 0);
    }
    void setType(const ::omero::model::EventTypePtr& theType, const ::Ice::Context& __ctx)
    {
        setType(theType, &__ctx);
    }
    
private:

    void setType(const ::omero::model::EventTypePtr&, const ::Ice::Context*);
    
public:

    ::omero::model::EventPtr getContainingEvent()
    {
        return getContainingEvent(0);
    }
    ::omero::model::EventPtr getContainingEvent(const ::Ice::Context& __ctx)
    {
        return getContainingEvent(&__ctx);
    }
    
private:

    ::omero::model::EventPtr getContainingEvent(const ::Ice::Context*);
    
public:

    void setContainingEvent(const ::omero::model::EventPtr& theContainingEvent)
    {
        setContainingEvent(theContainingEvent, 0);
    }
    void setContainingEvent(const ::omero::model::EventPtr& theContainingEvent, const ::Ice::Context& __ctx)
    {
        setContainingEvent(theContainingEvent, &__ctx);
    }
    
private:

    void setContainingEvent(const ::omero::model::EventPtr&, const ::Ice::Context*);
    
public:

    void unloadLogs()
    {
        unloadLogs(0);
    }
    void unloadLogs(const ::Ice::Context& __ctx)
    {
        unloadLogs(&__ctx);
    }
    
private:

    void unloadLogs(const ::Ice::Context*);
    
public:

    ::Ice::Int sizeOfLogs()
    {
        return sizeOfLogs(0);
    }
    ::Ice::Int sizeOfLogs(const ::Ice::Context& __ctx)
    {
        return sizeOfLogs(&__ctx);
    }
    
private:

    ::Ice::Int sizeOfLogs(const ::Ice::Context*);
    
public:

    ::omero::model::EventLogsSeq copyLogs()
    {
        return copyLogs(0);
    }
    ::omero::model::EventLogsSeq copyLogs(const ::Ice::Context& __ctx)
    {
        return copyLogs(&__ctx);
    }
    
private:

    ::omero::model::EventLogsSeq copyLogs(const ::Ice::Context*);
    
public:

    void addEventLog(const ::omero::model::EventLogPtr& target)
    {
        addEventLog(target, 0);
    }
    void addEventLog(const ::omero::model::EventLogPtr& target, const ::Ice::Context& __ctx)
    {
        addEventLog(target, &__ctx);
    }
    
private:

    void addEventLog(const ::omero::model::EventLogPtr&, const ::Ice::Context*);
    
public:

    void addAllEventLogSet(const ::omero::model::EventLogsSeq& targets)
    {
        addAllEventLogSet(targets, 0);
    }
    void addAllEventLogSet(const ::omero::model::EventLogsSeq& targets, const ::Ice::Context& __ctx)
    {
        addAllEventLogSet(targets, &__ctx);
    }
    
private:

    void addAllEventLogSet(const ::omero::model::EventLogsSeq&, const ::Ice::Context*);
    
public:

    void removeEventLog(const ::omero::model::EventLogPtr& theTarget)
    {
        removeEventLog(theTarget, 0);
    }
    void removeEventLog(const ::omero::model::EventLogPtr& theTarget, const ::Ice::Context& __ctx)
    {
        removeEventLog(theTarget, &__ctx);
    }
    
private:

    void removeEventLog(const ::omero::model::EventLogPtr&, const ::Ice::Context*);
    
public:

    void removeAllEventLogSet(const ::omero::model::EventLogsSeq& targets)
    {
        removeAllEventLogSet(targets, 0);
    }
    void removeAllEventLogSet(const ::omero::model::EventLogsSeq& targets, const ::Ice::Context& __ctx)
    {
        removeAllEventLogSet(targets, &__ctx);
    }
    
private:

    void removeAllEventLogSet(const ::omero::model::EventLogsSeq&, const ::Ice::Context*);
    
public:

    void clearLogs()
    {
        clearLogs(0);
    }
    void clearLogs(const ::Ice::Context& __ctx)
    {
        clearLogs(&__ctx);
    }
    
private:

    void clearLogs(const ::Ice::Context*);
    
public:

    void reloadLogs(const ::omero::model::EventPtr& toCopy)
    {
        reloadLogs(toCopy, 0);
    }
    void reloadLogs(const ::omero::model::EventPtr& toCopy, const ::Ice::Context& __ctx)
    {
        reloadLogs(toCopy, &__ctx);
    }
    
private:

    void reloadLogs(const ::omero::model::EventPtr&, const ::Ice::Context*);
    
public:

    ::omero::model::SessionPtr getSession()
    {
        return getSession(0);
    }
    ::omero::model::SessionPtr getSession(const ::Ice::Context& __ctx)
    {
        return getSession(&__ctx);
    }
    
private:

    ::omero::model::SessionPtr getSession(const ::Ice::Context*);
    
public:

    void setSession(const ::omero::model::SessionPtr& theSession)
    {
        setSession(theSession, 0);
    }
    void setSession(const ::omero::model::SessionPtr& theSession, const ::Ice::Context& __ctx)
    {
        setSession(theSession, &__ctx);
    }
    
private:

    void setSession(const ::omero::model::SessionPtr&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<Event> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Event*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Event*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Event> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Event*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Event*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Event> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Event*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Event*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Event> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Event*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Event*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Event> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Event*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Event*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Event> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Event*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Event*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Event> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Event*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Event*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Event> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Event*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Event*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Event> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Event*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Event*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Event> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Event*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Event*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Event> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Event*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Event*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Event> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Event*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Event*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Event> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Event*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Event*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Event> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Event*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Event*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Event> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Event*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Event*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Event> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Event*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Event*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Event> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Event*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Event*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Event> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Event*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Event*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Event> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Event*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Event*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class Event : virtual public ::IceDelegate::omero::model::IObject
{
public:

    virtual ::omero::RStringPtr getStatus(const ::Ice::Context*) = 0;

    virtual void setStatus(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RTimePtr getTime(const ::Ice::Context*) = 0;

    virtual void setTime(const ::omero::RTimePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::ExperimenterPtr getExperimenter(const ::Ice::Context*) = 0;

    virtual void setExperimenter(const ::omero::model::ExperimenterPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::ExperimenterGroupPtr getExperimenterGroup(const ::Ice::Context*) = 0;

    virtual void setExperimenterGroup(const ::omero::model::ExperimenterGroupPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::EventTypePtr getType(const ::Ice::Context*) = 0;

    virtual void setType(const ::omero::model::EventTypePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::EventPtr getContainingEvent(const ::Ice::Context*) = 0;

    virtual void setContainingEvent(const ::omero::model::EventPtr&, const ::Ice::Context*) = 0;

    virtual void unloadLogs(const ::Ice::Context*) = 0;

    virtual ::Ice::Int sizeOfLogs(const ::Ice::Context*) = 0;

    virtual ::omero::model::EventLogsSeq copyLogs(const ::Ice::Context*) = 0;

    virtual void addEventLog(const ::omero::model::EventLogPtr&, const ::Ice::Context*) = 0;

    virtual void addAllEventLogSet(const ::omero::model::EventLogsSeq&, const ::Ice::Context*) = 0;

    virtual void removeEventLog(const ::omero::model::EventLogPtr&, const ::Ice::Context*) = 0;

    virtual void removeAllEventLogSet(const ::omero::model::EventLogsSeq&, const ::Ice::Context*) = 0;

    virtual void clearLogs(const ::Ice::Context*) = 0;

    virtual void reloadLogs(const ::omero::model::EventPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::SessionPtr getSession(const ::Ice::Context*) = 0;

    virtual void setSession(const ::omero::model::SessionPtr&, const ::Ice::Context*) = 0;
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

class Event : virtual public ::IceDelegate::omero::model::Event,
              virtual public ::IceDelegateM::omero::model::IObject
{
public:

    virtual ::omero::RStringPtr getStatus(const ::Ice::Context*);

    virtual void setStatus(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RTimePtr getTime(const ::Ice::Context*);

    virtual void setTime(const ::omero::RTimePtr&, const ::Ice::Context*);

    virtual ::omero::model::ExperimenterPtr getExperimenter(const ::Ice::Context*);

    virtual void setExperimenter(const ::omero::model::ExperimenterPtr&, const ::Ice::Context*);

    virtual ::omero::model::ExperimenterGroupPtr getExperimenterGroup(const ::Ice::Context*);

    virtual void setExperimenterGroup(const ::omero::model::ExperimenterGroupPtr&, const ::Ice::Context*);

    virtual ::omero::model::EventTypePtr getType(const ::Ice::Context*);

    virtual void setType(const ::omero::model::EventTypePtr&, const ::Ice::Context*);

    virtual ::omero::model::EventPtr getContainingEvent(const ::Ice::Context*);

    virtual void setContainingEvent(const ::omero::model::EventPtr&, const ::Ice::Context*);

    virtual void unloadLogs(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfLogs(const ::Ice::Context*);

    virtual ::omero::model::EventLogsSeq copyLogs(const ::Ice::Context*);

    virtual void addEventLog(const ::omero::model::EventLogPtr&, const ::Ice::Context*);

    virtual void addAllEventLogSet(const ::omero::model::EventLogsSeq&, const ::Ice::Context*);

    virtual void removeEventLog(const ::omero::model::EventLogPtr&, const ::Ice::Context*);

    virtual void removeAllEventLogSet(const ::omero::model::EventLogsSeq&, const ::Ice::Context*);

    virtual void clearLogs(const ::Ice::Context*);

    virtual void reloadLogs(const ::omero::model::EventPtr&, const ::Ice::Context*);

    virtual ::omero::model::SessionPtr getSession(const ::Ice::Context*);

    virtual void setSession(const ::omero::model::SessionPtr&, const ::Ice::Context*);
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

class Event : virtual public ::IceDelegate::omero::model::Event,
              virtual public ::IceDelegateD::omero::model::IObject
{
public:

    virtual ::omero::RStringPtr getStatus(const ::Ice::Context*);

    virtual void setStatus(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RTimePtr getTime(const ::Ice::Context*);

    virtual void setTime(const ::omero::RTimePtr&, const ::Ice::Context*);

    virtual ::omero::model::ExperimenterPtr getExperimenter(const ::Ice::Context*);

    virtual void setExperimenter(const ::omero::model::ExperimenterPtr&, const ::Ice::Context*);

    virtual ::omero::model::ExperimenterGroupPtr getExperimenterGroup(const ::Ice::Context*);

    virtual void setExperimenterGroup(const ::omero::model::ExperimenterGroupPtr&, const ::Ice::Context*);

    virtual ::omero::model::EventTypePtr getType(const ::Ice::Context*);

    virtual void setType(const ::omero::model::EventTypePtr&, const ::Ice::Context*);

    virtual ::omero::model::EventPtr getContainingEvent(const ::Ice::Context*);

    virtual void setContainingEvent(const ::omero::model::EventPtr&, const ::Ice::Context*);

    virtual void unloadLogs(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfLogs(const ::Ice::Context*);

    virtual ::omero::model::EventLogsSeq copyLogs(const ::Ice::Context*);

    virtual void addEventLog(const ::omero::model::EventLogPtr&, const ::Ice::Context*);

    virtual void addAllEventLogSet(const ::omero::model::EventLogsSeq&, const ::Ice::Context*);

    virtual void removeEventLog(const ::omero::model::EventLogPtr&, const ::Ice::Context*);

    virtual void removeAllEventLogSet(const ::omero::model::EventLogsSeq&, const ::Ice::Context*);

    virtual void clearLogs(const ::Ice::Context*);

    virtual void reloadLogs(const ::omero::model::EventPtr&, const ::Ice::Context*);

    virtual ::omero::model::SessionPtr getSession(const ::Ice::Context*);

    virtual void setSession(const ::omero::model::SessionPtr&, const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace model
{

class Event : virtual public ::omero::model::IObject
{
public:

    typedef EventPrx ProxyType;
    typedef EventPtr PointerType;
    
    Event() {}
    Event(const ::omero::RLongPtr&, const ::omero::model::DetailsPtr&, bool, const ::omero::RStringPtr&, const ::omero::RTimePtr&, const ::omero::model::ExperimenterPtr&, const ::omero::model::ExperimenterGroupPtr&, const ::omero::model::EventTypePtr&, const ::omero::model::EventPtr&, const ::omero::model::EventLogsSeq&, bool, const ::omero::model::SessionPtr&);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void __gcReachable(::IceInternal::GCCountMap&) const;
    virtual void __gcClear();

    virtual ::omero::RStringPtr getStatus(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getStatus(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setStatus(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setStatus(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RTimePtr getTime(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getTime(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setTime(const ::omero::RTimePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setTime(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ExperimenterPtr getExperimenter(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getExperimenter(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setExperimenter(const ::omero::model::ExperimenterPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setExperimenter(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ExperimenterGroupPtr getExperimenterGroup(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getExperimenterGroup(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setExperimenterGroup(const ::omero::model::ExperimenterGroupPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setExperimenterGroup(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::EventTypePtr getType(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getType(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setType(const ::omero::model::EventTypePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setType(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::EventPtr getContainingEvent(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getContainingEvent(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setContainingEvent(const ::omero::model::EventPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setContainingEvent(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unloadLogs(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unloadLogs(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int sizeOfLogs(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sizeOfLogs(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::EventLogsSeq copyLogs(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copyLogs(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addEventLog(const ::omero::model::EventLogPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addEventLog(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAllEventLogSet(const ::omero::model::EventLogsSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAllEventLogSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeEventLog(const ::omero::model::EventLogPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeEventLog(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeAllEventLogSet(const ::omero::model::EventLogsSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeAllEventLogSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void clearLogs(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___clearLogs(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void reloadLogs(const ::omero::model::EventPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___reloadLogs(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::SessionPtr getSession(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getSession(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setSession(const ::omero::model::SessionPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setSession(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

protected:

    ::omero::RStringPtr status;

    ::omero::RTimePtr time;

    ::omero::model::ExperimenterPtr experimenter;

    ::omero::model::ExperimenterGroupPtr experimenterGroup;

    ::omero::model::EventTypePtr type;

    ::omero::model::EventPtr containingEvent;

    ::omero::model::EventLogsSeq logsSeq;

    bool logsLoaded;

    ::omero::model::SessionPtr session;
};

}

}

#endif
