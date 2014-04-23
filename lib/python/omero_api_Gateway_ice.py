# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `Gateway.ice'

import Ice, IcePy, __builtin__

if not Ice.__dict__.has_key("_struct_marker"):
    Ice._struct_marker = object()
import omero_Collections_ice
import omero_ServicesF_ice
import omero_ServerErrors_ice

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

if not _M_omero.api.__dict__.has_key('BufferedImage'):
    _M_omero.api.BufferedImage = Ice.createTempClass()
    class BufferedImage(Ice.Object):
        def __init__(self, packedInts=None):
            self.packedInts = packedInts

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::api::BufferedImage')

        def ice_id(self, current=None):
            return '::omero::api::BufferedImage'

        def ice_staticId():
            return '::omero::api::BufferedImage'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero.api._t_BufferedImage)

        __repr__ = __str__

    _M_omero.api.BufferedImagePrx = Ice.createTempClass()
    class BufferedImagePrx(Ice.ObjectPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.api.BufferedImagePrx.ice_checkedCast(proxy, '::omero::api::BufferedImage', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.api.BufferedImagePrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.api._t_BufferedImagePrx = IcePy.defineProxy('::omero::api::BufferedImage', BufferedImagePrx)

    _M_omero.api._t_BufferedImage = IcePy.defineClass('::omero::api::BufferedImage', BufferedImage, (), False, None, (), (('packedInts', (), _M_omero.api._t_IntegerArray),))
    BufferedImage.ice_type = _M_omero.api._t_BufferedImage

    _M_omero.api.BufferedImage = BufferedImage
    del BufferedImage

    _M_omero.api.BufferedImagePrx = BufferedImagePrx
    del BufferedImagePrx

if not _M_omero.api.__dict__.has_key('ContainerClass'):
    _M_omero.api.ContainerClass = Ice.createTempClass()
    class ContainerClass(object):

        def __init__(self, val):
            assert(val >= 0 and val < 5)
            self.value = val

        def __str__(self):
            if self.value == 0:
                return 'Category'
            elif self.value == 1:
                return 'CategoryGroup'
            elif self.value == 2:
                return 'Project'
            elif self.value == 3:
                return 'Dataset'
            elif self.value == 4:
                return 'Image'
            return None

        __repr__ = __str__

        def __hash__(self):
            return self.value

        def __cmp__(self, other):
            return cmp(self.value, other.value)

    ContainerClass.Category = ContainerClass(0)
    ContainerClass.CategoryGroup = ContainerClass(1)
    ContainerClass.Project = ContainerClass(2)
    ContainerClass.Dataset = ContainerClass(3)
    ContainerClass.Image = ContainerClass(4)

    _M_omero.api._t_ContainerClass = IcePy.defineEnum('::omero::api::ContainerClass', ContainerClass, (), (ContainerClass.Category, ContainerClass.CategoryGroup, ContainerClass.Project, ContainerClass.Dataset, ContainerClass.Image))

    _M_omero.api.ContainerClass = ContainerClass
    del ContainerClass

if not _M_omero.api.__dict__.has_key('Gateway'):
    _M_omero.api.Gateway = Ice.createTempClass()
    class Gateway(_M_omero.api.StatefulServiceInterface):
        def __init__(self):
            if __builtin__.type(self) == _M_omero.api.Gateway:
                raise RuntimeError('omero.api.Gateway is an abstract class')

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::api::Gateway', '::omero::api::ServiceInterface', '::omero::api::StatefulServiceInterface')

        def ice_id(self, current=None):
            return '::omero::api::Gateway'

        def ice_staticId():
            return '::omero::api::Gateway'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getProjects(self, ids, withLeaves, current=None):
        # def getDatasets(self, ids, withLeaves, current=None):
        # def getDataset(self, datasetId, leaves, current=None):
        # def getPixelsFromImage(self, imageId, current=None):
        # def getImage(self, id, current=None):
        # def getImages(self, parentType, ids, current=None):
        # def findAllByQuery(self, myQuery, current=None):
        # def findByQuery(self, myQuery, current=None):
        # def getPlane(self, pixelsId, z, c, t, current=None):
        # def getPixels(self, pixelsId, current=None):
        # def copyPixelsXYTZ(self, pixelsID, x, y, t, z, channelList, methodology, current=None):
        # def copyPixels(self, pixelsID, channelList, methodology, current=None):
        # def copyImage(self, imageId, x, y, t, z, channelList, imageName, current=None):
        # def uploadPlane(self, pixelsId, z, c, t, data, current=None):
        # def updatePixels(self, pixels, current=None):
        # def getPixelTypes(self, current=None):
        # def getPixelType(self, type, current=None):
        # def getRenderedImage(self, pixelsId, z, t, current=None):
        # def renderAsPackedIntAsRGBA(self, pixelsId, z, t, current=None):
        # def getRenderedImageMatrix(self, pixelsId, z, t, current=None):
        # def setActive(self, pixelsId, w, active, current=None):
        # def getThumbnail(self, pixelsId, sizeX, sizeY, current=None):
        # def getThumbnailSet(self, sizeX, sizeY, pixelsIds, current=None):
        # def attachImageToDataset(self, dataset, image, current=None):
        # def createImage(self, sizeX, sizeY, sizeZ, sizeT, channelList, pixelsType, name, description, current=None):
        # def getImageFromDatasetByName(self, datasetId, imageName, current=None):
        # def getImageByName(self, imageName, current=None):
        # def saveObject(self, obj, current=None):
        # def saveAndReturnObject(self, obj, current=None):
        # def saveArray(self, graph, current=None):
        # def saveAndReturnArray(self, graph, current=None):
        # def deleteObject(self, row, current=None):
        # def keepAlive(self, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.api._t_Gateway)

        __repr__ = __str__

    _M_omero.api.GatewayPrx = Ice.createTempClass()
    class GatewayPrx(_M_omero.api.StatefulServiceInterfacePrx):

        def getProjects(self, ids, withLeaves, _ctx=None):
            return _M_omero.api.Gateway._op_getProjects.invoke(self, ((ids, withLeaves), _ctx))

        def getProjects_async(self, _cb, ids, withLeaves, _ctx=None):
            return _M_omero.api.Gateway._op_getProjects.invokeAsync(self, (_cb, (ids, withLeaves), _ctx))

        def getDatasets(self, ids, withLeaves, _ctx=None):
            return _M_omero.api.Gateway._op_getDatasets.invoke(self, ((ids, withLeaves), _ctx))

        def getDatasets_async(self, _cb, ids, withLeaves, _ctx=None):
            return _M_omero.api.Gateway._op_getDatasets.invokeAsync(self, (_cb, (ids, withLeaves), _ctx))

        def getDataset(self, datasetId, leaves, _ctx=None):
            return _M_omero.api.Gateway._op_getDataset.invoke(self, ((datasetId, leaves), _ctx))

        def getDataset_async(self, _cb, datasetId, leaves, _ctx=None):
            return _M_omero.api.Gateway._op_getDataset.invokeAsync(self, (_cb, (datasetId, leaves), _ctx))

        def getPixelsFromImage(self, imageId, _ctx=None):
            return _M_omero.api.Gateway._op_getPixelsFromImage.invoke(self, ((imageId, ), _ctx))

        def getPixelsFromImage_async(self, _cb, imageId, _ctx=None):
            return _M_omero.api.Gateway._op_getPixelsFromImage.invokeAsync(self, (_cb, (imageId, ), _ctx))

        def getImage(self, id, _ctx=None):
            return _M_omero.api.Gateway._op_getImage.invoke(self, ((id, ), _ctx))

        def getImage_async(self, _cb, id, _ctx=None):
            return _M_omero.api.Gateway._op_getImage.invokeAsync(self, (_cb, (id, ), _ctx))

        def getImages(self, parentType, ids, _ctx=None):
            return _M_omero.api.Gateway._op_getImages.invoke(self, ((parentType, ids), _ctx))

        def getImages_async(self, _cb, parentType, ids, _ctx=None):
            return _M_omero.api.Gateway._op_getImages.invokeAsync(self, (_cb, (parentType, ids), _ctx))

        def findAllByQuery(self, myQuery, _ctx=None):
            return _M_omero.api.Gateway._op_findAllByQuery.invoke(self, ((myQuery, ), _ctx))

        def findAllByQuery_async(self, _cb, myQuery, _ctx=None):
            return _M_omero.api.Gateway._op_findAllByQuery.invokeAsync(self, (_cb, (myQuery, ), _ctx))

        def findByQuery(self, myQuery, _ctx=None):
            return _M_omero.api.Gateway._op_findByQuery.invoke(self, ((myQuery, ), _ctx))

        def findByQuery_async(self, _cb, myQuery, _ctx=None):
            return _M_omero.api.Gateway._op_findByQuery.invokeAsync(self, (_cb, (myQuery, ), _ctx))

        def getPlane(self, pixelsId, z, c, t, _ctx=None):
            return _M_omero.api.Gateway._op_getPlane.invoke(self, ((pixelsId, z, c, t), _ctx))

        def getPlane_async(self, _cb, pixelsId, z, c, t, _ctx=None):
            return _M_omero.api.Gateway._op_getPlane.invokeAsync(self, (_cb, (pixelsId, z, c, t), _ctx))

        def getPixels(self, pixelsId, _ctx=None):
            return _M_omero.api.Gateway._op_getPixels.invoke(self, ((pixelsId, ), _ctx))

        def getPixels_async(self, _cb, pixelsId, _ctx=None):
            return _M_omero.api.Gateway._op_getPixels.invokeAsync(self, (_cb, (pixelsId, ), _ctx))

        def copyPixelsXYTZ(self, pixelsID, x, y, t, z, channelList, methodology, _ctx=None):
            return _M_omero.api.Gateway._op_copyPixelsXYTZ.invoke(self, ((pixelsID, x, y, t, z, channelList, methodology), _ctx))

        def copyPixelsXYTZ_async(self, _cb, pixelsID, x, y, t, z, channelList, methodology, _ctx=None):
            return _M_omero.api.Gateway._op_copyPixelsXYTZ.invokeAsync(self, (_cb, (pixelsID, x, y, t, z, channelList, methodology), _ctx))

        def copyPixels(self, pixelsID, channelList, methodology, _ctx=None):
            return _M_omero.api.Gateway._op_copyPixels.invoke(self, ((pixelsID, channelList, methodology), _ctx))

        def copyPixels_async(self, _cb, pixelsID, channelList, methodology, _ctx=None):
            return _M_omero.api.Gateway._op_copyPixels.invokeAsync(self, (_cb, (pixelsID, channelList, methodology), _ctx))

        def copyImage(self, imageId, x, y, t, z, channelList, imageName, _ctx=None):
            return _M_omero.api.Gateway._op_copyImage.invoke(self, ((imageId, x, y, t, z, channelList, imageName), _ctx))

        def copyImage_async(self, _cb, imageId, x, y, t, z, channelList, imageName, _ctx=None):
            return _M_omero.api.Gateway._op_copyImage.invokeAsync(self, (_cb, (imageId, x, y, t, z, channelList, imageName), _ctx))

        def uploadPlane(self, pixelsId, z, c, t, data, _ctx=None):
            return _M_omero.api.Gateway._op_uploadPlane.invoke(self, ((pixelsId, z, c, t, data), _ctx))

        def uploadPlane_async(self, _cb, pixelsId, z, c, t, data, _ctx=None):
            return _M_omero.api.Gateway._op_uploadPlane.invokeAsync(self, (_cb, (pixelsId, z, c, t, data), _ctx))

        def updatePixels(self, pixels, _ctx=None):
            return _M_omero.api.Gateway._op_updatePixels.invoke(self, ((pixels, ), _ctx))

        def updatePixels_async(self, _cb, pixels, _ctx=None):
            return _M_omero.api.Gateway._op_updatePixels.invokeAsync(self, (_cb, (pixels, ), _ctx))

        def getPixelTypes(self, _ctx=None):
            return _M_omero.api.Gateway._op_getPixelTypes.invoke(self, ((), _ctx))

        def getPixelTypes_async(self, _cb, _ctx=None):
            return _M_omero.api.Gateway._op_getPixelTypes.invokeAsync(self, (_cb, (), _ctx))

        def getPixelType(self, type, _ctx=None):
            return _M_omero.api.Gateway._op_getPixelType.invoke(self, ((type, ), _ctx))

        def getPixelType_async(self, _cb, type, _ctx=None):
            return _M_omero.api.Gateway._op_getPixelType.invokeAsync(self, (_cb, (type, ), _ctx))

        def getRenderedImage(self, pixelsId, z, t, _ctx=None):
            return _M_omero.api.Gateway._op_getRenderedImage.invoke(self, ((pixelsId, z, t), _ctx))

        def getRenderedImage_async(self, _cb, pixelsId, z, t, _ctx=None):
            return _M_omero.api.Gateway._op_getRenderedImage.invokeAsync(self, (_cb, (pixelsId, z, t), _ctx))

        def renderAsPackedIntAsRGBA(self, pixelsId, z, t, _ctx=None):
            return _M_omero.api.Gateway._op_renderAsPackedIntAsRGBA.invoke(self, ((pixelsId, z, t), _ctx))

        def renderAsPackedIntAsRGBA_async(self, _cb, pixelsId, z, t, _ctx=None):
            return _M_omero.api.Gateway._op_renderAsPackedIntAsRGBA.invokeAsync(self, (_cb, (pixelsId, z, t), _ctx))

        def getRenderedImageMatrix(self, pixelsId, z, t, _ctx=None):
            return _M_omero.api.Gateway._op_getRenderedImageMatrix.invoke(self, ((pixelsId, z, t), _ctx))

        def getRenderedImageMatrix_async(self, _cb, pixelsId, z, t, _ctx=None):
            return _M_omero.api.Gateway._op_getRenderedImageMatrix.invokeAsync(self, (_cb, (pixelsId, z, t), _ctx))

        def setActive(self, pixelsId, w, active, _ctx=None):
            return _M_omero.api.Gateway._op_setActive.invoke(self, ((pixelsId, w, active), _ctx))

        def setActive_async(self, _cb, pixelsId, w, active, _ctx=None):
            return _M_omero.api.Gateway._op_setActive.invokeAsync(self, (_cb, (pixelsId, w, active), _ctx))

        def getThumbnail(self, pixelsId, sizeX, sizeY, _ctx=None):
            return _M_omero.api.Gateway._op_getThumbnail.invoke(self, ((pixelsId, sizeX, sizeY), _ctx))

        def getThumbnail_async(self, _cb, pixelsId, sizeX, sizeY, _ctx=None):
            return _M_omero.api.Gateway._op_getThumbnail.invokeAsync(self, (_cb, (pixelsId, sizeX, sizeY), _ctx))

        def getThumbnailSet(self, sizeX, sizeY, pixelsIds, _ctx=None):
            return _M_omero.api.Gateway._op_getThumbnailSet.invoke(self, ((sizeX, sizeY, pixelsIds), _ctx))

        def getThumbnailSet_async(self, _cb, sizeX, sizeY, pixelsIds, _ctx=None):
            return _M_omero.api.Gateway._op_getThumbnailSet.invokeAsync(self, (_cb, (sizeX, sizeY, pixelsIds), _ctx))

        def attachImageToDataset(self, dataset, image, _ctx=None):
            return _M_omero.api.Gateway._op_attachImageToDataset.invoke(self, ((dataset, image), _ctx))

        def attachImageToDataset_async(self, _cb, dataset, image, _ctx=None):
            return _M_omero.api.Gateway._op_attachImageToDataset.invokeAsync(self, (_cb, (dataset, image), _ctx))

        def createImage(self, sizeX, sizeY, sizeZ, sizeT, channelList, pixelsType, name, description, _ctx=None):
            return _M_omero.api.Gateway._op_createImage.invoke(self, ((sizeX, sizeY, sizeZ, sizeT, channelList, pixelsType, name, description), _ctx))

        def createImage_async(self, _cb, sizeX, sizeY, sizeZ, sizeT, channelList, pixelsType, name, description, _ctx=None):
            return _M_omero.api.Gateway._op_createImage.invokeAsync(self, (_cb, (sizeX, sizeY, sizeZ, sizeT, channelList, pixelsType, name, description), _ctx))

        def getImageFromDatasetByName(self, datasetId, imageName, _ctx=None):
            return _M_omero.api.Gateway._op_getImageFromDatasetByName.invoke(self, ((datasetId, imageName), _ctx))

        def getImageFromDatasetByName_async(self, _cb, datasetId, imageName, _ctx=None):
            return _M_omero.api.Gateway._op_getImageFromDatasetByName.invokeAsync(self, (_cb, (datasetId, imageName), _ctx))

        def getImageByName(self, imageName, _ctx=None):
            return _M_omero.api.Gateway._op_getImageByName.invoke(self, ((imageName, ), _ctx))

        def getImageByName_async(self, _cb, imageName, _ctx=None):
            return _M_omero.api.Gateway._op_getImageByName.invokeAsync(self, (_cb, (imageName, ), _ctx))

        def saveObject(self, obj, _ctx=None):
            return _M_omero.api.Gateway._op_saveObject.invoke(self, ((obj, ), _ctx))

        def saveObject_async(self, _cb, obj, _ctx=None):
            return _M_omero.api.Gateway._op_saveObject.invokeAsync(self, (_cb, (obj, ), _ctx))

        def saveAndReturnObject(self, obj, _ctx=None):
            return _M_omero.api.Gateway._op_saveAndReturnObject.invoke(self, ((obj, ), _ctx))

        def saveAndReturnObject_async(self, _cb, obj, _ctx=None):
            return _M_omero.api.Gateway._op_saveAndReturnObject.invokeAsync(self, (_cb, (obj, ), _ctx))

        def saveArray(self, graph, _ctx=None):
            return _M_omero.api.Gateway._op_saveArray.invoke(self, ((graph, ), _ctx))

        def saveArray_async(self, _cb, graph, _ctx=None):
            return _M_omero.api.Gateway._op_saveArray.invokeAsync(self, (_cb, (graph, ), _ctx))

        def saveAndReturnArray(self, graph, _ctx=None):
            return _M_omero.api.Gateway._op_saveAndReturnArray.invoke(self, ((graph, ), _ctx))

        def saveAndReturnArray_async(self, _cb, graph, _ctx=None):
            return _M_omero.api.Gateway._op_saveAndReturnArray.invokeAsync(self, (_cb, (graph, ), _ctx))

        def deleteObject(self, row, _ctx=None):
            return _M_omero.api.Gateway._op_deleteObject.invoke(self, ((row, ), _ctx))

        def deleteObject_async(self, _cb, row, _ctx=None):
            return _M_omero.api.Gateway._op_deleteObject.invokeAsync(self, (_cb, (row, ), _ctx))

        def keepAlive(self, _ctx=None):
            return _M_omero.api.Gateway._op_keepAlive.invoke(self, ((), _ctx))

        def keepAlive_async(self, _cb, _ctx=None):
            return _M_omero.api.Gateway._op_keepAlive.invokeAsync(self, (_cb, (), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.api.GatewayPrx.ice_checkedCast(proxy, '::omero::api::Gateway', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.api.GatewayPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.api._t_GatewayPrx = IcePy.defineProxy('::omero::api::Gateway', GatewayPrx)

    _M_omero.api._t_Gateway = IcePy.defineClass('::omero::api::Gateway', Gateway, (), True, None, (_M_omero.api._t_StatefulServiceInterface,), ())
    Gateway.ice_type = _M_omero.api._t_Gateway

    Gateway._op_getProjects = IcePy.Operation('getProjects', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, False, (), (((), _M_omero.api._t_LongList), ((), IcePy._t_bool)), (), _M_omero.api._t_ProjectList, (_M_omero._t_ServerError,))
    Gateway._op_getProjects.deprecate("The Gateway service is deprecated. use the native language gateways instead instead.")
    Gateway._op_getDatasets = IcePy.Operation('getDatasets', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, False, (), (((), _M_omero.api._t_LongList), ((), IcePy._t_bool)), (), _M_omero.api._t_DatasetList, (_M_omero._t_ServerError,))
    Gateway._op_getDatasets.deprecate("The Gateway service is deprecated. use the native language gateways instead instead.")
    Gateway._op_getDataset = IcePy.Operation('getDataset', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, False, (), (((), IcePy._t_long), ((), IcePy._t_bool)), (), _M_omero.model._t_Dataset, (_M_omero._t_ServerError,))
    Gateway._op_getDataset.deprecate("The Gateway service is deprecated. use the native language gateways instead instead.")
    Gateway._op_getPixelsFromImage = IcePy.Operation('getPixelsFromImage', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, False, (), (((), IcePy._t_long),), (), _M_omero.api._t_PixelsList, (_M_omero._t_ServerError,))
    Gateway._op_getPixelsFromImage.deprecate("The Gateway service is deprecated. use the native language gateways instead instead.")
    Gateway._op_getImage = IcePy.Operation('getImage', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, False, (), (((), IcePy._t_long),), (), _M_omero.model._t_Image, (_M_omero._t_ServerError,))
    Gateway._op_getImage.deprecate("The Gateway service is deprecated. use the native language gateways instead instead.")
    Gateway._op_getImages = IcePy.Operation('getImages', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, False, (), (((), _M_omero.api._t_ContainerClass), ((), _M_omero.api._t_LongList)), (), _M_omero.api._t_ImageList, (_M_omero._t_ServerError,))
    Gateway._op_getImages.deprecate("The Gateway service is deprecated. use the native language gateways instead instead.")
    Gateway._op_findAllByQuery = IcePy.Operation('findAllByQuery', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, False, (), (((), IcePy._t_string),), (), _M_omero.api._t_IObjectList, (_M_omero._t_ServerError,))
    Gateway._op_findAllByQuery.deprecate("The Gateway service is deprecated. use the native language gateways instead instead.")
    Gateway._op_findByQuery = IcePy.Operation('findByQuery', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, False, (), (((), IcePy._t_string),), (), _M_omero.model._t_IObject, (_M_omero._t_ServerError,))
    Gateway._op_findByQuery.deprecate("The Gateway service is deprecated. use the native language gateways instead instead.")
    Gateway._op_getPlane = IcePy.Operation('getPlane', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, False, (), (((), IcePy._t_long), ((), IcePy._t_int), ((), IcePy._t_int), ((), IcePy._t_int)), (), _M_Ice._t_ByteSeq, (_M_omero._t_ServerError,))
    Gateway._op_getPlane.deprecate("The Gateway service is deprecated. use the native language gateways instead instead.")
    Gateway._op_getPixels = IcePy.Operation('getPixels', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, False, (), (((), IcePy._t_long),), (), _M_omero.model._t_Pixels, (_M_omero._t_ServerError,))
    Gateway._op_getPixels.deprecate("The Gateway service is deprecated. use the native language gateways instead instead.")
    Gateway._op_copyPixelsXYTZ = IcePy.Operation('copyPixelsXYTZ', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_long), ((), IcePy._t_int), ((), IcePy._t_int), ((), IcePy._t_int), ((), IcePy._t_int), ((), _M_omero.api._t_IntegerList), ((), IcePy._t_string)), (), IcePy._t_long, (_M_omero._t_ServerError,))
    Gateway._op_copyPixelsXYTZ.deprecate("The Gateway service is deprecated. use the native language gateways instead instead.")
    Gateway._op_copyPixels = IcePy.Operation('copyPixels', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_long), ((), _M_omero.api._t_IntegerList), ((), IcePy._t_string)), (), IcePy._t_long, (_M_omero._t_ServerError,))
    Gateway._op_copyPixels.deprecate("The Gateway service is deprecated. use the native language gateways instead instead.")
    Gateway._op_copyImage = IcePy.Operation('copyImage', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_long), ((), IcePy._t_int), ((), IcePy._t_int), ((), IcePy._t_int), ((), IcePy._t_int), ((), _M_omero.api._t_IntegerList), ((), IcePy._t_string)), (), IcePy._t_long, (_M_omero._t_ServerError,))
    Gateway._op_copyImage.deprecate("The Gateway service is deprecated. use the native language gateways instead instead.")
    Gateway._op_uploadPlane = IcePy.Operation('uploadPlane', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, False, (), (((), IcePy._t_long), ((), IcePy._t_int), ((), IcePy._t_int), ((), IcePy._t_int), ((), _M_Ice._t_ByteSeq)), (), None, (_M_omero._t_ServerError,))
    Gateway._op_uploadPlane.deprecate("The Gateway service is deprecated. use the native language gateways instead instead.")
    Gateway._op_updatePixels = IcePy.Operation('updatePixels', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, False, (), (((), _M_omero.model._t_Pixels),), (), _M_omero.model._t_Pixels, (_M_omero._t_ServerError,))
    Gateway._op_updatePixels.deprecate("The Gateway service is deprecated. use the native language gateways instead instead.")
    Gateway._op_getPixelTypes = IcePy.Operation('getPixelTypes', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, False, (), (), (), _M_omero.api._t_PixelsTypeList, (_M_omero._t_ServerError,))
    Gateway._op_getPixelTypes.deprecate("The Gateway service is deprecated. use the native language gateways instead instead.")
    Gateway._op_getPixelType = IcePy.Operation('getPixelType', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, False, (), (((), IcePy._t_string),), (), _M_omero.model._t_PixelsType, (_M_omero._t_ServerError,))
    Gateway._op_getPixelType.deprecate("The Gateway service is deprecated. use the native language gateways instead instead.")
    Gateway._op_getRenderedImage = IcePy.Operation('getRenderedImage', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, False, (), (((), IcePy._t_long), ((), IcePy._t_int), ((), IcePy._t_int)), (), _M_omero.api._t_IntegerArray, (_M_omero._t_ServerError,))
    Gateway._op_getRenderedImage.deprecate("The Gateway service is deprecated. use the native language gateways instead instead.")
    Gateway._op_renderAsPackedIntAsRGBA = IcePy.Operation('renderAsPackedIntAsRGBA', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, False, (), (((), IcePy._t_long), ((), IcePy._t_int), ((), IcePy._t_int)), (), _M_omero.api._t_IntegerArray, (_M_omero._t_ServerError,))
    Gateway._op_renderAsPackedIntAsRGBA.deprecate("The Gateway service is deprecated. use the native language gateways instead instead.")
    Gateway._op_getRenderedImageMatrix = IcePy.Operation('getRenderedImageMatrix', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, False, (), (((), IcePy._t_long), ((), IcePy._t_int), ((), IcePy._t_int)), (), _M_omero.api._t_IntegerArrayArrayArray, (_M_omero._t_ServerError,))
    Gateway._op_getRenderedImageMatrix.deprecate("The Gateway service is deprecated. use the native language gateways instead instead.")
    Gateway._op_setActive = IcePy.Operation('setActive', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_long), ((), IcePy._t_int), ((), IcePy._t_bool)), (), None, (_M_omero._t_ServerError,))
    Gateway._op_setActive.deprecate("The Gateway service is deprecated. use the native language gateways instead instead.")
    Gateway._op_getThumbnail = IcePy.Operation('getThumbnail', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, False, (), (((), IcePy._t_long), ((), _M_omero._t_RInt), ((), _M_omero._t_RInt)), (), _M_omero.api._t_ByteArray, (_M_omero._t_ServerError,))
    Gateway._op_getThumbnail.deprecate("The Gateway service is deprecated. use the native language gateways instead instead.")
    Gateway._op_getThumbnailSet = IcePy.Operation('getThumbnailSet', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, False, (), (((), _M_omero._t_RInt), ((), _M_omero._t_RInt), ((), _M_omero.api._t_LongList)), (), _M_omero.api._t_LongByteArrayMap, (_M_omero._t_ServerError,))
    Gateway._op_getThumbnailSet.deprecate("The Gateway service is deprecated. use the native language gateways instead instead.")
    Gateway._op_attachImageToDataset = IcePy.Operation('attachImageToDataset', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Dataset), ((), _M_omero.model._t_Image)), (), None, (_M_omero._t_ServerError,))
    Gateway._op_attachImageToDataset.deprecate("The Gateway service is deprecated. use the native language gateways instead instead.")
    Gateway._op_createImage = IcePy.Operation('createImage', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_int), ((), IcePy._t_int), ((), IcePy._t_int), ((), IcePy._t_int), ((), _M_omero.api._t_IntegerList), ((), _M_omero.model._t_PixelsType), ((), IcePy._t_string), ((), IcePy._t_string)), (), IcePy._t_long, (_M_omero._t_ServerError,))
    Gateway._op_createImage.deprecate("The Gateway service is deprecated. use the native language gateways instead instead.")
    Gateway._op_getImageFromDatasetByName = IcePy.Operation('getImageFromDatasetByName', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, False, (), (((), IcePy._t_long), ((), IcePy._t_string)), (), _M_omero.api._t_ImageList, (_M_omero._t_ServerError,))
    Gateway._op_getImageFromDatasetByName.deprecate("The Gateway service is deprecated. use the native language gateways instead instead.")
    Gateway._op_getImageByName = IcePy.Operation('getImageByName', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, False, (), (((), IcePy._t_string),), (), _M_omero.api._t_ImageList, (_M_omero._t_ServerError,))
    Gateway._op_getImageByName.deprecate("The Gateway service is deprecated. use the native language gateways instead instead.")
    Gateway._op_saveObject = IcePy.Operation('saveObject', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_IObject),), (), None, (_M_omero._t_ServerError,))
    Gateway._op_saveObject.deprecate("The Gateway service is deprecated. use the native language gateways instead instead.")
    Gateway._op_saveAndReturnObject = IcePy.Operation('saveAndReturnObject', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_IObject),), (), _M_omero.model._t_IObject, (_M_omero._t_ServerError,))
    Gateway._op_saveAndReturnObject.deprecate("The Gateway service is deprecated. use the native language gateways instead instead.")
    Gateway._op_saveArray = IcePy.Operation('saveArray', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.api._t_IObjectList),), (), None, (_M_omero._t_ServerError,))
    Gateway._op_saveArray.deprecate("The Gateway service is deprecated. use the native language gateways instead instead.")
    Gateway._op_saveAndReturnArray = IcePy.Operation('saveAndReturnArray', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.api._t_IObjectList),), (), _M_omero.api._t_IObjectList, (_M_omero._t_ServerError,))
    Gateway._op_saveAndReturnArray.deprecate("The Gateway service is deprecated. use the native language gateways instead instead.")
    Gateway._op_deleteObject = IcePy.Operation('deleteObject', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_IObject),), (), None, (_M_omero._t_ServerError,))
    Gateway._op_deleteObject.deprecate("The Gateway service is deprecated. use the native language gateways instead instead.")
    Gateway._op_keepAlive = IcePy.Operation('keepAlive', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, False, (), (), (), None, (_M_omero._t_ServerError,))
    Gateway._op_keepAlive.deprecate("The Gateway service is deprecated. use the native language gateways instead instead.")

    _M_omero.api.Gateway = Gateway
    del Gateway

    _M_omero.api.GatewayPrx = GatewayPrx
    del GatewayPrx

# End of module omero.api

__name__ = 'omero'

# End of module omero
