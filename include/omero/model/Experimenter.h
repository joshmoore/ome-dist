// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `Experimenter.ice'

#ifndef __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_Experimenter_h__
#define __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_Experimenter_h__

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

class GroupExperimenterMap;

class ExperimenterGroup;

class ExperimenterAnnotationLink;

class Annotation;

class Details;

class Experimenter;

}

}

}

namespace omero
{

namespace model
{

class GroupExperimenterMap;
bool operator==(const GroupExperimenterMap&, const GroupExperimenterMap&);
bool operator<(const GroupExperimenterMap&, const GroupExperimenterMap&);

class ExperimenterGroup;
bool operator==(const ExperimenterGroup&, const ExperimenterGroup&);
bool operator<(const ExperimenterGroup&, const ExperimenterGroup&);

class ExperimenterAnnotationLink;
bool operator==(const ExperimenterAnnotationLink&, const ExperimenterAnnotationLink&);
bool operator<(const ExperimenterAnnotationLink&, const ExperimenterAnnotationLink&);

class Annotation;
bool operator==(const Annotation&, const Annotation&);
bool operator<(const Annotation&, const Annotation&);

class Details;
bool operator==(const Details&, const Details&);
bool operator<(const Details&, const Details&);

class Experimenter;
bool operator==(const Experimenter&, const Experimenter&);
bool operator<(const Experimenter&, const Experimenter&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::model::GroupExperimenterMap*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::GroupExperimenterMap*);

::Ice::Object* upCast(::omero::model::ExperimenterGroup*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::ExperimenterGroup*);

::Ice::Object* upCast(::omero::model::ExperimenterAnnotationLink*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::ExperimenterAnnotationLink*);

::Ice::Object* upCast(::omero::model::Annotation*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Annotation*);

::Ice::Object* upCast(::omero::model::Details*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Details*);

::Ice::Object* upCast(::omero::model::Experimenter*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Experimenter*);

}

namespace omero
{

namespace model
{

typedef ::IceInternal::Handle< ::omero::model::GroupExperimenterMap> GroupExperimenterMapPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::GroupExperimenterMap> GroupExperimenterMapPrx;

void __read(::IceInternal::BasicStream*, GroupExperimenterMapPrx&);
void __patch__GroupExperimenterMapPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::ExperimenterGroup> ExperimenterGroupPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::ExperimenterGroup> ExperimenterGroupPrx;

void __read(::IceInternal::BasicStream*, ExperimenterGroupPrx&);
void __patch__ExperimenterGroupPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::ExperimenterAnnotationLink> ExperimenterAnnotationLinkPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::ExperimenterAnnotationLink> ExperimenterAnnotationLinkPrx;

void __read(::IceInternal::BasicStream*, ExperimenterAnnotationLinkPrx&);
void __patch__ExperimenterAnnotationLinkPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Annotation> AnnotationPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Annotation> AnnotationPrx;

void __read(::IceInternal::BasicStream*, AnnotationPrx&);
void __patch__AnnotationPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Details> DetailsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Details> DetailsPrx;

void __read(::IceInternal::BasicStream*, DetailsPrx&);
void __patch__DetailsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Experimenter> ExperimenterPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Experimenter> ExperimenterPrx;

void __read(::IceInternal::BasicStream*, ExperimenterPrx&);
void __patch__ExperimenterPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace omero
{

namespace model
{

typedef ::std::vector< ::omero::model::GroupExperimenterMapPtr> ExperimenterGroupExperimenterMapSeq;
void __writeExperimenterGroupExperimenterMapSeq(::IceInternal::BasicStream*, const ::omero::model::GroupExperimenterMapPtr*, const ::omero::model::GroupExperimenterMapPtr*);
void __readExperimenterGroupExperimenterMapSeq(::IceInternal::BasicStream*, ExperimenterGroupExperimenterMapSeq&);

typedef ::std::vector< ::omero::model::ExperimenterGroupPtr> ExperimenterLinkedExperimenterGroupSeq;
void __writeExperimenterLinkedExperimenterGroupSeq(::IceInternal::BasicStream*, const ::omero::model::ExperimenterGroupPtr*, const ::omero::model::ExperimenterGroupPtr*);
void __readExperimenterLinkedExperimenterGroupSeq(::IceInternal::BasicStream*, ExperimenterLinkedExperimenterGroupSeq&);

typedef ::std::vector< ::omero::model::ExperimenterAnnotationLinkPtr> ExperimenterAnnotationLinksSeq;
void __writeExperimenterAnnotationLinksSeq(::IceInternal::BasicStream*, const ::omero::model::ExperimenterAnnotationLinkPtr*, const ::omero::model::ExperimenterAnnotationLinkPtr*);
void __readExperimenterAnnotationLinksSeq(::IceInternal::BasicStream*, ExperimenterAnnotationLinksSeq&);

typedef ::std::vector< ::omero::model::AnnotationPtr> ExperimenterLinkedAnnotationSeq;
void __writeExperimenterLinkedAnnotationSeq(::IceInternal::BasicStream*, const ::omero::model::AnnotationPtr*, const ::omero::model::AnnotationPtr*);
void __readExperimenterLinkedAnnotationSeq(::IceInternal::BasicStream*, ExperimenterLinkedAnnotationSeq&);

}

}

namespace IceProxy
{

namespace omero
{

namespace model
{

class Experimenter : virtual public ::IceProxy::omero::model::IObject
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

    void unloadGroupExperimenterMap()
    {
        unloadGroupExperimenterMap(0);
    }
    void unloadGroupExperimenterMap(const ::Ice::Context& __ctx)
    {
        unloadGroupExperimenterMap(&__ctx);
    }
    
private:

    void unloadGroupExperimenterMap(const ::Ice::Context*);
    
public:

    ::Ice::Int sizeOfGroupExperimenterMap()
    {
        return sizeOfGroupExperimenterMap(0);
    }
    ::Ice::Int sizeOfGroupExperimenterMap(const ::Ice::Context& __ctx)
    {
        return sizeOfGroupExperimenterMap(&__ctx);
    }
    
private:

    ::Ice::Int sizeOfGroupExperimenterMap(const ::Ice::Context*);
    
public:

    ::omero::model::ExperimenterGroupExperimenterMapSeq copyGroupExperimenterMap()
    {
        return copyGroupExperimenterMap(0);
    }
    ::omero::model::ExperimenterGroupExperimenterMapSeq copyGroupExperimenterMap(const ::Ice::Context& __ctx)
    {
        return copyGroupExperimenterMap(&__ctx);
    }
    
private:

    ::omero::model::ExperimenterGroupExperimenterMapSeq copyGroupExperimenterMap(const ::Ice::Context*);
    
public:

    void addGroupExperimenterMap(const ::omero::model::GroupExperimenterMapPtr& target)
    {
        addGroupExperimenterMap(target, 0);
    }
    void addGroupExperimenterMap(const ::omero::model::GroupExperimenterMapPtr& target, const ::Ice::Context& __ctx)
    {
        addGroupExperimenterMap(target, &__ctx);
    }
    
private:

    void addGroupExperimenterMap(const ::omero::model::GroupExperimenterMapPtr&, const ::Ice::Context*);
    
public:

    void addAllGroupExperimenterMapSet(const ::omero::model::ExperimenterGroupExperimenterMapSeq& targets)
    {
        addAllGroupExperimenterMapSet(targets, 0);
    }
    void addAllGroupExperimenterMapSet(const ::omero::model::ExperimenterGroupExperimenterMapSeq& targets, const ::Ice::Context& __ctx)
    {
        addAllGroupExperimenterMapSet(targets, &__ctx);
    }
    
private:

    void addAllGroupExperimenterMapSet(const ::omero::model::ExperimenterGroupExperimenterMapSeq&, const ::Ice::Context*);
    
public:

    void removeGroupExperimenterMap(const ::omero::model::GroupExperimenterMapPtr& theTarget)
    {
        removeGroupExperimenterMap(theTarget, 0);
    }
    void removeGroupExperimenterMap(const ::omero::model::GroupExperimenterMapPtr& theTarget, const ::Ice::Context& __ctx)
    {
        removeGroupExperimenterMap(theTarget, &__ctx);
    }
    
private:

    void removeGroupExperimenterMap(const ::omero::model::GroupExperimenterMapPtr&, const ::Ice::Context*);
    
public:

    void removeAllGroupExperimenterMapSet(const ::omero::model::ExperimenterGroupExperimenterMapSeq& targets)
    {
        removeAllGroupExperimenterMapSet(targets, 0);
    }
    void removeAllGroupExperimenterMapSet(const ::omero::model::ExperimenterGroupExperimenterMapSeq& targets, const ::Ice::Context& __ctx)
    {
        removeAllGroupExperimenterMapSet(targets, &__ctx);
    }
    
private:

    void removeAllGroupExperimenterMapSet(const ::omero::model::ExperimenterGroupExperimenterMapSeq&, const ::Ice::Context*);
    
public:

    void clearGroupExperimenterMap()
    {
        clearGroupExperimenterMap(0);
    }
    void clearGroupExperimenterMap(const ::Ice::Context& __ctx)
    {
        clearGroupExperimenterMap(&__ctx);
    }
    
private:

    void clearGroupExperimenterMap(const ::Ice::Context*);
    
public:

    void reloadGroupExperimenterMap(const ::omero::model::ExperimenterPtr& toCopy)
    {
        reloadGroupExperimenterMap(toCopy, 0);
    }
    void reloadGroupExperimenterMap(const ::omero::model::ExperimenterPtr& toCopy, const ::Ice::Context& __ctx)
    {
        reloadGroupExperimenterMap(toCopy, &__ctx);
    }
    
private:

    void reloadGroupExperimenterMap(const ::omero::model::ExperimenterPtr&, const ::Ice::Context*);
    
public:

    ::omero::model::GroupExperimenterMapPtr getGroupExperimenterMap(::Ice::Int index)
    {
        return getGroupExperimenterMap(index, 0);
    }
    ::omero::model::GroupExperimenterMapPtr getGroupExperimenterMap(::Ice::Int index, const ::Ice::Context& __ctx)
    {
        return getGroupExperimenterMap(index, &__ctx);
    }
    
private:

    ::omero::model::GroupExperimenterMapPtr getGroupExperimenterMap(::Ice::Int, const ::Ice::Context*);
    
public:

    ::omero::model::GroupExperimenterMapPtr setGroupExperimenterMap(::Ice::Int index, const ::omero::model::GroupExperimenterMapPtr& theElement)
    {
        return setGroupExperimenterMap(index, theElement, 0);
    }
    ::omero::model::GroupExperimenterMapPtr setGroupExperimenterMap(::Ice::Int index, const ::omero::model::GroupExperimenterMapPtr& theElement, const ::Ice::Context& __ctx)
    {
        return setGroupExperimenterMap(index, theElement, &__ctx);
    }
    
private:

    ::omero::model::GroupExperimenterMapPtr setGroupExperimenterMap(::Ice::Int, const ::omero::model::GroupExperimenterMapPtr&, const ::Ice::Context*);
    
public:

    ::omero::model::GroupExperimenterMapPtr getPrimaryGroupExperimenterMap()
    {
        return getPrimaryGroupExperimenterMap(0);
    }
    ::omero::model::GroupExperimenterMapPtr getPrimaryGroupExperimenterMap(const ::Ice::Context& __ctx)
    {
        return getPrimaryGroupExperimenterMap(&__ctx);
    }
    
private:

    ::omero::model::GroupExperimenterMapPtr getPrimaryGroupExperimenterMap(const ::Ice::Context*);
    
public:

    ::omero::model::GroupExperimenterMapPtr setPrimaryGroupExperimenterMap(const ::omero::model::GroupExperimenterMapPtr& theElement)
    {
        return setPrimaryGroupExperimenterMap(theElement, 0);
    }
    ::omero::model::GroupExperimenterMapPtr setPrimaryGroupExperimenterMap(const ::omero::model::GroupExperimenterMapPtr& theElement, const ::Ice::Context& __ctx)
    {
        return setPrimaryGroupExperimenterMap(theElement, &__ctx);
    }
    
private:

    ::omero::model::GroupExperimenterMapPtr setPrimaryGroupExperimenterMap(const ::omero::model::GroupExperimenterMapPtr&, const ::Ice::Context*);
    
public:

    ::omero::model::GroupExperimenterMapPtr linkExperimenterGroup(const ::omero::model::ExperimenterGroupPtr& addition)
    {
        return linkExperimenterGroup(addition, 0);
    }
    ::omero::model::GroupExperimenterMapPtr linkExperimenterGroup(const ::omero::model::ExperimenterGroupPtr& addition, const ::Ice::Context& __ctx)
    {
        return linkExperimenterGroup(addition, &__ctx);
    }
    
private:

    ::omero::model::GroupExperimenterMapPtr linkExperimenterGroup(const ::omero::model::ExperimenterGroupPtr&, const ::Ice::Context*);
    
public:

    void addGroupExperimenterMapToBoth(const ::omero::model::GroupExperimenterMapPtr& link, bool bothSides)
    {
        addGroupExperimenterMapToBoth(link, bothSides, 0);
    }
    void addGroupExperimenterMapToBoth(const ::omero::model::GroupExperimenterMapPtr& link, bool bothSides, const ::Ice::Context& __ctx)
    {
        addGroupExperimenterMapToBoth(link, bothSides, &__ctx);
    }
    
private:

    void addGroupExperimenterMapToBoth(const ::omero::model::GroupExperimenterMapPtr&, bool, const ::Ice::Context*);
    
public:

    ::omero::model::ExperimenterGroupExperimenterMapSeq findGroupExperimenterMap(const ::omero::model::ExperimenterGroupPtr& removal)
    {
        return findGroupExperimenterMap(removal, 0);
    }
    ::omero::model::ExperimenterGroupExperimenterMapSeq findGroupExperimenterMap(const ::omero::model::ExperimenterGroupPtr& removal, const ::Ice::Context& __ctx)
    {
        return findGroupExperimenterMap(removal, &__ctx);
    }
    
private:

    ::omero::model::ExperimenterGroupExperimenterMapSeq findGroupExperimenterMap(const ::omero::model::ExperimenterGroupPtr&, const ::Ice::Context*);
    
public:

    void unlinkExperimenterGroup(const ::omero::model::ExperimenterGroupPtr& removal)
    {
        unlinkExperimenterGroup(removal, 0);
    }
    void unlinkExperimenterGroup(const ::omero::model::ExperimenterGroupPtr& removal, const ::Ice::Context& __ctx)
    {
        unlinkExperimenterGroup(removal, &__ctx);
    }
    
private:

    void unlinkExperimenterGroup(const ::omero::model::ExperimenterGroupPtr&, const ::Ice::Context*);
    
public:

    void removeGroupExperimenterMapFromBoth(const ::omero::model::GroupExperimenterMapPtr& link, bool bothSides)
    {
        removeGroupExperimenterMapFromBoth(link, bothSides, 0);
    }
    void removeGroupExperimenterMapFromBoth(const ::omero::model::GroupExperimenterMapPtr& link, bool bothSides, const ::Ice::Context& __ctx)
    {
        removeGroupExperimenterMapFromBoth(link, bothSides, &__ctx);
    }
    
private:

    void removeGroupExperimenterMapFromBoth(const ::omero::model::GroupExperimenterMapPtr&, bool, const ::Ice::Context*);
    
public:

    ::omero::model::ExperimenterLinkedExperimenterGroupSeq linkedExperimenterGroupList()
    {
        return linkedExperimenterGroupList(0);
    }
    ::omero::model::ExperimenterLinkedExperimenterGroupSeq linkedExperimenterGroupList(const ::Ice::Context& __ctx)
    {
        return linkedExperimenterGroupList(&__ctx);
    }
    
private:

    ::omero::model::ExperimenterLinkedExperimenterGroupSeq linkedExperimenterGroupList(const ::Ice::Context*);
    
public:

    ::omero::RStringPtr getOmeName()
    {
        return getOmeName(0);
    }
    ::omero::RStringPtr getOmeName(const ::Ice::Context& __ctx)
    {
        return getOmeName(&__ctx);
    }
    
private:

    ::omero::RStringPtr getOmeName(const ::Ice::Context*);
    
public:

    void setOmeName(const ::omero::RStringPtr& theOmeName)
    {
        setOmeName(theOmeName, 0);
    }
    void setOmeName(const ::omero::RStringPtr& theOmeName, const ::Ice::Context& __ctx)
    {
        setOmeName(theOmeName, &__ctx);
    }
    
private:

    void setOmeName(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:

    ::omero::RStringPtr getFirstName()
    {
        return getFirstName(0);
    }
    ::omero::RStringPtr getFirstName(const ::Ice::Context& __ctx)
    {
        return getFirstName(&__ctx);
    }
    
private:

    ::omero::RStringPtr getFirstName(const ::Ice::Context*);
    
public:

    void setFirstName(const ::omero::RStringPtr& theFirstName)
    {
        setFirstName(theFirstName, 0);
    }
    void setFirstName(const ::omero::RStringPtr& theFirstName, const ::Ice::Context& __ctx)
    {
        setFirstName(theFirstName, &__ctx);
    }
    
private:

    void setFirstName(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:

    ::omero::RStringPtr getMiddleName()
    {
        return getMiddleName(0);
    }
    ::omero::RStringPtr getMiddleName(const ::Ice::Context& __ctx)
    {
        return getMiddleName(&__ctx);
    }
    
private:

    ::omero::RStringPtr getMiddleName(const ::Ice::Context*);
    
public:

    void setMiddleName(const ::omero::RStringPtr& theMiddleName)
    {
        setMiddleName(theMiddleName, 0);
    }
    void setMiddleName(const ::omero::RStringPtr& theMiddleName, const ::Ice::Context& __ctx)
    {
        setMiddleName(theMiddleName, &__ctx);
    }
    
private:

    void setMiddleName(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:

    ::omero::RStringPtr getLastName()
    {
        return getLastName(0);
    }
    ::omero::RStringPtr getLastName(const ::Ice::Context& __ctx)
    {
        return getLastName(&__ctx);
    }
    
private:

    ::omero::RStringPtr getLastName(const ::Ice::Context*);
    
public:

    void setLastName(const ::omero::RStringPtr& theLastName)
    {
        setLastName(theLastName, 0);
    }
    void setLastName(const ::omero::RStringPtr& theLastName, const ::Ice::Context& __ctx)
    {
        setLastName(theLastName, &__ctx);
    }
    
private:

    void setLastName(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:

    ::omero::RStringPtr getInstitution()
    {
        return getInstitution(0);
    }
    ::omero::RStringPtr getInstitution(const ::Ice::Context& __ctx)
    {
        return getInstitution(&__ctx);
    }
    
private:

    ::omero::RStringPtr getInstitution(const ::Ice::Context*);
    
public:

    void setInstitution(const ::omero::RStringPtr& theInstitution)
    {
        setInstitution(theInstitution, 0);
    }
    void setInstitution(const ::omero::RStringPtr& theInstitution, const ::Ice::Context& __ctx)
    {
        setInstitution(theInstitution, &__ctx);
    }
    
private:

    void setInstitution(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:

    ::omero::RStringPtr getEmail()
    {
        return getEmail(0);
    }
    ::omero::RStringPtr getEmail(const ::Ice::Context& __ctx)
    {
        return getEmail(&__ctx);
    }
    
private:

    ::omero::RStringPtr getEmail(const ::Ice::Context*);
    
public:

    void setEmail(const ::omero::RStringPtr& theEmail)
    {
        setEmail(theEmail, 0);
    }
    void setEmail(const ::omero::RStringPtr& theEmail, const ::Ice::Context& __ctx)
    {
        setEmail(theEmail, &__ctx);
    }
    
private:

    void setEmail(const ::omero::RStringPtr&, const ::Ice::Context*);
    
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

    ::omero::model::ExperimenterAnnotationLinksSeq copyAnnotationLinks()
    {
        return copyAnnotationLinks(0);
    }
    ::omero::model::ExperimenterAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context& __ctx)
    {
        return copyAnnotationLinks(&__ctx);
    }
    
private:

    ::omero::model::ExperimenterAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*);
    
public:

    void addExperimenterAnnotationLink(const ::omero::model::ExperimenterAnnotationLinkPtr& target)
    {
        addExperimenterAnnotationLink(target, 0);
    }
    void addExperimenterAnnotationLink(const ::omero::model::ExperimenterAnnotationLinkPtr& target, const ::Ice::Context& __ctx)
    {
        addExperimenterAnnotationLink(target, &__ctx);
    }
    
private:

    void addExperimenterAnnotationLink(const ::omero::model::ExperimenterAnnotationLinkPtr&, const ::Ice::Context*);
    
public:

    void addAllExperimenterAnnotationLinkSet(const ::omero::model::ExperimenterAnnotationLinksSeq& targets)
    {
        addAllExperimenterAnnotationLinkSet(targets, 0);
    }
    void addAllExperimenterAnnotationLinkSet(const ::omero::model::ExperimenterAnnotationLinksSeq& targets, const ::Ice::Context& __ctx)
    {
        addAllExperimenterAnnotationLinkSet(targets, &__ctx);
    }
    
private:

    void addAllExperimenterAnnotationLinkSet(const ::omero::model::ExperimenterAnnotationLinksSeq&, const ::Ice::Context*);
    
public:

    void removeExperimenterAnnotationLink(const ::omero::model::ExperimenterAnnotationLinkPtr& theTarget)
    {
        removeExperimenterAnnotationLink(theTarget, 0);
    }
    void removeExperimenterAnnotationLink(const ::omero::model::ExperimenterAnnotationLinkPtr& theTarget, const ::Ice::Context& __ctx)
    {
        removeExperimenterAnnotationLink(theTarget, &__ctx);
    }
    
private:

    void removeExperimenterAnnotationLink(const ::omero::model::ExperimenterAnnotationLinkPtr&, const ::Ice::Context*);
    
public:

    void removeAllExperimenterAnnotationLinkSet(const ::omero::model::ExperimenterAnnotationLinksSeq& targets)
    {
        removeAllExperimenterAnnotationLinkSet(targets, 0);
    }
    void removeAllExperimenterAnnotationLinkSet(const ::omero::model::ExperimenterAnnotationLinksSeq& targets, const ::Ice::Context& __ctx)
    {
        removeAllExperimenterAnnotationLinkSet(targets, &__ctx);
    }
    
private:

    void removeAllExperimenterAnnotationLinkSet(const ::omero::model::ExperimenterAnnotationLinksSeq&, const ::Ice::Context*);
    
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

    void reloadAnnotationLinks(const ::omero::model::ExperimenterPtr& toCopy)
    {
        reloadAnnotationLinks(toCopy, 0);
    }
    void reloadAnnotationLinks(const ::omero::model::ExperimenterPtr& toCopy, const ::Ice::Context& __ctx)
    {
        reloadAnnotationLinks(toCopy, &__ctx);
    }
    
private:

    void reloadAnnotationLinks(const ::omero::model::ExperimenterPtr&, const ::Ice::Context*);
    
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

    ::omero::model::ExperimenterAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr& addition)
    {
        return linkAnnotation(addition, 0);
    }
    ::omero::model::ExperimenterAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr& addition, const ::Ice::Context& __ctx)
    {
        return linkAnnotation(addition, &__ctx);
    }
    
private:

    ::omero::model::ExperimenterAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);
    
public:

    void addExperimenterAnnotationLinkToBoth(const ::omero::model::ExperimenterAnnotationLinkPtr& link, bool bothSides)
    {
        addExperimenterAnnotationLinkToBoth(link, bothSides, 0);
    }
    void addExperimenterAnnotationLinkToBoth(const ::omero::model::ExperimenterAnnotationLinkPtr& link, bool bothSides, const ::Ice::Context& __ctx)
    {
        addExperimenterAnnotationLinkToBoth(link, bothSides, &__ctx);
    }
    
private:

    void addExperimenterAnnotationLinkToBoth(const ::omero::model::ExperimenterAnnotationLinkPtr&, bool, const ::Ice::Context*);
    
public:

    ::omero::model::ExperimenterAnnotationLinksSeq findExperimenterAnnotationLink(const ::omero::model::AnnotationPtr& removal)
    {
        return findExperimenterAnnotationLink(removal, 0);
    }
    ::omero::model::ExperimenterAnnotationLinksSeq findExperimenterAnnotationLink(const ::omero::model::AnnotationPtr& removal, const ::Ice::Context& __ctx)
    {
        return findExperimenterAnnotationLink(removal, &__ctx);
    }
    
private:

    ::omero::model::ExperimenterAnnotationLinksSeq findExperimenterAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);
    
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

    void removeExperimenterAnnotationLinkFromBoth(const ::omero::model::ExperimenterAnnotationLinkPtr& link, bool bothSides)
    {
        removeExperimenterAnnotationLinkFromBoth(link, bothSides, 0);
    }
    void removeExperimenterAnnotationLinkFromBoth(const ::omero::model::ExperimenterAnnotationLinkPtr& link, bool bothSides, const ::Ice::Context& __ctx)
    {
        removeExperimenterAnnotationLinkFromBoth(link, bothSides, &__ctx);
    }
    
private:

    void removeExperimenterAnnotationLinkFromBoth(const ::omero::model::ExperimenterAnnotationLinkPtr&, bool, const ::Ice::Context*);
    
public:

    ::omero::model::ExperimenterLinkedAnnotationSeq linkedAnnotationList()
    {
        return linkedAnnotationList(0);
    }
    ::omero::model::ExperimenterLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context& __ctx)
    {
        return linkedAnnotationList(&__ctx);
    }
    
private:

    ::omero::model::ExperimenterLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<Experimenter> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Experimenter*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Experimenter*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Experimenter> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Experimenter*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Experimenter*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Experimenter> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Experimenter*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Experimenter*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Experimenter> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Experimenter*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Experimenter*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Experimenter> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Experimenter*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Experimenter*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Experimenter> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Experimenter*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Experimenter*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Experimenter> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Experimenter*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Experimenter*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Experimenter> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Experimenter*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Experimenter*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Experimenter> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Experimenter*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Experimenter*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Experimenter> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Experimenter*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Experimenter*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Experimenter> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Experimenter*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Experimenter*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Experimenter> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Experimenter*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Experimenter*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Experimenter> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Experimenter*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Experimenter*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Experimenter> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Experimenter*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Experimenter*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Experimenter> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Experimenter*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Experimenter*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Experimenter> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Experimenter*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Experimenter*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Experimenter> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Experimenter*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Experimenter*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Experimenter> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Experimenter*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Experimenter*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Experimenter> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Experimenter*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Experimenter*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class Experimenter : virtual public ::IceDelegate::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*) = 0;

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual void unloadGroupExperimenterMap(const ::Ice::Context*) = 0;

    virtual ::Ice::Int sizeOfGroupExperimenterMap(const ::Ice::Context*) = 0;

    virtual ::omero::model::ExperimenterGroupExperimenterMapSeq copyGroupExperimenterMap(const ::Ice::Context*) = 0;

    virtual void addGroupExperimenterMap(const ::omero::model::GroupExperimenterMapPtr&, const ::Ice::Context*) = 0;

    virtual void addAllGroupExperimenterMapSet(const ::omero::model::ExperimenterGroupExperimenterMapSeq&, const ::Ice::Context*) = 0;

    virtual void removeGroupExperimenterMap(const ::omero::model::GroupExperimenterMapPtr&, const ::Ice::Context*) = 0;

    virtual void removeAllGroupExperimenterMapSet(const ::omero::model::ExperimenterGroupExperimenterMapSeq&, const ::Ice::Context*) = 0;

    virtual void clearGroupExperimenterMap(const ::Ice::Context*) = 0;

    virtual void reloadGroupExperimenterMap(const ::omero::model::ExperimenterPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::GroupExperimenterMapPtr getGroupExperimenterMap(::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::omero::model::GroupExperimenterMapPtr setGroupExperimenterMap(::Ice::Int, const ::omero::model::GroupExperimenterMapPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::GroupExperimenterMapPtr getPrimaryGroupExperimenterMap(const ::Ice::Context*) = 0;

    virtual ::omero::model::GroupExperimenterMapPtr setPrimaryGroupExperimenterMap(const ::omero::model::GroupExperimenterMapPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::GroupExperimenterMapPtr linkExperimenterGroup(const ::omero::model::ExperimenterGroupPtr&, const ::Ice::Context*) = 0;

    virtual void addGroupExperimenterMapToBoth(const ::omero::model::GroupExperimenterMapPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::ExperimenterGroupExperimenterMapSeq findGroupExperimenterMap(const ::omero::model::ExperimenterGroupPtr&, const ::Ice::Context*) = 0;

    virtual void unlinkExperimenterGroup(const ::omero::model::ExperimenterGroupPtr&, const ::Ice::Context*) = 0;

    virtual void removeGroupExperimenterMapFromBoth(const ::omero::model::GroupExperimenterMapPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::ExperimenterLinkedExperimenterGroupSeq linkedExperimenterGroupList(const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getOmeName(const ::Ice::Context*) = 0;

    virtual void setOmeName(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getFirstName(const ::Ice::Context*) = 0;

    virtual void setFirstName(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getMiddleName(const ::Ice::Context*) = 0;

    virtual void setMiddleName(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getLastName(const ::Ice::Context*) = 0;

    virtual void setLastName(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getInstitution(const ::Ice::Context*) = 0;

    virtual void setInstitution(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getEmail(const ::Ice::Context*) = 0;

    virtual void setEmail(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual void unloadAnnotationLinks(const ::Ice::Context*) = 0;

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Context*) = 0;

    virtual ::omero::model::ExperimenterAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*) = 0;

    virtual void addExperimenterAnnotationLink(const ::omero::model::ExperimenterAnnotationLinkPtr&, const ::Ice::Context*) = 0;

    virtual void addAllExperimenterAnnotationLinkSet(const ::omero::model::ExperimenterAnnotationLinksSeq&, const ::Ice::Context*) = 0;

    virtual void removeExperimenterAnnotationLink(const ::omero::model::ExperimenterAnnotationLinkPtr&, const ::Ice::Context*) = 0;

    virtual void removeAllExperimenterAnnotationLinkSet(const ::omero::model::ExperimenterAnnotationLinksSeq&, const ::Ice::Context*) = 0;

    virtual void clearAnnotationLinks(const ::Ice::Context*) = 0;

    virtual void reloadAnnotationLinks(const ::omero::model::ExperimenterPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Context*) = 0;

    virtual ::omero::model::ExperimenterAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*) = 0;

    virtual void addExperimenterAnnotationLinkToBoth(const ::omero::model::ExperimenterAnnotationLinkPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::ExperimenterAnnotationLinksSeq findExperimenterAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*) = 0;

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*) = 0;

    virtual void removeExperimenterAnnotationLinkFromBoth(const ::omero::model::ExperimenterAnnotationLinkPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::ExperimenterLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*) = 0;
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

class Experimenter : virtual public ::IceDelegate::omero::model::Experimenter,
                     virtual public ::IceDelegateM::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual void unloadGroupExperimenterMap(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfGroupExperimenterMap(const ::Ice::Context*);

    virtual ::omero::model::ExperimenterGroupExperimenterMapSeq copyGroupExperimenterMap(const ::Ice::Context*);

    virtual void addGroupExperimenterMap(const ::omero::model::GroupExperimenterMapPtr&, const ::Ice::Context*);

    virtual void addAllGroupExperimenterMapSet(const ::omero::model::ExperimenterGroupExperimenterMapSeq&, const ::Ice::Context*);

    virtual void removeGroupExperimenterMap(const ::omero::model::GroupExperimenterMapPtr&, const ::Ice::Context*);

    virtual void removeAllGroupExperimenterMapSet(const ::omero::model::ExperimenterGroupExperimenterMapSeq&, const ::Ice::Context*);

    virtual void clearGroupExperimenterMap(const ::Ice::Context*);

    virtual void reloadGroupExperimenterMap(const ::omero::model::ExperimenterPtr&, const ::Ice::Context*);

    virtual ::omero::model::GroupExperimenterMapPtr getGroupExperimenterMap(::Ice::Int, const ::Ice::Context*);

    virtual ::omero::model::GroupExperimenterMapPtr setGroupExperimenterMap(::Ice::Int, const ::omero::model::GroupExperimenterMapPtr&, const ::Ice::Context*);

    virtual ::omero::model::GroupExperimenterMapPtr getPrimaryGroupExperimenterMap(const ::Ice::Context*);

    virtual ::omero::model::GroupExperimenterMapPtr setPrimaryGroupExperimenterMap(const ::omero::model::GroupExperimenterMapPtr&, const ::Ice::Context*);

    virtual ::omero::model::GroupExperimenterMapPtr linkExperimenterGroup(const ::omero::model::ExperimenterGroupPtr&, const ::Ice::Context*);

    virtual void addGroupExperimenterMapToBoth(const ::omero::model::GroupExperimenterMapPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::ExperimenterGroupExperimenterMapSeq findGroupExperimenterMap(const ::omero::model::ExperimenterGroupPtr&, const ::Ice::Context*);

    virtual void unlinkExperimenterGroup(const ::omero::model::ExperimenterGroupPtr&, const ::Ice::Context*);

    virtual void removeGroupExperimenterMapFromBoth(const ::omero::model::GroupExperimenterMapPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::ExperimenterLinkedExperimenterGroupSeq linkedExperimenterGroupList(const ::Ice::Context*);

    virtual ::omero::RStringPtr getOmeName(const ::Ice::Context*);

    virtual void setOmeName(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getFirstName(const ::Ice::Context*);

    virtual void setFirstName(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getMiddleName(const ::Ice::Context*);

    virtual void setMiddleName(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getLastName(const ::Ice::Context*);

    virtual void setLastName(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getInstitution(const ::Ice::Context*);

    virtual void setInstitution(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getEmail(const ::Ice::Context*);

    virtual void setEmail(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual void unloadAnnotationLinks(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Context*);

    virtual ::omero::model::ExperimenterAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*);

    virtual void addExperimenterAnnotationLink(const ::omero::model::ExperimenterAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void addAllExperimenterAnnotationLinkSet(const ::omero::model::ExperimenterAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void removeExperimenterAnnotationLink(const ::omero::model::ExperimenterAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void removeAllExperimenterAnnotationLinkSet(const ::omero::model::ExperimenterAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void clearAnnotationLinks(const ::Ice::Context*);

    virtual void reloadAnnotationLinks(const ::omero::model::ExperimenterPtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::ExperimenterAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void addExperimenterAnnotationLinkToBoth(const ::omero::model::ExperimenterAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::ExperimenterAnnotationLinksSeq findExperimenterAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void removeExperimenterAnnotationLinkFromBoth(const ::omero::model::ExperimenterAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::ExperimenterLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*);
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

class Experimenter : virtual public ::IceDelegate::omero::model::Experimenter,
                     virtual public ::IceDelegateD::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual void unloadGroupExperimenterMap(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfGroupExperimenterMap(const ::Ice::Context*);

    virtual ::omero::model::ExperimenterGroupExperimenterMapSeq copyGroupExperimenterMap(const ::Ice::Context*);

    virtual void addGroupExperimenterMap(const ::omero::model::GroupExperimenterMapPtr&, const ::Ice::Context*);

    virtual void addAllGroupExperimenterMapSet(const ::omero::model::ExperimenterGroupExperimenterMapSeq&, const ::Ice::Context*);

    virtual void removeGroupExperimenterMap(const ::omero::model::GroupExperimenterMapPtr&, const ::Ice::Context*);

    virtual void removeAllGroupExperimenterMapSet(const ::omero::model::ExperimenterGroupExperimenterMapSeq&, const ::Ice::Context*);

    virtual void clearGroupExperimenterMap(const ::Ice::Context*);

    virtual void reloadGroupExperimenterMap(const ::omero::model::ExperimenterPtr&, const ::Ice::Context*);

    virtual ::omero::model::GroupExperimenterMapPtr getGroupExperimenterMap(::Ice::Int, const ::Ice::Context*);

    virtual ::omero::model::GroupExperimenterMapPtr setGroupExperimenterMap(::Ice::Int, const ::omero::model::GroupExperimenterMapPtr&, const ::Ice::Context*);

    virtual ::omero::model::GroupExperimenterMapPtr getPrimaryGroupExperimenterMap(const ::Ice::Context*);

    virtual ::omero::model::GroupExperimenterMapPtr setPrimaryGroupExperimenterMap(const ::omero::model::GroupExperimenterMapPtr&, const ::Ice::Context*);

    virtual ::omero::model::GroupExperimenterMapPtr linkExperimenterGroup(const ::omero::model::ExperimenterGroupPtr&, const ::Ice::Context*);

    virtual void addGroupExperimenterMapToBoth(const ::omero::model::GroupExperimenterMapPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::ExperimenterGroupExperimenterMapSeq findGroupExperimenterMap(const ::omero::model::ExperimenterGroupPtr&, const ::Ice::Context*);

    virtual void unlinkExperimenterGroup(const ::omero::model::ExperimenterGroupPtr&, const ::Ice::Context*);

    virtual void removeGroupExperimenterMapFromBoth(const ::omero::model::GroupExperimenterMapPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::ExperimenterLinkedExperimenterGroupSeq linkedExperimenterGroupList(const ::Ice::Context*);

    virtual ::omero::RStringPtr getOmeName(const ::Ice::Context*);

    virtual void setOmeName(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getFirstName(const ::Ice::Context*);

    virtual void setFirstName(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getMiddleName(const ::Ice::Context*);

    virtual void setMiddleName(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getLastName(const ::Ice::Context*);

    virtual void setLastName(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getInstitution(const ::Ice::Context*);

    virtual void setInstitution(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getEmail(const ::Ice::Context*);

    virtual void setEmail(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual void unloadAnnotationLinks(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Context*);

    virtual ::omero::model::ExperimenterAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*);

    virtual void addExperimenterAnnotationLink(const ::omero::model::ExperimenterAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void addAllExperimenterAnnotationLinkSet(const ::omero::model::ExperimenterAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void removeExperimenterAnnotationLink(const ::omero::model::ExperimenterAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void removeAllExperimenterAnnotationLinkSet(const ::omero::model::ExperimenterAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void clearAnnotationLinks(const ::Ice::Context*);

    virtual void reloadAnnotationLinks(const ::omero::model::ExperimenterPtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::ExperimenterAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void addExperimenterAnnotationLinkToBoth(const ::omero::model::ExperimenterAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::ExperimenterAnnotationLinksSeq findExperimenterAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void removeExperimenterAnnotationLinkFromBoth(const ::omero::model::ExperimenterAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::ExperimenterLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace model
{

class Experimenter : virtual public ::omero::model::IObject
{
public:

    typedef ExperimenterPrx ProxyType;
    typedef ExperimenterPtr PointerType;
    
    Experimenter() {}
    Experimenter(const ::omero::RLongPtr&, const ::omero::model::DetailsPtr&, bool, const ::omero::RIntPtr&, const ::omero::model::ExperimenterGroupExperimenterMapSeq&, bool, const ::omero::RStringPtr&, const ::omero::RStringPtr&, const ::omero::RStringPtr&, const ::omero::RStringPtr&, const ::omero::RStringPtr&, const ::omero::RStringPtr&, const ::omero::model::ExperimenterAnnotationLinksSeq&, bool, const ::omero::sys::CountMap&);
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

    virtual void unloadGroupExperimenterMap(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unloadGroupExperimenterMap(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int sizeOfGroupExperimenterMap(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sizeOfGroupExperimenterMap(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ExperimenterGroupExperimenterMapSeq copyGroupExperimenterMap(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copyGroupExperimenterMap(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addGroupExperimenterMap(const ::omero::model::GroupExperimenterMapPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addGroupExperimenterMap(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAllGroupExperimenterMapSet(const ::omero::model::ExperimenterGroupExperimenterMapSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAllGroupExperimenterMapSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeGroupExperimenterMap(const ::omero::model::GroupExperimenterMapPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeGroupExperimenterMap(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeAllGroupExperimenterMapSet(const ::omero::model::ExperimenterGroupExperimenterMapSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeAllGroupExperimenterMapSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void clearGroupExperimenterMap(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___clearGroupExperimenterMap(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void reloadGroupExperimenterMap(const ::omero::model::ExperimenterPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___reloadGroupExperimenterMap(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::GroupExperimenterMapPtr getGroupExperimenterMap(::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getGroupExperimenterMap(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::GroupExperimenterMapPtr setGroupExperimenterMap(::Ice::Int, const ::omero::model::GroupExperimenterMapPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setGroupExperimenterMap(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::GroupExperimenterMapPtr getPrimaryGroupExperimenterMap(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getPrimaryGroupExperimenterMap(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::GroupExperimenterMapPtr setPrimaryGroupExperimenterMap(const ::omero::model::GroupExperimenterMapPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setPrimaryGroupExperimenterMap(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::GroupExperimenterMapPtr linkExperimenterGroup(const ::omero::model::ExperimenterGroupPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkExperimenterGroup(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addGroupExperimenterMapToBoth(const ::omero::model::GroupExperimenterMapPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addGroupExperimenterMapToBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ExperimenterGroupExperimenterMapSeq findGroupExperimenterMap(const ::omero::model::ExperimenterGroupPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___findGroupExperimenterMap(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unlinkExperimenterGroup(const ::omero::model::ExperimenterGroupPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unlinkExperimenterGroup(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeGroupExperimenterMapFromBoth(const ::omero::model::GroupExperimenterMapPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeGroupExperimenterMapFromBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ExperimenterLinkedExperimenterGroupSeq linkedExperimenterGroupList(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkedExperimenterGroupList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getOmeName(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getOmeName(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setOmeName(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setOmeName(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getFirstName(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getFirstName(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setFirstName(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setFirstName(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getMiddleName(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getMiddleName(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setMiddleName(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setMiddleName(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getLastName(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getLastName(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setLastName(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setLastName(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getInstitution(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getInstitution(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setInstitution(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setInstitution(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getEmail(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getEmail(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setEmail(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setEmail(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unloadAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unloadAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sizeOfAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ExperimenterAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copyAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addExperimenterAnnotationLink(const ::omero::model::ExperimenterAnnotationLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addExperimenterAnnotationLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAllExperimenterAnnotationLinkSet(const ::omero::model::ExperimenterAnnotationLinksSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAllExperimenterAnnotationLinkSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeExperimenterAnnotationLink(const ::omero::model::ExperimenterAnnotationLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeExperimenterAnnotationLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeAllExperimenterAnnotationLinkSet(const ::omero::model::ExperimenterAnnotationLinksSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeAllExperimenterAnnotationLinkSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void clearAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___clearAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void reloadAnnotationLinks(const ::omero::model::ExperimenterPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___reloadAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getAnnotationLinksCountPerOwner(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ExperimenterAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkAnnotation(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addExperimenterAnnotationLinkToBoth(const ::omero::model::ExperimenterAnnotationLinkPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addExperimenterAnnotationLinkToBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ExperimenterAnnotationLinksSeq findExperimenterAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___findExperimenterAnnotationLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unlinkAnnotation(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeExperimenterAnnotationLinkFromBoth(const ::omero::model::ExperimenterAnnotationLinkPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeExperimenterAnnotationLinkFromBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ExperimenterLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkedAnnotationList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

protected:

    ::omero::RIntPtr version;

    ::omero::model::ExperimenterGroupExperimenterMapSeq groupExperimenterMapSeq;

    bool groupExperimenterMapLoaded;

    ::omero::RStringPtr omeName;

    ::omero::RStringPtr firstName;

    ::omero::RStringPtr middleName;

    ::omero::RStringPtr lastName;

    ::omero::RStringPtr institution;

    ::omero::RStringPtr email;

    ::omero::model::ExperimenterAnnotationLinksSeq annotationLinksSeq;

    bool annotationLinksLoaded;

    ::omero::sys::CountMap annotationLinksCountPerOwner;
};

}

}

#endif
