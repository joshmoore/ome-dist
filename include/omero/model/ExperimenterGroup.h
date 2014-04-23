// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `ExperimenterGroup.ice'

#ifndef __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_ExperimenterGroup_h__
#define __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_ExperimenterGroup_h__

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

class Experimenter;

class ExperimenterGroupAnnotationLink;

class Annotation;

class Details;

class ExperimenterGroup;

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

class Experimenter;
bool operator==(const Experimenter&, const Experimenter&);
bool operator<(const Experimenter&, const Experimenter&);

class ExperimenterGroupAnnotationLink;
bool operator==(const ExperimenterGroupAnnotationLink&, const ExperimenterGroupAnnotationLink&);
bool operator<(const ExperimenterGroupAnnotationLink&, const ExperimenterGroupAnnotationLink&);

class Annotation;
bool operator==(const Annotation&, const Annotation&);
bool operator<(const Annotation&, const Annotation&);

class Details;
bool operator==(const Details&, const Details&);
bool operator<(const Details&, const Details&);

class ExperimenterGroup;
bool operator==(const ExperimenterGroup&, const ExperimenterGroup&);
bool operator<(const ExperimenterGroup&, const ExperimenterGroup&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::model::GroupExperimenterMap*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::GroupExperimenterMap*);

::Ice::Object* upCast(::omero::model::Experimenter*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Experimenter*);

::Ice::Object* upCast(::omero::model::ExperimenterGroupAnnotationLink*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::ExperimenterGroupAnnotationLink*);

::Ice::Object* upCast(::omero::model::Annotation*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Annotation*);

::Ice::Object* upCast(::omero::model::Details*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Details*);

::Ice::Object* upCast(::omero::model::ExperimenterGroup*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::ExperimenterGroup*);

}

namespace omero
{

namespace model
{

typedef ::IceInternal::Handle< ::omero::model::GroupExperimenterMap> GroupExperimenterMapPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::GroupExperimenterMap> GroupExperimenterMapPrx;

void __read(::IceInternal::BasicStream*, GroupExperimenterMapPrx&);
void __patch__GroupExperimenterMapPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Experimenter> ExperimenterPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Experimenter> ExperimenterPrx;

void __read(::IceInternal::BasicStream*, ExperimenterPrx&);
void __patch__ExperimenterPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::ExperimenterGroupAnnotationLink> ExperimenterGroupAnnotationLinkPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::ExperimenterGroupAnnotationLink> ExperimenterGroupAnnotationLinkPrx;

void __read(::IceInternal::BasicStream*, ExperimenterGroupAnnotationLinkPrx&);
void __patch__ExperimenterGroupAnnotationLinkPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Annotation> AnnotationPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Annotation> AnnotationPrx;

void __read(::IceInternal::BasicStream*, AnnotationPrx&);
void __patch__AnnotationPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Details> DetailsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Details> DetailsPrx;

void __read(::IceInternal::BasicStream*, DetailsPrx&);
void __patch__DetailsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::ExperimenterGroup> ExperimenterGroupPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::ExperimenterGroup> ExperimenterGroupPrx;

void __read(::IceInternal::BasicStream*, ExperimenterGroupPrx&);
void __patch__ExperimenterGroupPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace omero
{

namespace model
{

typedef ::std::vector< ::omero::model::GroupExperimenterMapPtr> ExperimenterGroupGroupExperimenterMapSeq;
void __writeExperimenterGroupGroupExperimenterMapSeq(::IceInternal::BasicStream*, const ::omero::model::GroupExperimenterMapPtr*, const ::omero::model::GroupExperimenterMapPtr*);
void __readExperimenterGroupGroupExperimenterMapSeq(::IceInternal::BasicStream*, ExperimenterGroupGroupExperimenterMapSeq&);

typedef ::std::vector< ::omero::model::ExperimenterPtr> ExperimenterGroupLinkedExperimenterSeq;
void __writeExperimenterGroupLinkedExperimenterSeq(::IceInternal::BasicStream*, const ::omero::model::ExperimenterPtr*, const ::omero::model::ExperimenterPtr*);
void __readExperimenterGroupLinkedExperimenterSeq(::IceInternal::BasicStream*, ExperimenterGroupLinkedExperimenterSeq&);

typedef ::std::vector< ::omero::model::ExperimenterGroupAnnotationLinkPtr> ExperimenterGroupAnnotationLinksSeq;
void __writeExperimenterGroupAnnotationLinksSeq(::IceInternal::BasicStream*, const ::omero::model::ExperimenterGroupAnnotationLinkPtr*, const ::omero::model::ExperimenterGroupAnnotationLinkPtr*);
void __readExperimenterGroupAnnotationLinksSeq(::IceInternal::BasicStream*, ExperimenterGroupAnnotationLinksSeq&);

typedef ::std::vector< ::omero::model::AnnotationPtr> ExperimenterGroupLinkedAnnotationSeq;
void __writeExperimenterGroupLinkedAnnotationSeq(::IceInternal::BasicStream*, const ::omero::model::AnnotationPtr*, const ::omero::model::AnnotationPtr*);
void __readExperimenterGroupLinkedAnnotationSeq(::IceInternal::BasicStream*, ExperimenterGroupLinkedAnnotationSeq&);

}

}

namespace IceProxy
{

namespace omero
{

namespace model
{

class ExperimenterGroup : virtual public ::IceProxy::omero::model::IObject
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

    ::omero::model::ExperimenterGroupGroupExperimenterMapSeq copyGroupExperimenterMap()
    {
        return copyGroupExperimenterMap(0);
    }
    ::omero::model::ExperimenterGroupGroupExperimenterMapSeq copyGroupExperimenterMap(const ::Ice::Context& __ctx)
    {
        return copyGroupExperimenterMap(&__ctx);
    }
    
private:

    ::omero::model::ExperimenterGroupGroupExperimenterMapSeq copyGroupExperimenterMap(const ::Ice::Context*);
    
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

    void addAllGroupExperimenterMapSet(const ::omero::model::ExperimenterGroupGroupExperimenterMapSeq& targets)
    {
        addAllGroupExperimenterMapSet(targets, 0);
    }
    void addAllGroupExperimenterMapSet(const ::omero::model::ExperimenterGroupGroupExperimenterMapSeq& targets, const ::Ice::Context& __ctx)
    {
        addAllGroupExperimenterMapSet(targets, &__ctx);
    }
    
private:

    void addAllGroupExperimenterMapSet(const ::omero::model::ExperimenterGroupGroupExperimenterMapSeq&, const ::Ice::Context*);
    
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

    void removeAllGroupExperimenterMapSet(const ::omero::model::ExperimenterGroupGroupExperimenterMapSeq& targets)
    {
        removeAllGroupExperimenterMapSet(targets, 0);
    }
    void removeAllGroupExperimenterMapSet(const ::omero::model::ExperimenterGroupGroupExperimenterMapSeq& targets, const ::Ice::Context& __ctx)
    {
        removeAllGroupExperimenterMapSet(targets, &__ctx);
    }
    
private:

    void removeAllGroupExperimenterMapSet(const ::omero::model::ExperimenterGroupGroupExperimenterMapSeq&, const ::Ice::Context*);
    
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

    void reloadGroupExperimenterMap(const ::omero::model::ExperimenterGroupPtr& toCopy)
    {
        reloadGroupExperimenterMap(toCopy, 0);
    }
    void reloadGroupExperimenterMap(const ::omero::model::ExperimenterGroupPtr& toCopy, const ::Ice::Context& __ctx)
    {
        reloadGroupExperimenterMap(toCopy, &__ctx);
    }
    
private:

    void reloadGroupExperimenterMap(const ::omero::model::ExperimenterGroupPtr&, const ::Ice::Context*);
    
public:

    ::omero::model::GroupExperimenterMapPtr linkExperimenter(const ::omero::model::ExperimenterPtr& addition)
    {
        return linkExperimenter(addition, 0);
    }
    ::omero::model::GroupExperimenterMapPtr linkExperimenter(const ::omero::model::ExperimenterPtr& addition, const ::Ice::Context& __ctx)
    {
        return linkExperimenter(addition, &__ctx);
    }
    
private:

    ::omero::model::GroupExperimenterMapPtr linkExperimenter(const ::omero::model::ExperimenterPtr&, const ::Ice::Context*);
    
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

    ::omero::model::ExperimenterGroupGroupExperimenterMapSeq findGroupExperimenterMap(const ::omero::model::ExperimenterPtr& removal)
    {
        return findGroupExperimenterMap(removal, 0);
    }
    ::omero::model::ExperimenterGroupGroupExperimenterMapSeq findGroupExperimenterMap(const ::omero::model::ExperimenterPtr& removal, const ::Ice::Context& __ctx)
    {
        return findGroupExperimenterMap(removal, &__ctx);
    }
    
private:

    ::omero::model::ExperimenterGroupGroupExperimenterMapSeq findGroupExperimenterMap(const ::omero::model::ExperimenterPtr&, const ::Ice::Context*);
    
public:

    void unlinkExperimenter(const ::omero::model::ExperimenterPtr& removal)
    {
        unlinkExperimenter(removal, 0);
    }
    void unlinkExperimenter(const ::omero::model::ExperimenterPtr& removal, const ::Ice::Context& __ctx)
    {
        unlinkExperimenter(removal, &__ctx);
    }
    
private:

    void unlinkExperimenter(const ::omero::model::ExperimenterPtr&, const ::Ice::Context*);
    
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

    ::omero::model::ExperimenterGroupLinkedExperimenterSeq linkedExperimenterList()
    {
        return linkedExperimenterList(0);
    }
    ::omero::model::ExperimenterGroupLinkedExperimenterSeq linkedExperimenterList(const ::Ice::Context& __ctx)
    {
        return linkedExperimenterList(&__ctx);
    }
    
private:

    ::omero::model::ExperimenterGroupLinkedExperimenterSeq linkedExperimenterList(const ::Ice::Context*);
    
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

    ::omero::model::ExperimenterGroupAnnotationLinksSeq copyAnnotationLinks()
    {
        return copyAnnotationLinks(0);
    }
    ::omero::model::ExperimenterGroupAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context& __ctx)
    {
        return copyAnnotationLinks(&__ctx);
    }
    
private:

    ::omero::model::ExperimenterGroupAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*);
    
public:

    void addExperimenterGroupAnnotationLink(const ::omero::model::ExperimenterGroupAnnotationLinkPtr& target)
    {
        addExperimenterGroupAnnotationLink(target, 0);
    }
    void addExperimenterGroupAnnotationLink(const ::omero::model::ExperimenterGroupAnnotationLinkPtr& target, const ::Ice::Context& __ctx)
    {
        addExperimenterGroupAnnotationLink(target, &__ctx);
    }
    
private:

    void addExperimenterGroupAnnotationLink(const ::omero::model::ExperimenterGroupAnnotationLinkPtr&, const ::Ice::Context*);
    
public:

    void addAllExperimenterGroupAnnotationLinkSet(const ::omero::model::ExperimenterGroupAnnotationLinksSeq& targets)
    {
        addAllExperimenterGroupAnnotationLinkSet(targets, 0);
    }
    void addAllExperimenterGroupAnnotationLinkSet(const ::omero::model::ExperimenterGroupAnnotationLinksSeq& targets, const ::Ice::Context& __ctx)
    {
        addAllExperimenterGroupAnnotationLinkSet(targets, &__ctx);
    }
    
private:

    void addAllExperimenterGroupAnnotationLinkSet(const ::omero::model::ExperimenterGroupAnnotationLinksSeq&, const ::Ice::Context*);
    
public:

    void removeExperimenterGroupAnnotationLink(const ::omero::model::ExperimenterGroupAnnotationLinkPtr& theTarget)
    {
        removeExperimenterGroupAnnotationLink(theTarget, 0);
    }
    void removeExperimenterGroupAnnotationLink(const ::omero::model::ExperimenterGroupAnnotationLinkPtr& theTarget, const ::Ice::Context& __ctx)
    {
        removeExperimenterGroupAnnotationLink(theTarget, &__ctx);
    }
    
private:

    void removeExperimenterGroupAnnotationLink(const ::omero::model::ExperimenterGroupAnnotationLinkPtr&, const ::Ice::Context*);
    
public:

    void removeAllExperimenterGroupAnnotationLinkSet(const ::omero::model::ExperimenterGroupAnnotationLinksSeq& targets)
    {
        removeAllExperimenterGroupAnnotationLinkSet(targets, 0);
    }
    void removeAllExperimenterGroupAnnotationLinkSet(const ::omero::model::ExperimenterGroupAnnotationLinksSeq& targets, const ::Ice::Context& __ctx)
    {
        removeAllExperimenterGroupAnnotationLinkSet(targets, &__ctx);
    }
    
private:

    void removeAllExperimenterGroupAnnotationLinkSet(const ::omero::model::ExperimenterGroupAnnotationLinksSeq&, const ::Ice::Context*);
    
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

    void reloadAnnotationLinks(const ::omero::model::ExperimenterGroupPtr& toCopy)
    {
        reloadAnnotationLinks(toCopy, 0);
    }
    void reloadAnnotationLinks(const ::omero::model::ExperimenterGroupPtr& toCopy, const ::Ice::Context& __ctx)
    {
        reloadAnnotationLinks(toCopy, &__ctx);
    }
    
private:

    void reloadAnnotationLinks(const ::omero::model::ExperimenterGroupPtr&, const ::Ice::Context*);
    
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

    ::omero::model::ExperimenterGroupAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr& addition)
    {
        return linkAnnotation(addition, 0);
    }
    ::omero::model::ExperimenterGroupAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr& addition, const ::Ice::Context& __ctx)
    {
        return linkAnnotation(addition, &__ctx);
    }
    
private:

    ::omero::model::ExperimenterGroupAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);
    
public:

    void addExperimenterGroupAnnotationLinkToBoth(const ::omero::model::ExperimenterGroupAnnotationLinkPtr& link, bool bothSides)
    {
        addExperimenterGroupAnnotationLinkToBoth(link, bothSides, 0);
    }
    void addExperimenterGroupAnnotationLinkToBoth(const ::omero::model::ExperimenterGroupAnnotationLinkPtr& link, bool bothSides, const ::Ice::Context& __ctx)
    {
        addExperimenterGroupAnnotationLinkToBoth(link, bothSides, &__ctx);
    }
    
private:

    void addExperimenterGroupAnnotationLinkToBoth(const ::omero::model::ExperimenterGroupAnnotationLinkPtr&, bool, const ::Ice::Context*);
    
public:

    ::omero::model::ExperimenterGroupAnnotationLinksSeq findExperimenterGroupAnnotationLink(const ::omero::model::AnnotationPtr& removal)
    {
        return findExperimenterGroupAnnotationLink(removal, 0);
    }
    ::omero::model::ExperimenterGroupAnnotationLinksSeq findExperimenterGroupAnnotationLink(const ::omero::model::AnnotationPtr& removal, const ::Ice::Context& __ctx)
    {
        return findExperimenterGroupAnnotationLink(removal, &__ctx);
    }
    
private:

    ::omero::model::ExperimenterGroupAnnotationLinksSeq findExperimenterGroupAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);
    
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

    void removeExperimenterGroupAnnotationLinkFromBoth(const ::omero::model::ExperimenterGroupAnnotationLinkPtr& link, bool bothSides)
    {
        removeExperimenterGroupAnnotationLinkFromBoth(link, bothSides, 0);
    }
    void removeExperimenterGroupAnnotationLinkFromBoth(const ::omero::model::ExperimenterGroupAnnotationLinkPtr& link, bool bothSides, const ::Ice::Context& __ctx)
    {
        removeExperimenterGroupAnnotationLinkFromBoth(link, bothSides, &__ctx);
    }
    
private:

    void removeExperimenterGroupAnnotationLinkFromBoth(const ::omero::model::ExperimenterGroupAnnotationLinkPtr&, bool, const ::Ice::Context*);
    
public:

    ::omero::model::ExperimenterGroupLinkedAnnotationSeq linkedAnnotationList()
    {
        return linkedAnnotationList(0);
    }
    ::omero::model::ExperimenterGroupLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context& __ctx)
    {
        return linkedAnnotationList(&__ctx);
    }
    
private:

    ::omero::model::ExperimenterGroupLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*);
    
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
    
    ::IceInternal::ProxyHandle<ExperimenterGroup> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ExperimenterGroup*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<ExperimenterGroup*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ExperimenterGroup> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ExperimenterGroup*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<ExperimenterGroup*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ExperimenterGroup> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ExperimenterGroup*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<ExperimenterGroup*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ExperimenterGroup> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ExperimenterGroup*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<ExperimenterGroup*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ExperimenterGroup> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ExperimenterGroup*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<ExperimenterGroup*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ExperimenterGroup> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ExperimenterGroup*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<ExperimenterGroup*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ExperimenterGroup> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ExperimenterGroup*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<ExperimenterGroup*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ExperimenterGroup> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ExperimenterGroup*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<ExperimenterGroup*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ExperimenterGroup> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ExperimenterGroup*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<ExperimenterGroup*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ExperimenterGroup> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ExperimenterGroup*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<ExperimenterGroup*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ExperimenterGroup> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ExperimenterGroup*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<ExperimenterGroup*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ExperimenterGroup> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ExperimenterGroup*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<ExperimenterGroup*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ExperimenterGroup> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ExperimenterGroup*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<ExperimenterGroup*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ExperimenterGroup> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ExperimenterGroup*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<ExperimenterGroup*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ExperimenterGroup> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ExperimenterGroup*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<ExperimenterGroup*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ExperimenterGroup> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ExperimenterGroup*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<ExperimenterGroup*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ExperimenterGroup> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ExperimenterGroup*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<ExperimenterGroup*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ExperimenterGroup> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ExperimenterGroup*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<ExperimenterGroup*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ExperimenterGroup> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ExperimenterGroup*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<ExperimenterGroup*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class ExperimenterGroup : virtual public ::IceDelegate::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*) = 0;

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getName(const ::Ice::Context*) = 0;

    virtual void setName(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual void unloadGroupExperimenterMap(const ::Ice::Context*) = 0;

    virtual ::Ice::Int sizeOfGroupExperimenterMap(const ::Ice::Context*) = 0;

    virtual ::omero::model::ExperimenterGroupGroupExperimenterMapSeq copyGroupExperimenterMap(const ::Ice::Context*) = 0;

    virtual void addGroupExperimenterMap(const ::omero::model::GroupExperimenterMapPtr&, const ::Ice::Context*) = 0;

    virtual void addAllGroupExperimenterMapSet(const ::omero::model::ExperimenterGroupGroupExperimenterMapSeq&, const ::Ice::Context*) = 0;

    virtual void removeGroupExperimenterMap(const ::omero::model::GroupExperimenterMapPtr&, const ::Ice::Context*) = 0;

    virtual void removeAllGroupExperimenterMapSet(const ::omero::model::ExperimenterGroupGroupExperimenterMapSeq&, const ::Ice::Context*) = 0;

    virtual void clearGroupExperimenterMap(const ::Ice::Context*) = 0;

    virtual void reloadGroupExperimenterMap(const ::omero::model::ExperimenterGroupPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::GroupExperimenterMapPtr linkExperimenter(const ::omero::model::ExperimenterPtr&, const ::Ice::Context*) = 0;

    virtual void addGroupExperimenterMapToBoth(const ::omero::model::GroupExperimenterMapPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::ExperimenterGroupGroupExperimenterMapSeq findGroupExperimenterMap(const ::omero::model::ExperimenterPtr&, const ::Ice::Context*) = 0;

    virtual void unlinkExperimenter(const ::omero::model::ExperimenterPtr&, const ::Ice::Context*) = 0;

    virtual void removeGroupExperimenterMapFromBoth(const ::omero::model::GroupExperimenterMapPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::ExperimenterGroupLinkedExperimenterSeq linkedExperimenterList(const ::Ice::Context*) = 0;

    virtual void unloadAnnotationLinks(const ::Ice::Context*) = 0;

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Context*) = 0;

    virtual ::omero::model::ExperimenterGroupAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*) = 0;

    virtual void addExperimenterGroupAnnotationLink(const ::omero::model::ExperimenterGroupAnnotationLinkPtr&, const ::Ice::Context*) = 0;

    virtual void addAllExperimenterGroupAnnotationLinkSet(const ::omero::model::ExperimenterGroupAnnotationLinksSeq&, const ::Ice::Context*) = 0;

    virtual void removeExperimenterGroupAnnotationLink(const ::omero::model::ExperimenterGroupAnnotationLinkPtr&, const ::Ice::Context*) = 0;

    virtual void removeAllExperimenterGroupAnnotationLinkSet(const ::omero::model::ExperimenterGroupAnnotationLinksSeq&, const ::Ice::Context*) = 0;

    virtual void clearAnnotationLinks(const ::Ice::Context*) = 0;

    virtual void reloadAnnotationLinks(const ::omero::model::ExperimenterGroupPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Context*) = 0;

    virtual ::omero::model::ExperimenterGroupAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*) = 0;

    virtual void addExperimenterGroupAnnotationLinkToBoth(const ::omero::model::ExperimenterGroupAnnotationLinkPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::ExperimenterGroupAnnotationLinksSeq findExperimenterGroupAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*) = 0;

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*) = 0;

    virtual void removeExperimenterGroupAnnotationLinkFromBoth(const ::omero::model::ExperimenterGroupAnnotationLinkPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::ExperimenterGroupLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*) = 0;

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

class ExperimenterGroup : virtual public ::IceDelegate::omero::model::ExperimenterGroup,
                          virtual public ::IceDelegateM::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getName(const ::Ice::Context*);

    virtual void setName(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual void unloadGroupExperimenterMap(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfGroupExperimenterMap(const ::Ice::Context*);

    virtual ::omero::model::ExperimenterGroupGroupExperimenterMapSeq copyGroupExperimenterMap(const ::Ice::Context*);

    virtual void addGroupExperimenterMap(const ::omero::model::GroupExperimenterMapPtr&, const ::Ice::Context*);

    virtual void addAllGroupExperimenterMapSet(const ::omero::model::ExperimenterGroupGroupExperimenterMapSeq&, const ::Ice::Context*);

    virtual void removeGroupExperimenterMap(const ::omero::model::GroupExperimenterMapPtr&, const ::Ice::Context*);

    virtual void removeAllGroupExperimenterMapSet(const ::omero::model::ExperimenterGroupGroupExperimenterMapSeq&, const ::Ice::Context*);

    virtual void clearGroupExperimenterMap(const ::Ice::Context*);

    virtual void reloadGroupExperimenterMap(const ::omero::model::ExperimenterGroupPtr&, const ::Ice::Context*);

    virtual ::omero::model::GroupExperimenterMapPtr linkExperimenter(const ::omero::model::ExperimenterPtr&, const ::Ice::Context*);

    virtual void addGroupExperimenterMapToBoth(const ::omero::model::GroupExperimenterMapPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::ExperimenterGroupGroupExperimenterMapSeq findGroupExperimenterMap(const ::omero::model::ExperimenterPtr&, const ::Ice::Context*);

    virtual void unlinkExperimenter(const ::omero::model::ExperimenterPtr&, const ::Ice::Context*);

    virtual void removeGroupExperimenterMapFromBoth(const ::omero::model::GroupExperimenterMapPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::ExperimenterGroupLinkedExperimenterSeq linkedExperimenterList(const ::Ice::Context*);

    virtual void unloadAnnotationLinks(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Context*);

    virtual ::omero::model::ExperimenterGroupAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*);

    virtual void addExperimenterGroupAnnotationLink(const ::omero::model::ExperimenterGroupAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void addAllExperimenterGroupAnnotationLinkSet(const ::omero::model::ExperimenterGroupAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void removeExperimenterGroupAnnotationLink(const ::omero::model::ExperimenterGroupAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void removeAllExperimenterGroupAnnotationLinkSet(const ::omero::model::ExperimenterGroupAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void clearAnnotationLinks(const ::Ice::Context*);

    virtual void reloadAnnotationLinks(const ::omero::model::ExperimenterGroupPtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::ExperimenterGroupAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void addExperimenterGroupAnnotationLinkToBoth(const ::omero::model::ExperimenterGroupAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::ExperimenterGroupAnnotationLinksSeq findExperimenterGroupAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void removeExperimenterGroupAnnotationLinkFromBoth(const ::omero::model::ExperimenterGroupAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::ExperimenterGroupLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*);

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

class ExperimenterGroup : virtual public ::IceDelegate::omero::model::ExperimenterGroup,
                          virtual public ::IceDelegateD::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getName(const ::Ice::Context*);

    virtual void setName(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual void unloadGroupExperimenterMap(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfGroupExperimenterMap(const ::Ice::Context*);

    virtual ::omero::model::ExperimenterGroupGroupExperimenterMapSeq copyGroupExperimenterMap(const ::Ice::Context*);

    virtual void addGroupExperimenterMap(const ::omero::model::GroupExperimenterMapPtr&, const ::Ice::Context*);

    virtual void addAllGroupExperimenterMapSet(const ::omero::model::ExperimenterGroupGroupExperimenterMapSeq&, const ::Ice::Context*);

    virtual void removeGroupExperimenterMap(const ::omero::model::GroupExperimenterMapPtr&, const ::Ice::Context*);

    virtual void removeAllGroupExperimenterMapSet(const ::omero::model::ExperimenterGroupGroupExperimenterMapSeq&, const ::Ice::Context*);

    virtual void clearGroupExperimenterMap(const ::Ice::Context*);

    virtual void reloadGroupExperimenterMap(const ::omero::model::ExperimenterGroupPtr&, const ::Ice::Context*);

    virtual ::omero::model::GroupExperimenterMapPtr linkExperimenter(const ::omero::model::ExperimenterPtr&, const ::Ice::Context*);

    virtual void addGroupExperimenterMapToBoth(const ::omero::model::GroupExperimenterMapPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::ExperimenterGroupGroupExperimenterMapSeq findGroupExperimenterMap(const ::omero::model::ExperimenterPtr&, const ::Ice::Context*);

    virtual void unlinkExperimenter(const ::omero::model::ExperimenterPtr&, const ::Ice::Context*);

    virtual void removeGroupExperimenterMapFromBoth(const ::omero::model::GroupExperimenterMapPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::ExperimenterGroupLinkedExperimenterSeq linkedExperimenterList(const ::Ice::Context*);

    virtual void unloadAnnotationLinks(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Context*);

    virtual ::omero::model::ExperimenterGroupAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*);

    virtual void addExperimenterGroupAnnotationLink(const ::omero::model::ExperimenterGroupAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void addAllExperimenterGroupAnnotationLinkSet(const ::omero::model::ExperimenterGroupAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void removeExperimenterGroupAnnotationLink(const ::omero::model::ExperimenterGroupAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void removeAllExperimenterGroupAnnotationLinkSet(const ::omero::model::ExperimenterGroupAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void clearAnnotationLinks(const ::Ice::Context*);

    virtual void reloadAnnotationLinks(const ::omero::model::ExperimenterGroupPtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::ExperimenterGroupAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void addExperimenterGroupAnnotationLinkToBoth(const ::omero::model::ExperimenterGroupAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::ExperimenterGroupAnnotationLinksSeq findExperimenterGroupAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void removeExperimenterGroupAnnotationLinkFromBoth(const ::omero::model::ExperimenterGroupAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::ExperimenterGroupLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*);

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

class ExperimenterGroup : virtual public ::omero::model::IObject
{
public:

    typedef ExperimenterGroupPrx ProxyType;
    typedef ExperimenterGroupPtr PointerType;
    
    ExperimenterGroup() {}
    ExperimenterGroup(const ::omero::RLongPtr&, const ::omero::model::DetailsPtr&, bool, const ::omero::RIntPtr&, const ::omero::RStringPtr&, const ::omero::model::ExperimenterGroupGroupExperimenterMapSeq&, bool, const ::omero::model::ExperimenterGroupAnnotationLinksSeq&, bool, const ::omero::sys::CountMap&, const ::omero::RStringPtr&);
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

    virtual void unloadGroupExperimenterMap(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unloadGroupExperimenterMap(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int sizeOfGroupExperimenterMap(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sizeOfGroupExperimenterMap(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ExperimenterGroupGroupExperimenterMapSeq copyGroupExperimenterMap(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copyGroupExperimenterMap(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addGroupExperimenterMap(const ::omero::model::GroupExperimenterMapPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addGroupExperimenterMap(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAllGroupExperimenterMapSet(const ::omero::model::ExperimenterGroupGroupExperimenterMapSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAllGroupExperimenterMapSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeGroupExperimenterMap(const ::omero::model::GroupExperimenterMapPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeGroupExperimenterMap(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeAllGroupExperimenterMapSet(const ::omero::model::ExperimenterGroupGroupExperimenterMapSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeAllGroupExperimenterMapSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void clearGroupExperimenterMap(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___clearGroupExperimenterMap(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void reloadGroupExperimenterMap(const ::omero::model::ExperimenterGroupPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___reloadGroupExperimenterMap(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::GroupExperimenterMapPtr linkExperimenter(const ::omero::model::ExperimenterPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkExperimenter(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addGroupExperimenterMapToBoth(const ::omero::model::GroupExperimenterMapPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addGroupExperimenterMapToBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ExperimenterGroupGroupExperimenterMapSeq findGroupExperimenterMap(const ::omero::model::ExperimenterPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___findGroupExperimenterMap(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unlinkExperimenter(const ::omero::model::ExperimenterPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unlinkExperimenter(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeGroupExperimenterMapFromBoth(const ::omero::model::GroupExperimenterMapPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeGroupExperimenterMapFromBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ExperimenterGroupLinkedExperimenterSeq linkedExperimenterList(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkedExperimenterList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unloadAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unloadAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sizeOfAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ExperimenterGroupAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copyAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addExperimenterGroupAnnotationLink(const ::omero::model::ExperimenterGroupAnnotationLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addExperimenterGroupAnnotationLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAllExperimenterGroupAnnotationLinkSet(const ::omero::model::ExperimenterGroupAnnotationLinksSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAllExperimenterGroupAnnotationLinkSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeExperimenterGroupAnnotationLink(const ::omero::model::ExperimenterGroupAnnotationLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeExperimenterGroupAnnotationLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeAllExperimenterGroupAnnotationLinkSet(const ::omero::model::ExperimenterGroupAnnotationLinksSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeAllExperimenterGroupAnnotationLinkSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void clearAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___clearAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void reloadAnnotationLinks(const ::omero::model::ExperimenterGroupPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___reloadAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getAnnotationLinksCountPerOwner(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ExperimenterGroupAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkAnnotation(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addExperimenterGroupAnnotationLinkToBoth(const ::omero::model::ExperimenterGroupAnnotationLinkPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addExperimenterGroupAnnotationLinkToBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ExperimenterGroupAnnotationLinksSeq findExperimenterGroupAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___findExperimenterGroupAnnotationLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unlinkAnnotation(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeExperimenterGroupAnnotationLinkFromBoth(const ::omero::model::ExperimenterGroupAnnotationLinkPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeExperimenterGroupAnnotationLinkFromBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ExperimenterGroupLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Current& = ::Ice::Current()) = 0;
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

    ::omero::model::ExperimenterGroupGroupExperimenterMapSeq groupExperimenterMapSeq;

    bool groupExperimenterMapLoaded;

    ::omero::model::ExperimenterGroupAnnotationLinksSeq annotationLinksSeq;

    bool annotationLinksLoaded;

    ::omero::sys::CountMap annotationLinksCountPerOwner;

    ::omero::RStringPtr description;
};

}

}

#endif
