// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `Node.ice'

#ifndef __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_Node_h__
#define __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_Node_h__

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

class Session;

class NodeAnnotationLink;

class Annotation;

class Details;

class Node;

}

}

}

namespace omero
{

namespace model
{

class Session;
bool operator==(const Session&, const Session&);
bool operator<(const Session&, const Session&);

class NodeAnnotationLink;
bool operator==(const NodeAnnotationLink&, const NodeAnnotationLink&);
bool operator<(const NodeAnnotationLink&, const NodeAnnotationLink&);

class Annotation;
bool operator==(const Annotation&, const Annotation&);
bool operator<(const Annotation&, const Annotation&);

class Details;
bool operator==(const Details&, const Details&);
bool operator<(const Details&, const Details&);

class Node;
bool operator==(const Node&, const Node&);
bool operator<(const Node&, const Node&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::model::Session*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Session*);

::Ice::Object* upCast(::omero::model::NodeAnnotationLink*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::NodeAnnotationLink*);

::Ice::Object* upCast(::omero::model::Annotation*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Annotation*);

::Ice::Object* upCast(::omero::model::Details*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Details*);

::Ice::Object* upCast(::omero::model::Node*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Node*);

}

namespace omero
{

namespace model
{

typedef ::IceInternal::Handle< ::omero::model::Session> SessionPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Session> SessionPrx;

void __read(::IceInternal::BasicStream*, SessionPrx&);
void __patch__SessionPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::NodeAnnotationLink> NodeAnnotationLinkPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::NodeAnnotationLink> NodeAnnotationLinkPrx;

void __read(::IceInternal::BasicStream*, NodeAnnotationLinkPrx&);
void __patch__NodeAnnotationLinkPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Annotation> AnnotationPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Annotation> AnnotationPrx;

void __read(::IceInternal::BasicStream*, AnnotationPrx&);
void __patch__AnnotationPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Details> DetailsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Details> DetailsPrx;

void __read(::IceInternal::BasicStream*, DetailsPrx&);
void __patch__DetailsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Node> NodePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Node> NodePrx;

void __read(::IceInternal::BasicStream*, NodePrx&);
void __patch__NodePtr(void*, ::Ice::ObjectPtr&);

}

}

namespace omero
{

namespace model
{

typedef ::std::vector< ::omero::model::SessionPtr> NodeSessionsSeq;
void __writeNodeSessionsSeq(::IceInternal::BasicStream*, const ::omero::model::SessionPtr*, const ::omero::model::SessionPtr*);
void __readNodeSessionsSeq(::IceInternal::BasicStream*, NodeSessionsSeq&);

typedef ::std::vector< ::omero::model::NodeAnnotationLinkPtr> NodeAnnotationLinksSeq;
void __writeNodeAnnotationLinksSeq(::IceInternal::BasicStream*, const ::omero::model::NodeAnnotationLinkPtr*, const ::omero::model::NodeAnnotationLinkPtr*);
void __readNodeAnnotationLinksSeq(::IceInternal::BasicStream*, NodeAnnotationLinksSeq&);

typedef ::std::vector< ::omero::model::AnnotationPtr> NodeLinkedAnnotationSeq;
void __writeNodeLinkedAnnotationSeq(::IceInternal::BasicStream*, const ::omero::model::AnnotationPtr*, const ::omero::model::AnnotationPtr*);
void __readNodeLinkedAnnotationSeq(::IceInternal::BasicStream*, NodeLinkedAnnotationSeq&);

}

}

namespace IceProxy
{

namespace omero
{

namespace model
{

class Node : virtual public ::IceProxy::omero::model::IObject
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

    void unloadSessions()
    {
        unloadSessions(0);
    }
    void unloadSessions(const ::Ice::Context& __ctx)
    {
        unloadSessions(&__ctx);
    }
    
private:

    void unloadSessions(const ::Ice::Context*);
    
public:

    ::Ice::Int sizeOfSessions()
    {
        return sizeOfSessions(0);
    }
    ::Ice::Int sizeOfSessions(const ::Ice::Context& __ctx)
    {
        return sizeOfSessions(&__ctx);
    }
    
private:

    ::Ice::Int sizeOfSessions(const ::Ice::Context*);
    
public:

    ::omero::model::NodeSessionsSeq copySessions()
    {
        return copySessions(0);
    }
    ::omero::model::NodeSessionsSeq copySessions(const ::Ice::Context& __ctx)
    {
        return copySessions(&__ctx);
    }
    
private:

    ::omero::model::NodeSessionsSeq copySessions(const ::Ice::Context*);
    
public:

    void addSession(const ::omero::model::SessionPtr& target)
    {
        addSession(target, 0);
    }
    void addSession(const ::omero::model::SessionPtr& target, const ::Ice::Context& __ctx)
    {
        addSession(target, &__ctx);
    }
    
private:

    void addSession(const ::omero::model::SessionPtr&, const ::Ice::Context*);
    
public:

    void addAllSessionSet(const ::omero::model::NodeSessionsSeq& targets)
    {
        addAllSessionSet(targets, 0);
    }
    void addAllSessionSet(const ::omero::model::NodeSessionsSeq& targets, const ::Ice::Context& __ctx)
    {
        addAllSessionSet(targets, &__ctx);
    }
    
private:

    void addAllSessionSet(const ::omero::model::NodeSessionsSeq&, const ::Ice::Context*);
    
public:

    void removeSession(const ::omero::model::SessionPtr& theTarget)
    {
        removeSession(theTarget, 0);
    }
    void removeSession(const ::omero::model::SessionPtr& theTarget, const ::Ice::Context& __ctx)
    {
        removeSession(theTarget, &__ctx);
    }
    
private:

    void removeSession(const ::omero::model::SessionPtr&, const ::Ice::Context*);
    
public:

    void removeAllSessionSet(const ::omero::model::NodeSessionsSeq& targets)
    {
        removeAllSessionSet(targets, 0);
    }
    void removeAllSessionSet(const ::omero::model::NodeSessionsSeq& targets, const ::Ice::Context& __ctx)
    {
        removeAllSessionSet(targets, &__ctx);
    }
    
private:

    void removeAllSessionSet(const ::omero::model::NodeSessionsSeq&, const ::Ice::Context*);
    
public:

    void clearSessions()
    {
        clearSessions(0);
    }
    void clearSessions(const ::Ice::Context& __ctx)
    {
        clearSessions(&__ctx);
    }
    
private:

    void clearSessions(const ::Ice::Context*);
    
public:

    void reloadSessions(const ::omero::model::NodePtr& toCopy)
    {
        reloadSessions(toCopy, 0);
    }
    void reloadSessions(const ::omero::model::NodePtr& toCopy, const ::Ice::Context& __ctx)
    {
        reloadSessions(toCopy, &__ctx);
    }
    
private:

    void reloadSessions(const ::omero::model::NodePtr&, const ::Ice::Context*);
    
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

    ::omero::RStringPtr getConn()
    {
        return getConn(0);
    }
    ::omero::RStringPtr getConn(const ::Ice::Context& __ctx)
    {
        return getConn(&__ctx);
    }
    
private:

    ::omero::RStringPtr getConn(const ::Ice::Context*);
    
public:

    void setConn(const ::omero::RStringPtr& theConn)
    {
        setConn(theConn, 0);
    }
    void setConn(const ::omero::RStringPtr& theConn, const ::Ice::Context& __ctx)
    {
        setConn(theConn, &__ctx);
    }
    
private:

    void setConn(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:

    ::omero::RTimePtr getUp()
    {
        return getUp(0);
    }
    ::omero::RTimePtr getUp(const ::Ice::Context& __ctx)
    {
        return getUp(&__ctx);
    }
    
private:

    ::omero::RTimePtr getUp(const ::Ice::Context*);
    
public:

    void setUp(const ::omero::RTimePtr& theUp)
    {
        setUp(theUp, 0);
    }
    void setUp(const ::omero::RTimePtr& theUp, const ::Ice::Context& __ctx)
    {
        setUp(theUp, &__ctx);
    }
    
private:

    void setUp(const ::omero::RTimePtr&, const ::Ice::Context*);
    
public:

    ::omero::RTimePtr getDown()
    {
        return getDown(0);
    }
    ::omero::RTimePtr getDown(const ::Ice::Context& __ctx)
    {
        return getDown(&__ctx);
    }
    
private:

    ::omero::RTimePtr getDown(const ::Ice::Context*);
    
public:

    void setDown(const ::omero::RTimePtr& theDown)
    {
        setDown(theDown, 0);
    }
    void setDown(const ::omero::RTimePtr& theDown, const ::Ice::Context& __ctx)
    {
        setDown(theDown, &__ctx);
    }
    
private:

    void setDown(const ::omero::RTimePtr&, const ::Ice::Context*);
    
public:

    ::omero::RIntPtr getScale()
    {
        return getScale(0);
    }
    ::omero::RIntPtr getScale(const ::Ice::Context& __ctx)
    {
        return getScale(&__ctx);
    }
    
private:

    ::omero::RIntPtr getScale(const ::Ice::Context*);
    
public:

    void setScale(const ::omero::RIntPtr& theScale)
    {
        setScale(theScale, 0);
    }
    void setScale(const ::omero::RIntPtr& theScale, const ::Ice::Context& __ctx)
    {
        setScale(theScale, &__ctx);
    }
    
private:

    void setScale(const ::omero::RIntPtr&, const ::Ice::Context*);
    
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

    ::omero::model::NodeAnnotationLinksSeq copyAnnotationLinks()
    {
        return copyAnnotationLinks(0);
    }
    ::omero::model::NodeAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context& __ctx)
    {
        return copyAnnotationLinks(&__ctx);
    }
    
private:

    ::omero::model::NodeAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*);
    
public:

    void addNodeAnnotationLink(const ::omero::model::NodeAnnotationLinkPtr& target)
    {
        addNodeAnnotationLink(target, 0);
    }
    void addNodeAnnotationLink(const ::omero::model::NodeAnnotationLinkPtr& target, const ::Ice::Context& __ctx)
    {
        addNodeAnnotationLink(target, &__ctx);
    }
    
private:

    void addNodeAnnotationLink(const ::omero::model::NodeAnnotationLinkPtr&, const ::Ice::Context*);
    
public:

    void addAllNodeAnnotationLinkSet(const ::omero::model::NodeAnnotationLinksSeq& targets)
    {
        addAllNodeAnnotationLinkSet(targets, 0);
    }
    void addAllNodeAnnotationLinkSet(const ::omero::model::NodeAnnotationLinksSeq& targets, const ::Ice::Context& __ctx)
    {
        addAllNodeAnnotationLinkSet(targets, &__ctx);
    }
    
private:

    void addAllNodeAnnotationLinkSet(const ::omero::model::NodeAnnotationLinksSeq&, const ::Ice::Context*);
    
public:

    void removeNodeAnnotationLink(const ::omero::model::NodeAnnotationLinkPtr& theTarget)
    {
        removeNodeAnnotationLink(theTarget, 0);
    }
    void removeNodeAnnotationLink(const ::omero::model::NodeAnnotationLinkPtr& theTarget, const ::Ice::Context& __ctx)
    {
        removeNodeAnnotationLink(theTarget, &__ctx);
    }
    
private:

    void removeNodeAnnotationLink(const ::omero::model::NodeAnnotationLinkPtr&, const ::Ice::Context*);
    
public:

    void removeAllNodeAnnotationLinkSet(const ::omero::model::NodeAnnotationLinksSeq& targets)
    {
        removeAllNodeAnnotationLinkSet(targets, 0);
    }
    void removeAllNodeAnnotationLinkSet(const ::omero::model::NodeAnnotationLinksSeq& targets, const ::Ice::Context& __ctx)
    {
        removeAllNodeAnnotationLinkSet(targets, &__ctx);
    }
    
private:

    void removeAllNodeAnnotationLinkSet(const ::omero::model::NodeAnnotationLinksSeq&, const ::Ice::Context*);
    
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

    void reloadAnnotationLinks(const ::omero::model::NodePtr& toCopy)
    {
        reloadAnnotationLinks(toCopy, 0);
    }
    void reloadAnnotationLinks(const ::omero::model::NodePtr& toCopy, const ::Ice::Context& __ctx)
    {
        reloadAnnotationLinks(toCopy, &__ctx);
    }
    
private:

    void reloadAnnotationLinks(const ::omero::model::NodePtr&, const ::Ice::Context*);
    
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

    ::omero::model::NodeAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr& addition)
    {
        return linkAnnotation(addition, 0);
    }
    ::omero::model::NodeAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr& addition, const ::Ice::Context& __ctx)
    {
        return linkAnnotation(addition, &__ctx);
    }
    
private:

    ::omero::model::NodeAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);
    
public:

    void addNodeAnnotationLinkToBoth(const ::omero::model::NodeAnnotationLinkPtr& link, bool bothSides)
    {
        addNodeAnnotationLinkToBoth(link, bothSides, 0);
    }
    void addNodeAnnotationLinkToBoth(const ::omero::model::NodeAnnotationLinkPtr& link, bool bothSides, const ::Ice::Context& __ctx)
    {
        addNodeAnnotationLinkToBoth(link, bothSides, &__ctx);
    }
    
private:

    void addNodeAnnotationLinkToBoth(const ::omero::model::NodeAnnotationLinkPtr&, bool, const ::Ice::Context*);
    
public:

    ::omero::model::NodeAnnotationLinksSeq findNodeAnnotationLink(const ::omero::model::AnnotationPtr& removal)
    {
        return findNodeAnnotationLink(removal, 0);
    }
    ::omero::model::NodeAnnotationLinksSeq findNodeAnnotationLink(const ::omero::model::AnnotationPtr& removal, const ::Ice::Context& __ctx)
    {
        return findNodeAnnotationLink(removal, &__ctx);
    }
    
private:

    ::omero::model::NodeAnnotationLinksSeq findNodeAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);
    
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

    void removeNodeAnnotationLinkFromBoth(const ::omero::model::NodeAnnotationLinkPtr& link, bool bothSides)
    {
        removeNodeAnnotationLinkFromBoth(link, bothSides, 0);
    }
    void removeNodeAnnotationLinkFromBoth(const ::omero::model::NodeAnnotationLinkPtr& link, bool bothSides, const ::Ice::Context& __ctx)
    {
        removeNodeAnnotationLinkFromBoth(link, bothSides, &__ctx);
    }
    
private:

    void removeNodeAnnotationLinkFromBoth(const ::omero::model::NodeAnnotationLinkPtr&, bool, const ::Ice::Context*);
    
public:

    ::omero::model::NodeLinkedAnnotationSeq linkedAnnotationList()
    {
        return linkedAnnotationList(0);
    }
    ::omero::model::NodeLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context& __ctx)
    {
        return linkedAnnotationList(&__ctx);
    }
    
private:

    ::omero::model::NodeLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<Node> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Node*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Node*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Node> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Node*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Node*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Node> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Node*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Node*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Node> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Node*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Node*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Node> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Node*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Node*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Node> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Node*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Node*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Node> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Node*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Node*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Node> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Node*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Node*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Node> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Node*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Node*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Node> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Node*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Node*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Node> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Node*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Node*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Node> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Node*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Node*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Node> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Node*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Node*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Node> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Node*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Node*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Node> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Node*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Node*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Node> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Node*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Node*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Node> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Node*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Node*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Node> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Node*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Node*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Node> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Node*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Node*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class Node : virtual public ::IceDelegate::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*) = 0;

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual void unloadSessions(const ::Ice::Context*) = 0;

    virtual ::Ice::Int sizeOfSessions(const ::Ice::Context*) = 0;

    virtual ::omero::model::NodeSessionsSeq copySessions(const ::Ice::Context*) = 0;

    virtual void addSession(const ::omero::model::SessionPtr&, const ::Ice::Context*) = 0;

    virtual void addAllSessionSet(const ::omero::model::NodeSessionsSeq&, const ::Ice::Context*) = 0;

    virtual void removeSession(const ::omero::model::SessionPtr&, const ::Ice::Context*) = 0;

    virtual void removeAllSessionSet(const ::omero::model::NodeSessionsSeq&, const ::Ice::Context*) = 0;

    virtual void clearSessions(const ::Ice::Context*) = 0;

    virtual void reloadSessions(const ::omero::model::NodePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getUuid(const ::Ice::Context*) = 0;

    virtual void setUuid(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getConn(const ::Ice::Context*) = 0;

    virtual void setConn(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RTimePtr getUp(const ::Ice::Context*) = 0;

    virtual void setUp(const ::omero::RTimePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RTimePtr getDown(const ::Ice::Context*) = 0;

    virtual void setDown(const ::omero::RTimePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RIntPtr getScale(const ::Ice::Context*) = 0;

    virtual void setScale(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual void unloadAnnotationLinks(const ::Ice::Context*) = 0;

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Context*) = 0;

    virtual ::omero::model::NodeAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*) = 0;

    virtual void addNodeAnnotationLink(const ::omero::model::NodeAnnotationLinkPtr&, const ::Ice::Context*) = 0;

    virtual void addAllNodeAnnotationLinkSet(const ::omero::model::NodeAnnotationLinksSeq&, const ::Ice::Context*) = 0;

    virtual void removeNodeAnnotationLink(const ::omero::model::NodeAnnotationLinkPtr&, const ::Ice::Context*) = 0;

    virtual void removeAllNodeAnnotationLinkSet(const ::omero::model::NodeAnnotationLinksSeq&, const ::Ice::Context*) = 0;

    virtual void clearAnnotationLinks(const ::Ice::Context*) = 0;

    virtual void reloadAnnotationLinks(const ::omero::model::NodePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Context*) = 0;

    virtual ::omero::model::NodeAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*) = 0;

    virtual void addNodeAnnotationLinkToBoth(const ::omero::model::NodeAnnotationLinkPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::NodeAnnotationLinksSeq findNodeAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*) = 0;

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*) = 0;

    virtual void removeNodeAnnotationLinkFromBoth(const ::omero::model::NodeAnnotationLinkPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::NodeLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*) = 0;
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

class Node : virtual public ::IceDelegate::omero::model::Node,
             virtual public ::IceDelegateM::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual void unloadSessions(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfSessions(const ::Ice::Context*);

    virtual ::omero::model::NodeSessionsSeq copySessions(const ::Ice::Context*);

    virtual void addSession(const ::omero::model::SessionPtr&, const ::Ice::Context*);

    virtual void addAllSessionSet(const ::omero::model::NodeSessionsSeq&, const ::Ice::Context*);

    virtual void removeSession(const ::omero::model::SessionPtr&, const ::Ice::Context*);

    virtual void removeAllSessionSet(const ::omero::model::NodeSessionsSeq&, const ::Ice::Context*);

    virtual void clearSessions(const ::Ice::Context*);

    virtual void reloadSessions(const ::omero::model::NodePtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getUuid(const ::Ice::Context*);

    virtual void setUuid(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getConn(const ::Ice::Context*);

    virtual void setConn(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RTimePtr getUp(const ::Ice::Context*);

    virtual void setUp(const ::omero::RTimePtr&, const ::Ice::Context*);

    virtual ::omero::RTimePtr getDown(const ::Ice::Context*);

    virtual void setDown(const ::omero::RTimePtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getScale(const ::Ice::Context*);

    virtual void setScale(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual void unloadAnnotationLinks(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Context*);

    virtual ::omero::model::NodeAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*);

    virtual void addNodeAnnotationLink(const ::omero::model::NodeAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void addAllNodeAnnotationLinkSet(const ::omero::model::NodeAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void removeNodeAnnotationLink(const ::omero::model::NodeAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void removeAllNodeAnnotationLinkSet(const ::omero::model::NodeAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void clearAnnotationLinks(const ::Ice::Context*);

    virtual void reloadAnnotationLinks(const ::omero::model::NodePtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::NodeAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void addNodeAnnotationLinkToBoth(const ::omero::model::NodeAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::NodeAnnotationLinksSeq findNodeAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void removeNodeAnnotationLinkFromBoth(const ::omero::model::NodeAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::NodeLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*);
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

class Node : virtual public ::IceDelegate::omero::model::Node,
             virtual public ::IceDelegateD::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual void unloadSessions(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfSessions(const ::Ice::Context*);

    virtual ::omero::model::NodeSessionsSeq copySessions(const ::Ice::Context*);

    virtual void addSession(const ::omero::model::SessionPtr&, const ::Ice::Context*);

    virtual void addAllSessionSet(const ::omero::model::NodeSessionsSeq&, const ::Ice::Context*);

    virtual void removeSession(const ::omero::model::SessionPtr&, const ::Ice::Context*);

    virtual void removeAllSessionSet(const ::omero::model::NodeSessionsSeq&, const ::Ice::Context*);

    virtual void clearSessions(const ::Ice::Context*);

    virtual void reloadSessions(const ::omero::model::NodePtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getUuid(const ::Ice::Context*);

    virtual void setUuid(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getConn(const ::Ice::Context*);

    virtual void setConn(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RTimePtr getUp(const ::Ice::Context*);

    virtual void setUp(const ::omero::RTimePtr&, const ::Ice::Context*);

    virtual ::omero::RTimePtr getDown(const ::Ice::Context*);

    virtual void setDown(const ::omero::RTimePtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getScale(const ::Ice::Context*);

    virtual void setScale(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual void unloadAnnotationLinks(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Context*);

    virtual ::omero::model::NodeAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*);

    virtual void addNodeAnnotationLink(const ::omero::model::NodeAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void addAllNodeAnnotationLinkSet(const ::omero::model::NodeAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void removeNodeAnnotationLink(const ::omero::model::NodeAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void removeAllNodeAnnotationLinkSet(const ::omero::model::NodeAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void clearAnnotationLinks(const ::Ice::Context*);

    virtual void reloadAnnotationLinks(const ::omero::model::NodePtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::NodeAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void addNodeAnnotationLinkToBoth(const ::omero::model::NodeAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::NodeAnnotationLinksSeq findNodeAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void removeNodeAnnotationLinkFromBoth(const ::omero::model::NodeAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::NodeLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace model
{

class Node : virtual public ::omero::model::IObject
{
public:

    typedef NodePrx ProxyType;
    typedef NodePtr PointerType;
    
    Node() {}
    Node(const ::omero::RLongPtr&, const ::omero::model::DetailsPtr&, bool, const ::omero::RIntPtr&, const ::omero::model::NodeSessionsSeq&, bool, const ::omero::RStringPtr&, const ::omero::RStringPtr&, const ::omero::RTimePtr&, const ::omero::RTimePtr&, const ::omero::RIntPtr&, const ::omero::model::NodeAnnotationLinksSeq&, bool, const ::omero::sys::CountMap&);
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

    virtual void unloadSessions(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unloadSessions(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int sizeOfSessions(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sizeOfSessions(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::NodeSessionsSeq copySessions(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copySessions(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addSession(const ::omero::model::SessionPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addSession(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAllSessionSet(const ::omero::model::NodeSessionsSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAllSessionSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeSession(const ::omero::model::SessionPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeSession(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeAllSessionSet(const ::omero::model::NodeSessionsSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeAllSessionSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void clearSessions(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___clearSessions(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void reloadSessions(const ::omero::model::NodePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___reloadSessions(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getUuid(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getUuid(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setUuid(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setUuid(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getConn(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getConn(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setConn(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setConn(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RTimePtr getUp(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getUp(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setUp(const ::omero::RTimePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setUp(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RTimePtr getDown(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getDown(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setDown(const ::omero::RTimePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setDown(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RIntPtr getScale(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getScale(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setScale(const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setScale(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unloadAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unloadAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sizeOfAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::NodeAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copyAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addNodeAnnotationLink(const ::omero::model::NodeAnnotationLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addNodeAnnotationLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAllNodeAnnotationLinkSet(const ::omero::model::NodeAnnotationLinksSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAllNodeAnnotationLinkSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeNodeAnnotationLink(const ::omero::model::NodeAnnotationLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeNodeAnnotationLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeAllNodeAnnotationLinkSet(const ::omero::model::NodeAnnotationLinksSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeAllNodeAnnotationLinkSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void clearAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___clearAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void reloadAnnotationLinks(const ::omero::model::NodePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___reloadAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getAnnotationLinksCountPerOwner(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::NodeAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkAnnotation(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addNodeAnnotationLinkToBoth(const ::omero::model::NodeAnnotationLinkPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addNodeAnnotationLinkToBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::NodeAnnotationLinksSeq findNodeAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___findNodeAnnotationLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unlinkAnnotation(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeNodeAnnotationLinkFromBoth(const ::omero::model::NodeAnnotationLinkPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeNodeAnnotationLinkFromBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::NodeLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkedAnnotationList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

protected:

    ::omero::RIntPtr version;

    ::omero::model::NodeSessionsSeq sessionsSeq;

    bool sessionsLoaded;

    ::omero::RStringPtr uuid;

    ::omero::RStringPtr conn;

    ::omero::RTimePtr up;

    ::omero::RTimePtr down;

    ::omero::RIntPtr scale;

    ::omero::model::NodeAnnotationLinksSeq annotationLinksSeq;

    bool annotationLinksLoaded;

    ::omero::sys::CountMap annotationLinksCountPerOwner;
};

}

}

#endif
