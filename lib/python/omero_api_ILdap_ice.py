# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `ILdap.ice'

import Ice, IcePy, __builtin__

if not Ice.__dict__.has_key("_struct_marker"):
    Ice._struct_marker = object()
import omero_ServicesF_ice
import omero_Collections_ice

# Included module Ice
_M_Ice = Ice.openModule('Ice')

# Included module Glacier2
_M_Glacier2 = Ice.openModule('Glacier2')

# Included module omero
_M_omero = Ice.openModule('omero')

# Included module omero.model
_M_omero.model = Ice.openModule('omero.model')

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

if not _M_omero.api.__dict__.has_key('ILdap'):
    _M_omero.api.ILdap = Ice.createTempClass()
    class ILdap(_M_omero.api.ServiceInterface):
        def __init__(self):
            if __builtin__.type(self) == _M_omero.api.ILdap:
                raise RuntimeError('omero.api.ILdap is an abstract class')

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::api::ILdap', '::omero::api::ServiceInterface')

        def ice_id(self, current=None):
            return '::omero::api::ILdap'

        def ice_staticId():
            return '::omero::api::ILdap'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def searchAll_async(self, _cb, current=None):
        # def searchDnInGroups_async(self, _cb, attr, value, current=None):
        # def searchByAttribute_async(self, _cb, dn, attribute, value, current=None):
        # def searchByAttributes_async(self, _cb, dn, attributes, values, current=None):
        # def searchByDN_async(self, _cb, userdn, current=None):
        # def findDN_async(self, _cb, username, current=None):
        # def findExperimenter_async(self, _cb, username, current=None):
        # def setDN_async(self, _cb, experimenterID, dn, current=None):
        # def getSetting_async(self, _cb, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.api._t_ILdap)

        __repr__ = __str__

    _M_omero.api.ILdapPrx = Ice.createTempClass()
    class ILdapPrx(_M_omero.api.ServiceInterfacePrx):

        def searchAll(self, _ctx=None):
            return _M_omero.api.ILdap._op_searchAll.invoke(self, ((), _ctx))

        def searchAll_async(self, _cb, _ctx=None):
            return _M_omero.api.ILdap._op_searchAll.invokeAsync(self, (_cb, (), _ctx))

        def searchDnInGroups(self, attr, value, _ctx=None):
            return _M_omero.api.ILdap._op_searchDnInGroups.invoke(self, ((attr, value), _ctx))

        def searchDnInGroups_async(self, _cb, attr, value, _ctx=None):
            return _M_omero.api.ILdap._op_searchDnInGroups.invokeAsync(self, (_cb, (attr, value), _ctx))

        def searchByAttribute(self, dn, attribute, value, _ctx=None):
            return _M_omero.api.ILdap._op_searchByAttribute.invoke(self, ((dn, attribute, value), _ctx))

        def searchByAttribute_async(self, _cb, dn, attribute, value, _ctx=None):
            return _M_omero.api.ILdap._op_searchByAttribute.invokeAsync(self, (_cb, (dn, attribute, value), _ctx))

        def searchByAttributes(self, dn, attributes, values, _ctx=None):
            return _M_omero.api.ILdap._op_searchByAttributes.invoke(self, ((dn, attributes, values), _ctx))

        def searchByAttributes_async(self, _cb, dn, attributes, values, _ctx=None):
            return _M_omero.api.ILdap._op_searchByAttributes.invokeAsync(self, (_cb, (dn, attributes, values), _ctx))

        def searchByDN(self, userdn, _ctx=None):
            return _M_omero.api.ILdap._op_searchByDN.invoke(self, ((userdn, ), _ctx))

        def searchByDN_async(self, _cb, userdn, _ctx=None):
            return _M_omero.api.ILdap._op_searchByDN.invokeAsync(self, (_cb, (userdn, ), _ctx))

        def findDN(self, username, _ctx=None):
            return _M_omero.api.ILdap._op_findDN.invoke(self, ((username, ), _ctx))

        def findDN_async(self, _cb, username, _ctx=None):
            return _M_omero.api.ILdap._op_findDN.invokeAsync(self, (_cb, (username, ), _ctx))

        def findExperimenter(self, username, _ctx=None):
            return _M_omero.api.ILdap._op_findExperimenter.invoke(self, ((username, ), _ctx))

        def findExperimenter_async(self, _cb, username, _ctx=None):
            return _M_omero.api.ILdap._op_findExperimenter.invokeAsync(self, (_cb, (username, ), _ctx))

        def setDN(self, experimenterID, dn, _ctx=None):
            return _M_omero.api.ILdap._op_setDN.invoke(self, ((experimenterID, dn), _ctx))

        def setDN_async(self, _cb, experimenterID, dn, _ctx=None):
            return _M_omero.api.ILdap._op_setDN.invokeAsync(self, (_cb, (experimenterID, dn), _ctx))

        def getSetting(self, _ctx=None):
            return _M_omero.api.ILdap._op_getSetting.invoke(self, ((), _ctx))

        def getSetting_async(self, _cb, _ctx=None):
            return _M_omero.api.ILdap._op_getSetting.invokeAsync(self, (_cb, (), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.api.ILdapPrx.ice_checkedCast(proxy, '::omero::api::ILdap', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.api.ILdapPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.api._t_ILdapPrx = IcePy.defineProxy('::omero::api::ILdap', ILdapPrx)

    _M_omero.api._t_ILdap = IcePy.defineClass('::omero::api::ILdap', ILdap, (), True, None, (_M_omero.api._t_ServiceInterface,), ())
    ILdap.ice_type = _M_omero.api._t_ILdap

    ILdap._op_searchAll = IcePy.Operation('searchAll', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (), (), _M_omero.api._t_ExperimenterList, (_M_omero._t_ServerError,))
    ILdap._op_searchDnInGroups = IcePy.Operation('searchDnInGroups', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), IcePy._t_string), ((), IcePy._t_string)), (), _M_omero.api._t_StringSet, (_M_omero._t_ServerError,))
    ILdap._op_searchByAttribute = IcePy.Operation('searchByAttribute', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), IcePy._t_string), ((), IcePy._t_string), ((), IcePy._t_string)), (), _M_omero.api._t_ExperimenterList, (_M_omero._t_ServerError,))
    ILdap._op_searchByAttributes = IcePy.Operation('searchByAttributes', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), IcePy._t_string), ((), _M_omero.api._t_StringSet), ((), _M_omero.api._t_StringSet)), (), _M_omero.api._t_ExperimenterList, (_M_omero._t_ServerError,))
    ILdap._op_searchByDN = IcePy.Operation('searchByDN', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), IcePy._t_string),), (), _M_omero.model._t_Experimenter, (_M_omero._t_ServerError,))
    ILdap._op_findDN = IcePy.Operation('findDN', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), IcePy._t_string),), (), IcePy._t_string, (_M_omero._t_ServerError,))
    ILdap._op_findExperimenter = IcePy.Operation('findExperimenter', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), IcePy._t_string),), (), _M_omero.model._t_Experimenter, (_M_omero._t_ServerError,))
    ILdap._op_setDN = IcePy.Operation('setDN', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), _M_omero._t_RLong), ((), IcePy._t_string)), (), None, (_M_omero._t_ServerError,))
    ILdap._op_getSetting = IcePy.Operation('getSetting', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (), (), IcePy._t_bool, (_M_omero._t_ServerError,))

    _M_omero.api.ILdap = ILdap
    del ILdap

    _M_omero.api.ILdapPrx = ILdapPrx
    del ILdapPrx

# End of module omero.api

__name__ = 'omero'

# End of module omero
