# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `Event.ice'

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

if not _M_omero.model.__dict__.has_key('Experimenter'):
    _M_omero.model._t_Experimenter = IcePy.declareClass('::omero::model::Experimenter')
    _M_omero.model._t_ExperimenterPrx = IcePy.declareProxy('::omero::model::Experimenter')

if not _M_omero.model.__dict__.has_key('ExperimenterGroup'):
    _M_omero.model._t_ExperimenterGroup = IcePy.declareClass('::omero::model::ExperimenterGroup')
    _M_omero.model._t_ExperimenterGroupPrx = IcePy.declareProxy('::omero::model::ExperimenterGroup')

if not _M_omero.model.__dict__.has_key('EventType'):
    _M_omero.model._t_EventType = IcePy.declareClass('::omero::model::EventType')
    _M_omero.model._t_EventTypePrx = IcePy.declareProxy('::omero::model::EventType')

if not _M_omero.model.__dict__.has_key('Event'):
    _M_omero.model._t_Event = IcePy.declareClass('::omero::model::Event')
    _M_omero.model._t_EventPrx = IcePy.declareProxy('::omero::model::Event')

if not _M_omero.model.__dict__.has_key('EventLog'):
    _M_omero.model._t_EventLog = IcePy.declareClass('::omero::model::EventLog')
    _M_omero.model._t_EventLogPrx = IcePy.declareProxy('::omero::model::EventLog')

if not _M_omero.model.__dict__.has_key('Session'):
    _M_omero.model._t_Session = IcePy.declareClass('::omero::model::Session')
    _M_omero.model._t_SessionPrx = IcePy.declareProxy('::omero::model::Session')

if not _M_omero.model.__dict__.has_key('Details'):
    _M_omero.model._t_Details = IcePy.declareClass('::omero::model::Details')
    _M_omero.model._t_DetailsPrx = IcePy.declareProxy('::omero::model::Details')

if not _M_omero.model.__dict__.has_key('_t_EventLogsSeq'):
    _M_omero.model._t_EventLogsSeq = IcePy.defineSequence('::omero::model::EventLogsSeq', (), _M_omero.model._t_EventLog)

if not _M_omero.model.__dict__.has_key('Event'):
    _M_omero.model.Event = Ice.createTempClass()
    class Event(_M_omero.model.IObject):
        def __init__(self, _id=None, _details=None, _loaded=False, _status=None, _time=None, _experimenter=None, _experimenterGroup=None, _type=None, _containingEvent=None, _logsSeq=None, _logsLoaded=False, _session=None):
            if __builtin__.type(self) == _M_omero.model.Event:
                raise RuntimeError('omero.model.Event is an abstract class')
            _M_omero.model.IObject.__init__(self, _id, _details, _loaded)
            self._status = _status
            self._time = _time
            self._experimenter = _experimenter
            self._experimenterGroup = _experimenterGroup
            self._type = _type
            self._containingEvent = _containingEvent
            self._logsSeq = _logsSeq
            self._logsLoaded = _logsLoaded
            self._session = _session

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::Event', '::omero::model::IObject')

        def ice_id(self, current=None):
            return '::omero::model::Event'

        def ice_staticId():
            return '::omero::model::Event'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getStatus(self, current=None):
        # def setStatus(self, theStatus, current=None):
        # def getTime(self, current=None):
        # def setTime(self, theTime, current=None):
        # def getExperimenter(self, current=None):
        # def setExperimenter(self, theExperimenter, current=None):
        # def getExperimenterGroup(self, current=None):
        # def setExperimenterGroup(self, theExperimenterGroup, current=None):
        # def getType(self, current=None):
        # def setType(self, theType, current=None):
        # def getContainingEvent(self, current=None):
        # def setContainingEvent(self, theContainingEvent, current=None):
        # def unloadLogs(self, current=None):
        # def sizeOfLogs(self, current=None):
        # def copyLogs(self, current=None):
        # def addEventLog(self, target, current=None):
        # def addAllEventLogSet(self, targets, current=None):
        # def removeEventLog(self, theTarget, current=None):
        # def removeAllEventLogSet(self, targets, current=None):
        # def clearLogs(self, current=None):
        # def reloadLogs(self, toCopy, current=None):
        # def getSession(self, current=None):
        # def setSession(self, theSession, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_Event)

        __repr__ = __str__

    _M_omero.model.EventPrx = Ice.createTempClass()
    class EventPrx(_M_omero.model.IObjectPrx):

        def getStatus(self, _ctx=None):
            return _M_omero.model.Event._op_getStatus.invoke(self, ((), _ctx))

        def setStatus(self, theStatus, _ctx=None):
            return _M_omero.model.Event._op_setStatus.invoke(self, ((theStatus, ), _ctx))

        def getTime(self, _ctx=None):
            return _M_omero.model.Event._op_getTime.invoke(self, ((), _ctx))

        def setTime(self, theTime, _ctx=None):
            return _M_omero.model.Event._op_setTime.invoke(self, ((theTime, ), _ctx))

        def getExperimenter(self, _ctx=None):
            return _M_omero.model.Event._op_getExperimenter.invoke(self, ((), _ctx))

        def setExperimenter(self, theExperimenter, _ctx=None):
            return _M_omero.model.Event._op_setExperimenter.invoke(self, ((theExperimenter, ), _ctx))

        def getExperimenterGroup(self, _ctx=None):
            return _M_omero.model.Event._op_getExperimenterGroup.invoke(self, ((), _ctx))

        def setExperimenterGroup(self, theExperimenterGroup, _ctx=None):
            return _M_omero.model.Event._op_setExperimenterGroup.invoke(self, ((theExperimenterGroup, ), _ctx))

        def getType(self, _ctx=None):
            return _M_omero.model.Event._op_getType.invoke(self, ((), _ctx))

        def setType(self, theType, _ctx=None):
            return _M_omero.model.Event._op_setType.invoke(self, ((theType, ), _ctx))

        def getContainingEvent(self, _ctx=None):
            return _M_omero.model.Event._op_getContainingEvent.invoke(self, ((), _ctx))

        def setContainingEvent(self, theContainingEvent, _ctx=None):
            return _M_omero.model.Event._op_setContainingEvent.invoke(self, ((theContainingEvent, ), _ctx))

        def unloadLogs(self, _ctx=None):
            return _M_omero.model.Event._op_unloadLogs.invoke(self, ((), _ctx))

        def sizeOfLogs(self, _ctx=None):
            return _M_omero.model.Event._op_sizeOfLogs.invoke(self, ((), _ctx))

        def copyLogs(self, _ctx=None):
            return _M_omero.model.Event._op_copyLogs.invoke(self, ((), _ctx))

        def addEventLog(self, target, _ctx=None):
            return _M_omero.model.Event._op_addEventLog.invoke(self, ((target, ), _ctx))

        def addAllEventLogSet(self, targets, _ctx=None):
            return _M_omero.model.Event._op_addAllEventLogSet.invoke(self, ((targets, ), _ctx))

        def removeEventLog(self, theTarget, _ctx=None):
            return _M_omero.model.Event._op_removeEventLog.invoke(self, ((theTarget, ), _ctx))

        def removeAllEventLogSet(self, targets, _ctx=None):
            return _M_omero.model.Event._op_removeAllEventLogSet.invoke(self, ((targets, ), _ctx))

        def clearLogs(self, _ctx=None):
            return _M_omero.model.Event._op_clearLogs.invoke(self, ((), _ctx))

        def reloadLogs(self, toCopy, _ctx=None):
            return _M_omero.model.Event._op_reloadLogs.invoke(self, ((toCopy, ), _ctx))

        def getSession(self, _ctx=None):
            return _M_omero.model.Event._op_getSession.invoke(self, ((), _ctx))

        def setSession(self, theSession, _ctx=None):
            return _M_omero.model.Event._op_setSession.invoke(self, ((theSession, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.EventPrx.ice_checkedCast(proxy, '::omero::model::Event', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.EventPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_EventPrx = IcePy.defineProxy('::omero::model::Event', EventPrx)

    _M_omero.model._t_Event = IcePy.defineClass('::omero::model::Event', Event, (), True, _M_omero.model._t_IObject, (), (
        ('_status', (), _M_omero._t_RString),
        ('_time', (), _M_omero._t_RTime),
        ('_experimenter', (), _M_omero.model._t_Experimenter),
        ('_experimenterGroup', (), _M_omero.model._t_ExperimenterGroup),
        ('_type', (), _M_omero.model._t_EventType),
        ('_containingEvent', (), _M_omero.model._t_Event),
        ('_logsSeq', (), _M_omero.model._t_EventLogsSeq),
        ('_logsLoaded', (), IcePy._t_bool),
        ('_session', (), _M_omero.model._t_Session)
    ))
    Event.ice_type = _M_omero.model._t_Event

    Event._op_getStatus = IcePy.Operation('getStatus', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Event._op_setStatus = IcePy.Operation('setStatus', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Event._op_getTime = IcePy.Operation('getTime', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RTime, ())
    Event._op_setTime = IcePy.Operation('setTime', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RTime),), (), None, ())
    Event._op_getExperimenter = IcePy.Operation('getExperimenter', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_Experimenter, ())
    Event._op_setExperimenter = IcePy.Operation('setExperimenter', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Experimenter),), (), None, ())
    Event._op_getExperimenterGroup = IcePy.Operation('getExperimenterGroup', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_ExperimenterGroup, ())
    Event._op_setExperimenterGroup = IcePy.Operation('setExperimenterGroup', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ExperimenterGroup),), (), None, ())
    Event._op_getType = IcePy.Operation('getType', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_EventType, ())
    Event._op_setType = IcePy.Operation('setType', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_EventType),), (), None, ())
    Event._op_getContainingEvent = IcePy.Operation('getContainingEvent', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_Event, ())
    Event._op_setContainingEvent = IcePy.Operation('setContainingEvent', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Event),), (), None, ())
    Event._op_unloadLogs = IcePy.Operation('unloadLogs', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Event._op_sizeOfLogs = IcePy.Operation('sizeOfLogs', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())
    Event._op_copyLogs = IcePy.Operation('copyLogs', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_EventLogsSeq, ())
    Event._op_addEventLog = IcePy.Operation('addEventLog', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_EventLog),), (), None, ())
    Event._op_addAllEventLogSet = IcePy.Operation('addAllEventLogSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_EventLogsSeq),), (), None, ())
    Event._op_removeEventLog = IcePy.Operation('removeEventLog', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_EventLog),), (), None, ())
    Event._op_removeAllEventLogSet = IcePy.Operation('removeAllEventLogSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_EventLogsSeq),), (), None, ())
    Event._op_clearLogs = IcePy.Operation('clearLogs', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Event._op_reloadLogs = IcePy.Operation('reloadLogs', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Event),), (), None, ())
    Event._op_getSession = IcePy.Operation('getSession', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_Session, ())
    Event._op_setSession = IcePy.Operation('setSession', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Session),), (), None, ())

    _M_omero.model.Event = Event
    del Event

    _M_omero.model.EventPrx = EventPrx
    del EventPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
