// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `RenderingEngine.ice'

#ifndef __omero_api__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_api_RenderingEngine_h__
#define __omero_api__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_api_RenderingEngine_h__

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
#include <omero/Collections.h>
#include <omero/ROMIO.h>
#include <omero/Constants.h>
#include <omero/api/PyramidService.h>
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

class RenderingEngine;

}

}

}

namespace omero
{

namespace api
{

class RenderingEngine;
bool operator==(const RenderingEngine&, const RenderingEngine&);
bool operator<(const RenderingEngine&, const RenderingEngine&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::api::RenderingEngine*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::api::RenderingEngine*);

}

namespace omero
{

namespace api
{

typedef ::IceInternal::Handle< ::omero::api::RenderingEngine> RenderingEnginePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::api::RenderingEngine> RenderingEnginePrx;

void __read(::IceInternal::BasicStream*, RenderingEnginePrx&);
void __patch__RenderingEnginePtr(void*, ::Ice::ObjectPtr&);

}

}

namespace omero
{

namespace api
{

class AMI_RenderingEngine_render : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::romio::RGBBufferPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RenderingEnginePrx&, const ::omero::romio::PlaneDefPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RenderingEngine_render> AMI_RenderingEngine_renderPtr;

class AMD_RenderingEngine_render : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::romio::RGBBufferPtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RenderingEngine_render> AMD_RenderingEngine_renderPtr;

class AMI_RenderingEngine_renderAsPackedInt : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::Ice::IntSeq&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RenderingEnginePrx&, const ::omero::romio::PlaneDefPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RenderingEngine_renderAsPackedInt> AMI_RenderingEngine_renderAsPackedIntPtr;

class AMD_RenderingEngine_renderAsPackedInt : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::Ice::IntSeq&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RenderingEngine_renderAsPackedInt> AMD_RenderingEngine_renderAsPackedIntPtr;

class AMI_RenderingEngine_renderAsPackedIntAsRGBA : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::Ice::IntSeq&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RenderingEnginePrx&, const ::omero::romio::PlaneDefPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RenderingEngine_renderAsPackedIntAsRGBA> AMI_RenderingEngine_renderAsPackedIntAsRGBAPtr;

class AMD_RenderingEngine_renderAsPackedIntAsRGBA : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::Ice::IntSeq&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RenderingEngine_renderAsPackedIntAsRGBA> AMD_RenderingEngine_renderAsPackedIntAsRGBAPtr;

class AMI_RenderingEngine_renderProjectedAsPackedInt : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::Ice::IntSeq&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RenderingEnginePrx&, ::omero::constants::projection::ProjectionType, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RenderingEngine_renderProjectedAsPackedInt> AMI_RenderingEngine_renderProjectedAsPackedIntPtr;

class AMD_RenderingEngine_renderProjectedAsPackedInt : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::Ice::IntSeq&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RenderingEngine_renderProjectedAsPackedInt> AMD_RenderingEngine_renderProjectedAsPackedIntPtr;

class AMI_RenderingEngine_renderCompressed : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::Ice::ByteSeq&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RenderingEnginePrx&, const ::omero::romio::PlaneDefPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RenderingEngine_renderCompressed> AMI_RenderingEngine_renderCompressedPtr;

class AMD_RenderingEngine_renderCompressed : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::Ice::ByteSeq&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RenderingEngine_renderCompressed> AMD_RenderingEngine_renderCompressedPtr;

class AMI_RenderingEngine_renderProjectedCompressed : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::Ice::ByteSeq&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RenderingEnginePrx&, ::omero::constants::projection::ProjectionType, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RenderingEngine_renderProjectedCompressed> AMI_RenderingEngine_renderProjectedCompressedPtr;

class AMD_RenderingEngine_renderProjectedCompressed : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::Ice::ByteSeq&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RenderingEngine_renderProjectedCompressed> AMD_RenderingEngine_renderProjectedCompressedPtr;

class AMI_RenderingEngine_getRenderingDefId : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(::Ice::Long) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RenderingEnginePrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RenderingEngine_getRenderingDefId> AMI_RenderingEngine_getRenderingDefIdPtr;

class AMD_RenderingEngine_getRenderingDefId : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Long) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RenderingEngine_getRenderingDefId> AMD_RenderingEngine_getRenderingDefIdPtr;

class AMI_RenderingEngine_lookupPixels : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RenderingEnginePrx&, ::Ice::Long, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RenderingEngine_lookupPixels> AMI_RenderingEngine_lookupPixelsPtr;

class AMD_RenderingEngine_lookupPixels : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RenderingEngine_lookupPixels> AMD_RenderingEngine_lookupPixelsPtr;

class AMI_RenderingEngine_lookupRenderingDef : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(bool) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RenderingEnginePrx&, ::Ice::Long, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RenderingEngine_lookupRenderingDef> AMI_RenderingEngine_lookupRenderingDefPtr;

class AMD_RenderingEngine_lookupRenderingDef : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(bool) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RenderingEngine_lookupRenderingDef> AMD_RenderingEngine_lookupRenderingDefPtr;

class AMI_RenderingEngine_loadRenderingDef : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RenderingEnginePrx&, ::Ice::Long, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RenderingEngine_loadRenderingDef> AMI_RenderingEngine_loadRenderingDefPtr;

class AMD_RenderingEngine_loadRenderingDef : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RenderingEngine_loadRenderingDef> AMD_RenderingEngine_loadRenderingDefPtr;

class AMI_RenderingEngine_setOverlays : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RenderingEnginePrx&, const ::omero::RLongPtr&, const ::omero::RLongPtr&, const ::omero::api::LongIntMap&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RenderingEngine_setOverlays> AMI_RenderingEngine_setOverlaysPtr;

class AMD_RenderingEngine_setOverlays : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RenderingEngine_setOverlays> AMD_RenderingEngine_setOverlaysPtr;

class AMI_RenderingEngine_load : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RenderingEnginePrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RenderingEngine_load> AMI_RenderingEngine_loadPtr;

class AMD_RenderingEngine_load : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RenderingEngine_load> AMD_RenderingEngine_loadPtr;

class AMI_RenderingEngine_setModel : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RenderingEnginePrx&, const ::omero::model::RenderingModelPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RenderingEngine_setModel> AMI_RenderingEngine_setModelPtr;

class AMD_RenderingEngine_setModel : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RenderingEngine_setModel> AMD_RenderingEngine_setModelPtr;

class AMI_RenderingEngine_getModel : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::model::RenderingModelPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RenderingEnginePrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RenderingEngine_getModel> AMI_RenderingEngine_getModelPtr;

class AMD_RenderingEngine_getModel : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::model::RenderingModelPtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RenderingEngine_getModel> AMD_RenderingEngine_getModelPtr;

class AMI_RenderingEngine_getDefaultZ : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RenderingEnginePrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RenderingEngine_getDefaultZ> AMI_RenderingEngine_getDefaultZPtr;

class AMD_RenderingEngine_getDefaultZ : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RenderingEngine_getDefaultZ> AMD_RenderingEngine_getDefaultZPtr;

class AMI_RenderingEngine_getDefaultT : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RenderingEnginePrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RenderingEngine_getDefaultT> AMI_RenderingEngine_getDefaultTPtr;

class AMD_RenderingEngine_getDefaultT : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RenderingEngine_getDefaultT> AMD_RenderingEngine_getDefaultTPtr;

class AMI_RenderingEngine_setDefaultZ : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RenderingEnginePrx&, ::Ice::Int, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RenderingEngine_setDefaultZ> AMI_RenderingEngine_setDefaultZPtr;

class AMD_RenderingEngine_setDefaultZ : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RenderingEngine_setDefaultZ> AMD_RenderingEngine_setDefaultZPtr;

class AMI_RenderingEngine_setDefaultT : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RenderingEnginePrx&, ::Ice::Int, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RenderingEngine_setDefaultT> AMI_RenderingEngine_setDefaultTPtr;

class AMD_RenderingEngine_setDefaultT : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RenderingEngine_setDefaultT> AMD_RenderingEngine_setDefaultTPtr;

class AMI_RenderingEngine_getPixels : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::model::PixelsPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RenderingEnginePrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RenderingEngine_getPixels> AMI_RenderingEngine_getPixelsPtr;

class AMD_RenderingEngine_getPixels : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::model::PixelsPtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RenderingEngine_getPixels> AMD_RenderingEngine_getPixelsPtr;

class AMI_RenderingEngine_getAvailableModels : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::IObjectList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RenderingEnginePrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RenderingEngine_getAvailableModels> AMI_RenderingEngine_getAvailableModelsPtr;

class AMD_RenderingEngine_getAvailableModels : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::IObjectList&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RenderingEngine_getAvailableModels> AMD_RenderingEngine_getAvailableModelsPtr;

class AMI_RenderingEngine_getAvailableFamilies : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::IObjectList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RenderingEnginePrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RenderingEngine_getAvailableFamilies> AMI_RenderingEngine_getAvailableFamiliesPtr;

class AMD_RenderingEngine_getAvailableFamilies : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::IObjectList&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RenderingEngine_getAvailableFamilies> AMD_RenderingEngine_getAvailableFamiliesPtr;

class AMI_RenderingEngine_setQuantumStrategy : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RenderingEnginePrx&, ::Ice::Int, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RenderingEngine_setQuantumStrategy> AMI_RenderingEngine_setQuantumStrategyPtr;

class AMD_RenderingEngine_setQuantumStrategy : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RenderingEngine_setQuantumStrategy> AMD_RenderingEngine_setQuantumStrategyPtr;

class AMI_RenderingEngine_setCodomainInterval : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RenderingEnginePrx&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RenderingEngine_setCodomainInterval> AMI_RenderingEngine_setCodomainIntervalPtr;

class AMD_RenderingEngine_setCodomainInterval : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RenderingEngine_setCodomainInterval> AMD_RenderingEngine_setCodomainIntervalPtr;

class AMI_RenderingEngine_getQuantumDef : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::model::QuantumDefPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RenderingEnginePrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RenderingEngine_getQuantumDef> AMI_RenderingEngine_getQuantumDefPtr;

class AMD_RenderingEngine_getQuantumDef : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::model::QuantumDefPtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RenderingEngine_getQuantumDef> AMD_RenderingEngine_getQuantumDefPtr;

class AMI_RenderingEngine_setQuantizationMap : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RenderingEnginePrx&, ::Ice::Int, const ::omero::model::FamilyPtr&, ::Ice::Double, bool, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RenderingEngine_setQuantizationMap> AMI_RenderingEngine_setQuantizationMapPtr;

class AMD_RenderingEngine_setQuantizationMap : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RenderingEngine_setQuantizationMap> AMD_RenderingEngine_setQuantizationMapPtr;

class AMI_RenderingEngine_getChannelFamily : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::model::FamilyPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RenderingEnginePrx&, ::Ice::Int, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RenderingEngine_getChannelFamily> AMI_RenderingEngine_getChannelFamilyPtr;

class AMD_RenderingEngine_getChannelFamily : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::model::FamilyPtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RenderingEngine_getChannelFamily> AMD_RenderingEngine_getChannelFamilyPtr;

class AMI_RenderingEngine_getChannelNoiseReduction : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(bool) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RenderingEnginePrx&, ::Ice::Int, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RenderingEngine_getChannelNoiseReduction> AMI_RenderingEngine_getChannelNoiseReductionPtr;

class AMD_RenderingEngine_getChannelNoiseReduction : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(bool) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RenderingEngine_getChannelNoiseReduction> AMD_RenderingEngine_getChannelNoiseReductionPtr;

class AMI_RenderingEngine_getChannelStats : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::Ice::DoubleSeq&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RenderingEnginePrx&, ::Ice::Int, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RenderingEngine_getChannelStats> AMI_RenderingEngine_getChannelStatsPtr;

class AMD_RenderingEngine_getChannelStats : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::Ice::DoubleSeq&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RenderingEngine_getChannelStats> AMD_RenderingEngine_getChannelStatsPtr;

class AMI_RenderingEngine_getChannelCurveCoefficient : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(::Ice::Double) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RenderingEnginePrx&, ::Ice::Int, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RenderingEngine_getChannelCurveCoefficient> AMI_RenderingEngine_getChannelCurveCoefficientPtr;

class AMD_RenderingEngine_getChannelCurveCoefficient : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Double) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RenderingEngine_getChannelCurveCoefficient> AMD_RenderingEngine_getChannelCurveCoefficientPtr;

class AMI_RenderingEngine_setChannelWindow : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RenderingEnginePrx&, ::Ice::Int, ::Ice::Double, ::Ice::Double, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RenderingEngine_setChannelWindow> AMI_RenderingEngine_setChannelWindowPtr;

class AMD_RenderingEngine_setChannelWindow : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RenderingEngine_setChannelWindow> AMD_RenderingEngine_setChannelWindowPtr;

class AMI_RenderingEngine_getChannelWindowStart : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(::Ice::Double) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RenderingEnginePrx&, ::Ice::Int, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RenderingEngine_getChannelWindowStart> AMI_RenderingEngine_getChannelWindowStartPtr;

class AMD_RenderingEngine_getChannelWindowStart : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Double) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RenderingEngine_getChannelWindowStart> AMD_RenderingEngine_getChannelWindowStartPtr;

class AMI_RenderingEngine_getChannelWindowEnd : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(::Ice::Double) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RenderingEnginePrx&, ::Ice::Int, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RenderingEngine_getChannelWindowEnd> AMI_RenderingEngine_getChannelWindowEndPtr;

class AMD_RenderingEngine_getChannelWindowEnd : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Double) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RenderingEngine_getChannelWindowEnd> AMD_RenderingEngine_getChannelWindowEndPtr;

class AMI_RenderingEngine_setRGBA : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RenderingEnginePrx&, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RenderingEngine_setRGBA> AMI_RenderingEngine_setRGBAPtr;

class AMD_RenderingEngine_setRGBA : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RenderingEngine_setRGBA> AMD_RenderingEngine_setRGBAPtr;

class AMI_RenderingEngine_getRGBA : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::Ice::IntSeq&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RenderingEnginePrx&, ::Ice::Int, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RenderingEngine_getRGBA> AMI_RenderingEngine_getRGBAPtr;

class AMD_RenderingEngine_getRGBA : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::Ice::IntSeq&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RenderingEngine_getRGBA> AMD_RenderingEngine_getRGBAPtr;

class AMI_RenderingEngine_setActive : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RenderingEnginePrx&, ::Ice::Int, bool, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RenderingEngine_setActive> AMI_RenderingEngine_setActivePtr;

class AMD_RenderingEngine_setActive : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RenderingEngine_setActive> AMD_RenderingEngine_setActivePtr;

class AMI_RenderingEngine_isActive : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(bool) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RenderingEnginePrx&, ::Ice::Int, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RenderingEngine_isActive> AMI_RenderingEngine_isActivePtr;

class AMD_RenderingEngine_isActive : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(bool) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RenderingEngine_isActive> AMD_RenderingEngine_isActivePtr;

class AMI_RenderingEngine_addCodomainMap : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RenderingEnginePrx&, const ::omero::romio::CodomainMapContextPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RenderingEngine_addCodomainMap> AMI_RenderingEngine_addCodomainMapPtr;

class AMD_RenderingEngine_addCodomainMap : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RenderingEngine_addCodomainMap> AMD_RenderingEngine_addCodomainMapPtr;

class AMI_RenderingEngine_updateCodomainMap : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RenderingEnginePrx&, const ::omero::romio::CodomainMapContextPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RenderingEngine_updateCodomainMap> AMI_RenderingEngine_updateCodomainMapPtr;

class AMD_RenderingEngine_updateCodomainMap : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RenderingEngine_updateCodomainMap> AMD_RenderingEngine_updateCodomainMapPtr;

class AMI_RenderingEngine_removeCodomainMap : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RenderingEnginePrx&, const ::omero::romio::CodomainMapContextPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RenderingEngine_removeCodomainMap> AMI_RenderingEngine_removeCodomainMapPtr;

class AMD_RenderingEngine_removeCodomainMap : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RenderingEngine_removeCodomainMap> AMD_RenderingEngine_removeCodomainMapPtr;

class AMI_RenderingEngine_saveCurrentSettings : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RenderingEnginePrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RenderingEngine_saveCurrentSettings> AMI_RenderingEngine_saveCurrentSettingsPtr;

class AMD_RenderingEngine_saveCurrentSettings : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RenderingEngine_saveCurrentSettings> AMD_RenderingEngine_saveCurrentSettingsPtr;

class AMI_RenderingEngine_resetDefaults : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RenderingEnginePrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RenderingEngine_resetDefaults> AMI_RenderingEngine_resetDefaultsPtr;

class AMD_RenderingEngine_resetDefaults : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RenderingEngine_resetDefaults> AMD_RenderingEngine_resetDefaultsPtr;

class AMI_RenderingEngine_resetDefaultsNoSave : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RenderingEnginePrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RenderingEngine_resetDefaultsNoSave> AMI_RenderingEngine_resetDefaultsNoSavePtr;

class AMD_RenderingEngine_resetDefaultsNoSave : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RenderingEngine_resetDefaultsNoSave> AMD_RenderingEngine_resetDefaultsNoSavePtr;

class AMI_RenderingEngine_setCompressionLevel : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RenderingEnginePrx&, ::Ice::Float, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RenderingEngine_setCompressionLevel> AMI_RenderingEngine_setCompressionLevelPtr;

class AMD_RenderingEngine_setCompressionLevel : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RenderingEngine_setCompressionLevel> AMD_RenderingEngine_setCompressionLevelPtr;

class AMI_RenderingEngine_getCompressionLevel : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(::Ice::Float) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RenderingEnginePrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RenderingEngine_getCompressionLevel> AMI_RenderingEngine_getCompressionLevelPtr;

class AMD_RenderingEngine_getCompressionLevel : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Float) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RenderingEngine_getCompressionLevel> AMD_RenderingEngine_getCompressionLevelPtr;

class AMI_RenderingEngine_isPixelsTypeSigned : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(bool) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RenderingEnginePrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RenderingEngine_isPixelsTypeSigned> AMI_RenderingEngine_isPixelsTypeSignedPtr;

class AMD_RenderingEngine_isPixelsTypeSigned : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(bool) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RenderingEngine_isPixelsTypeSigned> AMD_RenderingEngine_isPixelsTypeSignedPtr;

class AMI_RenderingEngine_getPixelsTypeUpperBound : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(::Ice::Double) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RenderingEnginePrx&, ::Ice::Int, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RenderingEngine_getPixelsTypeUpperBound> AMI_RenderingEngine_getPixelsTypeUpperBoundPtr;

class AMD_RenderingEngine_getPixelsTypeUpperBound : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Double) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RenderingEngine_getPixelsTypeUpperBound> AMD_RenderingEngine_getPixelsTypeUpperBoundPtr;

class AMI_RenderingEngine_getPixelsTypeLowerBound : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(::Ice::Double) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RenderingEnginePrx&, ::Ice::Int, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RenderingEngine_getPixelsTypeLowerBound> AMI_RenderingEngine_getPixelsTypeLowerBoundPtr;

class AMD_RenderingEngine_getPixelsTypeLowerBound : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Double) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RenderingEngine_getPixelsTypeLowerBound> AMD_RenderingEngine_getPixelsTypeLowerBoundPtr;

}

}

namespace IceAsync
{

namespace omero
{

namespace api
{

class AMD_RenderingEngine_render : public ::omero::api::AMD_RenderingEngine_render, public ::IceInternal::IncomingAsync
{
public:

    AMD_RenderingEngine_render(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::romio::RGBBufferPtr&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RenderingEngine_renderAsPackedInt : public ::omero::api::AMD_RenderingEngine_renderAsPackedInt, public ::IceInternal::IncomingAsync
{
public:

    AMD_RenderingEngine_renderAsPackedInt(::IceInternal::Incoming&);

    virtual void ice_response(const ::Ice::IntSeq&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RenderingEngine_renderAsPackedIntAsRGBA : public ::omero::api::AMD_RenderingEngine_renderAsPackedIntAsRGBA, public ::IceInternal::IncomingAsync
{
public:

    AMD_RenderingEngine_renderAsPackedIntAsRGBA(::IceInternal::Incoming&);

    virtual void ice_response(const ::Ice::IntSeq&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RenderingEngine_renderProjectedAsPackedInt : public ::omero::api::AMD_RenderingEngine_renderProjectedAsPackedInt, public ::IceInternal::IncomingAsync
{
public:

    AMD_RenderingEngine_renderProjectedAsPackedInt(::IceInternal::Incoming&);

    virtual void ice_response(const ::Ice::IntSeq&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RenderingEngine_renderCompressed : public ::omero::api::AMD_RenderingEngine_renderCompressed, public ::IceInternal::IncomingAsync
{
public:

    AMD_RenderingEngine_renderCompressed(::IceInternal::Incoming&);

    virtual void ice_response(const ::Ice::ByteSeq&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RenderingEngine_renderProjectedCompressed : public ::omero::api::AMD_RenderingEngine_renderProjectedCompressed, public ::IceInternal::IncomingAsync
{
public:

    AMD_RenderingEngine_renderProjectedCompressed(::IceInternal::Incoming&);

    virtual void ice_response(const ::Ice::ByteSeq&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RenderingEngine_getRenderingDefId : public ::omero::api::AMD_RenderingEngine_getRenderingDefId, public ::IceInternal::IncomingAsync
{
public:

    AMD_RenderingEngine_getRenderingDefId(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Long);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RenderingEngine_lookupPixels : public ::omero::api::AMD_RenderingEngine_lookupPixels, public ::IceInternal::IncomingAsync
{
public:

    AMD_RenderingEngine_lookupPixels(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RenderingEngine_lookupRenderingDef : public ::omero::api::AMD_RenderingEngine_lookupRenderingDef, public ::IceInternal::IncomingAsync
{
public:

    AMD_RenderingEngine_lookupRenderingDef(::IceInternal::Incoming&);

    virtual void ice_response(bool);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RenderingEngine_loadRenderingDef : public ::omero::api::AMD_RenderingEngine_loadRenderingDef, public ::IceInternal::IncomingAsync
{
public:

    AMD_RenderingEngine_loadRenderingDef(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RenderingEngine_setOverlays : public ::omero::api::AMD_RenderingEngine_setOverlays, public ::IceInternal::IncomingAsync
{
public:

    AMD_RenderingEngine_setOverlays(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RenderingEngine_load : public ::omero::api::AMD_RenderingEngine_load, public ::IceInternal::IncomingAsync
{
public:

    AMD_RenderingEngine_load(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RenderingEngine_setModel : public ::omero::api::AMD_RenderingEngine_setModel, public ::IceInternal::IncomingAsync
{
public:

    AMD_RenderingEngine_setModel(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RenderingEngine_getModel : public ::omero::api::AMD_RenderingEngine_getModel, public ::IceInternal::IncomingAsync
{
public:

    AMD_RenderingEngine_getModel(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::model::RenderingModelPtr&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RenderingEngine_getDefaultZ : public ::omero::api::AMD_RenderingEngine_getDefaultZ, public ::IceInternal::IncomingAsync
{
public:

    AMD_RenderingEngine_getDefaultZ(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RenderingEngine_getDefaultT : public ::omero::api::AMD_RenderingEngine_getDefaultT, public ::IceInternal::IncomingAsync
{
public:

    AMD_RenderingEngine_getDefaultT(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RenderingEngine_setDefaultZ : public ::omero::api::AMD_RenderingEngine_setDefaultZ, public ::IceInternal::IncomingAsync
{
public:

    AMD_RenderingEngine_setDefaultZ(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RenderingEngine_setDefaultT : public ::omero::api::AMD_RenderingEngine_setDefaultT, public ::IceInternal::IncomingAsync
{
public:

    AMD_RenderingEngine_setDefaultT(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RenderingEngine_getPixels : public ::omero::api::AMD_RenderingEngine_getPixels, public ::IceInternal::IncomingAsync
{
public:

    AMD_RenderingEngine_getPixels(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::model::PixelsPtr&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RenderingEngine_getAvailableModels : public ::omero::api::AMD_RenderingEngine_getAvailableModels, public ::IceInternal::IncomingAsync
{
public:

    AMD_RenderingEngine_getAvailableModels(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::IObjectList&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RenderingEngine_getAvailableFamilies : public ::omero::api::AMD_RenderingEngine_getAvailableFamilies, public ::IceInternal::IncomingAsync
{
public:

    AMD_RenderingEngine_getAvailableFamilies(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::IObjectList&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RenderingEngine_setQuantumStrategy : public ::omero::api::AMD_RenderingEngine_setQuantumStrategy, public ::IceInternal::IncomingAsync
{
public:

    AMD_RenderingEngine_setQuantumStrategy(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RenderingEngine_setCodomainInterval : public ::omero::api::AMD_RenderingEngine_setCodomainInterval, public ::IceInternal::IncomingAsync
{
public:

    AMD_RenderingEngine_setCodomainInterval(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RenderingEngine_getQuantumDef : public ::omero::api::AMD_RenderingEngine_getQuantumDef, public ::IceInternal::IncomingAsync
{
public:

    AMD_RenderingEngine_getQuantumDef(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::model::QuantumDefPtr&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RenderingEngine_setQuantizationMap : public ::omero::api::AMD_RenderingEngine_setQuantizationMap, public ::IceInternal::IncomingAsync
{
public:

    AMD_RenderingEngine_setQuantizationMap(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RenderingEngine_getChannelFamily : public ::omero::api::AMD_RenderingEngine_getChannelFamily, public ::IceInternal::IncomingAsync
{
public:

    AMD_RenderingEngine_getChannelFamily(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::model::FamilyPtr&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RenderingEngine_getChannelNoiseReduction : public ::omero::api::AMD_RenderingEngine_getChannelNoiseReduction, public ::IceInternal::IncomingAsync
{
public:

    AMD_RenderingEngine_getChannelNoiseReduction(::IceInternal::Incoming&);

    virtual void ice_response(bool);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RenderingEngine_getChannelStats : public ::omero::api::AMD_RenderingEngine_getChannelStats, public ::IceInternal::IncomingAsync
{
public:

    AMD_RenderingEngine_getChannelStats(::IceInternal::Incoming&);

    virtual void ice_response(const ::Ice::DoubleSeq&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RenderingEngine_getChannelCurveCoefficient : public ::omero::api::AMD_RenderingEngine_getChannelCurveCoefficient, public ::IceInternal::IncomingAsync
{
public:

    AMD_RenderingEngine_getChannelCurveCoefficient(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Double);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RenderingEngine_setChannelWindow : public ::omero::api::AMD_RenderingEngine_setChannelWindow, public ::IceInternal::IncomingAsync
{
public:

    AMD_RenderingEngine_setChannelWindow(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RenderingEngine_getChannelWindowStart : public ::omero::api::AMD_RenderingEngine_getChannelWindowStart, public ::IceInternal::IncomingAsync
{
public:

    AMD_RenderingEngine_getChannelWindowStart(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Double);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RenderingEngine_getChannelWindowEnd : public ::omero::api::AMD_RenderingEngine_getChannelWindowEnd, public ::IceInternal::IncomingAsync
{
public:

    AMD_RenderingEngine_getChannelWindowEnd(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Double);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RenderingEngine_setRGBA : public ::omero::api::AMD_RenderingEngine_setRGBA, public ::IceInternal::IncomingAsync
{
public:

    AMD_RenderingEngine_setRGBA(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RenderingEngine_getRGBA : public ::omero::api::AMD_RenderingEngine_getRGBA, public ::IceInternal::IncomingAsync
{
public:

    AMD_RenderingEngine_getRGBA(::IceInternal::Incoming&);

    virtual void ice_response(const ::Ice::IntSeq&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RenderingEngine_setActive : public ::omero::api::AMD_RenderingEngine_setActive, public ::IceInternal::IncomingAsync
{
public:

    AMD_RenderingEngine_setActive(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RenderingEngine_isActive : public ::omero::api::AMD_RenderingEngine_isActive, public ::IceInternal::IncomingAsync
{
public:

    AMD_RenderingEngine_isActive(::IceInternal::Incoming&);

    virtual void ice_response(bool);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RenderingEngine_addCodomainMap : public ::omero::api::AMD_RenderingEngine_addCodomainMap, public ::IceInternal::IncomingAsync
{
public:

    AMD_RenderingEngine_addCodomainMap(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RenderingEngine_updateCodomainMap : public ::omero::api::AMD_RenderingEngine_updateCodomainMap, public ::IceInternal::IncomingAsync
{
public:

    AMD_RenderingEngine_updateCodomainMap(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RenderingEngine_removeCodomainMap : public ::omero::api::AMD_RenderingEngine_removeCodomainMap, public ::IceInternal::IncomingAsync
{
public:

    AMD_RenderingEngine_removeCodomainMap(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RenderingEngine_saveCurrentSettings : public ::omero::api::AMD_RenderingEngine_saveCurrentSettings, public ::IceInternal::IncomingAsync
{
public:

    AMD_RenderingEngine_saveCurrentSettings(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RenderingEngine_resetDefaults : public ::omero::api::AMD_RenderingEngine_resetDefaults, public ::IceInternal::IncomingAsync
{
public:

    AMD_RenderingEngine_resetDefaults(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RenderingEngine_resetDefaultsNoSave : public ::omero::api::AMD_RenderingEngine_resetDefaultsNoSave, public ::IceInternal::IncomingAsync
{
public:

    AMD_RenderingEngine_resetDefaultsNoSave(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RenderingEngine_setCompressionLevel : public ::omero::api::AMD_RenderingEngine_setCompressionLevel, public ::IceInternal::IncomingAsync
{
public:

    AMD_RenderingEngine_setCompressionLevel(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RenderingEngine_getCompressionLevel : public ::omero::api::AMD_RenderingEngine_getCompressionLevel, public ::IceInternal::IncomingAsync
{
public:

    AMD_RenderingEngine_getCompressionLevel(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Float);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RenderingEngine_isPixelsTypeSigned : public ::omero::api::AMD_RenderingEngine_isPixelsTypeSigned, public ::IceInternal::IncomingAsync
{
public:

    AMD_RenderingEngine_isPixelsTypeSigned(::IceInternal::Incoming&);

    virtual void ice_response(bool);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RenderingEngine_getPixelsTypeUpperBound : public ::omero::api::AMD_RenderingEngine_getPixelsTypeUpperBound, public ::IceInternal::IncomingAsync
{
public:

    AMD_RenderingEngine_getPixelsTypeUpperBound(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Double);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RenderingEngine_getPixelsTypeLowerBound : public ::omero::api::AMD_RenderingEngine_getPixelsTypeLowerBound, public ::IceInternal::IncomingAsync
{
public:

    AMD_RenderingEngine_getPixelsTypeLowerBound(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Double);
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

class RenderingEngine : virtual public ::IceProxy::omero::api::PyramidService
{
public:

    ::omero::romio::RGBBufferPtr render(const ::omero::romio::PlaneDefPtr& def)
    {
        return render(def, 0);
    }
    ::omero::romio::RGBBufferPtr render(const ::omero::romio::PlaneDefPtr& def, const ::Ice::Context& __ctx)
    {
        return render(def, &__ctx);
    }
    
private:

    ::omero::romio::RGBBufferPtr render(const ::omero::romio::PlaneDefPtr&, const ::Ice::Context*);
    
public:
    bool render_async(const ::omero::api::AMI_RenderingEngine_renderPtr&, const ::omero::romio::PlaneDefPtr&);
    bool render_async(const ::omero::api::AMI_RenderingEngine_renderPtr&, const ::omero::romio::PlaneDefPtr&, const ::Ice::Context&);

    ::Ice::IntSeq renderAsPackedInt(const ::omero::romio::PlaneDefPtr& def)
    {
        return renderAsPackedInt(def, 0);
    }
    ::Ice::IntSeq renderAsPackedInt(const ::omero::romio::PlaneDefPtr& def, const ::Ice::Context& __ctx)
    {
        return renderAsPackedInt(def, &__ctx);
    }
    
private:

    ::Ice::IntSeq renderAsPackedInt(const ::omero::romio::PlaneDefPtr&, const ::Ice::Context*);
    
public:
    bool renderAsPackedInt_async(const ::omero::api::AMI_RenderingEngine_renderAsPackedIntPtr&, const ::omero::romio::PlaneDefPtr&);
    bool renderAsPackedInt_async(const ::omero::api::AMI_RenderingEngine_renderAsPackedIntPtr&, const ::omero::romio::PlaneDefPtr&, const ::Ice::Context&);

    ICE_DEPRECATED_API ::Ice::IntSeq renderAsPackedIntAsRGBA(const ::omero::romio::PlaneDefPtr& def)
    {
        return renderAsPackedIntAsRGBA(def, 0);
    }
    ICE_DEPRECATED_API ::Ice::IntSeq renderAsPackedIntAsRGBA(const ::omero::romio::PlaneDefPtr& def, const ::Ice::Context& __ctx)
    {
        return renderAsPackedIntAsRGBA(def, &__ctx);
    }
    
private:

    ::Ice::IntSeq renderAsPackedIntAsRGBA(const ::omero::romio::PlaneDefPtr&, const ::Ice::Context*);
    
public:
    bool renderAsPackedIntAsRGBA_async(const ::omero::api::AMI_RenderingEngine_renderAsPackedIntAsRGBAPtr&, const ::omero::romio::PlaneDefPtr&);
    bool renderAsPackedIntAsRGBA_async(const ::omero::api::AMI_RenderingEngine_renderAsPackedIntAsRGBAPtr&, const ::omero::romio::PlaneDefPtr&, const ::Ice::Context&);

    ::Ice::IntSeq renderProjectedAsPackedInt(::omero::constants::projection::ProjectionType algorithm, ::Ice::Int timepoint, ::Ice::Int stepping, ::Ice::Int start, ::Ice::Int end)
    {
        return renderProjectedAsPackedInt(algorithm, timepoint, stepping, start, end, 0);
    }
    ::Ice::IntSeq renderProjectedAsPackedInt(::omero::constants::projection::ProjectionType algorithm, ::Ice::Int timepoint, ::Ice::Int stepping, ::Ice::Int start, ::Ice::Int end, const ::Ice::Context& __ctx)
    {
        return renderProjectedAsPackedInt(algorithm, timepoint, stepping, start, end, &__ctx);
    }
    
private:

    ::Ice::IntSeq renderProjectedAsPackedInt(::omero::constants::projection::ProjectionType, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:
    bool renderProjectedAsPackedInt_async(const ::omero::api::AMI_RenderingEngine_renderProjectedAsPackedIntPtr&, ::omero::constants::projection::ProjectionType, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int);
    bool renderProjectedAsPackedInt_async(const ::omero::api::AMI_RenderingEngine_renderProjectedAsPackedIntPtr&, ::omero::constants::projection::ProjectionType, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context&);

    ::Ice::ByteSeq renderCompressed(const ::omero::romio::PlaneDefPtr& def)
    {
        return renderCompressed(def, 0);
    }
    ::Ice::ByteSeq renderCompressed(const ::omero::romio::PlaneDefPtr& def, const ::Ice::Context& __ctx)
    {
        return renderCompressed(def, &__ctx);
    }
    
private:

    ::Ice::ByteSeq renderCompressed(const ::omero::romio::PlaneDefPtr&, const ::Ice::Context*);
    
public:
    bool renderCompressed_async(const ::omero::api::AMI_RenderingEngine_renderCompressedPtr&, const ::omero::romio::PlaneDefPtr&);
    bool renderCompressed_async(const ::omero::api::AMI_RenderingEngine_renderCompressedPtr&, const ::omero::romio::PlaneDefPtr&, const ::Ice::Context&);

    ::Ice::ByteSeq renderProjectedCompressed(::omero::constants::projection::ProjectionType algorithm, ::Ice::Int timepoint, ::Ice::Int stepping, ::Ice::Int start, ::Ice::Int end)
    {
        return renderProjectedCompressed(algorithm, timepoint, stepping, start, end, 0);
    }
    ::Ice::ByteSeq renderProjectedCompressed(::omero::constants::projection::ProjectionType algorithm, ::Ice::Int timepoint, ::Ice::Int stepping, ::Ice::Int start, ::Ice::Int end, const ::Ice::Context& __ctx)
    {
        return renderProjectedCompressed(algorithm, timepoint, stepping, start, end, &__ctx);
    }
    
private:

    ::Ice::ByteSeq renderProjectedCompressed(::omero::constants::projection::ProjectionType, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:
    bool renderProjectedCompressed_async(const ::omero::api::AMI_RenderingEngine_renderProjectedCompressedPtr&, ::omero::constants::projection::ProjectionType, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int);
    bool renderProjectedCompressed_async(const ::omero::api::AMI_RenderingEngine_renderProjectedCompressedPtr&, ::omero::constants::projection::ProjectionType, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context&);

    ::Ice::Long getRenderingDefId()
    {
        return getRenderingDefId(0);
    }
    ::Ice::Long getRenderingDefId(const ::Ice::Context& __ctx)
    {
        return getRenderingDefId(&__ctx);
    }
    
private:

    ::Ice::Long getRenderingDefId(const ::Ice::Context*);
    
public:
    bool getRenderingDefId_async(const ::omero::api::AMI_RenderingEngine_getRenderingDefIdPtr&);
    bool getRenderingDefId_async(const ::omero::api::AMI_RenderingEngine_getRenderingDefIdPtr&, const ::Ice::Context&);

    void lookupPixels(::Ice::Long pixelsId)
    {
        lookupPixels(pixelsId, 0);
    }
    void lookupPixels(::Ice::Long pixelsId, const ::Ice::Context& __ctx)
    {
        lookupPixels(pixelsId, &__ctx);
    }
    
private:

    void lookupPixels(::Ice::Long, const ::Ice::Context*);
    
public:
    bool lookupPixels_async(const ::omero::api::AMI_RenderingEngine_lookupPixelsPtr&, ::Ice::Long);
    bool lookupPixels_async(const ::omero::api::AMI_RenderingEngine_lookupPixelsPtr&, ::Ice::Long, const ::Ice::Context&);

    bool lookupRenderingDef(::Ice::Long pixelsId)
    {
        return lookupRenderingDef(pixelsId, 0);
    }
    bool lookupRenderingDef(::Ice::Long pixelsId, const ::Ice::Context& __ctx)
    {
        return lookupRenderingDef(pixelsId, &__ctx);
    }
    
private:

    bool lookupRenderingDef(::Ice::Long, const ::Ice::Context*);
    
public:
    bool lookupRenderingDef_async(const ::omero::api::AMI_RenderingEngine_lookupRenderingDefPtr&, ::Ice::Long);
    bool lookupRenderingDef_async(const ::omero::api::AMI_RenderingEngine_lookupRenderingDefPtr&, ::Ice::Long, const ::Ice::Context&);

    void loadRenderingDef(::Ice::Long renderingDefId)
    {
        loadRenderingDef(renderingDefId, 0);
    }
    void loadRenderingDef(::Ice::Long renderingDefId, const ::Ice::Context& __ctx)
    {
        loadRenderingDef(renderingDefId, &__ctx);
    }
    
private:

    void loadRenderingDef(::Ice::Long, const ::Ice::Context*);
    
public:
    bool loadRenderingDef_async(const ::omero::api::AMI_RenderingEngine_loadRenderingDefPtr&, ::Ice::Long);
    bool loadRenderingDef_async(const ::omero::api::AMI_RenderingEngine_loadRenderingDefPtr&, ::Ice::Long, const ::Ice::Context&);

    void setOverlays(const ::omero::RLongPtr& tablesId, const ::omero::RLongPtr& imageId, const ::omero::api::LongIntMap& rowColorMap)
    {
        setOverlays(tablesId, imageId, rowColorMap, 0);
    }
    void setOverlays(const ::omero::RLongPtr& tablesId, const ::omero::RLongPtr& imageId, const ::omero::api::LongIntMap& rowColorMap, const ::Ice::Context& __ctx)
    {
        setOverlays(tablesId, imageId, rowColorMap, &__ctx);
    }
    
private:

    void setOverlays(const ::omero::RLongPtr&, const ::omero::RLongPtr&, const ::omero::api::LongIntMap&, const ::Ice::Context*);
    
public:
    bool setOverlays_async(const ::omero::api::AMI_RenderingEngine_setOverlaysPtr&, const ::omero::RLongPtr&, const ::omero::RLongPtr&, const ::omero::api::LongIntMap&);
    bool setOverlays_async(const ::omero::api::AMI_RenderingEngine_setOverlaysPtr&, const ::omero::RLongPtr&, const ::omero::RLongPtr&, const ::omero::api::LongIntMap&, const ::Ice::Context&);

    void load()
    {
        load(0);
    }
    void load(const ::Ice::Context& __ctx)
    {
        load(&__ctx);
    }
    
private:

    void load(const ::Ice::Context*);
    
public:
    bool load_async(const ::omero::api::AMI_RenderingEngine_loadPtr&);
    bool load_async(const ::omero::api::AMI_RenderingEngine_loadPtr&, const ::Ice::Context&);

    void setModel(const ::omero::model::RenderingModelPtr& model)
    {
        setModel(model, 0);
    }
    void setModel(const ::omero::model::RenderingModelPtr& model, const ::Ice::Context& __ctx)
    {
        setModel(model, &__ctx);
    }
    
private:

    void setModel(const ::omero::model::RenderingModelPtr&, const ::Ice::Context*);
    
public:
    bool setModel_async(const ::omero::api::AMI_RenderingEngine_setModelPtr&, const ::omero::model::RenderingModelPtr&);
    bool setModel_async(const ::omero::api::AMI_RenderingEngine_setModelPtr&, const ::omero::model::RenderingModelPtr&, const ::Ice::Context&);

    ::omero::model::RenderingModelPtr getModel()
    {
        return getModel(0);
    }
    ::omero::model::RenderingModelPtr getModel(const ::Ice::Context& __ctx)
    {
        return getModel(&__ctx);
    }
    
private:

    ::omero::model::RenderingModelPtr getModel(const ::Ice::Context*);
    
public:
    bool getModel_async(const ::omero::api::AMI_RenderingEngine_getModelPtr&);
    bool getModel_async(const ::omero::api::AMI_RenderingEngine_getModelPtr&, const ::Ice::Context&);

    ::Ice::Int getDefaultZ()
    {
        return getDefaultZ(0);
    }
    ::Ice::Int getDefaultZ(const ::Ice::Context& __ctx)
    {
        return getDefaultZ(&__ctx);
    }
    
private:

    ::Ice::Int getDefaultZ(const ::Ice::Context*);
    
public:
    bool getDefaultZ_async(const ::omero::api::AMI_RenderingEngine_getDefaultZPtr&);
    bool getDefaultZ_async(const ::omero::api::AMI_RenderingEngine_getDefaultZPtr&, const ::Ice::Context&);

    ::Ice::Int getDefaultT()
    {
        return getDefaultT(0);
    }
    ::Ice::Int getDefaultT(const ::Ice::Context& __ctx)
    {
        return getDefaultT(&__ctx);
    }
    
private:

    ::Ice::Int getDefaultT(const ::Ice::Context*);
    
public:
    bool getDefaultT_async(const ::omero::api::AMI_RenderingEngine_getDefaultTPtr&);
    bool getDefaultT_async(const ::omero::api::AMI_RenderingEngine_getDefaultTPtr&, const ::Ice::Context&);

    void setDefaultZ(::Ice::Int z)
    {
        setDefaultZ(z, 0);
    }
    void setDefaultZ(::Ice::Int z, const ::Ice::Context& __ctx)
    {
        setDefaultZ(z, &__ctx);
    }
    
private:

    void setDefaultZ(::Ice::Int, const ::Ice::Context*);
    
public:
    bool setDefaultZ_async(const ::omero::api::AMI_RenderingEngine_setDefaultZPtr&, ::Ice::Int);
    bool setDefaultZ_async(const ::omero::api::AMI_RenderingEngine_setDefaultZPtr&, ::Ice::Int, const ::Ice::Context&);

    void setDefaultT(::Ice::Int t)
    {
        setDefaultT(t, 0);
    }
    void setDefaultT(::Ice::Int t, const ::Ice::Context& __ctx)
    {
        setDefaultT(t, &__ctx);
    }
    
private:

    void setDefaultT(::Ice::Int, const ::Ice::Context*);
    
public:
    bool setDefaultT_async(const ::omero::api::AMI_RenderingEngine_setDefaultTPtr&, ::Ice::Int);
    bool setDefaultT_async(const ::omero::api::AMI_RenderingEngine_setDefaultTPtr&, ::Ice::Int, const ::Ice::Context&);

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
    bool getPixels_async(const ::omero::api::AMI_RenderingEngine_getPixelsPtr&);
    bool getPixels_async(const ::omero::api::AMI_RenderingEngine_getPixelsPtr&, const ::Ice::Context&);

    ::omero::api::IObjectList getAvailableModels()
    {
        return getAvailableModels(0);
    }
    ::omero::api::IObjectList getAvailableModels(const ::Ice::Context& __ctx)
    {
        return getAvailableModels(&__ctx);
    }
    
private:

    ::omero::api::IObjectList getAvailableModels(const ::Ice::Context*);
    
public:
    bool getAvailableModels_async(const ::omero::api::AMI_RenderingEngine_getAvailableModelsPtr&);
    bool getAvailableModels_async(const ::omero::api::AMI_RenderingEngine_getAvailableModelsPtr&, const ::Ice::Context&);

    ::omero::api::IObjectList getAvailableFamilies()
    {
        return getAvailableFamilies(0);
    }
    ::omero::api::IObjectList getAvailableFamilies(const ::Ice::Context& __ctx)
    {
        return getAvailableFamilies(&__ctx);
    }
    
private:

    ::omero::api::IObjectList getAvailableFamilies(const ::Ice::Context*);
    
public:
    bool getAvailableFamilies_async(const ::omero::api::AMI_RenderingEngine_getAvailableFamiliesPtr&);
    bool getAvailableFamilies_async(const ::omero::api::AMI_RenderingEngine_getAvailableFamiliesPtr&, const ::Ice::Context&);

    void setQuantumStrategy(::Ice::Int bitResolution)
    {
        setQuantumStrategy(bitResolution, 0);
    }
    void setQuantumStrategy(::Ice::Int bitResolution, const ::Ice::Context& __ctx)
    {
        setQuantumStrategy(bitResolution, &__ctx);
    }
    
private:

    void setQuantumStrategy(::Ice::Int, const ::Ice::Context*);
    
public:
    bool setQuantumStrategy_async(const ::omero::api::AMI_RenderingEngine_setQuantumStrategyPtr&, ::Ice::Int);
    bool setQuantumStrategy_async(const ::omero::api::AMI_RenderingEngine_setQuantumStrategyPtr&, ::Ice::Int, const ::Ice::Context&);

    void setCodomainInterval(::Ice::Int start, ::Ice::Int end)
    {
        setCodomainInterval(start, end, 0);
    }
    void setCodomainInterval(::Ice::Int start, ::Ice::Int end, const ::Ice::Context& __ctx)
    {
        setCodomainInterval(start, end, &__ctx);
    }
    
private:

    void setCodomainInterval(::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:
    bool setCodomainInterval_async(const ::omero::api::AMI_RenderingEngine_setCodomainIntervalPtr&, ::Ice::Int, ::Ice::Int);
    bool setCodomainInterval_async(const ::omero::api::AMI_RenderingEngine_setCodomainIntervalPtr&, ::Ice::Int, ::Ice::Int, const ::Ice::Context&);

    ::omero::model::QuantumDefPtr getQuantumDef()
    {
        return getQuantumDef(0);
    }
    ::omero::model::QuantumDefPtr getQuantumDef(const ::Ice::Context& __ctx)
    {
        return getQuantumDef(&__ctx);
    }
    
private:

    ::omero::model::QuantumDefPtr getQuantumDef(const ::Ice::Context*);
    
public:
    bool getQuantumDef_async(const ::omero::api::AMI_RenderingEngine_getQuantumDefPtr&);
    bool getQuantumDef_async(const ::omero::api::AMI_RenderingEngine_getQuantumDefPtr&, const ::Ice::Context&);

    void setQuantizationMap(::Ice::Int w, const ::omero::model::FamilyPtr& fam, ::Ice::Double coefficient, bool noiseReduction)
    {
        setQuantizationMap(w, fam, coefficient, noiseReduction, 0);
    }
    void setQuantizationMap(::Ice::Int w, const ::omero::model::FamilyPtr& fam, ::Ice::Double coefficient, bool noiseReduction, const ::Ice::Context& __ctx)
    {
        setQuantizationMap(w, fam, coefficient, noiseReduction, &__ctx);
    }
    
private:

    void setQuantizationMap(::Ice::Int, const ::omero::model::FamilyPtr&, ::Ice::Double, bool, const ::Ice::Context*);
    
public:
    bool setQuantizationMap_async(const ::omero::api::AMI_RenderingEngine_setQuantizationMapPtr&, ::Ice::Int, const ::omero::model::FamilyPtr&, ::Ice::Double, bool);
    bool setQuantizationMap_async(const ::omero::api::AMI_RenderingEngine_setQuantizationMapPtr&, ::Ice::Int, const ::omero::model::FamilyPtr&, ::Ice::Double, bool, const ::Ice::Context&);

    ::omero::model::FamilyPtr getChannelFamily(::Ice::Int w)
    {
        return getChannelFamily(w, 0);
    }
    ::omero::model::FamilyPtr getChannelFamily(::Ice::Int w, const ::Ice::Context& __ctx)
    {
        return getChannelFamily(w, &__ctx);
    }
    
private:

    ::omero::model::FamilyPtr getChannelFamily(::Ice::Int, const ::Ice::Context*);
    
public:
    bool getChannelFamily_async(const ::omero::api::AMI_RenderingEngine_getChannelFamilyPtr&, ::Ice::Int);
    bool getChannelFamily_async(const ::omero::api::AMI_RenderingEngine_getChannelFamilyPtr&, ::Ice::Int, const ::Ice::Context&);

    bool getChannelNoiseReduction(::Ice::Int w)
    {
        return getChannelNoiseReduction(w, 0);
    }
    bool getChannelNoiseReduction(::Ice::Int w, const ::Ice::Context& __ctx)
    {
        return getChannelNoiseReduction(w, &__ctx);
    }
    
private:

    bool getChannelNoiseReduction(::Ice::Int, const ::Ice::Context*);
    
public:
    bool getChannelNoiseReduction_async(const ::omero::api::AMI_RenderingEngine_getChannelNoiseReductionPtr&, ::Ice::Int);
    bool getChannelNoiseReduction_async(const ::omero::api::AMI_RenderingEngine_getChannelNoiseReductionPtr&, ::Ice::Int, const ::Ice::Context&);

    ::Ice::DoubleSeq getChannelStats(::Ice::Int w)
    {
        return getChannelStats(w, 0);
    }
    ::Ice::DoubleSeq getChannelStats(::Ice::Int w, const ::Ice::Context& __ctx)
    {
        return getChannelStats(w, &__ctx);
    }
    
private:

    ::Ice::DoubleSeq getChannelStats(::Ice::Int, const ::Ice::Context*);
    
public:
    bool getChannelStats_async(const ::omero::api::AMI_RenderingEngine_getChannelStatsPtr&, ::Ice::Int);
    bool getChannelStats_async(const ::omero::api::AMI_RenderingEngine_getChannelStatsPtr&, ::Ice::Int, const ::Ice::Context&);

    ::Ice::Double getChannelCurveCoefficient(::Ice::Int w)
    {
        return getChannelCurveCoefficient(w, 0);
    }
    ::Ice::Double getChannelCurveCoefficient(::Ice::Int w, const ::Ice::Context& __ctx)
    {
        return getChannelCurveCoefficient(w, &__ctx);
    }
    
private:

    ::Ice::Double getChannelCurveCoefficient(::Ice::Int, const ::Ice::Context*);
    
public:
    bool getChannelCurveCoefficient_async(const ::omero::api::AMI_RenderingEngine_getChannelCurveCoefficientPtr&, ::Ice::Int);
    bool getChannelCurveCoefficient_async(const ::omero::api::AMI_RenderingEngine_getChannelCurveCoefficientPtr&, ::Ice::Int, const ::Ice::Context&);

    void setChannelWindow(::Ice::Int w, ::Ice::Double start, ::Ice::Double end)
    {
        setChannelWindow(w, start, end, 0);
    }
    void setChannelWindow(::Ice::Int w, ::Ice::Double start, ::Ice::Double end, const ::Ice::Context& __ctx)
    {
        setChannelWindow(w, start, end, &__ctx);
    }
    
private:

    void setChannelWindow(::Ice::Int, ::Ice::Double, ::Ice::Double, const ::Ice::Context*);
    
public:
    bool setChannelWindow_async(const ::omero::api::AMI_RenderingEngine_setChannelWindowPtr&, ::Ice::Int, ::Ice::Double, ::Ice::Double);
    bool setChannelWindow_async(const ::omero::api::AMI_RenderingEngine_setChannelWindowPtr&, ::Ice::Int, ::Ice::Double, ::Ice::Double, const ::Ice::Context&);

    ::Ice::Double getChannelWindowStart(::Ice::Int w)
    {
        return getChannelWindowStart(w, 0);
    }
    ::Ice::Double getChannelWindowStart(::Ice::Int w, const ::Ice::Context& __ctx)
    {
        return getChannelWindowStart(w, &__ctx);
    }
    
private:

    ::Ice::Double getChannelWindowStart(::Ice::Int, const ::Ice::Context*);
    
public:
    bool getChannelWindowStart_async(const ::omero::api::AMI_RenderingEngine_getChannelWindowStartPtr&, ::Ice::Int);
    bool getChannelWindowStart_async(const ::omero::api::AMI_RenderingEngine_getChannelWindowStartPtr&, ::Ice::Int, const ::Ice::Context&);

    ::Ice::Double getChannelWindowEnd(::Ice::Int w)
    {
        return getChannelWindowEnd(w, 0);
    }
    ::Ice::Double getChannelWindowEnd(::Ice::Int w, const ::Ice::Context& __ctx)
    {
        return getChannelWindowEnd(w, &__ctx);
    }
    
private:

    ::Ice::Double getChannelWindowEnd(::Ice::Int, const ::Ice::Context*);
    
public:
    bool getChannelWindowEnd_async(const ::omero::api::AMI_RenderingEngine_getChannelWindowEndPtr&, ::Ice::Int);
    bool getChannelWindowEnd_async(const ::omero::api::AMI_RenderingEngine_getChannelWindowEndPtr&, ::Ice::Int, const ::Ice::Context&);

    void setRGBA(::Ice::Int w, ::Ice::Int red, ::Ice::Int green, ::Ice::Int blue, ::Ice::Int alpha)
    {
        setRGBA(w, red, green, blue, alpha, 0);
    }
    void setRGBA(::Ice::Int w, ::Ice::Int red, ::Ice::Int green, ::Ice::Int blue, ::Ice::Int alpha, const ::Ice::Context& __ctx)
    {
        setRGBA(w, red, green, blue, alpha, &__ctx);
    }
    
private:

    void setRGBA(::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:
    bool setRGBA_async(const ::omero::api::AMI_RenderingEngine_setRGBAPtr&, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int);
    bool setRGBA_async(const ::omero::api::AMI_RenderingEngine_setRGBAPtr&, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context&);

    ::Ice::IntSeq getRGBA(::Ice::Int w)
    {
        return getRGBA(w, 0);
    }
    ::Ice::IntSeq getRGBA(::Ice::Int w, const ::Ice::Context& __ctx)
    {
        return getRGBA(w, &__ctx);
    }
    
private:

    ::Ice::IntSeq getRGBA(::Ice::Int, const ::Ice::Context*);
    
public:
    bool getRGBA_async(const ::omero::api::AMI_RenderingEngine_getRGBAPtr&, ::Ice::Int);
    bool getRGBA_async(const ::omero::api::AMI_RenderingEngine_getRGBAPtr&, ::Ice::Int, const ::Ice::Context&);

    void setActive(::Ice::Int w, bool active)
    {
        setActive(w, active, 0);
    }
    void setActive(::Ice::Int w, bool active, const ::Ice::Context& __ctx)
    {
        setActive(w, active, &__ctx);
    }
    
private:

    void setActive(::Ice::Int, bool, const ::Ice::Context*);
    
public:
    bool setActive_async(const ::omero::api::AMI_RenderingEngine_setActivePtr&, ::Ice::Int, bool);
    bool setActive_async(const ::omero::api::AMI_RenderingEngine_setActivePtr&, ::Ice::Int, bool, const ::Ice::Context&);

    bool isActive(::Ice::Int w)
    {
        return isActive(w, 0);
    }
    bool isActive(::Ice::Int w, const ::Ice::Context& __ctx)
    {
        return isActive(w, &__ctx);
    }
    
private:

    bool isActive(::Ice::Int, const ::Ice::Context*);
    
public:
    bool isActive_async(const ::omero::api::AMI_RenderingEngine_isActivePtr&, ::Ice::Int);
    bool isActive_async(const ::omero::api::AMI_RenderingEngine_isActivePtr&, ::Ice::Int, const ::Ice::Context&);

    void addCodomainMap(const ::omero::romio::CodomainMapContextPtr& mapCtx)
    {
        addCodomainMap(mapCtx, 0);
    }
    void addCodomainMap(const ::omero::romio::CodomainMapContextPtr& mapCtx, const ::Ice::Context& __ctx)
    {
        addCodomainMap(mapCtx, &__ctx);
    }
    
private:

    void addCodomainMap(const ::omero::romio::CodomainMapContextPtr&, const ::Ice::Context*);
    
public:
    bool addCodomainMap_async(const ::omero::api::AMI_RenderingEngine_addCodomainMapPtr&, const ::omero::romio::CodomainMapContextPtr&);
    bool addCodomainMap_async(const ::omero::api::AMI_RenderingEngine_addCodomainMapPtr&, const ::omero::romio::CodomainMapContextPtr&, const ::Ice::Context&);

    void updateCodomainMap(const ::omero::romio::CodomainMapContextPtr& mapCtx)
    {
        updateCodomainMap(mapCtx, 0);
    }
    void updateCodomainMap(const ::omero::romio::CodomainMapContextPtr& mapCtx, const ::Ice::Context& __ctx)
    {
        updateCodomainMap(mapCtx, &__ctx);
    }
    
private:

    void updateCodomainMap(const ::omero::romio::CodomainMapContextPtr&, const ::Ice::Context*);
    
public:
    bool updateCodomainMap_async(const ::omero::api::AMI_RenderingEngine_updateCodomainMapPtr&, const ::omero::romio::CodomainMapContextPtr&);
    bool updateCodomainMap_async(const ::omero::api::AMI_RenderingEngine_updateCodomainMapPtr&, const ::omero::romio::CodomainMapContextPtr&, const ::Ice::Context&);

    void removeCodomainMap(const ::omero::romio::CodomainMapContextPtr& mapCtx)
    {
        removeCodomainMap(mapCtx, 0);
    }
    void removeCodomainMap(const ::omero::romio::CodomainMapContextPtr& mapCtx, const ::Ice::Context& __ctx)
    {
        removeCodomainMap(mapCtx, &__ctx);
    }
    
private:

    void removeCodomainMap(const ::omero::romio::CodomainMapContextPtr&, const ::Ice::Context*);
    
public:
    bool removeCodomainMap_async(const ::omero::api::AMI_RenderingEngine_removeCodomainMapPtr&, const ::omero::romio::CodomainMapContextPtr&);
    bool removeCodomainMap_async(const ::omero::api::AMI_RenderingEngine_removeCodomainMapPtr&, const ::omero::romio::CodomainMapContextPtr&, const ::Ice::Context&);

    void saveCurrentSettings()
    {
        saveCurrentSettings(0);
    }
    void saveCurrentSettings(const ::Ice::Context& __ctx)
    {
        saveCurrentSettings(&__ctx);
    }
    
private:

    void saveCurrentSettings(const ::Ice::Context*);
    
public:
    bool saveCurrentSettings_async(const ::omero::api::AMI_RenderingEngine_saveCurrentSettingsPtr&);
    bool saveCurrentSettings_async(const ::omero::api::AMI_RenderingEngine_saveCurrentSettingsPtr&, const ::Ice::Context&);

    void resetDefaults()
    {
        resetDefaults(0);
    }
    void resetDefaults(const ::Ice::Context& __ctx)
    {
        resetDefaults(&__ctx);
    }
    
private:

    void resetDefaults(const ::Ice::Context*);
    
public:
    bool resetDefaults_async(const ::omero::api::AMI_RenderingEngine_resetDefaultsPtr&);
    bool resetDefaults_async(const ::omero::api::AMI_RenderingEngine_resetDefaultsPtr&, const ::Ice::Context&);

    void resetDefaultsNoSave()
    {
        resetDefaultsNoSave(0);
    }
    void resetDefaultsNoSave(const ::Ice::Context& __ctx)
    {
        resetDefaultsNoSave(&__ctx);
    }
    
private:

    void resetDefaultsNoSave(const ::Ice::Context*);
    
public:
    bool resetDefaultsNoSave_async(const ::omero::api::AMI_RenderingEngine_resetDefaultsNoSavePtr&);
    bool resetDefaultsNoSave_async(const ::omero::api::AMI_RenderingEngine_resetDefaultsNoSavePtr&, const ::Ice::Context&);

    void setCompressionLevel(::Ice::Float percentage)
    {
        setCompressionLevel(percentage, 0);
    }
    void setCompressionLevel(::Ice::Float percentage, const ::Ice::Context& __ctx)
    {
        setCompressionLevel(percentage, &__ctx);
    }
    
private:

    void setCompressionLevel(::Ice::Float, const ::Ice::Context*);
    
public:
    bool setCompressionLevel_async(const ::omero::api::AMI_RenderingEngine_setCompressionLevelPtr&, ::Ice::Float);
    bool setCompressionLevel_async(const ::omero::api::AMI_RenderingEngine_setCompressionLevelPtr&, ::Ice::Float, const ::Ice::Context&);

    ::Ice::Float getCompressionLevel()
    {
        return getCompressionLevel(0);
    }
    ::Ice::Float getCompressionLevel(const ::Ice::Context& __ctx)
    {
        return getCompressionLevel(&__ctx);
    }
    
private:

    ::Ice::Float getCompressionLevel(const ::Ice::Context*);
    
public:
    bool getCompressionLevel_async(const ::omero::api::AMI_RenderingEngine_getCompressionLevelPtr&);
    bool getCompressionLevel_async(const ::omero::api::AMI_RenderingEngine_getCompressionLevelPtr&, const ::Ice::Context&);

    bool isPixelsTypeSigned()
    {
        return isPixelsTypeSigned(0);
    }
    bool isPixelsTypeSigned(const ::Ice::Context& __ctx)
    {
        return isPixelsTypeSigned(&__ctx);
    }
    
private:

    bool isPixelsTypeSigned(const ::Ice::Context*);
    
public:
    bool isPixelsTypeSigned_async(const ::omero::api::AMI_RenderingEngine_isPixelsTypeSignedPtr&);
    bool isPixelsTypeSigned_async(const ::omero::api::AMI_RenderingEngine_isPixelsTypeSignedPtr&, const ::Ice::Context&);

    ::Ice::Double getPixelsTypeUpperBound(::Ice::Int w)
    {
        return getPixelsTypeUpperBound(w, 0);
    }
    ::Ice::Double getPixelsTypeUpperBound(::Ice::Int w, const ::Ice::Context& __ctx)
    {
        return getPixelsTypeUpperBound(w, &__ctx);
    }
    
private:

    ::Ice::Double getPixelsTypeUpperBound(::Ice::Int, const ::Ice::Context*);
    
public:
    bool getPixelsTypeUpperBound_async(const ::omero::api::AMI_RenderingEngine_getPixelsTypeUpperBoundPtr&, ::Ice::Int);
    bool getPixelsTypeUpperBound_async(const ::omero::api::AMI_RenderingEngine_getPixelsTypeUpperBoundPtr&, ::Ice::Int, const ::Ice::Context&);

    ::Ice::Double getPixelsTypeLowerBound(::Ice::Int w)
    {
        return getPixelsTypeLowerBound(w, 0);
    }
    ::Ice::Double getPixelsTypeLowerBound(::Ice::Int w, const ::Ice::Context& __ctx)
    {
        return getPixelsTypeLowerBound(w, &__ctx);
    }
    
private:

    ::Ice::Double getPixelsTypeLowerBound(::Ice::Int, const ::Ice::Context*);
    
public:
    bool getPixelsTypeLowerBound_async(const ::omero::api::AMI_RenderingEngine_getPixelsTypeLowerBoundPtr&, ::Ice::Int);
    bool getPixelsTypeLowerBound_async(const ::omero::api::AMI_RenderingEngine_getPixelsTypeLowerBoundPtr&, ::Ice::Int, const ::Ice::Context&);
    
    ::IceInternal::ProxyHandle<RenderingEngine> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RenderingEngine*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<RenderingEngine*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RenderingEngine> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RenderingEngine*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<RenderingEngine*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RenderingEngine> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RenderingEngine*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<RenderingEngine*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RenderingEngine> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RenderingEngine*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<RenderingEngine*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RenderingEngine> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RenderingEngine*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<RenderingEngine*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RenderingEngine> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RenderingEngine*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<RenderingEngine*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RenderingEngine> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RenderingEngine*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<RenderingEngine*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RenderingEngine> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RenderingEngine*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<RenderingEngine*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RenderingEngine> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RenderingEngine*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<RenderingEngine*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RenderingEngine> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RenderingEngine*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<RenderingEngine*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RenderingEngine> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RenderingEngine*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<RenderingEngine*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RenderingEngine> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RenderingEngine*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<RenderingEngine*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RenderingEngine> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RenderingEngine*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<RenderingEngine*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RenderingEngine> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RenderingEngine*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<RenderingEngine*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RenderingEngine> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RenderingEngine*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<RenderingEngine*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RenderingEngine> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RenderingEngine*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<RenderingEngine*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RenderingEngine> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RenderingEngine*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<RenderingEngine*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RenderingEngine> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RenderingEngine*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<RenderingEngine*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RenderingEngine> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RenderingEngine*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<RenderingEngine*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class RenderingEngine : virtual public ::IceDelegate::omero::api::PyramidService
{
public:

    virtual ::omero::romio::RGBBufferPtr render(const ::omero::romio::PlaneDefPtr&, const ::Ice::Context*) = 0;

    virtual ::Ice::IntSeq renderAsPackedInt(const ::omero::romio::PlaneDefPtr&, const ::Ice::Context*) = 0;

    virtual ::Ice::IntSeq renderAsPackedIntAsRGBA(const ::omero::romio::PlaneDefPtr&, const ::Ice::Context*) = 0;

    virtual ::Ice::IntSeq renderProjectedAsPackedInt(::omero::constants::projection::ProjectionType, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::ByteSeq renderCompressed(const ::omero::romio::PlaneDefPtr&, const ::Ice::Context*) = 0;

    virtual ::Ice::ByteSeq renderProjectedCompressed(::omero::constants::projection::ProjectionType, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Long getRenderingDefId(const ::Ice::Context*) = 0;

    virtual void lookupPixels(::Ice::Long, const ::Ice::Context*) = 0;

    virtual bool lookupRenderingDef(::Ice::Long, const ::Ice::Context*) = 0;

    virtual void loadRenderingDef(::Ice::Long, const ::Ice::Context*) = 0;

    virtual void setOverlays(const ::omero::RLongPtr&, const ::omero::RLongPtr&, const ::omero::api::LongIntMap&, const ::Ice::Context*) = 0;

    virtual void load(const ::Ice::Context*) = 0;

    virtual void setModel(const ::omero::model::RenderingModelPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::RenderingModelPtr getModel(const ::Ice::Context*) = 0;

    virtual ::Ice::Int getDefaultZ(const ::Ice::Context*) = 0;

    virtual ::Ice::Int getDefaultT(const ::Ice::Context*) = 0;

    virtual void setDefaultZ(::Ice::Int, const ::Ice::Context*) = 0;

    virtual void setDefaultT(::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::omero::model::PixelsPtr getPixels(const ::Ice::Context*) = 0;

    virtual ::omero::api::IObjectList getAvailableModels(const ::Ice::Context*) = 0;

    virtual ::omero::api::IObjectList getAvailableFamilies(const ::Ice::Context*) = 0;

    virtual void setQuantumStrategy(::Ice::Int, const ::Ice::Context*) = 0;

    virtual void setCodomainInterval(::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::omero::model::QuantumDefPtr getQuantumDef(const ::Ice::Context*) = 0;

    virtual void setQuantizationMap(::Ice::Int, const ::omero::model::FamilyPtr&, ::Ice::Double, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::FamilyPtr getChannelFamily(::Ice::Int, const ::Ice::Context*) = 0;

    virtual bool getChannelNoiseReduction(::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::DoubleSeq getChannelStats(::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Double getChannelCurveCoefficient(::Ice::Int, const ::Ice::Context*) = 0;

    virtual void setChannelWindow(::Ice::Int, ::Ice::Double, ::Ice::Double, const ::Ice::Context*) = 0;

    virtual ::Ice::Double getChannelWindowStart(::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Double getChannelWindowEnd(::Ice::Int, const ::Ice::Context*) = 0;

    virtual void setRGBA(::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::IntSeq getRGBA(::Ice::Int, const ::Ice::Context*) = 0;

    virtual void setActive(::Ice::Int, bool, const ::Ice::Context*) = 0;

    virtual bool isActive(::Ice::Int, const ::Ice::Context*) = 0;

    virtual void addCodomainMap(const ::omero::romio::CodomainMapContextPtr&, const ::Ice::Context*) = 0;

    virtual void updateCodomainMap(const ::omero::romio::CodomainMapContextPtr&, const ::Ice::Context*) = 0;

    virtual void removeCodomainMap(const ::omero::romio::CodomainMapContextPtr&, const ::Ice::Context*) = 0;

    virtual void saveCurrentSettings(const ::Ice::Context*) = 0;

    virtual void resetDefaults(const ::Ice::Context*) = 0;

    virtual void resetDefaultsNoSave(const ::Ice::Context*) = 0;

    virtual void setCompressionLevel(::Ice::Float, const ::Ice::Context*) = 0;

    virtual ::Ice::Float getCompressionLevel(const ::Ice::Context*) = 0;

    virtual bool isPixelsTypeSigned(const ::Ice::Context*) = 0;

    virtual ::Ice::Double getPixelsTypeUpperBound(::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Double getPixelsTypeLowerBound(::Ice::Int, const ::Ice::Context*) = 0;
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

class RenderingEngine : virtual public ::IceDelegate::omero::api::RenderingEngine,
                        virtual public ::IceDelegateM::omero::api::PyramidService
{
public:

    virtual ::omero::romio::RGBBufferPtr render(const ::omero::romio::PlaneDefPtr&, const ::Ice::Context*);

    virtual ::Ice::IntSeq renderAsPackedInt(const ::omero::romio::PlaneDefPtr&, const ::Ice::Context*);

    virtual ::Ice::IntSeq renderAsPackedIntAsRGBA(const ::omero::romio::PlaneDefPtr&, const ::Ice::Context*);

    virtual ::Ice::IntSeq renderProjectedAsPackedInt(::omero::constants::projection::ProjectionType, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::ByteSeq renderCompressed(const ::omero::romio::PlaneDefPtr&, const ::Ice::Context*);

    virtual ::Ice::ByteSeq renderProjectedCompressed(::omero::constants::projection::ProjectionType, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Long getRenderingDefId(const ::Ice::Context*);

    virtual void lookupPixels(::Ice::Long, const ::Ice::Context*);

    virtual bool lookupRenderingDef(::Ice::Long, const ::Ice::Context*);

    virtual void loadRenderingDef(::Ice::Long, const ::Ice::Context*);

    virtual void setOverlays(const ::omero::RLongPtr&, const ::omero::RLongPtr&, const ::omero::api::LongIntMap&, const ::Ice::Context*);

    virtual void load(const ::Ice::Context*);

    virtual void setModel(const ::omero::model::RenderingModelPtr&, const ::Ice::Context*);

    virtual ::omero::model::RenderingModelPtr getModel(const ::Ice::Context*);

    virtual ::Ice::Int getDefaultZ(const ::Ice::Context*);

    virtual ::Ice::Int getDefaultT(const ::Ice::Context*);

    virtual void setDefaultZ(::Ice::Int, const ::Ice::Context*);

    virtual void setDefaultT(::Ice::Int, const ::Ice::Context*);

    virtual ::omero::model::PixelsPtr getPixels(const ::Ice::Context*);

    virtual ::omero::api::IObjectList getAvailableModels(const ::Ice::Context*);

    virtual ::omero::api::IObjectList getAvailableFamilies(const ::Ice::Context*);

    virtual void setQuantumStrategy(::Ice::Int, const ::Ice::Context*);

    virtual void setCodomainInterval(::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::omero::model::QuantumDefPtr getQuantumDef(const ::Ice::Context*);

    virtual void setQuantizationMap(::Ice::Int, const ::omero::model::FamilyPtr&, ::Ice::Double, bool, const ::Ice::Context*);

    virtual ::omero::model::FamilyPtr getChannelFamily(::Ice::Int, const ::Ice::Context*);

    virtual bool getChannelNoiseReduction(::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::DoubleSeq getChannelStats(::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Double getChannelCurveCoefficient(::Ice::Int, const ::Ice::Context*);

    virtual void setChannelWindow(::Ice::Int, ::Ice::Double, ::Ice::Double, const ::Ice::Context*);

    virtual ::Ice::Double getChannelWindowStart(::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Double getChannelWindowEnd(::Ice::Int, const ::Ice::Context*);

    virtual void setRGBA(::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::IntSeq getRGBA(::Ice::Int, const ::Ice::Context*);

    virtual void setActive(::Ice::Int, bool, const ::Ice::Context*);

    virtual bool isActive(::Ice::Int, const ::Ice::Context*);

    virtual void addCodomainMap(const ::omero::romio::CodomainMapContextPtr&, const ::Ice::Context*);

    virtual void updateCodomainMap(const ::omero::romio::CodomainMapContextPtr&, const ::Ice::Context*);

    virtual void removeCodomainMap(const ::omero::romio::CodomainMapContextPtr&, const ::Ice::Context*);

    virtual void saveCurrentSettings(const ::Ice::Context*);

    virtual void resetDefaults(const ::Ice::Context*);

    virtual void resetDefaultsNoSave(const ::Ice::Context*);

    virtual void setCompressionLevel(::Ice::Float, const ::Ice::Context*);

    virtual ::Ice::Float getCompressionLevel(const ::Ice::Context*);

    virtual bool isPixelsTypeSigned(const ::Ice::Context*);

    virtual ::Ice::Double getPixelsTypeUpperBound(::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Double getPixelsTypeLowerBound(::Ice::Int, const ::Ice::Context*);
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

class RenderingEngine : virtual public ::IceDelegate::omero::api::RenderingEngine,
                        virtual public ::IceDelegateD::omero::api::PyramidService
{
public:

    virtual ::omero::romio::RGBBufferPtr render(const ::omero::romio::PlaneDefPtr&, const ::Ice::Context*);

    virtual ::Ice::IntSeq renderAsPackedInt(const ::omero::romio::PlaneDefPtr&, const ::Ice::Context*);

    virtual ::Ice::IntSeq renderAsPackedIntAsRGBA(const ::omero::romio::PlaneDefPtr&, const ::Ice::Context*);

    virtual ::Ice::IntSeq renderProjectedAsPackedInt(::omero::constants::projection::ProjectionType, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::ByteSeq renderCompressed(const ::omero::romio::PlaneDefPtr&, const ::Ice::Context*);

    virtual ::Ice::ByteSeq renderProjectedCompressed(::omero::constants::projection::ProjectionType, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Long getRenderingDefId(const ::Ice::Context*);

    virtual void lookupPixels(::Ice::Long, const ::Ice::Context*);

    virtual bool lookupRenderingDef(::Ice::Long, const ::Ice::Context*);

    virtual void loadRenderingDef(::Ice::Long, const ::Ice::Context*);

    virtual void setOverlays(const ::omero::RLongPtr&, const ::omero::RLongPtr&, const ::omero::api::LongIntMap&, const ::Ice::Context*);

    virtual void load(const ::Ice::Context*);

    virtual void setModel(const ::omero::model::RenderingModelPtr&, const ::Ice::Context*);

    virtual ::omero::model::RenderingModelPtr getModel(const ::Ice::Context*);

    virtual ::Ice::Int getDefaultZ(const ::Ice::Context*);

    virtual ::Ice::Int getDefaultT(const ::Ice::Context*);

    virtual void setDefaultZ(::Ice::Int, const ::Ice::Context*);

    virtual void setDefaultT(::Ice::Int, const ::Ice::Context*);

    virtual ::omero::model::PixelsPtr getPixels(const ::Ice::Context*);

    virtual ::omero::api::IObjectList getAvailableModels(const ::Ice::Context*);

    virtual ::omero::api::IObjectList getAvailableFamilies(const ::Ice::Context*);

    virtual void setQuantumStrategy(::Ice::Int, const ::Ice::Context*);

    virtual void setCodomainInterval(::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::omero::model::QuantumDefPtr getQuantumDef(const ::Ice::Context*);

    virtual void setQuantizationMap(::Ice::Int, const ::omero::model::FamilyPtr&, ::Ice::Double, bool, const ::Ice::Context*);

    virtual ::omero::model::FamilyPtr getChannelFamily(::Ice::Int, const ::Ice::Context*);

    virtual bool getChannelNoiseReduction(::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::DoubleSeq getChannelStats(::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Double getChannelCurveCoefficient(::Ice::Int, const ::Ice::Context*);

    virtual void setChannelWindow(::Ice::Int, ::Ice::Double, ::Ice::Double, const ::Ice::Context*);

    virtual ::Ice::Double getChannelWindowStart(::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Double getChannelWindowEnd(::Ice::Int, const ::Ice::Context*);

    virtual void setRGBA(::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::IntSeq getRGBA(::Ice::Int, const ::Ice::Context*);

    virtual void setActive(::Ice::Int, bool, const ::Ice::Context*);

    virtual bool isActive(::Ice::Int, const ::Ice::Context*);

    virtual void addCodomainMap(const ::omero::romio::CodomainMapContextPtr&, const ::Ice::Context*);

    virtual void updateCodomainMap(const ::omero::romio::CodomainMapContextPtr&, const ::Ice::Context*);

    virtual void removeCodomainMap(const ::omero::romio::CodomainMapContextPtr&, const ::Ice::Context*);

    virtual void saveCurrentSettings(const ::Ice::Context*);

    virtual void resetDefaults(const ::Ice::Context*);

    virtual void resetDefaultsNoSave(const ::Ice::Context*);

    virtual void setCompressionLevel(::Ice::Float, const ::Ice::Context*);

    virtual ::Ice::Float getCompressionLevel(const ::Ice::Context*);

    virtual bool isPixelsTypeSigned(const ::Ice::Context*);

    virtual ::Ice::Double getPixelsTypeUpperBound(::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Double getPixelsTypeLowerBound(::Ice::Int, const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace api
{

class RenderingEngine : virtual public ::omero::api::PyramidService
{
public:

    typedef RenderingEnginePrx ProxyType;
    typedef RenderingEnginePtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void render_async(const ::omero::api::AMD_RenderingEngine_renderPtr&, const ::omero::romio::PlaneDefPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___render(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void renderAsPackedInt_async(const ::omero::api::AMD_RenderingEngine_renderAsPackedIntPtr&, const ::omero::romio::PlaneDefPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___renderAsPackedInt(::IceInternal::Incoming&, const ::Ice::Current&);

    ICE_DEPRECATED_API virtual void renderAsPackedIntAsRGBA_async(const ::omero::api::AMD_RenderingEngine_renderAsPackedIntAsRGBAPtr&, const ::omero::romio::PlaneDefPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___renderAsPackedIntAsRGBA(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void renderProjectedAsPackedInt_async(const ::omero::api::AMD_RenderingEngine_renderProjectedAsPackedIntPtr&, ::omero::constants::projection::ProjectionType, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___renderProjectedAsPackedInt(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void renderCompressed_async(const ::omero::api::AMD_RenderingEngine_renderCompressedPtr&, const ::omero::romio::PlaneDefPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___renderCompressed(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void renderProjectedCompressed_async(const ::omero::api::AMD_RenderingEngine_renderProjectedCompressedPtr&, ::omero::constants::projection::ProjectionType, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___renderProjectedCompressed(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getRenderingDefId_async(const ::omero::api::AMD_RenderingEngine_getRenderingDefIdPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getRenderingDefId(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void lookupPixels_async(const ::omero::api::AMD_RenderingEngine_lookupPixelsPtr&, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___lookupPixels(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void lookupRenderingDef_async(const ::omero::api::AMD_RenderingEngine_lookupRenderingDefPtr&, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___lookupRenderingDef(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void loadRenderingDef_async(const ::omero::api::AMD_RenderingEngine_loadRenderingDefPtr&, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___loadRenderingDef(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setOverlays_async(const ::omero::api::AMD_RenderingEngine_setOverlaysPtr&, const ::omero::RLongPtr&, const ::omero::RLongPtr&, const ::omero::api::LongIntMap&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setOverlays(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void load_async(const ::omero::api::AMD_RenderingEngine_loadPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___load(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setModel_async(const ::omero::api::AMD_RenderingEngine_setModelPtr&, const ::omero::model::RenderingModelPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setModel(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getModel_async(const ::omero::api::AMD_RenderingEngine_getModelPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getModel(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getDefaultZ_async(const ::omero::api::AMD_RenderingEngine_getDefaultZPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getDefaultZ(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getDefaultT_async(const ::omero::api::AMD_RenderingEngine_getDefaultTPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getDefaultT(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setDefaultZ_async(const ::omero::api::AMD_RenderingEngine_setDefaultZPtr&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setDefaultZ(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setDefaultT_async(const ::omero::api::AMD_RenderingEngine_setDefaultTPtr&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setDefaultT(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getPixels_async(const ::omero::api::AMD_RenderingEngine_getPixelsPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getPixels(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getAvailableModels_async(const ::omero::api::AMD_RenderingEngine_getAvailableModelsPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getAvailableModels(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getAvailableFamilies_async(const ::omero::api::AMD_RenderingEngine_getAvailableFamiliesPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getAvailableFamilies(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setQuantumStrategy_async(const ::omero::api::AMD_RenderingEngine_setQuantumStrategyPtr&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setQuantumStrategy(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setCodomainInterval_async(const ::omero::api::AMD_RenderingEngine_setCodomainIntervalPtr&, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setCodomainInterval(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getQuantumDef_async(const ::omero::api::AMD_RenderingEngine_getQuantumDefPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getQuantumDef(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setQuantizationMap_async(const ::omero::api::AMD_RenderingEngine_setQuantizationMapPtr&, ::Ice::Int, const ::omero::model::FamilyPtr&, ::Ice::Double, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setQuantizationMap(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getChannelFamily_async(const ::omero::api::AMD_RenderingEngine_getChannelFamilyPtr&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getChannelFamily(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getChannelNoiseReduction_async(const ::omero::api::AMD_RenderingEngine_getChannelNoiseReductionPtr&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getChannelNoiseReduction(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getChannelStats_async(const ::omero::api::AMD_RenderingEngine_getChannelStatsPtr&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getChannelStats(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getChannelCurveCoefficient_async(const ::omero::api::AMD_RenderingEngine_getChannelCurveCoefficientPtr&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getChannelCurveCoefficient(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setChannelWindow_async(const ::omero::api::AMD_RenderingEngine_setChannelWindowPtr&, ::Ice::Int, ::Ice::Double, ::Ice::Double, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setChannelWindow(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getChannelWindowStart_async(const ::omero::api::AMD_RenderingEngine_getChannelWindowStartPtr&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getChannelWindowStart(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getChannelWindowEnd_async(const ::omero::api::AMD_RenderingEngine_getChannelWindowEndPtr&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getChannelWindowEnd(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setRGBA_async(const ::omero::api::AMD_RenderingEngine_setRGBAPtr&, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setRGBA(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getRGBA_async(const ::omero::api::AMD_RenderingEngine_getRGBAPtr&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getRGBA(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setActive_async(const ::omero::api::AMD_RenderingEngine_setActivePtr&, ::Ice::Int, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setActive(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void isActive_async(const ::omero::api::AMD_RenderingEngine_isActivePtr&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___isActive(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addCodomainMap_async(const ::omero::api::AMD_RenderingEngine_addCodomainMapPtr&, const ::omero::romio::CodomainMapContextPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addCodomainMap(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void updateCodomainMap_async(const ::omero::api::AMD_RenderingEngine_updateCodomainMapPtr&, const ::omero::romio::CodomainMapContextPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___updateCodomainMap(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeCodomainMap_async(const ::omero::api::AMD_RenderingEngine_removeCodomainMapPtr&, const ::omero::romio::CodomainMapContextPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeCodomainMap(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void saveCurrentSettings_async(const ::omero::api::AMD_RenderingEngine_saveCurrentSettingsPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___saveCurrentSettings(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void resetDefaults_async(const ::omero::api::AMD_RenderingEngine_resetDefaultsPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___resetDefaults(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void resetDefaultsNoSave_async(const ::omero::api::AMD_RenderingEngine_resetDefaultsNoSavePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___resetDefaultsNoSave(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setCompressionLevel_async(const ::omero::api::AMD_RenderingEngine_setCompressionLevelPtr&, ::Ice::Float, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setCompressionLevel(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getCompressionLevel_async(const ::omero::api::AMD_RenderingEngine_getCompressionLevelPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getCompressionLevel(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void isPixelsTypeSigned_async(const ::omero::api::AMD_RenderingEngine_isPixelsTypeSignedPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___isPixelsTypeSigned(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getPixelsTypeUpperBound_async(const ::omero::api::AMD_RenderingEngine_getPixelsTypeUpperBoundPtr&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getPixelsTypeUpperBound(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getPixelsTypeLowerBound_async(const ::omero::api::AMD_RenderingEngine_getPixelsTypeLowerBoundPtr&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getPixelsTypeLowerBound(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

}

}

#endif
