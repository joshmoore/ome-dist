// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `IPixels.ice'

#ifndef __omero_api__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_api_IPixels_h__
#define __omero_api__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_api_IPixels_h__

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

class IPixels;

}

}

}

namespace omero
{

namespace api
{

class IPixels;
bool operator==(const IPixels&, const IPixels&);
bool operator<(const IPixels&, const IPixels&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::api::IPixels*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::api::IPixels*);

}

namespace omero
{

namespace api
{

typedef ::IceInternal::Handle< ::omero::api::IPixels> IPixelsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::api::IPixels> IPixelsPrx;

void __read(::IceInternal::BasicStream*, IPixelsPrx&);
void __patch__IPixelsPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace omero
{

namespace api
{

class AMI_IPixels_retrievePixDescription : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::model::PixelsPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IPixelsPrx&, ::Ice::Long, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IPixels_retrievePixDescription> AMI_IPixels_retrievePixDescriptionPtr;

class AMD_IPixels_retrievePixDescription : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::model::PixelsPtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IPixels_retrievePixDescription> AMD_IPixels_retrievePixDescriptionPtr;

class AMI_IPixels_retrieveRndSettings : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::model::RenderingDefPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IPixelsPrx&, ::Ice::Long, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IPixels_retrieveRndSettings> AMI_IPixels_retrieveRndSettingsPtr;

class AMD_IPixels_retrieveRndSettings : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::model::RenderingDefPtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IPixels_retrieveRndSettings> AMD_IPixels_retrieveRndSettingsPtr;

class AMI_IPixels_retrieveRndSettingsFor : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::model::RenderingDefPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IPixelsPrx&, ::Ice::Long, ::Ice::Long, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IPixels_retrieveRndSettingsFor> AMI_IPixels_retrieveRndSettingsForPtr;

class AMD_IPixels_retrieveRndSettingsFor : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::model::RenderingDefPtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IPixels_retrieveRndSettingsFor> AMD_IPixels_retrieveRndSettingsForPtr;

class AMI_IPixels_retrieveAllRndSettings : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::IObjectList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IPixelsPrx&, ::Ice::Long, ::Ice::Long, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IPixels_retrieveAllRndSettings> AMI_IPixels_retrieveAllRndSettingsPtr;

class AMD_IPixels_retrieveAllRndSettings : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::IObjectList&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IPixels_retrieveAllRndSettings> AMD_IPixels_retrieveAllRndSettingsPtr;

class AMI_IPixels_loadRndSettings : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::model::RenderingDefPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IPixelsPrx&, ::Ice::Long, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IPixels_loadRndSettings> AMI_IPixels_loadRndSettingsPtr;

class AMD_IPixels_loadRndSettings : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::model::RenderingDefPtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IPixels_loadRndSettings> AMD_IPixels_loadRndSettingsPtr;

class AMI_IPixels_saveRndSettings : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IPixelsPrx&, const ::omero::model::RenderingDefPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IPixels_saveRndSettings> AMI_IPixels_saveRndSettingsPtr;

class AMD_IPixels_saveRndSettings : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IPixels_saveRndSettings> AMD_IPixels_saveRndSettingsPtr;

class AMI_IPixels_getBitDepth : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IPixelsPrx&, const ::omero::model::PixelsTypePtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IPixels_getBitDepth> AMI_IPixels_getBitDepthPtr;

class AMD_IPixels_getBitDepth : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IPixels_getBitDepth> AMD_IPixels_getBitDepthPtr;

class AMI_IPixels_getEnumeration : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::model::IObjectPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IPixelsPrx&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IPixels_getEnumeration> AMI_IPixels_getEnumerationPtr;

class AMD_IPixels_getEnumeration : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::model::IObjectPtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IPixels_getEnumeration> AMD_IPixels_getEnumerationPtr;

class AMI_IPixels_getAllEnumerations : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::IObjectList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IPixelsPrx&, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IPixels_getAllEnumerations> AMI_IPixels_getAllEnumerationsPtr;

class AMD_IPixels_getAllEnumerations : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::IObjectList&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IPixels_getAllEnumerations> AMD_IPixels_getAllEnumerationsPtr;

class AMI_IPixels_copyAndResizePixels : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::RLongPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IPixelsPrx&, ::Ice::Long, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::sys::IntList&, const ::std::string&, bool, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IPixels_copyAndResizePixels> AMI_IPixels_copyAndResizePixelsPtr;

class AMD_IPixels_copyAndResizePixels : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::RLongPtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IPixels_copyAndResizePixels> AMD_IPixels_copyAndResizePixelsPtr;

class AMI_IPixels_copyAndResizeImage : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::RLongPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IPixelsPrx&, ::Ice::Long, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::sys::IntList&, const ::std::string&, bool, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IPixels_copyAndResizeImage> AMI_IPixels_copyAndResizeImagePtr;

class AMD_IPixels_copyAndResizeImage : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::RLongPtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IPixels_copyAndResizeImage> AMD_IPixels_copyAndResizeImagePtr;

class AMI_IPixels_createImage : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::RLongPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IPixelsPrx&, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::omero::sys::IntList&, const ::omero::model::PixelsTypePtr&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IPixels_createImage> AMI_IPixels_createImagePtr;

class AMD_IPixels_createImage : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::RLongPtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IPixels_createImage> AMD_IPixels_createImagePtr;

class AMI_IPixels_setChannelGlobalMinMax : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IPixelsPrx&, ::Ice::Long, ::Ice::Int, ::Ice::Double, ::Ice::Double, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IPixels_setChannelGlobalMinMax> AMI_IPixels_setChannelGlobalMinMaxPtr;

class AMD_IPixels_setChannelGlobalMinMax : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IPixels_setChannelGlobalMinMax> AMD_IPixels_setChannelGlobalMinMaxPtr;

}

}

namespace IceAsync
{

namespace omero
{

namespace api
{

class AMD_IPixels_retrievePixDescription : public ::omero::api::AMD_IPixels_retrievePixDescription, public ::IceInternal::IncomingAsync
{
public:

    AMD_IPixels_retrievePixDescription(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::model::PixelsPtr&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IPixels_retrieveRndSettings : public ::omero::api::AMD_IPixels_retrieveRndSettings, public ::IceInternal::IncomingAsync
{
public:

    AMD_IPixels_retrieveRndSettings(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::model::RenderingDefPtr&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IPixels_retrieveRndSettingsFor : public ::omero::api::AMD_IPixels_retrieveRndSettingsFor, public ::IceInternal::IncomingAsync
{
public:

    AMD_IPixels_retrieveRndSettingsFor(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::model::RenderingDefPtr&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IPixels_retrieveAllRndSettings : public ::omero::api::AMD_IPixels_retrieveAllRndSettings, public ::IceInternal::IncomingAsync
{
public:

    AMD_IPixels_retrieveAllRndSettings(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::IObjectList&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IPixels_loadRndSettings : public ::omero::api::AMD_IPixels_loadRndSettings, public ::IceInternal::IncomingAsync
{
public:

    AMD_IPixels_loadRndSettings(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::model::RenderingDefPtr&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IPixels_saveRndSettings : public ::omero::api::AMD_IPixels_saveRndSettings, public ::IceInternal::IncomingAsync
{
public:

    AMD_IPixels_saveRndSettings(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IPixels_getBitDepth : public ::omero::api::AMD_IPixels_getBitDepth, public ::IceInternal::IncomingAsync
{
public:

    AMD_IPixels_getBitDepth(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IPixels_getEnumeration : public ::omero::api::AMD_IPixels_getEnumeration, public ::IceInternal::IncomingAsync
{
public:

    AMD_IPixels_getEnumeration(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::model::IObjectPtr&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IPixels_getAllEnumerations : public ::omero::api::AMD_IPixels_getAllEnumerations, public ::IceInternal::IncomingAsync
{
public:

    AMD_IPixels_getAllEnumerations(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::IObjectList&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IPixels_copyAndResizePixels : public ::omero::api::AMD_IPixels_copyAndResizePixels, public ::IceInternal::IncomingAsync
{
public:

    AMD_IPixels_copyAndResizePixels(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::RLongPtr&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IPixels_copyAndResizeImage : public ::omero::api::AMD_IPixels_copyAndResizeImage, public ::IceInternal::IncomingAsync
{
public:

    AMD_IPixels_copyAndResizeImage(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::RLongPtr&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IPixels_createImage : public ::omero::api::AMD_IPixels_createImage, public ::IceInternal::IncomingAsync
{
public:

    AMD_IPixels_createImage(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::RLongPtr&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IPixels_setChannelGlobalMinMax : public ::omero::api::AMD_IPixels_setChannelGlobalMinMax, public ::IceInternal::IncomingAsync
{
public:

    AMD_IPixels_setChannelGlobalMinMax(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

}

}

}

namespace IceProxy
{

namespace omero
{

namespace api
{

class IPixels : virtual public ::IceProxy::omero::api::ServiceInterface
{
public:

    ::omero::model::PixelsPtr retrievePixDescription(::Ice::Long pixId)
    {
        return retrievePixDescription(pixId, 0);
    }
    ::omero::model::PixelsPtr retrievePixDescription(::Ice::Long pixId, const ::Ice::Context& __ctx)
    {
        return retrievePixDescription(pixId, &__ctx);
    }
    
private:

    ::omero::model::PixelsPtr retrievePixDescription(::Ice::Long, const ::Ice::Context*);
    
public:
    bool retrievePixDescription_async(const ::omero::api::AMI_IPixels_retrievePixDescriptionPtr&, ::Ice::Long);
    bool retrievePixDescription_async(const ::omero::api::AMI_IPixels_retrievePixDescriptionPtr&, ::Ice::Long, const ::Ice::Context&);

    ::omero::model::RenderingDefPtr retrieveRndSettings(::Ice::Long pixId)
    {
        return retrieveRndSettings(pixId, 0);
    }
    ::omero::model::RenderingDefPtr retrieveRndSettings(::Ice::Long pixId, const ::Ice::Context& __ctx)
    {
        return retrieveRndSettings(pixId, &__ctx);
    }
    
private:

    ::omero::model::RenderingDefPtr retrieveRndSettings(::Ice::Long, const ::Ice::Context*);
    
public:
    bool retrieveRndSettings_async(const ::omero::api::AMI_IPixels_retrieveRndSettingsPtr&, ::Ice::Long);
    bool retrieveRndSettings_async(const ::omero::api::AMI_IPixels_retrieveRndSettingsPtr&, ::Ice::Long, const ::Ice::Context&);

    ::omero::model::RenderingDefPtr retrieveRndSettingsFor(::Ice::Long pixId, ::Ice::Long userId)
    {
        return retrieveRndSettingsFor(pixId, userId, 0);
    }
    ::omero::model::RenderingDefPtr retrieveRndSettingsFor(::Ice::Long pixId, ::Ice::Long userId, const ::Ice::Context& __ctx)
    {
        return retrieveRndSettingsFor(pixId, userId, &__ctx);
    }
    
private:

    ::omero::model::RenderingDefPtr retrieveRndSettingsFor(::Ice::Long, ::Ice::Long, const ::Ice::Context*);
    
public:
    bool retrieveRndSettingsFor_async(const ::omero::api::AMI_IPixels_retrieveRndSettingsForPtr&, ::Ice::Long, ::Ice::Long);
    bool retrieveRndSettingsFor_async(const ::omero::api::AMI_IPixels_retrieveRndSettingsForPtr&, ::Ice::Long, ::Ice::Long, const ::Ice::Context&);

    ::omero::api::IObjectList retrieveAllRndSettings(::Ice::Long pixId, ::Ice::Long userId)
    {
        return retrieveAllRndSettings(pixId, userId, 0);
    }
    ::omero::api::IObjectList retrieveAllRndSettings(::Ice::Long pixId, ::Ice::Long userId, const ::Ice::Context& __ctx)
    {
        return retrieveAllRndSettings(pixId, userId, &__ctx);
    }
    
private:

    ::omero::api::IObjectList retrieveAllRndSettings(::Ice::Long, ::Ice::Long, const ::Ice::Context*);
    
public:
    bool retrieveAllRndSettings_async(const ::omero::api::AMI_IPixels_retrieveAllRndSettingsPtr&, ::Ice::Long, ::Ice::Long);
    bool retrieveAllRndSettings_async(const ::omero::api::AMI_IPixels_retrieveAllRndSettingsPtr&, ::Ice::Long, ::Ice::Long, const ::Ice::Context&);

    ::omero::model::RenderingDefPtr loadRndSettings(::Ice::Long renderingSettingsId)
    {
        return loadRndSettings(renderingSettingsId, 0);
    }
    ::omero::model::RenderingDefPtr loadRndSettings(::Ice::Long renderingSettingsId, const ::Ice::Context& __ctx)
    {
        return loadRndSettings(renderingSettingsId, &__ctx);
    }
    
private:

    ::omero::model::RenderingDefPtr loadRndSettings(::Ice::Long, const ::Ice::Context*);
    
public:
    bool loadRndSettings_async(const ::omero::api::AMI_IPixels_loadRndSettingsPtr&, ::Ice::Long);
    bool loadRndSettings_async(const ::omero::api::AMI_IPixels_loadRndSettingsPtr&, ::Ice::Long, const ::Ice::Context&);

    void saveRndSettings(const ::omero::model::RenderingDefPtr& rndSettings)
    {
        saveRndSettings(rndSettings, 0);
    }
    void saveRndSettings(const ::omero::model::RenderingDefPtr& rndSettings, const ::Ice::Context& __ctx)
    {
        saveRndSettings(rndSettings, &__ctx);
    }
    
private:

    void saveRndSettings(const ::omero::model::RenderingDefPtr&, const ::Ice::Context*);
    
public:
    bool saveRndSettings_async(const ::omero::api::AMI_IPixels_saveRndSettingsPtr&, const ::omero::model::RenderingDefPtr&);
    bool saveRndSettings_async(const ::omero::api::AMI_IPixels_saveRndSettingsPtr&, const ::omero::model::RenderingDefPtr&, const ::Ice::Context&);

    ::Ice::Int getBitDepth(const ::omero::model::PixelsTypePtr& type)
    {
        return getBitDepth(type, 0);
    }
    ::Ice::Int getBitDepth(const ::omero::model::PixelsTypePtr& type, const ::Ice::Context& __ctx)
    {
        return getBitDepth(type, &__ctx);
    }
    
private:

    ::Ice::Int getBitDepth(const ::omero::model::PixelsTypePtr&, const ::Ice::Context*);
    
public:
    bool getBitDepth_async(const ::omero::api::AMI_IPixels_getBitDepthPtr&, const ::omero::model::PixelsTypePtr&);
    bool getBitDepth_async(const ::omero::api::AMI_IPixels_getBitDepthPtr&, const ::omero::model::PixelsTypePtr&, const ::Ice::Context&);

    ::omero::model::IObjectPtr getEnumeration(const ::std::string& enumClass, const ::std::string& value)
    {
        return getEnumeration(enumClass, value, 0);
    }
    ::omero::model::IObjectPtr getEnumeration(const ::std::string& enumClass, const ::std::string& value, const ::Ice::Context& __ctx)
    {
        return getEnumeration(enumClass, value, &__ctx);
    }
    
private:

    ::omero::model::IObjectPtr getEnumeration(const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:
    bool getEnumeration_async(const ::omero::api::AMI_IPixels_getEnumerationPtr&, const ::std::string&, const ::std::string&);
    bool getEnumeration_async(const ::omero::api::AMI_IPixels_getEnumerationPtr&, const ::std::string&, const ::std::string&, const ::Ice::Context&);

    ::omero::api::IObjectList getAllEnumerations(const ::std::string& enumClass)
    {
        return getAllEnumerations(enumClass, 0);
    }
    ::omero::api::IObjectList getAllEnumerations(const ::std::string& enumClass, const ::Ice::Context& __ctx)
    {
        return getAllEnumerations(enumClass, &__ctx);
    }
    
private:

    ::omero::api::IObjectList getAllEnumerations(const ::std::string&, const ::Ice::Context*);
    
public:
    bool getAllEnumerations_async(const ::omero::api::AMI_IPixels_getAllEnumerationsPtr&, const ::std::string&);
    bool getAllEnumerations_async(const ::omero::api::AMI_IPixels_getAllEnumerationsPtr&, const ::std::string&, const ::Ice::Context&);

    ::omero::RLongPtr copyAndResizePixels(::Ice::Long pixelsId, const ::omero::RIntPtr& sizeX, const ::omero::RIntPtr& sizeY, const ::omero::RIntPtr& sizeZ, const ::omero::RIntPtr& sizeT, const ::omero::sys::IntList& channelList, const ::std::string& methodology, bool copyStats)
    {
        return copyAndResizePixels(pixelsId, sizeX, sizeY, sizeZ, sizeT, channelList, methodology, copyStats, 0);
    }
    ::omero::RLongPtr copyAndResizePixels(::Ice::Long pixelsId, const ::omero::RIntPtr& sizeX, const ::omero::RIntPtr& sizeY, const ::omero::RIntPtr& sizeZ, const ::omero::RIntPtr& sizeT, const ::omero::sys::IntList& channelList, const ::std::string& methodology, bool copyStats, const ::Ice::Context& __ctx)
    {
        return copyAndResizePixels(pixelsId, sizeX, sizeY, sizeZ, sizeT, channelList, methodology, copyStats, &__ctx);
    }
    
private:

    ::omero::RLongPtr copyAndResizePixels(::Ice::Long, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::sys::IntList&, const ::std::string&, bool, const ::Ice::Context*);
    
public:
    bool copyAndResizePixels_async(const ::omero::api::AMI_IPixels_copyAndResizePixelsPtr&, ::Ice::Long, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::sys::IntList&, const ::std::string&, bool);
    bool copyAndResizePixels_async(const ::omero::api::AMI_IPixels_copyAndResizePixelsPtr&, ::Ice::Long, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::sys::IntList&, const ::std::string&, bool, const ::Ice::Context&);

    ::omero::RLongPtr copyAndResizeImage(::Ice::Long imageId, const ::omero::RIntPtr& sizeX, const ::omero::RIntPtr& sizeY, const ::omero::RIntPtr& sizeZ, const ::omero::RIntPtr& sizeT, const ::omero::sys::IntList& channelList, const ::std::string& methodology, bool copyStats)
    {
        return copyAndResizeImage(imageId, sizeX, sizeY, sizeZ, sizeT, channelList, methodology, copyStats, 0);
    }
    ::omero::RLongPtr copyAndResizeImage(::Ice::Long imageId, const ::omero::RIntPtr& sizeX, const ::omero::RIntPtr& sizeY, const ::omero::RIntPtr& sizeZ, const ::omero::RIntPtr& sizeT, const ::omero::sys::IntList& channelList, const ::std::string& methodology, bool copyStats, const ::Ice::Context& __ctx)
    {
        return copyAndResizeImage(imageId, sizeX, sizeY, sizeZ, sizeT, channelList, methodology, copyStats, &__ctx);
    }
    
private:

    ::omero::RLongPtr copyAndResizeImage(::Ice::Long, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::sys::IntList&, const ::std::string&, bool, const ::Ice::Context*);
    
public:
    bool copyAndResizeImage_async(const ::omero::api::AMI_IPixels_copyAndResizeImagePtr&, ::Ice::Long, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::sys::IntList&, const ::std::string&, bool);
    bool copyAndResizeImage_async(const ::omero::api::AMI_IPixels_copyAndResizeImagePtr&, ::Ice::Long, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::sys::IntList&, const ::std::string&, bool, const ::Ice::Context&);

    ::omero::RLongPtr createImage(::Ice::Int sizeX, ::Ice::Int sizeY, ::Ice::Int sizeZ, ::Ice::Int sizeT, const ::omero::sys::IntList& channelList, const ::omero::model::PixelsTypePtr& pixelsType, const ::std::string& name, const ::std::string& description)
    {
        return createImage(sizeX, sizeY, sizeZ, sizeT, channelList, pixelsType, name, description, 0);
    }
    ::omero::RLongPtr createImage(::Ice::Int sizeX, ::Ice::Int sizeY, ::Ice::Int sizeZ, ::Ice::Int sizeT, const ::omero::sys::IntList& channelList, const ::omero::model::PixelsTypePtr& pixelsType, const ::std::string& name, const ::std::string& description, const ::Ice::Context& __ctx)
    {
        return createImage(sizeX, sizeY, sizeZ, sizeT, channelList, pixelsType, name, description, &__ctx);
    }
    
private:

    ::omero::RLongPtr createImage(::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::omero::sys::IntList&, const ::omero::model::PixelsTypePtr&, const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:
    bool createImage_async(const ::omero::api::AMI_IPixels_createImagePtr&, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::omero::sys::IntList&, const ::omero::model::PixelsTypePtr&, const ::std::string&, const ::std::string&);
    bool createImage_async(const ::omero::api::AMI_IPixels_createImagePtr&, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::omero::sys::IntList&, const ::omero::model::PixelsTypePtr&, const ::std::string&, const ::std::string&, const ::Ice::Context&);

    void setChannelGlobalMinMax(::Ice::Long pixelsId, ::Ice::Int channelIndex, ::Ice::Double min, ::Ice::Double max)
    {
        setChannelGlobalMinMax(pixelsId, channelIndex, min, max, 0);
    }
    void setChannelGlobalMinMax(::Ice::Long pixelsId, ::Ice::Int channelIndex, ::Ice::Double min, ::Ice::Double max, const ::Ice::Context& __ctx)
    {
        setChannelGlobalMinMax(pixelsId, channelIndex, min, max, &__ctx);
    }
    
private:

    void setChannelGlobalMinMax(::Ice::Long, ::Ice::Int, ::Ice::Double, ::Ice::Double, const ::Ice::Context*);
    
public:
    bool setChannelGlobalMinMax_async(const ::omero::api::AMI_IPixels_setChannelGlobalMinMaxPtr&, ::Ice::Long, ::Ice::Int, ::Ice::Double, ::Ice::Double);
    bool setChannelGlobalMinMax_async(const ::omero::api::AMI_IPixels_setChannelGlobalMinMaxPtr&, ::Ice::Long, ::Ice::Int, ::Ice::Double, ::Ice::Double, const ::Ice::Context&);
    
    ::IceInternal::ProxyHandle<IPixels> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IPixels*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<IPixels*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IPixels> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IPixels*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<IPixels*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IPixels> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IPixels*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<IPixels*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IPixels> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IPixels*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<IPixels*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IPixels> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IPixels*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<IPixels*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IPixels> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IPixels*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<IPixels*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IPixels> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IPixels*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<IPixels*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IPixels> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IPixels*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<IPixels*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IPixels> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IPixels*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<IPixels*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IPixels> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IPixels*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<IPixels*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IPixels> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IPixels*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<IPixels*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IPixels> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IPixels*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<IPixels*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IPixels> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IPixels*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<IPixels*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IPixels> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IPixels*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<IPixels*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IPixels> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IPixels*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<IPixels*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IPixels> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IPixels*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<IPixels*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IPixels> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IPixels*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<IPixels*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IPixels> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IPixels*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<IPixels*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IPixels> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IPixels*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<IPixels*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class IPixels : virtual public ::IceDelegate::omero::api::ServiceInterface
{
public:

    virtual ::omero::model::PixelsPtr retrievePixDescription(::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::omero::model::RenderingDefPtr retrieveRndSettings(::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::omero::model::RenderingDefPtr retrieveRndSettingsFor(::Ice::Long, ::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::omero::api::IObjectList retrieveAllRndSettings(::Ice::Long, ::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::omero::model::RenderingDefPtr loadRndSettings(::Ice::Long, const ::Ice::Context*) = 0;

    virtual void saveRndSettings(const ::omero::model::RenderingDefPtr&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getBitDepth(const ::omero::model::PixelsTypePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::IObjectPtr getEnumeration(const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::omero::api::IObjectList getAllEnumerations(const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::omero::RLongPtr copyAndResizePixels(::Ice::Long, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::sys::IntList&, const ::std::string&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::RLongPtr copyAndResizeImage(::Ice::Long, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::sys::IntList&, const ::std::string&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::RLongPtr createImage(::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::omero::sys::IntList&, const ::omero::model::PixelsTypePtr&, const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual void setChannelGlobalMinMax(::Ice::Long, ::Ice::Int, ::Ice::Double, ::Ice::Double, const ::Ice::Context*) = 0;
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

class IPixels : virtual public ::IceDelegate::omero::api::IPixels,
                virtual public ::IceDelegateM::omero::api::ServiceInterface
{
public:

    virtual ::omero::model::PixelsPtr retrievePixDescription(::Ice::Long, const ::Ice::Context*);

    virtual ::omero::model::RenderingDefPtr retrieveRndSettings(::Ice::Long, const ::Ice::Context*);

    virtual ::omero::model::RenderingDefPtr retrieveRndSettingsFor(::Ice::Long, ::Ice::Long, const ::Ice::Context*);

    virtual ::omero::api::IObjectList retrieveAllRndSettings(::Ice::Long, ::Ice::Long, const ::Ice::Context*);

    virtual ::omero::model::RenderingDefPtr loadRndSettings(::Ice::Long, const ::Ice::Context*);

    virtual void saveRndSettings(const ::omero::model::RenderingDefPtr&, const ::Ice::Context*);

    virtual ::Ice::Int getBitDepth(const ::omero::model::PixelsTypePtr&, const ::Ice::Context*);

    virtual ::omero::model::IObjectPtr getEnumeration(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::omero::api::IObjectList getAllEnumerations(const ::std::string&, const ::Ice::Context*);

    virtual ::omero::RLongPtr copyAndResizePixels(::Ice::Long, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::sys::IntList&, const ::std::string&, bool, const ::Ice::Context*);

    virtual ::omero::RLongPtr copyAndResizeImage(::Ice::Long, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::sys::IntList&, const ::std::string&, bool, const ::Ice::Context*);

    virtual ::omero::RLongPtr createImage(::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::omero::sys::IntList&, const ::omero::model::PixelsTypePtr&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual void setChannelGlobalMinMax(::Ice::Long, ::Ice::Int, ::Ice::Double, ::Ice::Double, const ::Ice::Context*);
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

class IPixels : virtual public ::IceDelegate::omero::api::IPixels,
                virtual public ::IceDelegateD::omero::api::ServiceInterface
{
public:

    virtual ::omero::model::PixelsPtr retrievePixDescription(::Ice::Long, const ::Ice::Context*);

    virtual ::omero::model::RenderingDefPtr retrieveRndSettings(::Ice::Long, const ::Ice::Context*);

    virtual ::omero::model::RenderingDefPtr retrieveRndSettingsFor(::Ice::Long, ::Ice::Long, const ::Ice::Context*);

    virtual ::omero::api::IObjectList retrieveAllRndSettings(::Ice::Long, ::Ice::Long, const ::Ice::Context*);

    virtual ::omero::model::RenderingDefPtr loadRndSettings(::Ice::Long, const ::Ice::Context*);

    virtual void saveRndSettings(const ::omero::model::RenderingDefPtr&, const ::Ice::Context*);

    virtual ::Ice::Int getBitDepth(const ::omero::model::PixelsTypePtr&, const ::Ice::Context*);

    virtual ::omero::model::IObjectPtr getEnumeration(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::omero::api::IObjectList getAllEnumerations(const ::std::string&, const ::Ice::Context*);

    virtual ::omero::RLongPtr copyAndResizePixels(::Ice::Long, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::sys::IntList&, const ::std::string&, bool, const ::Ice::Context*);

    virtual ::omero::RLongPtr copyAndResizeImage(::Ice::Long, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::sys::IntList&, const ::std::string&, bool, const ::Ice::Context*);

    virtual ::omero::RLongPtr createImage(::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::omero::sys::IntList&, const ::omero::model::PixelsTypePtr&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual void setChannelGlobalMinMax(::Ice::Long, ::Ice::Int, ::Ice::Double, ::Ice::Double, const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace api
{

class IPixels : virtual public ::omero::api::ServiceInterface
{
public:

    typedef IPixelsPrx ProxyType;
    typedef IPixelsPtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void retrievePixDescription_async(const ::omero::api::AMD_IPixels_retrievePixDescriptionPtr&, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___retrievePixDescription(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void retrieveRndSettings_async(const ::omero::api::AMD_IPixels_retrieveRndSettingsPtr&, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___retrieveRndSettings(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void retrieveRndSettingsFor_async(const ::omero::api::AMD_IPixels_retrieveRndSettingsForPtr&, ::Ice::Long, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___retrieveRndSettingsFor(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void retrieveAllRndSettings_async(const ::omero::api::AMD_IPixels_retrieveAllRndSettingsPtr&, ::Ice::Long, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___retrieveAllRndSettings(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void loadRndSettings_async(const ::omero::api::AMD_IPixels_loadRndSettingsPtr&, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___loadRndSettings(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void saveRndSettings_async(const ::omero::api::AMD_IPixels_saveRndSettingsPtr&, const ::omero::model::RenderingDefPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___saveRndSettings(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getBitDepth_async(const ::omero::api::AMD_IPixels_getBitDepthPtr&, const ::omero::model::PixelsTypePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getBitDepth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getEnumeration_async(const ::omero::api::AMD_IPixels_getEnumerationPtr&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getEnumeration(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getAllEnumerations_async(const ::omero::api::AMD_IPixels_getAllEnumerationsPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getAllEnumerations(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void copyAndResizePixels_async(const ::omero::api::AMD_IPixels_copyAndResizePixelsPtr&, ::Ice::Long, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::sys::IntList&, const ::std::string&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copyAndResizePixels(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void copyAndResizeImage_async(const ::omero::api::AMD_IPixels_copyAndResizeImagePtr&, ::Ice::Long, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::sys::IntList&, const ::std::string&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copyAndResizeImage(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void createImage_async(const ::omero::api::AMD_IPixels_createImagePtr&, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::omero::sys::IntList&, const ::omero::model::PixelsTypePtr&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___createImage(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setChannelGlobalMinMax_async(const ::omero::api::AMD_IPixels_setChannelGlobalMinMaxPtr&, ::Ice::Long, ::Ice::Int, ::Ice::Double, ::Ice::Double, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setChannelGlobalMinMax(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

}

}

#endif
