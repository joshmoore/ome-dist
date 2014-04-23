# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `Repositories.ice'

import Ice, IcePy, __builtin__

if not Ice.__dict__.has_key("_struct_marker"):
    Ice._struct_marker = object()
import omero_ModelF_ice
import omero_ServicesF_ice
import omero_System_ice
import omero_Collections_ice
import omero_ServerErrors_ice
import omero_cmd_API_ice

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

if not _M_omero.grid.__dict__.has_key('RepositoryException'):
    _M_omero.grid.RepositoryException = Ice.createTempClass()
    class RepositoryException(_M_omero.ServerError):
        def __init__(self, serverStackTrace='', serverExceptionClass='', message=''):
            _M_omero.ServerError.__init__(self, serverStackTrace, serverExceptionClass, message)

        def ice_name(self):
            return 'omero::grid::RepositoryException'

        def __str__(self):
            return IcePy.stringifyException(self)

        __repr__ = __str__

    _M_omero.grid._t_RepositoryException = IcePy.defineException('::omero::grid::RepositoryException', RepositoryException, (), _M_omero._t_ServerError, ())
    RepositoryException.ice_type = _M_omero.grid._t_RepositoryException

    _M_omero.grid.RepositoryException = RepositoryException
    del RepositoryException

if not _M_omero.grid.__dict__.has_key('FileDeleteException'):
    _M_omero.grid.FileDeleteException = Ice.createTempClass()
    class FileDeleteException(_M_omero.grid.RepositoryException):
        def __init__(self, serverStackTrace='', serverExceptionClass='', message=''):
            _M_omero.grid.RepositoryException.__init__(self, serverStackTrace, serverExceptionClass, message)

        def ice_name(self):
            return 'omero::grid::FileDeleteException'

        def __str__(self):
            return IcePy.stringifyException(self)

        __repr__ = __str__

    _M_omero.grid._t_FileDeleteException = IcePy.defineException('::omero::grid::FileDeleteException', FileDeleteException, (), _M_omero.grid._t_RepositoryException, ())
    FileDeleteException.ice_type = _M_omero.grid._t_FileDeleteException

    _M_omero.grid.FileDeleteException = FileDeleteException
    del FileDeleteException

if not _M_omero.grid.__dict__.has_key('UnregisteredFileException'):
    _M_omero.grid.UnregisteredFileException = Ice.createTempClass()
    class UnregisteredFileException(_M_omero.grid.RepositoryException):
        def __init__(self, serverStackTrace='', serverExceptionClass='', message='', file=None):
            _M_omero.grid.RepositoryException.__init__(self, serverStackTrace, serverExceptionClass, message)
            self.file = file

        def ice_name(self):
            return 'omero::grid::UnregisteredFileException'

        def __str__(self):
            return IcePy.stringifyException(self)

        __repr__ = __str__

    _M_omero.grid._t_UnregisteredFileException = IcePy.defineException('::omero::grid::UnregisteredFileException', UnregisteredFileException, (), _M_omero.grid._t_RepositoryException, (('file', (), _M_omero.model._t_OriginalFile),))
    UnregisteredFileException.ice_type = _M_omero.grid._t_UnregisteredFileException

    _M_omero.grid.UnregisteredFileException = UnregisteredFileException
    del UnregisteredFileException

if not _M_omero.grid.__dict__.has_key('Repository'):
    _M_omero.grid.Repository = Ice.createTempClass()
    class Repository(Ice.Object):
        def __init__(self):
            if __builtin__.type(self) == _M_omero.grid.Repository:
                raise RuntimeError('omero.grid.Repository is an abstract class')

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::grid::Repository')

        def ice_id(self, current=None):
            return '::omero::grid::Repository'

        def ice_staticId():
            return '::omero::grid::Repository'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def root(self, current=None):
        # def mimetype(self, path, current=None):
        # def list(self, path, current=None):
        # def listFiles(self, path, current=None):
        # def register(self, path, mimetype, current=None):
        # def file(self, path, mode, current=None):
        # def pixels(self, path, current=None):
        # def fileById(self, id, current=None):
        # def fileExists(self, path, current=None):
        # def makeDir(self, path, parents, current=None):
        # def treeList(self, path, current=None):
        # def deletePaths(self, paths, recursively, force, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.grid._t_Repository)

        __repr__ = __str__

    _M_omero.grid.RepositoryPrx = Ice.createTempClass()
    class RepositoryPrx(Ice.ObjectPrx):

        def root(self, _ctx=None):
            return _M_omero.grid.Repository._op_root.invoke(self, ((), _ctx))

        def root_async(self, _cb, _ctx=None):
            return _M_omero.grid.Repository._op_root.invokeAsync(self, (_cb, (), _ctx))

        def mimetype(self, path, _ctx=None):
            return _M_omero.grid.Repository._op_mimetype.invoke(self, ((path, ), _ctx))

        def mimetype_async(self, _cb, path, _ctx=None):
            return _M_omero.grid.Repository._op_mimetype.invokeAsync(self, (_cb, (path, ), _ctx))

        def list(self, path, _ctx=None):
            return _M_omero.grid.Repository._op_list.invoke(self, ((path, ), _ctx))

        def list_async(self, _cb, path, _ctx=None):
            return _M_omero.grid.Repository._op_list.invokeAsync(self, (_cb, (path, ), _ctx))

        def listFiles(self, path, _ctx=None):
            return _M_omero.grid.Repository._op_listFiles.invoke(self, ((path, ), _ctx))

        def listFiles_async(self, _cb, path, _ctx=None):
            return _M_omero.grid.Repository._op_listFiles.invokeAsync(self, (_cb, (path, ), _ctx))

        def register(self, path, mimetype, _ctx=None):
            return _M_omero.grid.Repository._op_register.invoke(self, ((path, mimetype), _ctx))

        def register_async(self, _cb, path, mimetype, _ctx=None):
            return _M_omero.grid.Repository._op_register.invokeAsync(self, (_cb, (path, mimetype), _ctx))

        def file(self, path, mode, _ctx=None):
            return _M_omero.grid.Repository._op_file.invoke(self, ((path, mode), _ctx))

        def file_async(self, _cb, path, mode, _ctx=None):
            return _M_omero.grid.Repository._op_file.invokeAsync(self, (_cb, (path, mode), _ctx))

        def pixels(self, path, _ctx=None):
            return _M_omero.grid.Repository._op_pixels.invoke(self, ((path, ), _ctx))

        def pixels_async(self, _cb, path, _ctx=None):
            return _M_omero.grid.Repository._op_pixels.invokeAsync(self, (_cb, (path, ), _ctx))

        def fileById(self, id, _ctx=None):
            return _M_omero.grid.Repository._op_fileById.invoke(self, ((id, ), _ctx))

        def fileById_async(self, _cb, id, _ctx=None):
            return _M_omero.grid.Repository._op_fileById.invokeAsync(self, (_cb, (id, ), _ctx))

        def fileExists(self, path, _ctx=None):
            return _M_omero.grid.Repository._op_fileExists.invoke(self, ((path, ), _ctx))

        def fileExists_async(self, _cb, path, _ctx=None):
            return _M_omero.grid.Repository._op_fileExists.invokeAsync(self, (_cb, (path, ), _ctx))

        def makeDir(self, path, parents, _ctx=None):
            return _M_omero.grid.Repository._op_makeDir.invoke(self, ((path, parents), _ctx))

        def makeDir_async(self, _cb, path, parents, _ctx=None):
            return _M_omero.grid.Repository._op_makeDir.invokeAsync(self, (_cb, (path, parents), _ctx))

        def treeList(self, path, _ctx=None):
            return _M_omero.grid.Repository._op_treeList.invoke(self, ((path, ), _ctx))

        def treeList_async(self, _cb, path, _ctx=None):
            return _M_omero.grid.Repository._op_treeList.invokeAsync(self, (_cb, (path, ), _ctx))

        def deletePaths(self, paths, recursively, force, _ctx=None):
            return _M_omero.grid.Repository._op_deletePaths.invoke(self, ((paths, recursively, force), _ctx))

        def deletePaths_async(self, _cb, paths, recursively, force, _ctx=None):
            return _M_omero.grid.Repository._op_deletePaths.invokeAsync(self, (_cb, (paths, recursively, force), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.grid.RepositoryPrx.ice_checkedCast(proxy, '::omero::grid::Repository', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.grid.RepositoryPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.grid._t_RepositoryPrx = IcePy.defineProxy('::omero::grid::Repository', RepositoryPrx)

    _M_omero.grid._t_Repository = IcePy.defineClass('::omero::grid::Repository', Repository, (), True, None, (), ())
    Repository.ice_type = _M_omero.grid._t_Repository

    Repository._op_root = IcePy.Operation('root', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_OriginalFile, (_M_omero._t_ServerError,))
    Repository._op_mimetype = IcePy.Operation('mimetype', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_string),), (), IcePy._t_string, (_M_omero._t_ServerError,))
    Repository._op_list = IcePy.Operation('list', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_string),), (), _M_omero.api._t_StringSet, (_M_omero._t_ServerError,))
    Repository._op_listFiles = IcePy.Operation('listFiles', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_string),), (), _M_omero.api._t_OriginalFileList, (_M_omero._t_ServerError,))
    Repository._op_register = IcePy.Operation('register', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_string), ((), _M_omero._t_RString)), (), _M_omero.model._t_OriginalFile, (_M_omero._t_ServerError,))
    Repository._op_file = IcePy.Operation('file', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_string), ((), IcePy._t_string)), (), _M_omero.api._t_RawFileStorePrx, (_M_omero._t_ServerError,))
    Repository._op_pixels = IcePy.Operation('pixels', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_string),), (), _M_omero.api._t_RawPixelsStorePrx, (_M_omero._t_ServerError,))
    Repository._op_fileById = IcePy.Operation('fileById', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_long),), (), _M_omero.api._t_RawFileStorePrx, (_M_omero._t_ServerError,))
    Repository._op_fileExists = IcePy.Operation('fileExists', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_string),), (), IcePy._t_bool, (_M_omero._t_ServerError,))
    Repository._op_makeDir = IcePy.Operation('makeDir', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_string), ((), IcePy._t_bool)), (), None, (_M_omero._t_ServerError,))
    Repository._op_treeList = IcePy.Operation('treeList', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_string),), (), _M_omero._t_RMap, (_M_omero._t_ServerError,))
    Repository._op_deletePaths = IcePy.Operation('deletePaths', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.api._t_StringArray), ((), IcePy._t_bool), ((), IcePy._t_bool)), (), _M_omero.cmd._t_HandlePrx, (_M_omero._t_ServerError,))

    _M_omero.grid.Repository = Repository
    del Repository

    _M_omero.grid.RepositoryPrx = RepositoryPrx
    del RepositoryPrx

if not _M_omero.grid.__dict__.has_key('ImportLocation'):
    _M_omero.grid.ImportLocation = Ice.createTempClass()
    class ImportLocation(Ice.Object):
        def __init__(self, sharedPath='', omittedLevels=0, usedFiles=None, directory=None):
            self.sharedPath = sharedPath
            self.omittedLevels = omittedLevels
            self.usedFiles = usedFiles
            self.directory = directory

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::grid::ImportLocation')

        def ice_id(self, current=None):
            return '::omero::grid::ImportLocation'

        def ice_staticId():
            return '::omero::grid::ImportLocation'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero.grid._t_ImportLocation)

        __repr__ = __str__

    _M_omero.grid.ImportLocationPrx = Ice.createTempClass()
    class ImportLocationPrx(Ice.ObjectPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.grid.ImportLocationPrx.ice_checkedCast(proxy, '::omero::grid::ImportLocation', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.grid.ImportLocationPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.grid._t_ImportLocationPrx = IcePy.defineProxy('::omero::grid::ImportLocation', ImportLocationPrx)

    _M_omero.grid._t_ImportLocation = IcePy.declareClass('::omero::grid::ImportLocation')

    _M_omero.grid._t_ImportLocation = IcePy.defineClass('::omero::grid::ImportLocation', ImportLocation, (), False, None, (), (
        ('sharedPath', (), IcePy._t_string),
        ('omittedLevels', (), IcePy._t_int),
        ('usedFiles', (), _M_omero.api._t_StringSet),
        ('directory', (), _M_omero.model._t_OriginalFile)
    ))
    ImportLocation.ice_type = _M_omero.grid._t_ImportLocation

    _M_omero.grid.ImportLocation = ImportLocation
    del ImportLocation

    _M_omero.grid.ImportLocationPrx = ImportLocationPrx
    del ImportLocationPrx

if not _M_omero.grid.__dict__.has_key('ImportSettings'):
    _M_omero.grid.ImportSettings = Ice.createTempClass()
    class ImportSettings(Ice.Object):
        def __init__(self, userSpecifiedTarget=None, userSpecifiedName=None, userSpecifiedDescription=None, userSpecifiedPixels=None, userSpecifiedAnnotationList=None, doThumbnails=None, checksumAlgorithm=None):
            self.userSpecifiedTarget = userSpecifiedTarget
            self.userSpecifiedName = userSpecifiedName
            self.userSpecifiedDescription = userSpecifiedDescription
            self.userSpecifiedPixels = userSpecifiedPixels
            self.userSpecifiedAnnotationList = userSpecifiedAnnotationList
            self.doThumbnails = doThumbnails
            self.checksumAlgorithm = checksumAlgorithm

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::grid::ImportSettings')

        def ice_id(self, current=None):
            return '::omero::grid::ImportSettings'

        def ice_staticId():
            return '::omero::grid::ImportSettings'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero.grid._t_ImportSettings)

        __repr__ = __str__

    _M_omero.grid.ImportSettingsPrx = Ice.createTempClass()
    class ImportSettingsPrx(Ice.ObjectPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.grid.ImportSettingsPrx.ice_checkedCast(proxy, '::omero::grid::ImportSettings', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.grid.ImportSettingsPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.grid._t_ImportSettingsPrx = IcePy.defineProxy('::omero::grid::ImportSettings', ImportSettingsPrx)

    _M_omero.grid._t_ImportSettings = IcePy.declareClass('::omero::grid::ImportSettings')

    _M_omero.grid._t_ImportSettings = IcePy.defineClass('::omero::grid::ImportSettings', ImportSettings, (), False, None, (), (
        ('userSpecifiedTarget', (), _M_omero.model._t_IObject),
        ('userSpecifiedName', (), _M_omero._t_RString),
        ('userSpecifiedDescription', (), _M_omero._t_RString),
        ('userSpecifiedPixels', (), _M_omero.api._t_DoubleArray),
        ('userSpecifiedAnnotationList', (), _M_omero.api._t_AnnotationList),
        ('doThumbnails', (), _M_omero._t_RBool),
        ('checksumAlgorithm', (), _M_omero.model._t_ChecksumAlgorithm)
    ))
    ImportSettings.ice_type = _M_omero.grid._t_ImportSettings

    _M_omero.grid.ImportSettings = ImportSettings
    del ImportSettings

    _M_omero.grid.ImportSettingsPrx = ImportSettingsPrx
    del ImportSettingsPrx

if not _M_omero.grid.__dict__.has_key('ImportProcess'):
    _M_omero.grid.ImportProcess = Ice.createTempClass()
    class ImportProcess(_M_omero.api.StatefulServiceInterface):
        def __init__(self):
            if __builtin__.type(self) == _M_omero.grid.ImportProcess:
                raise RuntimeError('omero.grid.ImportProcess is an abstract class')

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::api::ServiceInterface', '::omero::api::StatefulServiceInterface', '::omero::grid::ImportProcess')

        def ice_id(self, current=None):
            return '::omero::grid::ImportProcess'

        def ice_staticId():
            return '::omero::grid::ImportProcess'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getUploader(self, i, current=None):
        # def verifyUpload(self, hash, current=None):
        # def getUploadOffset(self, i, current=None):
        # def getHandle(self, current=None):
        # def getImportSettings(self, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.grid._t_ImportProcess)

        __repr__ = __str__

    _M_omero.grid.ImportProcessPrx = Ice.createTempClass()
    class ImportProcessPrx(_M_omero.api.StatefulServiceInterfacePrx):

        def getUploader(self, i, _ctx=None):
            return _M_omero.grid.ImportProcess._op_getUploader.invoke(self, ((i, ), _ctx))

        def verifyUpload(self, hash, _ctx=None):
            return _M_omero.grid.ImportProcess._op_verifyUpload.invoke(self, ((hash, ), _ctx))

        def getUploadOffset(self, i, _ctx=None):
            return _M_omero.grid.ImportProcess._op_getUploadOffset.invoke(self, ((i, ), _ctx))

        def getHandle(self, _ctx=None):
            return _M_omero.grid.ImportProcess._op_getHandle.invoke(self, ((), _ctx))

        def getImportSettings(self, _ctx=None):
            return _M_omero.grid.ImportProcess._op_getImportSettings.invoke(self, ((), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.grid.ImportProcessPrx.ice_checkedCast(proxy, '::omero::grid::ImportProcess', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.grid.ImportProcessPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.grid._t_ImportProcessPrx = IcePy.defineProxy('::omero::grid::ImportProcess', ImportProcessPrx)

    _M_omero.grid._t_ImportProcess = IcePy.defineClass('::omero::grid::ImportProcess', ImportProcess, (), True, None, (_M_omero.api._t_StatefulServiceInterface,), ())
    ImportProcess.ice_type = _M_omero.grid._t_ImportProcess

    ImportProcess._op_getUploader = IcePy.Operation('getUploader', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_int),), (), _M_omero.api._t_RawFileStorePrx, (_M_omero._t_ServerError,))
    ImportProcess._op_verifyUpload = IcePy.Operation('verifyUpload', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.api._t_StringSet),), (), _M_omero.cmd._t_HandlePrx, (_M_omero._t_ServerError,))
    ImportProcess._op_getUploadOffset = IcePy.Operation('getUploadOffset', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_int),), (), IcePy._t_long, (_M_omero._t_ServerError,))
    ImportProcess._op_getHandle = IcePy.Operation('getHandle', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.cmd._t_HandlePrx, (_M_omero._t_ServerError,))
    ImportProcess._op_getImportSettings = IcePy.Operation('getImportSettings', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.grid._t_ImportSettings, ())

    _M_omero.grid.ImportProcess = ImportProcess
    del ImportProcess

    _M_omero.grid.ImportProcessPrx = ImportProcessPrx
    del ImportProcessPrx

if not _M_omero.grid.__dict__.has_key('_t_ImportProcessList'):
    _M_omero.grid._t_ImportProcessList = IcePy.defineSequence('::omero::grid::ImportProcessList', (), _M_omero.grid._t_ImportProcessPrx)

if not _M_omero.grid.__dict__.has_key('ImportRequest'):
    _M_omero.grid.ImportRequest = Ice.createTempClass()
    class ImportRequest(_M_omero.cmd.Request):
        def __init__(self, clientUuid='', repoUuid='', process=None, activity=None, settings=None, location=None, logFile=None):
            _M_omero.cmd.Request.__init__(self)
            self.clientUuid = clientUuid
            self.repoUuid = repoUuid
            self.process = process
            self.activity = activity
            self.settings = settings
            self.location = location
            self.logFile = logFile

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::cmd::Request', '::omero::grid::ImportRequest')

        def ice_id(self, current=None):
            return '::omero::grid::ImportRequest'

        def ice_staticId():
            return '::omero::grid::ImportRequest'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero.grid._t_ImportRequest)

        __repr__ = __str__

    _M_omero.grid.ImportRequestPrx = Ice.createTempClass()
    class ImportRequestPrx(_M_omero.cmd.RequestPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.grid.ImportRequestPrx.ice_checkedCast(proxy, '::omero::grid::ImportRequest', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.grid.ImportRequestPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.grid._t_ImportRequestPrx = IcePy.defineProxy('::omero::grid::ImportRequest', ImportRequestPrx)

    _M_omero.grid._t_ImportRequest = IcePy.declareClass('::omero::grid::ImportRequest')

    _M_omero.grid._t_ImportRequest = IcePy.defineClass('::omero::grid::ImportRequest', ImportRequest, (), False, _M_omero.cmd._t_Request, (), (
        ('clientUuid', (), IcePy._t_string),
        ('repoUuid', (), IcePy._t_string),
        ('process', (), _M_omero.grid._t_ImportProcessPrx),
        ('activity', (), _M_omero.model._t_FilesetJobLink),
        ('settings', (), _M_omero.grid._t_ImportSettings),
        ('location', (), _M_omero.grid._t_ImportLocation),
        ('logFile', (), _M_omero.model._t_OriginalFile)
    ))
    ImportRequest.ice_type = _M_omero.grid._t_ImportRequest

    _M_omero.grid.ImportRequest = ImportRequest
    del ImportRequest

    _M_omero.grid.ImportRequestPrx = ImportRequestPrx
    del ImportRequestPrx

if not _M_omero.grid.__dict__.has_key('ImportResponse'):
    _M_omero.grid.ImportResponse = Ice.createTempClass()
    class ImportResponse(_M_omero.cmd.Response):
        def __init__(self, pixels=None, objects=None):
            _M_omero.cmd.Response.__init__(self)
            self.pixels = pixels
            self.objects = objects

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::cmd::Response', '::omero::grid::ImportResponse')

        def ice_id(self, current=None):
            return '::omero::grid::ImportResponse'

        def ice_staticId():
            return '::omero::grid::ImportResponse'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero.grid._t_ImportResponse)

        __repr__ = __str__

    _M_omero.grid.ImportResponsePrx = Ice.createTempClass()
    class ImportResponsePrx(_M_omero.cmd.ResponsePrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.grid.ImportResponsePrx.ice_checkedCast(proxy, '::omero::grid::ImportResponse', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.grid.ImportResponsePrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.grid._t_ImportResponsePrx = IcePy.defineProxy('::omero::grid::ImportResponse', ImportResponsePrx)

    _M_omero.grid._t_ImportResponse = IcePy.declareClass('::omero::grid::ImportResponse')

    _M_omero.grid._t_ImportResponse = IcePy.defineClass('::omero::grid::ImportResponse', ImportResponse, (), False, _M_omero.cmd._t_Response, (), (
        ('pixels', (), _M_omero.api._t_PixelsList),
        ('objects', (), _M_omero.api._t_IObjectList)
    ))
    ImportResponse.ice_type = _M_omero.grid._t_ImportResponse

    _M_omero.grid.ImportResponse = ImportResponse
    del ImportResponse

    _M_omero.grid.ImportResponsePrx = ImportResponsePrx
    del ImportResponsePrx

if not _M_omero.grid.__dict__.has_key('ManagedRepository'):
    _M_omero.grid.ManagedRepository = Ice.createTempClass()
    class ManagedRepository(_M_omero.grid.Repository):
        def __init__(self):
            if __builtin__.type(self) == _M_omero.grid.ManagedRepository:
                raise RuntimeError('omero.grid.ManagedRepository is an abstract class')

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::grid::ManagedRepository', '::omero::grid::Repository')

        def ice_id(self, current=None):
            return '::omero::grid::ManagedRepository'

        def ice_staticId():
            return '::omero::grid::ManagedRepository'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def importFileset(self, fs, settings, current=None):
        # def importPaths(self, filePaths, current=None):
        # def listImports(self, current=None):
        # def listChecksumAlgorithms(self, current=None):
        # def suggestChecksumAlgorithm(self, supported, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.grid._t_ManagedRepository)

        __repr__ = __str__

    _M_omero.grid.ManagedRepositoryPrx = Ice.createTempClass()
    class ManagedRepositoryPrx(_M_omero.grid.RepositoryPrx):

        def importFileset(self, fs, settings, _ctx=None):
            return _M_omero.grid.ManagedRepository._op_importFileset.invoke(self, ((fs, settings), _ctx))

        def importFileset_async(self, _cb, fs, settings, _ctx=None):
            return _M_omero.grid.ManagedRepository._op_importFileset.invokeAsync(self, (_cb, (fs, settings), _ctx))

        def importPaths(self, filePaths, _ctx=None):
            return _M_omero.grid.ManagedRepository._op_importPaths.invoke(self, ((filePaths, ), _ctx))

        def importPaths_async(self, _cb, filePaths, _ctx=None):
            return _M_omero.grid.ManagedRepository._op_importPaths.invokeAsync(self, (_cb, (filePaths, ), _ctx))

        def listImports(self, _ctx=None):
            return _M_omero.grid.ManagedRepository._op_listImports.invoke(self, ((), _ctx))

        def listImports_async(self, _cb, _ctx=None):
            return _M_omero.grid.ManagedRepository._op_listImports.invokeAsync(self, (_cb, (), _ctx))

        def listChecksumAlgorithms(self, _ctx=None):
            return _M_omero.grid.ManagedRepository._op_listChecksumAlgorithms.invoke(self, ((), _ctx))

        def listChecksumAlgorithms_async(self, _cb, _ctx=None):
            return _M_omero.grid.ManagedRepository._op_listChecksumAlgorithms.invokeAsync(self, (_cb, (), _ctx))

        def suggestChecksumAlgorithm(self, supported, _ctx=None):
            return _M_omero.grid.ManagedRepository._op_suggestChecksumAlgorithm.invoke(self, ((supported, ), _ctx))

        def suggestChecksumAlgorithm_async(self, _cb, supported, _ctx=None):
            return _M_omero.grid.ManagedRepository._op_suggestChecksumAlgorithm.invokeAsync(self, (_cb, (supported, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.grid.ManagedRepositoryPrx.ice_checkedCast(proxy, '::omero::grid::ManagedRepository', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.grid.ManagedRepositoryPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.grid._t_ManagedRepositoryPrx = IcePy.defineProxy('::omero::grid::ManagedRepository', ManagedRepositoryPrx)

    _M_omero.grid._t_ManagedRepository = IcePy.defineClass('::omero::grid::ManagedRepository', ManagedRepository, (), True, None, (_M_omero.grid._t_Repository,), ())
    ManagedRepository.ice_type = _M_omero.grid._t_ManagedRepository

    ManagedRepository._op_importFileset = IcePy.Operation('importFileset', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Fileset), ((), _M_omero.grid._t_ImportSettings)), (), _M_omero.grid._t_ImportProcessPrx, (_M_omero._t_ServerError,))
    ManagedRepository._op_importPaths = IcePy.Operation('importPaths', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.api._t_StringSet),), (), _M_omero.grid._t_ImportProcessPrx, (_M_omero._t_ServerError,))
    ManagedRepository._op_listImports = IcePy.Operation('listImports', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.grid._t_ImportProcessList, (_M_omero._t_ServerError,))
    ManagedRepository._op_listChecksumAlgorithms = IcePy.Operation('listChecksumAlgorithms', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.api._t_ChecksumAlgorithmList, ())
    ManagedRepository._op_suggestChecksumAlgorithm = IcePy.Operation('suggestChecksumAlgorithm', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.api._t_ChecksumAlgorithmList),), (), _M_omero.model._t_ChecksumAlgorithm, ())

    _M_omero.grid.ManagedRepository = ManagedRepository
    del ManagedRepository

    _M_omero.grid.ManagedRepositoryPrx = ManagedRepositoryPrx
    del ManagedRepositoryPrx

if not _M_omero.grid.__dict__.has_key('RawAccessRequest'):
    _M_omero.grid.RawAccessRequest = Ice.createTempClass()
    class RawAccessRequest(_M_omero.cmd.Request):
        def __init__(self, repoUuid='', command='', args=None, path=''):
            _M_omero.cmd.Request.__init__(self)
            self.repoUuid = repoUuid
            self.command = command
            self.args = args
            self.path = path

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::cmd::Request', '::omero::grid::RawAccessRequest')

        def ice_id(self, current=None):
            return '::omero::grid::RawAccessRequest'

        def ice_staticId():
            return '::omero::grid::RawAccessRequest'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero.grid._t_RawAccessRequest)

        __repr__ = __str__

    _M_omero.grid.RawAccessRequestPrx = Ice.createTempClass()
    class RawAccessRequestPrx(_M_omero.cmd.RequestPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.grid.RawAccessRequestPrx.ice_checkedCast(proxy, '::omero::grid::RawAccessRequest', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.grid.RawAccessRequestPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.grid._t_RawAccessRequestPrx = IcePy.defineProxy('::omero::grid::RawAccessRequest', RawAccessRequestPrx)

    _M_omero.grid._t_RawAccessRequest = IcePy.defineClass('::omero::grid::RawAccessRequest', RawAccessRequest, (), False, _M_omero.cmd._t_Request, (), (
        ('repoUuid', (), IcePy._t_string),
        ('command', (), IcePy._t_string),
        ('args', (), _M_omero.api._t_StringSet),
        ('path', (), IcePy._t_string)
    ))
    RawAccessRequest.ice_type = _M_omero.grid._t_RawAccessRequest

    _M_omero.grid.RawAccessRequest = RawAccessRequest
    del RawAccessRequest

    _M_omero.grid.RawAccessRequestPrx = RawAccessRequestPrx
    del RawAccessRequestPrx

if not _M_omero.grid.__dict__.has_key('InternalRepository'):
    _M_omero.grid.InternalRepository = Ice.createTempClass()
    class InternalRepository(Ice.Object):
        def __init__(self):
            if __builtin__.type(self) == _M_omero.grid.InternalRepository:
                raise RuntimeError('omero.grid.InternalRepository is an abstract class')

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::grid::InternalRepository')

        def ice_id(self, current=None):
            return '::omero::grid::InternalRepository'

        def ice_staticId():
            return '::omero::grid::InternalRepository'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def createRawFileStore(self, file, current=None):
        # def createRawPixelsStore(self, file, current=None):
        # def createRenderingEngine(self, file, current=None):
        # def createThumbnailStore(self, file, current=None):
        # def getDescription(self, current=None):
        # def getProxy(self, current=None):
        # def rawAccess(self, raw, current=None):
        # def getFilePath(self, file, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.grid._t_InternalRepository)

        __repr__ = __str__

    _M_omero.grid.InternalRepositoryPrx = Ice.createTempClass()
    class InternalRepositoryPrx(Ice.ObjectPrx):

        def createRawFileStore(self, file, _ctx=None):
            return _M_omero.grid.InternalRepository._op_createRawFileStore.invoke(self, ((file, ), _ctx))

        def createRawFileStore_async(self, _cb, file, _ctx=None):
            return _M_omero.grid.InternalRepository._op_createRawFileStore.invokeAsync(self, (_cb, (file, ), _ctx))

        def createRawPixelsStore(self, file, _ctx=None):
            return _M_omero.grid.InternalRepository._op_createRawPixelsStore.invoke(self, ((file, ), _ctx))

        def createRawPixelsStore_async(self, _cb, file, _ctx=None):
            return _M_omero.grid.InternalRepository._op_createRawPixelsStore.invokeAsync(self, (_cb, (file, ), _ctx))

        def createRenderingEngine(self, file, _ctx=None):
            return _M_omero.grid.InternalRepository._op_createRenderingEngine.invoke(self, ((file, ), _ctx))

        def createRenderingEngine_async(self, _cb, file, _ctx=None):
            return _M_omero.grid.InternalRepository._op_createRenderingEngine.invokeAsync(self, (_cb, (file, ), _ctx))

        def createThumbnailStore(self, file, _ctx=None):
            return _M_omero.grid.InternalRepository._op_createThumbnailStore.invoke(self, ((file, ), _ctx))

        def createThumbnailStore_async(self, _cb, file, _ctx=None):
            return _M_omero.grid.InternalRepository._op_createThumbnailStore.invokeAsync(self, (_cb, (file, ), _ctx))

        def getDescription(self, _ctx=None):
            return _M_omero.grid.InternalRepository._op_getDescription.invoke(self, ((), _ctx))

        def getDescription_async(self, _cb, _ctx=None):
            return _M_omero.grid.InternalRepository._op_getDescription.invokeAsync(self, (_cb, (), _ctx))

        def getProxy(self, _ctx=None):
            return _M_omero.grid.InternalRepository._op_getProxy.invoke(self, ((), _ctx))

        def getProxy_async(self, _cb, _ctx=None):
            return _M_omero.grid.InternalRepository._op_getProxy.invokeAsync(self, (_cb, (), _ctx))

        def rawAccess(self, raw, _ctx=None):
            return _M_omero.grid.InternalRepository._op_rawAccess.invoke(self, ((raw, ), _ctx))

        def rawAccess_async(self, _cb, raw, _ctx=None):
            return _M_omero.grid.InternalRepository._op_rawAccess.invokeAsync(self, (_cb, (raw, ), _ctx))

        def getFilePath(self, file, _ctx=None):
            return _M_omero.grid.InternalRepository._op_getFilePath.invoke(self, ((file, ), _ctx))

        def getFilePath_async(self, _cb, file, _ctx=None):
            return _M_omero.grid.InternalRepository._op_getFilePath.invokeAsync(self, (_cb, (file, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.grid.InternalRepositoryPrx.ice_checkedCast(proxy, '::omero::grid::InternalRepository', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.grid.InternalRepositoryPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.grid._t_InternalRepositoryPrx = IcePy.defineProxy('::omero::grid::InternalRepository', InternalRepositoryPrx)

    _M_omero.grid._t_InternalRepository = IcePy.defineClass('::omero::grid::InternalRepository', InternalRepository, (), True, None, (), ())
    InternalRepository.ice_type = _M_omero.grid._t_InternalRepository

    InternalRepository._op_createRawFileStore = IcePy.Operation('createRawFileStore', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_OriginalFile),), (), _M_omero.api._t_RawFileStorePrx, (_M_omero._t_ServerError,))
    InternalRepository._op_createRawPixelsStore = IcePy.Operation('createRawPixelsStore', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_OriginalFile),), (), _M_omero.api._t_RawPixelsStorePrx, (_M_omero._t_ServerError,))
    InternalRepository._op_createRenderingEngine = IcePy.Operation('createRenderingEngine', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_OriginalFile),), (), _M_omero.api._t_RenderingEnginePrx, (_M_omero._t_ServerError,))
    InternalRepository._op_createThumbnailStore = IcePy.Operation('createThumbnailStore', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_OriginalFile),), (), _M_omero.api._t_ThumbnailStorePrx, (_M_omero._t_ServerError,))
    InternalRepository._op_getDescription = IcePy.Operation('getDescription', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_OriginalFile, (_M_omero._t_ServerError,))
    InternalRepository._op_getProxy = IcePy.Operation('getProxy', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.grid._t_RepositoryPrx, (_M_omero._t_ServerError,))
    InternalRepository._op_rawAccess = IcePy.Operation('rawAccess', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.grid._t_RawAccessRequest),), (), _M_omero.cmd._t_Response, (_M_omero._t_ServerError,))
    InternalRepository._op_getFilePath = IcePy.Operation('getFilePath', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_OriginalFile),), (), IcePy._t_string, (_M_omero._t_ServerError,))

    _M_omero.grid.InternalRepository = InternalRepository
    del InternalRepository

    _M_omero.grid.InternalRepositoryPrx = InternalRepositoryPrx
    del InternalRepositoryPrx

if not _M_omero.grid.__dict__.has_key('_t_RepositoryProxyList'):
    _M_omero.grid._t_RepositoryProxyList = IcePy.defineSequence('::omero::grid::RepositoryProxyList', (), _M_omero.grid._t_RepositoryPrx)

if not _M_omero.grid.__dict__.has_key('RepositoryMap'):
    _M_omero.grid.RepositoryMap = Ice.createTempClass()
    class RepositoryMap(object):
        def __init__(self, descriptions=None, proxies=None):
            self.descriptions = descriptions
            self.proxies = proxies

        def __hash__(self):
            _h = 0
            if self.descriptions:
                for _i0 in self.descriptions:
                    _h = 5 * _h + __builtin__.hash(_i0)
            if self.proxies:
                for _i1 in self.proxies:
                    _h = 5 * _h + __builtin__.hash(_i1)
            return _h % 0x7fffffff

        def __cmp__(self, other):
            if other == None:
                return 1
            if self.descriptions < other.descriptions:
                return -1
            elif self.descriptions > other.descriptions:
                return 1
            if self.proxies < other.proxies:
                return -1
            elif self.proxies > other.proxies:
                return 1
            return 0

        def __str__(self):
            return IcePy.stringify(self, _M_omero.grid._t_RepositoryMap)

        __repr__ = __str__

    _M_omero.grid._t_RepositoryMap = IcePy.defineStruct('::omero::grid::RepositoryMap', RepositoryMap, (), (
        ('descriptions', (), _M_omero.api._t_OriginalFileList),
        ('proxies', (), _M_omero.grid._t_RepositoryProxyList)
    ))

    _M_omero.grid.RepositoryMap = RepositoryMap
    del RepositoryMap

# End of module omero.grid

__name__ = 'omero'

# End of module omero
