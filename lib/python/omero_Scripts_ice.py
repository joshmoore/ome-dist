# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `Scripts.ice'

import Ice, IcePy, __builtin__

if not Ice.__dict__.has_key("_struct_marker"):
    Ice._struct_marker = object()
import omero_RTypes_ice
import omero_System_ice
import omero_ServerErrors_ice
import omero_Collections_ice

# Included module omero
_M_omero = Ice.openModule('omero')

# Included module omero.model
_M_omero.model = Ice.openModule('omero.model')

# Included module Ice
_M_Ice = Ice.openModule('Ice')

# Included module omero.sys
_M_omero.sys = Ice.openModule('omero.sys')

# Included module Glacier2
_M_Glacier2 = Ice.openModule('Glacier2')

# Included module omero.api
_M_omero.api = Ice.openModule('omero.api')

# Start of module omero
__name__ = 'omero'

if not _M_omero.__dict__.has_key('Internal'):
    _M_omero.Internal = Ice.createTempClass()
    class Internal(Ice.Object):
        def __init__(self):
            pass

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::Internal')

        def ice_id(self, current=None):
            return '::omero::Internal'

        def ice_staticId():
            return '::omero::Internal'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero._t_Internal)

        __repr__ = __str__

    _M_omero.InternalPrx = Ice.createTempClass()
    class InternalPrx(Ice.ObjectPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.InternalPrx.ice_checkedCast(proxy, '::omero::Internal', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.InternalPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero._t_InternalPrx = IcePy.defineProxy('::omero::Internal', InternalPrx)

    _M_omero._t_Internal = IcePy.defineClass('::omero::Internal', Internal, (), False, None, (), ())
    Internal.ice_type = _M_omero._t_Internal

    _M_omero.Internal = Internal
    del Internal

    _M_omero.InternalPrx = InternalPrx
    del InternalPrx

if not _M_omero.__dict__.has_key('RInternal'):
    _M_omero.RInternal = Ice.createTempClass()
    class RInternal(_M_omero.RType):
        def __init__(self, _val=None):
            if __builtin__.type(self) == _M_omero.RInternal:
                raise RuntimeError('omero.RInternal is an abstract class')
            _M_omero.RType.__init__(self)
            self._val = _val

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::RInternal', '::omero::RType')

        def ice_id(self, current=None):
            return '::omero::RInternal'

        def ice_staticId():
            return '::omero::RInternal'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getValue(self, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero._t_RInternal)

        __repr__ = __str__

    _M_omero.RInternalPrx = Ice.createTempClass()
    class RInternalPrx(_M_omero.RTypePrx):

        def getValue(self, _ctx=None):
            return _M_omero.RInternal._op_getValue.invoke(self, ((), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.RInternalPrx.ice_checkedCast(proxy, '::omero::RInternal', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.RInternalPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero._t_RInternalPrx = IcePy.defineProxy('::omero::RInternal', RInternalPrx)

    _M_omero._t_RInternal = IcePy.declareClass('::omero::RInternal')

    _M_omero._t_RInternal = IcePy.defineClass('::omero::RInternal', RInternal, (), True, _M_omero._t_RType, (), (('_val', (), _M_omero._t_Internal),))
    RInternal.ice_type = _M_omero._t_RInternal

    RInternal._op_getValue = IcePy.Operation('getValue', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_Internal, ())

    _M_omero.RInternal = RInternal
    del RInternal

    _M_omero.RInternalPrx = RInternalPrx
    del RInternalPrx

if not _M_omero.__dict__.has_key('_t_Bytes2D'):
    _M_omero._t_Bytes2D = IcePy.defineSequence('::omero::Bytes2D', (), _M_Ice._t_ByteSeq)

if not _M_omero.__dict__.has_key('Plane'):
    _M_omero.Plane = Ice.createTempClass()
    class Plane(_M_omero.Internal):
        def __init__(self, data=None):
            _M_omero.Internal.__init__(self)
            self.data = data

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::Internal', '::omero::Plane')

        def ice_id(self, current=None):
            return '::omero::Plane'

        def ice_staticId():
            return '::omero::Plane'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero._t_Plane)

        __repr__ = __str__

    _M_omero.PlanePrx = Ice.createTempClass()
    class PlanePrx(_M_omero.InternalPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.PlanePrx.ice_checkedCast(proxy, '::omero::Plane', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.PlanePrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero._t_PlanePrx = IcePy.defineProxy('::omero::Plane', PlanePrx)

    _M_omero._t_Plane = IcePy.defineClass('::omero::Plane', Plane, (), False, _M_omero._t_Internal, (), (('data', (), _M_omero._t_Bytes2D),))
    Plane.ice_type = _M_omero._t_Plane

    _M_omero.Plane = Plane
    del Plane

    _M_omero.PlanePrx = PlanePrx
    del PlanePrx

if not _M_omero.__dict__.has_key('Point'):
    _M_omero.Point = Ice.createTempClass()
    class Point(_M_omero.Internal):
        def __init__(self, x=0, y=0):
            _M_omero.Internal.__init__(self)
            self.x = x
            self.y = y

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::Internal', '::omero::Point')

        def ice_id(self, current=None):
            return '::omero::Point'

        def ice_staticId():
            return '::omero::Point'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero._t_Point)

        __repr__ = __str__

    _M_omero.PointPrx = Ice.createTempClass()
    class PointPrx(_M_omero.InternalPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.PointPrx.ice_checkedCast(proxy, '::omero::Point', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.PointPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero._t_PointPrx = IcePy.defineProxy('::omero::Point', PointPrx)

    _M_omero._t_Point = IcePy.defineClass('::omero::Point', Point, (), False, _M_omero._t_Internal, (), (
        ('x', (), IcePy._t_int),
        ('y', (), IcePy._t_int)
    ))
    Point.ice_type = _M_omero._t_Point

    _M_omero.Point = Point
    del Point

    _M_omero.PointPrx = PointPrx
    del PointPrx

if not _M_omero.__dict__.has_key('Color'):
    _M_omero.Color = Ice.createTempClass()
    class Color(_M_omero.Internal):
        def __init__(self, packedColor=0):
            _M_omero.Internal.__init__(self)
            self.packedColor = packedColor

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::Color', '::omero::Internal')

        def ice_id(self, current=None):
            return '::omero::Color'

        def ice_staticId():
            return '::omero::Color'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero._t_Color)

        __repr__ = __str__

    _M_omero.ColorPrx = Ice.createTempClass()
    class ColorPrx(_M_omero.InternalPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.ColorPrx.ice_checkedCast(proxy, '::omero::Color', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.ColorPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero._t_ColorPrx = IcePy.defineProxy('::omero::Color', ColorPrx)

    _M_omero._t_Color = IcePy.defineClass('::omero::Color', Color, (), False, _M_omero._t_Internal, (), (('packedColor', (), IcePy._t_long),))
    Color.ice_type = _M_omero._t_Color

    _M_omero.Color = Color
    del Color

    _M_omero.ColorPrx = ColorPrx
    del ColorPrx

# Start of module omero.grid
_M_omero.grid = Ice.openModule('omero.grid')
__name__ = 'omero.grid'

if not _M_omero.grid.__dict__.has_key('Param'):
    _M_omero.grid.Param = Ice.createTempClass()
    class Param(Ice.Object):
        def __init__(self, description='', optional=False, useDefault=False, prototype=None, min=None, max=None, values=None, grouping='', namespaces=None):
            self.description = description
            self.optional = optional
            self.useDefault = useDefault
            self.prototype = prototype
            self.min = min
            self.max = max
            self.values = values
            self.grouping = grouping
            self.namespaces = namespaces

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::grid::Param')

        def ice_id(self, current=None):
            return '::omero::grid::Param'

        def ice_staticId():
            return '::omero::grid::Param'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero.grid._t_Param)

        __repr__ = __str__

    _M_omero.grid.ParamPrx = Ice.createTempClass()
    class ParamPrx(Ice.ObjectPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.grid.ParamPrx.ice_checkedCast(proxy, '::omero::grid::Param', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.grid.ParamPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.grid._t_ParamPrx = IcePy.defineProxy('::omero::grid::Param', ParamPrx)

    _M_omero.grid._t_Param = IcePy.declareClass('::omero::grid::Param')

    _M_omero.grid._t_Param = IcePy.defineClass('::omero::grid::Param', Param, (), False, None, (), (
        ('description', (), IcePy._t_string),
        ('optional', (), IcePy._t_bool),
        ('useDefault', (), IcePy._t_bool),
        ('prototype', (), _M_omero._t_RType),
        ('min', (), _M_omero._t_RType),
        ('max', (), _M_omero._t_RType),
        ('values', (), _M_omero._t_RList),
        ('grouping', (), IcePy._t_string),
        ('namespaces', (), _M_omero.api._t_StringSet)
    ))
    Param.ice_type = _M_omero.grid._t_Param

    _M_omero.grid.Param = Param
    del Param

    _M_omero.grid.ParamPrx = ParamPrx
    del ParamPrx

if not _M_omero.grid.__dict__.has_key('_t_ParamMap'):
    _M_omero.grid._t_ParamMap = IcePy.defineDictionary('::omero::grid::ParamMap', (), IcePy._t_string, _M_omero.grid._t_Param)

if not _M_omero.grid.__dict__.has_key('JobParams'):
    _M_omero.grid.JobParams = Ice.createTempClass()
    class JobParams(_M_omero.Internal):
        def __init__(self, name='', version='', description='', contact='', authors=None, institutions=None, authorsInstitutions=None, inputs=None, outputs=None, stdoutFormat='', stderrFormat='', namespaces=None):
            _M_omero.Internal.__init__(self)
            self.name = name
            self.version = version
            self.description = description
            self.contact = contact
            self.authors = authors
            self.institutions = institutions
            self.authorsInstitutions = authorsInstitutions
            self.inputs = inputs
            self.outputs = outputs
            self.stdoutFormat = stdoutFormat
            self.stderrFormat = stderrFormat
            self.namespaces = namespaces

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::Internal', '::omero::grid::JobParams')

        def ice_id(self, current=None):
            return '::omero::grid::JobParams'

        def ice_staticId():
            return '::omero::grid::JobParams'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero.grid._t_JobParams)

        __repr__ = __str__

    _M_omero.grid.JobParamsPrx = Ice.createTempClass()
    class JobParamsPrx(_M_omero.InternalPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.grid.JobParamsPrx.ice_checkedCast(proxy, '::omero::grid::JobParams', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.grid.JobParamsPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.grid._t_JobParamsPrx = IcePy.defineProxy('::omero::grid::JobParams', JobParamsPrx)

    _M_omero.grid._t_JobParams = IcePy.declareClass('::omero::grid::JobParams')

    _M_omero.grid._t_JobParams = IcePy.defineClass('::omero::grid::JobParams', JobParams, (), False, _M_omero._t_Internal, (), (
        ('name', (), IcePy._t_string),
        ('version', (), IcePy._t_string),
        ('description', (), IcePy._t_string),
        ('contact', (), IcePy._t_string),
        ('authors', (), _M_omero.api._t_StringArray),
        ('institutions', (), _M_omero.api._t_StringArray),
        ('authorsInstitutions', (), _M_omero.api._t_IntegerArrayArray),
        ('inputs', (), _M_omero.grid._t_ParamMap),
        ('outputs', (), _M_omero.grid._t_ParamMap),
        ('stdoutFormat', (), IcePy._t_string),
        ('stderrFormat', (), IcePy._t_string),
        ('namespaces', (), _M_omero.api._t_StringSet)
    ))
    JobParams.ice_type = _M_omero.grid._t_JobParams

    _M_omero.grid.JobParams = JobParams
    del JobParams

    _M_omero.grid.JobParamsPrx = JobParamsPrx
    del JobParamsPrx

if not _M_omero.grid.__dict__.has_key('ProcessCallback'):
    _M_omero.grid.ProcessCallback = Ice.createTempClass()
    class ProcessCallback(Ice.Object):
        def __init__(self):
            if __builtin__.type(self) == _M_omero.grid.ProcessCallback:
                raise RuntimeError('omero.grid.ProcessCallback is an abstract class')

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::grid::ProcessCallback')

        def ice_id(self, current=None):
            return '::omero::grid::ProcessCallback'

        def ice_staticId():
            return '::omero::grid::ProcessCallback'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def processFinished(self, returncode, current=None):
        # def processCancelled(self, success, current=None):
        # def processKilled(self, success, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.grid._t_ProcessCallback)

        __repr__ = __str__

    _M_omero.grid.ProcessCallbackPrx = Ice.createTempClass()
    class ProcessCallbackPrx(Ice.ObjectPrx):

        def processFinished(self, returncode, _ctx=None):
            return _M_omero.grid.ProcessCallback._op_processFinished.invoke(self, ((returncode, ), _ctx))

        def processFinished_async(self, _cb, returncode, _ctx=None):
            return _M_omero.grid.ProcessCallback._op_processFinished.invokeAsync(self, (_cb, (returncode, ), _ctx))

        def processCancelled(self, success, _ctx=None):
            return _M_omero.grid.ProcessCallback._op_processCancelled.invoke(self, ((success, ), _ctx))

        def processCancelled_async(self, _cb, success, _ctx=None):
            return _M_omero.grid.ProcessCallback._op_processCancelled.invokeAsync(self, (_cb, (success, ), _ctx))

        def processKilled(self, success, _ctx=None):
            return _M_omero.grid.ProcessCallback._op_processKilled.invoke(self, ((success, ), _ctx))

        def processKilled_async(self, _cb, success, _ctx=None):
            return _M_omero.grid.ProcessCallback._op_processKilled.invokeAsync(self, (_cb, (success, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.grid.ProcessCallbackPrx.ice_checkedCast(proxy, '::omero::grid::ProcessCallback', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.grid.ProcessCallbackPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.grid._t_ProcessCallbackPrx = IcePy.defineProxy('::omero::grid::ProcessCallback', ProcessCallbackPrx)

    _M_omero.grid._t_ProcessCallback = IcePy.defineClass('::omero::grid::ProcessCallback', ProcessCallback, (), True, None, (), ())
    ProcessCallback.ice_type = _M_omero.grid._t_ProcessCallback

    ProcessCallback._op_processFinished = IcePy.Operation('processFinished', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_int),), (), None, ())
    ProcessCallback._op_processCancelled = IcePy.Operation('processCancelled', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_bool),), (), None, ())
    ProcessCallback._op_processKilled = IcePy.Operation('processKilled', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_bool),), (), None, ())

    _M_omero.grid.ProcessCallback = ProcessCallback
    del ProcessCallback

    _M_omero.grid.ProcessCallbackPrx = ProcessCallbackPrx
    del ProcessCallbackPrx

if not _M_omero.grid.__dict__.has_key('Process'):
    _M_omero.grid.Process = Ice.createTempClass()
    class Process(Ice.Object):
        def __init__(self):
            if __builtin__.type(self) == _M_omero.grid.Process:
                raise RuntimeError('omero.grid.Process is an abstract class')

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::grid::Process')

        def ice_id(self, current=None):
            return '::omero::grid::Process'

        def ice_staticId():
            return '::omero::grid::Process'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def poll(self, current=None):
        # def wait(self, current=None):
        # def cancel(self, current=None):
        # def kill(self, current=None):
        # def shutdown(self, current=None):
        # def registerCallback(self, cb, current=None):
        # def unregisterCallback(self, cb, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.grid._t_Process)

        __repr__ = __str__

    _M_omero.grid.ProcessPrx = Ice.createTempClass()
    class ProcessPrx(Ice.ObjectPrx):

        def poll(self, _ctx=None):
            return _M_omero.grid.Process._op_poll.invoke(self, ((), _ctx))

        def poll_async(self, _cb, _ctx=None):
            return _M_omero.grid.Process._op_poll.invokeAsync(self, (_cb, (), _ctx))

        def wait(self, _ctx=None):
            return _M_omero.grid.Process._op_wait.invoke(self, ((), _ctx))

        def wait_async(self, _cb, _ctx=None):
            return _M_omero.grid.Process._op_wait.invokeAsync(self, (_cb, (), _ctx))

        def cancel(self, _ctx=None):
            return _M_omero.grid.Process._op_cancel.invoke(self, ((), _ctx))

        def cancel_async(self, _cb, _ctx=None):
            return _M_omero.grid.Process._op_cancel.invokeAsync(self, (_cb, (), _ctx))

        def kill(self, _ctx=None):
            return _M_omero.grid.Process._op_kill.invoke(self, ((), _ctx))

        def kill_async(self, _cb, _ctx=None):
            return _M_omero.grid.Process._op_kill.invokeAsync(self, (_cb, (), _ctx))

        def shutdown(self, _ctx=None):
            return _M_omero.grid.Process._op_shutdown.invoke(self, ((), _ctx))

        def shutdown_async(self, _cb, _ctx=None):
            return _M_omero.grid.Process._op_shutdown.invokeAsync(self, (_cb, (), _ctx))

        def registerCallback(self, cb, _ctx=None):
            return _M_omero.grid.Process._op_registerCallback.invoke(self, ((cb, ), _ctx))

        def registerCallback_async(self, _cb, cb, _ctx=None):
            return _M_omero.grid.Process._op_registerCallback.invokeAsync(self, (_cb, (cb, ), _ctx))

        def unregisterCallback(self, cb, _ctx=None):
            return _M_omero.grid.Process._op_unregisterCallback.invoke(self, ((cb, ), _ctx))

        def unregisterCallback_async(self, _cb, cb, _ctx=None):
            return _M_omero.grid.Process._op_unregisterCallback.invokeAsync(self, (_cb, (cb, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.grid.ProcessPrx.ice_checkedCast(proxy, '::omero::grid::Process', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.grid.ProcessPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.grid._t_ProcessPrx = IcePy.defineProxy('::omero::grid::Process', ProcessPrx)

    _M_omero.grid._t_Process = IcePy.defineClass('::omero::grid::Process', Process, (), True, None, (), ())
    Process.ice_type = _M_omero.grid._t_Process

    Process._op_poll = IcePy.Operation('poll', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, (_M_omero._t_ServerError,))
    Process._op_wait = IcePy.Operation('wait', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, (_M_omero._t_ServerError,))
    Process._op_cancel = IcePy.Operation('cancel', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_bool, (_M_omero._t_ServerError,))
    Process._op_kill = IcePy.Operation('kill', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_bool, ())
    Process._op_shutdown = IcePy.Operation('shutdown', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Process._op_registerCallback = IcePy.Operation('registerCallback', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.grid._t_ProcessCallbackPrx),), (), None, (_M_omero._t_ServerError,))
    Process._op_unregisterCallback = IcePy.Operation('unregisterCallback', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.grid._t_ProcessCallbackPrx),), (), None, (_M_omero._t_ServerError,))

    _M_omero.grid.Process = Process
    del Process

    _M_omero.grid.ProcessPrx = ProcessPrx
    del ProcessPrx

if not _M_omero.grid.__dict__.has_key('ScriptProcess'):
    _M_omero.grid.ScriptProcess = Ice.createTempClass()
    class ScriptProcess(_M_omero.grid.Process):
        def __init__(self):
            if __builtin__.type(self) == _M_omero.grid.ScriptProcess:
                raise RuntimeError('omero.grid.ScriptProcess is an abstract class')

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::grid::Process', '::omero::grid::ScriptProcess')

        def ice_id(self, current=None):
            return '::omero::grid::ScriptProcess'

        def ice_staticId():
            return '::omero::grid::ScriptProcess'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getJob(self, current=None):
        # def getResults(self, waitSecs, current=None):
        # def setMessage(self, message, current=None):
        # def close(self, detach, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.grid._t_ScriptProcess)

        __repr__ = __str__

    _M_omero.grid.ScriptProcessPrx = Ice.createTempClass()
    class ScriptProcessPrx(_M_omero.grid.ProcessPrx):

        def getJob(self, _ctx=None):
            return _M_omero.grid.ScriptProcess._op_getJob.invoke(self, ((), _ctx))

        def getResults(self, waitSecs, _ctx=None):
            return _M_omero.grid.ScriptProcess._op_getResults.invoke(self, ((waitSecs, ), _ctx))

        def setMessage(self, message, _ctx=None):
            return _M_omero.grid.ScriptProcess._op_setMessage.invoke(self, ((message, ), _ctx))

        def close(self, detach, _ctx=None):
            return _M_omero.grid.ScriptProcess._op_close.invoke(self, ((detach, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.grid.ScriptProcessPrx.ice_checkedCast(proxy, '::omero::grid::ScriptProcess', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.grid.ScriptProcessPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.grid._t_ScriptProcessPrx = IcePy.defineProxy('::omero::grid::ScriptProcess', ScriptProcessPrx)

    _M_omero.grid._t_ScriptProcess = IcePy.defineClass('::omero::grid::ScriptProcess', ScriptProcess, (), True, None, (_M_omero.grid._t_Process,), ())
    ScriptProcess.ice_type = _M_omero.grid._t_ScriptProcess

    ScriptProcess._op_getJob = IcePy.Operation('getJob', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_ScriptJob, (_M_omero._t_ServerError,))
    ScriptProcess._op_getResults = IcePy.Operation('getResults', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_int),), (), _M_omero._t_RTypeDict, (_M_omero._t_ServerError,))
    ScriptProcess._op_setMessage = IcePy.Operation('setMessage', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_string),), (), IcePy._t_string, (_M_omero._t_ServerError,))
    ScriptProcess._op_close = IcePy.Operation('close', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_bool),), (), None, (_M_omero._t_ServerError,))

    _M_omero.grid.ScriptProcess = ScriptProcess
    del ScriptProcess

    _M_omero.grid.ScriptProcessPrx = ScriptProcessPrx
    del ScriptProcessPrx

if not _M_omero.grid.__dict__.has_key('ProcessorCallback'):
    _M_omero.grid.ProcessorCallback = Ice.createTempClass()
    class ProcessorCallback(Ice.Object):
        def __init__(self):
            if __builtin__.type(self) == _M_omero.grid.ProcessorCallback:
                raise RuntimeError('omero.grid.ProcessorCallback is an abstract class')

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::grid::ProcessorCallback')

        def ice_id(self, current=None):
            return '::omero::grid::ProcessorCallback'

        def ice_staticId():
            return '::omero::grid::ProcessorCallback'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def isAccepted(self, accepted, sessionUuid, processorConn, current=None):
        # def responseRunning(self, jobIds, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.grid._t_ProcessorCallback)

        __repr__ = __str__

    _M_omero.grid.ProcessorCallbackPrx = Ice.createTempClass()
    class ProcessorCallbackPrx(Ice.ObjectPrx):

        def isAccepted(self, accepted, sessionUuid, processorConn, _ctx=None):
            return _M_omero.grid.ProcessorCallback._op_isAccepted.invoke(self, ((accepted, sessionUuid, processorConn), _ctx))

        def responseRunning(self, jobIds, _ctx=None):
            return _M_omero.grid.ProcessorCallback._op_responseRunning.invoke(self, ((jobIds, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.grid.ProcessorCallbackPrx.ice_checkedCast(proxy, '::omero::grid::ProcessorCallback', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.grid.ProcessorCallbackPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.grid._t_ProcessorCallbackPrx = IcePy.defineProxy('::omero::grid::ProcessorCallback', ProcessorCallbackPrx)

    _M_omero.grid._t_ProcessorCallback = IcePy.defineClass('::omero::grid::ProcessorCallback', ProcessorCallback, (), True, None, (), ())
    ProcessorCallback.ice_type = _M_omero.grid._t_ProcessorCallback

    ProcessorCallback._op_isAccepted = IcePy.Operation('isAccepted', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_bool), ((), IcePy._t_string), ((), IcePy._t_string)), (), None, ())
    ProcessorCallback._op_responseRunning = IcePy.Operation('responseRunning', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.api._t_LongList),), (), None, ())

    _M_omero.grid.ProcessorCallback = ProcessorCallback
    del ProcessorCallback

    _M_omero.grid.ProcessorCallbackPrx = ProcessorCallbackPrx
    del ProcessorCallbackPrx

if not _M_omero.grid.__dict__.has_key('Processor'):
    _M_omero.grid.Processor = Ice.createTempClass()
    class Processor(Ice.Object):
        def __init__(self):
            if __builtin__.type(self) == _M_omero.grid.Processor:
                raise RuntimeError('omero.grid.Processor is an abstract class')

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::grid::Processor')

        def ice_id(self, current=None):
            return '::omero::grid::Processor'

        def ice_staticId():
            return '::omero::grid::Processor'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def willAccept(self, userContext, groupContext, scriptContext, cb, current=None):
        # def requestRunning(self, cb, current=None):
        # def parseJob(self, session, jobObject, current=None):
        # def processJob(self, session, params, jobObject, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.grid._t_Processor)

        __repr__ = __str__

    _M_omero.grid.ProcessorPrx = Ice.createTempClass()
    class ProcessorPrx(Ice.ObjectPrx):

        def willAccept(self, userContext, groupContext, scriptContext, cb, _ctx=None):
            return _M_omero.grid.Processor._op_willAccept.invoke(self, ((userContext, groupContext, scriptContext, cb), _ctx))

        def willAccept_async(self, _cb, userContext, groupContext, scriptContext, cb, _ctx=None):
            return _M_omero.grid.Processor._op_willAccept.invokeAsync(self, (_cb, (userContext, groupContext, scriptContext, cb), _ctx))

        def requestRunning(self, cb, _ctx=None):
            return _M_omero.grid.Processor._op_requestRunning.invoke(self, ((cb, ), _ctx))

        def requestRunning_async(self, _cb, cb, _ctx=None):
            return _M_omero.grid.Processor._op_requestRunning.invokeAsync(self, (_cb, (cb, ), _ctx))

        def parseJob(self, session, jobObject, _ctx=None):
            return _M_omero.grid.Processor._op_parseJob.invoke(self, ((session, jobObject), _ctx))

        def parseJob_async(self, _cb, session, jobObject, _ctx=None):
            return _M_omero.grid.Processor._op_parseJob.invokeAsync(self, (_cb, (session, jobObject), _ctx))

        def processJob(self, session, params, jobObject, _ctx=None):
            return _M_omero.grid.Processor._op_processJob.invoke(self, ((session, params, jobObject), _ctx))

        def processJob_async(self, _cb, session, params, jobObject, _ctx=None):
            return _M_omero.grid.Processor._op_processJob.invokeAsync(self, (_cb, (session, params, jobObject), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.grid.ProcessorPrx.ice_checkedCast(proxy, '::omero::grid::Processor', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.grid.ProcessorPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.grid._t_ProcessorPrx = IcePy.defineProxy('::omero::grid::Processor', ProcessorPrx)

    _M_omero.grid._t_Processor = IcePy.defineClass('::omero::grid::Processor', Processor, (), True, None, (), ())
    Processor.ice_type = _M_omero.grid._t_Processor

    Processor._op_willAccept = IcePy.Operation('willAccept', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Experimenter), ((), _M_omero.model._t_ExperimenterGroup), ((), _M_omero.model._t_Job), ((), _M_omero.grid._t_ProcessorCallbackPrx)), (), None, ())
    Processor._op_requestRunning = IcePy.Operation('requestRunning', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.grid._t_ProcessorCallbackPrx),), (), None, ())
    Processor._op_parseJob = IcePy.Operation('parseJob', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_string), ((), _M_omero.model._t_Job)), (), _M_omero.grid._t_JobParams, (_M_omero._t_ServerError,))
    Processor._op_processJob = IcePy.Operation('processJob', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_string), ((), _M_omero.grid._t_JobParams), ((), _M_omero.model._t_Job)), (), _M_omero.grid._t_ProcessPrx, (_M_omero._t_ServerError,))

    _M_omero.grid.Processor = Processor
    del Processor

    _M_omero.grid.ProcessorPrx = ProcessorPrx
    del ProcessorPrx

if not _M_omero.grid.__dict__.has_key('InteractiveProcessor'):
    _M_omero.grid.InteractiveProcessor = Ice.createTempClass()
    class InteractiveProcessor(Ice.Object):
        def __init__(self):
            if __builtin__.type(self) == _M_omero.grid.InteractiveProcessor:
                raise RuntimeError('omero.grid.InteractiveProcessor is an abstract class')

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::grid::InteractiveProcessor')

        def ice_id(self, current=None):
            return '::omero::grid::InteractiveProcessor'

        def ice_staticId():
            return '::omero::grid::InteractiveProcessor'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def expires(self, current=None):
        # def getJob(self, current=None):
        # def params(self, current=None):
        # def execute(self, inputs, current=None):
        # def getResults(self, proc, current=None):
        # def setDetach(self, detach, current=None):
        # def stop(self, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.grid._t_InteractiveProcessor)

        __repr__ = __str__

    _M_omero.grid.InteractiveProcessorPrx = Ice.createTempClass()
    class InteractiveProcessorPrx(Ice.ObjectPrx):

        def expires(self, _ctx=None):
            return _M_omero.grid.InteractiveProcessor._op_expires.invoke(self, ((), _ctx))

        def expires_async(self, _cb, _ctx=None):
            return _M_omero.grid.InteractiveProcessor._op_expires.invokeAsync(self, (_cb, (), _ctx))

        def getJob(self, _ctx=None):
            return _M_omero.grid.InteractiveProcessor._op_getJob.invoke(self, ((), _ctx))

        def getJob_async(self, _cb, _ctx=None):
            return _M_omero.grid.InteractiveProcessor._op_getJob.invokeAsync(self, (_cb, (), _ctx))

        def params(self, _ctx=None):
            return _M_omero.grid.InteractiveProcessor._op_params.invoke(self, ((), _ctx))

        def params_async(self, _cb, _ctx=None):
            return _M_omero.grid.InteractiveProcessor._op_params.invokeAsync(self, (_cb, (), _ctx))

        def execute(self, inputs, _ctx=None):
            return _M_omero.grid.InteractiveProcessor._op_execute.invoke(self, ((inputs, ), _ctx))

        def execute_async(self, _cb, inputs, _ctx=None):
            return _M_omero.grid.InteractiveProcessor._op_execute.invokeAsync(self, (_cb, (inputs, ), _ctx))

        def getResults(self, proc, _ctx=None):
            return _M_omero.grid.InteractiveProcessor._op_getResults.invoke(self, ((proc, ), _ctx))

        def getResults_async(self, _cb, proc, _ctx=None):
            return _M_omero.grid.InteractiveProcessor._op_getResults.invokeAsync(self, (_cb, (proc, ), _ctx))

        def setDetach(self, detach, _ctx=None):
            return _M_omero.grid.InteractiveProcessor._op_setDetach.invoke(self, ((detach, ), _ctx))

        def setDetach_async(self, _cb, detach, _ctx=None):
            return _M_omero.grid.InteractiveProcessor._op_setDetach.invokeAsync(self, (_cb, (detach, ), _ctx))

        def stop(self, _ctx=None):
            return _M_omero.grid.InteractiveProcessor._op_stop.invoke(self, ((), _ctx))

        def stop_async(self, _cb, _ctx=None):
            return _M_omero.grid.InteractiveProcessor._op_stop.invokeAsync(self, (_cb, (), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.grid.InteractiveProcessorPrx.ice_checkedCast(proxy, '::omero::grid::InteractiveProcessor', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.grid.InteractiveProcessorPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.grid._t_InteractiveProcessorPrx = IcePy.defineProxy('::omero::grid::InteractiveProcessor', InteractiveProcessorPrx)

    _M_omero.grid._t_InteractiveProcessor = IcePy.defineClass('::omero::grid::InteractiveProcessor', InteractiveProcessor, (), True, None, (), ())
    InteractiveProcessor.ice_type = _M_omero.grid._t_InteractiveProcessor

    InteractiveProcessor._op_expires = IcePy.Operation('expires', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_long, ())
    InteractiveProcessor._op_getJob = IcePy.Operation('getJob', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_Job, ())
    InteractiveProcessor._op_params = IcePy.Operation('params', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.grid._t_JobParams, (_M_omero._t_ServerError,))
    InteractiveProcessor._op_execute = IcePy.Operation('execute', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RMap),), (), _M_omero.grid._t_ProcessPrx, (_M_omero._t_ServerError,))
    InteractiveProcessor._op_getResults = IcePy.Operation('getResults', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.grid._t_ProcessPrx),), (), _M_omero._t_RMap, (_M_omero._t_ServerError,))
    InteractiveProcessor._op_setDetach = IcePy.Operation('setDetach', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_bool),), (), IcePy._t_bool, (_M_omero._t_ServerError,))
    InteractiveProcessor._op_stop = IcePy.Operation('stop', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, (_M_omero._t_ServerError,))

    _M_omero.grid.InteractiveProcessor = InteractiveProcessor
    del InteractiveProcessor

    _M_omero.grid.InteractiveProcessorPrx = InteractiveProcessorPrx
    del InteractiveProcessorPrx

if not _M_omero.grid.__dict__.has_key('_t_InteractiveProcessorList'):
    _M_omero.grid._t_InteractiveProcessorList = IcePy.defineSequence('::omero::grid::InteractiveProcessorList', (), _M_omero.grid._t_InteractiveProcessorPrx)

# End of module omero.grid

__name__ = 'omero'

# End of module omero
