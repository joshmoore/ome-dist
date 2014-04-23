// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `Screen.ice'

#ifndef __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_Screen_h__
#define __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_Screen_h__

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

class Plate;

class Reagent;

class ScreenAnnotationLink;

class Annotation;

class Details;

class Screen;

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

class Plate;
bool operator==(const Plate&, const Plate&);
bool operator<(const Plate&, const Plate&);

class Reagent;
bool operator==(const Reagent&, const Reagent&);
bool operator<(const Reagent&, const Reagent&);

class ScreenAnnotationLink;
bool operator==(const ScreenAnnotationLink&, const ScreenAnnotationLink&);
bool operator<(const ScreenAnnotationLink&, const ScreenAnnotationLink&);

class Annotation;
bool operator==(const Annotation&, const Annotation&);
bool operator<(const Annotation&, const Annotation&);

class Details;
bool operator==(const Details&, const Details&);
bool operator<(const Details&, const Details&);

class Screen;
bool operator==(const Screen&, const Screen&);
bool operator<(const Screen&, const Screen&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::model::ScreenPlateLink*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::ScreenPlateLink*);

::Ice::Object* upCast(::omero::model::Plate*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Plate*);

::Ice::Object* upCast(::omero::model::Reagent*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Reagent*);

::Ice::Object* upCast(::omero::model::ScreenAnnotationLink*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::ScreenAnnotationLink*);

::Ice::Object* upCast(::omero::model::Annotation*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Annotation*);

::Ice::Object* upCast(::omero::model::Details*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Details*);

::Ice::Object* upCast(::omero::model::Screen*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Screen*);

}

namespace omero
{

namespace model
{

typedef ::IceInternal::Handle< ::omero::model::ScreenPlateLink> ScreenPlateLinkPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::ScreenPlateLink> ScreenPlateLinkPrx;

void __read(::IceInternal::BasicStream*, ScreenPlateLinkPrx&);
void __patch__ScreenPlateLinkPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Plate> PlatePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Plate> PlatePrx;

void __read(::IceInternal::BasicStream*, PlatePrx&);
void __patch__PlatePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Reagent> ReagentPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Reagent> ReagentPrx;

void __read(::IceInternal::BasicStream*, ReagentPrx&);
void __patch__ReagentPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::ScreenAnnotationLink> ScreenAnnotationLinkPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::ScreenAnnotationLink> ScreenAnnotationLinkPrx;

void __read(::IceInternal::BasicStream*, ScreenAnnotationLinkPrx&);
void __patch__ScreenAnnotationLinkPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Annotation> AnnotationPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Annotation> AnnotationPrx;

void __read(::IceInternal::BasicStream*, AnnotationPrx&);
void __patch__AnnotationPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Details> DetailsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Details> DetailsPrx;

void __read(::IceInternal::BasicStream*, DetailsPrx&);
void __patch__DetailsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Screen> ScreenPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Screen> ScreenPrx;

void __read(::IceInternal::BasicStream*, ScreenPrx&);
void __patch__ScreenPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace omero
{

namespace model
{

typedef ::std::vector< ::omero::model::ScreenPlateLinkPtr> ScreenPlateLinksSeq;
void __writeScreenPlateLinksSeq(::IceInternal::BasicStream*, const ::omero::model::ScreenPlateLinkPtr*, const ::omero::model::ScreenPlateLinkPtr*);
void __readScreenPlateLinksSeq(::IceInternal::BasicStream*, ScreenPlateLinksSeq&);

typedef ::std::vector< ::omero::model::PlatePtr> ScreenLinkedPlateSeq;
void __writeScreenLinkedPlateSeq(::IceInternal::BasicStream*, const ::omero::model::PlatePtr*, const ::omero::model::PlatePtr*);
void __readScreenLinkedPlateSeq(::IceInternal::BasicStream*, ScreenLinkedPlateSeq&);

typedef ::std::vector< ::omero::model::ReagentPtr> ScreenReagentsSeq;
void __writeScreenReagentsSeq(::IceInternal::BasicStream*, const ::omero::model::ReagentPtr*, const ::omero::model::ReagentPtr*);
void __readScreenReagentsSeq(::IceInternal::BasicStream*, ScreenReagentsSeq&);

typedef ::std::vector< ::omero::model::ScreenAnnotationLinkPtr> ScreenAnnotationLinksSeq;
void __writeScreenAnnotationLinksSeq(::IceInternal::BasicStream*, const ::omero::model::ScreenAnnotationLinkPtr*, const ::omero::model::ScreenAnnotationLinkPtr*);
void __readScreenAnnotationLinksSeq(::IceInternal::BasicStream*, ScreenAnnotationLinksSeq&);

typedef ::std::vector< ::omero::model::AnnotationPtr> ScreenLinkedAnnotationSeq;
void __writeScreenLinkedAnnotationSeq(::IceInternal::BasicStream*, const ::omero::model::AnnotationPtr*, const ::omero::model::AnnotationPtr*);
void __readScreenLinkedAnnotationSeq(::IceInternal::BasicStream*, ScreenLinkedAnnotationSeq&);

}

}

namespace IceProxy
{

namespace omero
{

namespace model
{

class Screen : virtual public ::IceProxy::omero::model::IObject
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

    ::omero::RStringPtr getProtocolIdentifier()
    {
        return getProtocolIdentifier(0);
    }
    ::omero::RStringPtr getProtocolIdentifier(const ::Ice::Context& __ctx)
    {
        return getProtocolIdentifier(&__ctx);
    }
    
private:

    ::omero::RStringPtr getProtocolIdentifier(const ::Ice::Context*);
    
public:

    void setProtocolIdentifier(const ::omero::RStringPtr& theProtocolIdentifier)
    {
        setProtocolIdentifier(theProtocolIdentifier, 0);
    }
    void setProtocolIdentifier(const ::omero::RStringPtr& theProtocolIdentifier, const ::Ice::Context& __ctx)
    {
        setProtocolIdentifier(theProtocolIdentifier, &__ctx);
    }
    
private:

    void setProtocolIdentifier(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:

    ::omero::RStringPtr getProtocolDescription()
    {
        return getProtocolDescription(0);
    }
    ::omero::RStringPtr getProtocolDescription(const ::Ice::Context& __ctx)
    {
        return getProtocolDescription(&__ctx);
    }
    
private:

    ::omero::RStringPtr getProtocolDescription(const ::Ice::Context*);
    
public:

    void setProtocolDescription(const ::omero::RStringPtr& theProtocolDescription)
    {
        setProtocolDescription(theProtocolDescription, 0);
    }
    void setProtocolDescription(const ::omero::RStringPtr& theProtocolDescription, const ::Ice::Context& __ctx)
    {
        setProtocolDescription(theProtocolDescription, &__ctx);
    }
    
private:

    void setProtocolDescription(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:

    ::omero::RStringPtr getReagentSetIdentifier()
    {
        return getReagentSetIdentifier(0);
    }
    ::omero::RStringPtr getReagentSetIdentifier(const ::Ice::Context& __ctx)
    {
        return getReagentSetIdentifier(&__ctx);
    }
    
private:

    ::omero::RStringPtr getReagentSetIdentifier(const ::Ice::Context*);
    
public:

    void setReagentSetIdentifier(const ::omero::RStringPtr& theReagentSetIdentifier)
    {
        setReagentSetIdentifier(theReagentSetIdentifier, 0);
    }
    void setReagentSetIdentifier(const ::omero::RStringPtr& theReagentSetIdentifier, const ::Ice::Context& __ctx)
    {
        setReagentSetIdentifier(theReagentSetIdentifier, &__ctx);
    }
    
private:

    void setReagentSetIdentifier(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:

    ::omero::RStringPtr getReagentSetDescription()
    {
        return getReagentSetDescription(0);
    }
    ::omero::RStringPtr getReagentSetDescription(const ::Ice::Context& __ctx)
    {
        return getReagentSetDescription(&__ctx);
    }
    
private:

    ::omero::RStringPtr getReagentSetDescription(const ::Ice::Context*);
    
public:

    void setReagentSetDescription(const ::omero::RStringPtr& theReagentSetDescription)
    {
        setReagentSetDescription(theReagentSetDescription, 0);
    }
    void setReagentSetDescription(const ::omero::RStringPtr& theReagentSetDescription, const ::Ice::Context& __ctx)
    {
        setReagentSetDescription(theReagentSetDescription, &__ctx);
    }
    
private:

    void setReagentSetDescription(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:

    void unloadPlateLinks()
    {
        unloadPlateLinks(0);
    }
    void unloadPlateLinks(const ::Ice::Context& __ctx)
    {
        unloadPlateLinks(&__ctx);
    }
    
private:

    void unloadPlateLinks(const ::Ice::Context*);
    
public:

    ::Ice::Int sizeOfPlateLinks()
    {
        return sizeOfPlateLinks(0);
    }
    ::Ice::Int sizeOfPlateLinks(const ::Ice::Context& __ctx)
    {
        return sizeOfPlateLinks(&__ctx);
    }
    
private:

    ::Ice::Int sizeOfPlateLinks(const ::Ice::Context*);
    
public:

    ::omero::model::ScreenPlateLinksSeq copyPlateLinks()
    {
        return copyPlateLinks(0);
    }
    ::omero::model::ScreenPlateLinksSeq copyPlateLinks(const ::Ice::Context& __ctx)
    {
        return copyPlateLinks(&__ctx);
    }
    
private:

    ::omero::model::ScreenPlateLinksSeq copyPlateLinks(const ::Ice::Context*);
    
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

    void addAllScreenPlateLinkSet(const ::omero::model::ScreenPlateLinksSeq& targets)
    {
        addAllScreenPlateLinkSet(targets, 0);
    }
    void addAllScreenPlateLinkSet(const ::omero::model::ScreenPlateLinksSeq& targets, const ::Ice::Context& __ctx)
    {
        addAllScreenPlateLinkSet(targets, &__ctx);
    }
    
private:

    void addAllScreenPlateLinkSet(const ::omero::model::ScreenPlateLinksSeq&, const ::Ice::Context*);
    
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

    void removeAllScreenPlateLinkSet(const ::omero::model::ScreenPlateLinksSeq& targets)
    {
        removeAllScreenPlateLinkSet(targets, 0);
    }
    void removeAllScreenPlateLinkSet(const ::omero::model::ScreenPlateLinksSeq& targets, const ::Ice::Context& __ctx)
    {
        removeAllScreenPlateLinkSet(targets, &__ctx);
    }
    
private:

    void removeAllScreenPlateLinkSet(const ::omero::model::ScreenPlateLinksSeq&, const ::Ice::Context*);
    
public:

    void clearPlateLinks()
    {
        clearPlateLinks(0);
    }
    void clearPlateLinks(const ::Ice::Context& __ctx)
    {
        clearPlateLinks(&__ctx);
    }
    
private:

    void clearPlateLinks(const ::Ice::Context*);
    
public:

    void reloadPlateLinks(const ::omero::model::ScreenPtr& toCopy)
    {
        reloadPlateLinks(toCopy, 0);
    }
    void reloadPlateLinks(const ::omero::model::ScreenPtr& toCopy, const ::Ice::Context& __ctx)
    {
        reloadPlateLinks(toCopy, &__ctx);
    }
    
private:

    void reloadPlateLinks(const ::omero::model::ScreenPtr&, const ::Ice::Context*);
    
public:

    ::omero::sys::CountMap getPlateLinksCountPerOwner()
    {
        return getPlateLinksCountPerOwner(0);
    }
    ::omero::sys::CountMap getPlateLinksCountPerOwner(const ::Ice::Context& __ctx)
    {
        return getPlateLinksCountPerOwner(&__ctx);
    }
    
private:

    ::omero::sys::CountMap getPlateLinksCountPerOwner(const ::Ice::Context*);
    
public:

    ::omero::model::ScreenPlateLinkPtr linkPlate(const ::omero::model::PlatePtr& addition)
    {
        return linkPlate(addition, 0);
    }
    ::omero::model::ScreenPlateLinkPtr linkPlate(const ::omero::model::PlatePtr& addition, const ::Ice::Context& __ctx)
    {
        return linkPlate(addition, &__ctx);
    }
    
private:

    ::omero::model::ScreenPlateLinkPtr linkPlate(const ::omero::model::PlatePtr&, const ::Ice::Context*);
    
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

    ::omero::model::ScreenPlateLinksSeq findScreenPlateLink(const ::omero::model::PlatePtr& removal)
    {
        return findScreenPlateLink(removal, 0);
    }
    ::omero::model::ScreenPlateLinksSeq findScreenPlateLink(const ::omero::model::PlatePtr& removal, const ::Ice::Context& __ctx)
    {
        return findScreenPlateLink(removal, &__ctx);
    }
    
private:

    ::omero::model::ScreenPlateLinksSeq findScreenPlateLink(const ::omero::model::PlatePtr&, const ::Ice::Context*);
    
public:

    void unlinkPlate(const ::omero::model::PlatePtr& removal)
    {
        unlinkPlate(removal, 0);
    }
    void unlinkPlate(const ::omero::model::PlatePtr& removal, const ::Ice::Context& __ctx)
    {
        unlinkPlate(removal, &__ctx);
    }
    
private:

    void unlinkPlate(const ::omero::model::PlatePtr&, const ::Ice::Context*);
    
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

    ::omero::model::ScreenLinkedPlateSeq linkedPlateList()
    {
        return linkedPlateList(0);
    }
    ::omero::model::ScreenLinkedPlateSeq linkedPlateList(const ::Ice::Context& __ctx)
    {
        return linkedPlateList(&__ctx);
    }
    
private:

    ::omero::model::ScreenLinkedPlateSeq linkedPlateList(const ::Ice::Context*);
    
public:

    void unloadReagents()
    {
        unloadReagents(0);
    }
    void unloadReagents(const ::Ice::Context& __ctx)
    {
        unloadReagents(&__ctx);
    }
    
private:

    void unloadReagents(const ::Ice::Context*);
    
public:

    ::Ice::Int sizeOfReagents()
    {
        return sizeOfReagents(0);
    }
    ::Ice::Int sizeOfReagents(const ::Ice::Context& __ctx)
    {
        return sizeOfReagents(&__ctx);
    }
    
private:

    ::Ice::Int sizeOfReagents(const ::Ice::Context*);
    
public:

    ::omero::model::ScreenReagentsSeq copyReagents()
    {
        return copyReagents(0);
    }
    ::omero::model::ScreenReagentsSeq copyReagents(const ::Ice::Context& __ctx)
    {
        return copyReagents(&__ctx);
    }
    
private:

    ::omero::model::ScreenReagentsSeq copyReagents(const ::Ice::Context*);
    
public:

    void addReagent(const ::omero::model::ReagentPtr& target)
    {
        addReagent(target, 0);
    }
    void addReagent(const ::omero::model::ReagentPtr& target, const ::Ice::Context& __ctx)
    {
        addReagent(target, &__ctx);
    }
    
private:

    void addReagent(const ::omero::model::ReagentPtr&, const ::Ice::Context*);
    
public:

    void addAllReagentSet(const ::omero::model::ScreenReagentsSeq& targets)
    {
        addAllReagentSet(targets, 0);
    }
    void addAllReagentSet(const ::omero::model::ScreenReagentsSeq& targets, const ::Ice::Context& __ctx)
    {
        addAllReagentSet(targets, &__ctx);
    }
    
private:

    void addAllReagentSet(const ::omero::model::ScreenReagentsSeq&, const ::Ice::Context*);
    
public:

    void removeReagent(const ::omero::model::ReagentPtr& theTarget)
    {
        removeReagent(theTarget, 0);
    }
    void removeReagent(const ::omero::model::ReagentPtr& theTarget, const ::Ice::Context& __ctx)
    {
        removeReagent(theTarget, &__ctx);
    }
    
private:

    void removeReagent(const ::omero::model::ReagentPtr&, const ::Ice::Context*);
    
public:

    void removeAllReagentSet(const ::omero::model::ScreenReagentsSeq& targets)
    {
        removeAllReagentSet(targets, 0);
    }
    void removeAllReagentSet(const ::omero::model::ScreenReagentsSeq& targets, const ::Ice::Context& __ctx)
    {
        removeAllReagentSet(targets, &__ctx);
    }
    
private:

    void removeAllReagentSet(const ::omero::model::ScreenReagentsSeq&, const ::Ice::Context*);
    
public:

    void clearReagents()
    {
        clearReagents(0);
    }
    void clearReagents(const ::Ice::Context& __ctx)
    {
        clearReagents(&__ctx);
    }
    
private:

    void clearReagents(const ::Ice::Context*);
    
public:

    void reloadReagents(const ::omero::model::ScreenPtr& toCopy)
    {
        reloadReagents(toCopy, 0);
    }
    void reloadReagents(const ::omero::model::ScreenPtr& toCopy, const ::Ice::Context& __ctx)
    {
        reloadReagents(toCopy, &__ctx);
    }
    
private:

    void reloadReagents(const ::omero::model::ScreenPtr&, const ::Ice::Context*);
    
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

    ::omero::model::ScreenAnnotationLinksSeq copyAnnotationLinks()
    {
        return copyAnnotationLinks(0);
    }
    ::omero::model::ScreenAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context& __ctx)
    {
        return copyAnnotationLinks(&__ctx);
    }
    
private:

    ::omero::model::ScreenAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*);
    
public:

    void addScreenAnnotationLink(const ::omero::model::ScreenAnnotationLinkPtr& target)
    {
        addScreenAnnotationLink(target, 0);
    }
    void addScreenAnnotationLink(const ::omero::model::ScreenAnnotationLinkPtr& target, const ::Ice::Context& __ctx)
    {
        addScreenAnnotationLink(target, &__ctx);
    }
    
private:

    void addScreenAnnotationLink(const ::omero::model::ScreenAnnotationLinkPtr&, const ::Ice::Context*);
    
public:

    void addAllScreenAnnotationLinkSet(const ::omero::model::ScreenAnnotationLinksSeq& targets)
    {
        addAllScreenAnnotationLinkSet(targets, 0);
    }
    void addAllScreenAnnotationLinkSet(const ::omero::model::ScreenAnnotationLinksSeq& targets, const ::Ice::Context& __ctx)
    {
        addAllScreenAnnotationLinkSet(targets, &__ctx);
    }
    
private:

    void addAllScreenAnnotationLinkSet(const ::omero::model::ScreenAnnotationLinksSeq&, const ::Ice::Context*);
    
public:

    void removeScreenAnnotationLink(const ::omero::model::ScreenAnnotationLinkPtr& theTarget)
    {
        removeScreenAnnotationLink(theTarget, 0);
    }
    void removeScreenAnnotationLink(const ::omero::model::ScreenAnnotationLinkPtr& theTarget, const ::Ice::Context& __ctx)
    {
        removeScreenAnnotationLink(theTarget, &__ctx);
    }
    
private:

    void removeScreenAnnotationLink(const ::omero::model::ScreenAnnotationLinkPtr&, const ::Ice::Context*);
    
public:

    void removeAllScreenAnnotationLinkSet(const ::omero::model::ScreenAnnotationLinksSeq& targets)
    {
        removeAllScreenAnnotationLinkSet(targets, 0);
    }
    void removeAllScreenAnnotationLinkSet(const ::omero::model::ScreenAnnotationLinksSeq& targets, const ::Ice::Context& __ctx)
    {
        removeAllScreenAnnotationLinkSet(targets, &__ctx);
    }
    
private:

    void removeAllScreenAnnotationLinkSet(const ::omero::model::ScreenAnnotationLinksSeq&, const ::Ice::Context*);
    
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

    void reloadAnnotationLinks(const ::omero::model::ScreenPtr& toCopy)
    {
        reloadAnnotationLinks(toCopy, 0);
    }
    void reloadAnnotationLinks(const ::omero::model::ScreenPtr& toCopy, const ::Ice::Context& __ctx)
    {
        reloadAnnotationLinks(toCopy, &__ctx);
    }
    
private:

    void reloadAnnotationLinks(const ::omero::model::ScreenPtr&, const ::Ice::Context*);
    
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

    ::omero::model::ScreenAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr& addition)
    {
        return linkAnnotation(addition, 0);
    }
    ::omero::model::ScreenAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr& addition, const ::Ice::Context& __ctx)
    {
        return linkAnnotation(addition, &__ctx);
    }
    
private:

    ::omero::model::ScreenAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);
    
public:

    void addScreenAnnotationLinkToBoth(const ::omero::model::ScreenAnnotationLinkPtr& link, bool bothSides)
    {
        addScreenAnnotationLinkToBoth(link, bothSides, 0);
    }
    void addScreenAnnotationLinkToBoth(const ::omero::model::ScreenAnnotationLinkPtr& link, bool bothSides, const ::Ice::Context& __ctx)
    {
        addScreenAnnotationLinkToBoth(link, bothSides, &__ctx);
    }
    
private:

    void addScreenAnnotationLinkToBoth(const ::omero::model::ScreenAnnotationLinkPtr&, bool, const ::Ice::Context*);
    
public:

    ::omero::model::ScreenAnnotationLinksSeq findScreenAnnotationLink(const ::omero::model::AnnotationPtr& removal)
    {
        return findScreenAnnotationLink(removal, 0);
    }
    ::omero::model::ScreenAnnotationLinksSeq findScreenAnnotationLink(const ::omero::model::AnnotationPtr& removal, const ::Ice::Context& __ctx)
    {
        return findScreenAnnotationLink(removal, &__ctx);
    }
    
private:

    ::omero::model::ScreenAnnotationLinksSeq findScreenAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);
    
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

    void removeScreenAnnotationLinkFromBoth(const ::omero::model::ScreenAnnotationLinkPtr& link, bool bothSides)
    {
        removeScreenAnnotationLinkFromBoth(link, bothSides, 0);
    }
    void removeScreenAnnotationLinkFromBoth(const ::omero::model::ScreenAnnotationLinkPtr& link, bool bothSides, const ::Ice::Context& __ctx)
    {
        removeScreenAnnotationLinkFromBoth(link, bothSides, &__ctx);
    }
    
private:

    void removeScreenAnnotationLinkFromBoth(const ::omero::model::ScreenAnnotationLinkPtr&, bool, const ::Ice::Context*);
    
public:

    ::omero::model::ScreenLinkedAnnotationSeq linkedAnnotationList()
    {
        return linkedAnnotationList(0);
    }
    ::omero::model::ScreenLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context& __ctx)
    {
        return linkedAnnotationList(&__ctx);
    }
    
private:

    ::omero::model::ScreenLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*);
    
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
    
    ::IceInternal::ProxyHandle<Screen> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Screen*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Screen*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Screen> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Screen*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Screen*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Screen> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Screen*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Screen*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Screen> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Screen*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Screen*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Screen> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Screen*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Screen*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Screen> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Screen*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Screen*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Screen> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Screen*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Screen*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Screen> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Screen*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Screen*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Screen> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Screen*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Screen*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Screen> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Screen*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Screen*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Screen> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Screen*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Screen*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Screen> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Screen*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Screen*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Screen> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Screen*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Screen*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Screen> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Screen*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Screen*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Screen> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Screen*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Screen*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Screen> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Screen*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Screen*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Screen> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Screen*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Screen*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Screen> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Screen*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Screen*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Screen> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Screen*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Screen*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class Screen : virtual public ::IceDelegate::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*) = 0;

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getType(const ::Ice::Context*) = 0;

    virtual void setType(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getProtocolIdentifier(const ::Ice::Context*) = 0;

    virtual void setProtocolIdentifier(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getProtocolDescription(const ::Ice::Context*) = 0;

    virtual void setProtocolDescription(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getReagentSetIdentifier(const ::Ice::Context*) = 0;

    virtual void setReagentSetIdentifier(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getReagentSetDescription(const ::Ice::Context*) = 0;

    virtual void setReagentSetDescription(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual void unloadPlateLinks(const ::Ice::Context*) = 0;

    virtual ::Ice::Int sizeOfPlateLinks(const ::Ice::Context*) = 0;

    virtual ::omero::model::ScreenPlateLinksSeq copyPlateLinks(const ::Ice::Context*) = 0;

    virtual void addScreenPlateLink(const ::omero::model::ScreenPlateLinkPtr&, const ::Ice::Context*) = 0;

    virtual void addAllScreenPlateLinkSet(const ::omero::model::ScreenPlateLinksSeq&, const ::Ice::Context*) = 0;

    virtual void removeScreenPlateLink(const ::omero::model::ScreenPlateLinkPtr&, const ::Ice::Context*) = 0;

    virtual void removeAllScreenPlateLinkSet(const ::omero::model::ScreenPlateLinksSeq&, const ::Ice::Context*) = 0;

    virtual void clearPlateLinks(const ::Ice::Context*) = 0;

    virtual void reloadPlateLinks(const ::omero::model::ScreenPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::sys::CountMap getPlateLinksCountPerOwner(const ::Ice::Context*) = 0;

    virtual ::omero::model::ScreenPlateLinkPtr linkPlate(const ::omero::model::PlatePtr&, const ::Ice::Context*) = 0;

    virtual void addScreenPlateLinkToBoth(const ::omero::model::ScreenPlateLinkPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::ScreenPlateLinksSeq findScreenPlateLink(const ::omero::model::PlatePtr&, const ::Ice::Context*) = 0;

    virtual void unlinkPlate(const ::omero::model::PlatePtr&, const ::Ice::Context*) = 0;

    virtual void removeScreenPlateLinkFromBoth(const ::omero::model::ScreenPlateLinkPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::ScreenLinkedPlateSeq linkedPlateList(const ::Ice::Context*) = 0;

    virtual void unloadReagents(const ::Ice::Context*) = 0;

    virtual ::Ice::Int sizeOfReagents(const ::Ice::Context*) = 0;

    virtual ::omero::model::ScreenReagentsSeq copyReagents(const ::Ice::Context*) = 0;

    virtual void addReagent(const ::omero::model::ReagentPtr&, const ::Ice::Context*) = 0;

    virtual void addAllReagentSet(const ::omero::model::ScreenReagentsSeq&, const ::Ice::Context*) = 0;

    virtual void removeReagent(const ::omero::model::ReagentPtr&, const ::Ice::Context*) = 0;

    virtual void removeAllReagentSet(const ::omero::model::ScreenReagentsSeq&, const ::Ice::Context*) = 0;

    virtual void clearReagents(const ::Ice::Context*) = 0;

    virtual void reloadReagents(const ::omero::model::ScreenPtr&, const ::Ice::Context*) = 0;

    virtual void unloadAnnotationLinks(const ::Ice::Context*) = 0;

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Context*) = 0;

    virtual ::omero::model::ScreenAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*) = 0;

    virtual void addScreenAnnotationLink(const ::omero::model::ScreenAnnotationLinkPtr&, const ::Ice::Context*) = 0;

    virtual void addAllScreenAnnotationLinkSet(const ::omero::model::ScreenAnnotationLinksSeq&, const ::Ice::Context*) = 0;

    virtual void removeScreenAnnotationLink(const ::omero::model::ScreenAnnotationLinkPtr&, const ::Ice::Context*) = 0;

    virtual void removeAllScreenAnnotationLinkSet(const ::omero::model::ScreenAnnotationLinksSeq&, const ::Ice::Context*) = 0;

    virtual void clearAnnotationLinks(const ::Ice::Context*) = 0;

    virtual void reloadAnnotationLinks(const ::omero::model::ScreenPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Context*) = 0;

    virtual ::omero::model::ScreenAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*) = 0;

    virtual void addScreenAnnotationLinkToBoth(const ::omero::model::ScreenAnnotationLinkPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::ScreenAnnotationLinksSeq findScreenAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*) = 0;

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*) = 0;

    virtual void removeScreenAnnotationLinkFromBoth(const ::omero::model::ScreenAnnotationLinkPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::ScreenLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*) = 0;

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

class Screen : virtual public ::IceDelegate::omero::model::Screen,
               virtual public ::IceDelegateM::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getType(const ::Ice::Context*);

    virtual void setType(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getProtocolIdentifier(const ::Ice::Context*);

    virtual void setProtocolIdentifier(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getProtocolDescription(const ::Ice::Context*);

    virtual void setProtocolDescription(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getReagentSetIdentifier(const ::Ice::Context*);

    virtual void setReagentSetIdentifier(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getReagentSetDescription(const ::Ice::Context*);

    virtual void setReagentSetDescription(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual void unloadPlateLinks(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfPlateLinks(const ::Ice::Context*);

    virtual ::omero::model::ScreenPlateLinksSeq copyPlateLinks(const ::Ice::Context*);

    virtual void addScreenPlateLink(const ::omero::model::ScreenPlateLinkPtr&, const ::Ice::Context*);

    virtual void addAllScreenPlateLinkSet(const ::omero::model::ScreenPlateLinksSeq&, const ::Ice::Context*);

    virtual void removeScreenPlateLink(const ::omero::model::ScreenPlateLinkPtr&, const ::Ice::Context*);

    virtual void removeAllScreenPlateLinkSet(const ::omero::model::ScreenPlateLinksSeq&, const ::Ice::Context*);

    virtual void clearPlateLinks(const ::Ice::Context*);

    virtual void reloadPlateLinks(const ::omero::model::ScreenPtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getPlateLinksCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::ScreenPlateLinkPtr linkPlate(const ::omero::model::PlatePtr&, const ::Ice::Context*);

    virtual void addScreenPlateLinkToBoth(const ::omero::model::ScreenPlateLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::ScreenPlateLinksSeq findScreenPlateLink(const ::omero::model::PlatePtr&, const ::Ice::Context*);

    virtual void unlinkPlate(const ::omero::model::PlatePtr&, const ::Ice::Context*);

    virtual void removeScreenPlateLinkFromBoth(const ::omero::model::ScreenPlateLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::ScreenLinkedPlateSeq linkedPlateList(const ::Ice::Context*);

    virtual void unloadReagents(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfReagents(const ::Ice::Context*);

    virtual ::omero::model::ScreenReagentsSeq copyReagents(const ::Ice::Context*);

    virtual void addReagent(const ::omero::model::ReagentPtr&, const ::Ice::Context*);

    virtual void addAllReagentSet(const ::omero::model::ScreenReagentsSeq&, const ::Ice::Context*);

    virtual void removeReagent(const ::omero::model::ReagentPtr&, const ::Ice::Context*);

    virtual void removeAllReagentSet(const ::omero::model::ScreenReagentsSeq&, const ::Ice::Context*);

    virtual void clearReagents(const ::Ice::Context*);

    virtual void reloadReagents(const ::omero::model::ScreenPtr&, const ::Ice::Context*);

    virtual void unloadAnnotationLinks(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Context*);

    virtual ::omero::model::ScreenAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*);

    virtual void addScreenAnnotationLink(const ::omero::model::ScreenAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void addAllScreenAnnotationLinkSet(const ::omero::model::ScreenAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void removeScreenAnnotationLink(const ::omero::model::ScreenAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void removeAllScreenAnnotationLinkSet(const ::omero::model::ScreenAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void clearAnnotationLinks(const ::Ice::Context*);

    virtual void reloadAnnotationLinks(const ::omero::model::ScreenPtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::ScreenAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void addScreenAnnotationLinkToBoth(const ::omero::model::ScreenAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::ScreenAnnotationLinksSeq findScreenAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void removeScreenAnnotationLinkFromBoth(const ::omero::model::ScreenAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::ScreenLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*);

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

class Screen : virtual public ::IceDelegate::omero::model::Screen,
               virtual public ::IceDelegateD::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getType(const ::Ice::Context*);

    virtual void setType(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getProtocolIdentifier(const ::Ice::Context*);

    virtual void setProtocolIdentifier(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getProtocolDescription(const ::Ice::Context*);

    virtual void setProtocolDescription(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getReagentSetIdentifier(const ::Ice::Context*);

    virtual void setReagentSetIdentifier(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getReagentSetDescription(const ::Ice::Context*);

    virtual void setReagentSetDescription(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual void unloadPlateLinks(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfPlateLinks(const ::Ice::Context*);

    virtual ::omero::model::ScreenPlateLinksSeq copyPlateLinks(const ::Ice::Context*);

    virtual void addScreenPlateLink(const ::omero::model::ScreenPlateLinkPtr&, const ::Ice::Context*);

    virtual void addAllScreenPlateLinkSet(const ::omero::model::ScreenPlateLinksSeq&, const ::Ice::Context*);

    virtual void removeScreenPlateLink(const ::omero::model::ScreenPlateLinkPtr&, const ::Ice::Context*);

    virtual void removeAllScreenPlateLinkSet(const ::omero::model::ScreenPlateLinksSeq&, const ::Ice::Context*);

    virtual void clearPlateLinks(const ::Ice::Context*);

    virtual void reloadPlateLinks(const ::omero::model::ScreenPtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getPlateLinksCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::ScreenPlateLinkPtr linkPlate(const ::omero::model::PlatePtr&, const ::Ice::Context*);

    virtual void addScreenPlateLinkToBoth(const ::omero::model::ScreenPlateLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::ScreenPlateLinksSeq findScreenPlateLink(const ::omero::model::PlatePtr&, const ::Ice::Context*);

    virtual void unlinkPlate(const ::omero::model::PlatePtr&, const ::Ice::Context*);

    virtual void removeScreenPlateLinkFromBoth(const ::omero::model::ScreenPlateLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::ScreenLinkedPlateSeq linkedPlateList(const ::Ice::Context*);

    virtual void unloadReagents(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfReagents(const ::Ice::Context*);

    virtual ::omero::model::ScreenReagentsSeq copyReagents(const ::Ice::Context*);

    virtual void addReagent(const ::omero::model::ReagentPtr&, const ::Ice::Context*);

    virtual void addAllReagentSet(const ::omero::model::ScreenReagentsSeq&, const ::Ice::Context*);

    virtual void removeReagent(const ::omero::model::ReagentPtr&, const ::Ice::Context*);

    virtual void removeAllReagentSet(const ::omero::model::ScreenReagentsSeq&, const ::Ice::Context*);

    virtual void clearReagents(const ::Ice::Context*);

    virtual void reloadReagents(const ::omero::model::ScreenPtr&, const ::Ice::Context*);

    virtual void unloadAnnotationLinks(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Context*);

    virtual ::omero::model::ScreenAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*);

    virtual void addScreenAnnotationLink(const ::omero::model::ScreenAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void addAllScreenAnnotationLinkSet(const ::omero::model::ScreenAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void removeScreenAnnotationLink(const ::omero::model::ScreenAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void removeAllScreenAnnotationLinkSet(const ::omero::model::ScreenAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void clearAnnotationLinks(const ::Ice::Context*);

    virtual void reloadAnnotationLinks(const ::omero::model::ScreenPtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::ScreenAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void addScreenAnnotationLinkToBoth(const ::omero::model::ScreenAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::ScreenAnnotationLinksSeq findScreenAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void removeScreenAnnotationLinkFromBoth(const ::omero::model::ScreenAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::ScreenLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*);

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

class Screen : virtual public ::omero::model::IObject
{
public:

    typedef ScreenPrx ProxyType;
    typedef ScreenPtr PointerType;
    
    Screen() {}
    Screen(const ::omero::RLongPtr&, const ::omero::model::DetailsPtr&, bool, const ::omero::RIntPtr&, const ::omero::RStringPtr&, const ::omero::RStringPtr&, const ::omero::RStringPtr&, const ::omero::RStringPtr&, const ::omero::RStringPtr&, const ::omero::model::ScreenPlateLinksSeq&, bool, const ::omero::sys::CountMap&, const ::omero::model::ScreenReagentsSeq&, bool, const ::omero::model::ScreenAnnotationLinksSeq&, bool, const ::omero::sys::CountMap&, const ::omero::RStringPtr&, const ::omero::RStringPtr&);
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

    virtual ::omero::RStringPtr getType(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getType(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setType(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setType(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getProtocolIdentifier(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getProtocolIdentifier(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setProtocolIdentifier(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setProtocolIdentifier(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getProtocolDescription(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getProtocolDescription(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setProtocolDescription(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setProtocolDescription(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getReagentSetIdentifier(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getReagentSetIdentifier(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setReagentSetIdentifier(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setReagentSetIdentifier(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getReagentSetDescription(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getReagentSetDescription(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setReagentSetDescription(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setReagentSetDescription(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unloadPlateLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unloadPlateLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int sizeOfPlateLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sizeOfPlateLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ScreenPlateLinksSeq copyPlateLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copyPlateLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addScreenPlateLink(const ::omero::model::ScreenPlateLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addScreenPlateLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAllScreenPlateLinkSet(const ::omero::model::ScreenPlateLinksSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAllScreenPlateLinkSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeScreenPlateLink(const ::omero::model::ScreenPlateLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeScreenPlateLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeAllScreenPlateLinkSet(const ::omero::model::ScreenPlateLinksSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeAllScreenPlateLinkSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void clearPlateLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___clearPlateLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void reloadPlateLinks(const ::omero::model::ScreenPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___reloadPlateLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::sys::CountMap getPlateLinksCountPerOwner(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getPlateLinksCountPerOwner(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ScreenPlateLinkPtr linkPlate(const ::omero::model::PlatePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkPlate(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addScreenPlateLinkToBoth(const ::omero::model::ScreenPlateLinkPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addScreenPlateLinkToBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ScreenPlateLinksSeq findScreenPlateLink(const ::omero::model::PlatePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___findScreenPlateLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unlinkPlate(const ::omero::model::PlatePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unlinkPlate(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeScreenPlateLinkFromBoth(const ::omero::model::ScreenPlateLinkPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeScreenPlateLinkFromBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ScreenLinkedPlateSeq linkedPlateList(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkedPlateList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unloadReagents(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unloadReagents(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int sizeOfReagents(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sizeOfReagents(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ScreenReagentsSeq copyReagents(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copyReagents(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addReagent(const ::omero::model::ReagentPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addReagent(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAllReagentSet(const ::omero::model::ScreenReagentsSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAllReagentSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeReagent(const ::omero::model::ReagentPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeReagent(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeAllReagentSet(const ::omero::model::ScreenReagentsSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeAllReagentSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void clearReagents(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___clearReagents(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void reloadReagents(const ::omero::model::ScreenPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___reloadReagents(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unloadAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unloadAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sizeOfAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ScreenAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copyAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addScreenAnnotationLink(const ::omero::model::ScreenAnnotationLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addScreenAnnotationLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAllScreenAnnotationLinkSet(const ::omero::model::ScreenAnnotationLinksSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAllScreenAnnotationLinkSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeScreenAnnotationLink(const ::omero::model::ScreenAnnotationLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeScreenAnnotationLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeAllScreenAnnotationLinkSet(const ::omero::model::ScreenAnnotationLinksSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeAllScreenAnnotationLinkSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void clearAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___clearAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void reloadAnnotationLinks(const ::omero::model::ScreenPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___reloadAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getAnnotationLinksCountPerOwner(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ScreenAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkAnnotation(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addScreenAnnotationLinkToBoth(const ::omero::model::ScreenAnnotationLinkPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addScreenAnnotationLinkToBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ScreenAnnotationLinksSeq findScreenAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___findScreenAnnotationLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unlinkAnnotation(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeScreenAnnotationLinkFromBoth(const ::omero::model::ScreenAnnotationLinkPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeScreenAnnotationLinkFromBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ScreenLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Current& = ::Ice::Current()) = 0;
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

    ::omero::RStringPtr type;

    ::omero::RStringPtr protocolIdentifier;

    ::omero::RStringPtr protocolDescription;

    ::omero::RStringPtr reagentSetIdentifier;

    ::omero::RStringPtr reagentSetDescription;

    ::omero::model::ScreenPlateLinksSeq plateLinksSeq;

    bool plateLinksLoaded;

    ::omero::sys::CountMap plateLinksCountPerOwner;

    ::omero::model::ScreenReagentsSeq reagentsSeq;

    bool reagentsLoaded;

    ::omero::model::ScreenAnnotationLinksSeq annotationLinksSeq;

    bool annotationLinksLoaded;

    ::omero::sys::CountMap annotationLinksCountPerOwner;

    ::omero::RStringPtr name;

    ::omero::RStringPtr description;
};

}

}

#endif
