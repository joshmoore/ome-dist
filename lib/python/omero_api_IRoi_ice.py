# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `IRoi.ice'

import Ice, IcePy, __builtin__

if not Ice.__dict__.has_key("_struct_marker"):
    Ice._struct_marker = object()
import omero_ServicesF_ice
import omero_Collections_ice

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

if not _M_omero.api.__dict__.has_key('RoiOptions'):
    _M_omero.api.RoiOptions = Ice.createTempClass()
    class RoiOptions(Ice.Object):
        def __init__(self, shapes=None, limit=None, offset=None, userId=None, groupId=None, namespace=None):
            self.shapes = shapes
            self.limit = limit
            self.offset = offset
            self.userId = userId
            self.groupId = groupId
            self.namespace = namespace

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::api::RoiOptions')

        def ice_id(self, current=None):
            return '::omero::api::RoiOptions'

        def ice_staticId():
            return '::omero::api::RoiOptions'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero.api._t_RoiOptions)

        __repr__ = __str__

    _M_omero.api.RoiOptionsPrx = Ice.createTempClass()
    class RoiOptionsPrx(Ice.ObjectPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.api.RoiOptionsPrx.ice_checkedCast(proxy, '::omero::api::RoiOptions', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.api.RoiOptionsPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.api._t_RoiOptionsPrx = IcePy.defineProxy('::omero::api::RoiOptions', RoiOptionsPrx)

    _M_omero.api._t_RoiOptions = IcePy.declareClass('::omero::api::RoiOptions')

    _M_omero.api._t_RoiOptions = IcePy.defineClass('::omero::api::RoiOptions', RoiOptions, (), False, None, (), (
        ('shapes', (), _M_omero.api._t_StringSet),
        ('limit', (), _M_omero._t_RInt),
        ('offset', (), _M_omero._t_RInt),
        ('userId', (), _M_omero._t_RLong),
        ('groupId', (), _M_omero._t_RLong),
        ('namespace', (), _M_omero._t_RString)
    ))
    RoiOptions.ice_type = _M_omero.api._t_RoiOptions

    _M_omero.api.RoiOptions = RoiOptions
    del RoiOptions

    _M_omero.api.RoiOptionsPrx = RoiOptionsPrx
    del RoiOptionsPrx

if not _M_omero.api.__dict__.has_key('RoiResult'):
    _M_omero.api.RoiResult = Ice.createTempClass()
    class RoiResult(Ice.Object):
        def __init__(self, opts=None, rois=None, byZ=None, byT=None, byG=None, groups=None):
            self.opts = opts
            self.rois = rois
            self.byZ = byZ
            self.byT = byT
            self.byG = byG
            self.groups = groups

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::api::RoiResult')

        def ice_id(self, current=None):
            return '::omero::api::RoiResult'

        def ice_staticId():
            return '::omero::api::RoiResult'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero.api._t_RoiResult)

        __repr__ = __str__

    _M_omero.api.RoiResultPrx = Ice.createTempClass()
    class RoiResultPrx(Ice.ObjectPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.api.RoiResultPrx.ice_checkedCast(proxy, '::omero::api::RoiResult', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.api.RoiResultPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.api._t_RoiResultPrx = IcePy.defineProxy('::omero::api::RoiResult', RoiResultPrx)

    _M_omero.api._t_RoiResult = IcePy.declareClass('::omero::api::RoiResult')

    _M_omero.api._t_RoiResult = IcePy.defineClass('::omero::api::RoiResult', RoiResult, (), False, None, (), (
        ('opts', (), _M_omero.api._t_RoiOptions),
        ('rois', (), _M_omero.api._t_RoiList),
        ('byZ', (), _M_omero.api._t_IntShapeListMap),
        ('byT', (), _M_omero.api._t_IntShapeListMap),
        ('byG', (), _M_omero.api._t_StringShapeListMap),
        ('groups', (), _M_omero.api._t_StringStringMap)
    ))
    RoiResult.ice_type = _M_omero.api._t_RoiResult

    _M_omero.api.RoiResult = RoiResult
    del RoiResult

    _M_omero.api.RoiResultPrx = RoiResultPrx
    del RoiResultPrx

if not _M_omero.api.__dict__.has_key('ShapePoints'):
    _M_omero.api.ShapePoints = Ice.createTempClass()
    class ShapePoints(Ice.Object):
        def __init__(self, x=None, y=None):
            self.x = x
            self.y = y

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::api::ShapePoints')

        def ice_id(self, current=None):
            return '::omero::api::ShapePoints'

        def ice_staticId():
            return '::omero::api::ShapePoints'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero.api._t_ShapePoints)

        __repr__ = __str__

    _M_omero.api.ShapePointsPrx = Ice.createTempClass()
    class ShapePointsPrx(Ice.ObjectPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.api.ShapePointsPrx.ice_checkedCast(proxy, '::omero::api::ShapePoints', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.api.ShapePointsPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.api._t_ShapePointsPrx = IcePy.defineProxy('::omero::api::ShapePoints', ShapePointsPrx)

    _M_omero.api._t_ShapePoints = IcePy.defineClass('::omero::api::ShapePoints', ShapePoints, (), False, None, (), (
        ('x', (), _M_omero.api._t_IntegerArray),
        ('y', (), _M_omero.api._t_IntegerArray)
    ))
    ShapePoints.ice_type = _M_omero.api._t_ShapePoints

    _M_omero.api.ShapePoints = ShapePoints
    del ShapePoints

    _M_omero.api.ShapePointsPrx = ShapePointsPrx
    del ShapePointsPrx

if not _M_omero.api.__dict__.has_key('ShapeStats'):
    _M_omero.api.ShapeStats = Ice.createTempClass()
    class ShapeStats(Ice.Object):
        def __init__(self, shapeId=0, channelIds=None, pointsCount=None, min=None, max=None, sum=None, mean=None, stdDev=None):
            self.shapeId = shapeId
            self.channelIds = channelIds
            self.pointsCount = pointsCount
            self.min = min
            self.max = max
            self.sum = sum
            self.mean = mean
            self.stdDev = stdDev

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::api::ShapeStats')

        def ice_id(self, current=None):
            return '::omero::api::ShapeStats'

        def ice_staticId():
            return '::omero::api::ShapeStats'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero.api._t_ShapeStats)

        __repr__ = __str__

    _M_omero.api.ShapeStatsPrx = Ice.createTempClass()
    class ShapeStatsPrx(Ice.ObjectPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.api.ShapeStatsPrx.ice_checkedCast(proxy, '::omero::api::ShapeStats', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.api.ShapeStatsPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.api._t_ShapeStatsPrx = IcePy.defineProxy('::omero::api::ShapeStats', ShapeStatsPrx)

    _M_omero.api._t_ShapeStats = IcePy.defineClass('::omero::api::ShapeStats', ShapeStats, (), False, None, (), (
        ('shapeId', (), IcePy._t_long),
        ('channelIds', (), _M_omero.api._t_LongArray),
        ('pointsCount', (), _M_omero.api._t_LongArray),
        ('min', (), _M_omero.api._t_DoubleArray),
        ('max', (), _M_omero.api._t_DoubleArray),
        ('sum', (), _M_omero.api._t_DoubleArray),
        ('mean', (), _M_omero.api._t_DoubleArray),
        ('stdDev', (), _M_omero.api._t_DoubleArray)
    ))
    ShapeStats.ice_type = _M_omero.api._t_ShapeStats

    _M_omero.api.ShapeStats = ShapeStats
    del ShapeStats

    _M_omero.api.ShapeStatsPrx = ShapeStatsPrx
    del ShapeStatsPrx

if not _M_omero.api.__dict__.has_key('_t_ShapeStatsList'):
    _M_omero.api._t_ShapeStatsList = IcePy.defineSequence('::omero::api::ShapeStatsList', (), _M_omero.api._t_ShapeStats)

if not _M_omero.api.__dict__.has_key('_t_LongRoiResultMap'):
    _M_omero.api._t_LongRoiResultMap = IcePy.defineDictionary('::omero::api::LongRoiResultMap', (), IcePy._t_long, _M_omero.api._t_RoiResult)

if not _M_omero.api.__dict__.has_key('RoiStats'):
    _M_omero.api.RoiStats = Ice.createTempClass()
    class RoiStats(Ice.Object):
        def __init__(self, roiId=0, imageId=0, pixelsId=0, combined=None, perShape=None):
            self.roiId = roiId
            self.imageId = imageId
            self.pixelsId = pixelsId
            self.combined = combined
            self.perShape = perShape

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::api::RoiStats')

        def ice_id(self, current=None):
            return '::omero::api::RoiStats'

        def ice_staticId():
            return '::omero::api::RoiStats'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero.api._t_RoiStats)

        __repr__ = __str__

    _M_omero.api.RoiStatsPrx = Ice.createTempClass()
    class RoiStatsPrx(Ice.ObjectPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.api.RoiStatsPrx.ice_checkedCast(proxy, '::omero::api::RoiStats', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.api.RoiStatsPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.api._t_RoiStatsPrx = IcePy.defineProxy('::omero::api::RoiStats', RoiStatsPrx)

    _M_omero.api._t_RoiStats = IcePy.declareClass('::omero::api::RoiStats')

    _M_omero.api._t_RoiStats = IcePy.defineClass('::omero::api::RoiStats', RoiStats, (), False, None, (), (
        ('roiId', (), IcePy._t_long),
        ('imageId', (), IcePy._t_long),
        ('pixelsId', (), IcePy._t_long),
        ('combined', (), _M_omero.api._t_ShapeStats),
        ('perShape', (), _M_omero.api._t_ShapeStatsList)
    ))
    RoiStats.ice_type = _M_omero.api._t_RoiStats

    _M_omero.api.RoiStats = RoiStats
    del RoiStats

    _M_omero.api.RoiStatsPrx = RoiStatsPrx
    del RoiStatsPrx

if not _M_omero.api.__dict__.has_key('IRoi'):
    _M_omero.api.IRoi = Ice.createTempClass()
    class IRoi(_M_omero.api.ServiceInterface):
        def __init__(self):
            if __builtin__.type(self) == _M_omero.api.IRoi:
                raise RuntimeError('omero.api.IRoi is an abstract class')

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::api::IRoi', '::omero::api::ServiceInterface')

        def ice_id(self, current=None):
            return '::omero::api::IRoi'

        def ice_staticId():
            return '::omero::api::IRoi'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def findByRoi_async(self, _cb, roiId, opts, current=None):
        # def findByImage_async(self, _cb, imageId, opts, current=None):
        # def findByPlane_async(self, _cb, imageId, z, t, opts, current=None):
        # def getPoints_async(self, _cb, shapeId, current=None):
        # def getRoiStats_async(self, _cb, roiId, current=None):
        # def getShapeStats_async(self, _cb, shapeId, current=None):
        # def getShapeStatsList_async(self, _cb, shapeIdList, current=None):
        # def getRoiMeasurements_async(self, _cb, imageId, opts, current=None):
        # def getMeasuredRois_async(self, _cb, imageId, annotationId, opts, current=None):
        # def getMeasuredRoisMap_async(self, _cb, imageId, annotationIds, opts, current=None):
        # def getTable_async(self, _cb, annotationId, current=None):
        # def uploadMask_async(self, _cb, roiId, z, t, bytes, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.api._t_IRoi)

        __repr__ = __str__

    _M_omero.api.IRoiPrx = Ice.createTempClass()
    class IRoiPrx(_M_omero.api.ServiceInterfacePrx):

        def findByRoi(self, roiId, opts, _ctx=None):
            return _M_omero.api.IRoi._op_findByRoi.invoke(self, ((roiId, opts), _ctx))

        def findByRoi_async(self, _cb, roiId, opts, _ctx=None):
            return _M_omero.api.IRoi._op_findByRoi.invokeAsync(self, (_cb, (roiId, opts), _ctx))

        def findByImage(self, imageId, opts, _ctx=None):
            return _M_omero.api.IRoi._op_findByImage.invoke(self, ((imageId, opts), _ctx))

        def findByImage_async(self, _cb, imageId, opts, _ctx=None):
            return _M_omero.api.IRoi._op_findByImage.invokeAsync(self, (_cb, (imageId, opts), _ctx))

        def findByPlane(self, imageId, z, t, opts, _ctx=None):
            return _M_omero.api.IRoi._op_findByPlane.invoke(self, ((imageId, z, t, opts), _ctx))

        def findByPlane_async(self, _cb, imageId, z, t, opts, _ctx=None):
            return _M_omero.api.IRoi._op_findByPlane.invokeAsync(self, (_cb, (imageId, z, t, opts), _ctx))

        def getPoints(self, shapeId, _ctx=None):
            return _M_omero.api.IRoi._op_getPoints.invoke(self, ((shapeId, ), _ctx))

        def getPoints_async(self, _cb, shapeId, _ctx=None):
            return _M_omero.api.IRoi._op_getPoints.invokeAsync(self, (_cb, (shapeId, ), _ctx))

        def getRoiStats(self, roiId, _ctx=None):
            return _M_omero.api.IRoi._op_getRoiStats.invoke(self, ((roiId, ), _ctx))

        def getRoiStats_async(self, _cb, roiId, _ctx=None):
            return _M_omero.api.IRoi._op_getRoiStats.invokeAsync(self, (_cb, (roiId, ), _ctx))

        def getShapeStats(self, shapeId, _ctx=None):
            return _M_omero.api.IRoi._op_getShapeStats.invoke(self, ((shapeId, ), _ctx))

        def getShapeStats_async(self, _cb, shapeId, _ctx=None):
            return _M_omero.api.IRoi._op_getShapeStats.invokeAsync(self, (_cb, (shapeId, ), _ctx))

        def getShapeStatsList(self, shapeIdList, _ctx=None):
            return _M_omero.api.IRoi._op_getShapeStatsList.invoke(self, ((shapeIdList, ), _ctx))

        def getShapeStatsList_async(self, _cb, shapeIdList, _ctx=None):
            return _M_omero.api.IRoi._op_getShapeStatsList.invokeAsync(self, (_cb, (shapeIdList, ), _ctx))

        def getRoiMeasurements(self, imageId, opts, _ctx=None):
            return _M_omero.api.IRoi._op_getRoiMeasurements.invoke(self, ((imageId, opts), _ctx))

        def getRoiMeasurements_async(self, _cb, imageId, opts, _ctx=None):
            return _M_omero.api.IRoi._op_getRoiMeasurements.invokeAsync(self, (_cb, (imageId, opts), _ctx))

        def getMeasuredRois(self, imageId, annotationId, opts, _ctx=None):
            return _M_omero.api.IRoi._op_getMeasuredRois.invoke(self, ((imageId, annotationId, opts), _ctx))

        def getMeasuredRois_async(self, _cb, imageId, annotationId, opts, _ctx=None):
            return _M_omero.api.IRoi._op_getMeasuredRois.invokeAsync(self, (_cb, (imageId, annotationId, opts), _ctx))

        def getMeasuredRoisMap(self, imageId, annotationIds, opts, _ctx=None):
            return _M_omero.api.IRoi._op_getMeasuredRoisMap.invoke(self, ((imageId, annotationIds, opts), _ctx))

        def getMeasuredRoisMap_async(self, _cb, imageId, annotationIds, opts, _ctx=None):
            return _M_omero.api.IRoi._op_getMeasuredRoisMap.invokeAsync(self, (_cb, (imageId, annotationIds, opts), _ctx))

        def getTable(self, annotationId, _ctx=None):
            return _M_omero.api.IRoi._op_getTable.invoke(self, ((annotationId, ), _ctx))

        def getTable_async(self, _cb, annotationId, _ctx=None):
            return _M_omero.api.IRoi._op_getTable.invokeAsync(self, (_cb, (annotationId, ), _ctx))

        def uploadMask(self, roiId, z, t, bytes, _ctx=None):
            return _M_omero.api.IRoi._op_uploadMask.invoke(self, ((roiId, z, t, bytes), _ctx))

        def uploadMask_async(self, _cb, roiId, z, t, bytes, _ctx=None):
            return _M_omero.api.IRoi._op_uploadMask.invokeAsync(self, (_cb, (roiId, z, t, bytes), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.api.IRoiPrx.ice_checkedCast(proxy, '::omero::api::IRoi', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.api.IRoiPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.api._t_IRoiPrx = IcePy.defineProxy('::omero::api::IRoi', IRoiPrx)

    _M_omero.api._t_IRoi = IcePy.defineClass('::omero::api::IRoi', IRoi, (), True, None, (_M_omero.api._t_ServiceInterface,), ())
    IRoi.ice_type = _M_omero.api._t_IRoi

    IRoi._op_findByRoi = IcePy.Operation('findByRoi', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long), ((), _M_omero.api._t_RoiOptions)), (), _M_omero.api._t_RoiResult, (_M_omero._t_ServerError,))
    IRoi._op_findByImage = IcePy.Operation('findByImage', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long), ((), _M_omero.api._t_RoiOptions)), (), _M_omero.api._t_RoiResult, (_M_omero._t_ServerError,))
    IRoi._op_findByPlane = IcePy.Operation('findByPlane', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long), ((), IcePy._t_int), ((), IcePy._t_int), ((), _M_omero.api._t_RoiOptions)), (), _M_omero.api._t_RoiResult, (_M_omero._t_ServerError,))
    IRoi._op_getPoints = IcePy.Operation('getPoints', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long),), (), _M_omero.api._t_ShapePoints, (_M_omero._t_ServerError,))
    IRoi._op_getRoiStats = IcePy.Operation('getRoiStats', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long),), (), _M_omero.api._t_RoiStats, (_M_omero._t_ServerError,))
    IRoi._op_getShapeStats = IcePy.Operation('getShapeStats', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long),), (), _M_omero.api._t_ShapeStats, (_M_omero._t_ServerError,))
    IRoi._op_getShapeStatsList = IcePy.Operation('getShapeStatsList', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.api._t_LongList),), (), _M_omero.api._t_ShapeStatsList, (_M_omero._t_ServerError,))
    IRoi._op_getRoiMeasurements = IcePy.Operation('getRoiMeasurements', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long), ((), _M_omero.api._t_RoiOptions)), (), _M_omero.api._t_AnnotationList, (_M_omero._t_ServerError,))
    IRoi._op_getMeasuredRois = IcePy.Operation('getMeasuredRois', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long), ((), IcePy._t_long), ((), _M_omero.api._t_RoiOptions)), (), _M_omero.api._t_RoiResult, (_M_omero._t_ServerError,))
    IRoi._op_getMeasuredRoisMap = IcePy.Operation('getMeasuredRoisMap', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long), ((), _M_omero.api._t_LongList), ((), _M_omero.api._t_RoiOptions)), (), _M_omero.api._t_LongRoiResultMap, (_M_omero._t_ServerError,))
    IRoi._op_getTable = IcePy.Operation('getTable', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long),), (), _M_omero.grid._t_TablePrx, (_M_omero._t_ServerError,))
    IRoi._op_uploadMask = IcePy.Operation('uploadMask', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long), ((), IcePy._t_int), ((), IcePy._t_int), ((), _M_Ice._t_ByteSeq)), (), None, (_M_omero._t_ServerError,))

    _M_omero.api.IRoi = IRoi
    del IRoi

    _M_omero.api.IRoiPrx = IRoiPrx
    del IRoiPrx

# End of module omero.api

__name__ = 'omero'

# End of module omero
