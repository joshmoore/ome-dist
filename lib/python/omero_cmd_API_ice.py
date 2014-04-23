# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `API.ice'

import Ice, IcePy, __builtin__

if not Ice.__dict__.has_key("_struct_marker"):
    Ice._struct_marker = object()
import omero_RTypes_ice
import omero_ServerErrors_ice
import Glacier2_Session_ice
import Ice_BuiltinSequences_ice
import Ice_Identity_ice

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

# Start of module omero
__name__ = 'omero'

# Start of module omero.cmd
_M_omero.cmd = Ice.openModule('omero.cmd')
__name__ = 'omero.cmd'

if not _M_omero.cmd.__dict__.has_key('_t_StringMap'):
    _M_omero.cmd._t_StringMap = IcePy.defineDictionary('::omero::cmd::StringMap', (), IcePy._t_string, IcePy._t_string)

if not _M_omero.cmd.__dict__.has_key('_t_StringMapList'):
    _M_omero.cmd._t_StringMapList = IcePy.defineSequence('::omero::cmd::StringMapList', (), _M_omero.cmd._t_StringMap)

if not _M_omero.cmd.__dict__.has_key('State'):
    _M_omero.cmd.State = Ice.createTempClass()
    class State(object):

        def __init__(self, val):
            assert(val >= 0 and val < 6)
            self.value = val

        def __str__(self):
            if self.value == 0:
                return 'ALL'
            elif self.value == 1:
                return 'ACTIVE'
            elif self.value == 2:
                return 'INACTIVE'
            elif self.value == 3:
                return 'SUCCESS'
            elif self.value == 4:
                return 'FAILURE'
            elif self.value == 5:
                return 'CANCELLED'
            return None

        __repr__ = __str__

        def __hash__(self):
            return self.value

        def __cmp__(self, other):
            return cmp(self.value, other.value)

    State.ALL = State(0)
    State.ACTIVE = State(1)
    State.INACTIVE = State(2)
    State.SUCCESS = State(3)
    State.FAILURE = State(4)
    State.CANCELLED = State(5)

    _M_omero.cmd._t_State = IcePy.defineEnum('::omero::cmd::State', State, (), (State.ALL, State.ACTIVE, State.INACTIVE, State.SUCCESS, State.FAILURE, State.CANCELLED))

    _M_omero.cmd.State = State
    del State

if not _M_omero.cmd.__dict__.has_key('_t_StateList'):
    _M_omero.cmd._t_StateList = IcePy.defineSequence('::omero::cmd::StateList', (), _M_omero.cmd._t_State)

if not _M_omero.cmd.__dict__.has_key('Handle'):
    _M_omero.cmd._t_Handle = IcePy.declareClass('::omero::cmd::Handle')
    _M_omero.cmd._t_HandlePrx = IcePy.declareProxy('::omero::cmd::Handle')

if not _M_omero.cmd.__dict__.has_key('Status'):
    _M_omero.cmd.Status = Ice.createTempClass()
    class Status(Ice.Object):
        def __init__(self, source=None, category='', name='', flags=None, parameters=None, steps=0, startTime=0, stepStartTimes=None, stepStopTimes=None, stopTime=0):
            self.source = source
            self.category = category
            self.name = name
            self.flags = flags
            self.parameters = parameters
            self.steps = steps
            self.startTime = startTime
            self.stepStartTimes = stepStartTimes
            self.stepStopTimes = stepStopTimes
            self.stopTime = stopTime

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::cmd::Status')

        def ice_id(self, current=None):
            return '::omero::cmd::Status'

        def ice_staticId():
            return '::omero::cmd::Status'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero.cmd._t_Status)

        __repr__ = __str__

    _M_omero.cmd.StatusPrx = Ice.createTempClass()
    class StatusPrx(Ice.ObjectPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.cmd.StatusPrx.ice_checkedCast(proxy, '::omero::cmd::Status', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.cmd.StatusPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.cmd._t_StatusPrx = IcePy.defineProxy('::omero::cmd::Status', StatusPrx)

    _M_omero.cmd._t_Status = IcePy.defineClass('::omero::cmd::Status', Status, (), False, None, (), (
        ('source', (), _M_omero.cmd._t_HandlePrx),
        ('category', (), IcePy._t_string),
        ('name', (), IcePy._t_string),
        ('flags', (), _M_omero.cmd._t_StateList),
        ('parameters', (), _M_omero.cmd._t_StringMap),
        ('steps', (), IcePy._t_int),
        ('startTime', (), IcePy._t_long),
        ('stepStartTimes', (), _M_Ice._t_LongSeq),
        ('stepStopTimes', (), _M_Ice._t_LongSeq),
        ('stopTime', (), IcePy._t_long)
    ))
    Status.ice_type = _M_omero.cmd._t_Status

    _M_omero.cmd.Status = Status
    del Status

    _M_omero.cmd.StatusPrx = StatusPrx
    del StatusPrx

if not _M_omero.cmd.__dict__.has_key('_t_StatusList'):
    _M_omero.cmd._t_StatusList = IcePy.defineSequence('::omero::cmd::StatusList', (), _M_omero.cmd._t_Status)

if not _M_omero.cmd.__dict__.has_key('Request'):
    _M_omero.cmd.Request = Ice.createTempClass()
    class Request(Ice.Object):
        def __init__(self):
            pass

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::cmd::Request')

        def ice_id(self, current=None):
            return '::omero::cmd::Request'

        def ice_staticId():
            return '::omero::cmd::Request'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero.cmd._t_Request)

        __repr__ = __str__

    _M_omero.cmd.RequestPrx = Ice.createTempClass()
    class RequestPrx(Ice.ObjectPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.cmd.RequestPrx.ice_checkedCast(proxy, '::omero::cmd::Request', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.cmd.RequestPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.cmd._t_RequestPrx = IcePy.defineProxy('::omero::cmd::Request', RequestPrx)

    _M_omero.cmd._t_Request = IcePy.defineClass('::omero::cmd::Request', Request, (), False, None, (), ())
    Request.ice_type = _M_omero.cmd._t_Request

    _M_omero.cmd.Request = Request
    del Request

    _M_omero.cmd.RequestPrx = RequestPrx
    del RequestPrx

if not _M_omero.cmd.__dict__.has_key('_t_RequestList'):
    _M_omero.cmd._t_RequestList = IcePy.defineSequence('::omero::cmd::RequestList', (), _M_omero.cmd._t_Request)

if not _M_omero.cmd.__dict__.has_key('Response'):
    _M_omero.cmd.Response = Ice.createTempClass()
    class Response(Ice.Object):
        def __init__(self):
            pass

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::cmd::Response')

        def ice_id(self, current=None):
            return '::omero::cmd::Response'

        def ice_staticId():
            return '::omero::cmd::Response'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero.cmd._t_Response)

        __repr__ = __str__

    _M_omero.cmd.ResponsePrx = Ice.createTempClass()
    class ResponsePrx(Ice.ObjectPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.cmd.ResponsePrx.ice_checkedCast(proxy, '::omero::cmd::Response', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.cmd.ResponsePrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.cmd._t_ResponsePrx = IcePy.defineProxy('::omero::cmd::Response', ResponsePrx)

    _M_omero.cmd._t_Response = IcePy.defineClass('::omero::cmd::Response', Response, (), False, None, (), ())
    Response.ice_type = _M_omero.cmd._t_Response

    _M_omero.cmd.Response = Response
    del Response

    _M_omero.cmd.ResponsePrx = ResponsePrx
    del ResponsePrx

if not _M_omero.cmd.__dict__.has_key('OK'):
    _M_omero.cmd.OK = Ice.createTempClass()
    class OK(_M_omero.cmd.Response):
        def __init__(self):
            _M_omero.cmd.Response.__init__(self)

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::cmd::OK', '::omero::cmd::Response')

        def ice_id(self, current=None):
            return '::omero::cmd::OK'

        def ice_staticId():
            return '::omero::cmd::OK'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero.cmd._t_OK)

        __repr__ = __str__

    _M_omero.cmd.OKPrx = Ice.createTempClass()
    class OKPrx(_M_omero.cmd.ResponsePrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.cmd.OKPrx.ice_checkedCast(proxy, '::omero::cmd::OK', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.cmd.OKPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.cmd._t_OKPrx = IcePy.defineProxy('::omero::cmd::OK', OKPrx)

    _M_omero.cmd._t_OK = IcePy.defineClass('::omero::cmd::OK', OK, (), False, _M_omero.cmd._t_Response, (), ())
    OK.ice_type = _M_omero.cmd._t_OK

    _M_omero.cmd.OK = OK
    del OK

    _M_omero.cmd.OKPrx = OKPrx
    del OKPrx

if not _M_omero.cmd.__dict__.has_key('ERR'):
    _M_omero.cmd.ERR = Ice.createTempClass()
    class ERR(_M_omero.cmd.Response):
        def __init__(self, category='', name='', parameters=None):
            _M_omero.cmd.Response.__init__(self)
            self.category = category
            self.name = name
            self.parameters = parameters

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::cmd::ERR', '::omero::cmd::Response')

        def ice_id(self, current=None):
            return '::omero::cmd::ERR'

        def ice_staticId():
            return '::omero::cmd::ERR'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero.cmd._t_ERR)

        __repr__ = __str__

    _M_omero.cmd.ERRPrx = Ice.createTempClass()
    class ERRPrx(_M_omero.cmd.ResponsePrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.cmd.ERRPrx.ice_checkedCast(proxy, '::omero::cmd::ERR', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.cmd.ERRPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.cmd._t_ERRPrx = IcePy.defineProxy('::omero::cmd::ERR', ERRPrx)

    _M_omero.cmd._t_ERR = IcePy.defineClass('::omero::cmd::ERR', ERR, (), False, _M_omero.cmd._t_Response, (), (
        ('category', (), IcePy._t_string),
        ('name', (), IcePy._t_string),
        ('parameters', (), _M_omero.cmd._t_StringMap)
    ))
    ERR.ice_type = _M_omero.cmd._t_ERR

    _M_omero.cmd.ERR = ERR
    del ERR

    _M_omero.cmd.ERRPrx = ERRPrx
    del ERRPrx

if not _M_omero.cmd.__dict__.has_key('Unknown'):
    _M_omero.cmd.Unknown = Ice.createTempClass()
    class Unknown(_M_omero.cmd.ERR):
        def __init__(self, category='', name='', parameters=None):
            _M_omero.cmd.ERR.__init__(self, category, name, parameters)

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::cmd::ERR', '::omero::cmd::Response', '::omero::cmd::Unknown')

        def ice_id(self, current=None):
            return '::omero::cmd::Unknown'

        def ice_staticId():
            return '::omero::cmd::Unknown'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero.cmd._t_Unknown)

        __repr__ = __str__

    _M_omero.cmd.UnknownPrx = Ice.createTempClass()
    class UnknownPrx(_M_omero.cmd.ERRPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.cmd.UnknownPrx.ice_checkedCast(proxy, '::omero::cmd::Unknown', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.cmd.UnknownPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.cmd._t_UnknownPrx = IcePy.defineProxy('::omero::cmd::Unknown', UnknownPrx)

    _M_omero.cmd._t_Unknown = IcePy.defineClass('::omero::cmd::Unknown', Unknown, (), False, _M_omero.cmd._t_ERR, (), ())
    Unknown.ice_type = _M_omero.cmd._t_Unknown

    _M_omero.cmd.Unknown = Unknown
    del Unknown

    _M_omero.cmd.UnknownPrx = UnknownPrx
    del UnknownPrx

if not _M_omero.cmd.__dict__.has_key('_t_ResponseList'):
    _M_omero.cmd._t_ResponseList = IcePy.defineSequence('::omero::cmd::ResponseList', (), _M_omero.cmd._t_Response)

if not _M_omero.cmd.__dict__.has_key('CmdCallback'):
    _M_omero.cmd.CmdCallback = Ice.createTempClass()
    class CmdCallback(Ice.Object):
        def __init__(self):
            if __builtin__.type(self) == _M_omero.cmd.CmdCallback:
                raise RuntimeError('omero.cmd.CmdCallback is an abstract class')

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::cmd::CmdCallback')

        def ice_id(self, current=None):
            return '::omero::cmd::CmdCallback'

        def ice_staticId():
            return '::omero::cmd::CmdCallback'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def step(self, complete, total, current=None):
        # def finished(self, rsp, s, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.cmd._t_CmdCallback)

        __repr__ = __str__

    _M_omero.cmd.CmdCallbackPrx = Ice.createTempClass()
    class CmdCallbackPrx(Ice.ObjectPrx):

        def step(self, complete, total, _ctx=None):
            return _M_omero.cmd.CmdCallback._op_step.invoke(self, ((complete, total), _ctx))

        def finished(self, rsp, s, _ctx=None):
            return _M_omero.cmd.CmdCallback._op_finished.invoke(self, ((rsp, s), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.cmd.CmdCallbackPrx.ice_checkedCast(proxy, '::omero::cmd::CmdCallback', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.cmd.CmdCallbackPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.cmd._t_CmdCallbackPrx = IcePy.defineProxy('::omero::cmd::CmdCallback', CmdCallbackPrx)

    _M_omero.cmd._t_CmdCallback = IcePy.defineClass('::omero::cmd::CmdCallback', CmdCallback, (), True, None, (), ())
    CmdCallback.ice_type = _M_omero.cmd._t_CmdCallback

    CmdCallback._op_step = IcePy.Operation('step', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_int), ((), IcePy._t_int)), (), None, ())
    CmdCallback._op_finished = IcePy.Operation('finished', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.cmd._t_Response), ((), _M_omero.cmd._t_Status)), (), None, ())

    _M_omero.cmd.CmdCallback = CmdCallback
    del CmdCallback

    _M_omero.cmd.CmdCallbackPrx = CmdCallbackPrx
    del CmdCallbackPrx

if not _M_omero.cmd.__dict__.has_key('Handle'):
    _M_omero.cmd.Handle = Ice.createTempClass()
    class Handle(Ice.Object):
        def __init__(self):
            if __builtin__.type(self) == _M_omero.cmd.Handle:
                raise RuntimeError('omero.cmd.Handle is an abstract class')

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::cmd::Handle')

        def ice_id(self, current=None):
            return '::omero::cmd::Handle'

        def ice_staticId():
            return '::omero::cmd::Handle'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def addCallback(self, cb, current=None):
        # def removeCallback(self, cb, current=None):
        # def getRequest(self, current=None):
        # def getResponse(self, current=None):
        # def getStatus(self, current=None):
        # def cancel(self, current=None):
        # def close(self, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.cmd._t_Handle)

        __repr__ = __str__

    _M_omero.cmd.HandlePrx = Ice.createTempClass()
    class HandlePrx(Ice.ObjectPrx):

        def addCallback(self, cb, _ctx=None):
            return _M_omero.cmd.Handle._op_addCallback.invoke(self, ((cb, ), _ctx))

        def addCallback_async(self, _cb, cb, _ctx=None):
            return _M_omero.cmd.Handle._op_addCallback.invokeAsync(self, (_cb, (cb, ), _ctx))

        def removeCallback(self, cb, _ctx=None):
            return _M_omero.cmd.Handle._op_removeCallback.invoke(self, ((cb, ), _ctx))

        def removeCallback_async(self, _cb, cb, _ctx=None):
            return _M_omero.cmd.Handle._op_removeCallback.invokeAsync(self, (_cb, (cb, ), _ctx))

        def getRequest(self, _ctx=None):
            return _M_omero.cmd.Handle._op_getRequest.invoke(self, ((), _ctx))

        def getRequest_async(self, _cb, _ctx=None):
            return _M_omero.cmd.Handle._op_getRequest.invokeAsync(self, (_cb, (), _ctx))

        def getResponse(self, _ctx=None):
            return _M_omero.cmd.Handle._op_getResponse.invoke(self, ((), _ctx))

        def getResponse_async(self, _cb, _ctx=None):
            return _M_omero.cmd.Handle._op_getResponse.invokeAsync(self, (_cb, (), _ctx))

        def getStatus(self, _ctx=None):
            return _M_omero.cmd.Handle._op_getStatus.invoke(self, ((), _ctx))

        def getStatus_async(self, _cb, _ctx=None):
            return _M_omero.cmd.Handle._op_getStatus.invokeAsync(self, (_cb, (), _ctx))

        def cancel(self, _ctx=None):
            return _M_omero.cmd.Handle._op_cancel.invoke(self, ((), _ctx))

        def cancel_async(self, _cb, _ctx=None):
            return _M_omero.cmd.Handle._op_cancel.invokeAsync(self, (_cb, (), _ctx))

        def close(self, _ctx=None):
            return _M_omero.cmd.Handle._op_close.invoke(self, ((), _ctx))

        def close_async(self, _cb, _ctx=None):
            return _M_omero.cmd.Handle._op_close.invokeAsync(self, (_cb, (), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.cmd.HandlePrx.ice_checkedCast(proxy, '::omero::cmd::Handle', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.cmd.HandlePrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.cmd._t_HandlePrx = IcePy.defineProxy('::omero::cmd::Handle', HandlePrx)

    _M_omero.cmd._t_Handle = IcePy.defineClass('::omero::cmd::Handle', Handle, (), True, None, (), ())
    Handle.ice_type = _M_omero.cmd._t_Handle

    Handle._op_addCallback = IcePy.Operation('addCallback', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.cmd._t_CmdCallbackPrx),), (), None, ())
    Handle._op_removeCallback = IcePy.Operation('removeCallback', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.cmd._t_CmdCallbackPrx),), (), None, ())
    Handle._op_getRequest = IcePy.Operation('getRequest', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.cmd._t_Request, ())
    Handle._op_getResponse = IcePy.Operation('getResponse', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.cmd._t_Response, ())
    Handle._op_getStatus = IcePy.Operation('getStatus', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.cmd._t_Status, ())
    Handle._op_cancel = IcePy.Operation('cancel', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_bool, (_M_omero._t_LockTimeout,))
    Handle._op_close = IcePy.Operation('close', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())

    _M_omero.cmd.Handle = Handle
    del Handle

    _M_omero.cmd.HandlePrx = HandlePrx
    del HandlePrx

if not _M_omero.cmd.__dict__.has_key('_t_HandleList'):
    _M_omero.cmd._t_HandleList = IcePy.defineSequence('::omero::cmd::HandleList', (), _M_omero.cmd._t_HandlePrx)

if not _M_omero.cmd.__dict__.has_key('Session'):
    _M_omero.cmd.Session = Ice.createTempClass()
    class Session(_M_Glacier2.Session):
        def __init__(self):
            if __builtin__.type(self) == _M_omero.cmd.Session:
                raise RuntimeError('omero.cmd.Session is an abstract class')

        def ice_ids(self, current=None):
            return ('::Glacier2::Session', '::Ice::Object', '::omero::cmd::Session')

        def ice_id(self, current=None):
            return '::omero::cmd::Session'

        def ice_staticId():
            return '::omero::cmd::Session'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def submit_async(self, _cb, req, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.cmd._t_Session)

        __repr__ = __str__

    _M_omero.cmd.SessionPrx = Ice.createTempClass()
    class SessionPrx(_M_Glacier2.SessionPrx):

        def submit(self, req, _ctx=None):
            return _M_omero.cmd.Session._op_submit.invoke(self, ((req, ), _ctx))

        def submit_async(self, _cb, req, _ctx=None):
            return _M_omero.cmd.Session._op_submit.invokeAsync(self, (_cb, (req, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.cmd.SessionPrx.ice_checkedCast(proxy, '::omero::cmd::Session', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.cmd.SessionPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.cmd._t_SessionPrx = IcePy.defineProxy('::omero::cmd::Session', SessionPrx)

    _M_omero.cmd._t_Session = IcePy.defineClass('::omero::cmd::Session', Session, (), True, None, (_M_Glacier2._t_Session,), ())
    Session.ice_type = _M_omero.cmd._t_Session

    Session._op_submit = IcePy.Operation('submit', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.cmd._t_Request),), (), _M_omero.cmd._t_HandlePrx, ())

    _M_omero.cmd.Session = Session
    del Session

    _M_omero.cmd.SessionPrx = SessionPrx
    del SessionPrx

# End of module omero.cmd

__name__ = 'omero'

# End of module omero
