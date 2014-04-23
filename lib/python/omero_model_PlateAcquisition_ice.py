# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `PlateAcquisition.ice'

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

if not _M_omero.model.__dict__.has_key('Plate'):
    _M_omero.model._t_Plate = IcePy.declareClass('::omero::model::Plate')
    _M_omero.model._t_PlatePrx = IcePy.declareProxy('::omero::model::Plate')

if not _M_omero.model.__dict__.has_key('WellSample'):
    _M_omero.model._t_WellSample = IcePy.declareClass('::omero::model::WellSample')
    _M_omero.model._t_WellSamplePrx = IcePy.declareProxy('::omero::model::WellSample')

if not _M_omero.model.__dict__.has_key('PlateAcquisitionAnnotationLink'):
    _M_omero.model._t_PlateAcquisitionAnnotationLink = IcePy.declareClass('::omero::model::PlateAcquisitionAnnotationLink')
    _M_omero.model._t_PlateAcquisitionAnnotationLinkPrx = IcePy.declareProxy('::omero::model::PlateAcquisitionAnnotationLink')

if not _M_omero.model.__dict__.has_key('Annotation'):
    _M_omero.model._t_Annotation = IcePy.declareClass('::omero::model::Annotation')
    _M_omero.model._t_AnnotationPrx = IcePy.declareProxy('::omero::model::Annotation')

if not _M_omero.model.__dict__.has_key('Details'):
    _M_omero.model._t_Details = IcePy.declareClass('::omero::model::Details')
    _M_omero.model._t_DetailsPrx = IcePy.declareProxy('::omero::model::Details')

if not _M_omero.model.__dict__.has_key('_t_PlateAcquisitionWellSampleSeq'):
    _M_omero.model._t_PlateAcquisitionWellSampleSeq = IcePy.defineSequence('::omero::model::PlateAcquisitionWellSampleSeq', (), _M_omero.model._t_WellSample)

if not _M_omero.model.__dict__.has_key('_t_PlateAcquisitionAnnotationLinksSeq'):
    _M_omero.model._t_PlateAcquisitionAnnotationLinksSeq = IcePy.defineSequence('::omero::model::PlateAcquisitionAnnotationLinksSeq', (), _M_omero.model._t_PlateAcquisitionAnnotationLink)

if not _M_omero.model.__dict__.has_key('_t_PlateAcquisitionLinkedAnnotationSeq'):
    _M_omero.model._t_PlateAcquisitionLinkedAnnotationSeq = IcePy.defineSequence('::omero::model::PlateAcquisitionLinkedAnnotationSeq', (), _M_omero.model._t_Annotation)

if not _M_omero.model.__dict__.has_key('PlateAcquisition'):
    _M_omero.model.PlateAcquisition = Ice.createTempClass()
    class PlateAcquisition(_M_omero.model.IObject):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _name=None, _startTime=None, _endTime=None, _maximumFieldCount=None, _plate=None, _wellSampleSeq=None, _wellSampleLoaded=False, _annotationLinksSeq=None, _annotationLinksLoaded=False, _annotationLinksCountPerOwner=None, _description=None):
            if __builtin__.type(self) == _M_omero.model.PlateAcquisition:
                raise RuntimeError('omero.model.PlateAcquisition is an abstract class')
            _M_omero.model.IObject.__init__(self, _id, _details, _loaded)
            self._version = _version
            self._name = _name
            self._startTime = _startTime
            self._endTime = _endTime
            self._maximumFieldCount = _maximumFieldCount
            self._plate = _plate
            self._wellSampleSeq = _wellSampleSeq
            self._wellSampleLoaded = _wellSampleLoaded
            self._annotationLinksSeq = _annotationLinksSeq
            self._annotationLinksLoaded = _annotationLinksLoaded
            self._annotationLinksCountPerOwner = _annotationLinksCountPerOwner
            self._description = _description

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::IObject', '::omero::model::PlateAcquisition')

        def ice_id(self, current=None):
            return '::omero::model::PlateAcquisition'

        def ice_staticId():
            return '::omero::model::PlateAcquisition'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getVersion(self, current=None):
        # def setVersion(self, theVersion, current=None):
        # def getName(self, current=None):
        # def setName(self, theName, current=None):
        # def getStartTime(self, current=None):
        # def setStartTime(self, theStartTime, current=None):
        # def getEndTime(self, current=None):
        # def setEndTime(self, theEndTime, current=None):
        # def getMaximumFieldCount(self, current=None):
        # def setMaximumFieldCount(self, theMaximumFieldCount, current=None):
        # def getPlate(self, current=None):
        # def setPlate(self, thePlate, current=None):
        # def unloadWellSample(self, current=None):
        # def sizeOfWellSample(self, current=None):
        # def copyWellSample(self, current=None):
        # def addWellSample(self, target, current=None):
        # def addAllWellSampleSet(self, targets, current=None):
        # def removeWellSample(self, theTarget, current=None):
        # def removeAllWellSampleSet(self, targets, current=None):
        # def clearWellSample(self, current=None):
        # def reloadWellSample(self, toCopy, current=None):
        # def unloadAnnotationLinks(self, current=None):
        # def sizeOfAnnotationLinks(self, current=None):
        # def copyAnnotationLinks(self, current=None):
        # def addPlateAcquisitionAnnotationLink(self, target, current=None):
        # def addAllPlateAcquisitionAnnotationLinkSet(self, targets, current=None):
        # def removePlateAcquisitionAnnotationLink(self, theTarget, current=None):
        # def removeAllPlateAcquisitionAnnotationLinkSet(self, targets, current=None):
        # def clearAnnotationLinks(self, current=None):
        # def reloadAnnotationLinks(self, toCopy, current=None):
        # def getAnnotationLinksCountPerOwner(self, current=None):
        # def linkAnnotation(self, addition, current=None):
        # def addPlateAcquisitionAnnotationLinkToBoth(self, link, bothSides, current=None):
        # def findPlateAcquisitionAnnotationLink(self, removal, current=None):
        # def unlinkAnnotation(self, removal, current=None):
        # def removePlateAcquisitionAnnotationLinkFromBoth(self, link, bothSides, current=None):
        # def linkedAnnotationList(self, current=None):
        # def getDescription(self, current=None):
        # def setDescription(self, theDescription, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_PlateAcquisition)

        __repr__ = __str__

    _M_omero.model.PlateAcquisitionPrx = Ice.createTempClass()
    class PlateAcquisitionPrx(_M_omero.model.IObjectPrx):

        def getVersion(self, _ctx=None):
            return _M_omero.model.PlateAcquisition._op_getVersion.invoke(self, ((), _ctx))

        def setVersion(self, theVersion, _ctx=None):
            return _M_omero.model.PlateAcquisition._op_setVersion.invoke(self, ((theVersion, ), _ctx))

        def getName(self, _ctx=None):
            return _M_omero.model.PlateAcquisition._op_getName.invoke(self, ((), _ctx))

        def setName(self, theName, _ctx=None):
            return _M_omero.model.PlateAcquisition._op_setName.invoke(self, ((theName, ), _ctx))

        def getStartTime(self, _ctx=None):
            return _M_omero.model.PlateAcquisition._op_getStartTime.invoke(self, ((), _ctx))

        def setStartTime(self, theStartTime, _ctx=None):
            return _M_omero.model.PlateAcquisition._op_setStartTime.invoke(self, ((theStartTime, ), _ctx))

        def getEndTime(self, _ctx=None):
            return _M_omero.model.PlateAcquisition._op_getEndTime.invoke(self, ((), _ctx))

        def setEndTime(self, theEndTime, _ctx=None):
            return _M_omero.model.PlateAcquisition._op_setEndTime.invoke(self, ((theEndTime, ), _ctx))

        def getMaximumFieldCount(self, _ctx=None):
            return _M_omero.model.PlateAcquisition._op_getMaximumFieldCount.invoke(self, ((), _ctx))

        def setMaximumFieldCount(self, theMaximumFieldCount, _ctx=None):
            return _M_omero.model.PlateAcquisition._op_setMaximumFieldCount.invoke(self, ((theMaximumFieldCount, ), _ctx))

        def getPlate(self, _ctx=None):
            return _M_omero.model.PlateAcquisition._op_getPlate.invoke(self, ((), _ctx))

        def setPlate(self, thePlate, _ctx=None):
            return _M_omero.model.PlateAcquisition._op_setPlate.invoke(self, ((thePlate, ), _ctx))

        def unloadWellSample(self, _ctx=None):
            return _M_omero.model.PlateAcquisition._op_unloadWellSample.invoke(self, ((), _ctx))

        def sizeOfWellSample(self, _ctx=None):
            return _M_omero.model.PlateAcquisition._op_sizeOfWellSample.invoke(self, ((), _ctx))

        def copyWellSample(self, _ctx=None):
            return _M_omero.model.PlateAcquisition._op_copyWellSample.invoke(self, ((), _ctx))

        def addWellSample(self, target, _ctx=None):
            return _M_omero.model.PlateAcquisition._op_addWellSample.invoke(self, ((target, ), _ctx))

        def addAllWellSampleSet(self, targets, _ctx=None):
            return _M_omero.model.PlateAcquisition._op_addAllWellSampleSet.invoke(self, ((targets, ), _ctx))

        def removeWellSample(self, theTarget, _ctx=None):
            return _M_omero.model.PlateAcquisition._op_removeWellSample.invoke(self, ((theTarget, ), _ctx))

        def removeAllWellSampleSet(self, targets, _ctx=None):
            return _M_omero.model.PlateAcquisition._op_removeAllWellSampleSet.invoke(self, ((targets, ), _ctx))

        def clearWellSample(self, _ctx=None):
            return _M_omero.model.PlateAcquisition._op_clearWellSample.invoke(self, ((), _ctx))

        def reloadWellSample(self, toCopy, _ctx=None):
            return _M_omero.model.PlateAcquisition._op_reloadWellSample.invoke(self, ((toCopy, ), _ctx))

        def unloadAnnotationLinks(self, _ctx=None):
            return _M_omero.model.PlateAcquisition._op_unloadAnnotationLinks.invoke(self, ((), _ctx))

        def sizeOfAnnotationLinks(self, _ctx=None):
            return _M_omero.model.PlateAcquisition._op_sizeOfAnnotationLinks.invoke(self, ((), _ctx))

        def copyAnnotationLinks(self, _ctx=None):
            return _M_omero.model.PlateAcquisition._op_copyAnnotationLinks.invoke(self, ((), _ctx))

        def addPlateAcquisitionAnnotationLink(self, target, _ctx=None):
            return _M_omero.model.PlateAcquisition._op_addPlateAcquisitionAnnotationLink.invoke(self, ((target, ), _ctx))

        def addAllPlateAcquisitionAnnotationLinkSet(self, targets, _ctx=None):
            return _M_omero.model.PlateAcquisition._op_addAllPlateAcquisitionAnnotationLinkSet.invoke(self, ((targets, ), _ctx))

        def removePlateAcquisitionAnnotationLink(self, theTarget, _ctx=None):
            return _M_omero.model.PlateAcquisition._op_removePlateAcquisitionAnnotationLink.invoke(self, ((theTarget, ), _ctx))

        def removeAllPlateAcquisitionAnnotationLinkSet(self, targets, _ctx=None):
            return _M_omero.model.PlateAcquisition._op_removeAllPlateAcquisitionAnnotationLinkSet.invoke(self, ((targets, ), _ctx))

        def clearAnnotationLinks(self, _ctx=None):
            return _M_omero.model.PlateAcquisition._op_clearAnnotationLinks.invoke(self, ((), _ctx))

        def reloadAnnotationLinks(self, toCopy, _ctx=None):
            return _M_omero.model.PlateAcquisition._op_reloadAnnotationLinks.invoke(self, ((toCopy, ), _ctx))

        def getAnnotationLinksCountPerOwner(self, _ctx=None):
            return _M_omero.model.PlateAcquisition._op_getAnnotationLinksCountPerOwner.invoke(self, ((), _ctx))

        def linkAnnotation(self, addition, _ctx=None):
            return _M_omero.model.PlateAcquisition._op_linkAnnotation.invoke(self, ((addition, ), _ctx))

        def addPlateAcquisitionAnnotationLinkToBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.PlateAcquisition._op_addPlateAcquisitionAnnotationLinkToBoth.invoke(self, ((link, bothSides), _ctx))

        def findPlateAcquisitionAnnotationLink(self, removal, _ctx=None):
            return _M_omero.model.PlateAcquisition._op_findPlateAcquisitionAnnotationLink.invoke(self, ((removal, ), _ctx))

        def unlinkAnnotation(self, removal, _ctx=None):
            return _M_omero.model.PlateAcquisition._op_unlinkAnnotation.invoke(self, ((removal, ), _ctx))

        def removePlateAcquisitionAnnotationLinkFromBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.PlateAcquisition._op_removePlateAcquisitionAnnotationLinkFromBoth.invoke(self, ((link, bothSides), _ctx))

        def linkedAnnotationList(self, _ctx=None):
            return _M_omero.model.PlateAcquisition._op_linkedAnnotationList.invoke(self, ((), _ctx))

        def getDescription(self, _ctx=None):
            return _M_omero.model.PlateAcquisition._op_getDescription.invoke(self, ((), _ctx))

        def setDescription(self, theDescription, _ctx=None):
            return _M_omero.model.PlateAcquisition._op_setDescription.invoke(self, ((theDescription, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.PlateAcquisitionPrx.ice_checkedCast(proxy, '::omero::model::PlateAcquisition', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.PlateAcquisitionPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_PlateAcquisitionPrx = IcePy.defineProxy('::omero::model::PlateAcquisition', PlateAcquisitionPrx)

    _M_omero.model._t_PlateAcquisition = IcePy.declareClass('::omero::model::PlateAcquisition')

    _M_omero.model._t_PlateAcquisition = IcePy.defineClass('::omero::model::PlateAcquisition', PlateAcquisition, (), True, _M_omero.model._t_IObject, (), (
        ('_version', (), _M_omero._t_RInt),
        ('_name', (), _M_omero._t_RString),
        ('_startTime', (), _M_omero._t_RTime),
        ('_endTime', (), _M_omero._t_RTime),
        ('_maximumFieldCount', (), _M_omero._t_RInt),
        ('_plate', (), _M_omero.model._t_Plate),
        ('_wellSampleSeq', (), _M_omero.model._t_PlateAcquisitionWellSampleSeq),
        ('_wellSampleLoaded', (), IcePy._t_bool),
        ('_annotationLinksSeq', (), _M_omero.model._t_PlateAcquisitionAnnotationLinksSeq),
        ('_annotationLinksLoaded', (), IcePy._t_bool),
        ('_annotationLinksCountPerOwner', (), _M_omero.sys._t_CountMap),
        ('_description', (), _M_omero._t_RString)
    ))
    PlateAcquisition.ice_type = _M_omero.model._t_PlateAcquisition

    PlateAcquisition._op_getVersion = IcePy.Operation('getVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    PlateAcquisition._op_setVersion = IcePy.Operation('setVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    PlateAcquisition._op_getName = IcePy.Operation('getName', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    PlateAcquisition._op_setName = IcePy.Operation('setName', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    PlateAcquisition._op_getStartTime = IcePy.Operation('getStartTime', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RTime, ())
    PlateAcquisition._op_setStartTime = IcePy.Operation('setStartTime', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RTime),), (), None, ())
    PlateAcquisition._op_getEndTime = IcePy.Operation('getEndTime', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RTime, ())
    PlateAcquisition._op_setEndTime = IcePy.Operation('setEndTime', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RTime),), (), None, ())
    PlateAcquisition._op_getMaximumFieldCount = IcePy.Operation('getMaximumFieldCount', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    PlateAcquisition._op_setMaximumFieldCount = IcePy.Operation('setMaximumFieldCount', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    PlateAcquisition._op_getPlate = IcePy.Operation('getPlate', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_Plate, ())
    PlateAcquisition._op_setPlate = IcePy.Operation('setPlate', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Plate),), (), None, ())
    PlateAcquisition._op_unloadWellSample = IcePy.Operation('unloadWellSample', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    PlateAcquisition._op_sizeOfWellSample = IcePy.Operation('sizeOfWellSample', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())
    PlateAcquisition._op_copyWellSample = IcePy.Operation('copyWellSample', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_PlateAcquisitionWellSampleSeq, ())
    PlateAcquisition._op_addWellSample = IcePy.Operation('addWellSample', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_WellSample),), (), None, ())
    PlateAcquisition._op_addAllWellSampleSet = IcePy.Operation('addAllWellSampleSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_PlateAcquisitionWellSampleSeq),), (), None, ())
    PlateAcquisition._op_removeWellSample = IcePy.Operation('removeWellSample', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_WellSample),), (), None, ())
    PlateAcquisition._op_removeAllWellSampleSet = IcePy.Operation('removeAllWellSampleSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_PlateAcquisitionWellSampleSeq),), (), None, ())
    PlateAcquisition._op_clearWellSample = IcePy.Operation('clearWellSample', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    PlateAcquisition._op_reloadWellSample = IcePy.Operation('reloadWellSample', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_PlateAcquisition),), (), None, ())
    PlateAcquisition._op_unloadAnnotationLinks = IcePy.Operation('unloadAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    PlateAcquisition._op_sizeOfAnnotationLinks = IcePy.Operation('sizeOfAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())
    PlateAcquisition._op_copyAnnotationLinks = IcePy.Operation('copyAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_PlateAcquisitionAnnotationLinksSeq, ())
    PlateAcquisition._op_addPlateAcquisitionAnnotationLink = IcePy.Operation('addPlateAcquisitionAnnotationLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_PlateAcquisitionAnnotationLink),), (), None, ())
    PlateAcquisition._op_addAllPlateAcquisitionAnnotationLinkSet = IcePy.Operation('addAllPlateAcquisitionAnnotationLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_PlateAcquisitionAnnotationLinksSeq),), (), None, ())
    PlateAcquisition._op_removePlateAcquisitionAnnotationLink = IcePy.Operation('removePlateAcquisitionAnnotationLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_PlateAcquisitionAnnotationLink),), (), None, ())
    PlateAcquisition._op_removeAllPlateAcquisitionAnnotationLinkSet = IcePy.Operation('removeAllPlateAcquisitionAnnotationLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_PlateAcquisitionAnnotationLinksSeq),), (), None, ())
    PlateAcquisition._op_clearAnnotationLinks = IcePy.Operation('clearAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    PlateAcquisition._op_reloadAnnotationLinks = IcePy.Operation('reloadAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_PlateAcquisition),), (), None, ())
    PlateAcquisition._op_getAnnotationLinksCountPerOwner = IcePy.Operation('getAnnotationLinksCountPerOwner', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.sys._t_CountMap, ())
    PlateAcquisition._op_linkAnnotation = IcePy.Operation('linkAnnotation', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Annotation),), (), _M_omero.model._t_PlateAcquisitionAnnotationLink, ())
    PlateAcquisition._op_addPlateAcquisitionAnnotationLinkToBoth = IcePy.Operation('addPlateAcquisitionAnnotationLinkToBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_PlateAcquisitionAnnotationLink), ((), IcePy._t_bool)), (), None, ())
    PlateAcquisition._op_findPlateAcquisitionAnnotationLink = IcePy.Operation('findPlateAcquisitionAnnotationLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Annotation),), (), _M_omero.model._t_PlateAcquisitionAnnotationLinksSeq, ())
    PlateAcquisition._op_unlinkAnnotation = IcePy.Operation('unlinkAnnotation', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Annotation),), (), None, ())
    PlateAcquisition._op_removePlateAcquisitionAnnotationLinkFromBoth = IcePy.Operation('removePlateAcquisitionAnnotationLinkFromBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_PlateAcquisitionAnnotationLink), ((), IcePy._t_bool)), (), None, ())
    PlateAcquisition._op_linkedAnnotationList = IcePy.Operation('linkedAnnotationList', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_PlateAcquisitionLinkedAnnotationSeq, ())
    PlateAcquisition._op_getDescription = IcePy.Operation('getDescription', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    PlateAcquisition._op_setDescription = IcePy.Operation('setDescription', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())

    _M_omero.model.PlateAcquisition = PlateAcquisition
    del PlateAcquisition

    _M_omero.model.PlateAcquisitionPrx = PlateAcquisitionPrx
    del PlateAcquisitionPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
