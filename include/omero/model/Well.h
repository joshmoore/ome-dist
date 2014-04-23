// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `Well.ice'

#ifndef __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_Well_h__
#define __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_Well_h__

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

class WellReagentLink;

class Reagent;

class WellSample;

class Plate;

class WellAnnotationLink;

class Annotation;

class Details;

class Well;

}

}

}

namespace omero
{

namespace model
{

class WellReagentLink;
bool operator==(const WellReagentLink&, const WellReagentLink&);
bool operator<(const WellReagentLink&, const WellReagentLink&);

class Reagent;
bool operator==(const Reagent&, const Reagent&);
bool operator<(const Reagent&, const Reagent&);

class WellSample;
bool operator==(const WellSample&, const WellSample&);
bool operator<(const WellSample&, const WellSample&);

class Plate;
bool operator==(const Plate&, const Plate&);
bool operator<(const Plate&, const Plate&);

class WellAnnotationLink;
bool operator==(const WellAnnotationLink&, const WellAnnotationLink&);
bool operator<(const WellAnnotationLink&, const WellAnnotationLink&);

class Annotation;
bool operator==(const Annotation&, const Annotation&);
bool operator<(const Annotation&, const Annotation&);

class Details;
bool operator==(const Details&, const Details&);
bool operator<(const Details&, const Details&);

class Well;
bool operator==(const Well&, const Well&);
bool operator<(const Well&, const Well&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::model::WellReagentLink*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::WellReagentLink*);

::Ice::Object* upCast(::omero::model::Reagent*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Reagent*);

::Ice::Object* upCast(::omero::model::WellSample*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::WellSample*);

::Ice::Object* upCast(::omero::model::Plate*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Plate*);

::Ice::Object* upCast(::omero::model::WellAnnotationLink*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::WellAnnotationLink*);

::Ice::Object* upCast(::omero::model::Annotation*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Annotation*);

::Ice::Object* upCast(::omero::model::Details*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Details*);

::Ice::Object* upCast(::omero::model::Well*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Well*);

}

namespace omero
{

namespace model
{

typedef ::IceInternal::Handle< ::omero::model::WellReagentLink> WellReagentLinkPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::WellReagentLink> WellReagentLinkPrx;

void __read(::IceInternal::BasicStream*, WellReagentLinkPrx&);
void __patch__WellReagentLinkPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Reagent> ReagentPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Reagent> ReagentPrx;

void __read(::IceInternal::BasicStream*, ReagentPrx&);
void __patch__ReagentPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::WellSample> WellSamplePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::WellSample> WellSamplePrx;

void __read(::IceInternal::BasicStream*, WellSamplePrx&);
void __patch__WellSamplePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Plate> PlatePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Plate> PlatePrx;

void __read(::IceInternal::BasicStream*, PlatePrx&);
void __patch__PlatePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::WellAnnotationLink> WellAnnotationLinkPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::WellAnnotationLink> WellAnnotationLinkPrx;

void __read(::IceInternal::BasicStream*, WellAnnotationLinkPrx&);
void __patch__WellAnnotationLinkPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Annotation> AnnotationPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Annotation> AnnotationPrx;

void __read(::IceInternal::BasicStream*, AnnotationPrx&);
void __patch__AnnotationPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Details> DetailsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Details> DetailsPrx;

void __read(::IceInternal::BasicStream*, DetailsPrx&);
void __patch__DetailsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Well> WellPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Well> WellPrx;

void __read(::IceInternal::BasicStream*, WellPrx&);
void __patch__WellPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace omero
{

namespace model
{

typedef ::std::vector< ::omero::model::WellReagentLinkPtr> WellReagentLinksSeq;
void __writeWellReagentLinksSeq(::IceInternal::BasicStream*, const ::omero::model::WellReagentLinkPtr*, const ::omero::model::WellReagentLinkPtr*);
void __readWellReagentLinksSeq(::IceInternal::BasicStream*, WellReagentLinksSeq&);

typedef ::std::vector< ::omero::model::ReagentPtr> WellLinkedReagentSeq;
void __writeWellLinkedReagentSeq(::IceInternal::BasicStream*, const ::omero::model::ReagentPtr*, const ::omero::model::ReagentPtr*);
void __readWellLinkedReagentSeq(::IceInternal::BasicStream*, WellLinkedReagentSeq&);

typedef ::std::vector< ::omero::model::WellSamplePtr> WellWellSamplesSeq;
void __writeWellWellSamplesSeq(::IceInternal::BasicStream*, const ::omero::model::WellSamplePtr*, const ::omero::model::WellSamplePtr*);
void __readWellWellSamplesSeq(::IceInternal::BasicStream*, WellWellSamplesSeq&);

typedef ::std::vector< ::omero::model::WellAnnotationLinkPtr> WellAnnotationLinksSeq;
void __writeWellAnnotationLinksSeq(::IceInternal::BasicStream*, const ::omero::model::WellAnnotationLinkPtr*, const ::omero::model::WellAnnotationLinkPtr*);
void __readWellAnnotationLinksSeq(::IceInternal::BasicStream*, WellAnnotationLinksSeq&);

typedef ::std::vector< ::omero::model::AnnotationPtr> WellLinkedAnnotationSeq;
void __writeWellLinkedAnnotationSeq(::IceInternal::BasicStream*, const ::omero::model::AnnotationPtr*, const ::omero::model::AnnotationPtr*);
void __readWellLinkedAnnotationSeq(::IceInternal::BasicStream*, WellLinkedAnnotationSeq&);

}

}

namespace IceProxy
{

namespace omero
{

namespace model
{

class Well : virtual public ::IceProxy::omero::model::IObject
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

    ::omero::RIntPtr getColumn()
    {
        return getColumn(0);
    }
    ::omero::RIntPtr getColumn(const ::Ice::Context& __ctx)
    {
        return getColumn(&__ctx);
    }
    
private:

    ::omero::RIntPtr getColumn(const ::Ice::Context*);
    
public:

    void setColumn(const ::omero::RIntPtr& theColumn)
    {
        setColumn(theColumn, 0);
    }
    void setColumn(const ::omero::RIntPtr& theColumn, const ::Ice::Context& __ctx)
    {
        setColumn(theColumn, &__ctx);
    }
    
private:

    void setColumn(const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:

    ::omero::RIntPtr getRow()
    {
        return getRow(0);
    }
    ::omero::RIntPtr getRow(const ::Ice::Context& __ctx)
    {
        return getRow(&__ctx);
    }
    
private:

    ::omero::RIntPtr getRow(const ::Ice::Context*);
    
public:

    void setRow(const ::omero::RIntPtr& theRow)
    {
        setRow(theRow, 0);
    }
    void setRow(const ::omero::RIntPtr& theRow, const ::Ice::Context& __ctx)
    {
        setRow(theRow, &__ctx);
    }
    
private:

    void setRow(const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:

    ::omero::RIntPtr getRed()
    {
        return getRed(0);
    }
    ::omero::RIntPtr getRed(const ::Ice::Context& __ctx)
    {
        return getRed(&__ctx);
    }
    
private:

    ::omero::RIntPtr getRed(const ::Ice::Context*);
    
public:

    void setRed(const ::omero::RIntPtr& theRed)
    {
        setRed(theRed, 0);
    }
    void setRed(const ::omero::RIntPtr& theRed, const ::Ice::Context& __ctx)
    {
        setRed(theRed, &__ctx);
    }
    
private:

    void setRed(const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:

    ::omero::RIntPtr getGreen()
    {
        return getGreen(0);
    }
    ::omero::RIntPtr getGreen(const ::Ice::Context& __ctx)
    {
        return getGreen(&__ctx);
    }
    
private:

    ::omero::RIntPtr getGreen(const ::Ice::Context*);
    
public:

    void setGreen(const ::omero::RIntPtr& theGreen)
    {
        setGreen(theGreen, 0);
    }
    void setGreen(const ::omero::RIntPtr& theGreen, const ::Ice::Context& __ctx)
    {
        setGreen(theGreen, &__ctx);
    }
    
private:

    void setGreen(const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:

    ::omero::RIntPtr getBlue()
    {
        return getBlue(0);
    }
    ::omero::RIntPtr getBlue(const ::Ice::Context& __ctx)
    {
        return getBlue(&__ctx);
    }
    
private:

    ::omero::RIntPtr getBlue(const ::Ice::Context*);
    
public:

    void setBlue(const ::omero::RIntPtr& theBlue)
    {
        setBlue(theBlue, 0);
    }
    void setBlue(const ::omero::RIntPtr& theBlue, const ::Ice::Context& __ctx)
    {
        setBlue(theBlue, &__ctx);
    }
    
private:

    void setBlue(const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:

    ::omero::RIntPtr getAlpha()
    {
        return getAlpha(0);
    }
    ::omero::RIntPtr getAlpha(const ::Ice::Context& __ctx)
    {
        return getAlpha(&__ctx);
    }
    
private:

    ::omero::RIntPtr getAlpha(const ::Ice::Context*);
    
public:

    void setAlpha(const ::omero::RIntPtr& theAlpha)
    {
        setAlpha(theAlpha, 0);
    }
    void setAlpha(const ::omero::RIntPtr& theAlpha, const ::Ice::Context& __ctx)
    {
        setAlpha(theAlpha, &__ctx);
    }
    
private:

    void setAlpha(const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:

    void unloadReagentLinks()
    {
        unloadReagentLinks(0);
    }
    void unloadReagentLinks(const ::Ice::Context& __ctx)
    {
        unloadReagentLinks(&__ctx);
    }
    
private:

    void unloadReagentLinks(const ::Ice::Context*);
    
public:

    ::Ice::Int sizeOfReagentLinks()
    {
        return sizeOfReagentLinks(0);
    }
    ::Ice::Int sizeOfReagentLinks(const ::Ice::Context& __ctx)
    {
        return sizeOfReagentLinks(&__ctx);
    }
    
private:

    ::Ice::Int sizeOfReagentLinks(const ::Ice::Context*);
    
public:

    ::omero::model::WellReagentLinksSeq copyReagentLinks()
    {
        return copyReagentLinks(0);
    }
    ::omero::model::WellReagentLinksSeq copyReagentLinks(const ::Ice::Context& __ctx)
    {
        return copyReagentLinks(&__ctx);
    }
    
private:

    ::omero::model::WellReagentLinksSeq copyReagentLinks(const ::Ice::Context*);
    
public:

    void addWellReagentLink(const ::omero::model::WellReagentLinkPtr& target)
    {
        addWellReagentLink(target, 0);
    }
    void addWellReagentLink(const ::omero::model::WellReagentLinkPtr& target, const ::Ice::Context& __ctx)
    {
        addWellReagentLink(target, &__ctx);
    }
    
private:

    void addWellReagentLink(const ::omero::model::WellReagentLinkPtr&, const ::Ice::Context*);
    
public:

    void addAllWellReagentLinkSet(const ::omero::model::WellReagentLinksSeq& targets)
    {
        addAllWellReagentLinkSet(targets, 0);
    }
    void addAllWellReagentLinkSet(const ::omero::model::WellReagentLinksSeq& targets, const ::Ice::Context& __ctx)
    {
        addAllWellReagentLinkSet(targets, &__ctx);
    }
    
private:

    void addAllWellReagentLinkSet(const ::omero::model::WellReagentLinksSeq&, const ::Ice::Context*);
    
public:

    void removeWellReagentLink(const ::omero::model::WellReagentLinkPtr& theTarget)
    {
        removeWellReagentLink(theTarget, 0);
    }
    void removeWellReagentLink(const ::omero::model::WellReagentLinkPtr& theTarget, const ::Ice::Context& __ctx)
    {
        removeWellReagentLink(theTarget, &__ctx);
    }
    
private:

    void removeWellReagentLink(const ::omero::model::WellReagentLinkPtr&, const ::Ice::Context*);
    
public:

    void removeAllWellReagentLinkSet(const ::omero::model::WellReagentLinksSeq& targets)
    {
        removeAllWellReagentLinkSet(targets, 0);
    }
    void removeAllWellReagentLinkSet(const ::omero::model::WellReagentLinksSeq& targets, const ::Ice::Context& __ctx)
    {
        removeAllWellReagentLinkSet(targets, &__ctx);
    }
    
private:

    void removeAllWellReagentLinkSet(const ::omero::model::WellReagentLinksSeq&, const ::Ice::Context*);
    
public:

    void clearReagentLinks()
    {
        clearReagentLinks(0);
    }
    void clearReagentLinks(const ::Ice::Context& __ctx)
    {
        clearReagentLinks(&__ctx);
    }
    
private:

    void clearReagentLinks(const ::Ice::Context*);
    
public:

    void reloadReagentLinks(const ::omero::model::WellPtr& toCopy)
    {
        reloadReagentLinks(toCopy, 0);
    }
    void reloadReagentLinks(const ::omero::model::WellPtr& toCopy, const ::Ice::Context& __ctx)
    {
        reloadReagentLinks(toCopy, &__ctx);
    }
    
private:

    void reloadReagentLinks(const ::omero::model::WellPtr&, const ::Ice::Context*);
    
public:

    ::omero::sys::CountMap getReagentLinksCountPerOwner()
    {
        return getReagentLinksCountPerOwner(0);
    }
    ::omero::sys::CountMap getReagentLinksCountPerOwner(const ::Ice::Context& __ctx)
    {
        return getReagentLinksCountPerOwner(&__ctx);
    }
    
private:

    ::omero::sys::CountMap getReagentLinksCountPerOwner(const ::Ice::Context*);
    
public:

    ::omero::model::WellReagentLinkPtr linkReagent(const ::omero::model::ReagentPtr& addition)
    {
        return linkReagent(addition, 0);
    }
    ::omero::model::WellReagentLinkPtr linkReagent(const ::omero::model::ReagentPtr& addition, const ::Ice::Context& __ctx)
    {
        return linkReagent(addition, &__ctx);
    }
    
private:

    ::omero::model::WellReagentLinkPtr linkReagent(const ::omero::model::ReagentPtr&, const ::Ice::Context*);
    
public:

    void addWellReagentLinkToBoth(const ::omero::model::WellReagentLinkPtr& link, bool bothSides)
    {
        addWellReagentLinkToBoth(link, bothSides, 0);
    }
    void addWellReagentLinkToBoth(const ::omero::model::WellReagentLinkPtr& link, bool bothSides, const ::Ice::Context& __ctx)
    {
        addWellReagentLinkToBoth(link, bothSides, &__ctx);
    }
    
private:

    void addWellReagentLinkToBoth(const ::omero::model::WellReagentLinkPtr&, bool, const ::Ice::Context*);
    
public:

    ::omero::model::WellReagentLinksSeq findWellReagentLink(const ::omero::model::ReagentPtr& removal)
    {
        return findWellReagentLink(removal, 0);
    }
    ::omero::model::WellReagentLinksSeq findWellReagentLink(const ::omero::model::ReagentPtr& removal, const ::Ice::Context& __ctx)
    {
        return findWellReagentLink(removal, &__ctx);
    }
    
private:

    ::omero::model::WellReagentLinksSeq findWellReagentLink(const ::omero::model::ReagentPtr&, const ::Ice::Context*);
    
public:

    void unlinkReagent(const ::omero::model::ReagentPtr& removal)
    {
        unlinkReagent(removal, 0);
    }
    void unlinkReagent(const ::omero::model::ReagentPtr& removal, const ::Ice::Context& __ctx)
    {
        unlinkReagent(removal, &__ctx);
    }
    
private:

    void unlinkReagent(const ::omero::model::ReagentPtr&, const ::Ice::Context*);
    
public:

    void removeWellReagentLinkFromBoth(const ::omero::model::WellReagentLinkPtr& link, bool bothSides)
    {
        removeWellReagentLinkFromBoth(link, bothSides, 0);
    }
    void removeWellReagentLinkFromBoth(const ::omero::model::WellReagentLinkPtr& link, bool bothSides, const ::Ice::Context& __ctx)
    {
        removeWellReagentLinkFromBoth(link, bothSides, &__ctx);
    }
    
private:

    void removeWellReagentLinkFromBoth(const ::omero::model::WellReagentLinkPtr&, bool, const ::Ice::Context*);
    
public:

    ::omero::model::WellLinkedReagentSeq linkedReagentList()
    {
        return linkedReagentList(0);
    }
    ::omero::model::WellLinkedReagentSeq linkedReagentList(const ::Ice::Context& __ctx)
    {
        return linkedReagentList(&__ctx);
    }
    
private:

    ::omero::model::WellLinkedReagentSeq linkedReagentList(const ::Ice::Context*);
    
public:

    ::omero::RStringPtr getExternalDescription()
    {
        return getExternalDescription(0);
    }
    ::omero::RStringPtr getExternalDescription(const ::Ice::Context& __ctx)
    {
        return getExternalDescription(&__ctx);
    }
    
private:

    ::omero::RStringPtr getExternalDescription(const ::Ice::Context*);
    
public:

    void setExternalDescription(const ::omero::RStringPtr& theExternalDescription)
    {
        setExternalDescription(theExternalDescription, 0);
    }
    void setExternalDescription(const ::omero::RStringPtr& theExternalDescription, const ::Ice::Context& __ctx)
    {
        setExternalDescription(theExternalDescription, &__ctx);
    }
    
private:

    void setExternalDescription(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:

    ::omero::RStringPtr getExternalIdentifier()
    {
        return getExternalIdentifier(0);
    }
    ::omero::RStringPtr getExternalIdentifier(const ::Ice::Context& __ctx)
    {
        return getExternalIdentifier(&__ctx);
    }
    
private:

    ::omero::RStringPtr getExternalIdentifier(const ::Ice::Context*);
    
public:

    void setExternalIdentifier(const ::omero::RStringPtr& theExternalIdentifier)
    {
        setExternalIdentifier(theExternalIdentifier, 0);
    }
    void setExternalIdentifier(const ::omero::RStringPtr& theExternalIdentifier, const ::Ice::Context& __ctx)
    {
        setExternalIdentifier(theExternalIdentifier, &__ctx);
    }
    
private:

    void setExternalIdentifier(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:

    ::omero::RStringPtr getType()
    {
        return getType(0);
    }
    ::omero::RStringPtr getType(const ::Ice::Context& __ctx)
    {
        return getType(&__ctx);
    }
    
private:

    ::omero::RStringPtr getType(const ::Ice::Context*);
    
public:

    void setType(const ::omero::RStringPtr& theType)
    {
        setType(theType, 0);
    }
    void setType(const ::omero::RStringPtr& theType, const ::Ice::Context& __ctx)
    {
        setType(theType, &__ctx);
    }
    
private:

    void setType(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:

    void unloadWellSamples()
    {
        unloadWellSamples(0);
    }
    void unloadWellSamples(const ::Ice::Context& __ctx)
    {
        unloadWellSamples(&__ctx);
    }
    
private:

    void unloadWellSamples(const ::Ice::Context*);
    
public:

    ::Ice::Int sizeOfWellSamples()
    {
        return sizeOfWellSamples(0);
    }
    ::Ice::Int sizeOfWellSamples(const ::Ice::Context& __ctx)
    {
        return sizeOfWellSamples(&__ctx);
    }
    
private:

    ::Ice::Int sizeOfWellSamples(const ::Ice::Context*);
    
public:

    ::omero::model::WellWellSamplesSeq copyWellSamples()
    {
        return copyWellSamples(0);
    }
    ::omero::model::WellWellSamplesSeq copyWellSamples(const ::Ice::Context& __ctx)
    {
        return copyWellSamples(&__ctx);
    }
    
private:

    ::omero::model::WellWellSamplesSeq copyWellSamples(const ::Ice::Context*);
    
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

    void addAllWellSampleSet(const ::omero::model::WellWellSamplesSeq& targets)
    {
        addAllWellSampleSet(targets, 0);
    }
    void addAllWellSampleSet(const ::omero::model::WellWellSamplesSeq& targets, const ::Ice::Context& __ctx)
    {
        addAllWellSampleSet(targets, &__ctx);
    }
    
private:

    void addAllWellSampleSet(const ::omero::model::WellWellSamplesSeq&, const ::Ice::Context*);
    
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

    void removeAllWellSampleSet(const ::omero::model::WellWellSamplesSeq& targets)
    {
        removeAllWellSampleSet(targets, 0);
    }
    void removeAllWellSampleSet(const ::omero::model::WellWellSamplesSeq& targets, const ::Ice::Context& __ctx)
    {
        removeAllWellSampleSet(targets, &__ctx);
    }
    
private:

    void removeAllWellSampleSet(const ::omero::model::WellWellSamplesSeq&, const ::Ice::Context*);
    
public:

    void clearWellSamples()
    {
        clearWellSamples(0);
    }
    void clearWellSamples(const ::Ice::Context& __ctx)
    {
        clearWellSamples(&__ctx);
    }
    
private:

    void clearWellSamples(const ::Ice::Context*);
    
public:

    void reloadWellSamples(const ::omero::model::WellPtr& toCopy)
    {
        reloadWellSamples(toCopy, 0);
    }
    void reloadWellSamples(const ::omero::model::WellPtr& toCopy, const ::Ice::Context& __ctx)
    {
        reloadWellSamples(toCopy, &__ctx);
    }
    
private:

    void reloadWellSamples(const ::omero::model::WellPtr&, const ::Ice::Context*);
    
public:

    ::omero::model::WellSamplePtr getWellSample(::Ice::Int index)
    {
        return getWellSample(index, 0);
    }
    ::omero::model::WellSamplePtr getWellSample(::Ice::Int index, const ::Ice::Context& __ctx)
    {
        return getWellSample(index, &__ctx);
    }
    
private:

    ::omero::model::WellSamplePtr getWellSample(::Ice::Int, const ::Ice::Context*);
    
public:

    ::omero::model::WellSamplePtr setWellSample(::Ice::Int index, const ::omero::model::WellSamplePtr& theElement)
    {
        return setWellSample(index, theElement, 0);
    }
    ::omero::model::WellSamplePtr setWellSample(::Ice::Int index, const ::omero::model::WellSamplePtr& theElement, const ::Ice::Context& __ctx)
    {
        return setWellSample(index, theElement, &__ctx);
    }
    
private:

    ::omero::model::WellSamplePtr setWellSample(::Ice::Int, const ::omero::model::WellSamplePtr&, const ::Ice::Context*);
    
public:

    ::omero::model::WellSamplePtr getPrimaryWellSample()
    {
        return getPrimaryWellSample(0);
    }
    ::omero::model::WellSamplePtr getPrimaryWellSample(const ::Ice::Context& __ctx)
    {
        return getPrimaryWellSample(&__ctx);
    }
    
private:

    ::omero::model::WellSamplePtr getPrimaryWellSample(const ::Ice::Context*);
    
public:

    ::omero::model::WellSamplePtr setPrimaryWellSample(const ::omero::model::WellSamplePtr& theElement)
    {
        return setPrimaryWellSample(theElement, 0);
    }
    ::omero::model::WellSamplePtr setPrimaryWellSample(const ::omero::model::WellSamplePtr& theElement, const ::Ice::Context& __ctx)
    {
        return setPrimaryWellSample(theElement, &__ctx);
    }
    
private:

    ::omero::model::WellSamplePtr setPrimaryWellSample(const ::omero::model::WellSamplePtr&, const ::Ice::Context*);
    
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

    ::omero::model::WellAnnotationLinksSeq copyAnnotationLinks()
    {
        return copyAnnotationLinks(0);
    }
    ::omero::model::WellAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context& __ctx)
    {
        return copyAnnotationLinks(&__ctx);
    }
    
private:

    ::omero::model::WellAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*);
    
public:

    void addWellAnnotationLink(const ::omero::model::WellAnnotationLinkPtr& target)
    {
        addWellAnnotationLink(target, 0);
    }
    void addWellAnnotationLink(const ::omero::model::WellAnnotationLinkPtr& target, const ::Ice::Context& __ctx)
    {
        addWellAnnotationLink(target, &__ctx);
    }
    
private:

    void addWellAnnotationLink(const ::omero::model::WellAnnotationLinkPtr&, const ::Ice::Context*);
    
public:

    void addAllWellAnnotationLinkSet(const ::omero::model::WellAnnotationLinksSeq& targets)
    {
        addAllWellAnnotationLinkSet(targets, 0);
    }
    void addAllWellAnnotationLinkSet(const ::omero::model::WellAnnotationLinksSeq& targets, const ::Ice::Context& __ctx)
    {
        addAllWellAnnotationLinkSet(targets, &__ctx);
    }
    
private:

    void addAllWellAnnotationLinkSet(const ::omero::model::WellAnnotationLinksSeq&, const ::Ice::Context*);
    
public:

    void removeWellAnnotationLink(const ::omero::model::WellAnnotationLinkPtr& theTarget)
    {
        removeWellAnnotationLink(theTarget, 0);
    }
    void removeWellAnnotationLink(const ::omero::model::WellAnnotationLinkPtr& theTarget, const ::Ice::Context& __ctx)
    {
        removeWellAnnotationLink(theTarget, &__ctx);
    }
    
private:

    void removeWellAnnotationLink(const ::omero::model::WellAnnotationLinkPtr&, const ::Ice::Context*);
    
public:

    void removeAllWellAnnotationLinkSet(const ::omero::model::WellAnnotationLinksSeq& targets)
    {
        removeAllWellAnnotationLinkSet(targets, 0);
    }
    void removeAllWellAnnotationLinkSet(const ::omero::model::WellAnnotationLinksSeq& targets, const ::Ice::Context& __ctx)
    {
        removeAllWellAnnotationLinkSet(targets, &__ctx);
    }
    
private:

    void removeAllWellAnnotationLinkSet(const ::omero::model::WellAnnotationLinksSeq&, const ::Ice::Context*);
    
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

    void reloadAnnotationLinks(const ::omero::model::WellPtr& toCopy)
    {
        reloadAnnotationLinks(toCopy, 0);
    }
    void reloadAnnotationLinks(const ::omero::model::WellPtr& toCopy, const ::Ice::Context& __ctx)
    {
        reloadAnnotationLinks(toCopy, &__ctx);
    }
    
private:

    void reloadAnnotationLinks(const ::omero::model::WellPtr&, const ::Ice::Context*);
    
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

    ::omero::model::WellAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr& addition)
    {
        return linkAnnotation(addition, 0);
    }
    ::omero::model::WellAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr& addition, const ::Ice::Context& __ctx)
    {
        return linkAnnotation(addition, &__ctx);
    }
    
private:

    ::omero::model::WellAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);
    
public:

    void addWellAnnotationLinkToBoth(const ::omero::model::WellAnnotationLinkPtr& link, bool bothSides)
    {
        addWellAnnotationLinkToBoth(link, bothSides, 0);
    }
    void addWellAnnotationLinkToBoth(const ::omero::model::WellAnnotationLinkPtr& link, bool bothSides, const ::Ice::Context& __ctx)
    {
        addWellAnnotationLinkToBoth(link, bothSides, &__ctx);
    }
    
private:

    void addWellAnnotationLinkToBoth(const ::omero::model::WellAnnotationLinkPtr&, bool, const ::Ice::Context*);
    
public:

    ::omero::model::WellAnnotationLinksSeq findWellAnnotationLink(const ::omero::model::AnnotationPtr& removal)
    {
        return findWellAnnotationLink(removal, 0);
    }
    ::omero::model::WellAnnotationLinksSeq findWellAnnotationLink(const ::omero::model::AnnotationPtr& removal, const ::Ice::Context& __ctx)
    {
        return findWellAnnotationLink(removal, &__ctx);
    }
    
private:

    ::omero::model::WellAnnotationLinksSeq findWellAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);
    
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

    void removeWellAnnotationLinkFromBoth(const ::omero::model::WellAnnotationLinkPtr& link, bool bothSides)
    {
        removeWellAnnotationLinkFromBoth(link, bothSides, 0);
    }
    void removeWellAnnotationLinkFromBoth(const ::omero::model::WellAnnotationLinkPtr& link, bool bothSides, const ::Ice::Context& __ctx)
    {
        removeWellAnnotationLinkFromBoth(link, bothSides, &__ctx);
    }
    
private:

    void removeWellAnnotationLinkFromBoth(const ::omero::model::WellAnnotationLinkPtr&, bool, const ::Ice::Context*);
    
public:

    ::omero::model::WellLinkedAnnotationSeq linkedAnnotationList()
    {
        return linkedAnnotationList(0);
    }
    ::omero::model::WellLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context& __ctx)
    {
        return linkedAnnotationList(&__ctx);
    }
    
private:

    ::omero::model::WellLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<Well> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Well*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Well*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Well> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Well*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Well*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Well> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Well*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Well*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Well> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Well*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Well*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Well> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Well*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Well*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Well> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Well*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Well*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Well> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Well*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Well*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Well> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Well*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Well*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Well> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Well*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Well*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Well> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Well*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Well*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Well> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Well*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Well*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Well> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Well*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Well*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Well> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Well*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Well*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Well> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Well*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Well*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Well> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Well*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Well*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Well> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Well*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Well*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Well> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Well*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Well*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Well> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Well*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Well*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Well> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Well*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Well*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class Well : virtual public ::IceDelegate::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*) = 0;

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getStatus(const ::Ice::Context*) = 0;

    virtual void setStatus(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RIntPtr getColumn(const ::Ice::Context*) = 0;

    virtual void setColumn(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RIntPtr getRow(const ::Ice::Context*) = 0;

    virtual void setRow(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RIntPtr getRed(const ::Ice::Context*) = 0;

    virtual void setRed(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RIntPtr getGreen(const ::Ice::Context*) = 0;

    virtual void setGreen(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RIntPtr getBlue(const ::Ice::Context*) = 0;

    virtual void setBlue(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RIntPtr getAlpha(const ::Ice::Context*) = 0;

    virtual void setAlpha(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual void unloadReagentLinks(const ::Ice::Context*) = 0;

    virtual ::Ice::Int sizeOfReagentLinks(const ::Ice::Context*) = 0;

    virtual ::omero::model::WellReagentLinksSeq copyReagentLinks(const ::Ice::Context*) = 0;

    virtual void addWellReagentLink(const ::omero::model::WellReagentLinkPtr&, const ::Ice::Context*) = 0;

    virtual void addAllWellReagentLinkSet(const ::omero::model::WellReagentLinksSeq&, const ::Ice::Context*) = 0;

    virtual void removeWellReagentLink(const ::omero::model::WellReagentLinkPtr&, const ::Ice::Context*) = 0;

    virtual void removeAllWellReagentLinkSet(const ::omero::model::WellReagentLinksSeq&, const ::Ice::Context*) = 0;

    virtual void clearReagentLinks(const ::Ice::Context*) = 0;

    virtual void reloadReagentLinks(const ::omero::model::WellPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::sys::CountMap getReagentLinksCountPerOwner(const ::Ice::Context*) = 0;

    virtual ::omero::model::WellReagentLinkPtr linkReagent(const ::omero::model::ReagentPtr&, const ::Ice::Context*) = 0;

    virtual void addWellReagentLinkToBoth(const ::omero::model::WellReagentLinkPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::WellReagentLinksSeq findWellReagentLink(const ::omero::model::ReagentPtr&, const ::Ice::Context*) = 0;

    virtual void unlinkReagent(const ::omero::model::ReagentPtr&, const ::Ice::Context*) = 0;

    virtual void removeWellReagentLinkFromBoth(const ::omero::model::WellReagentLinkPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::WellLinkedReagentSeq linkedReagentList(const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getExternalDescription(const ::Ice::Context*) = 0;

    virtual void setExternalDescription(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getExternalIdentifier(const ::Ice::Context*) = 0;

    virtual void setExternalIdentifier(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getType(const ::Ice::Context*) = 0;

    virtual void setType(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual void unloadWellSamples(const ::Ice::Context*) = 0;

    virtual ::Ice::Int sizeOfWellSamples(const ::Ice::Context*) = 0;

    virtual ::omero::model::WellWellSamplesSeq copyWellSamples(const ::Ice::Context*) = 0;

    virtual void addWellSample(const ::omero::model::WellSamplePtr&, const ::Ice::Context*) = 0;

    virtual void addAllWellSampleSet(const ::omero::model::WellWellSamplesSeq&, const ::Ice::Context*) = 0;

    virtual void removeWellSample(const ::omero::model::WellSamplePtr&, const ::Ice::Context*) = 0;

    virtual void removeAllWellSampleSet(const ::omero::model::WellWellSamplesSeq&, const ::Ice::Context*) = 0;

    virtual void clearWellSamples(const ::Ice::Context*) = 0;

    virtual void reloadWellSamples(const ::omero::model::WellPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::WellSamplePtr getWellSample(::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::omero::model::WellSamplePtr setWellSample(::Ice::Int, const ::omero::model::WellSamplePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::WellSamplePtr getPrimaryWellSample(const ::Ice::Context*) = 0;

    virtual ::omero::model::WellSamplePtr setPrimaryWellSample(const ::omero::model::WellSamplePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::PlatePtr getPlate(const ::Ice::Context*) = 0;

    virtual void setPlate(const ::omero::model::PlatePtr&, const ::Ice::Context*) = 0;

    virtual void unloadAnnotationLinks(const ::Ice::Context*) = 0;

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Context*) = 0;

    virtual ::omero::model::WellAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*) = 0;

    virtual void addWellAnnotationLink(const ::omero::model::WellAnnotationLinkPtr&, const ::Ice::Context*) = 0;

    virtual void addAllWellAnnotationLinkSet(const ::omero::model::WellAnnotationLinksSeq&, const ::Ice::Context*) = 0;

    virtual void removeWellAnnotationLink(const ::omero::model::WellAnnotationLinkPtr&, const ::Ice::Context*) = 0;

    virtual void removeAllWellAnnotationLinkSet(const ::omero::model::WellAnnotationLinksSeq&, const ::Ice::Context*) = 0;

    virtual void clearAnnotationLinks(const ::Ice::Context*) = 0;

    virtual void reloadAnnotationLinks(const ::omero::model::WellPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Context*) = 0;

    virtual ::omero::model::WellAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*) = 0;

    virtual void addWellAnnotationLinkToBoth(const ::omero::model::WellAnnotationLinkPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::WellAnnotationLinksSeq findWellAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*) = 0;

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*) = 0;

    virtual void removeWellAnnotationLinkFromBoth(const ::omero::model::WellAnnotationLinkPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::WellLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*) = 0;
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

class Well : virtual public ::IceDelegate::omero::model::Well,
             virtual public ::IceDelegateM::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getStatus(const ::Ice::Context*);

    virtual void setStatus(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getColumn(const ::Ice::Context*);

    virtual void setColumn(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getRow(const ::Ice::Context*);

    virtual void setRow(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getRed(const ::Ice::Context*);

    virtual void setRed(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getGreen(const ::Ice::Context*);

    virtual void setGreen(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getBlue(const ::Ice::Context*);

    virtual void setBlue(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getAlpha(const ::Ice::Context*);

    virtual void setAlpha(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual void unloadReagentLinks(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfReagentLinks(const ::Ice::Context*);

    virtual ::omero::model::WellReagentLinksSeq copyReagentLinks(const ::Ice::Context*);

    virtual void addWellReagentLink(const ::omero::model::WellReagentLinkPtr&, const ::Ice::Context*);

    virtual void addAllWellReagentLinkSet(const ::omero::model::WellReagentLinksSeq&, const ::Ice::Context*);

    virtual void removeWellReagentLink(const ::omero::model::WellReagentLinkPtr&, const ::Ice::Context*);

    virtual void removeAllWellReagentLinkSet(const ::omero::model::WellReagentLinksSeq&, const ::Ice::Context*);

    virtual void clearReagentLinks(const ::Ice::Context*);

    virtual void reloadReagentLinks(const ::omero::model::WellPtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getReagentLinksCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::WellReagentLinkPtr linkReagent(const ::omero::model::ReagentPtr&, const ::Ice::Context*);

    virtual void addWellReagentLinkToBoth(const ::omero::model::WellReagentLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::WellReagentLinksSeq findWellReagentLink(const ::omero::model::ReagentPtr&, const ::Ice::Context*);

    virtual void unlinkReagent(const ::omero::model::ReagentPtr&, const ::Ice::Context*);

    virtual void removeWellReagentLinkFromBoth(const ::omero::model::WellReagentLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::WellLinkedReagentSeq linkedReagentList(const ::Ice::Context*);

    virtual ::omero::RStringPtr getExternalDescription(const ::Ice::Context*);

    virtual void setExternalDescription(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getExternalIdentifier(const ::Ice::Context*);

    virtual void setExternalIdentifier(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getType(const ::Ice::Context*);

    virtual void setType(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual void unloadWellSamples(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfWellSamples(const ::Ice::Context*);

    virtual ::omero::model::WellWellSamplesSeq copyWellSamples(const ::Ice::Context*);

    virtual void addWellSample(const ::omero::model::WellSamplePtr&, const ::Ice::Context*);

    virtual void addAllWellSampleSet(const ::omero::model::WellWellSamplesSeq&, const ::Ice::Context*);

    virtual void removeWellSample(const ::omero::model::WellSamplePtr&, const ::Ice::Context*);

    virtual void removeAllWellSampleSet(const ::omero::model::WellWellSamplesSeq&, const ::Ice::Context*);

    virtual void clearWellSamples(const ::Ice::Context*);

    virtual void reloadWellSamples(const ::omero::model::WellPtr&, const ::Ice::Context*);

    virtual ::omero::model::WellSamplePtr getWellSample(::Ice::Int, const ::Ice::Context*);

    virtual ::omero::model::WellSamplePtr setWellSample(::Ice::Int, const ::omero::model::WellSamplePtr&, const ::Ice::Context*);

    virtual ::omero::model::WellSamplePtr getPrimaryWellSample(const ::Ice::Context*);

    virtual ::omero::model::WellSamplePtr setPrimaryWellSample(const ::omero::model::WellSamplePtr&, const ::Ice::Context*);

    virtual ::omero::model::PlatePtr getPlate(const ::Ice::Context*);

    virtual void setPlate(const ::omero::model::PlatePtr&, const ::Ice::Context*);

    virtual void unloadAnnotationLinks(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Context*);

    virtual ::omero::model::WellAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*);

    virtual void addWellAnnotationLink(const ::omero::model::WellAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void addAllWellAnnotationLinkSet(const ::omero::model::WellAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void removeWellAnnotationLink(const ::omero::model::WellAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void removeAllWellAnnotationLinkSet(const ::omero::model::WellAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void clearAnnotationLinks(const ::Ice::Context*);

    virtual void reloadAnnotationLinks(const ::omero::model::WellPtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::WellAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void addWellAnnotationLinkToBoth(const ::omero::model::WellAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::WellAnnotationLinksSeq findWellAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void removeWellAnnotationLinkFromBoth(const ::omero::model::WellAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::WellLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*);
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

class Well : virtual public ::IceDelegate::omero::model::Well,
             virtual public ::IceDelegateD::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getStatus(const ::Ice::Context*);

    virtual void setStatus(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getColumn(const ::Ice::Context*);

    virtual void setColumn(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getRow(const ::Ice::Context*);

    virtual void setRow(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getRed(const ::Ice::Context*);

    virtual void setRed(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getGreen(const ::Ice::Context*);

    virtual void setGreen(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getBlue(const ::Ice::Context*);

    virtual void setBlue(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getAlpha(const ::Ice::Context*);

    virtual void setAlpha(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual void unloadReagentLinks(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfReagentLinks(const ::Ice::Context*);

    virtual ::omero::model::WellReagentLinksSeq copyReagentLinks(const ::Ice::Context*);

    virtual void addWellReagentLink(const ::omero::model::WellReagentLinkPtr&, const ::Ice::Context*);

    virtual void addAllWellReagentLinkSet(const ::omero::model::WellReagentLinksSeq&, const ::Ice::Context*);

    virtual void removeWellReagentLink(const ::omero::model::WellReagentLinkPtr&, const ::Ice::Context*);

    virtual void removeAllWellReagentLinkSet(const ::omero::model::WellReagentLinksSeq&, const ::Ice::Context*);

    virtual void clearReagentLinks(const ::Ice::Context*);

    virtual void reloadReagentLinks(const ::omero::model::WellPtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getReagentLinksCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::WellReagentLinkPtr linkReagent(const ::omero::model::ReagentPtr&, const ::Ice::Context*);

    virtual void addWellReagentLinkToBoth(const ::omero::model::WellReagentLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::WellReagentLinksSeq findWellReagentLink(const ::omero::model::ReagentPtr&, const ::Ice::Context*);

    virtual void unlinkReagent(const ::omero::model::ReagentPtr&, const ::Ice::Context*);

    virtual void removeWellReagentLinkFromBoth(const ::omero::model::WellReagentLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::WellLinkedReagentSeq linkedReagentList(const ::Ice::Context*);

    virtual ::omero::RStringPtr getExternalDescription(const ::Ice::Context*);

    virtual void setExternalDescription(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getExternalIdentifier(const ::Ice::Context*);

    virtual void setExternalIdentifier(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getType(const ::Ice::Context*);

    virtual void setType(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual void unloadWellSamples(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfWellSamples(const ::Ice::Context*);

    virtual ::omero::model::WellWellSamplesSeq copyWellSamples(const ::Ice::Context*);

    virtual void addWellSample(const ::omero::model::WellSamplePtr&, const ::Ice::Context*);

    virtual void addAllWellSampleSet(const ::omero::model::WellWellSamplesSeq&, const ::Ice::Context*);

    virtual void removeWellSample(const ::omero::model::WellSamplePtr&, const ::Ice::Context*);

    virtual void removeAllWellSampleSet(const ::omero::model::WellWellSamplesSeq&, const ::Ice::Context*);

    virtual void clearWellSamples(const ::Ice::Context*);

    virtual void reloadWellSamples(const ::omero::model::WellPtr&, const ::Ice::Context*);

    virtual ::omero::model::WellSamplePtr getWellSample(::Ice::Int, const ::Ice::Context*);

    virtual ::omero::model::WellSamplePtr setWellSample(::Ice::Int, const ::omero::model::WellSamplePtr&, const ::Ice::Context*);

    virtual ::omero::model::WellSamplePtr getPrimaryWellSample(const ::Ice::Context*);

    virtual ::omero::model::WellSamplePtr setPrimaryWellSample(const ::omero::model::WellSamplePtr&, const ::Ice::Context*);

    virtual ::omero::model::PlatePtr getPlate(const ::Ice::Context*);

    virtual void setPlate(const ::omero::model::PlatePtr&, const ::Ice::Context*);

    virtual void unloadAnnotationLinks(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Context*);

    virtual ::omero::model::WellAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*);

    virtual void addWellAnnotationLink(const ::omero::model::WellAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void addAllWellAnnotationLinkSet(const ::omero::model::WellAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void removeWellAnnotationLink(const ::omero::model::WellAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void removeAllWellAnnotationLinkSet(const ::omero::model::WellAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void clearAnnotationLinks(const ::Ice::Context*);

    virtual void reloadAnnotationLinks(const ::omero::model::WellPtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::WellAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void addWellAnnotationLinkToBoth(const ::omero::model::WellAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::WellAnnotationLinksSeq findWellAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void removeWellAnnotationLinkFromBoth(const ::omero::model::WellAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::WellLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace model
{

class Well : virtual public ::omero::model::IObject
{
public:

    typedef WellPrx ProxyType;
    typedef WellPtr PointerType;
    
    Well() {}
    Well(const ::omero::RLongPtr&, const ::omero::model::DetailsPtr&, bool, const ::omero::RIntPtr&, const ::omero::RStringPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::model::WellReagentLinksSeq&, bool, const ::omero::sys::CountMap&, const ::omero::RStringPtr&, const ::omero::RStringPtr&, const ::omero::RStringPtr&, const ::omero::model::WellWellSamplesSeq&, bool, const ::omero::model::PlatePtr&, const ::omero::model::WellAnnotationLinksSeq&, bool, const ::omero::sys::CountMap&);
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

    virtual ::omero::RStringPtr getStatus(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getStatus(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setStatus(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setStatus(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RIntPtr getColumn(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getColumn(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setColumn(const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setColumn(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RIntPtr getRow(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getRow(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setRow(const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setRow(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RIntPtr getRed(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getRed(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setRed(const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setRed(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RIntPtr getGreen(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getGreen(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setGreen(const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setGreen(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RIntPtr getBlue(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getBlue(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setBlue(const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setBlue(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RIntPtr getAlpha(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getAlpha(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setAlpha(const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setAlpha(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unloadReagentLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unloadReagentLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int sizeOfReagentLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sizeOfReagentLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::WellReagentLinksSeq copyReagentLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copyReagentLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addWellReagentLink(const ::omero::model::WellReagentLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addWellReagentLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAllWellReagentLinkSet(const ::omero::model::WellReagentLinksSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAllWellReagentLinkSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeWellReagentLink(const ::omero::model::WellReagentLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeWellReagentLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeAllWellReagentLinkSet(const ::omero::model::WellReagentLinksSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeAllWellReagentLinkSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void clearReagentLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___clearReagentLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void reloadReagentLinks(const ::omero::model::WellPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___reloadReagentLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::sys::CountMap getReagentLinksCountPerOwner(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getReagentLinksCountPerOwner(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::WellReagentLinkPtr linkReagent(const ::omero::model::ReagentPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkReagent(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addWellReagentLinkToBoth(const ::omero::model::WellReagentLinkPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addWellReagentLinkToBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::WellReagentLinksSeq findWellReagentLink(const ::omero::model::ReagentPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___findWellReagentLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unlinkReagent(const ::omero::model::ReagentPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unlinkReagent(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeWellReagentLinkFromBoth(const ::omero::model::WellReagentLinkPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeWellReagentLinkFromBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::WellLinkedReagentSeq linkedReagentList(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkedReagentList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getExternalDescription(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getExternalDescription(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setExternalDescription(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setExternalDescription(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getExternalIdentifier(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getExternalIdentifier(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setExternalIdentifier(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setExternalIdentifier(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getType(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getType(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setType(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setType(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unloadWellSamples(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unloadWellSamples(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int sizeOfWellSamples(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sizeOfWellSamples(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::WellWellSamplesSeq copyWellSamples(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copyWellSamples(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addWellSample(const ::omero::model::WellSamplePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addWellSample(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAllWellSampleSet(const ::omero::model::WellWellSamplesSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAllWellSampleSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeWellSample(const ::omero::model::WellSamplePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeWellSample(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeAllWellSampleSet(const ::omero::model::WellWellSamplesSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeAllWellSampleSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void clearWellSamples(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___clearWellSamples(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void reloadWellSamples(const ::omero::model::WellPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___reloadWellSamples(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::WellSamplePtr getWellSample(::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getWellSample(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::WellSamplePtr setWellSample(::Ice::Int, const ::omero::model::WellSamplePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setWellSample(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::WellSamplePtr getPrimaryWellSample(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getPrimaryWellSample(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::WellSamplePtr setPrimaryWellSample(const ::omero::model::WellSamplePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setPrimaryWellSample(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::PlatePtr getPlate(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getPlate(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setPlate(const ::omero::model::PlatePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setPlate(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unloadAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unloadAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sizeOfAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::WellAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copyAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addWellAnnotationLink(const ::omero::model::WellAnnotationLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addWellAnnotationLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAllWellAnnotationLinkSet(const ::omero::model::WellAnnotationLinksSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAllWellAnnotationLinkSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeWellAnnotationLink(const ::omero::model::WellAnnotationLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeWellAnnotationLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeAllWellAnnotationLinkSet(const ::omero::model::WellAnnotationLinksSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeAllWellAnnotationLinkSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void clearAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___clearAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void reloadAnnotationLinks(const ::omero::model::WellPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___reloadAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getAnnotationLinksCountPerOwner(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::WellAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkAnnotation(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addWellAnnotationLinkToBoth(const ::omero::model::WellAnnotationLinkPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addWellAnnotationLinkToBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::WellAnnotationLinksSeq findWellAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___findWellAnnotationLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unlinkAnnotation(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeWellAnnotationLinkFromBoth(const ::omero::model::WellAnnotationLinkPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeWellAnnotationLinkFromBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::WellLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkedAnnotationList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

protected:

    ::omero::RIntPtr version;

    ::omero::RStringPtr status;

    ::omero::RIntPtr column;

    ::omero::RIntPtr row;

    ::omero::RIntPtr red;

    ::omero::RIntPtr green;

    ::omero::RIntPtr blue;

    ::omero::RIntPtr alpha;

    ::omero::model::WellReagentLinksSeq reagentLinksSeq;

    bool reagentLinksLoaded;

    ::omero::sys::CountMap reagentLinksCountPerOwner;

    ::omero::RStringPtr externalDescription;

    ::omero::RStringPtr externalIdentifier;

    ::omero::RStringPtr type;

    ::omero::model::WellWellSamplesSeq wellSamplesSeq;

    bool wellSamplesLoaded;

    ::omero::model::PlatePtr plate;

    ::omero::model::WellAnnotationLinksSeq annotationLinksSeq;

    bool annotationLinksLoaded;

    ::omero::sys::CountMap annotationLinksCountPerOwner;
};

}

}

#endif
