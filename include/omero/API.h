// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `API.ice'

#ifndef __omero__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_API_h__
#define __omero__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_API_h__

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
#include <omero/cmd/API.h>
#include <omero/ServerErrors.h>
#include <omero/ModelF.h>
#include <omero/ServicesF.h>
#include <omero/System.h>
#include <omero/Collections.h>
#include <Glacier2/Session.h>
#include <Ice/BuiltinSequences.h>
#include <Ice/Identity.h>
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

class ClientCallback;

class ServiceFactory;

}

}

}

namespace omero
{

namespace api
{

class ClientCallback;
bool operator==(const ClientCallback&, const ClientCallback&);
bool operator<(const ClientCallback&, const ClientCallback&);

class ServiceFactory;
bool operator==(const ServiceFactory&, const ServiceFactory&);
bool operator<(const ServiceFactory&, const ServiceFactory&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::api::ClientCallback*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::api::ClientCallback*);

::Ice::Object* upCast(::omero::api::ServiceFactory*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::api::ServiceFactory*);

}

namespace omero
{

namespace api
{

typedef ::IceInternal::Handle< ::omero::api::ClientCallback> ClientCallbackPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::api::ClientCallback> ClientCallbackPrx;

void __read(::IceInternal::BasicStream*, ClientCallbackPrx&);
void __patch__ClientCallbackPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::api::ServiceFactory> ServiceFactoryPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::api::ServiceFactory> ServiceFactoryPrx;

void __read(::IceInternal::BasicStream*, ServiceFactoryPrx&);
void __patch__ServiceFactoryPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace omero
{

namespace api
{

class AMI_ClientCallback_requestHeartbeat : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ClientCallbackPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_ClientCallback_requestHeartbeat> AMI_ClientCallback_requestHeartbeatPtr;

class AMI_ClientCallback_sessionClosed : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ClientCallbackPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_ClientCallback_sessionClosed> AMI_ClientCallback_sessionClosedPtr;

class AMI_ClientCallback_shutdownIn : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ClientCallbackPrx&, ::Ice::Long, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_ClientCallback_shutdownIn> AMI_ClientCallback_shutdownInPtr;

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

class ClientCallback : virtual public ::IceProxy::Ice::Object
{
public:

    void requestHeartbeat()
    {
        requestHeartbeat(0);
    }
    void requestHeartbeat(const ::Ice::Context& __ctx)
    {
        requestHeartbeat(&__ctx);
    }
    
private:

    void requestHeartbeat(const ::Ice::Context*);
    
public:
    bool requestHeartbeat_async(const ::omero::api::AMI_ClientCallback_requestHeartbeatPtr&);
    bool requestHeartbeat_async(const ::omero::api::AMI_ClientCallback_requestHeartbeatPtr&, const ::Ice::Context&);

    void sessionClosed()
    {
        sessionClosed(0);
    }
    void sessionClosed(const ::Ice::Context& __ctx)
    {
        sessionClosed(&__ctx);
    }
    
private:

    void sessionClosed(const ::Ice::Context*);
    
public:
    bool sessionClosed_async(const ::omero::api::AMI_ClientCallback_sessionClosedPtr&);
    bool sessionClosed_async(const ::omero::api::AMI_ClientCallback_sessionClosedPtr&, const ::Ice::Context&);

    void shutdownIn(::Ice::Long milliseconds)
    {
        shutdownIn(milliseconds, 0);
    }
    void shutdownIn(::Ice::Long milliseconds, const ::Ice::Context& __ctx)
    {
        shutdownIn(milliseconds, &__ctx);
    }
    
private:

    void shutdownIn(::Ice::Long, const ::Ice::Context*);
    
public:
    bool shutdownIn_async(const ::omero::api::AMI_ClientCallback_shutdownInPtr&, ::Ice::Long);
    bool shutdownIn_async(const ::omero::api::AMI_ClientCallback_shutdownInPtr&, ::Ice::Long, const ::Ice::Context&);
    
    ::IceInternal::ProxyHandle<ClientCallback> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ClientCallback*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<ClientCallback*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ClientCallback> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ClientCallback*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<ClientCallback*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ClientCallback> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ClientCallback*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<ClientCallback*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ClientCallback> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ClientCallback*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<ClientCallback*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ClientCallback> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ClientCallback*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<ClientCallback*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ClientCallback> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ClientCallback*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<ClientCallback*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ClientCallback> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ClientCallback*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<ClientCallback*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ClientCallback> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ClientCallback*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<ClientCallback*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ClientCallback> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ClientCallback*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<ClientCallback*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ClientCallback> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ClientCallback*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<ClientCallback*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ClientCallback> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ClientCallback*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<ClientCallback*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ClientCallback> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ClientCallback*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<ClientCallback*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ClientCallback> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ClientCallback*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<ClientCallback*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ClientCallback> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ClientCallback*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<ClientCallback*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ClientCallback> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ClientCallback*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<ClientCallback*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ClientCallback> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ClientCallback*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<ClientCallback*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ClientCallback> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ClientCallback*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<ClientCallback*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ClientCallback> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ClientCallback*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<ClientCallback*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ClientCallback> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ClientCallback*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<ClientCallback*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class ServiceFactory : virtual public ::IceProxy::omero::cmd::Session
{
public:

    ::omero::api::IObjectList getSecurityContexts()
    {
        return getSecurityContexts(0);
    }
    ::omero::api::IObjectList getSecurityContexts(const ::Ice::Context& __ctx)
    {
        return getSecurityContexts(&__ctx);
    }
    
private:

    ::omero::api::IObjectList getSecurityContexts(const ::Ice::Context*);
    
public:

    ::omero::model::IObjectPtr setSecurityContext(const ::omero::model::IObjectPtr& obj)
    {
        return setSecurityContext(obj, 0);
    }
    ::omero::model::IObjectPtr setSecurityContext(const ::omero::model::IObjectPtr& obj, const ::Ice::Context& __ctx)
    {
        return setSecurityContext(obj, &__ctx);
    }
    
private:

    ::omero::model::IObjectPtr setSecurityContext(const ::omero::model::IObjectPtr&, const ::Ice::Context*);
    
public:

    void setSecurityPassword(const ::std::string& password)
    {
        setSecurityPassword(password, 0);
    }
    void setSecurityPassword(const ::std::string& password, const ::Ice::Context& __ctx)
    {
        setSecurityPassword(password, &__ctx);
    }
    
private:

    void setSecurityPassword(const ::std::string&, const ::Ice::Context*);
    
public:

    ::omero::api::IAdminPrx getAdminService()
    {
        return getAdminService(0);
    }
    ::omero::api::IAdminPrx getAdminService(const ::Ice::Context& __ctx)
    {
        return getAdminService(&__ctx);
    }
    
private:

    ::omero::api::IAdminPrx getAdminService(const ::Ice::Context*);
    
public:

    ::omero::api::IConfigPrx getConfigService()
    {
        return getConfigService(0);
    }
    ::omero::api::IConfigPrx getConfigService(const ::Ice::Context& __ctx)
    {
        return getConfigService(&__ctx);
    }
    
private:

    ::omero::api::IConfigPrx getConfigService(const ::Ice::Context*);
    
public:

    ::omero::api::IContainerPrx getContainerService()
    {
        return getContainerService(0);
    }
    ::omero::api::IContainerPrx getContainerService(const ::Ice::Context& __ctx)
    {
        return getContainerService(&__ctx);
    }
    
private:

    ::omero::api::IContainerPrx getContainerService(const ::Ice::Context*);
    
public:

    ::omero::api::IDeletePrx getDeleteService()
    {
        return getDeleteService(0);
    }
    ::omero::api::IDeletePrx getDeleteService(const ::Ice::Context& __ctx)
    {
        return getDeleteService(&__ctx);
    }
    
private:

    ::omero::api::IDeletePrx getDeleteService(const ::Ice::Context*);
    
public:

    ::omero::api::ILdapPrx getLdapService()
    {
        return getLdapService(0);
    }
    ::omero::api::ILdapPrx getLdapService(const ::Ice::Context& __ctx)
    {
        return getLdapService(&__ctx);
    }
    
private:

    ::omero::api::ILdapPrx getLdapService(const ::Ice::Context*);
    
public:

    ::omero::api::IPixelsPrx getPixelsService()
    {
        return getPixelsService(0);
    }
    ::omero::api::IPixelsPrx getPixelsService(const ::Ice::Context& __ctx)
    {
        return getPixelsService(&__ctx);
    }
    
private:

    ::omero::api::IPixelsPrx getPixelsService(const ::Ice::Context*);
    
public:

    ::omero::api::IProjectionPrx getProjectionService()
    {
        return getProjectionService(0);
    }
    ::omero::api::IProjectionPrx getProjectionService(const ::Ice::Context& __ctx)
    {
        return getProjectionService(&__ctx);
    }
    
private:

    ::omero::api::IProjectionPrx getProjectionService(const ::Ice::Context*);
    
public:

    ::omero::api::IQueryPrx getQueryService()
    {
        return getQueryService(0);
    }
    ::omero::api::IQueryPrx getQueryService(const ::Ice::Context& __ctx)
    {
        return getQueryService(&__ctx);
    }
    
private:

    ::omero::api::IQueryPrx getQueryService(const ::Ice::Context*);
    
public:

    ::omero::api::IRenderingSettingsPrx getRenderingSettingsService()
    {
        return getRenderingSettingsService(0);
    }
    ::omero::api::IRenderingSettingsPrx getRenderingSettingsService(const ::Ice::Context& __ctx)
    {
        return getRenderingSettingsService(&__ctx);
    }
    
private:

    ::omero::api::IRenderingSettingsPrx getRenderingSettingsService(const ::Ice::Context*);
    
public:

    ::omero::api::IRepositoryInfoPrx getRepositoryInfoService()
    {
        return getRepositoryInfoService(0);
    }
    ::omero::api::IRepositoryInfoPrx getRepositoryInfoService(const ::Ice::Context& __ctx)
    {
        return getRepositoryInfoService(&__ctx);
    }
    
private:

    ::omero::api::IRepositoryInfoPrx getRepositoryInfoService(const ::Ice::Context*);
    
public:

    ::omero::api::IRoiPrx getRoiService()
    {
        return getRoiService(0);
    }
    ::omero::api::IRoiPrx getRoiService(const ::Ice::Context& __ctx)
    {
        return getRoiService(&__ctx);
    }
    
private:

    ::omero::api::IRoiPrx getRoiService(const ::Ice::Context*);
    
public:

    ::omero::api::IScriptPrx getScriptService()
    {
        return getScriptService(0);
    }
    ::omero::api::IScriptPrx getScriptService(const ::Ice::Context& __ctx)
    {
        return getScriptService(&__ctx);
    }
    
private:

    ::omero::api::IScriptPrx getScriptService(const ::Ice::Context*);
    
public:

    ::omero::api::ISessionPrx getSessionService()
    {
        return getSessionService(0);
    }
    ::omero::api::ISessionPrx getSessionService(const ::Ice::Context& __ctx)
    {
        return getSessionService(&__ctx);
    }
    
private:

    ::omero::api::ISessionPrx getSessionService(const ::Ice::Context*);
    
public:

    ::omero::api::ISharePrx getShareService()
    {
        return getShareService(0);
    }
    ::omero::api::ISharePrx getShareService(const ::Ice::Context& __ctx)
    {
        return getShareService(&__ctx);
    }
    
private:

    ::omero::api::ISharePrx getShareService(const ::Ice::Context*);
    
public:

    ::omero::api::ITimelinePrx getTimelineService()
    {
        return getTimelineService(0);
    }
    ::omero::api::ITimelinePrx getTimelineService(const ::Ice::Context& __ctx)
    {
        return getTimelineService(&__ctx);
    }
    
private:

    ::omero::api::ITimelinePrx getTimelineService(const ::Ice::Context*);
    
public:

    ::omero::api::ITypesPrx getTypesService()
    {
        return getTypesService(0);
    }
    ::omero::api::ITypesPrx getTypesService(const ::Ice::Context& __ctx)
    {
        return getTypesService(&__ctx);
    }
    
private:

    ::omero::api::ITypesPrx getTypesService(const ::Ice::Context*);
    
public:

    ::omero::api::IUpdatePrx getUpdateService()
    {
        return getUpdateService(0);
    }
    ::omero::api::IUpdatePrx getUpdateService(const ::Ice::Context& __ctx)
    {
        return getUpdateService(&__ctx);
    }
    
private:

    ::omero::api::IUpdatePrx getUpdateService(const ::Ice::Context*);
    
public:

    ::omero::api::IMetadataPrx getMetadataService()
    {
        return getMetadataService(0);
    }
    ::omero::api::IMetadataPrx getMetadataService(const ::Ice::Context& __ctx)
    {
        return getMetadataService(&__ctx);
    }
    
private:

    ::omero::api::IMetadataPrx getMetadataService(const ::Ice::Context*);
    
public:

    ICE_DEPRECATED_API ::omero::api::GatewayPrx createGateway()
    {
        return createGateway(0);
    }
    ICE_DEPRECATED_API ::omero::api::GatewayPrx createGateway(const ::Ice::Context& __ctx)
    {
        return createGateway(&__ctx);
    }
    
private:

    ::omero::api::GatewayPrx createGateway(const ::Ice::Context*);
    
public:

    ::omero::api::ExporterPrx createExporter()
    {
        return createExporter(0);
    }
    ::omero::api::ExporterPrx createExporter(const ::Ice::Context& __ctx)
    {
        return createExporter(&__ctx);
    }
    
private:

    ::omero::api::ExporterPrx createExporter(const ::Ice::Context*);
    
public:

    ::omero::api::JobHandlePrx createJobHandle()
    {
        return createJobHandle(0);
    }
    ::omero::api::JobHandlePrx createJobHandle(const ::Ice::Context& __ctx)
    {
        return createJobHandle(&__ctx);
    }
    
private:

    ::omero::api::JobHandlePrx createJobHandle(const ::Ice::Context*);
    
public:

    ::omero::api::RawFileStorePrx createRawFileStore()
    {
        return createRawFileStore(0);
    }
    ::omero::api::RawFileStorePrx createRawFileStore(const ::Ice::Context& __ctx)
    {
        return createRawFileStore(&__ctx);
    }
    
private:

    ::omero::api::RawFileStorePrx createRawFileStore(const ::Ice::Context*);
    
public:

    ::omero::api::RawPixelsStorePrx createRawPixelsStore()
    {
        return createRawPixelsStore(0);
    }
    ::omero::api::RawPixelsStorePrx createRawPixelsStore(const ::Ice::Context& __ctx)
    {
        return createRawPixelsStore(&__ctx);
    }
    
private:

    ::omero::api::RawPixelsStorePrx createRawPixelsStore(const ::Ice::Context*);
    
public:

    ::omero::api::RenderingEnginePrx createRenderingEngine()
    {
        return createRenderingEngine(0);
    }
    ::omero::api::RenderingEnginePrx createRenderingEngine(const ::Ice::Context& __ctx)
    {
        return createRenderingEngine(&__ctx);
    }
    
private:

    ::omero::api::RenderingEnginePrx createRenderingEngine(const ::Ice::Context*);
    
public:

    ::omero::api::SearchPrx createSearchService()
    {
        return createSearchService(0);
    }
    ::omero::api::SearchPrx createSearchService(const ::Ice::Context& __ctx)
    {
        return createSearchService(&__ctx);
    }
    
private:

    ::omero::api::SearchPrx createSearchService(const ::Ice::Context*);
    
public:

    ::omero::api::ThumbnailStorePrx createThumbnailStore()
    {
        return createThumbnailStore(0);
    }
    ::omero::api::ThumbnailStorePrx createThumbnailStore(const ::Ice::Context& __ctx)
    {
        return createThumbnailStore(&__ctx);
    }
    
private:

    ::omero::api::ThumbnailStorePrx createThumbnailStore(const ::Ice::Context*);
    
public:

    ::omero::grid::SharedResourcesPrx sharedResources()
    {
        return sharedResources(0);
    }
    ::omero::grid::SharedResourcesPrx sharedResources(const ::Ice::Context& __ctx)
    {
        return sharedResources(&__ctx);
    }
    
private:

    ::omero::grid::SharedResourcesPrx sharedResources(const ::Ice::Context*);
    
public:

    ::omero::api::ServiceInterfacePrx getByName(const ::std::string& name)
    {
        return getByName(name, 0);
    }
    ::omero::api::ServiceInterfacePrx getByName(const ::std::string& name, const ::Ice::Context& __ctx)
    {
        return getByName(name, &__ctx);
    }
    
private:

    ::omero::api::ServiceInterfacePrx getByName(const ::std::string&, const ::Ice::Context*);
    
public:

    ::omero::api::StatefulServiceInterfacePrx createByName(const ::std::string& name)
    {
        return createByName(name, 0);
    }
    ::omero::api::StatefulServiceInterfacePrx createByName(const ::std::string& name, const ::Ice::Context& __ctx)
    {
        return createByName(name, &__ctx);
    }
    
private:

    ::omero::api::StatefulServiceInterfacePrx createByName(const ::std::string&, const ::Ice::Context*);
    
public:

    void subscribe(const ::std::string& topicName, const ::Ice::ObjectPrx& prx)
    {
        subscribe(topicName, prx, 0);
    }
    void subscribe(const ::std::string& topicName, const ::Ice::ObjectPrx& prx, const ::Ice::Context& __ctx)
    {
        subscribe(topicName, prx, &__ctx);
    }
    
private:

    void subscribe(const ::std::string&, const ::Ice::ObjectPrx&, const ::Ice::Context*);
    
public:

    void setCallback(const ::omero::api::ClientCallbackPrx& callback)
    {
        setCallback(callback, 0);
    }
    void setCallback(const ::omero::api::ClientCallbackPrx& callback, const ::Ice::Context& __ctx)
    {
        setCallback(callback, &__ctx);
    }
    
private:

    void setCallback(const ::omero::api::ClientCallbackPrx&, const ::Ice::Context*);
    
public:

    ICE_DEPRECATED_API void close()
    {
        close(0);
    }
    ICE_DEPRECATED_API void close(const ::Ice::Context& __ctx)
    {
        close(&__ctx);
    }
    
private:

    void close(const ::Ice::Context*);
    
public:

    void closeOnDestroy()
    {
        closeOnDestroy(0);
    }
    void closeOnDestroy(const ::Ice::Context& __ctx)
    {
        closeOnDestroy(&__ctx);
    }
    
private:

    void closeOnDestroy(const ::Ice::Context*);
    
public:

    void detachOnDestroy()
    {
        detachOnDestroy(0);
    }
    void detachOnDestroy(const ::Ice::Context& __ctx)
    {
        detachOnDestroy(&__ctx);
    }
    
private:

    void detachOnDestroy(const ::Ice::Context*);
    
public:

    ::omero::api::StringSet activeServices()
    {
        return activeServices(0);
    }
    ::omero::api::StringSet activeServices(const ::Ice::Context& __ctx)
    {
        return activeServices(&__ctx);
    }
    
private:

    ::omero::api::StringSet activeServices(const ::Ice::Context*);
    
public:

    ::Ice::Long keepAllAlive(const ::omero::api::ServiceList& proxies)
    {
        return keepAllAlive(proxies, 0);
    }
    ::Ice::Long keepAllAlive(const ::omero::api::ServiceList& proxies, const ::Ice::Context& __ctx)
    {
        return keepAllAlive(proxies, &__ctx);
    }
    
private:

    ::Ice::Long keepAllAlive(const ::omero::api::ServiceList&, const ::Ice::Context*);
    
public:

    bool keepAlive(const ::omero::api::ServiceInterfacePrx& proxy)
    {
        return keepAlive(proxy, 0);
    }
    bool keepAlive(const ::omero::api::ServiceInterfacePrx& proxy, const ::Ice::Context& __ctx)
    {
        return keepAlive(proxy, &__ctx);
    }
    
private:

    bool keepAlive(const ::omero::api::ServiceInterfacePrx&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<ServiceFactory> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ServiceFactory*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<ServiceFactory*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ServiceFactory> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ServiceFactory*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<ServiceFactory*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ServiceFactory> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ServiceFactory*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<ServiceFactory*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ServiceFactory> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ServiceFactory*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<ServiceFactory*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ServiceFactory> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ServiceFactory*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<ServiceFactory*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ServiceFactory> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ServiceFactory*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<ServiceFactory*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ServiceFactory> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ServiceFactory*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<ServiceFactory*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ServiceFactory> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ServiceFactory*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<ServiceFactory*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ServiceFactory> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ServiceFactory*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<ServiceFactory*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ServiceFactory> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ServiceFactory*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<ServiceFactory*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ServiceFactory> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ServiceFactory*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<ServiceFactory*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ServiceFactory> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ServiceFactory*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<ServiceFactory*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ServiceFactory> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ServiceFactory*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<ServiceFactory*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ServiceFactory> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ServiceFactory*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<ServiceFactory*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ServiceFactory> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ServiceFactory*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<ServiceFactory*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ServiceFactory> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ServiceFactory*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<ServiceFactory*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ServiceFactory> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ServiceFactory*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<ServiceFactory*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ServiceFactory> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ServiceFactory*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<ServiceFactory*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ServiceFactory> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ServiceFactory*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<ServiceFactory*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class ClientCallback : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual void requestHeartbeat(const ::Ice::Context*) = 0;

    virtual void sessionClosed(const ::Ice::Context*) = 0;

    virtual void shutdownIn(::Ice::Long, const ::Ice::Context*) = 0;
};

class ServiceFactory : virtual public ::IceDelegate::omero::cmd::Session
{
public:

    virtual ::omero::api::IObjectList getSecurityContexts(const ::Ice::Context*) = 0;

    virtual ::omero::model::IObjectPtr setSecurityContext(const ::omero::model::IObjectPtr&, const ::Ice::Context*) = 0;

    virtual void setSecurityPassword(const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::omero::api::IAdminPrx getAdminService(const ::Ice::Context*) = 0;

    virtual ::omero::api::IConfigPrx getConfigService(const ::Ice::Context*) = 0;

    virtual ::omero::api::IContainerPrx getContainerService(const ::Ice::Context*) = 0;

    virtual ::omero::api::IDeletePrx getDeleteService(const ::Ice::Context*) = 0;

    virtual ::omero::api::ILdapPrx getLdapService(const ::Ice::Context*) = 0;

    virtual ::omero::api::IPixelsPrx getPixelsService(const ::Ice::Context*) = 0;

    virtual ::omero::api::IProjectionPrx getProjectionService(const ::Ice::Context*) = 0;

    virtual ::omero::api::IQueryPrx getQueryService(const ::Ice::Context*) = 0;

    virtual ::omero::api::IRenderingSettingsPrx getRenderingSettingsService(const ::Ice::Context*) = 0;

    virtual ::omero::api::IRepositoryInfoPrx getRepositoryInfoService(const ::Ice::Context*) = 0;

    virtual ::omero::api::IRoiPrx getRoiService(const ::Ice::Context*) = 0;

    virtual ::omero::api::IScriptPrx getScriptService(const ::Ice::Context*) = 0;

    virtual ::omero::api::ISessionPrx getSessionService(const ::Ice::Context*) = 0;

    virtual ::omero::api::ISharePrx getShareService(const ::Ice::Context*) = 0;

    virtual ::omero::api::ITimelinePrx getTimelineService(const ::Ice::Context*) = 0;

    virtual ::omero::api::ITypesPrx getTypesService(const ::Ice::Context*) = 0;

    virtual ::omero::api::IUpdatePrx getUpdateService(const ::Ice::Context*) = 0;

    virtual ::omero::api::IMetadataPrx getMetadataService(const ::Ice::Context*) = 0;

    virtual ::omero::api::GatewayPrx createGateway(const ::Ice::Context*) = 0;

    virtual ::omero::api::ExporterPrx createExporter(const ::Ice::Context*) = 0;

    virtual ::omero::api::JobHandlePrx createJobHandle(const ::Ice::Context*) = 0;

    virtual ::omero::api::RawFileStorePrx createRawFileStore(const ::Ice::Context*) = 0;

    virtual ::omero::api::RawPixelsStorePrx createRawPixelsStore(const ::Ice::Context*) = 0;

    virtual ::omero::api::RenderingEnginePrx createRenderingEngine(const ::Ice::Context*) = 0;

    virtual ::omero::api::SearchPrx createSearchService(const ::Ice::Context*) = 0;

    virtual ::omero::api::ThumbnailStorePrx createThumbnailStore(const ::Ice::Context*) = 0;

    virtual ::omero::grid::SharedResourcesPrx sharedResources(const ::Ice::Context*) = 0;

    virtual ::omero::api::ServiceInterfacePrx getByName(const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::omero::api::StatefulServiceInterfacePrx createByName(const ::std::string&, const ::Ice::Context*) = 0;

    virtual void subscribe(const ::std::string&, const ::Ice::ObjectPrx&, const ::Ice::Context*) = 0;

    virtual void setCallback(const ::omero::api::ClientCallbackPrx&, const ::Ice::Context*) = 0;

    virtual void close(const ::Ice::Context*) = 0;

    virtual void closeOnDestroy(const ::Ice::Context*) = 0;

    virtual void detachOnDestroy(const ::Ice::Context*) = 0;

    virtual ::omero::api::StringSet activeServices(const ::Ice::Context*) = 0;

    virtual ::Ice::Long keepAllAlive(const ::omero::api::ServiceList&, const ::Ice::Context*) = 0;

    virtual bool keepAlive(const ::omero::api::ServiceInterfacePrx&, const ::Ice::Context*) = 0;
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

class ClientCallback : virtual public ::IceDelegate::omero::api::ClientCallback,
                       virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual void requestHeartbeat(const ::Ice::Context*);

    virtual void sessionClosed(const ::Ice::Context*);

    virtual void shutdownIn(::Ice::Long, const ::Ice::Context*);
};

class ServiceFactory : virtual public ::IceDelegate::omero::api::ServiceFactory,
                       virtual public ::IceDelegateM::omero::cmd::Session
{
public:

    virtual ::omero::api::IObjectList getSecurityContexts(const ::Ice::Context*);

    virtual ::omero::model::IObjectPtr setSecurityContext(const ::omero::model::IObjectPtr&, const ::Ice::Context*);

    virtual void setSecurityPassword(const ::std::string&, const ::Ice::Context*);

    virtual ::omero::api::IAdminPrx getAdminService(const ::Ice::Context*);

    virtual ::omero::api::IConfigPrx getConfigService(const ::Ice::Context*);

    virtual ::omero::api::IContainerPrx getContainerService(const ::Ice::Context*);

    virtual ::omero::api::IDeletePrx getDeleteService(const ::Ice::Context*);

    virtual ::omero::api::ILdapPrx getLdapService(const ::Ice::Context*);

    virtual ::omero::api::IPixelsPrx getPixelsService(const ::Ice::Context*);

    virtual ::omero::api::IProjectionPrx getProjectionService(const ::Ice::Context*);

    virtual ::omero::api::IQueryPrx getQueryService(const ::Ice::Context*);

    virtual ::omero::api::IRenderingSettingsPrx getRenderingSettingsService(const ::Ice::Context*);

    virtual ::omero::api::IRepositoryInfoPrx getRepositoryInfoService(const ::Ice::Context*);

    virtual ::omero::api::IRoiPrx getRoiService(const ::Ice::Context*);

    virtual ::omero::api::IScriptPrx getScriptService(const ::Ice::Context*);

    virtual ::omero::api::ISessionPrx getSessionService(const ::Ice::Context*);

    virtual ::omero::api::ISharePrx getShareService(const ::Ice::Context*);

    virtual ::omero::api::ITimelinePrx getTimelineService(const ::Ice::Context*);

    virtual ::omero::api::ITypesPrx getTypesService(const ::Ice::Context*);

    virtual ::omero::api::IUpdatePrx getUpdateService(const ::Ice::Context*);

    virtual ::omero::api::IMetadataPrx getMetadataService(const ::Ice::Context*);

    virtual ::omero::api::GatewayPrx createGateway(const ::Ice::Context*);

    virtual ::omero::api::ExporterPrx createExporter(const ::Ice::Context*);

    virtual ::omero::api::JobHandlePrx createJobHandle(const ::Ice::Context*);

    virtual ::omero::api::RawFileStorePrx createRawFileStore(const ::Ice::Context*);

    virtual ::omero::api::RawPixelsStorePrx createRawPixelsStore(const ::Ice::Context*);

    virtual ::omero::api::RenderingEnginePrx createRenderingEngine(const ::Ice::Context*);

    virtual ::omero::api::SearchPrx createSearchService(const ::Ice::Context*);

    virtual ::omero::api::ThumbnailStorePrx createThumbnailStore(const ::Ice::Context*);

    virtual ::omero::grid::SharedResourcesPrx sharedResources(const ::Ice::Context*);

    virtual ::omero::api::ServiceInterfacePrx getByName(const ::std::string&, const ::Ice::Context*);

    virtual ::omero::api::StatefulServiceInterfacePrx createByName(const ::std::string&, const ::Ice::Context*);

    virtual void subscribe(const ::std::string&, const ::Ice::ObjectPrx&, const ::Ice::Context*);

    virtual void setCallback(const ::omero::api::ClientCallbackPrx&, const ::Ice::Context*);

    virtual void close(const ::Ice::Context*);

    virtual void closeOnDestroy(const ::Ice::Context*);

    virtual void detachOnDestroy(const ::Ice::Context*);

    virtual ::omero::api::StringSet activeServices(const ::Ice::Context*);

    virtual ::Ice::Long keepAllAlive(const ::omero::api::ServiceList&, const ::Ice::Context*);

    virtual bool keepAlive(const ::omero::api::ServiceInterfacePrx&, const ::Ice::Context*);
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

class ClientCallback : virtual public ::IceDelegate::omero::api::ClientCallback,
                       virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual void requestHeartbeat(const ::Ice::Context*);

    virtual void sessionClosed(const ::Ice::Context*);

    virtual void shutdownIn(::Ice::Long, const ::Ice::Context*);
};

class ServiceFactory : virtual public ::IceDelegate::omero::api::ServiceFactory,
                       virtual public ::IceDelegateD::omero::cmd::Session
{
public:

    virtual ::omero::api::IObjectList getSecurityContexts(const ::Ice::Context*);

    virtual ::omero::model::IObjectPtr setSecurityContext(const ::omero::model::IObjectPtr&, const ::Ice::Context*);

    virtual void setSecurityPassword(const ::std::string&, const ::Ice::Context*);

    virtual ::omero::api::IAdminPrx getAdminService(const ::Ice::Context*);

    virtual ::omero::api::IConfigPrx getConfigService(const ::Ice::Context*);

    virtual ::omero::api::IContainerPrx getContainerService(const ::Ice::Context*);

    virtual ::omero::api::IDeletePrx getDeleteService(const ::Ice::Context*);

    virtual ::omero::api::ILdapPrx getLdapService(const ::Ice::Context*);

    virtual ::omero::api::IPixelsPrx getPixelsService(const ::Ice::Context*);

    virtual ::omero::api::IProjectionPrx getProjectionService(const ::Ice::Context*);

    virtual ::omero::api::IQueryPrx getQueryService(const ::Ice::Context*);

    virtual ::omero::api::IRenderingSettingsPrx getRenderingSettingsService(const ::Ice::Context*);

    virtual ::omero::api::IRepositoryInfoPrx getRepositoryInfoService(const ::Ice::Context*);

    virtual ::omero::api::IRoiPrx getRoiService(const ::Ice::Context*);

    virtual ::omero::api::IScriptPrx getScriptService(const ::Ice::Context*);

    virtual ::omero::api::ISessionPrx getSessionService(const ::Ice::Context*);

    virtual ::omero::api::ISharePrx getShareService(const ::Ice::Context*);

    virtual ::omero::api::ITimelinePrx getTimelineService(const ::Ice::Context*);

    virtual ::omero::api::ITypesPrx getTypesService(const ::Ice::Context*);

    virtual ::omero::api::IUpdatePrx getUpdateService(const ::Ice::Context*);

    virtual ::omero::api::IMetadataPrx getMetadataService(const ::Ice::Context*);

    virtual ::omero::api::GatewayPrx createGateway(const ::Ice::Context*);

    virtual ::omero::api::ExporterPrx createExporter(const ::Ice::Context*);

    virtual ::omero::api::JobHandlePrx createJobHandle(const ::Ice::Context*);

    virtual ::omero::api::RawFileStorePrx createRawFileStore(const ::Ice::Context*);

    virtual ::omero::api::RawPixelsStorePrx createRawPixelsStore(const ::Ice::Context*);

    virtual ::omero::api::RenderingEnginePrx createRenderingEngine(const ::Ice::Context*);

    virtual ::omero::api::SearchPrx createSearchService(const ::Ice::Context*);

    virtual ::omero::api::ThumbnailStorePrx createThumbnailStore(const ::Ice::Context*);

    virtual ::omero::grid::SharedResourcesPrx sharedResources(const ::Ice::Context*);

    virtual ::omero::api::ServiceInterfacePrx getByName(const ::std::string&, const ::Ice::Context*);

    virtual ::omero::api::StatefulServiceInterfacePrx createByName(const ::std::string&, const ::Ice::Context*);

    virtual void subscribe(const ::std::string&, const ::Ice::ObjectPrx&, const ::Ice::Context*);

    virtual void setCallback(const ::omero::api::ClientCallbackPrx&, const ::Ice::Context*);

    virtual void close(const ::Ice::Context*);

    virtual void closeOnDestroy(const ::Ice::Context*);

    virtual void detachOnDestroy(const ::Ice::Context*);

    virtual ::omero::api::StringSet activeServices(const ::Ice::Context*);

    virtual ::Ice::Long keepAllAlive(const ::omero::api::ServiceList&, const ::Ice::Context*);

    virtual bool keepAlive(const ::omero::api::ServiceInterfacePrx&, const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace api
{

class ClientCallback : virtual public ::Ice::Object
{
public:

    typedef ClientCallbackPrx ProxyType;
    typedef ClientCallbackPtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void requestHeartbeat(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___requestHeartbeat(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void sessionClosed(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sessionClosed(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void shutdownIn(::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___shutdownIn(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

class ServiceFactory : virtual public ::omero::cmd::Session
{
public:

    typedef ServiceFactoryPrx ProxyType;
    typedef ServiceFactoryPtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::omero::api::IObjectList getSecurityContexts(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getSecurityContexts(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::IObjectPtr setSecurityContext(const ::omero::model::IObjectPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setSecurityContext(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setSecurityPassword(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setSecurityPassword(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::api::IAdminPrx getAdminService(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getAdminService(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::api::IConfigPrx getConfigService(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getConfigService(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::api::IContainerPrx getContainerService(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getContainerService(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::api::IDeletePrx getDeleteService(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getDeleteService(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::api::ILdapPrx getLdapService(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getLdapService(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::api::IPixelsPrx getPixelsService(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getPixelsService(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::api::IProjectionPrx getProjectionService(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getProjectionService(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::api::IQueryPrx getQueryService(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getQueryService(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::api::IRenderingSettingsPrx getRenderingSettingsService(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getRenderingSettingsService(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::api::IRepositoryInfoPrx getRepositoryInfoService(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getRepositoryInfoService(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::api::IRoiPrx getRoiService(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getRoiService(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::api::IScriptPrx getScriptService(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getScriptService(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::api::ISessionPrx getSessionService(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getSessionService(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::api::ISharePrx getShareService(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getShareService(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::api::ITimelinePrx getTimelineService(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getTimelineService(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::api::ITypesPrx getTypesService(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getTypesService(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::api::IUpdatePrx getUpdateService(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getUpdateService(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::api::IMetadataPrx getMetadataService(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getMetadataService(::IceInternal::Incoming&, const ::Ice::Current&);

    ICE_DEPRECATED_API virtual ::omero::api::GatewayPrx createGateway(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___createGateway(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::api::ExporterPrx createExporter(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___createExporter(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::api::JobHandlePrx createJobHandle(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___createJobHandle(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::api::RawFileStorePrx createRawFileStore(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___createRawFileStore(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::api::RawPixelsStorePrx createRawPixelsStore(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___createRawPixelsStore(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::api::RenderingEnginePrx createRenderingEngine(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___createRenderingEngine(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::api::SearchPrx createSearchService(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___createSearchService(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::api::ThumbnailStorePrx createThumbnailStore(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___createThumbnailStore(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::grid::SharedResourcesPrx sharedResources(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sharedResources(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::api::ServiceInterfacePrx getByName(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getByName(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::api::StatefulServiceInterfacePrx createByName(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___createByName(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void subscribe(const ::std::string&, const ::Ice::ObjectPrx&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___subscribe(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setCallback(const ::omero::api::ClientCallbackPrx&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setCallback(::IceInternal::Incoming&, const ::Ice::Current&);

    ICE_DEPRECATED_API virtual void close(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___close(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void closeOnDestroy(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___closeOnDestroy(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void detachOnDestroy(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___detachOnDestroy(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::api::StringSet activeServices(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___activeServices(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Long keepAllAlive(const ::omero::api::ServiceList&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___keepAllAlive(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual bool keepAlive(const ::omero::api::ServiceInterfacePrx&, const ::Ice::Current& = ::Ice::Current()) = 0;
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
