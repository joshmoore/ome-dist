# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `JobHandle.ice'

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

if not _M_omero.api.__dict__.has_key('JobHandle'):
    _M_omero.api.JobHandle = Ice.createTempClass()
    class JobHandle(_M_omero.api.StatefulServiceInterface):
        def __init__(self):
            if __builtin__.type(self) == _M_omero.api.JobHandle:
                raise RuntimeError('omero.api.JobHandle is an abstract class')

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::api::JobHandle', '::omero::api::ServiceInterface', '::omero::api::StatefulServiceInterface')

        def ice_id(self, current=None):
            return '::omero::api::JobHandle'

        def ice_staticId():
            return '::omero::api::JobHandle'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def submit_async(self, _cb, j, current=None):
        # def attach_async(self, _cb, jobId, current=None):
        # def getJob_async(self, _cb, current=None):
        # def jobStatus_async(self, _cb, current=None):
        # def jobFinished_async(self, _cb, current=None):
        # def jobMessage_async(self, _cb, current=None):
        # def jobRunning_async(self, _cb, current=None):
        # def jobError_async(self, _cb, current=None):
        # def cancelJob_async(self, _cb, current=None):
        # def setStatus_async(self, _cb, status, current=None):
        # def setMessage_async(self, _cb, message, current=None):
        # def setStatusAndMessage_async(self, _cb, status, message, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.api._t_JobHandle)

        __repr__ = __str__

    _M_omero.api.JobHandlePrx = Ice.createTempClass()
    class JobHandlePrx(_M_omero.api.StatefulServiceInterfacePrx):

        def submit(self, j, _ctx=None):
            return _M_omero.api.JobHandle._op_submit.invoke(self, ((j, ), _ctx))

        def submit_async(self, _cb, j, _ctx=None):
            return _M_omero.api.JobHandle._op_submit.invokeAsync(self, (_cb, (j, ), _ctx))

        def attach(self, jobId, _ctx=None):
            return _M_omero.api.JobHandle._op_attach.invoke(self, ((jobId, ), _ctx))

        def attach_async(self, _cb, jobId, _ctx=None):
            return _M_omero.api.JobHandle._op_attach.invokeAsync(self, (_cb, (jobId, ), _ctx))

        def getJob(self, _ctx=None):
            return _M_omero.api.JobHandle._op_getJob.invoke(self, ((), _ctx))

        def getJob_async(self, _cb, _ctx=None):
            return _M_omero.api.JobHandle._op_getJob.invokeAsync(self, (_cb, (), _ctx))

        def jobStatus(self, _ctx=None):
            return _M_omero.api.JobHandle._op_jobStatus.invoke(self, ((), _ctx))

        def jobStatus_async(self, _cb, _ctx=None):
            return _M_omero.api.JobHandle._op_jobStatus.invokeAsync(self, (_cb, (), _ctx))

        def jobFinished(self, _ctx=None):
            return _M_omero.api.JobHandle._op_jobFinished.invoke(self, ((), _ctx))

        def jobFinished_async(self, _cb, _ctx=None):
            return _M_omero.api.JobHandle._op_jobFinished.invokeAsync(self, (_cb, (), _ctx))

        def jobMessage(self, _ctx=None):
            return _M_omero.api.JobHandle._op_jobMessage.invoke(self, ((), _ctx))

        def jobMessage_async(self, _cb, _ctx=None):
            return _M_omero.api.JobHandle._op_jobMessage.invokeAsync(self, (_cb, (), _ctx))

        def jobRunning(self, _ctx=None):
            return _M_omero.api.JobHandle._op_jobRunning.invoke(self, ((), _ctx))

        def jobRunning_async(self, _cb, _ctx=None):
            return _M_omero.api.JobHandle._op_jobRunning.invokeAsync(self, (_cb, (), _ctx))

        def jobError(self, _ctx=None):
            return _M_omero.api.JobHandle._op_jobError.invoke(self, ((), _ctx))

        def jobError_async(self, _cb, _ctx=None):
            return _M_omero.api.JobHandle._op_jobError.invokeAsync(self, (_cb, (), _ctx))

        def cancelJob(self, _ctx=None):
            return _M_omero.api.JobHandle._op_cancelJob.invoke(self, ((), _ctx))

        def cancelJob_async(self, _cb, _ctx=None):
            return _M_omero.api.JobHandle._op_cancelJob.invokeAsync(self, (_cb, (), _ctx))

        def setStatus(self, status, _ctx=None):
            return _M_omero.api.JobHandle._op_setStatus.invoke(self, ((status, ), _ctx))

        def setStatus_async(self, _cb, status, _ctx=None):
            return _M_omero.api.JobHandle._op_setStatus.invokeAsync(self, (_cb, (status, ), _ctx))

        def setMessage(self, message, _ctx=None):
            return _M_omero.api.JobHandle._op_setMessage.invoke(self, ((message, ), _ctx))

        def setMessage_async(self, _cb, message, _ctx=None):
            return _M_omero.api.JobHandle._op_setMessage.invokeAsync(self, (_cb, (message, ), _ctx))

        def setStatusAndMessage(self, status, message, _ctx=None):
            return _M_omero.api.JobHandle._op_setStatusAndMessage.invoke(self, ((status, message), _ctx))

        def setStatusAndMessage_async(self, _cb, status, message, _ctx=None):
            return _M_omero.api.JobHandle._op_setStatusAndMessage.invokeAsync(self, (_cb, (status, message), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.api.JobHandlePrx.ice_checkedCast(proxy, '::omero::api::JobHandle', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.api.JobHandlePrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.api._t_JobHandlePrx = IcePy.defineProxy('::omero::api::JobHandle', JobHandlePrx)

    _M_omero.api._t_JobHandle = IcePy.defineClass('::omero::api::JobHandle', JobHandle, (), True, None, (_M_omero.api._t_StatefulServiceInterface,), ())
    JobHandle.ice_type = _M_omero.api._t_JobHandle

    JobHandle._op_submit = IcePy.Operation('submit', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.model._t_Job),), (), IcePy._t_long, (_M_omero._t_ServerError,))
    JobHandle._op_attach = IcePy.Operation('attach', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long),), (), _M_omero.model._t_JobStatus, (_M_omero._t_ServerError,))
    JobHandle._op_getJob = IcePy.Operation('getJob', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (), (), _M_omero.model._t_Job, (_M_omero._t_ServerError,))
    JobHandle._op_jobStatus = IcePy.Operation('jobStatus', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (), (), _M_omero.model._t_JobStatus, (_M_omero._t_ServerError,))
    JobHandle._op_jobFinished = IcePy.Operation('jobFinished', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (), (), _M_omero._t_RTime, (_M_omero._t_ServerError,))
    JobHandle._op_jobMessage = IcePy.Operation('jobMessage', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (), (), IcePy._t_string, (_M_omero._t_ServerError,))
    JobHandle._op_jobRunning = IcePy.Operation('jobRunning', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (), (), IcePy._t_bool, (_M_omero._t_ServerError,))
    JobHandle._op_jobError = IcePy.Operation('jobError', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (), (), IcePy._t_bool, (_M_omero._t_ServerError,))
    JobHandle._op_cancelJob = IcePy.Operation('cancelJob', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (), (), None, (_M_omero._t_ServerError,))
    JobHandle._op_setStatus = IcePy.Operation('setStatus', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_string),), (), IcePy._t_string, (_M_omero._t_ServerError,))
    JobHandle._op_setMessage = IcePy.Operation('setMessage', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_string),), (), IcePy._t_string, (_M_omero._t_ServerError,))
    JobHandle._op_setStatusAndMessage = IcePy.Operation('setStatusAndMessage', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_string), ((), _M_omero._t_RString)), (), IcePy._t_string, (_M_omero._t_ServerError,))

    _M_omero.api.JobHandle = JobHandle
    del JobHandle

    _M_omero.api.JobHandlePrx = JobHandlePrx
    del JobHandlePrx

# End of module omero.api

__name__ = 'omero'

# End of module omero
