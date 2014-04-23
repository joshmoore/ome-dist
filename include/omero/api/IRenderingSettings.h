// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `IRenderingSettings.ice'

#ifndef __omero_api__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_api_IRenderingSettings_h__
#define __omero_api__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_api_IRenderingSettings_h__

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
#include <omero/ModelF.h>
#include <omero/ServicesF.h>
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

namespace api
{

class IRenderingSettings;

}

}

}

namespace omero
{

namespace api
{

class IRenderingSettings;
bool operator==(const IRenderingSettings&, const IRenderingSettings&);
bool operator<(const IRenderingSettings&, const IRenderingSettings&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::api::IRenderingSettings*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::api::IRenderingSettings*);

}

namespace omero
{

namespace api
{

typedef ::IceInternal::Handle< ::omero::api::IRenderingSettings> IRenderingSettingsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::api::IRenderingSettings> IRenderingSettingsPrx;

void __read(::IceInternal::BasicStream*, IRenderingSettingsPrx&);
void __patch__IRenderingSettingsPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace omero
{

namespace api
{

class AMI_IRenderingSettings_sanityCheckPixels : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(bool) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IRenderingSettingsPrx&, const ::omero::model::PixelsPtr&, const ::omero::model::PixelsPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IRenderingSettings_sanityCheckPixels> AMI_IRenderingSettings_sanityCheckPixelsPtr;

class AMD_IRenderingSettings_sanityCheckPixels : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(bool) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IRenderingSettings_sanityCheckPixels> AMD_IRenderingSettings_sanityCheckPixelsPtr;

class AMI_IRenderingSettings_getRenderingSettings : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::model::RenderingDefPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IRenderingSettingsPrx&, ::Ice::Long, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IRenderingSettings_getRenderingSettings> AMI_IRenderingSettings_getRenderingSettingsPtr;

class AMD_IRenderingSettings_getRenderingSettings : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::model::RenderingDefPtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IRenderingSettings_getRenderingSettings> AMD_IRenderingSettings_getRenderingSettingsPtr;

class AMI_IRenderingSettings_createNewRenderingDef : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::model::RenderingDefPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IRenderingSettingsPrx&, const ::omero::model::PixelsPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IRenderingSettings_createNewRenderingDef> AMI_IRenderingSettings_createNewRenderingDefPtr;

class AMD_IRenderingSettings_createNewRenderingDef : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::model::RenderingDefPtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IRenderingSettings_createNewRenderingDef> AMD_IRenderingSettings_createNewRenderingDefPtr;

class AMI_IRenderingSettings_resetDefaults : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IRenderingSettingsPrx&, const ::omero::model::RenderingDefPtr&, const ::omero::model::PixelsPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IRenderingSettings_resetDefaults> AMI_IRenderingSettings_resetDefaultsPtr;

class AMD_IRenderingSettings_resetDefaults : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IRenderingSettings_resetDefaults> AMD_IRenderingSettings_resetDefaultsPtr;

class AMI_IRenderingSettings_resetDefaultsNoSave : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::model::RenderingDefPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IRenderingSettingsPrx&, const ::omero::model::RenderingDefPtr&, const ::omero::model::PixelsPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IRenderingSettings_resetDefaultsNoSave> AMI_IRenderingSettings_resetDefaultsNoSavePtr;

class AMD_IRenderingSettings_resetDefaultsNoSave : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::model::RenderingDefPtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IRenderingSettings_resetDefaultsNoSave> AMD_IRenderingSettings_resetDefaultsNoSavePtr;

class AMI_IRenderingSettings_resetDefaultsInImage : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IRenderingSettingsPrx&, ::Ice::Long, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IRenderingSettings_resetDefaultsInImage> AMI_IRenderingSettings_resetDefaultsInImagePtr;

class AMD_IRenderingSettings_resetDefaultsInImage : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IRenderingSettings_resetDefaultsInImage> AMD_IRenderingSettings_resetDefaultsInImagePtr;

class AMI_IRenderingSettings_resetDefaultsForPixels : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IRenderingSettingsPrx&, ::Ice::Long, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IRenderingSettings_resetDefaultsForPixels> AMI_IRenderingSettings_resetDefaultsForPixelsPtr;

class AMD_IRenderingSettings_resetDefaultsForPixels : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IRenderingSettings_resetDefaultsForPixels> AMD_IRenderingSettings_resetDefaultsForPixelsPtr;

class AMI_IRenderingSettings_resetDefaultsInDataset : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::sys::LongList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IRenderingSettingsPrx&, ::Ice::Long, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IRenderingSettings_resetDefaultsInDataset> AMI_IRenderingSettings_resetDefaultsInDatasetPtr;

class AMD_IRenderingSettings_resetDefaultsInDataset : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::sys::LongList&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IRenderingSettings_resetDefaultsInDataset> AMD_IRenderingSettings_resetDefaultsInDatasetPtr;

class AMI_IRenderingSettings_resetDefaultsInSet : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::sys::LongList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IRenderingSettingsPrx&, const ::std::string&, const ::omero::sys::LongList&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IRenderingSettings_resetDefaultsInSet> AMI_IRenderingSettings_resetDefaultsInSetPtr;

class AMD_IRenderingSettings_resetDefaultsInSet : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::sys::LongList&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IRenderingSettings_resetDefaultsInSet> AMD_IRenderingSettings_resetDefaultsInSetPtr;

class AMI_IRenderingSettings_resetDefaultsByOwnerInSet : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::sys::LongList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IRenderingSettingsPrx&, const ::std::string&, const ::omero::sys::LongList&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IRenderingSettings_resetDefaultsByOwnerInSet> AMI_IRenderingSettings_resetDefaultsByOwnerInSetPtr;

class AMD_IRenderingSettings_resetDefaultsByOwnerInSet : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::sys::LongList&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IRenderingSettings_resetDefaultsByOwnerInSet> AMD_IRenderingSettings_resetDefaultsByOwnerInSetPtr;

class AMI_IRenderingSettings_resetMinMaxInSet : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::sys::LongList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IRenderingSettingsPrx&, const ::std::string&, const ::omero::sys::LongList&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IRenderingSettings_resetMinMaxInSet> AMI_IRenderingSettings_resetMinMaxInSetPtr;

class AMD_IRenderingSettings_resetMinMaxInSet : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::sys::LongList&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IRenderingSettings_resetMinMaxInSet> AMD_IRenderingSettings_resetMinMaxInSetPtr;

class AMI_IRenderingSettings_applySettingsToSet : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::BooleanIdListMap&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IRenderingSettingsPrx&, ::Ice::Long, const ::std::string&, const ::omero::sys::LongList&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IRenderingSettings_applySettingsToSet> AMI_IRenderingSettings_applySettingsToSetPtr;

class AMD_IRenderingSettings_applySettingsToSet : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::BooleanIdListMap&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IRenderingSettings_applySettingsToSet> AMD_IRenderingSettings_applySettingsToSetPtr;

class AMI_IRenderingSettings_applySettingsToProject : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::BooleanIdListMap&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IRenderingSettingsPrx&, ::Ice::Long, ::Ice::Long, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IRenderingSettings_applySettingsToProject> AMI_IRenderingSettings_applySettingsToProjectPtr;

class AMD_IRenderingSettings_applySettingsToProject : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::BooleanIdListMap&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IRenderingSettings_applySettingsToProject> AMD_IRenderingSettings_applySettingsToProjectPtr;

class AMI_IRenderingSettings_applySettingsToDataset : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::BooleanIdListMap&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IRenderingSettingsPrx&, ::Ice::Long, ::Ice::Long, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IRenderingSettings_applySettingsToDataset> AMI_IRenderingSettings_applySettingsToDatasetPtr;

class AMD_IRenderingSettings_applySettingsToDataset : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::BooleanIdListMap&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IRenderingSettings_applySettingsToDataset> AMD_IRenderingSettings_applySettingsToDatasetPtr;

class AMI_IRenderingSettings_applySettingsToImages : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::BooleanIdListMap&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IRenderingSettingsPrx&, ::Ice::Long, const ::omero::sys::LongList&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IRenderingSettings_applySettingsToImages> AMI_IRenderingSettings_applySettingsToImagesPtr;

class AMD_IRenderingSettings_applySettingsToImages : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::BooleanIdListMap&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IRenderingSettings_applySettingsToImages> AMD_IRenderingSettings_applySettingsToImagesPtr;

class AMI_IRenderingSettings_applySettingsToImage : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(bool) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IRenderingSettingsPrx&, ::Ice::Long, ::Ice::Long, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IRenderingSettings_applySettingsToImage> AMI_IRenderingSettings_applySettingsToImagePtr;

class AMD_IRenderingSettings_applySettingsToImage : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(bool) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IRenderingSettings_applySettingsToImage> AMD_IRenderingSettings_applySettingsToImagePtr;

class AMI_IRenderingSettings_applySettingsToPixels : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(bool) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IRenderingSettingsPrx&, ::Ice::Long, ::Ice::Long, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IRenderingSettings_applySettingsToPixels> AMI_IRenderingSettings_applySettingsToPixelsPtr;

class AMD_IRenderingSettings_applySettingsToPixels : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(bool) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IRenderingSettings_applySettingsToPixels> AMD_IRenderingSettings_applySettingsToPixelsPtr;

class AMI_IRenderingSettings_setOriginalSettingsInImage : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IRenderingSettingsPrx&, ::Ice::Long, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IRenderingSettings_setOriginalSettingsInImage> AMI_IRenderingSettings_setOriginalSettingsInImagePtr;

class AMD_IRenderingSettings_setOriginalSettingsInImage : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IRenderingSettings_setOriginalSettingsInImage> AMD_IRenderingSettings_setOriginalSettingsInImagePtr;

class AMI_IRenderingSettings_setOriginalSettingsForPixels : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IRenderingSettingsPrx&, ::Ice::Long, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IRenderingSettings_setOriginalSettingsForPixels> AMI_IRenderingSettings_setOriginalSettingsForPixelsPtr;

class AMD_IRenderingSettings_setOriginalSettingsForPixels : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IRenderingSettings_setOriginalSettingsForPixels> AMD_IRenderingSettings_setOriginalSettingsForPixelsPtr;

class AMI_IRenderingSettings_setOriginalSettingsInDataset : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::sys::LongList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IRenderingSettingsPrx&, ::Ice::Long, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IRenderingSettings_setOriginalSettingsInDataset> AMI_IRenderingSettings_setOriginalSettingsInDatasetPtr;

class AMD_IRenderingSettings_setOriginalSettingsInDataset : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::sys::LongList&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IRenderingSettings_setOriginalSettingsInDataset> AMD_IRenderingSettings_setOriginalSettingsInDatasetPtr;

class AMI_IRenderingSettings_setOriginalSettingsInSet : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::sys::LongList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IRenderingSettingsPrx&, const ::std::string&, const ::omero::sys::LongList&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IRenderingSettings_setOriginalSettingsInSet> AMI_IRenderingSettings_setOriginalSettingsInSetPtr;

class AMD_IRenderingSettings_setOriginalSettingsInSet : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::sys::LongList&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IRenderingSettings_setOriginalSettingsInSet> AMD_IRenderingSettings_setOriginalSettingsInSetPtr;

}

}

namespace IceAsync
{

namespace omero
{

namespace api
{

class AMD_IRenderingSettings_sanityCheckPixels : public ::omero::api::AMD_IRenderingSettings_sanityCheckPixels, public ::IceInternal::IncomingAsync
{
public:

    AMD_IRenderingSettings_sanityCheckPixels(::IceInternal::Incoming&);

    virtual void ice_response(bool);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IRenderingSettings_getRenderingSettings : public ::omero::api::AMD_IRenderingSettings_getRenderingSettings, public ::IceInternal::IncomingAsync
{
public:

    AMD_IRenderingSettings_getRenderingSettings(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::model::RenderingDefPtr&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IRenderingSettings_createNewRenderingDef : public ::omero::api::AMD_IRenderingSettings_createNewRenderingDef, public ::IceInternal::IncomingAsync
{
public:

    AMD_IRenderingSettings_createNewRenderingDef(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::model::RenderingDefPtr&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IRenderingSettings_resetDefaults : public ::omero::api::AMD_IRenderingSettings_resetDefaults, public ::IceInternal::IncomingAsync
{
public:

    AMD_IRenderingSettings_resetDefaults(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IRenderingSettings_resetDefaultsNoSave : public ::omero::api::AMD_IRenderingSettings_resetDefaultsNoSave, public ::IceInternal::IncomingAsync
{
public:

    AMD_IRenderingSettings_resetDefaultsNoSave(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::model::RenderingDefPtr&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IRenderingSettings_resetDefaultsInImage : public ::omero::api::AMD_IRenderingSettings_resetDefaultsInImage, public ::IceInternal::IncomingAsync
{
public:

    AMD_IRenderingSettings_resetDefaultsInImage(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IRenderingSettings_resetDefaultsForPixels : public ::omero::api::AMD_IRenderingSettings_resetDefaultsForPixels, public ::IceInternal::IncomingAsync
{
public:

    AMD_IRenderingSettings_resetDefaultsForPixels(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IRenderingSettings_resetDefaultsInDataset : public ::omero::api::AMD_IRenderingSettings_resetDefaultsInDataset, public ::IceInternal::IncomingAsync
{
public:

    AMD_IRenderingSettings_resetDefaultsInDataset(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::sys::LongList&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IRenderingSettings_resetDefaultsInSet : public ::omero::api::AMD_IRenderingSettings_resetDefaultsInSet, public ::IceInternal::IncomingAsync
{
public:

    AMD_IRenderingSettings_resetDefaultsInSet(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::sys::LongList&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IRenderingSettings_resetDefaultsByOwnerInSet : public ::omero::api::AMD_IRenderingSettings_resetDefaultsByOwnerInSet, public ::IceInternal::IncomingAsync
{
public:

    AMD_IRenderingSettings_resetDefaultsByOwnerInSet(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::sys::LongList&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IRenderingSettings_resetMinMaxInSet : public ::omero::api::AMD_IRenderingSettings_resetMinMaxInSet, public ::IceInternal::IncomingAsync
{
public:

    AMD_IRenderingSettings_resetMinMaxInSet(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::sys::LongList&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IRenderingSettings_applySettingsToSet : public ::omero::api::AMD_IRenderingSettings_applySettingsToSet, public ::IceInternal::IncomingAsync
{
public:

    AMD_IRenderingSettings_applySettingsToSet(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::BooleanIdListMap&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IRenderingSettings_applySettingsToProject : public ::omero::api::AMD_IRenderingSettings_applySettingsToProject, public ::IceInternal::IncomingAsync
{
public:

    AMD_IRenderingSettings_applySettingsToProject(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::BooleanIdListMap&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IRenderingSettings_applySettingsToDataset : public ::omero::api::AMD_IRenderingSettings_applySettingsToDataset, public ::IceInternal::IncomingAsync
{
public:

    AMD_IRenderingSettings_applySettingsToDataset(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::BooleanIdListMap&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IRenderingSettings_applySettingsToImages : public ::omero::api::AMD_IRenderingSettings_applySettingsToImages, public ::IceInternal::IncomingAsync
{
public:

    AMD_IRenderingSettings_applySettingsToImages(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::BooleanIdListMap&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IRenderingSettings_applySettingsToImage : public ::omero::api::AMD_IRenderingSettings_applySettingsToImage, public ::IceInternal::IncomingAsync
{
public:

    AMD_IRenderingSettings_applySettingsToImage(::IceInternal::Incoming&);

    virtual void ice_response(bool);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IRenderingSettings_applySettingsToPixels : public ::omero::api::AMD_IRenderingSettings_applySettingsToPixels, public ::IceInternal::IncomingAsync
{
public:

    AMD_IRenderingSettings_applySettingsToPixels(::IceInternal::Incoming&);

    virtual void ice_response(bool);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IRenderingSettings_setOriginalSettingsInImage : public ::omero::api::AMD_IRenderingSettings_setOriginalSettingsInImage, public ::IceInternal::IncomingAsync
{
public:

    AMD_IRenderingSettings_setOriginalSettingsInImage(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IRenderingSettings_setOriginalSettingsForPixels : public ::omero::api::AMD_IRenderingSettings_setOriginalSettingsForPixels, public ::IceInternal::IncomingAsync
{
public:

    AMD_IRenderingSettings_setOriginalSettingsForPixels(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IRenderingSettings_setOriginalSettingsInDataset : public ::omero::api::AMD_IRenderingSettings_setOriginalSettingsInDataset, public ::IceInternal::IncomingAsync
{
public:

    AMD_IRenderingSettings_setOriginalSettingsInDataset(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::sys::LongList&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IRenderingSettings_setOriginalSettingsInSet : public ::omero::api::AMD_IRenderingSettings_setOriginalSettingsInSet, public ::IceInternal::IncomingAsync
{
public:

    AMD_IRenderingSettings_setOriginalSettingsInSet(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::sys::LongList&);
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

class IRenderingSettings : virtual public ::IceProxy::omero::api::ServiceInterface
{
public:

    bool sanityCheckPixels(const ::omero::model::PixelsPtr& pFrom, const ::omero::model::PixelsPtr& pTo)
    {
        return sanityCheckPixels(pFrom, pTo, 0);
    }
    bool sanityCheckPixels(const ::omero::model::PixelsPtr& pFrom, const ::omero::model::PixelsPtr& pTo, const ::Ice::Context& __ctx)
    {
        return sanityCheckPixels(pFrom, pTo, &__ctx);
    }
    
private:

    bool sanityCheckPixels(const ::omero::model::PixelsPtr&, const ::omero::model::PixelsPtr&, const ::Ice::Context*);
    
public:
    bool sanityCheckPixels_async(const ::omero::api::AMI_IRenderingSettings_sanityCheckPixelsPtr&, const ::omero::model::PixelsPtr&, const ::omero::model::PixelsPtr&);
    bool sanityCheckPixels_async(const ::omero::api::AMI_IRenderingSettings_sanityCheckPixelsPtr&, const ::omero::model::PixelsPtr&, const ::omero::model::PixelsPtr&, const ::Ice::Context&);

    ::omero::model::RenderingDefPtr getRenderingSettings(::Ice::Long pixelsId)
    {
        return getRenderingSettings(pixelsId, 0);
    }
    ::omero::model::RenderingDefPtr getRenderingSettings(::Ice::Long pixelsId, const ::Ice::Context& __ctx)
    {
        return getRenderingSettings(pixelsId, &__ctx);
    }
    
private:

    ::omero::model::RenderingDefPtr getRenderingSettings(::Ice::Long, const ::Ice::Context*);
    
public:
    bool getRenderingSettings_async(const ::omero::api::AMI_IRenderingSettings_getRenderingSettingsPtr&, ::Ice::Long);
    bool getRenderingSettings_async(const ::omero::api::AMI_IRenderingSettings_getRenderingSettingsPtr&, ::Ice::Long, const ::Ice::Context&);

    ::omero::model::RenderingDefPtr createNewRenderingDef(const ::omero::model::PixelsPtr& pixels)
    {
        return createNewRenderingDef(pixels, 0);
    }
    ::omero::model::RenderingDefPtr createNewRenderingDef(const ::omero::model::PixelsPtr& pixels, const ::Ice::Context& __ctx)
    {
        return createNewRenderingDef(pixels, &__ctx);
    }
    
private:

    ::omero::model::RenderingDefPtr createNewRenderingDef(const ::omero::model::PixelsPtr&, const ::Ice::Context*);
    
public:
    bool createNewRenderingDef_async(const ::omero::api::AMI_IRenderingSettings_createNewRenderingDefPtr&, const ::omero::model::PixelsPtr&);
    bool createNewRenderingDef_async(const ::omero::api::AMI_IRenderingSettings_createNewRenderingDefPtr&, const ::omero::model::PixelsPtr&, const ::Ice::Context&);

    void resetDefaults(const ::omero::model::RenderingDefPtr& def, const ::omero::model::PixelsPtr& pixels)
    {
        resetDefaults(def, pixels, 0);
    }
    void resetDefaults(const ::omero::model::RenderingDefPtr& def, const ::omero::model::PixelsPtr& pixels, const ::Ice::Context& __ctx)
    {
        resetDefaults(def, pixels, &__ctx);
    }
    
private:

    void resetDefaults(const ::omero::model::RenderingDefPtr&, const ::omero::model::PixelsPtr&, const ::Ice::Context*);
    
public:
    bool resetDefaults_async(const ::omero::api::AMI_IRenderingSettings_resetDefaultsPtr&, const ::omero::model::RenderingDefPtr&, const ::omero::model::PixelsPtr&);
    bool resetDefaults_async(const ::omero::api::AMI_IRenderingSettings_resetDefaultsPtr&, const ::omero::model::RenderingDefPtr&, const ::omero::model::PixelsPtr&, const ::Ice::Context&);

    ::omero::model::RenderingDefPtr resetDefaultsNoSave(const ::omero::model::RenderingDefPtr& def, const ::omero::model::PixelsPtr& pixels)
    {
        return resetDefaultsNoSave(def, pixels, 0);
    }
    ::omero::model::RenderingDefPtr resetDefaultsNoSave(const ::omero::model::RenderingDefPtr& def, const ::omero::model::PixelsPtr& pixels, const ::Ice::Context& __ctx)
    {
        return resetDefaultsNoSave(def, pixels, &__ctx);
    }
    
private:

    ::omero::model::RenderingDefPtr resetDefaultsNoSave(const ::omero::model::RenderingDefPtr&, const ::omero::model::PixelsPtr&, const ::Ice::Context*);
    
public:
    bool resetDefaultsNoSave_async(const ::omero::api::AMI_IRenderingSettings_resetDefaultsNoSavePtr&, const ::omero::model::RenderingDefPtr&, const ::omero::model::PixelsPtr&);
    bool resetDefaultsNoSave_async(const ::omero::api::AMI_IRenderingSettings_resetDefaultsNoSavePtr&, const ::omero::model::RenderingDefPtr&, const ::omero::model::PixelsPtr&, const ::Ice::Context&);

    void resetDefaultsInImage(::Ice::Long imageId)
    {
        resetDefaultsInImage(imageId, 0);
    }
    void resetDefaultsInImage(::Ice::Long imageId, const ::Ice::Context& __ctx)
    {
        resetDefaultsInImage(imageId, &__ctx);
    }
    
private:

    void resetDefaultsInImage(::Ice::Long, const ::Ice::Context*);
    
public:
    bool resetDefaultsInImage_async(const ::omero::api::AMI_IRenderingSettings_resetDefaultsInImagePtr&, ::Ice::Long);
    bool resetDefaultsInImage_async(const ::omero::api::AMI_IRenderingSettings_resetDefaultsInImagePtr&, ::Ice::Long, const ::Ice::Context&);

    void resetDefaultsForPixels(::Ice::Long pixelsId)
    {
        resetDefaultsForPixels(pixelsId, 0);
    }
    void resetDefaultsForPixels(::Ice::Long pixelsId, const ::Ice::Context& __ctx)
    {
        resetDefaultsForPixels(pixelsId, &__ctx);
    }
    
private:

    void resetDefaultsForPixels(::Ice::Long, const ::Ice::Context*);
    
public:
    bool resetDefaultsForPixels_async(const ::omero::api::AMI_IRenderingSettings_resetDefaultsForPixelsPtr&, ::Ice::Long);
    bool resetDefaultsForPixels_async(const ::omero::api::AMI_IRenderingSettings_resetDefaultsForPixelsPtr&, ::Ice::Long, const ::Ice::Context&);

    ::omero::sys::LongList resetDefaultsInDataset(::Ice::Long dataSetId)
    {
        return resetDefaultsInDataset(dataSetId, 0);
    }
    ::omero::sys::LongList resetDefaultsInDataset(::Ice::Long dataSetId, const ::Ice::Context& __ctx)
    {
        return resetDefaultsInDataset(dataSetId, &__ctx);
    }
    
private:

    ::omero::sys::LongList resetDefaultsInDataset(::Ice::Long, const ::Ice::Context*);
    
public:
    bool resetDefaultsInDataset_async(const ::omero::api::AMI_IRenderingSettings_resetDefaultsInDatasetPtr&, ::Ice::Long);
    bool resetDefaultsInDataset_async(const ::omero::api::AMI_IRenderingSettings_resetDefaultsInDatasetPtr&, ::Ice::Long, const ::Ice::Context&);

    ::omero::sys::LongList resetDefaultsInSet(const ::std::string& type, const ::omero::sys::LongList& nodeIds)
    {
        return resetDefaultsInSet(type, nodeIds, 0);
    }
    ::omero::sys::LongList resetDefaultsInSet(const ::std::string& type, const ::omero::sys::LongList& nodeIds, const ::Ice::Context& __ctx)
    {
        return resetDefaultsInSet(type, nodeIds, &__ctx);
    }
    
private:

    ::omero::sys::LongList resetDefaultsInSet(const ::std::string&, const ::omero::sys::LongList&, const ::Ice::Context*);
    
public:
    bool resetDefaultsInSet_async(const ::omero::api::AMI_IRenderingSettings_resetDefaultsInSetPtr&, const ::std::string&, const ::omero::sys::LongList&);
    bool resetDefaultsInSet_async(const ::omero::api::AMI_IRenderingSettings_resetDefaultsInSetPtr&, const ::std::string&, const ::omero::sys::LongList&, const ::Ice::Context&);

    ::omero::sys::LongList resetDefaultsByOwnerInSet(const ::std::string& type, const ::omero::sys::LongList& nodeIds)
    {
        return resetDefaultsByOwnerInSet(type, nodeIds, 0);
    }
    ::omero::sys::LongList resetDefaultsByOwnerInSet(const ::std::string& type, const ::omero::sys::LongList& nodeIds, const ::Ice::Context& __ctx)
    {
        return resetDefaultsByOwnerInSet(type, nodeIds, &__ctx);
    }
    
private:

    ::omero::sys::LongList resetDefaultsByOwnerInSet(const ::std::string&, const ::omero::sys::LongList&, const ::Ice::Context*);
    
public:
    bool resetDefaultsByOwnerInSet_async(const ::omero::api::AMI_IRenderingSettings_resetDefaultsByOwnerInSetPtr&, const ::std::string&, const ::omero::sys::LongList&);
    bool resetDefaultsByOwnerInSet_async(const ::omero::api::AMI_IRenderingSettings_resetDefaultsByOwnerInSetPtr&, const ::std::string&, const ::omero::sys::LongList&, const ::Ice::Context&);

    ::omero::sys::LongList resetMinMaxInSet(const ::std::string& type, const ::omero::sys::LongList& nodeIds)
    {
        return resetMinMaxInSet(type, nodeIds, 0);
    }
    ::omero::sys::LongList resetMinMaxInSet(const ::std::string& type, const ::omero::sys::LongList& nodeIds, const ::Ice::Context& __ctx)
    {
        return resetMinMaxInSet(type, nodeIds, &__ctx);
    }
    
private:

    ::omero::sys::LongList resetMinMaxInSet(const ::std::string&, const ::omero::sys::LongList&, const ::Ice::Context*);
    
public:
    bool resetMinMaxInSet_async(const ::omero::api::AMI_IRenderingSettings_resetMinMaxInSetPtr&, const ::std::string&, const ::omero::sys::LongList&);
    bool resetMinMaxInSet_async(const ::omero::api::AMI_IRenderingSettings_resetMinMaxInSetPtr&, const ::std::string&, const ::omero::sys::LongList&, const ::Ice::Context&);

    ::omero::api::BooleanIdListMap applySettingsToSet(::Ice::Long from, const ::std::string& toType, const ::omero::sys::LongList& to)
    {
        return applySettingsToSet(from, toType, to, 0);
    }
    ::omero::api::BooleanIdListMap applySettingsToSet(::Ice::Long from, const ::std::string& toType, const ::omero::sys::LongList& to, const ::Ice::Context& __ctx)
    {
        return applySettingsToSet(from, toType, to, &__ctx);
    }
    
private:

    ::omero::api::BooleanIdListMap applySettingsToSet(::Ice::Long, const ::std::string&, const ::omero::sys::LongList&, const ::Ice::Context*);
    
public:
    bool applySettingsToSet_async(const ::omero::api::AMI_IRenderingSettings_applySettingsToSetPtr&, ::Ice::Long, const ::std::string&, const ::omero::sys::LongList&);
    bool applySettingsToSet_async(const ::omero::api::AMI_IRenderingSettings_applySettingsToSetPtr&, ::Ice::Long, const ::std::string&, const ::omero::sys::LongList&, const ::Ice::Context&);

    ::omero::api::BooleanIdListMap applySettingsToProject(::Ice::Long from, ::Ice::Long to)
    {
        return applySettingsToProject(from, to, 0);
    }
    ::omero::api::BooleanIdListMap applySettingsToProject(::Ice::Long from, ::Ice::Long to, const ::Ice::Context& __ctx)
    {
        return applySettingsToProject(from, to, &__ctx);
    }
    
private:

    ::omero::api::BooleanIdListMap applySettingsToProject(::Ice::Long, ::Ice::Long, const ::Ice::Context*);
    
public:
    bool applySettingsToProject_async(const ::omero::api::AMI_IRenderingSettings_applySettingsToProjectPtr&, ::Ice::Long, ::Ice::Long);
    bool applySettingsToProject_async(const ::omero::api::AMI_IRenderingSettings_applySettingsToProjectPtr&, ::Ice::Long, ::Ice::Long, const ::Ice::Context&);

    ::omero::api::BooleanIdListMap applySettingsToDataset(::Ice::Long from, ::Ice::Long to)
    {
        return applySettingsToDataset(from, to, 0);
    }
    ::omero::api::BooleanIdListMap applySettingsToDataset(::Ice::Long from, ::Ice::Long to, const ::Ice::Context& __ctx)
    {
        return applySettingsToDataset(from, to, &__ctx);
    }
    
private:

    ::omero::api::BooleanIdListMap applySettingsToDataset(::Ice::Long, ::Ice::Long, const ::Ice::Context*);
    
public:
    bool applySettingsToDataset_async(const ::omero::api::AMI_IRenderingSettings_applySettingsToDatasetPtr&, ::Ice::Long, ::Ice::Long);
    bool applySettingsToDataset_async(const ::omero::api::AMI_IRenderingSettings_applySettingsToDatasetPtr&, ::Ice::Long, ::Ice::Long, const ::Ice::Context&);

    ::omero::api::BooleanIdListMap applySettingsToImages(::Ice::Long from, const ::omero::sys::LongList& to)
    {
        return applySettingsToImages(from, to, 0);
    }
    ::omero::api::BooleanIdListMap applySettingsToImages(::Ice::Long from, const ::omero::sys::LongList& to, const ::Ice::Context& __ctx)
    {
        return applySettingsToImages(from, to, &__ctx);
    }
    
private:

    ::omero::api::BooleanIdListMap applySettingsToImages(::Ice::Long, const ::omero::sys::LongList&, const ::Ice::Context*);
    
public:
    bool applySettingsToImages_async(const ::omero::api::AMI_IRenderingSettings_applySettingsToImagesPtr&, ::Ice::Long, const ::omero::sys::LongList&);
    bool applySettingsToImages_async(const ::omero::api::AMI_IRenderingSettings_applySettingsToImagesPtr&, ::Ice::Long, const ::omero::sys::LongList&, const ::Ice::Context&);

    bool applySettingsToImage(::Ice::Long from, ::Ice::Long to)
    {
        return applySettingsToImage(from, to, 0);
    }
    bool applySettingsToImage(::Ice::Long from, ::Ice::Long to, const ::Ice::Context& __ctx)
    {
        return applySettingsToImage(from, to, &__ctx);
    }
    
private:

    bool applySettingsToImage(::Ice::Long, ::Ice::Long, const ::Ice::Context*);
    
public:
    bool applySettingsToImage_async(const ::omero::api::AMI_IRenderingSettings_applySettingsToImagePtr&, ::Ice::Long, ::Ice::Long);
    bool applySettingsToImage_async(const ::omero::api::AMI_IRenderingSettings_applySettingsToImagePtr&, ::Ice::Long, ::Ice::Long, const ::Ice::Context&);

    bool applySettingsToPixels(::Ice::Long from, ::Ice::Long to)
    {
        return applySettingsToPixels(from, to, 0);
    }
    bool applySettingsToPixels(::Ice::Long from, ::Ice::Long to, const ::Ice::Context& __ctx)
    {
        return applySettingsToPixels(from, to, &__ctx);
    }
    
private:

    bool applySettingsToPixels(::Ice::Long, ::Ice::Long, const ::Ice::Context*);
    
public:
    bool applySettingsToPixels_async(const ::omero::api::AMI_IRenderingSettings_applySettingsToPixelsPtr&, ::Ice::Long, ::Ice::Long);
    bool applySettingsToPixels_async(const ::omero::api::AMI_IRenderingSettings_applySettingsToPixelsPtr&, ::Ice::Long, ::Ice::Long, const ::Ice::Context&);

    void setOriginalSettingsInImage(::Ice::Long imageId)
    {
        setOriginalSettingsInImage(imageId, 0);
    }
    void setOriginalSettingsInImage(::Ice::Long imageId, const ::Ice::Context& __ctx)
    {
        setOriginalSettingsInImage(imageId, &__ctx);
    }
    
private:

    void setOriginalSettingsInImage(::Ice::Long, const ::Ice::Context*);
    
public:
    bool setOriginalSettingsInImage_async(const ::omero::api::AMI_IRenderingSettings_setOriginalSettingsInImagePtr&, ::Ice::Long);
    bool setOriginalSettingsInImage_async(const ::omero::api::AMI_IRenderingSettings_setOriginalSettingsInImagePtr&, ::Ice::Long, const ::Ice::Context&);

    void setOriginalSettingsForPixels(::Ice::Long pixelsId)
    {
        setOriginalSettingsForPixels(pixelsId, 0);
    }
    void setOriginalSettingsForPixels(::Ice::Long pixelsId, const ::Ice::Context& __ctx)
    {
        setOriginalSettingsForPixels(pixelsId, &__ctx);
    }
    
private:

    void setOriginalSettingsForPixels(::Ice::Long, const ::Ice::Context*);
    
public:
    bool setOriginalSettingsForPixels_async(const ::omero::api::AMI_IRenderingSettings_setOriginalSettingsForPixelsPtr&, ::Ice::Long);
    bool setOriginalSettingsForPixels_async(const ::omero::api::AMI_IRenderingSettings_setOriginalSettingsForPixelsPtr&, ::Ice::Long, const ::Ice::Context&);

    ::omero::sys::LongList setOriginalSettingsInDataset(::Ice::Long dataSetId)
    {
        return setOriginalSettingsInDataset(dataSetId, 0);
    }
    ::omero::sys::LongList setOriginalSettingsInDataset(::Ice::Long dataSetId, const ::Ice::Context& __ctx)
    {
        return setOriginalSettingsInDataset(dataSetId, &__ctx);
    }
    
private:

    ::omero::sys::LongList setOriginalSettingsInDataset(::Ice::Long, const ::Ice::Context*);
    
public:
    bool setOriginalSettingsInDataset_async(const ::omero::api::AMI_IRenderingSettings_setOriginalSettingsInDatasetPtr&, ::Ice::Long);
    bool setOriginalSettingsInDataset_async(const ::omero::api::AMI_IRenderingSettings_setOriginalSettingsInDatasetPtr&, ::Ice::Long, const ::Ice::Context&);

    ::omero::sys::LongList setOriginalSettingsInSet(const ::std::string& type, const ::omero::sys::LongList& nodeIds)
    {
        return setOriginalSettingsInSet(type, nodeIds, 0);
    }
    ::omero::sys::LongList setOriginalSettingsInSet(const ::std::string& type, const ::omero::sys::LongList& nodeIds, const ::Ice::Context& __ctx)
    {
        return setOriginalSettingsInSet(type, nodeIds, &__ctx);
    }
    
private:

    ::omero::sys::LongList setOriginalSettingsInSet(const ::std::string&, const ::omero::sys::LongList&, const ::Ice::Context*);
    
public:
    bool setOriginalSettingsInSet_async(const ::omero::api::AMI_IRenderingSettings_setOriginalSettingsInSetPtr&, const ::std::string&, const ::omero::sys::LongList&);
    bool setOriginalSettingsInSet_async(const ::omero::api::AMI_IRenderingSettings_setOriginalSettingsInSetPtr&, const ::std::string&, const ::omero::sys::LongList&, const ::Ice::Context&);
    
    ::IceInternal::ProxyHandle<IRenderingSettings> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IRenderingSettings*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<IRenderingSettings*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IRenderingSettings> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IRenderingSettings*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<IRenderingSettings*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IRenderingSettings> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IRenderingSettings*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<IRenderingSettings*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IRenderingSettings> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IRenderingSettings*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<IRenderingSettings*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IRenderingSettings> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IRenderingSettings*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<IRenderingSettings*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IRenderingSettings> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IRenderingSettings*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<IRenderingSettings*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IRenderingSettings> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IRenderingSettings*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<IRenderingSettings*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IRenderingSettings> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IRenderingSettings*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<IRenderingSettings*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IRenderingSettings> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IRenderingSettings*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<IRenderingSettings*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IRenderingSettings> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IRenderingSettings*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<IRenderingSettings*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IRenderingSettings> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IRenderingSettings*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<IRenderingSettings*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IRenderingSettings> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IRenderingSettings*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<IRenderingSettings*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IRenderingSettings> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IRenderingSettings*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<IRenderingSettings*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IRenderingSettings> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IRenderingSettings*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<IRenderingSettings*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IRenderingSettings> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IRenderingSettings*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<IRenderingSettings*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IRenderingSettings> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IRenderingSettings*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<IRenderingSettings*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IRenderingSettings> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IRenderingSettings*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<IRenderingSettings*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IRenderingSettings> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IRenderingSettings*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<IRenderingSettings*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IRenderingSettings> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IRenderingSettings*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<IRenderingSettings*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class IRenderingSettings : virtual public ::IceDelegate::omero::api::ServiceInterface
{
public:

    virtual bool sanityCheckPixels(const ::omero::model::PixelsPtr&, const ::omero::model::PixelsPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::RenderingDefPtr getRenderingSettings(::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::omero::model::RenderingDefPtr createNewRenderingDef(const ::omero::model::PixelsPtr&, const ::Ice::Context*) = 0;

    virtual void resetDefaults(const ::omero::model::RenderingDefPtr&, const ::omero::model::PixelsPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::RenderingDefPtr resetDefaultsNoSave(const ::omero::model::RenderingDefPtr&, const ::omero::model::PixelsPtr&, const ::Ice::Context*) = 0;

    virtual void resetDefaultsInImage(::Ice::Long, const ::Ice::Context*) = 0;

    virtual void resetDefaultsForPixels(::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::omero::sys::LongList resetDefaultsInDataset(::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::omero::sys::LongList resetDefaultsInSet(const ::std::string&, const ::omero::sys::LongList&, const ::Ice::Context*) = 0;

    virtual ::omero::sys::LongList resetDefaultsByOwnerInSet(const ::std::string&, const ::omero::sys::LongList&, const ::Ice::Context*) = 0;

    virtual ::omero::sys::LongList resetMinMaxInSet(const ::std::string&, const ::omero::sys::LongList&, const ::Ice::Context*) = 0;

    virtual ::omero::api::BooleanIdListMap applySettingsToSet(::Ice::Long, const ::std::string&, const ::omero::sys::LongList&, const ::Ice::Context*) = 0;

    virtual ::omero::api::BooleanIdListMap applySettingsToProject(::Ice::Long, ::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::omero::api::BooleanIdListMap applySettingsToDataset(::Ice::Long, ::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::omero::api::BooleanIdListMap applySettingsToImages(::Ice::Long, const ::omero::sys::LongList&, const ::Ice::Context*) = 0;

    virtual bool applySettingsToImage(::Ice::Long, ::Ice::Long, const ::Ice::Context*) = 0;

    virtual bool applySettingsToPixels(::Ice::Long, ::Ice::Long, const ::Ice::Context*) = 0;

    virtual void setOriginalSettingsInImage(::Ice::Long, const ::Ice::Context*) = 0;

    virtual void setOriginalSettingsForPixels(::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::omero::sys::LongList setOriginalSettingsInDataset(::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::omero::sys::LongList setOriginalSettingsInSet(const ::std::string&, const ::omero::sys::LongList&, const ::Ice::Context*) = 0;
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

class IRenderingSettings : virtual public ::IceDelegate::omero::api::IRenderingSettings,
                           virtual public ::IceDelegateM::omero::api::ServiceInterface
{
public:

    virtual bool sanityCheckPixels(const ::omero::model::PixelsPtr&, const ::omero::model::PixelsPtr&, const ::Ice::Context*);

    virtual ::omero::model::RenderingDefPtr getRenderingSettings(::Ice::Long, const ::Ice::Context*);

    virtual ::omero::model::RenderingDefPtr createNewRenderingDef(const ::omero::model::PixelsPtr&, const ::Ice::Context*);

    virtual void resetDefaults(const ::omero::model::RenderingDefPtr&, const ::omero::model::PixelsPtr&, const ::Ice::Context*);

    virtual ::omero::model::RenderingDefPtr resetDefaultsNoSave(const ::omero::model::RenderingDefPtr&, const ::omero::model::PixelsPtr&, const ::Ice::Context*);

    virtual void resetDefaultsInImage(::Ice::Long, const ::Ice::Context*);

    virtual void resetDefaultsForPixels(::Ice::Long, const ::Ice::Context*);

    virtual ::omero::sys::LongList resetDefaultsInDataset(::Ice::Long, const ::Ice::Context*);

    virtual ::omero::sys::LongList resetDefaultsInSet(const ::std::string&, const ::omero::sys::LongList&, const ::Ice::Context*);

    virtual ::omero::sys::LongList resetDefaultsByOwnerInSet(const ::std::string&, const ::omero::sys::LongList&, const ::Ice::Context*);

    virtual ::omero::sys::LongList resetMinMaxInSet(const ::std::string&, const ::omero::sys::LongList&, const ::Ice::Context*);

    virtual ::omero::api::BooleanIdListMap applySettingsToSet(::Ice::Long, const ::std::string&, const ::omero::sys::LongList&, const ::Ice::Context*);

    virtual ::omero::api::BooleanIdListMap applySettingsToProject(::Ice::Long, ::Ice::Long, const ::Ice::Context*);

    virtual ::omero::api::BooleanIdListMap applySettingsToDataset(::Ice::Long, ::Ice::Long, const ::Ice::Context*);

    virtual ::omero::api::BooleanIdListMap applySettingsToImages(::Ice::Long, const ::omero::sys::LongList&, const ::Ice::Context*);

    virtual bool applySettingsToImage(::Ice::Long, ::Ice::Long, const ::Ice::Context*);

    virtual bool applySettingsToPixels(::Ice::Long, ::Ice::Long, const ::Ice::Context*);

    virtual void setOriginalSettingsInImage(::Ice::Long, const ::Ice::Context*);

    virtual void setOriginalSettingsForPixels(::Ice::Long, const ::Ice::Context*);

    virtual ::omero::sys::LongList setOriginalSettingsInDataset(::Ice::Long, const ::Ice::Context*);

    virtual ::omero::sys::LongList setOriginalSettingsInSet(const ::std::string&, const ::omero::sys::LongList&, const ::Ice::Context*);
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

class IRenderingSettings : virtual public ::IceDelegate::omero::api::IRenderingSettings,
                           virtual public ::IceDelegateD::omero::api::ServiceInterface
{
public:

    virtual bool sanityCheckPixels(const ::omero::model::PixelsPtr&, const ::omero::model::PixelsPtr&, const ::Ice::Context*);

    virtual ::omero::model::RenderingDefPtr getRenderingSettings(::Ice::Long, const ::Ice::Context*);

    virtual ::omero::model::RenderingDefPtr createNewRenderingDef(const ::omero::model::PixelsPtr&, const ::Ice::Context*);

    virtual void resetDefaults(const ::omero::model::RenderingDefPtr&, const ::omero::model::PixelsPtr&, const ::Ice::Context*);

    virtual ::omero::model::RenderingDefPtr resetDefaultsNoSave(const ::omero::model::RenderingDefPtr&, const ::omero::model::PixelsPtr&, const ::Ice::Context*);

    virtual void resetDefaultsInImage(::Ice::Long, const ::Ice::Context*);

    virtual void resetDefaultsForPixels(::Ice::Long, const ::Ice::Context*);

    virtual ::omero::sys::LongList resetDefaultsInDataset(::Ice::Long, const ::Ice::Context*);

    virtual ::omero::sys::LongList resetDefaultsInSet(const ::std::string&, const ::omero::sys::LongList&, const ::Ice::Context*);

    virtual ::omero::sys::LongList resetDefaultsByOwnerInSet(const ::std::string&, const ::omero::sys::LongList&, const ::Ice::Context*);

    virtual ::omero::sys::LongList resetMinMaxInSet(const ::std::string&, const ::omero::sys::LongList&, const ::Ice::Context*);

    virtual ::omero::api::BooleanIdListMap applySettingsToSet(::Ice::Long, const ::std::string&, const ::omero::sys::LongList&, const ::Ice::Context*);

    virtual ::omero::api::BooleanIdListMap applySettingsToProject(::Ice::Long, ::Ice::Long, const ::Ice::Context*);

    virtual ::omero::api::BooleanIdListMap applySettingsToDataset(::Ice::Long, ::Ice::Long, const ::Ice::Context*);

    virtual ::omero::api::BooleanIdListMap applySettingsToImages(::Ice::Long, const ::omero::sys::LongList&, const ::Ice::Context*);

    virtual bool applySettingsToImage(::Ice::Long, ::Ice::Long, const ::Ice::Context*);

    virtual bool applySettingsToPixels(::Ice::Long, ::Ice::Long, const ::Ice::Context*);

    virtual void setOriginalSettingsInImage(::Ice::Long, const ::Ice::Context*);

    virtual void setOriginalSettingsForPixels(::Ice::Long, const ::Ice::Context*);

    virtual ::omero::sys::LongList setOriginalSettingsInDataset(::Ice::Long, const ::Ice::Context*);

    virtual ::omero::sys::LongList setOriginalSettingsInSet(const ::std::string&, const ::omero::sys::LongList&, const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace api
{

class IRenderingSettings : virtual public ::omero::api::ServiceInterface
{
public:

    typedef IRenderingSettingsPrx ProxyType;
    typedef IRenderingSettingsPtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void sanityCheckPixels_async(const ::omero::api::AMD_IRenderingSettings_sanityCheckPixelsPtr&, const ::omero::model::PixelsPtr&, const ::omero::model::PixelsPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sanityCheckPixels(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getRenderingSettings_async(const ::omero::api::AMD_IRenderingSettings_getRenderingSettingsPtr&, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getRenderingSettings(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void createNewRenderingDef_async(const ::omero::api::AMD_IRenderingSettings_createNewRenderingDefPtr&, const ::omero::model::PixelsPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___createNewRenderingDef(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void resetDefaults_async(const ::omero::api::AMD_IRenderingSettings_resetDefaultsPtr&, const ::omero::model::RenderingDefPtr&, const ::omero::model::PixelsPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___resetDefaults(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void resetDefaultsNoSave_async(const ::omero::api::AMD_IRenderingSettings_resetDefaultsNoSavePtr&, const ::omero::model::RenderingDefPtr&, const ::omero::model::PixelsPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___resetDefaultsNoSave(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void resetDefaultsInImage_async(const ::omero::api::AMD_IRenderingSettings_resetDefaultsInImagePtr&, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___resetDefaultsInImage(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void resetDefaultsForPixels_async(const ::omero::api::AMD_IRenderingSettings_resetDefaultsForPixelsPtr&, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___resetDefaultsForPixels(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void resetDefaultsInDataset_async(const ::omero::api::AMD_IRenderingSettings_resetDefaultsInDatasetPtr&, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___resetDefaultsInDataset(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void resetDefaultsInSet_async(const ::omero::api::AMD_IRenderingSettings_resetDefaultsInSetPtr&, const ::std::string&, const ::omero::sys::LongList&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___resetDefaultsInSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void resetDefaultsByOwnerInSet_async(const ::omero::api::AMD_IRenderingSettings_resetDefaultsByOwnerInSetPtr&, const ::std::string&, const ::omero::sys::LongList&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___resetDefaultsByOwnerInSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void resetMinMaxInSet_async(const ::omero::api::AMD_IRenderingSettings_resetMinMaxInSetPtr&, const ::std::string&, const ::omero::sys::LongList&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___resetMinMaxInSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void applySettingsToSet_async(const ::omero::api::AMD_IRenderingSettings_applySettingsToSetPtr&, ::Ice::Long, const ::std::string&, const ::omero::sys::LongList&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___applySettingsToSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void applySettingsToProject_async(const ::omero::api::AMD_IRenderingSettings_applySettingsToProjectPtr&, ::Ice::Long, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___applySettingsToProject(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void applySettingsToDataset_async(const ::omero::api::AMD_IRenderingSettings_applySettingsToDatasetPtr&, ::Ice::Long, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___applySettingsToDataset(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void applySettingsToImages_async(const ::omero::api::AMD_IRenderingSettings_applySettingsToImagesPtr&, ::Ice::Long, const ::omero::sys::LongList&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___applySettingsToImages(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void applySettingsToImage_async(const ::omero::api::AMD_IRenderingSettings_applySettingsToImagePtr&, ::Ice::Long, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___applySettingsToImage(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void applySettingsToPixels_async(const ::omero::api::AMD_IRenderingSettings_applySettingsToPixelsPtr&, ::Ice::Long, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___applySettingsToPixels(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setOriginalSettingsInImage_async(const ::omero::api::AMD_IRenderingSettings_setOriginalSettingsInImagePtr&, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setOriginalSettingsInImage(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setOriginalSettingsForPixels_async(const ::omero::api::AMD_IRenderingSettings_setOriginalSettingsForPixelsPtr&, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setOriginalSettingsForPixels(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setOriginalSettingsInDataset_async(const ::omero::api::AMD_IRenderingSettings_setOriginalSettingsInDatasetPtr&, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setOriginalSettingsInDataset(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setOriginalSettingsInSet_async(const ::omero::api::AMD_IRenderingSettings_setOriginalSettingsInSetPtr&, const ::std::string&, const ::omero::sys::LongList&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setOriginalSettingsInSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

}

}

#endif
