# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `Dichroic.ice'

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

if not _M_omero.model.__dict__.has_key('Instrument'):
    _M_omero.model._t_Instrument = IcePy.declareClass('::omero::model::Instrument')
    _M_omero.model._t_InstrumentPrx = IcePy.declareProxy('::omero::model::Instrument')

if not _M_omero.model.__dict__.has_key('Details'):
    _M_omero.model._t_Details = IcePy.declareClass('::omero::model::Details')
    _M_omero.model._t_DetailsPrx = IcePy.declareProxy('::omero::model::Details')

if not _M_omero.model.__dict__.has_key('Dichroic'):
    _M_omero.model.Dichroic = Ice.createTempClass()
    class Dichroic(_M_omero.model.IObject):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _manufacturer=None, _model=None, _lotNumber=None, _serialNumber=None, _instrument=None):
            if __builtin__.type(self) == _M_omero.model.Dichroic:
                raise RuntimeError('omero.model.Dichroic is an abstract class')
            _M_omero.model.IObject.__init__(self, _id, _details, _loaded)
            self._version = _version
            self._manufacturer = _manufacturer
            self._model = _model
            self._lotNumber = _lotNumber
            self._serialNumber = _serialNumber
            self._instrument = _instrument

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::Dichroic', '::omero::model::IObject')

        def ice_id(self, current=None):
            return '::omero::model::Dichroic'

        def ice_staticId():
            return '::omero::model::Dichroic'
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
        # def getInstrument(self, current=None):
        # def setInstrument(self, theInstrument, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_Dichroic)

        __repr__ = __str__

    _M_omero.model.DichroicPrx = Ice.createTempClass()
    class DichroicPrx(_M_omero.model.IObjectPrx):

        def getVersion(self, _ctx=None):
            return _M_omero.model.Dichroic._op_getVersion.invoke(self, ((), _ctx))

        def setVersion(self, theVersion, _ctx=None):
            return _M_omero.model.Dichroic._op_setVersion.invoke(self, ((theVersion, ), _ctx))

        def getManufacturer(self, _ctx=None):
            return _M_omero.model.Dichroic._op_getManufacturer.invoke(self, ((), _ctx))

        def setManufacturer(self, theManufacturer, _ctx=None):
            return _M_omero.model.Dichroic._op_setManufacturer.invoke(self, ((theManufacturer, ), _ctx))

        def getModel(self, _ctx=None):
            return _M_omero.model.Dichroic._op_getModel.invoke(self, ((), _ctx))

        def setModel(self, theModel, _ctx=None):
            return _M_omero.model.Dichroic._op_setModel.invoke(self, ((theModel, ), _ctx))

        def getLotNumber(self, _ctx=None):
            return _M_omero.model.Dichroic._op_getLotNumber.invoke(self, ((), _ctx))

        def setLotNumber(self, theLotNumber, _ctx=None):
            return _M_omero.model.Dichroic._op_setLotNumber.invoke(self, ((theLotNumber, ), _ctx))

        def getSerialNumber(self, _ctx=None):
            return _M_omero.model.Dichroic._op_getSerialNumber.invoke(self, ((), _ctx))

        def setSerialNumber(self, theSerialNumber, _ctx=None):
            return _M_omero.model.Dichroic._op_setSerialNumber.invoke(self, ((theSerialNumber, ), _ctx))

        def getInstrument(self, _ctx=None):
            return _M_omero.model.Dichroic._op_getInstrument.invoke(self, ((), _ctx))

        def setInstrument(self, theInstrument, _ctx=None):
            return _M_omero.model.Dichroic._op_setInstrument.invoke(self, ((theInstrument, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.DichroicPrx.ice_checkedCast(proxy, '::omero::model::Dichroic', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.DichroicPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_DichroicPrx = IcePy.defineProxy('::omero::model::Dichroic', DichroicPrx)

    _M_omero.model._t_Dichroic = IcePy.declareClass('::omero::model::Dichroic')

    _M_omero.model._t_Dichroic = IcePy.defineClass('::omero::model::Dichroic', Dichroic, (), True, _M_omero.model._t_IObject, (), (
        ('_version', (), _M_omero._t_RInt),
        ('_manufacturer', (), _M_omero._t_RString),
        ('_model', (), _M_omero._t_RString),
        ('_lotNumber', (), _M_omero._t_RString),
        ('_serialNumber', (), _M_omero._t_RString),
        ('_instrument', (), _M_omero.model._t_Instrument)
    ))
    Dichroic.ice_type = _M_omero.model._t_Dichroic

    Dichroic._op_getVersion = IcePy.Operation('getVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    Dichroic._op_setVersion = IcePy.Operation('setVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    Dichroic._op_getManufacturer = IcePy.Operation('getManufacturer', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Dichroic._op_setManufacturer = IcePy.Operation('setManufacturer', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Dichroic._op_getModel = IcePy.Operation('getModel', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Dichroic._op_setModel = IcePy.Operation('setModel', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Dichroic._op_getLotNumber = IcePy.Operation('getLotNumber', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Dichroic._op_setLotNumber = IcePy.Operation('setLotNumber', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Dichroic._op_getSerialNumber = IcePy.Operation('getSerialNumber', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Dichroic._op_setSerialNumber = IcePy.Operation('setSerialNumber', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Dichroic._op_getInstrument = IcePy.Operation('getInstrument', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_Instrument, ())
    Dichroic._op_setInstrument = IcePy.Operation('setInstrument', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Instrument),), (), None, ())

    _M_omero.model.Dichroic = Dichroic
    del Dichroic

    _M_omero.model.DichroicPrx = DichroicPrx
    del DichroicPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
