// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `Reagent.ice'

#ifndef __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_Reagent_h__
#define __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_Reagent_h__

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

class Screen;

class WellReagentLink;

class Well;

class ReagentAnnotationLink;

class Annotation;

class Details;

class Reagent;

}

}

}

namespace omero
{

namespace model
{

class Screen;
bool operator==(const Screen&, const Screen&);
bool operator<(const Screen&, const Screen&);

class WellReagentLink;
bool operator==(const WellReagentLink&, const WellReagentLink&);
bool operator<(const WellReagentLink&, const WellReagentLink&);

class Well;
bool operator==(const Well&, const Well&);
bool operator<(const Well&, const Well&);

class ReagentAnnotationLink;
bool operator==(const ReagentAnnotationLink&, const ReagentAnnotationLink&);
bool operator<(const ReagentAnnotationLink&, const ReagentAnnotationLink&);

class Annotation;
bool operator==(const Annotation&, const Annotation&);
bool operator<(const Annotation&, const Annotation&);

class Details;
bool operator==(const Details&, const Details&);
bool operator<(const Details&, const Details&);

class Reagent;
bool operator==(const Reagent&, const Reagent&);
bool operator<(const Reagent&, const Reagent&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::model::Screen*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Screen*);

::Ice::Object* upCast(::omero::model::WellReagentLink*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::WellReagentLink*);

::Ice::Object* upCast(::omero::model::Well*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Well*);

::Ice::Object* upCast(::omero::model::ReagentAnnotationLink*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::ReagentAnnotationLink*);

::Ice::Object* upCast(::omero::model::Annotation*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Annotation*);

::Ice::Object* upCast(::omero::model::Details*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Details*);

::Ice::Object* upCast(::omero::model::Reagent*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Reagent*);

}

namespace omero
{

namespace model
{

typedef ::IceInternal::Handle< ::omero::model::Screen> ScreenPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Screen> ScreenPrx;

void __read(::IceInternal::BasicStream*, ScreenPrx&);
void __patch__ScreenPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::WellReagentLink> WellReagentLinkPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::WellReagentLink> WellReagentLinkPrx;

void __read(::IceInternal::BasicStream*, WellReagentLinkPrx&);
void __patch__WellReagentLinkPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Well> WellPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Well> WellPrx;

void __read(::IceInternal::BasicStream*, WellPrx&);
void __patch__WellPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::ReagentAnnotationLink> ReagentAnnotationLinkPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::ReagentAnnotationLink> ReagentAnnotationLinkPrx;

void __read(::IceInternal::BasicStream*, ReagentAnnotationLinkPrx&);
void __patch__ReagentAnnotationLinkPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Annotation> AnnotationPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Annotation> AnnotationPrx;

void __read(::IceInternal::BasicStream*, AnnotationPrx&);
void __patch__AnnotationPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Details> DetailsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Details> DetailsPrx;

void __read(::IceInternal::BasicStream*, DetailsPrx&);
void __patch__DetailsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Reagent> ReagentPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Reagent> ReagentPrx;

void __read(::IceInternal::BasicStream*, ReagentPrx&);
void __patch__ReagentPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace omero
{

namespace model
{

typedef ::std::vector< ::omero::model::WellReagentLinkPtr> ReagentWellLinksSeq;
void __writeReagentWellLinksSeq(::IceInternal::BasicStream*, const ::omero::model::WellReagentLinkPtr*, const ::omero::model::WellReagentLinkPtr*);
void __readReagentWellLinksSeq(::IceInternal::BasicStream*, ReagentWellLinksSeq&);

typedef ::std::vector< ::omero::model::WellPtr> ReagentLinkedWellSeq;
void __writeReagentLinkedWellSeq(::IceInternal::BasicStream*, const ::omero::model::WellPtr*, const ::omero::model::WellPtr*);
void __readReagentLinkedWellSeq(::IceInternal::BasicStream*, ReagentLinkedWellSeq&);

typedef ::std::vector< ::omero::model::ReagentAnnotationLinkPtr> ReagentAnnotationLinksSeq;
void __writeReagentAnnotationLinksSeq(::IceInternal::BasicStream*, const ::omero::model::ReagentAnnotationLinkPtr*, const ::omero::model::ReagentAnnotationLinkPtr*);
void __readReagentAnnotationLinksSeq(::IceInternal::BasicStream*, ReagentAnnotationLinksSeq&);

typedef ::std::vector< ::omero::model::AnnotationPtr> ReagentLinkedAnnotationSeq;
void __writeReagentLinkedAnnotationSeq(::IceInternal::BasicStream*, const ::omero::model::AnnotationPtr*, const ::omero::model::AnnotationPtr*);
void __readReagentLinkedAnnotationSeq(::IceInternal::BasicStream*, ReagentLinkedAnnotationSeq&);

}

}

namespace IceProxy
{

namespace omero
{

namespace model
{

class Reagent : virtual public ::IceProxy::omero::model::IObject
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

    ::omero::RStringPtr getReagentIdentifier()
    {
        return getReagentIdentifier(0);
    }
    ::omero::RStringPtr getReagentIdentifier(const ::Ice::Context& __ctx)
    {
        return getReagentIdentifier(&__ctx);
    }
    
private:

    ::omero::RStringPtr getReagentIdentifier(const ::Ice::Context*);
    
public:

    void setReagentIdentifier(const ::omero::RStringPtr& theReagentIdentifier)
    {
        setReagentIdentifier(theReagentIdentifier, 0);
    }
    void setReagentIdentifier(const ::omero::RStringPtr& theReagentIdentifier, const ::Ice::Context& __ctx)
    {
        setReagentIdentifier(theReagentIdentifier, &__ctx);
    }
    
private:

    void setReagentIdentifier(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:

    ::omero::model::ScreenPtr getScreen()
    {
        return getScreen(0);
    }
    ::omero::model::ScreenPtr getScreen(const ::Ice::Context& __ctx)
    {
        return getScreen(&__ctx);
    }
    
private:

    ::omero::model::ScreenPtr getScreen(const ::Ice::Context*);
    
public:

    void setScreen(const ::omero::model::ScreenPtr& theScreen)
    {
        setScreen(theScreen, 0);
    }
    void setScreen(const ::omero::model::ScreenPtr& theScreen, const ::Ice::Context& __ctx)
    {
        setScreen(theScreen, &__ctx);
    }
    
private:

    void setScreen(const ::omero::model::ScreenPtr&, const ::Ice::Context*);
    
public:

    void unloadWellLinks()
    {
        unloadWellLinks(0);
    }
    void unloadWellLinks(const ::Ice::Context& __ctx)
    {
        unloadWellLinks(&__ctx);
    }
    
private:

    void unloadWellLinks(const ::Ice::Context*);
    
public:

    ::Ice::Int sizeOfWellLinks()
    {
        return sizeOfWellLinks(0);
    }
    ::Ice::Int sizeOfWellLinks(const ::Ice::Context& __ctx)
    {
        return sizeOfWellLinks(&__ctx);
    }
    
private:

    ::Ice::Int sizeOfWellLinks(const ::Ice::Context*);
    
public:

    ::omero::model::ReagentWellLinksSeq copyWellLinks()
    {
        return copyWellLinks(0);
    }
    ::omero::model::ReagentWellLinksSeq copyWellLinks(const ::Ice::Context& __ctx)
    {
        return copyWellLinks(&__ctx);
    }
    
private:

    ::omero::model::ReagentWellLinksSeq copyWellLinks(const ::Ice::Context*);
    
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

    void addAllWellReagentLinkSet(const ::omero::model::ReagentWellLinksSeq& targets)
    {
        addAllWellReagentLinkSet(targets, 0);
    }
    void addAllWellReagentLinkSet(const ::omero::model::ReagentWellLinksSeq& targets, const ::Ice::Context& __ctx)
    {
        addAllWellReagentLinkSet(targets, &__ctx);
    }
    
private:

    void addAllWellReagentLinkSet(const ::omero::model::ReagentWellLinksSeq&, const ::Ice::Context*);
    
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

    void removeAllWellReagentLinkSet(const ::omero::model::ReagentWellLinksSeq& targets)
    {
        removeAllWellReagentLinkSet(targets, 0);
    }
    void removeAllWellReagentLinkSet(const ::omero::model::ReagentWellLinksSeq& targets, const ::Ice::Context& __ctx)
    {
        removeAllWellReagentLinkSet(targets, &__ctx);
    }
    
private:

    void removeAllWellReagentLinkSet(const ::omero::model::ReagentWellLinksSeq&, const ::Ice::Context*);
    
public:

    void clearWellLinks()
    {
        clearWellLinks(0);
    }
    void clearWellLinks(const ::Ice::Context& __ctx)
    {
        clearWellLinks(&__ctx);
    }
    
private:

    void clearWellLinks(const ::Ice::Context*);
    
public:

    void reloadWellLinks(const ::omero::model::ReagentPtr& toCopy)
    {
        reloadWellLinks(toCopy, 0);
    }
    void reloadWellLinks(const ::omero::model::ReagentPtr& toCopy, const ::Ice::Context& __ctx)
    {
        reloadWellLinks(toCopy, &__ctx);
    }
    
private:

    void reloadWellLinks(const ::omero::model::ReagentPtr&, const ::Ice::Context*);
    
public:

    ::omero::sys::CountMap getWellLinksCountPerOwner()
    {
        return getWellLinksCountPerOwner(0);
    }
    ::omero::sys::CountMap getWellLinksCountPerOwner(const ::Ice::Context& __ctx)
    {
        return getWellLinksCountPerOwner(&__ctx);
    }
    
private:

    ::omero::sys::CountMap getWellLinksCountPerOwner(const ::Ice::Context*);
    
public:

    ::omero::model::WellReagentLinkPtr linkWell(const ::omero::model::WellPtr& addition)
    {
        return linkWell(addition, 0);
    }
    ::omero::model::WellReagentLinkPtr linkWell(const ::omero::model::WellPtr& addition, const ::Ice::Context& __ctx)
    {
        return linkWell(addition, &__ctx);
    }
    
private:

    ::omero::model::WellReagentLinkPtr linkWell(const ::omero::model::WellPtr&, const ::Ice::Context*);
    
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

    ::omero::model::ReagentWellLinksSeq findWellReagentLink(const ::omero::model::WellPtr& removal)
    {
        return findWellReagentLink(removal, 0);
    }
    ::omero::model::ReagentWellLinksSeq findWellReagentLink(const ::omero::model::WellPtr& removal, const ::Ice::Context& __ctx)
    {
        return findWellReagentLink(removal, &__ctx);
    }
    
private:

    ::omero::model::ReagentWellLinksSeq findWellReagentLink(const ::omero::model::WellPtr&, const ::Ice::Context*);
    
public:

    void unlinkWell(const ::omero::model::WellPtr& removal)
    {
        unlinkWell(removal, 0);
    }
    void unlinkWell(const ::omero::model::WellPtr& removal, const ::Ice::Context& __ctx)
    {
        unlinkWell(removal, &__ctx);
    }
    
private:

    void unlinkWell(const ::omero::model::WellPtr&, const ::Ice::Context*);
    
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

    ::omero::model::ReagentLinkedWellSeq linkedWellList()
    {
        return linkedWellList(0);
    }
    ::omero::model::ReagentLinkedWellSeq linkedWellList(const ::Ice::Context& __ctx)
    {
        return linkedWellList(&__ctx);
    }
    
private:

    ::omero::model::ReagentLinkedWellSeq linkedWellList(const ::Ice::Context*);
    
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

    ::omero::model::ReagentAnnotationLinksSeq copyAnnotationLinks()
    {
        return copyAnnotationLinks(0);
    }
    ::omero::model::ReagentAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context& __ctx)
    {
        return copyAnnotationLinks(&__ctx);
    }
    
private:

    ::omero::model::ReagentAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*);
    
public:

    void addReagentAnnotationLink(const ::omero::model::ReagentAnnotationLinkPtr& target)
    {
        addReagentAnnotationLink(target, 0);
    }
    void addReagentAnnotationLink(const ::omero::model::ReagentAnnotationLinkPtr& target, const ::Ice::Context& __ctx)
    {
        addReagentAnnotationLink(target, &__ctx);
    }
    
private:

    void addReagentAnnotationLink(const ::omero::model::ReagentAnnotationLinkPtr&, const ::Ice::Context*);
    
public:

    void addAllReagentAnnotationLinkSet(const ::omero::model::ReagentAnnotationLinksSeq& targets)
    {
        addAllReagentAnnotationLinkSet(targets, 0);
    }
    void addAllReagentAnnotationLinkSet(const ::omero::model::ReagentAnnotationLinksSeq& targets, const ::Ice::Context& __ctx)
    {
        addAllReagentAnnotationLinkSet(targets, &__ctx);
    }
    
private:

    void addAllReagentAnnotationLinkSet(const ::omero::model::ReagentAnnotationLinksSeq&, const ::Ice::Context*);
    
public:

    void removeReagentAnnotationLink(const ::omero::model::ReagentAnnotationLinkPtr& theTarget)
    {
        removeReagentAnnotationLink(theTarget, 0);
    }
    void removeReagentAnnotationLink(const ::omero::model::ReagentAnnotationLinkPtr& theTarget, const ::Ice::Context& __ctx)
    {
        removeReagentAnnotationLink(theTarget, &__ctx);
    }
    
private:

    void removeReagentAnnotationLink(const ::omero::model::ReagentAnnotationLinkPtr&, const ::Ice::Context*);
    
public:

    void removeAllReagentAnnotationLinkSet(const ::omero::model::ReagentAnnotationLinksSeq& targets)
    {
        removeAllReagentAnnotationLinkSet(targets, 0);
    }
    void removeAllReagentAnnotationLinkSet(const ::omero::model::ReagentAnnotationLinksSeq& targets, const ::Ice::Context& __ctx)
    {
        removeAllReagentAnnotationLinkSet(targets, &__ctx);
    }
    
private:

    void removeAllReagentAnnotationLinkSet(const ::omero::model::ReagentAnnotationLinksSeq&, const ::Ice::Context*);
    
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

    void reloadAnnotationLinks(const ::omero::model::ReagentPtr& toCopy)
    {
        reloadAnnotationLinks(toCopy, 0);
    }
    void reloadAnnotationLinks(const ::omero::model::ReagentPtr& toCopy, const ::Ice::Context& __ctx)
    {
        reloadAnnotationLinks(toCopy, &__ctx);
    }
    
private:

    void reloadAnnotationLinks(const ::omero::model::ReagentPtr&, const ::Ice::Context*);
    
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

    ::omero::model::ReagentAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr& addition)
    {
        return linkAnnotation(addition, 0);
    }
    ::omero::model::ReagentAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr& addition, const ::Ice::Context& __ctx)
    {
        return linkAnnotation(addition, &__ctx);
    }
    
private:

    ::omero::model::ReagentAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);
    
public:

    void addReagentAnnotationLinkToBoth(const ::omero::model::ReagentAnnotationLinkPtr& link, bool bothSides)
    {
        addReagentAnnotationLinkToBoth(link, bothSides, 0);
    }
    void addReagentAnnotationLinkToBoth(const ::omero::model::ReagentAnnotationLinkPtr& link, bool bothSides, const ::Ice::Context& __ctx)
    {
        addReagentAnnotationLinkToBoth(link, bothSides, &__ctx);
    }
    
private:

    void addReagentAnnotationLinkToBoth(const ::omero::model::ReagentAnnotationLinkPtr&, bool, const ::Ice::Context*);
    
public:

    ::omero::model::ReagentAnnotationLinksSeq findReagentAnnotationLink(const ::omero::model::AnnotationPtr& removal)
    {
        return findReagentAnnotationLink(removal, 0);
    }
    ::omero::model::ReagentAnnotationLinksSeq findReagentAnnotationLink(const ::omero::model::AnnotationPtr& removal, const ::Ice::Context& __ctx)
    {
        return findReagentAnnotationLink(removal, &__ctx);
    }
    
private:

    ::omero::model::ReagentAnnotationLinksSeq findReagentAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);
    
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

    void removeReagentAnnotationLinkFromBoth(const ::omero::model::ReagentAnnotationLinkPtr& link, bool bothSides)
    {
        removeReagentAnnotationLinkFromBoth(link, bothSides, 0);
    }
    void removeReagentAnnotationLinkFromBoth(const ::omero::model::ReagentAnnotationLinkPtr& link, bool bothSides, const ::Ice::Context& __ctx)
    {
        removeReagentAnnotationLinkFromBoth(link, bothSides, &__ctx);
    }
    
private:

    void removeReagentAnnotationLinkFromBoth(const ::omero::model::ReagentAnnotationLinkPtr&, bool, const ::Ice::Context*);
    
public:

    ::omero::model::ReagentLinkedAnnotationSeq linkedAnnotationList()
    {
        return linkedAnnotationList(0);
    }
    ::omero::model::ReagentLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context& __ctx)
    {
        return linkedAnnotationList(&__ctx);
    }
    
private:

    ::omero::model::ReagentLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*);
    
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
    
    ::IceInternal::ProxyHandle<Reagent> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Reagent*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Reagent*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Reagent> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Reagent*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Reagent*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Reagent> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Reagent*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Reagent*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Reagent> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Reagent*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Reagent*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Reagent> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Reagent*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Reagent*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Reagent> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Reagent*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Reagent*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Reagent> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Reagent*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Reagent*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Reagent> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Reagent*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Reagent*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Reagent> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Reagent*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Reagent*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Reagent> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Reagent*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Reagent*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Reagent> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Reagent*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Reagent*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Reagent> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Reagent*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Reagent*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Reagent> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Reagent*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Reagent*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Reagent> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Reagent*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Reagent*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Reagent> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Reagent*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Reagent*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Reagent> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Reagent*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Reagent*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Reagent> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Reagent*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Reagent*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Reagent> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Reagent*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Reagent*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Reagent> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Reagent*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Reagent*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class Reagent : virtual public ::IceDelegate::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*) = 0;

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getName(const ::Ice::Context*) = 0;

    virtual void setName(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getReagentIdentifier(const ::Ice::Context*) = 0;

    virtual void setReagentIdentifier(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::ScreenPtr getScreen(const ::Ice::Context*) = 0;

    virtual void setScreen(const ::omero::model::ScreenPtr&, const ::Ice::Context*) = 0;

    virtual void unloadWellLinks(const ::Ice::Context*) = 0;

    virtual ::Ice::Int sizeOfWellLinks(const ::Ice::Context*) = 0;

    virtual ::omero::model::ReagentWellLinksSeq copyWellLinks(const ::Ice::Context*) = 0;

    virtual void addWellReagentLink(const ::omero::model::WellReagentLinkPtr&, const ::Ice::Context*) = 0;

    virtual void addAllWellReagentLinkSet(const ::omero::model::ReagentWellLinksSeq&, const ::Ice::Context*) = 0;

    virtual void removeWellReagentLink(const ::omero::model::WellReagentLinkPtr&, const ::Ice::Context*) = 0;

    virtual void removeAllWellReagentLinkSet(const ::omero::model::ReagentWellLinksSeq&, const ::Ice::Context*) = 0;

    virtual void clearWellLinks(const ::Ice::Context*) = 0;

    virtual void reloadWellLinks(const ::omero::model::ReagentPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::sys::CountMap getWellLinksCountPerOwner(const ::Ice::Context*) = 0;

    virtual ::omero::model::WellReagentLinkPtr linkWell(const ::omero::model::WellPtr&, const ::Ice::Context*) = 0;

    virtual void addWellReagentLinkToBoth(const ::omero::model::WellReagentLinkPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::ReagentWellLinksSeq findWellReagentLink(const ::omero::model::WellPtr&, const ::Ice::Context*) = 0;

    virtual void unlinkWell(const ::omero::model::WellPtr&, const ::Ice::Context*) = 0;

    virtual void removeWellReagentLinkFromBoth(const ::omero::model::WellReagentLinkPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::ReagentLinkedWellSeq linkedWellList(const ::Ice::Context*) = 0;

    virtual void unloadAnnotationLinks(const ::Ice::Context*) = 0;

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Context*) = 0;

    virtual ::omero::model::ReagentAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*) = 0;

    virtual void addReagentAnnotationLink(const ::omero::model::ReagentAnnotationLinkPtr&, const ::Ice::Context*) = 0;

    virtual void addAllReagentAnnotationLinkSet(const ::omero::model::ReagentAnnotationLinksSeq&, const ::Ice::Context*) = 0;

    virtual void removeReagentAnnotationLink(const ::omero::model::ReagentAnnotationLinkPtr&, const ::Ice::Context*) = 0;

    virtual void removeAllReagentAnnotationLinkSet(const ::omero::model::ReagentAnnotationLinksSeq&, const ::Ice::Context*) = 0;

    virtual void clearAnnotationLinks(const ::Ice::Context*) = 0;

    virtual void reloadAnnotationLinks(const ::omero::model::ReagentPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Context*) = 0;

    virtual ::omero::model::ReagentAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*) = 0;

    virtual void addReagentAnnotationLinkToBoth(const ::omero::model::ReagentAnnotationLinkPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::ReagentAnnotationLinksSeq findReagentAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*) = 0;

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*) = 0;

    virtual void removeReagentAnnotationLinkFromBoth(const ::omero::model::ReagentAnnotationLinkPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::ReagentLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*) = 0;

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

class Reagent : virtual public ::IceDelegate::omero::model::Reagent,
                virtual public ::IceDelegateM::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getName(const ::Ice::Context*);

    virtual void setName(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getReagentIdentifier(const ::Ice::Context*);

    virtual void setReagentIdentifier(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::model::ScreenPtr getScreen(const ::Ice::Context*);

    virtual void setScreen(const ::omero::model::ScreenPtr&, const ::Ice::Context*);

    virtual void unloadWellLinks(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfWellLinks(const ::Ice::Context*);

    virtual ::omero::model::ReagentWellLinksSeq copyWellLinks(const ::Ice::Context*);

    virtual void addWellReagentLink(const ::omero::model::WellReagentLinkPtr&, const ::Ice::Context*);

    virtual void addAllWellReagentLinkSet(const ::omero::model::ReagentWellLinksSeq&, const ::Ice::Context*);

    virtual void removeWellReagentLink(const ::omero::model::WellReagentLinkPtr&, const ::Ice::Context*);

    virtual void removeAllWellReagentLinkSet(const ::omero::model::ReagentWellLinksSeq&, const ::Ice::Context*);

    virtual void clearWellLinks(const ::Ice::Context*);

    virtual void reloadWellLinks(const ::omero::model::ReagentPtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getWellLinksCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::WellReagentLinkPtr linkWell(const ::omero::model::WellPtr&, const ::Ice::Context*);

    virtual void addWellReagentLinkToBoth(const ::omero::model::WellReagentLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::ReagentWellLinksSeq findWellReagentLink(const ::omero::model::WellPtr&, const ::Ice::Context*);

    virtual void unlinkWell(const ::omero::model::WellPtr&, const ::Ice::Context*);

    virtual void removeWellReagentLinkFromBoth(const ::omero::model::WellReagentLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::ReagentLinkedWellSeq linkedWellList(const ::Ice::Context*);

    virtual void unloadAnnotationLinks(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Context*);

    virtual ::omero::model::ReagentAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*);

    virtual void addReagentAnnotationLink(const ::omero::model::ReagentAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void addAllReagentAnnotationLinkSet(const ::omero::model::ReagentAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void removeReagentAnnotationLink(const ::omero::model::ReagentAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void removeAllReagentAnnotationLinkSet(const ::omero::model::ReagentAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void clearAnnotationLinks(const ::Ice::Context*);

    virtual void reloadAnnotationLinks(const ::omero::model::ReagentPtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::ReagentAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void addReagentAnnotationLinkToBoth(const ::omero::model::ReagentAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::ReagentAnnotationLinksSeq findReagentAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void removeReagentAnnotationLinkFromBoth(const ::omero::model::ReagentAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::ReagentLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*);

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

class Reagent : virtual public ::IceDelegate::omero::model::Reagent,
                virtual public ::IceDelegateD::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getName(const ::Ice::Context*);

    virtual void setName(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getReagentIdentifier(const ::Ice::Context*);

    virtual void setReagentIdentifier(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::model::ScreenPtr getScreen(const ::Ice::Context*);

    virtual void setScreen(const ::omero::model::ScreenPtr&, const ::Ice::Context*);

    virtual void unloadWellLinks(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfWellLinks(const ::Ice::Context*);

    virtual ::omero::model::ReagentWellLinksSeq copyWellLinks(const ::Ice::Context*);

    virtual void addWellReagentLink(const ::omero::model::WellReagentLinkPtr&, const ::Ice::Context*);

    virtual void addAllWellReagentLinkSet(const ::omero::model::ReagentWellLinksSeq&, const ::Ice::Context*);

    virtual void removeWellReagentLink(const ::omero::model::WellReagentLinkPtr&, const ::Ice::Context*);

    virtual void removeAllWellReagentLinkSet(const ::omero::model::ReagentWellLinksSeq&, const ::Ice::Context*);

    virtual void clearWellLinks(const ::Ice::Context*);

    virtual void reloadWellLinks(const ::omero::model::ReagentPtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getWellLinksCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::WellReagentLinkPtr linkWell(const ::omero::model::WellPtr&, const ::Ice::Context*);

    virtual void addWellReagentLinkToBoth(const ::omero::model::WellReagentLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::ReagentWellLinksSeq findWellReagentLink(const ::omero::model::WellPtr&, const ::Ice::Context*);

    virtual void unlinkWell(const ::omero::model::WellPtr&, const ::Ice::Context*);

    virtual void removeWellReagentLinkFromBoth(const ::omero::model::WellReagentLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::ReagentLinkedWellSeq linkedWellList(const ::Ice::Context*);

    virtual void unloadAnnotationLinks(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Context*);

    virtual ::omero::model::ReagentAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*);

    virtual void addReagentAnnotationLink(const ::omero::model::ReagentAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void addAllReagentAnnotationLinkSet(const ::omero::model::ReagentAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void removeReagentAnnotationLink(const ::omero::model::ReagentAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void removeAllReagentAnnotationLinkSet(const ::omero::model::ReagentAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void clearAnnotationLinks(const ::Ice::Context*);

    virtual void reloadAnnotationLinks(const ::omero::model::ReagentPtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::ReagentAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void addReagentAnnotationLinkToBoth(const ::omero::model::ReagentAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::ReagentAnnotationLinksSeq findReagentAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void removeReagentAnnotationLinkFromBoth(const ::omero::model::ReagentAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::ReagentLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*);

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

class Reagent : virtual public ::omero::model::IObject
{
public:

    typedef ReagentPrx ProxyType;
    typedef ReagentPtr PointerType;
    
    Reagent() {}
    Reagent(const ::omero::RLongPtr&, const ::omero::model::DetailsPtr&, bool, const ::omero::RIntPtr&, const ::omero::RStringPtr&, const ::omero::RStringPtr&, const ::omero::model::ScreenPtr&, const ::omero::model::ReagentWellLinksSeq&, bool, const ::omero::sys::CountMap&, const ::omero::model::ReagentAnnotationLinksSeq&, bool, const ::omero::sys::CountMap&, const ::omero::RStringPtr&);
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

    virtual ::omero::RStringPtr getReagentIdentifier(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getReagentIdentifier(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setReagentIdentifier(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setReagentIdentifier(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ScreenPtr getScreen(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getScreen(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setScreen(const ::omero::model::ScreenPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setScreen(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unloadWellLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unloadWellLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int sizeOfWellLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sizeOfWellLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ReagentWellLinksSeq copyWellLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copyWellLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addWellReagentLink(const ::omero::model::WellReagentLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addWellReagentLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAllWellReagentLinkSet(const ::omero::model::ReagentWellLinksSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAllWellReagentLinkSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeWellReagentLink(const ::omero::model::WellReagentLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeWellReagentLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeAllWellReagentLinkSet(const ::omero::model::ReagentWellLinksSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeAllWellReagentLinkSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void clearWellLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___clearWellLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void reloadWellLinks(const ::omero::model::ReagentPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___reloadWellLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::sys::CountMap getWellLinksCountPerOwner(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getWellLinksCountPerOwner(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::WellReagentLinkPtr linkWell(const ::omero::model::WellPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkWell(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addWellReagentLinkToBoth(const ::omero::model::WellReagentLinkPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addWellReagentLinkToBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ReagentWellLinksSeq findWellReagentLink(const ::omero::model::WellPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___findWellReagentLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unlinkWell(const ::omero::model::WellPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unlinkWell(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeWellReagentLinkFromBoth(const ::omero::model::WellReagentLinkPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeWellReagentLinkFromBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ReagentLinkedWellSeq linkedWellList(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkedWellList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unloadAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unloadAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sizeOfAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ReagentAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copyAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addReagentAnnotationLink(const ::omero::model::ReagentAnnotationLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addReagentAnnotationLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAllReagentAnnotationLinkSet(const ::omero::model::ReagentAnnotationLinksSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAllReagentAnnotationLinkSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeReagentAnnotationLink(const ::omero::model::ReagentAnnotationLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeReagentAnnotationLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeAllReagentAnnotationLinkSet(const ::omero::model::ReagentAnnotationLinksSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeAllReagentAnnotationLinkSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void clearAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___clearAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void reloadAnnotationLinks(const ::omero::model::ReagentPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___reloadAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getAnnotationLinksCountPerOwner(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ReagentAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkAnnotation(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addReagentAnnotationLinkToBoth(const ::omero::model::ReagentAnnotationLinkPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addReagentAnnotationLinkToBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ReagentAnnotationLinksSeq findReagentAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___findReagentAnnotationLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unlinkAnnotation(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeReagentAnnotationLinkFromBoth(const ::omero::model::ReagentAnnotationLinkPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeReagentAnnotationLinkFromBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ReagentLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Current& = ::Ice::Current()) = 0;
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

    ::omero::RStringPtr reagentIdentifier;

    ::omero::model::ScreenPtr screen;

    ::omero::model::ReagentWellLinksSeq wellLinksSeq;

    bool wellLinksLoaded;

    ::omero::sys::CountMap wellLinksCountPerOwner;

    ::omero::model::ReagentAnnotationLinksSeq annotationLinksSeq;

    bool annotationLinksLoaded;

    ::omero::sys::CountMap annotationLinksCountPerOwner;

    ::omero::RStringPtr description;
};

}

}

#endif
