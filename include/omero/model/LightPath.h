// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `LightPath.ice'

#ifndef __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_LightPath_h__
#define __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_LightPath_h__

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

class LightPathExcitationFilterLink;

class Filter;

class Dichroic;

class LightPathEmissionFilterLink;

class Details;

class LightPath;

}

}

}

namespace omero
{

namespace model
{

class LightPathExcitationFilterLink;
bool operator==(const LightPathExcitationFilterLink&, const LightPathExcitationFilterLink&);
bool operator<(const LightPathExcitationFilterLink&, const LightPathExcitationFilterLink&);

class Filter;
bool operator==(const Filter&, const Filter&);
bool operator<(const Filter&, const Filter&);

class Dichroic;
bool operator==(const Dichroic&, const Dichroic&);
bool operator<(const Dichroic&, const Dichroic&);

class LightPathEmissionFilterLink;
bool operator==(const LightPathEmissionFilterLink&, const LightPathEmissionFilterLink&);
bool operator<(const LightPathEmissionFilterLink&, const LightPathEmissionFilterLink&);

class Details;
bool operator==(const Details&, const Details&);
bool operator<(const Details&, const Details&);

class LightPath;
bool operator==(const LightPath&, const LightPath&);
bool operator<(const LightPath&, const LightPath&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::model::LightPathExcitationFilterLink*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::LightPathExcitationFilterLink*);

::Ice::Object* upCast(::omero::model::Filter*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Filter*);

::Ice::Object* upCast(::omero::model::Dichroic*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Dichroic*);

::Ice::Object* upCast(::omero::model::LightPathEmissionFilterLink*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::LightPathEmissionFilterLink*);

::Ice::Object* upCast(::omero::model::Details*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Details*);

::Ice::Object* upCast(::omero::model::LightPath*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::LightPath*);

}

namespace omero
{

namespace model
{

typedef ::IceInternal::Handle< ::omero::model::LightPathExcitationFilterLink> LightPathExcitationFilterLinkPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::LightPathExcitationFilterLink> LightPathExcitationFilterLinkPrx;

void __read(::IceInternal::BasicStream*, LightPathExcitationFilterLinkPrx&);
void __patch__LightPathExcitationFilterLinkPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Filter> FilterPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Filter> FilterPrx;

void __read(::IceInternal::BasicStream*, FilterPrx&);
void __patch__FilterPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Dichroic> DichroicPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Dichroic> DichroicPrx;

void __read(::IceInternal::BasicStream*, DichroicPrx&);
void __patch__DichroicPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::LightPathEmissionFilterLink> LightPathEmissionFilterLinkPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::LightPathEmissionFilterLink> LightPathEmissionFilterLinkPrx;

void __read(::IceInternal::BasicStream*, LightPathEmissionFilterLinkPrx&);
void __patch__LightPathEmissionFilterLinkPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Details> DetailsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Details> DetailsPrx;

void __read(::IceInternal::BasicStream*, DetailsPrx&);
void __patch__DetailsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::LightPath> LightPathPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::LightPath> LightPathPrx;

void __read(::IceInternal::BasicStream*, LightPathPrx&);
void __patch__LightPathPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace omero
{

namespace model
{

typedef ::std::vector< ::omero::model::LightPathExcitationFilterLinkPtr> LightPathExcitationFilterLinkSeq;
void __writeLightPathExcitationFilterLinkSeq(::IceInternal::BasicStream*, const ::omero::model::LightPathExcitationFilterLinkPtr*, const ::omero::model::LightPathExcitationFilterLinkPtr*);
void __readLightPathExcitationFilterLinkSeq(::IceInternal::BasicStream*, LightPathExcitationFilterLinkSeq&);

typedef ::std::vector< ::omero::model::FilterPtr> LightPathLinkedExcitationFilterSeq;
void __writeLightPathLinkedExcitationFilterSeq(::IceInternal::BasicStream*, const ::omero::model::FilterPtr*, const ::omero::model::FilterPtr*);
void __readLightPathLinkedExcitationFilterSeq(::IceInternal::BasicStream*, LightPathLinkedExcitationFilterSeq&);

typedef ::std::vector< ::omero::model::LightPathEmissionFilterLinkPtr> LightPathEmissionFilterLinkSeq;
void __writeLightPathEmissionFilterLinkSeq(::IceInternal::BasicStream*, const ::omero::model::LightPathEmissionFilterLinkPtr*, const ::omero::model::LightPathEmissionFilterLinkPtr*);
void __readLightPathEmissionFilterLinkSeq(::IceInternal::BasicStream*, LightPathEmissionFilterLinkSeq&);

typedef ::std::vector< ::omero::model::FilterPtr> LightPathLinkedEmissionFilterSeq;
void __writeLightPathLinkedEmissionFilterSeq(::IceInternal::BasicStream*, const ::omero::model::FilterPtr*, const ::omero::model::FilterPtr*);
void __readLightPathLinkedEmissionFilterSeq(::IceInternal::BasicStream*, LightPathLinkedEmissionFilterSeq&);

}

}

namespace IceProxy
{

namespace omero
{

namespace model
{

class LightPath : virtual public ::IceProxy::omero::model::IObject
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

    void unloadExcitationFilterLink()
    {
        unloadExcitationFilterLink(0);
    }
    void unloadExcitationFilterLink(const ::Ice::Context& __ctx)
    {
        unloadExcitationFilterLink(&__ctx);
    }
    
private:

    void unloadExcitationFilterLink(const ::Ice::Context*);
    
public:

    ::Ice::Int sizeOfExcitationFilterLink()
    {
        return sizeOfExcitationFilterLink(0);
    }
    ::Ice::Int sizeOfExcitationFilterLink(const ::Ice::Context& __ctx)
    {
        return sizeOfExcitationFilterLink(&__ctx);
    }
    
private:

    ::Ice::Int sizeOfExcitationFilterLink(const ::Ice::Context*);
    
public:

    ::omero::model::LightPathExcitationFilterLinkSeq copyExcitationFilterLink()
    {
        return copyExcitationFilterLink(0);
    }
    ::omero::model::LightPathExcitationFilterLinkSeq copyExcitationFilterLink(const ::Ice::Context& __ctx)
    {
        return copyExcitationFilterLink(&__ctx);
    }
    
private:

    ::omero::model::LightPathExcitationFilterLinkSeq copyExcitationFilterLink(const ::Ice::Context*);
    
public:

    void addLightPathExcitationFilterLink(const ::omero::model::LightPathExcitationFilterLinkPtr& target)
    {
        addLightPathExcitationFilterLink(target, 0);
    }
    void addLightPathExcitationFilterLink(const ::omero::model::LightPathExcitationFilterLinkPtr& target, const ::Ice::Context& __ctx)
    {
        addLightPathExcitationFilterLink(target, &__ctx);
    }
    
private:

    void addLightPathExcitationFilterLink(const ::omero::model::LightPathExcitationFilterLinkPtr&, const ::Ice::Context*);
    
public:

    void addAllLightPathExcitationFilterLinkSet(const ::omero::model::LightPathExcitationFilterLinkSeq& targets)
    {
        addAllLightPathExcitationFilterLinkSet(targets, 0);
    }
    void addAllLightPathExcitationFilterLinkSet(const ::omero::model::LightPathExcitationFilterLinkSeq& targets, const ::Ice::Context& __ctx)
    {
        addAllLightPathExcitationFilterLinkSet(targets, &__ctx);
    }
    
private:

    void addAllLightPathExcitationFilterLinkSet(const ::omero::model::LightPathExcitationFilterLinkSeq&, const ::Ice::Context*);
    
public:

    void removeLightPathExcitationFilterLink(const ::omero::model::LightPathExcitationFilterLinkPtr& theTarget)
    {
        removeLightPathExcitationFilterLink(theTarget, 0);
    }
    void removeLightPathExcitationFilterLink(const ::omero::model::LightPathExcitationFilterLinkPtr& theTarget, const ::Ice::Context& __ctx)
    {
        removeLightPathExcitationFilterLink(theTarget, &__ctx);
    }
    
private:

    void removeLightPathExcitationFilterLink(const ::omero::model::LightPathExcitationFilterLinkPtr&, const ::Ice::Context*);
    
public:

    void removeAllLightPathExcitationFilterLinkSet(const ::omero::model::LightPathExcitationFilterLinkSeq& targets)
    {
        removeAllLightPathExcitationFilterLinkSet(targets, 0);
    }
    void removeAllLightPathExcitationFilterLinkSet(const ::omero::model::LightPathExcitationFilterLinkSeq& targets, const ::Ice::Context& __ctx)
    {
        removeAllLightPathExcitationFilterLinkSet(targets, &__ctx);
    }
    
private:

    void removeAllLightPathExcitationFilterLinkSet(const ::omero::model::LightPathExcitationFilterLinkSeq&, const ::Ice::Context*);
    
public:

    void clearExcitationFilterLink()
    {
        clearExcitationFilterLink(0);
    }
    void clearExcitationFilterLink(const ::Ice::Context& __ctx)
    {
        clearExcitationFilterLink(&__ctx);
    }
    
private:

    void clearExcitationFilterLink(const ::Ice::Context*);
    
public:

    void reloadExcitationFilterLink(const ::omero::model::LightPathPtr& toCopy)
    {
        reloadExcitationFilterLink(toCopy, 0);
    }
    void reloadExcitationFilterLink(const ::omero::model::LightPathPtr& toCopy, const ::Ice::Context& __ctx)
    {
        reloadExcitationFilterLink(toCopy, &__ctx);
    }
    
private:

    void reloadExcitationFilterLink(const ::omero::model::LightPathPtr&, const ::Ice::Context*);
    
public:

    ::omero::model::LightPathExcitationFilterLinkPtr getLightPathExcitationFilterLink(::Ice::Int index)
    {
        return getLightPathExcitationFilterLink(index, 0);
    }
    ::omero::model::LightPathExcitationFilterLinkPtr getLightPathExcitationFilterLink(::Ice::Int index, const ::Ice::Context& __ctx)
    {
        return getLightPathExcitationFilterLink(index, &__ctx);
    }
    
private:

    ::omero::model::LightPathExcitationFilterLinkPtr getLightPathExcitationFilterLink(::Ice::Int, const ::Ice::Context*);
    
public:

    ::omero::model::LightPathExcitationFilterLinkPtr setLightPathExcitationFilterLink(::Ice::Int index, const ::omero::model::LightPathExcitationFilterLinkPtr& theElement)
    {
        return setLightPathExcitationFilterLink(index, theElement, 0);
    }
    ::omero::model::LightPathExcitationFilterLinkPtr setLightPathExcitationFilterLink(::Ice::Int index, const ::omero::model::LightPathExcitationFilterLinkPtr& theElement, const ::Ice::Context& __ctx)
    {
        return setLightPathExcitationFilterLink(index, theElement, &__ctx);
    }
    
private:

    ::omero::model::LightPathExcitationFilterLinkPtr setLightPathExcitationFilterLink(::Ice::Int, const ::omero::model::LightPathExcitationFilterLinkPtr&, const ::Ice::Context*);
    
public:

    ::omero::model::LightPathExcitationFilterLinkPtr getPrimaryLightPathExcitationFilterLink()
    {
        return getPrimaryLightPathExcitationFilterLink(0);
    }
    ::omero::model::LightPathExcitationFilterLinkPtr getPrimaryLightPathExcitationFilterLink(const ::Ice::Context& __ctx)
    {
        return getPrimaryLightPathExcitationFilterLink(&__ctx);
    }
    
private:

    ::omero::model::LightPathExcitationFilterLinkPtr getPrimaryLightPathExcitationFilterLink(const ::Ice::Context*);
    
public:

    ::omero::model::LightPathExcitationFilterLinkPtr setPrimaryLightPathExcitationFilterLink(const ::omero::model::LightPathExcitationFilterLinkPtr& theElement)
    {
        return setPrimaryLightPathExcitationFilterLink(theElement, 0);
    }
    ::omero::model::LightPathExcitationFilterLinkPtr setPrimaryLightPathExcitationFilterLink(const ::omero::model::LightPathExcitationFilterLinkPtr& theElement, const ::Ice::Context& __ctx)
    {
        return setPrimaryLightPathExcitationFilterLink(theElement, &__ctx);
    }
    
private:

    ::omero::model::LightPathExcitationFilterLinkPtr setPrimaryLightPathExcitationFilterLink(const ::omero::model::LightPathExcitationFilterLinkPtr&, const ::Ice::Context*);
    
public:

    ::omero::sys::CountMap getExcitationFilterLinkCountPerOwner()
    {
        return getExcitationFilterLinkCountPerOwner(0);
    }
    ::omero::sys::CountMap getExcitationFilterLinkCountPerOwner(const ::Ice::Context& __ctx)
    {
        return getExcitationFilterLinkCountPerOwner(&__ctx);
    }
    
private:

    ::omero::sys::CountMap getExcitationFilterLinkCountPerOwner(const ::Ice::Context*);
    
public:

    ::omero::model::LightPathExcitationFilterLinkPtr linkExcitationFilter(const ::omero::model::FilterPtr& addition)
    {
        return linkExcitationFilter(addition, 0);
    }
    ::omero::model::LightPathExcitationFilterLinkPtr linkExcitationFilter(const ::omero::model::FilterPtr& addition, const ::Ice::Context& __ctx)
    {
        return linkExcitationFilter(addition, &__ctx);
    }
    
private:

    ::omero::model::LightPathExcitationFilterLinkPtr linkExcitationFilter(const ::omero::model::FilterPtr&, const ::Ice::Context*);
    
public:

    void addLightPathExcitationFilterLinkToBoth(const ::omero::model::LightPathExcitationFilterLinkPtr& link, bool bothSides)
    {
        addLightPathExcitationFilterLinkToBoth(link, bothSides, 0);
    }
    void addLightPathExcitationFilterLinkToBoth(const ::omero::model::LightPathExcitationFilterLinkPtr& link, bool bothSides, const ::Ice::Context& __ctx)
    {
        addLightPathExcitationFilterLinkToBoth(link, bothSides, &__ctx);
    }
    
private:

    void addLightPathExcitationFilterLinkToBoth(const ::omero::model::LightPathExcitationFilterLinkPtr&, bool, const ::Ice::Context*);
    
public:

    ::omero::model::LightPathExcitationFilterLinkSeq findLightPathExcitationFilterLink(const ::omero::model::FilterPtr& removal)
    {
        return findLightPathExcitationFilterLink(removal, 0);
    }
    ::omero::model::LightPathExcitationFilterLinkSeq findLightPathExcitationFilterLink(const ::omero::model::FilterPtr& removal, const ::Ice::Context& __ctx)
    {
        return findLightPathExcitationFilterLink(removal, &__ctx);
    }
    
private:

    ::omero::model::LightPathExcitationFilterLinkSeq findLightPathExcitationFilterLink(const ::omero::model::FilterPtr&, const ::Ice::Context*);
    
public:

    void unlinkExcitationFilter(const ::omero::model::FilterPtr& removal)
    {
        unlinkExcitationFilter(removal, 0);
    }
    void unlinkExcitationFilter(const ::omero::model::FilterPtr& removal, const ::Ice::Context& __ctx)
    {
        unlinkExcitationFilter(removal, &__ctx);
    }
    
private:

    void unlinkExcitationFilter(const ::omero::model::FilterPtr&, const ::Ice::Context*);
    
public:

    void removeLightPathExcitationFilterLinkFromBoth(const ::omero::model::LightPathExcitationFilterLinkPtr& link, bool bothSides)
    {
        removeLightPathExcitationFilterLinkFromBoth(link, bothSides, 0);
    }
    void removeLightPathExcitationFilterLinkFromBoth(const ::omero::model::LightPathExcitationFilterLinkPtr& link, bool bothSides, const ::Ice::Context& __ctx)
    {
        removeLightPathExcitationFilterLinkFromBoth(link, bothSides, &__ctx);
    }
    
private:

    void removeLightPathExcitationFilterLinkFromBoth(const ::omero::model::LightPathExcitationFilterLinkPtr&, bool, const ::Ice::Context*);
    
public:

    ::omero::model::LightPathLinkedExcitationFilterSeq linkedExcitationFilterList()
    {
        return linkedExcitationFilterList(0);
    }
    ::omero::model::LightPathLinkedExcitationFilterSeq linkedExcitationFilterList(const ::Ice::Context& __ctx)
    {
        return linkedExcitationFilterList(&__ctx);
    }
    
private:

    ::omero::model::LightPathLinkedExcitationFilterSeq linkedExcitationFilterList(const ::Ice::Context*);
    
public:

    ::omero::model::DichroicPtr getDichroic()
    {
        return getDichroic(0);
    }
    ::omero::model::DichroicPtr getDichroic(const ::Ice::Context& __ctx)
    {
        return getDichroic(&__ctx);
    }
    
private:

    ::omero::model::DichroicPtr getDichroic(const ::Ice::Context*);
    
public:

    void setDichroic(const ::omero::model::DichroicPtr& theDichroic)
    {
        setDichroic(theDichroic, 0);
    }
    void setDichroic(const ::omero::model::DichroicPtr& theDichroic, const ::Ice::Context& __ctx)
    {
        setDichroic(theDichroic, &__ctx);
    }
    
private:

    void setDichroic(const ::omero::model::DichroicPtr&, const ::Ice::Context*);
    
public:

    void unloadEmissionFilterLink()
    {
        unloadEmissionFilterLink(0);
    }
    void unloadEmissionFilterLink(const ::Ice::Context& __ctx)
    {
        unloadEmissionFilterLink(&__ctx);
    }
    
private:

    void unloadEmissionFilterLink(const ::Ice::Context*);
    
public:

    ::Ice::Int sizeOfEmissionFilterLink()
    {
        return sizeOfEmissionFilterLink(0);
    }
    ::Ice::Int sizeOfEmissionFilterLink(const ::Ice::Context& __ctx)
    {
        return sizeOfEmissionFilterLink(&__ctx);
    }
    
private:

    ::Ice::Int sizeOfEmissionFilterLink(const ::Ice::Context*);
    
public:

    ::omero::model::LightPathEmissionFilterLinkSeq copyEmissionFilterLink()
    {
        return copyEmissionFilterLink(0);
    }
    ::omero::model::LightPathEmissionFilterLinkSeq copyEmissionFilterLink(const ::Ice::Context& __ctx)
    {
        return copyEmissionFilterLink(&__ctx);
    }
    
private:

    ::omero::model::LightPathEmissionFilterLinkSeq copyEmissionFilterLink(const ::Ice::Context*);
    
public:

    void addLightPathEmissionFilterLink(const ::omero::model::LightPathEmissionFilterLinkPtr& target)
    {
        addLightPathEmissionFilterLink(target, 0);
    }
    void addLightPathEmissionFilterLink(const ::omero::model::LightPathEmissionFilterLinkPtr& target, const ::Ice::Context& __ctx)
    {
        addLightPathEmissionFilterLink(target, &__ctx);
    }
    
private:

    void addLightPathEmissionFilterLink(const ::omero::model::LightPathEmissionFilterLinkPtr&, const ::Ice::Context*);
    
public:

    void addAllLightPathEmissionFilterLinkSet(const ::omero::model::LightPathEmissionFilterLinkSeq& targets)
    {
        addAllLightPathEmissionFilterLinkSet(targets, 0);
    }
    void addAllLightPathEmissionFilterLinkSet(const ::omero::model::LightPathEmissionFilterLinkSeq& targets, const ::Ice::Context& __ctx)
    {
        addAllLightPathEmissionFilterLinkSet(targets, &__ctx);
    }
    
private:

    void addAllLightPathEmissionFilterLinkSet(const ::omero::model::LightPathEmissionFilterLinkSeq&, const ::Ice::Context*);
    
public:

    void removeLightPathEmissionFilterLink(const ::omero::model::LightPathEmissionFilterLinkPtr& theTarget)
    {
        removeLightPathEmissionFilterLink(theTarget, 0);
    }
    void removeLightPathEmissionFilterLink(const ::omero::model::LightPathEmissionFilterLinkPtr& theTarget, const ::Ice::Context& __ctx)
    {
        removeLightPathEmissionFilterLink(theTarget, &__ctx);
    }
    
private:

    void removeLightPathEmissionFilterLink(const ::omero::model::LightPathEmissionFilterLinkPtr&, const ::Ice::Context*);
    
public:

    void removeAllLightPathEmissionFilterLinkSet(const ::omero::model::LightPathEmissionFilterLinkSeq& targets)
    {
        removeAllLightPathEmissionFilterLinkSet(targets, 0);
    }
    void removeAllLightPathEmissionFilterLinkSet(const ::omero::model::LightPathEmissionFilterLinkSeq& targets, const ::Ice::Context& __ctx)
    {
        removeAllLightPathEmissionFilterLinkSet(targets, &__ctx);
    }
    
private:

    void removeAllLightPathEmissionFilterLinkSet(const ::omero::model::LightPathEmissionFilterLinkSeq&, const ::Ice::Context*);
    
public:

    void clearEmissionFilterLink()
    {
        clearEmissionFilterLink(0);
    }
    void clearEmissionFilterLink(const ::Ice::Context& __ctx)
    {
        clearEmissionFilterLink(&__ctx);
    }
    
private:

    void clearEmissionFilterLink(const ::Ice::Context*);
    
public:

    void reloadEmissionFilterLink(const ::omero::model::LightPathPtr& toCopy)
    {
        reloadEmissionFilterLink(toCopy, 0);
    }
    void reloadEmissionFilterLink(const ::omero::model::LightPathPtr& toCopy, const ::Ice::Context& __ctx)
    {
        reloadEmissionFilterLink(toCopy, &__ctx);
    }
    
private:

    void reloadEmissionFilterLink(const ::omero::model::LightPathPtr&, const ::Ice::Context*);
    
public:

    ::omero::sys::CountMap getEmissionFilterLinkCountPerOwner()
    {
        return getEmissionFilterLinkCountPerOwner(0);
    }
    ::omero::sys::CountMap getEmissionFilterLinkCountPerOwner(const ::Ice::Context& __ctx)
    {
        return getEmissionFilterLinkCountPerOwner(&__ctx);
    }
    
private:

    ::omero::sys::CountMap getEmissionFilterLinkCountPerOwner(const ::Ice::Context*);
    
public:

    ::omero::model::LightPathEmissionFilterLinkPtr linkEmissionFilter(const ::omero::model::FilterPtr& addition)
    {
        return linkEmissionFilter(addition, 0);
    }
    ::omero::model::LightPathEmissionFilterLinkPtr linkEmissionFilter(const ::omero::model::FilterPtr& addition, const ::Ice::Context& __ctx)
    {
        return linkEmissionFilter(addition, &__ctx);
    }
    
private:

    ::omero::model::LightPathEmissionFilterLinkPtr linkEmissionFilter(const ::omero::model::FilterPtr&, const ::Ice::Context*);
    
public:

    void addLightPathEmissionFilterLinkToBoth(const ::omero::model::LightPathEmissionFilterLinkPtr& link, bool bothSides)
    {
        addLightPathEmissionFilterLinkToBoth(link, bothSides, 0);
    }
    void addLightPathEmissionFilterLinkToBoth(const ::omero::model::LightPathEmissionFilterLinkPtr& link, bool bothSides, const ::Ice::Context& __ctx)
    {
        addLightPathEmissionFilterLinkToBoth(link, bothSides, &__ctx);
    }
    
private:

    void addLightPathEmissionFilterLinkToBoth(const ::omero::model::LightPathEmissionFilterLinkPtr&, bool, const ::Ice::Context*);
    
public:

    ::omero::model::LightPathEmissionFilterLinkSeq findLightPathEmissionFilterLink(const ::omero::model::FilterPtr& removal)
    {
        return findLightPathEmissionFilterLink(removal, 0);
    }
    ::omero::model::LightPathEmissionFilterLinkSeq findLightPathEmissionFilterLink(const ::omero::model::FilterPtr& removal, const ::Ice::Context& __ctx)
    {
        return findLightPathEmissionFilterLink(removal, &__ctx);
    }
    
private:

    ::omero::model::LightPathEmissionFilterLinkSeq findLightPathEmissionFilterLink(const ::omero::model::FilterPtr&, const ::Ice::Context*);
    
public:

    void unlinkEmissionFilter(const ::omero::model::FilterPtr& removal)
    {
        unlinkEmissionFilter(removal, 0);
    }
    void unlinkEmissionFilter(const ::omero::model::FilterPtr& removal, const ::Ice::Context& __ctx)
    {
        unlinkEmissionFilter(removal, &__ctx);
    }
    
private:

    void unlinkEmissionFilter(const ::omero::model::FilterPtr&, const ::Ice::Context*);
    
public:

    void removeLightPathEmissionFilterLinkFromBoth(const ::omero::model::LightPathEmissionFilterLinkPtr& link, bool bothSides)
    {
        removeLightPathEmissionFilterLinkFromBoth(link, bothSides, 0);
    }
    void removeLightPathEmissionFilterLinkFromBoth(const ::omero::model::LightPathEmissionFilterLinkPtr& link, bool bothSides, const ::Ice::Context& __ctx)
    {
        removeLightPathEmissionFilterLinkFromBoth(link, bothSides, &__ctx);
    }
    
private:

    void removeLightPathEmissionFilterLinkFromBoth(const ::omero::model::LightPathEmissionFilterLinkPtr&, bool, const ::Ice::Context*);
    
public:

    ::omero::model::LightPathLinkedEmissionFilterSeq linkedEmissionFilterList()
    {
        return linkedEmissionFilterList(0);
    }
    ::omero::model::LightPathLinkedEmissionFilterSeq linkedEmissionFilterList(const ::Ice::Context& __ctx)
    {
        return linkedEmissionFilterList(&__ctx);
    }
    
private:

    ::omero::model::LightPathLinkedEmissionFilterSeq linkedEmissionFilterList(const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<LightPath> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LightPath*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<LightPath*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LightPath> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LightPath*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<LightPath*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LightPath> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LightPath*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<LightPath*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LightPath> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LightPath*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<LightPath*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LightPath> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LightPath*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<LightPath*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LightPath> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LightPath*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<LightPath*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LightPath> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LightPath*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<LightPath*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LightPath> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LightPath*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<LightPath*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LightPath> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LightPath*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<LightPath*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LightPath> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LightPath*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<LightPath*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LightPath> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LightPath*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<LightPath*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LightPath> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LightPath*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<LightPath*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LightPath> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LightPath*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<LightPath*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LightPath> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LightPath*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<LightPath*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LightPath> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LightPath*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<LightPath*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LightPath> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LightPath*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<LightPath*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LightPath> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LightPath*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<LightPath*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LightPath> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LightPath*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<LightPath*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LightPath> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LightPath*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<LightPath*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class LightPath : virtual public ::IceDelegate::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*) = 0;

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual void unloadExcitationFilterLink(const ::Ice::Context*) = 0;

    virtual ::Ice::Int sizeOfExcitationFilterLink(const ::Ice::Context*) = 0;

    virtual ::omero::model::LightPathExcitationFilterLinkSeq copyExcitationFilterLink(const ::Ice::Context*) = 0;

    virtual void addLightPathExcitationFilterLink(const ::omero::model::LightPathExcitationFilterLinkPtr&, const ::Ice::Context*) = 0;

    virtual void addAllLightPathExcitationFilterLinkSet(const ::omero::model::LightPathExcitationFilterLinkSeq&, const ::Ice::Context*) = 0;

    virtual void removeLightPathExcitationFilterLink(const ::omero::model::LightPathExcitationFilterLinkPtr&, const ::Ice::Context*) = 0;

    virtual void removeAllLightPathExcitationFilterLinkSet(const ::omero::model::LightPathExcitationFilterLinkSeq&, const ::Ice::Context*) = 0;

    virtual void clearExcitationFilterLink(const ::Ice::Context*) = 0;

    virtual void reloadExcitationFilterLink(const ::omero::model::LightPathPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::LightPathExcitationFilterLinkPtr getLightPathExcitationFilterLink(::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::omero::model::LightPathExcitationFilterLinkPtr setLightPathExcitationFilterLink(::Ice::Int, const ::omero::model::LightPathExcitationFilterLinkPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::LightPathExcitationFilterLinkPtr getPrimaryLightPathExcitationFilterLink(const ::Ice::Context*) = 0;

    virtual ::omero::model::LightPathExcitationFilterLinkPtr setPrimaryLightPathExcitationFilterLink(const ::omero::model::LightPathExcitationFilterLinkPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::sys::CountMap getExcitationFilterLinkCountPerOwner(const ::Ice::Context*) = 0;

    virtual ::omero::model::LightPathExcitationFilterLinkPtr linkExcitationFilter(const ::omero::model::FilterPtr&, const ::Ice::Context*) = 0;

    virtual void addLightPathExcitationFilterLinkToBoth(const ::omero::model::LightPathExcitationFilterLinkPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::LightPathExcitationFilterLinkSeq findLightPathExcitationFilterLink(const ::omero::model::FilterPtr&, const ::Ice::Context*) = 0;

    virtual void unlinkExcitationFilter(const ::omero::model::FilterPtr&, const ::Ice::Context*) = 0;

    virtual void removeLightPathExcitationFilterLinkFromBoth(const ::omero::model::LightPathExcitationFilterLinkPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::LightPathLinkedExcitationFilterSeq linkedExcitationFilterList(const ::Ice::Context*) = 0;

    virtual ::omero::model::DichroicPtr getDichroic(const ::Ice::Context*) = 0;

    virtual void setDichroic(const ::omero::model::DichroicPtr&, const ::Ice::Context*) = 0;

    virtual void unloadEmissionFilterLink(const ::Ice::Context*) = 0;

    virtual ::Ice::Int sizeOfEmissionFilterLink(const ::Ice::Context*) = 0;

    virtual ::omero::model::LightPathEmissionFilterLinkSeq copyEmissionFilterLink(const ::Ice::Context*) = 0;

    virtual void addLightPathEmissionFilterLink(const ::omero::model::LightPathEmissionFilterLinkPtr&, const ::Ice::Context*) = 0;

    virtual void addAllLightPathEmissionFilterLinkSet(const ::omero::model::LightPathEmissionFilterLinkSeq&, const ::Ice::Context*) = 0;

    virtual void removeLightPathEmissionFilterLink(const ::omero::model::LightPathEmissionFilterLinkPtr&, const ::Ice::Context*) = 0;

    virtual void removeAllLightPathEmissionFilterLinkSet(const ::omero::model::LightPathEmissionFilterLinkSeq&, const ::Ice::Context*) = 0;

    virtual void clearEmissionFilterLink(const ::Ice::Context*) = 0;

    virtual void reloadEmissionFilterLink(const ::omero::model::LightPathPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::sys::CountMap getEmissionFilterLinkCountPerOwner(const ::Ice::Context*) = 0;

    virtual ::omero::model::LightPathEmissionFilterLinkPtr linkEmissionFilter(const ::omero::model::FilterPtr&, const ::Ice::Context*) = 0;

    virtual void addLightPathEmissionFilterLinkToBoth(const ::omero::model::LightPathEmissionFilterLinkPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::LightPathEmissionFilterLinkSeq findLightPathEmissionFilterLink(const ::omero::model::FilterPtr&, const ::Ice::Context*) = 0;

    virtual void unlinkEmissionFilter(const ::omero::model::FilterPtr&, const ::Ice::Context*) = 0;

    virtual void removeLightPathEmissionFilterLinkFromBoth(const ::omero::model::LightPathEmissionFilterLinkPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::LightPathLinkedEmissionFilterSeq linkedEmissionFilterList(const ::Ice::Context*) = 0;
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

class LightPath : virtual public ::IceDelegate::omero::model::LightPath,
                  virtual public ::IceDelegateM::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual void unloadExcitationFilterLink(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfExcitationFilterLink(const ::Ice::Context*);

    virtual ::omero::model::LightPathExcitationFilterLinkSeq copyExcitationFilterLink(const ::Ice::Context*);

    virtual void addLightPathExcitationFilterLink(const ::omero::model::LightPathExcitationFilterLinkPtr&, const ::Ice::Context*);

    virtual void addAllLightPathExcitationFilterLinkSet(const ::omero::model::LightPathExcitationFilterLinkSeq&, const ::Ice::Context*);

    virtual void removeLightPathExcitationFilterLink(const ::omero::model::LightPathExcitationFilterLinkPtr&, const ::Ice::Context*);

    virtual void removeAllLightPathExcitationFilterLinkSet(const ::omero::model::LightPathExcitationFilterLinkSeq&, const ::Ice::Context*);

    virtual void clearExcitationFilterLink(const ::Ice::Context*);

    virtual void reloadExcitationFilterLink(const ::omero::model::LightPathPtr&, const ::Ice::Context*);

    virtual ::omero::model::LightPathExcitationFilterLinkPtr getLightPathExcitationFilterLink(::Ice::Int, const ::Ice::Context*);

    virtual ::omero::model::LightPathExcitationFilterLinkPtr setLightPathExcitationFilterLink(::Ice::Int, const ::omero::model::LightPathExcitationFilterLinkPtr&, const ::Ice::Context*);

    virtual ::omero::model::LightPathExcitationFilterLinkPtr getPrimaryLightPathExcitationFilterLink(const ::Ice::Context*);

    virtual ::omero::model::LightPathExcitationFilterLinkPtr setPrimaryLightPathExcitationFilterLink(const ::omero::model::LightPathExcitationFilterLinkPtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getExcitationFilterLinkCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::LightPathExcitationFilterLinkPtr linkExcitationFilter(const ::omero::model::FilterPtr&, const ::Ice::Context*);

    virtual void addLightPathExcitationFilterLinkToBoth(const ::omero::model::LightPathExcitationFilterLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::LightPathExcitationFilterLinkSeq findLightPathExcitationFilterLink(const ::omero::model::FilterPtr&, const ::Ice::Context*);

    virtual void unlinkExcitationFilter(const ::omero::model::FilterPtr&, const ::Ice::Context*);

    virtual void removeLightPathExcitationFilterLinkFromBoth(const ::omero::model::LightPathExcitationFilterLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::LightPathLinkedExcitationFilterSeq linkedExcitationFilterList(const ::Ice::Context*);

    virtual ::omero::model::DichroicPtr getDichroic(const ::Ice::Context*);

    virtual void setDichroic(const ::omero::model::DichroicPtr&, const ::Ice::Context*);

    virtual void unloadEmissionFilterLink(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfEmissionFilterLink(const ::Ice::Context*);

    virtual ::omero::model::LightPathEmissionFilterLinkSeq copyEmissionFilterLink(const ::Ice::Context*);

    virtual void addLightPathEmissionFilterLink(const ::omero::model::LightPathEmissionFilterLinkPtr&, const ::Ice::Context*);

    virtual void addAllLightPathEmissionFilterLinkSet(const ::omero::model::LightPathEmissionFilterLinkSeq&, const ::Ice::Context*);

    virtual void removeLightPathEmissionFilterLink(const ::omero::model::LightPathEmissionFilterLinkPtr&, const ::Ice::Context*);

    virtual void removeAllLightPathEmissionFilterLinkSet(const ::omero::model::LightPathEmissionFilterLinkSeq&, const ::Ice::Context*);

    virtual void clearEmissionFilterLink(const ::Ice::Context*);

    virtual void reloadEmissionFilterLink(const ::omero::model::LightPathPtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getEmissionFilterLinkCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::LightPathEmissionFilterLinkPtr linkEmissionFilter(const ::omero::model::FilterPtr&, const ::Ice::Context*);

    virtual void addLightPathEmissionFilterLinkToBoth(const ::omero::model::LightPathEmissionFilterLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::LightPathEmissionFilterLinkSeq findLightPathEmissionFilterLink(const ::omero::model::FilterPtr&, const ::Ice::Context*);

    virtual void unlinkEmissionFilter(const ::omero::model::FilterPtr&, const ::Ice::Context*);

    virtual void removeLightPathEmissionFilterLinkFromBoth(const ::omero::model::LightPathEmissionFilterLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::LightPathLinkedEmissionFilterSeq linkedEmissionFilterList(const ::Ice::Context*);
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

class LightPath : virtual public ::IceDelegate::omero::model::LightPath,
                  virtual public ::IceDelegateD::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual void unloadExcitationFilterLink(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfExcitationFilterLink(const ::Ice::Context*);

    virtual ::omero::model::LightPathExcitationFilterLinkSeq copyExcitationFilterLink(const ::Ice::Context*);

    virtual void addLightPathExcitationFilterLink(const ::omero::model::LightPathExcitationFilterLinkPtr&, const ::Ice::Context*);

    virtual void addAllLightPathExcitationFilterLinkSet(const ::omero::model::LightPathExcitationFilterLinkSeq&, const ::Ice::Context*);

    virtual void removeLightPathExcitationFilterLink(const ::omero::model::LightPathExcitationFilterLinkPtr&, const ::Ice::Context*);

    virtual void removeAllLightPathExcitationFilterLinkSet(const ::omero::model::LightPathExcitationFilterLinkSeq&, const ::Ice::Context*);

    virtual void clearExcitationFilterLink(const ::Ice::Context*);

    virtual void reloadExcitationFilterLink(const ::omero::model::LightPathPtr&, const ::Ice::Context*);

    virtual ::omero::model::LightPathExcitationFilterLinkPtr getLightPathExcitationFilterLink(::Ice::Int, const ::Ice::Context*);

    virtual ::omero::model::LightPathExcitationFilterLinkPtr setLightPathExcitationFilterLink(::Ice::Int, const ::omero::model::LightPathExcitationFilterLinkPtr&, const ::Ice::Context*);

    virtual ::omero::model::LightPathExcitationFilterLinkPtr getPrimaryLightPathExcitationFilterLink(const ::Ice::Context*);

    virtual ::omero::model::LightPathExcitationFilterLinkPtr setPrimaryLightPathExcitationFilterLink(const ::omero::model::LightPathExcitationFilterLinkPtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getExcitationFilterLinkCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::LightPathExcitationFilterLinkPtr linkExcitationFilter(const ::omero::model::FilterPtr&, const ::Ice::Context*);

    virtual void addLightPathExcitationFilterLinkToBoth(const ::omero::model::LightPathExcitationFilterLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::LightPathExcitationFilterLinkSeq findLightPathExcitationFilterLink(const ::omero::model::FilterPtr&, const ::Ice::Context*);

    virtual void unlinkExcitationFilter(const ::omero::model::FilterPtr&, const ::Ice::Context*);

    virtual void removeLightPathExcitationFilterLinkFromBoth(const ::omero::model::LightPathExcitationFilterLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::LightPathLinkedExcitationFilterSeq linkedExcitationFilterList(const ::Ice::Context*);

    virtual ::omero::model::DichroicPtr getDichroic(const ::Ice::Context*);

    virtual void setDichroic(const ::omero::model::DichroicPtr&, const ::Ice::Context*);

    virtual void unloadEmissionFilterLink(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfEmissionFilterLink(const ::Ice::Context*);

    virtual ::omero::model::LightPathEmissionFilterLinkSeq copyEmissionFilterLink(const ::Ice::Context*);

    virtual void addLightPathEmissionFilterLink(const ::omero::model::LightPathEmissionFilterLinkPtr&, const ::Ice::Context*);

    virtual void addAllLightPathEmissionFilterLinkSet(const ::omero::model::LightPathEmissionFilterLinkSeq&, const ::Ice::Context*);

    virtual void removeLightPathEmissionFilterLink(const ::omero::model::LightPathEmissionFilterLinkPtr&, const ::Ice::Context*);

    virtual void removeAllLightPathEmissionFilterLinkSet(const ::omero::model::LightPathEmissionFilterLinkSeq&, const ::Ice::Context*);

    virtual void clearEmissionFilterLink(const ::Ice::Context*);

    virtual void reloadEmissionFilterLink(const ::omero::model::LightPathPtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getEmissionFilterLinkCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::LightPathEmissionFilterLinkPtr linkEmissionFilter(const ::omero::model::FilterPtr&, const ::Ice::Context*);

    virtual void addLightPathEmissionFilterLinkToBoth(const ::omero::model::LightPathEmissionFilterLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::LightPathEmissionFilterLinkSeq findLightPathEmissionFilterLink(const ::omero::model::FilterPtr&, const ::Ice::Context*);

    virtual void unlinkEmissionFilter(const ::omero::model::FilterPtr&, const ::Ice::Context*);

    virtual void removeLightPathEmissionFilterLinkFromBoth(const ::omero::model::LightPathEmissionFilterLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::LightPathLinkedEmissionFilterSeq linkedEmissionFilterList(const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace model
{

class LightPath : virtual public ::omero::model::IObject
{
public:

    typedef LightPathPrx ProxyType;
    typedef LightPathPtr PointerType;
    
    LightPath() {}
    LightPath(const ::omero::RLongPtr&, const ::omero::model::DetailsPtr&, bool, const ::omero::RIntPtr&, const ::omero::model::LightPathExcitationFilterLinkSeq&, bool, const ::omero::sys::CountMap&, const ::omero::model::DichroicPtr&, const ::omero::model::LightPathEmissionFilterLinkSeq&, bool, const ::omero::sys::CountMap&);
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

    virtual void unloadExcitationFilterLink(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unloadExcitationFilterLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int sizeOfExcitationFilterLink(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sizeOfExcitationFilterLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::LightPathExcitationFilterLinkSeq copyExcitationFilterLink(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copyExcitationFilterLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addLightPathExcitationFilterLink(const ::omero::model::LightPathExcitationFilterLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addLightPathExcitationFilterLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAllLightPathExcitationFilterLinkSet(const ::omero::model::LightPathExcitationFilterLinkSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAllLightPathExcitationFilterLinkSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeLightPathExcitationFilterLink(const ::omero::model::LightPathExcitationFilterLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeLightPathExcitationFilterLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeAllLightPathExcitationFilterLinkSet(const ::omero::model::LightPathExcitationFilterLinkSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeAllLightPathExcitationFilterLinkSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void clearExcitationFilterLink(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___clearExcitationFilterLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void reloadExcitationFilterLink(const ::omero::model::LightPathPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___reloadExcitationFilterLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::LightPathExcitationFilterLinkPtr getLightPathExcitationFilterLink(::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getLightPathExcitationFilterLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::LightPathExcitationFilterLinkPtr setLightPathExcitationFilterLink(::Ice::Int, const ::omero::model::LightPathExcitationFilterLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setLightPathExcitationFilterLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::LightPathExcitationFilterLinkPtr getPrimaryLightPathExcitationFilterLink(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getPrimaryLightPathExcitationFilterLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::LightPathExcitationFilterLinkPtr setPrimaryLightPathExcitationFilterLink(const ::omero::model::LightPathExcitationFilterLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setPrimaryLightPathExcitationFilterLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::sys::CountMap getExcitationFilterLinkCountPerOwner(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getExcitationFilterLinkCountPerOwner(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::LightPathExcitationFilterLinkPtr linkExcitationFilter(const ::omero::model::FilterPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkExcitationFilter(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addLightPathExcitationFilterLinkToBoth(const ::omero::model::LightPathExcitationFilterLinkPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addLightPathExcitationFilterLinkToBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::LightPathExcitationFilterLinkSeq findLightPathExcitationFilterLink(const ::omero::model::FilterPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___findLightPathExcitationFilterLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unlinkExcitationFilter(const ::omero::model::FilterPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unlinkExcitationFilter(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeLightPathExcitationFilterLinkFromBoth(const ::omero::model::LightPathExcitationFilterLinkPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeLightPathExcitationFilterLinkFromBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::LightPathLinkedExcitationFilterSeq linkedExcitationFilterList(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkedExcitationFilterList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::DichroicPtr getDichroic(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getDichroic(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setDichroic(const ::omero::model::DichroicPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setDichroic(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unloadEmissionFilterLink(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unloadEmissionFilterLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int sizeOfEmissionFilterLink(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sizeOfEmissionFilterLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::LightPathEmissionFilterLinkSeq copyEmissionFilterLink(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copyEmissionFilterLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addLightPathEmissionFilterLink(const ::omero::model::LightPathEmissionFilterLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addLightPathEmissionFilterLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAllLightPathEmissionFilterLinkSet(const ::omero::model::LightPathEmissionFilterLinkSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAllLightPathEmissionFilterLinkSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeLightPathEmissionFilterLink(const ::omero::model::LightPathEmissionFilterLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeLightPathEmissionFilterLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeAllLightPathEmissionFilterLinkSet(const ::omero::model::LightPathEmissionFilterLinkSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeAllLightPathEmissionFilterLinkSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void clearEmissionFilterLink(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___clearEmissionFilterLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void reloadEmissionFilterLink(const ::omero::model::LightPathPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___reloadEmissionFilterLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::sys::CountMap getEmissionFilterLinkCountPerOwner(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getEmissionFilterLinkCountPerOwner(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::LightPathEmissionFilterLinkPtr linkEmissionFilter(const ::omero::model::FilterPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkEmissionFilter(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addLightPathEmissionFilterLinkToBoth(const ::omero::model::LightPathEmissionFilterLinkPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addLightPathEmissionFilterLinkToBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::LightPathEmissionFilterLinkSeq findLightPathEmissionFilterLink(const ::omero::model::FilterPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___findLightPathEmissionFilterLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unlinkEmissionFilter(const ::omero::model::FilterPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unlinkEmissionFilter(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeLightPathEmissionFilterLinkFromBoth(const ::omero::model::LightPathEmissionFilterLinkPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeLightPathEmissionFilterLinkFromBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::LightPathLinkedEmissionFilterSeq linkedEmissionFilterList(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkedEmissionFilterList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

protected:

    ::omero::RIntPtr version;

    ::omero::model::LightPathExcitationFilterLinkSeq excitationFilterLinkSeq;

    bool excitationFilterLinkLoaded;

    ::omero::sys::CountMap excitationFilterLinkCountPerOwner;

    ::omero::model::DichroicPtr dichroic;

    ::omero::model::LightPathEmissionFilterLinkSeq emissionFilterLinkSeq;

    bool emissionFilterLinkLoaded;

    ::omero::sys::CountMap emissionFilterLinkCountPerOwner;
};

}

}

#endif
