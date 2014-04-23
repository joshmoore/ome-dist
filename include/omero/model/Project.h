// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `Project.ice'

#ifndef __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_Project_h__
#define __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_Project_h__

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

class ProjectDatasetLink;

class Dataset;

class ProjectAnnotationLink;

class Annotation;

class Details;

class Project;

}

}

}

namespace omero
{

namespace model
{

class ProjectDatasetLink;
bool operator==(const ProjectDatasetLink&, const ProjectDatasetLink&);
bool operator<(const ProjectDatasetLink&, const ProjectDatasetLink&);

class Dataset;
bool operator==(const Dataset&, const Dataset&);
bool operator<(const Dataset&, const Dataset&);

class ProjectAnnotationLink;
bool operator==(const ProjectAnnotationLink&, const ProjectAnnotationLink&);
bool operator<(const ProjectAnnotationLink&, const ProjectAnnotationLink&);

class Annotation;
bool operator==(const Annotation&, const Annotation&);
bool operator<(const Annotation&, const Annotation&);

class Details;
bool operator==(const Details&, const Details&);
bool operator<(const Details&, const Details&);

class Project;
bool operator==(const Project&, const Project&);
bool operator<(const Project&, const Project&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::model::ProjectDatasetLink*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::ProjectDatasetLink*);

::Ice::Object* upCast(::omero::model::Dataset*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Dataset*);

::Ice::Object* upCast(::omero::model::ProjectAnnotationLink*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::ProjectAnnotationLink*);

::Ice::Object* upCast(::omero::model::Annotation*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Annotation*);

::Ice::Object* upCast(::omero::model::Details*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Details*);

::Ice::Object* upCast(::omero::model::Project*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Project*);

}

namespace omero
{

namespace model
{

typedef ::IceInternal::Handle< ::omero::model::ProjectDatasetLink> ProjectDatasetLinkPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::ProjectDatasetLink> ProjectDatasetLinkPrx;

void __read(::IceInternal::BasicStream*, ProjectDatasetLinkPrx&);
void __patch__ProjectDatasetLinkPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Dataset> DatasetPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Dataset> DatasetPrx;

void __read(::IceInternal::BasicStream*, DatasetPrx&);
void __patch__DatasetPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::ProjectAnnotationLink> ProjectAnnotationLinkPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::ProjectAnnotationLink> ProjectAnnotationLinkPrx;

void __read(::IceInternal::BasicStream*, ProjectAnnotationLinkPrx&);
void __patch__ProjectAnnotationLinkPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Annotation> AnnotationPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Annotation> AnnotationPrx;

void __read(::IceInternal::BasicStream*, AnnotationPrx&);
void __patch__AnnotationPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Details> DetailsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Details> DetailsPrx;

void __read(::IceInternal::BasicStream*, DetailsPrx&);
void __patch__DetailsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Project> ProjectPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Project> ProjectPrx;

void __read(::IceInternal::BasicStream*, ProjectPrx&);
void __patch__ProjectPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace omero
{

namespace model
{

typedef ::std::vector< ::omero::model::ProjectDatasetLinkPtr> ProjectDatasetLinksSeq;
void __writeProjectDatasetLinksSeq(::IceInternal::BasicStream*, const ::omero::model::ProjectDatasetLinkPtr*, const ::omero::model::ProjectDatasetLinkPtr*);
void __readProjectDatasetLinksSeq(::IceInternal::BasicStream*, ProjectDatasetLinksSeq&);

typedef ::std::vector< ::omero::model::DatasetPtr> ProjectLinkedDatasetSeq;
void __writeProjectLinkedDatasetSeq(::IceInternal::BasicStream*, const ::omero::model::DatasetPtr*, const ::omero::model::DatasetPtr*);
void __readProjectLinkedDatasetSeq(::IceInternal::BasicStream*, ProjectLinkedDatasetSeq&);

typedef ::std::vector< ::omero::model::ProjectAnnotationLinkPtr> ProjectAnnotationLinksSeq;
void __writeProjectAnnotationLinksSeq(::IceInternal::BasicStream*, const ::omero::model::ProjectAnnotationLinkPtr*, const ::omero::model::ProjectAnnotationLinkPtr*);
void __readProjectAnnotationLinksSeq(::IceInternal::BasicStream*, ProjectAnnotationLinksSeq&);

typedef ::std::vector< ::omero::model::AnnotationPtr> ProjectLinkedAnnotationSeq;
void __writeProjectLinkedAnnotationSeq(::IceInternal::BasicStream*, const ::omero::model::AnnotationPtr*, const ::omero::model::AnnotationPtr*);
void __readProjectLinkedAnnotationSeq(::IceInternal::BasicStream*, ProjectLinkedAnnotationSeq&);

}

}

namespace IceProxy
{

namespace omero
{

namespace model
{

class Project : virtual public ::IceProxy::omero::model::IObject
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

    void unloadDatasetLinks()
    {
        unloadDatasetLinks(0);
    }
    void unloadDatasetLinks(const ::Ice::Context& __ctx)
    {
        unloadDatasetLinks(&__ctx);
    }
    
private:

    void unloadDatasetLinks(const ::Ice::Context*);
    
public:

    ::Ice::Int sizeOfDatasetLinks()
    {
        return sizeOfDatasetLinks(0);
    }
    ::Ice::Int sizeOfDatasetLinks(const ::Ice::Context& __ctx)
    {
        return sizeOfDatasetLinks(&__ctx);
    }
    
private:

    ::Ice::Int sizeOfDatasetLinks(const ::Ice::Context*);
    
public:

    ::omero::model::ProjectDatasetLinksSeq copyDatasetLinks()
    {
        return copyDatasetLinks(0);
    }
    ::omero::model::ProjectDatasetLinksSeq copyDatasetLinks(const ::Ice::Context& __ctx)
    {
        return copyDatasetLinks(&__ctx);
    }
    
private:

    ::omero::model::ProjectDatasetLinksSeq copyDatasetLinks(const ::Ice::Context*);
    
public:

    void addProjectDatasetLink(const ::omero::model::ProjectDatasetLinkPtr& target)
    {
        addProjectDatasetLink(target, 0);
    }
    void addProjectDatasetLink(const ::omero::model::ProjectDatasetLinkPtr& target, const ::Ice::Context& __ctx)
    {
        addProjectDatasetLink(target, &__ctx);
    }
    
private:

    void addProjectDatasetLink(const ::omero::model::ProjectDatasetLinkPtr&, const ::Ice::Context*);
    
public:

    void addAllProjectDatasetLinkSet(const ::omero::model::ProjectDatasetLinksSeq& targets)
    {
        addAllProjectDatasetLinkSet(targets, 0);
    }
    void addAllProjectDatasetLinkSet(const ::omero::model::ProjectDatasetLinksSeq& targets, const ::Ice::Context& __ctx)
    {
        addAllProjectDatasetLinkSet(targets, &__ctx);
    }
    
private:

    void addAllProjectDatasetLinkSet(const ::omero::model::ProjectDatasetLinksSeq&, const ::Ice::Context*);
    
public:

    void removeProjectDatasetLink(const ::omero::model::ProjectDatasetLinkPtr& theTarget)
    {
        removeProjectDatasetLink(theTarget, 0);
    }
    void removeProjectDatasetLink(const ::omero::model::ProjectDatasetLinkPtr& theTarget, const ::Ice::Context& __ctx)
    {
        removeProjectDatasetLink(theTarget, &__ctx);
    }
    
private:

    void removeProjectDatasetLink(const ::omero::model::ProjectDatasetLinkPtr&, const ::Ice::Context*);
    
public:

    void removeAllProjectDatasetLinkSet(const ::omero::model::ProjectDatasetLinksSeq& targets)
    {
        removeAllProjectDatasetLinkSet(targets, 0);
    }
    void removeAllProjectDatasetLinkSet(const ::omero::model::ProjectDatasetLinksSeq& targets, const ::Ice::Context& __ctx)
    {
        removeAllProjectDatasetLinkSet(targets, &__ctx);
    }
    
private:

    void removeAllProjectDatasetLinkSet(const ::omero::model::ProjectDatasetLinksSeq&, const ::Ice::Context*);
    
public:

    void clearDatasetLinks()
    {
        clearDatasetLinks(0);
    }
    void clearDatasetLinks(const ::Ice::Context& __ctx)
    {
        clearDatasetLinks(&__ctx);
    }
    
private:

    void clearDatasetLinks(const ::Ice::Context*);
    
public:

    void reloadDatasetLinks(const ::omero::model::ProjectPtr& toCopy)
    {
        reloadDatasetLinks(toCopy, 0);
    }
    void reloadDatasetLinks(const ::omero::model::ProjectPtr& toCopy, const ::Ice::Context& __ctx)
    {
        reloadDatasetLinks(toCopy, &__ctx);
    }
    
private:

    void reloadDatasetLinks(const ::omero::model::ProjectPtr&, const ::Ice::Context*);
    
public:

    ::omero::sys::CountMap getDatasetLinksCountPerOwner()
    {
        return getDatasetLinksCountPerOwner(0);
    }
    ::omero::sys::CountMap getDatasetLinksCountPerOwner(const ::Ice::Context& __ctx)
    {
        return getDatasetLinksCountPerOwner(&__ctx);
    }
    
private:

    ::omero::sys::CountMap getDatasetLinksCountPerOwner(const ::Ice::Context*);
    
public:

    ::omero::model::ProjectDatasetLinkPtr linkDataset(const ::omero::model::DatasetPtr& addition)
    {
        return linkDataset(addition, 0);
    }
    ::omero::model::ProjectDatasetLinkPtr linkDataset(const ::omero::model::DatasetPtr& addition, const ::Ice::Context& __ctx)
    {
        return linkDataset(addition, &__ctx);
    }
    
private:

    ::omero::model::ProjectDatasetLinkPtr linkDataset(const ::omero::model::DatasetPtr&, const ::Ice::Context*);
    
public:

    void addProjectDatasetLinkToBoth(const ::omero::model::ProjectDatasetLinkPtr& link, bool bothSides)
    {
        addProjectDatasetLinkToBoth(link, bothSides, 0);
    }
    void addProjectDatasetLinkToBoth(const ::omero::model::ProjectDatasetLinkPtr& link, bool bothSides, const ::Ice::Context& __ctx)
    {
        addProjectDatasetLinkToBoth(link, bothSides, &__ctx);
    }
    
private:

    void addProjectDatasetLinkToBoth(const ::omero::model::ProjectDatasetLinkPtr&, bool, const ::Ice::Context*);
    
public:

    ::omero::model::ProjectDatasetLinksSeq findProjectDatasetLink(const ::omero::model::DatasetPtr& removal)
    {
        return findProjectDatasetLink(removal, 0);
    }
    ::omero::model::ProjectDatasetLinksSeq findProjectDatasetLink(const ::omero::model::DatasetPtr& removal, const ::Ice::Context& __ctx)
    {
        return findProjectDatasetLink(removal, &__ctx);
    }
    
private:

    ::omero::model::ProjectDatasetLinksSeq findProjectDatasetLink(const ::omero::model::DatasetPtr&, const ::Ice::Context*);
    
public:

    void unlinkDataset(const ::omero::model::DatasetPtr& removal)
    {
        unlinkDataset(removal, 0);
    }
    void unlinkDataset(const ::omero::model::DatasetPtr& removal, const ::Ice::Context& __ctx)
    {
        unlinkDataset(removal, &__ctx);
    }
    
private:

    void unlinkDataset(const ::omero::model::DatasetPtr&, const ::Ice::Context*);
    
public:

    void removeProjectDatasetLinkFromBoth(const ::omero::model::ProjectDatasetLinkPtr& link, bool bothSides)
    {
        removeProjectDatasetLinkFromBoth(link, bothSides, 0);
    }
    void removeProjectDatasetLinkFromBoth(const ::omero::model::ProjectDatasetLinkPtr& link, bool bothSides, const ::Ice::Context& __ctx)
    {
        removeProjectDatasetLinkFromBoth(link, bothSides, &__ctx);
    }
    
private:

    void removeProjectDatasetLinkFromBoth(const ::omero::model::ProjectDatasetLinkPtr&, bool, const ::Ice::Context*);
    
public:

    ::omero::model::ProjectLinkedDatasetSeq linkedDatasetList()
    {
        return linkedDatasetList(0);
    }
    ::omero::model::ProjectLinkedDatasetSeq linkedDatasetList(const ::Ice::Context& __ctx)
    {
        return linkedDatasetList(&__ctx);
    }
    
private:

    ::omero::model::ProjectLinkedDatasetSeq linkedDatasetList(const ::Ice::Context*);
    
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

    ::omero::model::ProjectAnnotationLinksSeq copyAnnotationLinks()
    {
        return copyAnnotationLinks(0);
    }
    ::omero::model::ProjectAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context& __ctx)
    {
        return copyAnnotationLinks(&__ctx);
    }
    
private:

    ::omero::model::ProjectAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*);
    
public:

    void addProjectAnnotationLink(const ::omero::model::ProjectAnnotationLinkPtr& target)
    {
        addProjectAnnotationLink(target, 0);
    }
    void addProjectAnnotationLink(const ::omero::model::ProjectAnnotationLinkPtr& target, const ::Ice::Context& __ctx)
    {
        addProjectAnnotationLink(target, &__ctx);
    }
    
private:

    void addProjectAnnotationLink(const ::omero::model::ProjectAnnotationLinkPtr&, const ::Ice::Context*);
    
public:

    void addAllProjectAnnotationLinkSet(const ::omero::model::ProjectAnnotationLinksSeq& targets)
    {
        addAllProjectAnnotationLinkSet(targets, 0);
    }
    void addAllProjectAnnotationLinkSet(const ::omero::model::ProjectAnnotationLinksSeq& targets, const ::Ice::Context& __ctx)
    {
        addAllProjectAnnotationLinkSet(targets, &__ctx);
    }
    
private:

    void addAllProjectAnnotationLinkSet(const ::omero::model::ProjectAnnotationLinksSeq&, const ::Ice::Context*);
    
public:

    void removeProjectAnnotationLink(const ::omero::model::ProjectAnnotationLinkPtr& theTarget)
    {
        removeProjectAnnotationLink(theTarget, 0);
    }
    void removeProjectAnnotationLink(const ::omero::model::ProjectAnnotationLinkPtr& theTarget, const ::Ice::Context& __ctx)
    {
        removeProjectAnnotationLink(theTarget, &__ctx);
    }
    
private:

    void removeProjectAnnotationLink(const ::omero::model::ProjectAnnotationLinkPtr&, const ::Ice::Context*);
    
public:

    void removeAllProjectAnnotationLinkSet(const ::omero::model::ProjectAnnotationLinksSeq& targets)
    {
        removeAllProjectAnnotationLinkSet(targets, 0);
    }
    void removeAllProjectAnnotationLinkSet(const ::omero::model::ProjectAnnotationLinksSeq& targets, const ::Ice::Context& __ctx)
    {
        removeAllProjectAnnotationLinkSet(targets, &__ctx);
    }
    
private:

    void removeAllProjectAnnotationLinkSet(const ::omero::model::ProjectAnnotationLinksSeq&, const ::Ice::Context*);
    
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

    void reloadAnnotationLinks(const ::omero::model::ProjectPtr& toCopy)
    {
        reloadAnnotationLinks(toCopy, 0);
    }
    void reloadAnnotationLinks(const ::omero::model::ProjectPtr& toCopy, const ::Ice::Context& __ctx)
    {
        reloadAnnotationLinks(toCopy, &__ctx);
    }
    
private:

    void reloadAnnotationLinks(const ::omero::model::ProjectPtr&, const ::Ice::Context*);
    
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

    ::omero::model::ProjectAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr& addition)
    {
        return linkAnnotation(addition, 0);
    }
    ::omero::model::ProjectAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr& addition, const ::Ice::Context& __ctx)
    {
        return linkAnnotation(addition, &__ctx);
    }
    
private:

    ::omero::model::ProjectAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);
    
public:

    void addProjectAnnotationLinkToBoth(const ::omero::model::ProjectAnnotationLinkPtr& link, bool bothSides)
    {
        addProjectAnnotationLinkToBoth(link, bothSides, 0);
    }
    void addProjectAnnotationLinkToBoth(const ::omero::model::ProjectAnnotationLinkPtr& link, bool bothSides, const ::Ice::Context& __ctx)
    {
        addProjectAnnotationLinkToBoth(link, bothSides, &__ctx);
    }
    
private:

    void addProjectAnnotationLinkToBoth(const ::omero::model::ProjectAnnotationLinkPtr&, bool, const ::Ice::Context*);
    
public:

    ::omero::model::ProjectAnnotationLinksSeq findProjectAnnotationLink(const ::omero::model::AnnotationPtr& removal)
    {
        return findProjectAnnotationLink(removal, 0);
    }
    ::omero::model::ProjectAnnotationLinksSeq findProjectAnnotationLink(const ::omero::model::AnnotationPtr& removal, const ::Ice::Context& __ctx)
    {
        return findProjectAnnotationLink(removal, &__ctx);
    }
    
private:

    ::omero::model::ProjectAnnotationLinksSeq findProjectAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);
    
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

    void removeProjectAnnotationLinkFromBoth(const ::omero::model::ProjectAnnotationLinkPtr& link, bool bothSides)
    {
        removeProjectAnnotationLinkFromBoth(link, bothSides, 0);
    }
    void removeProjectAnnotationLinkFromBoth(const ::omero::model::ProjectAnnotationLinkPtr& link, bool bothSides, const ::Ice::Context& __ctx)
    {
        removeProjectAnnotationLinkFromBoth(link, bothSides, &__ctx);
    }
    
private:

    void removeProjectAnnotationLinkFromBoth(const ::omero::model::ProjectAnnotationLinkPtr&, bool, const ::Ice::Context*);
    
public:

    ::omero::model::ProjectLinkedAnnotationSeq linkedAnnotationList()
    {
        return linkedAnnotationList(0);
    }
    ::omero::model::ProjectLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context& __ctx)
    {
        return linkedAnnotationList(&__ctx);
    }
    
private:

    ::omero::model::ProjectLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*);
    
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
    
    ::IceInternal::ProxyHandle<Project> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Project*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Project*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Project> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Project*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Project*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Project> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Project*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Project*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Project> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Project*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Project*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Project> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Project*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Project*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Project> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Project*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Project*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Project> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Project*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Project*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Project> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Project*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Project*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Project> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Project*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Project*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Project> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Project*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Project*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Project> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Project*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Project*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Project> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Project*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Project*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Project> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Project*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Project*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Project> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Project*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Project*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Project> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Project*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Project*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Project> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Project*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Project*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Project> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Project*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Project*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Project> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Project*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Project*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Project> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Project*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Project*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class Project : virtual public ::IceDelegate::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*) = 0;

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual void unloadDatasetLinks(const ::Ice::Context*) = 0;

    virtual ::Ice::Int sizeOfDatasetLinks(const ::Ice::Context*) = 0;

    virtual ::omero::model::ProjectDatasetLinksSeq copyDatasetLinks(const ::Ice::Context*) = 0;

    virtual void addProjectDatasetLink(const ::omero::model::ProjectDatasetLinkPtr&, const ::Ice::Context*) = 0;

    virtual void addAllProjectDatasetLinkSet(const ::omero::model::ProjectDatasetLinksSeq&, const ::Ice::Context*) = 0;

    virtual void removeProjectDatasetLink(const ::omero::model::ProjectDatasetLinkPtr&, const ::Ice::Context*) = 0;

    virtual void removeAllProjectDatasetLinkSet(const ::omero::model::ProjectDatasetLinksSeq&, const ::Ice::Context*) = 0;

    virtual void clearDatasetLinks(const ::Ice::Context*) = 0;

    virtual void reloadDatasetLinks(const ::omero::model::ProjectPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::sys::CountMap getDatasetLinksCountPerOwner(const ::Ice::Context*) = 0;

    virtual ::omero::model::ProjectDatasetLinkPtr linkDataset(const ::omero::model::DatasetPtr&, const ::Ice::Context*) = 0;

    virtual void addProjectDatasetLinkToBoth(const ::omero::model::ProjectDatasetLinkPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::ProjectDatasetLinksSeq findProjectDatasetLink(const ::omero::model::DatasetPtr&, const ::Ice::Context*) = 0;

    virtual void unlinkDataset(const ::omero::model::DatasetPtr&, const ::Ice::Context*) = 0;

    virtual void removeProjectDatasetLinkFromBoth(const ::omero::model::ProjectDatasetLinkPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::ProjectLinkedDatasetSeq linkedDatasetList(const ::Ice::Context*) = 0;

    virtual void unloadAnnotationLinks(const ::Ice::Context*) = 0;

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Context*) = 0;

    virtual ::omero::model::ProjectAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*) = 0;

    virtual void addProjectAnnotationLink(const ::omero::model::ProjectAnnotationLinkPtr&, const ::Ice::Context*) = 0;

    virtual void addAllProjectAnnotationLinkSet(const ::omero::model::ProjectAnnotationLinksSeq&, const ::Ice::Context*) = 0;

    virtual void removeProjectAnnotationLink(const ::omero::model::ProjectAnnotationLinkPtr&, const ::Ice::Context*) = 0;

    virtual void removeAllProjectAnnotationLinkSet(const ::omero::model::ProjectAnnotationLinksSeq&, const ::Ice::Context*) = 0;

    virtual void clearAnnotationLinks(const ::Ice::Context*) = 0;

    virtual void reloadAnnotationLinks(const ::omero::model::ProjectPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Context*) = 0;

    virtual ::omero::model::ProjectAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*) = 0;

    virtual void addProjectAnnotationLinkToBoth(const ::omero::model::ProjectAnnotationLinkPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::ProjectAnnotationLinksSeq findProjectAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*) = 0;

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*) = 0;

    virtual void removeProjectAnnotationLinkFromBoth(const ::omero::model::ProjectAnnotationLinkPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::ProjectLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*) = 0;

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

class Project : virtual public ::IceDelegate::omero::model::Project,
                virtual public ::IceDelegateM::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual void unloadDatasetLinks(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfDatasetLinks(const ::Ice::Context*);

    virtual ::omero::model::ProjectDatasetLinksSeq copyDatasetLinks(const ::Ice::Context*);

    virtual void addProjectDatasetLink(const ::omero::model::ProjectDatasetLinkPtr&, const ::Ice::Context*);

    virtual void addAllProjectDatasetLinkSet(const ::omero::model::ProjectDatasetLinksSeq&, const ::Ice::Context*);

    virtual void removeProjectDatasetLink(const ::omero::model::ProjectDatasetLinkPtr&, const ::Ice::Context*);

    virtual void removeAllProjectDatasetLinkSet(const ::omero::model::ProjectDatasetLinksSeq&, const ::Ice::Context*);

    virtual void clearDatasetLinks(const ::Ice::Context*);

    virtual void reloadDatasetLinks(const ::omero::model::ProjectPtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getDatasetLinksCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::ProjectDatasetLinkPtr linkDataset(const ::omero::model::DatasetPtr&, const ::Ice::Context*);

    virtual void addProjectDatasetLinkToBoth(const ::omero::model::ProjectDatasetLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::ProjectDatasetLinksSeq findProjectDatasetLink(const ::omero::model::DatasetPtr&, const ::Ice::Context*);

    virtual void unlinkDataset(const ::omero::model::DatasetPtr&, const ::Ice::Context*);

    virtual void removeProjectDatasetLinkFromBoth(const ::omero::model::ProjectDatasetLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::ProjectLinkedDatasetSeq linkedDatasetList(const ::Ice::Context*);

    virtual void unloadAnnotationLinks(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Context*);

    virtual ::omero::model::ProjectAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*);

    virtual void addProjectAnnotationLink(const ::omero::model::ProjectAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void addAllProjectAnnotationLinkSet(const ::omero::model::ProjectAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void removeProjectAnnotationLink(const ::omero::model::ProjectAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void removeAllProjectAnnotationLinkSet(const ::omero::model::ProjectAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void clearAnnotationLinks(const ::Ice::Context*);

    virtual void reloadAnnotationLinks(const ::omero::model::ProjectPtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::ProjectAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void addProjectAnnotationLinkToBoth(const ::omero::model::ProjectAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::ProjectAnnotationLinksSeq findProjectAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void removeProjectAnnotationLinkFromBoth(const ::omero::model::ProjectAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::ProjectLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*);

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

class Project : virtual public ::IceDelegate::omero::model::Project,
                virtual public ::IceDelegateD::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual void unloadDatasetLinks(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfDatasetLinks(const ::Ice::Context*);

    virtual ::omero::model::ProjectDatasetLinksSeq copyDatasetLinks(const ::Ice::Context*);

    virtual void addProjectDatasetLink(const ::omero::model::ProjectDatasetLinkPtr&, const ::Ice::Context*);

    virtual void addAllProjectDatasetLinkSet(const ::omero::model::ProjectDatasetLinksSeq&, const ::Ice::Context*);

    virtual void removeProjectDatasetLink(const ::omero::model::ProjectDatasetLinkPtr&, const ::Ice::Context*);

    virtual void removeAllProjectDatasetLinkSet(const ::omero::model::ProjectDatasetLinksSeq&, const ::Ice::Context*);

    virtual void clearDatasetLinks(const ::Ice::Context*);

    virtual void reloadDatasetLinks(const ::omero::model::ProjectPtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getDatasetLinksCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::ProjectDatasetLinkPtr linkDataset(const ::omero::model::DatasetPtr&, const ::Ice::Context*);

    virtual void addProjectDatasetLinkToBoth(const ::omero::model::ProjectDatasetLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::ProjectDatasetLinksSeq findProjectDatasetLink(const ::omero::model::DatasetPtr&, const ::Ice::Context*);

    virtual void unlinkDataset(const ::omero::model::DatasetPtr&, const ::Ice::Context*);

    virtual void removeProjectDatasetLinkFromBoth(const ::omero::model::ProjectDatasetLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::ProjectLinkedDatasetSeq linkedDatasetList(const ::Ice::Context*);

    virtual void unloadAnnotationLinks(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Context*);

    virtual ::omero::model::ProjectAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*);

    virtual void addProjectAnnotationLink(const ::omero::model::ProjectAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void addAllProjectAnnotationLinkSet(const ::omero::model::ProjectAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void removeProjectAnnotationLink(const ::omero::model::ProjectAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void removeAllProjectAnnotationLinkSet(const ::omero::model::ProjectAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void clearAnnotationLinks(const ::Ice::Context*);

    virtual void reloadAnnotationLinks(const ::omero::model::ProjectPtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::ProjectAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void addProjectAnnotationLinkToBoth(const ::omero::model::ProjectAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::ProjectAnnotationLinksSeq findProjectAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void removeProjectAnnotationLinkFromBoth(const ::omero::model::ProjectAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::ProjectLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*);

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

class Project : virtual public ::omero::model::IObject
{
public:

    typedef ProjectPrx ProxyType;
    typedef ProjectPtr PointerType;
    
    Project() {}
    Project(const ::omero::RLongPtr&, const ::omero::model::DetailsPtr&, bool, const ::omero::RIntPtr&, const ::omero::model::ProjectDatasetLinksSeq&, bool, const ::omero::sys::CountMap&, const ::omero::model::ProjectAnnotationLinksSeq&, bool, const ::omero::sys::CountMap&, const ::omero::RStringPtr&, const ::omero::RStringPtr&);
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

    virtual void unloadDatasetLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unloadDatasetLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int sizeOfDatasetLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sizeOfDatasetLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ProjectDatasetLinksSeq copyDatasetLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copyDatasetLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addProjectDatasetLink(const ::omero::model::ProjectDatasetLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addProjectDatasetLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAllProjectDatasetLinkSet(const ::omero::model::ProjectDatasetLinksSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAllProjectDatasetLinkSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeProjectDatasetLink(const ::omero::model::ProjectDatasetLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeProjectDatasetLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeAllProjectDatasetLinkSet(const ::omero::model::ProjectDatasetLinksSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeAllProjectDatasetLinkSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void clearDatasetLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___clearDatasetLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void reloadDatasetLinks(const ::omero::model::ProjectPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___reloadDatasetLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::sys::CountMap getDatasetLinksCountPerOwner(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getDatasetLinksCountPerOwner(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ProjectDatasetLinkPtr linkDataset(const ::omero::model::DatasetPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkDataset(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addProjectDatasetLinkToBoth(const ::omero::model::ProjectDatasetLinkPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addProjectDatasetLinkToBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ProjectDatasetLinksSeq findProjectDatasetLink(const ::omero::model::DatasetPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___findProjectDatasetLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unlinkDataset(const ::omero::model::DatasetPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unlinkDataset(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeProjectDatasetLinkFromBoth(const ::omero::model::ProjectDatasetLinkPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeProjectDatasetLinkFromBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ProjectLinkedDatasetSeq linkedDatasetList(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkedDatasetList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unloadAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unloadAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sizeOfAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ProjectAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copyAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addProjectAnnotationLink(const ::omero::model::ProjectAnnotationLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addProjectAnnotationLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAllProjectAnnotationLinkSet(const ::omero::model::ProjectAnnotationLinksSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAllProjectAnnotationLinkSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeProjectAnnotationLink(const ::omero::model::ProjectAnnotationLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeProjectAnnotationLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeAllProjectAnnotationLinkSet(const ::omero::model::ProjectAnnotationLinksSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeAllProjectAnnotationLinkSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void clearAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___clearAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void reloadAnnotationLinks(const ::omero::model::ProjectPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___reloadAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getAnnotationLinksCountPerOwner(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ProjectAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkAnnotation(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addProjectAnnotationLinkToBoth(const ::omero::model::ProjectAnnotationLinkPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addProjectAnnotationLinkToBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ProjectAnnotationLinksSeq findProjectAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___findProjectAnnotationLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unlinkAnnotation(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeProjectAnnotationLinkFromBoth(const ::omero::model::ProjectAnnotationLinkPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeProjectAnnotationLinkFromBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ProjectLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Current& = ::Ice::Current()) = 0;
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

    ::omero::model::ProjectDatasetLinksSeq datasetLinksSeq;

    bool datasetLinksLoaded;

    ::omero::sys::CountMap datasetLinksCountPerOwner;

    ::omero::model::ProjectAnnotationLinksSeq annotationLinksSeq;

    bool annotationLinksLoaded;

    ::omero::sys::CountMap annotationLinksCountPerOwner;

    ::omero::RStringPtr name;

    ::omero::RStringPtr description;
};

}

}

#endif
