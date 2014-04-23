# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `PyramidService.ice'

import Ice, IcePy, __builtin__

if not Ice.__dict__.has_key("_struct_marker"):
    Ice._struct_marker = object()
import omero_ServicesF_ice

# Included module Ice
_M_Ice = Ice.openModule('Ice')

# Included module Glacier2
_M_Glacier2 = Ice.openModule('Glacier2')

# Included module omero
_M_omero = Ice.openModule('omero')

# Included module omero.model
_M_omero.model = Ice.openModule('omero.model')

# Included module omero.sys
_M_omero.sys = Ice.openModule('omero.sys')

# Included module omero.api
_M_omero.api = Ice.openModule('omero.api')

# Included module omero.grid
_M_omero.grid = Ice.openModule('omero.grid')

# Start of module omero
__name__ = 'omero'

# Start of module omero.api
__name__ = 'omero.api'

if not _M_omero.api.__dict__.has_key('ResolutionDescription'):
    _M_omero.api.ResolutionDescription = Ice.createTempClass()
    class ResolutionDescription(Ice.Object):
        def __init__(self, sizeX=0, sizeY=0):
            self.sizeX = sizeX
            self.sizeY = sizeY

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::api::ResolutionDescription')

        def ice_id(self, current=None):
            return '::omero::api::ResolutionDescription'

        def ice_staticId():
            return '::omero::api::ResolutionDescription'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero.api._t_ResolutionDescription)

        __repr__ = __str__

    _M_omero.api.ResolutionDescriptionPrx = Ice.createTempClass()
    class ResolutionDescriptionPrx(Ice.ObjectPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.api.ResolutionDescriptionPrx.ice_checkedCast(proxy, '::omero::api::ResolutionDescription', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.api.ResolutionDescriptionPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.api._t_ResolutionDescriptionPrx = IcePy.defineProxy('::omero::api::ResolutionDescription', ResolutionDescriptionPrx)

    _M_omero.api._t_ResolutionDescription = IcePy.defineClass('::omero::api::ResolutionDescription', ResolutionDescription, (), False, None, (), (
        ('sizeX', (), IcePy._t_int),
        ('sizeY', (), IcePy._t_int)
    ))
    ResolutionDescription.ice_type = _M_omero.api._t_ResolutionDescription

    _M_omero.api.ResolutionDescription = ResolutionDescription
    del ResolutionDescription

    _M_omero.api.ResolutionDescriptionPrx = ResolutionDescriptionPrx
    del ResolutionDescriptionPrx

if not _M_omero.api.__dict__.has_key('_t_ResolutionDescriptions'):
    _M_omero.api._t_ResolutionDescriptions = IcePy.defineSequence('::omero::api::ResolutionDescriptions', (), _M_omero.api._t_ResolutionDescription)

if not _M_omero.api.__dict__.has_key('PyramidService'):
    _M_omero.api.PyramidService = Ice.createTempClass()
    class PyramidService(_M_omero.api.StatefulServiceInterface):
        def __init__(self):
            if __builtin__.type(self) == _M_omero.api.PyramidService:
                raise RuntimeError('omero.api.PyramidService is an abstract class')

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::api::PyramidService', '::omero::api::ServiceInterface', '::omero::api::StatefulServiceInterface')

        def ice_id(self, current=None):
            return '::omero::api::PyramidService'

        def ice_staticId():
            return '::omero::api::PyramidService'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def requiresPixelsPyramid_async(self, _cb, current=None):
        # def getResolutionLevels_async(self, _cb, current=None):
        # def getResolutionDescriptions_async(self, _cb, current=None):
        # def getResolutionLevel_async(self, _cb, current=None):
        # def setResolutionLevel_async(self, _cb, resolutionLevel, current=None):
        # def getTileSize_async(self, _cb, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.api._t_PyramidService)

        __repr__ = __str__

    _M_omero.api.PyramidServicePrx = Ice.createTempClass()
    class PyramidServicePrx(_M_omero.api.StatefulServiceInterfacePrx):

        def requiresPixelsPyramid(self, _ctx=None):
            return _M_omero.api.PyramidService._op_requiresPixelsPyramid.invoke(self, ((), _ctx))

        def requiresPixelsPyramid_async(self, _cb, _ctx=None):
            return _M_omero.api.PyramidService._op_requiresPixelsPyramid.invokeAsync(self, (_cb, (), _ctx))

        def getResolutionLevels(self, _ctx=None):
            return _M_omero.api.PyramidService._op_getResolutionLevels.invoke(self, ((), _ctx))

        def getResolutionLevels_async(self, _cb, _ctx=None):
            return _M_omero.api.PyramidService._op_getResolutionLevels.invokeAsync(self, (_cb, (), _ctx))

        def getResolutionDescriptions(self, _ctx=None):
            return _M_omero.api.PyramidService._op_getResolutionDescriptions.invoke(self, ((), _ctx))

        def getResolutionDescriptions_async(self, _cb, _ctx=None):
            return _M_omero.api.PyramidService._op_getResolutionDescriptions.invokeAsync(self, (_cb, (), _ctx))

        def getResolutionLevel(self, _ctx=None):
            return _M_omero.api.PyramidService._op_getResolutionLevel.invoke(self, ((), _ctx))

        def getResolutionLevel_async(self, _cb, _ctx=None):
            return _M_omero.api.PyramidService._op_getResolutionLevel.invokeAsync(self, (_cb, (), _ctx))

        def setResolutionLevel(self, resolutionLevel, _ctx=None):
            return _M_omero.api.PyramidService._op_setResolutionLevel.invoke(self, ((resolutionLevel, ), _ctx))

        def setResolutionLevel_async(self, _cb, resolutionLevel, _ctx=None):
            return _M_omero.api.PyramidService._op_setResolutionLevel.invokeAsync(self, (_cb, (resolutionLevel, ), _ctx))

        def getTileSize(self, _ctx=None):
            return _M_omero.api.PyramidService._op_getTileSize.invoke(self, ((), _ctx))

        def getTileSize_async(self, _cb, _ctx=None):
            return _M_omero.api.PyramidService._op_getTileSize.invokeAsync(self, (_cb, (), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.api.PyramidServicePrx.ice_checkedCast(proxy, '::omero::api::PyramidService', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.api.PyramidServicePrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.api._t_PyramidServicePrx = IcePy.defineProxy('::omero::api::PyramidService', PyramidServicePrx)

    _M_omero.api._t_PyramidService = IcePy.defineClass('::omero::api::PyramidService', PyramidService, (), True, None, (_M_omero.api._t_StatefulServiceInterface,), ())
    PyramidService.ice_type = _M_omero.api._t_PyramidService

    PyramidService._op_requiresPixelsPyramid = IcePy.Operation('requiresPixelsPyramid', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (), (), IcePy._t_bool, (_M_omero._t_ServerError,))
    PyramidService._op_getResolutionLevels = IcePy.Operation('getResolutionLevels', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (), (), IcePy._t_int, (_M_omero._t_ServerError,))
    PyramidService._op_getResolutionDescriptions = IcePy.Operation('getResolutionDescriptions', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (), (), _M_omero.api._t_ResolutionDescriptions, (_M_omero._t_ServerError,))
    PyramidService._op_getResolutionLevel = IcePy.Operation('getResolutionLevel', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (), (), IcePy._t_int, (_M_omero._t_ServerError,))
    PyramidService._op_setResolutionLevel = IcePy.Operation('setResolutionLevel', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), IcePy._t_int),), (), None, (_M_omero._t_ServerError,))
    PyramidService._op_getTileSize = IcePy.Operation('getTileSize', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (), (), _M_Ice._t_IntSeq, (_M_omero._t_ServerError,))

    _M_omero.api.PyramidService = PyramidService
    del PyramidService

    _M_omero.api.PyramidServicePrx = PyramidServicePrx
    del PyramidServicePrx

# End of module omero.api

__name__ = 'omero'

# End of module omero
