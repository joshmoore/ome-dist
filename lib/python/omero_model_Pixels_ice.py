# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `Pixels.ice'

import Ice, IcePy, __builtin__

if not Ice.__dict__.has_key("_struct_marker"):
    Ice._struct_marker = object()
import omero_model_IObject_ice
import omero_RTypes_ice
import omero_System_ice
import omero_Collections_ice

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

# Start of module omero
__name__ = 'omero'

# Start of module omero.model
__name__ = 'omero.model'

if not _M_omero.model.__dict__.has_key('Image'):
    _M_omero.model._t_Image = IcePy.declareClass('::omero::model::Image')
    _M_omero.model._t_ImagePrx = IcePy.declareProxy('::omero::model::Image')

if not _M_omero.model.__dict__.has_key('Pixels'):
    _M_omero.model._t_Pixels = IcePy.declareClass('::omero::model::Pixels')
    _M_omero.model._t_PixelsPrx = IcePy.declareProxy('::omero::model::Pixels')

if not _M_omero.model.__dict__.has_key('PixelsType'):
    _M_omero.model._t_PixelsType = IcePy.declareClass('::omero::model::PixelsType')
    _M_omero.model._t_PixelsTypePrx = IcePy.declareProxy('::omero::model::PixelsType')

if not _M_omero.model.__dict__.has_key('DimensionOrder'):
    _M_omero.model._t_DimensionOrder = IcePy.declareClass('::omero::model::DimensionOrder')
    _M_omero.model._t_DimensionOrderPrx = IcePy.declareProxy('::omero::model::DimensionOrder')

if not _M_omero.model.__dict__.has_key('PlaneInfo'):
    _M_omero.model._t_PlaneInfo = IcePy.declareClass('::omero::model::PlaneInfo')
    _M_omero.model._t_PlaneInfoPrx = IcePy.declareProxy('::omero::model::PlaneInfo')

if not _M_omero.model.__dict__.has_key('PixelsOriginalFileMap'):
    _M_omero.model._t_PixelsOriginalFileMap = IcePy.declareClass('::omero::model::PixelsOriginalFileMap')
    _M_omero.model._t_PixelsOriginalFileMapPrx = IcePy.declareProxy('::omero::model::PixelsOriginalFileMap')

if not _M_omero.model.__dict__.has_key('OriginalFile'):
    _M_omero.model._t_OriginalFile = IcePy.declareClass('::omero::model::OriginalFile')
    _M_omero.model._t_OriginalFilePrx = IcePy.declareProxy('::omero::model::OriginalFile')

if not _M_omero.model.__dict__.has_key('Channel'):
    _M_omero.model._t_Channel = IcePy.declareClass('::omero::model::Channel')
    _M_omero.model._t_ChannelPrx = IcePy.declareProxy('::omero::model::Channel')

if not _M_omero.model.__dict__.has_key('RenderingDef'):
    _M_omero.model._t_RenderingDef = IcePy.declareClass('::omero::model::RenderingDef')
    _M_omero.model._t_RenderingDefPrx = IcePy.declareProxy('::omero::model::RenderingDef')

if not _M_omero.model.__dict__.has_key('Thumbnail'):
    _M_omero.model._t_Thumbnail = IcePy.declareClass('::omero::model::Thumbnail')
    _M_omero.model._t_ThumbnailPrx = IcePy.declareProxy('::omero::model::Thumbnail')

if not _M_omero.model.__dict__.has_key('PixelsAnnotationLink'):
    _M_omero.model._t_PixelsAnnotationLink = IcePy.declareClass('::omero::model::PixelsAnnotationLink')
    _M_omero.model._t_PixelsAnnotationLinkPrx = IcePy.declareProxy('::omero::model::PixelsAnnotationLink')

if not _M_omero.model.__dict__.has_key('Annotation'):
    _M_omero.model._t_Annotation = IcePy.declareClass('::omero::model::Annotation')
    _M_omero.model._t_AnnotationPrx = IcePy.declareProxy('::omero::model::Annotation')

if not _M_omero.model.__dict__.has_key('Details'):
    _M_omero.model._t_Details = IcePy.declareClass('::omero::model::Details')
    _M_omero.model._t_DetailsPrx = IcePy.declareProxy('::omero::model::Details')

if not _M_omero.model.__dict__.has_key('_t_PixelsPlaneInfoSeq'):
    _M_omero.model._t_PixelsPlaneInfoSeq = IcePy.defineSequence('::omero::model::PixelsPlaneInfoSeq', (), _M_omero.model._t_PlaneInfo)

if not _M_omero.model.__dict__.has_key('_t_PixelsPixelsFileMapsSeq'):
    _M_omero.model._t_PixelsPixelsFileMapsSeq = IcePy.defineSequence('::omero::model::PixelsPixelsFileMapsSeq', (), _M_omero.model._t_PixelsOriginalFileMap)

if not _M_omero.model.__dict__.has_key('_t_PixelsLinkedOriginalFileSeq'):
    _M_omero.model._t_PixelsLinkedOriginalFileSeq = IcePy.defineSequence('::omero::model::PixelsLinkedOriginalFileSeq', (), _M_omero.model._t_OriginalFile)

if not _M_omero.model.__dict__.has_key('_t_PixelsChannelsSeq'):
    _M_omero.model._t_PixelsChannelsSeq = IcePy.defineSequence('::omero::model::PixelsChannelsSeq', (), _M_omero.model._t_Channel)

if not _M_omero.model.__dict__.has_key('_t_PixelsSettingsSeq'):
    _M_omero.model._t_PixelsSettingsSeq = IcePy.defineSequence('::omero::model::PixelsSettingsSeq', (), _M_omero.model._t_RenderingDef)

if not _M_omero.model.__dict__.has_key('_t_PixelsThumbnailsSeq'):
    _M_omero.model._t_PixelsThumbnailsSeq = IcePy.defineSequence('::omero::model::PixelsThumbnailsSeq', (), _M_omero.model._t_Thumbnail)

if not _M_omero.model.__dict__.has_key('_t_PixelsAnnotationLinksSeq'):
    _M_omero.model._t_PixelsAnnotationLinksSeq = IcePy.defineSequence('::omero::model::PixelsAnnotationLinksSeq', (), _M_omero.model._t_PixelsAnnotationLink)

if not _M_omero.model.__dict__.has_key('_t_PixelsLinkedAnnotationSeq'):
    _M_omero.model._t_PixelsLinkedAnnotationSeq = IcePy.defineSequence('::omero::model::PixelsLinkedAnnotationSeq', (), _M_omero.model._t_Annotation)

if not _M_omero.model.__dict__.has_key('Pixels'):
    _M_omero.model.Pixels = Ice.createTempClass()
    class Pixels(_M_omero.model.IObject):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _image=None, _relatedTo=None, _pixelsType=None, _significantBits=None, _sizeX=None, _sizeY=None, _sizeZ=None, _sizeC=None, _sizeT=None, _sha1=None, _dimensionOrder=None, _physicalSizeX=None, _physicalSizeY=None, _physicalSizeZ=None, _waveStart=None, _waveIncrement=None, _timeIncrement=None, _methodology=None, _planeInfoSeq=None, _planeInfoLoaded=False, _pixelsFileMapsSeq=None, _pixelsFileMapsLoaded=False, _pixelsFileMapsCountPerOwner=None, _channelsSeq=None, _channelsLoaded=False, _settingsSeq=None, _settingsLoaded=False, _thumbnailsSeq=None, _thumbnailsLoaded=False, _annotationLinksSeq=None, _annotationLinksLoaded=False, _annotationLinksCountPerOwner=None):
            if __builtin__.type(self) == _M_omero.model.Pixels:
                raise RuntimeError('omero.model.Pixels is an abstract class')
            _M_omero.model.IObject.__init__(self, _id, _details, _loaded)
            self._version = _version
            self._image = _image
            self._relatedTo = _relatedTo
            self._pixelsType = _pixelsType
            self._significantBits = _significantBits
            self._sizeX = _sizeX
            self._sizeY = _sizeY
            self._sizeZ = _sizeZ
            self._sizeC = _sizeC
            self._sizeT = _sizeT
            self._sha1 = _sha1
            self._dimensionOrder = _dimensionOrder
            self._physicalSizeX = _physicalSizeX
            self._physicalSizeY = _physicalSizeY
            self._physicalSizeZ = _physicalSizeZ
            self._waveStart = _waveStart
            self._waveIncrement = _waveIncrement
            self._timeIncrement = _timeIncrement
            self._methodology = _methodology
            self._planeInfoSeq = _planeInfoSeq
            self._planeInfoLoaded = _planeInfoLoaded
            self._pixelsFileMapsSeq = _pixelsFileMapsSeq
            self._pixelsFileMapsLoaded = _pixelsFileMapsLoaded
            self._pixelsFileMapsCountPerOwner = _pixelsFileMapsCountPerOwner
            self._channelsSeq = _channelsSeq
            self._channelsLoaded = _channelsLoaded
            self._settingsSeq = _settingsSeq
            self._settingsLoaded = _settingsLoaded
            self._thumbnailsSeq = _thumbnailsSeq
            self._thumbnailsLoaded = _thumbnailsLoaded
            self._annotationLinksSeq = _annotationLinksSeq
            self._annotationLinksLoaded = _annotationLinksLoaded
            self._annotationLinksCountPerOwner = _annotationLinksCountPerOwner

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::IObject', '::omero::model::Pixels')

        def ice_id(self, current=None):
            return '::omero::model::Pixels'

        def ice_staticId():
            return '::omero::model::Pixels'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getVersion(self, current=None):
        # def setVersion(self, theVersion, current=None):
        # def getImage(self, current=None):
        # def setImage(self, theImage, current=None):
        # def getRelatedTo(self, current=None):
        # def setRelatedTo(self, theRelatedTo, current=None):
        # def getPixelsType(self, current=None):
        # def setPixelsType(self, thePixelsType, current=None):
        # def getSignificantBits(self, current=None):
        # def setSignificantBits(self, theSignificantBits, current=None):
        # def getSizeX(self, current=None):
        # def setSizeX(self, theSizeX, current=None):
        # def getSizeY(self, current=None):
        # def setSizeY(self, theSizeY, current=None):
        # def getSizeZ(self, current=None):
        # def setSizeZ(self, theSizeZ, current=None):
        # def getSizeC(self, current=None):
        # def setSizeC(self, theSizeC, current=None):
        # def getSizeT(self, current=None):
        # def setSizeT(self, theSizeT, current=None):
        # def getSha1(self, current=None):
        # def setSha1(self, theSha1, current=None):
        # def getDimensionOrder(self, current=None):
        # def setDimensionOrder(self, theDimensionOrder, current=None):
        # def getPhysicalSizeX(self, current=None):
        # def setPhysicalSizeX(self, thePhysicalSizeX, current=None):
        # def getPhysicalSizeY(self, current=None):
        # def setPhysicalSizeY(self, thePhysicalSizeY, current=None):
        # def getPhysicalSizeZ(self, current=None):
        # def setPhysicalSizeZ(self, thePhysicalSizeZ, current=None):
        # def getWaveStart(self, current=None):
        # def setWaveStart(self, theWaveStart, current=None):
        # def getWaveIncrement(self, current=None):
        # def setWaveIncrement(self, theWaveIncrement, current=None):
        # def getTimeIncrement(self, current=None):
        # def setTimeIncrement(self, theTimeIncrement, current=None):
        # def getMethodology(self, current=None):
        # def setMethodology(self, theMethodology, current=None):
        # def unloadPlaneInfo(self, current=None):
        # def sizeOfPlaneInfo(self, current=None):
        # def copyPlaneInfo(self, current=None):
        # def addPlaneInfo(self, target, current=None):
        # def addAllPlaneInfoSet(self, targets, current=None):
        # def removePlaneInfo(self, theTarget, current=None):
        # def removeAllPlaneInfoSet(self, targets, current=None):
        # def clearPlaneInfo(self, current=None):
        # def reloadPlaneInfo(self, toCopy, current=None):
        # def unloadPixelsFileMaps(self, current=None):
        # def sizeOfPixelsFileMaps(self, current=None):
        # def copyPixelsFileMaps(self, current=None):
        # def addPixelsOriginalFileMap(self, target, current=None):
        # def addAllPixelsOriginalFileMapSet(self, targets, current=None):
        # def removePixelsOriginalFileMap(self, theTarget, current=None):
        # def removeAllPixelsOriginalFileMapSet(self, targets, current=None):
        # def clearPixelsFileMaps(self, current=None):
        # def reloadPixelsFileMaps(self, toCopy, current=None):
        # def getPixelsFileMapsCountPerOwner(self, current=None):
        # def linkOriginalFile(self, addition, current=None):
        # def addPixelsOriginalFileMapToBoth(self, link, bothSides, current=None):
        # def findPixelsOriginalFileMap(self, removal, current=None):
        # def unlinkOriginalFile(self, removal, current=None):
        # def removePixelsOriginalFileMapFromBoth(self, link, bothSides, current=None):
        # def linkedOriginalFileList(self, current=None):
        # def unloadChannels(self, current=None):
        # def sizeOfChannels(self, current=None):
        # def copyChannels(self, current=None):
        # def addChannel(self, target, current=None):
        # def addAllChannelSet(self, targets, current=None):
        # def removeChannel(self, theTarget, current=None):
        # def removeAllChannelSet(self, targets, current=None):
        # def clearChannels(self, current=None):
        # def reloadChannels(self, toCopy, current=None):
        # def getChannel(self, index, current=None):
        # def setChannel(self, index, theElement, current=None):
        # def getPrimaryChannel(self, current=None):
        # def setPrimaryChannel(self, theElement, current=None):
        # def unloadSettings(self, current=None):
        # def sizeOfSettings(self, current=None):
        # def copySettings(self, current=None):
        # def addRenderingDef(self, target, current=None):
        # def addAllRenderingDefSet(self, targets, current=None):
        # def removeRenderingDef(self, theTarget, current=None):
        # def removeAllRenderingDefSet(self, targets, current=None):
        # def clearSettings(self, current=None):
        # def reloadSettings(self, toCopy, current=None):
        # def unloadThumbnails(self, current=None):
        # def sizeOfThumbnails(self, current=None):
        # def copyThumbnails(self, current=None):
        # def addThumbnail(self, target, current=None):
        # def addAllThumbnailSet(self, targets, current=None):
        # def removeThumbnail(self, theTarget, current=None):
        # def removeAllThumbnailSet(self, targets, current=None):
        # def clearThumbnails(self, current=None):
        # def reloadThumbnails(self, toCopy, current=None):
        # def unloadAnnotationLinks(self, current=None):
        # def sizeOfAnnotationLinks(self, current=None):
        # def copyAnnotationLinks(self, current=None):
        # def addPixelsAnnotationLink(self, target, current=None):
        # def addAllPixelsAnnotationLinkSet(self, targets, current=None):
        # def removePixelsAnnotationLink(self, theTarget, current=None):
        # def removeAllPixelsAnnotationLinkSet(self, targets, current=None):
        # def clearAnnotationLinks(self, current=None):
        # def reloadAnnotationLinks(self, toCopy, current=None):
        # def getAnnotationLinksCountPerOwner(self, current=None):
        # def linkAnnotation(self, addition, current=None):
        # def addPixelsAnnotationLinkToBoth(self, link, bothSides, current=None):
        # def findPixelsAnnotationLink(self, removal, current=None):
        # def unlinkAnnotation(self, removal, current=None):
        # def removePixelsAnnotationLinkFromBoth(self, link, bothSides, current=None):
        # def linkedAnnotationList(self, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_Pixels)

        __repr__ = __str__

    _M_omero.model.PixelsPrx = Ice.createTempClass()
    class PixelsPrx(_M_omero.model.IObjectPrx):

        def getVersion(self, _ctx=None):
            return _M_omero.model.Pixels._op_getVersion.invoke(self, ((), _ctx))

        def setVersion(self, theVersion, _ctx=None):
            return _M_omero.model.Pixels._op_setVersion.invoke(self, ((theVersion, ), _ctx))

        def getImage(self, _ctx=None):
            return _M_omero.model.Pixels._op_getImage.invoke(self, ((), _ctx))

        def setImage(self, theImage, _ctx=None):
            return _M_omero.model.Pixels._op_setImage.invoke(self, ((theImage, ), _ctx))

        def getRelatedTo(self, _ctx=None):
            return _M_omero.model.Pixels._op_getRelatedTo.invoke(self, ((), _ctx))

        def setRelatedTo(self, theRelatedTo, _ctx=None):
            return _M_omero.model.Pixels._op_setRelatedTo.invoke(self, ((theRelatedTo, ), _ctx))

        def getPixelsType(self, _ctx=None):
            return _M_omero.model.Pixels._op_getPixelsType.invoke(self, ((), _ctx))

        def setPixelsType(self, thePixelsType, _ctx=None):
            return _M_omero.model.Pixels._op_setPixelsType.invoke(self, ((thePixelsType, ), _ctx))

        def getSignificantBits(self, _ctx=None):
            return _M_omero.model.Pixels._op_getSignificantBits.invoke(self, ((), _ctx))

        def setSignificantBits(self, theSignificantBits, _ctx=None):
            return _M_omero.model.Pixels._op_setSignificantBits.invoke(self, ((theSignificantBits, ), _ctx))

        def getSizeX(self, _ctx=None):
            return _M_omero.model.Pixels._op_getSizeX.invoke(self, ((), _ctx))

        def setSizeX(self, theSizeX, _ctx=None):
            return _M_omero.model.Pixels._op_setSizeX.invoke(self, ((theSizeX, ), _ctx))

        def getSizeY(self, _ctx=None):
            return _M_omero.model.Pixels._op_getSizeY.invoke(self, ((), _ctx))

        def setSizeY(self, theSizeY, _ctx=None):
            return _M_omero.model.Pixels._op_setSizeY.invoke(self, ((theSizeY, ), _ctx))

        def getSizeZ(self, _ctx=None):
            return _M_omero.model.Pixels._op_getSizeZ.invoke(self, ((), _ctx))

        def setSizeZ(self, theSizeZ, _ctx=None):
            return _M_omero.model.Pixels._op_setSizeZ.invoke(self, ((theSizeZ, ), _ctx))

        def getSizeC(self, _ctx=None):
            return _M_omero.model.Pixels._op_getSizeC.invoke(self, ((), _ctx))

        def setSizeC(self, theSizeC, _ctx=None):
            return _M_omero.model.Pixels._op_setSizeC.invoke(self, ((theSizeC, ), _ctx))

        def getSizeT(self, _ctx=None):
            return _M_omero.model.Pixels._op_getSizeT.invoke(self, ((), _ctx))

        def setSizeT(self, theSizeT, _ctx=None):
            return _M_omero.model.Pixels._op_setSizeT.invoke(self, ((theSizeT, ), _ctx))

        def getSha1(self, _ctx=None):
            return _M_omero.model.Pixels._op_getSha1.invoke(self, ((), _ctx))

        def setSha1(self, theSha1, _ctx=None):
            return _M_omero.model.Pixels._op_setSha1.invoke(self, ((theSha1, ), _ctx))

        def getDimensionOrder(self, _ctx=None):
            return _M_omero.model.Pixels._op_getDimensionOrder.invoke(self, ((), _ctx))

        def setDimensionOrder(self, theDimensionOrder, _ctx=None):
            return _M_omero.model.Pixels._op_setDimensionOrder.invoke(self, ((theDimensionOrder, ), _ctx))

        def getPhysicalSizeX(self, _ctx=None):
            return _M_omero.model.Pixels._op_getPhysicalSizeX.invoke(self, ((), _ctx))

        def setPhysicalSizeX(self, thePhysicalSizeX, _ctx=None):
            return _M_omero.model.Pixels._op_setPhysicalSizeX.invoke(self, ((thePhysicalSizeX, ), _ctx))

        def getPhysicalSizeY(self, _ctx=None):
            return _M_omero.model.Pixels._op_getPhysicalSizeY.invoke(self, ((), _ctx))

        def setPhysicalSizeY(self, thePhysicalSizeY, _ctx=None):
            return _M_omero.model.Pixels._op_setPhysicalSizeY.invoke(self, ((thePhysicalSizeY, ), _ctx))

        def getPhysicalSizeZ(self, _ctx=None):
            return _M_omero.model.Pixels._op_getPhysicalSizeZ.invoke(self, ((), _ctx))

        def setPhysicalSizeZ(self, thePhysicalSizeZ, _ctx=None):
            return _M_omero.model.Pixels._op_setPhysicalSizeZ.invoke(self, ((thePhysicalSizeZ, ), _ctx))

        def getWaveStart(self, _ctx=None):
            return _M_omero.model.Pixels._op_getWaveStart.invoke(self, ((), _ctx))

        def setWaveStart(self, theWaveStart, _ctx=None):
            return _M_omero.model.Pixels._op_setWaveStart.invoke(self, ((theWaveStart, ), _ctx))

        def getWaveIncrement(self, _ctx=None):
            return _M_omero.model.Pixels._op_getWaveIncrement.invoke(self, ((), _ctx))

        def setWaveIncrement(self, theWaveIncrement, _ctx=None):
            return _M_omero.model.Pixels._op_setWaveIncrement.invoke(self, ((theWaveIncrement, ), _ctx))

        def getTimeIncrement(self, _ctx=None):
            return _M_omero.model.Pixels._op_getTimeIncrement.invoke(self, ((), _ctx))

        def setTimeIncrement(self, theTimeIncrement, _ctx=None):
            return _M_omero.model.Pixels._op_setTimeIncrement.invoke(self, ((theTimeIncrement, ), _ctx))

        def getMethodology(self, _ctx=None):
            return _M_omero.model.Pixels._op_getMethodology.invoke(self, ((), _ctx))

        def setMethodology(self, theMethodology, _ctx=None):
            return _M_omero.model.Pixels._op_setMethodology.invoke(self, ((theMethodology, ), _ctx))

        def unloadPlaneInfo(self, _ctx=None):
            return _M_omero.model.Pixels._op_unloadPlaneInfo.invoke(self, ((), _ctx))

        def sizeOfPlaneInfo(self, _ctx=None):
            return _M_omero.model.Pixels._op_sizeOfPlaneInfo.invoke(self, ((), _ctx))

        def copyPlaneInfo(self, _ctx=None):
            return _M_omero.model.Pixels._op_copyPlaneInfo.invoke(self, ((), _ctx))

        def addPlaneInfo(self, target, _ctx=None):
            return _M_omero.model.Pixels._op_addPlaneInfo.invoke(self, ((target, ), _ctx))

        def addAllPlaneInfoSet(self, targets, _ctx=None):
            return _M_omero.model.Pixels._op_addAllPlaneInfoSet.invoke(self, ((targets, ), _ctx))

        def removePlaneInfo(self, theTarget, _ctx=None):
            return _M_omero.model.Pixels._op_removePlaneInfo.invoke(self, ((theTarget, ), _ctx))

        def removeAllPlaneInfoSet(self, targets, _ctx=None):
            return _M_omero.model.Pixels._op_removeAllPlaneInfoSet.invoke(self, ((targets, ), _ctx))

        def clearPlaneInfo(self, _ctx=None):
            return _M_omero.model.Pixels._op_clearPlaneInfo.invoke(self, ((), _ctx))

        def reloadPlaneInfo(self, toCopy, _ctx=None):
            return _M_omero.model.Pixels._op_reloadPlaneInfo.invoke(self, ((toCopy, ), _ctx))

        def unloadPixelsFileMaps(self, _ctx=None):
            return _M_omero.model.Pixels._op_unloadPixelsFileMaps.invoke(self, ((), _ctx))

        def sizeOfPixelsFileMaps(self, _ctx=None):
            return _M_omero.model.Pixels._op_sizeOfPixelsFileMaps.invoke(self, ((), _ctx))

        def copyPixelsFileMaps(self, _ctx=None):
            return _M_omero.model.Pixels._op_copyPixelsFileMaps.invoke(self, ((), _ctx))

        def addPixelsOriginalFileMap(self, target, _ctx=None):
            return _M_omero.model.Pixels._op_addPixelsOriginalFileMap.invoke(self, ((target, ), _ctx))

        def addAllPixelsOriginalFileMapSet(self, targets, _ctx=None):
            return _M_omero.model.Pixels._op_addAllPixelsOriginalFileMapSet.invoke(self, ((targets, ), _ctx))

        def removePixelsOriginalFileMap(self, theTarget, _ctx=None):
            return _M_omero.model.Pixels._op_removePixelsOriginalFileMap.invoke(self, ((theTarget, ), _ctx))

        def removeAllPixelsOriginalFileMapSet(self, targets, _ctx=None):
            return _M_omero.model.Pixels._op_removeAllPixelsOriginalFileMapSet.invoke(self, ((targets, ), _ctx))

        def clearPixelsFileMaps(self, _ctx=None):
            return _M_omero.model.Pixels._op_clearPixelsFileMaps.invoke(self, ((), _ctx))

        def reloadPixelsFileMaps(self, toCopy, _ctx=None):
            return _M_omero.model.Pixels._op_reloadPixelsFileMaps.invoke(self, ((toCopy, ), _ctx))

        def getPixelsFileMapsCountPerOwner(self, _ctx=None):
            return _M_omero.model.Pixels._op_getPixelsFileMapsCountPerOwner.invoke(self, ((), _ctx))

        def linkOriginalFile(self, addition, _ctx=None):
            return _M_omero.model.Pixels._op_linkOriginalFile.invoke(self, ((addition, ), _ctx))

        def addPixelsOriginalFileMapToBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.Pixels._op_addPixelsOriginalFileMapToBoth.invoke(self, ((link, bothSides), _ctx))

        def findPixelsOriginalFileMap(self, removal, _ctx=None):
            return _M_omero.model.Pixels._op_findPixelsOriginalFileMap.invoke(self, ((removal, ), _ctx))

        def unlinkOriginalFile(self, removal, _ctx=None):
            return _M_omero.model.Pixels._op_unlinkOriginalFile.invoke(self, ((removal, ), _ctx))

        def removePixelsOriginalFileMapFromBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.Pixels._op_removePixelsOriginalFileMapFromBoth.invoke(self, ((link, bothSides), _ctx))

        def linkedOriginalFileList(self, _ctx=None):
            return _M_omero.model.Pixels._op_linkedOriginalFileList.invoke(self, ((), _ctx))

        def unloadChannels(self, _ctx=None):
            return _M_omero.model.Pixels._op_unloadChannels.invoke(self, ((), _ctx))

        def sizeOfChannels(self, _ctx=None):
            return _M_omero.model.Pixels._op_sizeOfChannels.invoke(self, ((), _ctx))

        def copyChannels(self, _ctx=None):
            return _M_omero.model.Pixels._op_copyChannels.invoke(self, ((), _ctx))

        def addChannel(self, target, _ctx=None):
            return _M_omero.model.Pixels._op_addChannel.invoke(self, ((target, ), _ctx))

        def addAllChannelSet(self, targets, _ctx=None):
            return _M_omero.model.Pixels._op_addAllChannelSet.invoke(self, ((targets, ), _ctx))

        def removeChannel(self, theTarget, _ctx=None):
            return _M_omero.model.Pixels._op_removeChannel.invoke(self, ((theTarget, ), _ctx))

        def removeAllChannelSet(self, targets, _ctx=None):
            return _M_omero.model.Pixels._op_removeAllChannelSet.invoke(self, ((targets, ), _ctx))

        def clearChannels(self, _ctx=None):
            return _M_omero.model.Pixels._op_clearChannels.invoke(self, ((), _ctx))

        def reloadChannels(self, toCopy, _ctx=None):
            return _M_omero.model.Pixels._op_reloadChannels.invoke(self, ((toCopy, ), _ctx))

        def getChannel(self, index, _ctx=None):
            return _M_omero.model.Pixels._op_getChannel.invoke(self, ((index, ), _ctx))

        def setChannel(self, index, theElement, _ctx=None):
            return _M_omero.model.Pixels._op_setChannel.invoke(self, ((index, theElement), _ctx))

        def getPrimaryChannel(self, _ctx=None):
            return _M_omero.model.Pixels._op_getPrimaryChannel.invoke(self, ((), _ctx))

        def setPrimaryChannel(self, theElement, _ctx=None):
            return _M_omero.model.Pixels._op_setPrimaryChannel.invoke(self, ((theElement, ), _ctx))

        def unloadSettings(self, _ctx=None):
            return _M_omero.model.Pixels._op_unloadSettings.invoke(self, ((), _ctx))

        def sizeOfSettings(self, _ctx=None):
            return _M_omero.model.Pixels._op_sizeOfSettings.invoke(self, ((), _ctx))

        def copySettings(self, _ctx=None):
            return _M_omero.model.Pixels._op_copySettings.invoke(self, ((), _ctx))

        def addRenderingDef(self, target, _ctx=None):
            return _M_omero.model.Pixels._op_addRenderingDef.invoke(self, ((target, ), _ctx))

        def addAllRenderingDefSet(self, targets, _ctx=None):
            return _M_omero.model.Pixels._op_addAllRenderingDefSet.invoke(self, ((targets, ), _ctx))

        def removeRenderingDef(self, theTarget, _ctx=None):
            return _M_omero.model.Pixels._op_removeRenderingDef.invoke(self, ((theTarget, ), _ctx))

        def removeAllRenderingDefSet(self, targets, _ctx=None):
            return _M_omero.model.Pixels._op_removeAllRenderingDefSet.invoke(self, ((targets, ), _ctx))

        def clearSettings(self, _ctx=None):
            return _M_omero.model.Pixels._op_clearSettings.invoke(self, ((), _ctx))

        def reloadSettings(self, toCopy, _ctx=None):
            return _M_omero.model.Pixels._op_reloadSettings.invoke(self, ((toCopy, ), _ctx))

        def unloadThumbnails(self, _ctx=None):
            return _M_omero.model.Pixels._op_unloadThumbnails.invoke(self, ((), _ctx))

        def sizeOfThumbnails(self, _ctx=None):
            return _M_omero.model.Pixels._op_sizeOfThumbnails.invoke(self, ((), _ctx))

        def copyThumbnails(self, _ctx=None):
            return _M_omero.model.Pixels._op_copyThumbnails.invoke(self, ((), _ctx))

        def addThumbnail(self, target, _ctx=None):
            return _M_omero.model.Pixels._op_addThumbnail.invoke(self, ((target, ), _ctx))

        def addAllThumbnailSet(self, targets, _ctx=None):
            return _M_omero.model.Pixels._op_addAllThumbnailSet.invoke(self, ((targets, ), _ctx))

        def removeThumbnail(self, theTarget, _ctx=None):
            return _M_omero.model.Pixels._op_removeThumbnail.invoke(self, ((theTarget, ), _ctx))

        def removeAllThumbnailSet(self, targets, _ctx=None):
            return _M_omero.model.Pixels._op_removeAllThumbnailSet.invoke(self, ((targets, ), _ctx))

        def clearThumbnails(self, _ctx=None):
            return _M_omero.model.Pixels._op_clearThumbnails.invoke(self, ((), _ctx))

        def reloadThumbnails(self, toCopy, _ctx=None):
            return _M_omero.model.Pixels._op_reloadThumbnails.invoke(self, ((toCopy, ), _ctx))

        def unloadAnnotationLinks(self, _ctx=None):
            return _M_omero.model.Pixels._op_unloadAnnotationLinks.invoke(self, ((), _ctx))

        def sizeOfAnnotationLinks(self, _ctx=None):
            return _M_omero.model.Pixels._op_sizeOfAnnotationLinks.invoke(self, ((), _ctx))

        def copyAnnotationLinks(self, _ctx=None):
            return _M_omero.model.Pixels._op_copyAnnotationLinks.invoke(self, ((), _ctx))

        def addPixelsAnnotationLink(self, target, _ctx=None):
            return _M_omero.model.Pixels._op_addPixelsAnnotationLink.invoke(self, ((target, ), _ctx))

        def addAllPixelsAnnotationLinkSet(self, targets, _ctx=None):
            return _M_omero.model.Pixels._op_addAllPixelsAnnotationLinkSet.invoke(self, ((targets, ), _ctx))

        def removePixelsAnnotationLink(self, theTarget, _ctx=None):
            return _M_omero.model.Pixels._op_removePixelsAnnotationLink.invoke(self, ((theTarget, ), _ctx))

        def removeAllPixelsAnnotationLinkSet(self, targets, _ctx=None):
            return _M_omero.model.Pixels._op_removeAllPixelsAnnotationLinkSet.invoke(self, ((targets, ), _ctx))

        def clearAnnotationLinks(self, _ctx=None):
            return _M_omero.model.Pixels._op_clearAnnotationLinks.invoke(self, ((), _ctx))

        def reloadAnnotationLinks(self, toCopy, _ctx=None):
            return _M_omero.model.Pixels._op_reloadAnnotationLinks.invoke(self, ((toCopy, ), _ctx))

        def getAnnotationLinksCountPerOwner(self, _ctx=None):
            return _M_omero.model.Pixels._op_getAnnotationLinksCountPerOwner.invoke(self, ((), _ctx))

        def linkAnnotation(self, addition, _ctx=None):
            return _M_omero.model.Pixels._op_linkAnnotation.invoke(self, ((addition, ), _ctx))

        def addPixelsAnnotationLinkToBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.Pixels._op_addPixelsAnnotationLinkToBoth.invoke(self, ((link, bothSides), _ctx))

        def findPixelsAnnotationLink(self, removal, _ctx=None):
            return _M_omero.model.Pixels._op_findPixelsAnnotationLink.invoke(self, ((removal, ), _ctx))

        def unlinkAnnotation(self, removal, _ctx=None):
            return _M_omero.model.Pixels._op_unlinkAnnotation.invoke(self, ((removal, ), _ctx))

        def removePixelsAnnotationLinkFromBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.Pixels._op_removePixelsAnnotationLinkFromBoth.invoke(self, ((link, bothSides), _ctx))

        def linkedAnnotationList(self, _ctx=None):
            return _M_omero.model.Pixels._op_linkedAnnotationList.invoke(self, ((), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.PixelsPrx.ice_checkedCast(proxy, '::omero::model::Pixels', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.PixelsPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_PixelsPrx = IcePy.defineProxy('::omero::model::Pixels', PixelsPrx)

    _M_omero.model._t_Pixels = IcePy.defineClass('::omero::model::Pixels', Pixels, (), True, _M_omero.model._t_IObject, (), (
        ('_version', (), _M_omero._t_RInt),
        ('_image', (), _M_omero.model._t_Image),
        ('_relatedTo', (), _M_omero.model._t_Pixels),
        ('_pixelsType', (), _M_omero.model._t_PixelsType),
        ('_significantBits', (), _M_omero._t_RInt),
        ('_sizeX', (), _M_omero._t_RInt),
        ('_sizeY', (), _M_omero._t_RInt),
        ('_sizeZ', (), _M_omero._t_RInt),
        ('_sizeC', (), _M_omero._t_RInt),
        ('_sizeT', (), _M_omero._t_RInt),
        ('_sha1', (), _M_omero._t_RString),
        ('_dimensionOrder', (), _M_omero.model._t_DimensionOrder),
        ('_physicalSizeX', (), _M_omero._t_RDouble),
        ('_physicalSizeY', (), _M_omero._t_RDouble),
        ('_physicalSizeZ', (), _M_omero._t_RDouble),
        ('_waveStart', (), _M_omero._t_RInt),
        ('_waveIncrement', (), _M_omero._t_RInt),
        ('_timeIncrement', (), _M_omero._t_RDouble),
        ('_methodology', (), _M_omero._t_RString),
        ('_planeInfoSeq', (), _M_omero.model._t_PixelsPlaneInfoSeq),
        ('_planeInfoLoaded', (), IcePy._t_bool),
        ('_pixelsFileMapsSeq', (), _M_omero.model._t_PixelsPixelsFileMapsSeq),
        ('_pixelsFileMapsLoaded', (), IcePy._t_bool),
        ('_pixelsFileMapsCountPerOwner', (), _M_omero.sys._t_CountMap),
        ('_channelsSeq', (), _M_omero.model._t_PixelsChannelsSeq),
        ('_channelsLoaded', (), IcePy._t_bool),
        ('_settingsSeq', (), _M_omero.model._t_PixelsSettingsSeq),
        ('_settingsLoaded', (), IcePy._t_bool),
        ('_thumbnailsSeq', (), _M_omero.model._t_PixelsThumbnailsSeq),
        ('_thumbnailsLoaded', (), IcePy._t_bool),
        ('_annotationLinksSeq', (), _M_omero.model._t_PixelsAnnotationLinksSeq),
        ('_annotationLinksLoaded', (), IcePy._t_bool),
        ('_annotationLinksCountPerOwner', (), _M_omero.sys._t_CountMap)
    ))
    Pixels.ice_type = _M_omero.model._t_Pixels

    Pixels._op_getVersion = IcePy.Operation('getVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    Pixels._op_setVersion = IcePy.Operation('setVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    Pixels._op_getImage = IcePy.Operation('getImage', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_Image, ())
    Pixels._op_setImage = IcePy.Operation('setImage', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Image),), (), None, ())
    Pixels._op_getRelatedTo = IcePy.Operation('getRelatedTo', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_Pixels, ())
    Pixels._op_setRelatedTo = IcePy.Operation('setRelatedTo', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Pixels),), (), None, ())
    Pixels._op_getPixelsType = IcePy.Operation('getPixelsType', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_PixelsType, ())
    Pixels._op_setPixelsType = IcePy.Operation('setPixelsType', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_PixelsType),), (), None, ())
    Pixels._op_getSignificantBits = IcePy.Operation('getSignificantBits', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    Pixels._op_setSignificantBits = IcePy.Operation('setSignificantBits', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    Pixels._op_getSizeX = IcePy.Operation('getSizeX', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    Pixels._op_setSizeX = IcePy.Operation('setSizeX', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    Pixels._op_getSizeY = IcePy.Operation('getSizeY', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    Pixels._op_setSizeY = IcePy.Operation('setSizeY', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    Pixels._op_getSizeZ = IcePy.Operation('getSizeZ', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    Pixels._op_setSizeZ = IcePy.Operation('setSizeZ', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    Pixels._op_getSizeC = IcePy.Operation('getSizeC', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    Pixels._op_setSizeC = IcePy.Operation('setSizeC', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    Pixels._op_getSizeT = IcePy.Operation('getSizeT', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    Pixels._op_setSizeT = IcePy.Operation('setSizeT', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    Pixels._op_getSha1 = IcePy.Operation('getSha1', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Pixels._op_setSha1 = IcePy.Operation('setSha1', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Pixels._op_getDimensionOrder = IcePy.Operation('getDimensionOrder', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_DimensionOrder, ())
    Pixels._op_setDimensionOrder = IcePy.Operation('setDimensionOrder', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_DimensionOrder),), (), None, ())
    Pixels._op_getPhysicalSizeX = IcePy.Operation('getPhysicalSizeX', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RDouble, ())
    Pixels._op_setPhysicalSizeX = IcePy.Operation('setPhysicalSizeX', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RDouble),), (), None, ())
    Pixels._op_getPhysicalSizeY = IcePy.Operation('getPhysicalSizeY', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RDouble, ())
    Pixels._op_setPhysicalSizeY = IcePy.Operation('setPhysicalSizeY', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RDouble),), (), None, ())
    Pixels._op_getPhysicalSizeZ = IcePy.Operation('getPhysicalSizeZ', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RDouble, ())
    Pixels._op_setPhysicalSizeZ = IcePy.Operation('setPhysicalSizeZ', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RDouble),), (), None, ())
    Pixels._op_getWaveStart = IcePy.Operation('getWaveStart', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    Pixels._op_setWaveStart = IcePy.Operation('setWaveStart', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    Pixels._op_getWaveIncrement = IcePy.Operation('getWaveIncrement', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    Pixels._op_setWaveIncrement = IcePy.Operation('setWaveIncrement', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    Pixels._op_getTimeIncrement = IcePy.Operation('getTimeIncrement', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RDouble, ())
    Pixels._op_setTimeIncrement = IcePy.Operation('setTimeIncrement', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RDouble),), (), None, ())
    Pixels._op_getMethodology = IcePy.Operation('getMethodology', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Pixels._op_setMethodology = IcePy.Operation('setMethodology', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Pixels._op_unloadPlaneInfo = IcePy.Operation('unloadPlaneInfo', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Pixels._op_sizeOfPlaneInfo = IcePy.Operation('sizeOfPlaneInfo', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())
    Pixels._op_copyPlaneInfo = IcePy.Operation('copyPlaneInfo', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_PixelsPlaneInfoSeq, ())
    Pixels._op_addPlaneInfo = IcePy.Operation('addPlaneInfo', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_PlaneInfo),), (), None, ())
    Pixels._op_addAllPlaneInfoSet = IcePy.Operation('addAllPlaneInfoSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_PixelsPlaneInfoSeq),), (), None, ())
    Pixels._op_removePlaneInfo = IcePy.Operation('removePlaneInfo', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_PlaneInfo),), (), None, ())
    Pixels._op_removeAllPlaneInfoSet = IcePy.Operation('removeAllPlaneInfoSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_PixelsPlaneInfoSeq),), (), None, ())
    Pixels._op_clearPlaneInfo = IcePy.Operation('clearPlaneInfo', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Pixels._op_reloadPlaneInfo = IcePy.Operation('reloadPlaneInfo', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Pixels),), (), None, ())
    Pixels._op_unloadPixelsFileMaps = IcePy.Operation('unloadPixelsFileMaps', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Pixels._op_sizeOfPixelsFileMaps = IcePy.Operation('sizeOfPixelsFileMaps', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())
    Pixels._op_copyPixelsFileMaps = IcePy.Operation('copyPixelsFileMaps', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_PixelsPixelsFileMapsSeq, ())
    Pixels._op_addPixelsOriginalFileMap = IcePy.Operation('addPixelsOriginalFileMap', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_PixelsOriginalFileMap),), (), None, ())
    Pixels._op_addAllPixelsOriginalFileMapSet = IcePy.Operation('addAllPixelsOriginalFileMapSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_PixelsPixelsFileMapsSeq),), (), None, ())
    Pixels._op_removePixelsOriginalFileMap = IcePy.Operation('removePixelsOriginalFileMap', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_PixelsOriginalFileMap),), (), None, ())
    Pixels._op_removeAllPixelsOriginalFileMapSet = IcePy.Operation('removeAllPixelsOriginalFileMapSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_PixelsPixelsFileMapsSeq),), (), None, ())
    Pixels._op_clearPixelsFileMaps = IcePy.Operation('clearPixelsFileMaps', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Pixels._op_reloadPixelsFileMaps = IcePy.Operation('reloadPixelsFileMaps', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Pixels),), (), None, ())
    Pixels._op_getPixelsFileMapsCountPerOwner = IcePy.Operation('getPixelsFileMapsCountPerOwner', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.sys._t_CountMap, ())
    Pixels._op_linkOriginalFile = IcePy.Operation('linkOriginalFile', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_OriginalFile),), (), _M_omero.model._t_PixelsOriginalFileMap, ())
    Pixels._op_addPixelsOriginalFileMapToBoth = IcePy.Operation('addPixelsOriginalFileMapToBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_PixelsOriginalFileMap), ((), IcePy._t_bool)), (), None, ())
    Pixels._op_findPixelsOriginalFileMap = IcePy.Operation('findPixelsOriginalFileMap', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_OriginalFile),), (), _M_omero.model._t_PixelsPixelsFileMapsSeq, ())
    Pixels._op_unlinkOriginalFile = IcePy.Operation('unlinkOriginalFile', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_OriginalFile),), (), None, ())
    Pixels._op_removePixelsOriginalFileMapFromBoth = IcePy.Operation('removePixelsOriginalFileMapFromBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_PixelsOriginalFileMap), ((), IcePy._t_bool)), (), None, ())
    Pixels._op_linkedOriginalFileList = IcePy.Operation('linkedOriginalFileList', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_PixelsLinkedOriginalFileSeq, ())
    Pixels._op_unloadChannels = IcePy.Operation('unloadChannels', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Pixels._op_sizeOfChannels = IcePy.Operation('sizeOfChannels', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())
    Pixels._op_copyChannels = IcePy.Operation('copyChannels', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_PixelsChannelsSeq, ())
    Pixels._op_addChannel = IcePy.Operation('addChannel', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Channel),), (), None, ())
    Pixels._op_addAllChannelSet = IcePy.Operation('addAllChannelSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_PixelsChannelsSeq),), (), None, ())
    Pixels._op_removeChannel = IcePy.Operation('removeChannel', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Channel),), (), None, ())
    Pixels._op_removeAllChannelSet = IcePy.Operation('removeAllChannelSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_PixelsChannelsSeq),), (), None, ())
    Pixels._op_clearChannels = IcePy.Operation('clearChannels', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Pixels._op_reloadChannels = IcePy.Operation('reloadChannels', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Pixels),), (), None, ())
    Pixels._op_getChannel = IcePy.Operation('getChannel', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_int),), (), _M_omero.model._t_Channel, ())
    Pixels._op_setChannel = IcePy.Operation('setChannel', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_int), ((), _M_omero.model._t_Channel)), (), _M_omero.model._t_Channel, ())
    Pixels._op_getPrimaryChannel = IcePy.Operation('getPrimaryChannel', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_Channel, ())
    Pixels._op_setPrimaryChannel = IcePy.Operation('setPrimaryChannel', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Channel),), (), _M_omero.model._t_Channel, ())
    Pixels._op_unloadSettings = IcePy.Operation('unloadSettings', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Pixels._op_sizeOfSettings = IcePy.Operation('sizeOfSettings', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())
    Pixels._op_copySettings = IcePy.Operation('copySettings', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_PixelsSettingsSeq, ())
    Pixels._op_addRenderingDef = IcePy.Operation('addRenderingDef', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_RenderingDef),), (), None, ())
    Pixels._op_addAllRenderingDefSet = IcePy.Operation('addAllRenderingDefSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_PixelsSettingsSeq),), (), None, ())
    Pixels._op_removeRenderingDef = IcePy.Operation('removeRenderingDef', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_RenderingDef),), (), None, ())
    Pixels._op_removeAllRenderingDefSet = IcePy.Operation('removeAllRenderingDefSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_PixelsSettingsSeq),), (), None, ())
    Pixels._op_clearSettings = IcePy.Operation('clearSettings', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Pixels._op_reloadSettings = IcePy.Operation('reloadSettings', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Pixels),), (), None, ())
    Pixels._op_unloadThumbnails = IcePy.Operation('unloadThumbnails', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Pixels._op_sizeOfThumbnails = IcePy.Operation('sizeOfThumbnails', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())
    Pixels._op_copyThumbnails = IcePy.Operation('copyThumbnails', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_PixelsThumbnailsSeq, ())
    Pixels._op_addThumbnail = IcePy.Operation('addThumbnail', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Thumbnail),), (), None, ())
    Pixels._op_addAllThumbnailSet = IcePy.Operation('addAllThumbnailSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_PixelsThumbnailsSeq),), (), None, ())
    Pixels._op_removeThumbnail = IcePy.Operation('removeThumbnail', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Thumbnail),), (), None, ())
    Pixels._op_removeAllThumbnailSet = IcePy.Operation('removeAllThumbnailSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_PixelsThumbnailsSeq),), (), None, ())
    Pixels._op_clearThumbnails = IcePy.Operation('clearThumbnails', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Pixels._op_reloadThumbnails = IcePy.Operation('reloadThumbnails', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Pixels),), (), None, ())
    Pixels._op_unloadAnnotationLinks = IcePy.Operation('unloadAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Pixels._op_sizeOfAnnotationLinks = IcePy.Operation('sizeOfAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())
    Pixels._op_copyAnnotationLinks = IcePy.Operation('copyAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_PixelsAnnotationLinksSeq, ())
    Pixels._op_addPixelsAnnotationLink = IcePy.Operation('addPixelsAnnotationLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_PixelsAnnotationLink),), (), None, ())
    Pixels._op_addAllPixelsAnnotationLinkSet = IcePy.Operation('addAllPixelsAnnotationLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_PixelsAnnotationLinksSeq),), (), None, ())
    Pixels._op_removePixelsAnnotationLink = IcePy.Operation('removePixelsAnnotationLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_PixelsAnnotationLink),), (), None, ())
    Pixels._op_removeAllPixelsAnnotationLinkSet = IcePy.Operation('removeAllPixelsAnnotationLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_PixelsAnnotationLinksSeq),), (), None, ())
    Pixels._op_clearAnnotationLinks = IcePy.Operation('clearAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Pixels._op_reloadAnnotationLinks = IcePy.Operation('reloadAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Pixels),), (), None, ())
    Pixels._op_getAnnotationLinksCountPerOwner = IcePy.Operation('getAnnotationLinksCountPerOwner', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.sys._t_CountMap, ())
    Pixels._op_linkAnnotation = IcePy.Operation('linkAnnotation', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Annotation),), (), _M_omero.model._t_PixelsAnnotationLink, ())
    Pixels._op_addPixelsAnnotationLinkToBoth = IcePy.Operation('addPixelsAnnotationLinkToBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_PixelsAnnotationLink), ((), IcePy._t_bool)), (), None, ())
    Pixels._op_findPixelsAnnotationLink = IcePy.Operation('findPixelsAnnotationLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Annotation),), (), _M_omero.model._t_PixelsAnnotationLinksSeq, ())
    Pixels._op_unlinkAnnotation = IcePy.Operation('unlinkAnnotation', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Annotation),), (), None, ())
    Pixels._op_removePixelsAnnotationLinkFromBoth = IcePy.Operation('removePixelsAnnotationLinkFromBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_PixelsAnnotationLink), ((), IcePy._t_bool)), (), None, ())
    Pixels._op_linkedAnnotationList = IcePy.Operation('linkedAnnotationList', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_PixelsLinkedAnnotationSeq, ())

    _M_omero.model.Pixels = Pixels
    del Pixels

    _M_omero.model.PixelsPrx = PixelsPrx
    del PixelsPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
