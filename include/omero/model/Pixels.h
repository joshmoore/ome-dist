// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `Pixels.ice'

#ifndef __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_Pixels_h__
#define __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_Pixels_h__

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

class Image;

class Pixels;

class PixelsType;

class DimensionOrder;

class PlaneInfo;

class PixelsOriginalFileMap;

class OriginalFile;

class Channel;

class RenderingDef;

class Thumbnail;

class PixelsAnnotationLink;

class Annotation;

class Details;

}

}

}

namespace omero
{

namespace model
{

class Image;
bool operator==(const Image&, const Image&);
bool operator<(const Image&, const Image&);

class Pixels;
bool operator==(const Pixels&, const Pixels&);
bool operator<(const Pixels&, const Pixels&);

class PixelsType;
bool operator==(const PixelsType&, const PixelsType&);
bool operator<(const PixelsType&, const PixelsType&);

class DimensionOrder;
bool operator==(const DimensionOrder&, const DimensionOrder&);
bool operator<(const DimensionOrder&, const DimensionOrder&);

class PlaneInfo;
bool operator==(const PlaneInfo&, const PlaneInfo&);
bool operator<(const PlaneInfo&, const PlaneInfo&);

class PixelsOriginalFileMap;
bool operator==(const PixelsOriginalFileMap&, const PixelsOriginalFileMap&);
bool operator<(const PixelsOriginalFileMap&, const PixelsOriginalFileMap&);

class OriginalFile;
bool operator==(const OriginalFile&, const OriginalFile&);
bool operator<(const OriginalFile&, const OriginalFile&);

class Channel;
bool operator==(const Channel&, const Channel&);
bool operator<(const Channel&, const Channel&);

class RenderingDef;
bool operator==(const RenderingDef&, const RenderingDef&);
bool operator<(const RenderingDef&, const RenderingDef&);

class Thumbnail;
bool operator==(const Thumbnail&, const Thumbnail&);
bool operator<(const Thumbnail&, const Thumbnail&);

class PixelsAnnotationLink;
bool operator==(const PixelsAnnotationLink&, const PixelsAnnotationLink&);
bool operator<(const PixelsAnnotationLink&, const PixelsAnnotationLink&);

class Annotation;
bool operator==(const Annotation&, const Annotation&);
bool operator<(const Annotation&, const Annotation&);

class Details;
bool operator==(const Details&, const Details&);
bool operator<(const Details&, const Details&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::model::Image*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Image*);

::Ice::Object* upCast(::omero::model::Pixels*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Pixels*);

::Ice::Object* upCast(::omero::model::PixelsType*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::PixelsType*);

::Ice::Object* upCast(::omero::model::DimensionOrder*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::DimensionOrder*);

::Ice::Object* upCast(::omero::model::PlaneInfo*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::PlaneInfo*);

::Ice::Object* upCast(::omero::model::PixelsOriginalFileMap*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::PixelsOriginalFileMap*);

::Ice::Object* upCast(::omero::model::OriginalFile*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::OriginalFile*);

::Ice::Object* upCast(::omero::model::Channel*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Channel*);

::Ice::Object* upCast(::omero::model::RenderingDef*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::RenderingDef*);

::Ice::Object* upCast(::omero::model::Thumbnail*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Thumbnail*);

::Ice::Object* upCast(::omero::model::PixelsAnnotationLink*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::PixelsAnnotationLink*);

::Ice::Object* upCast(::omero::model::Annotation*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Annotation*);

::Ice::Object* upCast(::omero::model::Details*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Details*);

}

namespace omero
{

namespace model
{

typedef ::IceInternal::Handle< ::omero::model::Image> ImagePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Image> ImagePrx;

void __read(::IceInternal::BasicStream*, ImagePrx&);
void __patch__ImagePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Pixels> PixelsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Pixels> PixelsPrx;

void __read(::IceInternal::BasicStream*, PixelsPrx&);
void __patch__PixelsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::PixelsType> PixelsTypePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::PixelsType> PixelsTypePrx;

void __read(::IceInternal::BasicStream*, PixelsTypePrx&);
void __patch__PixelsTypePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::DimensionOrder> DimensionOrderPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::DimensionOrder> DimensionOrderPrx;

void __read(::IceInternal::BasicStream*, DimensionOrderPrx&);
void __patch__DimensionOrderPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::PlaneInfo> PlaneInfoPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::PlaneInfo> PlaneInfoPrx;

void __read(::IceInternal::BasicStream*, PlaneInfoPrx&);
void __patch__PlaneInfoPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::PixelsOriginalFileMap> PixelsOriginalFileMapPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::PixelsOriginalFileMap> PixelsOriginalFileMapPrx;

void __read(::IceInternal::BasicStream*, PixelsOriginalFileMapPrx&);
void __patch__PixelsOriginalFileMapPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::OriginalFile> OriginalFilePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::OriginalFile> OriginalFilePrx;

void __read(::IceInternal::BasicStream*, OriginalFilePrx&);
void __patch__OriginalFilePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Channel> ChannelPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Channel> ChannelPrx;

void __read(::IceInternal::BasicStream*, ChannelPrx&);
void __patch__ChannelPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::RenderingDef> RenderingDefPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::RenderingDef> RenderingDefPrx;

void __read(::IceInternal::BasicStream*, RenderingDefPrx&);
void __patch__RenderingDefPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Thumbnail> ThumbnailPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Thumbnail> ThumbnailPrx;

void __read(::IceInternal::BasicStream*, ThumbnailPrx&);
void __patch__ThumbnailPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::PixelsAnnotationLink> PixelsAnnotationLinkPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::PixelsAnnotationLink> PixelsAnnotationLinkPrx;

void __read(::IceInternal::BasicStream*, PixelsAnnotationLinkPrx&);
void __patch__PixelsAnnotationLinkPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Annotation> AnnotationPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Annotation> AnnotationPrx;

void __read(::IceInternal::BasicStream*, AnnotationPrx&);
void __patch__AnnotationPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Details> DetailsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Details> DetailsPrx;

void __read(::IceInternal::BasicStream*, DetailsPrx&);
void __patch__DetailsPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace omero
{

namespace model
{

typedef ::std::vector< ::omero::model::PlaneInfoPtr> PixelsPlaneInfoSeq;
void __writePixelsPlaneInfoSeq(::IceInternal::BasicStream*, const ::omero::model::PlaneInfoPtr*, const ::omero::model::PlaneInfoPtr*);
void __readPixelsPlaneInfoSeq(::IceInternal::BasicStream*, PixelsPlaneInfoSeq&);

typedef ::std::vector< ::omero::model::PixelsOriginalFileMapPtr> PixelsPixelsFileMapsSeq;
void __writePixelsPixelsFileMapsSeq(::IceInternal::BasicStream*, const ::omero::model::PixelsOriginalFileMapPtr*, const ::omero::model::PixelsOriginalFileMapPtr*);
void __readPixelsPixelsFileMapsSeq(::IceInternal::BasicStream*, PixelsPixelsFileMapsSeq&);

typedef ::std::vector< ::omero::model::OriginalFilePtr> PixelsLinkedOriginalFileSeq;
void __writePixelsLinkedOriginalFileSeq(::IceInternal::BasicStream*, const ::omero::model::OriginalFilePtr*, const ::omero::model::OriginalFilePtr*);
void __readPixelsLinkedOriginalFileSeq(::IceInternal::BasicStream*, PixelsLinkedOriginalFileSeq&);

typedef ::std::vector< ::omero::model::ChannelPtr> PixelsChannelsSeq;
void __writePixelsChannelsSeq(::IceInternal::BasicStream*, const ::omero::model::ChannelPtr*, const ::omero::model::ChannelPtr*);
void __readPixelsChannelsSeq(::IceInternal::BasicStream*, PixelsChannelsSeq&);

typedef ::std::vector< ::omero::model::RenderingDefPtr> PixelsSettingsSeq;
void __writePixelsSettingsSeq(::IceInternal::BasicStream*, const ::omero::model::RenderingDefPtr*, const ::omero::model::RenderingDefPtr*);
void __readPixelsSettingsSeq(::IceInternal::BasicStream*, PixelsSettingsSeq&);

typedef ::std::vector< ::omero::model::ThumbnailPtr> PixelsThumbnailsSeq;
void __writePixelsThumbnailsSeq(::IceInternal::BasicStream*, const ::omero::model::ThumbnailPtr*, const ::omero::model::ThumbnailPtr*);
void __readPixelsThumbnailsSeq(::IceInternal::BasicStream*, PixelsThumbnailsSeq&);

typedef ::std::vector< ::omero::model::PixelsAnnotationLinkPtr> PixelsAnnotationLinksSeq;
void __writePixelsAnnotationLinksSeq(::IceInternal::BasicStream*, const ::omero::model::PixelsAnnotationLinkPtr*, const ::omero::model::PixelsAnnotationLinkPtr*);
void __readPixelsAnnotationLinksSeq(::IceInternal::BasicStream*, PixelsAnnotationLinksSeq&);

typedef ::std::vector< ::omero::model::AnnotationPtr> PixelsLinkedAnnotationSeq;
void __writePixelsLinkedAnnotationSeq(::IceInternal::BasicStream*, const ::omero::model::AnnotationPtr*, const ::omero::model::AnnotationPtr*);
void __readPixelsLinkedAnnotationSeq(::IceInternal::BasicStream*, PixelsLinkedAnnotationSeq&);

}

}

namespace IceProxy
{

namespace omero
{

namespace model
{

class Pixels : virtual public ::IceProxy::omero::model::IObject
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

    ::omero::model::ImagePtr getImage()
    {
        return getImage(0);
    }
    ::omero::model::ImagePtr getImage(const ::Ice::Context& __ctx)
    {
        return getImage(&__ctx);
    }
    
private:

    ::omero::model::ImagePtr getImage(const ::Ice::Context*);
    
public:

    void setImage(const ::omero::model::ImagePtr& theImage)
    {
        setImage(theImage, 0);
    }
    void setImage(const ::omero::model::ImagePtr& theImage, const ::Ice::Context& __ctx)
    {
        setImage(theImage, &__ctx);
    }
    
private:

    void setImage(const ::omero::model::ImagePtr&, const ::Ice::Context*);
    
public:

    ::omero::model::PixelsPtr getRelatedTo()
    {
        return getRelatedTo(0);
    }
    ::omero::model::PixelsPtr getRelatedTo(const ::Ice::Context& __ctx)
    {
        return getRelatedTo(&__ctx);
    }
    
private:

    ::omero::model::PixelsPtr getRelatedTo(const ::Ice::Context*);
    
public:

    void setRelatedTo(const ::omero::model::PixelsPtr& theRelatedTo)
    {
        setRelatedTo(theRelatedTo, 0);
    }
    void setRelatedTo(const ::omero::model::PixelsPtr& theRelatedTo, const ::Ice::Context& __ctx)
    {
        setRelatedTo(theRelatedTo, &__ctx);
    }
    
private:

    void setRelatedTo(const ::omero::model::PixelsPtr&, const ::Ice::Context*);
    
public:

    ::omero::model::PixelsTypePtr getPixelsType()
    {
        return getPixelsType(0);
    }
    ::omero::model::PixelsTypePtr getPixelsType(const ::Ice::Context& __ctx)
    {
        return getPixelsType(&__ctx);
    }
    
private:

    ::omero::model::PixelsTypePtr getPixelsType(const ::Ice::Context*);
    
public:

    void setPixelsType(const ::omero::model::PixelsTypePtr& thePixelsType)
    {
        setPixelsType(thePixelsType, 0);
    }
    void setPixelsType(const ::omero::model::PixelsTypePtr& thePixelsType, const ::Ice::Context& __ctx)
    {
        setPixelsType(thePixelsType, &__ctx);
    }
    
private:

    void setPixelsType(const ::omero::model::PixelsTypePtr&, const ::Ice::Context*);
    
public:

    ::omero::RIntPtr getSignificantBits()
    {
        return getSignificantBits(0);
    }
    ::omero::RIntPtr getSignificantBits(const ::Ice::Context& __ctx)
    {
        return getSignificantBits(&__ctx);
    }
    
private:

    ::omero::RIntPtr getSignificantBits(const ::Ice::Context*);
    
public:

    void setSignificantBits(const ::omero::RIntPtr& theSignificantBits)
    {
        setSignificantBits(theSignificantBits, 0);
    }
    void setSignificantBits(const ::omero::RIntPtr& theSignificantBits, const ::Ice::Context& __ctx)
    {
        setSignificantBits(theSignificantBits, &__ctx);
    }
    
private:

    void setSignificantBits(const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:

    ::omero::RIntPtr getSizeX()
    {
        return getSizeX(0);
    }
    ::omero::RIntPtr getSizeX(const ::Ice::Context& __ctx)
    {
        return getSizeX(&__ctx);
    }
    
private:

    ::omero::RIntPtr getSizeX(const ::Ice::Context*);
    
public:

    void setSizeX(const ::omero::RIntPtr& theSizeX)
    {
        setSizeX(theSizeX, 0);
    }
    void setSizeX(const ::omero::RIntPtr& theSizeX, const ::Ice::Context& __ctx)
    {
        setSizeX(theSizeX, &__ctx);
    }
    
private:

    void setSizeX(const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:

    ::omero::RIntPtr getSizeY()
    {
        return getSizeY(0);
    }
    ::omero::RIntPtr getSizeY(const ::Ice::Context& __ctx)
    {
        return getSizeY(&__ctx);
    }
    
private:

    ::omero::RIntPtr getSizeY(const ::Ice::Context*);
    
public:

    void setSizeY(const ::omero::RIntPtr& theSizeY)
    {
        setSizeY(theSizeY, 0);
    }
    void setSizeY(const ::omero::RIntPtr& theSizeY, const ::Ice::Context& __ctx)
    {
        setSizeY(theSizeY, &__ctx);
    }
    
private:

    void setSizeY(const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:

    ::omero::RIntPtr getSizeZ()
    {
        return getSizeZ(0);
    }
    ::omero::RIntPtr getSizeZ(const ::Ice::Context& __ctx)
    {
        return getSizeZ(&__ctx);
    }
    
private:

    ::omero::RIntPtr getSizeZ(const ::Ice::Context*);
    
public:

    void setSizeZ(const ::omero::RIntPtr& theSizeZ)
    {
        setSizeZ(theSizeZ, 0);
    }
    void setSizeZ(const ::omero::RIntPtr& theSizeZ, const ::Ice::Context& __ctx)
    {
        setSizeZ(theSizeZ, &__ctx);
    }
    
private:

    void setSizeZ(const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:

    ::omero::RIntPtr getSizeC()
    {
        return getSizeC(0);
    }
    ::omero::RIntPtr getSizeC(const ::Ice::Context& __ctx)
    {
        return getSizeC(&__ctx);
    }
    
private:

    ::omero::RIntPtr getSizeC(const ::Ice::Context*);
    
public:

    void setSizeC(const ::omero::RIntPtr& theSizeC)
    {
        setSizeC(theSizeC, 0);
    }
    void setSizeC(const ::omero::RIntPtr& theSizeC, const ::Ice::Context& __ctx)
    {
        setSizeC(theSizeC, &__ctx);
    }
    
private:

    void setSizeC(const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:

    ::omero::RIntPtr getSizeT()
    {
        return getSizeT(0);
    }
    ::omero::RIntPtr getSizeT(const ::Ice::Context& __ctx)
    {
        return getSizeT(&__ctx);
    }
    
private:

    ::omero::RIntPtr getSizeT(const ::Ice::Context*);
    
public:

    void setSizeT(const ::omero::RIntPtr& theSizeT)
    {
        setSizeT(theSizeT, 0);
    }
    void setSizeT(const ::omero::RIntPtr& theSizeT, const ::Ice::Context& __ctx)
    {
        setSizeT(theSizeT, &__ctx);
    }
    
private:

    void setSizeT(const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:

    ::omero::RStringPtr getSha1()
    {
        return getSha1(0);
    }
    ::omero::RStringPtr getSha1(const ::Ice::Context& __ctx)
    {
        return getSha1(&__ctx);
    }
    
private:

    ::omero::RStringPtr getSha1(const ::Ice::Context*);
    
public:

    void setSha1(const ::omero::RStringPtr& theSha1)
    {
        setSha1(theSha1, 0);
    }
    void setSha1(const ::omero::RStringPtr& theSha1, const ::Ice::Context& __ctx)
    {
        setSha1(theSha1, &__ctx);
    }
    
private:

    void setSha1(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:

    ::omero::model::DimensionOrderPtr getDimensionOrder()
    {
        return getDimensionOrder(0);
    }
    ::omero::model::DimensionOrderPtr getDimensionOrder(const ::Ice::Context& __ctx)
    {
        return getDimensionOrder(&__ctx);
    }
    
private:

    ::omero::model::DimensionOrderPtr getDimensionOrder(const ::Ice::Context*);
    
public:

    void setDimensionOrder(const ::omero::model::DimensionOrderPtr& theDimensionOrder)
    {
        setDimensionOrder(theDimensionOrder, 0);
    }
    void setDimensionOrder(const ::omero::model::DimensionOrderPtr& theDimensionOrder, const ::Ice::Context& __ctx)
    {
        setDimensionOrder(theDimensionOrder, &__ctx);
    }
    
private:

    void setDimensionOrder(const ::omero::model::DimensionOrderPtr&, const ::Ice::Context*);
    
public:

    ::omero::RDoublePtr getPhysicalSizeX()
    {
        return getPhysicalSizeX(0);
    }
    ::omero::RDoublePtr getPhysicalSizeX(const ::Ice::Context& __ctx)
    {
        return getPhysicalSizeX(&__ctx);
    }
    
private:

    ::omero::RDoublePtr getPhysicalSizeX(const ::Ice::Context*);
    
public:

    void setPhysicalSizeX(const ::omero::RDoublePtr& thePhysicalSizeX)
    {
        setPhysicalSizeX(thePhysicalSizeX, 0);
    }
    void setPhysicalSizeX(const ::omero::RDoublePtr& thePhysicalSizeX, const ::Ice::Context& __ctx)
    {
        setPhysicalSizeX(thePhysicalSizeX, &__ctx);
    }
    
private:

    void setPhysicalSizeX(const ::omero::RDoublePtr&, const ::Ice::Context*);
    
public:

    ::omero::RDoublePtr getPhysicalSizeY()
    {
        return getPhysicalSizeY(0);
    }
    ::omero::RDoublePtr getPhysicalSizeY(const ::Ice::Context& __ctx)
    {
        return getPhysicalSizeY(&__ctx);
    }
    
private:

    ::omero::RDoublePtr getPhysicalSizeY(const ::Ice::Context*);
    
public:

    void setPhysicalSizeY(const ::omero::RDoublePtr& thePhysicalSizeY)
    {
        setPhysicalSizeY(thePhysicalSizeY, 0);
    }
    void setPhysicalSizeY(const ::omero::RDoublePtr& thePhysicalSizeY, const ::Ice::Context& __ctx)
    {
        setPhysicalSizeY(thePhysicalSizeY, &__ctx);
    }
    
private:

    void setPhysicalSizeY(const ::omero::RDoublePtr&, const ::Ice::Context*);
    
public:

    ::omero::RDoublePtr getPhysicalSizeZ()
    {
        return getPhysicalSizeZ(0);
    }
    ::omero::RDoublePtr getPhysicalSizeZ(const ::Ice::Context& __ctx)
    {
        return getPhysicalSizeZ(&__ctx);
    }
    
private:

    ::omero::RDoublePtr getPhysicalSizeZ(const ::Ice::Context*);
    
public:

    void setPhysicalSizeZ(const ::omero::RDoublePtr& thePhysicalSizeZ)
    {
        setPhysicalSizeZ(thePhysicalSizeZ, 0);
    }
    void setPhysicalSizeZ(const ::omero::RDoublePtr& thePhysicalSizeZ, const ::Ice::Context& __ctx)
    {
        setPhysicalSizeZ(thePhysicalSizeZ, &__ctx);
    }
    
private:

    void setPhysicalSizeZ(const ::omero::RDoublePtr&, const ::Ice::Context*);
    
public:

    ::omero::RIntPtr getWaveStart()
    {
        return getWaveStart(0);
    }
    ::omero::RIntPtr getWaveStart(const ::Ice::Context& __ctx)
    {
        return getWaveStart(&__ctx);
    }
    
private:

    ::omero::RIntPtr getWaveStart(const ::Ice::Context*);
    
public:

    void setWaveStart(const ::omero::RIntPtr& theWaveStart)
    {
        setWaveStart(theWaveStart, 0);
    }
    void setWaveStart(const ::omero::RIntPtr& theWaveStart, const ::Ice::Context& __ctx)
    {
        setWaveStart(theWaveStart, &__ctx);
    }
    
private:

    void setWaveStart(const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:

    ::omero::RIntPtr getWaveIncrement()
    {
        return getWaveIncrement(0);
    }
    ::omero::RIntPtr getWaveIncrement(const ::Ice::Context& __ctx)
    {
        return getWaveIncrement(&__ctx);
    }
    
private:

    ::omero::RIntPtr getWaveIncrement(const ::Ice::Context*);
    
public:

    void setWaveIncrement(const ::omero::RIntPtr& theWaveIncrement)
    {
        setWaveIncrement(theWaveIncrement, 0);
    }
    void setWaveIncrement(const ::omero::RIntPtr& theWaveIncrement, const ::Ice::Context& __ctx)
    {
        setWaveIncrement(theWaveIncrement, &__ctx);
    }
    
private:

    void setWaveIncrement(const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:

    ::omero::RDoublePtr getTimeIncrement()
    {
        return getTimeIncrement(0);
    }
    ::omero::RDoublePtr getTimeIncrement(const ::Ice::Context& __ctx)
    {
        return getTimeIncrement(&__ctx);
    }
    
private:

    ::omero::RDoublePtr getTimeIncrement(const ::Ice::Context*);
    
public:

    void setTimeIncrement(const ::omero::RDoublePtr& theTimeIncrement)
    {
        setTimeIncrement(theTimeIncrement, 0);
    }
    void setTimeIncrement(const ::omero::RDoublePtr& theTimeIncrement, const ::Ice::Context& __ctx)
    {
        setTimeIncrement(theTimeIncrement, &__ctx);
    }
    
private:

    void setTimeIncrement(const ::omero::RDoublePtr&, const ::Ice::Context*);
    
public:

    ::omero::RStringPtr getMethodology()
    {
        return getMethodology(0);
    }
    ::omero::RStringPtr getMethodology(const ::Ice::Context& __ctx)
    {
        return getMethodology(&__ctx);
    }
    
private:

    ::omero::RStringPtr getMethodology(const ::Ice::Context*);
    
public:

    void setMethodology(const ::omero::RStringPtr& theMethodology)
    {
        setMethodology(theMethodology, 0);
    }
    void setMethodology(const ::omero::RStringPtr& theMethodology, const ::Ice::Context& __ctx)
    {
        setMethodology(theMethodology, &__ctx);
    }
    
private:

    void setMethodology(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:

    void unloadPlaneInfo()
    {
        unloadPlaneInfo(0);
    }
    void unloadPlaneInfo(const ::Ice::Context& __ctx)
    {
        unloadPlaneInfo(&__ctx);
    }
    
private:

    void unloadPlaneInfo(const ::Ice::Context*);
    
public:

    ::Ice::Int sizeOfPlaneInfo()
    {
        return sizeOfPlaneInfo(0);
    }
    ::Ice::Int sizeOfPlaneInfo(const ::Ice::Context& __ctx)
    {
        return sizeOfPlaneInfo(&__ctx);
    }
    
private:

    ::Ice::Int sizeOfPlaneInfo(const ::Ice::Context*);
    
public:

    ::omero::model::PixelsPlaneInfoSeq copyPlaneInfo()
    {
        return copyPlaneInfo(0);
    }
    ::omero::model::PixelsPlaneInfoSeq copyPlaneInfo(const ::Ice::Context& __ctx)
    {
        return copyPlaneInfo(&__ctx);
    }
    
private:

    ::omero::model::PixelsPlaneInfoSeq copyPlaneInfo(const ::Ice::Context*);
    
public:

    void addPlaneInfo(const ::omero::model::PlaneInfoPtr& target)
    {
        addPlaneInfo(target, 0);
    }
    void addPlaneInfo(const ::omero::model::PlaneInfoPtr& target, const ::Ice::Context& __ctx)
    {
        addPlaneInfo(target, &__ctx);
    }
    
private:

    void addPlaneInfo(const ::omero::model::PlaneInfoPtr&, const ::Ice::Context*);
    
public:

    void addAllPlaneInfoSet(const ::omero::model::PixelsPlaneInfoSeq& targets)
    {
        addAllPlaneInfoSet(targets, 0);
    }
    void addAllPlaneInfoSet(const ::omero::model::PixelsPlaneInfoSeq& targets, const ::Ice::Context& __ctx)
    {
        addAllPlaneInfoSet(targets, &__ctx);
    }
    
private:

    void addAllPlaneInfoSet(const ::omero::model::PixelsPlaneInfoSeq&, const ::Ice::Context*);
    
public:

    void removePlaneInfo(const ::omero::model::PlaneInfoPtr& theTarget)
    {
        removePlaneInfo(theTarget, 0);
    }
    void removePlaneInfo(const ::omero::model::PlaneInfoPtr& theTarget, const ::Ice::Context& __ctx)
    {
        removePlaneInfo(theTarget, &__ctx);
    }
    
private:

    void removePlaneInfo(const ::omero::model::PlaneInfoPtr&, const ::Ice::Context*);
    
public:

    void removeAllPlaneInfoSet(const ::omero::model::PixelsPlaneInfoSeq& targets)
    {
        removeAllPlaneInfoSet(targets, 0);
    }
    void removeAllPlaneInfoSet(const ::omero::model::PixelsPlaneInfoSeq& targets, const ::Ice::Context& __ctx)
    {
        removeAllPlaneInfoSet(targets, &__ctx);
    }
    
private:

    void removeAllPlaneInfoSet(const ::omero::model::PixelsPlaneInfoSeq&, const ::Ice::Context*);
    
public:

    void clearPlaneInfo()
    {
        clearPlaneInfo(0);
    }
    void clearPlaneInfo(const ::Ice::Context& __ctx)
    {
        clearPlaneInfo(&__ctx);
    }
    
private:

    void clearPlaneInfo(const ::Ice::Context*);
    
public:

    void reloadPlaneInfo(const ::omero::model::PixelsPtr& toCopy)
    {
        reloadPlaneInfo(toCopy, 0);
    }
    void reloadPlaneInfo(const ::omero::model::PixelsPtr& toCopy, const ::Ice::Context& __ctx)
    {
        reloadPlaneInfo(toCopy, &__ctx);
    }
    
private:

    void reloadPlaneInfo(const ::omero::model::PixelsPtr&, const ::Ice::Context*);
    
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

    ::omero::model::PixelsPixelsFileMapsSeq copyPixelsFileMaps()
    {
        return copyPixelsFileMaps(0);
    }
    ::omero::model::PixelsPixelsFileMapsSeq copyPixelsFileMaps(const ::Ice::Context& __ctx)
    {
        return copyPixelsFileMaps(&__ctx);
    }
    
private:

    ::omero::model::PixelsPixelsFileMapsSeq copyPixelsFileMaps(const ::Ice::Context*);
    
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

    void addAllPixelsOriginalFileMapSet(const ::omero::model::PixelsPixelsFileMapsSeq& targets)
    {
        addAllPixelsOriginalFileMapSet(targets, 0);
    }
    void addAllPixelsOriginalFileMapSet(const ::omero::model::PixelsPixelsFileMapsSeq& targets, const ::Ice::Context& __ctx)
    {
        addAllPixelsOriginalFileMapSet(targets, &__ctx);
    }
    
private:

    void addAllPixelsOriginalFileMapSet(const ::omero::model::PixelsPixelsFileMapsSeq&, const ::Ice::Context*);
    
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

    void removeAllPixelsOriginalFileMapSet(const ::omero::model::PixelsPixelsFileMapsSeq& targets)
    {
        removeAllPixelsOriginalFileMapSet(targets, 0);
    }
    void removeAllPixelsOriginalFileMapSet(const ::omero::model::PixelsPixelsFileMapsSeq& targets, const ::Ice::Context& __ctx)
    {
        removeAllPixelsOriginalFileMapSet(targets, &__ctx);
    }
    
private:

    void removeAllPixelsOriginalFileMapSet(const ::omero::model::PixelsPixelsFileMapsSeq&, const ::Ice::Context*);
    
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

    void reloadPixelsFileMaps(const ::omero::model::PixelsPtr& toCopy)
    {
        reloadPixelsFileMaps(toCopy, 0);
    }
    void reloadPixelsFileMaps(const ::omero::model::PixelsPtr& toCopy, const ::Ice::Context& __ctx)
    {
        reloadPixelsFileMaps(toCopy, &__ctx);
    }
    
private:

    void reloadPixelsFileMaps(const ::omero::model::PixelsPtr&, const ::Ice::Context*);
    
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

    ::omero::model::PixelsOriginalFileMapPtr linkOriginalFile(const ::omero::model::OriginalFilePtr& addition)
    {
        return linkOriginalFile(addition, 0);
    }
    ::omero::model::PixelsOriginalFileMapPtr linkOriginalFile(const ::omero::model::OriginalFilePtr& addition, const ::Ice::Context& __ctx)
    {
        return linkOriginalFile(addition, &__ctx);
    }
    
private:

    ::omero::model::PixelsOriginalFileMapPtr linkOriginalFile(const ::omero::model::OriginalFilePtr&, const ::Ice::Context*);
    
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

    ::omero::model::PixelsPixelsFileMapsSeq findPixelsOriginalFileMap(const ::omero::model::OriginalFilePtr& removal)
    {
        return findPixelsOriginalFileMap(removal, 0);
    }
    ::omero::model::PixelsPixelsFileMapsSeq findPixelsOriginalFileMap(const ::omero::model::OriginalFilePtr& removal, const ::Ice::Context& __ctx)
    {
        return findPixelsOriginalFileMap(removal, &__ctx);
    }
    
private:

    ::omero::model::PixelsPixelsFileMapsSeq findPixelsOriginalFileMap(const ::omero::model::OriginalFilePtr&, const ::Ice::Context*);
    
public:

    void unlinkOriginalFile(const ::omero::model::OriginalFilePtr& removal)
    {
        unlinkOriginalFile(removal, 0);
    }
    void unlinkOriginalFile(const ::omero::model::OriginalFilePtr& removal, const ::Ice::Context& __ctx)
    {
        unlinkOriginalFile(removal, &__ctx);
    }
    
private:

    void unlinkOriginalFile(const ::omero::model::OriginalFilePtr&, const ::Ice::Context*);
    
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

    ::omero::model::PixelsLinkedOriginalFileSeq linkedOriginalFileList()
    {
        return linkedOriginalFileList(0);
    }
    ::omero::model::PixelsLinkedOriginalFileSeq linkedOriginalFileList(const ::Ice::Context& __ctx)
    {
        return linkedOriginalFileList(&__ctx);
    }
    
private:

    ::omero::model::PixelsLinkedOriginalFileSeq linkedOriginalFileList(const ::Ice::Context*);
    
public:

    void unloadChannels()
    {
        unloadChannels(0);
    }
    void unloadChannels(const ::Ice::Context& __ctx)
    {
        unloadChannels(&__ctx);
    }
    
private:

    void unloadChannels(const ::Ice::Context*);
    
public:

    ::Ice::Int sizeOfChannels()
    {
        return sizeOfChannels(0);
    }
    ::Ice::Int sizeOfChannels(const ::Ice::Context& __ctx)
    {
        return sizeOfChannels(&__ctx);
    }
    
private:

    ::Ice::Int sizeOfChannels(const ::Ice::Context*);
    
public:

    ::omero::model::PixelsChannelsSeq copyChannels()
    {
        return copyChannels(0);
    }
    ::omero::model::PixelsChannelsSeq copyChannels(const ::Ice::Context& __ctx)
    {
        return copyChannels(&__ctx);
    }
    
private:

    ::omero::model::PixelsChannelsSeq copyChannels(const ::Ice::Context*);
    
public:

    void addChannel(const ::omero::model::ChannelPtr& target)
    {
        addChannel(target, 0);
    }
    void addChannel(const ::omero::model::ChannelPtr& target, const ::Ice::Context& __ctx)
    {
        addChannel(target, &__ctx);
    }
    
private:

    void addChannel(const ::omero::model::ChannelPtr&, const ::Ice::Context*);
    
public:

    void addAllChannelSet(const ::omero::model::PixelsChannelsSeq& targets)
    {
        addAllChannelSet(targets, 0);
    }
    void addAllChannelSet(const ::omero::model::PixelsChannelsSeq& targets, const ::Ice::Context& __ctx)
    {
        addAllChannelSet(targets, &__ctx);
    }
    
private:

    void addAllChannelSet(const ::omero::model::PixelsChannelsSeq&, const ::Ice::Context*);
    
public:

    void removeChannel(const ::omero::model::ChannelPtr& theTarget)
    {
        removeChannel(theTarget, 0);
    }
    void removeChannel(const ::omero::model::ChannelPtr& theTarget, const ::Ice::Context& __ctx)
    {
        removeChannel(theTarget, &__ctx);
    }
    
private:

    void removeChannel(const ::omero::model::ChannelPtr&, const ::Ice::Context*);
    
public:

    void removeAllChannelSet(const ::omero::model::PixelsChannelsSeq& targets)
    {
        removeAllChannelSet(targets, 0);
    }
    void removeAllChannelSet(const ::omero::model::PixelsChannelsSeq& targets, const ::Ice::Context& __ctx)
    {
        removeAllChannelSet(targets, &__ctx);
    }
    
private:

    void removeAllChannelSet(const ::omero::model::PixelsChannelsSeq&, const ::Ice::Context*);
    
public:

    void clearChannels()
    {
        clearChannels(0);
    }
    void clearChannels(const ::Ice::Context& __ctx)
    {
        clearChannels(&__ctx);
    }
    
private:

    void clearChannels(const ::Ice::Context*);
    
public:

    void reloadChannels(const ::omero::model::PixelsPtr& toCopy)
    {
        reloadChannels(toCopy, 0);
    }
    void reloadChannels(const ::omero::model::PixelsPtr& toCopy, const ::Ice::Context& __ctx)
    {
        reloadChannels(toCopy, &__ctx);
    }
    
private:

    void reloadChannels(const ::omero::model::PixelsPtr&, const ::Ice::Context*);
    
public:

    ::omero::model::ChannelPtr getChannel(::Ice::Int index)
    {
        return getChannel(index, 0);
    }
    ::omero::model::ChannelPtr getChannel(::Ice::Int index, const ::Ice::Context& __ctx)
    {
        return getChannel(index, &__ctx);
    }
    
private:

    ::omero::model::ChannelPtr getChannel(::Ice::Int, const ::Ice::Context*);
    
public:

    ::omero::model::ChannelPtr setChannel(::Ice::Int index, const ::omero::model::ChannelPtr& theElement)
    {
        return setChannel(index, theElement, 0);
    }
    ::omero::model::ChannelPtr setChannel(::Ice::Int index, const ::omero::model::ChannelPtr& theElement, const ::Ice::Context& __ctx)
    {
        return setChannel(index, theElement, &__ctx);
    }
    
private:

    ::omero::model::ChannelPtr setChannel(::Ice::Int, const ::omero::model::ChannelPtr&, const ::Ice::Context*);
    
public:

    ::omero::model::ChannelPtr getPrimaryChannel()
    {
        return getPrimaryChannel(0);
    }
    ::omero::model::ChannelPtr getPrimaryChannel(const ::Ice::Context& __ctx)
    {
        return getPrimaryChannel(&__ctx);
    }
    
private:

    ::omero::model::ChannelPtr getPrimaryChannel(const ::Ice::Context*);
    
public:

    ::omero::model::ChannelPtr setPrimaryChannel(const ::omero::model::ChannelPtr& theElement)
    {
        return setPrimaryChannel(theElement, 0);
    }
    ::omero::model::ChannelPtr setPrimaryChannel(const ::omero::model::ChannelPtr& theElement, const ::Ice::Context& __ctx)
    {
        return setPrimaryChannel(theElement, &__ctx);
    }
    
private:

    ::omero::model::ChannelPtr setPrimaryChannel(const ::omero::model::ChannelPtr&, const ::Ice::Context*);
    
public:

    void unloadSettings()
    {
        unloadSettings(0);
    }
    void unloadSettings(const ::Ice::Context& __ctx)
    {
        unloadSettings(&__ctx);
    }
    
private:

    void unloadSettings(const ::Ice::Context*);
    
public:

    ::Ice::Int sizeOfSettings()
    {
        return sizeOfSettings(0);
    }
    ::Ice::Int sizeOfSettings(const ::Ice::Context& __ctx)
    {
        return sizeOfSettings(&__ctx);
    }
    
private:

    ::Ice::Int sizeOfSettings(const ::Ice::Context*);
    
public:

    ::omero::model::PixelsSettingsSeq copySettings()
    {
        return copySettings(0);
    }
    ::omero::model::PixelsSettingsSeq copySettings(const ::Ice::Context& __ctx)
    {
        return copySettings(&__ctx);
    }
    
private:

    ::omero::model::PixelsSettingsSeq copySettings(const ::Ice::Context*);
    
public:

    void addRenderingDef(const ::omero::model::RenderingDefPtr& target)
    {
        addRenderingDef(target, 0);
    }
    void addRenderingDef(const ::omero::model::RenderingDefPtr& target, const ::Ice::Context& __ctx)
    {
        addRenderingDef(target, &__ctx);
    }
    
private:

    void addRenderingDef(const ::omero::model::RenderingDefPtr&, const ::Ice::Context*);
    
public:

    void addAllRenderingDefSet(const ::omero::model::PixelsSettingsSeq& targets)
    {
        addAllRenderingDefSet(targets, 0);
    }
    void addAllRenderingDefSet(const ::omero::model::PixelsSettingsSeq& targets, const ::Ice::Context& __ctx)
    {
        addAllRenderingDefSet(targets, &__ctx);
    }
    
private:

    void addAllRenderingDefSet(const ::omero::model::PixelsSettingsSeq&, const ::Ice::Context*);
    
public:

    void removeRenderingDef(const ::omero::model::RenderingDefPtr& theTarget)
    {
        removeRenderingDef(theTarget, 0);
    }
    void removeRenderingDef(const ::omero::model::RenderingDefPtr& theTarget, const ::Ice::Context& __ctx)
    {
        removeRenderingDef(theTarget, &__ctx);
    }
    
private:

    void removeRenderingDef(const ::omero::model::RenderingDefPtr&, const ::Ice::Context*);
    
public:

    void removeAllRenderingDefSet(const ::omero::model::PixelsSettingsSeq& targets)
    {
        removeAllRenderingDefSet(targets, 0);
    }
    void removeAllRenderingDefSet(const ::omero::model::PixelsSettingsSeq& targets, const ::Ice::Context& __ctx)
    {
        removeAllRenderingDefSet(targets, &__ctx);
    }
    
private:

    void removeAllRenderingDefSet(const ::omero::model::PixelsSettingsSeq&, const ::Ice::Context*);
    
public:

    void clearSettings()
    {
        clearSettings(0);
    }
    void clearSettings(const ::Ice::Context& __ctx)
    {
        clearSettings(&__ctx);
    }
    
private:

    void clearSettings(const ::Ice::Context*);
    
public:

    void reloadSettings(const ::omero::model::PixelsPtr& toCopy)
    {
        reloadSettings(toCopy, 0);
    }
    void reloadSettings(const ::omero::model::PixelsPtr& toCopy, const ::Ice::Context& __ctx)
    {
        reloadSettings(toCopy, &__ctx);
    }
    
private:

    void reloadSettings(const ::omero::model::PixelsPtr&, const ::Ice::Context*);
    
public:

    void unloadThumbnails()
    {
        unloadThumbnails(0);
    }
    void unloadThumbnails(const ::Ice::Context& __ctx)
    {
        unloadThumbnails(&__ctx);
    }
    
private:

    void unloadThumbnails(const ::Ice::Context*);
    
public:

    ::Ice::Int sizeOfThumbnails()
    {
        return sizeOfThumbnails(0);
    }
    ::Ice::Int sizeOfThumbnails(const ::Ice::Context& __ctx)
    {
        return sizeOfThumbnails(&__ctx);
    }
    
private:

    ::Ice::Int sizeOfThumbnails(const ::Ice::Context*);
    
public:

    ::omero::model::PixelsThumbnailsSeq copyThumbnails()
    {
        return copyThumbnails(0);
    }
    ::omero::model::PixelsThumbnailsSeq copyThumbnails(const ::Ice::Context& __ctx)
    {
        return copyThumbnails(&__ctx);
    }
    
private:

    ::omero::model::PixelsThumbnailsSeq copyThumbnails(const ::Ice::Context*);
    
public:

    void addThumbnail(const ::omero::model::ThumbnailPtr& target)
    {
        addThumbnail(target, 0);
    }
    void addThumbnail(const ::omero::model::ThumbnailPtr& target, const ::Ice::Context& __ctx)
    {
        addThumbnail(target, &__ctx);
    }
    
private:

    void addThumbnail(const ::omero::model::ThumbnailPtr&, const ::Ice::Context*);
    
public:

    void addAllThumbnailSet(const ::omero::model::PixelsThumbnailsSeq& targets)
    {
        addAllThumbnailSet(targets, 0);
    }
    void addAllThumbnailSet(const ::omero::model::PixelsThumbnailsSeq& targets, const ::Ice::Context& __ctx)
    {
        addAllThumbnailSet(targets, &__ctx);
    }
    
private:

    void addAllThumbnailSet(const ::omero::model::PixelsThumbnailsSeq&, const ::Ice::Context*);
    
public:

    void removeThumbnail(const ::omero::model::ThumbnailPtr& theTarget)
    {
        removeThumbnail(theTarget, 0);
    }
    void removeThumbnail(const ::omero::model::ThumbnailPtr& theTarget, const ::Ice::Context& __ctx)
    {
        removeThumbnail(theTarget, &__ctx);
    }
    
private:

    void removeThumbnail(const ::omero::model::ThumbnailPtr&, const ::Ice::Context*);
    
public:

    void removeAllThumbnailSet(const ::omero::model::PixelsThumbnailsSeq& targets)
    {
        removeAllThumbnailSet(targets, 0);
    }
    void removeAllThumbnailSet(const ::omero::model::PixelsThumbnailsSeq& targets, const ::Ice::Context& __ctx)
    {
        removeAllThumbnailSet(targets, &__ctx);
    }
    
private:

    void removeAllThumbnailSet(const ::omero::model::PixelsThumbnailsSeq&, const ::Ice::Context*);
    
public:

    void clearThumbnails()
    {
        clearThumbnails(0);
    }
    void clearThumbnails(const ::Ice::Context& __ctx)
    {
        clearThumbnails(&__ctx);
    }
    
private:

    void clearThumbnails(const ::Ice::Context*);
    
public:

    void reloadThumbnails(const ::omero::model::PixelsPtr& toCopy)
    {
        reloadThumbnails(toCopy, 0);
    }
    void reloadThumbnails(const ::omero::model::PixelsPtr& toCopy, const ::Ice::Context& __ctx)
    {
        reloadThumbnails(toCopy, &__ctx);
    }
    
private:

    void reloadThumbnails(const ::omero::model::PixelsPtr&, const ::Ice::Context*);
    
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

    ::omero::model::PixelsAnnotationLinksSeq copyAnnotationLinks()
    {
        return copyAnnotationLinks(0);
    }
    ::omero::model::PixelsAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context& __ctx)
    {
        return copyAnnotationLinks(&__ctx);
    }
    
private:

    ::omero::model::PixelsAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*);
    
public:

    void addPixelsAnnotationLink(const ::omero::model::PixelsAnnotationLinkPtr& target)
    {
        addPixelsAnnotationLink(target, 0);
    }
    void addPixelsAnnotationLink(const ::omero::model::PixelsAnnotationLinkPtr& target, const ::Ice::Context& __ctx)
    {
        addPixelsAnnotationLink(target, &__ctx);
    }
    
private:

    void addPixelsAnnotationLink(const ::omero::model::PixelsAnnotationLinkPtr&, const ::Ice::Context*);
    
public:

    void addAllPixelsAnnotationLinkSet(const ::omero::model::PixelsAnnotationLinksSeq& targets)
    {
        addAllPixelsAnnotationLinkSet(targets, 0);
    }
    void addAllPixelsAnnotationLinkSet(const ::omero::model::PixelsAnnotationLinksSeq& targets, const ::Ice::Context& __ctx)
    {
        addAllPixelsAnnotationLinkSet(targets, &__ctx);
    }
    
private:

    void addAllPixelsAnnotationLinkSet(const ::omero::model::PixelsAnnotationLinksSeq&, const ::Ice::Context*);
    
public:

    void removePixelsAnnotationLink(const ::omero::model::PixelsAnnotationLinkPtr& theTarget)
    {
        removePixelsAnnotationLink(theTarget, 0);
    }
    void removePixelsAnnotationLink(const ::omero::model::PixelsAnnotationLinkPtr& theTarget, const ::Ice::Context& __ctx)
    {
        removePixelsAnnotationLink(theTarget, &__ctx);
    }
    
private:

    void removePixelsAnnotationLink(const ::omero::model::PixelsAnnotationLinkPtr&, const ::Ice::Context*);
    
public:

    void removeAllPixelsAnnotationLinkSet(const ::omero::model::PixelsAnnotationLinksSeq& targets)
    {
        removeAllPixelsAnnotationLinkSet(targets, 0);
    }
    void removeAllPixelsAnnotationLinkSet(const ::omero::model::PixelsAnnotationLinksSeq& targets, const ::Ice::Context& __ctx)
    {
        removeAllPixelsAnnotationLinkSet(targets, &__ctx);
    }
    
private:

    void removeAllPixelsAnnotationLinkSet(const ::omero::model::PixelsAnnotationLinksSeq&, const ::Ice::Context*);
    
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

    void reloadAnnotationLinks(const ::omero::model::PixelsPtr& toCopy)
    {
        reloadAnnotationLinks(toCopy, 0);
    }
    void reloadAnnotationLinks(const ::omero::model::PixelsPtr& toCopy, const ::Ice::Context& __ctx)
    {
        reloadAnnotationLinks(toCopy, &__ctx);
    }
    
private:

    void reloadAnnotationLinks(const ::omero::model::PixelsPtr&, const ::Ice::Context*);
    
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

    ::omero::model::PixelsAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr& addition)
    {
        return linkAnnotation(addition, 0);
    }
    ::omero::model::PixelsAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr& addition, const ::Ice::Context& __ctx)
    {
        return linkAnnotation(addition, &__ctx);
    }
    
private:

    ::omero::model::PixelsAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);
    
public:

    void addPixelsAnnotationLinkToBoth(const ::omero::model::PixelsAnnotationLinkPtr& link, bool bothSides)
    {
        addPixelsAnnotationLinkToBoth(link, bothSides, 0);
    }
    void addPixelsAnnotationLinkToBoth(const ::omero::model::PixelsAnnotationLinkPtr& link, bool bothSides, const ::Ice::Context& __ctx)
    {
        addPixelsAnnotationLinkToBoth(link, bothSides, &__ctx);
    }
    
private:

    void addPixelsAnnotationLinkToBoth(const ::omero::model::PixelsAnnotationLinkPtr&, bool, const ::Ice::Context*);
    
public:

    ::omero::model::PixelsAnnotationLinksSeq findPixelsAnnotationLink(const ::omero::model::AnnotationPtr& removal)
    {
        return findPixelsAnnotationLink(removal, 0);
    }
    ::omero::model::PixelsAnnotationLinksSeq findPixelsAnnotationLink(const ::omero::model::AnnotationPtr& removal, const ::Ice::Context& __ctx)
    {
        return findPixelsAnnotationLink(removal, &__ctx);
    }
    
private:

    ::omero::model::PixelsAnnotationLinksSeq findPixelsAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);
    
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

    void removePixelsAnnotationLinkFromBoth(const ::omero::model::PixelsAnnotationLinkPtr& link, bool bothSides)
    {
        removePixelsAnnotationLinkFromBoth(link, bothSides, 0);
    }
    void removePixelsAnnotationLinkFromBoth(const ::omero::model::PixelsAnnotationLinkPtr& link, bool bothSides, const ::Ice::Context& __ctx)
    {
        removePixelsAnnotationLinkFromBoth(link, bothSides, &__ctx);
    }
    
private:

    void removePixelsAnnotationLinkFromBoth(const ::omero::model::PixelsAnnotationLinkPtr&, bool, const ::Ice::Context*);
    
public:

    ::omero::model::PixelsLinkedAnnotationSeq linkedAnnotationList()
    {
        return linkedAnnotationList(0);
    }
    ::omero::model::PixelsLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context& __ctx)
    {
        return linkedAnnotationList(&__ctx);
    }
    
private:

    ::omero::model::PixelsLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<Pixels> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pixels*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Pixels*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pixels> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pixels*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Pixels*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pixels> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pixels*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Pixels*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pixels> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pixels*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Pixels*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pixels> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pixels*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Pixels*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pixels> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pixels*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Pixels*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pixels> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pixels*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Pixels*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pixels> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pixels*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Pixels*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pixels> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pixels*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Pixels*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pixels> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pixels*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Pixels*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pixels> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pixels*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Pixels*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pixels> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pixels*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Pixels*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pixels> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pixels*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Pixels*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pixels> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pixels*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Pixels*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pixels> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pixels*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Pixels*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pixels> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pixels*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Pixels*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pixels> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pixels*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Pixels*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pixels> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pixels*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Pixels*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pixels> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pixels*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Pixels*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class Pixels : virtual public ::IceDelegate::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*) = 0;

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::ImagePtr getImage(const ::Ice::Context*) = 0;

    virtual void setImage(const ::omero::model::ImagePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::PixelsPtr getRelatedTo(const ::Ice::Context*) = 0;

    virtual void setRelatedTo(const ::omero::model::PixelsPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::PixelsTypePtr getPixelsType(const ::Ice::Context*) = 0;

    virtual void setPixelsType(const ::omero::model::PixelsTypePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RIntPtr getSignificantBits(const ::Ice::Context*) = 0;

    virtual void setSignificantBits(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RIntPtr getSizeX(const ::Ice::Context*) = 0;

    virtual void setSizeX(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RIntPtr getSizeY(const ::Ice::Context*) = 0;

    virtual void setSizeY(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RIntPtr getSizeZ(const ::Ice::Context*) = 0;

    virtual void setSizeZ(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RIntPtr getSizeC(const ::Ice::Context*) = 0;

    virtual void setSizeC(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RIntPtr getSizeT(const ::Ice::Context*) = 0;

    virtual void setSizeT(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getSha1(const ::Ice::Context*) = 0;

    virtual void setSha1(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::DimensionOrderPtr getDimensionOrder(const ::Ice::Context*) = 0;

    virtual void setDimensionOrder(const ::omero::model::DimensionOrderPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RDoublePtr getPhysicalSizeX(const ::Ice::Context*) = 0;

    virtual void setPhysicalSizeX(const ::omero::RDoublePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RDoublePtr getPhysicalSizeY(const ::Ice::Context*) = 0;

    virtual void setPhysicalSizeY(const ::omero::RDoublePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RDoublePtr getPhysicalSizeZ(const ::Ice::Context*) = 0;

    virtual void setPhysicalSizeZ(const ::omero::RDoublePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RIntPtr getWaveStart(const ::Ice::Context*) = 0;

    virtual void setWaveStart(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RIntPtr getWaveIncrement(const ::Ice::Context*) = 0;

    virtual void setWaveIncrement(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RDoublePtr getTimeIncrement(const ::Ice::Context*) = 0;

    virtual void setTimeIncrement(const ::omero::RDoublePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getMethodology(const ::Ice::Context*) = 0;

    virtual void setMethodology(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual void unloadPlaneInfo(const ::Ice::Context*) = 0;

    virtual ::Ice::Int sizeOfPlaneInfo(const ::Ice::Context*) = 0;

    virtual ::omero::model::PixelsPlaneInfoSeq copyPlaneInfo(const ::Ice::Context*) = 0;

    virtual void addPlaneInfo(const ::omero::model::PlaneInfoPtr&, const ::Ice::Context*) = 0;

    virtual void addAllPlaneInfoSet(const ::omero::model::PixelsPlaneInfoSeq&, const ::Ice::Context*) = 0;

    virtual void removePlaneInfo(const ::omero::model::PlaneInfoPtr&, const ::Ice::Context*) = 0;

    virtual void removeAllPlaneInfoSet(const ::omero::model::PixelsPlaneInfoSeq&, const ::Ice::Context*) = 0;

    virtual void clearPlaneInfo(const ::Ice::Context*) = 0;

    virtual void reloadPlaneInfo(const ::omero::model::PixelsPtr&, const ::Ice::Context*) = 0;

    virtual void unloadPixelsFileMaps(const ::Ice::Context*) = 0;

    virtual ::Ice::Int sizeOfPixelsFileMaps(const ::Ice::Context*) = 0;

    virtual ::omero::model::PixelsPixelsFileMapsSeq copyPixelsFileMaps(const ::Ice::Context*) = 0;

    virtual void addPixelsOriginalFileMap(const ::omero::model::PixelsOriginalFileMapPtr&, const ::Ice::Context*) = 0;

    virtual void addAllPixelsOriginalFileMapSet(const ::omero::model::PixelsPixelsFileMapsSeq&, const ::Ice::Context*) = 0;

    virtual void removePixelsOriginalFileMap(const ::omero::model::PixelsOriginalFileMapPtr&, const ::Ice::Context*) = 0;

    virtual void removeAllPixelsOriginalFileMapSet(const ::omero::model::PixelsPixelsFileMapsSeq&, const ::Ice::Context*) = 0;

    virtual void clearPixelsFileMaps(const ::Ice::Context*) = 0;

    virtual void reloadPixelsFileMaps(const ::omero::model::PixelsPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::sys::CountMap getPixelsFileMapsCountPerOwner(const ::Ice::Context*) = 0;

    virtual ::omero::model::PixelsOriginalFileMapPtr linkOriginalFile(const ::omero::model::OriginalFilePtr&, const ::Ice::Context*) = 0;

    virtual void addPixelsOriginalFileMapToBoth(const ::omero::model::PixelsOriginalFileMapPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::PixelsPixelsFileMapsSeq findPixelsOriginalFileMap(const ::omero::model::OriginalFilePtr&, const ::Ice::Context*) = 0;

    virtual void unlinkOriginalFile(const ::omero::model::OriginalFilePtr&, const ::Ice::Context*) = 0;

    virtual void removePixelsOriginalFileMapFromBoth(const ::omero::model::PixelsOriginalFileMapPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::PixelsLinkedOriginalFileSeq linkedOriginalFileList(const ::Ice::Context*) = 0;

    virtual void unloadChannels(const ::Ice::Context*) = 0;

    virtual ::Ice::Int sizeOfChannels(const ::Ice::Context*) = 0;

    virtual ::omero::model::PixelsChannelsSeq copyChannels(const ::Ice::Context*) = 0;

    virtual void addChannel(const ::omero::model::ChannelPtr&, const ::Ice::Context*) = 0;

    virtual void addAllChannelSet(const ::omero::model::PixelsChannelsSeq&, const ::Ice::Context*) = 0;

    virtual void removeChannel(const ::omero::model::ChannelPtr&, const ::Ice::Context*) = 0;

    virtual void removeAllChannelSet(const ::omero::model::PixelsChannelsSeq&, const ::Ice::Context*) = 0;

    virtual void clearChannels(const ::Ice::Context*) = 0;

    virtual void reloadChannels(const ::omero::model::PixelsPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::ChannelPtr getChannel(::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::omero::model::ChannelPtr setChannel(::Ice::Int, const ::omero::model::ChannelPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::ChannelPtr getPrimaryChannel(const ::Ice::Context*) = 0;

    virtual ::omero::model::ChannelPtr setPrimaryChannel(const ::omero::model::ChannelPtr&, const ::Ice::Context*) = 0;

    virtual void unloadSettings(const ::Ice::Context*) = 0;

    virtual ::Ice::Int sizeOfSettings(const ::Ice::Context*) = 0;

    virtual ::omero::model::PixelsSettingsSeq copySettings(const ::Ice::Context*) = 0;

    virtual void addRenderingDef(const ::omero::model::RenderingDefPtr&, const ::Ice::Context*) = 0;

    virtual void addAllRenderingDefSet(const ::omero::model::PixelsSettingsSeq&, const ::Ice::Context*) = 0;

    virtual void removeRenderingDef(const ::omero::model::RenderingDefPtr&, const ::Ice::Context*) = 0;

    virtual void removeAllRenderingDefSet(const ::omero::model::PixelsSettingsSeq&, const ::Ice::Context*) = 0;

    virtual void clearSettings(const ::Ice::Context*) = 0;

    virtual void reloadSettings(const ::omero::model::PixelsPtr&, const ::Ice::Context*) = 0;

    virtual void unloadThumbnails(const ::Ice::Context*) = 0;

    virtual ::Ice::Int sizeOfThumbnails(const ::Ice::Context*) = 0;

    virtual ::omero::model::PixelsThumbnailsSeq copyThumbnails(const ::Ice::Context*) = 0;

    virtual void addThumbnail(const ::omero::model::ThumbnailPtr&, const ::Ice::Context*) = 0;

    virtual void addAllThumbnailSet(const ::omero::model::PixelsThumbnailsSeq&, const ::Ice::Context*) = 0;

    virtual void removeThumbnail(const ::omero::model::ThumbnailPtr&, const ::Ice::Context*) = 0;

    virtual void removeAllThumbnailSet(const ::omero::model::PixelsThumbnailsSeq&, const ::Ice::Context*) = 0;

    virtual void clearThumbnails(const ::Ice::Context*) = 0;

    virtual void reloadThumbnails(const ::omero::model::PixelsPtr&, const ::Ice::Context*) = 0;

    virtual void unloadAnnotationLinks(const ::Ice::Context*) = 0;

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Context*) = 0;

    virtual ::omero::model::PixelsAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*) = 0;

    virtual void addPixelsAnnotationLink(const ::omero::model::PixelsAnnotationLinkPtr&, const ::Ice::Context*) = 0;

    virtual void addAllPixelsAnnotationLinkSet(const ::omero::model::PixelsAnnotationLinksSeq&, const ::Ice::Context*) = 0;

    virtual void removePixelsAnnotationLink(const ::omero::model::PixelsAnnotationLinkPtr&, const ::Ice::Context*) = 0;

    virtual void removeAllPixelsAnnotationLinkSet(const ::omero::model::PixelsAnnotationLinksSeq&, const ::Ice::Context*) = 0;

    virtual void clearAnnotationLinks(const ::Ice::Context*) = 0;

    virtual void reloadAnnotationLinks(const ::omero::model::PixelsPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Context*) = 0;

    virtual ::omero::model::PixelsAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*) = 0;

    virtual void addPixelsAnnotationLinkToBoth(const ::omero::model::PixelsAnnotationLinkPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::PixelsAnnotationLinksSeq findPixelsAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*) = 0;

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*) = 0;

    virtual void removePixelsAnnotationLinkFromBoth(const ::omero::model::PixelsAnnotationLinkPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::PixelsLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*) = 0;
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

class Pixels : virtual public ::IceDelegate::omero::model::Pixels,
               virtual public ::IceDelegateM::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::model::ImagePtr getImage(const ::Ice::Context*);

    virtual void setImage(const ::omero::model::ImagePtr&, const ::Ice::Context*);

    virtual ::omero::model::PixelsPtr getRelatedTo(const ::Ice::Context*);

    virtual void setRelatedTo(const ::omero::model::PixelsPtr&, const ::Ice::Context*);

    virtual ::omero::model::PixelsTypePtr getPixelsType(const ::Ice::Context*);

    virtual void setPixelsType(const ::omero::model::PixelsTypePtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getSignificantBits(const ::Ice::Context*);

    virtual void setSignificantBits(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getSizeX(const ::Ice::Context*);

    virtual void setSizeX(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getSizeY(const ::Ice::Context*);

    virtual void setSizeY(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getSizeZ(const ::Ice::Context*);

    virtual void setSizeZ(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getSizeC(const ::Ice::Context*);

    virtual void setSizeC(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getSizeT(const ::Ice::Context*);

    virtual void setSizeT(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getSha1(const ::Ice::Context*);

    virtual void setSha1(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::model::DimensionOrderPtr getDimensionOrder(const ::Ice::Context*);

    virtual void setDimensionOrder(const ::omero::model::DimensionOrderPtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getPhysicalSizeX(const ::Ice::Context*);

    virtual void setPhysicalSizeX(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getPhysicalSizeY(const ::Ice::Context*);

    virtual void setPhysicalSizeY(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getPhysicalSizeZ(const ::Ice::Context*);

    virtual void setPhysicalSizeZ(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getWaveStart(const ::Ice::Context*);

    virtual void setWaveStart(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getWaveIncrement(const ::Ice::Context*);

    virtual void setWaveIncrement(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getTimeIncrement(const ::Ice::Context*);

    virtual void setTimeIncrement(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getMethodology(const ::Ice::Context*);

    virtual void setMethodology(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual void unloadPlaneInfo(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfPlaneInfo(const ::Ice::Context*);

    virtual ::omero::model::PixelsPlaneInfoSeq copyPlaneInfo(const ::Ice::Context*);

    virtual void addPlaneInfo(const ::omero::model::PlaneInfoPtr&, const ::Ice::Context*);

    virtual void addAllPlaneInfoSet(const ::omero::model::PixelsPlaneInfoSeq&, const ::Ice::Context*);

    virtual void removePlaneInfo(const ::omero::model::PlaneInfoPtr&, const ::Ice::Context*);

    virtual void removeAllPlaneInfoSet(const ::omero::model::PixelsPlaneInfoSeq&, const ::Ice::Context*);

    virtual void clearPlaneInfo(const ::Ice::Context*);

    virtual void reloadPlaneInfo(const ::omero::model::PixelsPtr&, const ::Ice::Context*);

    virtual void unloadPixelsFileMaps(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfPixelsFileMaps(const ::Ice::Context*);

    virtual ::omero::model::PixelsPixelsFileMapsSeq copyPixelsFileMaps(const ::Ice::Context*);

    virtual void addPixelsOriginalFileMap(const ::omero::model::PixelsOriginalFileMapPtr&, const ::Ice::Context*);

    virtual void addAllPixelsOriginalFileMapSet(const ::omero::model::PixelsPixelsFileMapsSeq&, const ::Ice::Context*);

    virtual void removePixelsOriginalFileMap(const ::omero::model::PixelsOriginalFileMapPtr&, const ::Ice::Context*);

    virtual void removeAllPixelsOriginalFileMapSet(const ::omero::model::PixelsPixelsFileMapsSeq&, const ::Ice::Context*);

    virtual void clearPixelsFileMaps(const ::Ice::Context*);

    virtual void reloadPixelsFileMaps(const ::omero::model::PixelsPtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getPixelsFileMapsCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::PixelsOriginalFileMapPtr linkOriginalFile(const ::omero::model::OriginalFilePtr&, const ::Ice::Context*);

    virtual void addPixelsOriginalFileMapToBoth(const ::omero::model::PixelsOriginalFileMapPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::PixelsPixelsFileMapsSeq findPixelsOriginalFileMap(const ::omero::model::OriginalFilePtr&, const ::Ice::Context*);

    virtual void unlinkOriginalFile(const ::omero::model::OriginalFilePtr&, const ::Ice::Context*);

    virtual void removePixelsOriginalFileMapFromBoth(const ::omero::model::PixelsOriginalFileMapPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::PixelsLinkedOriginalFileSeq linkedOriginalFileList(const ::Ice::Context*);

    virtual void unloadChannels(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfChannels(const ::Ice::Context*);

    virtual ::omero::model::PixelsChannelsSeq copyChannels(const ::Ice::Context*);

    virtual void addChannel(const ::omero::model::ChannelPtr&, const ::Ice::Context*);

    virtual void addAllChannelSet(const ::omero::model::PixelsChannelsSeq&, const ::Ice::Context*);

    virtual void removeChannel(const ::omero::model::ChannelPtr&, const ::Ice::Context*);

    virtual void removeAllChannelSet(const ::omero::model::PixelsChannelsSeq&, const ::Ice::Context*);

    virtual void clearChannels(const ::Ice::Context*);

    virtual void reloadChannels(const ::omero::model::PixelsPtr&, const ::Ice::Context*);

    virtual ::omero::model::ChannelPtr getChannel(::Ice::Int, const ::Ice::Context*);

    virtual ::omero::model::ChannelPtr setChannel(::Ice::Int, const ::omero::model::ChannelPtr&, const ::Ice::Context*);

    virtual ::omero::model::ChannelPtr getPrimaryChannel(const ::Ice::Context*);

    virtual ::omero::model::ChannelPtr setPrimaryChannel(const ::omero::model::ChannelPtr&, const ::Ice::Context*);

    virtual void unloadSettings(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfSettings(const ::Ice::Context*);

    virtual ::omero::model::PixelsSettingsSeq copySettings(const ::Ice::Context*);

    virtual void addRenderingDef(const ::omero::model::RenderingDefPtr&, const ::Ice::Context*);

    virtual void addAllRenderingDefSet(const ::omero::model::PixelsSettingsSeq&, const ::Ice::Context*);

    virtual void removeRenderingDef(const ::omero::model::RenderingDefPtr&, const ::Ice::Context*);

    virtual void removeAllRenderingDefSet(const ::omero::model::PixelsSettingsSeq&, const ::Ice::Context*);

    virtual void clearSettings(const ::Ice::Context*);

    virtual void reloadSettings(const ::omero::model::PixelsPtr&, const ::Ice::Context*);

    virtual void unloadThumbnails(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfThumbnails(const ::Ice::Context*);

    virtual ::omero::model::PixelsThumbnailsSeq copyThumbnails(const ::Ice::Context*);

    virtual void addThumbnail(const ::omero::model::ThumbnailPtr&, const ::Ice::Context*);

    virtual void addAllThumbnailSet(const ::omero::model::PixelsThumbnailsSeq&, const ::Ice::Context*);

    virtual void removeThumbnail(const ::omero::model::ThumbnailPtr&, const ::Ice::Context*);

    virtual void removeAllThumbnailSet(const ::omero::model::PixelsThumbnailsSeq&, const ::Ice::Context*);

    virtual void clearThumbnails(const ::Ice::Context*);

    virtual void reloadThumbnails(const ::omero::model::PixelsPtr&, const ::Ice::Context*);

    virtual void unloadAnnotationLinks(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Context*);

    virtual ::omero::model::PixelsAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*);

    virtual void addPixelsAnnotationLink(const ::omero::model::PixelsAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void addAllPixelsAnnotationLinkSet(const ::omero::model::PixelsAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void removePixelsAnnotationLink(const ::omero::model::PixelsAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void removeAllPixelsAnnotationLinkSet(const ::omero::model::PixelsAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void clearAnnotationLinks(const ::Ice::Context*);

    virtual void reloadAnnotationLinks(const ::omero::model::PixelsPtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::PixelsAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void addPixelsAnnotationLinkToBoth(const ::omero::model::PixelsAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::PixelsAnnotationLinksSeq findPixelsAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void removePixelsAnnotationLinkFromBoth(const ::omero::model::PixelsAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::PixelsLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*);
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

class Pixels : virtual public ::IceDelegate::omero::model::Pixels,
               virtual public ::IceDelegateD::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::model::ImagePtr getImage(const ::Ice::Context*);

    virtual void setImage(const ::omero::model::ImagePtr&, const ::Ice::Context*);

    virtual ::omero::model::PixelsPtr getRelatedTo(const ::Ice::Context*);

    virtual void setRelatedTo(const ::omero::model::PixelsPtr&, const ::Ice::Context*);

    virtual ::omero::model::PixelsTypePtr getPixelsType(const ::Ice::Context*);

    virtual void setPixelsType(const ::omero::model::PixelsTypePtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getSignificantBits(const ::Ice::Context*);

    virtual void setSignificantBits(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getSizeX(const ::Ice::Context*);

    virtual void setSizeX(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getSizeY(const ::Ice::Context*);

    virtual void setSizeY(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getSizeZ(const ::Ice::Context*);

    virtual void setSizeZ(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getSizeC(const ::Ice::Context*);

    virtual void setSizeC(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getSizeT(const ::Ice::Context*);

    virtual void setSizeT(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getSha1(const ::Ice::Context*);

    virtual void setSha1(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::model::DimensionOrderPtr getDimensionOrder(const ::Ice::Context*);

    virtual void setDimensionOrder(const ::omero::model::DimensionOrderPtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getPhysicalSizeX(const ::Ice::Context*);

    virtual void setPhysicalSizeX(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getPhysicalSizeY(const ::Ice::Context*);

    virtual void setPhysicalSizeY(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getPhysicalSizeZ(const ::Ice::Context*);

    virtual void setPhysicalSizeZ(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getWaveStart(const ::Ice::Context*);

    virtual void setWaveStart(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getWaveIncrement(const ::Ice::Context*);

    virtual void setWaveIncrement(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getTimeIncrement(const ::Ice::Context*);

    virtual void setTimeIncrement(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getMethodology(const ::Ice::Context*);

    virtual void setMethodology(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual void unloadPlaneInfo(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfPlaneInfo(const ::Ice::Context*);

    virtual ::omero::model::PixelsPlaneInfoSeq copyPlaneInfo(const ::Ice::Context*);

    virtual void addPlaneInfo(const ::omero::model::PlaneInfoPtr&, const ::Ice::Context*);

    virtual void addAllPlaneInfoSet(const ::omero::model::PixelsPlaneInfoSeq&, const ::Ice::Context*);

    virtual void removePlaneInfo(const ::omero::model::PlaneInfoPtr&, const ::Ice::Context*);

    virtual void removeAllPlaneInfoSet(const ::omero::model::PixelsPlaneInfoSeq&, const ::Ice::Context*);

    virtual void clearPlaneInfo(const ::Ice::Context*);

    virtual void reloadPlaneInfo(const ::omero::model::PixelsPtr&, const ::Ice::Context*);

    virtual void unloadPixelsFileMaps(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfPixelsFileMaps(const ::Ice::Context*);

    virtual ::omero::model::PixelsPixelsFileMapsSeq copyPixelsFileMaps(const ::Ice::Context*);

    virtual void addPixelsOriginalFileMap(const ::omero::model::PixelsOriginalFileMapPtr&, const ::Ice::Context*);

    virtual void addAllPixelsOriginalFileMapSet(const ::omero::model::PixelsPixelsFileMapsSeq&, const ::Ice::Context*);

    virtual void removePixelsOriginalFileMap(const ::omero::model::PixelsOriginalFileMapPtr&, const ::Ice::Context*);

    virtual void removeAllPixelsOriginalFileMapSet(const ::omero::model::PixelsPixelsFileMapsSeq&, const ::Ice::Context*);

    virtual void clearPixelsFileMaps(const ::Ice::Context*);

    virtual void reloadPixelsFileMaps(const ::omero::model::PixelsPtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getPixelsFileMapsCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::PixelsOriginalFileMapPtr linkOriginalFile(const ::omero::model::OriginalFilePtr&, const ::Ice::Context*);

    virtual void addPixelsOriginalFileMapToBoth(const ::omero::model::PixelsOriginalFileMapPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::PixelsPixelsFileMapsSeq findPixelsOriginalFileMap(const ::omero::model::OriginalFilePtr&, const ::Ice::Context*);

    virtual void unlinkOriginalFile(const ::omero::model::OriginalFilePtr&, const ::Ice::Context*);

    virtual void removePixelsOriginalFileMapFromBoth(const ::omero::model::PixelsOriginalFileMapPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::PixelsLinkedOriginalFileSeq linkedOriginalFileList(const ::Ice::Context*);

    virtual void unloadChannels(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfChannels(const ::Ice::Context*);

    virtual ::omero::model::PixelsChannelsSeq copyChannels(const ::Ice::Context*);

    virtual void addChannel(const ::omero::model::ChannelPtr&, const ::Ice::Context*);

    virtual void addAllChannelSet(const ::omero::model::PixelsChannelsSeq&, const ::Ice::Context*);

    virtual void removeChannel(const ::omero::model::ChannelPtr&, const ::Ice::Context*);

    virtual void removeAllChannelSet(const ::omero::model::PixelsChannelsSeq&, const ::Ice::Context*);

    virtual void clearChannels(const ::Ice::Context*);

    virtual void reloadChannels(const ::omero::model::PixelsPtr&, const ::Ice::Context*);

    virtual ::omero::model::ChannelPtr getChannel(::Ice::Int, const ::Ice::Context*);

    virtual ::omero::model::ChannelPtr setChannel(::Ice::Int, const ::omero::model::ChannelPtr&, const ::Ice::Context*);

    virtual ::omero::model::ChannelPtr getPrimaryChannel(const ::Ice::Context*);

    virtual ::omero::model::ChannelPtr setPrimaryChannel(const ::omero::model::ChannelPtr&, const ::Ice::Context*);

    virtual void unloadSettings(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfSettings(const ::Ice::Context*);

    virtual ::omero::model::PixelsSettingsSeq copySettings(const ::Ice::Context*);

    virtual void addRenderingDef(const ::omero::model::RenderingDefPtr&, const ::Ice::Context*);

    virtual void addAllRenderingDefSet(const ::omero::model::PixelsSettingsSeq&, const ::Ice::Context*);

    virtual void removeRenderingDef(const ::omero::model::RenderingDefPtr&, const ::Ice::Context*);

    virtual void removeAllRenderingDefSet(const ::omero::model::PixelsSettingsSeq&, const ::Ice::Context*);

    virtual void clearSettings(const ::Ice::Context*);

    virtual void reloadSettings(const ::omero::model::PixelsPtr&, const ::Ice::Context*);

    virtual void unloadThumbnails(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfThumbnails(const ::Ice::Context*);

    virtual ::omero::model::PixelsThumbnailsSeq copyThumbnails(const ::Ice::Context*);

    virtual void addThumbnail(const ::omero::model::ThumbnailPtr&, const ::Ice::Context*);

    virtual void addAllThumbnailSet(const ::omero::model::PixelsThumbnailsSeq&, const ::Ice::Context*);

    virtual void removeThumbnail(const ::omero::model::ThumbnailPtr&, const ::Ice::Context*);

    virtual void removeAllThumbnailSet(const ::omero::model::PixelsThumbnailsSeq&, const ::Ice::Context*);

    virtual void clearThumbnails(const ::Ice::Context*);

    virtual void reloadThumbnails(const ::omero::model::PixelsPtr&, const ::Ice::Context*);

    virtual void unloadAnnotationLinks(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Context*);

    virtual ::omero::model::PixelsAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*);

    virtual void addPixelsAnnotationLink(const ::omero::model::PixelsAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void addAllPixelsAnnotationLinkSet(const ::omero::model::PixelsAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void removePixelsAnnotationLink(const ::omero::model::PixelsAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void removeAllPixelsAnnotationLinkSet(const ::omero::model::PixelsAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void clearAnnotationLinks(const ::Ice::Context*);

    virtual void reloadAnnotationLinks(const ::omero::model::PixelsPtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::PixelsAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void addPixelsAnnotationLinkToBoth(const ::omero::model::PixelsAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::PixelsAnnotationLinksSeq findPixelsAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void removePixelsAnnotationLinkFromBoth(const ::omero::model::PixelsAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::PixelsLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace model
{

class Pixels : virtual public ::omero::model::IObject
{
public:

    typedef PixelsPrx ProxyType;
    typedef PixelsPtr PointerType;
    
    Pixels() {}
    Pixels(const ::omero::RLongPtr&, const ::omero::model::DetailsPtr&, bool, const ::omero::RIntPtr&, const ::omero::model::ImagePtr&, const ::omero::model::PixelsPtr&, const ::omero::model::PixelsTypePtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RStringPtr&, const ::omero::model::DimensionOrderPtr&, const ::omero::RDoublePtr&, const ::omero::RDoublePtr&, const ::omero::RDoublePtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RDoublePtr&, const ::omero::RStringPtr&, const ::omero::model::PixelsPlaneInfoSeq&, bool, const ::omero::model::PixelsPixelsFileMapsSeq&, bool, const ::omero::sys::CountMap&, const ::omero::model::PixelsChannelsSeq&, bool, const ::omero::model::PixelsSettingsSeq&, bool, const ::omero::model::PixelsThumbnailsSeq&, bool, const ::omero::model::PixelsAnnotationLinksSeq&, bool, const ::omero::sys::CountMap&);
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

    virtual ::omero::model::ImagePtr getImage(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getImage(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setImage(const ::omero::model::ImagePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setImage(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::PixelsPtr getRelatedTo(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getRelatedTo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setRelatedTo(const ::omero::model::PixelsPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setRelatedTo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::PixelsTypePtr getPixelsType(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getPixelsType(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setPixelsType(const ::omero::model::PixelsTypePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setPixelsType(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RIntPtr getSignificantBits(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getSignificantBits(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setSignificantBits(const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setSignificantBits(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RIntPtr getSizeX(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getSizeX(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setSizeX(const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setSizeX(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RIntPtr getSizeY(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getSizeY(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setSizeY(const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setSizeY(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RIntPtr getSizeZ(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getSizeZ(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setSizeZ(const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setSizeZ(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RIntPtr getSizeC(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getSizeC(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setSizeC(const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setSizeC(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RIntPtr getSizeT(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getSizeT(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setSizeT(const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setSizeT(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getSha1(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getSha1(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setSha1(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setSha1(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::DimensionOrderPtr getDimensionOrder(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getDimensionOrder(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setDimensionOrder(const ::omero::model::DimensionOrderPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setDimensionOrder(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RDoublePtr getPhysicalSizeX(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getPhysicalSizeX(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setPhysicalSizeX(const ::omero::RDoublePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setPhysicalSizeX(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RDoublePtr getPhysicalSizeY(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getPhysicalSizeY(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setPhysicalSizeY(const ::omero::RDoublePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setPhysicalSizeY(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RDoublePtr getPhysicalSizeZ(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getPhysicalSizeZ(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setPhysicalSizeZ(const ::omero::RDoublePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setPhysicalSizeZ(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RIntPtr getWaveStart(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getWaveStart(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setWaveStart(const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setWaveStart(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RIntPtr getWaveIncrement(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getWaveIncrement(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setWaveIncrement(const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setWaveIncrement(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RDoublePtr getTimeIncrement(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getTimeIncrement(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setTimeIncrement(const ::omero::RDoublePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setTimeIncrement(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getMethodology(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getMethodology(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setMethodology(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setMethodology(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unloadPlaneInfo(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unloadPlaneInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int sizeOfPlaneInfo(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sizeOfPlaneInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::PixelsPlaneInfoSeq copyPlaneInfo(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copyPlaneInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addPlaneInfo(const ::omero::model::PlaneInfoPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addPlaneInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAllPlaneInfoSet(const ::omero::model::PixelsPlaneInfoSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAllPlaneInfoSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removePlaneInfo(const ::omero::model::PlaneInfoPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removePlaneInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeAllPlaneInfoSet(const ::omero::model::PixelsPlaneInfoSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeAllPlaneInfoSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void clearPlaneInfo(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___clearPlaneInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void reloadPlaneInfo(const ::omero::model::PixelsPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___reloadPlaneInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unloadPixelsFileMaps(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unloadPixelsFileMaps(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int sizeOfPixelsFileMaps(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sizeOfPixelsFileMaps(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::PixelsPixelsFileMapsSeq copyPixelsFileMaps(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copyPixelsFileMaps(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addPixelsOriginalFileMap(const ::omero::model::PixelsOriginalFileMapPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addPixelsOriginalFileMap(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAllPixelsOriginalFileMapSet(const ::omero::model::PixelsPixelsFileMapsSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAllPixelsOriginalFileMapSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removePixelsOriginalFileMap(const ::omero::model::PixelsOriginalFileMapPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removePixelsOriginalFileMap(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeAllPixelsOriginalFileMapSet(const ::omero::model::PixelsPixelsFileMapsSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeAllPixelsOriginalFileMapSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void clearPixelsFileMaps(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___clearPixelsFileMaps(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void reloadPixelsFileMaps(const ::omero::model::PixelsPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___reloadPixelsFileMaps(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::sys::CountMap getPixelsFileMapsCountPerOwner(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getPixelsFileMapsCountPerOwner(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::PixelsOriginalFileMapPtr linkOriginalFile(const ::omero::model::OriginalFilePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkOriginalFile(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addPixelsOriginalFileMapToBoth(const ::omero::model::PixelsOriginalFileMapPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addPixelsOriginalFileMapToBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::PixelsPixelsFileMapsSeq findPixelsOriginalFileMap(const ::omero::model::OriginalFilePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___findPixelsOriginalFileMap(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unlinkOriginalFile(const ::omero::model::OriginalFilePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unlinkOriginalFile(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removePixelsOriginalFileMapFromBoth(const ::omero::model::PixelsOriginalFileMapPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removePixelsOriginalFileMapFromBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::PixelsLinkedOriginalFileSeq linkedOriginalFileList(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkedOriginalFileList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unloadChannels(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unloadChannels(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int sizeOfChannels(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sizeOfChannels(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::PixelsChannelsSeq copyChannels(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copyChannels(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addChannel(const ::omero::model::ChannelPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addChannel(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAllChannelSet(const ::omero::model::PixelsChannelsSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAllChannelSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeChannel(const ::omero::model::ChannelPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeChannel(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeAllChannelSet(const ::omero::model::PixelsChannelsSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeAllChannelSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void clearChannels(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___clearChannels(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void reloadChannels(const ::omero::model::PixelsPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___reloadChannels(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ChannelPtr getChannel(::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getChannel(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ChannelPtr setChannel(::Ice::Int, const ::omero::model::ChannelPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setChannel(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ChannelPtr getPrimaryChannel(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getPrimaryChannel(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ChannelPtr setPrimaryChannel(const ::omero::model::ChannelPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setPrimaryChannel(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unloadSettings(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unloadSettings(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int sizeOfSettings(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sizeOfSettings(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::PixelsSettingsSeq copySettings(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copySettings(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addRenderingDef(const ::omero::model::RenderingDefPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addRenderingDef(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAllRenderingDefSet(const ::omero::model::PixelsSettingsSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAllRenderingDefSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeRenderingDef(const ::omero::model::RenderingDefPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeRenderingDef(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeAllRenderingDefSet(const ::omero::model::PixelsSettingsSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeAllRenderingDefSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void clearSettings(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___clearSettings(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void reloadSettings(const ::omero::model::PixelsPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___reloadSettings(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unloadThumbnails(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unloadThumbnails(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int sizeOfThumbnails(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sizeOfThumbnails(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::PixelsThumbnailsSeq copyThumbnails(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copyThumbnails(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addThumbnail(const ::omero::model::ThumbnailPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addThumbnail(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAllThumbnailSet(const ::omero::model::PixelsThumbnailsSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAllThumbnailSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeThumbnail(const ::omero::model::ThumbnailPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeThumbnail(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeAllThumbnailSet(const ::omero::model::PixelsThumbnailsSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeAllThumbnailSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void clearThumbnails(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___clearThumbnails(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void reloadThumbnails(const ::omero::model::PixelsPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___reloadThumbnails(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unloadAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unloadAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sizeOfAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::PixelsAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copyAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addPixelsAnnotationLink(const ::omero::model::PixelsAnnotationLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addPixelsAnnotationLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAllPixelsAnnotationLinkSet(const ::omero::model::PixelsAnnotationLinksSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAllPixelsAnnotationLinkSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removePixelsAnnotationLink(const ::omero::model::PixelsAnnotationLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removePixelsAnnotationLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeAllPixelsAnnotationLinkSet(const ::omero::model::PixelsAnnotationLinksSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeAllPixelsAnnotationLinkSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void clearAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___clearAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void reloadAnnotationLinks(const ::omero::model::PixelsPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___reloadAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getAnnotationLinksCountPerOwner(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::PixelsAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkAnnotation(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addPixelsAnnotationLinkToBoth(const ::omero::model::PixelsAnnotationLinkPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addPixelsAnnotationLinkToBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::PixelsAnnotationLinksSeq findPixelsAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___findPixelsAnnotationLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unlinkAnnotation(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removePixelsAnnotationLinkFromBoth(const ::omero::model::PixelsAnnotationLinkPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removePixelsAnnotationLinkFromBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::PixelsLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkedAnnotationList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

protected:

    ::omero::RIntPtr version;

    ::omero::model::ImagePtr image;

    ::omero::model::PixelsPtr relatedTo;

    ::omero::model::PixelsTypePtr pixelsType;

    ::omero::RIntPtr significantBits;

    ::omero::RIntPtr sizeX;

    ::omero::RIntPtr sizeY;

    ::omero::RIntPtr sizeZ;

    ::omero::RIntPtr sizeC;

    ::omero::RIntPtr sizeT;

    ::omero::RStringPtr sha1;

    ::omero::model::DimensionOrderPtr dimensionOrder;

    ::omero::RDoublePtr physicalSizeX;

    ::omero::RDoublePtr physicalSizeY;

    ::omero::RDoublePtr physicalSizeZ;

    ::omero::RIntPtr waveStart;

    ::omero::RIntPtr waveIncrement;

    ::omero::RDoublePtr timeIncrement;

    ::omero::RStringPtr methodology;

    ::omero::model::PixelsPlaneInfoSeq planeInfoSeq;

    bool planeInfoLoaded;

    ::omero::model::PixelsPixelsFileMapsSeq pixelsFileMapsSeq;

    bool pixelsFileMapsLoaded;

    ::omero::sys::CountMap pixelsFileMapsCountPerOwner;

    ::omero::model::PixelsChannelsSeq channelsSeq;

    bool channelsLoaded;

    ::omero::model::PixelsSettingsSeq settingsSeq;

    bool settingsLoaded;

    ::omero::model::PixelsThumbnailsSeq thumbnailsSeq;

    bool thumbnailsLoaded;

    ::omero::model::PixelsAnnotationLinksSeq annotationLinksSeq;

    bool annotationLinksLoaded;

    ::omero::sys::CountMap annotationLinksCountPerOwner;
};

}

}

#endif
