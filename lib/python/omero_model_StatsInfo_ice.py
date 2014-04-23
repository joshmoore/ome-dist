# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `StatsInfo.ice'

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

if not _M_omero.model.__dict__.has_key('StatsInfo'):
    _M_omero.model.StatsInfo = Ice.createTempClass()
    class StatsInfo(_M_omero.model.IObject):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _globalMin=None, _globalMax=None):
            if __builtin__.type(self) == _M_omero.model.StatsInfo:
                raise RuntimeError('omero.model.StatsInfo is an abstract class')
            _M_omero.model.IObject.__init__(self, _id, _details, _loaded)
            self._version = _version
            self._globalMin = _globalMin
            self._globalMax = _globalMax

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::IObject', '::omero::model::StatsInfo')

        def ice_id(self, current=None):
            return '::omero::model::StatsInfo'

        def ice_staticId():
            return '::omero::model::StatsInfo'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getVersion(self, current=None):
        # def setVersion(self, theVersion, current=None):
        # def getGlobalMin(self, current=None):
        # def setGlobalMin(self, theGlobalMin, current=None):
        # def getGlobalMax(self, current=None):
        # def setGlobalMax(self, theGlobalMax, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_StatsInfo)

        __repr__ = __str__

    _M_omero.model.StatsInfoPrx = Ice.createTempClass()
    class StatsInfoPrx(_M_omero.model.IObjectPrx):

        def getVersion(self, _ctx=None):
            return _M_omero.model.StatsInfo._op_getVersion.invoke(self, ((), _ctx))

        def setVersion(self, theVersion, _ctx=None):
            return _M_omero.model.StatsInfo._op_setVersion.invoke(self, ((theVersion, ), _ctx))

        def getGlobalMin(self, _ctx=None):
            return _M_omero.model.StatsInfo._op_getGlobalMin.invoke(self, ((), _ctx))

        def setGlobalMin(self, theGlobalMin, _ctx=None):
            return _M_omero.model.StatsInfo._op_setGlobalMin.invoke(self, ((theGlobalMin, ), _ctx))

        def getGlobalMax(self, _ctx=None):
            return _M_omero.model.StatsInfo._op_getGlobalMax.invoke(self, ((), _ctx))

        def setGlobalMax(self, theGlobalMax, _ctx=None):
            return _M_omero.model.StatsInfo._op_setGlobalMax.invoke(self, ((theGlobalMax, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.StatsInfoPrx.ice_checkedCast(proxy, '::omero::model::StatsInfo', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.StatsInfoPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_StatsInfoPrx = IcePy.defineProxy('::omero::model::StatsInfo', StatsInfoPrx)

    _M_omero.model._t_StatsInfo = IcePy.declareClass('::omero::model::StatsInfo')

    _M_omero.model._t_StatsInfo = IcePy.defineClass('::omero::model::StatsInfo', StatsInfo, (), True, _M_omero.model._t_IObject, (), (
        ('_version', (), _M_omero._t_RInt),
        ('_globalMin', (), _M_omero._t_RDouble),
        ('_globalMax', (), _M_omero._t_RDouble)
    ))
    StatsInfo.ice_type = _M_omero.model._t_StatsInfo

    StatsInfo._op_getVersion = IcePy.Operation('getVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    StatsInfo._op_setVersion = IcePy.Operation('setVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    StatsInfo._op_getGlobalMin = IcePy.Operation('getGlobalMin', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RDouble, ())
    StatsInfo._op_setGlobalMin = IcePy.Operation('setGlobalMin', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RDouble),), (), None, ())
    StatsInfo._op_getGlobalMax = IcePy.Operation('getGlobalMax', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RDouble, ())
    StatsInfo._op_setGlobalMax = IcePy.Operation('setGlobalMax', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RDouble),), (), None, ())

    _M_omero.model.StatsInfo = StatsInfo
    del StatsInfo

    _M_omero.model.StatsInfoPrx = StatsInfoPrx
    del StatsInfoPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
