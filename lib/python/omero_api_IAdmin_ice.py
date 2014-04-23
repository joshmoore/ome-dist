# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `IAdmin.ice'

import Ice, IcePy, __builtin__

if not Ice.__dict__.has_key("_struct_marker"):
    Ice._struct_marker = object()
import omero_ServicesF_ice
import omero_System_ice
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

if not _M_omero.api.__dict__.has_key('IAdmin'):
    _M_omero.api.IAdmin = Ice.createTempClass()
    class IAdmin(_M_omero.api.ServiceInterface):
        def __init__(self):
            if __builtin__.type(self) == _M_omero.api.IAdmin:
                raise RuntimeError('omero.api.IAdmin is an abstract class')

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::api::IAdmin', '::omero::api::ServiceInterface')

        def ice_id(self, current=None):
            return '::omero::api::IAdmin'

        def ice_staticId():
            return '::omero::api::IAdmin'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def canUpdate_async(self, _cb, obj, current=None):
        # def getExperimenter_async(self, _cb, id, current=None):
        # def lookupExperimenter_async(self, _cb, name, current=None):
        # def lookupExperimenters_async(self, _cb, current=None):
        # def getGroup_async(self, _cb, id, current=None):
        # def lookupGroup_async(self, _cb, name, current=None):
        # def lookupGroups_async(self, _cb, current=None):
        # def containedExperimenters_async(self, _cb, groupId, current=None):
        # def containedGroups_async(self, _cb, experimenterId, current=None):
        # def getDefaultGroup_async(self, _cb, experimenterId, current=None):
        # def lookupLdapAuthExperimenter_async(self, _cb, id, current=None):
        # def lookupLdapAuthExperimenters_async(self, _cb, current=None):
        # def getMemberOfGroupIds_async(self, _cb, exp, current=None):
        # def getLeaderOfGroupIds_async(self, _cb, exp, current=None):
        # def updateSelf_async(self, _cb, experimenter, current=None):
        # def uploadMyUserPhoto_async(self, _cb, filename, format, data, current=None):
        # def getMyUserPhotos_async(self, _cb, current=None):
        # def updateExperimenter_async(self, _cb, experimenter, current=None):
        # def updateExperimenterWithPassword_async(self, _cb, experimenter, password, current=None):
        # def updateGroup_async(self, _cb, group, current=None):
        # def createUser_async(self, _cb, experimenter, group, current=None):
        # def createSystemUser_async(self, _cb, experimenter, current=None):
        # def createExperimenter_async(self, _cb, user, defaultGroup, groups, current=None):
        # def createExperimenterWithPassword_async(self, _cb, user, password, defaultGroup, groups, current=None):
        # def createGroup_async(self, _cb, group, current=None):
        # def addGroups_async(self, _cb, user, groups, current=None):
        # def removeGroups_async(self, _cb, user, groups, current=None):
        # def setDefaultGroup_async(self, _cb, user, group, current=None):
        # def setGroupOwner_async(self, _cb, group, owner, current=None):
        # def unsetGroupOwner_async(self, _cb, group, owner, current=None):
        # def addGroupOwners_async(self, _cb, group, owners, current=None):
        # def removeGroupOwners_async(self, _cb, group, owners, current=None):
        # def deleteExperimenter_async(self, _cb, user, current=None):
        # def deleteGroup_async(self, _cb, group, current=None):
        # def changeOwner_async(self, _cb, obj, omeName, current=None):
        # def changeGroup_async(self, _cb, obj, omeName, current=None):
        # def changePermissions_async(self, _cb, obj, perms, current=None):
        # def moveToCommonSpace_async(self, _cb, objects, current=None):
        # def changePassword_async(self, _cb, newPassword, current=None):
        # def changePasswordWithOldPassword_async(self, _cb, oldPassword, newPassword, current=None):
        # def changeUserPassword_async(self, _cb, omeName, newPassword, current=None):
        # def synchronizeLoginCache_async(self, _cb, current=None):
        # def changeExpiredCredentials_async(self, _cb, name, oldCred, newCred, current=None):
        # def reportForgottenPassword_async(self, _cb, name, email, current=None):
        # def getSecurityRoles_async(self, _cb, current=None):
        # def getEventContext_async(self, _cb, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.api._t_IAdmin)

        __repr__ = __str__

    _M_omero.api.IAdminPrx = Ice.createTempClass()
    class IAdminPrx(_M_omero.api.ServiceInterfacePrx):

        def canUpdate(self, obj, _ctx=None):
            return _M_omero.api.IAdmin._op_canUpdate.invoke(self, ((obj, ), _ctx))

        def canUpdate_async(self, _cb, obj, _ctx=None):
            return _M_omero.api.IAdmin._op_canUpdate.invokeAsync(self, (_cb, (obj, ), _ctx))

        def getExperimenter(self, id, _ctx=None):
            return _M_omero.api.IAdmin._op_getExperimenter.invoke(self, ((id, ), _ctx))

        def getExperimenter_async(self, _cb, id, _ctx=None):
            return _M_omero.api.IAdmin._op_getExperimenter.invokeAsync(self, (_cb, (id, ), _ctx))

        def lookupExperimenter(self, name, _ctx=None):
            return _M_omero.api.IAdmin._op_lookupExperimenter.invoke(self, ((name, ), _ctx))

        def lookupExperimenter_async(self, _cb, name, _ctx=None):
            return _M_omero.api.IAdmin._op_lookupExperimenter.invokeAsync(self, (_cb, (name, ), _ctx))

        def lookupExperimenters(self, _ctx=None):
            return _M_omero.api.IAdmin._op_lookupExperimenters.invoke(self, ((), _ctx))

        def lookupExperimenters_async(self, _cb, _ctx=None):
            return _M_omero.api.IAdmin._op_lookupExperimenters.invokeAsync(self, (_cb, (), _ctx))

        def getGroup(self, id, _ctx=None):
            return _M_omero.api.IAdmin._op_getGroup.invoke(self, ((id, ), _ctx))

        def getGroup_async(self, _cb, id, _ctx=None):
            return _M_omero.api.IAdmin._op_getGroup.invokeAsync(self, (_cb, (id, ), _ctx))

        def lookupGroup(self, name, _ctx=None):
            return _M_omero.api.IAdmin._op_lookupGroup.invoke(self, ((name, ), _ctx))

        def lookupGroup_async(self, _cb, name, _ctx=None):
            return _M_omero.api.IAdmin._op_lookupGroup.invokeAsync(self, (_cb, (name, ), _ctx))

        def lookupGroups(self, _ctx=None):
            return _M_omero.api.IAdmin._op_lookupGroups.invoke(self, ((), _ctx))

        def lookupGroups_async(self, _cb, _ctx=None):
            return _M_omero.api.IAdmin._op_lookupGroups.invokeAsync(self, (_cb, (), _ctx))

        def containedExperimenters(self, groupId, _ctx=None):
            return _M_omero.api.IAdmin._op_containedExperimenters.invoke(self, ((groupId, ), _ctx))

        def containedExperimenters_async(self, _cb, groupId, _ctx=None):
            return _M_omero.api.IAdmin._op_containedExperimenters.invokeAsync(self, (_cb, (groupId, ), _ctx))

        def containedGroups(self, experimenterId, _ctx=None):
            return _M_omero.api.IAdmin._op_containedGroups.invoke(self, ((experimenterId, ), _ctx))

        def containedGroups_async(self, _cb, experimenterId, _ctx=None):
            return _M_omero.api.IAdmin._op_containedGroups.invokeAsync(self, (_cb, (experimenterId, ), _ctx))

        def getDefaultGroup(self, experimenterId, _ctx=None):
            return _M_omero.api.IAdmin._op_getDefaultGroup.invoke(self, ((experimenterId, ), _ctx))

        def getDefaultGroup_async(self, _cb, experimenterId, _ctx=None):
            return _M_omero.api.IAdmin._op_getDefaultGroup.invokeAsync(self, (_cb, (experimenterId, ), _ctx))

        def lookupLdapAuthExperimenter(self, id, _ctx=None):
            return _M_omero.api.IAdmin._op_lookupLdapAuthExperimenter.invoke(self, ((id, ), _ctx))

        def lookupLdapAuthExperimenter_async(self, _cb, id, _ctx=None):
            return _M_omero.api.IAdmin._op_lookupLdapAuthExperimenter.invokeAsync(self, (_cb, (id, ), _ctx))

        def lookupLdapAuthExperimenters(self, _ctx=None):
            return _M_omero.api.IAdmin._op_lookupLdapAuthExperimenters.invoke(self, ((), _ctx))

        def lookupLdapAuthExperimenters_async(self, _cb, _ctx=None):
            return _M_omero.api.IAdmin._op_lookupLdapAuthExperimenters.invokeAsync(self, (_cb, (), _ctx))

        def getMemberOfGroupIds(self, exp, _ctx=None):
            return _M_omero.api.IAdmin._op_getMemberOfGroupIds.invoke(self, ((exp, ), _ctx))

        def getMemberOfGroupIds_async(self, _cb, exp, _ctx=None):
            return _M_omero.api.IAdmin._op_getMemberOfGroupIds.invokeAsync(self, (_cb, (exp, ), _ctx))

        def getLeaderOfGroupIds(self, exp, _ctx=None):
            return _M_omero.api.IAdmin._op_getLeaderOfGroupIds.invoke(self, ((exp, ), _ctx))

        def getLeaderOfGroupIds_async(self, _cb, exp, _ctx=None):
            return _M_omero.api.IAdmin._op_getLeaderOfGroupIds.invokeAsync(self, (_cb, (exp, ), _ctx))

        def updateSelf(self, experimenter, _ctx=None):
            return _M_omero.api.IAdmin._op_updateSelf.invoke(self, ((experimenter, ), _ctx))

        def updateSelf_async(self, _cb, experimenter, _ctx=None):
            return _M_omero.api.IAdmin._op_updateSelf.invokeAsync(self, (_cb, (experimenter, ), _ctx))

        def uploadMyUserPhoto(self, filename, format, data, _ctx=None):
            return _M_omero.api.IAdmin._op_uploadMyUserPhoto.invoke(self, ((filename, format, data), _ctx))

        def uploadMyUserPhoto_async(self, _cb, filename, format, data, _ctx=None):
            return _M_omero.api.IAdmin._op_uploadMyUserPhoto.invokeAsync(self, (_cb, (filename, format, data), _ctx))

        def getMyUserPhotos(self, _ctx=None):
            return _M_omero.api.IAdmin._op_getMyUserPhotos.invoke(self, ((), _ctx))

        def getMyUserPhotos_async(self, _cb, _ctx=None):
            return _M_omero.api.IAdmin._op_getMyUserPhotos.invokeAsync(self, (_cb, (), _ctx))

        def updateExperimenter(self, experimenter, _ctx=None):
            return _M_omero.api.IAdmin._op_updateExperimenter.invoke(self, ((experimenter, ), _ctx))

        def updateExperimenter_async(self, _cb, experimenter, _ctx=None):
            return _M_omero.api.IAdmin._op_updateExperimenter.invokeAsync(self, (_cb, (experimenter, ), _ctx))

        def updateExperimenterWithPassword(self, experimenter, password, _ctx=None):
            return _M_omero.api.IAdmin._op_updateExperimenterWithPassword.invoke(self, ((experimenter, password), _ctx))

        def updateExperimenterWithPassword_async(self, _cb, experimenter, password, _ctx=None):
            return _M_omero.api.IAdmin._op_updateExperimenterWithPassword.invokeAsync(self, (_cb, (experimenter, password), _ctx))

        def updateGroup(self, group, _ctx=None):
            return _M_omero.api.IAdmin._op_updateGroup.invoke(self, ((group, ), _ctx))

        def updateGroup_async(self, _cb, group, _ctx=None):
            return _M_omero.api.IAdmin._op_updateGroup.invokeAsync(self, (_cb, (group, ), _ctx))

        def createUser(self, experimenter, group, _ctx=None):
            return _M_omero.api.IAdmin._op_createUser.invoke(self, ((experimenter, group), _ctx))

        def createUser_async(self, _cb, experimenter, group, _ctx=None):
            return _M_omero.api.IAdmin._op_createUser.invokeAsync(self, (_cb, (experimenter, group), _ctx))

        def createSystemUser(self, experimenter, _ctx=None):
            return _M_omero.api.IAdmin._op_createSystemUser.invoke(self, ((experimenter, ), _ctx))

        def createSystemUser_async(self, _cb, experimenter, _ctx=None):
            return _M_omero.api.IAdmin._op_createSystemUser.invokeAsync(self, (_cb, (experimenter, ), _ctx))

        def createExperimenter(self, user, defaultGroup, groups, _ctx=None):
            return _M_omero.api.IAdmin._op_createExperimenter.invoke(self, ((user, defaultGroup, groups), _ctx))

        def createExperimenter_async(self, _cb, user, defaultGroup, groups, _ctx=None):
            return _M_omero.api.IAdmin._op_createExperimenter.invokeAsync(self, (_cb, (user, defaultGroup, groups), _ctx))

        def createExperimenterWithPassword(self, user, password, defaultGroup, groups, _ctx=None):
            return _M_omero.api.IAdmin._op_createExperimenterWithPassword.invoke(self, ((user, password, defaultGroup, groups), _ctx))

        def createExperimenterWithPassword_async(self, _cb, user, password, defaultGroup, groups, _ctx=None):
            return _M_omero.api.IAdmin._op_createExperimenterWithPassword.invokeAsync(self, (_cb, (user, password, defaultGroup, groups), _ctx))

        def createGroup(self, group, _ctx=None):
            return _M_omero.api.IAdmin._op_createGroup.invoke(self, ((group, ), _ctx))

        def createGroup_async(self, _cb, group, _ctx=None):
            return _M_omero.api.IAdmin._op_createGroup.invokeAsync(self, (_cb, (group, ), _ctx))

        def addGroups(self, user, groups, _ctx=None):
            return _M_omero.api.IAdmin._op_addGroups.invoke(self, ((user, groups), _ctx))

        def addGroups_async(self, _cb, user, groups, _ctx=None):
            return _M_omero.api.IAdmin._op_addGroups.invokeAsync(self, (_cb, (user, groups), _ctx))

        def removeGroups(self, user, groups, _ctx=None):
            return _M_omero.api.IAdmin._op_removeGroups.invoke(self, ((user, groups), _ctx))

        def removeGroups_async(self, _cb, user, groups, _ctx=None):
            return _M_omero.api.IAdmin._op_removeGroups.invokeAsync(self, (_cb, (user, groups), _ctx))

        def setDefaultGroup(self, user, group, _ctx=None):
            return _M_omero.api.IAdmin._op_setDefaultGroup.invoke(self, ((user, group), _ctx))

        def setDefaultGroup_async(self, _cb, user, group, _ctx=None):
            return _M_omero.api.IAdmin._op_setDefaultGroup.invokeAsync(self, (_cb, (user, group), _ctx))

        def setGroupOwner(self, group, owner, _ctx=None):
            return _M_omero.api.IAdmin._op_setGroupOwner.invoke(self, ((group, owner), _ctx))

        def setGroupOwner_async(self, _cb, group, owner, _ctx=None):
            return _M_omero.api.IAdmin._op_setGroupOwner.invokeAsync(self, (_cb, (group, owner), _ctx))

        def unsetGroupOwner(self, group, owner, _ctx=None):
            return _M_omero.api.IAdmin._op_unsetGroupOwner.invoke(self, ((group, owner), _ctx))

        def unsetGroupOwner_async(self, _cb, group, owner, _ctx=None):
            return _M_omero.api.IAdmin._op_unsetGroupOwner.invokeAsync(self, (_cb, (group, owner), _ctx))

        def addGroupOwners(self, group, owners, _ctx=None):
            return _M_omero.api.IAdmin._op_addGroupOwners.invoke(self, ((group, owners), _ctx))

        def addGroupOwners_async(self, _cb, group, owners, _ctx=None):
            return _M_omero.api.IAdmin._op_addGroupOwners.invokeAsync(self, (_cb, (group, owners), _ctx))

        def removeGroupOwners(self, group, owners, _ctx=None):
            return _M_omero.api.IAdmin._op_removeGroupOwners.invoke(self, ((group, owners), _ctx))

        def removeGroupOwners_async(self, _cb, group, owners, _ctx=None):
            return _M_omero.api.IAdmin._op_removeGroupOwners.invokeAsync(self, (_cb, (group, owners), _ctx))

        def deleteExperimenter(self, user, _ctx=None):
            return _M_omero.api.IAdmin._op_deleteExperimenter.invoke(self, ((user, ), _ctx))

        def deleteExperimenter_async(self, _cb, user, _ctx=None):
            return _M_omero.api.IAdmin._op_deleteExperimenter.invokeAsync(self, (_cb, (user, ), _ctx))

        def deleteGroup(self, group, _ctx=None):
            return _M_omero.api.IAdmin._op_deleteGroup.invoke(self, ((group, ), _ctx))

        def deleteGroup_async(self, _cb, group, _ctx=None):
            return _M_omero.api.IAdmin._op_deleteGroup.invokeAsync(self, (_cb, (group, ), _ctx))

        def changeOwner(self, obj, omeName, _ctx=None):
            return _M_omero.api.IAdmin._op_changeOwner.invoke(self, ((obj, omeName), _ctx))

        def changeOwner_async(self, _cb, obj, omeName, _ctx=None):
            return _M_omero.api.IAdmin._op_changeOwner.invokeAsync(self, (_cb, (obj, omeName), _ctx))

        def changeGroup(self, obj, omeName, _ctx=None):
            return _M_omero.api.IAdmin._op_changeGroup.invoke(self, ((obj, omeName), _ctx))

        def changeGroup_async(self, _cb, obj, omeName, _ctx=None):
            return _M_omero.api.IAdmin._op_changeGroup.invokeAsync(self, (_cb, (obj, omeName), _ctx))

        def changePermissions(self, obj, perms, _ctx=None):
            return _M_omero.api.IAdmin._op_changePermissions.invoke(self, ((obj, perms), _ctx))

        def changePermissions_async(self, _cb, obj, perms, _ctx=None):
            return _M_omero.api.IAdmin._op_changePermissions.invokeAsync(self, (_cb, (obj, perms), _ctx))

        def moveToCommonSpace(self, objects, _ctx=None):
            return _M_omero.api.IAdmin._op_moveToCommonSpace.invoke(self, ((objects, ), _ctx))

        def moveToCommonSpace_async(self, _cb, objects, _ctx=None):
            return _M_omero.api.IAdmin._op_moveToCommonSpace.invokeAsync(self, (_cb, (objects, ), _ctx))

        def changePassword(self, newPassword, _ctx=None):
            return _M_omero.api.IAdmin._op_changePassword.invoke(self, ((newPassword, ), _ctx))

        def changePassword_async(self, _cb, newPassword, _ctx=None):
            return _M_omero.api.IAdmin._op_changePassword.invokeAsync(self, (_cb, (newPassword, ), _ctx))

        def changePasswordWithOldPassword(self, oldPassword, newPassword, _ctx=None):
            return _M_omero.api.IAdmin._op_changePasswordWithOldPassword.invoke(self, ((oldPassword, newPassword), _ctx))

        def changePasswordWithOldPassword_async(self, _cb, oldPassword, newPassword, _ctx=None):
            return _M_omero.api.IAdmin._op_changePasswordWithOldPassword.invokeAsync(self, (_cb, (oldPassword, newPassword), _ctx))

        def changeUserPassword(self, omeName, newPassword, _ctx=None):
            return _M_omero.api.IAdmin._op_changeUserPassword.invoke(self, ((omeName, newPassword), _ctx))

        def changeUserPassword_async(self, _cb, omeName, newPassword, _ctx=None):
            return _M_omero.api.IAdmin._op_changeUserPassword.invokeAsync(self, (_cb, (omeName, newPassword), _ctx))

        def synchronizeLoginCache(self, _ctx=None):
            return _M_omero.api.IAdmin._op_synchronizeLoginCache.invoke(self, ((), _ctx))

        def synchronizeLoginCache_async(self, _cb, _ctx=None):
            return _M_omero.api.IAdmin._op_synchronizeLoginCache.invokeAsync(self, (_cb, (), _ctx))

        def changeExpiredCredentials(self, name, oldCred, newCred, _ctx=None):
            return _M_omero.api.IAdmin._op_changeExpiredCredentials.invoke(self, ((name, oldCred, newCred), _ctx))

        def changeExpiredCredentials_async(self, _cb, name, oldCred, newCred, _ctx=None):
            return _M_omero.api.IAdmin._op_changeExpiredCredentials.invokeAsync(self, (_cb, (name, oldCred, newCred), _ctx))

        def reportForgottenPassword(self, name, email, _ctx=None):
            return _M_omero.api.IAdmin._op_reportForgottenPassword.invoke(self, ((name, email), _ctx))

        def reportForgottenPassword_async(self, _cb, name, email, _ctx=None):
            return _M_omero.api.IAdmin._op_reportForgottenPassword.invokeAsync(self, (_cb, (name, email), _ctx))

        def getSecurityRoles(self, _ctx=None):
            return _M_omero.api.IAdmin._op_getSecurityRoles.invoke(self, ((), _ctx))

        def getSecurityRoles_async(self, _cb, _ctx=None):
            return _M_omero.api.IAdmin._op_getSecurityRoles.invokeAsync(self, (_cb, (), _ctx))

        def getEventContext(self, _ctx=None):
            return _M_omero.api.IAdmin._op_getEventContext.invoke(self, ((), _ctx))

        def getEventContext_async(self, _cb, _ctx=None):
            return _M_omero.api.IAdmin._op_getEventContext.invokeAsync(self, (_cb, (), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.api.IAdminPrx.ice_checkedCast(proxy, '::omero::api::IAdmin', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.api.IAdminPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.api._t_IAdminPrx = IcePy.defineProxy('::omero::api::IAdmin', IAdminPrx)

    _M_omero.api._t_IAdmin = IcePy.defineClass('::omero::api::IAdmin', IAdmin, (), True, None, (_M_omero.api._t_ServiceInterface,), ())
    IAdmin.ice_type = _M_omero.api._t_IAdmin

    IAdmin._op_canUpdate = IcePy.Operation('canUpdate', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), _M_omero.model._t_IObject),), (), IcePy._t_bool, (_M_omero._t_ServerError,))
    IAdmin._op_getExperimenter = IcePy.Operation('getExperimenter', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), IcePy._t_long),), (), _M_omero.model._t_Experimenter, (_M_omero._t_ServerError,))
    IAdmin._op_lookupExperimenter = IcePy.Operation('lookupExperimenter', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), IcePy._t_string),), (), _M_omero.model._t_Experimenter, (_M_omero._t_ServerError,))
    IAdmin._op_lookupExperimenters = IcePy.Operation('lookupExperimenters', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (), (), _M_omero.api._t_ExperimenterList, (_M_omero._t_ServerError,))
    IAdmin._op_getGroup = IcePy.Operation('getGroup', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), IcePy._t_long),), (), _M_omero.model._t_ExperimenterGroup, (_M_omero._t_ServerError,))
    IAdmin._op_lookupGroup = IcePy.Operation('lookupGroup', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), IcePy._t_string),), (), _M_omero.model._t_ExperimenterGroup, (_M_omero._t_ServerError,))
    IAdmin._op_lookupGroups = IcePy.Operation('lookupGroups', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (), (), _M_omero.api._t_ExperimenterGroupList, (_M_omero._t_ServerError,))
    IAdmin._op_containedExperimenters = IcePy.Operation('containedExperimenters', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), IcePy._t_long),), (), _M_omero.api._t_ExperimenterList, (_M_omero._t_ServerError,))
    IAdmin._op_containedGroups = IcePy.Operation('containedGroups', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), IcePy._t_long),), (), _M_omero.api._t_ExperimenterGroupList, (_M_omero._t_ServerError,))
    IAdmin._op_getDefaultGroup = IcePy.Operation('getDefaultGroup', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), IcePy._t_long),), (), _M_omero.model._t_ExperimenterGroup, (_M_omero._t_ServerError,))
    IAdmin._op_lookupLdapAuthExperimenter = IcePy.Operation('lookupLdapAuthExperimenter', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), IcePy._t_long),), (), IcePy._t_string, (_M_omero._t_ServerError,))
    IAdmin._op_lookupLdapAuthExperimenters = IcePy.Operation('lookupLdapAuthExperimenters', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (), (), _M_omero._t_RList, (_M_omero._t_ServerError,))
    IAdmin._op_getMemberOfGroupIds = IcePy.Operation('getMemberOfGroupIds', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), _M_omero.model._t_Experimenter),), (), _M_omero.api._t_LongList, (_M_omero._t_ServerError,))
    IAdmin._op_getLeaderOfGroupIds = IcePy.Operation('getLeaderOfGroupIds', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), _M_omero.model._t_Experimenter),), (), _M_omero.api._t_LongList, (_M_omero._t_ServerError,))
    IAdmin._op_updateSelf = IcePy.Operation('updateSelf', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.model._t_Experimenter),), (), None, (_M_omero._t_ServerError,))
    IAdmin._op_uploadMyUserPhoto = IcePy.Operation('uploadMyUserPhoto', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_string), ((), IcePy._t_string), ((), _M_Ice._t_ByteSeq)), (), IcePy._t_long, (_M_omero._t_ServerError,))
    IAdmin._op_getMyUserPhotos = IcePy.Operation('getMyUserPhotos', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (), (), _M_omero.api._t_OriginalFileList, (_M_omero._t_ServerError,))
    IAdmin._op_updateExperimenter = IcePy.Operation('updateExperimenter', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.model._t_Experimenter),), (), None, (_M_omero._t_ServerError,))
    IAdmin._op_updateExperimenterWithPassword = IcePy.Operation('updateExperimenterWithPassword', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.model._t_Experimenter), ((), _M_omero._t_RString)), (), None, (_M_omero._t_ServerError,))
    IAdmin._op_updateGroup = IcePy.Operation('updateGroup', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.model._t_ExperimenterGroup),), (), None, (_M_omero._t_ServerError,))
    IAdmin._op_createUser = IcePy.Operation('createUser', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.model._t_Experimenter), ((), IcePy._t_string)), (), IcePy._t_long, (_M_omero._t_ServerError,))
    IAdmin._op_createSystemUser = IcePy.Operation('createSystemUser', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.model._t_Experimenter),), (), IcePy._t_long, (_M_omero._t_ServerError,))
    IAdmin._op_createExperimenter = IcePy.Operation('createExperimenter', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.model._t_Experimenter), ((), _M_omero.model._t_ExperimenterGroup), ((), _M_omero.api._t_ExperimenterGroupList)), (), IcePy._t_long, (_M_omero._t_ServerError,))
    IAdmin._op_createExperimenterWithPassword = IcePy.Operation('createExperimenterWithPassword', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.model._t_Experimenter), ((), _M_omero._t_RString), ((), _M_omero.model._t_ExperimenterGroup), ((), _M_omero.api._t_ExperimenterGroupList)), (), IcePy._t_long, (_M_omero._t_ServerError,))
    IAdmin._op_createGroup = IcePy.Operation('createGroup', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.model._t_ExperimenterGroup),), (), IcePy._t_long, (_M_omero._t_ServerError,))
    IAdmin._op_addGroups = IcePy.Operation('addGroups', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), _M_omero.model._t_Experimenter), ((), _M_omero.api._t_ExperimenterGroupList)), (), None, (_M_omero._t_ServerError,))
    IAdmin._op_removeGroups = IcePy.Operation('removeGroups', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), _M_omero.model._t_Experimenter), ((), _M_omero.api._t_ExperimenterGroupList)), (), None, (_M_omero._t_ServerError,))
    IAdmin._op_setDefaultGroup = IcePy.Operation('setDefaultGroup', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), _M_omero.model._t_Experimenter), ((), _M_omero.model._t_ExperimenterGroup)), (), None, (_M_omero._t_ServerError,))
    IAdmin._op_setGroupOwner = IcePy.Operation('setGroupOwner', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), _M_omero.model._t_ExperimenterGroup), ((), _M_omero.model._t_Experimenter)), (), None, (_M_omero._t_ServerError,))
    IAdmin._op_unsetGroupOwner = IcePy.Operation('unsetGroupOwner', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), _M_omero.model._t_ExperimenterGroup), ((), _M_omero.model._t_Experimenter)), (), None, (_M_omero._t_ServerError,))
    IAdmin._op_addGroupOwners = IcePy.Operation('addGroupOwners', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), _M_omero.model._t_ExperimenterGroup), ((), _M_omero.api._t_ExperimenterList)), (), None, (_M_omero._t_ServerError,))
    IAdmin._op_removeGroupOwners = IcePy.Operation('removeGroupOwners', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), _M_omero.model._t_ExperimenterGroup), ((), _M_omero.api._t_ExperimenterList)), (), None, (_M_omero._t_ServerError,))
    IAdmin._op_deleteExperimenter = IcePy.Operation('deleteExperimenter', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), _M_omero.model._t_Experimenter),), (), None, (_M_omero._t_ServerError,))
    IAdmin._op_deleteGroup = IcePy.Operation('deleteGroup', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), _M_omero.model._t_ExperimenterGroup),), (), None, (_M_omero._t_ServerError,))
    IAdmin._op_changeOwner = IcePy.Operation('changeOwner', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), _M_omero.model._t_IObject), ((), IcePy._t_string)), (), None, (_M_omero._t_ServerError,))
    IAdmin._op_changeOwner.deprecate("changeOwner() is deprecated. use omero::cmd::Chown() instead.")
    IAdmin._op_changeGroup = IcePy.Operation('changeGroup', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), _M_omero.model._t_IObject), ((), IcePy._t_string)), (), None, (_M_omero._t_ServerError,))
    IAdmin._op_changeGroup.deprecate("changeGroup() is deprecated. use omero::cmd::Chgrp() instead.")
    IAdmin._op_changePermissions = IcePy.Operation('changePermissions', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), _M_omero.model._t_IObject), ((), _M_omero.model._t_Permissions)), (), None, (_M_omero._t_ServerError,))
    IAdmin._op_changePermissions.deprecate("changePermissions() is deprecated. use omero::cmd::Chmod() instead.")
    IAdmin._op_moveToCommonSpace = IcePy.Operation('moveToCommonSpace', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), _M_omero.api._t_IObjectList),), (), None, (_M_omero._t_ServerError,))
    IAdmin._op_changePassword = IcePy.Operation('changePassword', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), _M_omero._t_RString),), (), None, (_M_omero._t_ServerError,))
    IAdmin._op_changePasswordWithOldPassword = IcePy.Operation('changePasswordWithOldPassword', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), _M_omero._t_RString), ((), _M_omero._t_RString)), (), None, (_M_omero._t_ServerError,))
    IAdmin._op_changeUserPassword = IcePy.Operation('changeUserPassword', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), IcePy._t_string), ((), _M_omero._t_RString)), (), None, (_M_omero._t_ServerError,))
    IAdmin._op_synchronizeLoginCache = IcePy.Operation('synchronizeLoginCache', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (), (), None, (_M_omero._t_ServerError,))
    IAdmin._op_changeExpiredCredentials = IcePy.Operation('changeExpiredCredentials', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_string), ((), IcePy._t_string), ((), IcePy._t_string)), (), None, (_M_omero._t_ServerError,))
    IAdmin._op_reportForgottenPassword = IcePy.Operation('reportForgottenPassword', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_string), ((), IcePy._t_string)), (), None, (_M_omero._t_ServerError,))
    IAdmin._op_getSecurityRoles = IcePy.Operation('getSecurityRoles', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (), (), _M_omero.sys._t_Roles, (_M_omero._t_ServerError,))
    IAdmin._op_getEventContext = IcePy.Operation('getEventContext', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (), (), _M_omero.sys._t_EventContext, (_M_omero._t_ServerError,))

    _M_omero.api.IAdmin = IAdmin
    del IAdmin

    _M_omero.api.IAdminPrx = IAdminPrx
    del IAdminPrx

# End of module omero.api

__name__ = 'omero'

# End of module omero
