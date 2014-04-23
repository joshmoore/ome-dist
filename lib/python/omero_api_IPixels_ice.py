# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `IPixels.ice'

import Ice, IcePy, __builtin__

if not Ice.__dict__.has_key("_struct_marker"):
    Ice._struct_marker = object()
import omero_Collections_ice
import omero_ServicesF_ice

# Included module omero
_M_omero = Ice.openModule('omero')

# Included module omero.model
_M_omero.model = Ice.openModule('omero.model')

# Included module Ice
_M_Ice = Ice.openModule('Ice')

# Included module omero.sys
_M_omero.sys = Ice.openModule('omero.sys')

# Included module omero.api
_M_omero.api = Ice.openModule('omero.api')

# Included module Glacier2
_M_Glacier2 = Ice.openModule('Glacier2')

# Included module omero.grid
_M_omero.grid = Ice.openModule('omero.grid')

# Start of module omero
__name__ = 'omero'

# Start of module omero.api
__name__ = 'omero.api'

if not _M_omero.api.__dict__.has_key('IPixels'):
    _M_omero.api.IPixels = Ice.createTempClass()
    class IPixels(_M_omero.api.ServiceInterface):
        def __init__(self):
            if __builtin__.type(self) == _M_omero.api.IPixels:
                raise RuntimeError('omero.api.IPixels is an abstract class')

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::api::IPixels', '::omero::api::ServiceInterface')

        def ice_id(self, current=None):
            return '::omero::api::IPixels'

        def ice_staticId():
            return '::omero::api::IPixels'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def retrievePixDescription_async(self, _cb, pixId, current=None):
        # def retrieveRndSettings_async(self, _cb, pixId, current=None):
        # def retrieveRndSettingsFor_async(self, _cb, pixId, userId, current=None):
        # def retrieveAllRndSettings_async(self, _cb, pixId, userId, current=None):
        # def loadRndSettings_async(self, _cb, renderingSettingsId, current=None):
        # def saveRndSettings_async(self, _cb, rndSettings, current=None):
        # def getBitDepth_async(self, _cb, type, current=None):
        # def getEnumeration_async(self, _cb, enumClass, value, current=None):
        # def getAllEnumerations_async(self, _cb, enumClass, current=None):
        # def copyAndResizePixels_async(self, _cb, pixelsId, sizeX, sizeY, sizeZ, sizeT, channelList, methodology, copyStats, current=None):
        # def copyAndResizeImage_async(self, _cb, imageId, sizeX, sizeY, sizeZ, sizeT, channelList, methodology, copyStats, current=None):
        # def createImage_async(self, _cb, sizeX, sizeY, sizeZ, sizeT, channelList, pixelsType, name, description, current=None):
        # def setChannelGlobalMinMax_async(self, _cb, pixelsId, channelIndex, min, max, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.api._t_IPixels)

        __repr__ = __str__

    _M_omero.api.IPixelsPrx = Ice.createTempClass()
    class IPixelsPrx(_M_omero.api.ServiceInterfacePrx):

        def retrievePixDescription(self, pixId, _ctx=None):
            return _M_omero.api.IPixels._op_retrievePixDescription.invoke(self, ((pixId, ), _ctx))

        def retrievePixDescription_async(self, _cb, pixId, _ctx=None):
            return _M_omero.api.IPixels._op_retrievePixDescription.invokeAsync(self, (_cb, (pixId, ), _ctx))

        def retrieveRndSettings(self, pixId, _ctx=None):
            return _M_omero.api.IPixels._op_retrieveRndSettings.invoke(self, ((pixId, ), _ctx))

        def retrieveRndSettings_async(self, _cb, pixId, _ctx=None):
            return _M_omero.api.IPixels._op_retrieveRndSettings.invokeAsync(self, (_cb, (pixId, ), _ctx))

        def retrieveRndSettingsFor(self, pixId, userId, _ctx=None):
            return _M_omero.api.IPixels._op_retrieveRndSettingsFor.invoke(self, ((pixId, userId), _ctx))

        def retrieveRndSettingsFor_async(self, _cb, pixId, userId, _ctx=None):
            return _M_omero.api.IPixels._op_retrieveRndSettingsFor.invokeAsync(self, (_cb, (pixId, userId), _ctx))

        def retrieveAllRndSettings(self, pixId, userId, _ctx=None):
            return _M_omero.api.IPixels._op_retrieveAllRndSettings.invoke(self, ((pixId, userId), _ctx))

        def retrieveAllRndSettings_async(self, _cb, pixId, userId, _ctx=None):
            return _M_omero.api.IPixels._op_retrieveAllRndSettings.invokeAsync(self, (_cb, (pixId, userId), _ctx))

        def loadRndSettings(self, renderingSettingsId, _ctx=None):
            return _M_omero.api.IPixels._op_loadRndSettings.invoke(self, ((renderingSettingsId, ), _ctx))

        def loadRndSettings_async(self, _cb, renderingSettingsId, _ctx=None):
            return _M_omero.api.IPixels._op_loadRndSettings.invokeAsync(self, (_cb, (renderingSettingsId, ), _ctx))

        def saveRndSettings(self, rndSettings, _ctx=None):
            return _M_omero.api.IPixels._op_saveRndSettings.invoke(self, ((rndSettings, ), _ctx))

        def saveRndSettings_async(self, _cb, rndSettings, _ctx=None):
            return _M_omero.api.IPixels._op_saveRndSettings.invokeAsync(self, (_cb, (rndSettings, ), _ctx))

        def getBitDepth(self, type, _ctx=None):
            return _M_omero.api.IPixels._op_getBitDepth.invoke(self, ((type, ), _ctx))

        def getBitDepth_async(self, _cb, type, _ctx=None):
            return _M_omero.api.IPixels._op_getBitDepth.invokeAsync(self, (_cb, (type, ), _ctx))

        def getEnumeration(self, enumClass, value, _ctx=None):
            return _M_omero.api.IPixels._op_getEnumeration.invoke(self, ((enumClass, value), _ctx))

        def getEnumeration_async(self, _cb, enumClass, value, _ctx=None):
            return _M_omero.api.IPixels._op_getEnumeration.invokeAsync(self, (_cb, (enumClass, value), _ctx))

        def getAllEnumerations(self, enumClass, _ctx=None):
            return _M_omero.api.IPixels._op_getAllEnumerations.invoke(self, ((enumClass, ), _ctx))

        def getAllEnumerations_async(self, _cb, enumClass, _ctx=None):
            return _M_omero.api.IPixels._op_getAllEnumerations.invokeAsync(self, (_cb, (enumClass, ), _ctx))

        def copyAndResizePixels(self, pixelsId, sizeX, sizeY, sizeZ, sizeT, channelList, methodology, copyStats, _ctx=None):
            return _M_omero.api.IPixels._op_copyAndResizePixels.invoke(self, ((pixelsId, sizeX, sizeY, sizeZ, sizeT, channelList, methodology, copyStats), _ctx))

        def copyAndResizePixels_async(self, _cb, pixelsId, sizeX, sizeY, sizeZ, sizeT, channelList, methodology, copyStats, _ctx=None):
            return _M_omero.api.IPixels._op_copyAndResizePixels.invokeAsync(self, (_cb, (pixelsId, sizeX, sizeY, sizeZ, sizeT, channelList, methodology, copyStats), _ctx))

        def copyAndResizeImage(self, imageId, sizeX, sizeY, sizeZ, sizeT, channelList, methodology, copyStats, _ctx=None):
            return _M_omero.api.IPixels._op_copyAndResizeImage.invoke(self, ((imageId, sizeX, sizeY, sizeZ, sizeT, channelList, methodology, copyStats), _ctx))

        def copyAndResizeImage_async(self, _cb, imageId, sizeX, sizeY, sizeZ, sizeT, channelList, methodology, copyStats, _ctx=None):
            return _M_omero.api.IPixels._op_copyAndResizeImage.invokeAsync(self, (_cb, (imageId, sizeX, sizeY, sizeZ, sizeT, channelList, methodology, copyStats), _ctx))

        def createImage(self, sizeX, sizeY, sizeZ, sizeT, channelList, pixelsType, name, description, _ctx=None):
            return _M_omero.api.IPixels._op_createImage.invoke(self, ((sizeX, sizeY, sizeZ, sizeT, channelList, pixelsType, name, description), _ctx))

        def createImage_async(self, _cb, sizeX, sizeY, sizeZ, sizeT, channelList, pixelsType, name, description, _ctx=None):
            return _M_omero.api.IPixels._op_createImage.invokeAsync(self, (_cb, (sizeX, sizeY, sizeZ, sizeT, channelList, pixelsType, name, description), _ctx))

        def setChannelGlobalMinMax(self, pixelsId, channelIndex, min, max, _ctx=None):
            return _M_omero.api.IPixels._op_setChannelGlobalMinMax.invoke(self, ((pixelsId, channelIndex, min, max), _ctx))

        def setChannelGlobalMinMax_async(self, _cb, pixelsId, channelIndex, min, max, _ctx=None):
            return _M_omero.api.IPixels._op_setChannelGlobalMinMax.invokeAsync(self, (_cb, (pixelsId, channelIndex, min, max), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.api.IPixelsPrx.ice_checkedCast(proxy, '::omero::api::IPixels', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.api.IPixelsPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.api._t_IPixelsPrx = IcePy.defineProxy('::omero::api::IPixels', IPixelsPrx)

    _M_omero.api._t_IPixels = IcePy.defineClass('::omero::api::IPixels', IPixels, (), True, None, (_M_omero.api._t_ServiceInterface,), ())
    IPixels.ice_type = _M_omero.api._t_IPixels

    IPixels._op_retrievePixDescription = IcePy.Operation('retrievePixDescription', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), IcePy._t_long),), (), _M_omero.model._t_Pixels, (_M_omero._t_ServerError,))
    IPixels._op_retrieveRndSettings = IcePy.Operation('retrieveRndSettings', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), IcePy._t_long),), (), _M_omero.model._t_RenderingDef, (_M_omero._t_ServerError,))
    IPixels._op_retrieveRndSettingsFor = IcePy.Operation('retrieveRndSettingsFor', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), IcePy._t_long), ((), IcePy._t_long)), (), _M_omero.model._t_RenderingDef, (_M_omero._t_ServerError,))
    IPixels._op_retrieveAllRndSettings = IcePy.Operation('retrieveAllRndSettings', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), IcePy._t_long), ((), IcePy._t_long)), (), _M_omero.api._t_IObjectList, (_M_omero._t_ServerError,))
    IPixels._op_loadRndSettings = IcePy.Operation('loadRndSettings', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), IcePy._t_long),), (), _M_omero.model._t_RenderingDef, (_M_omero._t_ServerError,))
    IPixels._op_saveRndSettings = IcePy.Operation('saveRndSettings', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.model._t_RenderingDef),), (), None, (_M_omero._t_ServerError,))
    IPixels._op_getBitDepth = IcePy.Operation('getBitDepth', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), _M_omero.model._t_PixelsType),), (), IcePy._t_int, (_M_omero._t_ServerError,))
    IPixels._op_getEnumeration = IcePy.Operation('getEnumeration', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), IcePy._t_string), ((), IcePy._t_string)), (), _M_omero.model._t_IObject, (_M_omero._t_ServerError,))
    IPixels._op_getAllEnumerations = IcePy.Operation('getAllEnumerations', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), IcePy._t_string),), (), _M_omero.api._t_IObjectList, (_M_omero._t_ServerError,))
    IPixels._op_copyAndResizePixels = IcePy.Operation('copyAndResizePixels', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long), ((), _M_omero._t_RInt), ((), _M_omero._t_RInt), ((), _M_omero._t_RInt), ((), _M_omero._t_RInt), ((), _M_omero.sys._t_IntList), ((), IcePy._t_string), ((), IcePy._t_bool)), (), _M_omero._t_RLong, (_M_omero._t_ServerError,))
    IPixels._op_copyAndResizeImage = IcePy.Operation('copyAndResizeImage', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long), ((), _M_omero._t_RInt), ((), _M_omero._t_RInt), ((), _M_omero._t_RInt), ((), _M_omero._t_RInt), ((), _M_omero.sys._t_IntList), ((), IcePy._t_string), ((), IcePy._t_bool)), (), _M_omero._t_RLong, (_M_omero._t_ServerError,))
    IPixels._op_createImage = IcePy.Operation('createImage', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_int), ((), IcePy._t_int), ((), IcePy._t_int), ((), IcePy._t_int), ((), _M_omero.sys._t_IntList), ((), _M_omero.model._t_PixelsType), ((), IcePy._t_string), ((), IcePy._t_string)), (), _M_omero._t_RLong, (_M_omero._t_ServerError,))
    IPixels._op_setChannelGlobalMinMax = IcePy.Operation('setChannelGlobalMinMax', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long), ((), IcePy._t_int), ((), IcePy._t_double), ((), IcePy._t_double)), (), None, (_M_omero._t_ServerError,))

    _M_omero.api.IPixels = IPixels
    del IPixels

    _M_omero.api.IPixelsPrx = IPixelsPrx
    del IPixelsPrx

# End of module omero.api

__name__ = 'omero'

# End of module omero
