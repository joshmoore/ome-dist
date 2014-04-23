# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `Plate.ice'

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

if not _M_omero.model.__dict__.has_key('ScreenPlateLink'):
    _M_omero.model._t_ScreenPlateLink = IcePy.declareClass('::omero::model::ScreenPlateLink')
    _M_omero.model._t_ScreenPlateLinkPrx = IcePy.declareProxy('::omero::model::ScreenPlateLink')

if not _M_omero.model.__dict__.has_key('Screen'):
    _M_omero.model._t_Screen = IcePy.declareClass('::omero::model::Screen')
    _M_omero.model._t_ScreenPrx = IcePy.declareProxy('::omero::model::Screen')

if not _M_omero.model.__dict__.has_key('Well'):
    _M_omero.model._t_Well = IcePy.declareClass('::omero::model::Well')
    _M_omero.model._t_WellPrx = IcePy.declareProxy('::omero::model::Well')

if not _M_omero.model.__dict__.has_key('PlateAcquisition'):
    _M_omero.model._t_PlateAcquisition = IcePy.declareClass('::omero::model::PlateAcquisition')
    _M_omero.model._t_PlateAcquisitionPrx = IcePy.declareProxy('::omero::model::PlateAcquisition')

if not _M_omero.model.__dict__.has_key('PlateAnnotationLink'):
    _M_omero.model._t_PlateAnnotationLink = IcePy.declareClass('::omero::model::PlateAnnotationLink')
    _M_omero.model._t_PlateAnnotationLinkPrx = IcePy.declareProxy('::omero::model::PlateAnnotationLink')

if not _M_omero.model.__dict__.has_key('Annotation'):
    _M_omero.model._t_Annotation = IcePy.declareClass('::omero::model::Annotation')
    _M_omero.model._t_AnnotationPrx = IcePy.declareProxy('::omero::model::Annotation')

if not _M_omero.model.__dict__.has_key('Details'):
    _M_omero.model._t_Details = IcePy.declareClass('::omero::model::Details')
    _M_omero.model._t_DetailsPrx = IcePy.declareProxy('::omero::model::Details')

if not _M_omero.model.__dict__.has_key('_t_PlateScreenLinksSeq'):
    _M_omero.model._t_PlateScreenLinksSeq = IcePy.defineSequence('::omero::model::PlateScreenLinksSeq', (), _M_omero.model._t_ScreenPlateLink)

if not _M_omero.model.__dict__.has_key('_t_PlateLinkedScreenSeq'):
    _M_omero.model._t_PlateLinkedScreenSeq = IcePy.defineSequence('::omero::model::PlateLinkedScreenSeq', (), _M_omero.model._t_Screen)

if not _M_omero.model.__dict__.has_key('_t_PlateWellsSeq'):
    _M_omero.model._t_PlateWellsSeq = IcePy.defineSequence('::omero::model::PlateWellsSeq', (), _M_omero.model._t_Well)

if not _M_omero.model.__dict__.has_key('_t_PlatePlateAcquisitionsSeq'):
    _M_omero.model._t_PlatePlateAcquisitionsSeq = IcePy.defineSequence('::omero::model::PlatePlateAcquisitionsSeq', (), _M_omero.model._t_PlateAcquisition)

if not _M_omero.model.__dict__.has_key('_t_PlateAnnotationLinksSeq'):
    _M_omero.model._t_PlateAnnotationLinksSeq = IcePy.defineSequence('::omero::model::PlateAnnotationLinksSeq', (), _M_omero.model._t_PlateAnnotationLink)

if not _M_omero.model.__dict__.has_key('_t_PlateLinkedAnnotationSeq'):
    _M_omero.model._t_PlateLinkedAnnotationSeq = IcePy.defineSequence('::omero::model::PlateLinkedAnnotationSeq', (), _M_omero.model._t_Annotation)

if not _M_omero.model.__dict__.has_key('Plate'):
    _M_omero.model.Plate = Ice.createTempClass()
    class Plate(_M_omero.model.IObject):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _defaultSample=None, _columnNamingConvention=None, _rowNamingConvention=None, _wellOriginX=None, _wellOriginY=None, _rows=None, _columns=None, _status=None, _externalIdentifier=None, _screenLinksSeq=None, _screenLinksLoaded=False, _screenLinksCountPerOwner=None, _wellsSeq=None, _wellsLoaded=False, _plateAcquisitionsSeq=None, _plateAcquisitionsLoaded=False, _annotationLinksSeq=None, _annotationLinksLoaded=False, _annotationLinksCountPerOwner=None, _name=None, _description=None):
            if __builtin__.type(self) == _M_omero.model.Plate:
                raise RuntimeError('omero.model.Plate is an abstract class')
            _M_omero.model.IObject.__init__(self, _id, _details, _loaded)
            self._version = _version
            self._defaultSample = _defaultSample
            self._columnNamingConvention = _columnNamingConvention
            self._rowNamingConvention = _rowNamingConvention
            self._wellOriginX = _wellOriginX
            self._wellOriginY = _wellOriginY
            self._rows = _rows
            self._columns = _columns
            self._status = _status
            self._externalIdentifier = _externalIdentifier
            self._screenLinksSeq = _screenLinksSeq
            self._screenLinksLoaded = _screenLinksLoaded
            self._screenLinksCountPerOwner = _screenLinksCountPerOwner
            self._wellsSeq = _wellsSeq
            self._wellsLoaded = _wellsLoaded
            self._plateAcquisitionsSeq = _plateAcquisitionsSeq
            self._plateAcquisitionsLoaded = _plateAcquisitionsLoaded
            self._annotationLinksSeq = _annotationLinksSeq
            self._annotationLinksLoaded = _annotationLinksLoaded
            self._annotationLinksCountPerOwner = _annotationLinksCountPerOwner
            self._name = _name
            self._description = _description

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::IObject', '::omero::model::Plate')

        def ice_id(self, current=None):
            return '::omero::model::Plate'

        def ice_staticId():
            return '::omero::model::Plate'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getVersion(self, current=None):
        # def setVersion(self, theVersion, current=None):
        # def getDefaultSample(self, current=None):
        # def setDefaultSample(self, theDefaultSample, current=None):
        # def getColumnNamingConvention(self, current=None):
        # def setColumnNamingConvention(self, theColumnNamingConvention, current=None):
        # def getRowNamingConvention(self, current=None):
        # def setRowNamingConvention(self, theRowNamingConvention, current=None):
        # def getWellOriginX(self, current=None):
        # def setWellOriginX(self, theWellOriginX, current=None):
        # def getWellOriginY(self, current=None):
        # def setWellOriginY(self, theWellOriginY, current=None):
        # def getRows(self, current=None):
        # def setRows(self, theRows, current=None):
        # def getColumns(self, current=None):
        # def setColumns(self, theColumns, current=None):
        # def getStatus(self, current=None):
        # def setStatus(self, theStatus, current=None):
        # def getExternalIdentifier(self, current=None):
        # def setExternalIdentifier(self, theExternalIdentifier, current=None):
        # def unloadScreenLinks(self, current=None):
        # def sizeOfScreenLinks(self, current=None):
        # def copyScreenLinks(self, current=None):
        # def addScreenPlateLink(self, target, current=None):
        # def addAllScreenPlateLinkSet(self, targets, current=None):
        # def removeScreenPlateLink(self, theTarget, current=None):
        # def removeAllScreenPlateLinkSet(self, targets, current=None):
        # def clearScreenLinks(self, current=None):
        # def reloadScreenLinks(self, toCopy, current=None):
        # def getScreenLinksCountPerOwner(self, current=None):
        # def linkScreen(self, addition, current=None):
        # def addScreenPlateLinkToBoth(self, link, bothSides, current=None):
        # def findScreenPlateLink(self, removal, current=None):
        # def unlinkScreen(self, removal, current=None):
        # def removeScreenPlateLinkFromBoth(self, link, bothSides, current=None):
        # def linkedScreenList(self, current=None):
        # def unloadWells(self, current=None):
        # def sizeOfWells(self, current=None):
        # def copyWells(self, current=None):
        # def addWell(self, target, current=None):
        # def addAllWellSet(self, targets, current=None):
        # def removeWell(self, theTarget, current=None):
        # def removeAllWellSet(self, targets, current=None):
        # def clearWells(self, current=None):
        # def reloadWells(self, toCopy, current=None):
        # def unloadPlateAcquisitions(self, current=None):
        # def sizeOfPlateAcquisitions(self, current=None):
        # def copyPlateAcquisitions(self, current=None):
        # def addPlateAcquisition(self, target, current=None):
        # def addAllPlateAcquisitionSet(self, targets, current=None):
        # def removePlateAcquisition(self, theTarget, current=None):
        # def removeAllPlateAcquisitionSet(self, targets, current=None):
        # def clearPlateAcquisitions(self, current=None):
        # def reloadPlateAcquisitions(self, toCopy, current=None):
        # def unloadAnnotationLinks(self, current=None):
        # def sizeOfAnnotationLinks(self, current=None):
        # def copyAnnotationLinks(self, current=None):
        # def addPlateAnnotationLink(self, target, current=None):
        # def addAllPlateAnnotationLinkSet(self, targets, current=None):
        # def removePlateAnnotationLink(self, theTarget, current=None):
        # def removeAllPlateAnnotationLinkSet(self, targets, current=None):
        # def clearAnnotationLinks(self, current=None):
        # def reloadAnnotationLinks(self, toCopy, current=None):
        # def getAnnotationLinksCountPerOwner(self, current=None):
        # def linkAnnotation(self, addition, current=None):
        # def addPlateAnnotationLinkToBoth(self, link, bothSides, current=None):
        # def findPlateAnnotationLink(self, removal, current=None):
        # def unlinkAnnotation(self, removal, current=None):
        # def removePlateAnnotationLinkFromBoth(self, link, bothSides, current=None):
        # def linkedAnnotationList(self, current=None):
        # def getName(self, current=None):
        # def setName(self, theName, current=None):
        # def getDescription(self, current=None):
        # def setDescription(self, theDescription, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_Plate)

        __repr__ = __str__

    _M_omero.model.PlatePrx = Ice.createTempClass()
    class PlatePrx(_M_omero.model.IObjectPrx):

        def getVersion(self, _ctx=None):
            return _M_omero.model.Plate._op_getVersion.invoke(self, ((), _ctx))

        def setVersion(self, theVersion, _ctx=None):
            return _M_omero.model.Plate._op_setVersion.invoke(self, ((theVersion, ), _ctx))

        def getDefaultSample(self, _ctx=None):
            return _M_omero.model.Plate._op_getDefaultSample.invoke(self, ((), _ctx))

        def setDefaultSample(self, theDefaultSample, _ctx=None):
            return _M_omero.model.Plate._op_setDefaultSample.invoke(self, ((theDefaultSample, ), _ctx))

        def getColumnNamingConvention(self, _ctx=None):
            return _M_omero.model.Plate._op_getColumnNamingConvention.invoke(self, ((), _ctx))

        def setColumnNamingConvention(self, theColumnNamingConvention, _ctx=None):
            return _M_omero.model.Plate._op_setColumnNamingConvention.invoke(self, ((theColumnNamingConvention, ), _ctx))

        def getRowNamingConvention(self, _ctx=None):
            return _M_omero.model.Plate._op_getRowNamingConvention.invoke(self, ((), _ctx))

        def setRowNamingConvention(self, theRowNamingConvention, _ctx=None):
            return _M_omero.model.Plate._op_setRowNamingConvention.invoke(self, ((theRowNamingConvention, ), _ctx))

        def getWellOriginX(self, _ctx=None):
            return _M_omero.model.Plate._op_getWellOriginX.invoke(self, ((), _ctx))

        def setWellOriginX(self, theWellOriginX, _ctx=None):
            return _M_omero.model.Plate._op_setWellOriginX.invoke(self, ((theWellOriginX, ), _ctx))

        def getWellOriginY(self, _ctx=None):
            return _M_omero.model.Plate._op_getWellOriginY.invoke(self, ((), _ctx))

        def setWellOriginY(self, theWellOriginY, _ctx=None):
            return _M_omero.model.Plate._op_setWellOriginY.invoke(self, ((theWellOriginY, ), _ctx))

        def getRows(self, _ctx=None):
            return _M_omero.model.Plate._op_getRows.invoke(self, ((), _ctx))

        def setRows(self, theRows, _ctx=None):
            return _M_omero.model.Plate._op_setRows.invoke(self, ((theRows, ), _ctx))

        def getColumns(self, _ctx=None):
            return _M_omero.model.Plate._op_getColumns.invoke(self, ((), _ctx))

        def setColumns(self, theColumns, _ctx=None):
            return _M_omero.model.Plate._op_setColumns.invoke(self, ((theColumns, ), _ctx))

        def getStatus(self, _ctx=None):
            return _M_omero.model.Plate._op_getStatus.invoke(self, ((), _ctx))

        def setStatus(self, theStatus, _ctx=None):
            return _M_omero.model.Plate._op_setStatus.invoke(self, ((theStatus, ), _ctx))

        def getExternalIdentifier(self, _ctx=None):
            return _M_omero.model.Plate._op_getExternalIdentifier.invoke(self, ((), _ctx))

        def setExternalIdentifier(self, theExternalIdentifier, _ctx=None):
            return _M_omero.model.Plate._op_setExternalIdentifier.invoke(self, ((theExternalIdentifier, ), _ctx))

        def unloadScreenLinks(self, _ctx=None):
            return _M_omero.model.Plate._op_unloadScreenLinks.invoke(self, ((), _ctx))

        def sizeOfScreenLinks(self, _ctx=None):
            return _M_omero.model.Plate._op_sizeOfScreenLinks.invoke(self, ((), _ctx))

        def copyScreenLinks(self, _ctx=None):
            return _M_omero.model.Plate._op_copyScreenLinks.invoke(self, ((), _ctx))

        def addScreenPlateLink(self, target, _ctx=None):
            return _M_omero.model.Plate._op_addScreenPlateLink.invoke(self, ((target, ), _ctx))

        def addAllScreenPlateLinkSet(self, targets, _ctx=None):
            return _M_omero.model.Plate._op_addAllScreenPlateLinkSet.invoke(self, ((targets, ), _ctx))

        def removeScreenPlateLink(self, theTarget, _ctx=None):
            return _M_omero.model.Plate._op_removeScreenPlateLink.invoke(self, ((theTarget, ), _ctx))

        def removeAllScreenPlateLinkSet(self, targets, _ctx=None):
            return _M_omero.model.Plate._op_removeAllScreenPlateLinkSet.invoke(self, ((targets, ), _ctx))

        def clearScreenLinks(self, _ctx=None):
            return _M_omero.model.Plate._op_clearScreenLinks.invoke(self, ((), _ctx))

        def reloadScreenLinks(self, toCopy, _ctx=None):
            return _M_omero.model.Plate._op_reloadScreenLinks.invoke(self, ((toCopy, ), _ctx))

        def getScreenLinksCountPerOwner(self, _ctx=None):
            return _M_omero.model.Plate._op_getScreenLinksCountPerOwner.invoke(self, ((), _ctx))

        def linkScreen(self, addition, _ctx=None):
            return _M_omero.model.Plate._op_linkScreen.invoke(self, ((addition, ), _ctx))

        def addScreenPlateLinkToBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.Plate._op_addScreenPlateLinkToBoth.invoke(self, ((link, bothSides), _ctx))

        def findScreenPlateLink(self, removal, _ctx=None):
            return _M_omero.model.Plate._op_findScreenPlateLink.invoke(self, ((removal, ), _ctx))

        def unlinkScreen(self, removal, _ctx=None):
            return _M_omero.model.Plate._op_unlinkScreen.invoke(self, ((removal, ), _ctx))

        def removeScreenPlateLinkFromBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.Plate._op_removeScreenPlateLinkFromBoth.invoke(self, ((link, bothSides), _ctx))

        def linkedScreenList(self, _ctx=None):
            return _M_omero.model.Plate._op_linkedScreenList.invoke(self, ((), _ctx))

        def unloadWells(self, _ctx=None):
            return _M_omero.model.Plate._op_unloadWells.invoke(self, ((), _ctx))

        def sizeOfWells(self, _ctx=None):
            return _M_omero.model.Plate._op_sizeOfWells.invoke(self, ((), _ctx))

        def copyWells(self, _ctx=None):
            return _M_omero.model.Plate._op_copyWells.invoke(self, ((), _ctx))

        def addWell(self, target, _ctx=None):
            return _M_omero.model.Plate._op_addWell.invoke(self, ((target, ), _ctx))

        def addAllWellSet(self, targets, _ctx=None):
            return _M_omero.model.Plate._op_addAllWellSet.invoke(self, ((targets, ), _ctx))

        def removeWell(self, theTarget, _ctx=None):
            return _M_omero.model.Plate._op_removeWell.invoke(self, ((theTarget, ), _ctx))

        def removeAllWellSet(self, targets, _ctx=None):
            return _M_omero.model.Plate._op_removeAllWellSet.invoke(self, ((targets, ), _ctx))

        def clearWells(self, _ctx=None):
            return _M_omero.model.Plate._op_clearWells.invoke(self, ((), _ctx))

        def reloadWells(self, toCopy, _ctx=None):
            return _M_omero.model.Plate._op_reloadWells.invoke(self, ((toCopy, ), _ctx))

        def unloadPlateAcquisitions(self, _ctx=None):
            return _M_omero.model.Plate._op_unloadPlateAcquisitions.invoke(self, ((), _ctx))

        def sizeOfPlateAcquisitions(self, _ctx=None):
            return _M_omero.model.Plate._op_sizeOfPlateAcquisitions.invoke(self, ((), _ctx))

        def copyPlateAcquisitions(self, _ctx=None):
            return _M_omero.model.Plate._op_copyPlateAcquisitions.invoke(self, ((), _ctx))

        def addPlateAcquisition(self, target, _ctx=None):
            return _M_omero.model.Plate._op_addPlateAcquisition.invoke(self, ((target, ), _ctx))

        def addAllPlateAcquisitionSet(self, targets, _ctx=None):
            return _M_omero.model.Plate._op_addAllPlateAcquisitionSet.invoke(self, ((targets, ), _ctx))

        def removePlateAcquisition(self, theTarget, _ctx=None):
            return _M_omero.model.Plate._op_removePlateAcquisition.invoke(self, ((theTarget, ), _ctx))

        def removeAllPlateAcquisitionSet(self, targets, _ctx=None):
            return _M_omero.model.Plate._op_removeAllPlateAcquisitionSet.invoke(self, ((targets, ), _ctx))

        def clearPlateAcquisitions(self, _ctx=None):
            return _M_omero.model.Plate._op_clearPlateAcquisitions.invoke(self, ((), _ctx))

        def reloadPlateAcquisitions(self, toCopy, _ctx=None):
            return _M_omero.model.Plate._op_reloadPlateAcquisitions.invoke(self, ((toCopy, ), _ctx))

        def unloadAnnotationLinks(self, _ctx=None):
            return _M_omero.model.Plate._op_unloadAnnotationLinks.invoke(self, ((), _ctx))

        def sizeOfAnnotationLinks(self, _ctx=None):
            return _M_omero.model.Plate._op_sizeOfAnnotationLinks.invoke(self, ((), _ctx))

        def copyAnnotationLinks(self, _ctx=None):
            return _M_omero.model.Plate._op_copyAnnotationLinks.invoke(self, ((), _ctx))

        def addPlateAnnotationLink(self, target, _ctx=None):
            return _M_omero.model.Plate._op_addPlateAnnotationLink.invoke(self, ((target, ), _ctx))

        def addAllPlateAnnotationLinkSet(self, targets, _ctx=None):
            return _M_omero.model.Plate._op_addAllPlateAnnotationLinkSet.invoke(self, ((targets, ), _ctx))

        def removePlateAnnotationLink(self, theTarget, _ctx=None):
            return _M_omero.model.Plate._op_removePlateAnnotationLink.invoke(self, ((theTarget, ), _ctx))

        def removeAllPlateAnnotationLinkSet(self, targets, _ctx=None):
            return _M_omero.model.Plate._op_removeAllPlateAnnotationLinkSet.invoke(self, ((targets, ), _ctx))

        def clearAnnotationLinks(self, _ctx=None):
            return _M_omero.model.Plate._op_clearAnnotationLinks.invoke(self, ((), _ctx))

        def reloadAnnotationLinks(self, toCopy, _ctx=None):
            return _M_omero.model.Plate._op_reloadAnnotationLinks.invoke(self, ((toCopy, ), _ctx))

        def getAnnotationLinksCountPerOwner(self, _ctx=None):
            return _M_omero.model.Plate._op_getAnnotationLinksCountPerOwner.invoke(self, ((), _ctx))

        def linkAnnotation(self, addition, _ctx=None):
            return _M_omero.model.Plate._op_linkAnnotation.invoke(self, ((addition, ), _ctx))

        def addPlateAnnotationLinkToBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.Plate._op_addPlateAnnotationLinkToBoth.invoke(self, ((link, bothSides), _ctx))

        def findPlateAnnotationLink(self, removal, _ctx=None):
            return _M_omero.model.Plate._op_findPlateAnnotationLink.invoke(self, ((removal, ), _ctx))

        def unlinkAnnotation(self, removal, _ctx=None):
            return _M_omero.model.Plate._op_unlinkAnnotation.invoke(self, ((removal, ), _ctx))

        def removePlateAnnotationLinkFromBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.Plate._op_removePlateAnnotationLinkFromBoth.invoke(self, ((link, bothSides), _ctx))

        def linkedAnnotationList(self, _ctx=None):
            return _M_omero.model.Plate._op_linkedAnnotationList.invoke(self, ((), _ctx))

        def getName(self, _ctx=None):
            return _M_omero.model.Plate._op_getName.invoke(self, ((), _ctx))

        def setName(self, theName, _ctx=None):
            return _M_omero.model.Plate._op_setName.invoke(self, ((theName, ), _ctx))

        def getDescription(self, _ctx=None):
            return _M_omero.model.Plate._op_getDescription.invoke(self, ((), _ctx))

        def setDescription(self, theDescription, _ctx=None):
            return _M_omero.model.Plate._op_setDescription.invoke(self, ((theDescription, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.PlatePrx.ice_checkedCast(proxy, '::omero::model::Plate', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.PlatePrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_PlatePrx = IcePy.defineProxy('::omero::model::Plate', PlatePrx)

    _M_omero.model._t_Plate = IcePy.declareClass('::omero::model::Plate')

    _M_omero.model._t_Plate = IcePy.defineClass('::omero::model::Plate', Plate, (), True, _M_omero.model._t_IObject, (), (
        ('_version', (), _M_omero._t_RInt),
        ('_defaultSample', (), _M_omero._t_RInt),
        ('_columnNamingConvention', (), _M_omero._t_RString),
        ('_rowNamingConvention', (), _M_omero._t_RString),
        ('_wellOriginX', (), _M_omero._t_RDouble),
        ('_wellOriginY', (), _M_omero._t_RDouble),
        ('_rows', (), _M_omero._t_RInt),
        ('_columns', (), _M_omero._t_RInt),
        ('_status', (), _M_omero._t_RString),
        ('_externalIdentifier', (), _M_omero._t_RString),
        ('_screenLinksSeq', (), _M_omero.model._t_PlateScreenLinksSeq),
        ('_screenLinksLoaded', (), IcePy._t_bool),
        ('_screenLinksCountPerOwner', (), _M_omero.sys._t_CountMap),
        ('_wellsSeq', (), _M_omero.model._t_PlateWellsSeq),
        ('_wellsLoaded', (), IcePy._t_bool),
        ('_plateAcquisitionsSeq', (), _M_omero.model._t_PlatePlateAcquisitionsSeq),
        ('_plateAcquisitionsLoaded', (), IcePy._t_bool),
        ('_annotationLinksSeq', (), _M_omero.model._t_PlateAnnotationLinksSeq),
        ('_annotationLinksLoaded', (), IcePy._t_bool),
        ('_annotationLinksCountPerOwner', (), _M_omero.sys._t_CountMap),
        ('_name', (), _M_omero._t_RString),
        ('_description', (), _M_omero._t_RString)
    ))
    Plate.ice_type = _M_omero.model._t_Plate

    Plate._op_getVersion = IcePy.Operation('getVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    Plate._op_setVersion = IcePy.Operation('setVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    Plate._op_getDefaultSample = IcePy.Operation('getDefaultSample', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    Plate._op_setDefaultSample = IcePy.Operation('setDefaultSample', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    Plate._op_getColumnNamingConvention = IcePy.Operation('getColumnNamingConvention', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Plate._op_setColumnNamingConvention = IcePy.Operation('setColumnNamingConvention', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Plate._op_getRowNamingConvention = IcePy.Operation('getRowNamingConvention', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Plate._op_setRowNamingConvention = IcePy.Operation('setRowNamingConvention', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Plate._op_getWellOriginX = IcePy.Operation('getWellOriginX', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RDouble, ())
    Plate._op_setWellOriginX = IcePy.Operation('setWellOriginX', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RDouble),), (), None, ())
    Plate._op_getWellOriginY = IcePy.Operation('getWellOriginY', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RDouble, ())
    Plate._op_setWellOriginY = IcePy.Operation('setWellOriginY', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RDouble),), (), None, ())
    Plate._op_getRows = IcePy.Operation('getRows', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    Plate._op_setRows = IcePy.Operation('setRows', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    Plate._op_getColumns = IcePy.Operation('getColumns', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    Plate._op_setColumns = IcePy.Operation('setColumns', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    Plate._op_getStatus = IcePy.Operation('getStatus', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Plate._op_setStatus = IcePy.Operation('setStatus', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Plate._op_getExternalIdentifier = IcePy.Operation('getExternalIdentifier', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Plate._op_setExternalIdentifier = IcePy.Operation('setExternalIdentifier', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Plate._op_unloadScreenLinks = IcePy.Operation('unloadScreenLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Plate._op_sizeOfScreenLinks = IcePy.Operation('sizeOfScreenLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())
    Plate._op_copyScreenLinks = IcePy.Operation('copyScreenLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_PlateScreenLinksSeq, ())
    Plate._op_addScreenPlateLink = IcePy.Operation('addScreenPlateLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ScreenPlateLink),), (), None, ())
    Plate._op_addAllScreenPlateLinkSet = IcePy.Operation('addAllScreenPlateLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_PlateScreenLinksSeq),), (), None, ())
    Plate._op_removeScreenPlateLink = IcePy.Operation('removeScreenPlateLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ScreenPlateLink),), (), None, ())
    Plate._op_removeAllScreenPlateLinkSet = IcePy.Operation('removeAllScreenPlateLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_PlateScreenLinksSeq),), (), None, ())
    Plate._op_clearScreenLinks = IcePy.Operation('clearScreenLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Plate._op_reloadScreenLinks = IcePy.Operation('reloadScreenLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Plate),), (), None, ())
    Plate._op_getScreenLinksCountPerOwner = IcePy.Operation('getScreenLinksCountPerOwner', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.sys._t_CountMap, ())
    Plate._op_linkScreen = IcePy.Operation('linkScreen', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Screen),), (), _M_omero.model._t_ScreenPlateLink, ())
    Plate._op_addScreenPlateLinkToBoth = IcePy.Operation('addScreenPlateLinkToBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ScreenPlateLink), ((), IcePy._t_bool)), (), None, ())
    Plate._op_findScreenPlateLink = IcePy.Operation('findScreenPlateLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Screen),), (), _M_omero.model._t_PlateScreenLinksSeq, ())
    Plate._op_unlinkScreen = IcePy.Operation('unlinkScreen', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Screen),), (), None, ())
    Plate._op_removeScreenPlateLinkFromBoth = IcePy.Operation('removeScreenPlateLinkFromBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ScreenPlateLink), ((), IcePy._t_bool)), (), None, ())
    Plate._op_linkedScreenList = IcePy.Operation('linkedScreenList', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_PlateLinkedScreenSeq, ())
    Plate._op_unloadWells = IcePy.Operation('unloadWells', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Plate._op_sizeOfWells = IcePy.Operation('sizeOfWells', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())
    Plate._op_copyWells = IcePy.Operation('copyWells', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_PlateWellsSeq, ())
    Plate._op_addWell = IcePy.Operation('addWell', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Well),), (), None, ())
    Plate._op_addAllWellSet = IcePy.Operation('addAllWellSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_PlateWellsSeq),), (), None, ())
    Plate._op_removeWell = IcePy.Operation('removeWell', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Well),), (), None, ())
    Plate._op_removeAllWellSet = IcePy.Operation('removeAllWellSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_PlateWellsSeq),), (), None, ())
    Plate._op_clearWells = IcePy.Operation('clearWells', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Plate._op_reloadWells = IcePy.Operation('reloadWells', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Plate),), (), None, ())
    Plate._op_unloadPlateAcquisitions = IcePy.Operation('unloadPlateAcquisitions', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Plate._op_sizeOfPlateAcquisitions = IcePy.Operation('sizeOfPlateAcquisitions', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())
    Plate._op_copyPlateAcquisitions = IcePy.Operation('copyPlateAcquisitions', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_PlatePlateAcquisitionsSeq, ())
    Plate._op_addPlateAcquisition = IcePy.Operation('addPlateAcquisition', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_PlateAcquisition),), (), None, ())
    Plate._op_addAllPlateAcquisitionSet = IcePy.Operation('addAllPlateAcquisitionSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_PlatePlateAcquisitionsSeq),), (), None, ())
    Plate._op_removePlateAcquisition = IcePy.Operation('removePlateAcquisition', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_PlateAcquisition),), (), None, ())
    Plate._op_removeAllPlateAcquisitionSet = IcePy.Operation('removeAllPlateAcquisitionSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_PlatePlateAcquisitionsSeq),), (), None, ())
    Plate._op_clearPlateAcquisitions = IcePy.Operation('clearPlateAcquisitions', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Plate._op_reloadPlateAcquisitions = IcePy.Operation('reloadPlateAcquisitions', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Plate),), (), None, ())
    Plate._op_unloadAnnotationLinks = IcePy.Operation('unloadAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Plate._op_sizeOfAnnotationLinks = IcePy.Operation('sizeOfAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())
    Plate._op_copyAnnotationLinks = IcePy.Operation('copyAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_PlateAnnotationLinksSeq, ())
    Plate._op_addPlateAnnotationLink = IcePy.Operation('addPlateAnnotationLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_PlateAnnotationLink),), (), None, ())
    Plate._op_addAllPlateAnnotationLinkSet = IcePy.Operation('addAllPlateAnnotationLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_PlateAnnotationLinksSeq),), (), None, ())
    Plate._op_removePlateAnnotationLink = IcePy.Operation('removePlateAnnotationLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_PlateAnnotationLink),), (), None, ())
    Plate._op_removeAllPlateAnnotationLinkSet = IcePy.Operation('removeAllPlateAnnotationLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_PlateAnnotationLinksSeq),), (), None, ())
    Plate._op_clearAnnotationLinks = IcePy.Operation('clearAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Plate._op_reloadAnnotationLinks = IcePy.Operation('reloadAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Plate),), (), None, ())
    Plate._op_getAnnotationLinksCountPerOwner = IcePy.Operation('getAnnotationLinksCountPerOwner', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.sys._t_CountMap, ())
    Plate._op_linkAnnotation = IcePy.Operation('linkAnnotation', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Annotation),), (), _M_omero.model._t_PlateAnnotationLink, ())
    Plate._op_addPlateAnnotationLinkToBoth = IcePy.Operation('addPlateAnnotationLinkToBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_PlateAnnotationLink), ((), IcePy._t_bool)), (), None, ())
    Plate._op_findPlateAnnotationLink = IcePy.Operation('findPlateAnnotationLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Annotation),), (), _M_omero.model._t_PlateAnnotationLinksSeq, ())
    Plate._op_unlinkAnnotation = IcePy.Operation('unlinkAnnotation', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Annotation),), (), None, ())
    Plate._op_removePlateAnnotationLinkFromBoth = IcePy.Operation('removePlateAnnotationLinkFromBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_PlateAnnotationLink), ((), IcePy._t_bool)), (), None, ())
    Plate._op_linkedAnnotationList = IcePy.Operation('linkedAnnotationList', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_PlateLinkedAnnotationSeq, ())
    Plate._op_getName = IcePy.Operation('getName', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Plate._op_setName = IcePy.Operation('setName', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Plate._op_getDescription = IcePy.Operation('getDescription', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Plate._op_setDescription = IcePy.Operation('setDescription', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())

    _M_omero.model.Plate = Plate
    del Plate

    _M_omero.model.PlatePrx = PlatePrx
    del PlatePrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
