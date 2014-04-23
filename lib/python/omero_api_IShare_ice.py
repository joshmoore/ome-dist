# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `IShare.ice'

import Ice, IcePy, __builtin__

if not Ice.__dict__.has_key("_struct_marker"):
    Ice._struct_marker = object()
import omero_ModelF_ice
import omero_ServicesF_ice
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

if not _M_omero.api.__dict__.has_key('IShare'):
    _M_omero.api.IShare = Ice.createTempClass()
    class IShare(_M_omero.api.ServiceInterface):
        def __init__(self):
            if __builtin__.type(self) == _M_omero.api.IShare:
                raise RuntimeError('omero.api.IShare is an abstract class')

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::api::IShare', '::omero::api::ServiceInterface')

        def ice_id(self, current=None):
            return '::omero::api::IShare'

        def ice_staticId():
            return '::omero::api::IShare'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def activate_async(self, _cb, shareId, current=None):
        # def deactivate_async(self, _cb, current=None):
        # def getShare_async(self, _cb, shareId, current=None):
        # def getMemberCount_async(self, _cb, shareIds, current=None):
        # def getOwnShares_async(self, _cb, active, current=None):
        # def getMemberShares_async(self, _cb, active, current=None):
        # def getSharesOwnedBy_async(self, _cb, user, active, current=None):
        # def getMemberSharesFor_async(self, _cb, user, active, current=None):
        # def getContents_async(self, _cb, shareId, current=None):
        # def getContentSubList_async(self, _cb, shareId, start, finish, current=None):
        # def getContentSize_async(self, _cb, shareId, current=None):
        # def getContentMap_async(self, _cb, shareId, current=None):
        # def createShare_async(self, _cb, description, expiration, items, exps, guests, enabled, current=None):
        # def setDescription_async(self, _cb, shareId, description, current=None):
        # def setExpiration_async(self, _cb, shareId, expiration, current=None):
        # def setActive_async(self, _cb, shareId, active, current=None):
        # def closeShare_async(self, _cb, shareId, current=None):
        # def addObjects_async(self, _cb, shareId, iobjects, current=None):
        # def addObject_async(self, _cb, shareId, iobject, current=None):
        # def removeObjects_async(self, _cb, shareId, iobjects, current=None):
        # def removeObject_async(self, _cb, shareId, iobject, current=None):
        # def getCommentCount_async(self, _cb, shareIds, current=None):
        # def getComments_async(self, _cb, shareId, current=None):
        # def addComment_async(self, _cb, shareId, comment, current=None):
        # def addReply_async(self, _cb, shareId, comment, replyTo, current=None):
        # def deleteComment_async(self, _cb, comment, current=None):
        # def getAllMembers_async(self, _cb, shareId, current=None):
        # def getAllGuests_async(self, _cb, shareId, current=None):
        # def getAllUsers_async(self, _cb, shareId, current=None):
        # def addUsers_async(self, _cb, shareId, exps, current=None):
        # def addGuests_async(self, _cb, shareId, emailAddresses, current=None):
        # def removeUsers_async(self, _cb, shareId, exps, current=None):
        # def removeGuests_async(self, _cb, shareId, emailAddresses, current=None):
        # def addUser_async(self, _cb, shareId, exp, current=None):
        # def addGuest_async(self, _cb, shareId, emailAddress, current=None):
        # def removeUser_async(self, _cb, shareId, exp, current=None):
        # def removeGuest_async(self, _cb, shareId, emailAddress, current=None):
        # def getActiveConnections_async(self, _cb, shareId, current=None):
        # def getPastConnections_async(self, _cb, shareId, current=None):
        # def invalidateConnection_async(self, _cb, shareId, exp, current=None):
        # def getEvents_async(self, _cb, shareId, exp, _from, to, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.api._t_IShare)

        __repr__ = __str__

    _M_omero.api.ISharePrx = Ice.createTempClass()
    class ISharePrx(_M_omero.api.ServiceInterfacePrx):

        def activate(self, shareId, _ctx=None):
            return _M_omero.api.IShare._op_activate.invoke(self, ((shareId, ), _ctx))

        def activate_async(self, _cb, shareId, _ctx=None):
            return _M_omero.api.IShare._op_activate.invokeAsync(self, (_cb, (shareId, ), _ctx))

        def deactivate(self, _ctx=None):
            return _M_omero.api.IShare._op_deactivate.invoke(self, ((), _ctx))

        def deactivate_async(self, _cb, _ctx=None):
            return _M_omero.api.IShare._op_deactivate.invokeAsync(self, (_cb, (), _ctx))

        def getShare(self, shareId, _ctx=None):
            return _M_omero.api.IShare._op_getShare.invoke(self, ((shareId, ), _ctx))

        def getShare_async(self, _cb, shareId, _ctx=None):
            return _M_omero.api.IShare._op_getShare.invokeAsync(self, (_cb, (shareId, ), _ctx))

        def getMemberCount(self, shareIds, _ctx=None):
            return _M_omero.api.IShare._op_getMemberCount.invoke(self, ((shareIds, ), _ctx))

        def getMemberCount_async(self, _cb, shareIds, _ctx=None):
            return _M_omero.api.IShare._op_getMemberCount.invokeAsync(self, (_cb, (shareIds, ), _ctx))

        def getOwnShares(self, active, _ctx=None):
            return _M_omero.api.IShare._op_getOwnShares.invoke(self, ((active, ), _ctx))

        def getOwnShares_async(self, _cb, active, _ctx=None):
            return _M_omero.api.IShare._op_getOwnShares.invokeAsync(self, (_cb, (active, ), _ctx))

        def getMemberShares(self, active, _ctx=None):
            return _M_omero.api.IShare._op_getMemberShares.invoke(self, ((active, ), _ctx))

        def getMemberShares_async(self, _cb, active, _ctx=None):
            return _M_omero.api.IShare._op_getMemberShares.invokeAsync(self, (_cb, (active, ), _ctx))

        def getSharesOwnedBy(self, user, active, _ctx=None):
            return _M_omero.api.IShare._op_getSharesOwnedBy.invoke(self, ((user, active), _ctx))

        def getSharesOwnedBy_async(self, _cb, user, active, _ctx=None):
            return _M_omero.api.IShare._op_getSharesOwnedBy.invokeAsync(self, (_cb, (user, active), _ctx))

        def getMemberSharesFor(self, user, active, _ctx=None):
            return _M_omero.api.IShare._op_getMemberSharesFor.invoke(self, ((user, active), _ctx))

        def getMemberSharesFor_async(self, _cb, user, active, _ctx=None):
            return _M_omero.api.IShare._op_getMemberSharesFor.invokeAsync(self, (_cb, (user, active), _ctx))

        def getContents(self, shareId, _ctx=None):
            return _M_omero.api.IShare._op_getContents.invoke(self, ((shareId, ), _ctx))

        def getContents_async(self, _cb, shareId, _ctx=None):
            return _M_omero.api.IShare._op_getContents.invokeAsync(self, (_cb, (shareId, ), _ctx))

        def getContentSubList(self, shareId, start, finish, _ctx=None):
            return _M_omero.api.IShare._op_getContentSubList.invoke(self, ((shareId, start, finish), _ctx))

        def getContentSubList_async(self, _cb, shareId, start, finish, _ctx=None):
            return _M_omero.api.IShare._op_getContentSubList.invokeAsync(self, (_cb, (shareId, start, finish), _ctx))

        def getContentSize(self, shareId, _ctx=None):
            return _M_omero.api.IShare._op_getContentSize.invoke(self, ((shareId, ), _ctx))

        def getContentSize_async(self, _cb, shareId, _ctx=None):
            return _M_omero.api.IShare._op_getContentSize.invokeAsync(self, (_cb, (shareId, ), _ctx))

        def getContentMap(self, shareId, _ctx=None):
            return _M_omero.api.IShare._op_getContentMap.invoke(self, ((shareId, ), _ctx))

        def getContentMap_async(self, _cb, shareId, _ctx=None):
            return _M_omero.api.IShare._op_getContentMap.invokeAsync(self, (_cb, (shareId, ), _ctx))

        def createShare(self, description, expiration, items, exps, guests, enabled, _ctx=None):
            return _M_omero.api.IShare._op_createShare.invoke(self, ((description, expiration, items, exps, guests, enabled), _ctx))

        def createShare_async(self, _cb, description, expiration, items, exps, guests, enabled, _ctx=None):
            return _M_omero.api.IShare._op_createShare.invokeAsync(self, (_cb, (description, expiration, items, exps, guests, enabled), _ctx))

        def setDescription(self, shareId, description, _ctx=None):
            return _M_omero.api.IShare._op_setDescription.invoke(self, ((shareId, description), _ctx))

        def setDescription_async(self, _cb, shareId, description, _ctx=None):
            return _M_omero.api.IShare._op_setDescription.invokeAsync(self, (_cb, (shareId, description), _ctx))

        def setExpiration(self, shareId, expiration, _ctx=None):
            return _M_omero.api.IShare._op_setExpiration.invoke(self, ((shareId, expiration), _ctx))

        def setExpiration_async(self, _cb, shareId, expiration, _ctx=None):
            return _M_omero.api.IShare._op_setExpiration.invokeAsync(self, (_cb, (shareId, expiration), _ctx))

        def setActive(self, shareId, active, _ctx=None):
            return _M_omero.api.IShare._op_setActive.invoke(self, ((shareId, active), _ctx))

        def setActive_async(self, _cb, shareId, active, _ctx=None):
            return _M_omero.api.IShare._op_setActive.invokeAsync(self, (_cb, (shareId, active), _ctx))

        def closeShare(self, shareId, _ctx=None):
            return _M_omero.api.IShare._op_closeShare.invoke(self, ((shareId, ), _ctx))

        def closeShare_async(self, _cb, shareId, _ctx=None):
            return _M_omero.api.IShare._op_closeShare.invokeAsync(self, (_cb, (shareId, ), _ctx))

        def addObjects(self, shareId, iobjects, _ctx=None):
            return _M_omero.api.IShare._op_addObjects.invoke(self, ((shareId, iobjects), _ctx))

        def addObjects_async(self, _cb, shareId, iobjects, _ctx=None):
            return _M_omero.api.IShare._op_addObjects.invokeAsync(self, (_cb, (shareId, iobjects), _ctx))

        def addObject(self, shareId, iobject, _ctx=None):
            return _M_omero.api.IShare._op_addObject.invoke(self, ((shareId, iobject), _ctx))

        def addObject_async(self, _cb, shareId, iobject, _ctx=None):
            return _M_omero.api.IShare._op_addObject.invokeAsync(self, (_cb, (shareId, iobject), _ctx))

        def removeObjects(self, shareId, iobjects, _ctx=None):
            return _M_omero.api.IShare._op_removeObjects.invoke(self, ((shareId, iobjects), _ctx))

        def removeObjects_async(self, _cb, shareId, iobjects, _ctx=None):
            return _M_omero.api.IShare._op_removeObjects.invokeAsync(self, (_cb, (shareId, iobjects), _ctx))

        def removeObject(self, shareId, iobject, _ctx=None):
            return _M_omero.api.IShare._op_removeObject.invoke(self, ((shareId, iobject), _ctx))

        def removeObject_async(self, _cb, shareId, iobject, _ctx=None):
            return _M_omero.api.IShare._op_removeObject.invokeAsync(self, (_cb, (shareId, iobject), _ctx))

        def getCommentCount(self, shareIds, _ctx=None):
            return _M_omero.api.IShare._op_getCommentCount.invoke(self, ((shareIds, ), _ctx))

        def getCommentCount_async(self, _cb, shareIds, _ctx=None):
            return _M_omero.api.IShare._op_getCommentCount.invokeAsync(self, (_cb, (shareIds, ), _ctx))

        def getComments(self, shareId, _ctx=None):
            return _M_omero.api.IShare._op_getComments.invoke(self, ((shareId, ), _ctx))

        def getComments_async(self, _cb, shareId, _ctx=None):
            return _M_omero.api.IShare._op_getComments.invokeAsync(self, (_cb, (shareId, ), _ctx))

        def addComment(self, shareId, comment, _ctx=None):
            return _M_omero.api.IShare._op_addComment.invoke(self, ((shareId, comment), _ctx))

        def addComment_async(self, _cb, shareId, comment, _ctx=None):
            return _M_omero.api.IShare._op_addComment.invokeAsync(self, (_cb, (shareId, comment), _ctx))

        def addReply(self, shareId, comment, replyTo, _ctx=None):
            return _M_omero.api.IShare._op_addReply.invoke(self, ((shareId, comment, replyTo), _ctx))

        def addReply_async(self, _cb, shareId, comment, replyTo, _ctx=None):
            return _M_omero.api.IShare._op_addReply.invokeAsync(self, (_cb, (shareId, comment, replyTo), _ctx))

        def deleteComment(self, comment, _ctx=None):
            return _M_omero.api.IShare._op_deleteComment.invoke(self, ((comment, ), _ctx))

        def deleteComment_async(self, _cb, comment, _ctx=None):
            return _M_omero.api.IShare._op_deleteComment.invokeAsync(self, (_cb, (comment, ), _ctx))

        def getAllMembers(self, shareId, _ctx=None):
            return _M_omero.api.IShare._op_getAllMembers.invoke(self, ((shareId, ), _ctx))

        def getAllMembers_async(self, _cb, shareId, _ctx=None):
            return _M_omero.api.IShare._op_getAllMembers.invokeAsync(self, (_cb, (shareId, ), _ctx))

        def getAllGuests(self, shareId, _ctx=None):
            return _M_omero.api.IShare._op_getAllGuests.invoke(self, ((shareId, ), _ctx))

        def getAllGuests_async(self, _cb, shareId, _ctx=None):
            return _M_omero.api.IShare._op_getAllGuests.invokeAsync(self, (_cb, (shareId, ), _ctx))

        def getAllUsers(self, shareId, _ctx=None):
            return _M_omero.api.IShare._op_getAllUsers.invoke(self, ((shareId, ), _ctx))

        def getAllUsers_async(self, _cb, shareId, _ctx=None):
            return _M_omero.api.IShare._op_getAllUsers.invokeAsync(self, (_cb, (shareId, ), _ctx))

        def addUsers(self, shareId, exps, _ctx=None):
            return _M_omero.api.IShare._op_addUsers.invoke(self, ((shareId, exps), _ctx))

        def addUsers_async(self, _cb, shareId, exps, _ctx=None):
            return _M_omero.api.IShare._op_addUsers.invokeAsync(self, (_cb, (shareId, exps), _ctx))

        def addGuests(self, shareId, emailAddresses, _ctx=None):
            return _M_omero.api.IShare._op_addGuests.invoke(self, ((shareId, emailAddresses), _ctx))

        def addGuests_async(self, _cb, shareId, emailAddresses, _ctx=None):
            return _M_omero.api.IShare._op_addGuests.invokeAsync(self, (_cb, (shareId, emailAddresses), _ctx))

        def removeUsers(self, shareId, exps, _ctx=None):
            return _M_omero.api.IShare._op_removeUsers.invoke(self, ((shareId, exps), _ctx))

        def removeUsers_async(self, _cb, shareId, exps, _ctx=None):
            return _M_omero.api.IShare._op_removeUsers.invokeAsync(self, (_cb, (shareId, exps), _ctx))

        def removeGuests(self, shareId, emailAddresses, _ctx=None):
            return _M_omero.api.IShare._op_removeGuests.invoke(self, ((shareId, emailAddresses), _ctx))

        def removeGuests_async(self, _cb, shareId, emailAddresses, _ctx=None):
            return _M_omero.api.IShare._op_removeGuests.invokeAsync(self, (_cb, (shareId, emailAddresses), _ctx))

        def addUser(self, shareId, exp, _ctx=None):
            return _M_omero.api.IShare._op_addUser.invoke(self, ((shareId, exp), _ctx))

        def addUser_async(self, _cb, shareId, exp, _ctx=None):
            return _M_omero.api.IShare._op_addUser.invokeAsync(self, (_cb, (shareId, exp), _ctx))

        def addGuest(self, shareId, emailAddress, _ctx=None):
            return _M_omero.api.IShare._op_addGuest.invoke(self, ((shareId, emailAddress), _ctx))

        def addGuest_async(self, _cb, shareId, emailAddress, _ctx=None):
            return _M_omero.api.IShare._op_addGuest.invokeAsync(self, (_cb, (shareId, emailAddress), _ctx))

        def removeUser(self, shareId, exp, _ctx=None):
            return _M_omero.api.IShare._op_removeUser.invoke(self, ((shareId, exp), _ctx))

        def removeUser_async(self, _cb, shareId, exp, _ctx=None):
            return _M_omero.api.IShare._op_removeUser.invokeAsync(self, (_cb, (shareId, exp), _ctx))

        def removeGuest(self, shareId, emailAddress, _ctx=None):
            return _M_omero.api.IShare._op_removeGuest.invoke(self, ((shareId, emailAddress), _ctx))

        def removeGuest_async(self, _cb, shareId, emailAddress, _ctx=None):
            return _M_omero.api.IShare._op_removeGuest.invokeAsync(self, (_cb, (shareId, emailAddress), _ctx))

        def getActiveConnections(self, shareId, _ctx=None):
            return _M_omero.api.IShare._op_getActiveConnections.invoke(self, ((shareId, ), _ctx))

        def getActiveConnections_async(self, _cb, shareId, _ctx=None):
            return _M_omero.api.IShare._op_getActiveConnections.invokeAsync(self, (_cb, (shareId, ), _ctx))

        def getPastConnections(self, shareId, _ctx=None):
            return _M_omero.api.IShare._op_getPastConnections.invoke(self, ((shareId, ), _ctx))

        def getPastConnections_async(self, _cb, shareId, _ctx=None):
            return _M_omero.api.IShare._op_getPastConnections.invokeAsync(self, (_cb, (shareId, ), _ctx))

        def invalidateConnection(self, shareId, exp, _ctx=None):
            return _M_omero.api.IShare._op_invalidateConnection.invoke(self, ((shareId, exp), _ctx))

        def invalidateConnection_async(self, _cb, shareId, exp, _ctx=None):
            return _M_omero.api.IShare._op_invalidateConnection.invokeAsync(self, (_cb, (shareId, exp), _ctx))

        def getEvents(self, shareId, exp, _from, to, _ctx=None):
            return _M_omero.api.IShare._op_getEvents.invoke(self, ((shareId, exp, _from, to), _ctx))

        def getEvents_async(self, _cb, shareId, exp, _from, to, _ctx=None):
            return _M_omero.api.IShare._op_getEvents.invokeAsync(self, (_cb, (shareId, exp, _from, to), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.api.ISharePrx.ice_checkedCast(proxy, '::omero::api::IShare', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.api.ISharePrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.api._t_ISharePrx = IcePy.defineProxy('::omero::api::IShare', ISharePrx)

    _M_omero.api._t_IShare = IcePy.defineClass('::omero::api::IShare', IShare, (), True, None, (_M_omero.api._t_ServiceInterface,), ())
    IShare.ice_type = _M_omero.api._t_IShare

    IShare._op_activate = IcePy.Operation('activate', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long),), (), None, (_M_omero._t_ServerError,))
    IShare._op_deactivate = IcePy.Operation('deactivate', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (), (), None, (_M_omero._t_ServerError,))
    IShare._op_getShare = IcePy.Operation('getShare', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long),), (), _M_omero.model._t_Share, (_M_omero._t_ServerError,))
    IShare._op_getMemberCount = IcePy.Operation('getMemberCount', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.sys._t_LongList),), (), _M_omero.sys._t_CountMap, (_M_omero._t_ServerError,))
    IShare._op_getOwnShares = IcePy.Operation('getOwnShares', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_bool),), (), _M_omero.api._t_SessionList, (_M_omero._t_ServerError,))
    IShare._op_getMemberShares = IcePy.Operation('getMemberShares', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_bool),), (), _M_omero.api._t_SessionList, (_M_omero._t_ServerError,))
    IShare._op_getSharesOwnedBy = IcePy.Operation('getSharesOwnedBy', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.model._t_Experimenter), ((), IcePy._t_bool)), (), _M_omero.api._t_SessionList, (_M_omero._t_ServerError,))
    IShare._op_getMemberSharesFor = IcePy.Operation('getMemberSharesFor', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.model._t_Experimenter), ((), IcePy._t_bool)), (), _M_omero.api._t_SessionList, (_M_omero._t_ServerError,))
    IShare._op_getContents = IcePy.Operation('getContents', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long),), (), _M_omero.api._t_IObjectList, (_M_omero._t_ServerError,))
    IShare._op_getContentSubList = IcePy.Operation('getContentSubList', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long), ((), IcePy._t_int), ((), IcePy._t_int)), (), _M_omero.api._t_IObjectList, (_M_omero._t_ServerError,))
    IShare._op_getContentSize = IcePy.Operation('getContentSize', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long),), (), IcePy._t_int, (_M_omero._t_ServerError,))
    IShare._op_getContentMap = IcePy.Operation('getContentMap', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long),), (), _M_omero.api._t_IdListMap, (_M_omero._t_ServerError,))
    IShare._op_createShare = IcePy.Operation('createShare', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_string), ((), _M_omero._t_RTime), ((), _M_omero.api._t_IObjectList), ((), _M_omero.api._t_ExperimenterList), ((), _M_omero.api._t_StringSet), ((), IcePy._t_bool)), (), IcePy._t_long, (_M_omero._t_ServerError,))
    IShare._op_setDescription = IcePy.Operation('setDescription', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long), ((), IcePy._t_string)), (), None, (_M_omero._t_ServerError,))
    IShare._op_setExpiration = IcePy.Operation('setExpiration', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long), ((), _M_omero._t_RTime)), (), None, (_M_omero._t_ServerError,))
    IShare._op_setActive = IcePy.Operation('setActive', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long), ((), IcePy._t_bool)), (), None, (_M_omero._t_ServerError,))
    IShare._op_closeShare = IcePy.Operation('closeShare', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long),), (), None, (_M_omero._t_ServerError,))
    IShare._op_addObjects = IcePy.Operation('addObjects', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long), ((), _M_omero.api._t_IObjectList)), (), None, (_M_omero._t_ServerError,))
    IShare._op_addObject = IcePy.Operation('addObject', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long), ((), _M_omero.model._t_IObject)), (), None, (_M_omero._t_ServerError,))
    IShare._op_removeObjects = IcePy.Operation('removeObjects', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long), ((), _M_omero.api._t_IObjectList)), (), None, (_M_omero._t_ServerError,))
    IShare._op_removeObject = IcePy.Operation('removeObject', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long), ((), _M_omero.model._t_IObject)), (), None, (_M_omero._t_ServerError,))
    IShare._op_getCommentCount = IcePy.Operation('getCommentCount', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.sys._t_LongList),), (), _M_omero.sys._t_CountMap, (_M_omero._t_ServerError,))
    IShare._op_getComments = IcePy.Operation('getComments', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long),), (), _M_omero.api._t_AnnotationList, (_M_omero._t_ServerError,))
    IShare._op_addComment = IcePy.Operation('addComment', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long), ((), IcePy._t_string)), (), _M_omero.model._t_TextAnnotation, (_M_omero._t_ServerError,))
    IShare._op_addReply = IcePy.Operation('addReply', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long), ((), IcePy._t_string), ((), _M_omero.model._t_TextAnnotation)), (), _M_omero.model._t_TextAnnotation, (_M_omero._t_ServerError,))
    IShare._op_deleteComment = IcePy.Operation('deleteComment', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.model._t_Annotation),), (), None, (_M_omero._t_ServerError,))
    IShare._op_getAllMembers = IcePy.Operation('getAllMembers', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long),), (), _M_omero.api._t_ExperimenterList, (_M_omero._t_ServerError,))
    IShare._op_getAllGuests = IcePy.Operation('getAllGuests', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long),), (), _M_omero.api._t_StringSet, (_M_omero._t_ServerError,))
    IShare._op_getAllUsers = IcePy.Operation('getAllUsers', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long),), (), _M_omero.api._t_StringSet, (_M_omero._t_ValidationException, _M_omero._t_ServerError))
    IShare._op_addUsers = IcePy.Operation('addUsers', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long), ((), _M_omero.api._t_ExperimenterList)), (), None, (_M_omero._t_ServerError,))
    IShare._op_addGuests = IcePy.Operation('addGuests', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long), ((), _M_omero.api._t_StringSet)), (), None, (_M_omero._t_ServerError,))
    IShare._op_removeUsers = IcePy.Operation('removeUsers', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long), ((), _M_omero.api._t_ExperimenterList)), (), None, (_M_omero._t_ServerError,))
    IShare._op_removeGuests = IcePy.Operation('removeGuests', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long), ((), _M_omero.api._t_StringSet)), (), None, (_M_omero._t_ServerError,))
    IShare._op_addUser = IcePy.Operation('addUser', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long), ((), _M_omero.model._t_Experimenter)), (), None, (_M_omero._t_ServerError,))
    IShare._op_addGuest = IcePy.Operation('addGuest', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long), ((), IcePy._t_string)), (), None, (_M_omero._t_ServerError,))
    IShare._op_removeUser = IcePy.Operation('removeUser', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long), ((), _M_omero.model._t_Experimenter)), (), None, (_M_omero._t_ServerError,))
    IShare._op_removeGuest = IcePy.Operation('removeGuest', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long), ((), IcePy._t_string)), (), None, (_M_omero._t_ServerError,))
    IShare._op_getActiveConnections = IcePy.Operation('getActiveConnections', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long),), (), _M_omero.api._t_UserMap, (_M_omero._t_ServerError,))
    IShare._op_getPastConnections = IcePy.Operation('getPastConnections', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long),), (), _M_omero.api._t_UserMap, (_M_omero._t_ServerError,))
    IShare._op_invalidateConnection = IcePy.Operation('invalidateConnection', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long), ((), _M_omero.model._t_Experimenter)), (), None, (_M_omero._t_ServerError,))
    IShare._op_getEvents = IcePy.Operation('getEvents', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long), ((), _M_omero.model._t_Experimenter), ((), _M_omero._t_RTime), ((), _M_omero._t_RTime)), (), _M_omero.api._t_IObjectList, (_M_omero._t_ServerError,))

    _M_omero.api.IShare = IShare
    del IShare

    _M_omero.api.ISharePrx = ISharePrx
    del ISharePrx

# End of module omero.api

__name__ = 'omero'

# End of module omero
