# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `Laser.ice'

import Ice, IcePy, __builtin__

if not Ice.__dict__.has_key("_struct_marker"):
    Ice._struct_marker = object()
import omero_model_IObject_ice
import omero_RTypes_ice
import omero_System_ice
import omero_Collections_ice
import omero_model_LightSource_ice

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

if not _M_omero.model.__dict__.has_key('LaserType'):
    _M_omero.model._t_LaserType = IcePy.declareClass('::omero::model::LaserType')
    _M_omero.model._t_LaserTypePrx = IcePy.declareProxy('::omero::model::LaserType')

if not _M_omero.model.__dict__.has_key('LaserMedium'):
    _M_omero.model._t_LaserMedium = IcePy.declareClass('::omero::model::LaserMedium')
    _M_omero.model._t_LaserMediumPrx = IcePy.declareProxy('::omero::model::LaserMedium')

if not _M_omero.model.__dict__.has_key('Pulse'):
    _M_omero.model._t_Pulse = IcePy.declareClass('::omero::model::Pulse')
    _M_omero.model._t_PulsePrx = IcePy.declareProxy('::omero::model::Pulse')

if not _M_omero.model.__dict__.has_key('LightSource'):
    _M_omero.model._t_LightSource = IcePy.declareClass('::omero::model::LightSource')
    _M_omero.model._t_LightSourcePrx = IcePy.declareProxy('::omero::model::LightSource')

if not _M_omero.model.__dict__.has_key('Instrument'):
    _M_omero.model._t_Instrument = IcePy.declareClass('::omero::model::Instrument')
    _M_omero.model._t_InstrumentPrx = IcePy.declareProxy('::omero::model::Instrument')

if not _M_omero.model.__dict__.has_key('Details'):
    _M_omero.model._t_Details = IcePy.declareClass('::omero::model::Details')
    _M_omero.model._t_DetailsPrx = IcePy.declareProxy('::omero::model::Details')

if not _M_omero.model.__dict__.has_key('Laser'):
    _M_omero.model.Laser = Ice.createTempClass()
    class Laser(_M_omero.model.LightSource):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _manufacturer=None, _model=None, _power=None, _lotNumber=None, _serialNumber=None, _instrument=None, _type=None, _laserMedium=None, _frequencyMultiplication=None, _tuneable=None, _pulse=None, _wavelength=None, _pockelCell=None, _pump=None, _repetitionRate=None):
            if __builtin__.type(self) == _M_omero.model.Laser:
                raise RuntimeError('omero.model.Laser is an abstract class')
            _M_omero.model.LightSource.__init__(self, _id, _details, _loaded, _version, _manufacturer, _model, _power, _lotNumber, _serialNumber, _instrument)
            self._type = _type
            self._laserMedium = _laserMedium
            self._frequencyMultiplication = _frequencyMultiplication
            self._tuneable = _tuneable
            self._pulse = _pulse
            self._wavelength = _wavelength
            self._pockelCell = _pockelCell
            self._pump = _pump
            self._repetitionRate = _repetitionRate

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::IObject', '::omero::model::Laser', '::omero::model::LightSource')

        def ice_id(self, current=None):
            return '::omero::model::Laser'

        def ice_staticId():
            return '::omero::model::Laser'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getType(self, current=None):
        # def setType(self, theType, current=None):
        # def getLaserMedium(self, current=None):
        # def setLaserMedium(self, theLaserMedium, current=None):
        # def getFrequencyMultiplication(self, current=None):
        # def setFrequencyMultiplication(self, theFrequencyMultiplication, current=None):
        # def getTuneable(self, current=None):
        # def setTuneable(self, theTuneable, current=None):
        # def getPulse(self, current=None):
        # def setPulse(self, thePulse, current=None):
        # def getWavelength(self, current=None):
        # def setWavelength(self, theWavelength, current=None):
        # def getPockelCell(self, current=None):
        # def setPockelCell(self, thePockelCell, current=None):
        # def getPump(self, current=None):
        # def setPump(self, thePump, current=None):
        # def getRepetitionRate(self, current=None):
        # def setRepetitionRate(self, theRepetitionRate, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_Laser)

        __repr__ = __str__

    _M_omero.model.LaserPrx = Ice.createTempClass()
    class LaserPrx(_M_omero.model.LightSourcePrx):

        def getType(self, _ctx=None):
            return _M_omero.model.Laser._op_getType.invoke(self, ((), _ctx))

        def setType(self, theType, _ctx=None):
            return _M_omero.model.Laser._op_setType.invoke(self, ((theType, ), _ctx))

        def getLaserMedium(self, _ctx=None):
            return _M_omero.model.Laser._op_getLaserMedium.invoke(self, ((), _ctx))

        def setLaserMedium(self, theLaserMedium, _ctx=None):
            return _M_omero.model.Laser._op_setLaserMedium.invoke(self, ((theLaserMedium, ), _ctx))

        def getFrequencyMultiplication(self, _ctx=None):
            return _M_omero.model.Laser._op_getFrequencyMultiplication.invoke(self, ((), _ctx))

        def setFrequencyMultiplication(self, theFrequencyMultiplication, _ctx=None):
            return _M_omero.model.Laser._op_setFrequencyMultiplication.invoke(self, ((theFrequencyMultiplication, ), _ctx))

        def getTuneable(self, _ctx=None):
            return _M_omero.model.Laser._op_getTuneable.invoke(self, ((), _ctx))

        def setTuneable(self, theTuneable, _ctx=None):
            return _M_omero.model.Laser._op_setTuneable.invoke(self, ((theTuneable, ), _ctx))

        def getPulse(self, _ctx=None):
            return _M_omero.model.Laser._op_getPulse.invoke(self, ((), _ctx))

        def setPulse(self, thePulse, _ctx=None):
            return _M_omero.model.Laser._op_setPulse.invoke(self, ((thePulse, ), _ctx))

        def getWavelength(self, _ctx=None):
            return _M_omero.model.Laser._op_getWavelength.invoke(self, ((), _ctx))

        def setWavelength(self, theWavelength, _ctx=None):
            return _M_omero.model.Laser._op_setWavelength.invoke(self, ((theWavelength, ), _ctx))

        def getPockelCell(self, _ctx=None):
            return _M_omero.model.Laser._op_getPockelCell.invoke(self, ((), _ctx))

        def setPockelCell(self, thePockelCell, _ctx=None):
            return _M_omero.model.Laser._op_setPockelCell.invoke(self, ((thePockelCell, ), _ctx))

        def getPump(self, _ctx=None):
            return _M_omero.model.Laser._op_getPump.invoke(self, ((), _ctx))

        def setPump(self, thePump, _ctx=None):
            return _M_omero.model.Laser._op_setPump.invoke(self, ((thePump, ), _ctx))

        def getRepetitionRate(self, _ctx=None):
            return _M_omero.model.Laser._op_getRepetitionRate.invoke(self, ((), _ctx))

        def setRepetitionRate(self, theRepetitionRate, _ctx=None):
            return _M_omero.model.Laser._op_setRepetitionRate.invoke(self, ((theRepetitionRate, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.LaserPrx.ice_checkedCast(proxy, '::omero::model::Laser', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.LaserPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_LaserPrx = IcePy.defineProxy('::omero::model::Laser', LaserPrx)

    _M_omero.model._t_Laser = IcePy.declareClass('::omero::model::Laser')

    _M_omero.model._t_Laser = IcePy.defineClass('::omero::model::Laser', Laser, (), True, _M_omero.model._t_LightSource, (), (
        ('_type', (), _M_omero.model._t_LaserType),
        ('_laserMedium', (), _M_omero.model._t_LaserMedium),
        ('_frequencyMultiplication', (), _M_omero._t_RInt),
        ('_tuneable', (), _M_omero._t_RBool),
        ('_pulse', (), _M_omero.model._t_Pulse),
        ('_wavelength', (), _M_omero._t_RInt),
        ('_pockelCell', (), _M_omero._t_RBool),
        ('_pump', (), _M_omero.model._t_LightSource),
        ('_repetitionRate', (), _M_omero._t_RDouble)
    ))
    Laser.ice_type = _M_omero.model._t_Laser

    Laser._op_getType = IcePy.Operation('getType', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_LaserType, ())
    Laser._op_setType = IcePy.Operation('setType', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_LaserType),), (), None, ())
    Laser._op_getLaserMedium = IcePy.Operation('getLaserMedium', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_LaserMedium, ())
    Laser._op_setLaserMedium = IcePy.Operation('setLaserMedium', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_LaserMedium),), (), None, ())
    Laser._op_getFrequencyMultiplication = IcePy.Operation('getFrequencyMultiplication', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    Laser._op_setFrequencyMultiplication = IcePy.Operation('setFrequencyMultiplication', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    Laser._op_getTuneable = IcePy.Operation('getTuneable', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RBool, ())
    Laser._op_setTuneable = IcePy.Operation('setTuneable', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RBool),), (), None, ())
    Laser._op_getPulse = IcePy.Operation('getPulse', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_Pulse, ())
    Laser._op_setPulse = IcePy.Operation('setPulse', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Pulse),), (), None, ())
    Laser._op_getWavelength = IcePy.Operation('getWavelength', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    Laser._op_setWavelength = IcePy.Operation('setWavelength', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    Laser._op_getPockelCell = IcePy.Operation('getPockelCell', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RBool, ())
    Laser._op_setPockelCell = IcePy.Operation('setPockelCell', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RBool),), (), None, ())
    Laser._op_getPump = IcePy.Operation('getPump', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_LightSource, ())
    Laser._op_setPump = IcePy.Operation('setPump', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_LightSource),), (), None, ())
    Laser._op_getRepetitionRate = IcePy.Operation('getRepetitionRate', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RDouble, ())
    Laser._op_setRepetitionRate = IcePy.Operation('setRepetitionRate', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RDouble),), (), None, ())

    _M_omero.model.Laser = Laser
    del Laser

    _M_omero.model.LaserPrx = LaserPrx
    del LaserPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
