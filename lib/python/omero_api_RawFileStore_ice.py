# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `RawFileStore.ice'

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

if not _M_omero.api.__dict__.has_key('RawFileStore'):
    _M_omero.api.RawFileStore = Ice.createTempClass()
    class RawFileStore(_M_omero.api.StatefulServiceInterface):
        def __init__(self):
            if __builtin__.type(self) == _M_omero.api.RawFileStore:
                raise RuntimeError('omero.api.RawFileStore is an abstract class')

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::api::RawFileStore', '::omero::api::ServiceInterface', '::omero::api::StatefulServiceInterface')

        def ice_id(self, current=None):
            return '::omero::api::RawFileStore'

        def ice_staticId():
            return '::omero::api::RawFileStore'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getFileId_async(self, _cb, current=None):
        # def setFileId_async(self, _cb, fileId, current=None):
        # def read_async(self, _cb, position, length, current=None):
        # def size_async(self, _cb, current=None):
        # def truncate_async(self, _cb, length, current=None):
        # def write_async(self, _cb, buf, position, length, current=None):
        # def exists_async(self, _cb, current=None):
        # def save_async(self, _cb, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.api._t_RawFileStore)

        __repr__ = __str__

    _M_omero.api.RawFileStorePrx = Ice.createTempClass()
    class RawFileStorePrx(_M_omero.api.StatefulServiceInterfacePrx):

        def getFileId(self, _ctx=None):
            return _M_omero.api.RawFileStore._op_getFileId.invoke(self, ((), _ctx))

        def getFileId_async(self, _cb, _ctx=None):
            return _M_omero.api.RawFileStore._op_getFileId.invokeAsync(self, (_cb, (), _ctx))

        def setFileId(self, fileId, _ctx=None):
            return _M_omero.api.RawFileStore._op_setFileId.invoke(self, ((fileId, ), _ctx))

        def setFileId_async(self, _cb, fileId, _ctx=None):
            return _M_omero.api.RawFileStore._op_setFileId.invokeAsync(self, (_cb, (fileId, ), _ctx))

        def read(self, position, length, _ctx=None):
            return _M_omero.api.RawFileStore._op_read.invoke(self, ((position, length), _ctx))

        def read_async(self, _cb, position, length, _ctx=None):
            return _M_omero.api.RawFileStore._op_read.invokeAsync(self, (_cb, (position, length), _ctx))

        def size(self, _ctx=None):
            return _M_omero.api.RawFileStore._op_size.invoke(self, ((), _ctx))

        def size_async(self, _cb, _ctx=None):
            return _M_omero.api.RawFileStore._op_size.invokeAsync(self, (_cb, (), _ctx))

        def truncate(self, length, _ctx=None):
            return _M_omero.api.RawFileStore._op_truncate.invoke(self, ((length, ), _ctx))

        def truncate_async(self, _cb, length, _ctx=None):
            return _M_omero.api.RawFileStore._op_truncate.invokeAsync(self, (_cb, (length, ), _ctx))

        def write(self, buf, position, length, _ctx=None):
            return _M_omero.api.RawFileStore._op_write.invoke(self, ((buf, position, length), _ctx))

        def write_async(self, _cb, buf, position, length, _ctx=None):
            return _M_omero.api.RawFileStore._op_write.invokeAsync(self, (_cb, (buf, position, length), _ctx))

        def exists(self, _ctx=None):
            return _M_omero.api.RawFileStore._op_exists.invoke(self, ((), _ctx))

        def exists_async(self, _cb, _ctx=None):
            return _M_omero.api.RawFileStore._op_exists.invokeAsync(self, (_cb, (), _ctx))

        def save(self, _ctx=None):
            return _M_omero.api.RawFileStore._op_save.invoke(self, ((), _ctx))

        def save_async(self, _cb, _ctx=None):
            return _M_omero.api.RawFileStore._op_save.invokeAsync(self, (_cb, (), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.api.RawFileStorePrx.ice_checkedCast(proxy, '::omero::api::RawFileStore', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.api.RawFileStorePrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.api._t_RawFileStorePrx = IcePy.defineProxy('::omero::api::RawFileStore', RawFileStorePrx)

    _M_omero.api._t_RawFileStore = IcePy.defineClass('::omero::api::RawFileStore', RawFileStore, (), True, None, (_M_omero.api._t_StatefulServiceInterface,), ())
    RawFileStore.ice_type = _M_omero.api._t_RawFileStore

    RawFileStore._op_getFileId = IcePy.Operation('getFileId', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (), (), _M_omero._t_RLong, (_M_omero._t_ServerError,))
    RawFileStore._op_setFileId = IcePy.Operation('setFileId', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long),), (), None, (_M_omero._t_ServerError,))
    RawFileStore._op_read = IcePy.Operation('read', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), IcePy._t_long), ((), IcePy._t_int)), (), _M_Ice._t_ByteSeq, (_M_omero._t_ServerError,))
    RawFileStore._op_size = IcePy.Operation('size', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (), (), IcePy._t_long, (_M_omero._t_ServerError,))
    RawFileStore._op_truncate = IcePy.Operation('truncate', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), IcePy._t_long),), (), IcePy._t_bool, (_M_omero._t_ServerError,))
    RawFileStore._op_write = IcePy.Operation('write', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), _M_Ice._t_ByteSeq), ((), IcePy._t_long), ((), IcePy._t_int)), (), None, (_M_omero._t_ServerError,))
    RawFileStore._op_exists = IcePy.Operation('exists', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (), (), IcePy._t_bool, (_M_omero._t_ServerError,))
    RawFileStore._op_save = IcePy.Operation('save', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (), (), _M_omero.model._t_OriginalFile, (_M_omero._t_ServerError,))

    _M_omero.api.RawFileStore = RawFileStore
    del RawFileStore

    _M_omero.api.RawFileStorePrx = RawFileStorePrx
    del RawFileStorePrx

# End of module omero.api

__name__ = 'omero'

# End of module omero
