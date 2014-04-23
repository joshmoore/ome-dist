# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `Permissions.ice'

import Ice, IcePy, __builtin__

if not Ice.__dict__.has_key("_struct_marker"):
    Ice._struct_marker = object()
import omero_model_IObject_ice
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

if not _M_omero.model.__dict__.has_key('Permissions'):
    _M_omero.model.Permissions = Ice.createTempClass()
    class Permissions(Ice.Object):
        def __init__(self, _restrictions=None, _perm1=0):
            if __builtin__.type(self) == _M_omero.model.Permissions:
                raise RuntimeError('omero.model.Permissions is an abstract class')
            self._restrictions = _restrictions
            self._perm1 = _perm1

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::Permissions')

        def ice_id(self, current=None):
            return '::omero::model::Permissions'

        def ice_staticId():
            return '::omero::model::Permissions'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getPerm1(self, current=None):
        # def setPerm1(self, value, current=None):
        # def isDisallow(self, restriction, current=None):
        # def canAnnotate(self, current=None):
        # def canEdit(self, current=None):
        # def canLink(self, current=None):
        # def canDelete(self, current=None):
        # def isUserRead(self, current=None):
        # def isUserAnnotate(self, current=None):
        # def isUserWrite(self, current=None):
        # def isGroupRead(self, current=None):
        # def isGroupAnnotate(self, current=None):
        # def isGroupWrite(self, current=None):
        # def isWorldRead(self, current=None):
        # def isWorldAnnotate(self, current=None):
        # def isWorldWrite(self, current=None):
        # def setUserRead(self, value, current=None):
        # def setUserAnnotate(self, value, current=None):
        # def setUserWrite(self, value, current=None):
        # def setGroupRead(self, value, current=None):
        # def setGroupAnnotate(self, value, current=None):
        # def setGroupWrite(self, value, current=None):
        # def setWorldRead(self, value, current=None):
        # def setWorldAnnotate(self, value, current=None):
        # def setWorldWrite(self, value, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_Permissions)

        __repr__ = __str__

    _M_omero.model.PermissionsPrx = Ice.createTempClass()
    class PermissionsPrx(Ice.ObjectPrx):

        def getPerm1(self, _ctx=None):
            return _M_omero.model.Permissions._op_getPerm1.invoke(self, ((), _ctx))

        def setPerm1(self, value, _ctx=None):
            return _M_omero.model.Permissions._op_setPerm1.invoke(self, ((value, ), _ctx))

        def isDisallow(self, restriction, _ctx=None):
            return _M_omero.model.Permissions._op_isDisallow.invoke(self, ((restriction, ), _ctx))

        def canAnnotate(self, _ctx=None):
            return _M_omero.model.Permissions._op_canAnnotate.invoke(self, ((), _ctx))

        def canEdit(self, _ctx=None):
            return _M_omero.model.Permissions._op_canEdit.invoke(self, ((), _ctx))

        def canLink(self, _ctx=None):
            return _M_omero.model.Permissions._op_canLink.invoke(self, ((), _ctx))

        def canDelete(self, _ctx=None):
            return _M_omero.model.Permissions._op_canDelete.invoke(self, ((), _ctx))

        def isUserRead(self, _ctx=None):
            return _M_omero.model.Permissions._op_isUserRead.invoke(self, ((), _ctx))

        def isUserAnnotate(self, _ctx=None):
            return _M_omero.model.Permissions._op_isUserAnnotate.invoke(self, ((), _ctx))

        def isUserWrite(self, _ctx=None):
            return _M_omero.model.Permissions._op_isUserWrite.invoke(self, ((), _ctx))

        def isGroupRead(self, _ctx=None):
            return _M_omero.model.Permissions._op_isGroupRead.invoke(self, ((), _ctx))

        def isGroupAnnotate(self, _ctx=None):
            return _M_omero.model.Permissions._op_isGroupAnnotate.invoke(self, ((), _ctx))

        def isGroupWrite(self, _ctx=None):
            return _M_omero.model.Permissions._op_isGroupWrite.invoke(self, ((), _ctx))

        def isWorldRead(self, _ctx=None):
            return _M_omero.model.Permissions._op_isWorldRead.invoke(self, ((), _ctx))

        def isWorldAnnotate(self, _ctx=None):
            return _M_omero.model.Permissions._op_isWorldAnnotate.invoke(self, ((), _ctx))

        def isWorldWrite(self, _ctx=None):
            return _M_omero.model.Permissions._op_isWorldWrite.invoke(self, ((), _ctx))

        def setUserRead(self, value, _ctx=None):
            return _M_omero.model.Permissions._op_setUserRead.invoke(self, ((value, ), _ctx))

        def setUserAnnotate(self, value, _ctx=None):
            return _M_omero.model.Permissions._op_setUserAnnotate.invoke(self, ((value, ), _ctx))

        def setUserWrite(self, value, _ctx=None):
            return _M_omero.model.Permissions._op_setUserWrite.invoke(self, ((value, ), _ctx))

        def setGroupRead(self, value, _ctx=None):
            return _M_omero.model.Permissions._op_setGroupRead.invoke(self, ((value, ), _ctx))

        def setGroupAnnotate(self, value, _ctx=None):
            return _M_omero.model.Permissions._op_setGroupAnnotate.invoke(self, ((value, ), _ctx))

        def setGroupWrite(self, value, _ctx=None):
            return _M_omero.model.Permissions._op_setGroupWrite.invoke(self, ((value, ), _ctx))

        def setWorldRead(self, value, _ctx=None):
            return _M_omero.model.Permissions._op_setWorldRead.invoke(self, ((value, ), _ctx))

        def setWorldAnnotate(self, value, _ctx=None):
            return _M_omero.model.Permissions._op_setWorldAnnotate.invoke(self, ((value, ), _ctx))

        def setWorldWrite(self, value, _ctx=None):
            return _M_omero.model.Permissions._op_setWorldWrite.invoke(self, ((value, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.PermissionsPrx.ice_checkedCast(proxy, '::omero::model::Permissions', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.PermissionsPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_PermissionsPrx = IcePy.defineProxy('::omero::model::Permissions', PermissionsPrx)

    _M_omero.model._t_Permissions = IcePy.defineClass('::omero::model::Permissions', Permissions, (), True, None, (), (
        ('_restrictions', (), _M_omero.api._t_BoolArray),
        ('_perm1', (), IcePy._t_long)
    ))
    Permissions.ice_type = _M_omero.model._t_Permissions

    Permissions._op_getPerm1 = IcePy.Operation('getPerm1', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_long, ())
    Permissions._op_setPerm1 = IcePy.Operation('setPerm1', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_long),), (), None, ())
    Permissions._op_isDisallow = IcePy.Operation('isDisallow', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_int),), (), IcePy._t_bool, ())
    Permissions._op_canAnnotate = IcePy.Operation('canAnnotate', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_bool, ())
    Permissions._op_canEdit = IcePy.Operation('canEdit', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_bool, ())
    Permissions._op_canLink = IcePy.Operation('canLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_bool, ())
    Permissions._op_canDelete = IcePy.Operation('canDelete', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_bool, ())
    Permissions._op_isUserRead = IcePy.Operation('isUserRead', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_bool, ())
    Permissions._op_isUserAnnotate = IcePy.Operation('isUserAnnotate', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_bool, ())
    Permissions._op_isUserWrite = IcePy.Operation('isUserWrite', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_bool, ())
    Permissions._op_isGroupRead = IcePy.Operation('isGroupRead', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_bool, ())
    Permissions._op_isGroupAnnotate = IcePy.Operation('isGroupAnnotate', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_bool, ())
    Permissions._op_isGroupWrite = IcePy.Operation('isGroupWrite', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_bool, ())
    Permissions._op_isWorldRead = IcePy.Operation('isWorldRead', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_bool, ())
    Permissions._op_isWorldAnnotate = IcePy.Operation('isWorldAnnotate', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_bool, ())
    Permissions._op_isWorldWrite = IcePy.Operation('isWorldWrite', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_bool, ())
    Permissions._op_setUserRead = IcePy.Operation('setUserRead', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_bool),), (), None, ())
    Permissions._op_setUserAnnotate = IcePy.Operation('setUserAnnotate', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_bool),), (), None, ())
    Permissions._op_setUserWrite = IcePy.Operation('setUserWrite', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_bool),), (), None, ())
    Permissions._op_setGroupRead = IcePy.Operation('setGroupRead', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_bool),), (), None, ())
    Permissions._op_setGroupAnnotate = IcePy.Operation('setGroupAnnotate', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_bool),), (), None, ())
    Permissions._op_setGroupWrite = IcePy.Operation('setGroupWrite', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_bool),), (), None, ())
    Permissions._op_setWorldRead = IcePy.Operation('setWorldRead', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_bool),), (), None, ())
    Permissions._op_setWorldAnnotate = IcePy.Operation('setWorldAnnotate', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_bool),), (), None, ())
    Permissions._op_setWorldWrite = IcePy.Operation('setWorldWrite', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_bool),), (), None, ())

    _M_omero.model.Permissions = Permissions
    del Permissions

    _M_omero.model.PermissionsPrx = PermissionsPrx
    del PermissionsPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
