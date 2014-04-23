# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `Details.ice'

import Ice, IcePy, __builtin__

if not Ice.__dict__.has_key("_struct_marker"):
    Ice._struct_marker = object()
import omero_model_IObject_ice
import omero_System_ice
import Ice_Current_ice

# Included module omero
_M_omero = Ice.openModule('omero')

# Included module omero.model
_M_omero.model = Ice.openModule('omero.model')

# Included module Ice
_M_Ice = Ice.openModule('Ice')

# Included module omero.sys
_M_omero.sys = Ice.openModule('omero.sys')

# Start of module omero
__name__ = 'omero'

# Start of module omero.model
__name__ = 'omero.model'

if not _M_omero.model.__dict__.has_key('Details'):
    _M_omero.model.Details = Ice.createTempClass()
    class Details(Ice.Object):
        def __init__(self, _owner=None, _group=None, _creationEvent=None, _updateEvent=None, _permissions=None, _externalInfo=None, _call=None, _event=None):
            if __builtin__.type(self) == _M_omero.model.Details:
                raise RuntimeError('omero.model.Details is an abstract class')
            self._owner = _owner
            self._group = _group
            self._creationEvent = _creationEvent
            self._updateEvent = _updateEvent
            self._permissions = _permissions
            self._externalInfo = _externalInfo
            self._call = _call
            self._event = _event

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::Details')

        def ice_id(self, current=None):
            return '::omero::model::Details'

        def ice_staticId():
            return '::omero::model::Details'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getOwner(self, current=None):
        # def setOwner(self, theOwner, current=None):
        # def getGroup(self, current=None):
        # def setGroup(self, theGroup, current=None):
        # def getCreationEvent(self, current=None):
        # def setCreationEvent(self, theCreationEvent, current=None):
        # def getUpdateEvent(self, current=None):
        # def setUpdateEvent(self, theUpdateEvent, current=None):
        # def getPermissions(self, current=None):
        # def setPermissions(self, thePermissions, current=None):
        # def getExternalInfo(self, current=None):
        # def setExternalInfo(self, theExternalInfo, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_Details)

        __repr__ = __str__

    _M_omero.model.DetailsPrx = Ice.createTempClass()
    class DetailsPrx(Ice.ObjectPrx):

        def getOwner(self, _ctx=None):
            return _M_omero.model.Details._op_getOwner.invoke(self, ((), _ctx))

        def setOwner(self, theOwner, _ctx=None):
            return _M_omero.model.Details._op_setOwner.invoke(self, ((theOwner, ), _ctx))

        def getGroup(self, _ctx=None):
            return _M_omero.model.Details._op_getGroup.invoke(self, ((), _ctx))

        def setGroup(self, theGroup, _ctx=None):
            return _M_omero.model.Details._op_setGroup.invoke(self, ((theGroup, ), _ctx))

        def getCreationEvent(self, _ctx=None):
            return _M_omero.model.Details._op_getCreationEvent.invoke(self, ((), _ctx))

        def setCreationEvent(self, theCreationEvent, _ctx=None):
            return _M_omero.model.Details._op_setCreationEvent.invoke(self, ((theCreationEvent, ), _ctx))

        def getUpdateEvent(self, _ctx=None):
            return _M_omero.model.Details._op_getUpdateEvent.invoke(self, ((), _ctx))

        def setUpdateEvent(self, theUpdateEvent, _ctx=None):
            return _M_omero.model.Details._op_setUpdateEvent.invoke(self, ((theUpdateEvent, ), _ctx))

        def getPermissions(self, _ctx=None):
            return _M_omero.model.Details._op_getPermissions.invoke(self, ((), _ctx))

        def setPermissions(self, thePermissions, _ctx=None):
            return _M_omero.model.Details._op_setPermissions.invoke(self, ((thePermissions, ), _ctx))

        def getExternalInfo(self, _ctx=None):
            return _M_omero.model.Details._op_getExternalInfo.invoke(self, ((), _ctx))

        def setExternalInfo(self, theExternalInfo, _ctx=None):
            return _M_omero.model.Details._op_setExternalInfo.invoke(self, ((theExternalInfo, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.DetailsPrx.ice_checkedCast(proxy, '::omero::model::Details', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.DetailsPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_DetailsPrx = IcePy.defineProxy('::omero::model::Details', DetailsPrx)

    _M_omero.model._t_Details = IcePy.declareClass('::omero::model::Details')

    _M_omero.model._t_Details = IcePy.defineClass('::omero::model::Details', Details, (), True, None, (), (
        ('_owner', (), _M_omero.model._t_Experimenter),
        ('_group', (), _M_omero.model._t_ExperimenterGroup),
        ('_creationEvent', (), _M_omero.model._t_Event),
        ('_updateEvent', (), _M_omero.model._t_Event),
        ('_permissions', (), _M_omero.model._t_Permissions),
        ('_externalInfo', (), _M_omero.model._t_ExternalInfo),
        ('_call', (), _M_Ice._t_Context),
        ('_event', (), _M_omero.sys._t_EventContext)
    ))
    Details.ice_type = _M_omero.model._t_Details

    Details._op_getOwner = IcePy.Operation('getOwner', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_Experimenter, ())
    Details._op_setOwner = IcePy.Operation('setOwner', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Experimenter),), (), None, ())
    Details._op_getGroup = IcePy.Operation('getGroup', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_ExperimenterGroup, ())
    Details._op_setGroup = IcePy.Operation('setGroup', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ExperimenterGroup),), (), None, ())
    Details._op_getCreationEvent = IcePy.Operation('getCreationEvent', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_Event, ())
    Details._op_setCreationEvent = IcePy.Operation('setCreationEvent', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Event),), (), None, ())
    Details._op_getUpdateEvent = IcePy.Operation('getUpdateEvent', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_Event, ())
    Details._op_setUpdateEvent = IcePy.Operation('setUpdateEvent', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Event),), (), None, ())
    Details._op_getPermissions = IcePy.Operation('getPermissions', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_Permissions, ())
    Details._op_setPermissions = IcePy.Operation('setPermissions', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Permissions),), (), None, ())
    Details._op_getExternalInfo = IcePy.Operation('getExternalInfo', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_ExternalInfo, ())
    Details._op_setExternalInfo = IcePy.Operation('setExternalInfo', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ExternalInfo),), (), None, ())

    _M_omero.model.Details = Details
    del Details

    _M_omero.model.DetailsPrx = DetailsPrx
    del DetailsPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
