# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `Node.ice'

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

if not _M_omero.model.__dict__.has_key('Session'):
    _M_omero.model._t_Session = IcePy.declareClass('::omero::model::Session')
    _M_omero.model._t_SessionPrx = IcePy.declareProxy('::omero::model::Session')

if not _M_omero.model.__dict__.has_key('NodeAnnotationLink'):
    _M_omero.model._t_NodeAnnotationLink = IcePy.declareClass('::omero::model::NodeAnnotationLink')
    _M_omero.model._t_NodeAnnotationLinkPrx = IcePy.declareProxy('::omero::model::NodeAnnotationLink')

if not _M_omero.model.__dict__.has_key('Annotation'):
    _M_omero.model._t_Annotation = IcePy.declareClass('::omero::model::Annotation')
    _M_omero.model._t_AnnotationPrx = IcePy.declareProxy('::omero::model::Annotation')

if not _M_omero.model.__dict__.has_key('Details'):
    _M_omero.model._t_Details = IcePy.declareClass('::omero::model::Details')
    _M_omero.model._t_DetailsPrx = IcePy.declareProxy('::omero::model::Details')

if not _M_omero.model.__dict__.has_key('_t_NodeSessionsSeq'):
    _M_omero.model._t_NodeSessionsSeq = IcePy.defineSequence('::omero::model::NodeSessionsSeq', (), _M_omero.model._t_Session)

if not _M_omero.model.__dict__.has_key('_t_NodeAnnotationLinksSeq'):
    _M_omero.model._t_NodeAnnotationLinksSeq = IcePy.defineSequence('::omero::model::NodeAnnotationLinksSeq', (), _M_omero.model._t_NodeAnnotationLink)

if not _M_omero.model.__dict__.has_key('_t_NodeLinkedAnnotationSeq'):
    _M_omero.model._t_NodeLinkedAnnotationSeq = IcePy.defineSequence('::omero::model::NodeLinkedAnnotationSeq', (), _M_omero.model._t_Annotation)

if not _M_omero.model.__dict__.has_key('Node'):
    _M_omero.model.Node = Ice.createTempClass()
    class Node(_M_omero.model.IObject):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _sessionsSeq=None, _sessionsLoaded=False, _uuid=None, _conn=None, _up=None, _down=None, _scale=None, _annotationLinksSeq=None, _annotationLinksLoaded=False, _annotationLinksCountPerOwner=None):
            if __builtin__.type(self) == _M_omero.model.Node:
                raise RuntimeError('omero.model.Node is an abstract class')
            _M_omero.model.IObject.__init__(self, _id, _details, _loaded)
            self._version = _version
            self._sessionsSeq = _sessionsSeq
            self._sessionsLoaded = _sessionsLoaded
            self._uuid = _uuid
            self._conn = _conn
            self._up = _up
            self._down = _down
            self._scale = _scale
            self._annotationLinksSeq = _annotationLinksSeq
            self._annotationLinksLoaded = _annotationLinksLoaded
            self._annotationLinksCountPerOwner = _annotationLinksCountPerOwner

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::IObject', '::omero::model::Node')

        def ice_id(self, current=None):
            return '::omero::model::Node'

        def ice_staticId():
            return '::omero::model::Node'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getVersion(self, current=None):
        # def setVersion(self, theVersion, current=None):
        # def unloadSessions(self, current=None):
        # def sizeOfSessions(self, current=None):
        # def copySessions(self, current=None):
        # def addSession(self, target, current=None):
        # def addAllSessionSet(self, targets, current=None):
        # def removeSession(self, theTarget, current=None):
        # def removeAllSessionSet(self, targets, current=None):
        # def clearSessions(self, current=None):
        # def reloadSessions(self, toCopy, current=None):
        # def getUuid(self, current=None):
        # def setUuid(self, theUuid, current=None):
        # def getConn(self, current=None):
        # def setConn(self, theConn, current=None):
        # def getUp(self, current=None):
        # def setUp(self, theUp, current=None):
        # def getDown(self, current=None):
        # def setDown(self, theDown, current=None):
        # def getScale(self, current=None):
        # def setScale(self, theScale, current=None):
        # def unloadAnnotationLinks(self, current=None):
        # def sizeOfAnnotationLinks(self, current=None):
        # def copyAnnotationLinks(self, current=None):
        # def addNodeAnnotationLink(self, target, current=None):
        # def addAllNodeAnnotationLinkSet(self, targets, current=None):
        # def removeNodeAnnotationLink(self, theTarget, current=None):
        # def removeAllNodeAnnotationLinkSet(self, targets, current=None):
        # def clearAnnotationLinks(self, current=None):
        # def reloadAnnotationLinks(self, toCopy, current=None):
        # def getAnnotationLinksCountPerOwner(self, current=None):
        # def linkAnnotation(self, addition, current=None):
        # def addNodeAnnotationLinkToBoth(self, link, bothSides, current=None):
        # def findNodeAnnotationLink(self, removal, current=None):
        # def unlinkAnnotation(self, removal, current=None):
        # def removeNodeAnnotationLinkFromBoth(self, link, bothSides, current=None):
        # def linkedAnnotationList(self, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_Node)

        __repr__ = __str__

    _M_omero.model.NodePrx = Ice.createTempClass()
    class NodePrx(_M_omero.model.IObjectPrx):

        def getVersion(self, _ctx=None):
            return _M_omero.model.Node._op_getVersion.invoke(self, ((), _ctx))

        def setVersion(self, theVersion, _ctx=None):
            return _M_omero.model.Node._op_setVersion.invoke(self, ((theVersion, ), _ctx))

        def unloadSessions(self, _ctx=None):
            return _M_omero.model.Node._op_unloadSessions.invoke(self, ((), _ctx))

        def sizeOfSessions(self, _ctx=None):
            return _M_omero.model.Node._op_sizeOfSessions.invoke(self, ((), _ctx))

        def copySessions(self, _ctx=None):
            return _M_omero.model.Node._op_copySessions.invoke(self, ((), _ctx))

        def addSession(self, target, _ctx=None):
            return _M_omero.model.Node._op_addSession.invoke(self, ((target, ), _ctx))

        def addAllSessionSet(self, targets, _ctx=None):
            return _M_omero.model.Node._op_addAllSessionSet.invoke(self, ((targets, ), _ctx))

        def removeSession(self, theTarget, _ctx=None):
            return _M_omero.model.Node._op_removeSession.invoke(self, ((theTarget, ), _ctx))

        def removeAllSessionSet(self, targets, _ctx=None):
            return _M_omero.model.Node._op_removeAllSessionSet.invoke(self, ((targets, ), _ctx))

        def clearSessions(self, _ctx=None):
            return _M_omero.model.Node._op_clearSessions.invoke(self, ((), _ctx))

        def reloadSessions(self, toCopy, _ctx=None):
            return _M_omero.model.Node._op_reloadSessions.invoke(self, ((toCopy, ), _ctx))

        def getUuid(self, _ctx=None):
            return _M_omero.model.Node._op_getUuid.invoke(self, ((), _ctx))

        def setUuid(self, theUuid, _ctx=None):
            return _M_omero.model.Node._op_setUuid.invoke(self, ((theUuid, ), _ctx))

        def getConn(self, _ctx=None):
            return _M_omero.model.Node._op_getConn.invoke(self, ((), _ctx))

        def setConn(self, theConn, _ctx=None):
            return _M_omero.model.Node._op_setConn.invoke(self, ((theConn, ), _ctx))

        def getUp(self, _ctx=None):
            return _M_omero.model.Node._op_getUp.invoke(self, ((), _ctx))

        def setUp(self, theUp, _ctx=None):
            return _M_omero.model.Node._op_setUp.invoke(self, ((theUp, ), _ctx))

        def getDown(self, _ctx=None):
            return _M_omero.model.Node._op_getDown.invoke(self, ((), _ctx))

        def setDown(self, theDown, _ctx=None):
            return _M_omero.model.Node._op_setDown.invoke(self, ((theDown, ), _ctx))

        def getScale(self, _ctx=None):
            return _M_omero.model.Node._op_getScale.invoke(self, ((), _ctx))

        def setScale(self, theScale, _ctx=None):
            return _M_omero.model.Node._op_setScale.invoke(self, ((theScale, ), _ctx))

        def unloadAnnotationLinks(self, _ctx=None):
            return _M_omero.model.Node._op_unloadAnnotationLinks.invoke(self, ((), _ctx))

        def sizeOfAnnotationLinks(self, _ctx=None):
            return _M_omero.model.Node._op_sizeOfAnnotationLinks.invoke(self, ((), _ctx))

        def copyAnnotationLinks(self, _ctx=None):
            return _M_omero.model.Node._op_copyAnnotationLinks.invoke(self, ((), _ctx))

        def addNodeAnnotationLink(self, target, _ctx=None):
            return _M_omero.model.Node._op_addNodeAnnotationLink.invoke(self, ((target, ), _ctx))

        def addAllNodeAnnotationLinkSet(self, targets, _ctx=None):
            return _M_omero.model.Node._op_addAllNodeAnnotationLinkSet.invoke(self, ((targets, ), _ctx))

        def removeNodeAnnotationLink(self, theTarget, _ctx=None):
            return _M_omero.model.Node._op_removeNodeAnnotationLink.invoke(self, ((theTarget, ), _ctx))

        def removeAllNodeAnnotationLinkSet(self, targets, _ctx=None):
            return _M_omero.model.Node._op_removeAllNodeAnnotationLinkSet.invoke(self, ((targets, ), _ctx))

        def clearAnnotationLinks(self, _ctx=None):
            return _M_omero.model.Node._op_clearAnnotationLinks.invoke(self, ((), _ctx))

        def reloadAnnotationLinks(self, toCopy, _ctx=None):
            return _M_omero.model.Node._op_reloadAnnotationLinks.invoke(self, ((toCopy, ), _ctx))

        def getAnnotationLinksCountPerOwner(self, _ctx=None):
            return _M_omero.model.Node._op_getAnnotationLinksCountPerOwner.invoke(self, ((), _ctx))

        def linkAnnotation(self, addition, _ctx=None):
            return _M_omero.model.Node._op_linkAnnotation.invoke(self, ((addition, ), _ctx))

        def addNodeAnnotationLinkToBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.Node._op_addNodeAnnotationLinkToBoth.invoke(self, ((link, bothSides), _ctx))

        def findNodeAnnotationLink(self, removal, _ctx=None):
            return _M_omero.model.Node._op_findNodeAnnotationLink.invoke(self, ((removal, ), _ctx))

        def unlinkAnnotation(self, removal, _ctx=None):
            return _M_omero.model.Node._op_unlinkAnnotation.invoke(self, ((removal, ), _ctx))

        def removeNodeAnnotationLinkFromBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.Node._op_removeNodeAnnotationLinkFromBoth.invoke(self, ((link, bothSides), _ctx))

        def linkedAnnotationList(self, _ctx=None):
            return _M_omero.model.Node._op_linkedAnnotationList.invoke(self, ((), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.NodePrx.ice_checkedCast(proxy, '::omero::model::Node', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.NodePrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_NodePrx = IcePy.defineProxy('::omero::model::Node', NodePrx)

    _M_omero.model._t_Node = IcePy.declareClass('::omero::model::Node')

    _M_omero.model._t_Node = IcePy.defineClass('::omero::model::Node', Node, (), True, _M_omero.model._t_IObject, (), (
        ('_version', (), _M_omero._t_RInt),
        ('_sessionsSeq', (), _M_omero.model._t_NodeSessionsSeq),
        ('_sessionsLoaded', (), IcePy._t_bool),
        ('_uuid', (), _M_omero._t_RString),
        ('_conn', (), _M_omero._t_RString),
        ('_up', (), _M_omero._t_RTime),
        ('_down', (), _M_omero._t_RTime),
        ('_scale', (), _M_omero._t_RInt),
        ('_annotationLinksSeq', (), _M_omero.model._t_NodeAnnotationLinksSeq),
        ('_annotationLinksLoaded', (), IcePy._t_bool),
        ('_annotationLinksCountPerOwner', (), _M_omero.sys._t_CountMap)
    ))
    Node.ice_type = _M_omero.model._t_Node

    Node._op_getVersion = IcePy.Operation('getVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    Node._op_setVersion = IcePy.Operation('setVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    Node._op_unloadSessions = IcePy.Operation('unloadSessions', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Node._op_sizeOfSessions = IcePy.Operation('sizeOfSessions', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())
    Node._op_copySessions = IcePy.Operation('copySessions', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_NodeSessionsSeq, ())
    Node._op_addSession = IcePy.Operation('addSession', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Session),), (), None, ())
    Node._op_addAllSessionSet = IcePy.Operation('addAllSessionSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_NodeSessionsSeq),), (), None, ())
    Node._op_removeSession = IcePy.Operation('removeSession', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Session),), (), None, ())
    Node._op_removeAllSessionSet = IcePy.Operation('removeAllSessionSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_NodeSessionsSeq),), (), None, ())
    Node._op_clearSessions = IcePy.Operation('clearSessions', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Node._op_reloadSessions = IcePy.Operation('reloadSessions', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Node),), (), None, ())
    Node._op_getUuid = IcePy.Operation('getUuid', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Node._op_setUuid = IcePy.Operation('setUuid', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Node._op_getConn = IcePy.Operation('getConn', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Node._op_setConn = IcePy.Operation('setConn', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Node._op_getUp = IcePy.Operation('getUp', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RTime, ())
    Node._op_setUp = IcePy.Operation('setUp', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RTime),), (), None, ())
    Node._op_getDown = IcePy.Operation('getDown', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RTime, ())
    Node._op_setDown = IcePy.Operation('setDown', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RTime),), (), None, ())
    Node._op_getScale = IcePy.Operation('getScale', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    Node._op_setScale = IcePy.Operation('setScale', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    Node._op_unloadAnnotationLinks = IcePy.Operation('unloadAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Node._op_sizeOfAnnotationLinks = IcePy.Operation('sizeOfAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())
    Node._op_copyAnnotationLinks = IcePy.Operation('copyAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_NodeAnnotationLinksSeq, ())
    Node._op_addNodeAnnotationLink = IcePy.Operation('addNodeAnnotationLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_NodeAnnotationLink),), (), None, ())
    Node._op_addAllNodeAnnotationLinkSet = IcePy.Operation('addAllNodeAnnotationLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_NodeAnnotationLinksSeq),), (), None, ())
    Node._op_removeNodeAnnotationLink = IcePy.Operation('removeNodeAnnotationLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_NodeAnnotationLink),), (), None, ())
    Node._op_removeAllNodeAnnotationLinkSet = IcePy.Operation('removeAllNodeAnnotationLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_NodeAnnotationLinksSeq),), (), None, ())
    Node._op_clearAnnotationLinks = IcePy.Operation('clearAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Node._op_reloadAnnotationLinks = IcePy.Operation('reloadAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Node),), (), None, ())
    Node._op_getAnnotationLinksCountPerOwner = IcePy.Operation('getAnnotationLinksCountPerOwner', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.sys._t_CountMap, ())
    Node._op_linkAnnotation = IcePy.Operation('linkAnnotation', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Annotation),), (), _M_omero.model._t_NodeAnnotationLink, ())
    Node._op_addNodeAnnotationLinkToBoth = IcePy.Operation('addNodeAnnotationLinkToBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_NodeAnnotationLink), ((), IcePy._t_bool)), (), None, ())
    Node._op_findNodeAnnotationLink = IcePy.Operation('findNodeAnnotationLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Annotation),), (), _M_omero.model._t_NodeAnnotationLinksSeq, ())
    Node._op_unlinkAnnotation = IcePy.Operation('unlinkAnnotation', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Annotation),), (), None, ())
    Node._op_removeNodeAnnotationLinkFromBoth = IcePy.Operation('removeNodeAnnotationLinkFromBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_NodeAnnotationLink), ((), IcePy._t_bool)), (), None, ())
    Node._op_linkedAnnotationList = IcePy.Operation('linkedAnnotationList', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_NodeLinkedAnnotationSeq, ())

    _M_omero.model.Node = Node
    del Node

    _M_omero.model.NodePrx = NodePrx
    del NodePrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
