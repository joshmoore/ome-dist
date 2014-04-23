// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `Fileset.ice'

#ifndef __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_Fileset_h__
#define __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_Fileset_h__

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

class FilesetEntry;

class Image;

class FilesetJobLink;

class Job;

class FilesetAnnotationLink;

class Annotation;

class Details;

class Fileset;

}

}

}

namespace omero
{

namespace model
{

class FilesetEntry;
bool operator==(const FilesetEntry&, const FilesetEntry&);
bool operator<(const FilesetEntry&, const FilesetEntry&);

class Image;
bool operator==(const Image&, const Image&);
bool operator<(const Image&, const Image&);

class FilesetJobLink;
bool operator==(const FilesetJobLink&, const FilesetJobLink&);
bool operator<(const FilesetJobLink&, const FilesetJobLink&);

class Job;
bool operator==(const Job&, const Job&);
bool operator<(const Job&, const Job&);

class FilesetAnnotationLink;
bool operator==(const FilesetAnnotationLink&, const FilesetAnnotationLink&);
bool operator<(const FilesetAnnotationLink&, const FilesetAnnotationLink&);

class Annotation;
bool operator==(const Annotation&, const Annotation&);
bool operator<(const Annotation&, const Annotation&);

class Details;
bool operator==(const Details&, const Details&);
bool operator<(const Details&, const Details&);

class Fileset;
bool operator==(const Fileset&, const Fileset&);
bool operator<(const Fileset&, const Fileset&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::model::FilesetEntry*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::FilesetEntry*);

::Ice::Object* upCast(::omero::model::Image*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Image*);

::Ice::Object* upCast(::omero::model::FilesetJobLink*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::FilesetJobLink*);

::Ice::Object* upCast(::omero::model::Job*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Job*);

::Ice::Object* upCast(::omero::model::FilesetAnnotationLink*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::FilesetAnnotationLink*);

::Ice::Object* upCast(::omero::model::Annotation*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Annotation*);

::Ice::Object* upCast(::omero::model::Details*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Details*);

::Ice::Object* upCast(::omero::model::Fileset*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Fileset*);

}

namespace omero
{

namespace model
{

typedef ::IceInternal::Handle< ::omero::model::FilesetEntry> FilesetEntryPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::FilesetEntry> FilesetEntryPrx;

void __read(::IceInternal::BasicStream*, FilesetEntryPrx&);
void __patch__FilesetEntryPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Image> ImagePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Image> ImagePrx;

void __read(::IceInternal::BasicStream*, ImagePrx&);
void __patch__ImagePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::FilesetJobLink> FilesetJobLinkPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::FilesetJobLink> FilesetJobLinkPrx;

void __read(::IceInternal::BasicStream*, FilesetJobLinkPrx&);
void __patch__FilesetJobLinkPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Job> JobPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Job> JobPrx;

void __read(::IceInternal::BasicStream*, JobPrx&);
void __patch__JobPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::FilesetAnnotationLink> FilesetAnnotationLinkPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::FilesetAnnotationLink> FilesetAnnotationLinkPrx;

void __read(::IceInternal::BasicStream*, FilesetAnnotationLinkPrx&);
void __patch__FilesetAnnotationLinkPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Annotation> AnnotationPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Annotation> AnnotationPrx;

void __read(::IceInternal::BasicStream*, AnnotationPrx&);
void __patch__AnnotationPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Details> DetailsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Details> DetailsPrx;

void __read(::IceInternal::BasicStream*, DetailsPrx&);
void __patch__DetailsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Fileset> FilesetPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Fileset> FilesetPrx;

void __read(::IceInternal::BasicStream*, FilesetPrx&);
void __patch__FilesetPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace omero
{

namespace model
{

typedef ::std::vector< ::omero::model::FilesetEntryPtr> FilesetUsedFilesSeq;
void __writeFilesetUsedFilesSeq(::IceInternal::BasicStream*, const ::omero::model::FilesetEntryPtr*, const ::omero::model::FilesetEntryPtr*);
void __readFilesetUsedFilesSeq(::IceInternal::BasicStream*, FilesetUsedFilesSeq&);

typedef ::std::vector< ::omero::model::ImagePtr> FilesetImagesSeq;
void __writeFilesetImagesSeq(::IceInternal::BasicStream*, const ::omero::model::ImagePtr*, const ::omero::model::ImagePtr*);
void __readFilesetImagesSeq(::IceInternal::BasicStream*, FilesetImagesSeq&);

typedef ::std::vector< ::omero::model::FilesetJobLinkPtr> FilesetJobLinksSeq;
void __writeFilesetJobLinksSeq(::IceInternal::BasicStream*, const ::omero::model::FilesetJobLinkPtr*, const ::omero::model::FilesetJobLinkPtr*);
void __readFilesetJobLinksSeq(::IceInternal::BasicStream*, FilesetJobLinksSeq&);

typedef ::std::vector< ::omero::model::JobPtr> FilesetLinkedJobSeq;
void __writeFilesetLinkedJobSeq(::IceInternal::BasicStream*, const ::omero::model::JobPtr*, const ::omero::model::JobPtr*);
void __readFilesetLinkedJobSeq(::IceInternal::BasicStream*, FilesetLinkedJobSeq&);

typedef ::std::vector< ::omero::model::FilesetAnnotationLinkPtr> FilesetAnnotationLinksSeq;
void __writeFilesetAnnotationLinksSeq(::IceInternal::BasicStream*, const ::omero::model::FilesetAnnotationLinkPtr*, const ::omero::model::FilesetAnnotationLinkPtr*);
void __readFilesetAnnotationLinksSeq(::IceInternal::BasicStream*, FilesetAnnotationLinksSeq&);

typedef ::std::vector< ::omero::model::AnnotationPtr> FilesetLinkedAnnotationSeq;
void __writeFilesetLinkedAnnotationSeq(::IceInternal::BasicStream*, const ::omero::model::AnnotationPtr*, const ::omero::model::AnnotationPtr*);
void __readFilesetLinkedAnnotationSeq(::IceInternal::BasicStream*, FilesetLinkedAnnotationSeq&);

}

}

namespace IceProxy
{

namespace omero
{

namespace model
{

class Fileset : virtual public ::IceProxy::omero::model::IObject
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

    void unloadUsedFiles()
    {
        unloadUsedFiles(0);
    }
    void unloadUsedFiles(const ::Ice::Context& __ctx)
    {
        unloadUsedFiles(&__ctx);
    }
    
private:

    void unloadUsedFiles(const ::Ice::Context*);
    
public:

    ::Ice::Int sizeOfUsedFiles()
    {
        return sizeOfUsedFiles(0);
    }
    ::Ice::Int sizeOfUsedFiles(const ::Ice::Context& __ctx)
    {
        return sizeOfUsedFiles(&__ctx);
    }
    
private:

    ::Ice::Int sizeOfUsedFiles(const ::Ice::Context*);
    
public:

    ::omero::model::FilesetUsedFilesSeq copyUsedFiles()
    {
        return copyUsedFiles(0);
    }
    ::omero::model::FilesetUsedFilesSeq copyUsedFiles(const ::Ice::Context& __ctx)
    {
        return copyUsedFiles(&__ctx);
    }
    
private:

    ::omero::model::FilesetUsedFilesSeq copyUsedFiles(const ::Ice::Context*);
    
public:

    void addFilesetEntry(const ::omero::model::FilesetEntryPtr& target)
    {
        addFilesetEntry(target, 0);
    }
    void addFilesetEntry(const ::omero::model::FilesetEntryPtr& target, const ::Ice::Context& __ctx)
    {
        addFilesetEntry(target, &__ctx);
    }
    
private:

    void addFilesetEntry(const ::omero::model::FilesetEntryPtr&, const ::Ice::Context*);
    
public:

    void addAllFilesetEntrySet(const ::omero::model::FilesetUsedFilesSeq& targets)
    {
        addAllFilesetEntrySet(targets, 0);
    }
    void addAllFilesetEntrySet(const ::omero::model::FilesetUsedFilesSeq& targets, const ::Ice::Context& __ctx)
    {
        addAllFilesetEntrySet(targets, &__ctx);
    }
    
private:

    void addAllFilesetEntrySet(const ::omero::model::FilesetUsedFilesSeq&, const ::Ice::Context*);
    
public:

    void removeFilesetEntry(const ::omero::model::FilesetEntryPtr& theTarget)
    {
        removeFilesetEntry(theTarget, 0);
    }
    void removeFilesetEntry(const ::omero::model::FilesetEntryPtr& theTarget, const ::Ice::Context& __ctx)
    {
        removeFilesetEntry(theTarget, &__ctx);
    }
    
private:

    void removeFilesetEntry(const ::omero::model::FilesetEntryPtr&, const ::Ice::Context*);
    
public:

    void removeAllFilesetEntrySet(const ::omero::model::FilesetUsedFilesSeq& targets)
    {
        removeAllFilesetEntrySet(targets, 0);
    }
    void removeAllFilesetEntrySet(const ::omero::model::FilesetUsedFilesSeq& targets, const ::Ice::Context& __ctx)
    {
        removeAllFilesetEntrySet(targets, &__ctx);
    }
    
private:

    void removeAllFilesetEntrySet(const ::omero::model::FilesetUsedFilesSeq&, const ::Ice::Context*);
    
public:

    void clearUsedFiles()
    {
        clearUsedFiles(0);
    }
    void clearUsedFiles(const ::Ice::Context& __ctx)
    {
        clearUsedFiles(&__ctx);
    }
    
private:

    void clearUsedFiles(const ::Ice::Context*);
    
public:

    void reloadUsedFiles(const ::omero::model::FilesetPtr& toCopy)
    {
        reloadUsedFiles(toCopy, 0);
    }
    void reloadUsedFiles(const ::omero::model::FilesetPtr& toCopy, const ::Ice::Context& __ctx)
    {
        reloadUsedFiles(toCopy, &__ctx);
    }
    
private:

    void reloadUsedFiles(const ::omero::model::FilesetPtr&, const ::Ice::Context*);
    
public:

    ::omero::model::FilesetEntryPtr getFilesetEntry(::Ice::Int index)
    {
        return getFilesetEntry(index, 0);
    }
    ::omero::model::FilesetEntryPtr getFilesetEntry(::Ice::Int index, const ::Ice::Context& __ctx)
    {
        return getFilesetEntry(index, &__ctx);
    }
    
private:

    ::omero::model::FilesetEntryPtr getFilesetEntry(::Ice::Int, const ::Ice::Context*);
    
public:

    ::omero::model::FilesetEntryPtr setFilesetEntry(::Ice::Int index, const ::omero::model::FilesetEntryPtr& theElement)
    {
        return setFilesetEntry(index, theElement, 0);
    }
    ::omero::model::FilesetEntryPtr setFilesetEntry(::Ice::Int index, const ::omero::model::FilesetEntryPtr& theElement, const ::Ice::Context& __ctx)
    {
        return setFilesetEntry(index, theElement, &__ctx);
    }
    
private:

    ::omero::model::FilesetEntryPtr setFilesetEntry(::Ice::Int, const ::omero::model::FilesetEntryPtr&, const ::Ice::Context*);
    
public:

    ::omero::model::FilesetEntryPtr getPrimaryFilesetEntry()
    {
        return getPrimaryFilesetEntry(0);
    }
    ::omero::model::FilesetEntryPtr getPrimaryFilesetEntry(const ::Ice::Context& __ctx)
    {
        return getPrimaryFilesetEntry(&__ctx);
    }
    
private:

    ::omero::model::FilesetEntryPtr getPrimaryFilesetEntry(const ::Ice::Context*);
    
public:

    ::omero::model::FilesetEntryPtr setPrimaryFilesetEntry(const ::omero::model::FilesetEntryPtr& theElement)
    {
        return setPrimaryFilesetEntry(theElement, 0);
    }
    ::omero::model::FilesetEntryPtr setPrimaryFilesetEntry(const ::omero::model::FilesetEntryPtr& theElement, const ::Ice::Context& __ctx)
    {
        return setPrimaryFilesetEntry(theElement, &__ctx);
    }
    
private:

    ::omero::model::FilesetEntryPtr setPrimaryFilesetEntry(const ::omero::model::FilesetEntryPtr&, const ::Ice::Context*);
    
public:

    void unloadImages()
    {
        unloadImages(0);
    }
    void unloadImages(const ::Ice::Context& __ctx)
    {
        unloadImages(&__ctx);
    }
    
private:

    void unloadImages(const ::Ice::Context*);
    
public:

    ::Ice::Int sizeOfImages()
    {
        return sizeOfImages(0);
    }
    ::Ice::Int sizeOfImages(const ::Ice::Context& __ctx)
    {
        return sizeOfImages(&__ctx);
    }
    
private:

    ::Ice::Int sizeOfImages(const ::Ice::Context*);
    
public:

    ::omero::model::FilesetImagesSeq copyImages()
    {
        return copyImages(0);
    }
    ::omero::model::FilesetImagesSeq copyImages(const ::Ice::Context& __ctx)
    {
        return copyImages(&__ctx);
    }
    
private:

    ::omero::model::FilesetImagesSeq copyImages(const ::Ice::Context*);
    
public:

    void addImage(const ::omero::model::ImagePtr& target)
    {
        addImage(target, 0);
    }
    void addImage(const ::omero::model::ImagePtr& target, const ::Ice::Context& __ctx)
    {
        addImage(target, &__ctx);
    }
    
private:

    void addImage(const ::omero::model::ImagePtr&, const ::Ice::Context*);
    
public:

    void addAllImageSet(const ::omero::model::FilesetImagesSeq& targets)
    {
        addAllImageSet(targets, 0);
    }
    void addAllImageSet(const ::omero::model::FilesetImagesSeq& targets, const ::Ice::Context& __ctx)
    {
        addAllImageSet(targets, &__ctx);
    }
    
private:

    void addAllImageSet(const ::omero::model::FilesetImagesSeq&, const ::Ice::Context*);
    
public:

    void removeImage(const ::omero::model::ImagePtr& theTarget)
    {
        removeImage(theTarget, 0);
    }
    void removeImage(const ::omero::model::ImagePtr& theTarget, const ::Ice::Context& __ctx)
    {
        removeImage(theTarget, &__ctx);
    }
    
private:

    void removeImage(const ::omero::model::ImagePtr&, const ::Ice::Context*);
    
public:

    void removeAllImageSet(const ::omero::model::FilesetImagesSeq& targets)
    {
        removeAllImageSet(targets, 0);
    }
    void removeAllImageSet(const ::omero::model::FilesetImagesSeq& targets, const ::Ice::Context& __ctx)
    {
        removeAllImageSet(targets, &__ctx);
    }
    
private:

    void removeAllImageSet(const ::omero::model::FilesetImagesSeq&, const ::Ice::Context*);
    
public:

    void clearImages()
    {
        clearImages(0);
    }
    void clearImages(const ::Ice::Context& __ctx)
    {
        clearImages(&__ctx);
    }
    
private:

    void clearImages(const ::Ice::Context*);
    
public:

    void reloadImages(const ::omero::model::FilesetPtr& toCopy)
    {
        reloadImages(toCopy, 0);
    }
    void reloadImages(const ::omero::model::FilesetPtr& toCopy, const ::Ice::Context& __ctx)
    {
        reloadImages(toCopy, &__ctx);
    }
    
private:

    void reloadImages(const ::omero::model::FilesetPtr&, const ::Ice::Context*);
    
public:

    void unloadJobLinks()
    {
        unloadJobLinks(0);
    }
    void unloadJobLinks(const ::Ice::Context& __ctx)
    {
        unloadJobLinks(&__ctx);
    }
    
private:

    void unloadJobLinks(const ::Ice::Context*);
    
public:

    ::Ice::Int sizeOfJobLinks()
    {
        return sizeOfJobLinks(0);
    }
    ::Ice::Int sizeOfJobLinks(const ::Ice::Context& __ctx)
    {
        return sizeOfJobLinks(&__ctx);
    }
    
private:

    ::Ice::Int sizeOfJobLinks(const ::Ice::Context*);
    
public:

    ::omero::model::FilesetJobLinksSeq copyJobLinks()
    {
        return copyJobLinks(0);
    }
    ::omero::model::FilesetJobLinksSeq copyJobLinks(const ::Ice::Context& __ctx)
    {
        return copyJobLinks(&__ctx);
    }
    
private:

    ::omero::model::FilesetJobLinksSeq copyJobLinks(const ::Ice::Context*);
    
public:

    void addFilesetJobLink(const ::omero::model::FilesetJobLinkPtr& target)
    {
        addFilesetJobLink(target, 0);
    }
    void addFilesetJobLink(const ::omero::model::FilesetJobLinkPtr& target, const ::Ice::Context& __ctx)
    {
        addFilesetJobLink(target, &__ctx);
    }
    
private:

    void addFilesetJobLink(const ::omero::model::FilesetJobLinkPtr&, const ::Ice::Context*);
    
public:

    void addAllFilesetJobLinkSet(const ::omero::model::FilesetJobLinksSeq& targets)
    {
        addAllFilesetJobLinkSet(targets, 0);
    }
    void addAllFilesetJobLinkSet(const ::omero::model::FilesetJobLinksSeq& targets, const ::Ice::Context& __ctx)
    {
        addAllFilesetJobLinkSet(targets, &__ctx);
    }
    
private:

    void addAllFilesetJobLinkSet(const ::omero::model::FilesetJobLinksSeq&, const ::Ice::Context*);
    
public:

    void removeFilesetJobLink(const ::omero::model::FilesetJobLinkPtr& theTarget)
    {
        removeFilesetJobLink(theTarget, 0);
    }
    void removeFilesetJobLink(const ::omero::model::FilesetJobLinkPtr& theTarget, const ::Ice::Context& __ctx)
    {
        removeFilesetJobLink(theTarget, &__ctx);
    }
    
private:

    void removeFilesetJobLink(const ::omero::model::FilesetJobLinkPtr&, const ::Ice::Context*);
    
public:

    void removeAllFilesetJobLinkSet(const ::omero::model::FilesetJobLinksSeq& targets)
    {
        removeAllFilesetJobLinkSet(targets, 0);
    }
    void removeAllFilesetJobLinkSet(const ::omero::model::FilesetJobLinksSeq& targets, const ::Ice::Context& __ctx)
    {
        removeAllFilesetJobLinkSet(targets, &__ctx);
    }
    
private:

    void removeAllFilesetJobLinkSet(const ::omero::model::FilesetJobLinksSeq&, const ::Ice::Context*);
    
public:

    void clearJobLinks()
    {
        clearJobLinks(0);
    }
    void clearJobLinks(const ::Ice::Context& __ctx)
    {
        clearJobLinks(&__ctx);
    }
    
private:

    void clearJobLinks(const ::Ice::Context*);
    
public:

    void reloadJobLinks(const ::omero::model::FilesetPtr& toCopy)
    {
        reloadJobLinks(toCopy, 0);
    }
    void reloadJobLinks(const ::omero::model::FilesetPtr& toCopy, const ::Ice::Context& __ctx)
    {
        reloadJobLinks(toCopy, &__ctx);
    }
    
private:

    void reloadJobLinks(const ::omero::model::FilesetPtr&, const ::Ice::Context*);
    
public:

    ::omero::model::FilesetJobLinkPtr getFilesetJobLink(::Ice::Int index)
    {
        return getFilesetJobLink(index, 0);
    }
    ::omero::model::FilesetJobLinkPtr getFilesetJobLink(::Ice::Int index, const ::Ice::Context& __ctx)
    {
        return getFilesetJobLink(index, &__ctx);
    }
    
private:

    ::omero::model::FilesetJobLinkPtr getFilesetJobLink(::Ice::Int, const ::Ice::Context*);
    
public:

    ::omero::model::FilesetJobLinkPtr setFilesetJobLink(::Ice::Int index, const ::omero::model::FilesetJobLinkPtr& theElement)
    {
        return setFilesetJobLink(index, theElement, 0);
    }
    ::omero::model::FilesetJobLinkPtr setFilesetJobLink(::Ice::Int index, const ::omero::model::FilesetJobLinkPtr& theElement, const ::Ice::Context& __ctx)
    {
        return setFilesetJobLink(index, theElement, &__ctx);
    }
    
private:

    ::omero::model::FilesetJobLinkPtr setFilesetJobLink(::Ice::Int, const ::omero::model::FilesetJobLinkPtr&, const ::Ice::Context*);
    
public:

    ::omero::model::FilesetJobLinkPtr getPrimaryFilesetJobLink()
    {
        return getPrimaryFilesetJobLink(0);
    }
    ::omero::model::FilesetJobLinkPtr getPrimaryFilesetJobLink(const ::Ice::Context& __ctx)
    {
        return getPrimaryFilesetJobLink(&__ctx);
    }
    
private:

    ::omero::model::FilesetJobLinkPtr getPrimaryFilesetJobLink(const ::Ice::Context*);
    
public:

    ::omero::model::FilesetJobLinkPtr setPrimaryFilesetJobLink(const ::omero::model::FilesetJobLinkPtr& theElement)
    {
        return setPrimaryFilesetJobLink(theElement, 0);
    }
    ::omero::model::FilesetJobLinkPtr setPrimaryFilesetJobLink(const ::omero::model::FilesetJobLinkPtr& theElement, const ::Ice::Context& __ctx)
    {
        return setPrimaryFilesetJobLink(theElement, &__ctx);
    }
    
private:

    ::omero::model::FilesetJobLinkPtr setPrimaryFilesetJobLink(const ::omero::model::FilesetJobLinkPtr&, const ::Ice::Context*);
    
public:

    ::omero::sys::CountMap getJobLinksCountPerOwner()
    {
        return getJobLinksCountPerOwner(0);
    }
    ::omero::sys::CountMap getJobLinksCountPerOwner(const ::Ice::Context& __ctx)
    {
        return getJobLinksCountPerOwner(&__ctx);
    }
    
private:

    ::omero::sys::CountMap getJobLinksCountPerOwner(const ::Ice::Context*);
    
public:

    ::omero::model::FilesetJobLinkPtr linkJob(const ::omero::model::JobPtr& addition)
    {
        return linkJob(addition, 0);
    }
    ::omero::model::FilesetJobLinkPtr linkJob(const ::omero::model::JobPtr& addition, const ::Ice::Context& __ctx)
    {
        return linkJob(addition, &__ctx);
    }
    
private:

    ::omero::model::FilesetJobLinkPtr linkJob(const ::omero::model::JobPtr&, const ::Ice::Context*);
    
public:

    void addFilesetJobLinkToBoth(const ::omero::model::FilesetJobLinkPtr& link, bool bothSides)
    {
        addFilesetJobLinkToBoth(link, bothSides, 0);
    }
    void addFilesetJobLinkToBoth(const ::omero::model::FilesetJobLinkPtr& link, bool bothSides, const ::Ice::Context& __ctx)
    {
        addFilesetJobLinkToBoth(link, bothSides, &__ctx);
    }
    
private:

    void addFilesetJobLinkToBoth(const ::omero::model::FilesetJobLinkPtr&, bool, const ::Ice::Context*);
    
public:

    ::omero::model::FilesetJobLinksSeq findFilesetJobLink(const ::omero::model::JobPtr& removal)
    {
        return findFilesetJobLink(removal, 0);
    }
    ::omero::model::FilesetJobLinksSeq findFilesetJobLink(const ::omero::model::JobPtr& removal, const ::Ice::Context& __ctx)
    {
        return findFilesetJobLink(removal, &__ctx);
    }
    
private:

    ::omero::model::FilesetJobLinksSeq findFilesetJobLink(const ::omero::model::JobPtr&, const ::Ice::Context*);
    
public:

    void unlinkJob(const ::omero::model::JobPtr& removal)
    {
        unlinkJob(removal, 0);
    }
    void unlinkJob(const ::omero::model::JobPtr& removal, const ::Ice::Context& __ctx)
    {
        unlinkJob(removal, &__ctx);
    }
    
private:

    void unlinkJob(const ::omero::model::JobPtr&, const ::Ice::Context*);
    
public:

    void removeFilesetJobLinkFromBoth(const ::omero::model::FilesetJobLinkPtr& link, bool bothSides)
    {
        removeFilesetJobLinkFromBoth(link, bothSides, 0);
    }
    void removeFilesetJobLinkFromBoth(const ::omero::model::FilesetJobLinkPtr& link, bool bothSides, const ::Ice::Context& __ctx)
    {
        removeFilesetJobLinkFromBoth(link, bothSides, &__ctx);
    }
    
private:

    void removeFilesetJobLinkFromBoth(const ::omero::model::FilesetJobLinkPtr&, bool, const ::Ice::Context*);
    
public:

    ::omero::model::FilesetLinkedJobSeq linkedJobList()
    {
        return linkedJobList(0);
    }
    ::omero::model::FilesetLinkedJobSeq linkedJobList(const ::Ice::Context& __ctx)
    {
        return linkedJobList(&__ctx);
    }
    
private:

    ::omero::model::FilesetLinkedJobSeq linkedJobList(const ::Ice::Context*);
    
public:

    ::omero::RStringPtr getTemplatePrefix()
    {
        return getTemplatePrefix(0);
    }
    ::omero::RStringPtr getTemplatePrefix(const ::Ice::Context& __ctx)
    {
        return getTemplatePrefix(&__ctx);
    }
    
private:

    ::omero::RStringPtr getTemplatePrefix(const ::Ice::Context*);
    
public:

    void setTemplatePrefix(const ::omero::RStringPtr& theTemplatePrefix)
    {
        setTemplatePrefix(theTemplatePrefix, 0);
    }
    void setTemplatePrefix(const ::omero::RStringPtr& theTemplatePrefix, const ::Ice::Context& __ctx)
    {
        setTemplatePrefix(theTemplatePrefix, &__ctx);
    }
    
private:

    void setTemplatePrefix(const ::omero::RStringPtr&, const ::Ice::Context*);
    
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

    ::omero::model::FilesetAnnotationLinksSeq copyAnnotationLinks()
    {
        return copyAnnotationLinks(0);
    }
    ::omero::model::FilesetAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context& __ctx)
    {
        return copyAnnotationLinks(&__ctx);
    }
    
private:

    ::omero::model::FilesetAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*);
    
public:

    void addFilesetAnnotationLink(const ::omero::model::FilesetAnnotationLinkPtr& target)
    {
        addFilesetAnnotationLink(target, 0);
    }
    void addFilesetAnnotationLink(const ::omero::model::FilesetAnnotationLinkPtr& target, const ::Ice::Context& __ctx)
    {
        addFilesetAnnotationLink(target, &__ctx);
    }
    
private:

    void addFilesetAnnotationLink(const ::omero::model::FilesetAnnotationLinkPtr&, const ::Ice::Context*);
    
public:

    void addAllFilesetAnnotationLinkSet(const ::omero::model::FilesetAnnotationLinksSeq& targets)
    {
        addAllFilesetAnnotationLinkSet(targets, 0);
    }
    void addAllFilesetAnnotationLinkSet(const ::omero::model::FilesetAnnotationLinksSeq& targets, const ::Ice::Context& __ctx)
    {
        addAllFilesetAnnotationLinkSet(targets, &__ctx);
    }
    
private:

    void addAllFilesetAnnotationLinkSet(const ::omero::model::FilesetAnnotationLinksSeq&, const ::Ice::Context*);
    
public:

    void removeFilesetAnnotationLink(const ::omero::model::FilesetAnnotationLinkPtr& theTarget)
    {
        removeFilesetAnnotationLink(theTarget, 0);
    }
    void removeFilesetAnnotationLink(const ::omero::model::FilesetAnnotationLinkPtr& theTarget, const ::Ice::Context& __ctx)
    {
        removeFilesetAnnotationLink(theTarget, &__ctx);
    }
    
private:

    void removeFilesetAnnotationLink(const ::omero::model::FilesetAnnotationLinkPtr&, const ::Ice::Context*);
    
public:

    void removeAllFilesetAnnotationLinkSet(const ::omero::model::FilesetAnnotationLinksSeq& targets)
    {
        removeAllFilesetAnnotationLinkSet(targets, 0);
    }
    void removeAllFilesetAnnotationLinkSet(const ::omero::model::FilesetAnnotationLinksSeq& targets, const ::Ice::Context& __ctx)
    {
        removeAllFilesetAnnotationLinkSet(targets, &__ctx);
    }
    
private:

    void removeAllFilesetAnnotationLinkSet(const ::omero::model::FilesetAnnotationLinksSeq&, const ::Ice::Context*);
    
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

    void reloadAnnotationLinks(const ::omero::model::FilesetPtr& toCopy)
    {
        reloadAnnotationLinks(toCopy, 0);
    }
    void reloadAnnotationLinks(const ::omero::model::FilesetPtr& toCopy, const ::Ice::Context& __ctx)
    {
        reloadAnnotationLinks(toCopy, &__ctx);
    }
    
private:

    void reloadAnnotationLinks(const ::omero::model::FilesetPtr&, const ::Ice::Context*);
    
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

    ::omero::model::FilesetAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr& addition)
    {
        return linkAnnotation(addition, 0);
    }
    ::omero::model::FilesetAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr& addition, const ::Ice::Context& __ctx)
    {
        return linkAnnotation(addition, &__ctx);
    }
    
private:

    ::omero::model::FilesetAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);
    
public:

    void addFilesetAnnotationLinkToBoth(const ::omero::model::FilesetAnnotationLinkPtr& link, bool bothSides)
    {
        addFilesetAnnotationLinkToBoth(link, bothSides, 0);
    }
    void addFilesetAnnotationLinkToBoth(const ::omero::model::FilesetAnnotationLinkPtr& link, bool bothSides, const ::Ice::Context& __ctx)
    {
        addFilesetAnnotationLinkToBoth(link, bothSides, &__ctx);
    }
    
private:

    void addFilesetAnnotationLinkToBoth(const ::omero::model::FilesetAnnotationLinkPtr&, bool, const ::Ice::Context*);
    
public:

    ::omero::model::FilesetAnnotationLinksSeq findFilesetAnnotationLink(const ::omero::model::AnnotationPtr& removal)
    {
        return findFilesetAnnotationLink(removal, 0);
    }
    ::omero::model::FilesetAnnotationLinksSeq findFilesetAnnotationLink(const ::omero::model::AnnotationPtr& removal, const ::Ice::Context& __ctx)
    {
        return findFilesetAnnotationLink(removal, &__ctx);
    }
    
private:

    ::omero::model::FilesetAnnotationLinksSeq findFilesetAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);
    
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

    void removeFilesetAnnotationLinkFromBoth(const ::omero::model::FilesetAnnotationLinkPtr& link, bool bothSides)
    {
        removeFilesetAnnotationLinkFromBoth(link, bothSides, 0);
    }
    void removeFilesetAnnotationLinkFromBoth(const ::omero::model::FilesetAnnotationLinkPtr& link, bool bothSides, const ::Ice::Context& __ctx)
    {
        removeFilesetAnnotationLinkFromBoth(link, bothSides, &__ctx);
    }
    
private:

    void removeFilesetAnnotationLinkFromBoth(const ::omero::model::FilesetAnnotationLinkPtr&, bool, const ::Ice::Context*);
    
public:

    ::omero::model::FilesetLinkedAnnotationSeq linkedAnnotationList()
    {
        return linkedAnnotationList(0);
    }
    ::omero::model::FilesetLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context& __ctx)
    {
        return linkedAnnotationList(&__ctx);
    }
    
private:

    ::omero::model::FilesetLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<Fileset> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Fileset*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Fileset*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Fileset> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Fileset*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Fileset*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Fileset> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Fileset*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Fileset*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Fileset> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Fileset*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Fileset*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Fileset> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Fileset*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Fileset*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Fileset> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Fileset*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Fileset*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Fileset> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Fileset*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Fileset*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Fileset> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Fileset*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Fileset*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Fileset> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Fileset*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Fileset*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Fileset> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Fileset*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Fileset*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Fileset> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Fileset*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Fileset*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Fileset> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Fileset*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Fileset*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Fileset> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Fileset*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Fileset*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Fileset> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Fileset*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Fileset*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Fileset> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Fileset*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Fileset*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Fileset> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Fileset*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Fileset*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Fileset> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Fileset*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Fileset*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Fileset> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Fileset*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Fileset*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Fileset> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Fileset*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Fileset*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class Fileset : virtual public ::IceDelegate::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*) = 0;

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual void unloadUsedFiles(const ::Ice::Context*) = 0;

    virtual ::Ice::Int sizeOfUsedFiles(const ::Ice::Context*) = 0;

    virtual ::omero::model::FilesetUsedFilesSeq copyUsedFiles(const ::Ice::Context*) = 0;

    virtual void addFilesetEntry(const ::omero::model::FilesetEntryPtr&, const ::Ice::Context*) = 0;

    virtual void addAllFilesetEntrySet(const ::omero::model::FilesetUsedFilesSeq&, const ::Ice::Context*) = 0;

    virtual void removeFilesetEntry(const ::omero::model::FilesetEntryPtr&, const ::Ice::Context*) = 0;

    virtual void removeAllFilesetEntrySet(const ::omero::model::FilesetUsedFilesSeq&, const ::Ice::Context*) = 0;

    virtual void clearUsedFiles(const ::Ice::Context*) = 0;

    virtual void reloadUsedFiles(const ::omero::model::FilesetPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::FilesetEntryPtr getFilesetEntry(::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::omero::model::FilesetEntryPtr setFilesetEntry(::Ice::Int, const ::omero::model::FilesetEntryPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::FilesetEntryPtr getPrimaryFilesetEntry(const ::Ice::Context*) = 0;

    virtual ::omero::model::FilesetEntryPtr setPrimaryFilesetEntry(const ::omero::model::FilesetEntryPtr&, const ::Ice::Context*) = 0;

    virtual void unloadImages(const ::Ice::Context*) = 0;

    virtual ::Ice::Int sizeOfImages(const ::Ice::Context*) = 0;

    virtual ::omero::model::FilesetImagesSeq copyImages(const ::Ice::Context*) = 0;

    virtual void addImage(const ::omero::model::ImagePtr&, const ::Ice::Context*) = 0;

    virtual void addAllImageSet(const ::omero::model::FilesetImagesSeq&, const ::Ice::Context*) = 0;

    virtual void removeImage(const ::omero::model::ImagePtr&, const ::Ice::Context*) = 0;

    virtual void removeAllImageSet(const ::omero::model::FilesetImagesSeq&, const ::Ice::Context*) = 0;

    virtual void clearImages(const ::Ice::Context*) = 0;

    virtual void reloadImages(const ::omero::model::FilesetPtr&, const ::Ice::Context*) = 0;

    virtual void unloadJobLinks(const ::Ice::Context*) = 0;

    virtual ::Ice::Int sizeOfJobLinks(const ::Ice::Context*) = 0;

    virtual ::omero::model::FilesetJobLinksSeq copyJobLinks(const ::Ice::Context*) = 0;

    virtual void addFilesetJobLink(const ::omero::model::FilesetJobLinkPtr&, const ::Ice::Context*) = 0;

    virtual void addAllFilesetJobLinkSet(const ::omero::model::FilesetJobLinksSeq&, const ::Ice::Context*) = 0;

    virtual void removeFilesetJobLink(const ::omero::model::FilesetJobLinkPtr&, const ::Ice::Context*) = 0;

    virtual void removeAllFilesetJobLinkSet(const ::omero::model::FilesetJobLinksSeq&, const ::Ice::Context*) = 0;

    virtual void clearJobLinks(const ::Ice::Context*) = 0;

    virtual void reloadJobLinks(const ::omero::model::FilesetPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::FilesetJobLinkPtr getFilesetJobLink(::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::omero::model::FilesetJobLinkPtr setFilesetJobLink(::Ice::Int, const ::omero::model::FilesetJobLinkPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::FilesetJobLinkPtr getPrimaryFilesetJobLink(const ::Ice::Context*) = 0;

    virtual ::omero::model::FilesetJobLinkPtr setPrimaryFilesetJobLink(const ::omero::model::FilesetJobLinkPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::sys::CountMap getJobLinksCountPerOwner(const ::Ice::Context*) = 0;

    virtual ::omero::model::FilesetJobLinkPtr linkJob(const ::omero::model::JobPtr&, const ::Ice::Context*) = 0;

    virtual void addFilesetJobLinkToBoth(const ::omero::model::FilesetJobLinkPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::FilesetJobLinksSeq findFilesetJobLink(const ::omero::model::JobPtr&, const ::Ice::Context*) = 0;

    virtual void unlinkJob(const ::omero::model::JobPtr&, const ::Ice::Context*) = 0;

    virtual void removeFilesetJobLinkFromBoth(const ::omero::model::FilesetJobLinkPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::FilesetLinkedJobSeq linkedJobList(const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getTemplatePrefix(const ::Ice::Context*) = 0;

    virtual void setTemplatePrefix(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual void unloadAnnotationLinks(const ::Ice::Context*) = 0;

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Context*) = 0;

    virtual ::omero::model::FilesetAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*) = 0;

    virtual void addFilesetAnnotationLink(const ::omero::model::FilesetAnnotationLinkPtr&, const ::Ice::Context*) = 0;

    virtual void addAllFilesetAnnotationLinkSet(const ::omero::model::FilesetAnnotationLinksSeq&, const ::Ice::Context*) = 0;

    virtual void removeFilesetAnnotationLink(const ::omero::model::FilesetAnnotationLinkPtr&, const ::Ice::Context*) = 0;

    virtual void removeAllFilesetAnnotationLinkSet(const ::omero::model::FilesetAnnotationLinksSeq&, const ::Ice::Context*) = 0;

    virtual void clearAnnotationLinks(const ::Ice::Context*) = 0;

    virtual void reloadAnnotationLinks(const ::omero::model::FilesetPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Context*) = 0;

    virtual ::omero::model::FilesetAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*) = 0;

    virtual void addFilesetAnnotationLinkToBoth(const ::omero::model::FilesetAnnotationLinkPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::FilesetAnnotationLinksSeq findFilesetAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*) = 0;

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*) = 0;

    virtual void removeFilesetAnnotationLinkFromBoth(const ::omero::model::FilesetAnnotationLinkPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::FilesetLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*) = 0;
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

class Fileset : virtual public ::IceDelegate::omero::model::Fileset,
                virtual public ::IceDelegateM::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual void unloadUsedFiles(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfUsedFiles(const ::Ice::Context*);

    virtual ::omero::model::FilesetUsedFilesSeq copyUsedFiles(const ::Ice::Context*);

    virtual void addFilesetEntry(const ::omero::model::FilesetEntryPtr&, const ::Ice::Context*);

    virtual void addAllFilesetEntrySet(const ::omero::model::FilesetUsedFilesSeq&, const ::Ice::Context*);

    virtual void removeFilesetEntry(const ::omero::model::FilesetEntryPtr&, const ::Ice::Context*);

    virtual void removeAllFilesetEntrySet(const ::omero::model::FilesetUsedFilesSeq&, const ::Ice::Context*);

    virtual void clearUsedFiles(const ::Ice::Context*);

    virtual void reloadUsedFiles(const ::omero::model::FilesetPtr&, const ::Ice::Context*);

    virtual ::omero::model::FilesetEntryPtr getFilesetEntry(::Ice::Int, const ::Ice::Context*);

    virtual ::omero::model::FilesetEntryPtr setFilesetEntry(::Ice::Int, const ::omero::model::FilesetEntryPtr&, const ::Ice::Context*);

    virtual ::omero::model::FilesetEntryPtr getPrimaryFilesetEntry(const ::Ice::Context*);

    virtual ::omero::model::FilesetEntryPtr setPrimaryFilesetEntry(const ::omero::model::FilesetEntryPtr&, const ::Ice::Context*);

    virtual void unloadImages(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfImages(const ::Ice::Context*);

    virtual ::omero::model::FilesetImagesSeq copyImages(const ::Ice::Context*);

    virtual void addImage(const ::omero::model::ImagePtr&, const ::Ice::Context*);

    virtual void addAllImageSet(const ::omero::model::FilesetImagesSeq&, const ::Ice::Context*);

    virtual void removeImage(const ::omero::model::ImagePtr&, const ::Ice::Context*);

    virtual void removeAllImageSet(const ::omero::model::FilesetImagesSeq&, const ::Ice::Context*);

    virtual void clearImages(const ::Ice::Context*);

    virtual void reloadImages(const ::omero::model::FilesetPtr&, const ::Ice::Context*);

    virtual void unloadJobLinks(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfJobLinks(const ::Ice::Context*);

    virtual ::omero::model::FilesetJobLinksSeq copyJobLinks(const ::Ice::Context*);

    virtual void addFilesetJobLink(const ::omero::model::FilesetJobLinkPtr&, const ::Ice::Context*);

    virtual void addAllFilesetJobLinkSet(const ::omero::model::FilesetJobLinksSeq&, const ::Ice::Context*);

    virtual void removeFilesetJobLink(const ::omero::model::FilesetJobLinkPtr&, const ::Ice::Context*);

    virtual void removeAllFilesetJobLinkSet(const ::omero::model::FilesetJobLinksSeq&, const ::Ice::Context*);

    virtual void clearJobLinks(const ::Ice::Context*);

    virtual void reloadJobLinks(const ::omero::model::FilesetPtr&, const ::Ice::Context*);

    virtual ::omero::model::FilesetJobLinkPtr getFilesetJobLink(::Ice::Int, const ::Ice::Context*);

    virtual ::omero::model::FilesetJobLinkPtr setFilesetJobLink(::Ice::Int, const ::omero::model::FilesetJobLinkPtr&, const ::Ice::Context*);

    virtual ::omero::model::FilesetJobLinkPtr getPrimaryFilesetJobLink(const ::Ice::Context*);

    virtual ::omero::model::FilesetJobLinkPtr setPrimaryFilesetJobLink(const ::omero::model::FilesetJobLinkPtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getJobLinksCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::FilesetJobLinkPtr linkJob(const ::omero::model::JobPtr&, const ::Ice::Context*);

    virtual void addFilesetJobLinkToBoth(const ::omero::model::FilesetJobLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::FilesetJobLinksSeq findFilesetJobLink(const ::omero::model::JobPtr&, const ::Ice::Context*);

    virtual void unlinkJob(const ::omero::model::JobPtr&, const ::Ice::Context*);

    virtual void removeFilesetJobLinkFromBoth(const ::omero::model::FilesetJobLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::FilesetLinkedJobSeq linkedJobList(const ::Ice::Context*);

    virtual ::omero::RStringPtr getTemplatePrefix(const ::Ice::Context*);

    virtual void setTemplatePrefix(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual void unloadAnnotationLinks(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Context*);

    virtual ::omero::model::FilesetAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*);

    virtual void addFilesetAnnotationLink(const ::omero::model::FilesetAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void addAllFilesetAnnotationLinkSet(const ::omero::model::FilesetAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void removeFilesetAnnotationLink(const ::omero::model::FilesetAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void removeAllFilesetAnnotationLinkSet(const ::omero::model::FilesetAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void clearAnnotationLinks(const ::Ice::Context*);

    virtual void reloadAnnotationLinks(const ::omero::model::FilesetPtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::FilesetAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void addFilesetAnnotationLinkToBoth(const ::omero::model::FilesetAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::FilesetAnnotationLinksSeq findFilesetAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void removeFilesetAnnotationLinkFromBoth(const ::omero::model::FilesetAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::FilesetLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*);
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

class Fileset : virtual public ::IceDelegate::omero::model::Fileset,
                virtual public ::IceDelegateD::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual void unloadUsedFiles(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfUsedFiles(const ::Ice::Context*);

    virtual ::omero::model::FilesetUsedFilesSeq copyUsedFiles(const ::Ice::Context*);

    virtual void addFilesetEntry(const ::omero::model::FilesetEntryPtr&, const ::Ice::Context*);

    virtual void addAllFilesetEntrySet(const ::omero::model::FilesetUsedFilesSeq&, const ::Ice::Context*);

    virtual void removeFilesetEntry(const ::omero::model::FilesetEntryPtr&, const ::Ice::Context*);

    virtual void removeAllFilesetEntrySet(const ::omero::model::FilesetUsedFilesSeq&, const ::Ice::Context*);

    virtual void clearUsedFiles(const ::Ice::Context*);

    virtual void reloadUsedFiles(const ::omero::model::FilesetPtr&, const ::Ice::Context*);

    virtual ::omero::model::FilesetEntryPtr getFilesetEntry(::Ice::Int, const ::Ice::Context*);

    virtual ::omero::model::FilesetEntryPtr setFilesetEntry(::Ice::Int, const ::omero::model::FilesetEntryPtr&, const ::Ice::Context*);

    virtual ::omero::model::FilesetEntryPtr getPrimaryFilesetEntry(const ::Ice::Context*);

    virtual ::omero::model::FilesetEntryPtr setPrimaryFilesetEntry(const ::omero::model::FilesetEntryPtr&, const ::Ice::Context*);

    virtual void unloadImages(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfImages(const ::Ice::Context*);

    virtual ::omero::model::FilesetImagesSeq copyImages(const ::Ice::Context*);

    virtual void addImage(const ::omero::model::ImagePtr&, const ::Ice::Context*);

    virtual void addAllImageSet(const ::omero::model::FilesetImagesSeq&, const ::Ice::Context*);

    virtual void removeImage(const ::omero::model::ImagePtr&, const ::Ice::Context*);

    virtual void removeAllImageSet(const ::omero::model::FilesetImagesSeq&, const ::Ice::Context*);

    virtual void clearImages(const ::Ice::Context*);

    virtual void reloadImages(const ::omero::model::FilesetPtr&, const ::Ice::Context*);

    virtual void unloadJobLinks(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfJobLinks(const ::Ice::Context*);

    virtual ::omero::model::FilesetJobLinksSeq copyJobLinks(const ::Ice::Context*);

    virtual void addFilesetJobLink(const ::omero::model::FilesetJobLinkPtr&, const ::Ice::Context*);

    virtual void addAllFilesetJobLinkSet(const ::omero::model::FilesetJobLinksSeq&, const ::Ice::Context*);

    virtual void removeFilesetJobLink(const ::omero::model::FilesetJobLinkPtr&, const ::Ice::Context*);

    virtual void removeAllFilesetJobLinkSet(const ::omero::model::FilesetJobLinksSeq&, const ::Ice::Context*);

    virtual void clearJobLinks(const ::Ice::Context*);

    virtual void reloadJobLinks(const ::omero::model::FilesetPtr&, const ::Ice::Context*);

    virtual ::omero::model::FilesetJobLinkPtr getFilesetJobLink(::Ice::Int, const ::Ice::Context*);

    virtual ::omero::model::FilesetJobLinkPtr setFilesetJobLink(::Ice::Int, const ::omero::model::FilesetJobLinkPtr&, const ::Ice::Context*);

    virtual ::omero::model::FilesetJobLinkPtr getPrimaryFilesetJobLink(const ::Ice::Context*);

    virtual ::omero::model::FilesetJobLinkPtr setPrimaryFilesetJobLink(const ::omero::model::FilesetJobLinkPtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getJobLinksCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::FilesetJobLinkPtr linkJob(const ::omero::model::JobPtr&, const ::Ice::Context*);

    virtual void addFilesetJobLinkToBoth(const ::omero::model::FilesetJobLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::FilesetJobLinksSeq findFilesetJobLink(const ::omero::model::JobPtr&, const ::Ice::Context*);

    virtual void unlinkJob(const ::omero::model::JobPtr&, const ::Ice::Context*);

    virtual void removeFilesetJobLinkFromBoth(const ::omero::model::FilesetJobLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::FilesetLinkedJobSeq linkedJobList(const ::Ice::Context*);

    virtual ::omero::RStringPtr getTemplatePrefix(const ::Ice::Context*);

    virtual void setTemplatePrefix(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual void unloadAnnotationLinks(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Context*);

    virtual ::omero::model::FilesetAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*);

    virtual void addFilesetAnnotationLink(const ::omero::model::FilesetAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void addAllFilesetAnnotationLinkSet(const ::omero::model::FilesetAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void removeFilesetAnnotationLink(const ::omero::model::FilesetAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void removeAllFilesetAnnotationLinkSet(const ::omero::model::FilesetAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void clearAnnotationLinks(const ::Ice::Context*);

    virtual void reloadAnnotationLinks(const ::omero::model::FilesetPtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::FilesetAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void addFilesetAnnotationLinkToBoth(const ::omero::model::FilesetAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::FilesetAnnotationLinksSeq findFilesetAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void removeFilesetAnnotationLinkFromBoth(const ::omero::model::FilesetAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::FilesetLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace model
{

class Fileset : virtual public ::omero::model::IObject
{
public:

    typedef FilesetPrx ProxyType;
    typedef FilesetPtr PointerType;
    
    Fileset() {}
    Fileset(const ::omero::RLongPtr&, const ::omero::model::DetailsPtr&, bool, const ::omero::RIntPtr&, const ::omero::model::FilesetUsedFilesSeq&, bool, const ::omero::model::FilesetImagesSeq&, bool, const ::omero::model::FilesetJobLinksSeq&, bool, const ::omero::sys::CountMap&, const ::omero::RStringPtr&, const ::omero::model::FilesetAnnotationLinksSeq&, bool, const ::omero::sys::CountMap&);
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

    virtual void unloadUsedFiles(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unloadUsedFiles(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int sizeOfUsedFiles(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sizeOfUsedFiles(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::FilesetUsedFilesSeq copyUsedFiles(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copyUsedFiles(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addFilesetEntry(const ::omero::model::FilesetEntryPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addFilesetEntry(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAllFilesetEntrySet(const ::omero::model::FilesetUsedFilesSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAllFilesetEntrySet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeFilesetEntry(const ::omero::model::FilesetEntryPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeFilesetEntry(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeAllFilesetEntrySet(const ::omero::model::FilesetUsedFilesSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeAllFilesetEntrySet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void clearUsedFiles(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___clearUsedFiles(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void reloadUsedFiles(const ::omero::model::FilesetPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___reloadUsedFiles(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::FilesetEntryPtr getFilesetEntry(::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getFilesetEntry(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::FilesetEntryPtr setFilesetEntry(::Ice::Int, const ::omero::model::FilesetEntryPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setFilesetEntry(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::FilesetEntryPtr getPrimaryFilesetEntry(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getPrimaryFilesetEntry(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::FilesetEntryPtr setPrimaryFilesetEntry(const ::omero::model::FilesetEntryPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setPrimaryFilesetEntry(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unloadImages(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unloadImages(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int sizeOfImages(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sizeOfImages(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::FilesetImagesSeq copyImages(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copyImages(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addImage(const ::omero::model::ImagePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addImage(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAllImageSet(const ::omero::model::FilesetImagesSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAllImageSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeImage(const ::omero::model::ImagePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeImage(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeAllImageSet(const ::omero::model::FilesetImagesSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeAllImageSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void clearImages(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___clearImages(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void reloadImages(const ::omero::model::FilesetPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___reloadImages(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unloadJobLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unloadJobLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int sizeOfJobLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sizeOfJobLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::FilesetJobLinksSeq copyJobLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copyJobLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addFilesetJobLink(const ::omero::model::FilesetJobLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addFilesetJobLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAllFilesetJobLinkSet(const ::omero::model::FilesetJobLinksSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAllFilesetJobLinkSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeFilesetJobLink(const ::omero::model::FilesetJobLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeFilesetJobLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeAllFilesetJobLinkSet(const ::omero::model::FilesetJobLinksSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeAllFilesetJobLinkSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void clearJobLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___clearJobLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void reloadJobLinks(const ::omero::model::FilesetPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___reloadJobLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::FilesetJobLinkPtr getFilesetJobLink(::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getFilesetJobLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::FilesetJobLinkPtr setFilesetJobLink(::Ice::Int, const ::omero::model::FilesetJobLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setFilesetJobLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::FilesetJobLinkPtr getPrimaryFilesetJobLink(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getPrimaryFilesetJobLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::FilesetJobLinkPtr setPrimaryFilesetJobLink(const ::omero::model::FilesetJobLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setPrimaryFilesetJobLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::sys::CountMap getJobLinksCountPerOwner(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getJobLinksCountPerOwner(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::FilesetJobLinkPtr linkJob(const ::omero::model::JobPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkJob(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addFilesetJobLinkToBoth(const ::omero::model::FilesetJobLinkPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addFilesetJobLinkToBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::FilesetJobLinksSeq findFilesetJobLink(const ::omero::model::JobPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___findFilesetJobLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unlinkJob(const ::omero::model::JobPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unlinkJob(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeFilesetJobLinkFromBoth(const ::omero::model::FilesetJobLinkPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeFilesetJobLinkFromBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::FilesetLinkedJobSeq linkedJobList(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkedJobList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getTemplatePrefix(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getTemplatePrefix(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setTemplatePrefix(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setTemplatePrefix(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unloadAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unloadAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sizeOfAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::FilesetAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copyAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addFilesetAnnotationLink(const ::omero::model::FilesetAnnotationLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addFilesetAnnotationLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAllFilesetAnnotationLinkSet(const ::omero::model::FilesetAnnotationLinksSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAllFilesetAnnotationLinkSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeFilesetAnnotationLink(const ::omero::model::FilesetAnnotationLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeFilesetAnnotationLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeAllFilesetAnnotationLinkSet(const ::omero::model::FilesetAnnotationLinksSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeAllFilesetAnnotationLinkSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void clearAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___clearAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void reloadAnnotationLinks(const ::omero::model::FilesetPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___reloadAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getAnnotationLinksCountPerOwner(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::FilesetAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkAnnotation(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addFilesetAnnotationLinkToBoth(const ::omero::model::FilesetAnnotationLinkPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addFilesetAnnotationLinkToBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::FilesetAnnotationLinksSeq findFilesetAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___findFilesetAnnotationLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unlinkAnnotation(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeFilesetAnnotationLinkFromBoth(const ::omero::model::FilesetAnnotationLinkPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeFilesetAnnotationLinkFromBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::FilesetLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkedAnnotationList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

protected:

    ::omero::RIntPtr version;

    ::omero::model::FilesetUsedFilesSeq usedFilesSeq;

    bool usedFilesLoaded;

    ::omero::model::FilesetImagesSeq imagesSeq;

    bool imagesLoaded;

    ::omero::model::FilesetJobLinksSeq jobLinksSeq;

    bool jobLinksLoaded;

    ::omero::sys::CountMap jobLinksCountPerOwner;

    ::omero::RStringPtr templatePrefix;

    ::omero::model::FilesetAnnotationLinksSeq annotationLinksSeq;

    bool annotationLinksLoaded;

    ::omero::sys::CountMap annotationLinksCountPerOwner;
};

}

}

#endif
