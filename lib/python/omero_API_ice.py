# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `API.ice'

import Ice, IcePy, __builtin__

if not Ice.__dict__.has_key("_struct_marker"):
    Ice._struct_marker = object()
import omero_cmd_API_ice
import omero_ServerErrors_ice
import omero_ModelF_ice
import omero_ServicesF_ice
import omero_System_ice
import omero_Collections_ice
import Glacier2_Session_ice
import Ice_BuiltinSequences_ice
import Ice_Identity_ice

# Included module omero
_M_omero = Ice.openModule('omero')

# Included module omero.model
_M_omero.model = Ice.openModule('omero.model')

# Included module Ice
_M_Ice = Ice.openModule('Ice')

# Included module Glacier2
_M_Glacier2 = Ice.openModule('Glacier2')

# Included module omero.sys
_M_omero.sys = Ice.openModule('omero.sys')

# Included module omero.api
_M_omero.api = Ice.openModule('omero.api')

# Included module omero.cmd
_M_omero.cmd = Ice.openModule('omero.cmd')

# Included module omero.grid
_M_omero.grid = Ice.openModule('omero.grid')

# Start of module omero
__name__ = 'omero'

# Start of module omero.api
__name__ = 'omero.api'

if not _M_omero.api.__dict__.has_key('ClientCallback'):
    _M_omero.api.ClientCallback = Ice.createTempClass()
    class ClientCallback(Ice.Object):
        def __init__(self):
            if __builtin__.type(self) == _M_omero.api.ClientCallback:
                raise RuntimeError('omero.api.ClientCallback is an abstract class')

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::api::ClientCallback')

        def ice_id(self, current=None):
            return '::omero::api::ClientCallback'

        def ice_staticId():
            return '::omero::api::ClientCallback'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def requestHeartbeat(self, current=None):
        # def sessionClosed(self, current=None):
        # def shutdownIn(self, milliseconds, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.api._t_ClientCallback)

        __repr__ = __str__

    _M_omero.api.ClientCallbackPrx = Ice.createTempClass()
    class ClientCallbackPrx(Ice.ObjectPrx):

        def requestHeartbeat(self, _ctx=None):
            return _M_omero.api.ClientCallback._op_requestHeartbeat.invoke(self, ((), _ctx))

        def requestHeartbeat_async(self, _cb, _ctx=None):
            return _M_omero.api.ClientCallback._op_requestHeartbeat.invokeAsync(self, (_cb, (), _ctx))

        def sessionClosed(self, _ctx=None):
            return _M_omero.api.ClientCallback._op_sessionClosed.invoke(self, ((), _ctx))

        def sessionClosed_async(self, _cb, _ctx=None):
            return _M_omero.api.ClientCallback._op_sessionClosed.invokeAsync(self, (_cb, (), _ctx))

        def shutdownIn(self, milliseconds, _ctx=None):
            return _M_omero.api.ClientCallback._op_shutdownIn.invoke(self, ((milliseconds, ), _ctx))

        def shutdownIn_async(self, _cb, milliseconds, _ctx=None):
            return _M_omero.api.ClientCallback._op_shutdownIn.invokeAsync(self, (_cb, (milliseconds, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.api.ClientCallbackPrx.ice_checkedCast(proxy, '::omero::api::ClientCallback', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.api.ClientCallbackPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.api._t_ClientCallbackPrx = IcePy.defineProxy('::omero::api::ClientCallback', ClientCallbackPrx)

    _M_omero.api._t_ClientCallback = IcePy.defineClass('::omero::api::ClientCallback', ClientCallback, (), True, None, (), ())
    ClientCallback.ice_type = _M_omero.api._t_ClientCallback

    ClientCallback._op_requestHeartbeat = IcePy.Operation('requestHeartbeat', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    ClientCallback._op_sessionClosed = IcePy.Operation('sessionClosed', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    ClientCallback._op_shutdownIn = IcePy.Operation('shutdownIn', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_long),), (), None, ())

    _M_omero.api.ClientCallback = ClientCallback
    del ClientCallback

    _M_omero.api.ClientCallbackPrx = ClientCallbackPrx
    del ClientCallbackPrx

if not _M_omero.api.__dict__.has_key('ServiceFactory'):
    _M_omero.api.ServiceFactory = Ice.createTempClass()
    class ServiceFactory(_M_omero.cmd.Session):
        def __init__(self):
            if __builtin__.type(self) == _M_omero.api.ServiceFactory:
                raise RuntimeError('omero.api.ServiceFactory is an abstract class')

        def ice_ids(self, current=None):
            return ('::Glacier2::Session', '::Ice::Object', '::omero::api::ServiceFactory', '::omero::cmd::Session')

        def ice_id(self, current=None):
            return '::omero::api::ServiceFactory'

        def ice_staticId():
            return '::omero::api::ServiceFactory'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getSecurityContexts(self, current=None):
        # def setSecurityContext(self, obj, current=None):
        # def setSecurityPassword(self, password, current=None):
        # def getAdminService(self, current=None):
        # def getConfigService(self, current=None):
        # def getContainerService(self, current=None):
        # def getDeleteService(self, current=None):
        # def getLdapService(self, current=None):
        # def getPixelsService(self, current=None):
        # def getProjectionService(self, current=None):
        # def getQueryService(self, current=None):
        # def getRenderingSettingsService(self, current=None):
        # def getRepositoryInfoService(self, current=None):
        # def getRoiService(self, current=None):
        # def getScriptService(self, current=None):
        # def getSessionService(self, current=None):
        # def getShareService(self, current=None):
        # def getTimelineService(self, current=None):
        # def getTypesService(self, current=None):
        # def getUpdateService(self, current=None):
        # def getMetadataService(self, current=None):
        # def createGateway(self, current=None):
        # def createExporter(self, current=None):
        # def createJobHandle(self, current=None):
        # def createRawFileStore(self, current=None):
        # def createRawPixelsStore(self, current=None):
        # def createRenderingEngine(self, current=None):
        # def createSearchService(self, current=None):
        # def createThumbnailStore(self, current=None):
        # def sharedResources(self, current=None):
        # def getByName(self, name, current=None):
        # def createByName(self, name, current=None):
        # def subscribe(self, topicName, prx, current=None):
        # def setCallback(self, callback, current=None):
        # def close(self, current=None):
        # def closeOnDestroy(self, current=None):
        # def detachOnDestroy(self, current=None):
        # def activeServices(self, current=None):
        # def keepAllAlive(self, proxies, current=None):
        # def keepAlive(self, proxy, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.api._t_ServiceFactory)

        __repr__ = __str__

    _M_omero.api.ServiceFactoryPrx = Ice.createTempClass()
    class ServiceFactoryPrx(_M_omero.cmd.SessionPrx):

        def getSecurityContexts(self, _ctx=None):
            return _M_omero.api.ServiceFactory._op_getSecurityContexts.invoke(self, ((), _ctx))

        def setSecurityContext(self, obj, _ctx=None):
            return _M_omero.api.ServiceFactory._op_setSecurityContext.invoke(self, ((obj, ), _ctx))

        def setSecurityPassword(self, password, _ctx=None):
            return _M_omero.api.ServiceFactory._op_setSecurityPassword.invoke(self, ((password, ), _ctx))

        def getAdminService(self, _ctx=None):
            return _M_omero.api.ServiceFactory._op_getAdminService.invoke(self, ((), _ctx))

        def getConfigService(self, _ctx=None):
            return _M_omero.api.ServiceFactory._op_getConfigService.invoke(self, ((), _ctx))

        def getContainerService(self, _ctx=None):
            return _M_omero.api.ServiceFactory._op_getContainerService.invoke(self, ((), _ctx))

        def getDeleteService(self, _ctx=None):
            return _M_omero.api.ServiceFactory._op_getDeleteService.invoke(self, ((), _ctx))

        def getLdapService(self, _ctx=None):
            return _M_omero.api.ServiceFactory._op_getLdapService.invoke(self, ((), _ctx))

        def getPixelsService(self, _ctx=None):
            return _M_omero.api.ServiceFactory._op_getPixelsService.invoke(self, ((), _ctx))

        def getProjectionService(self, _ctx=None):
            return _M_omero.api.ServiceFactory._op_getProjectionService.invoke(self, ((), _ctx))

        def getQueryService(self, _ctx=None):
            return _M_omero.api.ServiceFactory._op_getQueryService.invoke(self, ((), _ctx))

        def getRenderingSettingsService(self, _ctx=None):
            return _M_omero.api.ServiceFactory._op_getRenderingSettingsService.invoke(self, ((), _ctx))

        def getRepositoryInfoService(self, _ctx=None):
            return _M_omero.api.ServiceFactory._op_getRepositoryInfoService.invoke(self, ((), _ctx))

        def getRoiService(self, _ctx=None):
            return _M_omero.api.ServiceFactory._op_getRoiService.invoke(self, ((), _ctx))

        def getScriptService(self, _ctx=None):
            return _M_omero.api.ServiceFactory._op_getScriptService.invoke(self, ((), _ctx))

        def getSessionService(self, _ctx=None):
            return _M_omero.api.ServiceFactory._op_getSessionService.invoke(self, ((), _ctx))

        def getShareService(self, _ctx=None):
            return _M_omero.api.ServiceFactory._op_getShareService.invoke(self, ((), _ctx))

        def getTimelineService(self, _ctx=None):
            return _M_omero.api.ServiceFactory._op_getTimelineService.invoke(self, ((), _ctx))

        def getTypesService(self, _ctx=None):
            return _M_omero.api.ServiceFactory._op_getTypesService.invoke(self, ((), _ctx))

        def getUpdateService(self, _ctx=None):
            return _M_omero.api.ServiceFactory._op_getUpdateService.invoke(self, ((), _ctx))

        def getMetadataService(self, _ctx=None):
            return _M_omero.api.ServiceFactory._op_getMetadataService.invoke(self, ((), _ctx))

        def createGateway(self, _ctx=None):
            return _M_omero.api.ServiceFactory._op_createGateway.invoke(self, ((), _ctx))

        def createExporter(self, _ctx=None):
            return _M_omero.api.ServiceFactory._op_createExporter.invoke(self, ((), _ctx))

        def createJobHandle(self, _ctx=None):
            return _M_omero.api.ServiceFactory._op_createJobHandle.invoke(self, ((), _ctx))

        def createRawFileStore(self, _ctx=None):
            return _M_omero.api.ServiceFactory._op_createRawFileStore.invoke(self, ((), _ctx))

        def createRawPixelsStore(self, _ctx=None):
            return _M_omero.api.ServiceFactory._op_createRawPixelsStore.invoke(self, ((), _ctx))

        def createRenderingEngine(self, _ctx=None):
            return _M_omero.api.ServiceFactory._op_createRenderingEngine.invoke(self, ((), _ctx))

        def createSearchService(self, _ctx=None):
            return _M_omero.api.ServiceFactory._op_createSearchService.invoke(self, ((), _ctx))

        def createThumbnailStore(self, _ctx=None):
            return _M_omero.api.ServiceFactory._op_createThumbnailStore.invoke(self, ((), _ctx))

        def sharedResources(self, _ctx=None):
            return _M_omero.api.ServiceFactory._op_sharedResources.invoke(self, ((), _ctx))

        def getByName(self, name, _ctx=None):
            return _M_omero.api.ServiceFactory._op_getByName.invoke(self, ((name, ), _ctx))

        def createByName(self, name, _ctx=None):
            return _M_omero.api.ServiceFactory._op_createByName.invoke(self, ((name, ), _ctx))

        def subscribe(self, topicName, prx, _ctx=None):
            return _M_omero.api.ServiceFactory._op_subscribe.invoke(self, ((topicName, prx), _ctx))

        def setCallback(self, callback, _ctx=None):
            return _M_omero.api.ServiceFactory._op_setCallback.invoke(self, ((callback, ), _ctx))

        def close(self, _ctx=None):
            return _M_omero.api.ServiceFactory._op_close.invoke(self, ((), _ctx))

        def closeOnDestroy(self, _ctx=None):
            return _M_omero.api.ServiceFactory._op_closeOnDestroy.invoke(self, ((), _ctx))

        def detachOnDestroy(self, _ctx=None):
            return _M_omero.api.ServiceFactory._op_detachOnDestroy.invoke(self, ((), _ctx))

        def activeServices(self, _ctx=None):
            return _M_omero.api.ServiceFactory._op_activeServices.invoke(self, ((), _ctx))

        def keepAllAlive(self, proxies, _ctx=None):
            return _M_omero.api.ServiceFactory._op_keepAllAlive.invoke(self, ((proxies, ), _ctx))

        def keepAlive(self, proxy, _ctx=None):
            return _M_omero.api.ServiceFactory._op_keepAlive.invoke(self, ((proxy, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.api.ServiceFactoryPrx.ice_checkedCast(proxy, '::omero::api::ServiceFactory', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.api.ServiceFactoryPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.api._t_ServiceFactoryPrx = IcePy.defineProxy('::omero::api::ServiceFactory', ServiceFactoryPrx)

    _M_omero.api._t_ServiceFactory = IcePy.defineClass('::omero::api::ServiceFactory', ServiceFactory, (), True, None, (_M_omero.cmd._t_Session,), ())
    ServiceFactory.ice_type = _M_omero.api._t_ServiceFactory

    ServiceFactory._op_getSecurityContexts = IcePy.Operation('getSecurityContexts', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.api._t_IObjectList, (_M_omero._t_ServerError,))
    ServiceFactory._op_setSecurityContext = IcePy.Operation('setSecurityContext', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_IObject),), (), _M_omero.model._t_IObject, (_M_omero._t_ServerError,))
    ServiceFactory._op_setSecurityPassword = IcePy.Operation('setSecurityPassword', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_string),), (), None, (_M_omero._t_ServerError,))
    ServiceFactory._op_getAdminService = IcePy.Operation('getAdminService', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.api._t_IAdminPrx, (_M_omero._t_ServerError,))
    ServiceFactory._op_getConfigService = IcePy.Operation('getConfigService', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.api._t_IConfigPrx, (_M_omero._t_ServerError,))
    ServiceFactory._op_getContainerService = IcePy.Operation('getContainerService', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.api._t_IContainerPrx, (_M_omero._t_ServerError,))
    ServiceFactory._op_getDeleteService = IcePy.Operation('getDeleteService', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.api._t_IDeletePrx, (_M_omero._t_ServerError,))
    ServiceFactory._op_getLdapService = IcePy.Operation('getLdapService', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.api._t_ILdapPrx, (_M_omero._t_ServerError,))
    ServiceFactory._op_getPixelsService = IcePy.Operation('getPixelsService', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.api._t_IPixelsPrx, (_M_omero._t_ServerError,))
    ServiceFactory._op_getProjectionService = IcePy.Operation('getProjectionService', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.api._t_IProjectionPrx, (_M_omero._t_ServerError,))
    ServiceFactory._op_getQueryService = IcePy.Operation('getQueryService', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.api._t_IQueryPrx, (_M_omero._t_ServerError,))
    ServiceFactory._op_getRenderingSettingsService = IcePy.Operation('getRenderingSettingsService', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.api._t_IRenderingSettingsPrx, (_M_omero._t_ServerError,))
    ServiceFactory._op_getRepositoryInfoService = IcePy.Operation('getRepositoryInfoService', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.api._t_IRepositoryInfoPrx, (_M_omero._t_ServerError,))
    ServiceFactory._op_getRoiService = IcePy.Operation('getRoiService', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.api._t_IRoiPrx, (_M_omero._t_ServerError,))
    ServiceFactory._op_getScriptService = IcePy.Operation('getScriptService', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.api._t_IScriptPrx, (_M_omero._t_ServerError,))
    ServiceFactory._op_getSessionService = IcePy.Operation('getSessionService', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.api._t_ISessionPrx, (_M_omero._t_ServerError,))
    ServiceFactory._op_getShareService = IcePy.Operation('getShareService', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.api._t_ISharePrx, (_M_omero._t_ServerError,))
    ServiceFactory._op_getTimelineService = IcePy.Operation('getTimelineService', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.api._t_ITimelinePrx, (_M_omero._t_ServerError,))
    ServiceFactory._op_getTypesService = IcePy.Operation('getTypesService', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.api._t_ITypesPrx, (_M_omero._t_ServerError,))
    ServiceFactory._op_getUpdateService = IcePy.Operation('getUpdateService', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.api._t_IUpdatePrx, (_M_omero._t_ServerError,))
    ServiceFactory._op_getMetadataService = IcePy.Operation('getMetadataService', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.api._t_IMetadataPrx, (_M_omero._t_ServerError,))
    ServiceFactory._op_createGateway = IcePy.Operation('createGateway', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.api._t_GatewayPrx, (_M_omero._t_ServerError,))
    ServiceFactory._op_createGateway.deprecate("createGateway() is deprecated")
    ServiceFactory._op_createExporter = IcePy.Operation('createExporter', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.api._t_ExporterPrx, (_M_omero._t_ServerError,))
    ServiceFactory._op_createJobHandle = IcePy.Operation('createJobHandle', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.api._t_JobHandlePrx, (_M_omero._t_ServerError,))
    ServiceFactory._op_createRawFileStore = IcePy.Operation('createRawFileStore', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.api._t_RawFileStorePrx, (_M_omero._t_ServerError,))
    ServiceFactory._op_createRawPixelsStore = IcePy.Operation('createRawPixelsStore', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.api._t_RawPixelsStorePrx, (_M_omero._t_ServerError,))
    ServiceFactory._op_createRenderingEngine = IcePy.Operation('createRenderingEngine', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.api._t_RenderingEnginePrx, (_M_omero._t_ServerError,))
    ServiceFactory._op_createSearchService = IcePy.Operation('createSearchService', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.api._t_SearchPrx, (_M_omero._t_ServerError,))
    ServiceFactory._op_createThumbnailStore = IcePy.Operation('createThumbnailStore', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.api._t_ThumbnailStorePrx, (_M_omero._t_ServerError,))
    ServiceFactory._op_sharedResources = IcePy.Operation('sharedResources', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.grid._t_SharedResourcesPrx, (_M_omero._t_ServerError,))
    ServiceFactory._op_getByName = IcePy.Operation('getByName', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_string),), (), _M_omero.api._t_ServiceInterfacePrx, (_M_omero._t_ServerError,))
    ServiceFactory._op_createByName = IcePy.Operation('createByName', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_string),), (), _M_omero.api._t_StatefulServiceInterfacePrx, (_M_omero._t_ServerError,))
    ServiceFactory._op_subscribe = IcePy.Operation('subscribe', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_string), ((), IcePy._t_ObjectPrx)), (), None, (_M_omero._t_ServerError,))
    ServiceFactory._op_setCallback = IcePy.Operation('setCallback', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.api._t_ClientCallbackPrx),), (), None, (_M_omero._t_ServerError,))
    ServiceFactory._op_close = IcePy.Operation('close', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, (_M_omero._t_ServerError,))
    ServiceFactory._op_close.deprecate("close() is deprecated. use closeOnDestroy() instead.")
    ServiceFactory._op_closeOnDestroy = IcePy.Operation('closeOnDestroy', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, (_M_omero._t_ServerError,))
    ServiceFactory._op_detachOnDestroy = IcePy.Operation('detachOnDestroy', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, (_M_omero._t_ServerError,))
    ServiceFactory._op_activeServices = IcePy.Operation('activeServices', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.api._t_StringSet, (_M_omero._t_ServerError,))
    ServiceFactory._op_keepAllAlive = IcePy.Operation('keepAllAlive', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.api._t_ServiceList),), (), IcePy._t_long, (_M_omero._t_ServerError,))
    ServiceFactory._op_keepAlive = IcePy.Operation('keepAlive', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.api._t_ServiceInterfacePrx),), (), IcePy._t_bool, (_M_omero._t_ServerError,))

    _M_omero.api.ServiceFactory = ServiceFactory
    del ServiceFactory

    _M_omero.api.ServiceFactoryPrx = ServiceFactoryPrx
    del ServiceFactoryPrx

# End of module omero.api

__name__ = 'omero'

# End of module omero
