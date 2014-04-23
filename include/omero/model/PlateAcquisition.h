// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `PlateAcquisition.ice'

#ifndef __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_PlateAcquisition_h__
#define __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_PlateAcquisition_h__

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

class Plate;

class WellSample;

class PlateAcquisitionAnnotationLink;

class Annotation;

class Details;

class PlateAcquisition;

}

}

}

namespace omero
{

namespace model
{

class Plate;
bool operator==(const Plate&, const Plate&);
bool operator<(const Plate&, const Plate&);

class WellSample;
bool operator==(const WellSample&, const WellSample&);
bool operator<(const WellSample&, const WellSample&);

class PlateAcquisitionAnnotationLink;
bool operator==(const PlateAcquisitionAnnotationLink&, const PlateAcquisitionAnnotationLink&);
bool operator<(const PlateAcquisitionAnnotationLink&, const PlateAcquisitionAnnotationLink&);

class Annotation;
bool operator==(const Annotation&, const Annotation&);
bool operator<(const Annotation&, const Annotation&);

class Details;
bool operator==(const Details&, const Details&);
bool operator<(const Details&, const Details&);

class PlateAcquisition;
bool operator==(const PlateAcquisition&, const PlateAcquisition&);
bool operator<(const PlateAcquisition&, const PlateAcquisition&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::model::Plate*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Plate*);

::Ice::Object* upCast(::omero::model::WellSample*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::WellSample*);

::Ice::Object* upCast(::omero::model::PlateAcquisitionAnnotationLink*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::PlateAcquisitionAnnotationLink*);

::Ice::Object* upCast(::omero::model::Annotation*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Annotation*);

::Ice::Object* upCast(::omero::model::Details*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Details*);

::Ice::Object* upCast(::omero::model::PlateAcquisition*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::PlateAcquisition*);

}

namespace omero
{

namespace model
{

typedef ::IceInternal::Handle< ::omero::model::Plate> PlatePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Plate> PlatePrx;

void __read(::IceInternal::BasicStream*, PlatePrx&);
void __patch__PlatePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::WellSample> WellSamplePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::WellSample> WellSamplePrx;

void __read(::IceInternal::BasicStream*, WellSamplePrx&);
void __patch__WellSamplePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::PlateAcquisitionAnnotationLink> PlateAcquisitionAnnotationLinkPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::PlateAcquisitionAnnotationLink> PlateAcquisitionAnnotationLinkPrx;

void __read(::IceInternal::BasicStream*, PlateAcquisitionAnnotationLinkPrx&);
void __patch__PlateAcquisitionAnnotationLinkPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Annotation> AnnotationPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Annotation> AnnotationPrx;

void __read(::IceInternal::BasicStream*, AnnotationPrx&);
void __patch__AnnotationPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Details> DetailsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Details> DetailsPrx;

void __read(::IceInternal::BasicStream*, DetailsPrx&);
void __patch__DetailsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::PlateAcquisition> PlateAcquisitionPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::PlateAcquisition> PlateAcquisitionPrx;

void __read(::IceInternal::BasicStream*, PlateAcquisitionPrx&);
void __patch__PlateAcquisitionPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace omero
{

namespace model
{

typedef ::std::vector< ::omero::model::WellSamplePtr> PlateAcquisitionWellSampleSeq;
void __writePlateAcquisitionWellSampleSeq(::IceInternal::BasicStream*, const ::omero::model::WellSamplePtr*, const ::omero::model::WellSamplePtr*);
void __readPlateAcquisitionWellSampleSeq(::IceInternal::BasicStream*, PlateAcquisitionWellSampleSeq&);

typedef ::std::vector< ::omero::model::PlateAcquisitionAnnotationLinkPtr> PlateAcquisitionAnnotationLinksSeq;
void __writePlateAcquisitionAnnotationLinksSeq(::IceInternal::BasicStream*, const ::omero::model::PlateAcquisitionAnnotationLinkPtr*, const ::omero::model::PlateAcquisitionAnnotationLinkPtr*);
void __readPlateAcquisitionAnnotationLinksSeq(::IceInternal::BasicStream*, PlateAcquisitionAnnotationLinksSeq&);

typedef ::std::vector< ::omero::model::AnnotationPtr> PlateAcquisitionLinkedAnnotationSeq;
void __writePlateAcquisitionLinkedAnnotationSeq(::IceInternal::BasicStream*, const ::omero::model::AnnotationPtr*, const ::omero::model::AnnotationPtr*);
void __readPlateAcquisitionLinkedAnnotationSeq(::IceInternal::BasicStream*, PlateAcquisitionLinkedAnnotationSeq&);

}

}

namespace IceProxy
{

namespace omero
{

namespace model
{

class PlateAcquisition : virtual public ::IceProxy::omero::model::IObject
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

    ::omero::RTimePtr getStartTime()
    {
        return getStartTime(0);
    }
    ::omero::RTimePtr getStartTime(const ::Ice::Context& __ctx)
    {
        return getStartTime(&__ctx);
    }
    
private:

    ::omero::RTimePtr getStartTime(const ::Ice::Context*);
    
public:

    void setStartTime(const ::omero::RTimePtr& theStartTime)
    {
        setStartTime(theStartTime, 0);
    }
    void setStartTime(const ::omero::RTimePtr& theStartTime, const ::Ice::Context& __ctx)
    {
        setStartTime(theStartTime, &__ctx);
    }
    
private:

    void setStartTime(const ::omero::RTimePtr&, const ::Ice::Context*);
    
public:

    ::omero::RTimePtr getEndTime()
    {
        return getEndTime(0);
    }
    ::omero::RTimePtr getEndTime(const ::Ice::Context& __ctx)
    {
        return getEndTime(&__ctx);
    }
    
private:

    ::omero::RTimePtr getEndTime(const ::Ice::Context*);
    
public:

    void setEndTime(const ::omero::RTimePtr& theEndTime)
    {
        setEndTime(theEndTime, 0);
    }
    void setEndTime(const ::omero::RTimePtr& theEndTime, const ::Ice::Context& __ctx)
    {
        setEndTime(theEndTime, &__ctx);
    }
    
private:

    void setEndTime(const ::omero::RTimePtr&, const ::Ice::Context*);
    
public:

    ::omero::RIntPtr getMaximumFieldCount()
    {
        return getMaximumFieldCount(0);
    }
    ::omero::RIntPtr getMaximumFieldCount(const ::Ice::Context& __ctx)
    {
        return getMaximumFieldCount(&__ctx);
    }
    
private:

    ::omero::RIntPtr getMaximumFieldCount(const ::Ice::Context*);
    
public:

    void setMaximumFieldCount(const ::omero::RIntPtr& theMaximumFieldCount)
    {
        setMaximumFieldCount(theMaximumFieldCount, 0);
    }
    void setMaximumFieldCount(const ::omero::RIntPtr& theMaximumFieldCount, const ::Ice::Context& __ctx)
    {
        setMaximumFieldCount(theMaximumFieldCount, &__ctx);
    }
    
private:

    void setMaximumFieldCount(const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:

    ::omero::model::PlatePtr getPlate()
    {
        return getPlate(0);
    }
    ::omero::model::PlatePtr getPlate(const ::Ice::Context& __ctx)
    {
        return getPlate(&__ctx);
    }
    
private:

    ::omero::model::PlatePtr getPlate(const ::Ice::Context*);
    
public:

    void setPlate(const ::omero::model::PlatePtr& thePlate)
    {
        setPlate(thePlate, 0);
    }
    void setPlate(const ::omero::model::PlatePtr& thePlate, const ::Ice::Context& __ctx)
    {
        setPlate(thePlate, &__ctx);
    }
    
private:

    void setPlate(const ::omero::model::PlatePtr&, const ::Ice::Context*);
    
public:

    void unloadWellSample()
    {
        unloadWellSample(0);
    }
    void unloadWellSample(const ::Ice::Context& __ctx)
    {
        unloadWellSample(&__ctx);
    }
    
private:

    void unloadWellSample(const ::Ice::Context*);
    
public:

    ::Ice::Int sizeOfWellSample()
    {
        return sizeOfWellSample(0);
    }
    ::Ice::Int sizeOfWellSample(const ::Ice::Context& __ctx)
    {
        return sizeOfWellSample(&__ctx);
    }
    
private:

    ::Ice::Int sizeOfWellSample(const ::Ice::Context*);
    
public:

    ::omero::model::PlateAcquisitionWellSampleSeq copyWellSample()
    {
        return copyWellSample(0);
    }
    ::omero::model::PlateAcquisitionWellSampleSeq copyWellSample(const ::Ice::Context& __ctx)
    {
        return copyWellSample(&__ctx);
    }
    
private:

    ::omero::model::PlateAcquisitionWellSampleSeq copyWellSample(const ::Ice::Context*);
    
public:

    void addWellSample(const ::omero::model::WellSamplePtr& target)
    {
        addWellSample(target, 0);
    }
    void addWellSample(const ::omero::model::WellSamplePtr& target, const ::Ice::Context& __ctx)
    {
        addWellSample(target, &__ctx);
    }
    
private:

    void addWellSample(const ::omero::model::WellSamplePtr&, const ::Ice::Context*);
    
public:

    void addAllWellSampleSet(const ::omero::model::PlateAcquisitionWellSampleSeq& targets)
    {
        addAllWellSampleSet(targets, 0);
    }
    void addAllWellSampleSet(const ::omero::model::PlateAcquisitionWellSampleSeq& targets, const ::Ice::Context& __ctx)
    {
        addAllWellSampleSet(targets, &__ctx);
    }
    
private:

    void addAllWellSampleSet(const ::omero::model::PlateAcquisitionWellSampleSeq&, const ::Ice::Context*);
    
public:

    void removeWellSample(const ::omero::model::WellSamplePtr& theTarget)
    {
        removeWellSample(theTarget, 0);
    }
    void removeWellSample(const ::omero::model::WellSamplePtr& theTarget, const ::Ice::Context& __ctx)
    {
        removeWellSample(theTarget, &__ctx);
    }
    
private:

    void removeWellSample(const ::omero::model::WellSamplePtr&, const ::Ice::Context*);
    
public:

    void removeAllWellSampleSet(const ::omero::model::PlateAcquisitionWellSampleSeq& targets)
    {
        removeAllWellSampleSet(targets, 0);
    }
    void removeAllWellSampleSet(const ::omero::model::PlateAcquisitionWellSampleSeq& targets, const ::Ice::Context& __ctx)
    {
        removeAllWellSampleSet(targets, &__ctx);
    }
    
private:

    void removeAllWellSampleSet(const ::omero::model::PlateAcquisitionWellSampleSeq&, const ::Ice::Context*);
    
public:

    void clearWellSample()
    {
        clearWellSample(0);
    }
    void clearWellSample(const ::Ice::Context& __ctx)
    {
        clearWellSample(&__ctx);
    }
    
private:

    void clearWellSample(const ::Ice::Context*);
    
public:

    void reloadWellSample(const ::omero::model::PlateAcquisitionPtr& toCopy)
    {
        reloadWellSample(toCopy, 0);
    }
    void reloadWellSample(const ::omero::model::PlateAcquisitionPtr& toCopy, const ::Ice::Context& __ctx)
    {
        reloadWellSample(toCopy, &__ctx);
    }
    
private:

    void reloadWellSample(const ::omero::model::PlateAcquisitionPtr&, const ::Ice::Context*);
    
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

    ::omero::model::PlateAcquisitionAnnotationLinksSeq copyAnnotationLinks()
    {
        return copyAnnotationLinks(0);
    }
    ::omero::model::PlateAcquisitionAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context& __ctx)
    {
        return copyAnnotationLinks(&__ctx);
    }
    
private:

    ::omero::model::PlateAcquisitionAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*);
    
public:

    void addPlateAcquisitionAnnotationLink(const ::omero::model::PlateAcquisitionAnnotationLinkPtr& target)
    {
        addPlateAcquisitionAnnotationLink(target, 0);
    }
    void addPlateAcquisitionAnnotationLink(const ::omero::model::PlateAcquisitionAnnotationLinkPtr& target, const ::Ice::Context& __ctx)
    {
        addPlateAcquisitionAnnotationLink(target, &__ctx);
    }
    
private:

    void addPlateAcquisitionAnnotationLink(const ::omero::model::PlateAcquisitionAnnotationLinkPtr&, const ::Ice::Context*);
    
public:

    void addAllPlateAcquisitionAnnotationLinkSet(const ::omero::model::PlateAcquisitionAnnotationLinksSeq& targets)
    {
        addAllPlateAcquisitionAnnotationLinkSet(targets, 0);
    }
    void addAllPlateAcquisitionAnnotationLinkSet(const ::omero::model::PlateAcquisitionAnnotationLinksSeq& targets, const ::Ice::Context& __ctx)
    {
        addAllPlateAcquisitionAnnotationLinkSet(targets, &__ctx);
    }
    
private:

    void addAllPlateAcquisitionAnnotationLinkSet(const ::omero::model::PlateAcquisitionAnnotationLinksSeq&, const ::Ice::Context*);
    
public:

    void removePlateAcquisitionAnnotationLink(const ::omero::model::PlateAcquisitionAnnotationLinkPtr& theTarget)
    {
        removePlateAcquisitionAnnotationLink(theTarget, 0);
    }
    void removePlateAcquisitionAnnotationLink(const ::omero::model::PlateAcquisitionAnnotationLinkPtr& theTarget, const ::Ice::Context& __ctx)
    {
        removePlateAcquisitionAnnotationLink(theTarget, &__ctx);
    }
    
private:

    void removePlateAcquisitionAnnotationLink(const ::omero::model::PlateAcquisitionAnnotationLinkPtr&, const ::Ice::Context*);
    
public:

    void removeAllPlateAcquisitionAnnotationLinkSet(const ::omero::model::PlateAcquisitionAnnotationLinksSeq& targets)
    {
        removeAllPlateAcquisitionAnnotationLinkSet(targets, 0);
    }
    void removeAllPlateAcquisitionAnnotationLinkSet(const ::omero::model::PlateAcquisitionAnnotationLinksSeq& targets, const ::Ice::Context& __ctx)
    {
        removeAllPlateAcquisitionAnnotationLinkSet(targets, &__ctx);
    }
    
private:

    void removeAllPlateAcquisitionAnnotationLinkSet(const ::omero::model::PlateAcquisitionAnnotationLinksSeq&, const ::Ice::Context*);
    
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

    void reloadAnnotationLinks(const ::omero::model::PlateAcquisitionPtr& toCopy)
    {
        reloadAnnotationLinks(toCopy, 0);
    }
    void reloadAnnotationLinks(const ::omero::model::PlateAcquisitionPtr& toCopy, const ::Ice::Context& __ctx)
    {
        reloadAnnotationLinks(toCopy, &__ctx);
    }
    
private:

    void reloadAnnotationLinks(const ::omero::model::PlateAcquisitionPtr&, const ::Ice::Context*);
    
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

    ::omero::model::PlateAcquisitionAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr& addition)
    {
        return linkAnnotation(addition, 0);
    }
    ::omero::model::PlateAcquisitionAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr& addition, const ::Ice::Context& __ctx)
    {
        return linkAnnotation(addition, &__ctx);
    }
    
private:

    ::omero::model::PlateAcquisitionAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);
    
public:

    void addPlateAcquisitionAnnotationLinkToBoth(const ::omero::model::PlateAcquisitionAnnotationLinkPtr& link, bool bothSides)
    {
        addPlateAcquisitionAnnotationLinkToBoth(link, bothSides, 0);
    }
    void addPlateAcquisitionAnnotationLinkToBoth(const ::omero::model::PlateAcquisitionAnnotationLinkPtr& link, bool bothSides, const ::Ice::Context& __ctx)
    {
        addPlateAcquisitionAnnotationLinkToBoth(link, bothSides, &__ctx);
    }
    
private:

    void addPlateAcquisitionAnnotationLinkToBoth(const ::omero::model::PlateAcquisitionAnnotationLinkPtr&, bool, const ::Ice::Context*);
    
public:

    ::omero::model::PlateAcquisitionAnnotationLinksSeq findPlateAcquisitionAnnotationLink(const ::omero::model::AnnotationPtr& removal)
    {
        return findPlateAcquisitionAnnotationLink(removal, 0);
    }
    ::omero::model::PlateAcquisitionAnnotationLinksSeq findPlateAcquisitionAnnotationLink(const ::omero::model::AnnotationPtr& removal, const ::Ice::Context& __ctx)
    {
        return findPlateAcquisitionAnnotationLink(removal, &__ctx);
    }
    
private:

    ::omero::model::PlateAcquisitionAnnotationLinksSeq findPlateAcquisitionAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);
    
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

    void removePlateAcquisitionAnnotationLinkFromBoth(const ::omero::model::PlateAcquisitionAnnotationLinkPtr& link, bool bothSides)
    {
        removePlateAcquisitionAnnotationLinkFromBoth(link, bothSides, 0);
    }
    void removePlateAcquisitionAnnotationLinkFromBoth(const ::omero::model::PlateAcquisitionAnnotationLinkPtr& link, bool bothSides, const ::Ice::Context& __ctx)
    {
        removePlateAcquisitionAnnotationLinkFromBoth(link, bothSides, &__ctx);
    }
    
private:

    void removePlateAcquisitionAnnotationLinkFromBoth(const ::omero::model::PlateAcquisitionAnnotationLinkPtr&, bool, const ::Ice::Context*);
    
public:

    ::omero::model::PlateAcquisitionLinkedAnnotationSeq linkedAnnotationList()
    {
        return linkedAnnotationList(0);
    }
    ::omero::model::PlateAcquisitionLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context& __ctx)
    {
        return linkedAnnotationList(&__ctx);
    }
    
private:

    ::omero::model::PlateAcquisitionLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*);
    
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
    
    ::IceInternal::ProxyHandle<PlateAcquisition> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlateAcquisition*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<PlateAcquisition*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlateAcquisition> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlateAcquisition*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<PlateAcquisition*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlateAcquisition> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlateAcquisition*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<PlateAcquisition*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlateAcquisition> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlateAcquisition*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<PlateAcquisition*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlateAcquisition> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlateAcquisition*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<PlateAcquisition*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlateAcquisition> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlateAcquisition*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<PlateAcquisition*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlateAcquisition> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlateAcquisition*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<PlateAcquisition*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlateAcquisition> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlateAcquisition*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<PlateAcquisition*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlateAcquisition> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlateAcquisition*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<PlateAcquisition*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlateAcquisition> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlateAcquisition*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<PlateAcquisition*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlateAcquisition> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlateAcquisition*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<PlateAcquisition*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlateAcquisition> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlateAcquisition*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<PlateAcquisition*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlateAcquisition> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlateAcquisition*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<PlateAcquisition*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlateAcquisition> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlateAcquisition*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<PlateAcquisition*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlateAcquisition> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlateAcquisition*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<PlateAcquisition*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlateAcquisition> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlateAcquisition*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<PlateAcquisition*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlateAcquisition> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlateAcquisition*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<PlateAcquisition*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlateAcquisition> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlateAcquisition*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<PlateAcquisition*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlateAcquisition> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlateAcquisition*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<PlateAcquisition*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class PlateAcquisition : virtual public ::IceDelegate::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*) = 0;

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getName(const ::Ice::Context*) = 0;

    virtual void setName(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RTimePtr getStartTime(const ::Ice::Context*) = 0;

    virtual void setStartTime(const ::omero::RTimePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RTimePtr getEndTime(const ::Ice::Context*) = 0;

    virtual void setEndTime(const ::omero::RTimePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RIntPtr getMaximumFieldCount(const ::Ice::Context*) = 0;

    virtual void setMaximumFieldCount(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::PlatePtr getPlate(const ::Ice::Context*) = 0;

    virtual void setPlate(const ::omero::model::PlatePtr&, const ::Ice::Context*) = 0;

    virtual void unloadWellSample(const ::Ice::Context*) = 0;

    virtual ::Ice::Int sizeOfWellSample(const ::Ice::Context*) = 0;

    virtual ::omero::model::PlateAcquisitionWellSampleSeq copyWellSample(const ::Ice::Context*) = 0;

    virtual void addWellSample(const ::omero::model::WellSamplePtr&, const ::Ice::Context*) = 0;

    virtual void addAllWellSampleSet(const ::omero::model::PlateAcquisitionWellSampleSeq&, const ::Ice::Context*) = 0;

    virtual void removeWellSample(const ::omero::model::WellSamplePtr&, const ::Ice::Context*) = 0;

    virtual void removeAllWellSampleSet(const ::omero::model::PlateAcquisitionWellSampleSeq&, const ::Ice::Context*) = 0;

    virtual void clearWellSample(const ::Ice::Context*) = 0;

    virtual void reloadWellSample(const ::omero::model::PlateAcquisitionPtr&, const ::Ice::Context*) = 0;

    virtual void unloadAnnotationLinks(const ::Ice::Context*) = 0;

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Context*) = 0;

    virtual ::omero::model::PlateAcquisitionAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*) = 0;

    virtual void addPlateAcquisitionAnnotationLink(const ::omero::model::PlateAcquisitionAnnotationLinkPtr&, const ::Ice::Context*) = 0;

    virtual void addAllPlateAcquisitionAnnotationLinkSet(const ::omero::model::PlateAcquisitionAnnotationLinksSeq&, const ::Ice::Context*) = 0;

    virtual void removePlateAcquisitionAnnotationLink(const ::omero::model::PlateAcquisitionAnnotationLinkPtr&, const ::Ice::Context*) = 0;

    virtual void removeAllPlateAcquisitionAnnotationLinkSet(const ::omero::model::PlateAcquisitionAnnotationLinksSeq&, const ::Ice::Context*) = 0;

    virtual void clearAnnotationLinks(const ::Ice::Context*) = 0;

    virtual void reloadAnnotationLinks(const ::omero::model::PlateAcquisitionPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Context*) = 0;

    virtual ::omero::model::PlateAcquisitionAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*) = 0;

    virtual void addPlateAcquisitionAnnotationLinkToBoth(const ::omero::model::PlateAcquisitionAnnotationLinkPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::PlateAcquisitionAnnotationLinksSeq findPlateAcquisitionAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*) = 0;

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*) = 0;

    virtual void removePlateAcquisitionAnnotationLinkFromBoth(const ::omero::model::PlateAcquisitionAnnotationLinkPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::PlateAcquisitionLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*) = 0;

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

class PlateAcquisition : virtual public ::IceDelegate::omero::model::PlateAcquisition,
                         virtual public ::IceDelegateM::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getName(const ::Ice::Context*);

    virtual void setName(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RTimePtr getStartTime(const ::Ice::Context*);

    virtual void setStartTime(const ::omero::RTimePtr&, const ::Ice::Context*);

    virtual ::omero::RTimePtr getEndTime(const ::Ice::Context*);

    virtual void setEndTime(const ::omero::RTimePtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getMaximumFieldCount(const ::Ice::Context*);

    virtual void setMaximumFieldCount(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::model::PlatePtr getPlate(const ::Ice::Context*);

    virtual void setPlate(const ::omero::model::PlatePtr&, const ::Ice::Context*);

    virtual void unloadWellSample(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfWellSample(const ::Ice::Context*);

    virtual ::omero::model::PlateAcquisitionWellSampleSeq copyWellSample(const ::Ice::Context*);

    virtual void addWellSample(const ::omero::model::WellSamplePtr&, const ::Ice::Context*);

    virtual void addAllWellSampleSet(const ::omero::model::PlateAcquisitionWellSampleSeq&, const ::Ice::Context*);

    virtual void removeWellSample(const ::omero::model::WellSamplePtr&, const ::Ice::Context*);

    virtual void removeAllWellSampleSet(const ::omero::model::PlateAcquisitionWellSampleSeq&, const ::Ice::Context*);

    virtual void clearWellSample(const ::Ice::Context*);

    virtual void reloadWellSample(const ::omero::model::PlateAcquisitionPtr&, const ::Ice::Context*);

    virtual void unloadAnnotationLinks(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Context*);

    virtual ::omero::model::PlateAcquisitionAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*);

    virtual void addPlateAcquisitionAnnotationLink(const ::omero::model::PlateAcquisitionAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void addAllPlateAcquisitionAnnotationLinkSet(const ::omero::model::PlateAcquisitionAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void removePlateAcquisitionAnnotationLink(const ::omero::model::PlateAcquisitionAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void removeAllPlateAcquisitionAnnotationLinkSet(const ::omero::model::PlateAcquisitionAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void clearAnnotationLinks(const ::Ice::Context*);

    virtual void reloadAnnotationLinks(const ::omero::model::PlateAcquisitionPtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::PlateAcquisitionAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void addPlateAcquisitionAnnotationLinkToBoth(const ::omero::model::PlateAcquisitionAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::PlateAcquisitionAnnotationLinksSeq findPlateAcquisitionAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void removePlateAcquisitionAnnotationLinkFromBoth(const ::omero::model::PlateAcquisitionAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::PlateAcquisitionLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*);

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

class PlateAcquisition : virtual public ::IceDelegate::omero::model::PlateAcquisition,
                         virtual public ::IceDelegateD::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getName(const ::Ice::Context*);

    virtual void setName(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RTimePtr getStartTime(const ::Ice::Context*);

    virtual void setStartTime(const ::omero::RTimePtr&, const ::Ice::Context*);

    virtual ::omero::RTimePtr getEndTime(const ::Ice::Context*);

    virtual void setEndTime(const ::omero::RTimePtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getMaximumFieldCount(const ::Ice::Context*);

    virtual void setMaximumFieldCount(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::model::PlatePtr getPlate(const ::Ice::Context*);

    virtual void setPlate(const ::omero::model::PlatePtr&, const ::Ice::Context*);

    virtual void unloadWellSample(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfWellSample(const ::Ice::Context*);

    virtual ::omero::model::PlateAcquisitionWellSampleSeq copyWellSample(const ::Ice::Context*);

    virtual void addWellSample(const ::omero::model::WellSamplePtr&, const ::Ice::Context*);

    virtual void addAllWellSampleSet(const ::omero::model::PlateAcquisitionWellSampleSeq&, const ::Ice::Context*);

    virtual void removeWellSample(const ::omero::model::WellSamplePtr&, const ::Ice::Context*);

    virtual void removeAllWellSampleSet(const ::omero::model::PlateAcquisitionWellSampleSeq&, const ::Ice::Context*);

    virtual void clearWellSample(const ::Ice::Context*);

    virtual void reloadWellSample(const ::omero::model::PlateAcquisitionPtr&, const ::Ice::Context*);

    virtual void unloadAnnotationLinks(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Context*);

    virtual ::omero::model::PlateAcquisitionAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*);

    virtual void addPlateAcquisitionAnnotationLink(const ::omero::model::PlateAcquisitionAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void addAllPlateAcquisitionAnnotationLinkSet(const ::omero::model::PlateAcquisitionAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void removePlateAcquisitionAnnotationLink(const ::omero::model::PlateAcquisitionAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void removeAllPlateAcquisitionAnnotationLinkSet(const ::omero::model::PlateAcquisitionAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void clearAnnotationLinks(const ::Ice::Context*);

    virtual void reloadAnnotationLinks(const ::omero::model::PlateAcquisitionPtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::PlateAcquisitionAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void addPlateAcquisitionAnnotationLinkToBoth(const ::omero::model::PlateAcquisitionAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::PlateAcquisitionAnnotationLinksSeq findPlateAcquisitionAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void removePlateAcquisitionAnnotationLinkFromBoth(const ::omero::model::PlateAcquisitionAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::PlateAcquisitionLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*);

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

class PlateAcquisition : virtual public ::omero::model::IObject
{
public:

    typedef PlateAcquisitionPrx ProxyType;
    typedef PlateAcquisitionPtr PointerType;
    
    PlateAcquisition() {}
    PlateAcquisition(const ::omero::RLongPtr&, const ::omero::model::DetailsPtr&, bool, const ::omero::RIntPtr&, const ::omero::RStringPtr&, const ::omero::RTimePtr&, const ::omero::RTimePtr&, const ::omero::RIntPtr&, const ::omero::model::PlatePtr&, const ::omero::model::PlateAcquisitionWellSampleSeq&, bool, const ::omero::model::PlateAcquisitionAnnotationLinksSeq&, bool, const ::omero::sys::CountMap&, const ::omero::RStringPtr&);
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

    virtual ::omero::RStringPtr getName(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getName(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setName(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setName(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RTimePtr getStartTime(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getStartTime(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setStartTime(const ::omero::RTimePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setStartTime(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RTimePtr getEndTime(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getEndTime(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setEndTime(const ::omero::RTimePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setEndTime(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RIntPtr getMaximumFieldCount(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getMaximumFieldCount(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setMaximumFieldCount(const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setMaximumFieldCount(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::PlatePtr getPlate(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getPlate(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setPlate(const ::omero::model::PlatePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setPlate(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unloadWellSample(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unloadWellSample(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int sizeOfWellSample(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sizeOfWellSample(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::PlateAcquisitionWellSampleSeq copyWellSample(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copyWellSample(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addWellSample(const ::omero::model::WellSamplePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addWellSample(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAllWellSampleSet(const ::omero::model::PlateAcquisitionWellSampleSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAllWellSampleSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeWellSample(const ::omero::model::WellSamplePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeWellSample(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeAllWellSampleSet(const ::omero::model::PlateAcquisitionWellSampleSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeAllWellSampleSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void clearWellSample(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___clearWellSample(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void reloadWellSample(const ::omero::model::PlateAcquisitionPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___reloadWellSample(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unloadAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unloadAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sizeOfAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::PlateAcquisitionAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copyAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addPlateAcquisitionAnnotationLink(const ::omero::model::PlateAcquisitionAnnotationLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addPlateAcquisitionAnnotationLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAllPlateAcquisitionAnnotationLinkSet(const ::omero::model::PlateAcquisitionAnnotationLinksSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAllPlateAcquisitionAnnotationLinkSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removePlateAcquisitionAnnotationLink(const ::omero::model::PlateAcquisitionAnnotationLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removePlateAcquisitionAnnotationLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeAllPlateAcquisitionAnnotationLinkSet(const ::omero::model::PlateAcquisitionAnnotationLinksSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeAllPlateAcquisitionAnnotationLinkSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void clearAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___clearAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void reloadAnnotationLinks(const ::omero::model::PlateAcquisitionPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___reloadAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getAnnotationLinksCountPerOwner(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::PlateAcquisitionAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkAnnotation(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addPlateAcquisitionAnnotationLinkToBoth(const ::omero::model::PlateAcquisitionAnnotationLinkPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addPlateAcquisitionAnnotationLinkToBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::PlateAcquisitionAnnotationLinksSeq findPlateAcquisitionAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___findPlateAcquisitionAnnotationLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unlinkAnnotation(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removePlateAcquisitionAnnotationLinkFromBoth(const ::omero::model::PlateAcquisitionAnnotationLinkPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removePlateAcquisitionAnnotationLinkFromBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::PlateAcquisitionLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkedAnnotationList(::IceInternal::Incoming&, const ::Ice::Current&);

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

    ::omero::RStringPtr name;

    ::omero::RTimePtr startTime;

    ::omero::RTimePtr endTime;

    ::omero::RIntPtr maximumFieldCount;

    ::omero::model::PlatePtr plate;

    ::omero::model::PlateAcquisitionWellSampleSeq wellSampleSeq;

    bool wellSampleLoaded;

    ::omero::model::PlateAcquisitionAnnotationLinksSeq annotationLinksSeq;

    bool annotationLinksLoaded;

    ::omero::sys::CountMap annotationLinksCountPerOwner;

    ::omero::RStringPtr description;
};

}

}

#endif
