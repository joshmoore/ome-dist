# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `ObjectiveSettings.ice'

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

if not _M_omero.model.__dict__.has_key('Medium'):
    _M_omero.model._t_Medium = IcePy.declareClass('::omero::model::Medium')
    _M_omero.model._t_MediumPrx = IcePy.declareProxy('::omero::model::Medium')

if not _M_omero.model.__dict__.has_key('Objective'):
    _M_omero.model._t_Objective = IcePy.declareClass('::omero::model::Objective')
    _M_omero.model._t_ObjectivePrx = IcePy.declareProxy('::omero::model::Objective')

if not _M_omero.model.__dict__.has_key('Details'):
    _M_omero.model._t_Details = IcePy.declareClass('::omero::model::Details')
    _M_omero.model._t_DetailsPrx = IcePy.declareProxy('::omero::model::Details')

if not _M_omero.model.__dict__.has_key('ObjectiveSettings'):
    _M_omero.model.ObjectiveSettings = Ice.createTempClass()
    class ObjectiveSettings(_M_omero.model.IObject):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _correctionCollar=None, _medium=None, _refractiveIndex=None, _objective=None):
            if __builtin__.type(self) == _M_omero.model.ObjectiveSettings:
                raise RuntimeError('omero.model.ObjectiveSettings is an abstract class')
            _M_omero.model.IObject.__init__(self, _id, _details, _loaded)
            self._version = _version
            self._correctionCollar = _correctionCollar
            self._medium = _medium
            self._refractiveIndex = _refractiveIndex
            self._objective = _objective

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::IObject', '::omero::model::ObjectiveSettings')

        def ice_id(self, current=None):
            return '::omero::model::ObjectiveSettings'

        def ice_staticId():
            return '::omero::model::ObjectiveSettings'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getVersion(self, current=None):
        # def setVersion(self, theVersion, current=None):
        # def getCorrectionCollar(self, current=None):
        # def setCorrectionCollar(self, theCorrectionCollar, current=None):
        # def getMedium(self, current=None):
        # def setMedium(self, theMedium, current=None):
        # def getRefractiveIndex(self, current=None):
        # def setRefractiveIndex(self, theRefractiveIndex, current=None):
        # def getObjective(self, current=None):
        # def setObjective(self, theObjective, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_ObjectiveSettings)

        __repr__ = __str__

    _M_omero.model.ObjectiveSettingsPrx = Ice.createTempClass()
    class ObjectiveSettingsPrx(_M_omero.model.IObjectPrx):

        def getVersion(self, _ctx=None):
            return _M_omero.model.ObjectiveSettings._op_getVersion.invoke(self, ((), _ctx))

        def setVersion(self, theVersion, _ctx=None):
            return _M_omero.model.ObjectiveSettings._op_setVersion.invoke(self, ((theVersion, ), _ctx))

        def getCorrectionCollar(self, _ctx=None):
            return _M_omero.model.ObjectiveSettings._op_getCorrectionCollar.invoke(self, ((), _ctx))

        def setCorrectionCollar(self, theCorrectionCollar, _ctx=None):
            return _M_omero.model.ObjectiveSettings._op_setCorrectionCollar.invoke(self, ((theCorrectionCollar, ), _ctx))

        def getMedium(self, _ctx=None):
            return _M_omero.model.ObjectiveSettings._op_getMedium.invoke(self, ((), _ctx))

        def setMedium(self, theMedium, _ctx=None):
            return _M_omero.model.ObjectiveSettings._op_setMedium.invoke(self, ((theMedium, ), _ctx))

        def getRefractiveIndex(self, _ctx=None):
            return _M_omero.model.ObjectiveSettings._op_getRefractiveIndex.invoke(self, ((), _ctx))

        def setRefractiveIndex(self, theRefractiveIndex, _ctx=None):
            return _M_omero.model.ObjectiveSettings._op_setRefractiveIndex.invoke(self, ((theRefractiveIndex, ), _ctx))

        def getObjective(self, _ctx=None):
            return _M_omero.model.ObjectiveSettings._op_getObjective.invoke(self, ((), _ctx))

        def setObjective(self, theObjective, _ctx=None):
            return _M_omero.model.ObjectiveSettings._op_setObjective.invoke(self, ((theObjective, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.ObjectiveSettingsPrx.ice_checkedCast(proxy, '::omero::model::ObjectiveSettings', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.ObjectiveSettingsPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_ObjectiveSettingsPrx = IcePy.defineProxy('::omero::model::ObjectiveSettings', ObjectiveSettingsPrx)

    _M_omero.model._t_ObjectiveSettings = IcePy.declareClass('::omero::model::ObjectiveSettings')

    _M_omero.model._t_ObjectiveSettings = IcePy.defineClass('::omero::model::ObjectiveSettings', ObjectiveSettings, (), True, _M_omero.model._t_IObject, (), (
        ('_version', (), _M_omero._t_RInt),
        ('_correctionCollar', (), _M_omero._t_RDouble),
        ('_medium', (), _M_omero.model._t_Medium),
        ('_refractiveIndex', (), _M_omero._t_RDouble),
        ('_objective', (), _M_omero.model._t_Objective)
    ))
    ObjectiveSettings.ice_type = _M_omero.model._t_ObjectiveSettings

    ObjectiveSettings._op_getVersion = IcePy.Operation('getVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    ObjectiveSettings._op_setVersion = IcePy.Operation('setVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    ObjectiveSettings._op_getCorrectionCollar = IcePy.Operation('getCorrectionCollar', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RDouble, ())
    ObjectiveSettings._op_setCorrectionCollar = IcePy.Operation('setCorrectionCollar', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RDouble),), (), None, ())
    ObjectiveSettings._op_getMedium = IcePy.Operation('getMedium', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_Medium, ())
    ObjectiveSettings._op_setMedium = IcePy.Operation('setMedium', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Medium),), (), None, ())
    ObjectiveSettings._op_getRefractiveIndex = IcePy.Operation('getRefractiveIndex', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RDouble, ())
    ObjectiveSettings._op_setRefractiveIndex = IcePy.Operation('setRefractiveIndex', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RDouble),), (), None, ())
    ObjectiveSettings._op_getObjective = IcePy.Operation('getObjective', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_Objective, ())
    ObjectiveSettings._op_setObjective = IcePy.Operation('setObjective', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Objective),), (), None, ())

    _M_omero.model.ObjectiveSettings = ObjectiveSettings
    del ObjectiveSettings

    _M_omero.model.ObjectiveSettingsPrx = ObjectiveSettingsPrx
    del ObjectiveSettingsPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
