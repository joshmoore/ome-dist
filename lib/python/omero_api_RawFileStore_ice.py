# **********************************************************************
#
# Copyright (c) 2003-2013 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************
#
# Ice version 3.5.1
#
# <auto-generated>
#
# Generated from file `RawFileStore.ice'
#
# Warning: do not edit this file.
#
# </auto-generated>
#

import Ice, IcePy
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

if 'RawFileStore' not in _M_omero.api.__dict__:
    _M_omero.api.RawFileStore = Ice.createTempClass()
    class RawFileStore(_M_omero.api.StatefulServiceInterface):
        '''Raw file gateway which provides access to the OMERO file repository.

Note: methods on this service are protected by a "DOWNLOAD" restriction.

See also RawFileStore.html'''
        def __init__(self):
            if Ice.getType(self) == _M_omero.api.RawFileStore:
                raise RuntimeError('omero.api.RawFileStore is an abstract class')

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::api::RawFileStore', '::omero::api::ServiceInterface', '::omero::api::StatefulServiceInterface')

        def ice_id(self, current=None):
            return '::omero::api::RawFileStore'

        def ice_staticId():
            return '::omero::api::RawFileStore'
        ice_staticId = staticmethod(ice_staticId)

        def setFileId_async(self, _cb, fileId, current=None):
            '''This method manages the state of the service. This method
will throw a [omero::SecurityViolation] if for the current user
context either the file is not readable or a
[omero::constants::permissions:DOWNLOAD] restriction is in
place.'''
            pass

        def getFileId_async(self, _cb, current=None):
            '''Returns the current file id or null if none has been set.'''
            pass

        def read_async(self, _cb, position, length, current=None):
            pass

        def size_async(self, _cb, current=None):
            pass

        def truncate_async(self, _cb, length, current=None):
            pass

        def write_async(self, _cb, buf, position, length, current=None):
            pass

        def exists_async(self, _cb, current=None):
            pass

        def save_async(self, _cb, current=None):
            pass

        def __str__(self):
            return IcePy.stringify(self, _M_omero.api._t_RawFileStore)

        __repr__ = __str__

    _M_omero.api.RawFileStorePrx = Ice.createTempClass()
    class RawFileStorePrx(_M_omero.api.StatefulServiceInterfacePrx):

        '''This method manages the state of the service. This method
will throw a [omero::SecurityViolation] if for the current user
context either the file is not readable or a
[omero::constants::permissions:DOWNLOAD] restriction is in
place.'''
        def setFileId(self, fileId, _ctx=None):
            return _M_omero.api.RawFileStore._op_setFileId.invoke(self, ((fileId, ), _ctx))

        '''This method manages the state of the service. This method
will throw a [omero::SecurityViolation] if for the current user
context either the file is not readable or a
[omero::constants::permissions:DOWNLOAD] restriction is in
place.'''
        def begin_setFileId(self, fileId, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.api.RawFileStore._op_setFileId.begin(self, ((fileId, ), _response, _ex, _sent, _ctx))

        '''This method manages the state of the service. This method
will throw a [omero::SecurityViolation] if for the current user
context either the file is not readable or a
[omero::constants::permissions:DOWNLOAD] restriction is in
place.'''
        def end_setFileId(self, _r):
            return _M_omero.api.RawFileStore._op_setFileId.end(self, _r)

        '''This method manages the state of the service. This method
will throw a [omero::SecurityViolation] if for the current user
context either the file is not readable or a
[omero::constants::permissions:DOWNLOAD] restriction is in
place.'''
        def setFileId_async(self, _cb, fileId, _ctx=None):
            return _M_omero.api.RawFileStore._op_setFileId.invokeAsync(self, (_cb, (fileId, ), _ctx))

        '''Returns the current file id or null if none has been set.'''
        def getFileId(self, _ctx=None):
            return _M_omero.api.RawFileStore._op_getFileId.invoke(self, ((), _ctx))

        '''Returns the current file id or null if none has been set.'''
        def begin_getFileId(self, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.api.RawFileStore._op_getFileId.begin(self, ((), _response, _ex, _sent, _ctx))

        '''Returns the current file id or null if none has been set.'''
        def end_getFileId(self, _r):
            return _M_omero.api.RawFileStore._op_getFileId.end(self, _r)

        '''Returns the current file id or null if none has been set.'''
        def getFileId_async(self, _cb, _ctx=None):
            return _M_omero.api.RawFileStore._op_getFileId.invokeAsync(self, (_cb, (), _ctx))

        def read(self, position, length, _ctx=None):
            return _M_omero.api.RawFileStore._op_read.invoke(self, ((position, length), _ctx))

        def begin_read(self, position, length, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.api.RawFileStore._op_read.begin(self, ((position, length), _response, _ex, _sent, _ctx))

        def end_read(self, _r):
            return _M_omero.api.RawFileStore._op_read.end(self, _r)

        def read_async(self, _cb, position, length, _ctx=None):
            return _M_omero.api.RawFileStore._op_read.invokeAsync(self, (_cb, (position, length), _ctx))

        def size(self, _ctx=None):
            return _M_omero.api.RawFileStore._op_size.invoke(self, ((), _ctx))

        def begin_size(self, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.api.RawFileStore._op_size.begin(self, ((), _response, _ex, _sent, _ctx))

        def end_size(self, _r):
            return _M_omero.api.RawFileStore._op_size.end(self, _r)

        def size_async(self, _cb, _ctx=None):
            return _M_omero.api.RawFileStore._op_size.invokeAsync(self, (_cb, (), _ctx))

        def truncate(self, length, _ctx=None):
            return _M_omero.api.RawFileStore._op_truncate.invoke(self, ((length, ), _ctx))

        def begin_truncate(self, length, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.api.RawFileStore._op_truncate.begin(self, ((length, ), _response, _ex, _sent, _ctx))

        def end_truncate(self, _r):
            return _M_omero.api.RawFileStore._op_truncate.end(self, _r)

        def truncate_async(self, _cb, length, _ctx=None):
            return _M_omero.api.RawFileStore._op_truncate.invokeAsync(self, (_cb, (length, ), _ctx))

        def write(self, buf, position, length, _ctx=None):
            return _M_omero.api.RawFileStore._op_write.invoke(self, ((buf, position, length), _ctx))

        def begin_write(self, buf, position, length, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.api.RawFileStore._op_write.begin(self, ((buf, position, length), _response, _ex, _sent, _ctx))

        def end_write(self, _r):
            return _M_omero.api.RawFileStore._op_write.end(self, _r)

        def write_async(self, _cb, buf, position, length, _ctx=None):
            return _M_omero.api.RawFileStore._op_write.invokeAsync(self, (_cb, (buf, position, length), _ctx))

        def exists(self, _ctx=None):
            return _M_omero.api.RawFileStore._op_exists.invoke(self, ((), _ctx))

        def begin_exists(self, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.api.RawFileStore._op_exists.begin(self, ((), _response, _ex, _sent, _ctx))

        def end_exists(self, _r):
            return _M_omero.api.RawFileStore._op_exists.end(self, _r)

        def exists_async(self, _cb, _ctx=None):
            return _M_omero.api.RawFileStore._op_exists.invokeAsync(self, (_cb, (), _ctx))

        def save(self, _ctx=None):
            return _M_omero.api.RawFileStore._op_save.invoke(self, ((), _ctx))

        def begin_save(self, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.api.RawFileStore._op_save.begin(self, ((), _response, _ex, _sent, _ctx))

        def end_save(self, _r):
            return _M_omero.api.RawFileStore._op_save.end(self, _r)

        def save_async(self, _cb, _ctx=None):
            return _M_omero.api.RawFileStore._op_save.invokeAsync(self, (_cb, (), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.api.RawFileStorePrx.ice_checkedCast(proxy, '::omero::api::RawFileStore', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.api.RawFileStorePrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.api._t_RawFileStorePrx = IcePy.defineProxy('::omero::api::RawFileStore', RawFileStorePrx)

    _M_omero.api._t_RawFileStore = IcePy.defineClass('::omero::api::RawFileStore', RawFileStore, -1, (), True, False, None, (_M_omero.api._t_StatefulServiceInterface,), ())
    RawFileStore._ice_type = _M_omero.api._t_RawFileStore

    RawFileStore._op_setFileId = IcePy.Operation('setFileId', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, None, (), (((), IcePy._t_long, False, 0),), (), None, (_M_omero._t_ServerError,))
    RawFileStore._op_getFileId = IcePy.Operation('getFileId', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, None, (), (), (), ((), _M_omero._t_RLong, False, 0), (_M_omero._t_ServerError,))
    RawFileStore._op_read = IcePy.Operation('read', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, None, (), (((), IcePy._t_long, False, 0), ((), IcePy._t_int, False, 0)), (), ((), _M_Ice._t_ByteSeq, False, 0), (_M_omero._t_ServerError,))
    RawFileStore._op_size = IcePy.Operation('size', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, None, (), (), (), ((), IcePy._t_long, False, 0), (_M_omero._t_ServerError,))
    RawFileStore._op_truncate = IcePy.Operation('truncate', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, None, (), (((), IcePy._t_long, False, 0),), (), ((), IcePy._t_bool, False, 0), (_M_omero._t_ServerError,))
    RawFileStore._op_write = IcePy.Operation('write', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, None, (), (((), _M_Ice._t_ByteSeq, False, 0), ((), IcePy._t_long, False, 0), ((), IcePy._t_int, False, 0)), (), None, (_M_omero._t_ServerError,))
    RawFileStore._op_exists = IcePy.Operation('exists', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, None, (), (), (), ((), IcePy._t_bool, False, 0), (_M_omero._t_ServerError,))
    RawFileStore._op_save = IcePy.Operation('save', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, None, (), (), (), ((), _M_omero.model._t_OriginalFile, False, 0), (_M_omero._t_ServerError,))

    _M_omero.api.RawFileStore = RawFileStore
    del RawFileStore

    _M_omero.api.RawFileStorePrx = RawFileStorePrx
    del RawFileStorePrx

# End of module omero.api

__name__ = 'omero'

# End of module omero
