# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `ITimeline.ice'

import Ice, IcePy, __builtin__

if not Ice.__dict__.has_key("_struct_marker"):
    Ice._struct_marker = object()
import omero_ModelF_ice
import omero_ServicesF_ice
import omero_System_ice
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

if not _M_omero.api.__dict__.has_key('ITimeline'):
    _M_omero.api.ITimeline = Ice.createTempClass()
    class ITimeline(_M_omero.api.ServiceInterface):
        def __init__(self):
            if __builtin__.type(self) == _M_omero.api.ITimeline:
                raise RuntimeError('omero.api.ITimeline is an abstract class')

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::api::ITimeline', '::omero::api::ServiceInterface')

        def ice_id(self, current=None):
            return '::omero::api::ITimeline'

        def ice_staticId():
            return '::omero::api::ITimeline'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getMostRecentAnnotationLinks_async(self, _cb, parentTypes, childTypes, namespaces, p, current=None):
        # def getMostRecentShareCommentLinks_async(self, _cb, p, current=None):
        # def getMostRecentObjects_async(self, _cb, types, p, merge, current=None):
        # def getByPeriod_async(self, _cb, types, start, end, p, merge, current=None):
        # def countByPeriod_async(self, _cb, types, start, end, p, current=None):
        # def getEventLogsByPeriod_async(self, _cb, start, end, p, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.api._t_ITimeline)

        __repr__ = __str__

    _M_omero.api.ITimelinePrx = Ice.createTempClass()
    class ITimelinePrx(_M_omero.api.ServiceInterfacePrx):

        def getMostRecentAnnotationLinks(self, parentTypes, childTypes, namespaces, p, _ctx=None):
            return _M_omero.api.ITimeline._op_getMostRecentAnnotationLinks.invoke(self, ((parentTypes, childTypes, namespaces, p), _ctx))

        def getMostRecentAnnotationLinks_async(self, _cb, parentTypes, childTypes, namespaces, p, _ctx=None):
            return _M_omero.api.ITimeline._op_getMostRecentAnnotationLinks.invokeAsync(self, (_cb, (parentTypes, childTypes, namespaces, p), _ctx))

        def getMostRecentShareCommentLinks(self, p, _ctx=None):
            return _M_omero.api.ITimeline._op_getMostRecentShareCommentLinks.invoke(self, ((p, ), _ctx))

        def getMostRecentShareCommentLinks_async(self, _cb, p, _ctx=None):
            return _M_omero.api.ITimeline._op_getMostRecentShareCommentLinks.invokeAsync(self, (_cb, (p, ), _ctx))

        def getMostRecentObjects(self, types, p, merge, _ctx=None):
            return _M_omero.api.ITimeline._op_getMostRecentObjects.invoke(self, ((types, p, merge), _ctx))

        def getMostRecentObjects_async(self, _cb, types, p, merge, _ctx=None):
            return _M_omero.api.ITimeline._op_getMostRecentObjects.invokeAsync(self, (_cb, (types, p, merge), _ctx))

        def getByPeriod(self, types, start, end, p, merge, _ctx=None):
            return _M_omero.api.ITimeline._op_getByPeriod.invoke(self, ((types, start, end, p, merge), _ctx))

        def getByPeriod_async(self, _cb, types, start, end, p, merge, _ctx=None):
            return _M_omero.api.ITimeline._op_getByPeriod.invokeAsync(self, (_cb, (types, start, end, p, merge), _ctx))

        def countByPeriod(self, types, start, end, p, _ctx=None):
            return _M_omero.api.ITimeline._op_countByPeriod.invoke(self, ((types, start, end, p), _ctx))

        def countByPeriod_async(self, _cb, types, start, end, p, _ctx=None):
            return _M_omero.api.ITimeline._op_countByPeriod.invokeAsync(self, (_cb, (types, start, end, p), _ctx))

        def getEventLogsByPeriod(self, start, end, p, _ctx=None):
            return _M_omero.api.ITimeline._op_getEventLogsByPeriod.invoke(self, ((start, end, p), _ctx))

        def getEventLogsByPeriod_async(self, _cb, start, end, p, _ctx=None):
            return _M_omero.api.ITimeline._op_getEventLogsByPeriod.invokeAsync(self, (_cb, (start, end, p), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.api.ITimelinePrx.ice_checkedCast(proxy, '::omero::api::ITimeline', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.api.ITimelinePrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.api._t_ITimelinePrx = IcePy.defineProxy('::omero::api::ITimeline', ITimelinePrx)

    _M_omero.api._t_ITimeline = IcePy.defineClass('::omero::api::ITimeline', ITimeline, (), True, None, (_M_omero.api._t_ServiceInterface,), ())
    ITimeline.ice_type = _M_omero.api._t_ITimeline

    ITimeline._op_getMostRecentAnnotationLinks = IcePy.Operation('getMostRecentAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.api._t_StringSet), ((), _M_omero.api._t_StringSet), ((), _M_omero.api._t_StringSet), ((), _M_omero.sys._t_Parameters)), (), _M_omero.api._t_IObjectList, (_M_omero._t_ServerError,))
    ITimeline._op_getMostRecentShareCommentLinks = IcePy.Operation('getMostRecentShareCommentLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.sys._t_Parameters),), (), _M_omero.api._t_IObjectList, (_M_omero._t_ServerError,))
    ITimeline._op_getMostRecentObjects = IcePy.Operation('getMostRecentObjects', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.api._t_StringSet), ((), _M_omero.sys._t_Parameters), ((), IcePy._t_bool)), (), _M_omero.api._t_IObjectListMap, (_M_omero._t_ServerError,))
    ITimeline._op_getByPeriod = IcePy.Operation('getByPeriod', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.api._t_StringSet), ((), _M_omero._t_RTime), ((), _M_omero._t_RTime), ((), _M_omero.sys._t_Parameters), ((), IcePy._t_bool)), (), _M_omero.api._t_IObjectListMap, (_M_omero._t_ServerError,))
    ITimeline._op_countByPeriod = IcePy.Operation('countByPeriod', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.api._t_StringSet), ((), _M_omero._t_RTime), ((), _M_omero._t_RTime), ((), _M_omero.sys._t_Parameters)), (), _M_omero.api._t_StringLongMap, (_M_omero._t_ServerError,))
    ITimeline._op_getEventLogsByPeriod = IcePy.Operation('getEventLogsByPeriod', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero._t_RTime), ((), _M_omero._t_RTime), ((), _M_omero.sys._t_Parameters)), (), _M_omero.api._t_EventLogList, (_M_omero._t_ServerError,))

    _M_omero.api.ITimeline = ITimeline
    del ITimeline

    _M_omero.api.ITimelinePrx = ITimelinePrx
    del ITimelinePrx

# End of module omero.api

__name__ = 'omero'

# End of module omero
