# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `Session.ice'

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

if not _M_omero.model.__dict__.has_key('Node'):
    _M_omero.model._t_Node = IcePy.declareClass('::omero::model::Node')
    _M_omero.model._t_NodePrx = IcePy.declareProxy('::omero::model::Node')

if not _M_omero.model.__dict__.has_key('Experimenter'):
    _M_omero.model._t_Experimenter = IcePy.declareClass('::omero::model::Experimenter')
    _M_omero.model._t_ExperimenterPrx = IcePy.declareProxy('::omero::model::Experimenter')

if not _M_omero.model.__dict__.has_key('Event'):
    _M_omero.model._t_Event = IcePy.declareClass('::omero::model::Event')
    _M_omero.model._t_EventPrx = IcePy.declareProxy('::omero::model::Event')

if not _M_omero.model.__dict__.has_key('SessionAnnotationLink'):
    _M_omero.model._t_SessionAnnotationLink = IcePy.declareClass('::omero::model::SessionAnnotationLink')
    _M_omero.model._t_SessionAnnotationLinkPrx = IcePy.declareProxy('::omero::model::SessionAnnotationLink')

if not _M_omero.model.__dict__.has_key('Annotation'):
    _M_omero.model._t_Annotation = IcePy.declareClass('::omero::model::Annotation')
    _M_omero.model._t_AnnotationPrx = IcePy.declareProxy('::omero::model::Annotation')

if not _M_omero.model.__dict__.has_key('Details'):
    _M_omero.model._t_Details = IcePy.declareClass('::omero::model::Details')
    _M_omero.model._t_DetailsPrx = IcePy.declareProxy('::omero::model::Details')

if not _M_omero.model.__dict__.has_key('_t_SessionEventsSeq'):
    _M_omero.model._t_SessionEventsSeq = IcePy.defineSequence('::omero::model::SessionEventsSeq', (), _M_omero.model._t_Event)

if not _M_omero.model.__dict__.has_key('_t_SessionAnnotationLinksSeq'):
    _M_omero.model._t_SessionAnnotationLinksSeq = IcePy.defineSequence('::omero::model::SessionAnnotationLinksSeq', (), _M_omero.model._t_SessionAnnotationLink)

if not _M_omero.model.__dict__.has_key('_t_SessionLinkedAnnotationSeq'):
    _M_omero.model._t_SessionLinkedAnnotationSeq = IcePy.defineSequence('::omero::model::SessionLinkedAnnotationSeq', (), _M_omero.model._t_Annotation)

if not _M_omero.model.__dict__.has_key('Session'):
    _M_omero.model.Session = Ice.createTempClass()
    class Session(_M_omero.model.IObject):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _node=None, _uuid=None, _owner=None, _timeToIdle=None, _timeToLive=None, _started=None, _closed=None, _message=None, _defaultEventType=None, _userAgent=None, _eventsSeq=None, _eventsLoaded=False, _annotationLinksSeq=None, _annotationLinksLoaded=False, _annotationLinksCountPerOwner=None):
            if __builtin__.type(self) == _M_omero.model.Session:
                raise RuntimeError('omero.model.Session is an abstract class')
            _M_omero.model.IObject.__init__(self, _id, _details, _loaded)
            self._version = _version
            self._node = _node
            self._uuid = _uuid
            self._owner = _owner
            self._timeToIdle = _timeToIdle
            self._timeToLive = _timeToLive
            self._started = _started
            self._closed = _closed
            self._message = _message
            self._defaultEventType = _defaultEventType
            self._userAgent = _userAgent
            self._eventsSeq = _eventsSeq
            self._eventsLoaded = _eventsLoaded
            self._annotationLinksSeq = _annotationLinksSeq
            self._annotationLinksLoaded = _annotationLinksLoaded
            self._annotationLinksCountPerOwner = _annotationLinksCountPerOwner

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::IObject', '::omero::model::Session')

        def ice_id(self, current=None):
            return '::omero::model::Session'

        def ice_staticId():
            return '::omero::model::Session'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getVersion(self, current=None):
        # def setVersion(self, theVersion, current=None):
        # def getNode(self, current=None):
        # def setNode(self, theNode, current=None):
        # def getUuid(self, current=None):
        # def setUuid(self, theUuid, current=None):
        # def getOwner(self, current=None):
        # def setOwner(self, theOwner, current=None):
        # def getTimeToIdle(self, current=None):
        # def setTimeToIdle(self, theTimeToIdle, current=None):
        # def getTimeToLive(self, current=None):
        # def setTimeToLive(self, theTimeToLive, current=None):
        # def getStarted(self, current=None):
        # def setStarted(self, theStarted, current=None):
        # def getClosed(self, current=None):
        # def setClosed(self, theClosed, current=None):
        # def getMessage(self, current=None):
        # def setMessage(self, theMessage, current=None):
        # def getDefaultEventType(self, current=None):
        # def setDefaultEventType(self, theDefaultEventType, current=None):
        # def getUserAgent(self, current=None):
        # def setUserAgent(self, theUserAgent, current=None):
        # def unloadEvents(self, current=None):
        # def sizeOfEvents(self, current=None):
        # def copyEvents(self, current=None):
        # def addEvent(self, target, current=None):
        # def addAllEventSet(self, targets, current=None):
        # def removeEvent(self, theTarget, current=None):
        # def removeAllEventSet(self, targets, current=None):
        # def clearEvents(self, current=None):
        # def reloadEvents(self, toCopy, current=None):
        # def unloadAnnotationLinks(self, current=None):
        # def sizeOfAnnotationLinks(self, current=None):
        # def copyAnnotationLinks(self, current=None):
        # def addSessionAnnotationLink(self, target, current=None):
        # def addAllSessionAnnotationLinkSet(self, targets, current=None):
        # def removeSessionAnnotationLink(self, theTarget, current=None):
        # def removeAllSessionAnnotationLinkSet(self, targets, current=None):
        # def clearAnnotationLinks(self, current=None):
        # def reloadAnnotationLinks(self, toCopy, current=None):
        # def getAnnotationLinksCountPerOwner(self, current=None):
        # def linkAnnotation(self, addition, current=None):
        # def addSessionAnnotationLinkToBoth(self, link, bothSides, current=None):
        # def findSessionAnnotationLink(self, removal, current=None):
        # def unlinkAnnotation(self, removal, current=None):
        # def removeSessionAnnotationLinkFromBoth(self, link, bothSides, current=None):
        # def linkedAnnotationList(self, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_Session)

        __repr__ = __str__

    _M_omero.model.SessionPrx = Ice.createTempClass()
    class SessionPrx(_M_omero.model.IObjectPrx):

        def getVersion(self, _ctx=None):
            return _M_omero.model.Session._op_getVersion.invoke(self, ((), _ctx))

        def setVersion(self, theVersion, _ctx=None):
            return _M_omero.model.Session._op_setVersion.invoke(self, ((theVersion, ), _ctx))

        def getNode(self, _ctx=None):
            return _M_omero.model.Session._op_getNode.invoke(self, ((), _ctx))

        def setNode(self, theNode, _ctx=None):
            return _M_omero.model.Session._op_setNode.invoke(self, ((theNode, ), _ctx))

        def getUuid(self, _ctx=None):
            return _M_omero.model.Session._op_getUuid.invoke(self, ((), _ctx))

        def setUuid(self, theUuid, _ctx=None):
            return _M_omero.model.Session._op_setUuid.invoke(self, ((theUuid, ), _ctx))

        def getOwner(self, _ctx=None):
            return _M_omero.model.Session._op_getOwner.invoke(self, ((), _ctx))

        def setOwner(self, theOwner, _ctx=None):
            return _M_omero.model.Session._op_setOwner.invoke(self, ((theOwner, ), _ctx))

        def getTimeToIdle(self, _ctx=None):
            return _M_omero.model.Session._op_getTimeToIdle.invoke(self, ((), _ctx))

        def setTimeToIdle(self, theTimeToIdle, _ctx=None):
            return _M_omero.model.Session._op_setTimeToIdle.invoke(self, ((theTimeToIdle, ), _ctx))

        def getTimeToLive(self, _ctx=None):
            return _M_omero.model.Session._op_getTimeToLive.invoke(self, ((), _ctx))

        def setTimeToLive(self, theTimeToLive, _ctx=None):
            return _M_omero.model.Session._op_setTimeToLive.invoke(self, ((theTimeToLive, ), _ctx))

        def getStarted(self, _ctx=None):
            return _M_omero.model.Session._op_getStarted.invoke(self, ((), _ctx))

        def setStarted(self, theStarted, _ctx=None):
            return _M_omero.model.Session._op_setStarted.invoke(self, ((theStarted, ), _ctx))

        def getClosed(self, _ctx=None):
            return _M_omero.model.Session._op_getClosed.invoke(self, ((), _ctx))

        def setClosed(self, theClosed, _ctx=None):
            return _M_omero.model.Session._op_setClosed.invoke(self, ((theClosed, ), _ctx))

        def getMessage(self, _ctx=None):
            return _M_omero.model.Session._op_getMessage.invoke(self, ((), _ctx))

        def setMessage(self, theMessage, _ctx=None):
            return _M_omero.model.Session._op_setMessage.invoke(self, ((theMessage, ), _ctx))

        def getDefaultEventType(self, _ctx=None):
            return _M_omero.model.Session._op_getDefaultEventType.invoke(self, ((), _ctx))

        def setDefaultEventType(self, theDefaultEventType, _ctx=None):
            return _M_omero.model.Session._op_setDefaultEventType.invoke(self, ((theDefaultEventType, ), _ctx))

        def getUserAgent(self, _ctx=None):
            return _M_omero.model.Session._op_getUserAgent.invoke(self, ((), _ctx))

        def setUserAgent(self, theUserAgent, _ctx=None):
            return _M_omero.model.Session._op_setUserAgent.invoke(self, ((theUserAgent, ), _ctx))

        def unloadEvents(self, _ctx=None):
            return _M_omero.model.Session._op_unloadEvents.invoke(self, ((), _ctx))

        def sizeOfEvents(self, _ctx=None):
            return _M_omero.model.Session._op_sizeOfEvents.invoke(self, ((), _ctx))

        def copyEvents(self, _ctx=None):
            return _M_omero.model.Session._op_copyEvents.invoke(self, ((), _ctx))

        def addEvent(self, target, _ctx=None):
            return _M_omero.model.Session._op_addEvent.invoke(self, ((target, ), _ctx))

        def addAllEventSet(self, targets, _ctx=None):
            return _M_omero.model.Session._op_addAllEventSet.invoke(self, ((targets, ), _ctx))

        def removeEvent(self, theTarget, _ctx=None):
            return _M_omero.model.Session._op_removeEvent.invoke(self, ((theTarget, ), _ctx))

        def removeAllEventSet(self, targets, _ctx=None):
            return _M_omero.model.Session._op_removeAllEventSet.invoke(self, ((targets, ), _ctx))

        def clearEvents(self, _ctx=None):
            return _M_omero.model.Session._op_clearEvents.invoke(self, ((), _ctx))

        def reloadEvents(self, toCopy, _ctx=None):
            return _M_omero.model.Session._op_reloadEvents.invoke(self, ((toCopy, ), _ctx))

        def unloadAnnotationLinks(self, _ctx=None):
            return _M_omero.model.Session._op_unloadAnnotationLinks.invoke(self, ((), _ctx))

        def sizeOfAnnotationLinks(self, _ctx=None):
            return _M_omero.model.Session._op_sizeOfAnnotationLinks.invoke(self, ((), _ctx))

        def copyAnnotationLinks(self, _ctx=None):
            return _M_omero.model.Session._op_copyAnnotationLinks.invoke(self, ((), _ctx))

        def addSessionAnnotationLink(self, target, _ctx=None):
            return _M_omero.model.Session._op_addSessionAnnotationLink.invoke(self, ((target, ), _ctx))

        def addAllSessionAnnotationLinkSet(self, targets, _ctx=None):
            return _M_omero.model.Session._op_addAllSessionAnnotationLinkSet.invoke(self, ((targets, ), _ctx))

        def removeSessionAnnotationLink(self, theTarget, _ctx=None):
            return _M_omero.model.Session._op_removeSessionAnnotationLink.invoke(self, ((theTarget, ), _ctx))

        def removeAllSessionAnnotationLinkSet(self, targets, _ctx=None):
            return _M_omero.model.Session._op_removeAllSessionAnnotationLinkSet.invoke(self, ((targets, ), _ctx))

        def clearAnnotationLinks(self, _ctx=None):
            return _M_omero.model.Session._op_clearAnnotationLinks.invoke(self, ((), _ctx))

        def reloadAnnotationLinks(self, toCopy, _ctx=None):
            return _M_omero.model.Session._op_reloadAnnotationLinks.invoke(self, ((toCopy, ), _ctx))

        def getAnnotationLinksCountPerOwner(self, _ctx=None):
            return _M_omero.model.Session._op_getAnnotationLinksCountPerOwner.invoke(self, ((), _ctx))

        def linkAnnotation(self, addition, _ctx=None):
            return _M_omero.model.Session._op_linkAnnotation.invoke(self, ((addition, ), _ctx))

        def addSessionAnnotationLinkToBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.Session._op_addSessionAnnotationLinkToBoth.invoke(self, ((link, bothSides), _ctx))

        def findSessionAnnotationLink(self, removal, _ctx=None):
            return _M_omero.model.Session._op_findSessionAnnotationLink.invoke(self, ((removal, ), _ctx))

        def unlinkAnnotation(self, removal, _ctx=None):
            return _M_omero.model.Session._op_unlinkAnnotation.invoke(self, ((removal, ), _ctx))

        def removeSessionAnnotationLinkFromBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.Session._op_removeSessionAnnotationLinkFromBoth.invoke(self, ((link, bothSides), _ctx))

        def linkedAnnotationList(self, _ctx=None):
            return _M_omero.model.Session._op_linkedAnnotationList.invoke(self, ((), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.SessionPrx.ice_checkedCast(proxy, '::omero::model::Session', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.SessionPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_SessionPrx = IcePy.defineProxy('::omero::model::Session', SessionPrx)

    _M_omero.model._t_Session = IcePy.declareClass('::omero::model::Session')

    _M_omero.model._t_Session = IcePy.defineClass('::omero::model::Session', Session, (), True, _M_omero.model._t_IObject, (), (
        ('_version', (), _M_omero._t_RInt),
        ('_node', (), _M_omero.model._t_Node),
        ('_uuid', (), _M_omero._t_RString),
        ('_owner', (), _M_omero.model._t_Experimenter),
        ('_timeToIdle', (), _M_omero._t_RLong),
        ('_timeToLive', (), _M_omero._t_RLong),
        ('_started', (), _M_omero._t_RTime),
        ('_closed', (), _M_omero._t_RTime),
        ('_message', (), _M_omero._t_RString),
        ('_defaultEventType', (), _M_omero._t_RString),
        ('_userAgent', (), _M_omero._t_RString),
        ('_eventsSeq', (), _M_omero.model._t_SessionEventsSeq),
        ('_eventsLoaded', (), IcePy._t_bool),
        ('_annotationLinksSeq', (), _M_omero.model._t_SessionAnnotationLinksSeq),
        ('_annotationLinksLoaded', (), IcePy._t_bool),
        ('_annotationLinksCountPerOwner', (), _M_omero.sys._t_CountMap)
    ))
    Session.ice_type = _M_omero.model._t_Session

    Session._op_getVersion = IcePy.Operation('getVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    Session._op_setVersion = IcePy.Operation('setVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    Session._op_getNode = IcePy.Operation('getNode', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_Node, ())
    Session._op_setNode = IcePy.Operation('setNode', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Node),), (), None, ())
    Session._op_getUuid = IcePy.Operation('getUuid', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Session._op_setUuid = IcePy.Operation('setUuid', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Session._op_getOwner = IcePy.Operation('getOwner', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_Experimenter, ())
    Session._op_setOwner = IcePy.Operation('setOwner', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Experimenter),), (), None, ())
    Session._op_getTimeToIdle = IcePy.Operation('getTimeToIdle', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RLong, ())
    Session._op_setTimeToIdle = IcePy.Operation('setTimeToIdle', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RLong),), (), None, ())
    Session._op_getTimeToLive = IcePy.Operation('getTimeToLive', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RLong, ())
    Session._op_setTimeToLive = IcePy.Operation('setTimeToLive', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RLong),), (), None, ())
    Session._op_getStarted = IcePy.Operation('getStarted', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RTime, ())
    Session._op_setStarted = IcePy.Operation('setStarted', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RTime),), (), None, ())
    Session._op_getClosed = IcePy.Operation('getClosed', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RTime, ())
    Session._op_setClosed = IcePy.Operation('setClosed', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RTime),), (), None, ())
    Session._op_getMessage = IcePy.Operation('getMessage', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Session._op_setMessage = IcePy.Operation('setMessage', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Session._op_getDefaultEventType = IcePy.Operation('getDefaultEventType', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Session._op_setDefaultEventType = IcePy.Operation('setDefaultEventType', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Session._op_getUserAgent = IcePy.Operation('getUserAgent', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Session._op_setUserAgent = IcePy.Operation('setUserAgent', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Session._op_unloadEvents = IcePy.Operation('unloadEvents', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Session._op_sizeOfEvents = IcePy.Operation('sizeOfEvents', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())
    Session._op_copyEvents = IcePy.Operation('copyEvents', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_SessionEventsSeq, ())
    Session._op_addEvent = IcePy.Operation('addEvent', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Event),), (), None, ())
    Session._op_addAllEventSet = IcePy.Operation('addAllEventSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_SessionEventsSeq),), (), None, ())
    Session._op_removeEvent = IcePy.Operation('removeEvent', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Event),), (), None, ())
    Session._op_removeAllEventSet = IcePy.Operation('removeAllEventSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_SessionEventsSeq),), (), None, ())
    Session._op_clearEvents = IcePy.Operation('clearEvents', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Session._op_reloadEvents = IcePy.Operation('reloadEvents', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Session),), (), None, ())
    Session._op_unloadAnnotationLinks = IcePy.Operation('unloadAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Session._op_sizeOfAnnotationLinks = IcePy.Operation('sizeOfAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())
    Session._op_copyAnnotationLinks = IcePy.Operation('copyAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_SessionAnnotationLinksSeq, ())
    Session._op_addSessionAnnotationLink = IcePy.Operation('addSessionAnnotationLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_SessionAnnotationLink),), (), None, ())
    Session._op_addAllSessionAnnotationLinkSet = IcePy.Operation('addAllSessionAnnotationLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_SessionAnnotationLinksSeq),), (), None, ())
    Session._op_removeSessionAnnotationLink = IcePy.Operation('removeSessionAnnotationLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_SessionAnnotationLink),), (), None, ())
    Session._op_removeAllSessionAnnotationLinkSet = IcePy.Operation('removeAllSessionAnnotationLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_SessionAnnotationLinksSeq),), (), None, ())
    Session._op_clearAnnotationLinks = IcePy.Operation('clearAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Session._op_reloadAnnotationLinks = IcePy.Operation('reloadAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Session),), (), None, ())
    Session._op_getAnnotationLinksCountPerOwner = IcePy.Operation('getAnnotationLinksCountPerOwner', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.sys._t_CountMap, ())
    Session._op_linkAnnotation = IcePy.Operation('linkAnnotation', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Annotation),), (), _M_omero.model._t_SessionAnnotationLink, ())
    Session._op_addSessionAnnotationLinkToBoth = IcePy.Operation('addSessionAnnotationLinkToBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_SessionAnnotationLink), ((), IcePy._t_bool)), (), None, ())
    Session._op_findSessionAnnotationLink = IcePy.Operation('findSessionAnnotationLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Annotation),), (), _M_omero.model._t_SessionAnnotationLinksSeq, ())
    Session._op_unlinkAnnotation = IcePy.Operation('unlinkAnnotation', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Annotation),), (), None, ())
    Session._op_removeSessionAnnotationLinkFromBoth = IcePy.Operation('removeSessionAnnotationLinkFromBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_SessionAnnotationLink), ((), IcePy._t_bool)), (), None, ())
    Session._op_linkedAnnotationList = IcePy.Operation('linkedAnnotationList', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_SessionLinkedAnnotationSeq, ())

    _M_omero.model.Session = Session
    del Session

    _M_omero.model.SessionPrx = SessionPrx
    del SessionPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
