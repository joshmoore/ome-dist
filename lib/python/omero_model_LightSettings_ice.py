# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `LightSettings.ice'

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

if not _M_omero.model.__dict__.has_key('LightSource'):
    _M_omero.model._t_LightSource = IcePy.declareClass('::omero::model::LightSource')
    _M_omero.model._t_LightSourcePrx = IcePy.declareProxy('::omero::model::LightSource')

if not _M_omero.model.__dict__.has_key('MicrobeamManipulation'):
    _M_omero.model._t_MicrobeamManipulation = IcePy.declareClass('::omero::model::MicrobeamManipulation')
    _M_omero.model._t_MicrobeamManipulationPrx = IcePy.declareProxy('::omero::model::MicrobeamManipulation')

if not _M_omero.model.__dict__.has_key('Details'):
    _M_omero.model._t_Details = IcePy.declareClass('::omero::model::Details')
    _M_omero.model._t_DetailsPrx = IcePy.declareProxy('::omero::model::Details')

if not _M_omero.model.__dict__.has_key('LightSettings'):
    _M_omero.model.LightSettings = Ice.createTempClass()
    class LightSettings(_M_omero.model.IObject):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _attenuation=None, _wavelength=None, _lightSource=None, _microbeamManipulation=None):
            if __builtin__.type(self) == _M_omero.model.LightSettings:
                raise RuntimeError('omero.model.LightSettings is an abstract class')
            _M_omero.model.IObject.__init__(self, _id, _details, _loaded)
            self._version = _version
            self._attenuation = _attenuation
            self._wavelength = _wavelength
            self._lightSource = _lightSource
            self._microbeamManipulation = _microbeamManipulation

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::IObject', '::omero::model::LightSettings')

        def ice_id(self, current=None):
            return '::omero::model::LightSettings'

        def ice_staticId():
            return '::omero::model::LightSettings'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getVersion(self, current=None):
        # def setVersion(self, theVersion, current=None):
        # def getAttenuation(self, current=None):
        # def setAttenuation(self, theAttenuation, current=None):
        # def getWavelength(self, current=None):
        # def setWavelength(self, theWavelength, current=None):
        # def getLightSource(self, current=None):
        # def setLightSource(self, theLightSource, current=None):
        # def getMicrobeamManipulation(self, current=None):
        # def setMicrobeamManipulation(self, theMicrobeamManipulation, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_LightSettings)

        __repr__ = __str__

    _M_omero.model.LightSettingsPrx = Ice.createTempClass()
    class LightSettingsPrx(_M_omero.model.IObjectPrx):

        def getVersion(self, _ctx=None):
            return _M_omero.model.LightSettings._op_getVersion.invoke(self, ((), _ctx))

        def setVersion(self, theVersion, _ctx=None):
            return _M_omero.model.LightSettings._op_setVersion.invoke(self, ((theVersion, ), _ctx))

        def getAttenuation(self, _ctx=None):
            return _M_omero.model.LightSettings._op_getAttenuation.invoke(self, ((), _ctx))

        def setAttenuation(self, theAttenuation, _ctx=None):
            return _M_omero.model.LightSettings._op_setAttenuation.invoke(self, ((theAttenuation, ), _ctx))

        def getWavelength(self, _ctx=None):
            return _M_omero.model.LightSettings._op_getWavelength.invoke(self, ((), _ctx))

        def setWavelength(self, theWavelength, _ctx=None):
            return _M_omero.model.LightSettings._op_setWavelength.invoke(self, ((theWavelength, ), _ctx))

        def getLightSource(self, _ctx=None):
            return _M_omero.model.LightSettings._op_getLightSource.invoke(self, ((), _ctx))

        def setLightSource(self, theLightSource, _ctx=None):
            return _M_omero.model.LightSettings._op_setLightSource.invoke(self, ((theLightSource, ), _ctx))

        def getMicrobeamManipulation(self, _ctx=None):
            return _M_omero.model.LightSettings._op_getMicrobeamManipulation.invoke(self, ((), _ctx))

        def setMicrobeamManipulation(self, theMicrobeamManipulation, _ctx=None):
            return _M_omero.model.LightSettings._op_setMicrobeamManipulation.invoke(self, ((theMicrobeamManipulation, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.LightSettingsPrx.ice_checkedCast(proxy, '::omero::model::LightSettings', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.LightSettingsPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_LightSettingsPrx = IcePy.defineProxy('::omero::model::LightSettings', LightSettingsPrx)

    _M_omero.model._t_LightSettings = IcePy.declareClass('::omero::model::LightSettings')

    _M_omero.model._t_LightSettings = IcePy.defineClass('::omero::model::LightSettings', LightSettings, (), True, _M_omero.model._t_IObject, (), (
        ('_version', (), _M_omero._t_RInt),
        ('_attenuation', (), _M_omero._t_RDouble),
        ('_wavelength', (), _M_omero._t_RInt),
        ('_lightSource', (), _M_omero.model._t_LightSource),
        ('_microbeamManipulation', (), _M_omero.model._t_MicrobeamManipulation)
    ))
    LightSettings.ice_type = _M_omero.model._t_LightSettings

    LightSettings._op_getVersion = IcePy.Operation('getVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    LightSettings._op_setVersion = IcePy.Operation('setVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    LightSettings._op_getAttenuation = IcePy.Operation('getAttenuation', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RDouble, ())
    LightSettings._op_setAttenuation = IcePy.Operation('setAttenuation', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RDouble),), (), None, ())
    LightSettings._op_getWavelength = IcePy.Operation('getWavelength', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    LightSettings._op_setWavelength = IcePy.Operation('setWavelength', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    LightSettings._op_getLightSource = IcePy.Operation('getLightSource', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_LightSource, ())
    LightSettings._op_setLightSource = IcePy.Operation('setLightSource', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_LightSource),), (), None, ())
    LightSettings._op_getMicrobeamManipulation = IcePy.Operation('getMicrobeamManipulation', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_MicrobeamManipulation, ())
    LightSettings._op_setMicrobeamManipulation = IcePy.Operation('setMicrobeamManipulation', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_MicrobeamManipulation),), (), None, ())

    _M_omero.model.LightSettings = LightSettings
    del LightSettings

    _M_omero.model.LightSettingsPrx = LightSettingsPrx
    del LightSettingsPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
