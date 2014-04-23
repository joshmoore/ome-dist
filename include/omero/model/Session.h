// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `Session.ice'

#ifndef __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_Session_h__
#define __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_Session_h__

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

class Node;

class Experimenter;

class Event;

class SessionAnnotationLink;

class Annotation;

class Details;

class Session;

}

}

}

namespace omero
{

namespace model
{

class Node;
bool operator==(const Node&, const Node&);
bool operator<(const Node&, const Node&);

class Experimenter;
bool operator==(const Experimenter&, const Experimenter&);
bool operator<(const Experimenter&, const Experimenter&);

class Event;
bool operator==(const Event&, const Event&);
bool operator<(const Event&, const Event&);

class SessionAnnotationLink;
bool operator==(const SessionAnnotationLink&, const SessionAnnotationLink&);
bool operator<(const SessionAnnotationLink&, const SessionAnnotationLink&);

class Annotation;
bool operator==(const Annotation&, const Annotation&);
bool operator<(const Annotation&, const Annotation&);

class Details;
bool operator==(const Details&, const Details&);
bool operator<(const Details&, const Details&);

class Session;
bool operator==(const Session&, const Session&);
bool operator<(const Session&, const Session&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::model::Node*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Node*);

::Ice::Object* upCast(::omero::model::Experimenter*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Experimenter*);

::Ice::Object* upCast(::omero::model::Event*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Event*);

::Ice::Object* upCast(::omero::model::SessionAnnotationLink*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::SessionAnnotationLink*);

::Ice::Object* upCast(::omero::model::Annotation*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Annotation*);

::Ice::Object* upCast(::omero::model::Details*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Details*);

::Ice::Object* upCast(::omero::model::Session*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Session*);

}

namespace omero
{

namespace model
{

typedef ::IceInternal::Handle< ::omero::model::Node> NodePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Node> NodePrx;

void __read(::IceInternal::BasicStream*, NodePrx&);
void __patch__NodePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Experimenter> ExperimenterPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Experimenter> ExperimenterPrx;

void __read(::IceInternal::BasicStream*, ExperimenterPrx&);
void __patch__ExperimenterPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Event> EventPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Event> EventPrx;

void __read(::IceInternal::BasicStream*, EventPrx&);
void __patch__EventPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::SessionAnnotationLink> SessionAnnotationLinkPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::SessionAnnotationLink> SessionAnnotationLinkPrx;

void __read(::IceInternal::BasicStream*, SessionAnnotationLinkPrx&);
void __patch__SessionAnnotationLinkPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Annotation> AnnotationPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Annotation> AnnotationPrx;

void __read(::IceInternal::BasicStream*, AnnotationPrx&);
void __patch__AnnotationPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Details> DetailsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Details> DetailsPrx;

void __read(::IceInternal::BasicStream*, DetailsPrx&);
void __patch__DetailsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Session> SessionPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Session> SessionPrx;

void __read(::IceInternal::BasicStream*, SessionPrx&);
void __patch__SessionPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace omero
{

namespace model
{

typedef ::std::vector< ::omero::model::EventPtr> SessionEventsSeq;
void __writeSessionEventsSeq(::IceInternal::BasicStream*, const ::omero::model::EventPtr*, const ::omero::model::EventPtr*);
void __readSessionEventsSeq(::IceInternal::BasicStream*, SessionEventsSeq&);

typedef ::std::vector< ::omero::model::SessionAnnotationLinkPtr> SessionAnnotationLinksSeq;
void __writeSessionAnnotationLinksSeq(::IceInternal::BasicStream*, const ::omero::model::SessionAnnotationLinkPtr*, const ::omero::model::SessionAnnotationLinkPtr*);
void __readSessionAnnotationLinksSeq(::IceInternal::BasicStream*, SessionAnnotationLinksSeq&);

typedef ::std::vector< ::omero::model::AnnotationPtr> SessionLinkedAnnotationSeq;
void __writeSessionLinkedAnnotationSeq(::IceInternal::BasicStream*, const ::omero::model::AnnotationPtr*, const ::omero::model::AnnotationPtr*);
void __readSessionLinkedAnnotationSeq(::IceInternal::BasicStream*, SessionLinkedAnnotationSeq&);

}

}

namespace IceProxy
{

namespace omero
{

namespace model
{

class Session : virtual public ::IceProxy::omero::model::IObject
{
public:

    ::omero::RIntPtr getVersion()
    {
        return getVersion(0);
    }
    ::omero::RIntPtr getVersion(const ::Ice::Context& __ctx)
    {
        return getVersion(&__ctx);
    }
    
private:

    ::omero::RIntPtr getVersion(const ::Ice::Context*);
    
public:

    void setVersion(const ::omero::RIntPtr& theVersion)
    {
        setVersion(theVersion, 0);
    }
    void setVersion(const ::omero::RIntPtr& theVersion, const ::Ice::Context& __ctx)
    {
        setVersion(theVersion, &__ctx);
    }
    
private:

    void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:

    ::omero::model::NodePtr getNode()
    {
        return getNode(0);
    }
    ::omero::model::NodePtr getNode(const ::Ice::Context& __ctx)
    {
        return getNode(&__ctx);
    }
    
private:

    ::omero::model::NodePtr getNode(const ::Ice::Context*);
    
public:

    void setNode(const ::omero::model::NodePtr& theNode)
    {
        setNode(theNode, 0);
    }
    void setNode(const ::omero::model::NodePtr& theNode, const ::Ice::Context& __ctx)
    {
        setNode(theNode, &__ctx);
    }
    
private:

    void setNode(const ::omero::model::NodePtr&, const ::Ice::Context*);
    
public:

    ::omero::RStringPtr getUuid()
    {
        return getUuid(0);
    }
    ::omero::RStringPtr getUuid(const ::Ice::Context& __ctx)
    {
        return getUuid(&__ctx);
    }
    
private:

    ::omero::RStringPtr getUuid(const ::Ice::Context*);
    
public:

    void setUuid(const ::omero::RStringPtr& theUuid)
    {
        setUuid(theUuid, 0);
    }
    void setUuid(const ::omero::RStringPtr& theUuid, const ::Ice::Context& __ctx)
    {
        setUuid(theUuid, &__ctx);
    }
    
private:

    void setUuid(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:

    ::omero::model::ExperimenterPtr getOwner()
    {
        return getOwner(0);
    }
    ::omero::model::ExperimenterPtr getOwner(const ::Ice::Context& __ctx)
    {
        return getOwner(&__ctx);
    }
    
private:

    ::omero::model::ExperimenterPtr getOwner(const ::Ice::Context*);
    
public:

    void setOwner(const ::omero::model::ExperimenterPtr& theOwner)
    {
        setOwner(theOwner, 0);
    }
    void setOwner(const ::omero::model::ExperimenterPtr& theOwner, const ::Ice::Context& __ctx)
    {
        setOwner(theOwner, &__ctx);
    }
    
private:

    void setOwner(const ::omero::model::ExperimenterPtr&, const ::Ice::Context*);
    
public:

    ::omero::RLongPtr getTimeToIdle()
    {
        return getTimeToIdle(0);
    }
    ::omero::RLongPtr getTimeToIdle(const ::Ice::Context& __ctx)
    {
        return getTimeToIdle(&__ctx);
    }
    
private:

    ::omero::RLongPtr getTimeToIdle(const ::Ice::Context*);
    
public:

    void setTimeToIdle(const ::omero::RLongPtr& theTimeToIdle)
    {
        setTimeToIdle(theTimeToIdle, 0);
    }
    void setTimeToIdle(const ::omero::RLongPtr& theTimeToIdle, const ::Ice::Context& __ctx)
    {
        setTimeToIdle(theTimeToIdle, &__ctx);
    }
    
private:

    void setTimeToIdle(const ::omero::RLongPtr&, const ::Ice::Context*);
    
public:

    ::omero::RLongPtr getTimeToLive()
    {
        return getTimeToLive(0);
    }
    ::omero::RLongPtr getTimeToLive(const ::Ice::Context& __ctx)
    {
        return getTimeToLive(&__ctx);
    }
    
private:

    ::omero::RLongPtr getTimeToLive(const ::Ice::Context*);
    
public:

    void setTimeToLive(const ::omero::RLongPtr& theTimeToLive)
    {
        setTimeToLive(theTimeToLive, 0);
    }
    void setTimeToLive(const ::omero::RLongPtr& theTimeToLive, const ::Ice::Context& __ctx)
    {
        setTimeToLive(theTimeToLive, &__ctx);
    }
    
private:

    void setTimeToLive(const ::omero::RLongPtr&, const ::Ice::Context*);
    
public:

    ::omero::RTimePtr getStarted()
    {
        return getStarted(0);
    }
    ::omero::RTimePtr getStarted(const ::Ice::Context& __ctx)
    {
        return getStarted(&__ctx);
    }
    
private:

    ::omero::RTimePtr getStarted(const ::Ice::Context*);
    
public:

    void setStarted(const ::omero::RTimePtr& theStarted)
    {
        setStarted(theStarted, 0);
    }
    void setStarted(const ::omero::RTimePtr& theStarted, const ::Ice::Context& __ctx)
    {
        setStarted(theStarted, &__ctx);
    }
    
private:

    void setStarted(const ::omero::RTimePtr&, const ::Ice::Context*);
    
public:

    ::omero::RTimePtr getClosed()
    {
        return getClosed(0);
    }
    ::omero::RTimePtr getClosed(const ::Ice::Context& __ctx)
    {
        return getClosed(&__ctx);
    }
    
private:

    ::omero::RTimePtr getClosed(const ::Ice::Context*);
    
public:

    void setClosed(const ::omero::RTimePtr& theClosed)
    {
        setClosed(theClosed, 0);
    }
    void setClosed(const ::omero::RTimePtr& theClosed, const ::Ice::Context& __ctx)
    {
        setClosed(theClosed, &__ctx);
    }
    
private:

    void setClosed(const ::omero::RTimePtr&, const ::Ice::Context*);
    
public:

    ::omero::RStringPtr getMessage()
    {
        return getMessage(0);
    }
    ::omero::RStringPtr getMessage(const ::Ice::Context& __ctx)
    {
        return getMessage(&__ctx);
    }
    
private:

    ::omero::RStringPtr getMessage(const ::Ice::Context*);
    
public:

    void setMessage(const ::omero::RStringPtr& theMessage)
    {
        setMessage(theMessage, 0);
    }
    void setMessage(const ::omero::RStringPtr& theMessage, const ::Ice::Context& __ctx)
    {
        setMessage(theMessage, &__ctx);
    }
    
private:

    void setMessage(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:

    ::omero::RStringPtr getDefaultEventType()
    {
        return getDefaultEventType(0);
    }
    ::omero::RStringPtr getDefaultEventType(const ::Ice::Context& __ctx)
    {
        return getDefaultEventType(&__ctx);
    }
    
private:

    ::omero::RStringPtr getDefaultEventType(const ::Ice::Context*);
    
public:

    void setDefaultEventType(const ::omero::RStringPtr& theDefaultEventType)
    {
        setDefaultEventType(theDefaultEventType, 0);
    }
    void setDefaultEventType(const ::omero::RStringPtr& theDefaultEventType, const ::Ice::Context& __ctx)
    {
        setDefaultEventType(theDefaultEventType, &__ctx);
    }
    
private:

    void setDefaultEventType(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:

    ::omero::RStringPtr getUserAgent()
    {
        return getUserAgent(0);
    }
    ::omero::RStringPtr getUserAgent(const ::Ice::Context& __ctx)
    {
        return getUserAgent(&__ctx);
    }
    
private:

    ::omero::RStringPtr getUserAgent(const ::Ice::Context*);
    
public:

    void setUserAgent(const ::omero::RStringPtr& theUserAgent)
    {
        setUserAgent(theUserAgent, 0);
    }
    void setUserAgent(const ::omero::RStringPtr& theUserAgent, const ::Ice::Context& __ctx)
    {
        setUserAgent(theUserAgent, &__ctx);
    }
    
private:

    void setUserAgent(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:

    void unloadEvents()
    {
        unloadEvents(0);
    }
    void unloadEvents(const ::Ice::Context& __ctx)
    {
        unloadEvents(&__ctx);
    }
    
private:

    void unloadEvents(const ::Ice::Context*);
    
public:

    ::Ice::Int sizeOfEvents()
    {
        return sizeOfEvents(0);
    }
    ::Ice::Int sizeOfEvents(const ::Ice::Context& __ctx)
    {
        return sizeOfEvents(&__ctx);
    }
    
private:

    ::Ice::Int sizeOfEvents(const ::Ice::Context*);
    
public:

    ::omero::model::SessionEventsSeq copyEvents()
    {
        return copyEvents(0);
    }
    ::omero::model::SessionEventsSeq copyEvents(const ::Ice::Context& __ctx)
    {
        return copyEvents(&__ctx);
    }
    
private:

    ::omero::model::SessionEventsSeq copyEvents(const ::Ice::Context*);
    
public:

    void addEvent(const ::omero::model::EventPtr& target)
    {
        addEvent(target, 0);
    }
    void addEvent(const ::omero::model::EventPtr& target, const ::Ice::Context& __ctx)
    {
        addEvent(target, &__ctx);
    }
    
private:

    void addEvent(const ::omero::model::EventPtr&, const ::Ice::Context*);
    
public:

    void addAllEventSet(const ::omero::model::SessionEventsSeq& targets)
    {
        addAllEventSet(targets, 0);
    }
    void addAllEventSet(const ::omero::model::SessionEventsSeq& targets, const ::Ice::Context& __ctx)
    {
        addAllEventSet(targets, &__ctx);
    }
    
private:

    void addAllEventSet(const ::omero::model::SessionEventsSeq&, const ::Ice::Context*);
    
public:

    void removeEvent(const ::omero::model::EventPtr& theTarget)
    {
        removeEvent(theTarget, 0);
    }
    void removeEvent(const ::omero::model::EventPtr& theTarget, const ::Ice::Context& __ctx)
    {
        removeEvent(theTarget, &__ctx);
    }
    
private:

    void removeEvent(const ::omero::model::EventPtr&, const ::Ice::Context*);
    
public:

    void removeAllEventSet(const ::omero::model::SessionEventsSeq& targets)
    {
        removeAllEventSet(targets, 0);
    }
    void removeAllEventSet(const ::omero::model::SessionEventsSeq& targets, const ::Ice::Context& __ctx)
    {
        removeAllEventSet(targets, &__ctx);
    }
    
private:

    void removeAllEventSet(const ::omero::model::SessionEventsSeq&, const ::Ice::Context*);
    
public:

    void clearEvents()
    {
        clearEvents(0);
    }
    void clearEvents(const ::Ice::Context& __ctx)
    {
        clearEvents(&__ctx);
    }
    
private:

    void clearEvents(const ::Ice::Context*);
    
public:

    void reloadEvents(const ::omero::model::SessionPtr& toCopy)
    {
        reloadEvents(toCopy, 0);
    }
    void reloadEvents(const ::omero::model::SessionPtr& toCopy, const ::Ice::Context& __ctx)
    {
        reloadEvents(toCopy, &__ctx);
    }
    
private:

    void reloadEvents(const ::omero::model::SessionPtr&, const ::Ice::Context*);
    
public:

    void unloadAnnotationLinks()
    {
        unloadAnnotationLinks(0);
    }
    void unloadAnnotationLinks(const ::Ice::Context& __ctx)
    {
        unloadAnnotationLinks(&__ctx);
    }
    
private:

    void unloadAnnotationLinks(const ::Ice::Context*);
    
public:

    ::Ice::Int sizeOfAnnotationLinks()
    {
        return sizeOfAnnotationLinks(0);
    }
    ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Context& __ctx)
    {
        return sizeOfAnnotationLinks(&__ctx);
    }
    
private:

    ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Context*);
    
public:

    ::omero::model::SessionAnnotationLinksSeq copyAnnotationLinks()
    {
        return copyAnnotationLinks(0);
    }
    ::omero::model::SessionAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context& __ctx)
    {
        return copyAnnotationLinks(&__ctx);
    }
    
private:

    ::omero::model::SessionAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*);
    
public:

    void addSessionAnnotationLink(const ::omero::model::SessionAnnotationLinkPtr& target)
    {
        addSessionAnnotationLink(target, 0);
    }
    void addSessionAnnotationLink(const ::omero::model::SessionAnnotationLinkPtr& target, const ::Ice::Context& __ctx)
    {
        addSessionAnnotationLink(target, &__ctx);
    }
    
private:

    void addSessionAnnotationLink(const ::omero::model::SessionAnnotationLinkPtr&, const ::Ice::Context*);
    
public:

    void addAllSessionAnnotationLinkSet(const ::omero::model::SessionAnnotationLinksSeq& targets)
    {
        addAllSessionAnnotationLinkSet(targets, 0);
    }
    void addAllSessionAnnotationLinkSet(const ::omero::model::SessionAnnotationLinksSeq& targets, const ::Ice::Context& __ctx)
    {
        addAllSessionAnnotationLinkSet(targets, &__ctx);
    }
    
private:

    void addAllSessionAnnotationLinkSet(const ::omero::model::SessionAnnotationLinksSeq&, const ::Ice::Context*);
    
public:

    void removeSessionAnnotationLink(const ::omero::model::SessionAnnotationLinkPtr& theTarget)
    {
        removeSessionAnnotationLink(theTarget, 0);
    }
    void removeSessionAnnotationLink(const ::omero::model::SessionAnnotationLinkPtr& theTarget, const ::Ice::Context& __ctx)
    {
        removeSessionAnnotationLink(theTarget, &__ctx);
    }
    
private:

    void removeSessionAnnotationLink(const ::omero::model::SessionAnnotationLinkPtr&, const ::Ice::Context*);
    
public:

    void removeAllSessionAnnotationLinkSet(const ::omero::model::SessionAnnotationLinksSeq& targets)
    {
        removeAllSessionAnnotationLinkSet(targets, 0);
    }
    void removeAllSessionAnnotationLinkSet(const ::omero::model::SessionAnnotationLinksSeq& targets, const ::Ice::Context& __ctx)
    {
        removeAllSessionAnnotationLinkSet(targets, &__ctx);
    }
    
private:

    void removeAllSessionAnnotationLinkSet(const ::omero::model::SessionAnnotationLinksSeq&, const ::Ice::Context*);
    
public:

    void clearAnnotationLinks()
    {
        clearAnnotationLinks(0);
    }
    void clearAnnotationLinks(const ::Ice::Context& __ctx)
    {
        clearAnnotationLinks(&__ctx);
    }
    
private:

    void clearAnnotationLinks(const ::Ice::Context*);
    
public:

    void reloadAnnotationLinks(const ::omero::model::SessionPtr& toCopy)
    {
        reloadAnnotationLinks(toCopy, 0);
    }
    void reloadAnnotationLinks(const ::omero::model::SessionPtr& toCopy, const ::Ice::Context& __ctx)
    {
        reloadAnnotationLinks(toCopy, &__ctx);
    }
    
private:

    void reloadAnnotationLinks(const ::omero::model::SessionPtr&, const ::Ice::Context*);
    
public:

    ::omero::sys::CountMap getAnnotationLinksCountPerOwner()
    {
        return getAnnotationLinksCountPerOwner(0);
    }
    ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Context& __ctx)
    {
        return getAnnotationLinksCountPerOwner(&__ctx);
    }
    
private:

    ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Context*);
    
public:

    ::omero::model::SessionAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr& addition)
    {
        return linkAnnotation(addition, 0);
    }
    ::omero::model::SessionAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr& addition, const ::Ice::Context& __ctx)
    {
        return linkAnnotation(addition, &__ctx);
    }
    
private:

    ::omero::model::SessionAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);
    
public:

    void addSessionAnnotationLinkToBoth(const ::omero::model::SessionAnnotationLinkPtr& link, bool bothSides)
    {
        addSessionAnnotationLinkToBoth(link, bothSides, 0);
    }
    void addSessionAnnotationLinkToBoth(const ::omero::model::SessionAnnotationLinkPtr& link, bool bothSides, const ::Ice::Context& __ctx)
    {
        addSessionAnnotationLinkToBoth(link, bothSides, &__ctx);
    }
    
private:

    void addSessionAnnotationLinkToBoth(const ::omero::model::SessionAnnotationLinkPtr&, bool, const ::Ice::Context*);
    
public:

    ::omero::model::SessionAnnotationLinksSeq findSessionAnnotationLink(const ::omero::model::AnnotationPtr& removal)
    {
        return findSessionAnnotationLink(removal, 0);
    }
    ::omero::model::SessionAnnotationLinksSeq findSessionAnnotationLink(const ::omero::model::AnnotationPtr& removal, const ::Ice::Context& __ctx)
    {
        return findSessionAnnotationLink(removal, &__ctx);
    }
    
private:

    ::omero::model::SessionAnnotationLinksSeq findSessionAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);
    
public:

    void unlinkAnnotation(const ::omero::model::AnnotationPtr& removal)
    {
        unlinkAnnotation(removal, 0);
    }
    void unlinkAnnotation(const ::omero::model::AnnotationPtr& removal, const ::Ice::Context& __ctx)
    {
        unlinkAnnotation(removal, &__ctx);
    }
    
private:

    void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);
    
public:

    void removeSessionAnnotationLinkFromBoth(const ::omero::model::SessionAnnotationLinkPtr& link, bool bothSides)
    {
        removeSessionAnnotationLinkFromBoth(link, bothSides, 0);
    }
    void removeSessionAnnotationLinkFromBoth(const ::omero::model::SessionAnnotationLinkPtr& link, bool bothSides, const ::Ice::Context& __ctx)
    {
        removeSessionAnnotationLinkFromBoth(link, bothSides, &__ctx);
    }
    
private:

    void removeSessionAnnotationLinkFromBoth(const ::omero::model::SessionAnnotationLinkPtr&, bool, const ::Ice::Context*);
    
public:

    ::omero::model::SessionLinkedAnnotationSeq linkedAnnotationList()
    {
        return linkedAnnotationList(0);
    }
    ::omero::model::SessionLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context& __ctx)
    {
        return linkedAnnotationList(&__ctx);
    }
    
private:

    ::omero::model::SessionLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*);
    
public:
    
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

namespace model
{

class Session : virtual public ::IceDelegate::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*) = 0;

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::NodePtr getNode(const ::Ice::Context*) = 0;

    virtual void setNode(const ::omero::model::NodePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getUuid(const ::Ice::Context*) = 0;

    virtual void setUuid(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::ExperimenterPtr getOwner(const ::Ice::Context*) = 0;

    virtual void setOwner(const ::omero::model::ExperimenterPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RLongPtr getTimeToIdle(const ::Ice::Context*) = 0;

    virtual void setTimeToIdle(const ::omero::RLongPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RLongPtr getTimeToLive(const ::Ice::Context*) = 0;

    virtual void setTimeToLive(const ::omero::RLongPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RTimePtr getStarted(const ::Ice::Context*) = 0;

    virtual void setStarted(const ::omero::RTimePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RTimePtr getClosed(const ::Ice::Context*) = 0;

    virtual void setClosed(const ::omero::RTimePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getMessage(const ::Ice::Context*) = 0;

    virtual void setMessage(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getDefaultEventType(const ::Ice::Context*) = 0;

    virtual void setDefaultEventType(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getUserAgent(const ::Ice::Context*) = 0;

    virtual void setUserAgent(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual void unloadEvents(const ::Ice::Context*) = 0;

    virtual ::Ice::Int sizeOfEvents(const ::Ice::Context*) = 0;

    virtual ::omero::model::SessionEventsSeq copyEvents(const ::Ice::Context*) = 0;

    virtual void addEvent(const ::omero::model::EventPtr&, const ::Ice::Context*) = 0;

    virtual void addAllEventSet(const ::omero::model::SessionEventsSeq&, const ::Ice::Context*) = 0;

    virtual void removeEvent(const ::omero::model::EventPtr&, const ::Ice::Context*) = 0;

    virtual void removeAllEventSet(const ::omero::model::SessionEventsSeq&, const ::Ice::Context*) = 0;

    virtual void clearEvents(const ::Ice::Context*) = 0;

    virtual void reloadEvents(const ::omero::model::SessionPtr&, const ::Ice::Context*) = 0;

    virtual void unloadAnnotationLinks(const ::Ice::Context*) = 0;

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Context*) = 0;

    virtual ::omero::model::SessionAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*) = 0;

    virtual void addSessionAnnotationLink(const ::omero::model::SessionAnnotationLinkPtr&, const ::Ice::Context*) = 0;

    virtual void addAllSessionAnnotationLinkSet(const ::omero::model::SessionAnnotationLinksSeq&, const ::Ice::Context*) = 0;

    virtual void removeSessionAnnotationLink(const ::omero::model::SessionAnnotationLinkPtr&, const ::Ice::Context*) = 0;

    virtual void removeAllSessionAnnotationLinkSet(const ::omero::model::SessionAnnotationLinksSeq&, const ::Ice::Context*) = 0;

    virtual void clearAnnotationLinks(const ::Ice::Context*) = 0;

    virtual void reloadAnnotationLinks(const ::omero::model::SessionPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Context*) = 0;

    virtual ::omero::model::SessionAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*) = 0;

    virtual void addSessionAnnotationLinkToBoth(const ::omero::model::SessionAnnotationLinkPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::SessionAnnotationLinksSeq findSessionAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*) = 0;

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*) = 0;

    virtual void removeSessionAnnotationLinkFromBoth(const ::omero::model::SessionAnnotationLinkPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::SessionLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*) = 0;
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

class Session : virtual public ::IceDelegate::omero::model::Session,
                virtual public ::IceDelegateM::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::model::NodePtr getNode(const ::Ice::Context*);

    virtual void setNode(const ::omero::model::NodePtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getUuid(const ::Ice::Context*);

    virtual void setUuid(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::model::ExperimenterPtr getOwner(const ::Ice::Context*);

    virtual void setOwner(const ::omero::model::ExperimenterPtr&, const ::Ice::Context*);

    virtual ::omero::RLongPtr getTimeToIdle(const ::Ice::Context*);

    virtual void setTimeToIdle(const ::omero::RLongPtr&, const ::Ice::Context*);

    virtual ::omero::RLongPtr getTimeToLive(const ::Ice::Context*);

    virtual void setTimeToLive(const ::omero::RLongPtr&, const ::Ice::Context*);

    virtual ::omero::RTimePtr getStarted(const ::Ice::Context*);

    virtual void setStarted(const ::omero::RTimePtr&, const ::Ice::Context*);

    virtual ::omero::RTimePtr getClosed(const ::Ice::Context*);

    virtual void setClosed(const ::omero::RTimePtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getMessage(const ::Ice::Context*);

    virtual void setMessage(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getDefaultEventType(const ::Ice::Context*);

    virtual void setDefaultEventType(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getUserAgent(const ::Ice::Context*);

    virtual void setUserAgent(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual void unloadEvents(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfEvents(const ::Ice::Context*);

    virtual ::omero::model::SessionEventsSeq copyEvents(const ::Ice::Context*);

    virtual void addEvent(const ::omero::model::EventPtr&, const ::Ice::Context*);

    virtual void addAllEventSet(const ::omero::model::SessionEventsSeq&, const ::Ice::Context*);

    virtual void removeEvent(const ::omero::model::EventPtr&, const ::Ice::Context*);

    virtual void removeAllEventSet(const ::omero::model::SessionEventsSeq&, const ::Ice::Context*);

    virtual void clearEvents(const ::Ice::Context*);

    virtual void reloadEvents(const ::omero::model::SessionPtr&, const ::Ice::Context*);

    virtual void unloadAnnotationLinks(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Context*);

    virtual ::omero::model::SessionAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*);

    virtual void addSessionAnnotationLink(const ::omero::model::SessionAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void addAllSessionAnnotationLinkSet(const ::omero::model::SessionAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void removeSessionAnnotationLink(const ::omero::model::SessionAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void removeAllSessionAnnotationLinkSet(const ::omero::model::SessionAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void clearAnnotationLinks(const ::Ice::Context*);

    virtual void reloadAnnotationLinks(const ::omero::model::SessionPtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::SessionAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void addSessionAnnotationLinkToBoth(const ::omero::model::SessionAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::SessionAnnotationLinksSeq findSessionAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void removeSessionAnnotationLinkFromBoth(const ::omero::model::SessionAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::SessionLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*);
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

class Session : virtual public ::IceDelegate::omero::model::Session,
                virtual public ::IceDelegateD::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::model::NodePtr getNode(const ::Ice::Context*);

    virtual void setNode(const ::omero::model::NodePtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getUuid(const ::Ice::Context*);

    virtual void setUuid(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::model::ExperimenterPtr getOwner(const ::Ice::Context*);

    virtual void setOwner(const ::omero::model::ExperimenterPtr&, const ::Ice::Context*);

    virtual ::omero::RLongPtr getTimeToIdle(const ::Ice::Context*);

    virtual void setTimeToIdle(const ::omero::RLongPtr&, const ::Ice::Context*);

    virtual ::omero::RLongPtr getTimeToLive(const ::Ice::Context*);

    virtual void setTimeToLive(const ::omero::RLongPtr&, const ::Ice::Context*);

    virtual ::omero::RTimePtr getStarted(const ::Ice::Context*);

    virtual void setStarted(const ::omero::RTimePtr&, const ::Ice::Context*);

    virtual ::omero::RTimePtr getClosed(const ::Ice::Context*);

    virtual void setClosed(const ::omero::RTimePtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getMessage(const ::Ice::Context*);

    virtual void setMessage(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getDefaultEventType(const ::Ice::Context*);

    virtual void setDefaultEventType(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getUserAgent(const ::Ice::Context*);

    virtual void setUserAgent(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual void unloadEvents(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfEvents(const ::Ice::Context*);

    virtual ::omero::model::SessionEventsSeq copyEvents(const ::Ice::Context*);

    virtual void addEvent(const ::omero::model::EventPtr&, const ::Ice::Context*);

    virtual void addAllEventSet(const ::omero::model::SessionEventsSeq&, const ::Ice::Context*);

    virtual void removeEvent(const ::omero::model::EventPtr&, const ::Ice::Context*);

    virtual void removeAllEventSet(const ::omero::model::SessionEventsSeq&, const ::Ice::Context*);

    virtual void clearEvents(const ::Ice::Context*);

    virtual void reloadEvents(const ::omero::model::SessionPtr&, const ::Ice::Context*);

    virtual void unloadAnnotationLinks(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Context*);

    virtual ::omero::model::SessionAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*);

    virtual void addSessionAnnotationLink(const ::omero::model::SessionAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void addAllSessionAnnotationLinkSet(const ::omero::model::SessionAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void removeSessionAnnotationLink(const ::omero::model::SessionAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void removeAllSessionAnnotationLinkSet(const ::omero::model::SessionAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void clearAnnotationLinks(const ::Ice::Context*);

    virtual void reloadAnnotationLinks(const ::omero::model::SessionPtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::SessionAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void addSessionAnnotationLinkToBoth(const ::omero::model::SessionAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::SessionAnnotationLinksSeq findSessionAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void removeSessionAnnotationLinkFromBoth(const ::omero::model::SessionAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::SessionLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace model
{

class Session : virtual public ::omero::model::IObject
{
public:

    typedef SessionPrx ProxyType;
    typedef SessionPtr PointerType;
    
    Session() {}
    Session(const ::omero::RLongPtr&, const ::omero::model::DetailsPtr&, bool, const ::omero::RIntPtr&, const ::omero::model::NodePtr&, const ::omero::RStringPtr&, const ::omero::model::ExperimenterPtr&, const ::omero::RLongPtr&, const ::omero::RLongPtr&, const ::omero::RTimePtr&, const ::omero::RTimePtr&, const ::omero::RStringPtr&, const ::omero::RStringPtr&, const ::omero::RStringPtr&, const ::omero::model::SessionEventsSeq&, bool, const ::omero::model::SessionAnnotationLinksSeq&, bool, const ::omero::sys::CountMap&);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void __gcReachable(::IceInternal::GCCountMap&) const;
    virtual void __gcClear();

    virtual ::omero::RIntPtr getVersion(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getVersion(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setVersion(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::NodePtr getNode(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getNode(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setNode(const ::omero::model::NodePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setNode(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getUuid(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getUuid(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setUuid(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setUuid(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ExperimenterPtr getOwner(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getOwner(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setOwner(const ::omero::model::ExperimenterPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setOwner(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RLongPtr getTimeToIdle(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getTimeToIdle(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setTimeToIdle(const ::omero::RLongPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setTimeToIdle(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RLongPtr getTimeToLive(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getTimeToLive(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setTimeToLive(const ::omero::RLongPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setTimeToLive(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RTimePtr getStarted(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getStarted(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setStarted(const ::omero::RTimePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setStarted(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RTimePtr getClosed(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getClosed(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setClosed(const ::omero::RTimePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setClosed(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getMessage(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getMessage(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setMessage(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setMessage(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getDefaultEventType(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getDefaultEventType(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setDefaultEventType(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setDefaultEventType(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getUserAgent(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getUserAgent(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setUserAgent(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setUserAgent(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unloadEvents(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unloadEvents(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int sizeOfEvents(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sizeOfEvents(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::SessionEventsSeq copyEvents(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copyEvents(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addEvent(const ::omero::model::EventPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addEvent(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAllEventSet(const ::omero::model::SessionEventsSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAllEventSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeEvent(const ::omero::model::EventPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeEvent(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeAllEventSet(const ::omero::model::SessionEventsSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeAllEventSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void clearEvents(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___clearEvents(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void reloadEvents(const ::omero::model::SessionPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___reloadEvents(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unloadAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unloadAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sizeOfAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::SessionAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copyAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addSessionAnnotationLink(const ::omero::model::SessionAnnotationLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addSessionAnnotationLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAllSessionAnnotationLinkSet(const ::omero::model::SessionAnnotationLinksSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAllSessionAnnotationLinkSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeSessionAnnotationLink(const ::omero::model::SessionAnnotationLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeSessionAnnotationLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeAllSessionAnnotationLinkSet(const ::omero::model::SessionAnnotationLinksSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeAllSessionAnnotationLinkSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void clearAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___clearAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void reloadAnnotationLinks(const ::omero::model::SessionPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___reloadAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getAnnotationLinksCountPerOwner(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::SessionAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkAnnotation(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addSessionAnnotationLinkToBoth(const ::omero::model::SessionAnnotationLinkPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addSessionAnnotationLinkToBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::SessionAnnotationLinksSeq findSessionAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___findSessionAnnotationLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unlinkAnnotation(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeSessionAnnotationLinkFromBoth(const ::omero::model::SessionAnnotationLinkPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeSessionAnnotationLinkFromBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::SessionLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkedAnnotationList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

protected:

    ::omero::RIntPtr version;

    ::omero::model::NodePtr node;

    ::omero::RStringPtr uuid;

    ::omero::model::ExperimenterPtr owner;

    ::omero::RLongPtr timeToIdle;

    ::omero::RLongPtr timeToLive;

    ::omero::RTimePtr started;

    ::omero::RTimePtr closed;

    ::omero::RStringPtr message;

    ::omero::RStringPtr defaultEventType;

    ::omero::RStringPtr userAgent;

    ::omero::model::SessionEventsSeq eventsSeq;

    bool eventsLoaded;

    ::omero::model::SessionAnnotationLinksSeq annotationLinksSeq;

    bool annotationLinksLoaded;

    ::omero::sys::CountMap annotationLinksCountPerOwner;
};

}

}

#endif
