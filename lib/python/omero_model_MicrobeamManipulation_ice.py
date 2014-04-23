# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `MicrobeamManipulation.ice'

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

if not _M_omero.model.__dict__.has_key('MicrobeamManipulationType'):
    _M_omero.model._t_MicrobeamManipulationType = IcePy.declareClass('::omero::model::MicrobeamManipulationType')
    _M_omero.model._t_MicrobeamManipulationTypePrx = IcePy.declareProxy('::omero::model::MicrobeamManipulationType')

if not _M_omero.model.__dict__.has_key('LightSettings'):
    _M_omero.model._t_LightSettings = IcePy.declareClass('::omero::model::LightSettings')
    _M_omero.model._t_LightSettingsPrx = IcePy.declareProxy('::omero::model::LightSettings')

if not _M_omero.model.__dict__.has_key('Experiment'):
    _M_omero.model._t_Experiment = IcePy.declareClass('::omero::model::Experiment')
    _M_omero.model._t_ExperimentPrx = IcePy.declareProxy('::omero::model::Experiment')

if not _M_omero.model.__dict__.has_key('Details'):
    _M_omero.model._t_Details = IcePy.declareClass('::omero::model::Details')
    _M_omero.model._t_DetailsPrx = IcePy.declareProxy('::omero::model::Details')

if not _M_omero.model.__dict__.has_key('_t_MicrobeamManipulationLightSourceSettingsSeq'):
    _M_omero.model._t_MicrobeamManipulationLightSourceSettingsSeq = IcePy.defineSequence('::omero::model::MicrobeamManipulationLightSourceSettingsSeq', (), _M_omero.model._t_LightSettings)

if not _M_omero.model.__dict__.has_key('MicrobeamManipulation'):
    _M_omero.model.MicrobeamManipulation = Ice.createTempClass()
    class MicrobeamManipulation(_M_omero.model.IObject):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _type=None, _lightSourceSettingsSeq=None, _lightSourceSettingsLoaded=False, _experiment=None, _description=None):
            if __builtin__.type(self) == _M_omero.model.MicrobeamManipulation:
                raise RuntimeError('omero.model.MicrobeamManipulation is an abstract class')
            _M_omero.model.IObject.__init__(self, _id, _details, _loaded)
            self._version = _version
            self._type = _type
            self._lightSourceSettingsSeq = _lightSourceSettingsSeq
            self._lightSourceSettingsLoaded = _lightSourceSettingsLoaded
            self._experiment = _experiment
            self._description = _description

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::IObject', '::omero::model::MicrobeamManipulation')

        def ice_id(self, current=None):
            return '::omero::model::MicrobeamManipulation'

        def ice_staticId():
            return '::omero::model::MicrobeamManipulation'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getVersion(self, current=None):
        # def setVersion(self, theVersion, current=None):
        # def getType(self, current=None):
        # def setType(self, theType, current=None):
        # def unloadLightSourceSettings(self, current=None):
        # def sizeOfLightSourceSettings(self, current=None):
        # def copyLightSourceSettings(self, current=None):
        # def addLightSettings(self, target, current=None):
        # def addAllLightSettingsSet(self, targets, current=None):
        # def removeLightSettings(self, theTarget, current=None):
        # def removeAllLightSettingsSet(self, targets, current=None):
        # def clearLightSourceSettings(self, current=None):
        # def reloadLightSourceSettings(self, toCopy, current=None):
        # def getExperiment(self, current=None):
        # def setExperiment(self, theExperiment, current=None):
        # def getDescription(self, current=None):
        # def setDescription(self, theDescription, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_MicrobeamManipulation)

        __repr__ = __str__

    _M_omero.model.MicrobeamManipulationPrx = Ice.createTempClass()
    class MicrobeamManipulationPrx(_M_omero.model.IObjectPrx):

        def getVersion(self, _ctx=None):
            return _M_omero.model.MicrobeamManipulation._op_getVersion.invoke(self, ((), _ctx))

        def setVersion(self, theVersion, _ctx=None):
            return _M_omero.model.MicrobeamManipulation._op_setVersion.invoke(self, ((theVersion, ), _ctx))

        def getType(self, _ctx=None):
            return _M_omero.model.MicrobeamManipulation._op_getType.invoke(self, ((), _ctx))

        def setType(self, theType, _ctx=None):
            return _M_omero.model.MicrobeamManipulation._op_setType.invoke(self, ((theType, ), _ctx))

        def unloadLightSourceSettings(self, _ctx=None):
            return _M_omero.model.MicrobeamManipulation._op_unloadLightSourceSettings.invoke(self, ((), _ctx))

        def sizeOfLightSourceSettings(self, _ctx=None):
            return _M_omero.model.MicrobeamManipulation._op_sizeOfLightSourceSettings.invoke(self, ((), _ctx))

        def copyLightSourceSettings(self, _ctx=None):
            return _M_omero.model.MicrobeamManipulation._op_copyLightSourceSettings.invoke(self, ((), _ctx))

        def addLightSettings(self, target, _ctx=None):
            return _M_omero.model.MicrobeamManipulation._op_addLightSettings.invoke(self, ((target, ), _ctx))

        def addAllLightSettingsSet(self, targets, _ctx=None):
            return _M_omero.model.MicrobeamManipulation._op_addAllLightSettingsSet.invoke(self, ((targets, ), _ctx))

        def removeLightSettings(self, theTarget, _ctx=None):
            return _M_omero.model.MicrobeamManipulation._op_removeLightSettings.invoke(self, ((theTarget, ), _ctx))

        def removeAllLightSettingsSet(self, targets, _ctx=None):
            return _M_omero.model.MicrobeamManipulation._op_removeAllLightSettingsSet.invoke(self, ((targets, ), _ctx))

        def clearLightSourceSettings(self, _ctx=None):
            return _M_omero.model.MicrobeamManipulation._op_clearLightSourceSettings.invoke(self, ((), _ctx))

        def reloadLightSourceSettings(self, toCopy, _ctx=None):
            return _M_omero.model.MicrobeamManipulation._op_reloadLightSourceSettings.invoke(self, ((toCopy, ), _ctx))

        def getExperiment(self, _ctx=None):
            return _M_omero.model.MicrobeamManipulation._op_getExperiment.invoke(self, ((), _ctx))

        def setExperiment(self, theExperiment, _ctx=None):
            return _M_omero.model.MicrobeamManipulation._op_setExperiment.invoke(self, ((theExperiment, ), _ctx))

        def getDescription(self, _ctx=None):
            return _M_omero.model.MicrobeamManipulation._op_getDescription.invoke(self, ((), _ctx))

        def setDescription(self, theDescription, _ctx=None):
            return _M_omero.model.MicrobeamManipulation._op_setDescription.invoke(self, ((theDescription, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.MicrobeamManipulationPrx.ice_checkedCast(proxy, '::omero::model::MicrobeamManipulation', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.MicrobeamManipulationPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_MicrobeamManipulationPrx = IcePy.defineProxy('::omero::model::MicrobeamManipulation', MicrobeamManipulationPrx)

    _M_omero.model._t_MicrobeamManipulation = IcePy.declareClass('::omero::model::MicrobeamManipulation')

    _M_omero.model._t_MicrobeamManipulation = IcePy.defineClass('::omero::model::MicrobeamManipulation', MicrobeamManipulation, (), True, _M_omero.model._t_IObject, (), (
        ('_version', (), _M_omero._t_RInt),
        ('_type', (), _M_omero.model._t_MicrobeamManipulationType),
        ('_lightSourceSettingsSeq', (), _M_omero.model._t_MicrobeamManipulationLightSourceSettingsSeq),
        ('_lightSourceSettingsLoaded', (), IcePy._t_bool),
        ('_experiment', (), _M_omero.model._t_Experiment),
        ('_description', (), _M_omero._t_RString)
    ))
    MicrobeamManipulation.ice_type = _M_omero.model._t_MicrobeamManipulation

    MicrobeamManipulation._op_getVersion = IcePy.Operation('getVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    MicrobeamManipulation._op_setVersion = IcePy.Operation('setVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    MicrobeamManipulation._op_getType = IcePy.Operation('getType', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_MicrobeamManipulationType, ())
    MicrobeamManipulation._op_setType = IcePy.Operation('setType', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_MicrobeamManipulationType),), (), None, ())
    MicrobeamManipulation._op_unloadLightSourceSettings = IcePy.Operation('unloadLightSourceSettings', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    MicrobeamManipulation._op_sizeOfLightSourceSettings = IcePy.Operation('sizeOfLightSourceSettings', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())
    MicrobeamManipulation._op_copyLightSourceSettings = IcePy.Operation('copyLightSourceSettings', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_MicrobeamManipulationLightSourceSettingsSeq, ())
    MicrobeamManipulation._op_addLightSettings = IcePy.Operation('addLightSettings', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_LightSettings),), (), None, ())
    MicrobeamManipulation._op_addAllLightSettingsSet = IcePy.Operation('addAllLightSettingsSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_MicrobeamManipulationLightSourceSettingsSeq),), (), None, ())
    MicrobeamManipulation._op_removeLightSettings = IcePy.Operation('removeLightSettings', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_LightSettings),), (), None, ())
    MicrobeamManipulation._op_removeAllLightSettingsSet = IcePy.Operation('removeAllLightSettingsSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_MicrobeamManipulationLightSourceSettingsSeq),), (), None, ())
    MicrobeamManipulation._op_clearLightSourceSettings = IcePy.Operation('clearLightSourceSettings', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    MicrobeamManipulation._op_reloadLightSourceSettings = IcePy.Operation('reloadLightSourceSettings', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_MicrobeamManipulation),), (), None, ())
    MicrobeamManipulation._op_getExperiment = IcePy.Operation('getExperiment', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_Experiment, ())
    MicrobeamManipulation._op_setExperiment = IcePy.Operation('setExperiment', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Experiment),), (), None, ())
    MicrobeamManipulation._op_getDescription = IcePy.Operation('getDescription', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    MicrobeamManipulation._op_setDescription = IcePy.Operation('setDescription', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())

    _M_omero.model.MicrobeamManipulation = MicrobeamManipulation
    del MicrobeamManipulation

    _M_omero.model.MicrobeamManipulationPrx = MicrobeamManipulationPrx
    del MicrobeamManipulationPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
