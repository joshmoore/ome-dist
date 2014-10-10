# **********************************************************************
#
# Copyright (c) 2003-2013 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************
#
# Ice version 3.5.1
#
# <auto-generated>
#
# Generated from file `ILdap.ice'
#
# Warning: do not edit this file.
#
# </auto-generated>
#

import Ice, IcePy
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

if 'ILdap' not in _M_omero.api.__dict__:
    _M_omero.api.ILdap = Ice.createTempClass()
    class ILdap(_M_omero.api.ServiceInterface):
        '''See ILdap.html'''
        def __init__(self):
            if Ice.getType(self) == _M_omero.api.ILdap:
                raise RuntimeError('omero.api.ILdap is an abstract class')

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::api::ILdap', '::omero::api::ServiceInterface')

        def ice_id(self, current=None):
            return '::omero::api::ILdap'

        def ice_staticId():
            return '::omero::api::ILdap'
        ice_staticId = staticmethod(ice_staticId)

        def searchAll_async(self, _cb, current=None):
            pass

        def searchDnInGroups_async(self, _cb, attr, value, current=None):
            pass

        def searchByAttribute_async(self, _cb, dn, attribute, value, current=None):
            pass

        def searchByAttributes_async(self, _cb, dn, attributes, values, current=None):
            pass

        def searchByDN_async(self, _cb, userdn, current=None):
            pass

        def findDN_async(self, _cb, username, current=None):
            pass

        def findExperimenter_async(self, _cb, username, current=None):
            pass

        def setDN_async(self, _cb, experimenterID, dn, current=None):
            pass

        def getSetting_async(self, _cb, current=None):
            pass

        def createUser_async(self, _cb, username, current=None):
            pass

        def __str__(self):
            return IcePy.stringify(self, _M_omero.api._t_ILdap)

        __repr__ = __str__

    _M_omero.api.ILdapPrx = Ice.createTempClass()
    class ILdapPrx(_M_omero.api.ServiceInterfacePrx):

        def searchAll(self, _ctx=None):
            return _M_omero.api.ILdap._op_searchAll.invoke(self, ((), _ctx))

        def begin_searchAll(self, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.api.ILdap._op_searchAll.begin(self, ((), _response, _ex, _sent, _ctx))

        def end_searchAll(self, _r):
            return _M_omero.api.ILdap._op_searchAll.end(self, _r)

        def searchAll_async(self, _cb, _ctx=None):
            return _M_omero.api.ILdap._op_searchAll.invokeAsync(self, (_cb, (), _ctx))

        def searchDnInGroups(self, attr, value, _ctx=None):
            return _M_omero.api.ILdap._op_searchDnInGroups.invoke(self, ((attr, value), _ctx))

        def begin_searchDnInGroups(self, attr, value, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.api.ILdap._op_searchDnInGroups.begin(self, ((attr, value), _response, _ex, _sent, _ctx))

        def end_searchDnInGroups(self, _r):
            return _M_omero.api.ILdap._op_searchDnInGroups.end(self, _r)

        def searchDnInGroups_async(self, _cb, attr, value, _ctx=None):
            return _M_omero.api.ILdap._op_searchDnInGroups.invokeAsync(self, (_cb, (attr, value), _ctx))

        def searchByAttribute(self, dn, attribute, value, _ctx=None):
            return _M_omero.api.ILdap._op_searchByAttribute.invoke(self, ((dn, attribute, value), _ctx))

        def begin_searchByAttribute(self, dn, attribute, value, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.api.ILdap._op_searchByAttribute.begin(self, ((dn, attribute, value), _response, _ex, _sent, _ctx))

        def end_searchByAttribute(self, _r):
            return _M_omero.api.ILdap._op_searchByAttribute.end(self, _r)

        def searchByAttribute_async(self, _cb, dn, attribute, value, _ctx=None):
            return _M_omero.api.ILdap._op_searchByAttribute.invokeAsync(self, (_cb, (dn, attribute, value), _ctx))

        def searchByAttributes(self, dn, attributes, values, _ctx=None):
            return _M_omero.api.ILdap._op_searchByAttributes.invoke(self, ((dn, attributes, values), _ctx))

        def begin_searchByAttributes(self, dn, attributes, values, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.api.ILdap._op_searchByAttributes.begin(self, ((dn, attributes, values), _response, _ex, _sent, _ctx))

        def end_searchByAttributes(self, _r):
            return _M_omero.api.ILdap._op_searchByAttributes.end(self, _r)

        def searchByAttributes_async(self, _cb, dn, attributes, values, _ctx=None):
            return _M_omero.api.ILdap._op_searchByAttributes.invokeAsync(self, (_cb, (dn, attributes, values), _ctx))

        def searchByDN(self, userdn, _ctx=None):
            return _M_omero.api.ILdap._op_searchByDN.invoke(self, ((userdn, ), _ctx))

        def begin_searchByDN(self, userdn, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.api.ILdap._op_searchByDN.begin(self, ((userdn, ), _response, _ex, _sent, _ctx))

        def end_searchByDN(self, _r):
            return _M_omero.api.ILdap._op_searchByDN.end(self, _r)

        def searchByDN_async(self, _cb, userdn, _ctx=None):
            return _M_omero.api.ILdap._op_searchByDN.invokeAsync(self, (_cb, (userdn, ), _ctx))

        def findDN(self, username, _ctx=None):
            return _M_omero.api.ILdap._op_findDN.invoke(self, ((username, ), _ctx))

        def begin_findDN(self, username, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.api.ILdap._op_findDN.begin(self, ((username, ), _response, _ex, _sent, _ctx))

        def end_findDN(self, _r):
            return _M_omero.api.ILdap._op_findDN.end(self, _r)

        def findDN_async(self, _cb, username, _ctx=None):
            return _M_omero.api.ILdap._op_findDN.invokeAsync(self, (_cb, (username, ), _ctx))

        def findExperimenter(self, username, _ctx=None):
            return _M_omero.api.ILdap._op_findExperimenter.invoke(self, ((username, ), _ctx))

        def begin_findExperimenter(self, username, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.api.ILdap._op_findExperimenter.begin(self, ((username, ), _response, _ex, _sent, _ctx))

        def end_findExperimenter(self, _r):
            return _M_omero.api.ILdap._op_findExperimenter.end(self, _r)

        def findExperimenter_async(self, _cb, username, _ctx=None):
            return _M_omero.api.ILdap._op_findExperimenter.invokeAsync(self, (_cb, (username, ), _ctx))

        def setDN(self, experimenterID, dn, _ctx=None):
            return _M_omero.api.ILdap._op_setDN.invoke(self, ((experimenterID, dn), _ctx))

        def begin_setDN(self, experimenterID, dn, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.api.ILdap._op_setDN.begin(self, ((experimenterID, dn), _response, _ex, _sent, _ctx))

        def end_setDN(self, _r):
            return _M_omero.api.ILdap._op_setDN.end(self, _r)

        def setDN_async(self, _cb, experimenterID, dn, _ctx=None):
            return _M_omero.api.ILdap._op_setDN.invokeAsync(self, (_cb, (experimenterID, dn), _ctx))

        def getSetting(self, _ctx=None):
            return _M_omero.api.ILdap._op_getSetting.invoke(self, ((), _ctx))

        def begin_getSetting(self, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.api.ILdap._op_getSetting.begin(self, ((), _response, _ex, _sent, _ctx))

        def end_getSetting(self, _r):
            return _M_omero.api.ILdap._op_getSetting.end(self, _r)

        def getSetting_async(self, _cb, _ctx=None):
            return _M_omero.api.ILdap._op_getSetting.invokeAsync(self, (_cb, (), _ctx))

        def createUser(self, username, _ctx=None):
            return _M_omero.api.ILdap._op_createUser.invoke(self, ((username, ), _ctx))

        def begin_createUser(self, username, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.api.ILdap._op_createUser.begin(self, ((username, ), _response, _ex, _sent, _ctx))

        def end_createUser(self, _r):
            return _M_omero.api.ILdap._op_createUser.end(self, _r)

        def createUser_async(self, _cb, username, _ctx=None):
            return _M_omero.api.ILdap._op_createUser.invokeAsync(self, (_cb, (username, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.api.ILdapPrx.ice_checkedCast(proxy, '::omero::api::ILdap', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.api.ILdapPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.api._t_ILdapPrx = IcePy.defineProxy('::omero::api::ILdap', ILdapPrx)

    _M_omero.api._t_ILdap = IcePy.defineClass('::omero::api::ILdap', ILdap, -1, (), True, False, None, (_M_omero.api._t_ServiceInterface,), ())
    ILdap._ice_type = _M_omero.api._t_ILdap

    ILdap._op_searchAll = IcePy.Operation('searchAll', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, None, (), (), (), ((), _M_omero.api._t_ExperimenterList, False, 0), (_M_omero._t_ServerError,))
    ILdap._op_searchDnInGroups = IcePy.Operation('searchDnInGroups', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, None, (), (((), IcePy._t_string, False, 0), ((), IcePy._t_string, False, 0)), (), ((), _M_omero.api._t_StringSet, False, 0), (_M_omero._t_ServerError,))
    ILdap._op_searchByAttribute = IcePy.Operation('searchByAttribute', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, None, (), (((), IcePy._t_string, False, 0), ((), IcePy._t_string, False, 0), ((), IcePy._t_string, False, 0)), (), ((), _M_omero.api._t_ExperimenterList, False, 0), (_M_omero._t_ServerError,))
    ILdap._op_searchByAttributes = IcePy.Operation('searchByAttributes', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, None, (), (((), IcePy._t_string, False, 0), ((), _M_omero.api._t_StringSet, False, 0), ((), _M_omero.api._t_StringSet, False, 0)), (), ((), _M_omero.api._t_ExperimenterList, False, 0), (_M_omero._t_ServerError,))
    ILdap._op_searchByDN = IcePy.Operation('searchByDN', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, None, (), (((), IcePy._t_string, False, 0),), (), ((), _M_omero.model._t_Experimenter, False, 0), (_M_omero._t_ServerError,))
    ILdap._op_findDN = IcePy.Operation('findDN', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, None, (), (((), IcePy._t_string, False, 0),), (), ((), IcePy._t_string, False, 0), (_M_omero._t_ServerError,))
    ILdap._op_findExperimenter = IcePy.Operation('findExperimenter', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, None, (), (((), IcePy._t_string, False, 0),), (), ((), _M_omero.model._t_Experimenter, False, 0), (_M_omero._t_ServerError,))
    ILdap._op_setDN = IcePy.Operation('setDN', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, None, (), (((), _M_omero._t_RLong, False, 0), ((), IcePy._t_string, False, 0)), (), None, (_M_omero._t_ServerError,))
    ILdap._op_getSetting = IcePy.Operation('getSetting', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, None, (), (), (), ((), IcePy._t_bool, False, 0), (_M_omero._t_ServerError,))
    ILdap._op_createUser = IcePy.Operation('createUser', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, None, (), (((), IcePy._t_string, False, 0),), (), ((), _M_omero.model._t_Experimenter, False, 0), (_M_omero._t_ServerError,))

    _M_omero.api.ILdap = ILdap
    del ILdap

    _M_omero.api.ILdapPrx = ILdapPrx
    del ILdapPrx

# End of module omero.api

__name__ = 'omero'

# End of module omero
