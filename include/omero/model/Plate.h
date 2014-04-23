// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `Plate.ice'

#ifndef __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_Plate_h__
#define __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_Plate_h__

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

class ScreenPlateLink;

class Screen;

class Well;

class PlateAcquisition;

class PlateAnnotationLink;

class Annotation;

class Details;

class Plate;

}

}

}

namespace omero
{

namespace model
{

class ScreenPlateLink;
bool operator==(const ScreenPlateLink&, const ScreenPlateLink&);
bool operator<(const ScreenPlateLink&, const ScreenPlateLink&);

class Screen;
bool operator==(const Screen&, const Screen&);
bool operator<(const Screen&, const Screen&);

class Well;
bool operator==(const Well&, const Well&);
bool operator<(const Well&, const Well&);

class PlateAcquisition;
bool operator==(const PlateAcquisition&, const PlateAcquisition&);
bool operator<(const PlateAcquisition&, const PlateAcquisition&);

class PlateAnnotationLink;
bool operator==(const PlateAnnotationLink&, const PlateAnnotationLink&);
bool operator<(const PlateAnnotationLink&, const PlateAnnotationLink&);

class Annotation;
bool operator==(const Annotation&, const Annotation&);
bool operator<(const Annotation&, const Annotation&);

class Details;
bool operator==(const Details&, const Details&);
bool operator<(const Details&, const Details&);

class Plate;
bool operator==(const Plate&, const Plate&);
bool operator<(const Plate&, const Plate&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::model::ScreenPlateLink*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::ScreenPlateLink*);

::Ice::Object* upCast(::omero::model::Screen*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Screen*);

::Ice::Object* upCast(::omero::model::Well*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Well*);

::Ice::Object* upCast(::omero::model::PlateAcquisition*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::PlateAcquisition*);

::Ice::Object* upCast(::omero::model::PlateAnnotationLink*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::PlateAnnotationLink*);

::Ice::Object* upCast(::omero::model::Annotation*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Annotation*);

::Ice::Object* upCast(::omero::model::Details*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Details*);

::Ice::Object* upCast(::omero::model::Plate*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Plate*);

}

namespace omero
{

namespace model
{

typedef ::IceInternal::Handle< ::omero::model::ScreenPlateLink> ScreenPlateLinkPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::ScreenPlateLink> ScreenPlateLinkPrx;

void __read(::IceInternal::BasicStream*, ScreenPlateLinkPrx&);
void __patch__ScreenPlateLinkPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Screen> ScreenPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Screen> ScreenPrx;

void __read(::IceInternal::BasicStream*, ScreenPrx&);
void __patch__ScreenPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Well> WellPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Well> WellPrx;

void __read(::IceInternal::BasicStream*, WellPrx&);
void __patch__WellPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::PlateAcquisition> PlateAcquisitionPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::PlateAcquisition> PlateAcquisitionPrx;

void __read(::IceInternal::BasicStream*, PlateAcquisitionPrx&);
void __patch__PlateAcquisitionPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::PlateAnnotationLink> PlateAnnotationLinkPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::PlateAnnotationLink> PlateAnnotationLinkPrx;

void __read(::IceInternal::BasicStream*, PlateAnnotationLinkPrx&);
void __patch__PlateAnnotationLinkPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Annotation> AnnotationPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Annotation> AnnotationPrx;

void __read(::IceInternal::BasicStream*, AnnotationPrx&);
void __patch__AnnotationPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Details> DetailsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Details> DetailsPrx;

void __read(::IceInternal::BasicStream*, DetailsPrx&);
void __patch__DetailsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Plate> PlatePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Plate> PlatePrx;

void __read(::IceInternal::BasicStream*, PlatePrx&);
void __patch__PlatePtr(void*, ::Ice::ObjectPtr&);

}

}

namespace omero
{

namespace model
{

typedef ::std::vector< ::omero::model::ScreenPlateLinkPtr> PlateScreenLinksSeq;
void __writePlateScreenLinksSeq(::IceInternal::BasicStream*, const ::omero::model::ScreenPlateLinkPtr*, const ::omero::model::ScreenPlateLinkPtr*);
void __readPlateScreenLinksSeq(::IceInternal::BasicStream*, PlateScreenLinksSeq&);

typedef ::std::vector< ::omero::model::ScreenPtr> PlateLinkedScreenSeq;
void __writePlateLinkedScreenSeq(::IceInternal::BasicStream*, const ::omero::model::ScreenPtr*, const ::omero::model::ScreenPtr*);
void __readPlateLinkedScreenSeq(::IceInternal::BasicStream*, PlateLinkedScreenSeq&);

typedef ::std::vector< ::omero::model::WellPtr> PlateWellsSeq;
void __writePlateWellsSeq(::IceInternal::BasicStream*, const ::omero::model::WellPtr*, const ::omero::model::WellPtr*);
void __readPlateWellsSeq(::IceInternal::BasicStream*, PlateWellsSeq&);

typedef ::std::vector< ::omero::model::PlateAcquisitionPtr> PlatePlateAcquisitionsSeq;
void __writePlatePlateAcquisitionsSeq(::IceInternal::BasicStream*, const ::omero::model::PlateAcquisitionPtr*, const ::omero::model::PlateAcquisitionPtr*);
void __readPlatePlateAcquisitionsSeq(::IceInternal::BasicStream*, PlatePlateAcquisitionsSeq&);

typedef ::std::vector< ::omero::model::PlateAnnotationLinkPtr> PlateAnnotationLinksSeq;
void __writePlateAnnotationLinksSeq(::IceInternal::BasicStream*, const ::omero::model::PlateAnnotationLinkPtr*, const ::omero::model::PlateAnnotationLinkPtr*);
void __readPlateAnnotationLinksSeq(::IceInternal::BasicStream*, PlateAnnotationLinksSeq&);

typedef ::std::vector< ::omero::model::AnnotationPtr> PlateLinkedAnnotationSeq;
void __writePlateLinkedAnnotationSeq(::IceInternal::BasicStream*, const ::omero::model::AnnotationPtr*, const ::omero::model::AnnotationPtr*);
void __readPlateLinkedAnnotationSeq(::IceInternal::BasicStream*, PlateLinkedAnnotationSeq&);

}

}

namespace IceProxy
{

namespace omero
{

namespace model
{

class Plate : virtual public ::IceProxy::omero::model::IObject
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

    ::omero::RIntPtr getDefaultSample()
    {
        return getDefaultSample(0);
    }
    ::omero::RIntPtr getDefaultSample(const ::Ice::Context& __ctx)
    {
        return getDefaultSample(&__ctx);
    }
    
private:

    ::omero::RIntPtr getDefaultSample(const ::Ice::Context*);
    
public:

    void setDefaultSample(const ::omero::RIntPtr& theDefaultSample)
    {
        setDefaultSample(theDefaultSample, 0);
    }
    void setDefaultSample(const ::omero::RIntPtr& theDefaultSample, const ::Ice::Context& __ctx)
    {
        setDefaultSample(theDefaultSample, &__ctx);
    }
    
private:

    void setDefaultSample(const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:

    ::omero::RStringPtr getColumnNamingConvention()
    {
        return getColumnNamingConvention(0);
    }
    ::omero::RStringPtr getColumnNamingConvention(const ::Ice::Context& __ctx)
    {
        return getColumnNamingConvention(&__ctx);
    }
    
private:

    ::omero::RStringPtr getColumnNamingConvention(const ::Ice::Context*);
    
public:

    void setColumnNamingConvention(const ::omero::RStringPtr& theColumnNamingConvention)
    {
        setColumnNamingConvention(theColumnNamingConvention, 0);
    }
    void setColumnNamingConvention(const ::omero::RStringPtr& theColumnNamingConvention, const ::Ice::Context& __ctx)
    {
        setColumnNamingConvention(theColumnNamingConvention, &__ctx);
    }
    
private:

    void setColumnNamingConvention(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:

    ::omero::RStringPtr getRowNamingConvention()
    {
        return getRowNamingConvention(0);
    }
    ::omero::RStringPtr getRowNamingConvention(const ::Ice::Context& __ctx)
    {
        return getRowNamingConvention(&__ctx);
    }
    
private:

    ::omero::RStringPtr getRowNamingConvention(const ::Ice::Context*);
    
public:

    void setRowNamingConvention(const ::omero::RStringPtr& theRowNamingConvention)
    {
        setRowNamingConvention(theRowNamingConvention, 0);
    }
    void setRowNamingConvention(const ::omero::RStringPtr& theRowNamingConvention, const ::Ice::Context& __ctx)
    {
        setRowNamingConvention(theRowNamingConvention, &__ctx);
    }
    
private:

    void setRowNamingConvention(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:

    ::omero::RDoublePtr getWellOriginX()
    {
        return getWellOriginX(0);
    }
    ::omero::RDoublePtr getWellOriginX(const ::Ice::Context& __ctx)
    {
        return getWellOriginX(&__ctx);
    }
    
private:

    ::omero::RDoublePtr getWellOriginX(const ::Ice::Context*);
    
public:

    void setWellOriginX(const ::omero::RDoublePtr& theWellOriginX)
    {
        setWellOriginX(theWellOriginX, 0);
    }
    void setWellOriginX(const ::omero::RDoublePtr& theWellOriginX, const ::Ice::Context& __ctx)
    {
        setWellOriginX(theWellOriginX, &__ctx);
    }
    
private:

    void setWellOriginX(const ::omero::RDoublePtr&, const ::Ice::Context*);
    
public:

    ::omero::RDoublePtr getWellOriginY()
    {
        return getWellOriginY(0);
    }
    ::omero::RDoublePtr getWellOriginY(const ::Ice::Context& __ctx)
    {
        return getWellOriginY(&__ctx);
    }
    
private:

    ::omero::RDoublePtr getWellOriginY(const ::Ice::Context*);
    
public:

    void setWellOriginY(const ::omero::RDoublePtr& theWellOriginY)
    {
        setWellOriginY(theWellOriginY, 0);
    }
    void setWellOriginY(const ::omero::RDoublePtr& theWellOriginY, const ::Ice::Context& __ctx)
    {
        setWellOriginY(theWellOriginY, &__ctx);
    }
    
private:

    void setWellOriginY(const ::omero::RDoublePtr&, const ::Ice::Context*);
    
public:

    ::omero::RIntPtr getRows()
    {
        return getRows(0);
    }
    ::omero::RIntPtr getRows(const ::Ice::Context& __ctx)
    {
        return getRows(&__ctx);
    }
    
private:

    ::omero::RIntPtr getRows(const ::Ice::Context*);
    
public:

    void setRows(const ::omero::RIntPtr& theRows)
    {
        setRows(theRows, 0);
    }
    void setRows(const ::omero::RIntPtr& theRows, const ::Ice::Context& __ctx)
    {
        setRows(theRows, &__ctx);
    }
    
private:

    void setRows(const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:

    ::omero::RIntPtr getColumns()
    {
        return getColumns(0);
    }
    ::omero::RIntPtr getColumns(const ::Ice::Context& __ctx)
    {
        return getColumns(&__ctx);
    }
    
private:

    ::omero::RIntPtr getColumns(const ::Ice::Context*);
    
public:

    void setColumns(const ::omero::RIntPtr& theColumns)
    {
        setColumns(theColumns, 0);
    }
    void setColumns(const ::omero::RIntPtr& theColumns, const ::Ice::Context& __ctx)
    {
        setColumns(theColumns, &__ctx);
    }
    
private:

    void setColumns(const ::omero::RIntPtr&, const ::Ice::Context*);
    
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

    void unloadScreenLinks()
    {
        unloadScreenLinks(0);
    }
    void unloadScreenLinks(const ::Ice::Context& __ctx)
    {
        unloadScreenLinks(&__ctx);
    }
    
private:

    void unloadScreenLinks(const ::Ice::Context*);
    
public:

    ::Ice::Int sizeOfScreenLinks()
    {
        return sizeOfScreenLinks(0);
    }
    ::Ice::Int sizeOfScreenLinks(const ::Ice::Context& __ctx)
    {
        return sizeOfScreenLinks(&__ctx);
    }
    
private:

    ::Ice::Int sizeOfScreenLinks(const ::Ice::Context*);
    
public:

    ::omero::model::PlateScreenLinksSeq copyScreenLinks()
    {
        return copyScreenLinks(0);
    }
    ::omero::model::PlateScreenLinksSeq copyScreenLinks(const ::Ice::Context& __ctx)
    {
        return copyScreenLinks(&__ctx);
    }
    
private:

    ::omero::model::PlateScreenLinksSeq copyScreenLinks(const ::Ice::Context*);
    
public:

    void addScreenPlateLink(const ::omero::model::ScreenPlateLinkPtr& target)
    {
        addScreenPlateLink(target, 0);
    }
    void addScreenPlateLink(const ::omero::model::ScreenPlateLinkPtr& target, const ::Ice::Context& __ctx)
    {
        addScreenPlateLink(target, &__ctx);
    }
    
private:

    void addScreenPlateLink(const ::omero::model::ScreenPlateLinkPtr&, const ::Ice::Context*);
    
public:

    void addAllScreenPlateLinkSet(const ::omero::model::PlateScreenLinksSeq& targets)
    {
        addAllScreenPlateLinkSet(targets, 0);
    }
    void addAllScreenPlateLinkSet(const ::omero::model::PlateScreenLinksSeq& targets, const ::Ice::Context& __ctx)
    {
        addAllScreenPlateLinkSet(targets, &__ctx);
    }
    
private:

    void addAllScreenPlateLinkSet(const ::omero::model::PlateScreenLinksSeq&, const ::Ice::Context*);
    
public:

    void removeScreenPlateLink(const ::omero::model::ScreenPlateLinkPtr& theTarget)
    {
        removeScreenPlateLink(theTarget, 0);
    }
    void removeScreenPlateLink(const ::omero::model::ScreenPlateLinkPtr& theTarget, const ::Ice::Context& __ctx)
    {
        removeScreenPlateLink(theTarget, &__ctx);
    }
    
private:

    void removeScreenPlateLink(const ::omero::model::ScreenPlateLinkPtr&, const ::Ice::Context*);
    
public:

    void removeAllScreenPlateLinkSet(const ::omero::model::PlateScreenLinksSeq& targets)
    {
        removeAllScreenPlateLinkSet(targets, 0);
    }
    void removeAllScreenPlateLinkSet(const ::omero::model::PlateScreenLinksSeq& targets, const ::Ice::Context& __ctx)
    {
        removeAllScreenPlateLinkSet(targets, &__ctx);
    }
    
private:

    void removeAllScreenPlateLinkSet(const ::omero::model::PlateScreenLinksSeq&, const ::Ice::Context*);
    
public:

    void clearScreenLinks()
    {
        clearScreenLinks(0);
    }
    void clearScreenLinks(const ::Ice::Context& __ctx)
    {
        clearScreenLinks(&__ctx);
    }
    
private:

    void clearScreenLinks(const ::Ice::Context*);
    
public:

    void reloadScreenLinks(const ::omero::model::PlatePtr& toCopy)
    {
        reloadScreenLinks(toCopy, 0);
    }
    void reloadScreenLinks(const ::omero::model::PlatePtr& toCopy, const ::Ice::Context& __ctx)
    {
        reloadScreenLinks(toCopy, &__ctx);
    }
    
private:

    void reloadScreenLinks(const ::omero::model::PlatePtr&, const ::Ice::Context*);
    
public:

    ::omero::sys::CountMap getScreenLinksCountPerOwner()
    {
        return getScreenLinksCountPerOwner(0);
    }
    ::omero::sys::CountMap getScreenLinksCountPerOwner(const ::Ice::Context& __ctx)
    {
        return getScreenLinksCountPerOwner(&__ctx);
    }
    
private:

    ::omero::sys::CountMap getScreenLinksCountPerOwner(const ::Ice::Context*);
    
public:

    ::omero::model::ScreenPlateLinkPtr linkScreen(const ::omero::model::ScreenPtr& addition)
    {
        return linkScreen(addition, 0);
    }
    ::omero::model::ScreenPlateLinkPtr linkScreen(const ::omero::model::ScreenPtr& addition, const ::Ice::Context& __ctx)
    {
        return linkScreen(addition, &__ctx);
    }
    
private:

    ::omero::model::ScreenPlateLinkPtr linkScreen(const ::omero::model::ScreenPtr&, const ::Ice::Context*);
    
public:

    void addScreenPlateLinkToBoth(const ::omero::model::ScreenPlateLinkPtr& link, bool bothSides)
    {
        addScreenPlateLinkToBoth(link, bothSides, 0);
    }
    void addScreenPlateLinkToBoth(const ::omero::model::ScreenPlateLinkPtr& link, bool bothSides, const ::Ice::Context& __ctx)
    {
        addScreenPlateLinkToBoth(link, bothSides, &__ctx);
    }
    
private:

    void addScreenPlateLinkToBoth(const ::omero::model::ScreenPlateLinkPtr&, bool, const ::Ice::Context*);
    
public:

    ::omero::model::PlateScreenLinksSeq findScreenPlateLink(const ::omero::model::ScreenPtr& removal)
    {
        return findScreenPlateLink(removal, 0);
    }
    ::omero::model::PlateScreenLinksSeq findScreenPlateLink(const ::omero::model::ScreenPtr& removal, const ::Ice::Context& __ctx)
    {
        return findScreenPlateLink(removal, &__ctx);
    }
    
private:

    ::omero::model::PlateScreenLinksSeq findScreenPlateLink(const ::omero::model::ScreenPtr&, const ::Ice::Context*);
    
public:

    void unlinkScreen(const ::omero::model::ScreenPtr& removal)
    {
        unlinkScreen(removal, 0);
    }
    void unlinkScreen(const ::omero::model::ScreenPtr& removal, const ::Ice::Context& __ctx)
    {
        unlinkScreen(removal, &__ctx);
    }
    
private:

    void unlinkScreen(const ::omero::model::ScreenPtr&, const ::Ice::Context*);
    
public:

    void removeScreenPlateLinkFromBoth(const ::omero::model::ScreenPlateLinkPtr& link, bool bothSides)
    {
        removeScreenPlateLinkFromBoth(link, bothSides, 0);
    }
    void removeScreenPlateLinkFromBoth(const ::omero::model::ScreenPlateLinkPtr& link, bool bothSides, const ::Ice::Context& __ctx)
    {
        removeScreenPlateLinkFromBoth(link, bothSides, &__ctx);
    }
    
private:

    void removeScreenPlateLinkFromBoth(const ::omero::model::ScreenPlateLinkPtr&, bool, const ::Ice::Context*);
    
public:

    ::omero::model::PlateLinkedScreenSeq linkedScreenList()
    {
        return linkedScreenList(0);
    }
    ::omero::model::PlateLinkedScreenSeq linkedScreenList(const ::Ice::Context& __ctx)
    {
        return linkedScreenList(&__ctx);
    }
    
private:

    ::omero::model::PlateLinkedScreenSeq linkedScreenList(const ::Ice::Context*);
    
public:

    void unloadWells()
    {
        unloadWells(0);
    }
    void unloadWells(const ::Ice::Context& __ctx)
    {
        unloadWells(&__ctx);
    }
    
private:

    void unloadWells(const ::Ice::Context*);
    
public:

    ::Ice::Int sizeOfWells()
    {
        return sizeOfWells(0);
    }
    ::Ice::Int sizeOfWells(const ::Ice::Context& __ctx)
    {
        return sizeOfWells(&__ctx);
    }
    
private:

    ::Ice::Int sizeOfWells(const ::Ice::Context*);
    
public:

    ::omero::model::PlateWellsSeq copyWells()
    {
        return copyWells(0);
    }
    ::omero::model::PlateWellsSeq copyWells(const ::Ice::Context& __ctx)
    {
        return copyWells(&__ctx);
    }
    
private:

    ::omero::model::PlateWellsSeq copyWells(const ::Ice::Context*);
    
public:

    void addWell(const ::omero::model::WellPtr& target)
    {
        addWell(target, 0);
    }
    void addWell(const ::omero::model::WellPtr& target, const ::Ice::Context& __ctx)
    {
        addWell(target, &__ctx);
    }
    
private:

    void addWell(const ::omero::model::WellPtr&, const ::Ice::Context*);
    
public:

    void addAllWellSet(const ::omero::model::PlateWellsSeq& targets)
    {
        addAllWellSet(targets, 0);
    }
    void addAllWellSet(const ::omero::model::PlateWellsSeq& targets, const ::Ice::Context& __ctx)
    {
        addAllWellSet(targets, &__ctx);
    }
    
private:

    void addAllWellSet(const ::omero::model::PlateWellsSeq&, const ::Ice::Context*);
    
public:

    void removeWell(const ::omero::model::WellPtr& theTarget)
    {
        removeWell(theTarget, 0);
    }
    void removeWell(const ::omero::model::WellPtr& theTarget, const ::Ice::Context& __ctx)
    {
        removeWell(theTarget, &__ctx);
    }
    
private:

    void removeWell(const ::omero::model::WellPtr&, const ::Ice::Context*);
    
public:

    void removeAllWellSet(const ::omero::model::PlateWellsSeq& targets)
    {
        removeAllWellSet(targets, 0);
    }
    void removeAllWellSet(const ::omero::model::PlateWellsSeq& targets, const ::Ice::Context& __ctx)
    {
        removeAllWellSet(targets, &__ctx);
    }
    
private:

    void removeAllWellSet(const ::omero::model::PlateWellsSeq&, const ::Ice::Context*);
    
public:

    void clearWells()
    {
        clearWells(0);
    }
    void clearWells(const ::Ice::Context& __ctx)
    {
        clearWells(&__ctx);
    }
    
private:

    void clearWells(const ::Ice::Context*);
    
public:

    void reloadWells(const ::omero::model::PlatePtr& toCopy)
    {
        reloadWells(toCopy, 0);
    }
    void reloadWells(const ::omero::model::PlatePtr& toCopy, const ::Ice::Context& __ctx)
    {
        reloadWells(toCopy, &__ctx);
    }
    
private:

    void reloadWells(const ::omero::model::PlatePtr&, const ::Ice::Context*);
    
public:

    void unloadPlateAcquisitions()
    {
        unloadPlateAcquisitions(0);
    }
    void unloadPlateAcquisitions(const ::Ice::Context& __ctx)
    {
        unloadPlateAcquisitions(&__ctx);
    }
    
private:

    void unloadPlateAcquisitions(const ::Ice::Context*);
    
public:

    ::Ice::Int sizeOfPlateAcquisitions()
    {
        return sizeOfPlateAcquisitions(0);
    }
    ::Ice::Int sizeOfPlateAcquisitions(const ::Ice::Context& __ctx)
    {
        return sizeOfPlateAcquisitions(&__ctx);
    }
    
private:

    ::Ice::Int sizeOfPlateAcquisitions(const ::Ice::Context*);
    
public:

    ::omero::model::PlatePlateAcquisitionsSeq copyPlateAcquisitions()
    {
        return copyPlateAcquisitions(0);
    }
    ::omero::model::PlatePlateAcquisitionsSeq copyPlateAcquisitions(const ::Ice::Context& __ctx)
    {
        return copyPlateAcquisitions(&__ctx);
    }
    
private:

    ::omero::model::PlatePlateAcquisitionsSeq copyPlateAcquisitions(const ::Ice::Context*);
    
public:

    void addPlateAcquisition(const ::omero::model::PlateAcquisitionPtr& target)
    {
        addPlateAcquisition(target, 0);
    }
    void addPlateAcquisition(const ::omero::model::PlateAcquisitionPtr& target, const ::Ice::Context& __ctx)
    {
        addPlateAcquisition(target, &__ctx);
    }
    
private:

    void addPlateAcquisition(const ::omero::model::PlateAcquisitionPtr&, const ::Ice::Context*);
    
public:

    void addAllPlateAcquisitionSet(const ::omero::model::PlatePlateAcquisitionsSeq& targets)
    {
        addAllPlateAcquisitionSet(targets, 0);
    }
    void addAllPlateAcquisitionSet(const ::omero::model::PlatePlateAcquisitionsSeq& targets, const ::Ice::Context& __ctx)
    {
        addAllPlateAcquisitionSet(targets, &__ctx);
    }
    
private:

    void addAllPlateAcquisitionSet(const ::omero::model::PlatePlateAcquisitionsSeq&, const ::Ice::Context*);
    
public:

    void removePlateAcquisition(const ::omero::model::PlateAcquisitionPtr& theTarget)
    {
        removePlateAcquisition(theTarget, 0);
    }
    void removePlateAcquisition(const ::omero::model::PlateAcquisitionPtr& theTarget, const ::Ice::Context& __ctx)
    {
        removePlateAcquisition(theTarget, &__ctx);
    }
    
private:

    void removePlateAcquisition(const ::omero::model::PlateAcquisitionPtr&, const ::Ice::Context*);
    
public:

    void removeAllPlateAcquisitionSet(const ::omero::model::PlatePlateAcquisitionsSeq& targets)
    {
        removeAllPlateAcquisitionSet(targets, 0);
    }
    void removeAllPlateAcquisitionSet(const ::omero::model::PlatePlateAcquisitionsSeq& targets, const ::Ice::Context& __ctx)
    {
        removeAllPlateAcquisitionSet(targets, &__ctx);
    }
    
private:

    void removeAllPlateAcquisitionSet(const ::omero::model::PlatePlateAcquisitionsSeq&, const ::Ice::Context*);
    
public:

    void clearPlateAcquisitions()
    {
        clearPlateAcquisitions(0);
    }
    void clearPlateAcquisitions(const ::Ice::Context& __ctx)
    {
        clearPlateAcquisitions(&__ctx);
    }
    
private:

    void clearPlateAcquisitions(const ::Ice::Context*);
    
public:

    void reloadPlateAcquisitions(const ::omero::model::PlatePtr& toCopy)
    {
        reloadPlateAcquisitions(toCopy, 0);
    }
    void reloadPlateAcquisitions(const ::omero::model::PlatePtr& toCopy, const ::Ice::Context& __ctx)
    {
        reloadPlateAcquisitions(toCopy, &__ctx);
    }
    
private:

    void reloadPlateAcquisitions(const ::omero::model::PlatePtr&, const ::Ice::Context*);
    
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

    ::omero::model::PlateAnnotationLinksSeq copyAnnotationLinks()
    {
        return copyAnnotationLinks(0);
    }
    ::omero::model::PlateAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context& __ctx)
    {
        return copyAnnotationLinks(&__ctx);
    }
    
private:

    ::omero::model::PlateAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*);
    
public:

    void addPlateAnnotationLink(const ::omero::model::PlateAnnotationLinkPtr& target)
    {
        addPlateAnnotationLink(target, 0);
    }
    void addPlateAnnotationLink(const ::omero::model::PlateAnnotationLinkPtr& target, const ::Ice::Context& __ctx)
    {
        addPlateAnnotationLink(target, &__ctx);
    }
    
private:

    void addPlateAnnotationLink(const ::omero::model::PlateAnnotationLinkPtr&, const ::Ice::Context*);
    
public:

    void addAllPlateAnnotationLinkSet(const ::omero::model::PlateAnnotationLinksSeq& targets)
    {
        addAllPlateAnnotationLinkSet(targets, 0);
    }
    void addAllPlateAnnotationLinkSet(const ::omero::model::PlateAnnotationLinksSeq& targets, const ::Ice::Context& __ctx)
    {
        addAllPlateAnnotationLinkSet(targets, &__ctx);
    }
    
private:

    void addAllPlateAnnotationLinkSet(const ::omero::model::PlateAnnotationLinksSeq&, const ::Ice::Context*);
    
public:

    void removePlateAnnotationLink(const ::omero::model::PlateAnnotationLinkPtr& theTarget)
    {
        removePlateAnnotationLink(theTarget, 0);
    }
    void removePlateAnnotationLink(const ::omero::model::PlateAnnotationLinkPtr& theTarget, const ::Ice::Context& __ctx)
    {
        removePlateAnnotationLink(theTarget, &__ctx);
    }
    
private:

    void removePlateAnnotationLink(const ::omero::model::PlateAnnotationLinkPtr&, const ::Ice::Context*);
    
public:

    void removeAllPlateAnnotationLinkSet(const ::omero::model::PlateAnnotationLinksSeq& targets)
    {
        removeAllPlateAnnotationLinkSet(targets, 0);
    }
    void removeAllPlateAnnotationLinkSet(const ::omero::model::PlateAnnotationLinksSeq& targets, const ::Ice::Context& __ctx)
    {
        removeAllPlateAnnotationLinkSet(targets, &__ctx);
    }
    
private:

    void removeAllPlateAnnotationLinkSet(const ::omero::model::PlateAnnotationLinksSeq&, const ::Ice::Context*);
    
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

    void reloadAnnotationLinks(const ::omero::model::PlatePtr& toCopy)
    {
        reloadAnnotationLinks(toCopy, 0);
    }
    void reloadAnnotationLinks(const ::omero::model::PlatePtr& toCopy, const ::Ice::Context& __ctx)
    {
        reloadAnnotationLinks(toCopy, &__ctx);
    }
    
private:

    void reloadAnnotationLinks(const ::omero::model::PlatePtr&, const ::Ice::Context*);
    
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

    ::omero::model::PlateAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr& addition)
    {
        return linkAnnotation(addition, 0);
    }
    ::omero::model::PlateAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr& addition, const ::Ice::Context& __ctx)
    {
        return linkAnnotation(addition, &__ctx);
    }
    
private:

    ::omero::model::PlateAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);
    
public:

    void addPlateAnnotationLinkToBoth(const ::omero::model::PlateAnnotationLinkPtr& link, bool bothSides)
    {
        addPlateAnnotationLinkToBoth(link, bothSides, 0);
    }
    void addPlateAnnotationLinkToBoth(const ::omero::model::PlateAnnotationLinkPtr& link, bool bothSides, const ::Ice::Context& __ctx)
    {
        addPlateAnnotationLinkToBoth(link, bothSides, &__ctx);
    }
    
private:

    void addPlateAnnotationLinkToBoth(const ::omero::model::PlateAnnotationLinkPtr&, bool, const ::Ice::Context*);
    
public:

    ::omero::model::PlateAnnotationLinksSeq findPlateAnnotationLink(const ::omero::model::AnnotationPtr& removal)
    {
        return findPlateAnnotationLink(removal, 0);
    }
    ::omero::model::PlateAnnotationLinksSeq findPlateAnnotationLink(const ::omero::model::AnnotationPtr& removal, const ::Ice::Context& __ctx)
    {
        return findPlateAnnotationLink(removal, &__ctx);
    }
    
private:

    ::omero::model::PlateAnnotationLinksSeq findPlateAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);
    
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

    void removePlateAnnotationLinkFromBoth(const ::omero::model::PlateAnnotationLinkPtr& link, bool bothSides)
    {
        removePlateAnnotationLinkFromBoth(link, bothSides, 0);
    }
    void removePlateAnnotationLinkFromBoth(const ::omero::model::PlateAnnotationLinkPtr& link, bool bothSides, const ::Ice::Context& __ctx)
    {
        removePlateAnnotationLinkFromBoth(link, bothSides, &__ctx);
    }
    
private:

    void removePlateAnnotationLinkFromBoth(const ::omero::model::PlateAnnotationLinkPtr&, bool, const ::Ice::Context*);
    
public:

    ::omero::model::PlateLinkedAnnotationSeq linkedAnnotationList()
    {
        return linkedAnnotationList(0);
    }
    ::omero::model::PlateLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context& __ctx)
    {
        return linkedAnnotationList(&__ctx);
    }
    
private:

    ::omero::model::PlateLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*);
    
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
    
    ::IceInternal::ProxyHandle<Plate> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Plate*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Plate*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Plate> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Plate*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Plate*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Plate> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Plate*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Plate*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Plate> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Plate*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Plate*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Plate> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Plate*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Plate*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Plate> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Plate*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Plate*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Plate> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Plate*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Plate*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Plate> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Plate*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Plate*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Plate> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Plate*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Plate*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Plate> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Plate*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Plate*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Plate> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Plate*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Plate*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Plate> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Plate*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Plate*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Plate> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Plate*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Plate*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Plate> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Plate*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Plate*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Plate> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Plate*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Plate*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Plate> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Plate*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Plate*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Plate> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Plate*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Plate*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Plate> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Plate*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Plate*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Plate> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Plate*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Plate*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class Plate : virtual public ::IceDelegate::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*) = 0;

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RIntPtr getDefaultSample(const ::Ice::Context*) = 0;

    virtual void setDefaultSample(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getColumnNamingConvention(const ::Ice::Context*) = 0;

    virtual void setColumnNamingConvention(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getRowNamingConvention(const ::Ice::Context*) = 0;

    virtual void setRowNamingConvention(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RDoublePtr getWellOriginX(const ::Ice::Context*) = 0;

    virtual void setWellOriginX(const ::omero::RDoublePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RDoublePtr getWellOriginY(const ::Ice::Context*) = 0;

    virtual void setWellOriginY(const ::omero::RDoublePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RIntPtr getRows(const ::Ice::Context*) = 0;

    virtual void setRows(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RIntPtr getColumns(const ::Ice::Context*) = 0;

    virtual void setColumns(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getStatus(const ::Ice::Context*) = 0;

    virtual void setStatus(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getExternalIdentifier(const ::Ice::Context*) = 0;

    virtual void setExternalIdentifier(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual void unloadScreenLinks(const ::Ice::Context*) = 0;

    virtual ::Ice::Int sizeOfScreenLinks(const ::Ice::Context*) = 0;

    virtual ::omero::model::PlateScreenLinksSeq copyScreenLinks(const ::Ice::Context*) = 0;

    virtual void addScreenPlateLink(const ::omero::model::ScreenPlateLinkPtr&, const ::Ice::Context*) = 0;

    virtual void addAllScreenPlateLinkSet(const ::omero::model::PlateScreenLinksSeq&, const ::Ice::Context*) = 0;

    virtual void removeScreenPlateLink(const ::omero::model::ScreenPlateLinkPtr&, const ::Ice::Context*) = 0;

    virtual void removeAllScreenPlateLinkSet(const ::omero::model::PlateScreenLinksSeq&, const ::Ice::Context*) = 0;

    virtual void clearScreenLinks(const ::Ice::Context*) = 0;

    virtual void reloadScreenLinks(const ::omero::model::PlatePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::sys::CountMap getScreenLinksCountPerOwner(const ::Ice::Context*) = 0;

    virtual ::omero::model::ScreenPlateLinkPtr linkScreen(const ::omero::model::ScreenPtr&, const ::Ice::Context*) = 0;

    virtual void addScreenPlateLinkToBoth(const ::omero::model::ScreenPlateLinkPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::PlateScreenLinksSeq findScreenPlateLink(const ::omero::model::ScreenPtr&, const ::Ice::Context*) = 0;

    virtual void unlinkScreen(const ::omero::model::ScreenPtr&, const ::Ice::Context*) = 0;

    virtual void removeScreenPlateLinkFromBoth(const ::omero::model::ScreenPlateLinkPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::PlateLinkedScreenSeq linkedScreenList(const ::Ice::Context*) = 0;

    virtual void unloadWells(const ::Ice::Context*) = 0;

    virtual ::Ice::Int sizeOfWells(const ::Ice::Context*) = 0;

    virtual ::omero::model::PlateWellsSeq copyWells(const ::Ice::Context*) = 0;

    virtual void addWell(const ::omero::model::WellPtr&, const ::Ice::Context*) = 0;

    virtual void addAllWellSet(const ::omero::model::PlateWellsSeq&, const ::Ice::Context*) = 0;

    virtual void removeWell(const ::omero::model::WellPtr&, const ::Ice::Context*) = 0;

    virtual void removeAllWellSet(const ::omero::model::PlateWellsSeq&, const ::Ice::Context*) = 0;

    virtual void clearWells(const ::Ice::Context*) = 0;

    virtual void reloadWells(const ::omero::model::PlatePtr&, const ::Ice::Context*) = 0;

    virtual void unloadPlateAcquisitions(const ::Ice::Context*) = 0;

    virtual ::Ice::Int sizeOfPlateAcquisitions(const ::Ice::Context*) = 0;

    virtual ::omero::model::PlatePlateAcquisitionsSeq copyPlateAcquisitions(const ::Ice::Context*) = 0;

    virtual void addPlateAcquisition(const ::omero::model::PlateAcquisitionPtr&, const ::Ice::Context*) = 0;

    virtual void addAllPlateAcquisitionSet(const ::omero::model::PlatePlateAcquisitionsSeq&, const ::Ice::Context*) = 0;

    virtual void removePlateAcquisition(const ::omero::model::PlateAcquisitionPtr&, const ::Ice::Context*) = 0;

    virtual void removeAllPlateAcquisitionSet(const ::omero::model::PlatePlateAcquisitionsSeq&, const ::Ice::Context*) = 0;

    virtual void clearPlateAcquisitions(const ::Ice::Context*) = 0;

    virtual void reloadPlateAcquisitions(const ::omero::model::PlatePtr&, const ::Ice::Context*) = 0;

    virtual void unloadAnnotationLinks(const ::Ice::Context*) = 0;

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Context*) = 0;

    virtual ::omero::model::PlateAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*) = 0;

    virtual void addPlateAnnotationLink(const ::omero::model::PlateAnnotationLinkPtr&, const ::Ice::Context*) = 0;

    virtual void addAllPlateAnnotationLinkSet(const ::omero::model::PlateAnnotationLinksSeq&, const ::Ice::Context*) = 0;

    virtual void removePlateAnnotationLink(const ::omero::model::PlateAnnotationLinkPtr&, const ::Ice::Context*) = 0;

    virtual void removeAllPlateAnnotationLinkSet(const ::omero::model::PlateAnnotationLinksSeq&, const ::Ice::Context*) = 0;

    virtual void clearAnnotationLinks(const ::Ice::Context*) = 0;

    virtual void reloadAnnotationLinks(const ::omero::model::PlatePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Context*) = 0;

    virtual ::omero::model::PlateAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*) = 0;

    virtual void addPlateAnnotationLinkToBoth(const ::omero::model::PlateAnnotationLinkPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::PlateAnnotationLinksSeq findPlateAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*) = 0;

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*) = 0;

    virtual void removePlateAnnotationLinkFromBoth(const ::omero::model::PlateAnnotationLinkPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::PlateLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*) = 0;

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

class Plate : virtual public ::IceDelegate::omero::model::Plate,
              virtual public ::IceDelegateM::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getDefaultSample(const ::Ice::Context*);

    virtual void setDefaultSample(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getColumnNamingConvention(const ::Ice::Context*);

    virtual void setColumnNamingConvention(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getRowNamingConvention(const ::Ice::Context*);

    virtual void setRowNamingConvention(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getWellOriginX(const ::Ice::Context*);

    virtual void setWellOriginX(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getWellOriginY(const ::Ice::Context*);

    virtual void setWellOriginY(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getRows(const ::Ice::Context*);

    virtual void setRows(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getColumns(const ::Ice::Context*);

    virtual void setColumns(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getStatus(const ::Ice::Context*);

    virtual void setStatus(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getExternalIdentifier(const ::Ice::Context*);

    virtual void setExternalIdentifier(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual void unloadScreenLinks(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfScreenLinks(const ::Ice::Context*);

    virtual ::omero::model::PlateScreenLinksSeq copyScreenLinks(const ::Ice::Context*);

    virtual void addScreenPlateLink(const ::omero::model::ScreenPlateLinkPtr&, const ::Ice::Context*);

    virtual void addAllScreenPlateLinkSet(const ::omero::model::PlateScreenLinksSeq&, const ::Ice::Context*);

    virtual void removeScreenPlateLink(const ::omero::model::ScreenPlateLinkPtr&, const ::Ice::Context*);

    virtual void removeAllScreenPlateLinkSet(const ::omero::model::PlateScreenLinksSeq&, const ::Ice::Context*);

    virtual void clearScreenLinks(const ::Ice::Context*);

    virtual void reloadScreenLinks(const ::omero::model::PlatePtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getScreenLinksCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::ScreenPlateLinkPtr linkScreen(const ::omero::model::ScreenPtr&, const ::Ice::Context*);

    virtual void addScreenPlateLinkToBoth(const ::omero::model::ScreenPlateLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::PlateScreenLinksSeq findScreenPlateLink(const ::omero::model::ScreenPtr&, const ::Ice::Context*);

    virtual void unlinkScreen(const ::omero::model::ScreenPtr&, const ::Ice::Context*);

    virtual void removeScreenPlateLinkFromBoth(const ::omero::model::ScreenPlateLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::PlateLinkedScreenSeq linkedScreenList(const ::Ice::Context*);

    virtual void unloadWells(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfWells(const ::Ice::Context*);

    virtual ::omero::model::PlateWellsSeq copyWells(const ::Ice::Context*);

    virtual void addWell(const ::omero::model::WellPtr&, const ::Ice::Context*);

    virtual void addAllWellSet(const ::omero::model::PlateWellsSeq&, const ::Ice::Context*);

    virtual void removeWell(const ::omero::model::WellPtr&, const ::Ice::Context*);

    virtual void removeAllWellSet(const ::omero::model::PlateWellsSeq&, const ::Ice::Context*);

    virtual void clearWells(const ::Ice::Context*);

    virtual void reloadWells(const ::omero::model::PlatePtr&, const ::Ice::Context*);

    virtual void unloadPlateAcquisitions(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfPlateAcquisitions(const ::Ice::Context*);

    virtual ::omero::model::PlatePlateAcquisitionsSeq copyPlateAcquisitions(const ::Ice::Context*);

    virtual void addPlateAcquisition(const ::omero::model::PlateAcquisitionPtr&, const ::Ice::Context*);

    virtual void addAllPlateAcquisitionSet(const ::omero::model::PlatePlateAcquisitionsSeq&, const ::Ice::Context*);

    virtual void removePlateAcquisition(const ::omero::model::PlateAcquisitionPtr&, const ::Ice::Context*);

    virtual void removeAllPlateAcquisitionSet(const ::omero::model::PlatePlateAcquisitionsSeq&, const ::Ice::Context*);

    virtual void clearPlateAcquisitions(const ::Ice::Context*);

    virtual void reloadPlateAcquisitions(const ::omero::model::PlatePtr&, const ::Ice::Context*);

    virtual void unloadAnnotationLinks(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Context*);

    virtual ::omero::model::PlateAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*);

    virtual void addPlateAnnotationLink(const ::omero::model::PlateAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void addAllPlateAnnotationLinkSet(const ::omero::model::PlateAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void removePlateAnnotationLink(const ::omero::model::PlateAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void removeAllPlateAnnotationLinkSet(const ::omero::model::PlateAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void clearAnnotationLinks(const ::Ice::Context*);

    virtual void reloadAnnotationLinks(const ::omero::model::PlatePtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::PlateAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void addPlateAnnotationLinkToBoth(const ::omero::model::PlateAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::PlateAnnotationLinksSeq findPlateAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void removePlateAnnotationLinkFromBoth(const ::omero::model::PlateAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::PlateLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*);

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

class Plate : virtual public ::IceDelegate::omero::model::Plate,
              virtual public ::IceDelegateD::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getDefaultSample(const ::Ice::Context*);

    virtual void setDefaultSample(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getColumnNamingConvention(const ::Ice::Context*);

    virtual void setColumnNamingConvention(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getRowNamingConvention(const ::Ice::Context*);

    virtual void setRowNamingConvention(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getWellOriginX(const ::Ice::Context*);

    virtual void setWellOriginX(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getWellOriginY(const ::Ice::Context*);

    virtual void setWellOriginY(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getRows(const ::Ice::Context*);

    virtual void setRows(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getColumns(const ::Ice::Context*);

    virtual void setColumns(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getStatus(const ::Ice::Context*);

    virtual void setStatus(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getExternalIdentifier(const ::Ice::Context*);

    virtual void setExternalIdentifier(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual void unloadScreenLinks(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfScreenLinks(const ::Ice::Context*);

    virtual ::omero::model::PlateScreenLinksSeq copyScreenLinks(const ::Ice::Context*);

    virtual void addScreenPlateLink(const ::omero::model::ScreenPlateLinkPtr&, const ::Ice::Context*);

    virtual void addAllScreenPlateLinkSet(const ::omero::model::PlateScreenLinksSeq&, const ::Ice::Context*);

    virtual void removeScreenPlateLink(const ::omero::model::ScreenPlateLinkPtr&, const ::Ice::Context*);

    virtual void removeAllScreenPlateLinkSet(const ::omero::model::PlateScreenLinksSeq&, const ::Ice::Context*);

    virtual void clearScreenLinks(const ::Ice::Context*);

    virtual void reloadScreenLinks(const ::omero::model::PlatePtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getScreenLinksCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::ScreenPlateLinkPtr linkScreen(const ::omero::model::ScreenPtr&, const ::Ice::Context*);

    virtual void addScreenPlateLinkToBoth(const ::omero::model::ScreenPlateLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::PlateScreenLinksSeq findScreenPlateLink(const ::omero::model::ScreenPtr&, const ::Ice::Context*);

    virtual void unlinkScreen(const ::omero::model::ScreenPtr&, const ::Ice::Context*);

    virtual void removeScreenPlateLinkFromBoth(const ::omero::model::ScreenPlateLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::PlateLinkedScreenSeq linkedScreenList(const ::Ice::Context*);

    virtual void unloadWells(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfWells(const ::Ice::Context*);

    virtual ::omero::model::PlateWellsSeq copyWells(const ::Ice::Context*);

    virtual void addWell(const ::omero::model::WellPtr&, const ::Ice::Context*);

    virtual void addAllWellSet(const ::omero::model::PlateWellsSeq&, const ::Ice::Context*);

    virtual void removeWell(const ::omero::model::WellPtr&, const ::Ice::Context*);

    virtual void removeAllWellSet(const ::omero::model::PlateWellsSeq&, const ::Ice::Context*);

    virtual void clearWells(const ::Ice::Context*);

    virtual void reloadWells(const ::omero::model::PlatePtr&, const ::Ice::Context*);

    virtual void unloadPlateAcquisitions(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfPlateAcquisitions(const ::Ice::Context*);

    virtual ::omero::model::PlatePlateAcquisitionsSeq copyPlateAcquisitions(const ::Ice::Context*);

    virtual void addPlateAcquisition(const ::omero::model::PlateAcquisitionPtr&, const ::Ice::Context*);

    virtual void addAllPlateAcquisitionSet(const ::omero::model::PlatePlateAcquisitionsSeq&, const ::Ice::Context*);

    virtual void removePlateAcquisition(const ::omero::model::PlateAcquisitionPtr&, const ::Ice::Context*);

    virtual void removeAllPlateAcquisitionSet(const ::omero::model::PlatePlateAcquisitionsSeq&, const ::Ice::Context*);

    virtual void clearPlateAcquisitions(const ::Ice::Context*);

    virtual void reloadPlateAcquisitions(const ::omero::model::PlatePtr&, const ::Ice::Context*);

    virtual void unloadAnnotationLinks(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Context*);

    virtual ::omero::model::PlateAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*);

    virtual void addPlateAnnotationLink(const ::omero::model::PlateAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void addAllPlateAnnotationLinkSet(const ::omero::model::PlateAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void removePlateAnnotationLink(const ::omero::model::PlateAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void removeAllPlateAnnotationLinkSet(const ::omero::model::PlateAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void clearAnnotationLinks(const ::Ice::Context*);

    virtual void reloadAnnotationLinks(const ::omero::model::PlatePtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::PlateAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void addPlateAnnotationLinkToBoth(const ::omero::model::PlateAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::PlateAnnotationLinksSeq findPlateAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void removePlateAnnotationLinkFromBoth(const ::omero::model::PlateAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::PlateLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*);

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

class Plate : virtual public ::omero::model::IObject
{
public:

    typedef PlatePrx ProxyType;
    typedef PlatePtr PointerType;
    
    Plate() {}
    Plate(const ::omero::RLongPtr&, const ::omero::model::DetailsPtr&, bool, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RStringPtr&, const ::omero::RStringPtr&, const ::omero::RDoublePtr&, const ::omero::RDoublePtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RStringPtr&, const ::omero::RStringPtr&, const ::omero::model::PlateScreenLinksSeq&, bool, const ::omero::sys::CountMap&, const ::omero::model::PlateWellsSeq&, bool, const ::omero::model::PlatePlateAcquisitionsSeq&, bool, const ::omero::model::PlateAnnotationLinksSeq&, bool, const ::omero::sys::CountMap&, const ::omero::RStringPtr&, const ::omero::RStringPtr&);
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

    virtual ::omero::RIntPtr getDefaultSample(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getDefaultSample(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setDefaultSample(const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setDefaultSample(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getColumnNamingConvention(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getColumnNamingConvention(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setColumnNamingConvention(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setColumnNamingConvention(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getRowNamingConvention(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getRowNamingConvention(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setRowNamingConvention(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setRowNamingConvention(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RDoublePtr getWellOriginX(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getWellOriginX(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setWellOriginX(const ::omero::RDoublePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setWellOriginX(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RDoublePtr getWellOriginY(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getWellOriginY(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setWellOriginY(const ::omero::RDoublePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setWellOriginY(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RIntPtr getRows(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getRows(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setRows(const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setRows(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RIntPtr getColumns(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getColumns(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setColumns(const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setColumns(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getStatus(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getStatus(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setStatus(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setStatus(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getExternalIdentifier(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getExternalIdentifier(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setExternalIdentifier(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setExternalIdentifier(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unloadScreenLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unloadScreenLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int sizeOfScreenLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sizeOfScreenLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::PlateScreenLinksSeq copyScreenLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copyScreenLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addScreenPlateLink(const ::omero::model::ScreenPlateLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addScreenPlateLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAllScreenPlateLinkSet(const ::omero::model::PlateScreenLinksSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAllScreenPlateLinkSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeScreenPlateLink(const ::omero::model::ScreenPlateLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeScreenPlateLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeAllScreenPlateLinkSet(const ::omero::model::PlateScreenLinksSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeAllScreenPlateLinkSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void clearScreenLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___clearScreenLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void reloadScreenLinks(const ::omero::model::PlatePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___reloadScreenLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::sys::CountMap getScreenLinksCountPerOwner(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getScreenLinksCountPerOwner(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ScreenPlateLinkPtr linkScreen(const ::omero::model::ScreenPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkScreen(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addScreenPlateLinkToBoth(const ::omero::model::ScreenPlateLinkPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addScreenPlateLinkToBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::PlateScreenLinksSeq findScreenPlateLink(const ::omero::model::ScreenPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___findScreenPlateLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unlinkScreen(const ::omero::model::ScreenPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unlinkScreen(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeScreenPlateLinkFromBoth(const ::omero::model::ScreenPlateLinkPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeScreenPlateLinkFromBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::PlateLinkedScreenSeq linkedScreenList(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkedScreenList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unloadWells(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unloadWells(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int sizeOfWells(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sizeOfWells(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::PlateWellsSeq copyWells(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copyWells(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addWell(const ::omero::model::WellPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addWell(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAllWellSet(const ::omero::model::PlateWellsSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAllWellSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeWell(const ::omero::model::WellPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeWell(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeAllWellSet(const ::omero::model::PlateWellsSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeAllWellSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void clearWells(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___clearWells(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void reloadWells(const ::omero::model::PlatePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___reloadWells(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unloadPlateAcquisitions(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unloadPlateAcquisitions(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int sizeOfPlateAcquisitions(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sizeOfPlateAcquisitions(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::PlatePlateAcquisitionsSeq copyPlateAcquisitions(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copyPlateAcquisitions(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addPlateAcquisition(const ::omero::model::PlateAcquisitionPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addPlateAcquisition(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAllPlateAcquisitionSet(const ::omero::model::PlatePlateAcquisitionsSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAllPlateAcquisitionSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removePlateAcquisition(const ::omero::model::PlateAcquisitionPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removePlateAcquisition(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeAllPlateAcquisitionSet(const ::omero::model::PlatePlateAcquisitionsSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeAllPlateAcquisitionSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void clearPlateAcquisitions(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___clearPlateAcquisitions(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void reloadPlateAcquisitions(const ::omero::model::PlatePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___reloadPlateAcquisitions(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unloadAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unloadAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sizeOfAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::PlateAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copyAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addPlateAnnotationLink(const ::omero::model::PlateAnnotationLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addPlateAnnotationLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAllPlateAnnotationLinkSet(const ::omero::model::PlateAnnotationLinksSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAllPlateAnnotationLinkSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removePlateAnnotationLink(const ::omero::model::PlateAnnotationLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removePlateAnnotationLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeAllPlateAnnotationLinkSet(const ::omero::model::PlateAnnotationLinksSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeAllPlateAnnotationLinkSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void clearAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___clearAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void reloadAnnotationLinks(const ::omero::model::PlatePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___reloadAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getAnnotationLinksCountPerOwner(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::PlateAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkAnnotation(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addPlateAnnotationLinkToBoth(const ::omero::model::PlateAnnotationLinkPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addPlateAnnotationLinkToBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::PlateAnnotationLinksSeq findPlateAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___findPlateAnnotationLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unlinkAnnotation(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removePlateAnnotationLinkFromBoth(const ::omero::model::PlateAnnotationLinkPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removePlateAnnotationLinkFromBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::PlateLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Current& = ::Ice::Current()) = 0;
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

    ::omero::RIntPtr defaultSample;

    ::omero::RStringPtr columnNamingConvention;

    ::omero::RStringPtr rowNamingConvention;

    ::omero::RDoublePtr wellOriginX;

    ::omero::RDoublePtr wellOriginY;

    ::omero::RIntPtr rows;

    ::omero::RIntPtr columns;

    ::omero::RStringPtr status;

    ::omero::RStringPtr externalIdentifier;

    ::omero::model::PlateScreenLinksSeq screenLinksSeq;

    bool screenLinksLoaded;

    ::omero::sys::CountMap screenLinksCountPerOwner;

    ::omero::model::PlateWellsSeq wellsSeq;

    bool wellsLoaded;

    ::omero::model::PlatePlateAcquisitionsSeq plateAcquisitionsSeq;

    bool plateAcquisitionsLoaded;

    ::omero::model::PlateAnnotationLinksSeq annotationLinksSeq;

    bool annotationLinksLoaded;

    ::omero::sys::CountMap annotationLinksCountPerOwner;

    ::omero::RStringPtr name;

    ::omero::RStringPtr description;
};

}

}

#endif
