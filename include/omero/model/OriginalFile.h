// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `OriginalFile.ice'

#ifndef __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_OriginalFile_h__
#define __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_OriginalFile_h__

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

class PixelsOriginalFileMap;

class Pixels;

class ChecksumAlgorithm;

class OriginalFileAnnotationLink;

class Annotation;

class Details;

class OriginalFile;

}

}

}

namespace omero
{

namespace model
{

class PixelsOriginalFileMap;
bool operator==(const PixelsOriginalFileMap&, const PixelsOriginalFileMap&);
bool operator<(const PixelsOriginalFileMap&, const PixelsOriginalFileMap&);

class Pixels;
bool operator==(const Pixels&, const Pixels&);
bool operator<(const Pixels&, const Pixels&);

class ChecksumAlgorithm;
bool operator==(const ChecksumAlgorithm&, const ChecksumAlgorithm&);
bool operator<(const ChecksumAlgorithm&, const ChecksumAlgorithm&);

class OriginalFileAnnotationLink;
bool operator==(const OriginalFileAnnotationLink&, const OriginalFileAnnotationLink&);
bool operator<(const OriginalFileAnnotationLink&, const OriginalFileAnnotationLink&);

class Annotation;
bool operator==(const Annotation&, const Annotation&);
bool operator<(const Annotation&, const Annotation&);

class Details;
bool operator==(const Details&, const Details&);
bool operator<(const Details&, const Details&);

class OriginalFile;
bool operator==(const OriginalFile&, const OriginalFile&);
bool operator<(const OriginalFile&, const OriginalFile&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::model::PixelsOriginalFileMap*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::PixelsOriginalFileMap*);

::Ice::Object* upCast(::omero::model::Pixels*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Pixels*);

::Ice::Object* upCast(::omero::model::ChecksumAlgorithm*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::ChecksumAlgorithm*);

::Ice::Object* upCast(::omero::model::OriginalFileAnnotationLink*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::OriginalFileAnnotationLink*);

::Ice::Object* upCast(::omero::model::Annotation*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Annotation*);

::Ice::Object* upCast(::omero::model::Details*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Details*);

::Ice::Object* upCast(::omero::model::OriginalFile*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::OriginalFile*);

}

namespace omero
{

namespace model
{

typedef ::IceInternal::Handle< ::omero::model::PixelsOriginalFileMap> PixelsOriginalFileMapPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::PixelsOriginalFileMap> PixelsOriginalFileMapPrx;

void __read(::IceInternal::BasicStream*, PixelsOriginalFileMapPrx&);
void __patch__PixelsOriginalFileMapPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Pixels> PixelsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Pixels> PixelsPrx;

void __read(::IceInternal::BasicStream*, PixelsPrx&);
void __patch__PixelsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::ChecksumAlgorithm> ChecksumAlgorithmPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::ChecksumAlgorithm> ChecksumAlgorithmPrx;

void __read(::IceInternal::BasicStream*, ChecksumAlgorithmPrx&);
void __patch__ChecksumAlgorithmPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::OriginalFileAnnotationLink> OriginalFileAnnotationLinkPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::OriginalFileAnnotationLink> OriginalFileAnnotationLinkPrx;

void __read(::IceInternal::BasicStream*, OriginalFileAnnotationLinkPrx&);
void __patch__OriginalFileAnnotationLinkPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Annotation> AnnotationPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Annotation> AnnotationPrx;

void __read(::IceInternal::BasicStream*, AnnotationPrx&);
void __patch__AnnotationPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Details> DetailsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Details> DetailsPrx;

void __read(::IceInternal::BasicStream*, DetailsPrx&);
void __patch__DetailsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::OriginalFile> OriginalFilePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::OriginalFile> OriginalFilePrx;

void __read(::IceInternal::BasicStream*, OriginalFilePrx&);
void __patch__OriginalFilePtr(void*, ::Ice::ObjectPtr&);

}

}

namespace omero
{

namespace model
{

typedef ::std::vector< ::omero::model::PixelsOriginalFileMapPtr> OriginalFilePixelsFileMapsSeq;
void __writeOriginalFilePixelsFileMapsSeq(::IceInternal::BasicStream*, const ::omero::model::PixelsOriginalFileMapPtr*, const ::omero::model::PixelsOriginalFileMapPtr*);
void __readOriginalFilePixelsFileMapsSeq(::IceInternal::BasicStream*, OriginalFilePixelsFileMapsSeq&);

typedef ::std::vector< ::omero::model::PixelsPtr> OriginalFileLinkedPixelsSeq;
void __writeOriginalFileLinkedPixelsSeq(::IceInternal::BasicStream*, const ::omero::model::PixelsPtr*, const ::omero::model::PixelsPtr*);
void __readOriginalFileLinkedPixelsSeq(::IceInternal::BasicStream*, OriginalFileLinkedPixelsSeq&);

typedef ::std::vector< ::omero::model::OriginalFileAnnotationLinkPtr> OriginalFileAnnotationLinksSeq;
void __writeOriginalFileAnnotationLinksSeq(::IceInternal::BasicStream*, const ::omero::model::OriginalFileAnnotationLinkPtr*, const ::omero::model::OriginalFileAnnotationLinkPtr*);
void __readOriginalFileAnnotationLinksSeq(::IceInternal::BasicStream*, OriginalFileAnnotationLinksSeq&);

typedef ::std::vector< ::omero::model::AnnotationPtr> OriginalFileLinkedAnnotationSeq;
void __writeOriginalFileLinkedAnnotationSeq(::IceInternal::BasicStream*, const ::omero::model::AnnotationPtr*, const ::omero::model::AnnotationPtr*);
void __readOriginalFileLinkedAnnotationSeq(::IceInternal::BasicStream*, OriginalFileLinkedAnnotationSeq&);

}

}

namespace IceProxy
{

namespace omero
{

namespace model
{

class OriginalFile : virtual public ::IceProxy::omero::model::IObject
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

    void unloadPixelsFileMaps()
    {
        unloadPixelsFileMaps(0);
    }
    void unloadPixelsFileMaps(const ::Ice::Context& __ctx)
    {
        unloadPixelsFileMaps(&__ctx);
    }
    
private:

    void unloadPixelsFileMaps(const ::Ice::Context*);
    
public:

    ::Ice::Int sizeOfPixelsFileMaps()
    {
        return sizeOfPixelsFileMaps(0);
    }
    ::Ice::Int sizeOfPixelsFileMaps(const ::Ice::Context& __ctx)
    {
        return sizeOfPixelsFileMaps(&__ctx);
    }
    
private:

    ::Ice::Int sizeOfPixelsFileMaps(const ::Ice::Context*);
    
public:

    ::omero::model::OriginalFilePixelsFileMapsSeq copyPixelsFileMaps()
    {
        return copyPixelsFileMaps(0);
    }
    ::omero::model::OriginalFilePixelsFileMapsSeq copyPixelsFileMaps(const ::Ice::Context& __ctx)
    {
        return copyPixelsFileMaps(&__ctx);
    }
    
private:

    ::omero::model::OriginalFilePixelsFileMapsSeq copyPixelsFileMaps(const ::Ice::Context*);
    
public:

    void addPixelsOriginalFileMap(const ::omero::model::PixelsOriginalFileMapPtr& target)
    {
        addPixelsOriginalFileMap(target, 0);
    }
    void addPixelsOriginalFileMap(const ::omero::model::PixelsOriginalFileMapPtr& target, const ::Ice::Context& __ctx)
    {
        addPixelsOriginalFileMap(target, &__ctx);
    }
    
private:

    void addPixelsOriginalFileMap(const ::omero::model::PixelsOriginalFileMapPtr&, const ::Ice::Context*);
    
public:

    void addAllPixelsOriginalFileMapSet(const ::omero::model::OriginalFilePixelsFileMapsSeq& targets)
    {
        addAllPixelsOriginalFileMapSet(targets, 0);
    }
    void addAllPixelsOriginalFileMapSet(const ::omero::model::OriginalFilePixelsFileMapsSeq& targets, const ::Ice::Context& __ctx)
    {
        addAllPixelsOriginalFileMapSet(targets, &__ctx);
    }
    
private:

    void addAllPixelsOriginalFileMapSet(const ::omero::model::OriginalFilePixelsFileMapsSeq&, const ::Ice::Context*);
    
public:

    void removePixelsOriginalFileMap(const ::omero::model::PixelsOriginalFileMapPtr& theTarget)
    {
        removePixelsOriginalFileMap(theTarget, 0);
    }
    void removePixelsOriginalFileMap(const ::omero::model::PixelsOriginalFileMapPtr& theTarget, const ::Ice::Context& __ctx)
    {
        removePixelsOriginalFileMap(theTarget, &__ctx);
    }
    
private:

    void removePixelsOriginalFileMap(const ::omero::model::PixelsOriginalFileMapPtr&, const ::Ice::Context*);
    
public:

    void removeAllPixelsOriginalFileMapSet(const ::omero::model::OriginalFilePixelsFileMapsSeq& targets)
    {
        removeAllPixelsOriginalFileMapSet(targets, 0);
    }
    void removeAllPixelsOriginalFileMapSet(const ::omero::model::OriginalFilePixelsFileMapsSeq& targets, const ::Ice::Context& __ctx)
    {
        removeAllPixelsOriginalFileMapSet(targets, &__ctx);
    }
    
private:

    void removeAllPixelsOriginalFileMapSet(const ::omero::model::OriginalFilePixelsFileMapsSeq&, const ::Ice::Context*);
    
public:

    void clearPixelsFileMaps()
    {
        clearPixelsFileMaps(0);
    }
    void clearPixelsFileMaps(const ::Ice::Context& __ctx)
    {
        clearPixelsFileMaps(&__ctx);
    }
    
private:

    void clearPixelsFileMaps(const ::Ice::Context*);
    
public:

    void reloadPixelsFileMaps(const ::omero::model::OriginalFilePtr& toCopy)
    {
        reloadPixelsFileMaps(toCopy, 0);
    }
    void reloadPixelsFileMaps(const ::omero::model::OriginalFilePtr& toCopy, const ::Ice::Context& __ctx)
    {
        reloadPixelsFileMaps(toCopy, &__ctx);
    }
    
private:

    void reloadPixelsFileMaps(const ::omero::model::OriginalFilePtr&, const ::Ice::Context*);
    
public:

    ::omero::sys::CountMap getPixelsFileMapsCountPerOwner()
    {
        return getPixelsFileMapsCountPerOwner(0);
    }
    ::omero::sys::CountMap getPixelsFileMapsCountPerOwner(const ::Ice::Context& __ctx)
    {
        return getPixelsFileMapsCountPerOwner(&__ctx);
    }
    
private:

    ::omero::sys::CountMap getPixelsFileMapsCountPerOwner(const ::Ice::Context*);
    
public:

    ::omero::model::PixelsOriginalFileMapPtr linkPixels(const ::omero::model::PixelsPtr& addition)
    {
        return linkPixels(addition, 0);
    }
    ::omero::model::PixelsOriginalFileMapPtr linkPixels(const ::omero::model::PixelsPtr& addition, const ::Ice::Context& __ctx)
    {
        return linkPixels(addition, &__ctx);
    }
    
private:

    ::omero::model::PixelsOriginalFileMapPtr linkPixels(const ::omero::model::PixelsPtr&, const ::Ice::Context*);
    
public:

    void addPixelsOriginalFileMapToBoth(const ::omero::model::PixelsOriginalFileMapPtr& link, bool bothSides)
    {
        addPixelsOriginalFileMapToBoth(link, bothSides, 0);
    }
    void addPixelsOriginalFileMapToBoth(const ::omero::model::PixelsOriginalFileMapPtr& link, bool bothSides, const ::Ice::Context& __ctx)
    {
        addPixelsOriginalFileMapToBoth(link, bothSides, &__ctx);
    }
    
private:

    void addPixelsOriginalFileMapToBoth(const ::omero::model::PixelsOriginalFileMapPtr&, bool, const ::Ice::Context*);
    
public:

    ::omero::model::OriginalFilePixelsFileMapsSeq findPixelsOriginalFileMap(const ::omero::model::PixelsPtr& removal)
    {
        return findPixelsOriginalFileMap(removal, 0);
    }
    ::omero::model::OriginalFilePixelsFileMapsSeq findPixelsOriginalFileMap(const ::omero::model::PixelsPtr& removal, const ::Ice::Context& __ctx)
    {
        return findPixelsOriginalFileMap(removal, &__ctx);
    }
    
private:

    ::omero::model::OriginalFilePixelsFileMapsSeq findPixelsOriginalFileMap(const ::omero::model::PixelsPtr&, const ::Ice::Context*);
    
public:

    void unlinkPixels(const ::omero::model::PixelsPtr& removal)
    {
        unlinkPixels(removal, 0);
    }
    void unlinkPixels(const ::omero::model::PixelsPtr& removal, const ::Ice::Context& __ctx)
    {
        unlinkPixels(removal, &__ctx);
    }
    
private:

    void unlinkPixels(const ::omero::model::PixelsPtr&, const ::Ice::Context*);
    
public:

    void removePixelsOriginalFileMapFromBoth(const ::omero::model::PixelsOriginalFileMapPtr& link, bool bothSides)
    {
        removePixelsOriginalFileMapFromBoth(link, bothSides, 0);
    }
    void removePixelsOriginalFileMapFromBoth(const ::omero::model::PixelsOriginalFileMapPtr& link, bool bothSides, const ::Ice::Context& __ctx)
    {
        removePixelsOriginalFileMapFromBoth(link, bothSides, &__ctx);
    }
    
private:

    void removePixelsOriginalFileMapFromBoth(const ::omero::model::PixelsOriginalFileMapPtr&, bool, const ::Ice::Context*);
    
public:

    ::omero::model::OriginalFileLinkedPixelsSeq linkedPixelsList()
    {
        return linkedPixelsList(0);
    }
    ::omero::model::OriginalFileLinkedPixelsSeq linkedPixelsList(const ::Ice::Context& __ctx)
    {
        return linkedPixelsList(&__ctx);
    }
    
private:

    ::omero::model::OriginalFileLinkedPixelsSeq linkedPixelsList(const ::Ice::Context*);
    
public:

    ::omero::RStringPtr getPath()
    {
        return getPath(0);
    }
    ::omero::RStringPtr getPath(const ::Ice::Context& __ctx)
    {
        return getPath(&__ctx);
    }
    
private:

    ::omero::RStringPtr getPath(const ::Ice::Context*);
    
public:

    void setPath(const ::omero::RStringPtr& thePath)
    {
        setPath(thePath, 0);
    }
    void setPath(const ::omero::RStringPtr& thePath, const ::Ice::Context& __ctx)
    {
        setPath(thePath, &__ctx);
    }
    
private:

    void setPath(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:

    ::omero::RLongPtr getSize()
    {
        return getSize(0);
    }
    ::omero::RLongPtr getSize(const ::Ice::Context& __ctx)
    {
        return getSize(&__ctx);
    }
    
private:

    ::omero::RLongPtr getSize(const ::Ice::Context*);
    
public:

    void setSize(const ::omero::RLongPtr& theSize)
    {
        setSize(theSize, 0);
    }
    void setSize(const ::omero::RLongPtr& theSize, const ::Ice::Context& __ctx)
    {
        setSize(theSize, &__ctx);
    }
    
private:

    void setSize(const ::omero::RLongPtr&, const ::Ice::Context*);
    
public:

    ::omero::RTimePtr getAtime()
    {
        return getAtime(0);
    }
    ::omero::RTimePtr getAtime(const ::Ice::Context& __ctx)
    {
        return getAtime(&__ctx);
    }
    
private:

    ::omero::RTimePtr getAtime(const ::Ice::Context*);
    
public:

    void setAtime(const ::omero::RTimePtr& theAtime)
    {
        setAtime(theAtime, 0);
    }
    void setAtime(const ::omero::RTimePtr& theAtime, const ::Ice::Context& __ctx)
    {
        setAtime(theAtime, &__ctx);
    }
    
private:

    void setAtime(const ::omero::RTimePtr&, const ::Ice::Context*);
    
public:

    ::omero::RTimePtr getMtime()
    {
        return getMtime(0);
    }
    ::omero::RTimePtr getMtime(const ::Ice::Context& __ctx)
    {
        return getMtime(&__ctx);
    }
    
private:

    ::omero::RTimePtr getMtime(const ::Ice::Context*);
    
public:

    void setMtime(const ::omero::RTimePtr& theMtime)
    {
        setMtime(theMtime, 0);
    }
    void setMtime(const ::omero::RTimePtr& theMtime, const ::Ice::Context& __ctx)
    {
        setMtime(theMtime, &__ctx);
    }
    
private:

    void setMtime(const ::omero::RTimePtr&, const ::Ice::Context*);
    
public:

    ::omero::RTimePtr getCtime()
    {
        return getCtime(0);
    }
    ::omero::RTimePtr getCtime(const ::Ice::Context& __ctx)
    {
        return getCtime(&__ctx);
    }
    
private:

    ::omero::RTimePtr getCtime(const ::Ice::Context*);
    
public:

    void setCtime(const ::omero::RTimePtr& theCtime)
    {
        setCtime(theCtime, 0);
    }
    void setCtime(const ::omero::RTimePtr& theCtime, const ::Ice::Context& __ctx)
    {
        setCtime(theCtime, &__ctx);
    }
    
private:

    void setCtime(const ::omero::RTimePtr&, const ::Ice::Context*);
    
public:

    ::omero::model::ChecksumAlgorithmPtr getHasher()
    {
        return getHasher(0);
    }
    ::omero::model::ChecksumAlgorithmPtr getHasher(const ::Ice::Context& __ctx)
    {
        return getHasher(&__ctx);
    }
    
private:

    ::omero::model::ChecksumAlgorithmPtr getHasher(const ::Ice::Context*);
    
public:

    void setHasher(const ::omero::model::ChecksumAlgorithmPtr& theHasher)
    {
        setHasher(theHasher, 0);
    }
    void setHasher(const ::omero::model::ChecksumAlgorithmPtr& theHasher, const ::Ice::Context& __ctx)
    {
        setHasher(theHasher, &__ctx);
    }
    
private:

    void setHasher(const ::omero::model::ChecksumAlgorithmPtr&, const ::Ice::Context*);
    
public:

    ::omero::RStringPtr getHash()
    {
        return getHash(0);
    }
    ::omero::RStringPtr getHash(const ::Ice::Context& __ctx)
    {
        return getHash(&__ctx);
    }
    
private:

    ::omero::RStringPtr getHash(const ::Ice::Context*);
    
public:

    void setHash(const ::omero::RStringPtr& theHash)
    {
        setHash(theHash, 0);
    }
    void setHash(const ::omero::RStringPtr& theHash, const ::Ice::Context& __ctx)
    {
        setHash(theHash, &__ctx);
    }
    
private:

    void setHash(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:

    ::omero::RStringPtr getMimetype()
    {
        return getMimetype(0);
    }
    ::omero::RStringPtr getMimetype(const ::Ice::Context& __ctx)
    {
        return getMimetype(&__ctx);
    }
    
private:

    ::omero::RStringPtr getMimetype(const ::Ice::Context*);
    
public:

    void setMimetype(const ::omero::RStringPtr& theMimetype)
    {
        setMimetype(theMimetype, 0);
    }
    void setMimetype(const ::omero::RStringPtr& theMimetype, const ::Ice::Context& __ctx)
    {
        setMimetype(theMimetype, &__ctx);
    }
    
private:

    void setMimetype(const ::omero::RStringPtr&, const ::Ice::Context*);
    
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

    ::omero::model::OriginalFileAnnotationLinksSeq copyAnnotationLinks()
    {
        return copyAnnotationLinks(0);
    }
    ::omero::model::OriginalFileAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context& __ctx)
    {
        return copyAnnotationLinks(&__ctx);
    }
    
private:

    ::omero::model::OriginalFileAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*);
    
public:

    void addOriginalFileAnnotationLink(const ::omero::model::OriginalFileAnnotationLinkPtr& target)
    {
        addOriginalFileAnnotationLink(target, 0);
    }
    void addOriginalFileAnnotationLink(const ::omero::model::OriginalFileAnnotationLinkPtr& target, const ::Ice::Context& __ctx)
    {
        addOriginalFileAnnotationLink(target, &__ctx);
    }
    
private:

    void addOriginalFileAnnotationLink(const ::omero::model::OriginalFileAnnotationLinkPtr&, const ::Ice::Context*);
    
public:

    void addAllOriginalFileAnnotationLinkSet(const ::omero::model::OriginalFileAnnotationLinksSeq& targets)
    {
        addAllOriginalFileAnnotationLinkSet(targets, 0);
    }
    void addAllOriginalFileAnnotationLinkSet(const ::omero::model::OriginalFileAnnotationLinksSeq& targets, const ::Ice::Context& __ctx)
    {
        addAllOriginalFileAnnotationLinkSet(targets, &__ctx);
    }
    
private:

    void addAllOriginalFileAnnotationLinkSet(const ::omero::model::OriginalFileAnnotationLinksSeq&, const ::Ice::Context*);
    
public:

    void removeOriginalFileAnnotationLink(const ::omero::model::OriginalFileAnnotationLinkPtr& theTarget)
    {
        removeOriginalFileAnnotationLink(theTarget, 0);
    }
    void removeOriginalFileAnnotationLink(const ::omero::model::OriginalFileAnnotationLinkPtr& theTarget, const ::Ice::Context& __ctx)
    {
        removeOriginalFileAnnotationLink(theTarget, &__ctx);
    }
    
private:

    void removeOriginalFileAnnotationLink(const ::omero::model::OriginalFileAnnotationLinkPtr&, const ::Ice::Context*);
    
public:

    void removeAllOriginalFileAnnotationLinkSet(const ::omero::model::OriginalFileAnnotationLinksSeq& targets)
    {
        removeAllOriginalFileAnnotationLinkSet(targets, 0);
    }
    void removeAllOriginalFileAnnotationLinkSet(const ::omero::model::OriginalFileAnnotationLinksSeq& targets, const ::Ice::Context& __ctx)
    {
        removeAllOriginalFileAnnotationLinkSet(targets, &__ctx);
    }
    
private:

    void removeAllOriginalFileAnnotationLinkSet(const ::omero::model::OriginalFileAnnotationLinksSeq&, const ::Ice::Context*);
    
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

    void reloadAnnotationLinks(const ::omero::model::OriginalFilePtr& toCopy)
    {
        reloadAnnotationLinks(toCopy, 0);
    }
    void reloadAnnotationLinks(const ::omero::model::OriginalFilePtr& toCopy, const ::Ice::Context& __ctx)
    {
        reloadAnnotationLinks(toCopy, &__ctx);
    }
    
private:

    void reloadAnnotationLinks(const ::omero::model::OriginalFilePtr&, const ::Ice::Context*);
    
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

    ::omero::model::OriginalFileAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr& addition)
    {
        return linkAnnotation(addition, 0);
    }
    ::omero::model::OriginalFileAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr& addition, const ::Ice::Context& __ctx)
    {
        return linkAnnotation(addition, &__ctx);
    }
    
private:

    ::omero::model::OriginalFileAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);
    
public:

    void addOriginalFileAnnotationLinkToBoth(const ::omero::model::OriginalFileAnnotationLinkPtr& link, bool bothSides)
    {
        addOriginalFileAnnotationLinkToBoth(link, bothSides, 0);
    }
    void addOriginalFileAnnotationLinkToBoth(const ::omero::model::OriginalFileAnnotationLinkPtr& link, bool bothSides, const ::Ice::Context& __ctx)
    {
        addOriginalFileAnnotationLinkToBoth(link, bothSides, &__ctx);
    }
    
private:

    void addOriginalFileAnnotationLinkToBoth(const ::omero::model::OriginalFileAnnotationLinkPtr&, bool, const ::Ice::Context*);
    
public:

    ::omero::model::OriginalFileAnnotationLinksSeq findOriginalFileAnnotationLink(const ::omero::model::AnnotationPtr& removal)
    {
        return findOriginalFileAnnotationLink(removal, 0);
    }
    ::omero::model::OriginalFileAnnotationLinksSeq findOriginalFileAnnotationLink(const ::omero::model::AnnotationPtr& removal, const ::Ice::Context& __ctx)
    {
        return findOriginalFileAnnotationLink(removal, &__ctx);
    }
    
private:

    ::omero::model::OriginalFileAnnotationLinksSeq findOriginalFileAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);
    
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

    void removeOriginalFileAnnotationLinkFromBoth(const ::omero::model::OriginalFileAnnotationLinkPtr& link, bool bothSides)
    {
        removeOriginalFileAnnotationLinkFromBoth(link, bothSides, 0);
    }
    void removeOriginalFileAnnotationLinkFromBoth(const ::omero::model::OriginalFileAnnotationLinkPtr& link, bool bothSides, const ::Ice::Context& __ctx)
    {
        removeOriginalFileAnnotationLinkFromBoth(link, bothSides, &__ctx);
    }
    
private:

    void removeOriginalFileAnnotationLinkFromBoth(const ::omero::model::OriginalFileAnnotationLinkPtr&, bool, const ::Ice::Context*);
    
public:

    ::omero::model::OriginalFileLinkedAnnotationSeq linkedAnnotationList()
    {
        return linkedAnnotationList(0);
    }
    ::omero::model::OriginalFileLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context& __ctx)
    {
        return linkedAnnotationList(&__ctx);
    }
    
private:

    ::omero::model::OriginalFileLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*);
    
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
    
    ::IceInternal::ProxyHandle<OriginalFile> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OriginalFile*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<OriginalFile*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OriginalFile> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OriginalFile*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<OriginalFile*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OriginalFile> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OriginalFile*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<OriginalFile*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OriginalFile> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OriginalFile*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<OriginalFile*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OriginalFile> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OriginalFile*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<OriginalFile*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OriginalFile> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OriginalFile*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<OriginalFile*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OriginalFile> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OriginalFile*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<OriginalFile*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OriginalFile> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OriginalFile*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<OriginalFile*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OriginalFile> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OriginalFile*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<OriginalFile*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OriginalFile> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OriginalFile*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<OriginalFile*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OriginalFile> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OriginalFile*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<OriginalFile*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OriginalFile> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OriginalFile*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<OriginalFile*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OriginalFile> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OriginalFile*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<OriginalFile*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OriginalFile> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OriginalFile*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<OriginalFile*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OriginalFile> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OriginalFile*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<OriginalFile*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OriginalFile> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OriginalFile*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<OriginalFile*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OriginalFile> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OriginalFile*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<OriginalFile*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OriginalFile> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OriginalFile*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<OriginalFile*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OriginalFile> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OriginalFile*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<OriginalFile*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class OriginalFile : virtual public ::IceDelegate::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*) = 0;

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual void unloadPixelsFileMaps(const ::Ice::Context*) = 0;

    virtual ::Ice::Int sizeOfPixelsFileMaps(const ::Ice::Context*) = 0;

    virtual ::omero::model::OriginalFilePixelsFileMapsSeq copyPixelsFileMaps(const ::Ice::Context*) = 0;

    virtual void addPixelsOriginalFileMap(const ::omero::model::PixelsOriginalFileMapPtr&, const ::Ice::Context*) = 0;

    virtual void addAllPixelsOriginalFileMapSet(const ::omero::model::OriginalFilePixelsFileMapsSeq&, const ::Ice::Context*) = 0;

    virtual void removePixelsOriginalFileMap(const ::omero::model::PixelsOriginalFileMapPtr&, const ::Ice::Context*) = 0;

    virtual void removeAllPixelsOriginalFileMapSet(const ::omero::model::OriginalFilePixelsFileMapsSeq&, const ::Ice::Context*) = 0;

    virtual void clearPixelsFileMaps(const ::Ice::Context*) = 0;

    virtual void reloadPixelsFileMaps(const ::omero::model::OriginalFilePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::sys::CountMap getPixelsFileMapsCountPerOwner(const ::Ice::Context*) = 0;

    virtual ::omero::model::PixelsOriginalFileMapPtr linkPixels(const ::omero::model::PixelsPtr&, const ::Ice::Context*) = 0;

    virtual void addPixelsOriginalFileMapToBoth(const ::omero::model::PixelsOriginalFileMapPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::OriginalFilePixelsFileMapsSeq findPixelsOriginalFileMap(const ::omero::model::PixelsPtr&, const ::Ice::Context*) = 0;

    virtual void unlinkPixels(const ::omero::model::PixelsPtr&, const ::Ice::Context*) = 0;

    virtual void removePixelsOriginalFileMapFromBoth(const ::omero::model::PixelsOriginalFileMapPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::OriginalFileLinkedPixelsSeq linkedPixelsList(const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getPath(const ::Ice::Context*) = 0;

    virtual void setPath(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RLongPtr getSize(const ::Ice::Context*) = 0;

    virtual void setSize(const ::omero::RLongPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RTimePtr getAtime(const ::Ice::Context*) = 0;

    virtual void setAtime(const ::omero::RTimePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RTimePtr getMtime(const ::Ice::Context*) = 0;

    virtual void setMtime(const ::omero::RTimePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RTimePtr getCtime(const ::Ice::Context*) = 0;

    virtual void setCtime(const ::omero::RTimePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::ChecksumAlgorithmPtr getHasher(const ::Ice::Context*) = 0;

    virtual void setHasher(const ::omero::model::ChecksumAlgorithmPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getHash(const ::Ice::Context*) = 0;

    virtual void setHash(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getMimetype(const ::Ice::Context*) = 0;

    virtual void setMimetype(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual void unloadAnnotationLinks(const ::Ice::Context*) = 0;

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Context*) = 0;

    virtual ::omero::model::OriginalFileAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*) = 0;

    virtual void addOriginalFileAnnotationLink(const ::omero::model::OriginalFileAnnotationLinkPtr&, const ::Ice::Context*) = 0;

    virtual void addAllOriginalFileAnnotationLinkSet(const ::omero::model::OriginalFileAnnotationLinksSeq&, const ::Ice::Context*) = 0;

    virtual void removeOriginalFileAnnotationLink(const ::omero::model::OriginalFileAnnotationLinkPtr&, const ::Ice::Context*) = 0;

    virtual void removeAllOriginalFileAnnotationLinkSet(const ::omero::model::OriginalFileAnnotationLinksSeq&, const ::Ice::Context*) = 0;

    virtual void clearAnnotationLinks(const ::Ice::Context*) = 0;

    virtual void reloadAnnotationLinks(const ::omero::model::OriginalFilePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Context*) = 0;

    virtual ::omero::model::OriginalFileAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*) = 0;

    virtual void addOriginalFileAnnotationLinkToBoth(const ::omero::model::OriginalFileAnnotationLinkPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::OriginalFileAnnotationLinksSeq findOriginalFileAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*) = 0;

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*) = 0;

    virtual void removeOriginalFileAnnotationLinkFromBoth(const ::omero::model::OriginalFileAnnotationLinkPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::OriginalFileLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getName(const ::Ice::Context*) = 0;

    virtual void setName(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;
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

class OriginalFile : virtual public ::IceDelegate::omero::model::OriginalFile,
                     virtual public ::IceDelegateM::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual void unloadPixelsFileMaps(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfPixelsFileMaps(const ::Ice::Context*);

    virtual ::omero::model::OriginalFilePixelsFileMapsSeq copyPixelsFileMaps(const ::Ice::Context*);

    virtual void addPixelsOriginalFileMap(const ::omero::model::PixelsOriginalFileMapPtr&, const ::Ice::Context*);

    virtual void addAllPixelsOriginalFileMapSet(const ::omero::model::OriginalFilePixelsFileMapsSeq&, const ::Ice::Context*);

    virtual void removePixelsOriginalFileMap(const ::omero::model::PixelsOriginalFileMapPtr&, const ::Ice::Context*);

    virtual void removeAllPixelsOriginalFileMapSet(const ::omero::model::OriginalFilePixelsFileMapsSeq&, const ::Ice::Context*);

    virtual void clearPixelsFileMaps(const ::Ice::Context*);

    virtual void reloadPixelsFileMaps(const ::omero::model::OriginalFilePtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getPixelsFileMapsCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::PixelsOriginalFileMapPtr linkPixels(const ::omero::model::PixelsPtr&, const ::Ice::Context*);

    virtual void addPixelsOriginalFileMapToBoth(const ::omero::model::PixelsOriginalFileMapPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::OriginalFilePixelsFileMapsSeq findPixelsOriginalFileMap(const ::omero::model::PixelsPtr&, const ::Ice::Context*);

    virtual void unlinkPixels(const ::omero::model::PixelsPtr&, const ::Ice::Context*);

    virtual void removePixelsOriginalFileMapFromBoth(const ::omero::model::PixelsOriginalFileMapPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::OriginalFileLinkedPixelsSeq linkedPixelsList(const ::Ice::Context*);

    virtual ::omero::RStringPtr getPath(const ::Ice::Context*);

    virtual void setPath(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RLongPtr getSize(const ::Ice::Context*);

    virtual void setSize(const ::omero::RLongPtr&, const ::Ice::Context*);

    virtual ::omero::RTimePtr getAtime(const ::Ice::Context*);

    virtual void setAtime(const ::omero::RTimePtr&, const ::Ice::Context*);

    virtual ::omero::RTimePtr getMtime(const ::Ice::Context*);

    virtual void setMtime(const ::omero::RTimePtr&, const ::Ice::Context*);

    virtual ::omero::RTimePtr getCtime(const ::Ice::Context*);

    virtual void setCtime(const ::omero::RTimePtr&, const ::Ice::Context*);

    virtual ::omero::model::ChecksumAlgorithmPtr getHasher(const ::Ice::Context*);

    virtual void setHasher(const ::omero::model::ChecksumAlgorithmPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getHash(const ::Ice::Context*);

    virtual void setHash(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getMimetype(const ::Ice::Context*);

    virtual void setMimetype(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual void unloadAnnotationLinks(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Context*);

    virtual ::omero::model::OriginalFileAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*);

    virtual void addOriginalFileAnnotationLink(const ::omero::model::OriginalFileAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void addAllOriginalFileAnnotationLinkSet(const ::omero::model::OriginalFileAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void removeOriginalFileAnnotationLink(const ::omero::model::OriginalFileAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void removeAllOriginalFileAnnotationLinkSet(const ::omero::model::OriginalFileAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void clearAnnotationLinks(const ::Ice::Context*);

    virtual void reloadAnnotationLinks(const ::omero::model::OriginalFilePtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::OriginalFileAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void addOriginalFileAnnotationLinkToBoth(const ::omero::model::OriginalFileAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::OriginalFileAnnotationLinksSeq findOriginalFileAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void removeOriginalFileAnnotationLinkFromBoth(const ::omero::model::OriginalFileAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::OriginalFileLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*);

    virtual ::omero::RStringPtr getName(const ::Ice::Context*);

    virtual void setName(const ::omero::RStringPtr&, const ::Ice::Context*);
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

class OriginalFile : virtual public ::IceDelegate::omero::model::OriginalFile,
                     virtual public ::IceDelegateD::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual void unloadPixelsFileMaps(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfPixelsFileMaps(const ::Ice::Context*);

    virtual ::omero::model::OriginalFilePixelsFileMapsSeq copyPixelsFileMaps(const ::Ice::Context*);

    virtual void addPixelsOriginalFileMap(const ::omero::model::PixelsOriginalFileMapPtr&, const ::Ice::Context*);

    virtual void addAllPixelsOriginalFileMapSet(const ::omero::model::OriginalFilePixelsFileMapsSeq&, const ::Ice::Context*);

    virtual void removePixelsOriginalFileMap(const ::omero::model::PixelsOriginalFileMapPtr&, const ::Ice::Context*);

    virtual void removeAllPixelsOriginalFileMapSet(const ::omero::model::OriginalFilePixelsFileMapsSeq&, const ::Ice::Context*);

    virtual void clearPixelsFileMaps(const ::Ice::Context*);

    virtual void reloadPixelsFileMaps(const ::omero::model::OriginalFilePtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getPixelsFileMapsCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::PixelsOriginalFileMapPtr linkPixels(const ::omero::model::PixelsPtr&, const ::Ice::Context*);

    virtual void addPixelsOriginalFileMapToBoth(const ::omero::model::PixelsOriginalFileMapPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::OriginalFilePixelsFileMapsSeq findPixelsOriginalFileMap(const ::omero::model::PixelsPtr&, const ::Ice::Context*);

    virtual void unlinkPixels(const ::omero::model::PixelsPtr&, const ::Ice::Context*);

    virtual void removePixelsOriginalFileMapFromBoth(const ::omero::model::PixelsOriginalFileMapPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::OriginalFileLinkedPixelsSeq linkedPixelsList(const ::Ice::Context*);

    virtual ::omero::RStringPtr getPath(const ::Ice::Context*);

    virtual void setPath(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RLongPtr getSize(const ::Ice::Context*);

    virtual void setSize(const ::omero::RLongPtr&, const ::Ice::Context*);

    virtual ::omero::RTimePtr getAtime(const ::Ice::Context*);

    virtual void setAtime(const ::omero::RTimePtr&, const ::Ice::Context*);

    virtual ::omero::RTimePtr getMtime(const ::Ice::Context*);

    virtual void setMtime(const ::omero::RTimePtr&, const ::Ice::Context*);

    virtual ::omero::RTimePtr getCtime(const ::Ice::Context*);

    virtual void setCtime(const ::omero::RTimePtr&, const ::Ice::Context*);

    virtual ::omero::model::ChecksumAlgorithmPtr getHasher(const ::Ice::Context*);

    virtual void setHasher(const ::omero::model::ChecksumAlgorithmPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getHash(const ::Ice::Context*);

    virtual void setHash(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getMimetype(const ::Ice::Context*);

    virtual void setMimetype(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual void unloadAnnotationLinks(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Context*);

    virtual ::omero::model::OriginalFileAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*);

    virtual void addOriginalFileAnnotationLink(const ::omero::model::OriginalFileAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void addAllOriginalFileAnnotationLinkSet(const ::omero::model::OriginalFileAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void removeOriginalFileAnnotationLink(const ::omero::model::OriginalFileAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void removeAllOriginalFileAnnotationLinkSet(const ::omero::model::OriginalFileAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void clearAnnotationLinks(const ::Ice::Context*);

    virtual void reloadAnnotationLinks(const ::omero::model::OriginalFilePtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::OriginalFileAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void addOriginalFileAnnotationLinkToBoth(const ::omero::model::OriginalFileAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::OriginalFileAnnotationLinksSeq findOriginalFileAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void removeOriginalFileAnnotationLinkFromBoth(const ::omero::model::OriginalFileAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::OriginalFileLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*);

    virtual ::omero::RStringPtr getName(const ::Ice::Context*);

    virtual void setName(const ::omero::RStringPtr&, const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace model
{

class OriginalFile : virtual public ::omero::model::IObject
{
public:

    typedef OriginalFilePrx ProxyType;
    typedef OriginalFilePtr PointerType;
    
    OriginalFile() {}
    OriginalFile(const ::omero::RLongPtr&, const ::omero::model::DetailsPtr&, bool, const ::omero::RIntPtr&, const ::omero::model::OriginalFilePixelsFileMapsSeq&, bool, const ::omero::sys::CountMap&, const ::omero::RStringPtr&, const ::omero::RLongPtr&, const ::omero::RTimePtr&, const ::omero::RTimePtr&, const ::omero::RTimePtr&, const ::omero::model::ChecksumAlgorithmPtr&, const ::omero::RStringPtr&, const ::omero::RStringPtr&, const ::omero::model::OriginalFileAnnotationLinksSeq&, bool, const ::omero::sys::CountMap&, const ::omero::RStringPtr&);
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

    virtual void unloadPixelsFileMaps(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unloadPixelsFileMaps(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int sizeOfPixelsFileMaps(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sizeOfPixelsFileMaps(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::OriginalFilePixelsFileMapsSeq copyPixelsFileMaps(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copyPixelsFileMaps(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addPixelsOriginalFileMap(const ::omero::model::PixelsOriginalFileMapPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addPixelsOriginalFileMap(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAllPixelsOriginalFileMapSet(const ::omero::model::OriginalFilePixelsFileMapsSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAllPixelsOriginalFileMapSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removePixelsOriginalFileMap(const ::omero::model::PixelsOriginalFileMapPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removePixelsOriginalFileMap(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeAllPixelsOriginalFileMapSet(const ::omero::model::OriginalFilePixelsFileMapsSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeAllPixelsOriginalFileMapSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void clearPixelsFileMaps(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___clearPixelsFileMaps(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void reloadPixelsFileMaps(const ::omero::model::OriginalFilePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___reloadPixelsFileMaps(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::sys::CountMap getPixelsFileMapsCountPerOwner(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getPixelsFileMapsCountPerOwner(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::PixelsOriginalFileMapPtr linkPixels(const ::omero::model::PixelsPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkPixels(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addPixelsOriginalFileMapToBoth(const ::omero::model::PixelsOriginalFileMapPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addPixelsOriginalFileMapToBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::OriginalFilePixelsFileMapsSeq findPixelsOriginalFileMap(const ::omero::model::PixelsPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___findPixelsOriginalFileMap(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unlinkPixels(const ::omero::model::PixelsPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unlinkPixels(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removePixelsOriginalFileMapFromBoth(const ::omero::model::PixelsOriginalFileMapPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removePixelsOriginalFileMapFromBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::OriginalFileLinkedPixelsSeq linkedPixelsList(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkedPixelsList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getPath(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getPath(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setPath(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setPath(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RLongPtr getSize(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getSize(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setSize(const ::omero::RLongPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setSize(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RTimePtr getAtime(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getAtime(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setAtime(const ::omero::RTimePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setAtime(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RTimePtr getMtime(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getMtime(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setMtime(const ::omero::RTimePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setMtime(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RTimePtr getCtime(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getCtime(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setCtime(const ::omero::RTimePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setCtime(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ChecksumAlgorithmPtr getHasher(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getHasher(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setHasher(const ::omero::model::ChecksumAlgorithmPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setHasher(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getHash(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getHash(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setHash(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setHash(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getMimetype(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getMimetype(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setMimetype(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setMimetype(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unloadAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unloadAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sizeOfAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::OriginalFileAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copyAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addOriginalFileAnnotationLink(const ::omero::model::OriginalFileAnnotationLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addOriginalFileAnnotationLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAllOriginalFileAnnotationLinkSet(const ::omero::model::OriginalFileAnnotationLinksSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAllOriginalFileAnnotationLinkSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeOriginalFileAnnotationLink(const ::omero::model::OriginalFileAnnotationLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeOriginalFileAnnotationLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeAllOriginalFileAnnotationLinkSet(const ::omero::model::OriginalFileAnnotationLinksSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeAllOriginalFileAnnotationLinkSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void clearAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___clearAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void reloadAnnotationLinks(const ::omero::model::OriginalFilePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___reloadAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getAnnotationLinksCountPerOwner(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::OriginalFileAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkAnnotation(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addOriginalFileAnnotationLinkToBoth(const ::omero::model::OriginalFileAnnotationLinkPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addOriginalFileAnnotationLinkToBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::OriginalFileAnnotationLinksSeq findOriginalFileAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___findOriginalFileAnnotationLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unlinkAnnotation(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeOriginalFileAnnotationLinkFromBoth(const ::omero::model::OriginalFileAnnotationLinkPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeOriginalFileAnnotationLinkFromBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::OriginalFileLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkedAnnotationList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getName(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getName(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setName(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setName(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

protected:

    ::omero::RIntPtr version;

    ::omero::model::OriginalFilePixelsFileMapsSeq pixelsFileMapsSeq;

    bool pixelsFileMapsLoaded;

    ::omero::sys::CountMap pixelsFileMapsCountPerOwner;

    ::omero::RStringPtr path;

    ::omero::RLongPtr size;

    ::omero::RTimePtr atime;

    ::omero::RTimePtr mtime;

    ::omero::RTimePtr ctime;

    ::omero::model::ChecksumAlgorithmPtr hasher;

    ::omero::RStringPtr hash;

    ::omero::RStringPtr mimetype;

    ::omero::model::OriginalFileAnnotationLinksSeq annotationLinksSeq;

    bool annotationLinksLoaded;

    ::omero::sys::CountMap annotationLinksCountPerOwner;

    ::omero::RStringPtr name;
};

}

}

#endif
