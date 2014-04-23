// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `Dataset.ice'

#ifndef __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_Dataset_h__
#define __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_Dataset_h__

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

class Project;

class DatasetImageLink;

class Image;

class DatasetAnnotationLink;

class Annotation;

class Details;

class Dataset;

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

class Project;
bool operator==(const Project&, const Project&);
bool operator<(const Project&, const Project&);

class DatasetImageLink;
bool operator==(const DatasetImageLink&, const DatasetImageLink&);
bool operator<(const DatasetImageLink&, const DatasetImageLink&);

class Image;
bool operator==(const Image&, const Image&);
bool operator<(const Image&, const Image&);

class DatasetAnnotationLink;
bool operator==(const DatasetAnnotationLink&, const DatasetAnnotationLink&);
bool operator<(const DatasetAnnotationLink&, const DatasetAnnotationLink&);

class Annotation;
bool operator==(const Annotation&, const Annotation&);
bool operator<(const Annotation&, const Annotation&);

class Details;
bool operator==(const Details&, const Details&);
bool operator<(const Details&, const Details&);

class Dataset;
bool operator==(const Dataset&, const Dataset&);
bool operator<(const Dataset&, const Dataset&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::model::ProjectDatasetLink*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::ProjectDatasetLink*);

::Ice::Object* upCast(::omero::model::Project*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Project*);

::Ice::Object* upCast(::omero::model::DatasetImageLink*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::DatasetImageLink*);

::Ice::Object* upCast(::omero::model::Image*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Image*);

::Ice::Object* upCast(::omero::model::DatasetAnnotationLink*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::DatasetAnnotationLink*);

::Ice::Object* upCast(::omero::model::Annotation*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Annotation*);

::Ice::Object* upCast(::omero::model::Details*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Details*);

::Ice::Object* upCast(::omero::model::Dataset*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Dataset*);

}

namespace omero
{

namespace model
{

typedef ::IceInternal::Handle< ::omero::model::ProjectDatasetLink> ProjectDatasetLinkPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::ProjectDatasetLink> ProjectDatasetLinkPrx;

void __read(::IceInternal::BasicStream*, ProjectDatasetLinkPrx&);
void __patch__ProjectDatasetLinkPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Project> ProjectPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Project> ProjectPrx;

void __read(::IceInternal::BasicStream*, ProjectPrx&);
void __patch__ProjectPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::DatasetImageLink> DatasetImageLinkPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::DatasetImageLink> DatasetImageLinkPrx;

void __read(::IceInternal::BasicStream*, DatasetImageLinkPrx&);
void __patch__DatasetImageLinkPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Image> ImagePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Image> ImagePrx;

void __read(::IceInternal::BasicStream*, ImagePrx&);
void __patch__ImagePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::DatasetAnnotationLink> DatasetAnnotationLinkPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::DatasetAnnotationLink> DatasetAnnotationLinkPrx;

void __read(::IceInternal::BasicStream*, DatasetAnnotationLinkPrx&);
void __patch__DatasetAnnotationLinkPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Annotation> AnnotationPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Annotation> AnnotationPrx;

void __read(::IceInternal::BasicStream*, AnnotationPrx&);
void __patch__AnnotationPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Details> DetailsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Details> DetailsPrx;

void __read(::IceInternal::BasicStream*, DetailsPrx&);
void __patch__DetailsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Dataset> DatasetPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Dataset> DatasetPrx;

void __read(::IceInternal::BasicStream*, DatasetPrx&);
void __patch__DatasetPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace omero
{

namespace model
{

typedef ::std::vector< ::omero::model::ProjectDatasetLinkPtr> DatasetProjectLinksSeq;
void __writeDatasetProjectLinksSeq(::IceInternal::BasicStream*, const ::omero::model::ProjectDatasetLinkPtr*, const ::omero::model::ProjectDatasetLinkPtr*);
void __readDatasetProjectLinksSeq(::IceInternal::BasicStream*, DatasetProjectLinksSeq&);

typedef ::std::vector< ::omero::model::ProjectPtr> DatasetLinkedProjectSeq;
void __writeDatasetLinkedProjectSeq(::IceInternal::BasicStream*, const ::omero::model::ProjectPtr*, const ::omero::model::ProjectPtr*);
void __readDatasetLinkedProjectSeq(::IceInternal::BasicStream*, DatasetLinkedProjectSeq&);

typedef ::std::vector< ::omero::model::DatasetImageLinkPtr> DatasetImageLinksSeq;
void __writeDatasetImageLinksSeq(::IceInternal::BasicStream*, const ::omero::model::DatasetImageLinkPtr*, const ::omero::model::DatasetImageLinkPtr*);
void __readDatasetImageLinksSeq(::IceInternal::BasicStream*, DatasetImageLinksSeq&);

typedef ::std::vector< ::omero::model::ImagePtr> DatasetLinkedImageSeq;
void __writeDatasetLinkedImageSeq(::IceInternal::BasicStream*, const ::omero::model::ImagePtr*, const ::omero::model::ImagePtr*);
void __readDatasetLinkedImageSeq(::IceInternal::BasicStream*, DatasetLinkedImageSeq&);

typedef ::std::vector< ::omero::model::DatasetAnnotationLinkPtr> DatasetAnnotationLinksSeq;
void __writeDatasetAnnotationLinksSeq(::IceInternal::BasicStream*, const ::omero::model::DatasetAnnotationLinkPtr*, const ::omero::model::DatasetAnnotationLinkPtr*);
void __readDatasetAnnotationLinksSeq(::IceInternal::BasicStream*, DatasetAnnotationLinksSeq&);

typedef ::std::vector< ::omero::model::AnnotationPtr> DatasetLinkedAnnotationSeq;
void __writeDatasetLinkedAnnotationSeq(::IceInternal::BasicStream*, const ::omero::model::AnnotationPtr*, const ::omero::model::AnnotationPtr*);
void __readDatasetLinkedAnnotationSeq(::IceInternal::BasicStream*, DatasetLinkedAnnotationSeq&);

}

}

namespace IceProxy
{

namespace omero
{

namespace model
{

class Dataset : virtual public ::IceProxy::omero::model::IObject
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

    void unloadProjectLinks()
    {
        unloadProjectLinks(0);
    }
    void unloadProjectLinks(const ::Ice::Context& __ctx)
    {
        unloadProjectLinks(&__ctx);
    }
    
private:

    void unloadProjectLinks(const ::Ice::Context*);
    
public:

    ::Ice::Int sizeOfProjectLinks()
    {
        return sizeOfProjectLinks(0);
    }
    ::Ice::Int sizeOfProjectLinks(const ::Ice::Context& __ctx)
    {
        return sizeOfProjectLinks(&__ctx);
    }
    
private:

    ::Ice::Int sizeOfProjectLinks(const ::Ice::Context*);
    
public:

    ::omero::model::DatasetProjectLinksSeq copyProjectLinks()
    {
        return copyProjectLinks(0);
    }
    ::omero::model::DatasetProjectLinksSeq copyProjectLinks(const ::Ice::Context& __ctx)
    {
        return copyProjectLinks(&__ctx);
    }
    
private:

    ::omero::model::DatasetProjectLinksSeq copyProjectLinks(const ::Ice::Context*);
    
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

    void addAllProjectDatasetLinkSet(const ::omero::model::DatasetProjectLinksSeq& targets)
    {
        addAllProjectDatasetLinkSet(targets, 0);
    }
    void addAllProjectDatasetLinkSet(const ::omero::model::DatasetProjectLinksSeq& targets, const ::Ice::Context& __ctx)
    {
        addAllProjectDatasetLinkSet(targets, &__ctx);
    }
    
private:

    void addAllProjectDatasetLinkSet(const ::omero::model::DatasetProjectLinksSeq&, const ::Ice::Context*);
    
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

    void removeAllProjectDatasetLinkSet(const ::omero::model::DatasetProjectLinksSeq& targets)
    {
        removeAllProjectDatasetLinkSet(targets, 0);
    }
    void removeAllProjectDatasetLinkSet(const ::omero::model::DatasetProjectLinksSeq& targets, const ::Ice::Context& __ctx)
    {
        removeAllProjectDatasetLinkSet(targets, &__ctx);
    }
    
private:

    void removeAllProjectDatasetLinkSet(const ::omero::model::DatasetProjectLinksSeq&, const ::Ice::Context*);
    
public:

    void clearProjectLinks()
    {
        clearProjectLinks(0);
    }
    void clearProjectLinks(const ::Ice::Context& __ctx)
    {
        clearProjectLinks(&__ctx);
    }
    
private:

    void clearProjectLinks(const ::Ice::Context*);
    
public:

    void reloadProjectLinks(const ::omero::model::DatasetPtr& toCopy)
    {
        reloadProjectLinks(toCopy, 0);
    }
    void reloadProjectLinks(const ::omero::model::DatasetPtr& toCopy, const ::Ice::Context& __ctx)
    {
        reloadProjectLinks(toCopy, &__ctx);
    }
    
private:

    void reloadProjectLinks(const ::omero::model::DatasetPtr&, const ::Ice::Context*);
    
public:

    ::omero::sys::CountMap getProjectLinksCountPerOwner()
    {
        return getProjectLinksCountPerOwner(0);
    }
    ::omero::sys::CountMap getProjectLinksCountPerOwner(const ::Ice::Context& __ctx)
    {
        return getProjectLinksCountPerOwner(&__ctx);
    }
    
private:

    ::omero::sys::CountMap getProjectLinksCountPerOwner(const ::Ice::Context*);
    
public:

    ::omero::model::ProjectDatasetLinkPtr linkProject(const ::omero::model::ProjectPtr& addition)
    {
        return linkProject(addition, 0);
    }
    ::omero::model::ProjectDatasetLinkPtr linkProject(const ::omero::model::ProjectPtr& addition, const ::Ice::Context& __ctx)
    {
        return linkProject(addition, &__ctx);
    }
    
private:

    ::omero::model::ProjectDatasetLinkPtr linkProject(const ::omero::model::ProjectPtr&, const ::Ice::Context*);
    
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

    ::omero::model::DatasetProjectLinksSeq findProjectDatasetLink(const ::omero::model::ProjectPtr& removal)
    {
        return findProjectDatasetLink(removal, 0);
    }
    ::omero::model::DatasetProjectLinksSeq findProjectDatasetLink(const ::omero::model::ProjectPtr& removal, const ::Ice::Context& __ctx)
    {
        return findProjectDatasetLink(removal, &__ctx);
    }
    
private:

    ::omero::model::DatasetProjectLinksSeq findProjectDatasetLink(const ::omero::model::ProjectPtr&, const ::Ice::Context*);
    
public:

    void unlinkProject(const ::omero::model::ProjectPtr& removal)
    {
        unlinkProject(removal, 0);
    }
    void unlinkProject(const ::omero::model::ProjectPtr& removal, const ::Ice::Context& __ctx)
    {
        unlinkProject(removal, &__ctx);
    }
    
private:

    void unlinkProject(const ::omero::model::ProjectPtr&, const ::Ice::Context*);
    
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

    ::omero::model::DatasetLinkedProjectSeq linkedProjectList()
    {
        return linkedProjectList(0);
    }
    ::omero::model::DatasetLinkedProjectSeq linkedProjectList(const ::Ice::Context& __ctx)
    {
        return linkedProjectList(&__ctx);
    }
    
private:

    ::omero::model::DatasetLinkedProjectSeq linkedProjectList(const ::Ice::Context*);
    
public:

    void unloadImageLinks()
    {
        unloadImageLinks(0);
    }
    void unloadImageLinks(const ::Ice::Context& __ctx)
    {
        unloadImageLinks(&__ctx);
    }
    
private:

    void unloadImageLinks(const ::Ice::Context*);
    
public:

    ::Ice::Int sizeOfImageLinks()
    {
        return sizeOfImageLinks(0);
    }
    ::Ice::Int sizeOfImageLinks(const ::Ice::Context& __ctx)
    {
        return sizeOfImageLinks(&__ctx);
    }
    
private:

    ::Ice::Int sizeOfImageLinks(const ::Ice::Context*);
    
public:

    ::omero::model::DatasetImageLinksSeq copyImageLinks()
    {
        return copyImageLinks(0);
    }
    ::omero::model::DatasetImageLinksSeq copyImageLinks(const ::Ice::Context& __ctx)
    {
        return copyImageLinks(&__ctx);
    }
    
private:

    ::omero::model::DatasetImageLinksSeq copyImageLinks(const ::Ice::Context*);
    
public:

    void addDatasetImageLink(const ::omero::model::DatasetImageLinkPtr& target)
    {
        addDatasetImageLink(target, 0);
    }
    void addDatasetImageLink(const ::omero::model::DatasetImageLinkPtr& target, const ::Ice::Context& __ctx)
    {
        addDatasetImageLink(target, &__ctx);
    }
    
private:

    void addDatasetImageLink(const ::omero::model::DatasetImageLinkPtr&, const ::Ice::Context*);
    
public:

    void addAllDatasetImageLinkSet(const ::omero::model::DatasetImageLinksSeq& targets)
    {
        addAllDatasetImageLinkSet(targets, 0);
    }
    void addAllDatasetImageLinkSet(const ::omero::model::DatasetImageLinksSeq& targets, const ::Ice::Context& __ctx)
    {
        addAllDatasetImageLinkSet(targets, &__ctx);
    }
    
private:

    void addAllDatasetImageLinkSet(const ::omero::model::DatasetImageLinksSeq&, const ::Ice::Context*);
    
public:

    void removeDatasetImageLink(const ::omero::model::DatasetImageLinkPtr& theTarget)
    {
        removeDatasetImageLink(theTarget, 0);
    }
    void removeDatasetImageLink(const ::omero::model::DatasetImageLinkPtr& theTarget, const ::Ice::Context& __ctx)
    {
        removeDatasetImageLink(theTarget, &__ctx);
    }
    
private:

    void removeDatasetImageLink(const ::omero::model::DatasetImageLinkPtr&, const ::Ice::Context*);
    
public:

    void removeAllDatasetImageLinkSet(const ::omero::model::DatasetImageLinksSeq& targets)
    {
        removeAllDatasetImageLinkSet(targets, 0);
    }
    void removeAllDatasetImageLinkSet(const ::omero::model::DatasetImageLinksSeq& targets, const ::Ice::Context& __ctx)
    {
        removeAllDatasetImageLinkSet(targets, &__ctx);
    }
    
private:

    void removeAllDatasetImageLinkSet(const ::omero::model::DatasetImageLinksSeq&, const ::Ice::Context*);
    
public:

    void clearImageLinks()
    {
        clearImageLinks(0);
    }
    void clearImageLinks(const ::Ice::Context& __ctx)
    {
        clearImageLinks(&__ctx);
    }
    
private:

    void clearImageLinks(const ::Ice::Context*);
    
public:

    void reloadImageLinks(const ::omero::model::DatasetPtr& toCopy)
    {
        reloadImageLinks(toCopy, 0);
    }
    void reloadImageLinks(const ::omero::model::DatasetPtr& toCopy, const ::Ice::Context& __ctx)
    {
        reloadImageLinks(toCopy, &__ctx);
    }
    
private:

    void reloadImageLinks(const ::omero::model::DatasetPtr&, const ::Ice::Context*);
    
public:

    ::omero::sys::CountMap getImageLinksCountPerOwner()
    {
        return getImageLinksCountPerOwner(0);
    }
    ::omero::sys::CountMap getImageLinksCountPerOwner(const ::Ice::Context& __ctx)
    {
        return getImageLinksCountPerOwner(&__ctx);
    }
    
private:

    ::omero::sys::CountMap getImageLinksCountPerOwner(const ::Ice::Context*);
    
public:

    ::omero::model::DatasetImageLinkPtr linkImage(const ::omero::model::ImagePtr& addition)
    {
        return linkImage(addition, 0);
    }
    ::omero::model::DatasetImageLinkPtr linkImage(const ::omero::model::ImagePtr& addition, const ::Ice::Context& __ctx)
    {
        return linkImage(addition, &__ctx);
    }
    
private:

    ::omero::model::DatasetImageLinkPtr linkImage(const ::omero::model::ImagePtr&, const ::Ice::Context*);
    
public:

    void addDatasetImageLinkToBoth(const ::omero::model::DatasetImageLinkPtr& link, bool bothSides)
    {
        addDatasetImageLinkToBoth(link, bothSides, 0);
    }
    void addDatasetImageLinkToBoth(const ::omero::model::DatasetImageLinkPtr& link, bool bothSides, const ::Ice::Context& __ctx)
    {
        addDatasetImageLinkToBoth(link, bothSides, &__ctx);
    }
    
private:

    void addDatasetImageLinkToBoth(const ::omero::model::DatasetImageLinkPtr&, bool, const ::Ice::Context*);
    
public:

    ::omero::model::DatasetImageLinksSeq findDatasetImageLink(const ::omero::model::ImagePtr& removal)
    {
        return findDatasetImageLink(removal, 0);
    }
    ::omero::model::DatasetImageLinksSeq findDatasetImageLink(const ::omero::model::ImagePtr& removal, const ::Ice::Context& __ctx)
    {
        return findDatasetImageLink(removal, &__ctx);
    }
    
private:

    ::omero::model::DatasetImageLinksSeq findDatasetImageLink(const ::omero::model::ImagePtr&, const ::Ice::Context*);
    
public:

    void unlinkImage(const ::omero::model::ImagePtr& removal)
    {
        unlinkImage(removal, 0);
    }
    void unlinkImage(const ::omero::model::ImagePtr& removal, const ::Ice::Context& __ctx)
    {
        unlinkImage(removal, &__ctx);
    }
    
private:

    void unlinkImage(const ::omero::model::ImagePtr&, const ::Ice::Context*);
    
public:

    void removeDatasetImageLinkFromBoth(const ::omero::model::DatasetImageLinkPtr& link, bool bothSides)
    {
        removeDatasetImageLinkFromBoth(link, bothSides, 0);
    }
    void removeDatasetImageLinkFromBoth(const ::omero::model::DatasetImageLinkPtr& link, bool bothSides, const ::Ice::Context& __ctx)
    {
        removeDatasetImageLinkFromBoth(link, bothSides, &__ctx);
    }
    
private:

    void removeDatasetImageLinkFromBoth(const ::omero::model::DatasetImageLinkPtr&, bool, const ::Ice::Context*);
    
public:

    ::omero::model::DatasetLinkedImageSeq linkedImageList()
    {
        return linkedImageList(0);
    }
    ::omero::model::DatasetLinkedImageSeq linkedImageList(const ::Ice::Context& __ctx)
    {
        return linkedImageList(&__ctx);
    }
    
private:

    ::omero::model::DatasetLinkedImageSeq linkedImageList(const ::Ice::Context*);
    
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

    ::omero::model::DatasetAnnotationLinksSeq copyAnnotationLinks()
    {
        return copyAnnotationLinks(0);
    }
    ::omero::model::DatasetAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context& __ctx)
    {
        return copyAnnotationLinks(&__ctx);
    }
    
private:

    ::omero::model::DatasetAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*);
    
public:

    void addDatasetAnnotationLink(const ::omero::model::DatasetAnnotationLinkPtr& target)
    {
        addDatasetAnnotationLink(target, 0);
    }
    void addDatasetAnnotationLink(const ::omero::model::DatasetAnnotationLinkPtr& target, const ::Ice::Context& __ctx)
    {
        addDatasetAnnotationLink(target, &__ctx);
    }
    
private:

    void addDatasetAnnotationLink(const ::omero::model::DatasetAnnotationLinkPtr&, const ::Ice::Context*);
    
public:

    void addAllDatasetAnnotationLinkSet(const ::omero::model::DatasetAnnotationLinksSeq& targets)
    {
        addAllDatasetAnnotationLinkSet(targets, 0);
    }
    void addAllDatasetAnnotationLinkSet(const ::omero::model::DatasetAnnotationLinksSeq& targets, const ::Ice::Context& __ctx)
    {
        addAllDatasetAnnotationLinkSet(targets, &__ctx);
    }
    
private:

    void addAllDatasetAnnotationLinkSet(const ::omero::model::DatasetAnnotationLinksSeq&, const ::Ice::Context*);
    
public:

    void removeDatasetAnnotationLink(const ::omero::model::DatasetAnnotationLinkPtr& theTarget)
    {
        removeDatasetAnnotationLink(theTarget, 0);
    }
    void removeDatasetAnnotationLink(const ::omero::model::DatasetAnnotationLinkPtr& theTarget, const ::Ice::Context& __ctx)
    {
        removeDatasetAnnotationLink(theTarget, &__ctx);
    }
    
private:

    void removeDatasetAnnotationLink(const ::omero::model::DatasetAnnotationLinkPtr&, const ::Ice::Context*);
    
public:

    void removeAllDatasetAnnotationLinkSet(const ::omero::model::DatasetAnnotationLinksSeq& targets)
    {
        removeAllDatasetAnnotationLinkSet(targets, 0);
    }
    void removeAllDatasetAnnotationLinkSet(const ::omero::model::DatasetAnnotationLinksSeq& targets, const ::Ice::Context& __ctx)
    {
        removeAllDatasetAnnotationLinkSet(targets, &__ctx);
    }
    
private:

    void removeAllDatasetAnnotationLinkSet(const ::omero::model::DatasetAnnotationLinksSeq&, const ::Ice::Context*);
    
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

    void reloadAnnotationLinks(const ::omero::model::DatasetPtr& toCopy)
    {
        reloadAnnotationLinks(toCopy, 0);
    }
    void reloadAnnotationLinks(const ::omero::model::DatasetPtr& toCopy, const ::Ice::Context& __ctx)
    {
        reloadAnnotationLinks(toCopy, &__ctx);
    }
    
private:

    void reloadAnnotationLinks(const ::omero::model::DatasetPtr&, const ::Ice::Context*);
    
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

    ::omero::model::DatasetAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr& addition)
    {
        return linkAnnotation(addition, 0);
    }
    ::omero::model::DatasetAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr& addition, const ::Ice::Context& __ctx)
    {
        return linkAnnotation(addition, &__ctx);
    }
    
private:

    ::omero::model::DatasetAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);
    
public:

    void addDatasetAnnotationLinkToBoth(const ::omero::model::DatasetAnnotationLinkPtr& link, bool bothSides)
    {
        addDatasetAnnotationLinkToBoth(link, bothSides, 0);
    }
    void addDatasetAnnotationLinkToBoth(const ::omero::model::DatasetAnnotationLinkPtr& link, bool bothSides, const ::Ice::Context& __ctx)
    {
        addDatasetAnnotationLinkToBoth(link, bothSides, &__ctx);
    }
    
private:

    void addDatasetAnnotationLinkToBoth(const ::omero::model::DatasetAnnotationLinkPtr&, bool, const ::Ice::Context*);
    
public:

    ::omero::model::DatasetAnnotationLinksSeq findDatasetAnnotationLink(const ::omero::model::AnnotationPtr& removal)
    {
        return findDatasetAnnotationLink(removal, 0);
    }
    ::omero::model::DatasetAnnotationLinksSeq findDatasetAnnotationLink(const ::omero::model::AnnotationPtr& removal, const ::Ice::Context& __ctx)
    {
        return findDatasetAnnotationLink(removal, &__ctx);
    }
    
private:

    ::omero::model::DatasetAnnotationLinksSeq findDatasetAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);
    
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

    void removeDatasetAnnotationLinkFromBoth(const ::omero::model::DatasetAnnotationLinkPtr& link, bool bothSides)
    {
        removeDatasetAnnotationLinkFromBoth(link, bothSides, 0);
    }
    void removeDatasetAnnotationLinkFromBoth(const ::omero::model::DatasetAnnotationLinkPtr& link, bool bothSides, const ::Ice::Context& __ctx)
    {
        removeDatasetAnnotationLinkFromBoth(link, bothSides, &__ctx);
    }
    
private:

    void removeDatasetAnnotationLinkFromBoth(const ::omero::model::DatasetAnnotationLinkPtr&, bool, const ::Ice::Context*);
    
public:

    ::omero::model::DatasetLinkedAnnotationSeq linkedAnnotationList()
    {
        return linkedAnnotationList(0);
    }
    ::omero::model::DatasetLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context& __ctx)
    {
        return linkedAnnotationList(&__ctx);
    }
    
private:

    ::omero::model::DatasetLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*);
    
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
    
    ::IceInternal::ProxyHandle<Dataset> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Dataset*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Dataset*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Dataset> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Dataset*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Dataset*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Dataset> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Dataset*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Dataset*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Dataset> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Dataset*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Dataset*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Dataset> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Dataset*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Dataset*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Dataset> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Dataset*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Dataset*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Dataset> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Dataset*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Dataset*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Dataset> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Dataset*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Dataset*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Dataset> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Dataset*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Dataset*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Dataset> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Dataset*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Dataset*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Dataset> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Dataset*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Dataset*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Dataset> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Dataset*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Dataset*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Dataset> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Dataset*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Dataset*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Dataset> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Dataset*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Dataset*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Dataset> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Dataset*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Dataset*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Dataset> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Dataset*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Dataset*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Dataset> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Dataset*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Dataset*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Dataset> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Dataset*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Dataset*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Dataset> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Dataset*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Dataset*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class Dataset : virtual public ::IceDelegate::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*) = 0;

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual void unloadProjectLinks(const ::Ice::Context*) = 0;

    virtual ::Ice::Int sizeOfProjectLinks(const ::Ice::Context*) = 0;

    virtual ::omero::model::DatasetProjectLinksSeq copyProjectLinks(const ::Ice::Context*) = 0;

    virtual void addProjectDatasetLink(const ::omero::model::ProjectDatasetLinkPtr&, const ::Ice::Context*) = 0;

    virtual void addAllProjectDatasetLinkSet(const ::omero::model::DatasetProjectLinksSeq&, const ::Ice::Context*) = 0;

    virtual void removeProjectDatasetLink(const ::omero::model::ProjectDatasetLinkPtr&, const ::Ice::Context*) = 0;

    virtual void removeAllProjectDatasetLinkSet(const ::omero::model::DatasetProjectLinksSeq&, const ::Ice::Context*) = 0;

    virtual void clearProjectLinks(const ::Ice::Context*) = 0;

    virtual void reloadProjectLinks(const ::omero::model::DatasetPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::sys::CountMap getProjectLinksCountPerOwner(const ::Ice::Context*) = 0;

    virtual ::omero::model::ProjectDatasetLinkPtr linkProject(const ::omero::model::ProjectPtr&, const ::Ice::Context*) = 0;

    virtual void addProjectDatasetLinkToBoth(const ::omero::model::ProjectDatasetLinkPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::DatasetProjectLinksSeq findProjectDatasetLink(const ::omero::model::ProjectPtr&, const ::Ice::Context*) = 0;

    virtual void unlinkProject(const ::omero::model::ProjectPtr&, const ::Ice::Context*) = 0;

    virtual void removeProjectDatasetLinkFromBoth(const ::omero::model::ProjectDatasetLinkPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::DatasetLinkedProjectSeq linkedProjectList(const ::Ice::Context*) = 0;

    virtual void unloadImageLinks(const ::Ice::Context*) = 0;

    virtual ::Ice::Int sizeOfImageLinks(const ::Ice::Context*) = 0;

    virtual ::omero::model::DatasetImageLinksSeq copyImageLinks(const ::Ice::Context*) = 0;

    virtual void addDatasetImageLink(const ::omero::model::DatasetImageLinkPtr&, const ::Ice::Context*) = 0;

    virtual void addAllDatasetImageLinkSet(const ::omero::model::DatasetImageLinksSeq&, const ::Ice::Context*) = 0;

    virtual void removeDatasetImageLink(const ::omero::model::DatasetImageLinkPtr&, const ::Ice::Context*) = 0;

    virtual void removeAllDatasetImageLinkSet(const ::omero::model::DatasetImageLinksSeq&, const ::Ice::Context*) = 0;

    virtual void clearImageLinks(const ::Ice::Context*) = 0;

    virtual void reloadImageLinks(const ::omero::model::DatasetPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::sys::CountMap getImageLinksCountPerOwner(const ::Ice::Context*) = 0;

    virtual ::omero::model::DatasetImageLinkPtr linkImage(const ::omero::model::ImagePtr&, const ::Ice::Context*) = 0;

    virtual void addDatasetImageLinkToBoth(const ::omero::model::DatasetImageLinkPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::DatasetImageLinksSeq findDatasetImageLink(const ::omero::model::ImagePtr&, const ::Ice::Context*) = 0;

    virtual void unlinkImage(const ::omero::model::ImagePtr&, const ::Ice::Context*) = 0;

    virtual void removeDatasetImageLinkFromBoth(const ::omero::model::DatasetImageLinkPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::DatasetLinkedImageSeq linkedImageList(const ::Ice::Context*) = 0;

    virtual void unloadAnnotationLinks(const ::Ice::Context*) = 0;

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Context*) = 0;

    virtual ::omero::model::DatasetAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*) = 0;

    virtual void addDatasetAnnotationLink(const ::omero::model::DatasetAnnotationLinkPtr&, const ::Ice::Context*) = 0;

    virtual void addAllDatasetAnnotationLinkSet(const ::omero::model::DatasetAnnotationLinksSeq&, const ::Ice::Context*) = 0;

    virtual void removeDatasetAnnotationLink(const ::omero::model::DatasetAnnotationLinkPtr&, const ::Ice::Context*) = 0;

    virtual void removeAllDatasetAnnotationLinkSet(const ::omero::model::DatasetAnnotationLinksSeq&, const ::Ice::Context*) = 0;

    virtual void clearAnnotationLinks(const ::Ice::Context*) = 0;

    virtual void reloadAnnotationLinks(const ::omero::model::DatasetPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Context*) = 0;

    virtual ::omero::model::DatasetAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*) = 0;

    virtual void addDatasetAnnotationLinkToBoth(const ::omero::model::DatasetAnnotationLinkPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::DatasetAnnotationLinksSeq findDatasetAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*) = 0;

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*) = 0;

    virtual void removeDatasetAnnotationLinkFromBoth(const ::omero::model::DatasetAnnotationLinkPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::DatasetLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*) = 0;

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

class Dataset : virtual public ::IceDelegate::omero::model::Dataset,
                virtual public ::IceDelegateM::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual void unloadProjectLinks(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfProjectLinks(const ::Ice::Context*);

    virtual ::omero::model::DatasetProjectLinksSeq copyProjectLinks(const ::Ice::Context*);

    virtual void addProjectDatasetLink(const ::omero::model::ProjectDatasetLinkPtr&, const ::Ice::Context*);

    virtual void addAllProjectDatasetLinkSet(const ::omero::model::DatasetProjectLinksSeq&, const ::Ice::Context*);

    virtual void removeProjectDatasetLink(const ::omero::model::ProjectDatasetLinkPtr&, const ::Ice::Context*);

    virtual void removeAllProjectDatasetLinkSet(const ::omero::model::DatasetProjectLinksSeq&, const ::Ice::Context*);

    virtual void clearProjectLinks(const ::Ice::Context*);

    virtual void reloadProjectLinks(const ::omero::model::DatasetPtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getProjectLinksCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::ProjectDatasetLinkPtr linkProject(const ::omero::model::ProjectPtr&, const ::Ice::Context*);

    virtual void addProjectDatasetLinkToBoth(const ::omero::model::ProjectDatasetLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::DatasetProjectLinksSeq findProjectDatasetLink(const ::omero::model::ProjectPtr&, const ::Ice::Context*);

    virtual void unlinkProject(const ::omero::model::ProjectPtr&, const ::Ice::Context*);

    virtual void removeProjectDatasetLinkFromBoth(const ::omero::model::ProjectDatasetLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::DatasetLinkedProjectSeq linkedProjectList(const ::Ice::Context*);

    virtual void unloadImageLinks(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfImageLinks(const ::Ice::Context*);

    virtual ::omero::model::DatasetImageLinksSeq copyImageLinks(const ::Ice::Context*);

    virtual void addDatasetImageLink(const ::omero::model::DatasetImageLinkPtr&, const ::Ice::Context*);

    virtual void addAllDatasetImageLinkSet(const ::omero::model::DatasetImageLinksSeq&, const ::Ice::Context*);

    virtual void removeDatasetImageLink(const ::omero::model::DatasetImageLinkPtr&, const ::Ice::Context*);

    virtual void removeAllDatasetImageLinkSet(const ::omero::model::DatasetImageLinksSeq&, const ::Ice::Context*);

    virtual void clearImageLinks(const ::Ice::Context*);

    virtual void reloadImageLinks(const ::omero::model::DatasetPtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getImageLinksCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::DatasetImageLinkPtr linkImage(const ::omero::model::ImagePtr&, const ::Ice::Context*);

    virtual void addDatasetImageLinkToBoth(const ::omero::model::DatasetImageLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::DatasetImageLinksSeq findDatasetImageLink(const ::omero::model::ImagePtr&, const ::Ice::Context*);

    virtual void unlinkImage(const ::omero::model::ImagePtr&, const ::Ice::Context*);

    virtual void removeDatasetImageLinkFromBoth(const ::omero::model::DatasetImageLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::DatasetLinkedImageSeq linkedImageList(const ::Ice::Context*);

    virtual void unloadAnnotationLinks(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Context*);

    virtual ::omero::model::DatasetAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*);

    virtual void addDatasetAnnotationLink(const ::omero::model::DatasetAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void addAllDatasetAnnotationLinkSet(const ::omero::model::DatasetAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void removeDatasetAnnotationLink(const ::omero::model::DatasetAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void removeAllDatasetAnnotationLinkSet(const ::omero::model::DatasetAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void clearAnnotationLinks(const ::Ice::Context*);

    virtual void reloadAnnotationLinks(const ::omero::model::DatasetPtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::DatasetAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void addDatasetAnnotationLinkToBoth(const ::omero::model::DatasetAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::DatasetAnnotationLinksSeq findDatasetAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void removeDatasetAnnotationLinkFromBoth(const ::omero::model::DatasetAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::DatasetLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*);

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

class Dataset : virtual public ::IceDelegate::omero::model::Dataset,
                virtual public ::IceDelegateD::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual void unloadProjectLinks(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfProjectLinks(const ::Ice::Context*);

    virtual ::omero::model::DatasetProjectLinksSeq copyProjectLinks(const ::Ice::Context*);

    virtual void addProjectDatasetLink(const ::omero::model::ProjectDatasetLinkPtr&, const ::Ice::Context*);

    virtual void addAllProjectDatasetLinkSet(const ::omero::model::DatasetProjectLinksSeq&, const ::Ice::Context*);

    virtual void removeProjectDatasetLink(const ::omero::model::ProjectDatasetLinkPtr&, const ::Ice::Context*);

    virtual void removeAllProjectDatasetLinkSet(const ::omero::model::DatasetProjectLinksSeq&, const ::Ice::Context*);

    virtual void clearProjectLinks(const ::Ice::Context*);

    virtual void reloadProjectLinks(const ::omero::model::DatasetPtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getProjectLinksCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::ProjectDatasetLinkPtr linkProject(const ::omero::model::ProjectPtr&, const ::Ice::Context*);

    virtual void addProjectDatasetLinkToBoth(const ::omero::model::ProjectDatasetLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::DatasetProjectLinksSeq findProjectDatasetLink(const ::omero::model::ProjectPtr&, const ::Ice::Context*);

    virtual void unlinkProject(const ::omero::model::ProjectPtr&, const ::Ice::Context*);

    virtual void removeProjectDatasetLinkFromBoth(const ::omero::model::ProjectDatasetLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::DatasetLinkedProjectSeq linkedProjectList(const ::Ice::Context*);

    virtual void unloadImageLinks(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfImageLinks(const ::Ice::Context*);

    virtual ::omero::model::DatasetImageLinksSeq copyImageLinks(const ::Ice::Context*);

    virtual void addDatasetImageLink(const ::omero::model::DatasetImageLinkPtr&, const ::Ice::Context*);

    virtual void addAllDatasetImageLinkSet(const ::omero::model::DatasetImageLinksSeq&, const ::Ice::Context*);

    virtual void removeDatasetImageLink(const ::omero::model::DatasetImageLinkPtr&, const ::Ice::Context*);

    virtual void removeAllDatasetImageLinkSet(const ::omero::model::DatasetImageLinksSeq&, const ::Ice::Context*);

    virtual void clearImageLinks(const ::Ice::Context*);

    virtual void reloadImageLinks(const ::omero::model::DatasetPtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getImageLinksCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::DatasetImageLinkPtr linkImage(const ::omero::model::ImagePtr&, const ::Ice::Context*);

    virtual void addDatasetImageLinkToBoth(const ::omero::model::DatasetImageLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::DatasetImageLinksSeq findDatasetImageLink(const ::omero::model::ImagePtr&, const ::Ice::Context*);

    virtual void unlinkImage(const ::omero::model::ImagePtr&, const ::Ice::Context*);

    virtual void removeDatasetImageLinkFromBoth(const ::omero::model::DatasetImageLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::DatasetLinkedImageSeq linkedImageList(const ::Ice::Context*);

    virtual void unloadAnnotationLinks(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Context*);

    virtual ::omero::model::DatasetAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*);

    virtual void addDatasetAnnotationLink(const ::omero::model::DatasetAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void addAllDatasetAnnotationLinkSet(const ::omero::model::DatasetAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void removeDatasetAnnotationLink(const ::omero::model::DatasetAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void removeAllDatasetAnnotationLinkSet(const ::omero::model::DatasetAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void clearAnnotationLinks(const ::Ice::Context*);

    virtual void reloadAnnotationLinks(const ::omero::model::DatasetPtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::DatasetAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void addDatasetAnnotationLinkToBoth(const ::omero::model::DatasetAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::DatasetAnnotationLinksSeq findDatasetAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void removeDatasetAnnotationLinkFromBoth(const ::omero::model::DatasetAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::DatasetLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*);

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

class Dataset : virtual public ::omero::model::IObject
{
public:

    typedef DatasetPrx ProxyType;
    typedef DatasetPtr PointerType;
    
    Dataset() {}
    Dataset(const ::omero::RLongPtr&, const ::omero::model::DetailsPtr&, bool, const ::omero::RIntPtr&, const ::omero::model::DatasetProjectLinksSeq&, bool, const ::omero::sys::CountMap&, const ::omero::model::DatasetImageLinksSeq&, bool, const ::omero::sys::CountMap&, const ::omero::model::DatasetAnnotationLinksSeq&, bool, const ::omero::sys::CountMap&, const ::omero::RStringPtr&, const ::omero::RStringPtr&);
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

    virtual void unloadProjectLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unloadProjectLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int sizeOfProjectLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sizeOfProjectLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::DatasetProjectLinksSeq copyProjectLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copyProjectLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addProjectDatasetLink(const ::omero::model::ProjectDatasetLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addProjectDatasetLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAllProjectDatasetLinkSet(const ::omero::model::DatasetProjectLinksSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAllProjectDatasetLinkSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeProjectDatasetLink(const ::omero::model::ProjectDatasetLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeProjectDatasetLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeAllProjectDatasetLinkSet(const ::omero::model::DatasetProjectLinksSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeAllProjectDatasetLinkSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void clearProjectLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___clearProjectLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void reloadProjectLinks(const ::omero::model::DatasetPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___reloadProjectLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::sys::CountMap getProjectLinksCountPerOwner(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getProjectLinksCountPerOwner(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ProjectDatasetLinkPtr linkProject(const ::omero::model::ProjectPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkProject(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addProjectDatasetLinkToBoth(const ::omero::model::ProjectDatasetLinkPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addProjectDatasetLinkToBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::DatasetProjectLinksSeq findProjectDatasetLink(const ::omero::model::ProjectPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___findProjectDatasetLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unlinkProject(const ::omero::model::ProjectPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unlinkProject(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeProjectDatasetLinkFromBoth(const ::omero::model::ProjectDatasetLinkPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeProjectDatasetLinkFromBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::DatasetLinkedProjectSeq linkedProjectList(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkedProjectList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unloadImageLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unloadImageLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int sizeOfImageLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sizeOfImageLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::DatasetImageLinksSeq copyImageLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copyImageLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addDatasetImageLink(const ::omero::model::DatasetImageLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addDatasetImageLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAllDatasetImageLinkSet(const ::omero::model::DatasetImageLinksSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAllDatasetImageLinkSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeDatasetImageLink(const ::omero::model::DatasetImageLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeDatasetImageLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeAllDatasetImageLinkSet(const ::omero::model::DatasetImageLinksSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeAllDatasetImageLinkSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void clearImageLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___clearImageLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void reloadImageLinks(const ::omero::model::DatasetPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___reloadImageLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::sys::CountMap getImageLinksCountPerOwner(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getImageLinksCountPerOwner(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::DatasetImageLinkPtr linkImage(const ::omero::model::ImagePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkImage(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addDatasetImageLinkToBoth(const ::omero::model::DatasetImageLinkPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addDatasetImageLinkToBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::DatasetImageLinksSeq findDatasetImageLink(const ::omero::model::ImagePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___findDatasetImageLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unlinkImage(const ::omero::model::ImagePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unlinkImage(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeDatasetImageLinkFromBoth(const ::omero::model::DatasetImageLinkPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeDatasetImageLinkFromBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::DatasetLinkedImageSeq linkedImageList(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkedImageList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unloadAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unloadAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sizeOfAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::DatasetAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copyAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addDatasetAnnotationLink(const ::omero::model::DatasetAnnotationLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addDatasetAnnotationLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAllDatasetAnnotationLinkSet(const ::omero::model::DatasetAnnotationLinksSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAllDatasetAnnotationLinkSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeDatasetAnnotationLink(const ::omero::model::DatasetAnnotationLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeDatasetAnnotationLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeAllDatasetAnnotationLinkSet(const ::omero::model::DatasetAnnotationLinksSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeAllDatasetAnnotationLinkSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void clearAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___clearAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void reloadAnnotationLinks(const ::omero::model::DatasetPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___reloadAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getAnnotationLinksCountPerOwner(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::DatasetAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkAnnotation(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addDatasetAnnotationLinkToBoth(const ::omero::model::DatasetAnnotationLinkPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addDatasetAnnotationLinkToBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::DatasetAnnotationLinksSeq findDatasetAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___findDatasetAnnotationLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unlinkAnnotation(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeDatasetAnnotationLinkFromBoth(const ::omero::model::DatasetAnnotationLinkPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeDatasetAnnotationLinkFromBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::DatasetLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Current& = ::Ice::Current()) = 0;
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

    ::omero::model::DatasetProjectLinksSeq projectLinksSeq;

    bool projectLinksLoaded;

    ::omero::sys::CountMap projectLinksCountPerOwner;

    ::omero::model::DatasetImageLinksSeq imageLinksSeq;

    bool imageLinksLoaded;

    ::omero::sys::CountMap imageLinksCountPerOwner;

    ::omero::model::DatasetAnnotationLinksSeq annotationLinksSeq;

    bool annotationLinksLoaded;

    ::omero::sys::CountMap annotationLinksCountPerOwner;

    ::omero::RStringPtr name;

    ::omero::RStringPtr description;
};

}

}

#endif
