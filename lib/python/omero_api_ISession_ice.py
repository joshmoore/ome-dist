# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `ISession.ice'

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

if not _M_omero.api.__dict__.has_key('ISession'):
    _M_omero.api.ISession = Ice.createTempClass()
    class ISession(_M_omero.api.ServiceInterface):
        def __init__(self):
            if __builtin__.type(self) == _M_omero.api.ISession:
                raise RuntimeError('omero.api.ISession is an abstract class')

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::api::ISession', '::omero::api::ServiceInterface')

        def ice_id(self, current=None):
            return '::omero::api::ISession'

        def ice_staticId():
            return '::omero::api::ISession'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def createSession_async(self, _cb, p, credentials, current=None):
        # def createUserSession_async(self, _cb, timeToLiveMilliseconds, timeToIdleMilliseconds, defaultGroup, current=None):
        # def createSessionWithTimeout_async(self, _cb, p, timeToLiveMilliseconds, current=None):
        # def createSessionWithTimeouts_async(self, _cb, p, timeToLiveMilliseconds, timeToIdleMilliseconds, current=None):
        # def getSession_async(self, _cb, sessionUuid, current=None):
        # def getReferenceCount_async(self, _cb, sessionUuid, current=None):
        # def closeSession_async(self, _cb, sess, current=None):
        # def getMyOpenSessions_async(self, _cb, current=None):
        # def getMyOpenAgentSessions_async(self, _cb, agent, current=None):
        # def getMyOpenClientSessions_async(self, _cb, current=None):
        # def getInput_async(self, _cb, sess, key, current=None):
        # def getOutput_async(self, _cb, sess, key, current=None):
        # def setInput_async(self, _cb, sess, key, value, current=None):
        # def setOutput_async(self, _cb, sess, key, value, current=None):
        # def getInputKeys_async(self, _cb, sess, current=None):
        # def getOutputKeys_async(self, _cb, sess, current=None):
        # def getInputs_async(self, _cb, sess, current=None):
        # def getOutputs_async(self, _cb, sess, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.api._t_ISession)

        __repr__ = __str__

    _M_omero.api.ISessionPrx = Ice.createTempClass()
    class ISessionPrx(_M_omero.api.ServiceInterfacePrx):

        def createSession(self, p, credentials, _ctx=None):
            return _M_omero.api.ISession._op_createSession.invoke(self, ((p, credentials), _ctx))

        def createSession_async(self, _cb, p, credentials, _ctx=None):
            return _M_omero.api.ISession._op_createSession.invokeAsync(self, (_cb, (p, credentials), _ctx))

        def createUserSession(self, timeToLiveMilliseconds, timeToIdleMilliseconds, defaultGroup, _ctx=None):
            return _M_omero.api.ISession._op_createUserSession.invoke(self, ((timeToLiveMilliseconds, timeToIdleMilliseconds, defaultGroup), _ctx))

        def createUserSession_async(self, _cb, timeToLiveMilliseconds, timeToIdleMilliseconds, defaultGroup, _ctx=None):
            return _M_omero.api.ISession._op_createUserSession.invokeAsync(self, (_cb, (timeToLiveMilliseconds, timeToIdleMilliseconds, defaultGroup), _ctx))

        def createSessionWithTimeout(self, p, timeToLiveMilliseconds, _ctx=None):
            return _M_omero.api.ISession._op_createSessionWithTimeout.invoke(self, ((p, timeToLiveMilliseconds), _ctx))

        def createSessionWithTimeout_async(self, _cb, p, timeToLiveMilliseconds, _ctx=None):
            return _M_omero.api.ISession._op_createSessionWithTimeout.invokeAsync(self, (_cb, (p, timeToLiveMilliseconds), _ctx))

        def createSessionWithTimeouts(self, p, timeToLiveMilliseconds, timeToIdleMilliseconds, _ctx=None):
            return _M_omero.api.ISession._op_createSessionWithTimeouts.invoke(self, ((p, timeToLiveMilliseconds, timeToIdleMilliseconds), _ctx))

        def createSessionWithTimeouts_async(self, _cb, p, timeToLiveMilliseconds, timeToIdleMilliseconds, _ctx=None):
            return _M_omero.api.ISession._op_createSessionWithTimeouts.invokeAsync(self, (_cb, (p, timeToLiveMilliseconds, timeToIdleMilliseconds), _ctx))

        def getSession(self, sessionUuid, _ctx=None):
            return _M_omero.api.ISession._op_getSession.invoke(self, ((sessionUuid, ), _ctx))

        def getSession_async(self, _cb, sessionUuid, _ctx=None):
            return _M_omero.api.ISession._op_getSession.invokeAsync(self, (_cb, (sessionUuid, ), _ctx))

        def getReferenceCount(self, sessionUuid, _ctx=None):
            return _M_omero.api.ISession._op_getReferenceCount.invoke(self, ((sessionUuid, ), _ctx))

        def getReferenceCount_async(self, _cb, sessionUuid, _ctx=None):
            return _M_omero.api.ISession._op_getReferenceCount.invokeAsync(self, (_cb, (sessionUuid, ), _ctx))

        def closeSession(self, sess, _ctx=None):
            return _M_omero.api.ISession._op_closeSession.invoke(self, ((sess, ), _ctx))

        def closeSession_async(self, _cb, sess, _ctx=None):
            return _M_omero.api.ISession._op_closeSession.invokeAsync(self, (_cb, (sess, ), _ctx))

        def getMyOpenSessions(self, _ctx=None):
            return _M_omero.api.ISession._op_getMyOpenSessions.invoke(self, ((), _ctx))

        def getMyOpenSessions_async(self, _cb, _ctx=None):
            return _M_omero.api.ISession._op_getMyOpenSessions.invokeAsync(self, (_cb, (), _ctx))

        def getMyOpenAgentSessions(self, agent, _ctx=None):
            return _M_omero.api.ISession._op_getMyOpenAgentSessions.invoke(self, ((agent, ), _ctx))

        def getMyOpenAgentSessions_async(self, _cb, agent, _ctx=None):
            return _M_omero.api.ISession._op_getMyOpenAgentSessions.invokeAsync(self, (_cb, (agent, ), _ctx))

        def getMyOpenClientSessions(self, _ctx=None):
            return _M_omero.api.ISession._op_getMyOpenClientSessions.invoke(self, ((), _ctx))

        def getMyOpenClientSessions_async(self, _cb, _ctx=None):
            return _M_omero.api.ISession._op_getMyOpenClientSessions.invokeAsync(self, (_cb, (), _ctx))

        def getInput(self, sess, key, _ctx=None):
            return _M_omero.api.ISession._op_getInput.invoke(self, ((sess, key), _ctx))

        def getInput_async(self, _cb, sess, key, _ctx=None):
            return _M_omero.api.ISession._op_getInput.invokeAsync(self, (_cb, (sess, key), _ctx))

        def getOutput(self, sess, key, _ctx=None):
            return _M_omero.api.ISession._op_getOutput.invoke(self, ((sess, key), _ctx))

        def getOutput_async(self, _cb, sess, key, _ctx=None):
            return _M_omero.api.ISession._op_getOutput.invokeAsync(self, (_cb, (sess, key), _ctx))

        def setInput(self, sess, key, value, _ctx=None):
            return _M_omero.api.ISession._op_setInput.invoke(self, ((sess, key, value), _ctx))

        def setInput_async(self, _cb, sess, key, value, _ctx=None):
            return _M_omero.api.ISession._op_setInput.invokeAsync(self, (_cb, (sess, key, value), _ctx))

        def setOutput(self, sess, key, value, _ctx=None):
            return _M_omero.api.ISession._op_setOutput.invoke(self, ((sess, key, value), _ctx))

        def setOutput_async(self, _cb, sess, key, value, _ctx=None):
            return _M_omero.api.ISession._op_setOutput.invokeAsync(self, (_cb, (sess, key, value), _ctx))

        def getInputKeys(self, sess, _ctx=None):
            return _M_omero.api.ISession._op_getInputKeys.invoke(self, ((sess, ), _ctx))

        def getInputKeys_async(self, _cb, sess, _ctx=None):
            return _M_omero.api.ISession._op_getInputKeys.invokeAsync(self, (_cb, (sess, ), _ctx))

        def getOutputKeys(self, sess, _ctx=None):
            return _M_omero.api.ISession._op_getOutputKeys.invoke(self, ((sess, ), _ctx))

        def getOutputKeys_async(self, _cb, sess, _ctx=None):
            return _M_omero.api.ISession._op_getOutputKeys.invokeAsync(self, (_cb, (sess, ), _ctx))

        def getInputs(self, sess, _ctx=None):
            return _M_omero.api.ISession._op_getInputs.invoke(self, ((sess, ), _ctx))

        def getInputs_async(self, _cb, sess, _ctx=None):
            return _M_omero.api.ISession._op_getInputs.invokeAsync(self, (_cb, (sess, ), _ctx))

        def getOutputs(self, sess, _ctx=None):
            return _M_omero.api.ISession._op_getOutputs.invoke(self, ((sess, ), _ctx))

        def getOutputs_async(self, _cb, sess, _ctx=None):
            return _M_omero.api.ISession._op_getOutputs.invokeAsync(self, (_cb, (sess, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.api.ISessionPrx.ice_checkedCast(proxy, '::omero::api::ISession', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.api.ISessionPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.api._t_ISessionPrx = IcePy.defineProxy('::omero::api::ISession', ISessionPrx)

    _M_omero.api._t_ISession = IcePy.defineClass('::omero::api::ISession', ISession, (), True, None, (_M_omero.api._t_ServiceInterface,), ())
    ISession.ice_type = _M_omero.api._t_ISession

    ISession._op_createSession = IcePy.Operation('createSession', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.sys._t_Principal), ((), IcePy._t_string)), (), _M_omero.model._t_Session, (_M_omero._t_ServerError, _M_Glacier2._t_CannotCreateSessionException))
    ISession._op_createUserSession = IcePy.Operation('createUserSession', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long), ((), IcePy._t_long), ((), IcePy._t_string)), (), _M_omero.model._t_Session, (_M_omero._t_ServerError, _M_Glacier2._t_CannotCreateSessionException))
    ISession._op_createSessionWithTimeout = IcePy.Operation('createSessionWithTimeout', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.sys._t_Principal), ((), IcePy._t_long)), (), _M_omero.model._t_Session, (_M_omero._t_ServerError, _M_Glacier2._t_CannotCreateSessionException))
    ISession._op_createSessionWithTimeouts = IcePy.Operation('createSessionWithTimeouts', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.sys._t_Principal), ((), IcePy._t_long), ((), IcePy._t_long)), (), _M_omero.model._t_Session, (_M_omero._t_ServerError, _M_Glacier2._t_CannotCreateSessionException))
    ISession._op_getSession = IcePy.Operation('getSession', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_string),), (), _M_omero.model._t_Session, (_M_omero._t_ServerError,))
    ISession._op_getReferenceCount = IcePy.Operation('getReferenceCount', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_string),), (), IcePy._t_int, (_M_omero._t_ServerError,))
    ISession._op_closeSession = IcePy.Operation('closeSession', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.model._t_Session),), (), IcePy._t_int, (_M_omero._t_ServerError,))
    ISession._op_getMyOpenSessions = IcePy.Operation('getMyOpenSessions', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (), (), _M_omero.api._t_SessionList, (_M_omero._t_ServerError,))
    ISession._op_getMyOpenAgentSessions = IcePy.Operation('getMyOpenAgentSessions', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_string),), (), _M_omero.api._t_SessionList, (_M_omero._t_ServerError,))
    ISession._op_getMyOpenClientSessions = IcePy.Operation('getMyOpenClientSessions', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (), (), _M_omero.api._t_SessionList, (_M_omero._t_ServerError,))
    ISession._op_getInput = IcePy.Operation('getInput', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_string), ((), IcePy._t_string)), (), _M_omero._t_RType, (_M_omero._t_ServerError,))
    ISession._op_getOutput = IcePy.Operation('getOutput', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_string), ((), IcePy._t_string)), (), _M_omero._t_RType, (_M_omero._t_ServerError,))
    ISession._op_setInput = IcePy.Operation('setInput', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_string), ((), IcePy._t_string), ((), _M_omero._t_RType)), (), None, (_M_omero._t_ServerError,))
    ISession._op_setOutput = IcePy.Operation('setOutput', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_string), ((), IcePy._t_string), ((), _M_omero._t_RType)), (), None, (_M_omero._t_ServerError,))
    ISession._op_getInputKeys = IcePy.Operation('getInputKeys', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_string),), (), _M_omero.api._t_StringSet, (_M_omero._t_ServerError,))
    ISession._op_getOutputKeys = IcePy.Operation('getOutputKeys', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_string),), (), _M_omero.api._t_StringSet, (_M_omero._t_ServerError,))
    ISession._op_getInputs = IcePy.Operation('getInputs', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_string),), (), _M_omero._t_RTypeDict, (_M_omero._t_ServerError,))
    ISession._op_getOutputs = IcePy.Operation('getOutputs', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_string),), (), _M_omero._t_RTypeDict, (_M_omero._t_ServerError,))

    _M_omero.api.ISession = ISession
    del ISession

    _M_omero.api.ISessionPrx = ISessionPrx
    del ISessionPrx

# End of module omero.api

__name__ = 'omero'

# End of module omero
