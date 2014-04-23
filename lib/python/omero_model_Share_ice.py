# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `Share.ice'

import Ice, IcePy, __builtin__

if not Ice.__dict__.has_key("_struct_marker"):
    Ice._struct_marker = object()
import omero_model_IObject_ice
import omero_RTypes_ice
import omero_System_ice
import omero_Collections_ice
import omero_model_Session_ice

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

if not _M_omero.model.__dict__.has_key('ExperimenterGroup'):
    _M_omero.model._t_ExperimenterGroup = IcePy.declareClass('::omero::model::ExperimenterGroup')
    _M_omero.model._t_ExperimenterGroupPrx = IcePy.declareProxy('::omero::model::ExperimenterGroup')

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

if not _M_omero.model.__dict__.has_key('Share'):
    _M_omero.model.Share = Ice.createTempClass()
    class Share(_M_omero.model.Session):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _node=None, _uuid=None, _owner=None, _timeToIdle=None, _timeToLive=None, _started=None, _closed=None, _message=None, _defaultEventType=None, _userAgent=None, _eventsSeq=None, _eventsLoaded=False, _annotationLinksSeq=None, _annotationLinksLoaded=False, _annotationLinksCountPerOwner=None, _group=None, _itemCount=None, _active=None, _data=None):
            if __builtin__.type(self) == _M_omero.model.Share:
                raise RuntimeError('omero.model.Share is an abstract class')
            _M_omero.model.Session.__init__(self, _id, _details, _loaded, _version, _node, _uuid, _owner, _timeToIdle, _timeToLive, _started, _closed, _message, _defaultEventType, _userAgent, _eventsSeq, _eventsLoaded, _annotationLinksSeq, _annotationLinksLoaded, _annotationLinksCountPerOwner)
            self._group = _group
            self._itemCount = _itemCount
            self._active = _active
            self._data = _data

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::IObject', '::omero::model::Session', '::omero::model::Share')

        def ice_id(self, current=None):
            return '::omero::model::Share'

        def ice_staticId():
            return '::omero::model::Share'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getGroup(self, current=None):
        # def setGroup(self, theGroup, current=None):
        # def getItemCount(self, current=None):
        # def setItemCount(self, theItemCount, current=None):
        # def getActive(self, current=None):
        # def setActive(self, theActive, current=None):
        # def getData(self, current=None):
        # def setData(self, theData, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_Share)

        __repr__ = __str__

    _M_omero.model.SharePrx = Ice.createTempClass()
    class SharePrx(_M_omero.model.SessionPrx):

        def getGroup(self, _ctx=None):
            return _M_omero.model.Share._op_getGroup.invoke(self, ((), _ctx))

        def setGroup(self, theGroup, _ctx=None):
            return _M_omero.model.Share._op_setGroup.invoke(self, ((theGroup, ), _ctx))

        def getItemCount(self, _ctx=None):
            return _M_omero.model.Share._op_getItemCount.invoke(self, ((), _ctx))

        def setItemCount(self, theItemCount, _ctx=None):
            return _M_omero.model.Share._op_setItemCount.invoke(self, ((theItemCount, ), _ctx))

        def getActive(self, _ctx=None):
            return _M_omero.model.Share._op_getActive.invoke(self, ((), _ctx))

        def setActive(self, theActive, _ctx=None):
            return _M_omero.model.Share._op_setActive.invoke(self, ((theActive, ), _ctx))

        def getData(self, _ctx=None):
            return _M_omero.model.Share._op_getData.invoke(self, ((), _ctx))

        def setData(self, theData, _ctx=None):
            return _M_omero.model.Share._op_setData.invoke(self, ((theData, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.SharePrx.ice_checkedCast(proxy, '::omero::model::Share', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.SharePrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_SharePrx = IcePy.defineProxy('::omero::model::Share', SharePrx)

    _M_omero.model._t_Share = IcePy.declareClass('::omero::model::Share')

    _M_omero.model._t_Share = IcePy.defineClass('::omero::model::Share', Share, (), True, _M_omero.model._t_Session, (), (
        ('_group', (), _M_omero.model._t_ExperimenterGroup),
        ('_itemCount', (), _M_omero._t_RLong),
        ('_active', (), _M_omero._t_RBool),
        ('_data', (), _M_Ice._t_ByteSeq)
    ))
    Share.ice_type = _M_omero.model._t_Share

    Share._op_getGroup = IcePy.Operation('getGroup', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_ExperimenterGroup, ())
    Share._op_setGroup = IcePy.Operation('setGroup', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ExperimenterGroup),), (), None, ())
    Share._op_getItemCount = IcePy.Operation('getItemCount', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RLong, ())
    Share._op_setItemCount = IcePy.Operation('setItemCount', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RLong),), (), None, ())
    Share._op_getActive = IcePy.Operation('getActive', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RBool, ())
    Share._op_setActive = IcePy.Operation('setActive', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RBool),), (), None, ())
    Share._op_getData = IcePy.Operation('getData', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_Ice._t_ByteSeq, ())
    Share._op_setData = IcePy.Operation('setData', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_Ice._t_ByteSeq),), (), None, ())

    _M_omero.model.Share = Share
    del Share

    _M_omero.model.SharePrx = SharePrx
    del SharePrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
