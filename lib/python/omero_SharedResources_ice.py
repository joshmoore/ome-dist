# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `SharedResources.ice'

import Ice, IcePy, __builtin__

if not Ice.__dict__.has_key("_struct_marker"):
    Ice._struct_marker = object()
import omero_Repositories_ice
import omero_Scripts_ice
import omero_Tables_ice

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

# Included module omero.cmd
_M_omero.cmd = Ice.openModule('omero.cmd')

# Start of module omero
__name__ = 'omero'

# Start of module omero.grid
__name__ = 'omero.grid'

if not _M_omero.grid.__dict__.has_key('SharedResources'):
    _M_omero.grid.SharedResources = Ice.createTempClass()
    class SharedResources(Ice.Object):
        def __init__(self):
            if __builtin__.type(self) == _M_omero.grid.SharedResources:
                raise RuntimeError('omero.grid.SharedResources is an abstract class')

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::grid::SharedResources')

        def ice_id(self, current=None):
            return '::omero::grid::SharedResources'

        def ice_staticId():
            return '::omero::grid::SharedResources'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def acquireProcessor(self, job, seconds, current=None):
        # def addProcessor(self, proc, current=None):
        # def removeProcessor(self, proc, current=None):
        # def repositories(self, current=None):
        # def getScriptRepository(self, current=None):
        # def areTablesEnabled(self, current=None):
        # def newTable(self, repoId, path, current=None):
        # def openTable(self, file, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.grid._t_SharedResources)

        __repr__ = __str__

    _M_omero.grid.SharedResourcesPrx = Ice.createTempClass()
    class SharedResourcesPrx(Ice.ObjectPrx):

        def acquireProcessor(self, job, seconds, _ctx=None):
            return _M_omero.grid.SharedResources._op_acquireProcessor.invoke(self, ((job, seconds), _ctx))

        def addProcessor(self, proc, _ctx=None):
            return _M_omero.grid.SharedResources._op_addProcessor.invoke(self, ((proc, ), _ctx))

        def removeProcessor(self, proc, _ctx=None):
            return _M_omero.grid.SharedResources._op_removeProcessor.invoke(self, ((proc, ), _ctx))

        def repositories(self, _ctx=None):
            return _M_omero.grid.SharedResources._op_repositories.invoke(self, ((), _ctx))

        def getScriptRepository(self, _ctx=None):
            return _M_omero.grid.SharedResources._op_getScriptRepository.invoke(self, ((), _ctx))

        def areTablesEnabled(self, _ctx=None):
            return _M_omero.grid.SharedResources._op_areTablesEnabled.invoke(self, ((), _ctx))

        def newTable(self, repoId, path, _ctx=None):
            return _M_omero.grid.SharedResources._op_newTable.invoke(self, ((repoId, path), _ctx))

        def openTable(self, file, _ctx=None):
            return _M_omero.grid.SharedResources._op_openTable.invoke(self, ((file, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.grid.SharedResourcesPrx.ice_checkedCast(proxy, '::omero::grid::SharedResources', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.grid.SharedResourcesPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.grid._t_SharedResourcesPrx = IcePy.defineProxy('::omero::grid::SharedResources', SharedResourcesPrx)

    _M_omero.grid._t_SharedResources = IcePy.defineClass('::omero::grid::SharedResources', SharedResources, (), True, None, (), ())
    SharedResources.ice_type = _M_omero.grid._t_SharedResources

    SharedResources._op_acquireProcessor = IcePy.Operation('acquireProcessor', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Job), ((), IcePy._t_int)), (), _M_omero.grid._t_InteractiveProcessorPrx, (_M_omero._t_ServerError,))
    SharedResources._op_addProcessor = IcePy.Operation('addProcessor', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.grid._t_ProcessorPrx),), (), None, (_M_omero._t_ServerError,))
    SharedResources._op_removeProcessor = IcePy.Operation('removeProcessor', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.grid._t_ProcessorPrx),), (), None, (_M_omero._t_ServerError,))
    SharedResources._op_repositories = IcePy.Operation('repositories', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.grid._t_RepositoryMap, (_M_omero._t_ServerError,))
    SharedResources._op_getScriptRepository = IcePy.Operation('getScriptRepository', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.grid._t_RepositoryPrx, (_M_omero._t_ServerError,))
    SharedResources._op_areTablesEnabled = IcePy.Operation('areTablesEnabled', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_bool, (_M_omero._t_ServerError,))
    SharedResources._op_newTable = IcePy.Operation('newTable', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_long), ((), IcePy._t_string)), (), _M_omero.grid._t_TablePrx, (_M_omero._t_ServerError,))
    SharedResources._op_openTable = IcePy.Operation('openTable', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_OriginalFile),), (), _M_omero.grid._t_TablePrx, (_M_omero._t_ServerError,))

    _M_omero.grid.SharedResources = SharedResources
    del SharedResources

    _M_omero.grid.SharedResourcesPrx = SharedResourcesPrx
    del SharedResourcesPrx

# End of module omero.grid

__name__ = 'omero'

# End of module omero
