# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `ImagingEnvironment.ice'

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

if not _M_omero.model.__dict__.has_key('Details'):
    _M_omero.model._t_Details = IcePy.declareClass('::omero::model::Details')
    _M_omero.model._t_DetailsPrx = IcePy.declareProxy('::omero::model::Details')

if not _M_omero.model.__dict__.has_key('ImagingEnvironment'):
    _M_omero.model.ImagingEnvironment = Ice.createTempClass()
    class ImagingEnvironment(_M_omero.model.IObject):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _temperature=None, _airPressure=None, _humidity=None, _co2percent=None):
            if __builtin__.type(self) == _M_omero.model.ImagingEnvironment:
                raise RuntimeError('omero.model.ImagingEnvironment is an abstract class')
            _M_omero.model.IObject.__init__(self, _id, _details, _loaded)
            self._version = _version
            self._temperature = _temperature
            self._airPressure = _airPressure
            self._humidity = _humidity
            self._co2percent = _co2percent

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::IObject', '::omero::model::ImagingEnvironment')

        def ice_id(self, current=None):
            return '::omero::model::ImagingEnvironment'

        def ice_staticId():
            return '::omero::model::ImagingEnvironment'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getVersion(self, current=None):
        # def setVersion(self, theVersion, current=None):
        # def getTemperature(self, current=None):
        # def setTemperature(self, theTemperature, current=None):
        # def getAirPressure(self, current=None):
        # def setAirPressure(self, theAirPressure, current=None):
        # def getHumidity(self, current=None):
        # def setHumidity(self, theHumidity, current=None):
        # def getCo2percent(self, current=None):
        # def setCo2percent(self, theCo2percent, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_ImagingEnvironment)

        __repr__ = __str__

    _M_omero.model.ImagingEnvironmentPrx = Ice.createTempClass()
    class ImagingEnvironmentPrx(_M_omero.model.IObjectPrx):

        def getVersion(self, _ctx=None):
            return _M_omero.model.ImagingEnvironment._op_getVersion.invoke(self, ((), _ctx))

        def setVersion(self, theVersion, _ctx=None):
            return _M_omero.model.ImagingEnvironment._op_setVersion.invoke(self, ((theVersion, ), _ctx))

        def getTemperature(self, _ctx=None):
            return _M_omero.model.ImagingEnvironment._op_getTemperature.invoke(self, ((), _ctx))

        def setTemperature(self, theTemperature, _ctx=None):
            return _M_omero.model.ImagingEnvironment._op_setTemperature.invoke(self, ((theTemperature, ), _ctx))

        def getAirPressure(self, _ctx=None):
            return _M_omero.model.ImagingEnvironment._op_getAirPressure.invoke(self, ((), _ctx))

        def setAirPressure(self, theAirPressure, _ctx=None):
            return _M_omero.model.ImagingEnvironment._op_setAirPressure.invoke(self, ((theAirPressure, ), _ctx))

        def getHumidity(self, _ctx=None):
            return _M_omero.model.ImagingEnvironment._op_getHumidity.invoke(self, ((), _ctx))

        def setHumidity(self, theHumidity, _ctx=None):
            return _M_omero.model.ImagingEnvironment._op_setHumidity.invoke(self, ((theHumidity, ), _ctx))

        def getCo2percent(self, _ctx=None):
            return _M_omero.model.ImagingEnvironment._op_getCo2percent.invoke(self, ((), _ctx))

        def setCo2percent(self, theCo2percent, _ctx=None):
            return _M_omero.model.ImagingEnvironment._op_setCo2percent.invoke(self, ((theCo2percent, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.ImagingEnvironmentPrx.ice_checkedCast(proxy, '::omero::model::ImagingEnvironment', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.ImagingEnvironmentPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_ImagingEnvironmentPrx = IcePy.defineProxy('::omero::model::ImagingEnvironment', ImagingEnvironmentPrx)

    _M_omero.model._t_ImagingEnvironment = IcePy.declareClass('::omero::model::ImagingEnvironment')

    _M_omero.model._t_ImagingEnvironment = IcePy.defineClass('::omero::model::ImagingEnvironment', ImagingEnvironment, (), True, _M_omero.model._t_IObject, (), (
        ('_version', (), _M_omero._t_RInt),
        ('_temperature', (), _M_omero._t_RDouble),
        ('_airPressure', (), _M_omero._t_RDouble),
        ('_humidity', (), _M_omero._t_RDouble),
        ('_co2percent', (), _M_omero._t_RDouble)
    ))
    ImagingEnvironment.ice_type = _M_omero.model._t_ImagingEnvironment

    ImagingEnvironment._op_getVersion = IcePy.Operation('getVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    ImagingEnvironment._op_setVersion = IcePy.Operation('setVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    ImagingEnvironment._op_getTemperature = IcePy.Operation('getTemperature', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RDouble, ())
    ImagingEnvironment._op_setTemperature = IcePy.Operation('setTemperature', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RDouble),), (), None, ())
    ImagingEnvironment._op_getAirPressure = IcePy.Operation('getAirPressure', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RDouble, ())
    ImagingEnvironment._op_setAirPressure = IcePy.Operation('setAirPressure', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RDouble),), (), None, ())
    ImagingEnvironment._op_getHumidity = IcePy.Operation('getHumidity', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RDouble, ())
    ImagingEnvironment._op_setHumidity = IcePy.Operation('setHumidity', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RDouble),), (), None, ())
    ImagingEnvironment._op_getCo2percent = IcePy.Operation('getCo2percent', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RDouble, ())
    ImagingEnvironment._op_setCo2percent = IcePy.Operation('setCo2percent', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RDouble),), (), None, ())

    _M_omero.model.ImagingEnvironment = ImagingEnvironment
    del ImagingEnvironment

    _M_omero.model.ImagingEnvironmentPrx = ImagingEnvironmentPrx
    del ImagingEnvironmentPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
