# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `IRepositoryInfo.ice'

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

if not _M_omero.api.__dict__.has_key('IRepositoryInfo'):
    _M_omero.api.IRepositoryInfo = Ice.createTempClass()
    class IRepositoryInfo(_M_omero.api.ServiceInterface):
        def __init__(self):
            if __builtin__.type(self) == _M_omero.api.IRepositoryInfo:
                raise RuntimeError('omero.api.IRepositoryInfo is an abstract class')

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::api::IRepositoryInfo', '::omero::api::ServiceInterface')

        def ice_id(self, current=None):
            return '::omero::api::IRepositoryInfo'

        def ice_staticId():
            return '::omero::api::IRepositoryInfo'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getUsedSpaceInKilobytes_async(self, _cb, current=None):
        # def getFreeSpaceInKilobytes_async(self, _cb, current=None):
        # def getUsageFraction_async(self, _cb, current=None):
        # def sanityCheckRepository_async(self, _cb, current=None):
        # def removeUnusedFiles_async(self, _cb, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.api._t_IRepositoryInfo)

        __repr__ = __str__

    _M_omero.api.IRepositoryInfoPrx = Ice.createTempClass()
    class IRepositoryInfoPrx(_M_omero.api.ServiceInterfacePrx):

        def getUsedSpaceInKilobytes(self, _ctx=None):
            return _M_omero.api.IRepositoryInfo._op_getUsedSpaceInKilobytes.invoke(self, ((), _ctx))

        def getUsedSpaceInKilobytes_async(self, _cb, _ctx=None):
            return _M_omero.api.IRepositoryInfo._op_getUsedSpaceInKilobytes.invokeAsync(self, (_cb, (), _ctx))

        def getFreeSpaceInKilobytes(self, _ctx=None):
            return _M_omero.api.IRepositoryInfo._op_getFreeSpaceInKilobytes.invoke(self, ((), _ctx))

        def getFreeSpaceInKilobytes_async(self, _cb, _ctx=None):
            return _M_omero.api.IRepositoryInfo._op_getFreeSpaceInKilobytes.invokeAsync(self, (_cb, (), _ctx))

        def getUsageFraction(self, _ctx=None):
            return _M_omero.api.IRepositoryInfo._op_getUsageFraction.invoke(self, ((), _ctx))

        def getUsageFraction_async(self, _cb, _ctx=None):
            return _M_omero.api.IRepositoryInfo._op_getUsageFraction.invokeAsync(self, (_cb, (), _ctx))

        def sanityCheckRepository(self, _ctx=None):
            return _M_omero.api.IRepositoryInfo._op_sanityCheckRepository.invoke(self, ((), _ctx))

        def sanityCheckRepository_async(self, _cb, _ctx=None):
            return _M_omero.api.IRepositoryInfo._op_sanityCheckRepository.invokeAsync(self, (_cb, (), _ctx))

        def removeUnusedFiles(self, _ctx=None):
            return _M_omero.api.IRepositoryInfo._op_removeUnusedFiles.invoke(self, ((), _ctx))

        def removeUnusedFiles_async(self, _cb, _ctx=None):
            return _M_omero.api.IRepositoryInfo._op_removeUnusedFiles.invokeAsync(self, (_cb, (), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.api.IRepositoryInfoPrx.ice_checkedCast(proxy, '::omero::api::IRepositoryInfo', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.api.IRepositoryInfoPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.api._t_IRepositoryInfoPrx = IcePy.defineProxy('::omero::api::IRepositoryInfo', IRepositoryInfoPrx)

    _M_omero.api._t_IRepositoryInfo = IcePy.defineClass('::omero::api::IRepositoryInfo', IRepositoryInfo, (), True, None, (_M_omero.api._t_ServiceInterface,), ())
    IRepositoryInfo.ice_type = _M_omero.api._t_IRepositoryInfo

    IRepositoryInfo._op_getUsedSpaceInKilobytes = IcePy.Operation('getUsedSpaceInKilobytes', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (), (), IcePy._t_long, (_M_omero._t_ServerError,))
    IRepositoryInfo._op_getFreeSpaceInKilobytes = IcePy.Operation('getFreeSpaceInKilobytes', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (), (), IcePy._t_long, (_M_omero._t_ServerError,))
    IRepositoryInfo._op_getUsageFraction = IcePy.Operation('getUsageFraction', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (), (), IcePy._t_double, (_M_omero._t_ServerError,))
    IRepositoryInfo._op_sanityCheckRepository = IcePy.Operation('sanityCheckRepository', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (), (), None, (_M_omero._t_ServerError,))
    IRepositoryInfo._op_removeUnusedFiles = IcePy.Operation('removeUnusedFiles', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (), (), None, (_M_omero._t_ServerError,))

    _M_omero.api.IRepositoryInfo = IRepositoryInfo
    del IRepositoryInfo

    _M_omero.api.IRepositoryInfoPrx = IRepositoryInfoPrx
    del IRepositoryInfoPrx

# End of module omero.api

__name__ = 'omero'

# End of module omero
