// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `Gateway.ice'

#ifndef __omero_api__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_api_Gateway_h__
#define __omero_api__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_api_Gateway_h__

#include <Ice/LocalObjectF.h>
#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
#include <Ice/Proxy.h>
#include <Ice/Object.h>
#include <Ice/Outgoing.h>
#include <Ice/OutgoingAsync.h>
#include <Ice/Incoming.h>
#include <Ice/IncomingAsync.h>
#include <Ice/Direct.h>
#include <Ice/UserExceptionFactory.h>
#include <Ice/FactoryTable.h>
#include <Ice/StreamF.h>
#include <omero/Collections.h>
#include <omero/ServicesF.h>
#include <omero/ServerErrors.h>
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

namespace api
{

class BufferedImage;

class Gateway;

}

}

}

namespace omero
{

namespace api
{

class BufferedImage;
bool operator==(const BufferedImage&, const BufferedImage&);
bool operator<(const BufferedImage&, const BufferedImage&);

class Gateway;
bool operator==(const Gateway&, const Gateway&);
bool operator<(const Gateway&, const Gateway&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::api::BufferedImage*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::api::BufferedImage*);

::Ice::Object* upCast(::omero::api::Gateway*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::api::Gateway*);

}

namespace omero
{

namespace api
{

typedef ::IceInternal::Handle< ::omero::api::BufferedImage> BufferedImagePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::api::BufferedImage> BufferedImagePrx;

void __read(::IceInternal::BasicStream*, BufferedImagePrx&);
void __patch__BufferedImagePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::api::Gateway> GatewayPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::api::Gateway> GatewayPrx;

void __read(::IceInternal::BasicStream*, GatewayPrx&);
void __patch__GatewayPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace omero
{

namespace api
{

enum ContainerClass
{
    Category,
    CategoryGroup,
    Project,
    Dataset,
    Image
};

void __write(::IceInternal::BasicStream*, ContainerClass);
void __read(::IceInternal::BasicStream*, ContainerClass&);

}

}

namespace omero
{

namespace api
{

class AMI_Gateway_getProjects : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::ProjectList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::GatewayPrx&, const ::omero::api::LongList&, bool, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Gateway_getProjects> AMI_Gateway_getProjectsPtr;

class AMI_Gateway_getDatasets : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::DatasetList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::GatewayPrx&, const ::omero::api::LongList&, bool, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Gateway_getDatasets> AMI_Gateway_getDatasetsPtr;

class AMI_Gateway_getDataset : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::model::DatasetPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::GatewayPrx&, ::Ice::Long, bool, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Gateway_getDataset> AMI_Gateway_getDatasetPtr;

class AMI_Gateway_getPixelsFromImage : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::PixelsList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::GatewayPrx&, ::Ice::Long, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Gateway_getPixelsFromImage> AMI_Gateway_getPixelsFromImagePtr;

class AMI_Gateway_getImage : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::model::ImagePtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::GatewayPrx&, ::Ice::Long, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Gateway_getImage> AMI_Gateway_getImagePtr;

class AMI_Gateway_getImages : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::ImageList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::GatewayPrx&, ::omero::api::ContainerClass, const ::omero::api::LongList&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Gateway_getImages> AMI_Gateway_getImagesPtr;

class AMI_Gateway_findAllByQuery : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::IObjectList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::GatewayPrx&, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Gateway_findAllByQuery> AMI_Gateway_findAllByQueryPtr;

class AMI_Gateway_findByQuery : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::model::IObjectPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::GatewayPrx&, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Gateway_findByQuery> AMI_Gateway_findByQueryPtr;

class AMI_Gateway_getPlane : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::Ice::ByteSeq&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::GatewayPrx&, ::Ice::Long, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Gateway_getPlane> AMI_Gateway_getPlanePtr;

class AMI_Gateway_getPixels : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::model::PixelsPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::GatewayPrx&, ::Ice::Long, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Gateway_getPixels> AMI_Gateway_getPixelsPtr;

class AMI_Gateway_copyPixelsXYTZ : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(::Ice::Long) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::GatewayPrx&, ::Ice::Long, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::omero::api::IntegerList&, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Gateway_copyPixelsXYTZ> AMI_Gateway_copyPixelsXYTZPtr;

class AMI_Gateway_copyPixels : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(::Ice::Long) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::GatewayPrx&, ::Ice::Long, const ::omero::api::IntegerList&, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Gateway_copyPixels> AMI_Gateway_copyPixelsPtr;

class AMI_Gateway_copyImage : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(::Ice::Long) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::GatewayPrx&, ::Ice::Long, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::omero::api::IntegerList&, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Gateway_copyImage> AMI_Gateway_copyImagePtr;

class AMI_Gateway_uploadPlane : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::GatewayPrx&, ::Ice::Long, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::ByteSeq&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Gateway_uploadPlane> AMI_Gateway_uploadPlanePtr;

class AMI_Gateway_updatePixels : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::model::PixelsPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::GatewayPrx&, const ::omero::model::PixelsPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Gateway_updatePixels> AMI_Gateway_updatePixelsPtr;

class AMI_Gateway_getPixelTypes : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::PixelsTypeList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::GatewayPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Gateway_getPixelTypes> AMI_Gateway_getPixelTypesPtr;

class AMI_Gateway_getPixelType : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::model::PixelsTypePtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::GatewayPrx&, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Gateway_getPixelType> AMI_Gateway_getPixelTypePtr;

class AMI_Gateway_getRenderedImage : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::IntegerArray&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::GatewayPrx&, ::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Gateway_getRenderedImage> AMI_Gateway_getRenderedImagePtr;

class AMI_Gateway_renderAsPackedIntAsRGBA : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::IntegerArray&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::GatewayPrx&, ::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Gateway_renderAsPackedIntAsRGBA> AMI_Gateway_renderAsPackedIntAsRGBAPtr;

class AMI_Gateway_getRenderedImageMatrix : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::IntegerArrayArrayArray&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::GatewayPrx&, ::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Gateway_getRenderedImageMatrix> AMI_Gateway_getRenderedImageMatrixPtr;

class AMI_Gateway_setActive : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::GatewayPrx&, ::Ice::Long, ::Ice::Int, bool, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Gateway_setActive> AMI_Gateway_setActivePtr;

class AMI_Gateway_getThumbnail : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::ByteArray&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::GatewayPrx&, ::Ice::Long, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Gateway_getThumbnail> AMI_Gateway_getThumbnailPtr;

class AMI_Gateway_getThumbnailSet : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::LongByteArrayMap&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::GatewayPrx&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::api::LongList&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Gateway_getThumbnailSet> AMI_Gateway_getThumbnailSetPtr;

class AMI_Gateway_attachImageToDataset : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::GatewayPrx&, const ::omero::model::DatasetPtr&, const ::omero::model::ImagePtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Gateway_attachImageToDataset> AMI_Gateway_attachImageToDatasetPtr;

class AMI_Gateway_createImage : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(::Ice::Long) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::GatewayPrx&, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::omero::api::IntegerList&, const ::omero::model::PixelsTypePtr&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Gateway_createImage> AMI_Gateway_createImagePtr;

class AMI_Gateway_getImageFromDatasetByName : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::ImageList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::GatewayPrx&, ::Ice::Long, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Gateway_getImageFromDatasetByName> AMI_Gateway_getImageFromDatasetByNamePtr;

class AMI_Gateway_getImageByName : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::ImageList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::GatewayPrx&, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Gateway_getImageByName> AMI_Gateway_getImageByNamePtr;

class AMI_Gateway_saveObject : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::GatewayPrx&, const ::omero::model::IObjectPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Gateway_saveObject> AMI_Gateway_saveObjectPtr;

class AMI_Gateway_saveAndReturnObject : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::model::IObjectPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::GatewayPrx&, const ::omero::model::IObjectPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Gateway_saveAndReturnObject> AMI_Gateway_saveAndReturnObjectPtr;

class AMI_Gateway_saveArray : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::GatewayPrx&, const ::omero::api::IObjectList&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Gateway_saveArray> AMI_Gateway_saveArrayPtr;

class AMI_Gateway_saveAndReturnArray : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::IObjectList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::GatewayPrx&, const ::omero::api::IObjectList&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Gateway_saveAndReturnArray> AMI_Gateway_saveAndReturnArrayPtr;

class AMI_Gateway_deleteObject : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::GatewayPrx&, const ::omero::model::IObjectPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Gateway_deleteObject> AMI_Gateway_deleteObjectPtr;

class AMI_Gateway_keepAlive : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::GatewayPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Gateway_keepAlive> AMI_Gateway_keepAlivePtr;

}

}

namespace IceAsync
{

}

namespace IceProxy
{

namespace omero
{

namespace api
{

class BufferedImage : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<BufferedImage> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<BufferedImage*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<BufferedImage*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<BufferedImage> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<BufferedImage*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<BufferedImage*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<BufferedImage> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<BufferedImage*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<BufferedImage*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<BufferedImage> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<BufferedImage*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<BufferedImage*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<BufferedImage> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<BufferedImage*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<BufferedImage*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<BufferedImage> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<BufferedImage*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<BufferedImage*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<BufferedImage> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<BufferedImage*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<BufferedImage*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<BufferedImage> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<BufferedImage*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<BufferedImage*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<BufferedImage> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<BufferedImage*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<BufferedImage*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<BufferedImage> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<BufferedImage*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<BufferedImage*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<BufferedImage> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<BufferedImage*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<BufferedImage*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<BufferedImage> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<BufferedImage*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<BufferedImage*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<BufferedImage> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<BufferedImage*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<BufferedImage*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<BufferedImage> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<BufferedImage*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<BufferedImage*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<BufferedImage> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<BufferedImage*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<BufferedImage*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<BufferedImage> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<BufferedImage*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<BufferedImage*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<BufferedImage> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<BufferedImage*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<BufferedImage*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<BufferedImage> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<BufferedImage*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<BufferedImage*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<BufferedImage> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<BufferedImage*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<BufferedImage*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class Gateway : virtual public ::IceProxy::omero::api::StatefulServiceInterface
{
public:

    ICE_DEPRECATED_API ::omero::api::ProjectList getProjects(const ::omero::api::LongList& ids, bool withLeaves)
    {
        return getProjects(ids, withLeaves, 0);
    }
    ICE_DEPRECATED_API ::omero::api::ProjectList getProjects(const ::omero::api::LongList& ids, bool withLeaves, const ::Ice::Context& __ctx)
    {
        return getProjects(ids, withLeaves, &__ctx);
    }
    
private:

    ::omero::api::ProjectList getProjects(const ::omero::api::LongList&, bool, const ::Ice::Context*);
    
public:
    bool getProjects_async(const ::omero::api::AMI_Gateway_getProjectsPtr&, const ::omero::api::LongList&, bool);
    bool getProjects_async(const ::omero::api::AMI_Gateway_getProjectsPtr&, const ::omero::api::LongList&, bool, const ::Ice::Context&);

    ICE_DEPRECATED_API ::omero::api::DatasetList getDatasets(const ::omero::api::LongList& ids, bool withLeaves)
    {
        return getDatasets(ids, withLeaves, 0);
    }
    ICE_DEPRECATED_API ::omero::api::DatasetList getDatasets(const ::omero::api::LongList& ids, bool withLeaves, const ::Ice::Context& __ctx)
    {
        return getDatasets(ids, withLeaves, &__ctx);
    }
    
private:

    ::omero::api::DatasetList getDatasets(const ::omero::api::LongList&, bool, const ::Ice::Context*);
    
public:
    bool getDatasets_async(const ::omero::api::AMI_Gateway_getDatasetsPtr&, const ::omero::api::LongList&, bool);
    bool getDatasets_async(const ::omero::api::AMI_Gateway_getDatasetsPtr&, const ::omero::api::LongList&, bool, const ::Ice::Context&);

    ICE_DEPRECATED_API ::omero::model::DatasetPtr getDataset(::Ice::Long datasetId, bool leaves)
    {
        return getDataset(datasetId, leaves, 0);
    }
    ICE_DEPRECATED_API ::omero::model::DatasetPtr getDataset(::Ice::Long datasetId, bool leaves, const ::Ice::Context& __ctx)
    {
        return getDataset(datasetId, leaves, &__ctx);
    }
    
private:

    ::omero::model::DatasetPtr getDataset(::Ice::Long, bool, const ::Ice::Context*);
    
public:
    bool getDataset_async(const ::omero::api::AMI_Gateway_getDatasetPtr&, ::Ice::Long, bool);
    bool getDataset_async(const ::omero::api::AMI_Gateway_getDatasetPtr&, ::Ice::Long, bool, const ::Ice::Context&);

    ICE_DEPRECATED_API ::omero::api::PixelsList getPixelsFromImage(::Ice::Long imageId)
    {
        return getPixelsFromImage(imageId, 0);
    }
    ICE_DEPRECATED_API ::omero::api::PixelsList getPixelsFromImage(::Ice::Long imageId, const ::Ice::Context& __ctx)
    {
        return getPixelsFromImage(imageId, &__ctx);
    }
    
private:

    ::omero::api::PixelsList getPixelsFromImage(::Ice::Long, const ::Ice::Context*);
    
public:
    bool getPixelsFromImage_async(const ::omero::api::AMI_Gateway_getPixelsFromImagePtr&, ::Ice::Long);
    bool getPixelsFromImage_async(const ::omero::api::AMI_Gateway_getPixelsFromImagePtr&, ::Ice::Long, const ::Ice::Context&);

    ICE_DEPRECATED_API ::omero::model::ImagePtr getImage(::Ice::Long id)
    {
        return getImage(id, 0);
    }
    ICE_DEPRECATED_API ::omero::model::ImagePtr getImage(::Ice::Long id, const ::Ice::Context& __ctx)
    {
        return getImage(id, &__ctx);
    }
    
private:

    ::omero::model::ImagePtr getImage(::Ice::Long, const ::Ice::Context*);
    
public:
    bool getImage_async(const ::omero::api::AMI_Gateway_getImagePtr&, ::Ice::Long);
    bool getImage_async(const ::omero::api::AMI_Gateway_getImagePtr&, ::Ice::Long, const ::Ice::Context&);

    ICE_DEPRECATED_API ::omero::api::ImageList getImages(::omero::api::ContainerClass parentType, const ::omero::api::LongList& ids)
    {
        return getImages(parentType, ids, 0);
    }
    ICE_DEPRECATED_API ::omero::api::ImageList getImages(::omero::api::ContainerClass parentType, const ::omero::api::LongList& ids, const ::Ice::Context& __ctx)
    {
        return getImages(parentType, ids, &__ctx);
    }
    
private:

    ::omero::api::ImageList getImages(::omero::api::ContainerClass, const ::omero::api::LongList&, const ::Ice::Context*);
    
public:
    bool getImages_async(const ::omero::api::AMI_Gateway_getImagesPtr&, ::omero::api::ContainerClass, const ::omero::api::LongList&);
    bool getImages_async(const ::omero::api::AMI_Gateway_getImagesPtr&, ::omero::api::ContainerClass, const ::omero::api::LongList&, const ::Ice::Context&);

    ICE_DEPRECATED_API ::omero::api::IObjectList findAllByQuery(const ::std::string& myQuery)
    {
        return findAllByQuery(myQuery, 0);
    }
    ICE_DEPRECATED_API ::omero::api::IObjectList findAllByQuery(const ::std::string& myQuery, const ::Ice::Context& __ctx)
    {
        return findAllByQuery(myQuery, &__ctx);
    }
    
private:

    ::omero::api::IObjectList findAllByQuery(const ::std::string&, const ::Ice::Context*);
    
public:
    bool findAllByQuery_async(const ::omero::api::AMI_Gateway_findAllByQueryPtr&, const ::std::string&);
    bool findAllByQuery_async(const ::omero::api::AMI_Gateway_findAllByQueryPtr&, const ::std::string&, const ::Ice::Context&);

    ICE_DEPRECATED_API ::omero::model::IObjectPtr findByQuery(const ::std::string& myQuery)
    {
        return findByQuery(myQuery, 0);
    }
    ICE_DEPRECATED_API ::omero::model::IObjectPtr findByQuery(const ::std::string& myQuery, const ::Ice::Context& __ctx)
    {
        return findByQuery(myQuery, &__ctx);
    }
    
private:

    ::omero::model::IObjectPtr findByQuery(const ::std::string&, const ::Ice::Context*);
    
public:
    bool findByQuery_async(const ::omero::api::AMI_Gateway_findByQueryPtr&, const ::std::string&);
    bool findByQuery_async(const ::omero::api::AMI_Gateway_findByQueryPtr&, const ::std::string&, const ::Ice::Context&);

    ICE_DEPRECATED_API ::Ice::ByteSeq getPlane(::Ice::Long pixelsId, ::Ice::Int z, ::Ice::Int c, ::Ice::Int t)
    {
        return getPlane(pixelsId, z, c, t, 0);
    }
    ICE_DEPRECATED_API ::Ice::ByteSeq getPlane(::Ice::Long pixelsId, ::Ice::Int z, ::Ice::Int c, ::Ice::Int t, const ::Ice::Context& __ctx)
    {
        return getPlane(pixelsId, z, c, t, &__ctx);
    }
    
private:

    ::Ice::ByteSeq getPlane(::Ice::Long, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:
    bool getPlane_async(const ::omero::api::AMI_Gateway_getPlanePtr&, ::Ice::Long, ::Ice::Int, ::Ice::Int, ::Ice::Int);
    bool getPlane_async(const ::omero::api::AMI_Gateway_getPlanePtr&, ::Ice::Long, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context&);

    ICE_DEPRECATED_API ::omero::model::PixelsPtr getPixels(::Ice::Long pixelsId)
    {
        return getPixels(pixelsId, 0);
    }
    ICE_DEPRECATED_API ::omero::model::PixelsPtr getPixels(::Ice::Long pixelsId, const ::Ice::Context& __ctx)
    {
        return getPixels(pixelsId, &__ctx);
    }
    
private:

    ::omero::model::PixelsPtr getPixels(::Ice::Long, const ::Ice::Context*);
    
public:
    bool getPixels_async(const ::omero::api::AMI_Gateway_getPixelsPtr&, ::Ice::Long);
    bool getPixels_async(const ::omero::api::AMI_Gateway_getPixelsPtr&, ::Ice::Long, const ::Ice::Context&);

    ICE_DEPRECATED_API ::Ice::Long copyPixelsXYTZ(::Ice::Long pixelsID, ::Ice::Int x, ::Ice::Int y, ::Ice::Int t, ::Ice::Int z, const ::omero::api::IntegerList& channelList, const ::std::string& methodology)
    {
        return copyPixelsXYTZ(pixelsID, x, y, t, z, channelList, methodology, 0);
    }
    ICE_DEPRECATED_API ::Ice::Long copyPixelsXYTZ(::Ice::Long pixelsID, ::Ice::Int x, ::Ice::Int y, ::Ice::Int t, ::Ice::Int z, const ::omero::api::IntegerList& channelList, const ::std::string& methodology, const ::Ice::Context& __ctx)
    {
        return copyPixelsXYTZ(pixelsID, x, y, t, z, channelList, methodology, &__ctx);
    }
    
private:

    ::Ice::Long copyPixelsXYTZ(::Ice::Long, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::omero::api::IntegerList&, const ::std::string&, const ::Ice::Context*);
    
public:
    bool copyPixelsXYTZ_async(const ::omero::api::AMI_Gateway_copyPixelsXYTZPtr&, ::Ice::Long, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::omero::api::IntegerList&, const ::std::string&);
    bool copyPixelsXYTZ_async(const ::omero::api::AMI_Gateway_copyPixelsXYTZPtr&, ::Ice::Long, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::omero::api::IntegerList&, const ::std::string&, const ::Ice::Context&);

    ICE_DEPRECATED_API ::Ice::Long copyPixels(::Ice::Long pixelsID, const ::omero::api::IntegerList& channelList, const ::std::string& methodology)
    {
        return copyPixels(pixelsID, channelList, methodology, 0);
    }
    ICE_DEPRECATED_API ::Ice::Long copyPixels(::Ice::Long pixelsID, const ::omero::api::IntegerList& channelList, const ::std::string& methodology, const ::Ice::Context& __ctx)
    {
        return copyPixels(pixelsID, channelList, methodology, &__ctx);
    }
    
private:

    ::Ice::Long copyPixels(::Ice::Long, const ::omero::api::IntegerList&, const ::std::string&, const ::Ice::Context*);
    
public:
    bool copyPixels_async(const ::omero::api::AMI_Gateway_copyPixelsPtr&, ::Ice::Long, const ::omero::api::IntegerList&, const ::std::string&);
    bool copyPixels_async(const ::omero::api::AMI_Gateway_copyPixelsPtr&, ::Ice::Long, const ::omero::api::IntegerList&, const ::std::string&, const ::Ice::Context&);

    ICE_DEPRECATED_API ::Ice::Long copyImage(::Ice::Long imageId, ::Ice::Int x, ::Ice::Int y, ::Ice::Int t, ::Ice::Int z, const ::omero::api::IntegerList& channelList, const ::std::string& imageName)
    {
        return copyImage(imageId, x, y, t, z, channelList, imageName, 0);
    }
    ICE_DEPRECATED_API ::Ice::Long copyImage(::Ice::Long imageId, ::Ice::Int x, ::Ice::Int y, ::Ice::Int t, ::Ice::Int z, const ::omero::api::IntegerList& channelList, const ::std::string& imageName, const ::Ice::Context& __ctx)
    {
        return copyImage(imageId, x, y, t, z, channelList, imageName, &__ctx);
    }
    
private:

    ::Ice::Long copyImage(::Ice::Long, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::omero::api::IntegerList&, const ::std::string&, const ::Ice::Context*);
    
public:
    bool copyImage_async(const ::omero::api::AMI_Gateway_copyImagePtr&, ::Ice::Long, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::omero::api::IntegerList&, const ::std::string&);
    bool copyImage_async(const ::omero::api::AMI_Gateway_copyImagePtr&, ::Ice::Long, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::omero::api::IntegerList&, const ::std::string&, const ::Ice::Context&);

    ICE_DEPRECATED_API void uploadPlane(::Ice::Long pixelsId, ::Ice::Int z, ::Ice::Int c, ::Ice::Int t, const ::Ice::ByteSeq& data)
    {
        uploadPlane(pixelsId, z, c, t, data, 0);
    }
    ICE_DEPRECATED_API void uploadPlane(::Ice::Long pixelsId, ::Ice::Int z, ::Ice::Int c, ::Ice::Int t, const ::Ice::ByteSeq& data, const ::Ice::Context& __ctx)
    {
        uploadPlane(pixelsId, z, c, t, data, &__ctx);
    }
    
private:

    void uploadPlane(::Ice::Long, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::ByteSeq&, const ::Ice::Context*);
    
public:
    bool uploadPlane_async(const ::omero::api::AMI_Gateway_uploadPlanePtr&, ::Ice::Long, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::ByteSeq&);
    bool uploadPlane_async(const ::omero::api::AMI_Gateway_uploadPlanePtr&, ::Ice::Long, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::ByteSeq&, const ::Ice::Context&);

    ICE_DEPRECATED_API ::omero::model::PixelsPtr updatePixels(const ::omero::model::PixelsPtr& pixels)
    {
        return updatePixels(pixels, 0);
    }
    ICE_DEPRECATED_API ::omero::model::PixelsPtr updatePixels(const ::omero::model::PixelsPtr& pixels, const ::Ice::Context& __ctx)
    {
        return updatePixels(pixels, &__ctx);
    }
    
private:

    ::omero::model::PixelsPtr updatePixels(const ::omero::model::PixelsPtr&, const ::Ice::Context*);
    
public:
    bool updatePixels_async(const ::omero::api::AMI_Gateway_updatePixelsPtr&, const ::omero::model::PixelsPtr&);
    bool updatePixels_async(const ::omero::api::AMI_Gateway_updatePixelsPtr&, const ::omero::model::PixelsPtr&, const ::Ice::Context&);

    ICE_DEPRECATED_API ::omero::api::PixelsTypeList getPixelTypes()
    {
        return getPixelTypes(0);
    }
    ICE_DEPRECATED_API ::omero::api::PixelsTypeList getPixelTypes(const ::Ice::Context& __ctx)
    {
        return getPixelTypes(&__ctx);
    }
    
private:

    ::omero::api::PixelsTypeList getPixelTypes(const ::Ice::Context*);
    
public:
    bool getPixelTypes_async(const ::omero::api::AMI_Gateway_getPixelTypesPtr&);
    bool getPixelTypes_async(const ::omero::api::AMI_Gateway_getPixelTypesPtr&, const ::Ice::Context&);

    ICE_DEPRECATED_API ::omero::model::PixelsTypePtr getPixelType(const ::std::string& type)
    {
        return getPixelType(type, 0);
    }
    ICE_DEPRECATED_API ::omero::model::PixelsTypePtr getPixelType(const ::std::string& type, const ::Ice::Context& __ctx)
    {
        return getPixelType(type, &__ctx);
    }
    
private:

    ::omero::model::PixelsTypePtr getPixelType(const ::std::string&, const ::Ice::Context*);
    
public:
    bool getPixelType_async(const ::omero::api::AMI_Gateway_getPixelTypePtr&, const ::std::string&);
    bool getPixelType_async(const ::omero::api::AMI_Gateway_getPixelTypePtr&, const ::std::string&, const ::Ice::Context&);

    ICE_DEPRECATED_API ::omero::api::IntegerArray getRenderedImage(::Ice::Long pixelsId, ::Ice::Int z, ::Ice::Int t)
    {
        return getRenderedImage(pixelsId, z, t, 0);
    }
    ICE_DEPRECATED_API ::omero::api::IntegerArray getRenderedImage(::Ice::Long pixelsId, ::Ice::Int z, ::Ice::Int t, const ::Ice::Context& __ctx)
    {
        return getRenderedImage(pixelsId, z, t, &__ctx);
    }
    
private:

    ::omero::api::IntegerArray getRenderedImage(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:
    bool getRenderedImage_async(const ::omero::api::AMI_Gateway_getRenderedImagePtr&, ::Ice::Long, ::Ice::Int, ::Ice::Int);
    bool getRenderedImage_async(const ::omero::api::AMI_Gateway_getRenderedImagePtr&, ::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context&);

    ICE_DEPRECATED_API ::omero::api::IntegerArray renderAsPackedIntAsRGBA(::Ice::Long pixelsId, ::Ice::Int z, ::Ice::Int t)
    {
        return renderAsPackedIntAsRGBA(pixelsId, z, t, 0);
    }
    ICE_DEPRECATED_API ::omero::api::IntegerArray renderAsPackedIntAsRGBA(::Ice::Long pixelsId, ::Ice::Int z, ::Ice::Int t, const ::Ice::Context& __ctx)
    {
        return renderAsPackedIntAsRGBA(pixelsId, z, t, &__ctx);
    }
    
private:

    ::omero::api::IntegerArray renderAsPackedIntAsRGBA(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:
    bool renderAsPackedIntAsRGBA_async(const ::omero::api::AMI_Gateway_renderAsPackedIntAsRGBAPtr&, ::Ice::Long, ::Ice::Int, ::Ice::Int);
    bool renderAsPackedIntAsRGBA_async(const ::omero::api::AMI_Gateway_renderAsPackedIntAsRGBAPtr&, ::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context&);

    ICE_DEPRECATED_API ::omero::api::IntegerArrayArrayArray getRenderedImageMatrix(::Ice::Long pixelsId, ::Ice::Int z, ::Ice::Int t)
    {
        return getRenderedImageMatrix(pixelsId, z, t, 0);
    }
    ICE_DEPRECATED_API ::omero::api::IntegerArrayArrayArray getRenderedImageMatrix(::Ice::Long pixelsId, ::Ice::Int z, ::Ice::Int t, const ::Ice::Context& __ctx)
    {
        return getRenderedImageMatrix(pixelsId, z, t, &__ctx);
    }
    
private:

    ::omero::api::IntegerArrayArrayArray getRenderedImageMatrix(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:
    bool getRenderedImageMatrix_async(const ::omero::api::AMI_Gateway_getRenderedImageMatrixPtr&, ::Ice::Long, ::Ice::Int, ::Ice::Int);
    bool getRenderedImageMatrix_async(const ::omero::api::AMI_Gateway_getRenderedImageMatrixPtr&, ::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context&);

    ICE_DEPRECATED_API void setActive(::Ice::Long pixelsId, ::Ice::Int w, bool active)
    {
        setActive(pixelsId, w, active, 0);
    }
    ICE_DEPRECATED_API void setActive(::Ice::Long pixelsId, ::Ice::Int w, bool active, const ::Ice::Context& __ctx)
    {
        setActive(pixelsId, w, active, &__ctx);
    }
    
private:

    void setActive(::Ice::Long, ::Ice::Int, bool, const ::Ice::Context*);
    
public:
    bool setActive_async(const ::omero::api::AMI_Gateway_setActivePtr&, ::Ice::Long, ::Ice::Int, bool);
    bool setActive_async(const ::omero::api::AMI_Gateway_setActivePtr&, ::Ice::Long, ::Ice::Int, bool, const ::Ice::Context&);

    ICE_DEPRECATED_API ::omero::api::ByteArray getThumbnail(::Ice::Long pixelsId, const ::omero::RIntPtr& sizeX, const ::omero::RIntPtr& sizeY)
    {
        return getThumbnail(pixelsId, sizeX, sizeY, 0);
    }
    ICE_DEPRECATED_API ::omero::api::ByteArray getThumbnail(::Ice::Long pixelsId, const ::omero::RIntPtr& sizeX, const ::omero::RIntPtr& sizeY, const ::Ice::Context& __ctx)
    {
        return getThumbnail(pixelsId, sizeX, sizeY, &__ctx);
    }
    
private:

    ::omero::api::ByteArray getThumbnail(::Ice::Long, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:
    bool getThumbnail_async(const ::omero::api::AMI_Gateway_getThumbnailPtr&, ::Ice::Long, const ::omero::RIntPtr&, const ::omero::RIntPtr&);
    bool getThumbnail_async(const ::omero::api::AMI_Gateway_getThumbnailPtr&, ::Ice::Long, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::Ice::Context&);

    ICE_DEPRECATED_API ::omero::api::LongByteArrayMap getThumbnailSet(const ::omero::RIntPtr& sizeX, const ::omero::RIntPtr& sizeY, const ::omero::api::LongList& pixelsIds)
    {
        return getThumbnailSet(sizeX, sizeY, pixelsIds, 0);
    }
    ICE_DEPRECATED_API ::omero::api::LongByteArrayMap getThumbnailSet(const ::omero::RIntPtr& sizeX, const ::omero::RIntPtr& sizeY, const ::omero::api::LongList& pixelsIds, const ::Ice::Context& __ctx)
    {
        return getThumbnailSet(sizeX, sizeY, pixelsIds, &__ctx);
    }
    
private:

    ::omero::api::LongByteArrayMap getThumbnailSet(const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::api::LongList&, const ::Ice::Context*);
    
public:
    bool getThumbnailSet_async(const ::omero::api::AMI_Gateway_getThumbnailSetPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::api::LongList&);
    bool getThumbnailSet_async(const ::omero::api::AMI_Gateway_getThumbnailSetPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::api::LongList&, const ::Ice::Context&);

    ICE_DEPRECATED_API void attachImageToDataset(const ::omero::model::DatasetPtr& dataset, const ::omero::model::ImagePtr& image)
    {
        attachImageToDataset(dataset, image, 0);
    }
    ICE_DEPRECATED_API void attachImageToDataset(const ::omero::model::DatasetPtr& dataset, const ::omero::model::ImagePtr& image, const ::Ice::Context& __ctx)
    {
        attachImageToDataset(dataset, image, &__ctx);
    }
    
private:

    void attachImageToDataset(const ::omero::model::DatasetPtr&, const ::omero::model::ImagePtr&, const ::Ice::Context*);
    
public:
    bool attachImageToDataset_async(const ::omero::api::AMI_Gateway_attachImageToDatasetPtr&, const ::omero::model::DatasetPtr&, const ::omero::model::ImagePtr&);
    bool attachImageToDataset_async(const ::omero::api::AMI_Gateway_attachImageToDatasetPtr&, const ::omero::model::DatasetPtr&, const ::omero::model::ImagePtr&, const ::Ice::Context&);

    ICE_DEPRECATED_API ::Ice::Long createImage(::Ice::Int sizeX, ::Ice::Int sizeY, ::Ice::Int sizeZ, ::Ice::Int sizeT, const ::omero::api::IntegerList& channelList, const ::omero::model::PixelsTypePtr& pixelsType, const ::std::string& name, const ::std::string& description)
    {
        return createImage(sizeX, sizeY, sizeZ, sizeT, channelList, pixelsType, name, description, 0);
    }
    ICE_DEPRECATED_API ::Ice::Long createImage(::Ice::Int sizeX, ::Ice::Int sizeY, ::Ice::Int sizeZ, ::Ice::Int sizeT, const ::omero::api::IntegerList& channelList, const ::omero::model::PixelsTypePtr& pixelsType, const ::std::string& name, const ::std::string& description, const ::Ice::Context& __ctx)
    {
        return createImage(sizeX, sizeY, sizeZ, sizeT, channelList, pixelsType, name, description, &__ctx);
    }
    
private:

    ::Ice::Long createImage(::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::omero::api::IntegerList&, const ::omero::model::PixelsTypePtr&, const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:
    bool createImage_async(const ::omero::api::AMI_Gateway_createImagePtr&, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::omero::api::IntegerList&, const ::omero::model::PixelsTypePtr&, const ::std::string&, const ::std::string&);
    bool createImage_async(const ::omero::api::AMI_Gateway_createImagePtr&, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::omero::api::IntegerList&, const ::omero::model::PixelsTypePtr&, const ::std::string&, const ::std::string&, const ::Ice::Context&);

    ICE_DEPRECATED_API ::omero::api::ImageList getImageFromDatasetByName(::Ice::Long datasetId, const ::std::string& imageName)
    {
        return getImageFromDatasetByName(datasetId, imageName, 0);
    }
    ICE_DEPRECATED_API ::omero::api::ImageList getImageFromDatasetByName(::Ice::Long datasetId, const ::std::string& imageName, const ::Ice::Context& __ctx)
    {
        return getImageFromDatasetByName(datasetId, imageName, &__ctx);
    }
    
private:

    ::omero::api::ImageList getImageFromDatasetByName(::Ice::Long, const ::std::string&, const ::Ice::Context*);
    
public:
    bool getImageFromDatasetByName_async(const ::omero::api::AMI_Gateway_getImageFromDatasetByNamePtr&, ::Ice::Long, const ::std::string&);
    bool getImageFromDatasetByName_async(const ::omero::api::AMI_Gateway_getImageFromDatasetByNamePtr&, ::Ice::Long, const ::std::string&, const ::Ice::Context&);

    ICE_DEPRECATED_API ::omero::api::ImageList getImageByName(const ::std::string& imageName)
    {
        return getImageByName(imageName, 0);
    }
    ICE_DEPRECATED_API ::omero::api::ImageList getImageByName(const ::std::string& imageName, const ::Ice::Context& __ctx)
    {
        return getImageByName(imageName, &__ctx);
    }
    
private:

    ::omero::api::ImageList getImageByName(const ::std::string&, const ::Ice::Context*);
    
public:
    bool getImageByName_async(const ::omero::api::AMI_Gateway_getImageByNamePtr&, const ::std::string&);
    bool getImageByName_async(const ::omero::api::AMI_Gateway_getImageByNamePtr&, const ::std::string&, const ::Ice::Context&);

    ICE_DEPRECATED_API void saveObject(const ::omero::model::IObjectPtr& obj)
    {
        saveObject(obj, 0);
    }
    ICE_DEPRECATED_API void saveObject(const ::omero::model::IObjectPtr& obj, const ::Ice::Context& __ctx)
    {
        saveObject(obj, &__ctx);
    }
    
private:

    void saveObject(const ::omero::model::IObjectPtr&, const ::Ice::Context*);
    
public:
    bool saveObject_async(const ::omero::api::AMI_Gateway_saveObjectPtr&, const ::omero::model::IObjectPtr&);
    bool saveObject_async(const ::omero::api::AMI_Gateway_saveObjectPtr&, const ::omero::model::IObjectPtr&, const ::Ice::Context&);

    ICE_DEPRECATED_API ::omero::model::IObjectPtr saveAndReturnObject(const ::omero::model::IObjectPtr& obj)
    {
        return saveAndReturnObject(obj, 0);
    }
    ICE_DEPRECATED_API ::omero::model::IObjectPtr saveAndReturnObject(const ::omero::model::IObjectPtr& obj, const ::Ice::Context& __ctx)
    {
        return saveAndReturnObject(obj, &__ctx);
    }
    
private:

    ::omero::model::IObjectPtr saveAndReturnObject(const ::omero::model::IObjectPtr&, const ::Ice::Context*);
    
public:
    bool saveAndReturnObject_async(const ::omero::api::AMI_Gateway_saveAndReturnObjectPtr&, const ::omero::model::IObjectPtr&);
    bool saveAndReturnObject_async(const ::omero::api::AMI_Gateway_saveAndReturnObjectPtr&, const ::omero::model::IObjectPtr&, const ::Ice::Context&);

    ICE_DEPRECATED_API void saveArray(const ::omero::api::IObjectList& graph)
    {
        saveArray(graph, 0);
    }
    ICE_DEPRECATED_API void saveArray(const ::omero::api::IObjectList& graph, const ::Ice::Context& __ctx)
    {
        saveArray(graph, &__ctx);
    }
    
private:

    void saveArray(const ::omero::api::IObjectList&, const ::Ice::Context*);
    
public:
    bool saveArray_async(const ::omero::api::AMI_Gateway_saveArrayPtr&, const ::omero::api::IObjectList&);
    bool saveArray_async(const ::omero::api::AMI_Gateway_saveArrayPtr&, const ::omero::api::IObjectList&, const ::Ice::Context&);

    ICE_DEPRECATED_API ::omero::api::IObjectList saveAndReturnArray(const ::omero::api::IObjectList& graph)
    {
        return saveAndReturnArray(graph, 0);
    }
    ICE_DEPRECATED_API ::omero::api::IObjectList saveAndReturnArray(const ::omero::api::IObjectList& graph, const ::Ice::Context& __ctx)
    {
        return saveAndReturnArray(graph, &__ctx);
    }
    
private:

    ::omero::api::IObjectList saveAndReturnArray(const ::omero::api::IObjectList&, const ::Ice::Context*);
    
public:
    bool saveAndReturnArray_async(const ::omero::api::AMI_Gateway_saveAndReturnArrayPtr&, const ::omero::api::IObjectList&);
    bool saveAndReturnArray_async(const ::omero::api::AMI_Gateway_saveAndReturnArrayPtr&, const ::omero::api::IObjectList&, const ::Ice::Context&);

    ICE_DEPRECATED_API void deleteObject(const ::omero::model::IObjectPtr& row)
    {
        deleteObject(row, 0);
    }
    ICE_DEPRECATED_API void deleteObject(const ::omero::model::IObjectPtr& row, const ::Ice::Context& __ctx)
    {
        deleteObject(row, &__ctx);
    }
    
private:

    void deleteObject(const ::omero::model::IObjectPtr&, const ::Ice::Context*);
    
public:
    bool deleteObject_async(const ::omero::api::AMI_Gateway_deleteObjectPtr&, const ::omero::model::IObjectPtr&);
    bool deleteObject_async(const ::omero::api::AMI_Gateway_deleteObjectPtr&, const ::omero::model::IObjectPtr&, const ::Ice::Context&);

    ICE_DEPRECATED_API void keepAlive()
    {
        keepAlive(0);
    }
    ICE_DEPRECATED_API void keepAlive(const ::Ice::Context& __ctx)
    {
        keepAlive(&__ctx);
    }
    
private:

    void keepAlive(const ::Ice::Context*);
    
public:
    bool keepAlive_async(const ::omero::api::AMI_Gateway_keepAlivePtr&);
    bool keepAlive_async(const ::omero::api::AMI_Gateway_keepAlivePtr&, const ::Ice::Context&);
    
    ::IceInternal::ProxyHandle<Gateway> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Gateway*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Gateway*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Gateway> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Gateway*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Gateway*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Gateway> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Gateway*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Gateway*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Gateway> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Gateway*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Gateway*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Gateway> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Gateway*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Gateway*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Gateway> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Gateway*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Gateway*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Gateway> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Gateway*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Gateway*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Gateway> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Gateway*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Gateway*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Gateway> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Gateway*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Gateway*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Gateway> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Gateway*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Gateway*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Gateway> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Gateway*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Gateway*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Gateway> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Gateway*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Gateway*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Gateway> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Gateway*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Gateway*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Gateway> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Gateway*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Gateway*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Gateway> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Gateway*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Gateway*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Gateway> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Gateway*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Gateway*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Gateway> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Gateway*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Gateway*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Gateway> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Gateway*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Gateway*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Gateway> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Gateway*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Gateway*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

namespace api
{

class BufferedImage : virtual public ::IceDelegate::Ice::Object
{
public:
};

class Gateway : virtual public ::IceDelegate::omero::api::StatefulServiceInterface
{
public:

    virtual ::omero::api::ProjectList getProjects(const ::omero::api::LongList&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::api::DatasetList getDatasets(const ::omero::api::LongList&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::DatasetPtr getDataset(::Ice::Long, bool, const ::Ice::Context*) = 0;

    virtual ::omero::api::PixelsList getPixelsFromImage(::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::omero::model::ImagePtr getImage(::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::omero::api::ImageList getImages(::omero::api::ContainerClass, const ::omero::api::LongList&, const ::Ice::Context*) = 0;

    virtual ::omero::api::IObjectList findAllByQuery(const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::omero::model::IObjectPtr findByQuery(const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::ByteSeq getPlane(::Ice::Long, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::omero::model::PixelsPtr getPixels(::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::Ice::Long copyPixelsXYTZ(::Ice::Long, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::omero::api::IntegerList&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Long copyPixels(::Ice::Long, const ::omero::api::IntegerList&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Long copyImage(::Ice::Long, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::omero::api::IntegerList&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual void uploadPlane(::Ice::Long, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::ByteSeq&, const ::Ice::Context*) = 0;

    virtual ::omero::model::PixelsPtr updatePixels(const ::omero::model::PixelsPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::api::PixelsTypeList getPixelTypes(const ::Ice::Context*) = 0;

    virtual ::omero::model::PixelsTypePtr getPixelType(const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::omero::api::IntegerArray getRenderedImage(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::omero::api::IntegerArray renderAsPackedIntAsRGBA(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::omero::api::IntegerArrayArrayArray getRenderedImageMatrix(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual void setActive(::Ice::Long, ::Ice::Int, bool, const ::Ice::Context*) = 0;

    virtual ::omero::api::ByteArray getThumbnail(::Ice::Long, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::api::LongByteArrayMap getThumbnailSet(const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::api::LongList&, const ::Ice::Context*) = 0;

    virtual void attachImageToDataset(const ::omero::model::DatasetPtr&, const ::omero::model::ImagePtr&, const ::Ice::Context*) = 0;

    virtual ::Ice::Long createImage(::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::omero::api::IntegerList&, const ::omero::model::PixelsTypePtr&, const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::omero::api::ImageList getImageFromDatasetByName(::Ice::Long, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::omero::api::ImageList getImageByName(const ::std::string&, const ::Ice::Context*) = 0;

    virtual void saveObject(const ::omero::model::IObjectPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::IObjectPtr saveAndReturnObject(const ::omero::model::IObjectPtr&, const ::Ice::Context*) = 0;

    virtual void saveArray(const ::omero::api::IObjectList&, const ::Ice::Context*) = 0;

    virtual ::omero::api::IObjectList saveAndReturnArray(const ::omero::api::IObjectList&, const ::Ice::Context*) = 0;

    virtual void deleteObject(const ::omero::model::IObjectPtr&, const ::Ice::Context*) = 0;

    virtual void keepAlive(const ::Ice::Context*) = 0;
};

}

}

}

namespace IceDelegateM
{

namespace omero
{

namespace api
{

class BufferedImage : virtual public ::IceDelegate::omero::api::BufferedImage,
                      virtual public ::IceDelegateM::Ice::Object
{
public:
};

class Gateway : virtual public ::IceDelegate::omero::api::Gateway,
                virtual public ::IceDelegateM::omero::api::StatefulServiceInterface
{
public:

    virtual ::omero::api::ProjectList getProjects(const ::omero::api::LongList&, bool, const ::Ice::Context*);

    virtual ::omero::api::DatasetList getDatasets(const ::omero::api::LongList&, bool, const ::Ice::Context*);

    virtual ::omero::model::DatasetPtr getDataset(::Ice::Long, bool, const ::Ice::Context*);

    virtual ::omero::api::PixelsList getPixelsFromImage(::Ice::Long, const ::Ice::Context*);

    virtual ::omero::model::ImagePtr getImage(::Ice::Long, const ::Ice::Context*);

    virtual ::omero::api::ImageList getImages(::omero::api::ContainerClass, const ::omero::api::LongList&, const ::Ice::Context*);

    virtual ::omero::api::IObjectList findAllByQuery(const ::std::string&, const ::Ice::Context*);

    virtual ::omero::model::IObjectPtr findByQuery(const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::ByteSeq getPlane(::Ice::Long, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::omero::model::PixelsPtr getPixels(::Ice::Long, const ::Ice::Context*);

    virtual ::Ice::Long copyPixelsXYTZ(::Ice::Long, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::omero::api::IntegerList&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Long copyPixels(::Ice::Long, const ::omero::api::IntegerList&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Long copyImage(::Ice::Long, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::omero::api::IntegerList&, const ::std::string&, const ::Ice::Context*);

    virtual void uploadPlane(::Ice::Long, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::ByteSeq&, const ::Ice::Context*);

    virtual ::omero::model::PixelsPtr updatePixels(const ::omero::model::PixelsPtr&, const ::Ice::Context*);

    virtual ::omero::api::PixelsTypeList getPixelTypes(const ::Ice::Context*);

    virtual ::omero::model::PixelsTypePtr getPixelType(const ::std::string&, const ::Ice::Context*);

    virtual ::omero::api::IntegerArray getRenderedImage(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::omero::api::IntegerArray renderAsPackedIntAsRGBA(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::omero::api::IntegerArrayArrayArray getRenderedImageMatrix(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual void setActive(::Ice::Long, ::Ice::Int, bool, const ::Ice::Context*);

    virtual ::omero::api::ByteArray getThumbnail(::Ice::Long, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::api::LongByteArrayMap getThumbnailSet(const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::api::LongList&, const ::Ice::Context*);

    virtual void attachImageToDataset(const ::omero::model::DatasetPtr&, const ::omero::model::ImagePtr&, const ::Ice::Context*);

    virtual ::Ice::Long createImage(::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::omero::api::IntegerList&, const ::omero::model::PixelsTypePtr&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::omero::api::ImageList getImageFromDatasetByName(::Ice::Long, const ::std::string&, const ::Ice::Context*);

    virtual ::omero::api::ImageList getImageByName(const ::std::string&, const ::Ice::Context*);

    virtual void saveObject(const ::omero::model::IObjectPtr&, const ::Ice::Context*);

    virtual ::omero::model::IObjectPtr saveAndReturnObject(const ::omero::model::IObjectPtr&, const ::Ice::Context*);

    virtual void saveArray(const ::omero::api::IObjectList&, const ::Ice::Context*);

    virtual ::omero::api::IObjectList saveAndReturnArray(const ::omero::api::IObjectList&, const ::Ice::Context*);

    virtual void deleteObject(const ::omero::model::IObjectPtr&, const ::Ice::Context*);

    virtual void keepAlive(const ::Ice::Context*);
};

}

}

}

namespace IceDelegateD
{

namespace omero
{

namespace api
{

class BufferedImage : virtual public ::IceDelegate::omero::api::BufferedImage,
                      virtual public ::IceDelegateD::Ice::Object
{
public:
};

class Gateway : virtual public ::IceDelegate::omero::api::Gateway,
                virtual public ::IceDelegateD::omero::api::StatefulServiceInterface
{
public:

    virtual ::omero::api::ProjectList getProjects(const ::omero::api::LongList&, bool, const ::Ice::Context*);

    virtual ::omero::api::DatasetList getDatasets(const ::omero::api::LongList&, bool, const ::Ice::Context*);

    virtual ::omero::model::DatasetPtr getDataset(::Ice::Long, bool, const ::Ice::Context*);

    virtual ::omero::api::PixelsList getPixelsFromImage(::Ice::Long, const ::Ice::Context*);

    virtual ::omero::model::ImagePtr getImage(::Ice::Long, const ::Ice::Context*);

    virtual ::omero::api::ImageList getImages(::omero::api::ContainerClass, const ::omero::api::LongList&, const ::Ice::Context*);

    virtual ::omero::api::IObjectList findAllByQuery(const ::std::string&, const ::Ice::Context*);

    virtual ::omero::model::IObjectPtr findByQuery(const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::ByteSeq getPlane(::Ice::Long, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::omero::model::PixelsPtr getPixels(::Ice::Long, const ::Ice::Context*);

    virtual ::Ice::Long copyPixelsXYTZ(::Ice::Long, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::omero::api::IntegerList&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Long copyPixels(::Ice::Long, const ::omero::api::IntegerList&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Long copyImage(::Ice::Long, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::omero::api::IntegerList&, const ::std::string&, const ::Ice::Context*);

    virtual void uploadPlane(::Ice::Long, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::ByteSeq&, const ::Ice::Context*);

    virtual ::omero::model::PixelsPtr updatePixels(const ::omero::model::PixelsPtr&, const ::Ice::Context*);

    virtual ::omero::api::PixelsTypeList getPixelTypes(const ::Ice::Context*);

    virtual ::omero::model::PixelsTypePtr getPixelType(const ::std::string&, const ::Ice::Context*);

    virtual ::omero::api::IntegerArray getRenderedImage(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::omero::api::IntegerArray renderAsPackedIntAsRGBA(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::omero::api::IntegerArrayArrayArray getRenderedImageMatrix(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual void setActive(::Ice::Long, ::Ice::Int, bool, const ::Ice::Context*);

    virtual ::omero::api::ByteArray getThumbnail(::Ice::Long, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::api::LongByteArrayMap getThumbnailSet(const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::api::LongList&, const ::Ice::Context*);

    virtual void attachImageToDataset(const ::omero::model::DatasetPtr&, const ::omero::model::ImagePtr&, const ::Ice::Context*);

    virtual ::Ice::Long createImage(::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::omero::api::IntegerList&, const ::omero::model::PixelsTypePtr&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::omero::api::ImageList getImageFromDatasetByName(::Ice::Long, const ::std::string&, const ::Ice::Context*);

    virtual ::omero::api::ImageList getImageByName(const ::std::string&, const ::Ice::Context*);

    virtual void saveObject(const ::omero::model::IObjectPtr&, const ::Ice::Context*);

    virtual ::omero::model::IObjectPtr saveAndReturnObject(const ::omero::model::IObjectPtr&, const ::Ice::Context*);

    virtual void saveArray(const ::omero::api::IObjectList&, const ::Ice::Context*);

    virtual ::omero::api::IObjectList saveAndReturnArray(const ::omero::api::IObjectList&, const ::Ice::Context*);

    virtual void deleteObject(const ::omero::model::IObjectPtr&, const ::Ice::Context*);

    virtual void keepAlive(const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace api
{

class BufferedImage : virtual public ::Ice::Object
{
public:

    typedef BufferedImagePrx ProxyType;
    typedef BufferedImagePtr PointerType;
    
    BufferedImage() {}
    explicit BufferedImage(const ::omero::api::IntegerArray&);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();


    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

    static const ::Ice::ObjectFactoryPtr& ice_factory();

protected:

    virtual ~BufferedImage() {}

    friend class BufferedImage__staticInit;

public:

    ::omero::api::IntegerArray packedInts;
};

class BufferedImage__staticInit
{
public:

    ::omero::api::BufferedImage _init;
};

static BufferedImage__staticInit _BufferedImage_init;

class Gateway : virtual public ::omero::api::StatefulServiceInterface
{
public:

    typedef GatewayPrx ProxyType;
    typedef GatewayPtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    ICE_DEPRECATED_API virtual ::omero::api::ProjectList getProjects(const ::omero::api::LongList&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getProjects(::IceInternal::Incoming&, const ::Ice::Current&);

    ICE_DEPRECATED_API virtual ::omero::api::DatasetList getDatasets(const ::omero::api::LongList&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getDatasets(::IceInternal::Incoming&, const ::Ice::Current&);

    ICE_DEPRECATED_API virtual ::omero::model::DatasetPtr getDataset(::Ice::Long, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getDataset(::IceInternal::Incoming&, const ::Ice::Current&);

    ICE_DEPRECATED_API virtual ::omero::api::PixelsList getPixelsFromImage(::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getPixelsFromImage(::IceInternal::Incoming&, const ::Ice::Current&);

    ICE_DEPRECATED_API virtual ::omero::model::ImagePtr getImage(::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getImage(::IceInternal::Incoming&, const ::Ice::Current&);

    ICE_DEPRECATED_API virtual ::omero::api::ImageList getImages(::omero::api::ContainerClass, const ::omero::api::LongList&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getImages(::IceInternal::Incoming&, const ::Ice::Current&);

    ICE_DEPRECATED_API virtual ::omero::api::IObjectList findAllByQuery(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___findAllByQuery(::IceInternal::Incoming&, const ::Ice::Current&);

    ICE_DEPRECATED_API virtual ::omero::model::IObjectPtr findByQuery(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___findByQuery(::IceInternal::Incoming&, const ::Ice::Current&);

    ICE_DEPRECATED_API virtual ::Ice::ByteSeq getPlane(::Ice::Long, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getPlane(::IceInternal::Incoming&, const ::Ice::Current&);

    ICE_DEPRECATED_API virtual ::omero::model::PixelsPtr getPixels(::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getPixels(::IceInternal::Incoming&, const ::Ice::Current&);

    ICE_DEPRECATED_API virtual ::Ice::Long copyPixelsXYTZ(::Ice::Long, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::omero::api::IntegerList&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copyPixelsXYTZ(::IceInternal::Incoming&, const ::Ice::Current&);

    ICE_DEPRECATED_API virtual ::Ice::Long copyPixels(::Ice::Long, const ::omero::api::IntegerList&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copyPixels(::IceInternal::Incoming&, const ::Ice::Current&);

    ICE_DEPRECATED_API virtual ::Ice::Long copyImage(::Ice::Long, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::omero::api::IntegerList&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copyImage(::IceInternal::Incoming&, const ::Ice::Current&);

    ICE_DEPRECATED_API virtual void uploadPlane(::Ice::Long, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::ByteSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___uploadPlane(::IceInternal::Incoming&, const ::Ice::Current&);

    ICE_DEPRECATED_API virtual ::omero::model::PixelsPtr updatePixels(const ::omero::model::PixelsPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___updatePixels(::IceInternal::Incoming&, const ::Ice::Current&);

    ICE_DEPRECATED_API virtual ::omero::api::PixelsTypeList getPixelTypes(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getPixelTypes(::IceInternal::Incoming&, const ::Ice::Current&);

    ICE_DEPRECATED_API virtual ::omero::model::PixelsTypePtr getPixelType(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getPixelType(::IceInternal::Incoming&, const ::Ice::Current&);

    ICE_DEPRECATED_API virtual ::omero::api::IntegerArray getRenderedImage(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getRenderedImage(::IceInternal::Incoming&, const ::Ice::Current&);

    ICE_DEPRECATED_API virtual ::omero::api::IntegerArray renderAsPackedIntAsRGBA(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___renderAsPackedIntAsRGBA(::IceInternal::Incoming&, const ::Ice::Current&);

    ICE_DEPRECATED_API virtual ::omero::api::IntegerArrayArrayArray getRenderedImageMatrix(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getRenderedImageMatrix(::IceInternal::Incoming&, const ::Ice::Current&);

    ICE_DEPRECATED_API virtual void setActive(::Ice::Long, ::Ice::Int, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setActive(::IceInternal::Incoming&, const ::Ice::Current&);

    ICE_DEPRECATED_API virtual ::omero::api::ByteArray getThumbnail(::Ice::Long, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getThumbnail(::IceInternal::Incoming&, const ::Ice::Current&);

    ICE_DEPRECATED_API virtual ::omero::api::LongByteArrayMap getThumbnailSet(const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::api::LongList&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getThumbnailSet(::IceInternal::Incoming&, const ::Ice::Current&);

    ICE_DEPRECATED_API virtual void attachImageToDataset(const ::omero::model::DatasetPtr&, const ::omero::model::ImagePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___attachImageToDataset(::IceInternal::Incoming&, const ::Ice::Current&);

    ICE_DEPRECATED_API virtual ::Ice::Long createImage(::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::omero::api::IntegerList&, const ::omero::model::PixelsTypePtr&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___createImage(::IceInternal::Incoming&, const ::Ice::Current&);

    ICE_DEPRECATED_API virtual ::omero::api::ImageList getImageFromDatasetByName(::Ice::Long, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getImageFromDatasetByName(::IceInternal::Incoming&, const ::Ice::Current&);

    ICE_DEPRECATED_API virtual ::omero::api::ImageList getImageByName(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getImageByName(::IceInternal::Incoming&, const ::Ice::Current&);

    ICE_DEPRECATED_API virtual void saveObject(const ::omero::model::IObjectPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___saveObject(::IceInternal::Incoming&, const ::Ice::Current&);

    ICE_DEPRECATED_API virtual ::omero::model::IObjectPtr saveAndReturnObject(const ::omero::model::IObjectPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___saveAndReturnObject(::IceInternal::Incoming&, const ::Ice::Current&);

    ICE_DEPRECATED_API virtual void saveArray(const ::omero::api::IObjectList&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___saveArray(::IceInternal::Incoming&, const ::Ice::Current&);

    ICE_DEPRECATED_API virtual ::omero::api::IObjectList saveAndReturnArray(const ::omero::api::IObjectList&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___saveAndReturnArray(::IceInternal::Incoming&, const ::Ice::Current&);

    ICE_DEPRECATED_API virtual void deleteObject(const ::omero::model::IObjectPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___deleteObject(::IceInternal::Incoming&, const ::Ice::Current&);

    ICE_DEPRECATED_API virtual void keepAlive(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___keepAlive(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

}

}

#endif
