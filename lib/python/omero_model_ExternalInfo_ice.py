# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `ExternalInfo.ice'

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

if not _M_omero.model.__dict__.has_key('ExternalInfo'):
    _M_omero.model.ExternalInfo = Ice.createTempClass()
    class ExternalInfo(_M_omero.model.IObject):
        def __init__(self, _id=None, _details=None, _loaded=False, _entityId=None, _entityType=None, _lsid=None, _uuid=None):
            if __builtin__.type(self) == _M_omero.model.ExternalInfo:
                raise RuntimeError('omero.model.ExternalInfo is an abstract class')
            _M_omero.model.IObject.__init__(self, _id, _details, _loaded)
            self._entityId = _entityId
            self._entityType = _entityType
            self._lsid = _lsid
            self._uuid = _uuid

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::ExternalInfo', '::omero::model::IObject')

        def ice_id(self, current=None):
            return '::omero::model::ExternalInfo'

        def ice_staticId():
            return '::omero::model::ExternalInfo'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getEntityId(self, current=None):
        # def setEntityId(self, theEntityId, current=None):
        # def getEntityType(self, current=None):
        # def setEntityType(self, theEntityType, current=None):
        # def getLsid(self, current=None):
        # def setLsid(self, theLsid, current=None):
        # def getUuid(self, current=None):
        # def setUuid(self, theUuid, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_ExternalInfo)

        __repr__ = __str__

    _M_omero.model.ExternalInfoPrx = Ice.createTempClass()
    class ExternalInfoPrx(_M_omero.model.IObjectPrx):

        def getEntityId(self, _ctx=None):
            return _M_omero.model.ExternalInfo._op_getEntityId.invoke(self, ((), _ctx))

        def setEntityId(self, theEntityId, _ctx=None):
            return _M_omero.model.ExternalInfo._op_setEntityId.invoke(self, ((theEntityId, ), _ctx))

        def getEntityType(self, _ctx=None):
            return _M_omero.model.ExternalInfo._op_getEntityType.invoke(self, ((), _ctx))

        def setEntityType(self, theEntityType, _ctx=None):
            return _M_omero.model.ExternalInfo._op_setEntityType.invoke(self, ((theEntityType, ), _ctx))

        def getLsid(self, _ctx=None):
            return _M_omero.model.ExternalInfo._op_getLsid.invoke(self, ((), _ctx))

        def setLsid(self, theLsid, _ctx=None):
            return _M_omero.model.ExternalInfo._op_setLsid.invoke(self, ((theLsid, ), _ctx))

        def getUuid(self, _ctx=None):
            return _M_omero.model.ExternalInfo._op_getUuid.invoke(self, ((), _ctx))

        def setUuid(self, theUuid, _ctx=None):
            return _M_omero.model.ExternalInfo._op_setUuid.invoke(self, ((theUuid, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.ExternalInfoPrx.ice_checkedCast(proxy, '::omero::model::ExternalInfo', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.ExternalInfoPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_ExternalInfoPrx = IcePy.defineProxy('::omero::model::ExternalInfo', ExternalInfoPrx)

    _M_omero.model._t_ExternalInfo = IcePy.declareClass('::omero::model::ExternalInfo')

    _M_omero.model._t_ExternalInfo = IcePy.defineClass('::omero::model::ExternalInfo', ExternalInfo, (), True, _M_omero.model._t_IObject, (), (
        ('_entityId', (), _M_omero._t_RLong),
        ('_entityType', (), _M_omero._t_RString),
        ('_lsid', (), _M_omero._t_RString),
        ('_uuid', (), _M_omero._t_RString)
    ))
    ExternalInfo.ice_type = _M_omero.model._t_ExternalInfo

    ExternalInfo._op_getEntityId = IcePy.Operation('getEntityId', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RLong, ())
    ExternalInfo._op_setEntityId = IcePy.Operation('setEntityId', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RLong),), (), None, ())
    ExternalInfo._op_getEntityType = IcePy.Operation('getEntityType', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    ExternalInfo._op_setEntityType = IcePy.Operation('setEntityType', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    ExternalInfo._op_getLsid = IcePy.Operation('getLsid', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    ExternalInfo._op_setLsid = IcePy.Operation('setLsid', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    ExternalInfo._op_getUuid = IcePy.Operation('getUuid', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    ExternalInfo._op_setUuid = IcePy.Operation('setUuid', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())

    _M_omero.model.ExternalInfo = ExternalInfo
    del ExternalInfo

    _M_omero.model.ExternalInfoPrx = ExternalInfoPrx
    del ExternalInfoPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
