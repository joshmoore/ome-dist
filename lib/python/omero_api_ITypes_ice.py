# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `ITypes.ice'

import Ice, IcePy, __builtin__

if not Ice.__dict__.has_key("_struct_marker"):
    Ice._struct_marker = object()
import omero_ModelF_ice
import omero_ServicesF_ice
import omero_Collections_ice

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

if not _M_omero.api.__dict__.has_key('ITypes'):
    _M_omero.api.ITypes = Ice.createTempClass()
    class ITypes(_M_omero.api.ServiceInterface):
        def __init__(self):
            if __builtin__.type(self) == _M_omero.api.ITypes:
                raise RuntimeError('omero.api.ITypes is an abstract class')

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::api::ITypes', '::omero::api::ServiceInterface')

        def ice_id(self, current=None):
            return '::omero::api::ITypes'

        def ice_staticId():
            return '::omero::api::ITypes'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def createEnumeration_async(self, _cb, newEnum, current=None):
        # def getEnumeration_async(self, _cb, type, value, current=None):
        # def allEnumerations_async(self, _cb, type, current=None):
        # def updateEnumeration_async(self, _cb, oldEnum, current=None):
        # def updateEnumerations_async(self, _cb, oldEnums, current=None):
        # def deleteEnumeration_async(self, _cb, oldEnum, current=None):
        # def getEnumerationTypes_async(self, _cb, current=None):
        # def getAnnotationTypes_async(self, _cb, current=None):
        # def getEnumerationsWithEntries_async(self, _cb, current=None):
        # def getOriginalEnumerations_async(self, _cb, current=None):
        # def resetEnumerations_async(self, _cb, enumClass, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.api._t_ITypes)

        __repr__ = __str__

    _M_omero.api.ITypesPrx = Ice.createTempClass()
    class ITypesPrx(_M_omero.api.ServiceInterfacePrx):

        def createEnumeration(self, newEnum, _ctx=None):
            return _M_omero.api.ITypes._op_createEnumeration.invoke(self, ((newEnum, ), _ctx))

        def createEnumeration_async(self, _cb, newEnum, _ctx=None):
            return _M_omero.api.ITypes._op_createEnumeration.invokeAsync(self, (_cb, (newEnum, ), _ctx))

        def getEnumeration(self, type, value, _ctx=None):
            return _M_omero.api.ITypes._op_getEnumeration.invoke(self, ((type, value), _ctx))

        def getEnumeration_async(self, _cb, type, value, _ctx=None):
            return _M_omero.api.ITypes._op_getEnumeration.invokeAsync(self, (_cb, (type, value), _ctx))

        def allEnumerations(self, type, _ctx=None):
            return _M_omero.api.ITypes._op_allEnumerations.invoke(self, ((type, ), _ctx))

        def allEnumerations_async(self, _cb, type, _ctx=None):
            return _M_omero.api.ITypes._op_allEnumerations.invokeAsync(self, (_cb, (type, ), _ctx))

        def updateEnumeration(self, oldEnum, _ctx=None):
            return _M_omero.api.ITypes._op_updateEnumeration.invoke(self, ((oldEnum, ), _ctx))

        def updateEnumeration_async(self, _cb, oldEnum, _ctx=None):
            return _M_omero.api.ITypes._op_updateEnumeration.invokeAsync(self, (_cb, (oldEnum, ), _ctx))

        def updateEnumerations(self, oldEnums, _ctx=None):
            return _M_omero.api.ITypes._op_updateEnumerations.invoke(self, ((oldEnums, ), _ctx))

        def updateEnumerations_async(self, _cb, oldEnums, _ctx=None):
            return _M_omero.api.ITypes._op_updateEnumerations.invokeAsync(self, (_cb, (oldEnums, ), _ctx))

        def deleteEnumeration(self, oldEnum, _ctx=None):
            return _M_omero.api.ITypes._op_deleteEnumeration.invoke(self, ((oldEnum, ), _ctx))

        def deleteEnumeration_async(self, _cb, oldEnum, _ctx=None):
            return _M_omero.api.ITypes._op_deleteEnumeration.invokeAsync(self, (_cb, (oldEnum, ), _ctx))

        def getEnumerationTypes(self, _ctx=None):
            return _M_omero.api.ITypes._op_getEnumerationTypes.invoke(self, ((), _ctx))

        def getEnumerationTypes_async(self, _cb, _ctx=None):
            return _M_omero.api.ITypes._op_getEnumerationTypes.invokeAsync(self, (_cb, (), _ctx))

        def getAnnotationTypes(self, _ctx=None):
            return _M_omero.api.ITypes._op_getAnnotationTypes.invoke(self, ((), _ctx))

        def getAnnotationTypes_async(self, _cb, _ctx=None):
            return _M_omero.api.ITypes._op_getAnnotationTypes.invokeAsync(self, (_cb, (), _ctx))

        def getEnumerationsWithEntries(self, _ctx=None):
            return _M_omero.api.ITypes._op_getEnumerationsWithEntries.invoke(self, ((), _ctx))

        def getEnumerationsWithEntries_async(self, _cb, _ctx=None):
            return _M_omero.api.ITypes._op_getEnumerationsWithEntries.invokeAsync(self, (_cb, (), _ctx))

        def getOriginalEnumerations(self, _ctx=None):
            return _M_omero.api.ITypes._op_getOriginalEnumerations.invoke(self, ((), _ctx))

        def getOriginalEnumerations_async(self, _cb, _ctx=None):
            return _M_omero.api.ITypes._op_getOriginalEnumerations.invokeAsync(self, (_cb, (), _ctx))

        def resetEnumerations(self, enumClass, _ctx=None):
            return _M_omero.api.ITypes._op_resetEnumerations.invoke(self, ((enumClass, ), _ctx))

        def resetEnumerations_async(self, _cb, enumClass, _ctx=None):
            return _M_omero.api.ITypes._op_resetEnumerations.invokeAsync(self, (_cb, (enumClass, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.api.ITypesPrx.ice_checkedCast(proxy, '::omero::api::ITypes', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.api.ITypesPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.api._t_ITypesPrx = IcePy.defineProxy('::omero::api::ITypes', ITypesPrx)

    _M_omero.api._t_ITypes = IcePy.defineClass('::omero::api::ITypes', ITypes, (), True, None, (_M_omero.api._t_ServiceInterface,), ())
    ITypes.ice_type = _M_omero.api._t_ITypes

    ITypes._op_createEnumeration = IcePy.Operation('createEnumeration', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.model._t_IObject),), (), _M_omero.model._t_IObject, (_M_omero._t_ServerError,))
    ITypes._op_getEnumeration = IcePy.Operation('getEnumeration', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), IcePy._t_string), ((), IcePy._t_string)), (), _M_omero.model._t_IObject, (_M_omero._t_ServerError,))
    ITypes._op_allEnumerations = IcePy.Operation('allEnumerations', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), IcePy._t_string),), (), _M_omero.api._t_IObjectList, (_M_omero._t_ServerError,))
    ITypes._op_updateEnumeration = IcePy.Operation('updateEnumeration', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.model._t_IObject),), (), _M_omero.model._t_IObject, (_M_omero._t_ServerError,))
    ITypes._op_updateEnumerations = IcePy.Operation('updateEnumerations', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.api._t_IObjectList),), (), None, (_M_omero._t_ServerError,))
    ITypes._op_deleteEnumeration = IcePy.Operation('deleteEnumeration', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.model._t_IObject),), (), None, (_M_omero._t_ServerError,))
    ITypes._op_getEnumerationTypes = IcePy.Operation('getEnumerationTypes', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (), (), _M_omero.api._t_StringSet, (_M_omero._t_ServerError,))
    ITypes._op_getAnnotationTypes = IcePy.Operation('getAnnotationTypes', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (), (), _M_omero.api._t_StringSet, (_M_omero._t_ServerError,))
    ITypes._op_getEnumerationsWithEntries = IcePy.Operation('getEnumerationsWithEntries', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (), (), _M_omero.api._t_IObjectListMap, (_M_omero._t_ServerError,))
    ITypes._op_getOriginalEnumerations = IcePy.Operation('getOriginalEnumerations', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (), (), _M_omero.api._t_IObjectList, (_M_omero._t_ServerError,))
    ITypes._op_resetEnumerations = IcePy.Operation('resetEnumerations', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_string),), (), None, (_M_omero._t_ServerError,))

    _M_omero.api.ITypes = ITypes
    del ITypes

    _M_omero.api.ITypesPrx = ITypesPrx
    del ITypesPrx

# End of module omero.api

__name__ = 'omero'

# End of module omero
