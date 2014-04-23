# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `PlaneInfo.ice'

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

if not _M_omero.model.__dict__.has_key('Pixels'):
    _M_omero.model._t_Pixels = IcePy.declareClass('::omero::model::Pixels')
    _M_omero.model._t_PixelsPrx = IcePy.declareProxy('::omero::model::Pixels')

if not _M_omero.model.__dict__.has_key('PlaneInfoAnnotationLink'):
    _M_omero.model._t_PlaneInfoAnnotationLink = IcePy.declareClass('::omero::model::PlaneInfoAnnotationLink')
    _M_omero.model._t_PlaneInfoAnnotationLinkPrx = IcePy.declareProxy('::omero::model::PlaneInfoAnnotationLink')

if not _M_omero.model.__dict__.has_key('Annotation'):
    _M_omero.model._t_Annotation = IcePy.declareClass('::omero::model::Annotation')
    _M_omero.model._t_AnnotationPrx = IcePy.declareProxy('::omero::model::Annotation')

if not _M_omero.model.__dict__.has_key('Details'):
    _M_omero.model._t_Details = IcePy.declareClass('::omero::model::Details')
    _M_omero.model._t_DetailsPrx = IcePy.declareProxy('::omero::model::Details')

if not _M_omero.model.__dict__.has_key('_t_PlaneInfoAnnotationLinksSeq'):
    _M_omero.model._t_PlaneInfoAnnotationLinksSeq = IcePy.defineSequence('::omero::model::PlaneInfoAnnotationLinksSeq', (), _M_omero.model._t_PlaneInfoAnnotationLink)

if not _M_omero.model.__dict__.has_key('_t_PlaneInfoLinkedAnnotationSeq'):
    _M_omero.model._t_PlaneInfoLinkedAnnotationSeq = IcePy.defineSequence('::omero::model::PlaneInfoLinkedAnnotationSeq', (), _M_omero.model._t_Annotation)

if not _M_omero.model.__dict__.has_key('PlaneInfo'):
    _M_omero.model.PlaneInfo = Ice.createTempClass()
    class PlaneInfo(_M_omero.model.IObject):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _pixels=None, _theZ=None, _theC=None, _theT=None, _deltaT=None, _positionX=None, _positionY=None, _positionZ=None, _exposureTime=None, _annotationLinksSeq=None, _annotationLinksLoaded=False, _annotationLinksCountPerOwner=None):
            if __builtin__.type(self) == _M_omero.model.PlaneInfo:
                raise RuntimeError('omero.model.PlaneInfo is an abstract class')
            _M_omero.model.IObject.__init__(self, _id, _details, _loaded)
            self._version = _version
            self._pixels = _pixels
            self._theZ = _theZ
            self._theC = _theC
            self._theT = _theT
            self._deltaT = _deltaT
            self._positionX = _positionX
            self._positionY = _positionY
            self._positionZ = _positionZ
            self._exposureTime = _exposureTime
            self._annotationLinksSeq = _annotationLinksSeq
            self._annotationLinksLoaded = _annotationLinksLoaded
            self._annotationLinksCountPerOwner = _annotationLinksCountPerOwner

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::IObject', '::omero::model::PlaneInfo')

        def ice_id(self, current=None):
            return '::omero::model::PlaneInfo'

        def ice_staticId():
            return '::omero::model::PlaneInfo'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getVersion(self, current=None):
        # def setVersion(self, theVersion, current=None):
        # def getPixels(self, current=None):
        # def setPixels(self, thePixels, current=None):
        # def getTheZ(self, current=None):
        # def setTheZ(self, theTheZ, current=None):
        # def getTheC(self, current=None):
        # def setTheC(self, theTheC, current=None):
        # def getTheT(self, current=None):
        # def setTheT(self, theTheT, current=None):
        # def getDeltaT(self, current=None):
        # def setDeltaT(self, theDeltaT, current=None):
        # def getPositionX(self, current=None):
        # def setPositionX(self, thePositionX, current=None):
        # def getPositionY(self, current=None):
        # def setPositionY(self, thePositionY, current=None):
        # def getPositionZ(self, current=None):
        # def setPositionZ(self, thePositionZ, current=None):
        # def getExposureTime(self, current=None):
        # def setExposureTime(self, theExposureTime, current=None):
        # def unloadAnnotationLinks(self, current=None):
        # def sizeOfAnnotationLinks(self, current=None):
        # def copyAnnotationLinks(self, current=None):
        # def addPlaneInfoAnnotationLink(self, target, current=None):
        # def addAllPlaneInfoAnnotationLinkSet(self, targets, current=None):
        # def removePlaneInfoAnnotationLink(self, theTarget, current=None):
        # def removeAllPlaneInfoAnnotationLinkSet(self, targets, current=None):
        # def clearAnnotationLinks(self, current=None):
        # def reloadAnnotationLinks(self, toCopy, current=None):
        # def getAnnotationLinksCountPerOwner(self, current=None):
        # def linkAnnotation(self, addition, current=None):
        # def addPlaneInfoAnnotationLinkToBoth(self, link, bothSides, current=None):
        # def findPlaneInfoAnnotationLink(self, removal, current=None):
        # def unlinkAnnotation(self, removal, current=None):
        # def removePlaneInfoAnnotationLinkFromBoth(self, link, bothSides, current=None):
        # def linkedAnnotationList(self, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_PlaneInfo)

        __repr__ = __str__

    _M_omero.model.PlaneInfoPrx = Ice.createTempClass()
    class PlaneInfoPrx(_M_omero.model.IObjectPrx):

        def getVersion(self, _ctx=None):
            return _M_omero.model.PlaneInfo._op_getVersion.invoke(self, ((), _ctx))

        def setVersion(self, theVersion, _ctx=None):
            return _M_omero.model.PlaneInfo._op_setVersion.invoke(self, ((theVersion, ), _ctx))

        def getPixels(self, _ctx=None):
            return _M_omero.model.PlaneInfo._op_getPixels.invoke(self, ((), _ctx))

        def setPixels(self, thePixels, _ctx=None):
            return _M_omero.model.PlaneInfo._op_setPixels.invoke(self, ((thePixels, ), _ctx))

        def getTheZ(self, _ctx=None):
            return _M_omero.model.PlaneInfo._op_getTheZ.invoke(self, ((), _ctx))

        def setTheZ(self, theTheZ, _ctx=None):
            return _M_omero.model.PlaneInfo._op_setTheZ.invoke(self, ((theTheZ, ), _ctx))

        def getTheC(self, _ctx=None):
            return _M_omero.model.PlaneInfo._op_getTheC.invoke(self, ((), _ctx))

        def setTheC(self, theTheC, _ctx=None):
            return _M_omero.model.PlaneInfo._op_setTheC.invoke(self, ((theTheC, ), _ctx))

        def getTheT(self, _ctx=None):
            return _M_omero.model.PlaneInfo._op_getTheT.invoke(self, ((), _ctx))

        def setTheT(self, theTheT, _ctx=None):
            return _M_omero.model.PlaneInfo._op_setTheT.invoke(self, ((theTheT, ), _ctx))

        def getDeltaT(self, _ctx=None):
            return _M_omero.model.PlaneInfo._op_getDeltaT.invoke(self, ((), _ctx))

        def setDeltaT(self, theDeltaT, _ctx=None):
            return _M_omero.model.PlaneInfo._op_setDeltaT.invoke(self, ((theDeltaT, ), _ctx))

        def getPositionX(self, _ctx=None):
            return _M_omero.model.PlaneInfo._op_getPositionX.invoke(self, ((), _ctx))

        def setPositionX(self, thePositionX, _ctx=None):
            return _M_omero.model.PlaneInfo._op_setPositionX.invoke(self, ((thePositionX, ), _ctx))

        def getPositionY(self, _ctx=None):
            return _M_omero.model.PlaneInfo._op_getPositionY.invoke(self, ((), _ctx))

        def setPositionY(self, thePositionY, _ctx=None):
            return _M_omero.model.PlaneInfo._op_setPositionY.invoke(self, ((thePositionY, ), _ctx))

        def getPositionZ(self, _ctx=None):
            return _M_omero.model.PlaneInfo._op_getPositionZ.invoke(self, ((), _ctx))

        def setPositionZ(self, thePositionZ, _ctx=None):
            return _M_omero.model.PlaneInfo._op_setPositionZ.invoke(self, ((thePositionZ, ), _ctx))

        def getExposureTime(self, _ctx=None):
            return _M_omero.model.PlaneInfo._op_getExposureTime.invoke(self, ((), _ctx))

        def setExposureTime(self, theExposureTime, _ctx=None):
            return _M_omero.model.PlaneInfo._op_setExposureTime.invoke(self, ((theExposureTime, ), _ctx))

        def unloadAnnotationLinks(self, _ctx=None):
            return _M_omero.model.PlaneInfo._op_unloadAnnotationLinks.invoke(self, ((), _ctx))

        def sizeOfAnnotationLinks(self, _ctx=None):
            return _M_omero.model.PlaneInfo._op_sizeOfAnnotationLinks.invoke(self, ((), _ctx))

        def copyAnnotationLinks(self, _ctx=None):
            return _M_omero.model.PlaneInfo._op_copyAnnotationLinks.invoke(self, ((), _ctx))

        def addPlaneInfoAnnotationLink(self, target, _ctx=None):
            return _M_omero.model.PlaneInfo._op_addPlaneInfoAnnotationLink.invoke(self, ((target, ), _ctx))

        def addAllPlaneInfoAnnotationLinkSet(self, targets, _ctx=None):
            return _M_omero.model.PlaneInfo._op_addAllPlaneInfoAnnotationLinkSet.invoke(self, ((targets, ), _ctx))

        def removePlaneInfoAnnotationLink(self, theTarget, _ctx=None):
            return _M_omero.model.PlaneInfo._op_removePlaneInfoAnnotationLink.invoke(self, ((theTarget, ), _ctx))

        def removeAllPlaneInfoAnnotationLinkSet(self, targets, _ctx=None):
            return _M_omero.model.PlaneInfo._op_removeAllPlaneInfoAnnotationLinkSet.invoke(self, ((targets, ), _ctx))

        def clearAnnotationLinks(self, _ctx=None):
            return _M_omero.model.PlaneInfo._op_clearAnnotationLinks.invoke(self, ((), _ctx))

        def reloadAnnotationLinks(self, toCopy, _ctx=None):
            return _M_omero.model.PlaneInfo._op_reloadAnnotationLinks.invoke(self, ((toCopy, ), _ctx))

        def getAnnotationLinksCountPerOwner(self, _ctx=None):
            return _M_omero.model.PlaneInfo._op_getAnnotationLinksCountPerOwner.invoke(self, ((), _ctx))

        def linkAnnotation(self, addition, _ctx=None):
            return _M_omero.model.PlaneInfo._op_linkAnnotation.invoke(self, ((addition, ), _ctx))

        def addPlaneInfoAnnotationLinkToBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.PlaneInfo._op_addPlaneInfoAnnotationLinkToBoth.invoke(self, ((link, bothSides), _ctx))

        def findPlaneInfoAnnotationLink(self, removal, _ctx=None):
            return _M_omero.model.PlaneInfo._op_findPlaneInfoAnnotationLink.invoke(self, ((removal, ), _ctx))

        def unlinkAnnotation(self, removal, _ctx=None):
            return _M_omero.model.PlaneInfo._op_unlinkAnnotation.invoke(self, ((removal, ), _ctx))

        def removePlaneInfoAnnotationLinkFromBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.PlaneInfo._op_removePlaneInfoAnnotationLinkFromBoth.invoke(self, ((link, bothSides), _ctx))

        def linkedAnnotationList(self, _ctx=None):
            return _M_omero.model.PlaneInfo._op_linkedAnnotationList.invoke(self, ((), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.PlaneInfoPrx.ice_checkedCast(proxy, '::omero::model::PlaneInfo', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.PlaneInfoPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_PlaneInfoPrx = IcePy.defineProxy('::omero::model::PlaneInfo', PlaneInfoPrx)

    _M_omero.model._t_PlaneInfo = IcePy.declareClass('::omero::model::PlaneInfo')

    _M_omero.model._t_PlaneInfo = IcePy.defineClass('::omero::model::PlaneInfo', PlaneInfo, (), True, _M_omero.model._t_IObject, (), (
        ('_version', (), _M_omero._t_RInt),
        ('_pixels', (), _M_omero.model._t_Pixels),
        ('_theZ', (), _M_omero._t_RInt),
        ('_theC', (), _M_omero._t_RInt),
        ('_theT', (), _M_omero._t_RInt),
        ('_deltaT', (), _M_omero._t_RDouble),
        ('_positionX', (), _M_omero._t_RDouble),
        ('_positionY', (), _M_omero._t_RDouble),
        ('_positionZ', (), _M_omero._t_RDouble),
        ('_exposureTime', (), _M_omero._t_RDouble),
        ('_annotationLinksSeq', (), _M_omero.model._t_PlaneInfoAnnotationLinksSeq),
        ('_annotationLinksLoaded', (), IcePy._t_bool),
        ('_annotationLinksCountPerOwner', (), _M_omero.sys._t_CountMap)
    ))
    PlaneInfo.ice_type = _M_omero.model._t_PlaneInfo

    PlaneInfo._op_getVersion = IcePy.Operation('getVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    PlaneInfo._op_setVersion = IcePy.Operation('setVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    PlaneInfo._op_getPixels = IcePy.Operation('getPixels', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_Pixels, ())
    PlaneInfo._op_setPixels = IcePy.Operation('setPixels', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Pixels),), (), None, ())
    PlaneInfo._op_getTheZ = IcePy.Operation('getTheZ', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    PlaneInfo._op_setTheZ = IcePy.Operation('setTheZ', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    PlaneInfo._op_getTheC = IcePy.Operation('getTheC', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    PlaneInfo._op_setTheC = IcePy.Operation('setTheC', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    PlaneInfo._op_getTheT = IcePy.Operation('getTheT', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    PlaneInfo._op_setTheT = IcePy.Operation('setTheT', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    PlaneInfo._op_getDeltaT = IcePy.Operation('getDeltaT', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RDouble, ())
    PlaneInfo._op_setDeltaT = IcePy.Operation('setDeltaT', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RDouble),), (), None, ())
    PlaneInfo._op_getPositionX = IcePy.Operation('getPositionX', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RDouble, ())
    PlaneInfo._op_setPositionX = IcePy.Operation('setPositionX', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RDouble),), (), None, ())
    PlaneInfo._op_getPositionY = IcePy.Operation('getPositionY', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RDouble, ())
    PlaneInfo._op_setPositionY = IcePy.Operation('setPositionY', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RDouble),), (), None, ())
    PlaneInfo._op_getPositionZ = IcePy.Operation('getPositionZ', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RDouble, ())
    PlaneInfo._op_setPositionZ = IcePy.Operation('setPositionZ', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RDouble),), (), None, ())
    PlaneInfo._op_getExposureTime = IcePy.Operation('getExposureTime', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RDouble, ())
    PlaneInfo._op_setExposureTime = IcePy.Operation('setExposureTime', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RDouble),), (), None, ())
    PlaneInfo._op_unloadAnnotationLinks = IcePy.Operation('unloadAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    PlaneInfo._op_sizeOfAnnotationLinks = IcePy.Operation('sizeOfAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())
    PlaneInfo._op_copyAnnotationLinks = IcePy.Operation('copyAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_PlaneInfoAnnotationLinksSeq, ())
    PlaneInfo._op_addPlaneInfoAnnotationLink = IcePy.Operation('addPlaneInfoAnnotationLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_PlaneInfoAnnotationLink),), (), None, ())
    PlaneInfo._op_addAllPlaneInfoAnnotationLinkSet = IcePy.Operation('addAllPlaneInfoAnnotationLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_PlaneInfoAnnotationLinksSeq),), (), None, ())
    PlaneInfo._op_removePlaneInfoAnnotationLink = IcePy.Operation('removePlaneInfoAnnotationLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_PlaneInfoAnnotationLink),), (), None, ())
    PlaneInfo._op_removeAllPlaneInfoAnnotationLinkSet = IcePy.Operation('removeAllPlaneInfoAnnotationLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_PlaneInfoAnnotationLinksSeq),), (), None, ())
    PlaneInfo._op_clearAnnotationLinks = IcePy.Operation('clearAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    PlaneInfo._op_reloadAnnotationLinks = IcePy.Operation('reloadAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_PlaneInfo),), (), None, ())
    PlaneInfo._op_getAnnotationLinksCountPerOwner = IcePy.Operation('getAnnotationLinksCountPerOwner', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.sys._t_CountMap, ())
    PlaneInfo._op_linkAnnotation = IcePy.Operation('linkAnnotation', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Annotation),), (), _M_omero.model._t_PlaneInfoAnnotationLink, ())
    PlaneInfo._op_addPlaneInfoAnnotationLinkToBoth = IcePy.Operation('addPlaneInfoAnnotationLinkToBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_PlaneInfoAnnotationLink), ((), IcePy._t_bool)), (), None, ())
    PlaneInfo._op_findPlaneInfoAnnotationLink = IcePy.Operation('findPlaneInfoAnnotationLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Annotation),), (), _M_omero.model._t_PlaneInfoAnnotationLinksSeq, ())
    PlaneInfo._op_unlinkAnnotation = IcePy.Operation('unlinkAnnotation', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Annotation),), (), None, ())
    PlaneInfo._op_removePlaneInfoAnnotationLinkFromBoth = IcePy.Operation('removePlaneInfoAnnotationLinkFromBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_PlaneInfoAnnotationLink), ((), IcePy._t_bool)), (), None, ())
    PlaneInfo._op_linkedAnnotationList = IcePy.Operation('linkedAnnotationList', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_PlaneInfoLinkedAnnotationSeq, ())

    _M_omero.model.PlaneInfo = PlaneInfo
    del PlaneInfo

    _M_omero.model.PlaneInfoPrx = PlaneInfoPrx
    del PlaneInfoPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
