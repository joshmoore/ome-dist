// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `Namespace.ice'

#ifndef __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_Namespace_h__
#define __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_Namespace_h__

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

class NamespaceAnnotationLink;

class Annotation;

class Details;

class Namespace;

}

}

}

namespace omero
{

namespace model
{

class NamespaceAnnotationLink;
bool operator==(const NamespaceAnnotationLink&, const NamespaceAnnotationLink&);
bool operator<(const NamespaceAnnotationLink&, const NamespaceAnnotationLink&);

class Annotation;
bool operator==(const Annotation&, const Annotation&);
bool operator<(const Annotation&, const Annotation&);

class Details;
bool operator==(const Details&, const Details&);
bool operator<(const Details&, const Details&);

class Namespace;
bool operator==(const Namespace&, const Namespace&);
bool operator<(const Namespace&, const Namespace&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::model::NamespaceAnnotationLink*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::NamespaceAnnotationLink*);

::Ice::Object* upCast(::omero::model::Annotation*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Annotation*);

::Ice::Object* upCast(::omero::model::Details*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Details*);

::Ice::Object* upCast(::omero::model::Namespace*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Namespace*);

}

namespace omero
{

namespace model
{

typedef ::IceInternal::Handle< ::omero::model::NamespaceAnnotationLink> NamespaceAnnotationLinkPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::NamespaceAnnotationLink> NamespaceAnnotationLinkPrx;

void __read(::IceInternal::BasicStream*, NamespaceAnnotationLinkPrx&);
void __patch__NamespaceAnnotationLinkPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Annotation> AnnotationPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Annotation> AnnotationPrx;

void __read(::IceInternal::BasicStream*, AnnotationPrx&);
void __patch__AnnotationPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Details> DetailsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Details> DetailsPrx;

void __read(::IceInternal::BasicStream*, DetailsPrx&);
void __patch__DetailsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Namespace> NamespacePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Namespace> NamespacePrx;

void __read(::IceInternal::BasicStream*, NamespacePrx&);
void __patch__NamespacePtr(void*, ::Ice::ObjectPtr&);

}

}

namespace omero
{

namespace model
{

typedef ::std::vector< ::omero::model::NamespaceAnnotationLinkPtr> NamespaceAnnotationLinksSeq;
void __writeNamespaceAnnotationLinksSeq(::IceInternal::BasicStream*, const ::omero::model::NamespaceAnnotationLinkPtr*, const ::omero::model::NamespaceAnnotationLinkPtr*);
void __readNamespaceAnnotationLinksSeq(::IceInternal::BasicStream*, NamespaceAnnotationLinksSeq&);

typedef ::std::vector< ::omero::model::AnnotationPtr> NamespaceLinkedAnnotationSeq;
void __writeNamespaceLinkedAnnotationSeq(::IceInternal::BasicStream*, const ::omero::model::AnnotationPtr*, const ::omero::model::AnnotationPtr*);
void __readNamespaceLinkedAnnotationSeq(::IceInternal::BasicStream*, NamespaceLinkedAnnotationSeq&);

}

}

namespace IceProxy
{

namespace omero
{

namespace model
{

class Namespace : virtual public ::IceProxy::omero::model::IObject
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

    ::omero::api::StringArray getKeywords()
    {
        return getKeywords(0);
    }
    ::omero::api::StringArray getKeywords(const ::Ice::Context& __ctx)
    {
        return getKeywords(&__ctx);
    }
    
private:

    ::omero::api::StringArray getKeywords(const ::Ice::Context*);
    
public:

    void setKeywords(const ::omero::api::StringArray& theKeywords)
    {
        setKeywords(theKeywords, 0);
    }
    void setKeywords(const ::omero::api::StringArray& theKeywords, const ::Ice::Context& __ctx)
    {
        setKeywords(theKeywords, &__ctx);
    }
    
private:

    void setKeywords(const ::omero::api::StringArray&, const ::Ice::Context*);
    
public:

    ::omero::RBoolPtr getMultivalued()
    {
        return getMultivalued(0);
    }
    ::omero::RBoolPtr getMultivalued(const ::Ice::Context& __ctx)
    {
        return getMultivalued(&__ctx);
    }
    
private:

    ::omero::RBoolPtr getMultivalued(const ::Ice::Context*);
    
public:

    void setMultivalued(const ::omero::RBoolPtr& theMultivalued)
    {
        setMultivalued(theMultivalued, 0);
    }
    void setMultivalued(const ::omero::RBoolPtr& theMultivalued, const ::Ice::Context& __ctx)
    {
        setMultivalued(theMultivalued, &__ctx);
    }
    
private:

    void setMultivalued(const ::omero::RBoolPtr&, const ::Ice::Context*);
    
public:

    ::omero::RBoolPtr getDisplay()
    {
        return getDisplay(0);
    }
    ::omero::RBoolPtr getDisplay(const ::Ice::Context& __ctx)
    {
        return getDisplay(&__ctx);
    }
    
private:

    ::omero::RBoolPtr getDisplay(const ::Ice::Context*);
    
public:

    void setDisplay(const ::omero::RBoolPtr& theDisplay)
    {
        setDisplay(theDisplay, 0);
    }
    void setDisplay(const ::omero::RBoolPtr& theDisplay, const ::Ice::Context& __ctx)
    {
        setDisplay(theDisplay, &__ctx);
    }
    
private:

    void setDisplay(const ::omero::RBoolPtr&, const ::Ice::Context*);
    
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

    ::omero::model::NamespaceAnnotationLinksSeq copyAnnotationLinks()
    {
        return copyAnnotationLinks(0);
    }
    ::omero::model::NamespaceAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context& __ctx)
    {
        return copyAnnotationLinks(&__ctx);
    }
    
private:

    ::omero::model::NamespaceAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*);
    
public:

    void addNamespaceAnnotationLink(const ::omero::model::NamespaceAnnotationLinkPtr& target)
    {
        addNamespaceAnnotationLink(target, 0);
    }
    void addNamespaceAnnotationLink(const ::omero::model::NamespaceAnnotationLinkPtr& target, const ::Ice::Context& __ctx)
    {
        addNamespaceAnnotationLink(target, &__ctx);
    }
    
private:

    void addNamespaceAnnotationLink(const ::omero::model::NamespaceAnnotationLinkPtr&, const ::Ice::Context*);
    
public:

    void addAllNamespaceAnnotationLinkSet(const ::omero::model::NamespaceAnnotationLinksSeq& targets)
    {
        addAllNamespaceAnnotationLinkSet(targets, 0);
    }
    void addAllNamespaceAnnotationLinkSet(const ::omero::model::NamespaceAnnotationLinksSeq& targets, const ::Ice::Context& __ctx)
    {
        addAllNamespaceAnnotationLinkSet(targets, &__ctx);
    }
    
private:

    void addAllNamespaceAnnotationLinkSet(const ::omero::model::NamespaceAnnotationLinksSeq&, const ::Ice::Context*);
    
public:

    void removeNamespaceAnnotationLink(const ::omero::model::NamespaceAnnotationLinkPtr& theTarget)
    {
        removeNamespaceAnnotationLink(theTarget, 0);
    }
    void removeNamespaceAnnotationLink(const ::omero::model::NamespaceAnnotationLinkPtr& theTarget, const ::Ice::Context& __ctx)
    {
        removeNamespaceAnnotationLink(theTarget, &__ctx);
    }
    
private:

    void removeNamespaceAnnotationLink(const ::omero::model::NamespaceAnnotationLinkPtr&, const ::Ice::Context*);
    
public:

    void removeAllNamespaceAnnotationLinkSet(const ::omero::model::NamespaceAnnotationLinksSeq& targets)
    {
        removeAllNamespaceAnnotationLinkSet(targets, 0);
    }
    void removeAllNamespaceAnnotationLinkSet(const ::omero::model::NamespaceAnnotationLinksSeq& targets, const ::Ice::Context& __ctx)
    {
        removeAllNamespaceAnnotationLinkSet(targets, &__ctx);
    }
    
private:

    void removeAllNamespaceAnnotationLinkSet(const ::omero::model::NamespaceAnnotationLinksSeq&, const ::Ice::Context*);
    
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

    void reloadAnnotationLinks(const ::omero::model::NamespacePtr& toCopy)
    {
        reloadAnnotationLinks(toCopy, 0);
    }
    void reloadAnnotationLinks(const ::omero::model::NamespacePtr& toCopy, const ::Ice::Context& __ctx)
    {
        reloadAnnotationLinks(toCopy, &__ctx);
    }
    
private:

    void reloadAnnotationLinks(const ::omero::model::NamespacePtr&, const ::Ice::Context*);
    
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

    ::omero::model::NamespaceAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr& addition)
    {
        return linkAnnotation(addition, 0);
    }
    ::omero::model::NamespaceAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr& addition, const ::Ice::Context& __ctx)
    {
        return linkAnnotation(addition, &__ctx);
    }
    
private:

    ::omero::model::NamespaceAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);
    
public:

    void addNamespaceAnnotationLinkToBoth(const ::omero::model::NamespaceAnnotationLinkPtr& link, bool bothSides)
    {
        addNamespaceAnnotationLinkToBoth(link, bothSides, 0);
    }
    void addNamespaceAnnotationLinkToBoth(const ::omero::model::NamespaceAnnotationLinkPtr& link, bool bothSides, const ::Ice::Context& __ctx)
    {
        addNamespaceAnnotationLinkToBoth(link, bothSides, &__ctx);
    }
    
private:

    void addNamespaceAnnotationLinkToBoth(const ::omero::model::NamespaceAnnotationLinkPtr&, bool, const ::Ice::Context*);
    
public:

    ::omero::model::NamespaceAnnotationLinksSeq findNamespaceAnnotationLink(const ::omero::model::AnnotationPtr& removal)
    {
        return findNamespaceAnnotationLink(removal, 0);
    }
    ::omero::model::NamespaceAnnotationLinksSeq findNamespaceAnnotationLink(const ::omero::model::AnnotationPtr& removal, const ::Ice::Context& __ctx)
    {
        return findNamespaceAnnotationLink(removal, &__ctx);
    }
    
private:

    ::omero::model::NamespaceAnnotationLinksSeq findNamespaceAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);
    
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

    void removeNamespaceAnnotationLinkFromBoth(const ::omero::model::NamespaceAnnotationLinkPtr& link, bool bothSides)
    {
        removeNamespaceAnnotationLinkFromBoth(link, bothSides, 0);
    }
    void removeNamespaceAnnotationLinkFromBoth(const ::omero::model::NamespaceAnnotationLinkPtr& link, bool bothSides, const ::Ice::Context& __ctx)
    {
        removeNamespaceAnnotationLinkFromBoth(link, bothSides, &__ctx);
    }
    
private:

    void removeNamespaceAnnotationLinkFromBoth(const ::omero::model::NamespaceAnnotationLinkPtr&, bool, const ::Ice::Context*);
    
public:

    ::omero::model::NamespaceLinkedAnnotationSeq linkedAnnotationList()
    {
        return linkedAnnotationList(0);
    }
    ::omero::model::NamespaceLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context& __ctx)
    {
        return linkedAnnotationList(&__ctx);
    }
    
private:

    ::omero::model::NamespaceLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*);
    
public:

    ::omero::RStringPtr getName()
    {
        return getName(0);
    }
    ::omero::RStringPtr getName(const ::Ice::Context& __ctx)
    {
        return getName(&__ctx);
    }
    
private:

    ::omero::RStringPtr getName(const ::Ice::Context*);
    
public:

    void setName(const ::omero::RStringPtr& theName)
    {
        setName(theName, 0);
    }
    void setName(const ::omero::RStringPtr& theName, const ::Ice::Context& __ctx)
    {
        setName(theName, &__ctx);
    }
    
private:

    void setName(const ::omero::RStringPtr&, const ::Ice::Context*);
    
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
    
    ::IceInternal::ProxyHandle<Namespace> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Namespace*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Namespace*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Namespace> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Namespace*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Namespace*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Namespace> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Namespace*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Namespace*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Namespace> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Namespace*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Namespace*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Namespace> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Namespace*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Namespace*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Namespace> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Namespace*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Namespace*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Namespace> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Namespace*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Namespace*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Namespace> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Namespace*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Namespace*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Namespace> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Namespace*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Namespace*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Namespace> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Namespace*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Namespace*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Namespace> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Namespace*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Namespace*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Namespace> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Namespace*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Namespace*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Namespace> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Namespace*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Namespace*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Namespace> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Namespace*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Namespace*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Namespace> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Namespace*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Namespace*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Namespace> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Namespace*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Namespace*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Namespace> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Namespace*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Namespace*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Namespace> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Namespace*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Namespace*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Namespace> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Namespace*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Namespace*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class Namespace : virtual public ::IceDelegate::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*) = 0;

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::api::StringArray getKeywords(const ::Ice::Context*) = 0;

    virtual void setKeywords(const ::omero::api::StringArray&, const ::Ice::Context*) = 0;

    virtual ::omero::RBoolPtr getMultivalued(const ::Ice::Context*) = 0;

    virtual void setMultivalued(const ::omero::RBoolPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RBoolPtr getDisplay(const ::Ice::Context*) = 0;

    virtual void setDisplay(const ::omero::RBoolPtr&, const ::Ice::Context*) = 0;

    virtual void unloadAnnotationLinks(const ::Ice::Context*) = 0;

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Context*) = 0;

    virtual ::omero::model::NamespaceAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*) = 0;

    virtual void addNamespaceAnnotationLink(const ::omero::model::NamespaceAnnotationLinkPtr&, const ::Ice::Context*) = 0;

    virtual void addAllNamespaceAnnotationLinkSet(const ::omero::model::NamespaceAnnotationLinksSeq&, const ::Ice::Context*) = 0;

    virtual void removeNamespaceAnnotationLink(const ::omero::model::NamespaceAnnotationLinkPtr&, const ::Ice::Context*) = 0;

    virtual void removeAllNamespaceAnnotationLinkSet(const ::omero::model::NamespaceAnnotationLinksSeq&, const ::Ice::Context*) = 0;

    virtual void clearAnnotationLinks(const ::Ice::Context*) = 0;

    virtual void reloadAnnotationLinks(const ::omero::model::NamespacePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Context*) = 0;

    virtual ::omero::model::NamespaceAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*) = 0;

    virtual void addNamespaceAnnotationLinkToBoth(const ::omero::model::NamespaceAnnotationLinkPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::NamespaceAnnotationLinksSeq findNamespaceAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*) = 0;

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*) = 0;

    virtual void removeNamespaceAnnotationLinkFromBoth(const ::omero::model::NamespaceAnnotationLinkPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::NamespaceLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getName(const ::Ice::Context*) = 0;

    virtual void setName(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getDescription(const ::Ice::Context*) = 0;

    virtual void setDescription(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;
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

class Namespace : virtual public ::IceDelegate::omero::model::Namespace,
                  virtual public ::IceDelegateM::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::api::StringArray getKeywords(const ::Ice::Context*);

    virtual void setKeywords(const ::omero::api::StringArray&, const ::Ice::Context*);

    virtual ::omero::RBoolPtr getMultivalued(const ::Ice::Context*);

    virtual void setMultivalued(const ::omero::RBoolPtr&, const ::Ice::Context*);

    virtual ::omero::RBoolPtr getDisplay(const ::Ice::Context*);

    virtual void setDisplay(const ::omero::RBoolPtr&, const ::Ice::Context*);

    virtual void unloadAnnotationLinks(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Context*);

    virtual ::omero::model::NamespaceAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*);

    virtual void addNamespaceAnnotationLink(const ::omero::model::NamespaceAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void addAllNamespaceAnnotationLinkSet(const ::omero::model::NamespaceAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void removeNamespaceAnnotationLink(const ::omero::model::NamespaceAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void removeAllNamespaceAnnotationLinkSet(const ::omero::model::NamespaceAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void clearAnnotationLinks(const ::Ice::Context*);

    virtual void reloadAnnotationLinks(const ::omero::model::NamespacePtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::NamespaceAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void addNamespaceAnnotationLinkToBoth(const ::omero::model::NamespaceAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::NamespaceAnnotationLinksSeq findNamespaceAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void removeNamespaceAnnotationLinkFromBoth(const ::omero::model::NamespaceAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::NamespaceLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*);

    virtual ::omero::RStringPtr getName(const ::Ice::Context*);

    virtual void setName(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getDescription(const ::Ice::Context*);

    virtual void setDescription(const ::omero::RStringPtr&, const ::Ice::Context*);
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

class Namespace : virtual public ::IceDelegate::omero::model::Namespace,
                  virtual public ::IceDelegateD::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::api::StringArray getKeywords(const ::Ice::Context*);

    virtual void setKeywords(const ::omero::api::StringArray&, const ::Ice::Context*);

    virtual ::omero::RBoolPtr getMultivalued(const ::Ice::Context*);

    virtual void setMultivalued(const ::omero::RBoolPtr&, const ::Ice::Context*);

    virtual ::omero::RBoolPtr getDisplay(const ::Ice::Context*);

    virtual void setDisplay(const ::omero::RBoolPtr&, const ::Ice::Context*);

    virtual void unloadAnnotationLinks(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Context*);

    virtual ::omero::model::NamespaceAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*);

    virtual void addNamespaceAnnotationLink(const ::omero::model::NamespaceAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void addAllNamespaceAnnotationLinkSet(const ::omero::model::NamespaceAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void removeNamespaceAnnotationLink(const ::omero::model::NamespaceAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void removeAllNamespaceAnnotationLinkSet(const ::omero::model::NamespaceAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void clearAnnotationLinks(const ::Ice::Context*);

    virtual void reloadAnnotationLinks(const ::omero::model::NamespacePtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::NamespaceAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void addNamespaceAnnotationLinkToBoth(const ::omero::model::NamespaceAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::NamespaceAnnotationLinksSeq findNamespaceAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void removeNamespaceAnnotationLinkFromBoth(const ::omero::model::NamespaceAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::NamespaceLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*);

    virtual ::omero::RStringPtr getName(const ::Ice::Context*);

    virtual void setName(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getDescription(const ::Ice::Context*);

    virtual void setDescription(const ::omero::RStringPtr&, const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace model
{

class Namespace : virtual public ::omero::model::IObject
{
public:

    typedef NamespacePrx ProxyType;
    typedef NamespacePtr PointerType;
    
    Namespace() {}
    Namespace(const ::omero::RLongPtr&, const ::omero::model::DetailsPtr&, bool, const ::omero::RIntPtr&, const ::omero::api::StringArray&, const ::omero::RBoolPtr&, const ::omero::RBoolPtr&, const ::omero::model::NamespaceAnnotationLinksSeq&, bool, const ::omero::sys::CountMap&, const ::omero::RStringPtr&, const ::omero::RStringPtr&);
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

    virtual ::omero::api::StringArray getKeywords(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getKeywords(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setKeywords(const ::omero::api::StringArray&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setKeywords(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RBoolPtr getMultivalued(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getMultivalued(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setMultivalued(const ::omero::RBoolPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setMultivalued(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RBoolPtr getDisplay(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getDisplay(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setDisplay(const ::omero::RBoolPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setDisplay(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unloadAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unloadAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sizeOfAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::NamespaceAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copyAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addNamespaceAnnotationLink(const ::omero::model::NamespaceAnnotationLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addNamespaceAnnotationLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAllNamespaceAnnotationLinkSet(const ::omero::model::NamespaceAnnotationLinksSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAllNamespaceAnnotationLinkSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeNamespaceAnnotationLink(const ::omero::model::NamespaceAnnotationLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeNamespaceAnnotationLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeAllNamespaceAnnotationLinkSet(const ::omero::model::NamespaceAnnotationLinksSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeAllNamespaceAnnotationLinkSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void clearAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___clearAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void reloadAnnotationLinks(const ::omero::model::NamespacePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___reloadAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getAnnotationLinksCountPerOwner(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::NamespaceAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkAnnotation(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addNamespaceAnnotationLinkToBoth(const ::omero::model::NamespaceAnnotationLinkPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addNamespaceAnnotationLinkToBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::NamespaceAnnotationLinksSeq findNamespaceAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___findNamespaceAnnotationLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unlinkAnnotation(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeNamespaceAnnotationLinkFromBoth(const ::omero::model::NamespaceAnnotationLinkPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeNamespaceAnnotationLinkFromBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::NamespaceLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkedAnnotationList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getName(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getName(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setName(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setName(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getDescription(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getDescription(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setDescription(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setDescription(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

protected:

    ::omero::RIntPtr version;

    ::omero::api::StringArray keywords;

    ::omero::RBoolPtr multivalued;

    ::omero::RBoolPtr display;

    ::omero::model::NamespaceAnnotationLinksSeq annotationLinksSeq;

    bool annotationLinksLoaded;

    ::omero::sys::CountMap annotationLinksCountPerOwner;

    ::omero::RStringPtr name;

    ::omero::RStringPtr description;
};

}

}

#endif
