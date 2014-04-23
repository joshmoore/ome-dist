// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `Channel.ice'

#ifndef __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_Channel_h__
#define __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_Channel_h__

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

class StatsInfo;

class LogicalChannel;

class Pixels;

class ChannelAnnotationLink;

class Annotation;

class Details;

class Channel;

}

}

}

namespace omero
{

namespace model
{

class StatsInfo;
bool operator==(const StatsInfo&, const StatsInfo&);
bool operator<(const StatsInfo&, const StatsInfo&);

class LogicalChannel;
bool operator==(const LogicalChannel&, const LogicalChannel&);
bool operator<(const LogicalChannel&, const LogicalChannel&);

class Pixels;
bool operator==(const Pixels&, const Pixels&);
bool operator<(const Pixels&, const Pixels&);

class ChannelAnnotationLink;
bool operator==(const ChannelAnnotationLink&, const ChannelAnnotationLink&);
bool operator<(const ChannelAnnotationLink&, const ChannelAnnotationLink&);

class Annotation;
bool operator==(const Annotation&, const Annotation&);
bool operator<(const Annotation&, const Annotation&);

class Details;
bool operator==(const Details&, const Details&);
bool operator<(const Details&, const Details&);

class Channel;
bool operator==(const Channel&, const Channel&);
bool operator<(const Channel&, const Channel&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::model::StatsInfo*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::StatsInfo*);

::Ice::Object* upCast(::omero::model::LogicalChannel*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::LogicalChannel*);

::Ice::Object* upCast(::omero::model::Pixels*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Pixels*);

::Ice::Object* upCast(::omero::model::ChannelAnnotationLink*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::ChannelAnnotationLink*);

::Ice::Object* upCast(::omero::model::Annotation*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Annotation*);

::Ice::Object* upCast(::omero::model::Details*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Details*);

::Ice::Object* upCast(::omero::model::Channel*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Channel*);

}

namespace omero
{

namespace model
{

typedef ::IceInternal::Handle< ::omero::model::StatsInfo> StatsInfoPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::StatsInfo> StatsInfoPrx;

void __read(::IceInternal::BasicStream*, StatsInfoPrx&);
void __patch__StatsInfoPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::LogicalChannel> LogicalChannelPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::LogicalChannel> LogicalChannelPrx;

void __read(::IceInternal::BasicStream*, LogicalChannelPrx&);
void __patch__LogicalChannelPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Pixels> PixelsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Pixels> PixelsPrx;

void __read(::IceInternal::BasicStream*, PixelsPrx&);
void __patch__PixelsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::ChannelAnnotationLink> ChannelAnnotationLinkPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::ChannelAnnotationLink> ChannelAnnotationLinkPrx;

void __read(::IceInternal::BasicStream*, ChannelAnnotationLinkPrx&);
void __patch__ChannelAnnotationLinkPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Annotation> AnnotationPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Annotation> AnnotationPrx;

void __read(::IceInternal::BasicStream*, AnnotationPrx&);
void __patch__AnnotationPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Details> DetailsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Details> DetailsPrx;

void __read(::IceInternal::BasicStream*, DetailsPrx&);
void __patch__DetailsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Channel> ChannelPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Channel> ChannelPrx;

void __read(::IceInternal::BasicStream*, ChannelPrx&);
void __patch__ChannelPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace omero
{

namespace model
{

typedef ::std::vector< ::omero::model::ChannelAnnotationLinkPtr> ChannelAnnotationLinksSeq;
void __writeChannelAnnotationLinksSeq(::IceInternal::BasicStream*, const ::omero::model::ChannelAnnotationLinkPtr*, const ::omero::model::ChannelAnnotationLinkPtr*);
void __readChannelAnnotationLinksSeq(::IceInternal::BasicStream*, ChannelAnnotationLinksSeq&);

typedef ::std::vector< ::omero::model::AnnotationPtr> ChannelLinkedAnnotationSeq;
void __writeChannelLinkedAnnotationSeq(::IceInternal::BasicStream*, const ::omero::model::AnnotationPtr*, const ::omero::model::AnnotationPtr*);
void __readChannelLinkedAnnotationSeq(::IceInternal::BasicStream*, ChannelLinkedAnnotationSeq&);

}

}

namespace IceProxy
{

namespace omero
{

namespace model
{

class Channel : virtual public ::IceProxy::omero::model::IObject
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

    ::omero::model::StatsInfoPtr getStatsInfo()
    {
        return getStatsInfo(0);
    }
    ::omero::model::StatsInfoPtr getStatsInfo(const ::Ice::Context& __ctx)
    {
        return getStatsInfo(&__ctx);
    }
    
private:

    ::omero::model::StatsInfoPtr getStatsInfo(const ::Ice::Context*);
    
public:

    void setStatsInfo(const ::omero::model::StatsInfoPtr& theStatsInfo)
    {
        setStatsInfo(theStatsInfo, 0);
    }
    void setStatsInfo(const ::omero::model::StatsInfoPtr& theStatsInfo, const ::Ice::Context& __ctx)
    {
        setStatsInfo(theStatsInfo, &__ctx);
    }
    
private:

    void setStatsInfo(const ::omero::model::StatsInfoPtr&, const ::Ice::Context*);
    
public:

    ::omero::RIntPtr getRed()
    {
        return getRed(0);
    }
    ::omero::RIntPtr getRed(const ::Ice::Context& __ctx)
    {
        return getRed(&__ctx);
    }
    
private:

    ::omero::RIntPtr getRed(const ::Ice::Context*);
    
public:

    void setRed(const ::omero::RIntPtr& theRed)
    {
        setRed(theRed, 0);
    }
    void setRed(const ::omero::RIntPtr& theRed, const ::Ice::Context& __ctx)
    {
        setRed(theRed, &__ctx);
    }
    
private:

    void setRed(const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:

    ::omero::RIntPtr getGreen()
    {
        return getGreen(0);
    }
    ::omero::RIntPtr getGreen(const ::Ice::Context& __ctx)
    {
        return getGreen(&__ctx);
    }
    
private:

    ::omero::RIntPtr getGreen(const ::Ice::Context*);
    
public:

    void setGreen(const ::omero::RIntPtr& theGreen)
    {
        setGreen(theGreen, 0);
    }
    void setGreen(const ::omero::RIntPtr& theGreen, const ::Ice::Context& __ctx)
    {
        setGreen(theGreen, &__ctx);
    }
    
private:

    void setGreen(const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:

    ::omero::RIntPtr getBlue()
    {
        return getBlue(0);
    }
    ::omero::RIntPtr getBlue(const ::Ice::Context& __ctx)
    {
        return getBlue(&__ctx);
    }
    
private:

    ::omero::RIntPtr getBlue(const ::Ice::Context*);
    
public:

    void setBlue(const ::omero::RIntPtr& theBlue)
    {
        setBlue(theBlue, 0);
    }
    void setBlue(const ::omero::RIntPtr& theBlue, const ::Ice::Context& __ctx)
    {
        setBlue(theBlue, &__ctx);
    }
    
private:

    void setBlue(const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:

    ::omero::RIntPtr getAlpha()
    {
        return getAlpha(0);
    }
    ::omero::RIntPtr getAlpha(const ::Ice::Context& __ctx)
    {
        return getAlpha(&__ctx);
    }
    
private:

    ::omero::RIntPtr getAlpha(const ::Ice::Context*);
    
public:

    void setAlpha(const ::omero::RIntPtr& theAlpha)
    {
        setAlpha(theAlpha, 0);
    }
    void setAlpha(const ::omero::RIntPtr& theAlpha, const ::Ice::Context& __ctx)
    {
        setAlpha(theAlpha, &__ctx);
    }
    
private:

    void setAlpha(const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:

    ::omero::model::LogicalChannelPtr getLogicalChannel()
    {
        return getLogicalChannel(0);
    }
    ::omero::model::LogicalChannelPtr getLogicalChannel(const ::Ice::Context& __ctx)
    {
        return getLogicalChannel(&__ctx);
    }
    
private:

    ::omero::model::LogicalChannelPtr getLogicalChannel(const ::Ice::Context*);
    
public:

    void setLogicalChannel(const ::omero::model::LogicalChannelPtr& theLogicalChannel)
    {
        setLogicalChannel(theLogicalChannel, 0);
    }
    void setLogicalChannel(const ::omero::model::LogicalChannelPtr& theLogicalChannel, const ::Ice::Context& __ctx)
    {
        setLogicalChannel(theLogicalChannel, &__ctx);
    }
    
private:

    void setLogicalChannel(const ::omero::model::LogicalChannelPtr&, const ::Ice::Context*);
    
public:

    ::omero::model::PixelsPtr getPixels()
    {
        return getPixels(0);
    }
    ::omero::model::PixelsPtr getPixels(const ::Ice::Context& __ctx)
    {
        return getPixels(&__ctx);
    }
    
private:

    ::omero::model::PixelsPtr getPixels(const ::Ice::Context*);
    
public:

    void setPixels(const ::omero::model::PixelsPtr& thePixels)
    {
        setPixels(thePixels, 0);
    }
    void setPixels(const ::omero::model::PixelsPtr& thePixels, const ::Ice::Context& __ctx)
    {
        setPixels(thePixels, &__ctx);
    }
    
private:

    void setPixels(const ::omero::model::PixelsPtr&, const ::Ice::Context*);
    
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

    ::omero::model::ChannelAnnotationLinksSeq copyAnnotationLinks()
    {
        return copyAnnotationLinks(0);
    }
    ::omero::model::ChannelAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context& __ctx)
    {
        return copyAnnotationLinks(&__ctx);
    }
    
private:

    ::omero::model::ChannelAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*);
    
public:

    void addChannelAnnotationLink(const ::omero::model::ChannelAnnotationLinkPtr& target)
    {
        addChannelAnnotationLink(target, 0);
    }
    void addChannelAnnotationLink(const ::omero::model::ChannelAnnotationLinkPtr& target, const ::Ice::Context& __ctx)
    {
        addChannelAnnotationLink(target, &__ctx);
    }
    
private:

    void addChannelAnnotationLink(const ::omero::model::ChannelAnnotationLinkPtr&, const ::Ice::Context*);
    
public:

    void addAllChannelAnnotationLinkSet(const ::omero::model::ChannelAnnotationLinksSeq& targets)
    {
        addAllChannelAnnotationLinkSet(targets, 0);
    }
    void addAllChannelAnnotationLinkSet(const ::omero::model::ChannelAnnotationLinksSeq& targets, const ::Ice::Context& __ctx)
    {
        addAllChannelAnnotationLinkSet(targets, &__ctx);
    }
    
private:

    void addAllChannelAnnotationLinkSet(const ::omero::model::ChannelAnnotationLinksSeq&, const ::Ice::Context*);
    
public:

    void removeChannelAnnotationLink(const ::omero::model::ChannelAnnotationLinkPtr& theTarget)
    {
        removeChannelAnnotationLink(theTarget, 0);
    }
    void removeChannelAnnotationLink(const ::omero::model::ChannelAnnotationLinkPtr& theTarget, const ::Ice::Context& __ctx)
    {
        removeChannelAnnotationLink(theTarget, &__ctx);
    }
    
private:

    void removeChannelAnnotationLink(const ::omero::model::ChannelAnnotationLinkPtr&, const ::Ice::Context*);
    
public:

    void removeAllChannelAnnotationLinkSet(const ::omero::model::ChannelAnnotationLinksSeq& targets)
    {
        removeAllChannelAnnotationLinkSet(targets, 0);
    }
    void removeAllChannelAnnotationLinkSet(const ::omero::model::ChannelAnnotationLinksSeq& targets, const ::Ice::Context& __ctx)
    {
        removeAllChannelAnnotationLinkSet(targets, &__ctx);
    }
    
private:

    void removeAllChannelAnnotationLinkSet(const ::omero::model::ChannelAnnotationLinksSeq&, const ::Ice::Context*);
    
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

    void reloadAnnotationLinks(const ::omero::model::ChannelPtr& toCopy)
    {
        reloadAnnotationLinks(toCopy, 0);
    }
    void reloadAnnotationLinks(const ::omero::model::ChannelPtr& toCopy, const ::Ice::Context& __ctx)
    {
        reloadAnnotationLinks(toCopy, &__ctx);
    }
    
private:

    void reloadAnnotationLinks(const ::omero::model::ChannelPtr&, const ::Ice::Context*);
    
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

    ::omero::model::ChannelAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr& addition)
    {
        return linkAnnotation(addition, 0);
    }
    ::omero::model::ChannelAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr& addition, const ::Ice::Context& __ctx)
    {
        return linkAnnotation(addition, &__ctx);
    }
    
private:

    ::omero::model::ChannelAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);
    
public:

    void addChannelAnnotationLinkToBoth(const ::omero::model::ChannelAnnotationLinkPtr& link, bool bothSides)
    {
        addChannelAnnotationLinkToBoth(link, bothSides, 0);
    }
    void addChannelAnnotationLinkToBoth(const ::omero::model::ChannelAnnotationLinkPtr& link, bool bothSides, const ::Ice::Context& __ctx)
    {
        addChannelAnnotationLinkToBoth(link, bothSides, &__ctx);
    }
    
private:

    void addChannelAnnotationLinkToBoth(const ::omero::model::ChannelAnnotationLinkPtr&, bool, const ::Ice::Context*);
    
public:

    ::omero::model::ChannelAnnotationLinksSeq findChannelAnnotationLink(const ::omero::model::AnnotationPtr& removal)
    {
        return findChannelAnnotationLink(removal, 0);
    }
    ::omero::model::ChannelAnnotationLinksSeq findChannelAnnotationLink(const ::omero::model::AnnotationPtr& removal, const ::Ice::Context& __ctx)
    {
        return findChannelAnnotationLink(removal, &__ctx);
    }
    
private:

    ::omero::model::ChannelAnnotationLinksSeq findChannelAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);
    
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

    void removeChannelAnnotationLinkFromBoth(const ::omero::model::ChannelAnnotationLinkPtr& link, bool bothSides)
    {
        removeChannelAnnotationLinkFromBoth(link, bothSides, 0);
    }
    void removeChannelAnnotationLinkFromBoth(const ::omero::model::ChannelAnnotationLinkPtr& link, bool bothSides, const ::Ice::Context& __ctx)
    {
        removeChannelAnnotationLinkFromBoth(link, bothSides, &__ctx);
    }
    
private:

    void removeChannelAnnotationLinkFromBoth(const ::omero::model::ChannelAnnotationLinkPtr&, bool, const ::Ice::Context*);
    
public:

    ::omero::model::ChannelLinkedAnnotationSeq linkedAnnotationList()
    {
        return linkedAnnotationList(0);
    }
    ::omero::model::ChannelLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context& __ctx)
    {
        return linkedAnnotationList(&__ctx);
    }
    
private:

    ::omero::model::ChannelLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<Channel> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Channel*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Channel*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Channel> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Channel*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Channel*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Channel> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Channel*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Channel*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Channel> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Channel*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Channel*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Channel> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Channel*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Channel*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Channel> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Channel*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Channel*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Channel> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Channel*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Channel*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Channel> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Channel*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Channel*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Channel> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Channel*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Channel*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Channel> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Channel*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Channel*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Channel> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Channel*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Channel*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Channel> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Channel*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Channel*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Channel> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Channel*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Channel*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Channel> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Channel*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Channel*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Channel> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Channel*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Channel*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Channel> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Channel*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Channel*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Channel> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Channel*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Channel*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Channel> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Channel*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Channel*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Channel> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Channel*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Channel*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class Channel : virtual public ::IceDelegate::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*) = 0;

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::StatsInfoPtr getStatsInfo(const ::Ice::Context*) = 0;

    virtual void setStatsInfo(const ::omero::model::StatsInfoPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RIntPtr getRed(const ::Ice::Context*) = 0;

    virtual void setRed(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RIntPtr getGreen(const ::Ice::Context*) = 0;

    virtual void setGreen(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RIntPtr getBlue(const ::Ice::Context*) = 0;

    virtual void setBlue(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RIntPtr getAlpha(const ::Ice::Context*) = 0;

    virtual void setAlpha(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::LogicalChannelPtr getLogicalChannel(const ::Ice::Context*) = 0;

    virtual void setLogicalChannel(const ::omero::model::LogicalChannelPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::PixelsPtr getPixels(const ::Ice::Context*) = 0;

    virtual void setPixels(const ::omero::model::PixelsPtr&, const ::Ice::Context*) = 0;

    virtual void unloadAnnotationLinks(const ::Ice::Context*) = 0;

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Context*) = 0;

    virtual ::omero::model::ChannelAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*) = 0;

    virtual void addChannelAnnotationLink(const ::omero::model::ChannelAnnotationLinkPtr&, const ::Ice::Context*) = 0;

    virtual void addAllChannelAnnotationLinkSet(const ::omero::model::ChannelAnnotationLinksSeq&, const ::Ice::Context*) = 0;

    virtual void removeChannelAnnotationLink(const ::omero::model::ChannelAnnotationLinkPtr&, const ::Ice::Context*) = 0;

    virtual void removeAllChannelAnnotationLinkSet(const ::omero::model::ChannelAnnotationLinksSeq&, const ::Ice::Context*) = 0;

    virtual void clearAnnotationLinks(const ::Ice::Context*) = 0;

    virtual void reloadAnnotationLinks(const ::omero::model::ChannelPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Context*) = 0;

    virtual ::omero::model::ChannelAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*) = 0;

    virtual void addChannelAnnotationLinkToBoth(const ::omero::model::ChannelAnnotationLinkPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::ChannelAnnotationLinksSeq findChannelAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*) = 0;

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*) = 0;

    virtual void removeChannelAnnotationLinkFromBoth(const ::omero::model::ChannelAnnotationLinkPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::ChannelLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*) = 0;
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

class Channel : virtual public ::IceDelegate::omero::model::Channel,
                virtual public ::IceDelegateM::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::model::StatsInfoPtr getStatsInfo(const ::Ice::Context*);

    virtual void setStatsInfo(const ::omero::model::StatsInfoPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getRed(const ::Ice::Context*);

    virtual void setRed(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getGreen(const ::Ice::Context*);

    virtual void setGreen(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getBlue(const ::Ice::Context*);

    virtual void setBlue(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getAlpha(const ::Ice::Context*);

    virtual void setAlpha(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::model::LogicalChannelPtr getLogicalChannel(const ::Ice::Context*);

    virtual void setLogicalChannel(const ::omero::model::LogicalChannelPtr&, const ::Ice::Context*);

    virtual ::omero::model::PixelsPtr getPixels(const ::Ice::Context*);

    virtual void setPixels(const ::omero::model::PixelsPtr&, const ::Ice::Context*);

    virtual void unloadAnnotationLinks(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Context*);

    virtual ::omero::model::ChannelAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*);

    virtual void addChannelAnnotationLink(const ::omero::model::ChannelAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void addAllChannelAnnotationLinkSet(const ::omero::model::ChannelAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void removeChannelAnnotationLink(const ::omero::model::ChannelAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void removeAllChannelAnnotationLinkSet(const ::omero::model::ChannelAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void clearAnnotationLinks(const ::Ice::Context*);

    virtual void reloadAnnotationLinks(const ::omero::model::ChannelPtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::ChannelAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void addChannelAnnotationLinkToBoth(const ::omero::model::ChannelAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::ChannelAnnotationLinksSeq findChannelAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void removeChannelAnnotationLinkFromBoth(const ::omero::model::ChannelAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::ChannelLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*);
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

class Channel : virtual public ::IceDelegate::omero::model::Channel,
                virtual public ::IceDelegateD::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::model::StatsInfoPtr getStatsInfo(const ::Ice::Context*);

    virtual void setStatsInfo(const ::omero::model::StatsInfoPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getRed(const ::Ice::Context*);

    virtual void setRed(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getGreen(const ::Ice::Context*);

    virtual void setGreen(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getBlue(const ::Ice::Context*);

    virtual void setBlue(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getAlpha(const ::Ice::Context*);

    virtual void setAlpha(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::model::LogicalChannelPtr getLogicalChannel(const ::Ice::Context*);

    virtual void setLogicalChannel(const ::omero::model::LogicalChannelPtr&, const ::Ice::Context*);

    virtual ::omero::model::PixelsPtr getPixels(const ::Ice::Context*);

    virtual void setPixels(const ::omero::model::PixelsPtr&, const ::Ice::Context*);

    virtual void unloadAnnotationLinks(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Context*);

    virtual ::omero::model::ChannelAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*);

    virtual void addChannelAnnotationLink(const ::omero::model::ChannelAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void addAllChannelAnnotationLinkSet(const ::omero::model::ChannelAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void removeChannelAnnotationLink(const ::omero::model::ChannelAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void removeAllChannelAnnotationLinkSet(const ::omero::model::ChannelAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void clearAnnotationLinks(const ::Ice::Context*);

    virtual void reloadAnnotationLinks(const ::omero::model::ChannelPtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::ChannelAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void addChannelAnnotationLinkToBoth(const ::omero::model::ChannelAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::ChannelAnnotationLinksSeq findChannelAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void removeChannelAnnotationLinkFromBoth(const ::omero::model::ChannelAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::ChannelLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace model
{

class Channel : virtual public ::omero::model::IObject
{
public:

    typedef ChannelPrx ProxyType;
    typedef ChannelPtr PointerType;
    
    Channel() {}
    Channel(const ::omero::RLongPtr&, const ::omero::model::DetailsPtr&, bool, const ::omero::RIntPtr&, const ::omero::model::StatsInfoPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::model::LogicalChannelPtr&, const ::omero::model::PixelsPtr&, const ::omero::model::ChannelAnnotationLinksSeq&, bool, const ::omero::sys::CountMap&);
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

    virtual ::omero::model::StatsInfoPtr getStatsInfo(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getStatsInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setStatsInfo(const ::omero::model::StatsInfoPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setStatsInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RIntPtr getRed(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getRed(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setRed(const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setRed(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RIntPtr getGreen(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getGreen(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setGreen(const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setGreen(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RIntPtr getBlue(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getBlue(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setBlue(const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setBlue(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RIntPtr getAlpha(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getAlpha(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setAlpha(const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setAlpha(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::LogicalChannelPtr getLogicalChannel(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getLogicalChannel(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setLogicalChannel(const ::omero::model::LogicalChannelPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setLogicalChannel(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::PixelsPtr getPixels(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getPixels(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setPixels(const ::omero::model::PixelsPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setPixels(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unloadAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unloadAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sizeOfAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ChannelAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copyAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addChannelAnnotationLink(const ::omero::model::ChannelAnnotationLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addChannelAnnotationLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAllChannelAnnotationLinkSet(const ::omero::model::ChannelAnnotationLinksSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAllChannelAnnotationLinkSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeChannelAnnotationLink(const ::omero::model::ChannelAnnotationLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeChannelAnnotationLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeAllChannelAnnotationLinkSet(const ::omero::model::ChannelAnnotationLinksSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeAllChannelAnnotationLinkSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void clearAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___clearAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void reloadAnnotationLinks(const ::omero::model::ChannelPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___reloadAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getAnnotationLinksCountPerOwner(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ChannelAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkAnnotation(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addChannelAnnotationLinkToBoth(const ::omero::model::ChannelAnnotationLinkPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addChannelAnnotationLinkToBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ChannelAnnotationLinksSeq findChannelAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___findChannelAnnotationLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unlinkAnnotation(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeChannelAnnotationLinkFromBoth(const ::omero::model::ChannelAnnotationLinkPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeChannelAnnotationLinkFromBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ChannelLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkedAnnotationList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

protected:

    ::omero::RIntPtr version;

    ::omero::model::StatsInfoPtr statsInfo;

    ::omero::RIntPtr red;

    ::omero::RIntPtr green;

    ::omero::RIntPtr blue;

    ::omero::RIntPtr alpha;

    ::omero::model::LogicalChannelPtr logicalChannel;

    ::omero::model::PixelsPtr pixels;

    ::omero::model::ChannelAnnotationLinksSeq annotationLinksSeq;

    bool annotationLinksLoaded;

    ::omero::sys::CountMap annotationLinksCountPerOwner;
};

}

}

#endif
