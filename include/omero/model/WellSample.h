// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `WellSample.ice'

#ifndef __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_WellSample_h__
#define __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_WellSample_h__

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

class PlateAcquisition;

class Well;

class Image;

class WellSampleAnnotationLink;

class Annotation;

class Details;

class WellSample;

}

}

}

namespace omero
{

namespace model
{

class PlateAcquisition;
bool operator==(const PlateAcquisition&, const PlateAcquisition&);
bool operator<(const PlateAcquisition&, const PlateAcquisition&);

class Well;
bool operator==(const Well&, const Well&);
bool operator<(const Well&, const Well&);

class Image;
bool operator==(const Image&, const Image&);
bool operator<(const Image&, const Image&);

class WellSampleAnnotationLink;
bool operator==(const WellSampleAnnotationLink&, const WellSampleAnnotationLink&);
bool operator<(const WellSampleAnnotationLink&, const WellSampleAnnotationLink&);

class Annotation;
bool operator==(const Annotation&, const Annotation&);
bool operator<(const Annotation&, const Annotation&);

class Details;
bool operator==(const Details&, const Details&);
bool operator<(const Details&, const Details&);

class WellSample;
bool operator==(const WellSample&, const WellSample&);
bool operator<(const WellSample&, const WellSample&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::model::PlateAcquisition*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::PlateAcquisition*);

::Ice::Object* upCast(::omero::model::Well*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Well*);

::Ice::Object* upCast(::omero::model::Image*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Image*);

::Ice::Object* upCast(::omero::model::WellSampleAnnotationLink*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::WellSampleAnnotationLink*);

::Ice::Object* upCast(::omero::model::Annotation*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Annotation*);

::Ice::Object* upCast(::omero::model::Details*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Details*);

::Ice::Object* upCast(::omero::model::WellSample*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::WellSample*);

}

namespace omero
{

namespace model
{

typedef ::IceInternal::Handle< ::omero::model::PlateAcquisition> PlateAcquisitionPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::PlateAcquisition> PlateAcquisitionPrx;

void __read(::IceInternal::BasicStream*, PlateAcquisitionPrx&);
void __patch__PlateAcquisitionPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Well> WellPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Well> WellPrx;

void __read(::IceInternal::BasicStream*, WellPrx&);
void __patch__WellPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Image> ImagePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Image> ImagePrx;

void __read(::IceInternal::BasicStream*, ImagePrx&);
void __patch__ImagePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::WellSampleAnnotationLink> WellSampleAnnotationLinkPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::WellSampleAnnotationLink> WellSampleAnnotationLinkPrx;

void __read(::IceInternal::BasicStream*, WellSampleAnnotationLinkPrx&);
void __patch__WellSampleAnnotationLinkPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Annotation> AnnotationPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Annotation> AnnotationPrx;

void __read(::IceInternal::BasicStream*, AnnotationPrx&);
void __patch__AnnotationPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Details> DetailsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Details> DetailsPrx;

void __read(::IceInternal::BasicStream*, DetailsPrx&);
void __patch__DetailsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::WellSample> WellSamplePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::WellSample> WellSamplePrx;

void __read(::IceInternal::BasicStream*, WellSamplePrx&);
void __patch__WellSamplePtr(void*, ::Ice::ObjectPtr&);

}

}

namespace omero
{

namespace model
{

typedef ::std::vector< ::omero::model::WellSampleAnnotationLinkPtr> WellSampleAnnotationLinksSeq;
void __writeWellSampleAnnotationLinksSeq(::IceInternal::BasicStream*, const ::omero::model::WellSampleAnnotationLinkPtr*, const ::omero::model::WellSampleAnnotationLinkPtr*);
void __readWellSampleAnnotationLinksSeq(::IceInternal::BasicStream*, WellSampleAnnotationLinksSeq&);

typedef ::std::vector< ::omero::model::AnnotationPtr> WellSampleLinkedAnnotationSeq;
void __writeWellSampleLinkedAnnotationSeq(::IceInternal::BasicStream*, const ::omero::model::AnnotationPtr*, const ::omero::model::AnnotationPtr*);
void __readWellSampleLinkedAnnotationSeq(::IceInternal::BasicStream*, WellSampleLinkedAnnotationSeq&);

}

}

namespace IceProxy
{

namespace omero
{

namespace model
{

class WellSample : virtual public ::IceProxy::omero::model::IObject
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

    ::omero::RDoublePtr getPosX()
    {
        return getPosX(0);
    }
    ::omero::RDoublePtr getPosX(const ::Ice::Context& __ctx)
    {
        return getPosX(&__ctx);
    }
    
private:

    ::omero::RDoublePtr getPosX(const ::Ice::Context*);
    
public:

    void setPosX(const ::omero::RDoublePtr& thePosX)
    {
        setPosX(thePosX, 0);
    }
    void setPosX(const ::omero::RDoublePtr& thePosX, const ::Ice::Context& __ctx)
    {
        setPosX(thePosX, &__ctx);
    }
    
private:

    void setPosX(const ::omero::RDoublePtr&, const ::Ice::Context*);
    
public:

    ::omero::RDoublePtr getPosY()
    {
        return getPosY(0);
    }
    ::omero::RDoublePtr getPosY(const ::Ice::Context& __ctx)
    {
        return getPosY(&__ctx);
    }
    
private:

    ::omero::RDoublePtr getPosY(const ::Ice::Context*);
    
public:

    void setPosY(const ::omero::RDoublePtr& thePosY)
    {
        setPosY(thePosY, 0);
    }
    void setPosY(const ::omero::RDoublePtr& thePosY, const ::Ice::Context& __ctx)
    {
        setPosY(thePosY, &__ctx);
    }
    
private:

    void setPosY(const ::omero::RDoublePtr&, const ::Ice::Context*);
    
public:

    ::omero::RTimePtr getTimepoint()
    {
        return getTimepoint(0);
    }
    ::omero::RTimePtr getTimepoint(const ::Ice::Context& __ctx)
    {
        return getTimepoint(&__ctx);
    }
    
private:

    ::omero::RTimePtr getTimepoint(const ::Ice::Context*);
    
public:

    void setTimepoint(const ::omero::RTimePtr& theTimepoint)
    {
        setTimepoint(theTimepoint, 0);
    }
    void setTimepoint(const ::omero::RTimePtr& theTimepoint, const ::Ice::Context& __ctx)
    {
        setTimepoint(theTimepoint, &__ctx);
    }
    
private:

    void setTimepoint(const ::omero::RTimePtr&, const ::Ice::Context*);
    
public:

    ::omero::model::PlateAcquisitionPtr getPlateAcquisition()
    {
        return getPlateAcquisition(0);
    }
    ::omero::model::PlateAcquisitionPtr getPlateAcquisition(const ::Ice::Context& __ctx)
    {
        return getPlateAcquisition(&__ctx);
    }
    
private:

    ::omero::model::PlateAcquisitionPtr getPlateAcquisition(const ::Ice::Context*);
    
public:

    void setPlateAcquisition(const ::omero::model::PlateAcquisitionPtr& thePlateAcquisition)
    {
        setPlateAcquisition(thePlateAcquisition, 0);
    }
    void setPlateAcquisition(const ::omero::model::PlateAcquisitionPtr& thePlateAcquisition, const ::Ice::Context& __ctx)
    {
        setPlateAcquisition(thePlateAcquisition, &__ctx);
    }
    
private:

    void setPlateAcquisition(const ::omero::model::PlateAcquisitionPtr&, const ::Ice::Context*);
    
public:

    ::omero::model::WellPtr getWell()
    {
        return getWell(0);
    }
    ::omero::model::WellPtr getWell(const ::Ice::Context& __ctx)
    {
        return getWell(&__ctx);
    }
    
private:

    ::omero::model::WellPtr getWell(const ::Ice::Context*);
    
public:

    void setWell(const ::omero::model::WellPtr& theWell)
    {
        setWell(theWell, 0);
    }
    void setWell(const ::omero::model::WellPtr& theWell, const ::Ice::Context& __ctx)
    {
        setWell(theWell, &__ctx);
    }
    
private:

    void setWell(const ::omero::model::WellPtr&, const ::Ice::Context*);
    
public:

    ::omero::model::ImagePtr getImage()
    {
        return getImage(0);
    }
    ::omero::model::ImagePtr getImage(const ::Ice::Context& __ctx)
    {
        return getImage(&__ctx);
    }
    
private:

    ::omero::model::ImagePtr getImage(const ::Ice::Context*);
    
public:

    void setImage(const ::omero::model::ImagePtr& theImage)
    {
        setImage(theImage, 0);
    }
    void setImage(const ::omero::model::ImagePtr& theImage, const ::Ice::Context& __ctx)
    {
        setImage(theImage, &__ctx);
    }
    
private:

    void setImage(const ::omero::model::ImagePtr&, const ::Ice::Context*);
    
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

    ::omero::model::WellSampleAnnotationLinksSeq copyAnnotationLinks()
    {
        return copyAnnotationLinks(0);
    }
    ::omero::model::WellSampleAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context& __ctx)
    {
        return copyAnnotationLinks(&__ctx);
    }
    
private:

    ::omero::model::WellSampleAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*);
    
public:

    void addWellSampleAnnotationLink(const ::omero::model::WellSampleAnnotationLinkPtr& target)
    {
        addWellSampleAnnotationLink(target, 0);
    }
    void addWellSampleAnnotationLink(const ::omero::model::WellSampleAnnotationLinkPtr& target, const ::Ice::Context& __ctx)
    {
        addWellSampleAnnotationLink(target, &__ctx);
    }
    
private:

    void addWellSampleAnnotationLink(const ::omero::model::WellSampleAnnotationLinkPtr&, const ::Ice::Context*);
    
public:

    void addAllWellSampleAnnotationLinkSet(const ::omero::model::WellSampleAnnotationLinksSeq& targets)
    {
        addAllWellSampleAnnotationLinkSet(targets, 0);
    }
    void addAllWellSampleAnnotationLinkSet(const ::omero::model::WellSampleAnnotationLinksSeq& targets, const ::Ice::Context& __ctx)
    {
        addAllWellSampleAnnotationLinkSet(targets, &__ctx);
    }
    
private:

    void addAllWellSampleAnnotationLinkSet(const ::omero::model::WellSampleAnnotationLinksSeq&, const ::Ice::Context*);
    
public:

    void removeWellSampleAnnotationLink(const ::omero::model::WellSampleAnnotationLinkPtr& theTarget)
    {
        removeWellSampleAnnotationLink(theTarget, 0);
    }
    void removeWellSampleAnnotationLink(const ::omero::model::WellSampleAnnotationLinkPtr& theTarget, const ::Ice::Context& __ctx)
    {
        removeWellSampleAnnotationLink(theTarget, &__ctx);
    }
    
private:

    void removeWellSampleAnnotationLink(const ::omero::model::WellSampleAnnotationLinkPtr&, const ::Ice::Context*);
    
public:

    void removeAllWellSampleAnnotationLinkSet(const ::omero::model::WellSampleAnnotationLinksSeq& targets)
    {
        removeAllWellSampleAnnotationLinkSet(targets, 0);
    }
    void removeAllWellSampleAnnotationLinkSet(const ::omero::model::WellSampleAnnotationLinksSeq& targets, const ::Ice::Context& __ctx)
    {
        removeAllWellSampleAnnotationLinkSet(targets, &__ctx);
    }
    
private:

    void removeAllWellSampleAnnotationLinkSet(const ::omero::model::WellSampleAnnotationLinksSeq&, const ::Ice::Context*);
    
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

    void reloadAnnotationLinks(const ::omero::model::WellSamplePtr& toCopy)
    {
        reloadAnnotationLinks(toCopy, 0);
    }
    void reloadAnnotationLinks(const ::omero::model::WellSamplePtr& toCopy, const ::Ice::Context& __ctx)
    {
        reloadAnnotationLinks(toCopy, &__ctx);
    }
    
private:

    void reloadAnnotationLinks(const ::omero::model::WellSamplePtr&, const ::Ice::Context*);
    
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

    ::omero::model::WellSampleAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr& addition)
    {
        return linkAnnotation(addition, 0);
    }
    ::omero::model::WellSampleAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr& addition, const ::Ice::Context& __ctx)
    {
        return linkAnnotation(addition, &__ctx);
    }
    
private:

    ::omero::model::WellSampleAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);
    
public:

    void addWellSampleAnnotationLinkToBoth(const ::omero::model::WellSampleAnnotationLinkPtr& link, bool bothSides)
    {
        addWellSampleAnnotationLinkToBoth(link, bothSides, 0);
    }
    void addWellSampleAnnotationLinkToBoth(const ::omero::model::WellSampleAnnotationLinkPtr& link, bool bothSides, const ::Ice::Context& __ctx)
    {
        addWellSampleAnnotationLinkToBoth(link, bothSides, &__ctx);
    }
    
private:

    void addWellSampleAnnotationLinkToBoth(const ::omero::model::WellSampleAnnotationLinkPtr&, bool, const ::Ice::Context*);
    
public:

    ::omero::model::WellSampleAnnotationLinksSeq findWellSampleAnnotationLink(const ::omero::model::AnnotationPtr& removal)
    {
        return findWellSampleAnnotationLink(removal, 0);
    }
    ::omero::model::WellSampleAnnotationLinksSeq findWellSampleAnnotationLink(const ::omero::model::AnnotationPtr& removal, const ::Ice::Context& __ctx)
    {
        return findWellSampleAnnotationLink(removal, &__ctx);
    }
    
private:

    ::omero::model::WellSampleAnnotationLinksSeq findWellSampleAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);
    
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

    void removeWellSampleAnnotationLinkFromBoth(const ::omero::model::WellSampleAnnotationLinkPtr& link, bool bothSides)
    {
        removeWellSampleAnnotationLinkFromBoth(link, bothSides, 0);
    }
    void removeWellSampleAnnotationLinkFromBoth(const ::omero::model::WellSampleAnnotationLinkPtr& link, bool bothSides, const ::Ice::Context& __ctx)
    {
        removeWellSampleAnnotationLinkFromBoth(link, bothSides, &__ctx);
    }
    
private:

    void removeWellSampleAnnotationLinkFromBoth(const ::omero::model::WellSampleAnnotationLinkPtr&, bool, const ::Ice::Context*);
    
public:

    ::omero::model::WellSampleLinkedAnnotationSeq linkedAnnotationList()
    {
        return linkedAnnotationList(0);
    }
    ::omero::model::WellSampleLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context& __ctx)
    {
        return linkedAnnotationList(&__ctx);
    }
    
private:

    ::omero::model::WellSampleLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<WellSample> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<WellSample*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<WellSample*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<WellSample> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<WellSample*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<WellSample*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<WellSample> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<WellSample*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<WellSample*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<WellSample> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<WellSample*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<WellSample*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<WellSample> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<WellSample*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<WellSample*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<WellSample> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<WellSample*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<WellSample*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<WellSample> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<WellSample*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<WellSample*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<WellSample> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<WellSample*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<WellSample*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<WellSample> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<WellSample*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<WellSample*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<WellSample> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<WellSample*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<WellSample*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<WellSample> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<WellSample*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<WellSample*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<WellSample> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<WellSample*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<WellSample*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<WellSample> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<WellSample*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<WellSample*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<WellSample> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<WellSample*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<WellSample*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<WellSample> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<WellSample*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<WellSample*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<WellSample> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<WellSample*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<WellSample*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<WellSample> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<WellSample*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<WellSample*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<WellSample> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<WellSample*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<WellSample*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<WellSample> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<WellSample*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<WellSample*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class WellSample : virtual public ::IceDelegate::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*) = 0;

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RDoublePtr getPosX(const ::Ice::Context*) = 0;

    virtual void setPosX(const ::omero::RDoublePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RDoublePtr getPosY(const ::Ice::Context*) = 0;

    virtual void setPosY(const ::omero::RDoublePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RTimePtr getTimepoint(const ::Ice::Context*) = 0;

    virtual void setTimepoint(const ::omero::RTimePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::PlateAcquisitionPtr getPlateAcquisition(const ::Ice::Context*) = 0;

    virtual void setPlateAcquisition(const ::omero::model::PlateAcquisitionPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::WellPtr getWell(const ::Ice::Context*) = 0;

    virtual void setWell(const ::omero::model::WellPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::ImagePtr getImage(const ::Ice::Context*) = 0;

    virtual void setImage(const ::omero::model::ImagePtr&, const ::Ice::Context*) = 0;

    virtual void unloadAnnotationLinks(const ::Ice::Context*) = 0;

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Context*) = 0;

    virtual ::omero::model::WellSampleAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*) = 0;

    virtual void addWellSampleAnnotationLink(const ::omero::model::WellSampleAnnotationLinkPtr&, const ::Ice::Context*) = 0;

    virtual void addAllWellSampleAnnotationLinkSet(const ::omero::model::WellSampleAnnotationLinksSeq&, const ::Ice::Context*) = 0;

    virtual void removeWellSampleAnnotationLink(const ::omero::model::WellSampleAnnotationLinkPtr&, const ::Ice::Context*) = 0;

    virtual void removeAllWellSampleAnnotationLinkSet(const ::omero::model::WellSampleAnnotationLinksSeq&, const ::Ice::Context*) = 0;

    virtual void clearAnnotationLinks(const ::Ice::Context*) = 0;

    virtual void reloadAnnotationLinks(const ::omero::model::WellSamplePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Context*) = 0;

    virtual ::omero::model::WellSampleAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*) = 0;

    virtual void addWellSampleAnnotationLinkToBoth(const ::omero::model::WellSampleAnnotationLinkPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::WellSampleAnnotationLinksSeq findWellSampleAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*) = 0;

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*) = 0;

    virtual void removeWellSampleAnnotationLinkFromBoth(const ::omero::model::WellSampleAnnotationLinkPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::WellSampleLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*) = 0;
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

class WellSample : virtual public ::IceDelegate::omero::model::WellSample,
                   virtual public ::IceDelegateM::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getPosX(const ::Ice::Context*);

    virtual void setPosX(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getPosY(const ::Ice::Context*);

    virtual void setPosY(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::RTimePtr getTimepoint(const ::Ice::Context*);

    virtual void setTimepoint(const ::omero::RTimePtr&, const ::Ice::Context*);

    virtual ::omero::model::PlateAcquisitionPtr getPlateAcquisition(const ::Ice::Context*);

    virtual void setPlateAcquisition(const ::omero::model::PlateAcquisitionPtr&, const ::Ice::Context*);

    virtual ::omero::model::WellPtr getWell(const ::Ice::Context*);

    virtual void setWell(const ::omero::model::WellPtr&, const ::Ice::Context*);

    virtual ::omero::model::ImagePtr getImage(const ::Ice::Context*);

    virtual void setImage(const ::omero::model::ImagePtr&, const ::Ice::Context*);

    virtual void unloadAnnotationLinks(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Context*);

    virtual ::omero::model::WellSampleAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*);

    virtual void addWellSampleAnnotationLink(const ::omero::model::WellSampleAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void addAllWellSampleAnnotationLinkSet(const ::omero::model::WellSampleAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void removeWellSampleAnnotationLink(const ::omero::model::WellSampleAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void removeAllWellSampleAnnotationLinkSet(const ::omero::model::WellSampleAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void clearAnnotationLinks(const ::Ice::Context*);

    virtual void reloadAnnotationLinks(const ::omero::model::WellSamplePtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::WellSampleAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void addWellSampleAnnotationLinkToBoth(const ::omero::model::WellSampleAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::WellSampleAnnotationLinksSeq findWellSampleAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void removeWellSampleAnnotationLinkFromBoth(const ::omero::model::WellSampleAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::WellSampleLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*);
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

class WellSample : virtual public ::IceDelegate::omero::model::WellSample,
                   virtual public ::IceDelegateD::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getPosX(const ::Ice::Context*);

    virtual void setPosX(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getPosY(const ::Ice::Context*);

    virtual void setPosY(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::RTimePtr getTimepoint(const ::Ice::Context*);

    virtual void setTimepoint(const ::omero::RTimePtr&, const ::Ice::Context*);

    virtual ::omero::model::PlateAcquisitionPtr getPlateAcquisition(const ::Ice::Context*);

    virtual void setPlateAcquisition(const ::omero::model::PlateAcquisitionPtr&, const ::Ice::Context*);

    virtual ::omero::model::WellPtr getWell(const ::Ice::Context*);

    virtual void setWell(const ::omero::model::WellPtr&, const ::Ice::Context*);

    virtual ::omero::model::ImagePtr getImage(const ::Ice::Context*);

    virtual void setImage(const ::omero::model::ImagePtr&, const ::Ice::Context*);

    virtual void unloadAnnotationLinks(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Context*);

    virtual ::omero::model::WellSampleAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*);

    virtual void addWellSampleAnnotationLink(const ::omero::model::WellSampleAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void addAllWellSampleAnnotationLinkSet(const ::omero::model::WellSampleAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void removeWellSampleAnnotationLink(const ::omero::model::WellSampleAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void removeAllWellSampleAnnotationLinkSet(const ::omero::model::WellSampleAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void clearAnnotationLinks(const ::Ice::Context*);

    virtual void reloadAnnotationLinks(const ::omero::model::WellSamplePtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::WellSampleAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void addWellSampleAnnotationLinkToBoth(const ::omero::model::WellSampleAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::WellSampleAnnotationLinksSeq findWellSampleAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void removeWellSampleAnnotationLinkFromBoth(const ::omero::model::WellSampleAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::WellSampleLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace model
{

class WellSample : virtual public ::omero::model::IObject
{
public:

    typedef WellSamplePrx ProxyType;
    typedef WellSamplePtr PointerType;
    
    WellSample() {}
    WellSample(const ::omero::RLongPtr&, const ::omero::model::DetailsPtr&, bool, const ::omero::RIntPtr&, const ::omero::RDoublePtr&, const ::omero::RDoublePtr&, const ::omero::RTimePtr&, const ::omero::model::PlateAcquisitionPtr&, const ::omero::model::WellPtr&, const ::omero::model::ImagePtr&, const ::omero::model::WellSampleAnnotationLinksSeq&, bool, const ::omero::sys::CountMap&);
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

    virtual ::omero::RDoublePtr getPosX(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getPosX(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setPosX(const ::omero::RDoublePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setPosX(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RDoublePtr getPosY(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getPosY(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setPosY(const ::omero::RDoublePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setPosY(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RTimePtr getTimepoint(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getTimepoint(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setTimepoint(const ::omero::RTimePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setTimepoint(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::PlateAcquisitionPtr getPlateAcquisition(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getPlateAcquisition(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setPlateAcquisition(const ::omero::model::PlateAcquisitionPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setPlateAcquisition(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::WellPtr getWell(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getWell(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setWell(const ::omero::model::WellPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setWell(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ImagePtr getImage(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getImage(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setImage(const ::omero::model::ImagePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setImage(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unloadAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unloadAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sizeOfAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::WellSampleAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copyAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addWellSampleAnnotationLink(const ::omero::model::WellSampleAnnotationLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addWellSampleAnnotationLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAllWellSampleAnnotationLinkSet(const ::omero::model::WellSampleAnnotationLinksSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAllWellSampleAnnotationLinkSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeWellSampleAnnotationLink(const ::omero::model::WellSampleAnnotationLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeWellSampleAnnotationLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeAllWellSampleAnnotationLinkSet(const ::omero::model::WellSampleAnnotationLinksSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeAllWellSampleAnnotationLinkSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void clearAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___clearAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void reloadAnnotationLinks(const ::omero::model::WellSamplePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___reloadAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getAnnotationLinksCountPerOwner(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::WellSampleAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkAnnotation(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addWellSampleAnnotationLinkToBoth(const ::omero::model::WellSampleAnnotationLinkPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addWellSampleAnnotationLinkToBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::WellSampleAnnotationLinksSeq findWellSampleAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___findWellSampleAnnotationLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unlinkAnnotation(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeWellSampleAnnotationLinkFromBoth(const ::omero::model::WellSampleAnnotationLinkPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeWellSampleAnnotationLinkFromBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::WellSampleLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkedAnnotationList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

protected:

    ::omero::RIntPtr version;

    ::omero::RDoublePtr posX;

    ::omero::RDoublePtr posY;

    ::omero::RTimePtr timepoint;

    ::omero::model::PlateAcquisitionPtr plateAcquisition;

    ::omero::model::WellPtr well;

    ::omero::model::ImagePtr image;

    ::omero::model::WellSampleAnnotationLinksSeq annotationLinksSeq;

    bool annotationLinksLoaded;

    ::omero::sys::CountMap annotationLinksCountPerOwner;
};

}

}

#endif
