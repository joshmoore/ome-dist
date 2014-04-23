# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `StageLabel.ice'

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

if not _M_omero.model.__dict__.has_key('StageLabel'):
    _M_omero.model.StageLabel = Ice.createTempClass()
    class StageLabel(_M_omero.model.IObject):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _positionX=None, _positionY=None, _positionZ=None, _name=None):
            if __builtin__.type(self) == _M_omero.model.StageLabel:
                raise RuntimeError('omero.model.StageLabel is an abstract class')
            _M_omero.model.IObject.__init__(self, _id, _details, _loaded)
            self._version = _version
            self._positionX = _positionX
            self._positionY = _positionY
            self._positionZ = _positionZ
            self._name = _name

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::IObject', '::omero::model::StageLabel')

        def ice_id(self, current=None):
            return '::omero::model::StageLabel'

        def ice_staticId():
            return '::omero::model::StageLabel'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getVersion(self, current=None):
        # def setVersion(self, theVersion, current=None):
        # def getPositionX(self, current=None):
        # def setPositionX(self, thePositionX, current=None):
        # def getPositionY(self, current=None):
        # def setPositionY(self, thePositionY, current=None):
        # def getPositionZ(self, current=None):
        # def setPositionZ(self, thePositionZ, current=None):
        # def getName(self, current=None):
        # def setName(self, theName, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_StageLabel)

        __repr__ = __str__

    _M_omero.model.StageLabelPrx = Ice.createTempClass()
    class StageLabelPrx(_M_omero.model.IObjectPrx):

        def getVersion(self, _ctx=None):
            return _M_omero.model.StageLabel._op_getVersion.invoke(self, ((), _ctx))

        def setVersion(self, theVersion, _ctx=None):
            return _M_omero.model.StageLabel._op_setVersion.invoke(self, ((theVersion, ), _ctx))

        def getPositionX(self, _ctx=None):
            return _M_omero.model.StageLabel._op_getPositionX.invoke(self, ((), _ctx))

        def setPositionX(self, thePositionX, _ctx=None):
            return _M_omero.model.StageLabel._op_setPositionX.invoke(self, ((thePositionX, ), _ctx))

        def getPositionY(self, _ctx=None):
            return _M_omero.model.StageLabel._op_getPositionY.invoke(self, ((), _ctx))

        def setPositionY(self, thePositionY, _ctx=None):
            return _M_omero.model.StageLabel._op_setPositionY.invoke(self, ((thePositionY, ), _ctx))

        def getPositionZ(self, _ctx=None):
            return _M_omero.model.StageLabel._op_getPositionZ.invoke(self, ((), _ctx))

        def setPositionZ(self, thePositionZ, _ctx=None):
            return _M_omero.model.StageLabel._op_setPositionZ.invoke(self, ((thePositionZ, ), _ctx))

        def getName(self, _ctx=None):
            return _M_omero.model.StageLabel._op_getName.invoke(self, ((), _ctx))

        def setName(self, theName, _ctx=None):
            return _M_omero.model.StageLabel._op_setName.invoke(self, ((theName, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.StageLabelPrx.ice_checkedCast(proxy, '::omero::model::StageLabel', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.StageLabelPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_StageLabelPrx = IcePy.defineProxy('::omero::model::StageLabel', StageLabelPrx)

    _M_omero.model._t_StageLabel = IcePy.declareClass('::omero::model::StageLabel')

    _M_omero.model._t_StageLabel = IcePy.defineClass('::omero::model::StageLabel', StageLabel, (), True, _M_omero.model._t_IObject, (), (
        ('_version', (), _M_omero._t_RInt),
        ('_positionX', (), _M_omero._t_RDouble),
        ('_positionY', (), _M_omero._t_RDouble),
        ('_positionZ', (), _M_omero._t_RDouble),
        ('_name', (), _M_omero._t_RString)
    ))
    StageLabel.ice_type = _M_omero.model._t_StageLabel

    StageLabel._op_getVersion = IcePy.Operation('getVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    StageLabel._op_setVersion = IcePy.Operation('setVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    StageLabel._op_getPositionX = IcePy.Operation('getPositionX', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RDouble, ())
    StageLabel._op_setPositionX = IcePy.Operation('setPositionX', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RDouble),), (), None, ())
    StageLabel._op_getPositionY = IcePy.Operation('getPositionY', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RDouble, ())
    StageLabel._op_setPositionY = IcePy.Operation('setPositionY', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RDouble),), (), None, ())
    StageLabel._op_getPositionZ = IcePy.Operation('getPositionZ', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RDouble, ())
    StageLabel._op_setPositionZ = IcePy.Operation('setPositionZ', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RDouble),), (), None, ())
    StageLabel._op_getName = IcePy.Operation('getName', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    StageLabel._op_setName = IcePy.Operation('setName', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())

    _M_omero.model.StageLabel = StageLabel
    del StageLabel

    _M_omero.model.StageLabelPrx = StageLabelPrx
    del StageLabelPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
