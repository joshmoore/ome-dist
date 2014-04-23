# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `WellSample.ice'

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

if not _M_omero.model.__dict__.has_key('PlateAcquisition'):
    _M_omero.model._t_PlateAcquisition = IcePy.declareClass('::omero::model::PlateAcquisition')
    _M_omero.model._t_PlateAcquisitionPrx = IcePy.declareProxy('::omero::model::PlateAcquisition')

if not _M_omero.model.__dict__.has_key('Well'):
    _M_omero.model._t_Well = IcePy.declareClass('::omero::model::Well')
    _M_omero.model._t_WellPrx = IcePy.declareProxy('::omero::model::Well')

if not _M_omero.model.__dict__.has_key('Image'):
    _M_omero.model._t_Image = IcePy.declareClass('::omero::model::Image')
    _M_omero.model._t_ImagePrx = IcePy.declareProxy('::omero::model::Image')

if not _M_omero.model.__dict__.has_key('WellSampleAnnotationLink'):
    _M_omero.model._t_WellSampleAnnotationLink = IcePy.declareClass('::omero::model::WellSampleAnnotationLink')
    _M_omero.model._t_WellSampleAnnotationLinkPrx = IcePy.declareProxy('::omero::model::WellSampleAnnotationLink')

if not _M_omero.model.__dict__.has_key('Annotation'):
    _M_omero.model._t_Annotation = IcePy.declareClass('::omero::model::Annotation')
    _M_omero.model._t_AnnotationPrx = IcePy.declareProxy('::omero::model::Annotation')

if not _M_omero.model.__dict__.has_key('Details'):
    _M_omero.model._t_Details = IcePy.declareClass('::omero::model::Details')
    _M_omero.model._t_DetailsPrx = IcePy.declareProxy('::omero::model::Details')

if not _M_omero.model.__dict__.has_key('_t_WellSampleAnnotationLinksSeq'):
    _M_omero.model._t_WellSampleAnnotationLinksSeq = IcePy.defineSequence('::omero::model::WellSampleAnnotationLinksSeq', (), _M_omero.model._t_WellSampleAnnotationLink)

if not _M_omero.model.__dict__.has_key('_t_WellSampleLinkedAnnotationSeq'):
    _M_omero.model._t_WellSampleLinkedAnnotationSeq = IcePy.defineSequence('::omero::model::WellSampleLinkedAnnotationSeq', (), _M_omero.model._t_Annotation)

if not _M_omero.model.__dict__.has_key('WellSample'):
    _M_omero.model.WellSample = Ice.createTempClass()
    class WellSample(_M_omero.model.IObject):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _posX=None, _posY=None, _timepoint=None, _plateAcquisition=None, _well=None, _image=None, _annotationLinksSeq=None, _annotationLinksLoaded=False, _annotationLinksCountPerOwner=None):
            if __builtin__.type(self) == _M_omero.model.WellSample:
                raise RuntimeError('omero.model.WellSample is an abstract class')
            _M_omero.model.IObject.__init__(self, _id, _details, _loaded)
            self._version = _version
            self._posX = _posX
            self._posY = _posY
            self._timepoint = _timepoint
            self._plateAcquisition = _plateAcquisition
            self._well = _well
            self._image = _image
            self._annotationLinksSeq = _annotationLinksSeq
            self._annotationLinksLoaded = _annotationLinksLoaded
            self._annotationLinksCountPerOwner = _annotationLinksCountPerOwner

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::IObject', '::omero::model::WellSample')

        def ice_id(self, current=None):
            return '::omero::model::WellSample'

        def ice_staticId():
            return '::omero::model::WellSample'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getVersion(self, current=None):
        # def setVersion(self, theVersion, current=None):
        # def getPosX(self, current=None):
        # def setPosX(self, thePosX, current=None):
        # def getPosY(self, current=None):
        # def setPosY(self, thePosY, current=None):
        # def getTimepoint(self, current=None):
        # def setTimepoint(self, theTimepoint, current=None):
        # def getPlateAcquisition(self, current=None):
        # def setPlateAcquisition(self, thePlateAcquisition, current=None):
        # def getWell(self, current=None):
        # def setWell(self, theWell, current=None):
        # def getImage(self, current=None):
        # def setImage(self, theImage, current=None):
        # def unloadAnnotationLinks(self, current=None):
        # def sizeOfAnnotationLinks(self, current=None):
        # def copyAnnotationLinks(self, current=None):
        # def addWellSampleAnnotationLink(self, target, current=None):
        # def addAllWellSampleAnnotationLinkSet(self, targets, current=None):
        # def removeWellSampleAnnotationLink(self, theTarget, current=None):
        # def removeAllWellSampleAnnotationLinkSet(self, targets, current=None):
        # def clearAnnotationLinks(self, current=None):
        # def reloadAnnotationLinks(self, toCopy, current=None):
        # def getAnnotationLinksCountPerOwner(self, current=None):
        # def linkAnnotation(self, addition, current=None):
        # def addWellSampleAnnotationLinkToBoth(self, link, bothSides, current=None):
        # def findWellSampleAnnotationLink(self, removal, current=None):
        # def unlinkAnnotation(self, removal, current=None):
        # def removeWellSampleAnnotationLinkFromBoth(self, link, bothSides, current=None):
        # def linkedAnnotationList(self, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_WellSample)

        __repr__ = __str__

    _M_omero.model.WellSamplePrx = Ice.createTempClass()
    class WellSamplePrx(_M_omero.model.IObjectPrx):

        def getVersion(self, _ctx=None):
            return _M_omero.model.WellSample._op_getVersion.invoke(self, ((), _ctx))

        def setVersion(self, theVersion, _ctx=None):
            return _M_omero.model.WellSample._op_setVersion.invoke(self, ((theVersion, ), _ctx))

        def getPosX(self, _ctx=None):
            return _M_omero.model.WellSample._op_getPosX.invoke(self, ((), _ctx))

        def setPosX(self, thePosX, _ctx=None):
            return _M_omero.model.WellSample._op_setPosX.invoke(self, ((thePosX, ), _ctx))

        def getPosY(self, _ctx=None):
            return _M_omero.model.WellSample._op_getPosY.invoke(self, ((), _ctx))

        def setPosY(self, thePosY, _ctx=None):
            return _M_omero.model.WellSample._op_setPosY.invoke(self, ((thePosY, ), _ctx))

        def getTimepoint(self, _ctx=None):
            return _M_omero.model.WellSample._op_getTimepoint.invoke(self, ((), _ctx))

        def setTimepoint(self, theTimepoint, _ctx=None):
            return _M_omero.model.WellSample._op_setTimepoint.invoke(self, ((theTimepoint, ), _ctx))

        def getPlateAcquisition(self, _ctx=None):
            return _M_omero.model.WellSample._op_getPlateAcquisition.invoke(self, ((), _ctx))

        def setPlateAcquisition(self, thePlateAcquisition, _ctx=None):
            return _M_omero.model.WellSample._op_setPlateAcquisition.invoke(self, ((thePlateAcquisition, ), _ctx))

        def getWell(self, _ctx=None):
            return _M_omero.model.WellSample._op_getWell.invoke(self, ((), _ctx))

        def setWell(self, theWell, _ctx=None):
            return _M_omero.model.WellSample._op_setWell.invoke(self, ((theWell, ), _ctx))

        def getImage(self, _ctx=None):
            return _M_omero.model.WellSample._op_getImage.invoke(self, ((), _ctx))

        def setImage(self, theImage, _ctx=None):
            return _M_omero.model.WellSample._op_setImage.invoke(self, ((theImage, ), _ctx))

        def unloadAnnotationLinks(self, _ctx=None):
            return _M_omero.model.WellSample._op_unloadAnnotationLinks.invoke(self, ((), _ctx))

        def sizeOfAnnotationLinks(self, _ctx=None):
            return _M_omero.model.WellSample._op_sizeOfAnnotationLinks.invoke(self, ((), _ctx))

        def copyAnnotationLinks(self, _ctx=None):
            return _M_omero.model.WellSample._op_copyAnnotationLinks.invoke(self, ((), _ctx))

        def addWellSampleAnnotationLink(self, target, _ctx=None):
            return _M_omero.model.WellSample._op_addWellSampleAnnotationLink.invoke(self, ((target, ), _ctx))

        def addAllWellSampleAnnotationLinkSet(self, targets, _ctx=None):
            return _M_omero.model.WellSample._op_addAllWellSampleAnnotationLinkSet.invoke(self, ((targets, ), _ctx))

        def removeWellSampleAnnotationLink(self, theTarget, _ctx=None):
            return _M_omero.model.WellSample._op_removeWellSampleAnnotationLink.invoke(self, ((theTarget, ), _ctx))

        def removeAllWellSampleAnnotationLinkSet(self, targets, _ctx=None):
            return _M_omero.model.WellSample._op_removeAllWellSampleAnnotationLinkSet.invoke(self, ((targets, ), _ctx))

        def clearAnnotationLinks(self, _ctx=None):
            return _M_omero.model.WellSample._op_clearAnnotationLinks.invoke(self, ((), _ctx))

        def reloadAnnotationLinks(self, toCopy, _ctx=None):
            return _M_omero.model.WellSample._op_reloadAnnotationLinks.invoke(self, ((toCopy, ), _ctx))

        def getAnnotationLinksCountPerOwner(self, _ctx=None):
            return _M_omero.model.WellSample._op_getAnnotationLinksCountPerOwner.invoke(self, ((), _ctx))

        def linkAnnotation(self, addition, _ctx=None):
            return _M_omero.model.WellSample._op_linkAnnotation.invoke(self, ((addition, ), _ctx))

        def addWellSampleAnnotationLinkToBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.WellSample._op_addWellSampleAnnotationLinkToBoth.invoke(self, ((link, bothSides), _ctx))

        def findWellSampleAnnotationLink(self, removal, _ctx=None):
            return _M_omero.model.WellSample._op_findWellSampleAnnotationLink.invoke(self, ((removal, ), _ctx))

        def unlinkAnnotation(self, removal, _ctx=None):
            return _M_omero.model.WellSample._op_unlinkAnnotation.invoke(self, ((removal, ), _ctx))

        def removeWellSampleAnnotationLinkFromBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.WellSample._op_removeWellSampleAnnotationLinkFromBoth.invoke(self, ((link, bothSides), _ctx))

        def linkedAnnotationList(self, _ctx=None):
            return _M_omero.model.WellSample._op_linkedAnnotationList.invoke(self, ((), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.WellSamplePrx.ice_checkedCast(proxy, '::omero::model::WellSample', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.WellSamplePrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_WellSamplePrx = IcePy.defineProxy('::omero::model::WellSample', WellSamplePrx)

    _M_omero.model._t_WellSample = IcePy.declareClass('::omero::model::WellSample')

    _M_omero.model._t_WellSample = IcePy.defineClass('::omero::model::WellSample', WellSample, (), True, _M_omero.model._t_IObject, (), (
        ('_version', (), _M_omero._t_RInt),
        ('_posX', (), _M_omero._t_RDouble),
        ('_posY', (), _M_omero._t_RDouble),
        ('_timepoint', (), _M_omero._t_RTime),
        ('_plateAcquisition', (), _M_omero.model._t_PlateAcquisition),
        ('_well', (), _M_omero.model._t_Well),
        ('_image', (), _M_omero.model._t_Image),
        ('_annotationLinksSeq', (), _M_omero.model._t_WellSampleAnnotationLinksSeq),
        ('_annotationLinksLoaded', (), IcePy._t_bool),
        ('_annotationLinksCountPerOwner', (), _M_omero.sys._t_CountMap)
    ))
    WellSample.ice_type = _M_omero.model._t_WellSample

    WellSample._op_getVersion = IcePy.Operation('getVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    WellSample._op_setVersion = IcePy.Operation('setVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    WellSample._op_getPosX = IcePy.Operation('getPosX', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RDouble, ())
    WellSample._op_setPosX = IcePy.Operation('setPosX', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RDouble),), (), None, ())
    WellSample._op_getPosY = IcePy.Operation('getPosY', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RDouble, ())
    WellSample._op_setPosY = IcePy.Operation('setPosY', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RDouble),), (), None, ())
    WellSample._op_getTimepoint = IcePy.Operation('getTimepoint', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RTime, ())
    WellSample._op_setTimepoint = IcePy.Operation('setTimepoint', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RTime),), (), None, ())
    WellSample._op_getPlateAcquisition = IcePy.Operation('getPlateAcquisition', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_PlateAcquisition, ())
    WellSample._op_setPlateAcquisition = IcePy.Operation('setPlateAcquisition', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_PlateAcquisition),), (), None, ())
    WellSample._op_getWell = IcePy.Operation('getWell', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_Well, ())
    WellSample._op_setWell = IcePy.Operation('setWell', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Well),), (), None, ())
    WellSample._op_getImage = IcePy.Operation('getImage', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_Image, ())
    WellSample._op_setImage = IcePy.Operation('setImage', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Image),), (), None, ())
    WellSample._op_unloadAnnotationLinks = IcePy.Operation('unloadAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    WellSample._op_sizeOfAnnotationLinks = IcePy.Operation('sizeOfAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())
    WellSample._op_copyAnnotationLinks = IcePy.Operation('copyAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_WellSampleAnnotationLinksSeq, ())
    WellSample._op_addWellSampleAnnotationLink = IcePy.Operation('addWellSampleAnnotationLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_WellSampleAnnotationLink),), (), None, ())
    WellSample._op_addAllWellSampleAnnotationLinkSet = IcePy.Operation('addAllWellSampleAnnotationLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_WellSampleAnnotationLinksSeq),), (), None, ())
    WellSample._op_removeWellSampleAnnotationLink = IcePy.Operation('removeWellSampleAnnotationLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_WellSampleAnnotationLink),), (), None, ())
    WellSample._op_removeAllWellSampleAnnotationLinkSet = IcePy.Operation('removeAllWellSampleAnnotationLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_WellSampleAnnotationLinksSeq),), (), None, ())
    WellSample._op_clearAnnotationLinks = IcePy.Operation('clearAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    WellSample._op_reloadAnnotationLinks = IcePy.Operation('reloadAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_WellSample),), (), None, ())
    WellSample._op_getAnnotationLinksCountPerOwner = IcePy.Operation('getAnnotationLinksCountPerOwner', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.sys._t_CountMap, ())
    WellSample._op_linkAnnotation = IcePy.Operation('linkAnnotation', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Annotation),), (), _M_omero.model._t_WellSampleAnnotationLink, ())
    WellSample._op_addWellSampleAnnotationLinkToBoth = IcePy.Operation('addWellSampleAnnotationLinkToBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_WellSampleAnnotationLink), ((), IcePy._t_bool)), (), None, ())
    WellSample._op_findWellSampleAnnotationLink = IcePy.Operation('findWellSampleAnnotationLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Annotation),), (), _M_omero.model._t_WellSampleAnnotationLinksSeq, ())
    WellSample._op_unlinkAnnotation = IcePy.Operation('unlinkAnnotation', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Annotation),), (), None, ())
    WellSample._op_removeWellSampleAnnotationLinkFromBoth = IcePy.Operation('removeWellSampleAnnotationLinkFromBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_WellSampleAnnotationLink), ((), IcePy._t_bool)), (), None, ())
    WellSample._op_linkedAnnotationList = IcePy.Operation('linkedAnnotationList', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_WellSampleLinkedAnnotationSeq, ())

    _M_omero.model.WellSample = WellSample
    del WellSample

    _M_omero.model.WellSamplePrx = WellSamplePrx
    del WellSamplePrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
