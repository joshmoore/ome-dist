// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `PlaneInfo.ice'

#ifndef __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_PlaneInfo_h__
#define __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_PlaneInfo_h__

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

class Pixels;

class PlaneInfoAnnotationLink;

class Annotation;

class Details;

class PlaneInfo;

}

}

}

namespace omero
{

namespace model
{

class Pixels;
bool operator==(const Pixels&, const Pixels&);
bool operator<(const Pixels&, const Pixels&);

class PlaneInfoAnnotationLink;
bool operator==(const PlaneInfoAnnotationLink&, const PlaneInfoAnnotationLink&);
bool operator<(const PlaneInfoAnnotationLink&, const PlaneInfoAnnotationLink&);

class Annotation;
bool operator==(const Annotation&, const Annotation&);
bool operator<(const Annotation&, const Annotation&);

class Details;
bool operator==(const Details&, const Details&);
bool operator<(const Details&, const Details&);

class PlaneInfo;
bool operator==(const PlaneInfo&, const PlaneInfo&);
bool operator<(const PlaneInfo&, const PlaneInfo&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::model::Pixels*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Pixels*);

::Ice::Object* upCast(::omero::model::PlaneInfoAnnotationLink*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::PlaneInfoAnnotationLink*);

::Ice::Object* upCast(::omero::model::Annotation*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Annotation*);

::Ice::Object* upCast(::omero::model::Details*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Details*);

::Ice::Object* upCast(::omero::model::PlaneInfo*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::PlaneInfo*);

}

namespace omero
{

namespace model
{

typedef ::IceInternal::Handle< ::omero::model::Pixels> PixelsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Pixels> PixelsPrx;

void __read(::IceInternal::BasicStream*, PixelsPrx&);
void __patch__PixelsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::PlaneInfoAnnotationLink> PlaneInfoAnnotationLinkPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::PlaneInfoAnnotationLink> PlaneInfoAnnotationLinkPrx;

void __read(::IceInternal::BasicStream*, PlaneInfoAnnotationLinkPrx&);
void __patch__PlaneInfoAnnotationLinkPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Annotation> AnnotationPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Annotation> AnnotationPrx;

void __read(::IceInternal::BasicStream*, AnnotationPrx&);
void __patch__AnnotationPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Details> DetailsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Details> DetailsPrx;

void __read(::IceInternal::BasicStream*, DetailsPrx&);
void __patch__DetailsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::PlaneInfo> PlaneInfoPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::PlaneInfo> PlaneInfoPrx;

void __read(::IceInternal::BasicStream*, PlaneInfoPrx&);
void __patch__PlaneInfoPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace omero
{

namespace model
{

typedef ::std::vector< ::omero::model::PlaneInfoAnnotationLinkPtr> PlaneInfoAnnotationLinksSeq;
void __writePlaneInfoAnnotationLinksSeq(::IceInternal::BasicStream*, const ::omero::model::PlaneInfoAnnotationLinkPtr*, const ::omero::model::PlaneInfoAnnotationLinkPtr*);
void __readPlaneInfoAnnotationLinksSeq(::IceInternal::BasicStream*, PlaneInfoAnnotationLinksSeq&);

typedef ::std::vector< ::omero::model::AnnotationPtr> PlaneInfoLinkedAnnotationSeq;
void __writePlaneInfoLinkedAnnotationSeq(::IceInternal::BasicStream*, const ::omero::model::AnnotationPtr*, const ::omero::model::AnnotationPtr*);
void __readPlaneInfoLinkedAnnotationSeq(::IceInternal::BasicStream*, PlaneInfoLinkedAnnotationSeq&);

}

}

namespace IceProxy
{

namespace omero
{

namespace model
{

class PlaneInfo : virtual public ::IceProxy::omero::model::IObject
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

    ::omero::model::PixelsPtr getPixels()
    {
        return getPixels(0);
    }
    ::omero::model::PixelsPtr getPixels(const ::Ice::Context& __ctx)
    {
        return getPixels(&__ctx);
    }
    
private:

    ::omero::model::PixelsPtr getPixels(const ::Ice::Context*);
    
public:

    void setPixels(const ::omero::model::PixelsPtr& thePixels)
    {
        setPixels(thePixels, 0);
    }
    void setPixels(const ::omero::model::PixelsPtr& thePixels, const ::Ice::Context& __ctx)
    {
        setPixels(thePixels, &__ctx);
    }
    
private:

    void setPixels(const ::omero::model::PixelsPtr&, const ::Ice::Context*);
    
public:

    ::omero::RIntPtr getTheZ()
    {
        return getTheZ(0);
    }
    ::omero::RIntPtr getTheZ(const ::Ice::Context& __ctx)
    {
        return getTheZ(&__ctx);
    }
    
private:

    ::omero::RIntPtr getTheZ(const ::Ice::Context*);
    
public:

    void setTheZ(const ::omero::RIntPtr& theTheZ)
    {
        setTheZ(theTheZ, 0);
    }
    void setTheZ(const ::omero::RIntPtr& theTheZ, const ::Ice::Context& __ctx)
    {
        setTheZ(theTheZ, &__ctx);
    }
    
private:

    void setTheZ(const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:

    ::omero::RIntPtr getTheC()
    {
        return getTheC(0);
    }
    ::omero::RIntPtr getTheC(const ::Ice::Context& __ctx)
    {
        return getTheC(&__ctx);
    }
    
private:

    ::omero::RIntPtr getTheC(const ::Ice::Context*);
    
public:

    void setTheC(const ::omero::RIntPtr& theTheC)
    {
        setTheC(theTheC, 0);
    }
    void setTheC(const ::omero::RIntPtr& theTheC, const ::Ice::Context& __ctx)
    {
        setTheC(theTheC, &__ctx);
    }
    
private:

    void setTheC(const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:

    ::omero::RIntPtr getTheT()
    {
        return getTheT(0);
    }
    ::omero::RIntPtr getTheT(const ::Ice::Context& __ctx)
    {
        return getTheT(&__ctx);
    }
    
private:

    ::omero::RIntPtr getTheT(const ::Ice::Context*);
    
public:

    void setTheT(const ::omero::RIntPtr& theTheT)
    {
        setTheT(theTheT, 0);
    }
    void setTheT(const ::omero::RIntPtr& theTheT, const ::Ice::Context& __ctx)
    {
        setTheT(theTheT, &__ctx);
    }
    
private:

    void setTheT(const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:

    ::omero::RDoublePtr getDeltaT()
    {
        return getDeltaT(0);
    }
    ::omero::RDoublePtr getDeltaT(const ::Ice::Context& __ctx)
    {
        return getDeltaT(&__ctx);
    }
    
private:

    ::omero::RDoublePtr getDeltaT(const ::Ice::Context*);
    
public:

    void setDeltaT(const ::omero::RDoublePtr& theDeltaT)
    {
        setDeltaT(theDeltaT, 0);
    }
    void setDeltaT(const ::omero::RDoublePtr& theDeltaT, const ::Ice::Context& __ctx)
    {
        setDeltaT(theDeltaT, &__ctx);
    }
    
private:

    void setDeltaT(const ::omero::RDoublePtr&, const ::Ice::Context*);
    
public:

    ::omero::RDoublePtr getPositionX()
    {
        return getPositionX(0);
    }
    ::omero::RDoublePtr getPositionX(const ::Ice::Context& __ctx)
    {
        return getPositionX(&__ctx);
    }
    
private:

    ::omero::RDoublePtr getPositionX(const ::Ice::Context*);
    
public:

    void setPositionX(const ::omero::RDoublePtr& thePositionX)
    {
        setPositionX(thePositionX, 0);
    }
    void setPositionX(const ::omero::RDoublePtr& thePositionX, const ::Ice::Context& __ctx)
    {
        setPositionX(thePositionX, &__ctx);
    }
    
private:

    void setPositionX(const ::omero::RDoublePtr&, const ::Ice::Context*);
    
public:

    ::omero::RDoublePtr getPositionY()
    {
        return getPositionY(0);
    }
    ::omero::RDoublePtr getPositionY(const ::Ice::Context& __ctx)
    {
        return getPositionY(&__ctx);
    }
    
private:

    ::omero::RDoublePtr getPositionY(const ::Ice::Context*);
    
public:

    void setPositionY(const ::omero::RDoublePtr& thePositionY)
    {
        setPositionY(thePositionY, 0);
    }
    void setPositionY(const ::omero::RDoublePtr& thePositionY, const ::Ice::Context& __ctx)
    {
        setPositionY(thePositionY, &__ctx);
    }
    
private:

    void setPositionY(const ::omero::RDoublePtr&, const ::Ice::Context*);
    
public:

    ::omero::RDoublePtr getPositionZ()
    {
        return getPositionZ(0);
    }
    ::omero::RDoublePtr getPositionZ(const ::Ice::Context& __ctx)
    {
        return getPositionZ(&__ctx);
    }
    
private:

    ::omero::RDoublePtr getPositionZ(const ::Ice::Context*);
    
public:

    void setPositionZ(const ::omero::RDoublePtr& thePositionZ)
    {
        setPositionZ(thePositionZ, 0);
    }
    void setPositionZ(const ::omero::RDoublePtr& thePositionZ, const ::Ice::Context& __ctx)
    {
        setPositionZ(thePositionZ, &__ctx);
    }
    
private:

    void setPositionZ(const ::omero::RDoublePtr&, const ::Ice::Context*);
    
public:

    ::omero::RDoublePtr getExposureTime()
    {
        return getExposureTime(0);
    }
    ::omero::RDoublePtr getExposureTime(const ::Ice::Context& __ctx)
    {
        return getExposureTime(&__ctx);
    }
    
private:

    ::omero::RDoublePtr getExposureTime(const ::Ice::Context*);
    
public:

    void setExposureTime(const ::omero::RDoublePtr& theExposureTime)
    {
        setExposureTime(theExposureTime, 0);
    }
    void setExposureTime(const ::omero::RDoublePtr& theExposureTime, const ::Ice::Context& __ctx)
    {
        setExposureTime(theExposureTime, &__ctx);
    }
    
private:

    void setExposureTime(const ::omero::RDoublePtr&, const ::Ice::Context*);
    
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

    ::omero::model::PlaneInfoAnnotationLinksSeq copyAnnotationLinks()
    {
        return copyAnnotationLinks(0);
    }
    ::omero::model::PlaneInfoAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context& __ctx)
    {
        return copyAnnotationLinks(&__ctx);
    }
    
private:

    ::omero::model::PlaneInfoAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*);
    
public:

    void addPlaneInfoAnnotationLink(const ::omero::model::PlaneInfoAnnotationLinkPtr& target)
    {
        addPlaneInfoAnnotationLink(target, 0);
    }
    void addPlaneInfoAnnotationLink(const ::omero::model::PlaneInfoAnnotationLinkPtr& target, const ::Ice::Context& __ctx)
    {
        addPlaneInfoAnnotationLink(target, &__ctx);
    }
    
private:

    void addPlaneInfoAnnotationLink(const ::omero::model::PlaneInfoAnnotationLinkPtr&, const ::Ice::Context*);
    
public:

    void addAllPlaneInfoAnnotationLinkSet(const ::omero::model::PlaneInfoAnnotationLinksSeq& targets)
    {
        addAllPlaneInfoAnnotationLinkSet(targets, 0);
    }
    void addAllPlaneInfoAnnotationLinkSet(const ::omero::model::PlaneInfoAnnotationLinksSeq& targets, const ::Ice::Context& __ctx)
    {
        addAllPlaneInfoAnnotationLinkSet(targets, &__ctx);
    }
    
private:

    void addAllPlaneInfoAnnotationLinkSet(const ::omero::model::PlaneInfoAnnotationLinksSeq&, const ::Ice::Context*);
    
public:

    void removePlaneInfoAnnotationLink(const ::omero::model::PlaneInfoAnnotationLinkPtr& theTarget)
    {
        removePlaneInfoAnnotationLink(theTarget, 0);
    }
    void removePlaneInfoAnnotationLink(const ::omero::model::PlaneInfoAnnotationLinkPtr& theTarget, const ::Ice::Context& __ctx)
    {
        removePlaneInfoAnnotationLink(theTarget, &__ctx);
    }
    
private:

    void removePlaneInfoAnnotationLink(const ::omero::model::PlaneInfoAnnotationLinkPtr&, const ::Ice::Context*);
    
public:

    void removeAllPlaneInfoAnnotationLinkSet(const ::omero::model::PlaneInfoAnnotationLinksSeq& targets)
    {
        removeAllPlaneInfoAnnotationLinkSet(targets, 0);
    }
    void removeAllPlaneInfoAnnotationLinkSet(const ::omero::model::PlaneInfoAnnotationLinksSeq& targets, const ::Ice::Context& __ctx)
    {
        removeAllPlaneInfoAnnotationLinkSet(targets, &__ctx);
    }
    
private:

    void removeAllPlaneInfoAnnotationLinkSet(const ::omero::model::PlaneInfoAnnotationLinksSeq&, const ::Ice::Context*);
    
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

    void reloadAnnotationLinks(const ::omero::model::PlaneInfoPtr& toCopy)
    {
        reloadAnnotationLinks(toCopy, 0);
    }
    void reloadAnnotationLinks(const ::omero::model::PlaneInfoPtr& toCopy, const ::Ice::Context& __ctx)
    {
        reloadAnnotationLinks(toCopy, &__ctx);
    }
    
private:

    void reloadAnnotationLinks(const ::omero::model::PlaneInfoPtr&, const ::Ice::Context*);
    
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

    ::omero::model::PlaneInfoAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr& addition)
    {
        return linkAnnotation(addition, 0);
    }
    ::omero::model::PlaneInfoAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr& addition, const ::Ice::Context& __ctx)
    {
        return linkAnnotation(addition, &__ctx);
    }
    
private:

    ::omero::model::PlaneInfoAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);
    
public:

    void addPlaneInfoAnnotationLinkToBoth(const ::omero::model::PlaneInfoAnnotationLinkPtr& link, bool bothSides)
    {
        addPlaneInfoAnnotationLinkToBoth(link, bothSides, 0);
    }
    void addPlaneInfoAnnotationLinkToBoth(const ::omero::model::PlaneInfoAnnotationLinkPtr& link, bool bothSides, const ::Ice::Context& __ctx)
    {
        addPlaneInfoAnnotationLinkToBoth(link, bothSides, &__ctx);
    }
    
private:

    void addPlaneInfoAnnotationLinkToBoth(const ::omero::model::PlaneInfoAnnotationLinkPtr&, bool, const ::Ice::Context*);
    
public:

    ::omero::model::PlaneInfoAnnotationLinksSeq findPlaneInfoAnnotationLink(const ::omero::model::AnnotationPtr& removal)
    {
        return findPlaneInfoAnnotationLink(removal, 0);
    }
    ::omero::model::PlaneInfoAnnotationLinksSeq findPlaneInfoAnnotationLink(const ::omero::model::AnnotationPtr& removal, const ::Ice::Context& __ctx)
    {
        return findPlaneInfoAnnotationLink(removal, &__ctx);
    }
    
private:

    ::omero::model::PlaneInfoAnnotationLinksSeq findPlaneInfoAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);
    
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

    void removePlaneInfoAnnotationLinkFromBoth(const ::omero::model::PlaneInfoAnnotationLinkPtr& link, bool bothSides)
    {
        removePlaneInfoAnnotationLinkFromBoth(link, bothSides, 0);
    }
    void removePlaneInfoAnnotationLinkFromBoth(const ::omero::model::PlaneInfoAnnotationLinkPtr& link, bool bothSides, const ::Ice::Context& __ctx)
    {
        removePlaneInfoAnnotationLinkFromBoth(link, bothSides, &__ctx);
    }
    
private:

    void removePlaneInfoAnnotationLinkFromBoth(const ::omero::model::PlaneInfoAnnotationLinkPtr&, bool, const ::Ice::Context*);
    
public:

    ::omero::model::PlaneInfoLinkedAnnotationSeq linkedAnnotationList()
    {
        return linkedAnnotationList(0);
    }
    ::omero::model::PlaneInfoLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context& __ctx)
    {
        return linkedAnnotationList(&__ctx);
    }
    
private:

    ::omero::model::PlaneInfoLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<PlaneInfo> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlaneInfo*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<PlaneInfo*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlaneInfo> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlaneInfo*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<PlaneInfo*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlaneInfo> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlaneInfo*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<PlaneInfo*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlaneInfo> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlaneInfo*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<PlaneInfo*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlaneInfo> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlaneInfo*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<PlaneInfo*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlaneInfo> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlaneInfo*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<PlaneInfo*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlaneInfo> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlaneInfo*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<PlaneInfo*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlaneInfo> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlaneInfo*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<PlaneInfo*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlaneInfo> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlaneInfo*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<PlaneInfo*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlaneInfo> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlaneInfo*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<PlaneInfo*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlaneInfo> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlaneInfo*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<PlaneInfo*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlaneInfo> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlaneInfo*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<PlaneInfo*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlaneInfo> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlaneInfo*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<PlaneInfo*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlaneInfo> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlaneInfo*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<PlaneInfo*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlaneInfo> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlaneInfo*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<PlaneInfo*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlaneInfo> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlaneInfo*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<PlaneInfo*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlaneInfo> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlaneInfo*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<PlaneInfo*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlaneInfo> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlaneInfo*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<PlaneInfo*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlaneInfo> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlaneInfo*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<PlaneInfo*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class PlaneInfo : virtual public ::IceDelegate::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*) = 0;

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::PixelsPtr getPixels(const ::Ice::Context*) = 0;

    virtual void setPixels(const ::omero::model::PixelsPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RIntPtr getTheZ(const ::Ice::Context*) = 0;

    virtual void setTheZ(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RIntPtr getTheC(const ::Ice::Context*) = 0;

    virtual void setTheC(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RIntPtr getTheT(const ::Ice::Context*) = 0;

    virtual void setTheT(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RDoublePtr getDeltaT(const ::Ice::Context*) = 0;

    virtual void setDeltaT(const ::omero::RDoublePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RDoublePtr getPositionX(const ::Ice::Context*) = 0;

    virtual void setPositionX(const ::omero::RDoublePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RDoublePtr getPositionY(const ::Ice::Context*) = 0;

    virtual void setPositionY(const ::omero::RDoublePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RDoublePtr getPositionZ(const ::Ice::Context*) = 0;

    virtual void setPositionZ(const ::omero::RDoublePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RDoublePtr getExposureTime(const ::Ice::Context*) = 0;

    virtual void setExposureTime(const ::omero::RDoublePtr&, const ::Ice::Context*) = 0;

    virtual void unloadAnnotationLinks(const ::Ice::Context*) = 0;

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Context*) = 0;

    virtual ::omero::model::PlaneInfoAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*) = 0;

    virtual void addPlaneInfoAnnotationLink(const ::omero::model::PlaneInfoAnnotationLinkPtr&, const ::Ice::Context*) = 0;

    virtual void addAllPlaneInfoAnnotationLinkSet(const ::omero::model::PlaneInfoAnnotationLinksSeq&, const ::Ice::Context*) = 0;

    virtual void removePlaneInfoAnnotationLink(const ::omero::model::PlaneInfoAnnotationLinkPtr&, const ::Ice::Context*) = 0;

    virtual void removeAllPlaneInfoAnnotationLinkSet(const ::omero::model::PlaneInfoAnnotationLinksSeq&, const ::Ice::Context*) = 0;

    virtual void clearAnnotationLinks(const ::Ice::Context*) = 0;

    virtual void reloadAnnotationLinks(const ::omero::model::PlaneInfoPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Context*) = 0;

    virtual ::omero::model::PlaneInfoAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*) = 0;

    virtual void addPlaneInfoAnnotationLinkToBoth(const ::omero::model::PlaneInfoAnnotationLinkPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::PlaneInfoAnnotationLinksSeq findPlaneInfoAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*) = 0;

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*) = 0;

    virtual void removePlaneInfoAnnotationLinkFromBoth(const ::omero::model::PlaneInfoAnnotationLinkPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::PlaneInfoLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*) = 0;
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

class PlaneInfo : virtual public ::IceDelegate::omero::model::PlaneInfo,
                  virtual public ::IceDelegateM::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::model::PixelsPtr getPixels(const ::Ice::Context*);

    virtual void setPixels(const ::omero::model::PixelsPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getTheZ(const ::Ice::Context*);

    virtual void setTheZ(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getTheC(const ::Ice::Context*);

    virtual void setTheC(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getTheT(const ::Ice::Context*);

    virtual void setTheT(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getDeltaT(const ::Ice::Context*);

    virtual void setDeltaT(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getPositionX(const ::Ice::Context*);

    virtual void setPositionX(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getPositionY(const ::Ice::Context*);

    virtual void setPositionY(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getPositionZ(const ::Ice::Context*);

    virtual void setPositionZ(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getExposureTime(const ::Ice::Context*);

    virtual void setExposureTime(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual void unloadAnnotationLinks(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Context*);

    virtual ::omero::model::PlaneInfoAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*);

    virtual void addPlaneInfoAnnotationLink(const ::omero::model::PlaneInfoAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void addAllPlaneInfoAnnotationLinkSet(const ::omero::model::PlaneInfoAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void removePlaneInfoAnnotationLink(const ::omero::model::PlaneInfoAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void removeAllPlaneInfoAnnotationLinkSet(const ::omero::model::PlaneInfoAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void clearAnnotationLinks(const ::Ice::Context*);

    virtual void reloadAnnotationLinks(const ::omero::model::PlaneInfoPtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::PlaneInfoAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void addPlaneInfoAnnotationLinkToBoth(const ::omero::model::PlaneInfoAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::PlaneInfoAnnotationLinksSeq findPlaneInfoAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void removePlaneInfoAnnotationLinkFromBoth(const ::omero::model::PlaneInfoAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::PlaneInfoLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*);
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

class PlaneInfo : virtual public ::IceDelegate::omero::model::PlaneInfo,
                  virtual public ::IceDelegateD::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::model::PixelsPtr getPixels(const ::Ice::Context*);

    virtual void setPixels(const ::omero::model::PixelsPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getTheZ(const ::Ice::Context*);

    virtual void setTheZ(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getTheC(const ::Ice::Context*);

    virtual void setTheC(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getTheT(const ::Ice::Context*);

    virtual void setTheT(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getDeltaT(const ::Ice::Context*);

    virtual void setDeltaT(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getPositionX(const ::Ice::Context*);

    virtual void setPositionX(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getPositionY(const ::Ice::Context*);

    virtual void setPositionY(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getPositionZ(const ::Ice::Context*);

    virtual void setPositionZ(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getExposureTime(const ::Ice::Context*);

    virtual void setExposureTime(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual void unloadAnnotationLinks(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Context*);

    virtual ::omero::model::PlaneInfoAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*);

    virtual void addPlaneInfoAnnotationLink(const ::omero::model::PlaneInfoAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void addAllPlaneInfoAnnotationLinkSet(const ::omero::model::PlaneInfoAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void removePlaneInfoAnnotationLink(const ::omero::model::PlaneInfoAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void removeAllPlaneInfoAnnotationLinkSet(const ::omero::model::PlaneInfoAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void clearAnnotationLinks(const ::Ice::Context*);

    virtual void reloadAnnotationLinks(const ::omero::model::PlaneInfoPtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::PlaneInfoAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void addPlaneInfoAnnotationLinkToBoth(const ::omero::model::PlaneInfoAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::PlaneInfoAnnotationLinksSeq findPlaneInfoAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void removePlaneInfoAnnotationLinkFromBoth(const ::omero::model::PlaneInfoAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::PlaneInfoLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace model
{

class PlaneInfo : virtual public ::omero::model::IObject
{
public:

    typedef PlaneInfoPrx ProxyType;
    typedef PlaneInfoPtr PointerType;
    
    PlaneInfo() {}
    PlaneInfo(const ::omero::RLongPtr&, const ::omero::model::DetailsPtr&, bool, const ::omero::RIntPtr&, const ::omero::model::PixelsPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RDoublePtr&, const ::omero::RDoublePtr&, const ::omero::RDoublePtr&, const ::omero::RDoublePtr&, const ::omero::RDoublePtr&, const ::omero::model::PlaneInfoAnnotationLinksSeq&, bool, const ::omero::sys::CountMap&);
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

    virtual ::omero::model::PixelsPtr getPixels(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getPixels(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setPixels(const ::omero::model::PixelsPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setPixels(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RIntPtr getTheZ(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getTheZ(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setTheZ(const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setTheZ(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RIntPtr getTheC(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getTheC(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setTheC(const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setTheC(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RIntPtr getTheT(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getTheT(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setTheT(const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setTheT(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RDoublePtr getDeltaT(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getDeltaT(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setDeltaT(const ::omero::RDoublePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setDeltaT(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RDoublePtr getPositionX(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getPositionX(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setPositionX(const ::omero::RDoublePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setPositionX(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RDoublePtr getPositionY(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getPositionY(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setPositionY(const ::omero::RDoublePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setPositionY(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RDoublePtr getPositionZ(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getPositionZ(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setPositionZ(const ::omero::RDoublePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setPositionZ(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RDoublePtr getExposureTime(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getExposureTime(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setExposureTime(const ::omero::RDoublePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setExposureTime(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unloadAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unloadAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sizeOfAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::PlaneInfoAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copyAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addPlaneInfoAnnotationLink(const ::omero::model::PlaneInfoAnnotationLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addPlaneInfoAnnotationLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAllPlaneInfoAnnotationLinkSet(const ::omero::model::PlaneInfoAnnotationLinksSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAllPlaneInfoAnnotationLinkSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removePlaneInfoAnnotationLink(const ::omero::model::PlaneInfoAnnotationLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removePlaneInfoAnnotationLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeAllPlaneInfoAnnotationLinkSet(const ::omero::model::PlaneInfoAnnotationLinksSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeAllPlaneInfoAnnotationLinkSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void clearAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___clearAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void reloadAnnotationLinks(const ::omero::model::PlaneInfoPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___reloadAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getAnnotationLinksCountPerOwner(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::PlaneInfoAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkAnnotation(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addPlaneInfoAnnotationLinkToBoth(const ::omero::model::PlaneInfoAnnotationLinkPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addPlaneInfoAnnotationLinkToBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::PlaneInfoAnnotationLinksSeq findPlaneInfoAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___findPlaneInfoAnnotationLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unlinkAnnotation(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removePlaneInfoAnnotationLinkFromBoth(const ::omero::model::PlaneInfoAnnotationLinkPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removePlaneInfoAnnotationLinkFromBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::PlaneInfoLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkedAnnotationList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

protected:

    ::omero::RIntPtr version;

    ::omero::model::PixelsPtr pixels;

    ::omero::RIntPtr theZ;

    ::omero::RIntPtr theC;

    ::omero::RIntPtr theT;

    ::omero::RDoublePtr deltaT;

    ::omero::RDoublePtr positionX;

    ::omero::RDoublePtr positionY;

    ::omero::RDoublePtr positionZ;

    ::omero::RDoublePtr exposureTime;

    ::omero::model::PlaneInfoAnnotationLinksSeq annotationLinksSeq;

    bool annotationLinksLoaded;

    ::omero::sys::CountMap annotationLinksCountPerOwner;
};

}

}

#endif
