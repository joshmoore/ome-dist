// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `Annotation.ice'

#ifndef __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_Annotation_h__
#define __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_Annotation_h__

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

class AnnotationAnnotationLink;

class Annotation;

class Details;

}

}

}

namespace omero
{

namespace model
{

class AnnotationAnnotationLink;
bool operator==(const AnnotationAnnotationLink&, const AnnotationAnnotationLink&);
bool operator<(const AnnotationAnnotationLink&, const AnnotationAnnotationLink&);

class Annotation;
bool operator==(const Annotation&, const Annotation&);
bool operator<(const Annotation&, const Annotation&);

class Details;
bool operator==(const Details&, const Details&);
bool operator<(const Details&, const Details&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::model::AnnotationAnnotationLink*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::AnnotationAnnotationLink*);

::Ice::Object* upCast(::omero::model::Annotation*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Annotation*);

::Ice::Object* upCast(::omero::model::Details*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Details*);

}

namespace omero
{

namespace model
{

typedef ::IceInternal::Handle< ::omero::model::AnnotationAnnotationLink> AnnotationAnnotationLinkPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::AnnotationAnnotationLink> AnnotationAnnotationLinkPrx;

void __read(::IceInternal::BasicStream*, AnnotationAnnotationLinkPrx&);
void __patch__AnnotationAnnotationLinkPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Annotation> AnnotationPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Annotation> AnnotationPrx;

void __read(::IceInternal::BasicStream*, AnnotationPrx&);
void __patch__AnnotationPtr(void*, ::Ice::ObjectPtr&);

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

typedef ::std::vector< ::omero::model::AnnotationAnnotationLinkPtr> AnnotationAnnotationLinksSeq;
void __writeAnnotationAnnotationLinksSeq(::IceInternal::BasicStream*, const ::omero::model::AnnotationAnnotationLinkPtr*, const ::omero::model::AnnotationAnnotationLinkPtr*);
void __readAnnotationAnnotationLinksSeq(::IceInternal::BasicStream*, AnnotationAnnotationLinksSeq&);

typedef ::std::vector< ::omero::model::AnnotationPtr> AnnotationLinkedAnnotationSeq;
void __writeAnnotationLinkedAnnotationSeq(::IceInternal::BasicStream*, const ::omero::model::AnnotationPtr*, const ::omero::model::AnnotationPtr*);
void __readAnnotationLinkedAnnotationSeq(::IceInternal::BasicStream*, AnnotationLinkedAnnotationSeq&);

}

}

namespace IceProxy
{

namespace omero
{

namespace model
{

class Annotation : virtual public ::IceProxy::omero::model::IObject
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

    ::omero::RStringPtr getNs()
    {
        return getNs(0);
    }
    ::omero::RStringPtr getNs(const ::Ice::Context& __ctx)
    {
        return getNs(&__ctx);
    }
    
private:

    ::omero::RStringPtr getNs(const ::Ice::Context*);
    
public:

    void setNs(const ::omero::RStringPtr& theNs)
    {
        setNs(theNs, 0);
    }
    void setNs(const ::omero::RStringPtr& theNs, const ::Ice::Context& __ctx)
    {
        setNs(theNs, &__ctx);
    }
    
private:

    void setNs(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:

    ::omero::RStringPtr getDescription()
    {
        return getDescription(0);
    }
    ::omero::RStringPtr getDescription(const ::Ice::Context& __ctx)
    {
        return getDescription(&__ctx);
    }
    
private:

    ::omero::RStringPtr getDescription(const ::Ice::Context*);
    
public:

    void setDescription(const ::omero::RStringPtr& theDescription)
    {
        setDescription(theDescription, 0);
    }
    void setDescription(const ::omero::RStringPtr& theDescription, const ::Ice::Context& __ctx)
    {
        setDescription(theDescription, &__ctx);
    }
    
private:

    void setDescription(const ::omero::RStringPtr&, const ::Ice::Context*);
    
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

    ::omero::model::AnnotationAnnotationLinksSeq copyAnnotationLinks()
    {
        return copyAnnotationLinks(0);
    }
    ::omero::model::AnnotationAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context& __ctx)
    {
        return copyAnnotationLinks(&__ctx);
    }
    
private:

    ::omero::model::AnnotationAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*);
    
public:

    void addAnnotationAnnotationLink(const ::omero::model::AnnotationAnnotationLinkPtr& target)
    {
        addAnnotationAnnotationLink(target, 0);
    }
    void addAnnotationAnnotationLink(const ::omero::model::AnnotationAnnotationLinkPtr& target, const ::Ice::Context& __ctx)
    {
        addAnnotationAnnotationLink(target, &__ctx);
    }
    
private:

    void addAnnotationAnnotationLink(const ::omero::model::AnnotationAnnotationLinkPtr&, const ::Ice::Context*);
    
public:

    void addAllAnnotationAnnotationLinkSet(const ::omero::model::AnnotationAnnotationLinksSeq& targets)
    {
        addAllAnnotationAnnotationLinkSet(targets, 0);
    }
    void addAllAnnotationAnnotationLinkSet(const ::omero::model::AnnotationAnnotationLinksSeq& targets, const ::Ice::Context& __ctx)
    {
        addAllAnnotationAnnotationLinkSet(targets, &__ctx);
    }
    
private:

    void addAllAnnotationAnnotationLinkSet(const ::omero::model::AnnotationAnnotationLinksSeq&, const ::Ice::Context*);
    
public:

    void removeAnnotationAnnotationLink(const ::omero::model::AnnotationAnnotationLinkPtr& theTarget)
    {
        removeAnnotationAnnotationLink(theTarget, 0);
    }
    void removeAnnotationAnnotationLink(const ::omero::model::AnnotationAnnotationLinkPtr& theTarget, const ::Ice::Context& __ctx)
    {
        removeAnnotationAnnotationLink(theTarget, &__ctx);
    }
    
private:

    void removeAnnotationAnnotationLink(const ::omero::model::AnnotationAnnotationLinkPtr&, const ::Ice::Context*);
    
public:

    void removeAllAnnotationAnnotationLinkSet(const ::omero::model::AnnotationAnnotationLinksSeq& targets)
    {
        removeAllAnnotationAnnotationLinkSet(targets, 0);
    }
    void removeAllAnnotationAnnotationLinkSet(const ::omero::model::AnnotationAnnotationLinksSeq& targets, const ::Ice::Context& __ctx)
    {
        removeAllAnnotationAnnotationLinkSet(targets, &__ctx);
    }
    
private:

    void removeAllAnnotationAnnotationLinkSet(const ::omero::model::AnnotationAnnotationLinksSeq&, const ::Ice::Context*);
    
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

    void reloadAnnotationLinks(const ::omero::model::AnnotationPtr& toCopy)
    {
        reloadAnnotationLinks(toCopy, 0);
    }
    void reloadAnnotationLinks(const ::omero::model::AnnotationPtr& toCopy, const ::Ice::Context& __ctx)
    {
        reloadAnnotationLinks(toCopy, &__ctx);
    }
    
private:

    void reloadAnnotationLinks(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);
    
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

    ::omero::model::AnnotationAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr& addition)
    {
        return linkAnnotation(addition, 0);
    }
    ::omero::model::AnnotationAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr& addition, const ::Ice::Context& __ctx)
    {
        return linkAnnotation(addition, &__ctx);
    }
    
private:

    ::omero::model::AnnotationAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);
    
public:

    void addAnnotationAnnotationLinkToBoth(const ::omero::model::AnnotationAnnotationLinkPtr& link, bool bothSides)
    {
        addAnnotationAnnotationLinkToBoth(link, bothSides, 0);
    }
    void addAnnotationAnnotationLinkToBoth(const ::omero::model::AnnotationAnnotationLinkPtr& link, bool bothSides, const ::Ice::Context& __ctx)
    {
        addAnnotationAnnotationLinkToBoth(link, bothSides, &__ctx);
    }
    
private:

    void addAnnotationAnnotationLinkToBoth(const ::omero::model::AnnotationAnnotationLinkPtr&, bool, const ::Ice::Context*);
    
public:

    ::omero::model::AnnotationAnnotationLinksSeq findAnnotationAnnotationLink(const ::omero::model::AnnotationPtr& removal)
    {
        return findAnnotationAnnotationLink(removal, 0);
    }
    ::omero::model::AnnotationAnnotationLinksSeq findAnnotationAnnotationLink(const ::omero::model::AnnotationPtr& removal, const ::Ice::Context& __ctx)
    {
        return findAnnotationAnnotationLink(removal, &__ctx);
    }
    
private:

    ::omero::model::AnnotationAnnotationLinksSeq findAnnotationAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);
    
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

    void removeAnnotationAnnotationLinkFromBoth(const ::omero::model::AnnotationAnnotationLinkPtr& link, bool bothSides)
    {
        removeAnnotationAnnotationLinkFromBoth(link, bothSides, 0);
    }
    void removeAnnotationAnnotationLinkFromBoth(const ::omero::model::AnnotationAnnotationLinkPtr& link, bool bothSides, const ::Ice::Context& __ctx)
    {
        removeAnnotationAnnotationLinkFromBoth(link, bothSides, &__ctx);
    }
    
private:

    void removeAnnotationAnnotationLinkFromBoth(const ::omero::model::AnnotationAnnotationLinkPtr&, bool, const ::Ice::Context*);
    
public:

    ::omero::model::AnnotationLinkedAnnotationSeq linkedAnnotationList()
    {
        return linkedAnnotationList(0);
    }
    ::omero::model::AnnotationLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context& __ctx)
    {
        return linkedAnnotationList(&__ctx);
    }
    
private:

    ::omero::model::AnnotationLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<Annotation> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Annotation*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Annotation*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Annotation> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Annotation*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Annotation*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Annotation> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Annotation*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Annotation*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Annotation> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Annotation*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Annotation*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Annotation> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Annotation*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Annotation*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Annotation> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Annotation*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Annotation*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Annotation> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Annotation*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Annotation*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Annotation> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Annotation*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Annotation*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Annotation> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Annotation*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Annotation*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Annotation> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Annotation*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Annotation*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Annotation> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Annotation*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Annotation*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Annotation> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Annotation*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Annotation*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Annotation> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Annotation*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Annotation*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Annotation> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Annotation*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Annotation*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Annotation> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Annotation*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Annotation*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Annotation> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Annotation*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Annotation*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Annotation> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Annotation*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Annotation*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Annotation> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Annotation*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Annotation*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Annotation> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Annotation*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Annotation*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class Annotation : virtual public ::IceDelegate::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*) = 0;

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getNs(const ::Ice::Context*) = 0;

    virtual void setNs(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getDescription(const ::Ice::Context*) = 0;

    virtual void setDescription(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual void unloadAnnotationLinks(const ::Ice::Context*) = 0;

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Context*) = 0;

    virtual ::omero::model::AnnotationAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*) = 0;

    virtual void addAnnotationAnnotationLink(const ::omero::model::AnnotationAnnotationLinkPtr&, const ::Ice::Context*) = 0;

    virtual void addAllAnnotationAnnotationLinkSet(const ::omero::model::AnnotationAnnotationLinksSeq&, const ::Ice::Context*) = 0;

    virtual void removeAnnotationAnnotationLink(const ::omero::model::AnnotationAnnotationLinkPtr&, const ::Ice::Context*) = 0;

    virtual void removeAllAnnotationAnnotationLinkSet(const ::omero::model::AnnotationAnnotationLinksSeq&, const ::Ice::Context*) = 0;

    virtual void clearAnnotationLinks(const ::Ice::Context*) = 0;

    virtual void reloadAnnotationLinks(const ::omero::model::AnnotationPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Context*) = 0;

    virtual ::omero::model::AnnotationAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*) = 0;

    virtual void addAnnotationAnnotationLinkToBoth(const ::omero::model::AnnotationAnnotationLinkPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::AnnotationAnnotationLinksSeq findAnnotationAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*) = 0;

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*) = 0;

    virtual void removeAnnotationAnnotationLinkFromBoth(const ::omero::model::AnnotationAnnotationLinkPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::AnnotationLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*) = 0;
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

class Annotation : virtual public ::IceDelegate::omero::model::Annotation,
                   virtual public ::IceDelegateM::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getNs(const ::Ice::Context*);

    virtual void setNs(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getDescription(const ::Ice::Context*);

    virtual void setDescription(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual void unloadAnnotationLinks(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Context*);

    virtual ::omero::model::AnnotationAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*);

    virtual void addAnnotationAnnotationLink(const ::omero::model::AnnotationAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void addAllAnnotationAnnotationLinkSet(const ::omero::model::AnnotationAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void removeAnnotationAnnotationLink(const ::omero::model::AnnotationAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void removeAllAnnotationAnnotationLinkSet(const ::omero::model::AnnotationAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void clearAnnotationLinks(const ::Ice::Context*);

    virtual void reloadAnnotationLinks(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::AnnotationAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void addAnnotationAnnotationLinkToBoth(const ::omero::model::AnnotationAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::AnnotationAnnotationLinksSeq findAnnotationAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void removeAnnotationAnnotationLinkFromBoth(const ::omero::model::AnnotationAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::AnnotationLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*);
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

class Annotation : virtual public ::IceDelegate::omero::model::Annotation,
                   virtual public ::IceDelegateD::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getNs(const ::Ice::Context*);

    virtual void setNs(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getDescription(const ::Ice::Context*);

    virtual void setDescription(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual void unloadAnnotationLinks(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Context*);

    virtual ::omero::model::AnnotationAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*);

    virtual void addAnnotationAnnotationLink(const ::omero::model::AnnotationAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void addAllAnnotationAnnotationLinkSet(const ::omero::model::AnnotationAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void removeAnnotationAnnotationLink(const ::omero::model::AnnotationAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void removeAllAnnotationAnnotationLinkSet(const ::omero::model::AnnotationAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void clearAnnotationLinks(const ::Ice::Context*);

    virtual void reloadAnnotationLinks(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::AnnotationAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void addAnnotationAnnotationLinkToBoth(const ::omero::model::AnnotationAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::AnnotationAnnotationLinksSeq findAnnotationAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void removeAnnotationAnnotationLinkFromBoth(const ::omero::model::AnnotationAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::AnnotationLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace model
{

class Annotation : virtual public ::omero::model::IObject
{
public:

    typedef AnnotationPrx ProxyType;
    typedef AnnotationPtr PointerType;
    
    Annotation() {}
    Annotation(const ::omero::RLongPtr&, const ::omero::model::DetailsPtr&, bool, const ::omero::RIntPtr&, const ::omero::RStringPtr&, const ::omero::RStringPtr&, const ::omero::model::AnnotationAnnotationLinksSeq&, bool, const ::omero::sys::CountMap&);
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

    virtual ::omero::RStringPtr getNs(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getNs(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setNs(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setNs(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getDescription(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getDescription(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setDescription(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setDescription(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unloadAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unloadAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sizeOfAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::AnnotationAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copyAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAnnotationAnnotationLink(const ::omero::model::AnnotationAnnotationLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAnnotationAnnotationLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAllAnnotationAnnotationLinkSet(const ::omero::model::AnnotationAnnotationLinksSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAllAnnotationAnnotationLinkSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeAnnotationAnnotationLink(const ::omero::model::AnnotationAnnotationLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeAnnotationAnnotationLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeAllAnnotationAnnotationLinkSet(const ::omero::model::AnnotationAnnotationLinksSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeAllAnnotationAnnotationLinkSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void clearAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___clearAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void reloadAnnotationLinks(const ::omero::model::AnnotationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___reloadAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getAnnotationLinksCountPerOwner(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::AnnotationAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkAnnotation(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAnnotationAnnotationLinkToBoth(const ::omero::model::AnnotationAnnotationLinkPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAnnotationAnnotationLinkToBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::AnnotationAnnotationLinksSeq findAnnotationAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___findAnnotationAnnotationLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unlinkAnnotation(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeAnnotationAnnotationLinkFromBoth(const ::omero::model::AnnotationAnnotationLinkPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeAnnotationAnnotationLinkFromBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::AnnotationLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkedAnnotationList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

protected:

    ::omero::RIntPtr version;

    ::omero::RStringPtr ns;

    ::omero::RStringPtr description;

    ::omero::model::AnnotationAnnotationLinksSeq annotationLinksSeq;

    bool annotationLinksLoaded;

    ::omero::sys::CountMap annotationLinksCountPerOwner;
};

}

}

#endif
