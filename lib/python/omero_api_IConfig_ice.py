# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `IConfig.ice'

import Ice, IcePy, __builtin__

if not Ice.__dict__.has_key("_struct_marker"):
    Ice._struct_marker = object()
import omero_RTypes_ice
import omero_ServicesF_ice

# Included module omero
_M_omero = Ice.openModule('omero')

# Included module omero.model
_M_omero.model = Ice.openModule('omero.model')

# Included module Ice
_M_Ice = Ice.openModule('Ice')

# Included module Glacier2
_M_Glacier2 = Ice.openModule('Glacier2')

# Included module omero.sys
_M_omero.sys = Ice.openModule('omero.sys')

# Included module omero.api
_M_omero.api = Ice.openModule('omero.api')

# Included module omero.grid
_M_omero.grid = Ice.openModule('omero.grid')

# Start of module omero
__name__ = 'omero'

# Start of module omero.api
__name__ = 'omero.api'

if not _M_omero.api.__dict__.has_key('IConfig'):
    _M_omero.api.IConfig = Ice.createTempClass()
    class IConfig(_M_omero.api.ServiceInterface):
        def __init__(self):
            if __builtin__.type(self) == _M_omero.api.IConfig:
                raise RuntimeError('omero.api.IConfig is an abstract class')

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::api::IConfig', '::omero::api::ServiceInterface')

        def ice_id(self, current=None):
            return '::omero::api::IConfig'

        def ice_staticId():
            return '::omero::api::IConfig'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getVersion_async(self, _cb, current=None):
        # def getConfigValue_async(self, _cb, key, current=None):
        # def setConfigValue_async(self, _cb, key, value, current=None):
        # def setConfigValueIfEquals_async(self, _cb, key, value, test, current=None):
        # def getDatabaseUuid_async(self, _cb, current=None):
        # def getDatabaseTime_async(self, _cb, current=None):
        # def getServerTime_async(self, _cb, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.api._t_IConfig)

        __repr__ = __str__

    _M_omero.api.IConfigPrx = Ice.createTempClass()
    class IConfigPrx(_M_omero.api.ServiceInterfacePrx):

        def getVersion(self, _ctx=None):
            return _M_omero.api.IConfig._op_getVersion.invoke(self, ((), _ctx))

        def getVersion_async(self, _cb, _ctx=None):
            return _M_omero.api.IConfig._op_getVersion.invokeAsync(self, (_cb, (), _ctx))

        def getConfigValue(self, key, _ctx=None):
            return _M_omero.api.IConfig._op_getConfigValue.invoke(self, ((key, ), _ctx))

        def getConfigValue_async(self, _cb, key, _ctx=None):
            return _M_omero.api.IConfig._op_getConfigValue.invokeAsync(self, (_cb, (key, ), _ctx))

        def setConfigValue(self, key, value, _ctx=None):
            return _M_omero.api.IConfig._op_setConfigValue.invoke(self, ((key, value), _ctx))

        def setConfigValue_async(self, _cb, key, value, _ctx=None):
            return _M_omero.api.IConfig._op_setConfigValue.invokeAsync(self, (_cb, (key, value), _ctx))

        def setConfigValueIfEquals(self, key, value, test, _ctx=None):
            return _M_omero.api.IConfig._op_setConfigValueIfEquals.invoke(self, ((key, value, test), _ctx))

        def setConfigValueIfEquals_async(self, _cb, key, value, test, _ctx=None):
            return _M_omero.api.IConfig._op_setConfigValueIfEquals.invokeAsync(self, (_cb, (key, value, test), _ctx))

        def getDatabaseUuid(self, _ctx=None):
            return _M_omero.api.IConfig._op_getDatabaseUuid.invoke(self, ((), _ctx))

        def getDatabaseUuid_async(self, _cb, _ctx=None):
            return _M_omero.api.IConfig._op_getDatabaseUuid.invokeAsync(self, (_cb, (), _ctx))

        def getDatabaseTime(self, _ctx=None):
            return _M_omero.api.IConfig._op_getDatabaseTime.invoke(self, ((), _ctx))

        def getDatabaseTime_async(self, _cb, _ctx=None):
            return _M_omero.api.IConfig._op_getDatabaseTime.invokeAsync(self, (_cb, (), _ctx))

        def getServerTime(self, _ctx=None):
            return _M_omero.api.IConfig._op_getServerTime.invoke(self, ((), _ctx))

        def getServerTime_async(self, _cb, _ctx=None):
            return _M_omero.api.IConfig._op_getServerTime.invokeAsync(self, (_cb, (), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.api.IConfigPrx.ice_checkedCast(proxy, '::omero::api::IConfig', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.api.IConfigPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.api._t_IConfigPrx = IcePy.defineProxy('::omero::api::IConfig', IConfigPrx)

    _M_omero.api._t_IConfig = IcePy.defineClass('::omero::api::IConfig', IConfig, (), True, None, (_M_omero.api._t_ServiceInterface,), ())
    IConfig.ice_type = _M_omero.api._t_IConfig

    IConfig._op_getVersion = IcePy.Operation('getVersion', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (), (), IcePy._t_string, (_M_omero._t_ServerError,))
    IConfig._op_getConfigValue = IcePy.Operation('getConfigValue', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), IcePy._t_string),), (), IcePy._t_string, (_M_omero._t_ServerError,))
    IConfig._op_setConfigValue = IcePy.Operation('setConfigValue', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), IcePy._t_string), ((), IcePy._t_string)), (), None, (_M_omero._t_ServerError,))
    IConfig._op_setConfigValueIfEquals = IcePy.Operation('setConfigValueIfEquals', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), IcePy._t_string), ((), IcePy._t_string), ((), IcePy._t_string)), (), IcePy._t_bool, (_M_omero._t_ServerError,))
    IConfig._op_getDatabaseUuid = IcePy.Operation('getDatabaseUuid', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (), (), IcePy._t_string, (_M_omero._t_ServerError,))
    IConfig._op_getDatabaseTime = IcePy.Operation('getDatabaseTime', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (), (), _M_omero._t_RTime, (_M_omero._t_ServerError,))
    IConfig._op_getServerTime = IcePy.Operation('getServerTime', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (), (), _M_omero._t_RTime, (_M_omero._t_ServerError,))

    _M_omero.api.IConfig = IConfig
    del IConfig

    _M_omero.api.IConfigPrx = IConfigPrx
    del IConfigPrx

# End of module omero.api

__name__ = 'omero'

# End of module omero
