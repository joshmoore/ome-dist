# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `Experiment.ice'

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

if not _M_omero.model.__dict__.has_key('ExperimentType'):
    _M_omero.model._t_ExperimentType = IcePy.declareClass('::omero::model::ExperimentType')
    _M_omero.model._t_ExperimentTypePrx = IcePy.declareProxy('::omero::model::ExperimentType')

if not _M_omero.model.__dict__.has_key('MicrobeamManipulation'):
    _M_omero.model._t_MicrobeamManipulation = IcePy.declareClass('::omero::model::MicrobeamManipulation')
    _M_omero.model._t_MicrobeamManipulationPrx = IcePy.declareProxy('::omero::model::MicrobeamManipulation')

if not _M_omero.model.__dict__.has_key('Details'):
    _M_omero.model._t_Details = IcePy.declareClass('::omero::model::Details')
    _M_omero.model._t_DetailsPrx = IcePy.declareProxy('::omero::model::Details')

if not _M_omero.model.__dict__.has_key('_t_ExperimentMicrobeamManipulationSeq'):
    _M_omero.model._t_ExperimentMicrobeamManipulationSeq = IcePy.defineSequence('::omero::model::ExperimentMicrobeamManipulationSeq', (), _M_omero.model._t_MicrobeamManipulation)

if not _M_omero.model.__dict__.has_key('Experiment'):
    _M_omero.model.Experiment = Ice.createTempClass()
    class Experiment(_M_omero.model.IObject):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _type=None, _microbeamManipulationSeq=None, _microbeamManipulationLoaded=False, _description=None):
            if __builtin__.type(self) == _M_omero.model.Experiment:
                raise RuntimeError('omero.model.Experiment is an abstract class')
            _M_omero.model.IObject.__init__(self, _id, _details, _loaded)
            self._version = _version
            self._type = _type
            self._microbeamManipulationSeq = _microbeamManipulationSeq
            self._microbeamManipulationLoaded = _microbeamManipulationLoaded
            self._description = _description

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::Experiment', '::omero::model::IObject')

        def ice_id(self, current=None):
            return '::omero::model::Experiment'

        def ice_staticId():
            return '::omero::model::Experiment'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getVersion(self, current=None):
        # def setVersion(self, theVersion, current=None):
        # def getType(self, current=None):
        # def setType(self, theType, current=None):
        # def unloadMicrobeamManipulation(self, current=None):
        # def sizeOfMicrobeamManipulation(self, current=None):
        # def copyMicrobeamManipulation(self, current=None):
        # def addMicrobeamManipulation(self, target, current=None):
        # def addAllMicrobeamManipulationSet(self, targets, current=None):
        # def removeMicrobeamManipulation(self, theTarget, current=None):
        # def removeAllMicrobeamManipulationSet(self, targets, current=None):
        # def clearMicrobeamManipulation(self, current=None):
        # def reloadMicrobeamManipulation(self, toCopy, current=None):
        # def getDescription(self, current=None):
        # def setDescription(self, theDescription, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_Experiment)

        __repr__ = __str__

    _M_omero.model.ExperimentPrx = Ice.createTempClass()
    class ExperimentPrx(_M_omero.model.IObjectPrx):

        def getVersion(self, _ctx=None):
            return _M_omero.model.Experiment._op_getVersion.invoke(self, ((), _ctx))

        def setVersion(self, theVersion, _ctx=None):
            return _M_omero.model.Experiment._op_setVersion.invoke(self, ((theVersion, ), _ctx))

        def getType(self, _ctx=None):
            return _M_omero.model.Experiment._op_getType.invoke(self, ((), _ctx))

        def setType(self, theType, _ctx=None):
            return _M_omero.model.Experiment._op_setType.invoke(self, ((theType, ), _ctx))

        def unloadMicrobeamManipulation(self, _ctx=None):
            return _M_omero.model.Experiment._op_unloadMicrobeamManipulation.invoke(self, ((), _ctx))

        def sizeOfMicrobeamManipulation(self, _ctx=None):
            return _M_omero.model.Experiment._op_sizeOfMicrobeamManipulation.invoke(self, ((), _ctx))

        def copyMicrobeamManipulation(self, _ctx=None):
            return _M_omero.model.Experiment._op_copyMicrobeamManipulation.invoke(self, ((), _ctx))

        def addMicrobeamManipulation(self, target, _ctx=None):
            return _M_omero.model.Experiment._op_addMicrobeamManipulation.invoke(self, ((target, ), _ctx))

        def addAllMicrobeamManipulationSet(self, targets, _ctx=None):
            return _M_omero.model.Experiment._op_addAllMicrobeamManipulationSet.invoke(self, ((targets, ), _ctx))

        def removeMicrobeamManipulation(self, theTarget, _ctx=None):
            return _M_omero.model.Experiment._op_removeMicrobeamManipulation.invoke(self, ((theTarget, ), _ctx))

        def removeAllMicrobeamManipulationSet(self, targets, _ctx=None):
            return _M_omero.model.Experiment._op_removeAllMicrobeamManipulationSet.invoke(self, ((targets, ), _ctx))

        def clearMicrobeamManipulation(self, _ctx=None):
            return _M_omero.model.Experiment._op_clearMicrobeamManipulation.invoke(self, ((), _ctx))

        def reloadMicrobeamManipulation(self, toCopy, _ctx=None):
            return _M_omero.model.Experiment._op_reloadMicrobeamManipulation.invoke(self, ((toCopy, ), _ctx))

        def getDescription(self, _ctx=None):
            return _M_omero.model.Experiment._op_getDescription.invoke(self, ((), _ctx))

        def setDescription(self, theDescription, _ctx=None):
            return _M_omero.model.Experiment._op_setDescription.invoke(self, ((theDescription, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.ExperimentPrx.ice_checkedCast(proxy, '::omero::model::Experiment', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.ExperimentPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_ExperimentPrx = IcePy.defineProxy('::omero::model::Experiment', ExperimentPrx)

    _M_omero.model._t_Experiment = IcePy.declareClass('::omero::model::Experiment')

    _M_omero.model._t_Experiment = IcePy.defineClass('::omero::model::Experiment', Experiment, (), True, _M_omero.model._t_IObject, (), (
        ('_version', (), _M_omero._t_RInt),
        ('_type', (), _M_omero.model._t_ExperimentType),
        ('_microbeamManipulationSeq', (), _M_omero.model._t_ExperimentMicrobeamManipulationSeq),
        ('_microbeamManipulationLoaded', (), IcePy._t_bool),
        ('_description', (), _M_omero._t_RString)
    ))
    Experiment.ice_type = _M_omero.model._t_Experiment

    Experiment._op_getVersion = IcePy.Operation('getVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    Experiment._op_setVersion = IcePy.Operation('setVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    Experiment._op_getType = IcePy.Operation('getType', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_ExperimentType, ())
    Experiment._op_setType = IcePy.Operation('setType', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ExperimentType),), (), None, ())
    Experiment._op_unloadMicrobeamManipulation = IcePy.Operation('unloadMicrobeamManipulation', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Experiment._op_sizeOfMicrobeamManipulation = IcePy.Operation('sizeOfMicrobeamManipulation', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())
    Experiment._op_copyMicrobeamManipulation = IcePy.Operation('copyMicrobeamManipulation', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_ExperimentMicrobeamManipulationSeq, ())
    Experiment._op_addMicrobeamManipulation = IcePy.Operation('addMicrobeamManipulation', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_MicrobeamManipulation),), (), None, ())
    Experiment._op_addAllMicrobeamManipulationSet = IcePy.Operation('addAllMicrobeamManipulationSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ExperimentMicrobeamManipulationSeq),), (), None, ())
    Experiment._op_removeMicrobeamManipulation = IcePy.Operation('removeMicrobeamManipulation', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_MicrobeamManipulation),), (), None, ())
    Experiment._op_removeAllMicrobeamManipulationSet = IcePy.Operation('removeAllMicrobeamManipulationSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ExperimentMicrobeamManipulationSeq),), (), None, ())
    Experiment._op_clearMicrobeamManipulation = IcePy.Operation('clearMicrobeamManipulation', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Experiment._op_reloadMicrobeamManipulation = IcePy.Operation('reloadMicrobeamManipulation', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Experiment),), (), None, ())
    Experiment._op_getDescription = IcePy.Operation('getDescription', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Experiment._op_setDescription = IcePy.Operation('setDescription', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())

    _M_omero.model.Experiment = Experiment
    del Experiment

    _M_omero.model.ExperimentPrx = ExperimentPrx
    del ExperimentPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
