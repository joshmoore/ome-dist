# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `RawPixelsStore.ice'

import Ice, IcePy, __builtin__

if not Ice.__dict__.has_key("_struct_marker"):
    Ice._struct_marker = object()
import omero_ModelF_ice
import omero_Collections_ice
import omero_api_PyramidService_ice

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

if not _M_omero.api.__dict__.has_key('RawPixelsStore'):
    _M_omero.api.RawPixelsStore = Ice.createTempClass()
    class RawPixelsStore(_M_omero.api.PyramidService):
        def __init__(self):
            if __builtin__.type(self) == _M_omero.api.RawPixelsStore:
                raise RuntimeError('omero.api.RawPixelsStore is an abstract class')

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::api::PyramidService', '::omero::api::RawPixelsStore', '::omero::api::ServiceInterface', '::omero::api::StatefulServiceInterface')

        def ice_id(self, current=None):
            return '::omero::api::RawPixelsStore'

        def ice_staticId():
            return '::omero::api::RawPixelsStore'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def setPixelsId_async(self, _cb, pixelsId, bypassOriginalFile, current=None):
        # def getPixelsId_async(self, _cb, current=None):
        # def getPixelsPath_async(self, _cb, current=None):
        # def prepare_async(self, _cb, pixelsIds, current=None):
        # def getPlaneSize_async(self, _cb, current=None):
        # def getRowSize_async(self, _cb, current=None):
        # def getStackSize_async(self, _cb, current=None):
        # def getTimepointSize_async(self, _cb, current=None):
        # def getTotalSize_async(self, _cb, current=None):
        # def getRowOffset_async(self, _cb, y, z, c, t, current=None):
        # def getPlaneOffset_async(self, _cb, z, c, t, current=None):
        # def getStackOffset_async(self, _cb, c, t, current=None):
        # def getTimepointOffset_async(self, _cb, t, current=None):
        # def getTile_async(self, _cb, z, c, t, x, y, w, h, current=None):
        # def getHypercube_async(self, _cb, offset, size, step, current=None):
        # def getRegion_async(self, _cb, size, offset, current=None):
        # def getRow_async(self, _cb, y, z, c, t, current=None):
        # def getCol_async(self, _cb, x, z, c, t, current=None):
        # def getPlane_async(self, _cb, z, c, t, current=None):
        # def getPlaneRegion_async(self, _cb, z, c, t, size, offset, current=None):
        # def getStack_async(self, _cb, c, t, current=None):
        # def getTimepoint_async(self, _cb, t, current=None):
        # def setTile_async(self, _cb, buf, z, c, t, x, y, w, h, current=None):
        # def setRegion_async(self, _cb, size, offset, buf, current=None):
        # def setRow_async(self, _cb, buf, y, z, c, t, current=None):
        # def setPlane_async(self, _cb, buf, z, c, t, current=None):
        # def setStack_async(self, _cb, buf, z, c, t, current=None):
        # def setTimepoint_async(self, _cb, buf, t, current=None):
        # def getByteWidth_async(self, _cb, current=None):
        # def isSigned_async(self, _cb, current=None):
        # def isFloat_async(self, _cb, current=None):
        # def calculateMessageDigest_async(self, _cb, current=None):
        # def save_async(self, _cb, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.api._t_RawPixelsStore)

        __repr__ = __str__

    _M_omero.api.RawPixelsStorePrx = Ice.createTempClass()
    class RawPixelsStorePrx(_M_omero.api.PyramidServicePrx):

        def setPixelsId(self, pixelsId, bypassOriginalFile, _ctx=None):
            return _M_omero.api.RawPixelsStore._op_setPixelsId.invoke(self, ((pixelsId, bypassOriginalFile), _ctx))

        def setPixelsId_async(self, _cb, pixelsId, bypassOriginalFile, _ctx=None):
            return _M_omero.api.RawPixelsStore._op_setPixelsId.invokeAsync(self, (_cb, (pixelsId, bypassOriginalFile), _ctx))

        def getPixelsId(self, _ctx=None):
            return _M_omero.api.RawPixelsStore._op_getPixelsId.invoke(self, ((), _ctx))

        def getPixelsId_async(self, _cb, _ctx=None):
            return _M_omero.api.RawPixelsStore._op_getPixelsId.invokeAsync(self, (_cb, (), _ctx))

        def getPixelsPath(self, _ctx=None):
            return _M_omero.api.RawPixelsStore._op_getPixelsPath.invoke(self, ((), _ctx))

        def getPixelsPath_async(self, _cb, _ctx=None):
            return _M_omero.api.RawPixelsStore._op_getPixelsPath.invokeAsync(self, (_cb, (), _ctx))

        def prepare(self, pixelsIds, _ctx=None):
            return _M_omero.api.RawPixelsStore._op_prepare.invoke(self, ((pixelsIds, ), _ctx))

        def prepare_async(self, _cb, pixelsIds, _ctx=None):
            return _M_omero.api.RawPixelsStore._op_prepare.invokeAsync(self, (_cb, (pixelsIds, ), _ctx))

        def getPlaneSize(self, _ctx=None):
            return _M_omero.api.RawPixelsStore._op_getPlaneSize.invoke(self, ((), _ctx))

        def getPlaneSize_async(self, _cb, _ctx=None):
            return _M_omero.api.RawPixelsStore._op_getPlaneSize.invokeAsync(self, (_cb, (), _ctx))

        def getRowSize(self, _ctx=None):
            return _M_omero.api.RawPixelsStore._op_getRowSize.invoke(self, ((), _ctx))

        def getRowSize_async(self, _cb, _ctx=None):
            return _M_omero.api.RawPixelsStore._op_getRowSize.invokeAsync(self, (_cb, (), _ctx))

        def getStackSize(self, _ctx=None):
            return _M_omero.api.RawPixelsStore._op_getStackSize.invoke(self, ((), _ctx))

        def getStackSize_async(self, _cb, _ctx=None):
            return _M_omero.api.RawPixelsStore._op_getStackSize.invokeAsync(self, (_cb, (), _ctx))

        def getTimepointSize(self, _ctx=None):
            return _M_omero.api.RawPixelsStore._op_getTimepointSize.invoke(self, ((), _ctx))

        def getTimepointSize_async(self, _cb, _ctx=None):
            return _M_omero.api.RawPixelsStore._op_getTimepointSize.invokeAsync(self, (_cb, (), _ctx))

        def getTotalSize(self, _ctx=None):
            return _M_omero.api.RawPixelsStore._op_getTotalSize.invoke(self, ((), _ctx))

        def getTotalSize_async(self, _cb, _ctx=None):
            return _M_omero.api.RawPixelsStore._op_getTotalSize.invokeAsync(self, (_cb, (), _ctx))

        def getRowOffset(self, y, z, c, t, _ctx=None):
            return _M_omero.api.RawPixelsStore._op_getRowOffset.invoke(self, ((y, z, c, t), _ctx))

        def getRowOffset_async(self, _cb, y, z, c, t, _ctx=None):
            return _M_omero.api.RawPixelsStore._op_getRowOffset.invokeAsync(self, (_cb, (y, z, c, t), _ctx))

        def getPlaneOffset(self, z, c, t, _ctx=None):
            return _M_omero.api.RawPixelsStore._op_getPlaneOffset.invoke(self, ((z, c, t), _ctx))

        def getPlaneOffset_async(self, _cb, z, c, t, _ctx=None):
            return _M_omero.api.RawPixelsStore._op_getPlaneOffset.invokeAsync(self, (_cb, (z, c, t), _ctx))

        def getStackOffset(self, c, t, _ctx=None):
            return _M_omero.api.RawPixelsStore._op_getStackOffset.invoke(self, ((c, t), _ctx))

        def getStackOffset_async(self, _cb, c, t, _ctx=None):
            return _M_omero.api.RawPixelsStore._op_getStackOffset.invokeAsync(self, (_cb, (c, t), _ctx))

        def getTimepointOffset(self, t, _ctx=None):
            return _M_omero.api.RawPixelsStore._op_getTimepointOffset.invoke(self, ((t, ), _ctx))

        def getTimepointOffset_async(self, _cb, t, _ctx=None):
            return _M_omero.api.RawPixelsStore._op_getTimepointOffset.invokeAsync(self, (_cb, (t, ), _ctx))

        def getTile(self, z, c, t, x, y, w, h, _ctx=None):
            return _M_omero.api.RawPixelsStore._op_getTile.invoke(self, ((z, c, t, x, y, w, h), _ctx))

        def getTile_async(self, _cb, z, c, t, x, y, w, h, _ctx=None):
            return _M_omero.api.RawPixelsStore._op_getTile.invokeAsync(self, (_cb, (z, c, t, x, y, w, h), _ctx))

        def getHypercube(self, offset, size, step, _ctx=None):
            return _M_omero.api.RawPixelsStore._op_getHypercube.invoke(self, ((offset, size, step), _ctx))

        def getHypercube_async(self, _cb, offset, size, step, _ctx=None):
            return _M_omero.api.RawPixelsStore._op_getHypercube.invokeAsync(self, (_cb, (offset, size, step), _ctx))

        def getRegion(self, size, offset, _ctx=None):
            return _M_omero.api.RawPixelsStore._op_getRegion.invoke(self, ((size, offset), _ctx))

        def getRegion_async(self, _cb, size, offset, _ctx=None):
            return _M_omero.api.RawPixelsStore._op_getRegion.invokeAsync(self, (_cb, (size, offset), _ctx))

        def getRow(self, y, z, c, t, _ctx=None):
            return _M_omero.api.RawPixelsStore._op_getRow.invoke(self, ((y, z, c, t), _ctx))

        def getRow_async(self, _cb, y, z, c, t, _ctx=None):
            return _M_omero.api.RawPixelsStore._op_getRow.invokeAsync(self, (_cb, (y, z, c, t), _ctx))

        def getCol(self, x, z, c, t, _ctx=None):
            return _M_omero.api.RawPixelsStore._op_getCol.invoke(self, ((x, z, c, t), _ctx))

        def getCol_async(self, _cb, x, z, c, t, _ctx=None):
            return _M_omero.api.RawPixelsStore._op_getCol.invokeAsync(self, (_cb, (x, z, c, t), _ctx))

        def getPlane(self, z, c, t, _ctx=None):
            return _M_omero.api.RawPixelsStore._op_getPlane.invoke(self, ((z, c, t), _ctx))

        def getPlane_async(self, _cb, z, c, t, _ctx=None):
            return _M_omero.api.RawPixelsStore._op_getPlane.invokeAsync(self, (_cb, (z, c, t), _ctx))

        def getPlaneRegion(self, z, c, t, size, offset, _ctx=None):
            return _M_omero.api.RawPixelsStore._op_getPlaneRegion.invoke(self, ((z, c, t, size, offset), _ctx))

        def getPlaneRegion_async(self, _cb, z, c, t, size, offset, _ctx=None):
            return _M_omero.api.RawPixelsStore._op_getPlaneRegion.invokeAsync(self, (_cb, (z, c, t, size, offset), _ctx))

        def getStack(self, c, t, _ctx=None):
            return _M_omero.api.RawPixelsStore._op_getStack.invoke(self, ((c, t), _ctx))

        def getStack_async(self, _cb, c, t, _ctx=None):
            return _M_omero.api.RawPixelsStore._op_getStack.invokeAsync(self, (_cb, (c, t), _ctx))

        def getTimepoint(self, t, _ctx=None):
            return _M_omero.api.RawPixelsStore._op_getTimepoint.invoke(self, ((t, ), _ctx))

        def getTimepoint_async(self, _cb, t, _ctx=None):
            return _M_omero.api.RawPixelsStore._op_getTimepoint.invokeAsync(self, (_cb, (t, ), _ctx))

        def setTile(self, buf, z, c, t, x, y, w, h, _ctx=None):
            return _M_omero.api.RawPixelsStore._op_setTile.invoke(self, ((buf, z, c, t, x, y, w, h), _ctx))

        def setTile_async(self, _cb, buf, z, c, t, x, y, w, h, _ctx=None):
            return _M_omero.api.RawPixelsStore._op_setTile.invokeAsync(self, (_cb, (buf, z, c, t, x, y, w, h), _ctx))

        def setRegion(self, size, offset, buf, _ctx=None):
            return _M_omero.api.RawPixelsStore._op_setRegion.invoke(self, ((size, offset, buf), _ctx))

        def setRegion_async(self, _cb, size, offset, buf, _ctx=None):
            return _M_omero.api.RawPixelsStore._op_setRegion.invokeAsync(self, (_cb, (size, offset, buf), _ctx))

        def setRow(self, buf, y, z, c, t, _ctx=None):
            return _M_omero.api.RawPixelsStore._op_setRow.invoke(self, ((buf, y, z, c, t), _ctx))

        def setRow_async(self, _cb, buf, y, z, c, t, _ctx=None):
            return _M_omero.api.RawPixelsStore._op_setRow.invokeAsync(self, (_cb, (buf, y, z, c, t), _ctx))

        def setPlane(self, buf, z, c, t, _ctx=None):
            return _M_omero.api.RawPixelsStore._op_setPlane.invoke(self, ((buf, z, c, t), _ctx))

        def setPlane_async(self, _cb, buf, z, c, t, _ctx=None):
            return _M_omero.api.RawPixelsStore._op_setPlane.invokeAsync(self, (_cb, (buf, z, c, t), _ctx))

        def setStack(self, buf, z, c, t, _ctx=None):
            return _M_omero.api.RawPixelsStore._op_setStack.invoke(self, ((buf, z, c, t), _ctx))

        def setStack_async(self, _cb, buf, z, c, t, _ctx=None):
            return _M_omero.api.RawPixelsStore._op_setStack.invokeAsync(self, (_cb, (buf, z, c, t), _ctx))

        def setTimepoint(self, buf, t, _ctx=None):
            return _M_omero.api.RawPixelsStore._op_setTimepoint.invoke(self, ((buf, t), _ctx))

        def setTimepoint_async(self, _cb, buf, t, _ctx=None):
            return _M_omero.api.RawPixelsStore._op_setTimepoint.invokeAsync(self, (_cb, (buf, t), _ctx))

        def getByteWidth(self, _ctx=None):
            return _M_omero.api.RawPixelsStore._op_getByteWidth.invoke(self, ((), _ctx))

        def getByteWidth_async(self, _cb, _ctx=None):
            return _M_omero.api.RawPixelsStore._op_getByteWidth.invokeAsync(self, (_cb, (), _ctx))

        def isSigned(self, _ctx=None):
            return _M_omero.api.RawPixelsStore._op_isSigned.invoke(self, ((), _ctx))

        def isSigned_async(self, _cb, _ctx=None):
            return _M_omero.api.RawPixelsStore._op_isSigned.invokeAsync(self, (_cb, (), _ctx))

        def isFloat(self, _ctx=None):
            return _M_omero.api.RawPixelsStore._op_isFloat.invoke(self, ((), _ctx))

        def isFloat_async(self, _cb, _ctx=None):
            return _M_omero.api.RawPixelsStore._op_isFloat.invokeAsync(self, (_cb, (), _ctx))

        def calculateMessageDigest(self, _ctx=None):
            return _M_omero.api.RawPixelsStore._op_calculateMessageDigest.invoke(self, ((), _ctx))

        def calculateMessageDigest_async(self, _cb, _ctx=None):
            return _M_omero.api.RawPixelsStore._op_calculateMessageDigest.invokeAsync(self, (_cb, (), _ctx))

        def save(self, _ctx=None):
            return _M_omero.api.RawPixelsStore._op_save.invoke(self, ((), _ctx))

        def save_async(self, _cb, _ctx=None):
            return _M_omero.api.RawPixelsStore._op_save.invokeAsync(self, (_cb, (), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.api.RawPixelsStorePrx.ice_checkedCast(proxy, '::omero::api::RawPixelsStore', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.api.RawPixelsStorePrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.api._t_RawPixelsStorePrx = IcePy.defineProxy('::omero::api::RawPixelsStore', RawPixelsStorePrx)

    _M_omero.api._t_RawPixelsStore = IcePy.defineClass('::omero::api::RawPixelsStore', RawPixelsStore, (), True, None, (_M_omero.api._t_PyramidService,), ())
    RawPixelsStore.ice_type = _M_omero.api._t_RawPixelsStore

    RawPixelsStore._op_setPixelsId = IcePy.Operation('setPixelsId', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long), ((), IcePy._t_bool)), (), None, (_M_omero._t_ServerError,))
    RawPixelsStore._op_getPixelsId = IcePy.Operation('getPixelsId', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (), (), IcePy._t_long, (_M_omero._t_ServerError,))
    RawPixelsStore._op_getPixelsPath = IcePy.Operation('getPixelsPath', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (), (), IcePy._t_string, (_M_omero._t_ServerError,))
    RawPixelsStore._op_prepare = IcePy.Operation('prepare', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), _M_omero.sys._t_LongList),), (), None, (_M_omero._t_ServerError,))
    RawPixelsStore._op_getPlaneSize = IcePy.Operation('getPlaneSize', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (), (), IcePy._t_long, (_M_omero._t_ServerError,))
    RawPixelsStore._op_getRowSize = IcePy.Operation('getRowSize', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (), (), IcePy._t_int, (_M_omero._t_ServerError,))
    RawPixelsStore._op_getStackSize = IcePy.Operation('getStackSize', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (), (), IcePy._t_long, (_M_omero._t_ServerError,))
    RawPixelsStore._op_getTimepointSize = IcePy.Operation('getTimepointSize', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (), (), IcePy._t_long, (_M_omero._t_ServerError,))
    RawPixelsStore._op_getTotalSize = IcePy.Operation('getTotalSize', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (), (), IcePy._t_long, (_M_omero._t_ServerError,))
    RawPixelsStore._op_getRowOffset = IcePy.Operation('getRowOffset', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), IcePy._t_int), ((), IcePy._t_int), ((), IcePy._t_int), ((), IcePy._t_int)), (), IcePy._t_long, (_M_omero._t_ServerError,))
    RawPixelsStore._op_getPlaneOffset = IcePy.Operation('getPlaneOffset', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), IcePy._t_int), ((), IcePy._t_int), ((), IcePy._t_int)), (), IcePy._t_long, (_M_omero._t_ServerError,))
    RawPixelsStore._op_getStackOffset = IcePy.Operation('getStackOffset', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), IcePy._t_int), ((), IcePy._t_int)), (), IcePy._t_long, (_M_omero._t_ServerError,))
    RawPixelsStore._op_getTimepointOffset = IcePy.Operation('getTimepointOffset', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), IcePy._t_int),), (), IcePy._t_long, (_M_omero._t_ServerError,))
    RawPixelsStore._op_getTile = IcePy.Operation('getTile', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), IcePy._t_int), ((), IcePy._t_int), ((), IcePy._t_int), ((), IcePy._t_int), ((), IcePy._t_int), ((), IcePy._t_int), ((), IcePy._t_int)), (), _M_Ice._t_ByteSeq, (_M_omero._t_ServerError,))
    RawPixelsStore._op_getHypercube = IcePy.Operation('getHypercube', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), _M_omero.sys._t_IntList), ((), _M_omero.sys._t_IntList), ((), _M_omero.sys._t_IntList)), (), _M_Ice._t_ByteSeq, (_M_omero._t_ServerError,))
    RawPixelsStore._op_getRegion = IcePy.Operation('getRegion', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), IcePy._t_int), ((), IcePy._t_long)), (), _M_Ice._t_ByteSeq, (_M_omero._t_ServerError,))
    RawPixelsStore._op_getRow = IcePy.Operation('getRow', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), IcePy._t_int), ((), IcePy._t_int), ((), IcePy._t_int), ((), IcePy._t_int)), (), _M_Ice._t_ByteSeq, (_M_omero._t_ServerError,))
    RawPixelsStore._op_getCol = IcePy.Operation('getCol', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), IcePy._t_int), ((), IcePy._t_int), ((), IcePy._t_int), ((), IcePy._t_int)), (), _M_Ice._t_ByteSeq, (_M_omero._t_ServerError,))
    RawPixelsStore._op_getPlane = IcePy.Operation('getPlane', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), IcePy._t_int), ((), IcePy._t_int), ((), IcePy._t_int)), (), _M_Ice._t_ByteSeq, (_M_omero._t_ServerError,))
    RawPixelsStore._op_getPlaneRegion = IcePy.Operation('getPlaneRegion', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), IcePy._t_int), ((), IcePy._t_int), ((), IcePy._t_int), ((), IcePy._t_int), ((), IcePy._t_int)), (), _M_Ice._t_ByteSeq, (_M_omero._t_ServerError,))
    RawPixelsStore._op_getStack = IcePy.Operation('getStack', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), IcePy._t_int), ((), IcePy._t_int)), (), _M_Ice._t_ByteSeq, (_M_omero._t_ServerError,))
    RawPixelsStore._op_getTimepoint = IcePy.Operation('getTimepoint', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), IcePy._t_int),), (), _M_Ice._t_ByteSeq, (_M_omero._t_ServerError,))
    RawPixelsStore._op_setTile = IcePy.Operation('setTile', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), _M_Ice._t_ByteSeq), ((), IcePy._t_int), ((), IcePy._t_int), ((), IcePy._t_int), ((), IcePy._t_int), ((), IcePy._t_int), ((), IcePy._t_int), ((), IcePy._t_int)), (), None, (_M_omero._t_ServerError,))
    RawPixelsStore._op_setRegion = IcePy.Operation('setRegion', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), IcePy._t_int), ((), IcePy._t_long), ((), _M_Ice._t_ByteSeq)), (), None, (_M_omero._t_ServerError,))
    RawPixelsStore._op_setRow = IcePy.Operation('setRow', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), _M_Ice._t_ByteSeq), ((), IcePy._t_int), ((), IcePy._t_int), ((), IcePy._t_int), ((), IcePy._t_int)), (), None, (_M_omero._t_ServerError,))
    RawPixelsStore._op_setPlane = IcePy.Operation('setPlane', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), _M_Ice._t_ByteSeq), ((), IcePy._t_int), ((), IcePy._t_int), ((), IcePy._t_int)), (), None, (_M_omero._t_ServerError,))
    RawPixelsStore._op_setStack = IcePy.Operation('setStack', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), _M_Ice._t_ByteSeq), ((), IcePy._t_int), ((), IcePy._t_int), ((), IcePy._t_int)), (), None, (_M_omero._t_ServerError,))
    RawPixelsStore._op_setTimepoint = IcePy.Operation('setTimepoint', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), _M_Ice._t_ByteSeq), ((), IcePy._t_int)), (), None, (_M_omero._t_ServerError,))
    RawPixelsStore._op_getByteWidth = IcePy.Operation('getByteWidth', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (), (), IcePy._t_int, (_M_omero._t_ServerError,))
    RawPixelsStore._op_isSigned = IcePy.Operation('isSigned', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (), (), IcePy._t_bool, (_M_omero._t_ServerError,))
    RawPixelsStore._op_isFloat = IcePy.Operation('isFloat', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (), (), IcePy._t_bool, (_M_omero._t_ServerError,))
    RawPixelsStore._op_calculateMessageDigest = IcePy.Operation('calculateMessageDigest', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (), (), _M_Ice._t_ByteSeq, (_M_omero._t_ServerError,))
    RawPixelsStore._op_save = IcePy.Operation('save', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (), (), _M_omero.model._t_Pixels, (_M_omero._t_ServerError,))

    _M_omero.api.RawPixelsStore = RawPixelsStore
    del RawPixelsStore

    _M_omero.api.RawPixelsStorePrx = RawPixelsStorePrx
    del RawPixelsStorePrx

# End of module omero.api

__name__ = 'omero'

# End of module omero
