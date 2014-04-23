# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `Well.ice'

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

if not _M_omero.model.__dict__.has_key('WellReagentLink'):
    _M_omero.model._t_WellReagentLink = IcePy.declareClass('::omero::model::WellReagentLink')
    _M_omero.model._t_WellReagentLinkPrx = IcePy.declareProxy('::omero::model::WellReagentLink')

if not _M_omero.model.__dict__.has_key('Reagent'):
    _M_omero.model._t_Reagent = IcePy.declareClass('::omero::model::Reagent')
    _M_omero.model._t_ReagentPrx = IcePy.declareProxy('::omero::model::Reagent')

if not _M_omero.model.__dict__.has_key('WellSample'):
    _M_omero.model._t_WellSample = IcePy.declareClass('::omero::model::WellSample')
    _M_omero.model._t_WellSamplePrx = IcePy.declareProxy('::omero::model::WellSample')

if not _M_omero.model.__dict__.has_key('Plate'):
    _M_omero.model._t_Plate = IcePy.declareClass('::omero::model::Plate')
    _M_omero.model._t_PlatePrx = IcePy.declareProxy('::omero::model::Plate')

if not _M_omero.model.__dict__.has_key('WellAnnotationLink'):
    _M_omero.model._t_WellAnnotationLink = IcePy.declareClass('::omero::model::WellAnnotationLink')
    _M_omero.model._t_WellAnnotationLinkPrx = IcePy.declareProxy('::omero::model::WellAnnotationLink')

if not _M_omero.model.__dict__.has_key('Annotation'):
    _M_omero.model._t_Annotation = IcePy.declareClass('::omero::model::Annotation')
    _M_omero.model._t_AnnotationPrx = IcePy.declareProxy('::omero::model::Annotation')

if not _M_omero.model.__dict__.has_key('Details'):
    _M_omero.model._t_Details = IcePy.declareClass('::omero::model::Details')
    _M_omero.model._t_DetailsPrx = IcePy.declareProxy('::omero::model::Details')

if not _M_omero.model.__dict__.has_key('_t_WellReagentLinksSeq'):
    _M_omero.model._t_WellReagentLinksSeq = IcePy.defineSequence('::omero::model::WellReagentLinksSeq', (), _M_omero.model._t_WellReagentLink)

if not _M_omero.model.__dict__.has_key('_t_WellLinkedReagentSeq'):
    _M_omero.model._t_WellLinkedReagentSeq = IcePy.defineSequence('::omero::model::WellLinkedReagentSeq', (), _M_omero.model._t_Reagent)

if not _M_omero.model.__dict__.has_key('_t_WellWellSamplesSeq'):
    _M_omero.model._t_WellWellSamplesSeq = IcePy.defineSequence('::omero::model::WellWellSamplesSeq', (), _M_omero.model._t_WellSample)

if not _M_omero.model.__dict__.has_key('_t_WellAnnotationLinksSeq'):
    _M_omero.model._t_WellAnnotationLinksSeq = IcePy.defineSequence('::omero::model::WellAnnotationLinksSeq', (), _M_omero.model._t_WellAnnotationLink)

if not _M_omero.model.__dict__.has_key('_t_WellLinkedAnnotationSeq'):
    _M_omero.model._t_WellLinkedAnnotationSeq = IcePy.defineSequence('::omero::model::WellLinkedAnnotationSeq', (), _M_omero.model._t_Annotation)

if not _M_omero.model.__dict__.has_key('Well'):
    _M_omero.model.Well = Ice.createTempClass()
    class Well(_M_omero.model.IObject):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _status=None, _column=None, _row=None, _red=None, _green=None, _blue=None, _alpha=None, _reagentLinksSeq=None, _reagentLinksLoaded=False, _reagentLinksCountPerOwner=None, _externalDescription=None, _externalIdentifier=None, _type=None, _wellSamplesSeq=None, _wellSamplesLoaded=False, _plate=None, _annotationLinksSeq=None, _annotationLinksLoaded=False, _annotationLinksCountPerOwner=None):
            if __builtin__.type(self) == _M_omero.model.Well:
                raise RuntimeError('omero.model.Well is an abstract class')
            _M_omero.model.IObject.__init__(self, _id, _details, _loaded)
            self._version = _version
            self._status = _status
            self._column = _column
            self._row = _row
            self._red = _red
            self._green = _green
            self._blue = _blue
            self._alpha = _alpha
            self._reagentLinksSeq = _reagentLinksSeq
            self._reagentLinksLoaded = _reagentLinksLoaded
            self._reagentLinksCountPerOwner = _reagentLinksCountPerOwner
            self._externalDescription = _externalDescription
            self._externalIdentifier = _externalIdentifier
            self._type = _type
            self._wellSamplesSeq = _wellSamplesSeq
            self._wellSamplesLoaded = _wellSamplesLoaded
            self._plate = _plate
            self._annotationLinksSeq = _annotationLinksSeq
            self._annotationLinksLoaded = _annotationLinksLoaded
            self._annotationLinksCountPerOwner = _annotationLinksCountPerOwner

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::IObject', '::omero::model::Well')

        def ice_id(self, current=None):
            return '::omero::model::Well'

        def ice_staticId():
            return '::omero::model::Well'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getVersion(self, current=None):
        # def setVersion(self, theVersion, current=None):
        # def getStatus(self, current=None):
        # def setStatus(self, theStatus, current=None):
        # def getColumn(self, current=None):
        # def setColumn(self, theColumn, current=None):
        # def getRow(self, current=None):
        # def setRow(self, theRow, current=None):
        # def getRed(self, current=None):
        # def setRed(self, theRed, current=None):
        # def getGreen(self, current=None):
        # def setGreen(self, theGreen, current=None):
        # def getBlue(self, current=None):
        # def setBlue(self, theBlue, current=None):
        # def getAlpha(self, current=None):
        # def setAlpha(self, theAlpha, current=None):
        # def unloadReagentLinks(self, current=None):
        # def sizeOfReagentLinks(self, current=None):
        # def copyReagentLinks(self, current=None):
        # def addWellReagentLink(self, target, current=None):
        # def addAllWellReagentLinkSet(self, targets, current=None):
        # def removeWellReagentLink(self, theTarget, current=None):
        # def removeAllWellReagentLinkSet(self, targets, current=None):
        # def clearReagentLinks(self, current=None):
        # def reloadReagentLinks(self, toCopy, current=None):
        # def getReagentLinksCountPerOwner(self, current=None):
        # def linkReagent(self, addition, current=None):
        # def addWellReagentLinkToBoth(self, link, bothSides, current=None):
        # def findWellReagentLink(self, removal, current=None):
        # def unlinkReagent(self, removal, current=None):
        # def removeWellReagentLinkFromBoth(self, link, bothSides, current=None):
        # def linkedReagentList(self, current=None):
        # def getExternalDescription(self, current=None):
        # def setExternalDescription(self, theExternalDescription, current=None):
        # def getExternalIdentifier(self, current=None):
        # def setExternalIdentifier(self, theExternalIdentifier, current=None):
        # def getType(self, current=None):
        # def setType(self, theType, current=None):
        # def unloadWellSamples(self, current=None):
        # def sizeOfWellSamples(self, current=None):
        # def copyWellSamples(self, current=None):
        # def addWellSample(self, target, current=None):
        # def addAllWellSampleSet(self, targets, current=None):
        # def removeWellSample(self, theTarget, current=None):
        # def removeAllWellSampleSet(self, targets, current=None):
        # def clearWellSamples(self, current=None):
        # def reloadWellSamples(self, toCopy, current=None):
        # def getWellSample(self, index, current=None):
        # def setWellSample(self, index, theElement, current=None):
        # def getPrimaryWellSample(self, current=None):
        # def setPrimaryWellSample(self, theElement, current=None):
        # def getPlate(self, current=None):
        # def setPlate(self, thePlate, current=None):
        # def unloadAnnotationLinks(self, current=None):
        # def sizeOfAnnotationLinks(self, current=None):
        # def copyAnnotationLinks(self, current=None):
        # def addWellAnnotationLink(self, target, current=None):
        # def addAllWellAnnotationLinkSet(self, targets, current=None):
        # def removeWellAnnotationLink(self, theTarget, current=None):
        # def removeAllWellAnnotationLinkSet(self, targets, current=None):
        # def clearAnnotationLinks(self, current=None):
        # def reloadAnnotationLinks(self, toCopy, current=None):
        # def getAnnotationLinksCountPerOwner(self, current=None):
        # def linkAnnotation(self, addition, current=None):
        # def addWellAnnotationLinkToBoth(self, link, bothSides, current=None):
        # def findWellAnnotationLink(self, removal, current=None):
        # def unlinkAnnotation(self, removal, current=None):
        # def removeWellAnnotationLinkFromBoth(self, link, bothSides, current=None):
        # def linkedAnnotationList(self, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_Well)

        __repr__ = __str__

    _M_omero.model.WellPrx = Ice.createTempClass()
    class WellPrx(_M_omero.model.IObjectPrx):

        def getVersion(self, _ctx=None):
            return _M_omero.model.Well._op_getVersion.invoke(self, ((), _ctx))

        def setVersion(self, theVersion, _ctx=None):
            return _M_omero.model.Well._op_setVersion.invoke(self, ((theVersion, ), _ctx))

        def getStatus(self, _ctx=None):
            return _M_omero.model.Well._op_getStatus.invoke(self, ((), _ctx))

        def setStatus(self, theStatus, _ctx=None):
            return _M_omero.model.Well._op_setStatus.invoke(self, ((theStatus, ), _ctx))

        def getColumn(self, _ctx=None):
            return _M_omero.model.Well._op_getColumn.invoke(self, ((), _ctx))

        def setColumn(self, theColumn, _ctx=None):
            return _M_omero.model.Well._op_setColumn.invoke(self, ((theColumn, ), _ctx))

        def getRow(self, _ctx=None):
            return _M_omero.model.Well._op_getRow.invoke(self, ((), _ctx))

        def setRow(self, theRow, _ctx=None):
            return _M_omero.model.Well._op_setRow.invoke(self, ((theRow, ), _ctx))

        def getRed(self, _ctx=None):
            return _M_omero.model.Well._op_getRed.invoke(self, ((), _ctx))

        def setRed(self, theRed, _ctx=None):
            return _M_omero.model.Well._op_setRed.invoke(self, ((theRed, ), _ctx))

        def getGreen(self, _ctx=None):
            return _M_omero.model.Well._op_getGreen.invoke(self, ((), _ctx))

        def setGreen(self, theGreen, _ctx=None):
            return _M_omero.model.Well._op_setGreen.invoke(self, ((theGreen, ), _ctx))

        def getBlue(self, _ctx=None):
            return _M_omero.model.Well._op_getBlue.invoke(self, ((), _ctx))

        def setBlue(self, theBlue, _ctx=None):
            return _M_omero.model.Well._op_setBlue.invoke(self, ((theBlue, ), _ctx))

        def getAlpha(self, _ctx=None):
            return _M_omero.model.Well._op_getAlpha.invoke(self, ((), _ctx))

        def setAlpha(self, theAlpha, _ctx=None):
            return _M_omero.model.Well._op_setAlpha.invoke(self, ((theAlpha, ), _ctx))

        def unloadReagentLinks(self, _ctx=None):
            return _M_omero.model.Well._op_unloadReagentLinks.invoke(self, ((), _ctx))

        def sizeOfReagentLinks(self, _ctx=None):
            return _M_omero.model.Well._op_sizeOfReagentLinks.invoke(self, ((), _ctx))

        def copyReagentLinks(self, _ctx=None):
            return _M_omero.model.Well._op_copyReagentLinks.invoke(self, ((), _ctx))

        def addWellReagentLink(self, target, _ctx=None):
            return _M_omero.model.Well._op_addWellReagentLink.invoke(self, ((target, ), _ctx))

        def addAllWellReagentLinkSet(self, targets, _ctx=None):
            return _M_omero.model.Well._op_addAllWellReagentLinkSet.invoke(self, ((targets, ), _ctx))

        def removeWellReagentLink(self, theTarget, _ctx=None):
            return _M_omero.model.Well._op_removeWellReagentLink.invoke(self, ((theTarget, ), _ctx))

        def removeAllWellReagentLinkSet(self, targets, _ctx=None):
            return _M_omero.model.Well._op_removeAllWellReagentLinkSet.invoke(self, ((targets, ), _ctx))

        def clearReagentLinks(self, _ctx=None):
            return _M_omero.model.Well._op_clearReagentLinks.invoke(self, ((), _ctx))

        def reloadReagentLinks(self, toCopy, _ctx=None):
            return _M_omero.model.Well._op_reloadReagentLinks.invoke(self, ((toCopy, ), _ctx))

        def getReagentLinksCountPerOwner(self, _ctx=None):
            return _M_omero.model.Well._op_getReagentLinksCountPerOwner.invoke(self, ((), _ctx))

        def linkReagent(self, addition, _ctx=None):
            return _M_omero.model.Well._op_linkReagent.invoke(self, ((addition, ), _ctx))

        def addWellReagentLinkToBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.Well._op_addWellReagentLinkToBoth.invoke(self, ((link, bothSides), _ctx))

        def findWellReagentLink(self, removal, _ctx=None):
            return _M_omero.model.Well._op_findWellReagentLink.invoke(self, ((removal, ), _ctx))

        def unlinkReagent(self, removal, _ctx=None):
            return _M_omero.model.Well._op_unlinkReagent.invoke(self, ((removal, ), _ctx))

        def removeWellReagentLinkFromBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.Well._op_removeWellReagentLinkFromBoth.invoke(self, ((link, bothSides), _ctx))

        def linkedReagentList(self, _ctx=None):
            return _M_omero.model.Well._op_linkedReagentList.invoke(self, ((), _ctx))

        def getExternalDescription(self, _ctx=None):
            return _M_omero.model.Well._op_getExternalDescription.invoke(self, ((), _ctx))

        def setExternalDescription(self, theExternalDescription, _ctx=None):
            return _M_omero.model.Well._op_setExternalDescription.invoke(self, ((theExternalDescription, ), _ctx))

        def getExternalIdentifier(self, _ctx=None):
            return _M_omero.model.Well._op_getExternalIdentifier.invoke(self, ((), _ctx))

        def setExternalIdentifier(self, theExternalIdentifier, _ctx=None):
            return _M_omero.model.Well._op_setExternalIdentifier.invoke(self, ((theExternalIdentifier, ), _ctx))

        def getType(self, _ctx=None):
            return _M_omero.model.Well._op_getType.invoke(self, ((), _ctx))

        def setType(self, theType, _ctx=None):
            return _M_omero.model.Well._op_setType.invoke(self, ((theType, ), _ctx))

        def unloadWellSamples(self, _ctx=None):
            return _M_omero.model.Well._op_unloadWellSamples.invoke(self, ((), _ctx))

        def sizeOfWellSamples(self, _ctx=None):
            return _M_omero.model.Well._op_sizeOfWellSamples.invoke(self, ((), _ctx))

        def copyWellSamples(self, _ctx=None):
            return _M_omero.model.Well._op_copyWellSamples.invoke(self, ((), _ctx))

        def addWellSample(self, target, _ctx=None):
            return _M_omero.model.Well._op_addWellSample.invoke(self, ((target, ), _ctx))

        def addAllWellSampleSet(self, targets, _ctx=None):
            return _M_omero.model.Well._op_addAllWellSampleSet.invoke(self, ((targets, ), _ctx))

        def removeWellSample(self, theTarget, _ctx=None):
            return _M_omero.model.Well._op_removeWellSample.invoke(self, ((theTarget, ), _ctx))

        def removeAllWellSampleSet(self, targets, _ctx=None):
            return _M_omero.model.Well._op_removeAllWellSampleSet.invoke(self, ((targets, ), _ctx))

        def clearWellSamples(self, _ctx=None):
            return _M_omero.model.Well._op_clearWellSamples.invoke(self, ((), _ctx))

        def reloadWellSamples(self, toCopy, _ctx=None):
            return _M_omero.model.Well._op_reloadWellSamples.invoke(self, ((toCopy, ), _ctx))

        def getWellSample(self, index, _ctx=None):
            return _M_omero.model.Well._op_getWellSample.invoke(self, ((index, ), _ctx))

        def setWellSample(self, index, theElement, _ctx=None):
            return _M_omero.model.Well._op_setWellSample.invoke(self, ((index, theElement), _ctx))

        def getPrimaryWellSample(self, _ctx=None):
            return _M_omero.model.Well._op_getPrimaryWellSample.invoke(self, ((), _ctx))

        def setPrimaryWellSample(self, theElement, _ctx=None):
            return _M_omero.model.Well._op_setPrimaryWellSample.invoke(self, ((theElement, ), _ctx))

        def getPlate(self, _ctx=None):
            return _M_omero.model.Well._op_getPlate.invoke(self, ((), _ctx))

        def setPlate(self, thePlate, _ctx=None):
            return _M_omero.model.Well._op_setPlate.invoke(self, ((thePlate, ), _ctx))

        def unloadAnnotationLinks(self, _ctx=None):
            return _M_omero.model.Well._op_unloadAnnotationLinks.invoke(self, ((), _ctx))

        def sizeOfAnnotationLinks(self, _ctx=None):
            return _M_omero.model.Well._op_sizeOfAnnotationLinks.invoke(self, ((), _ctx))

        def copyAnnotationLinks(self, _ctx=None):
            return _M_omero.model.Well._op_copyAnnotationLinks.invoke(self, ((), _ctx))

        def addWellAnnotationLink(self, target, _ctx=None):
            return _M_omero.model.Well._op_addWellAnnotationLink.invoke(self, ((target, ), _ctx))

        def addAllWellAnnotationLinkSet(self, targets, _ctx=None):
            return _M_omero.model.Well._op_addAllWellAnnotationLinkSet.invoke(self, ((targets, ), _ctx))

        def removeWellAnnotationLink(self, theTarget, _ctx=None):
            return _M_omero.model.Well._op_removeWellAnnotationLink.invoke(self, ((theTarget, ), _ctx))

        def removeAllWellAnnotationLinkSet(self, targets, _ctx=None):
            return _M_omero.model.Well._op_removeAllWellAnnotationLinkSet.invoke(self, ((targets, ), _ctx))

        def clearAnnotationLinks(self, _ctx=None):
            return _M_omero.model.Well._op_clearAnnotationLinks.invoke(self, ((), _ctx))

        def reloadAnnotationLinks(self, toCopy, _ctx=None):
            return _M_omero.model.Well._op_reloadAnnotationLinks.invoke(self, ((toCopy, ), _ctx))

        def getAnnotationLinksCountPerOwner(self, _ctx=None):
            return _M_omero.model.Well._op_getAnnotationLinksCountPerOwner.invoke(self, ((), _ctx))

        def linkAnnotation(self, addition, _ctx=None):
            return _M_omero.model.Well._op_linkAnnotation.invoke(self, ((addition, ), _ctx))

        def addWellAnnotationLinkToBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.Well._op_addWellAnnotationLinkToBoth.invoke(self, ((link, bothSides), _ctx))

        def findWellAnnotationLink(self, removal, _ctx=None):
            return _M_omero.model.Well._op_findWellAnnotationLink.invoke(self, ((removal, ), _ctx))

        def unlinkAnnotation(self, removal, _ctx=None):
            return _M_omero.model.Well._op_unlinkAnnotation.invoke(self, ((removal, ), _ctx))

        def removeWellAnnotationLinkFromBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.Well._op_removeWellAnnotationLinkFromBoth.invoke(self, ((link, bothSides), _ctx))

        def linkedAnnotationList(self, _ctx=None):
            return _M_omero.model.Well._op_linkedAnnotationList.invoke(self, ((), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.WellPrx.ice_checkedCast(proxy, '::omero::model::Well', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.WellPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_WellPrx = IcePy.defineProxy('::omero::model::Well', WellPrx)

    _M_omero.model._t_Well = IcePy.declareClass('::omero::model::Well')

    _M_omero.model._t_Well = IcePy.defineClass('::omero::model::Well', Well, (), True, _M_omero.model._t_IObject, (), (
        ('_version', (), _M_omero._t_RInt),
        ('_status', (), _M_omero._t_RString),
        ('_column', (), _M_omero._t_RInt),
        ('_row', (), _M_omero._t_RInt),
        ('_red', (), _M_omero._t_RInt),
        ('_green', (), _M_omero._t_RInt),
        ('_blue', (), _M_omero._t_RInt),
        ('_alpha', (), _M_omero._t_RInt),
        ('_reagentLinksSeq', (), _M_omero.model._t_WellReagentLinksSeq),
        ('_reagentLinksLoaded', (), IcePy._t_bool),
        ('_reagentLinksCountPerOwner', (), _M_omero.sys._t_CountMap),
        ('_externalDescription', (), _M_omero._t_RString),
        ('_externalIdentifier', (), _M_omero._t_RString),
        ('_type', (), _M_omero._t_RString),
        ('_wellSamplesSeq', (), _M_omero.model._t_WellWellSamplesSeq),
        ('_wellSamplesLoaded', (), IcePy._t_bool),
        ('_plate', (), _M_omero.model._t_Plate),
        ('_annotationLinksSeq', (), _M_omero.model._t_WellAnnotationLinksSeq),
        ('_annotationLinksLoaded', (), IcePy._t_bool),
        ('_annotationLinksCountPerOwner', (), _M_omero.sys._t_CountMap)
    ))
    Well.ice_type = _M_omero.model._t_Well

    Well._op_getVersion = IcePy.Operation('getVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    Well._op_setVersion = IcePy.Operation('setVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    Well._op_getStatus = IcePy.Operation('getStatus', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Well._op_setStatus = IcePy.Operation('setStatus', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Well._op_getColumn = IcePy.Operation('getColumn', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    Well._op_setColumn = IcePy.Operation('setColumn', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    Well._op_getRow = IcePy.Operation('getRow', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    Well._op_setRow = IcePy.Operation('setRow', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    Well._op_getRed = IcePy.Operation('getRed', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    Well._op_setRed = IcePy.Operation('setRed', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    Well._op_getGreen = IcePy.Operation('getGreen', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    Well._op_setGreen = IcePy.Operation('setGreen', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    Well._op_getBlue = IcePy.Operation('getBlue', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    Well._op_setBlue = IcePy.Operation('setBlue', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    Well._op_getAlpha = IcePy.Operation('getAlpha', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    Well._op_setAlpha = IcePy.Operation('setAlpha', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    Well._op_unloadReagentLinks = IcePy.Operation('unloadReagentLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Well._op_sizeOfReagentLinks = IcePy.Operation('sizeOfReagentLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())
    Well._op_copyReagentLinks = IcePy.Operation('copyReagentLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_WellReagentLinksSeq, ())
    Well._op_addWellReagentLink = IcePy.Operation('addWellReagentLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_WellReagentLink),), (), None, ())
    Well._op_addAllWellReagentLinkSet = IcePy.Operation('addAllWellReagentLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_WellReagentLinksSeq),), (), None, ())
    Well._op_removeWellReagentLink = IcePy.Operation('removeWellReagentLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_WellReagentLink),), (), None, ())
    Well._op_removeAllWellReagentLinkSet = IcePy.Operation('removeAllWellReagentLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_WellReagentLinksSeq),), (), None, ())
    Well._op_clearReagentLinks = IcePy.Operation('clearReagentLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Well._op_reloadReagentLinks = IcePy.Operation('reloadReagentLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Well),), (), None, ())
    Well._op_getReagentLinksCountPerOwner = IcePy.Operation('getReagentLinksCountPerOwner', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.sys._t_CountMap, ())
    Well._op_linkReagent = IcePy.Operation('linkReagent', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Reagent),), (), _M_omero.model._t_WellReagentLink, ())
    Well._op_addWellReagentLinkToBoth = IcePy.Operation('addWellReagentLinkToBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_WellReagentLink), ((), IcePy._t_bool)), (), None, ())
    Well._op_findWellReagentLink = IcePy.Operation('findWellReagentLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Reagent),), (), _M_omero.model._t_WellReagentLinksSeq, ())
    Well._op_unlinkReagent = IcePy.Operation('unlinkReagent', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Reagent),), (), None, ())
    Well._op_removeWellReagentLinkFromBoth = IcePy.Operation('removeWellReagentLinkFromBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_WellReagentLink), ((), IcePy._t_bool)), (), None, ())
    Well._op_linkedReagentList = IcePy.Operation('linkedReagentList', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_WellLinkedReagentSeq, ())
    Well._op_getExternalDescription = IcePy.Operation('getExternalDescription', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Well._op_setExternalDescription = IcePy.Operation('setExternalDescription', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Well._op_getExternalIdentifier = IcePy.Operation('getExternalIdentifier', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Well._op_setExternalIdentifier = IcePy.Operation('setExternalIdentifier', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Well._op_getType = IcePy.Operation('getType', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Well._op_setType = IcePy.Operation('setType', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Well._op_unloadWellSamples = IcePy.Operation('unloadWellSamples', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Well._op_sizeOfWellSamples = IcePy.Operation('sizeOfWellSamples', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())
    Well._op_copyWellSamples = IcePy.Operation('copyWellSamples', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_WellWellSamplesSeq, ())
    Well._op_addWellSample = IcePy.Operation('addWellSample', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_WellSample),), (), None, ())
    Well._op_addAllWellSampleSet = IcePy.Operation('addAllWellSampleSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_WellWellSamplesSeq),), (), None, ())
    Well._op_removeWellSample = IcePy.Operation('removeWellSample', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_WellSample),), (), None, ())
    Well._op_removeAllWellSampleSet = IcePy.Operation('removeAllWellSampleSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_WellWellSamplesSeq),), (), None, ())
    Well._op_clearWellSamples = IcePy.Operation('clearWellSamples', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Well._op_reloadWellSamples = IcePy.Operation('reloadWellSamples', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Well),), (), None, ())
    Well._op_getWellSample = IcePy.Operation('getWellSample', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_int),), (), _M_omero.model._t_WellSample, ())
    Well._op_setWellSample = IcePy.Operation('setWellSample', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_int), ((), _M_omero.model._t_WellSample)), (), _M_omero.model._t_WellSample, ())
    Well._op_getPrimaryWellSample = IcePy.Operation('getPrimaryWellSample', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_WellSample, ())
    Well._op_setPrimaryWellSample = IcePy.Operation('setPrimaryWellSample', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_WellSample),), (), _M_omero.model._t_WellSample, ())
    Well._op_getPlate = IcePy.Operation('getPlate', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_Plate, ())
    Well._op_setPlate = IcePy.Operation('setPlate', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Plate),), (), None, ())
    Well._op_unloadAnnotationLinks = IcePy.Operation('unloadAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Well._op_sizeOfAnnotationLinks = IcePy.Operation('sizeOfAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())
    Well._op_copyAnnotationLinks = IcePy.Operation('copyAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_WellAnnotationLinksSeq, ())
    Well._op_addWellAnnotationLink = IcePy.Operation('addWellAnnotationLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_WellAnnotationLink),), (), None, ())
    Well._op_addAllWellAnnotationLinkSet = IcePy.Operation('addAllWellAnnotationLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_WellAnnotationLinksSeq),), (), None, ())
    Well._op_removeWellAnnotationLink = IcePy.Operation('removeWellAnnotationLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_WellAnnotationLink),), (), None, ())
    Well._op_removeAllWellAnnotationLinkSet = IcePy.Operation('removeAllWellAnnotationLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_WellAnnotationLinksSeq),), (), None, ())
    Well._op_clearAnnotationLinks = IcePy.Operation('clearAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Well._op_reloadAnnotationLinks = IcePy.Operation('reloadAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Well),), (), None, ())
    Well._op_getAnnotationLinksCountPerOwner = IcePy.Operation('getAnnotationLinksCountPerOwner', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.sys._t_CountMap, ())
    Well._op_linkAnnotation = IcePy.Operation('linkAnnotation', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Annotation),), (), _M_omero.model._t_WellAnnotationLink, ())
    Well._op_addWellAnnotationLinkToBoth = IcePy.Operation('addWellAnnotationLinkToBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_WellAnnotationLink), ((), IcePy._t_bool)), (), None, ())
    Well._op_findWellAnnotationLink = IcePy.Operation('findWellAnnotationLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Annotation),), (), _M_omero.model._t_WellAnnotationLinksSeq, ())
    Well._op_unlinkAnnotation = IcePy.Operation('unlinkAnnotation', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Annotation),), (), None, ())
    Well._op_removeWellAnnotationLinkFromBoth = IcePy.Operation('removeWellAnnotationLinkFromBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_WellAnnotationLink), ((), IcePy._t_bool)), (), None, ())
    Well._op_linkedAnnotationList = IcePy.Operation('linkedAnnotationList', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_WellLinkedAnnotationSeq, ())

    _M_omero.model.Well = Well
    del Well

    _M_omero.model.WellPrx = WellPrx
    del WellPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
