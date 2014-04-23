# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `ThumbnailStore.ice'

import Ice, IcePy, __builtin__

if not Ice.__dict__.has_key("_struct_marker"):
    Ice._struct_marker = object()
import omero_ModelF_ice
import omero_ServicesF_ice
import omero_Collections_ice

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

# Included module omero.grid
_M_omero.grid = Ice.openModule('omero.grid')

# Start of module omero
__name__ = 'omero'

# Start of module omero.api
__name__ = 'omero.api'

if not _M_omero.api.__dict__.has_key('ThumbnailStore'):
    _M_omero.api.ThumbnailStore = Ice.createTempClass()
    class ThumbnailStore(_M_omero.api.StatefulServiceInterface):
        def __init__(self):
            if __builtin__.type(self) == _M_omero.api.ThumbnailStore:
                raise RuntimeError('omero.api.ThumbnailStore is an abstract class')

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::api::ServiceInterface', '::omero::api::StatefulServiceInterface', '::omero::api::ThumbnailStore')

        def ice_id(self, current=None):
            return '::omero::api::ThumbnailStore'

        def ice_staticId():
            return '::omero::api::ThumbnailStore'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def setPixelsId_async(self, _cb, pixelsId, current=None):
        # def isInProgress_async(self, _cb, current=None):
        # def setRenderingDefId_async(self, _cb, renderingDefId, current=None):
        # def getRenderingDefId_async(self, _cb, current=None):
        # def getThumbnail_async(self, _cb, sizeX, sizeY, current=None):
        # def getThumbnailSet_async(self, _cb, sizeX, sizeY, pixelsIds, current=None):
        # def getThumbnailByLongestSideSet_async(self, _cb, size, pixelsIds, current=None):
        # def getThumbnailByLongestSide_async(self, _cb, size, current=None):
        # def getThumbnailByLongestSideDirect_async(self, _cb, size, current=None):
        # def getThumbnailDirect_async(self, _cb, sizeX, sizeY, current=None):
        # def getThumbnailForSectionDirect_async(self, _cb, theZ, theT, sizeX, sizeY, current=None):
        # def getThumbnailForSectionByLongestSideDirect_async(self, _cb, theZ, theT, size, current=None):
        # def createThumbnails_async(self, _cb, current=None):
        # def createThumbnail_async(self, _cb, sizeX, sizeY, current=None):
        # def createThumbnailsByLongestSideSet_async(self, _cb, size, pixelsIds, current=None):
        # def thumbnailExists_async(self, _cb, sizeX, sizeY, current=None):
        # def resetDefaults_async(self, _cb, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.api._t_ThumbnailStore)

        __repr__ = __str__

    _M_omero.api.ThumbnailStorePrx = Ice.createTempClass()
    class ThumbnailStorePrx(_M_omero.api.StatefulServiceInterfacePrx):

        def setPixelsId(self, pixelsId, _ctx=None):
            return _M_omero.api.ThumbnailStore._op_setPixelsId.invoke(self, ((pixelsId, ), _ctx))

        def setPixelsId_async(self, _cb, pixelsId, _ctx=None):
            return _M_omero.api.ThumbnailStore._op_setPixelsId.invokeAsync(self, (_cb, (pixelsId, ), _ctx))

        def isInProgress(self, _ctx=None):
            return _M_omero.api.ThumbnailStore._op_isInProgress.invoke(self, ((), _ctx))

        def isInProgress_async(self, _cb, _ctx=None):
            return _M_omero.api.ThumbnailStore._op_isInProgress.invokeAsync(self, (_cb, (), _ctx))

        def setRenderingDefId(self, renderingDefId, _ctx=None):
            return _M_omero.api.ThumbnailStore._op_setRenderingDefId.invoke(self, ((renderingDefId, ), _ctx))

        def setRenderingDefId_async(self, _cb, renderingDefId, _ctx=None):
            return _M_omero.api.ThumbnailStore._op_setRenderingDefId.invokeAsync(self, (_cb, (renderingDefId, ), _ctx))

        def getRenderingDefId(self, _ctx=None):
            return _M_omero.api.ThumbnailStore._op_getRenderingDefId.invoke(self, ((), _ctx))

        def getRenderingDefId_async(self, _cb, _ctx=None):
            return _M_omero.api.ThumbnailStore._op_getRenderingDefId.invokeAsync(self, (_cb, (), _ctx))

        def getThumbnail(self, sizeX, sizeY, _ctx=None):
            return _M_omero.api.ThumbnailStore._op_getThumbnail.invoke(self, ((sizeX, sizeY), _ctx))

        def getThumbnail_async(self, _cb, sizeX, sizeY, _ctx=None):
            return _M_omero.api.ThumbnailStore._op_getThumbnail.invokeAsync(self, (_cb, (sizeX, sizeY), _ctx))

        def getThumbnailSet(self, sizeX, sizeY, pixelsIds, _ctx=None):
            return _M_omero.api.ThumbnailStore._op_getThumbnailSet.invoke(self, ((sizeX, sizeY, pixelsIds), _ctx))

        def getThumbnailSet_async(self, _cb, sizeX, sizeY, pixelsIds, _ctx=None):
            return _M_omero.api.ThumbnailStore._op_getThumbnailSet.invokeAsync(self, (_cb, (sizeX, sizeY, pixelsIds), _ctx))

        def getThumbnailByLongestSideSet(self, size, pixelsIds, _ctx=None):
            return _M_omero.api.ThumbnailStore._op_getThumbnailByLongestSideSet.invoke(self, ((size, pixelsIds), _ctx))

        def getThumbnailByLongestSideSet_async(self, _cb, size, pixelsIds, _ctx=None):
            return _M_omero.api.ThumbnailStore._op_getThumbnailByLongestSideSet.invokeAsync(self, (_cb, (size, pixelsIds), _ctx))

        def getThumbnailByLongestSide(self, size, _ctx=None):
            return _M_omero.api.ThumbnailStore._op_getThumbnailByLongestSide.invoke(self, ((size, ), _ctx))

        def getThumbnailByLongestSide_async(self, _cb, size, _ctx=None):
            return _M_omero.api.ThumbnailStore._op_getThumbnailByLongestSide.invokeAsync(self, (_cb, (size, ), _ctx))

        def getThumbnailByLongestSideDirect(self, size, _ctx=None):
            return _M_omero.api.ThumbnailStore._op_getThumbnailByLongestSideDirect.invoke(self, ((size, ), _ctx))

        def getThumbnailByLongestSideDirect_async(self, _cb, size, _ctx=None):
            return _M_omero.api.ThumbnailStore._op_getThumbnailByLongestSideDirect.invokeAsync(self, (_cb, (size, ), _ctx))

        def getThumbnailDirect(self, sizeX, sizeY, _ctx=None):
            return _M_omero.api.ThumbnailStore._op_getThumbnailDirect.invoke(self, ((sizeX, sizeY), _ctx))

        def getThumbnailDirect_async(self, _cb, sizeX, sizeY, _ctx=None):
            return _M_omero.api.ThumbnailStore._op_getThumbnailDirect.invokeAsync(self, (_cb, (sizeX, sizeY), _ctx))

        def getThumbnailForSectionDirect(self, theZ, theT, sizeX, sizeY, _ctx=None):
            return _M_omero.api.ThumbnailStore._op_getThumbnailForSectionDirect.invoke(self, ((theZ, theT, sizeX, sizeY), _ctx))

        def getThumbnailForSectionDirect_async(self, _cb, theZ, theT, sizeX, sizeY, _ctx=None):
            return _M_omero.api.ThumbnailStore._op_getThumbnailForSectionDirect.invokeAsync(self, (_cb, (theZ, theT, sizeX, sizeY), _ctx))

        def getThumbnailForSectionByLongestSideDirect(self, theZ, theT, size, _ctx=None):
            return _M_omero.api.ThumbnailStore._op_getThumbnailForSectionByLongestSideDirect.invoke(self, ((theZ, theT, size), _ctx))

        def getThumbnailForSectionByLongestSideDirect_async(self, _cb, theZ, theT, size, _ctx=None):
            return _M_omero.api.ThumbnailStore._op_getThumbnailForSectionByLongestSideDirect.invokeAsync(self, (_cb, (theZ, theT, size), _ctx))

        def createThumbnails(self, _ctx=None):
            return _M_omero.api.ThumbnailStore._op_createThumbnails.invoke(self, ((), _ctx))

        def createThumbnails_async(self, _cb, _ctx=None):
            return _M_omero.api.ThumbnailStore._op_createThumbnails.invokeAsync(self, (_cb, (), _ctx))

        def createThumbnail(self, sizeX, sizeY, _ctx=None):
            return _M_omero.api.ThumbnailStore._op_createThumbnail.invoke(self, ((sizeX, sizeY), _ctx))

        def createThumbnail_async(self, _cb, sizeX, sizeY, _ctx=None):
            return _M_omero.api.ThumbnailStore._op_createThumbnail.invokeAsync(self, (_cb, (sizeX, sizeY), _ctx))

        def createThumbnailsByLongestSideSet(self, size, pixelsIds, _ctx=None):
            return _M_omero.api.ThumbnailStore._op_createThumbnailsByLongestSideSet.invoke(self, ((size, pixelsIds), _ctx))

        def createThumbnailsByLongestSideSet_async(self, _cb, size, pixelsIds, _ctx=None):
            return _M_omero.api.ThumbnailStore._op_createThumbnailsByLongestSideSet.invokeAsync(self, (_cb, (size, pixelsIds), _ctx))

        def thumbnailExists(self, sizeX, sizeY, _ctx=None):
            return _M_omero.api.ThumbnailStore._op_thumbnailExists.invoke(self, ((sizeX, sizeY), _ctx))

        def thumbnailExists_async(self, _cb, sizeX, sizeY, _ctx=None):
            return _M_omero.api.ThumbnailStore._op_thumbnailExists.invokeAsync(self, (_cb, (sizeX, sizeY), _ctx))

        def resetDefaults(self, _ctx=None):
            return _M_omero.api.ThumbnailStore._op_resetDefaults.invoke(self, ((), _ctx))

        def resetDefaults_async(self, _cb, _ctx=None):
            return _M_omero.api.ThumbnailStore._op_resetDefaults.invokeAsync(self, (_cb, (), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.api.ThumbnailStorePrx.ice_checkedCast(proxy, '::omero::api::ThumbnailStore', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.api.ThumbnailStorePrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.api._t_ThumbnailStorePrx = IcePy.defineProxy('::omero::api::ThumbnailStore', ThumbnailStorePrx)

    _M_omero.api._t_ThumbnailStore = IcePy.defineClass('::omero::api::ThumbnailStore', ThumbnailStore, (), True, None, (_M_omero.api._t_StatefulServiceInterface,), ())
    ThumbnailStore.ice_type = _M_omero.api._t_ThumbnailStore

    ThumbnailStore._op_setPixelsId = IcePy.Operation('setPixelsId', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long),), (), IcePy._t_bool, (_M_omero._t_ServerError,))
    ThumbnailStore._op_isInProgress = IcePy.Operation('isInProgress', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (), (), IcePy._t_bool, (_M_omero._t_ServerError,))
    ThumbnailStore._op_setRenderingDefId = IcePy.Operation('setRenderingDefId', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long),), (), None, (_M_omero._t_ServerError,))
    ThumbnailStore._op_getRenderingDefId = IcePy.Operation('getRenderingDefId', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (), (), IcePy._t_long, (_M_omero._t_ServerError,))
    ThumbnailStore._op_getThumbnail = IcePy.Operation('getThumbnail', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero._t_RInt), ((), _M_omero._t_RInt)), (), _M_Ice._t_ByteSeq, (_M_omero._t_ServerError,))
    ThumbnailStore._op_getThumbnailSet = IcePy.Operation('getThumbnailSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero._t_RInt), ((), _M_omero._t_RInt), ((), _M_omero.sys._t_LongList)), (), _M_omero.sys._t_IdByteMap, (_M_omero._t_ServerError,))
    ThumbnailStore._op_getThumbnailByLongestSideSet = IcePy.Operation('getThumbnailByLongestSideSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero._t_RInt), ((), _M_omero.sys._t_LongList)), (), _M_omero.sys._t_IdByteMap, (_M_omero._t_ServerError,))
    ThumbnailStore._op_getThumbnailByLongestSide = IcePy.Operation('getThumbnailByLongestSide', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero._t_RInt),), (), _M_Ice._t_ByteSeq, (_M_omero._t_ServerError,))
    ThumbnailStore._op_getThumbnailByLongestSideDirect = IcePy.Operation('getThumbnailByLongestSideDirect', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero._t_RInt),), (), _M_Ice._t_ByteSeq, (_M_omero._t_ServerError,))
    ThumbnailStore._op_getThumbnailDirect = IcePy.Operation('getThumbnailDirect', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero._t_RInt), ((), _M_omero._t_RInt)), (), _M_Ice._t_ByteSeq, (_M_omero._t_ServerError,))
    ThumbnailStore._op_getThumbnailForSectionDirect = IcePy.Operation('getThumbnailForSectionDirect', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_int), ((), IcePy._t_int), ((), _M_omero._t_RInt), ((), _M_omero._t_RInt)), (), _M_Ice._t_ByteSeq, (_M_omero._t_ServerError,))
    ThumbnailStore._op_getThumbnailForSectionByLongestSideDirect = IcePy.Operation('getThumbnailForSectionByLongestSideDirect', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_int), ((), IcePy._t_int), ((), _M_omero._t_RInt)), (), _M_Ice._t_ByteSeq, (_M_omero._t_ServerError,))
    ThumbnailStore._op_createThumbnails = IcePy.Operation('createThumbnails', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (), (), None, (_M_omero._t_ServerError,))
    ThumbnailStore._op_createThumbnail = IcePy.Operation('createThumbnail', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero._t_RInt), ((), _M_omero._t_RInt)), (), None, (_M_omero._t_ServerError,))
    ThumbnailStore._op_createThumbnailsByLongestSideSet = IcePy.Operation('createThumbnailsByLongestSideSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero._t_RInt), ((), _M_omero.sys._t_LongList)), (), None, (_M_omero._t_ServerError,))
    ThumbnailStore._op_thumbnailExists = IcePy.Operation('thumbnailExists', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero._t_RInt), ((), _M_omero._t_RInt)), (), IcePy._t_bool, (_M_omero._t_ServerError,))
    ThumbnailStore._op_resetDefaults = IcePy.Operation('resetDefaults', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (), (), None, (_M_omero._t_ServerError,))

    _M_omero.api.ThumbnailStore = ThumbnailStore
    del ThumbnailStore

    _M_omero.api.ThumbnailStorePrx = ThumbnailStorePrx
    del ThumbnailStorePrx

# End of module omero.api

__name__ = 'omero'

# End of module omero
