# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `FS.ice'

import Ice, IcePy, __builtin__

if not Ice.__dict__.has_key("_struct_marker"):
    Ice._struct_marker = object()
import Ice_BuiltinSequences_ice
import omero_ServerErrors_ice

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

# Start of module omero
__name__ = 'omero'

# Start of module omero.grid
_M_omero.grid = Ice.openModule('omero.grid')
__name__ = 'omero.grid'

# Start of module omero.grid.monitors
_M_omero.grid.monitors = Ice.openModule('omero.grid.monitors')
__name__ = 'omero.grid.monitors'

if not _M_omero.grid.monitors.__dict__.has_key('EventType'):
    _M_omero.grid.monitors.EventType = Ice.createTempClass()
    class EventType(object):

        def __init__(self, val):
            assert(val >= 0 and val < 4)
            self.value = val

        def __str__(self):
            if self.value == 0:
                return 'Create'
            elif self.value == 1:
                return 'Modify'
            elif self.value == 2:
                return 'Delete'
            elif self.value == 3:
                return 'System'
            return None

        __repr__ = __str__

        def __hash__(self):
            return self.value

        def __cmp__(self, other):
            return cmp(self.value, other.value)

    EventType.Create = EventType(0)
    EventType.Modify = EventType(1)
    EventType.Delete = EventType(2)
    EventType.System = EventType(3)

    _M_omero.grid.monitors._t_EventType = IcePy.defineEnum('::omero::grid::monitors::EventType', EventType, (), (EventType.Create, EventType.Modify, EventType.Delete, EventType.System))

    _M_omero.grid.monitors.EventType = EventType
    del EventType

if not _M_omero.grid.monitors.__dict__.has_key('EventInfo'):
    _M_omero.grid.monitors.EventInfo = Ice.createTempClass()
    class EventInfo(object):
        def __init__(self, fileId='', type=_M_omero.grid.monitors.EventType.Create):
            self.fileId = fileId
            self.type = type

        def __hash__(self):
            _h = 0
            _h = 5 * _h + __builtin__.hash(self.fileId)
            _h = 5 * _h + __builtin__.hash(self.type)
            return _h % 0x7fffffff

        def __cmp__(self, other):
            if other == None:
                return 1
            if self.fileId < other.fileId:
                return -1
            elif self.fileId > other.fileId:
                return 1
            if self.type < other.type:
                return -1
            elif self.type > other.type:
                return 1
            return 0

        def __str__(self):
            return IcePy.stringify(self, _M_omero.grid.monitors._t_EventInfo)

        __repr__ = __str__

    _M_omero.grid.monitors._t_EventInfo = IcePy.defineStruct('::omero::grid::monitors::EventInfo', EventInfo, (), (
        ('fileId', (), IcePy._t_string),
        ('type', (), _M_omero.grid.monitors._t_EventType)
    ))

    _M_omero.grid.monitors.EventInfo = EventInfo
    del EventInfo

if not _M_omero.grid.monitors.__dict__.has_key('_t_EventList'):
    _M_omero.grid.monitors._t_EventList = IcePy.defineSequence('::omero::grid::monitors::EventList', (), _M_omero.grid.monitors._t_EventInfo)

if not _M_omero.grid.monitors.__dict__.has_key('MonitorClient'):
    _M_omero.grid.monitors.MonitorClient = Ice.createTempClass()
    class MonitorClient(Ice.Object):
        def __init__(self):
            if __builtin__.type(self) == _M_omero.grid.monitors.MonitorClient:
                raise RuntimeError('omero.grid.monitors.MonitorClient is an abstract class')

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::grid::monitors::MonitorClient')

        def ice_id(self, current=None):
            return '::omero::grid::monitors::MonitorClient'

        def ice_staticId():
            return '::omero::grid::monitors::MonitorClient'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def fsEventHappened(self, id, el, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.grid.monitors._t_MonitorClient)

        __repr__ = __str__

    _M_omero.grid.monitors.MonitorClientPrx = Ice.createTempClass()
    class MonitorClientPrx(Ice.ObjectPrx):

        def fsEventHappened(self, id, el, _ctx=None):
            return _M_omero.grid.monitors.MonitorClient._op_fsEventHappened.invoke(self, ((id, el), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.grid.monitors.MonitorClientPrx.ice_checkedCast(proxy, '::omero::grid::monitors::MonitorClient', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.grid.monitors.MonitorClientPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.grid.monitors._t_MonitorClientPrx = IcePy.defineProxy('::omero::grid::monitors::MonitorClient', MonitorClientPrx)

    _M_omero.grid.monitors._t_MonitorClient = IcePy.defineClass('::omero::grid::monitors::MonitorClient', MonitorClient, (), True, None, (), ())
    MonitorClient.ice_type = _M_omero.grid.monitors._t_MonitorClient

    MonitorClient._op_fsEventHappened = IcePy.Operation('fsEventHappened', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_string), ((), _M_omero.grid.monitors._t_EventList)), (), None, (_M_omero._t_ServerError,))

    _M_omero.grid.monitors.MonitorClient = MonitorClient
    del MonitorClient

    _M_omero.grid.monitors.MonitorClientPrx = MonitorClientPrx
    del MonitorClientPrx

if not _M_omero.grid.monitors.__dict__.has_key('MonitorType'):
    _M_omero.grid.monitors.MonitorType = Ice.createTempClass()
    class MonitorType(object):

        def __init__(self, val):
            assert(val >= 0 and val < 3)
            self.value = val

        def __str__(self):
            if self.value == 0:
                return 'Persistent'
            elif self.value == 1:
                return 'OneShot'
            elif self.value == 2:
                return 'Inactivity'
            return None

        __repr__ = __str__

        def __hash__(self):
            return self.value

        def __cmp__(self, other):
            return cmp(self.value, other.value)

    MonitorType.Persistent = MonitorType(0)
    MonitorType.OneShot = MonitorType(1)
    MonitorType.Inactivity = MonitorType(2)

    _M_omero.grid.monitors._t_MonitorType = IcePy.defineEnum('::omero::grid::monitors::MonitorType', MonitorType, (), (MonitorType.Persistent, MonitorType.OneShot, MonitorType.Inactivity))

    _M_omero.grid.monitors.MonitorType = MonitorType
    del MonitorType

if not _M_omero.grid.monitors.__dict__.has_key('FileType'):
    _M_omero.grid.monitors.FileType = Ice.createTempClass()
    class FileType(object):

        def __init__(self, val):
            assert(val >= 0 and val < 5)
            self.value = val

        def __str__(self):
            if self.value == 0:
                return 'File'
            elif self.value == 1:
                return 'Dir'
            elif self.value == 2:
                return 'Link'
            elif self.value == 3:
                return 'Mount'
            elif self.value == 4:
                return 'Unknown'
            return None

        __repr__ = __str__

        def __hash__(self):
            return self.value

        def __cmp__(self, other):
            return cmp(self.value, other.value)

    FileType.File = FileType(0)
    FileType.Dir = FileType(1)
    FileType.Link = FileType(2)
    FileType.Mount = FileType(3)
    FileType.Unknown = FileType(4)

    _M_omero.grid.monitors._t_FileType = IcePy.defineEnum('::omero::grid::monitors::FileType', FileType, (), (FileType.File, FileType.Dir, FileType.Link, FileType.Mount, FileType.Unknown))

    _M_omero.grid.monitors.FileType = FileType
    del FileType

if not _M_omero.grid.monitors.__dict__.has_key('PathMode'):
    _M_omero.grid.monitors.PathMode = Ice.createTempClass()
    class PathMode(object):

        def __init__(self, val):
            assert(val >= 0 and val < 3)
            self.value = val

        def __str__(self):
            if self.value == 0:
                return 'Flat'
            elif self.value == 1:
                return 'Recurse'
            elif self.value == 2:
                return 'Follow'
            return None

        __repr__ = __str__

        def __hash__(self):
            return self.value

        def __cmp__(self, other):
            return cmp(self.value, other.value)

    PathMode.Flat = PathMode(0)
    PathMode.Recurse = PathMode(1)
    PathMode.Follow = PathMode(2)

    _M_omero.grid.monitors._t_PathMode = IcePy.defineEnum('::omero::grid::monitors::PathMode', PathMode, (), (PathMode.Flat, PathMode.Recurse, PathMode.Follow))

    _M_omero.grid.monitors.PathMode = PathMode
    del PathMode

if not _M_omero.grid.monitors.__dict__.has_key('WatchEventType'):
    _M_omero.grid.monitors.WatchEventType = Ice.createTempClass()
    class WatchEventType(object):

        def __init__(self, val):
            assert(val >= 0 and val < 4)
            self.value = val

        def __str__(self):
            if self.value == 0:
                return 'Creation'
            elif self.value == 1:
                return 'Modification'
            elif self.value == 2:
                return 'Deletion'
            elif self.value == 3:
                return 'All'
            return None

        __repr__ = __str__

        def __hash__(self):
            return self.value

        def __cmp__(self, other):
            return cmp(self.value, other.value)

    WatchEventType.Creation = WatchEventType(0)
    WatchEventType.Modification = WatchEventType(1)
    WatchEventType.Deletion = WatchEventType(2)
    WatchEventType.All = WatchEventType(3)

    _M_omero.grid.monitors._t_WatchEventType = IcePy.defineEnum('::omero::grid::monitors::WatchEventType', WatchEventType, (), (WatchEventType.Creation, WatchEventType.Modification, WatchEventType.Deletion, WatchEventType.All))

    _M_omero.grid.monitors.WatchEventType = WatchEventType
    del WatchEventType

if not _M_omero.grid.monitors.__dict__.has_key('MonitorState'):
    _M_omero.grid.monitors.MonitorState = Ice.createTempClass()
    class MonitorState(object):

        def __init__(self, val):
            assert(val >= 0 and val < 2)
            self.value = val

        def __str__(self):
            if self.value == 0:
                return 'Stopped'
            elif self.value == 1:
                return 'Started'
            return None

        __repr__ = __str__

        def __hash__(self):
            return self.value

        def __cmp__(self, other):
            return cmp(self.value, other.value)

    MonitorState.Stopped = MonitorState(0)
    MonitorState.Started = MonitorState(1)

    _M_omero.grid.monitors._t_MonitorState = IcePy.defineEnum('::omero::grid::monitors::MonitorState', MonitorState, (), (MonitorState.Stopped, MonitorState.Started))

    _M_omero.grid.monitors.MonitorState = MonitorState
    del MonitorState

if not _M_omero.grid.monitors.__dict__.has_key('FileStats'):
    _M_omero.grid.monitors.FileStats = Ice.createTempClass()
    class FileStats(object):
        def __init__(self, baseName='', owner='', size=0, mTime=0.0, cTime=0.0, aTime=0.0, type=_M_omero.grid.monitors.FileType.File):
            self.baseName = baseName
            self.owner = owner
            self.size = size
            self.mTime = mTime
            self.cTime = cTime
            self.aTime = aTime
            self.type = type

        def __hash__(self):
            _h = 0
            _h = 5 * _h + __builtin__.hash(self.baseName)
            _h = 5 * _h + __builtin__.hash(self.owner)
            _h = 5 * _h + __builtin__.hash(self.size)
            _h = 5 * _h + __builtin__.hash(self.mTime)
            _h = 5 * _h + __builtin__.hash(self.cTime)
            _h = 5 * _h + __builtin__.hash(self.aTime)
            _h = 5 * _h + __builtin__.hash(self.type)
            return _h % 0x7fffffff

        def __cmp__(self, other):
            if other == None:
                return 1
            if self.baseName < other.baseName:
                return -1
            elif self.baseName > other.baseName:
                return 1
            if self.owner < other.owner:
                return -1
            elif self.owner > other.owner:
                return 1
            if self.size < other.size:
                return -1
            elif self.size > other.size:
                return 1
            if self.mTime < other.mTime:
                return -1
            elif self.mTime > other.mTime:
                return 1
            if self.cTime < other.cTime:
                return -1
            elif self.cTime > other.cTime:
                return 1
            if self.aTime < other.aTime:
                return -1
            elif self.aTime > other.aTime:
                return 1
            if self.type < other.type:
                return -1
            elif self.type > other.type:
                return 1
            return 0

        def __str__(self):
            return IcePy.stringify(self, _M_omero.grid.monitors._t_FileStats)

        __repr__ = __str__

    _M_omero.grid.monitors._t_FileStats = IcePy.defineStruct('::omero::grid::monitors::FileStats', FileStats, (), (
        ('baseName', (), IcePy._t_string),
        ('owner', (), IcePy._t_string),
        ('size', (), IcePy._t_long),
        ('mTime', (), IcePy._t_float),
        ('cTime', (), IcePy._t_float),
        ('aTime', (), IcePy._t_float),
        ('type', (), _M_omero.grid.monitors._t_FileType)
    ))

    _M_omero.grid.monitors.FileStats = FileStats
    del FileStats

if not _M_omero.grid.monitors.__dict__.has_key('_t_WatchEventList'):
    _M_omero.grid.monitors._t_WatchEventList = IcePy.defineSequence('::omero::grid::monitors::WatchEventList', (), _M_omero.grid.monitors._t_WatchEventType)

if not _M_omero.grid.monitors.__dict__.has_key('_t_FileStatsList'):
    _M_omero.grid.monitors._t_FileStatsList = IcePy.defineSequence('::omero::grid::monitors::FileStatsList', (), _M_omero.grid.monitors._t_FileStats)

if not _M_omero.grid.monitors.__dict__.has_key('FileServer'):
    _M_omero.grid.monitors.FileServer = Ice.createTempClass()
    class FileServer(Ice.Object):
        def __init__(self):
            if __builtin__.type(self) == _M_omero.grid.monitors.FileServer:
                raise RuntimeError('omero.grid.monitors.FileServer is an abstract class')

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::grid::monitors::FileServer')

        def ice_id(self, current=None):
            return '::omero::grid::monitors::FileServer'

        def ice_staticId():
            return '::omero::grid::monitors::FileServer'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getDirectory(self, absPath, filter, current=None):
        # def getBulkDirectory(self, absPath, filter, current=None):
        # def fileExists(self, fileId, current=None):
        # def getBaseName(self, fileId, current=None):
        # def getStats(self, fileId, current=None):
        # def getSize(self, fileId, current=None):
        # def getOwner(self, fileId, current=None):
        # def getCTime(self, fileId, current=None):
        # def getMTime(self, fileId, current=None):
        # def getATime(self, fileId, current=None):
        # def isDir(self, fileId, current=None):
        # def isFile(self, fileId, current=None):
        # def getSHA1(self, fileId, current=None):
        # def readBlock(self, fileId, offset, size, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.grid.monitors._t_FileServer)

        __repr__ = __str__

    _M_omero.grid.monitors.FileServerPrx = Ice.createTempClass()
    class FileServerPrx(Ice.ObjectPrx):

        def getDirectory(self, absPath, filter, _ctx=None):
            return _M_omero.grid.monitors.FileServer._op_getDirectory.invoke(self, ((absPath, filter), _ctx))

        def getBulkDirectory(self, absPath, filter, _ctx=None):
            return _M_omero.grid.monitors.FileServer._op_getBulkDirectory.invoke(self, ((absPath, filter), _ctx))

        def fileExists(self, fileId, _ctx=None):
            return _M_omero.grid.monitors.FileServer._op_fileExists.invoke(self, ((fileId, ), _ctx))

        def getBaseName(self, fileId, _ctx=None):
            return _M_omero.grid.monitors.FileServer._op_getBaseName.invoke(self, ((fileId, ), _ctx))

        def getStats(self, fileId, _ctx=None):
            return _M_omero.grid.monitors.FileServer._op_getStats.invoke(self, ((fileId, ), _ctx))

        def getSize(self, fileId, _ctx=None):
            return _M_omero.grid.monitors.FileServer._op_getSize.invoke(self, ((fileId, ), _ctx))

        def getOwner(self, fileId, _ctx=None):
            return _M_omero.grid.monitors.FileServer._op_getOwner.invoke(self, ((fileId, ), _ctx))

        def getCTime(self, fileId, _ctx=None):
            return _M_omero.grid.monitors.FileServer._op_getCTime.invoke(self, ((fileId, ), _ctx))

        def getMTime(self, fileId, _ctx=None):
            return _M_omero.grid.monitors.FileServer._op_getMTime.invoke(self, ((fileId, ), _ctx))

        def getATime(self, fileId, _ctx=None):
            return _M_omero.grid.monitors.FileServer._op_getATime.invoke(self, ((fileId, ), _ctx))

        def isDir(self, fileId, _ctx=None):
            return _M_omero.grid.monitors.FileServer._op_isDir.invoke(self, ((fileId, ), _ctx))

        def isFile(self, fileId, _ctx=None):
            return _M_omero.grid.monitors.FileServer._op_isFile.invoke(self, ((fileId, ), _ctx))

        def getSHA1(self, fileId, _ctx=None):
            return _M_omero.grid.monitors.FileServer._op_getSHA1.invoke(self, ((fileId, ), _ctx))

        def readBlock(self, fileId, offset, size, _ctx=None):
            return _M_omero.grid.monitors.FileServer._op_readBlock.invoke(self, ((fileId, offset, size), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.grid.monitors.FileServerPrx.ice_checkedCast(proxy, '::omero::grid::monitors::FileServer', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.grid.monitors.FileServerPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.grid.monitors._t_FileServerPrx = IcePy.defineProxy('::omero::grid::monitors::FileServer', FileServerPrx)

    _M_omero.grid.monitors._t_FileServer = IcePy.defineClass('::omero::grid::monitors::FileServer', FileServer, (), True, None, (), ())
    FileServer.ice_type = _M_omero.grid.monitors._t_FileServer

    FileServer._op_getDirectory = IcePy.Operation('getDirectory', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, False, (), (((), IcePy._t_string), ((), IcePy._t_string)), (), _M_Ice._t_StringSeq, (_M_omero._t_OmeroFSError,))
    FileServer._op_getBulkDirectory = IcePy.Operation('getBulkDirectory', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, False, (), (((), IcePy._t_string), ((), IcePy._t_string)), (), _M_omero.grid.monitors._t_FileStatsList, (_M_omero._t_OmeroFSError,))
    FileServer._op_fileExists = IcePy.Operation('fileExists', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, False, (), (((), IcePy._t_string),), (), IcePy._t_bool, (_M_omero._t_OmeroFSError,))
    FileServer._op_getBaseName = IcePy.Operation('getBaseName', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, False, (), (((), IcePy._t_string),), (), IcePy._t_string, (_M_omero._t_OmeroFSError,))
    FileServer._op_getStats = IcePy.Operation('getStats', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, False, (), (((), IcePy._t_string),), (), _M_omero.grid.monitors._t_FileStats, (_M_omero._t_OmeroFSError,))
    FileServer._op_getSize = IcePy.Operation('getSize', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, False, (), (((), IcePy._t_string),), (), IcePy._t_long, (_M_omero._t_OmeroFSError,))
    FileServer._op_getOwner = IcePy.Operation('getOwner', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, False, (), (((), IcePy._t_string),), (), IcePy._t_string, (_M_omero._t_OmeroFSError,))
    FileServer._op_getCTime = IcePy.Operation('getCTime', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, False, (), (((), IcePy._t_string),), (), IcePy._t_float, (_M_omero._t_OmeroFSError,))
    FileServer._op_getMTime = IcePy.Operation('getMTime', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, False, (), (((), IcePy._t_string),), (), IcePy._t_float, (_M_omero._t_OmeroFSError,))
    FileServer._op_getATime = IcePy.Operation('getATime', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, False, (), (((), IcePy._t_string),), (), IcePy._t_float, (_M_omero._t_OmeroFSError,))
    FileServer._op_isDir = IcePy.Operation('isDir', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, False, (), (((), IcePy._t_string),), (), IcePy._t_bool, (_M_omero._t_OmeroFSError,))
    FileServer._op_isFile = IcePy.Operation('isFile', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, False, (), (((), IcePy._t_string),), (), IcePy._t_bool, (_M_omero._t_OmeroFSError,))
    FileServer._op_getSHA1 = IcePy.Operation('getSHA1', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, False, (), (((), IcePy._t_string),), (), IcePy._t_string, (_M_omero._t_OmeroFSError,))
    FileServer._op_readBlock = IcePy.Operation('readBlock', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, False, (), (((), IcePy._t_string), ((), IcePy._t_long), ((), IcePy._t_int)), (), _M_Ice._t_ByteSeq, (_M_omero._t_OmeroFSError,))

    _M_omero.grid.monitors.FileServer = FileServer
    del FileServer

    _M_omero.grid.monitors.FileServerPrx = FileServerPrx
    del FileServerPrx

if not _M_omero.grid.monitors.__dict__.has_key('MonitorServer'):
    _M_omero.grid.monitors.MonitorServer = Ice.createTempClass()
    class MonitorServer(Ice.Object):
        def __init__(self):
            if __builtin__.type(self) == _M_omero.grid.monitors.MonitorServer:
                raise RuntimeError('omero.grid.monitors.MonitorServer is an abstract class')

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::grid::monitors::MonitorServer')

        def ice_id(self, current=None):
            return '::omero::grid::monitors::MonitorServer'

        def ice_staticId():
            return '::omero::grid::monitors::MonitorServer'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def createMonitor(self, mType, eTypes, pMode, pathString, whitelist, blacklist, timeout, blockSize, ignoreSysFiles, ignoreDirEvents, proxy, current=None):
        # def startMonitor(self, id, current=None):
        # def stopMonitor(self, id, current=None):
        # def destroyMonitor(self, id, current=None):
        # def getMonitorState(self, id, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.grid.monitors._t_MonitorServer)

        __repr__ = __str__

    _M_omero.grid.monitors.MonitorServerPrx = Ice.createTempClass()
    class MonitorServerPrx(Ice.ObjectPrx):

        def createMonitor(self, mType, eTypes, pMode, pathString, whitelist, blacklist, timeout, blockSize, ignoreSysFiles, ignoreDirEvents, proxy, _ctx=None):
            return _M_omero.grid.monitors.MonitorServer._op_createMonitor.invoke(self, ((mType, eTypes, pMode, pathString, whitelist, blacklist, timeout, blockSize, ignoreSysFiles, ignoreDirEvents, proxy), _ctx))

        def startMonitor(self, id, _ctx=None):
            return _M_omero.grid.monitors.MonitorServer._op_startMonitor.invoke(self, ((id, ), _ctx))

        def stopMonitor(self, id, _ctx=None):
            return _M_omero.grid.monitors.MonitorServer._op_stopMonitor.invoke(self, ((id, ), _ctx))

        def destroyMonitor(self, id, _ctx=None):
            return _M_omero.grid.monitors.MonitorServer._op_destroyMonitor.invoke(self, ((id, ), _ctx))

        def getMonitorState(self, id, _ctx=None):
            return _M_omero.grid.monitors.MonitorServer._op_getMonitorState.invoke(self, ((id, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.grid.monitors.MonitorServerPrx.ice_checkedCast(proxy, '::omero::grid::monitors::MonitorServer', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.grid.monitors.MonitorServerPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.grid.monitors._t_MonitorServerPrx = IcePy.defineProxy('::omero::grid::monitors::MonitorServer', MonitorServerPrx)

    _M_omero.grid.monitors._t_MonitorServer = IcePy.defineClass('::omero::grid::monitors::MonitorServer', MonitorServer, (), True, None, (), ())
    MonitorServer.ice_type = _M_omero.grid.monitors._t_MonitorServer

    MonitorServer._op_createMonitor = IcePy.Operation('createMonitor', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.grid.monitors._t_MonitorType), ((), _M_omero.grid.monitors._t_WatchEventList), ((), _M_omero.grid.monitors._t_PathMode), ((), IcePy._t_string), ((), _M_Ice._t_StringSeq), ((), _M_Ice._t_StringSeq), ((), IcePy._t_float), ((), IcePy._t_int), ((), IcePy._t_bool), ((), IcePy._t_bool), ((), _M_omero.grid.monitors._t_MonitorClientPrx)), (), IcePy._t_string, (_M_omero._t_OmeroFSError,))
    MonitorServer._op_startMonitor = IcePy.Operation('startMonitor', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, False, (), (((), IcePy._t_string),), (), None, (_M_omero._t_OmeroFSError,))
    MonitorServer._op_stopMonitor = IcePy.Operation('stopMonitor', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, False, (), (((), IcePy._t_string),), (), None, (_M_omero._t_OmeroFSError,))
    MonitorServer._op_destroyMonitor = IcePy.Operation('destroyMonitor', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, False, (), (((), IcePy._t_string),), (), None, (_M_omero._t_OmeroFSError,))
    MonitorServer._op_getMonitorState = IcePy.Operation('getMonitorState', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, False, (), (((), IcePy._t_string),), (), _M_omero.grid.monitors._t_MonitorState, (_M_omero._t_OmeroFSError,))

    _M_omero.grid.monitors.MonitorServer = MonitorServer
    del MonitorServer

    _M_omero.grid.monitors.MonitorServerPrx = MonitorServerPrx
    del MonitorServerPrx

# End of module omero.grid.monitors

__name__ = 'omero.grid'

# End of module omero.grid

__name__ = 'omero'

# End of module omero
