# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `Instrument.ice'

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

if not _M_omero.model.__dict__.has_key('Microscope'):
    _M_omero.model._t_Microscope = IcePy.declareClass('::omero::model::Microscope')
    _M_omero.model._t_MicroscopePrx = IcePy.declareProxy('::omero::model::Microscope')

if not _M_omero.model.__dict__.has_key('Detector'):
    _M_omero.model._t_Detector = IcePy.declareClass('::omero::model::Detector')
    _M_omero.model._t_DetectorPrx = IcePy.declareProxy('::omero::model::Detector')

if not _M_omero.model.__dict__.has_key('Objective'):
    _M_omero.model._t_Objective = IcePy.declareClass('::omero::model::Objective')
    _M_omero.model._t_ObjectivePrx = IcePy.declareProxy('::omero::model::Objective')

if not _M_omero.model.__dict__.has_key('LightSource'):
    _M_omero.model._t_LightSource = IcePy.declareClass('::omero::model::LightSource')
    _M_omero.model._t_LightSourcePrx = IcePy.declareProxy('::omero::model::LightSource')

if not _M_omero.model.__dict__.has_key('Filter'):
    _M_omero.model._t_Filter = IcePy.declareClass('::omero::model::Filter')
    _M_omero.model._t_FilterPrx = IcePy.declareProxy('::omero::model::Filter')

if not _M_omero.model.__dict__.has_key('Dichroic'):
    _M_omero.model._t_Dichroic = IcePy.declareClass('::omero::model::Dichroic')
    _M_omero.model._t_DichroicPrx = IcePy.declareProxy('::omero::model::Dichroic')

if not _M_omero.model.__dict__.has_key('FilterSet'):
    _M_omero.model._t_FilterSet = IcePy.declareClass('::omero::model::FilterSet')
    _M_omero.model._t_FilterSetPrx = IcePy.declareProxy('::omero::model::FilterSet')

if not _M_omero.model.__dict__.has_key('OTF'):
    _M_omero.model._t_OTF = IcePy.declareClass('::omero::model::OTF')
    _M_omero.model._t_OTFPrx = IcePy.declareProxy('::omero::model::OTF')

if not _M_omero.model.__dict__.has_key('Details'):
    _M_omero.model._t_Details = IcePy.declareClass('::omero::model::Details')
    _M_omero.model._t_DetailsPrx = IcePy.declareProxy('::omero::model::Details')

if not _M_omero.model.__dict__.has_key('_t_InstrumentDetectorSeq'):
    _M_omero.model._t_InstrumentDetectorSeq = IcePy.defineSequence('::omero::model::InstrumentDetectorSeq', (), _M_omero.model._t_Detector)

if not _M_omero.model.__dict__.has_key('_t_InstrumentObjectiveSeq'):
    _M_omero.model._t_InstrumentObjectiveSeq = IcePy.defineSequence('::omero::model::InstrumentObjectiveSeq', (), _M_omero.model._t_Objective)

if not _M_omero.model.__dict__.has_key('_t_InstrumentLightSourceSeq'):
    _M_omero.model._t_InstrumentLightSourceSeq = IcePy.defineSequence('::omero::model::InstrumentLightSourceSeq', (), _M_omero.model._t_LightSource)

if not _M_omero.model.__dict__.has_key('_t_InstrumentFilterSeq'):
    _M_omero.model._t_InstrumentFilterSeq = IcePy.defineSequence('::omero::model::InstrumentFilterSeq', (), _M_omero.model._t_Filter)

if not _M_omero.model.__dict__.has_key('_t_InstrumentDichroicSeq'):
    _M_omero.model._t_InstrumentDichroicSeq = IcePy.defineSequence('::omero::model::InstrumentDichroicSeq', (), _M_omero.model._t_Dichroic)

if not _M_omero.model.__dict__.has_key('_t_InstrumentFilterSetSeq'):
    _M_omero.model._t_InstrumentFilterSetSeq = IcePy.defineSequence('::omero::model::InstrumentFilterSetSeq', (), _M_omero.model._t_FilterSet)

if not _M_omero.model.__dict__.has_key('_t_InstrumentOtfSeq'):
    _M_omero.model._t_InstrumentOtfSeq = IcePy.defineSequence('::omero::model::InstrumentOtfSeq', (), _M_omero.model._t_OTF)

if not _M_omero.model.__dict__.has_key('Instrument'):
    _M_omero.model.Instrument = Ice.createTempClass()
    class Instrument(_M_omero.model.IObject):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _microscope=None, _detectorSeq=None, _detectorLoaded=False, _objectiveSeq=None, _objectiveLoaded=False, _lightSourceSeq=None, _lightSourceLoaded=False, _filterSeq=None, _filterLoaded=False, _dichroicSeq=None, _dichroicLoaded=False, _filterSetSeq=None, _filterSetLoaded=False, _otfSeq=None, _otfLoaded=False):
            if __builtin__.type(self) == _M_omero.model.Instrument:
                raise RuntimeError('omero.model.Instrument is an abstract class')
            _M_omero.model.IObject.__init__(self, _id, _details, _loaded)
            self._version = _version
            self._microscope = _microscope
            self._detectorSeq = _detectorSeq
            self._detectorLoaded = _detectorLoaded
            self._objectiveSeq = _objectiveSeq
            self._objectiveLoaded = _objectiveLoaded
            self._lightSourceSeq = _lightSourceSeq
            self._lightSourceLoaded = _lightSourceLoaded
            self._filterSeq = _filterSeq
            self._filterLoaded = _filterLoaded
            self._dichroicSeq = _dichroicSeq
            self._dichroicLoaded = _dichroicLoaded
            self._filterSetSeq = _filterSetSeq
            self._filterSetLoaded = _filterSetLoaded
            self._otfSeq = _otfSeq
            self._otfLoaded = _otfLoaded

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::IObject', '::omero::model::Instrument')

        def ice_id(self, current=None):
            return '::omero::model::Instrument'

        def ice_staticId():
            return '::omero::model::Instrument'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getVersion(self, current=None):
        # def setVersion(self, theVersion, current=None):
        # def getMicroscope(self, current=None):
        # def setMicroscope(self, theMicroscope, current=None):
        # def unloadDetector(self, current=None):
        # def sizeOfDetector(self, current=None):
        # def copyDetector(self, current=None):
        # def addDetector(self, target, current=None):
        # def addAllDetectorSet(self, targets, current=None):
        # def removeDetector(self, theTarget, current=None):
        # def removeAllDetectorSet(self, targets, current=None):
        # def clearDetector(self, current=None):
        # def reloadDetector(self, toCopy, current=None):
        # def unloadObjective(self, current=None):
        # def sizeOfObjective(self, current=None):
        # def copyObjective(self, current=None):
        # def addObjective(self, target, current=None):
        # def addAllObjectiveSet(self, targets, current=None):
        # def removeObjective(self, theTarget, current=None):
        # def removeAllObjectiveSet(self, targets, current=None):
        # def clearObjective(self, current=None):
        # def reloadObjective(self, toCopy, current=None):
        # def unloadLightSource(self, current=None):
        # def sizeOfLightSource(self, current=None):
        # def copyLightSource(self, current=None):
        # def addLightSource(self, target, current=None):
        # def addAllLightSourceSet(self, targets, current=None):
        # def removeLightSource(self, theTarget, current=None):
        # def removeAllLightSourceSet(self, targets, current=None):
        # def clearLightSource(self, current=None):
        # def reloadLightSource(self, toCopy, current=None):
        # def unloadFilter(self, current=None):
        # def sizeOfFilter(self, current=None):
        # def copyFilter(self, current=None):
        # def addFilter(self, target, current=None):
        # def addAllFilterSet(self, targets, current=None):
        # def removeFilter(self, theTarget, current=None):
        # def removeAllFilterSet(self, targets, current=None):
        # def clearFilter(self, current=None):
        # def reloadFilter(self, toCopy, current=None):
        # def unloadDichroic(self, current=None):
        # def sizeOfDichroic(self, current=None):
        # def copyDichroic(self, current=None):
        # def addDichroic(self, target, current=None):
        # def addAllDichroicSet(self, targets, current=None):
        # def removeDichroic(self, theTarget, current=None):
        # def removeAllDichroicSet(self, targets, current=None):
        # def clearDichroic(self, current=None):
        # def reloadDichroic(self, toCopy, current=None):
        # def unloadFilterSet(self, current=None):
        # def sizeOfFilterSet(self, current=None):
        # def copyFilterSet(self, current=None):
        # def addFilterSet(self, target, current=None):
        # def addAllFilterSetSet(self, targets, current=None):
        # def removeFilterSet(self, theTarget, current=None):
        # def removeAllFilterSetSet(self, targets, current=None):
        # def clearFilterSet(self, current=None):
        # def reloadFilterSet(self, toCopy, current=None):
        # def unloadOtf(self, current=None):
        # def sizeOfOtf(self, current=None):
        # def copyOtf(self, current=None):
        # def addOTF(self, target, current=None):
        # def addAllOTFSet(self, targets, current=None):
        # def removeOTF(self, theTarget, current=None):
        # def removeAllOTFSet(self, targets, current=None):
        # def clearOtf(self, current=None):
        # def reloadOtf(self, toCopy, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_Instrument)

        __repr__ = __str__

    _M_omero.model.InstrumentPrx = Ice.createTempClass()
    class InstrumentPrx(_M_omero.model.IObjectPrx):

        def getVersion(self, _ctx=None):
            return _M_omero.model.Instrument._op_getVersion.invoke(self, ((), _ctx))

        def setVersion(self, theVersion, _ctx=None):
            return _M_omero.model.Instrument._op_setVersion.invoke(self, ((theVersion, ), _ctx))

        def getMicroscope(self, _ctx=None):
            return _M_omero.model.Instrument._op_getMicroscope.invoke(self, ((), _ctx))

        def setMicroscope(self, theMicroscope, _ctx=None):
            return _M_omero.model.Instrument._op_setMicroscope.invoke(self, ((theMicroscope, ), _ctx))

        def unloadDetector(self, _ctx=None):
            return _M_omero.model.Instrument._op_unloadDetector.invoke(self, ((), _ctx))

        def sizeOfDetector(self, _ctx=None):
            return _M_omero.model.Instrument._op_sizeOfDetector.invoke(self, ((), _ctx))

        def copyDetector(self, _ctx=None):
            return _M_omero.model.Instrument._op_copyDetector.invoke(self, ((), _ctx))

        def addDetector(self, target, _ctx=None):
            return _M_omero.model.Instrument._op_addDetector.invoke(self, ((target, ), _ctx))

        def addAllDetectorSet(self, targets, _ctx=None):
            return _M_omero.model.Instrument._op_addAllDetectorSet.invoke(self, ((targets, ), _ctx))

        def removeDetector(self, theTarget, _ctx=None):
            return _M_omero.model.Instrument._op_removeDetector.invoke(self, ((theTarget, ), _ctx))

        def removeAllDetectorSet(self, targets, _ctx=None):
            return _M_omero.model.Instrument._op_removeAllDetectorSet.invoke(self, ((targets, ), _ctx))

        def clearDetector(self, _ctx=None):
            return _M_omero.model.Instrument._op_clearDetector.invoke(self, ((), _ctx))

        def reloadDetector(self, toCopy, _ctx=None):
            return _M_omero.model.Instrument._op_reloadDetector.invoke(self, ((toCopy, ), _ctx))

        def unloadObjective(self, _ctx=None):
            return _M_omero.model.Instrument._op_unloadObjective.invoke(self, ((), _ctx))

        def sizeOfObjective(self, _ctx=None):
            return _M_omero.model.Instrument._op_sizeOfObjective.invoke(self, ((), _ctx))

        def copyObjective(self, _ctx=None):
            return _M_omero.model.Instrument._op_copyObjective.invoke(self, ((), _ctx))

        def addObjective(self, target, _ctx=None):
            return _M_omero.model.Instrument._op_addObjective.invoke(self, ((target, ), _ctx))

        def addAllObjectiveSet(self, targets, _ctx=None):
            return _M_omero.model.Instrument._op_addAllObjectiveSet.invoke(self, ((targets, ), _ctx))

        def removeObjective(self, theTarget, _ctx=None):
            return _M_omero.model.Instrument._op_removeObjective.invoke(self, ((theTarget, ), _ctx))

        def removeAllObjectiveSet(self, targets, _ctx=None):
            return _M_omero.model.Instrument._op_removeAllObjectiveSet.invoke(self, ((targets, ), _ctx))

        def clearObjective(self, _ctx=None):
            return _M_omero.model.Instrument._op_clearObjective.invoke(self, ((), _ctx))

        def reloadObjective(self, toCopy, _ctx=None):
            return _M_omero.model.Instrument._op_reloadObjective.invoke(self, ((toCopy, ), _ctx))

        def unloadLightSource(self, _ctx=None):
            return _M_omero.model.Instrument._op_unloadLightSource.invoke(self, ((), _ctx))

        def sizeOfLightSource(self, _ctx=None):
            return _M_omero.model.Instrument._op_sizeOfLightSource.invoke(self, ((), _ctx))

        def copyLightSource(self, _ctx=None):
            return _M_omero.model.Instrument._op_copyLightSource.invoke(self, ((), _ctx))

        def addLightSource(self, target, _ctx=None):
            return _M_omero.model.Instrument._op_addLightSource.invoke(self, ((target, ), _ctx))

        def addAllLightSourceSet(self, targets, _ctx=None):
            return _M_omero.model.Instrument._op_addAllLightSourceSet.invoke(self, ((targets, ), _ctx))

        def removeLightSource(self, theTarget, _ctx=None):
            return _M_omero.model.Instrument._op_removeLightSource.invoke(self, ((theTarget, ), _ctx))

        def removeAllLightSourceSet(self, targets, _ctx=None):
            return _M_omero.model.Instrument._op_removeAllLightSourceSet.invoke(self, ((targets, ), _ctx))

        def clearLightSource(self, _ctx=None):
            return _M_omero.model.Instrument._op_clearLightSource.invoke(self, ((), _ctx))

        def reloadLightSource(self, toCopy, _ctx=None):
            return _M_omero.model.Instrument._op_reloadLightSource.invoke(self, ((toCopy, ), _ctx))

        def unloadFilter(self, _ctx=None):
            return _M_omero.model.Instrument._op_unloadFilter.invoke(self, ((), _ctx))

        def sizeOfFilter(self, _ctx=None):
            return _M_omero.model.Instrument._op_sizeOfFilter.invoke(self, ((), _ctx))

        def copyFilter(self, _ctx=None):
            return _M_omero.model.Instrument._op_copyFilter.invoke(self, ((), _ctx))

        def addFilter(self, target, _ctx=None):
            return _M_omero.model.Instrument._op_addFilter.invoke(self, ((target, ), _ctx))

        def addAllFilterSet(self, targets, _ctx=None):
            return _M_omero.model.Instrument._op_addAllFilterSet.invoke(self, ((targets, ), _ctx))

        def removeFilter(self, theTarget, _ctx=None):
            return _M_omero.model.Instrument._op_removeFilter.invoke(self, ((theTarget, ), _ctx))

        def removeAllFilterSet(self, targets, _ctx=None):
            return _M_omero.model.Instrument._op_removeAllFilterSet.invoke(self, ((targets, ), _ctx))

        def clearFilter(self, _ctx=None):
            return _M_omero.model.Instrument._op_clearFilter.invoke(self, ((), _ctx))

        def reloadFilter(self, toCopy, _ctx=None):
            return _M_omero.model.Instrument._op_reloadFilter.invoke(self, ((toCopy, ), _ctx))

        def unloadDichroic(self, _ctx=None):
            return _M_omero.model.Instrument._op_unloadDichroic.invoke(self, ((), _ctx))

        def sizeOfDichroic(self, _ctx=None):
            return _M_omero.model.Instrument._op_sizeOfDichroic.invoke(self, ((), _ctx))

        def copyDichroic(self, _ctx=None):
            return _M_omero.model.Instrument._op_copyDichroic.invoke(self, ((), _ctx))

        def addDichroic(self, target, _ctx=None):
            return _M_omero.model.Instrument._op_addDichroic.invoke(self, ((target, ), _ctx))

        def addAllDichroicSet(self, targets, _ctx=None):
            return _M_omero.model.Instrument._op_addAllDichroicSet.invoke(self, ((targets, ), _ctx))

        def removeDichroic(self, theTarget, _ctx=None):
            return _M_omero.model.Instrument._op_removeDichroic.invoke(self, ((theTarget, ), _ctx))

        def removeAllDichroicSet(self, targets, _ctx=None):
            return _M_omero.model.Instrument._op_removeAllDichroicSet.invoke(self, ((targets, ), _ctx))

        def clearDichroic(self, _ctx=None):
            return _M_omero.model.Instrument._op_clearDichroic.invoke(self, ((), _ctx))

        def reloadDichroic(self, toCopy, _ctx=None):
            return _M_omero.model.Instrument._op_reloadDichroic.invoke(self, ((toCopy, ), _ctx))

        def unloadFilterSet(self, _ctx=None):
            return _M_omero.model.Instrument._op_unloadFilterSet.invoke(self, ((), _ctx))

        def sizeOfFilterSet(self, _ctx=None):
            return _M_omero.model.Instrument._op_sizeOfFilterSet.invoke(self, ((), _ctx))

        def copyFilterSet(self, _ctx=None):
            return _M_omero.model.Instrument._op_copyFilterSet.invoke(self, ((), _ctx))

        def addFilterSet(self, target, _ctx=None):
            return _M_omero.model.Instrument._op_addFilterSet.invoke(self, ((target, ), _ctx))

        def addAllFilterSetSet(self, targets, _ctx=None):
            return _M_omero.model.Instrument._op_addAllFilterSetSet.invoke(self, ((targets, ), _ctx))

        def removeFilterSet(self, theTarget, _ctx=None):
            return _M_omero.model.Instrument._op_removeFilterSet.invoke(self, ((theTarget, ), _ctx))

        def removeAllFilterSetSet(self, targets, _ctx=None):
            return _M_omero.model.Instrument._op_removeAllFilterSetSet.invoke(self, ((targets, ), _ctx))

        def clearFilterSet(self, _ctx=None):
            return _M_omero.model.Instrument._op_clearFilterSet.invoke(self, ((), _ctx))

        def reloadFilterSet(self, toCopy, _ctx=None):
            return _M_omero.model.Instrument._op_reloadFilterSet.invoke(self, ((toCopy, ), _ctx))

        def unloadOtf(self, _ctx=None):
            return _M_omero.model.Instrument._op_unloadOtf.invoke(self, ((), _ctx))

        def sizeOfOtf(self, _ctx=None):
            return _M_omero.model.Instrument._op_sizeOfOtf.invoke(self, ((), _ctx))

        def copyOtf(self, _ctx=None):
            return _M_omero.model.Instrument._op_copyOtf.invoke(self, ((), _ctx))

        def addOTF(self, target, _ctx=None):
            return _M_omero.model.Instrument._op_addOTF.invoke(self, ((target, ), _ctx))

        def addAllOTFSet(self, targets, _ctx=None):
            return _M_omero.model.Instrument._op_addAllOTFSet.invoke(self, ((targets, ), _ctx))

        def removeOTF(self, theTarget, _ctx=None):
            return _M_omero.model.Instrument._op_removeOTF.invoke(self, ((theTarget, ), _ctx))

        def removeAllOTFSet(self, targets, _ctx=None):
            return _M_omero.model.Instrument._op_removeAllOTFSet.invoke(self, ((targets, ), _ctx))

        def clearOtf(self, _ctx=None):
            return _M_omero.model.Instrument._op_clearOtf.invoke(self, ((), _ctx))

        def reloadOtf(self, toCopy, _ctx=None):
            return _M_omero.model.Instrument._op_reloadOtf.invoke(self, ((toCopy, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.InstrumentPrx.ice_checkedCast(proxy, '::omero::model::Instrument', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.InstrumentPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_InstrumentPrx = IcePy.defineProxy('::omero::model::Instrument', InstrumentPrx)

    _M_omero.model._t_Instrument = IcePy.declareClass('::omero::model::Instrument')

    _M_omero.model._t_Instrument = IcePy.defineClass('::omero::model::Instrument', Instrument, (), True, _M_omero.model._t_IObject, (), (
        ('_version', (), _M_omero._t_RInt),
        ('_microscope', (), _M_omero.model._t_Microscope),
        ('_detectorSeq', (), _M_omero.model._t_InstrumentDetectorSeq),
        ('_detectorLoaded', (), IcePy._t_bool),
        ('_objectiveSeq', (), _M_omero.model._t_InstrumentObjectiveSeq),
        ('_objectiveLoaded', (), IcePy._t_bool),
        ('_lightSourceSeq', (), _M_omero.model._t_InstrumentLightSourceSeq),
        ('_lightSourceLoaded', (), IcePy._t_bool),
        ('_filterSeq', (), _M_omero.model._t_InstrumentFilterSeq),
        ('_filterLoaded', (), IcePy._t_bool),
        ('_dichroicSeq', (), _M_omero.model._t_InstrumentDichroicSeq),
        ('_dichroicLoaded', (), IcePy._t_bool),
        ('_filterSetSeq', (), _M_omero.model._t_InstrumentFilterSetSeq),
        ('_filterSetLoaded', (), IcePy._t_bool),
        ('_otfSeq', (), _M_omero.model._t_InstrumentOtfSeq),
        ('_otfLoaded', (), IcePy._t_bool)
    ))
    Instrument.ice_type = _M_omero.model._t_Instrument

    Instrument._op_getVersion = IcePy.Operation('getVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    Instrument._op_setVersion = IcePy.Operation('setVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    Instrument._op_getMicroscope = IcePy.Operation('getMicroscope', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_Microscope, ())
    Instrument._op_setMicroscope = IcePy.Operation('setMicroscope', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Microscope),), (), None, ())
    Instrument._op_unloadDetector = IcePy.Operation('unloadDetector', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Instrument._op_sizeOfDetector = IcePy.Operation('sizeOfDetector', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())
    Instrument._op_copyDetector = IcePy.Operation('copyDetector', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_InstrumentDetectorSeq, ())
    Instrument._op_addDetector = IcePy.Operation('addDetector', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Detector),), (), None, ())
    Instrument._op_addAllDetectorSet = IcePy.Operation('addAllDetectorSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_InstrumentDetectorSeq),), (), None, ())
    Instrument._op_removeDetector = IcePy.Operation('removeDetector', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Detector),), (), None, ())
    Instrument._op_removeAllDetectorSet = IcePy.Operation('removeAllDetectorSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_InstrumentDetectorSeq),), (), None, ())
    Instrument._op_clearDetector = IcePy.Operation('clearDetector', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Instrument._op_reloadDetector = IcePy.Operation('reloadDetector', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Instrument),), (), None, ())
    Instrument._op_unloadObjective = IcePy.Operation('unloadObjective', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Instrument._op_sizeOfObjective = IcePy.Operation('sizeOfObjective', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())
    Instrument._op_copyObjective = IcePy.Operation('copyObjective', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_InstrumentObjectiveSeq, ())
    Instrument._op_addObjective = IcePy.Operation('addObjective', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Objective),), (), None, ())
    Instrument._op_addAllObjectiveSet = IcePy.Operation('addAllObjectiveSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_InstrumentObjectiveSeq),), (), None, ())
    Instrument._op_removeObjective = IcePy.Operation('removeObjective', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Objective),), (), None, ())
    Instrument._op_removeAllObjectiveSet = IcePy.Operation('removeAllObjectiveSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_InstrumentObjectiveSeq),), (), None, ())
    Instrument._op_clearObjective = IcePy.Operation('clearObjective', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Instrument._op_reloadObjective = IcePy.Operation('reloadObjective', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Instrument),), (), None, ())
    Instrument._op_unloadLightSource = IcePy.Operation('unloadLightSource', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Instrument._op_sizeOfLightSource = IcePy.Operation('sizeOfLightSource', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())
    Instrument._op_copyLightSource = IcePy.Operation('copyLightSource', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_InstrumentLightSourceSeq, ())
    Instrument._op_addLightSource = IcePy.Operation('addLightSource', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_LightSource),), (), None, ())
    Instrument._op_addAllLightSourceSet = IcePy.Operation('addAllLightSourceSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_InstrumentLightSourceSeq),), (), None, ())
    Instrument._op_removeLightSource = IcePy.Operation('removeLightSource', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_LightSource),), (), None, ())
    Instrument._op_removeAllLightSourceSet = IcePy.Operation('removeAllLightSourceSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_InstrumentLightSourceSeq),), (), None, ())
    Instrument._op_clearLightSource = IcePy.Operation('clearLightSource', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Instrument._op_reloadLightSource = IcePy.Operation('reloadLightSource', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Instrument),), (), None, ())
    Instrument._op_unloadFilter = IcePy.Operation('unloadFilter', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Instrument._op_sizeOfFilter = IcePy.Operation('sizeOfFilter', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())
    Instrument._op_copyFilter = IcePy.Operation('copyFilter', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_InstrumentFilterSeq, ())
    Instrument._op_addFilter = IcePy.Operation('addFilter', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Filter),), (), None, ())
    Instrument._op_addAllFilterSet = IcePy.Operation('addAllFilterSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_InstrumentFilterSeq),), (), None, ())
    Instrument._op_removeFilter = IcePy.Operation('removeFilter', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Filter),), (), None, ())
    Instrument._op_removeAllFilterSet = IcePy.Operation('removeAllFilterSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_InstrumentFilterSeq),), (), None, ())
    Instrument._op_clearFilter = IcePy.Operation('clearFilter', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Instrument._op_reloadFilter = IcePy.Operation('reloadFilter', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Instrument),), (), None, ())
    Instrument._op_unloadDichroic = IcePy.Operation('unloadDichroic', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Instrument._op_sizeOfDichroic = IcePy.Operation('sizeOfDichroic', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())
    Instrument._op_copyDichroic = IcePy.Operation('copyDichroic', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_InstrumentDichroicSeq, ())
    Instrument._op_addDichroic = IcePy.Operation('addDichroic', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Dichroic),), (), None, ())
    Instrument._op_addAllDichroicSet = IcePy.Operation('addAllDichroicSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_InstrumentDichroicSeq),), (), None, ())
    Instrument._op_removeDichroic = IcePy.Operation('removeDichroic', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Dichroic),), (), None, ())
    Instrument._op_removeAllDichroicSet = IcePy.Operation('removeAllDichroicSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_InstrumentDichroicSeq),), (), None, ())
    Instrument._op_clearDichroic = IcePy.Operation('clearDichroic', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Instrument._op_reloadDichroic = IcePy.Operation('reloadDichroic', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Instrument),), (), None, ())
    Instrument._op_unloadFilterSet = IcePy.Operation('unloadFilterSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Instrument._op_sizeOfFilterSet = IcePy.Operation('sizeOfFilterSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())
    Instrument._op_copyFilterSet = IcePy.Operation('copyFilterSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_InstrumentFilterSetSeq, ())
    Instrument._op_addFilterSet = IcePy.Operation('addFilterSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_FilterSet),), (), None, ())
    Instrument._op_addAllFilterSetSet = IcePy.Operation('addAllFilterSetSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_InstrumentFilterSetSeq),), (), None, ())
    Instrument._op_removeFilterSet = IcePy.Operation('removeFilterSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_FilterSet),), (), None, ())
    Instrument._op_removeAllFilterSetSet = IcePy.Operation('removeAllFilterSetSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_InstrumentFilterSetSeq),), (), None, ())
    Instrument._op_clearFilterSet = IcePy.Operation('clearFilterSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Instrument._op_reloadFilterSet = IcePy.Operation('reloadFilterSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Instrument),), (), None, ())
    Instrument._op_unloadOtf = IcePy.Operation('unloadOtf', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Instrument._op_sizeOfOtf = IcePy.Operation('sizeOfOtf', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())
    Instrument._op_copyOtf = IcePy.Operation('copyOtf', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_InstrumentOtfSeq, ())
    Instrument._op_addOTF = IcePy.Operation('addOTF', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_OTF),), (), None, ())
    Instrument._op_addAllOTFSet = IcePy.Operation('addAllOTFSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_InstrumentOtfSeq),), (), None, ())
    Instrument._op_removeOTF = IcePy.Operation('removeOTF', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_OTF),), (), None, ())
    Instrument._op_removeAllOTFSet = IcePy.Operation('removeAllOTFSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_InstrumentOtfSeq),), (), None, ())
    Instrument._op_clearOtf = IcePy.Operation('clearOtf', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Instrument._op_reloadOtf = IcePy.Operation('reloadOtf', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Instrument),), (), None, ())

    _M_omero.model.Instrument = Instrument
    del Instrument

    _M_omero.model.InstrumentPrx = InstrumentPrx
    del InstrumentPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
