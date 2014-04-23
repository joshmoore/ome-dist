# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `Filter.ice'

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

if not _M_omero.model.__dict__.has_key('FilterType'):
    _M_omero.model._t_FilterType = IcePy.declareClass('::omero::model::FilterType')
    _M_omero.model._t_FilterTypePrx = IcePy.declareProxy('::omero::model::FilterType')

if not _M_omero.model.__dict__.has_key('TransmittanceRange'):
    _M_omero.model._t_TransmittanceRange = IcePy.declareClass('::omero::model::TransmittanceRange')
    _M_omero.model._t_TransmittanceRangePrx = IcePy.declareProxy('::omero::model::TransmittanceRange')

if not _M_omero.model.__dict__.has_key('Instrument'):
    _M_omero.model._t_Instrument = IcePy.declareClass('::omero::model::Instrument')
    _M_omero.model._t_InstrumentPrx = IcePy.declareProxy('::omero::model::Instrument')

if not _M_omero.model.__dict__.has_key('FilterSetExcitationFilterLink'):
    _M_omero.model._t_FilterSetExcitationFilterLink = IcePy.declareClass('::omero::model::FilterSetExcitationFilterLink')
    _M_omero.model._t_FilterSetExcitationFilterLinkPrx = IcePy.declareProxy('::omero::model::FilterSetExcitationFilterLink')

if not _M_omero.model.__dict__.has_key('FilterSet'):
    _M_omero.model._t_FilterSet = IcePy.declareClass('::omero::model::FilterSet')
    _M_omero.model._t_FilterSetPrx = IcePy.declareProxy('::omero::model::FilterSet')

if not _M_omero.model.__dict__.has_key('FilterSetEmissionFilterLink'):
    _M_omero.model._t_FilterSetEmissionFilterLink = IcePy.declareClass('::omero::model::FilterSetEmissionFilterLink')
    _M_omero.model._t_FilterSetEmissionFilterLinkPrx = IcePy.declareProxy('::omero::model::FilterSetEmissionFilterLink')

if not _M_omero.model.__dict__.has_key('Details'):
    _M_omero.model._t_Details = IcePy.declareClass('::omero::model::Details')
    _M_omero.model._t_DetailsPrx = IcePy.declareProxy('::omero::model::Details')

if not _M_omero.model.__dict__.has_key('_t_FilterExcitationFilterLinkSeq'):
    _M_omero.model._t_FilterExcitationFilterLinkSeq = IcePy.defineSequence('::omero::model::FilterExcitationFilterLinkSeq', (), _M_omero.model._t_FilterSetExcitationFilterLink)

if not _M_omero.model.__dict__.has_key('_t_FilterLinkedExcitationFilterSeq'):
    _M_omero.model._t_FilterLinkedExcitationFilterSeq = IcePy.defineSequence('::omero::model::FilterLinkedExcitationFilterSeq', (), _M_omero.model._t_FilterSet)

if not _M_omero.model.__dict__.has_key('_t_FilterEmissionFilterLinkSeq'):
    _M_omero.model._t_FilterEmissionFilterLinkSeq = IcePy.defineSequence('::omero::model::FilterEmissionFilterLinkSeq', (), _M_omero.model._t_FilterSetEmissionFilterLink)

if not _M_omero.model.__dict__.has_key('_t_FilterLinkedEmissionFilterSeq'):
    _M_omero.model._t_FilterLinkedEmissionFilterSeq = IcePy.defineSequence('::omero::model::FilterLinkedEmissionFilterSeq', (), _M_omero.model._t_FilterSet)

if not _M_omero.model.__dict__.has_key('Filter'):
    _M_omero.model.Filter = Ice.createTempClass()
    class Filter(_M_omero.model.IObject):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _manufacturer=None, _model=None, _lotNumber=None, _serialNumber=None, _filterWheel=None, _type=None, _transmittanceRange=None, _instrument=None, _excitationFilterLinkSeq=None, _excitationFilterLinkLoaded=False, _excitationFilterLinkCountPerOwner=None, _emissionFilterLinkSeq=None, _emissionFilterLinkLoaded=False, _emissionFilterLinkCountPerOwner=None):
            if __builtin__.type(self) == _M_omero.model.Filter:
                raise RuntimeError('omero.model.Filter is an abstract class')
            _M_omero.model.IObject.__init__(self, _id, _details, _loaded)
            self._version = _version
            self._manufacturer = _manufacturer
            self._model = _model
            self._lotNumber = _lotNumber
            self._serialNumber = _serialNumber
            self._filterWheel = _filterWheel
            self._type = _type
            self._transmittanceRange = _transmittanceRange
            self._instrument = _instrument
            self._excitationFilterLinkSeq = _excitationFilterLinkSeq
            self._excitationFilterLinkLoaded = _excitationFilterLinkLoaded
            self._excitationFilterLinkCountPerOwner = _excitationFilterLinkCountPerOwner
            self._emissionFilterLinkSeq = _emissionFilterLinkSeq
            self._emissionFilterLinkLoaded = _emissionFilterLinkLoaded
            self._emissionFilterLinkCountPerOwner = _emissionFilterLinkCountPerOwner

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::Filter', '::omero::model::IObject')

        def ice_id(self, current=None):
            return '::omero::model::Filter'

        def ice_staticId():
            return '::omero::model::Filter'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getVersion(self, current=None):
        # def setVersion(self, theVersion, current=None):
        # def getManufacturer(self, current=None):
        # def setManufacturer(self, theManufacturer, current=None):
        # def getModel(self, current=None):
        # def setModel(self, theModel, current=None):
        # def getLotNumber(self, current=None):
        # def setLotNumber(self, theLotNumber, current=None):
        # def getSerialNumber(self, current=None):
        # def setSerialNumber(self, theSerialNumber, current=None):
        # def getFilterWheel(self, current=None):
        # def setFilterWheel(self, theFilterWheel, current=None):
        # def getType(self, current=None):
        # def setType(self, theType, current=None):
        # def getTransmittanceRange(self, current=None):
        # def setTransmittanceRange(self, theTransmittanceRange, current=None):
        # def getInstrument(self, current=None):
        # def setInstrument(self, theInstrument, current=None):
        # def unloadExcitationFilterLink(self, current=None):
        # def sizeOfExcitationFilterLink(self, current=None):
        # def copyExcitationFilterLink(self, current=None):
        # def addFilterSetExcitationFilterLink(self, target, current=None):
        # def addAllFilterSetExcitationFilterLinkSet(self, targets, current=None):
        # def removeFilterSetExcitationFilterLink(self, theTarget, current=None):
        # def removeAllFilterSetExcitationFilterLinkSet(self, targets, current=None):
        # def clearExcitationFilterLink(self, current=None):
        # def reloadExcitationFilterLink(self, toCopy, current=None):
        # def getExcitationFilterLinkCountPerOwner(self, current=None):
        # def linkExcitationFilter(self, addition, current=None):
        # def addFilterSetExcitationFilterLinkToBoth(self, link, bothSides, current=None):
        # def findFilterSetExcitationFilterLink(self, removal, current=None):
        # def unlinkExcitationFilter(self, removal, current=None):
        # def removeFilterSetExcitationFilterLinkFromBoth(self, link, bothSides, current=None):
        # def linkedExcitationFilterList(self, current=None):
        # def unloadEmissionFilterLink(self, current=None):
        # def sizeOfEmissionFilterLink(self, current=None):
        # def copyEmissionFilterLink(self, current=None):
        # def addFilterSetEmissionFilterLink(self, target, current=None):
        # def addAllFilterSetEmissionFilterLinkSet(self, targets, current=None):
        # def removeFilterSetEmissionFilterLink(self, theTarget, current=None):
        # def removeAllFilterSetEmissionFilterLinkSet(self, targets, current=None):
        # def clearEmissionFilterLink(self, current=None):
        # def reloadEmissionFilterLink(self, toCopy, current=None):
        # def getEmissionFilterLinkCountPerOwner(self, current=None):
        # def linkEmissionFilter(self, addition, current=None):
        # def addFilterSetEmissionFilterLinkToBoth(self, link, bothSides, current=None):
        # def findFilterSetEmissionFilterLink(self, removal, current=None):
        # def unlinkEmissionFilter(self, removal, current=None):
        # def removeFilterSetEmissionFilterLinkFromBoth(self, link, bothSides, current=None):
        # def linkedEmissionFilterList(self, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_Filter)

        __repr__ = __str__

    _M_omero.model.FilterPrx = Ice.createTempClass()
    class FilterPrx(_M_omero.model.IObjectPrx):

        def getVersion(self, _ctx=None):
            return _M_omero.model.Filter._op_getVersion.invoke(self, ((), _ctx))

        def setVersion(self, theVersion, _ctx=None):
            return _M_omero.model.Filter._op_setVersion.invoke(self, ((theVersion, ), _ctx))

        def getManufacturer(self, _ctx=None):
            return _M_omero.model.Filter._op_getManufacturer.invoke(self, ((), _ctx))

        def setManufacturer(self, theManufacturer, _ctx=None):
            return _M_omero.model.Filter._op_setManufacturer.invoke(self, ((theManufacturer, ), _ctx))

        def getModel(self, _ctx=None):
            return _M_omero.model.Filter._op_getModel.invoke(self, ((), _ctx))

        def setModel(self, theModel, _ctx=None):
            return _M_omero.model.Filter._op_setModel.invoke(self, ((theModel, ), _ctx))

        def getLotNumber(self, _ctx=None):
            return _M_omero.model.Filter._op_getLotNumber.invoke(self, ((), _ctx))

        def setLotNumber(self, theLotNumber, _ctx=None):
            return _M_omero.model.Filter._op_setLotNumber.invoke(self, ((theLotNumber, ), _ctx))

        def getSerialNumber(self, _ctx=None):
            return _M_omero.model.Filter._op_getSerialNumber.invoke(self, ((), _ctx))

        def setSerialNumber(self, theSerialNumber, _ctx=None):
            return _M_omero.model.Filter._op_setSerialNumber.invoke(self, ((theSerialNumber, ), _ctx))

        def getFilterWheel(self, _ctx=None):
            return _M_omero.model.Filter._op_getFilterWheel.invoke(self, ((), _ctx))

        def setFilterWheel(self, theFilterWheel, _ctx=None):
            return _M_omero.model.Filter._op_setFilterWheel.invoke(self, ((theFilterWheel, ), _ctx))

        def getType(self, _ctx=None):
            return _M_omero.model.Filter._op_getType.invoke(self, ((), _ctx))

        def setType(self, theType, _ctx=None):
            return _M_omero.model.Filter._op_setType.invoke(self, ((theType, ), _ctx))

        def getTransmittanceRange(self, _ctx=None):
            return _M_omero.model.Filter._op_getTransmittanceRange.invoke(self, ((), _ctx))

        def setTransmittanceRange(self, theTransmittanceRange, _ctx=None):
            return _M_omero.model.Filter._op_setTransmittanceRange.invoke(self, ((theTransmittanceRange, ), _ctx))

        def getInstrument(self, _ctx=None):
            return _M_omero.model.Filter._op_getInstrument.invoke(self, ((), _ctx))

        def setInstrument(self, theInstrument, _ctx=None):
            return _M_omero.model.Filter._op_setInstrument.invoke(self, ((theInstrument, ), _ctx))

        def unloadExcitationFilterLink(self, _ctx=None):
            return _M_omero.model.Filter._op_unloadExcitationFilterLink.invoke(self, ((), _ctx))

        def sizeOfExcitationFilterLink(self, _ctx=None):
            return _M_omero.model.Filter._op_sizeOfExcitationFilterLink.invoke(self, ((), _ctx))

        def copyExcitationFilterLink(self, _ctx=None):
            return _M_omero.model.Filter._op_copyExcitationFilterLink.invoke(self, ((), _ctx))

        def addFilterSetExcitationFilterLink(self, target, _ctx=None):
            return _M_omero.model.Filter._op_addFilterSetExcitationFilterLink.invoke(self, ((target, ), _ctx))

        def addAllFilterSetExcitationFilterLinkSet(self, targets, _ctx=None):
            return _M_omero.model.Filter._op_addAllFilterSetExcitationFilterLinkSet.invoke(self, ((targets, ), _ctx))

        def removeFilterSetExcitationFilterLink(self, theTarget, _ctx=None):
            return _M_omero.model.Filter._op_removeFilterSetExcitationFilterLink.invoke(self, ((theTarget, ), _ctx))

        def removeAllFilterSetExcitationFilterLinkSet(self, targets, _ctx=None):
            return _M_omero.model.Filter._op_removeAllFilterSetExcitationFilterLinkSet.invoke(self, ((targets, ), _ctx))

        def clearExcitationFilterLink(self, _ctx=None):
            return _M_omero.model.Filter._op_clearExcitationFilterLink.invoke(self, ((), _ctx))

        def reloadExcitationFilterLink(self, toCopy, _ctx=None):
            return _M_omero.model.Filter._op_reloadExcitationFilterLink.invoke(self, ((toCopy, ), _ctx))

        def getExcitationFilterLinkCountPerOwner(self, _ctx=None):
            return _M_omero.model.Filter._op_getExcitationFilterLinkCountPerOwner.invoke(self, ((), _ctx))

        def linkExcitationFilter(self, addition, _ctx=None):
            return _M_omero.model.Filter._op_linkExcitationFilter.invoke(self, ((addition, ), _ctx))

        def addFilterSetExcitationFilterLinkToBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.Filter._op_addFilterSetExcitationFilterLinkToBoth.invoke(self, ((link, bothSides), _ctx))

        def findFilterSetExcitationFilterLink(self, removal, _ctx=None):
            return _M_omero.model.Filter._op_findFilterSetExcitationFilterLink.invoke(self, ((removal, ), _ctx))

        def unlinkExcitationFilter(self, removal, _ctx=None):
            return _M_omero.model.Filter._op_unlinkExcitationFilter.invoke(self, ((removal, ), _ctx))

        def removeFilterSetExcitationFilterLinkFromBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.Filter._op_removeFilterSetExcitationFilterLinkFromBoth.invoke(self, ((link, bothSides), _ctx))

        def linkedExcitationFilterList(self, _ctx=None):
            return _M_omero.model.Filter._op_linkedExcitationFilterList.invoke(self, ((), _ctx))

        def unloadEmissionFilterLink(self, _ctx=None):
            return _M_omero.model.Filter._op_unloadEmissionFilterLink.invoke(self, ((), _ctx))

        def sizeOfEmissionFilterLink(self, _ctx=None):
            return _M_omero.model.Filter._op_sizeOfEmissionFilterLink.invoke(self, ((), _ctx))

        def copyEmissionFilterLink(self, _ctx=None):
            return _M_omero.model.Filter._op_copyEmissionFilterLink.invoke(self, ((), _ctx))

        def addFilterSetEmissionFilterLink(self, target, _ctx=None):
            return _M_omero.model.Filter._op_addFilterSetEmissionFilterLink.invoke(self, ((target, ), _ctx))

        def addAllFilterSetEmissionFilterLinkSet(self, targets, _ctx=None):
            return _M_omero.model.Filter._op_addAllFilterSetEmissionFilterLinkSet.invoke(self, ((targets, ), _ctx))

        def removeFilterSetEmissionFilterLink(self, theTarget, _ctx=None):
            return _M_omero.model.Filter._op_removeFilterSetEmissionFilterLink.invoke(self, ((theTarget, ), _ctx))

        def removeAllFilterSetEmissionFilterLinkSet(self, targets, _ctx=None):
            return _M_omero.model.Filter._op_removeAllFilterSetEmissionFilterLinkSet.invoke(self, ((targets, ), _ctx))

        def clearEmissionFilterLink(self, _ctx=None):
            return _M_omero.model.Filter._op_clearEmissionFilterLink.invoke(self, ((), _ctx))

        def reloadEmissionFilterLink(self, toCopy, _ctx=None):
            return _M_omero.model.Filter._op_reloadEmissionFilterLink.invoke(self, ((toCopy, ), _ctx))

        def getEmissionFilterLinkCountPerOwner(self, _ctx=None):
            return _M_omero.model.Filter._op_getEmissionFilterLinkCountPerOwner.invoke(self, ((), _ctx))

        def linkEmissionFilter(self, addition, _ctx=None):
            return _M_omero.model.Filter._op_linkEmissionFilter.invoke(self, ((addition, ), _ctx))

        def addFilterSetEmissionFilterLinkToBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.Filter._op_addFilterSetEmissionFilterLinkToBoth.invoke(self, ((link, bothSides), _ctx))

        def findFilterSetEmissionFilterLink(self, removal, _ctx=None):
            return _M_omero.model.Filter._op_findFilterSetEmissionFilterLink.invoke(self, ((removal, ), _ctx))

        def unlinkEmissionFilter(self, removal, _ctx=None):
            return _M_omero.model.Filter._op_unlinkEmissionFilter.invoke(self, ((removal, ), _ctx))

        def removeFilterSetEmissionFilterLinkFromBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.Filter._op_removeFilterSetEmissionFilterLinkFromBoth.invoke(self, ((link, bothSides), _ctx))

        def linkedEmissionFilterList(self, _ctx=None):
            return _M_omero.model.Filter._op_linkedEmissionFilterList.invoke(self, ((), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.FilterPrx.ice_checkedCast(proxy, '::omero::model::Filter', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.FilterPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_FilterPrx = IcePy.defineProxy('::omero::model::Filter', FilterPrx)

    _M_omero.model._t_Filter = IcePy.declareClass('::omero::model::Filter')

    _M_omero.model._t_Filter = IcePy.defineClass('::omero::model::Filter', Filter, (), True, _M_omero.model._t_IObject, (), (
        ('_version', (), _M_omero._t_RInt),
        ('_manufacturer', (), _M_omero._t_RString),
        ('_model', (), _M_omero._t_RString),
        ('_lotNumber', (), _M_omero._t_RString),
        ('_serialNumber', (), _M_omero._t_RString),
        ('_filterWheel', (), _M_omero._t_RString),
        ('_type', (), _M_omero.model._t_FilterType),
        ('_transmittanceRange', (), _M_omero.model._t_TransmittanceRange),
        ('_instrument', (), _M_omero.model._t_Instrument),
        ('_excitationFilterLinkSeq', (), _M_omero.model._t_FilterExcitationFilterLinkSeq),
        ('_excitationFilterLinkLoaded', (), IcePy._t_bool),
        ('_excitationFilterLinkCountPerOwner', (), _M_omero.sys._t_CountMap),
        ('_emissionFilterLinkSeq', (), _M_omero.model._t_FilterEmissionFilterLinkSeq),
        ('_emissionFilterLinkLoaded', (), IcePy._t_bool),
        ('_emissionFilterLinkCountPerOwner', (), _M_omero.sys._t_CountMap)
    ))
    Filter.ice_type = _M_omero.model._t_Filter

    Filter._op_getVersion = IcePy.Operation('getVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    Filter._op_setVersion = IcePy.Operation('setVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    Filter._op_getManufacturer = IcePy.Operation('getManufacturer', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Filter._op_setManufacturer = IcePy.Operation('setManufacturer', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Filter._op_getModel = IcePy.Operation('getModel', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Filter._op_setModel = IcePy.Operation('setModel', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Filter._op_getLotNumber = IcePy.Operation('getLotNumber', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Filter._op_setLotNumber = IcePy.Operation('setLotNumber', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Filter._op_getSerialNumber = IcePy.Operation('getSerialNumber', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Filter._op_setSerialNumber = IcePy.Operation('setSerialNumber', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Filter._op_getFilterWheel = IcePy.Operation('getFilterWheel', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Filter._op_setFilterWheel = IcePy.Operation('setFilterWheel', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Filter._op_getType = IcePy.Operation('getType', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_FilterType, ())
    Filter._op_setType = IcePy.Operation('setType', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_FilterType),), (), None, ())
    Filter._op_getTransmittanceRange = IcePy.Operation('getTransmittanceRange', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_TransmittanceRange, ())
    Filter._op_setTransmittanceRange = IcePy.Operation('setTransmittanceRange', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_TransmittanceRange),), (), None, ())
    Filter._op_getInstrument = IcePy.Operation('getInstrument', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_Instrument, ())
    Filter._op_setInstrument = IcePy.Operation('setInstrument', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Instrument),), (), None, ())
    Filter._op_unloadExcitationFilterLink = IcePy.Operation('unloadExcitationFilterLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Filter._op_sizeOfExcitationFilterLink = IcePy.Operation('sizeOfExcitationFilterLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())
    Filter._op_copyExcitationFilterLink = IcePy.Operation('copyExcitationFilterLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_FilterExcitationFilterLinkSeq, ())
    Filter._op_addFilterSetExcitationFilterLink = IcePy.Operation('addFilterSetExcitationFilterLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_FilterSetExcitationFilterLink),), (), None, ())
    Filter._op_addAllFilterSetExcitationFilterLinkSet = IcePy.Operation('addAllFilterSetExcitationFilterLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_FilterExcitationFilterLinkSeq),), (), None, ())
    Filter._op_removeFilterSetExcitationFilterLink = IcePy.Operation('removeFilterSetExcitationFilterLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_FilterSetExcitationFilterLink),), (), None, ())
    Filter._op_removeAllFilterSetExcitationFilterLinkSet = IcePy.Operation('removeAllFilterSetExcitationFilterLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_FilterExcitationFilterLinkSeq),), (), None, ())
    Filter._op_clearExcitationFilterLink = IcePy.Operation('clearExcitationFilterLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Filter._op_reloadExcitationFilterLink = IcePy.Operation('reloadExcitationFilterLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Filter),), (), None, ())
    Filter._op_getExcitationFilterLinkCountPerOwner = IcePy.Operation('getExcitationFilterLinkCountPerOwner', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.sys._t_CountMap, ())
    Filter._op_linkExcitationFilter = IcePy.Operation('linkExcitationFilter', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_FilterSet),), (), _M_omero.model._t_FilterSetExcitationFilterLink, ())
    Filter._op_addFilterSetExcitationFilterLinkToBoth = IcePy.Operation('addFilterSetExcitationFilterLinkToBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_FilterSetExcitationFilterLink), ((), IcePy._t_bool)), (), None, ())
    Filter._op_findFilterSetExcitationFilterLink = IcePy.Operation('findFilterSetExcitationFilterLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_FilterSet),), (), _M_omero.model._t_FilterExcitationFilterLinkSeq, ())
    Filter._op_unlinkExcitationFilter = IcePy.Operation('unlinkExcitationFilter', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_FilterSet),), (), None, ())
    Filter._op_removeFilterSetExcitationFilterLinkFromBoth = IcePy.Operation('removeFilterSetExcitationFilterLinkFromBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_FilterSetExcitationFilterLink), ((), IcePy._t_bool)), (), None, ())
    Filter._op_linkedExcitationFilterList = IcePy.Operation('linkedExcitationFilterList', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_FilterLinkedExcitationFilterSeq, ())
    Filter._op_unloadEmissionFilterLink = IcePy.Operation('unloadEmissionFilterLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Filter._op_sizeOfEmissionFilterLink = IcePy.Operation('sizeOfEmissionFilterLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())
    Filter._op_copyEmissionFilterLink = IcePy.Operation('copyEmissionFilterLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_FilterEmissionFilterLinkSeq, ())
    Filter._op_addFilterSetEmissionFilterLink = IcePy.Operation('addFilterSetEmissionFilterLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_FilterSetEmissionFilterLink),), (), None, ())
    Filter._op_addAllFilterSetEmissionFilterLinkSet = IcePy.Operation('addAllFilterSetEmissionFilterLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_FilterEmissionFilterLinkSeq),), (), None, ())
    Filter._op_removeFilterSetEmissionFilterLink = IcePy.Operation('removeFilterSetEmissionFilterLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_FilterSetEmissionFilterLink),), (), None, ())
    Filter._op_removeAllFilterSetEmissionFilterLinkSet = IcePy.Operation('removeAllFilterSetEmissionFilterLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_FilterEmissionFilterLinkSeq),), (), None, ())
    Filter._op_clearEmissionFilterLink = IcePy.Operation('clearEmissionFilterLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Filter._op_reloadEmissionFilterLink = IcePy.Operation('reloadEmissionFilterLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Filter),), (), None, ())
    Filter._op_getEmissionFilterLinkCountPerOwner = IcePy.Operation('getEmissionFilterLinkCountPerOwner', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.sys._t_CountMap, ())
    Filter._op_linkEmissionFilter = IcePy.Operation('linkEmissionFilter', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_FilterSet),), (), _M_omero.model._t_FilterSetEmissionFilterLink, ())
    Filter._op_addFilterSetEmissionFilterLinkToBoth = IcePy.Operation('addFilterSetEmissionFilterLinkToBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_FilterSetEmissionFilterLink), ((), IcePy._t_bool)), (), None, ())
    Filter._op_findFilterSetEmissionFilterLink = IcePy.Operation('findFilterSetEmissionFilterLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_FilterSet),), (), _M_omero.model._t_FilterEmissionFilterLinkSeq, ())
    Filter._op_unlinkEmissionFilter = IcePy.Operation('unlinkEmissionFilter', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_FilterSet),), (), None, ())
    Filter._op_removeFilterSetEmissionFilterLinkFromBoth = IcePy.Operation('removeFilterSetEmissionFilterLinkFromBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_FilterSetEmissionFilterLink), ((), IcePy._t_bool)), (), None, ())
    Filter._op_linkedEmissionFilterList = IcePy.Operation('linkedEmissionFilterList', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_FilterLinkedEmissionFilterSeq, ())

    _M_omero.model.Filter = Filter
    del Filter

    _M_omero.model.FilterPrx = FilterPrx
    del FilterPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
