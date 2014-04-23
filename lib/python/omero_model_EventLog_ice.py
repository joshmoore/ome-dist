# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `EventLog.ice'

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

if not _M_omero.model.__dict__.has_key('Event'):
    _M_omero.model._t_Event = IcePy.declareClass('::omero::model::Event')
    _M_omero.model._t_EventPrx = IcePy.declareProxy('::omero::model::Event')

if not _M_omero.model.__dict__.has_key('Details'):
    _M_omero.model._t_Details = IcePy.declareClass('::omero::model::Details')
    _M_omero.model._t_DetailsPrx = IcePy.declareProxy('::omero::model::Details')

if not _M_omero.model.__dict__.has_key('EventLog'):
    _M_omero.model.EventLog = Ice.createTempClass()
    class EventLog(_M_omero.model.IObject):
        def __init__(self, _id=None, _details=None, _loaded=False, _entityId=None, _entityType=None, _action=None, _event=None):
            if __builtin__.type(self) == _M_omero.model.EventLog:
                raise RuntimeError('omero.model.EventLog is an abstract class')
            _M_omero.model.IObject.__init__(self, _id, _details, _loaded)
            self._entityId = _entityId
            self._entityType = _entityType
            self._action = _action
            self._event = _event

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::EventLog', '::omero::model::IObject')

        def ice_id(self, current=None):
            return '::omero::model::EventLog'

        def ice_staticId():
            return '::omero::model::EventLog'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getEntityId(self, current=None):
        # def setEntityId(self, theEntityId, current=None):
        # def getEntityType(self, current=None):
        # def setEntityType(self, theEntityType, current=None):
        # def getAction(self, current=None):
        # def setAction(self, theAction, current=None):
        # def getEvent(self, current=None):
        # def setEvent(self, theEvent, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_EventLog)

        __repr__ = __str__

    _M_omero.model.EventLogPrx = Ice.createTempClass()
    class EventLogPrx(_M_omero.model.IObjectPrx):

        def getEntityId(self, _ctx=None):
            return _M_omero.model.EventLog._op_getEntityId.invoke(self, ((), _ctx))

        def setEntityId(self, theEntityId, _ctx=None):
            return _M_omero.model.EventLog._op_setEntityId.invoke(self, ((theEntityId, ), _ctx))

        def getEntityType(self, _ctx=None):
            return _M_omero.model.EventLog._op_getEntityType.invoke(self, ((), _ctx))

        def setEntityType(self, theEntityType, _ctx=None):
            return _M_omero.model.EventLog._op_setEntityType.invoke(self, ((theEntityType, ), _ctx))

        def getAction(self, _ctx=None):
            return _M_omero.model.EventLog._op_getAction.invoke(self, ((), _ctx))

        def setAction(self, theAction, _ctx=None):
            return _M_omero.model.EventLog._op_setAction.invoke(self, ((theAction, ), _ctx))

        def getEvent(self, _ctx=None):
            return _M_omero.model.EventLog._op_getEvent.invoke(self, ((), _ctx))

        def setEvent(self, theEvent, _ctx=None):
            return _M_omero.model.EventLog._op_setEvent.invoke(self, ((theEvent, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.EventLogPrx.ice_checkedCast(proxy, '::omero::model::EventLog', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.EventLogPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_EventLogPrx = IcePy.defineProxy('::omero::model::EventLog', EventLogPrx)

    _M_omero.model._t_EventLog = IcePy.declareClass('::omero::model::EventLog')

    _M_omero.model._t_EventLog = IcePy.defineClass('::omero::model::EventLog', EventLog, (), True, _M_omero.model._t_IObject, (), (
        ('_entityId', (), _M_omero._t_RLong),
        ('_entityType', (), _M_omero._t_RString),
        ('_action', (), _M_omero._t_RString),
        ('_event', (), _M_omero.model._t_Event)
    ))
    EventLog.ice_type = _M_omero.model._t_EventLog

    EventLog._op_getEntityId = IcePy.Operation('getEntityId', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RLong, ())
    EventLog._op_setEntityId = IcePy.Operation('setEntityId', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RLong),), (), None, ())
    EventLog._op_getEntityType = IcePy.Operation('getEntityType', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    EventLog._op_setEntityType = IcePy.Operation('setEntityType', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    EventLog._op_getAction = IcePy.Operation('getAction', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    EventLog._op_setAction = IcePy.Operation('setAction', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    EventLog._op_getEvent = IcePy.Operation('getEvent', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_Event, ())
    EventLog._op_setEvent = IcePy.Operation('setEvent', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Event),), (), None, ())

    _M_omero.model.EventLog = EventLog
    del EventLog

    _M_omero.model.EventLogPrx = EventLogPrx
    del EventLogPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
