# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `Detector.ice'

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

if not _M_omero.model.__dict__.has_key('DetectorType'):
    _M_omero.model._t_DetectorType = IcePy.declareClass('::omero::model::DetectorType')
    _M_omero.model._t_DetectorTypePrx = IcePy.declareProxy('::omero::model::DetectorType')

if not _M_omero.model.__dict__.has_key('Instrument'):
    _M_omero.model._t_Instrument = IcePy.declareClass('::omero::model::Instrument')
    _M_omero.model._t_InstrumentPrx = IcePy.declareProxy('::omero::model::Instrument')

if not _M_omero.model.__dict__.has_key('Details'):
    _M_omero.model._t_Details = IcePy.declareClass('::omero::model::Details')
    _M_omero.model._t_DetailsPrx = IcePy.declareProxy('::omero::model::Details')

if not _M_omero.model.__dict__.has_key('Detector'):
    _M_omero.model.Detector = Ice.createTempClass()
    class Detector(_M_omero.model.IObject):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _manufacturer=None, _model=None, _lotNumber=None, _serialNumber=None, _voltage=None, _gain=None, _offsetValue=None, _zoom=None, _amplificationGain=None, _type=None, _instrument=None):
            if __builtin__.type(self) == _M_omero.model.Detector:
                raise RuntimeError('omero.model.Detector is an abstract class')
            _M_omero.model.IObject.__init__(self, _id, _details, _loaded)
            self._version = _version
            self._manufacturer = _manufacturer
            self._model = _model
            self._lotNumber = _lotNumber
            self._serialNumber = _serialNumber
            self._voltage = _voltage
            self._gain = _gain
            self._offsetValue = _offsetValue
            self._zoom = _zoom
            self._amplificationGain = _amplificationGain
            self._type = _type
            self._instrument = _instrument

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::Detector', '::omero::model::IObject')

        def ice_id(self, current=None):
            return '::omero::model::Detector'

        def ice_staticId():
            return '::omero::model::Detector'
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
        # def getVoltage(self, current=None):
        # def setVoltage(self, theVoltage, current=None):
        # def getGain(self, current=None):
        # def setGain(self, theGain, current=None):
        # def getOffsetValue(self, current=None):
        # def setOffsetValue(self, theOffsetValue, current=None):
        # def getZoom(self, current=None):
        # def setZoom(self, theZoom, current=None):
        # def getAmplificationGain(self, current=None):
        # def setAmplificationGain(self, theAmplificationGain, current=None):
        # def getType(self, current=None):
        # def setType(self, theType, current=None):
        # def getInstrument(self, current=None):
        # def setInstrument(self, theInstrument, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_Detector)

        __repr__ = __str__

    _M_omero.model.DetectorPrx = Ice.createTempClass()
    class DetectorPrx(_M_omero.model.IObjectPrx):

        def getVersion(self, _ctx=None):
            return _M_omero.model.Detector._op_getVersion.invoke(self, ((), _ctx))

        def setVersion(self, theVersion, _ctx=None):
            return _M_omero.model.Detector._op_setVersion.invoke(self, ((theVersion, ), _ctx))

        def getManufacturer(self, _ctx=None):
            return _M_omero.model.Detector._op_getManufacturer.invoke(self, ((), _ctx))

        def setManufacturer(self, theManufacturer, _ctx=None):
            return _M_omero.model.Detector._op_setManufacturer.invoke(self, ((theManufacturer, ), _ctx))

        def getModel(self, _ctx=None):
            return _M_omero.model.Detector._op_getModel.invoke(self, ((), _ctx))

        def setModel(self, theModel, _ctx=None):
            return _M_omero.model.Detector._op_setModel.invoke(self, ((theModel, ), _ctx))

        def getLotNumber(self, _ctx=None):
            return _M_omero.model.Detector._op_getLotNumber.invoke(self, ((), _ctx))

        def setLotNumber(self, theLotNumber, _ctx=None):
            return _M_omero.model.Detector._op_setLotNumber.invoke(self, ((theLotNumber, ), _ctx))

        def getSerialNumber(self, _ctx=None):
            return _M_omero.model.Detector._op_getSerialNumber.invoke(self, ((), _ctx))

        def setSerialNumber(self, theSerialNumber, _ctx=None):
            return _M_omero.model.Detector._op_setSerialNumber.invoke(self, ((theSerialNumber, ), _ctx))

        def getVoltage(self, _ctx=None):
            return _M_omero.model.Detector._op_getVoltage.invoke(self, ((), _ctx))

        def setVoltage(self, theVoltage, _ctx=None):
            return _M_omero.model.Detector._op_setVoltage.invoke(self, ((theVoltage, ), _ctx))

        def getGain(self, _ctx=None):
            return _M_omero.model.Detector._op_getGain.invoke(self, ((), _ctx))

        def setGain(self, theGain, _ctx=None):
            return _M_omero.model.Detector._op_setGain.invoke(self, ((theGain, ), _ctx))

        def getOffsetValue(self, _ctx=None):
            return _M_omero.model.Detector._op_getOffsetValue.invoke(self, ((), _ctx))

        def setOffsetValue(self, theOffsetValue, _ctx=None):
            return _M_omero.model.Detector._op_setOffsetValue.invoke(self, ((theOffsetValue, ), _ctx))

        def getZoom(self, _ctx=None):
            return _M_omero.model.Detector._op_getZoom.invoke(self, ((), _ctx))

        def setZoom(self, theZoom, _ctx=None):
            return _M_omero.model.Detector._op_setZoom.invoke(self, ((theZoom, ), _ctx))

        def getAmplificationGain(self, _ctx=None):
            return _M_omero.model.Detector._op_getAmplificationGain.invoke(self, ((), _ctx))

        def setAmplificationGain(self, theAmplificationGain, _ctx=None):
            return _M_omero.model.Detector._op_setAmplificationGain.invoke(self, ((theAmplificationGain, ), _ctx))

        def getType(self, _ctx=None):
            return _M_omero.model.Detector._op_getType.invoke(self, ((), _ctx))

        def setType(self, theType, _ctx=None):
            return _M_omero.model.Detector._op_setType.invoke(self, ((theType, ), _ctx))

        def getInstrument(self, _ctx=None):
            return _M_omero.model.Detector._op_getInstrument.invoke(self, ((), _ctx))

        def setInstrument(self, theInstrument, _ctx=None):
            return _M_omero.model.Detector._op_setInstrument.invoke(self, ((theInstrument, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.DetectorPrx.ice_checkedCast(proxy, '::omero::model::Detector', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.DetectorPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_DetectorPrx = IcePy.defineProxy('::omero::model::Detector', DetectorPrx)

    _M_omero.model._t_Detector = IcePy.declareClass('::omero::model::Detector')

    _M_omero.model._t_Detector = IcePy.defineClass('::omero::model::Detector', Detector, (), True, _M_omero.model._t_IObject, (), (
        ('_version', (), _M_omero._t_RInt),
        ('_manufacturer', (), _M_omero._t_RString),
        ('_model', (), _M_omero._t_RString),
        ('_lotNumber', (), _M_omero._t_RString),
        ('_serialNumber', (), _M_omero._t_RString),
        ('_voltage', (), _M_omero._t_RDouble),
        ('_gain', (), _M_omero._t_RDouble),
        ('_offsetValue', (), _M_omero._t_RDouble),
        ('_zoom', (), _M_omero._t_RDouble),
        ('_amplificationGain', (), _M_omero._t_RDouble),
        ('_type', (), _M_omero.model._t_DetectorType),
        ('_instrument', (), _M_omero.model._t_Instrument)
    ))
    Detector.ice_type = _M_omero.model._t_Detector

    Detector._op_getVersion = IcePy.Operation('getVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    Detector._op_setVersion = IcePy.Operation('setVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    Detector._op_getManufacturer = IcePy.Operation('getManufacturer', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Detector._op_setManufacturer = IcePy.Operation('setManufacturer', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Detector._op_getModel = IcePy.Operation('getModel', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Detector._op_setModel = IcePy.Operation('setModel', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Detector._op_getLotNumber = IcePy.Operation('getLotNumber', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Detector._op_setLotNumber = IcePy.Operation('setLotNumber', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Detector._op_getSerialNumber = IcePy.Operation('getSerialNumber', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Detector._op_setSerialNumber = IcePy.Operation('setSerialNumber', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Detector._op_getVoltage = IcePy.Operation('getVoltage', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RDouble, ())
    Detector._op_setVoltage = IcePy.Operation('setVoltage', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RDouble),), (), None, ())
    Detector._op_getGain = IcePy.Operation('getGain', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RDouble, ())
    Detector._op_setGain = IcePy.Operation('setGain', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RDouble),), (), None, ())
    Detector._op_getOffsetValue = IcePy.Operation('getOffsetValue', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RDouble, ())
    Detector._op_setOffsetValue = IcePy.Operation('setOffsetValue', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RDouble),), (), None, ())
    Detector._op_getZoom = IcePy.Operation('getZoom', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RDouble, ())
    Detector._op_setZoom = IcePy.Operation('setZoom', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RDouble),), (), None, ())
    Detector._op_getAmplificationGain = IcePy.Operation('getAmplificationGain', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RDouble, ())
    Detector._op_setAmplificationGain = IcePy.Operation('setAmplificationGain', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RDouble),), (), None, ())
    Detector._op_getType = IcePy.Operation('getType', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_DetectorType, ())
    Detector._op_setType = IcePy.Operation('setType', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_DetectorType),), (), None, ())
    Detector._op_getInstrument = IcePy.Operation('getInstrument', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_Instrument, ())
    Detector._op_setInstrument = IcePy.Operation('setInstrument', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Instrument),), (), None, ())

    _M_omero.model.Detector = Detector
    del Detector

    _M_omero.model.DetectorPrx = DetectorPrx
    del DetectorPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
