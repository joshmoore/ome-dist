# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `IDelete.ice'

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

# Start of module omero.api.delete
_M_omero.api.delete = Ice.openModule('omero.api.delete')
__name__ = 'omero.api.delete'

_M_omero.api.delete.ORPHAN = "ORPHAN"

_M_omero.api.delete.REAP = "REAP"

_M_omero.api.delete.SOFT = "SOFT"

_M_omero.api.delete.HARD = "HARD"

if not _M_omero.api.delete.__dict__.has_key('DeleteCommand'):
    _M_omero.api.delete.DeleteCommand = Ice.createTempClass()
    class DeleteCommand(object):
        def __init__(self, type='', id=0, options=None):
            self.type = type
            self.id = id
            self.options = options

        def __hash__(self):
            _h = 0
            _h = 5 * _h + __builtin__.hash(self.type)
            _h = 5 * _h + __builtin__.hash(self.id)
            if self.options:
                for _i0 in self.options:
                    _h = 5 * _h + __builtin__.hash(_i0)
                    _h = 5 * _h + __builtin__.hash(self.options[_i0])
            return _h % 0x7fffffff

        def __cmp__(self, other):
            if other == None:
                return 1
            if self.type < other.type:
                return -1
            elif self.type > other.type:
                return 1
            if self.id < other.id:
                return -1
            elif self.id > other.id:
                return 1
            if self.options < other.options:
                return -1
            elif self.options > other.options:
                return 1
            return 0

        def __str__(self):
            return IcePy.stringify(self, _M_omero.api.delete._t_DeleteCommand)

        __repr__ = __str__

    _M_omero.api.delete._t_DeleteCommand = IcePy.defineStruct('::omero::api::delete::DeleteCommand', DeleteCommand, (), (
        ('type', (), IcePy._t_string),
        ('id', (), IcePy._t_long),
        ('options', (), _M_omero.api._t_StringStringMap)
    ))

    _M_omero.api.delete.DeleteCommand = DeleteCommand
    del DeleteCommand

if not _M_omero.api.delete.__dict__.has_key('_t_DeleteCommands'):
    _M_omero.api.delete._t_DeleteCommands = IcePy.defineSequence('::omero::api::delete::DeleteCommands', (), _M_omero.api.delete._t_DeleteCommand)

if not _M_omero.api.delete.__dict__.has_key('DeleteReport'):
    _M_omero.api.delete.DeleteReport = Ice.createTempClass()
    class DeleteReport(Ice.Object):
        def __init__(self, command=Ice._struct_marker, error='', warning='', undeletedFiles=None, steps=0, scheduledDeletes=0, actualDeletes=0, start=0, stepStarts=None, stepStops=None, stop=0):
            if command is Ice._struct_marker:
                self.command = _M_omero.api.delete.DeleteCommand()
            else:
                self.command = command
            self.error = error
            self.warning = warning
            self.undeletedFiles = undeletedFiles
            self.steps = steps
            self.scheduledDeletes = scheduledDeletes
            self.actualDeletes = actualDeletes
            self.start = start
            self.stepStarts = stepStarts
            self.stepStops = stepStops
            self.stop = stop

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::api::delete::DeleteReport')

        def ice_id(self, current=None):
            return '::omero::api::delete::DeleteReport'

        def ice_staticId():
            return '::omero::api::delete::DeleteReport'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero.api.delete._t_DeleteReport)

        __repr__ = __str__

    _M_omero.api.delete.DeleteReportPrx = Ice.createTempClass()
    class DeleteReportPrx(Ice.ObjectPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.api.delete.DeleteReportPrx.ice_checkedCast(proxy, '::omero::api::delete::DeleteReport', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.api.delete.DeleteReportPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.api.delete._t_DeleteReportPrx = IcePy.defineProxy('::omero::api::delete::DeleteReport', DeleteReportPrx)

    _M_omero.api.delete._t_DeleteReport = IcePy.defineClass('::omero::api::delete::DeleteReport', DeleteReport, (), False, None, (), (
        ('command', (), _M_omero.api.delete._t_DeleteCommand),
        ('error', (), IcePy._t_string),
        ('warning', (), IcePy._t_string),
        ('undeletedFiles', (), _M_omero.api._t_IdListMap),
        ('steps', (), IcePy._t_int),
        ('scheduledDeletes', (), IcePy._t_long),
        ('actualDeletes', (), IcePy._t_long),
        ('start', (), IcePy._t_long),
        ('stepStarts', (), _M_omero.api._t_LongArray),
        ('stepStops', (), _M_omero.api._t_LongArray),
        ('stop', (), IcePy._t_long)
    ))
    DeleteReport.ice_type = _M_omero.api.delete._t_DeleteReport

    _M_omero.api.delete.DeleteReport = DeleteReport
    del DeleteReport

    _M_omero.api.delete.DeleteReportPrx = DeleteReportPrx
    del DeleteReportPrx

if not _M_omero.api.delete.__dict__.has_key('_t_DeleteReports'):
    _M_omero.api.delete._t_DeleteReports = IcePy.defineSequence('::omero::api::delete::DeleteReports', (), _M_omero.api.delete._t_DeleteReport)

if not _M_omero.api.delete.__dict__.has_key('DeleteHandle'):
    _M_omero.api.delete.DeleteHandle = Ice.createTempClass()
    class DeleteHandle(Ice.Object):
        def __init__(self):
            if __builtin__.type(self) == _M_omero.api.delete.DeleteHandle:
                raise RuntimeError('omero.api.delete.DeleteHandle is an abstract class')

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::api::delete::DeleteHandle')

        def ice_id(self, current=None):
            return '::omero::api::delete::DeleteHandle'

        def ice_staticId():
            return '::omero::api::delete::DeleteHandle'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def commands(self, current=None):
        # def report(self, current=None):
        # def finished(self, current=None):
        # def errors(self, current=None):
        # def cancel(self, current=None):
        # def close(self, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.api.delete._t_DeleteHandle)

        __repr__ = __str__

    _M_omero.api.delete.DeleteHandlePrx = Ice.createTempClass()
    class DeleteHandlePrx(Ice.ObjectPrx):

        def commands(self, _ctx=None):
            return _M_omero.api.delete.DeleteHandle._op_commands.invoke(self, ((), _ctx))

        def report(self, _ctx=None):
            return _M_omero.api.delete.DeleteHandle._op_report.invoke(self, ((), _ctx))

        def finished(self, _ctx=None):
            return _M_omero.api.delete.DeleteHandle._op_finished.invoke(self, ((), _ctx))

        def errors(self, _ctx=None):
            return _M_omero.api.delete.DeleteHandle._op_errors.invoke(self, ((), _ctx))

        def cancel(self, _ctx=None):
            return _M_omero.api.delete.DeleteHandle._op_cancel.invoke(self, ((), _ctx))

        def close(self, _ctx=None):
            return _M_omero.api.delete.DeleteHandle._op_close.invoke(self, ((), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.api.delete.DeleteHandlePrx.ice_checkedCast(proxy, '::omero::api::delete::DeleteHandle', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.api.delete.DeleteHandlePrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.api.delete._t_DeleteHandlePrx = IcePy.defineProxy('::omero::api::delete::DeleteHandle', DeleteHandlePrx)

    _M_omero.api.delete._t_DeleteHandle = IcePy.defineClass('::omero::api::delete::DeleteHandle', DeleteHandle, (), True, None, (), ())
    DeleteHandle.ice_type = _M_omero.api.delete._t_DeleteHandle

    DeleteHandle._op_commands = IcePy.Operation('commands', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.api.delete._t_DeleteCommands, (_M_omero._t_ServerError,))
    DeleteHandle._op_commands.deprecate(" use omero::cmd::Handle instead")
    DeleteHandle._op_report = IcePy.Operation('report', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.api.delete._t_DeleteReports, (_M_omero._t_ServerError,))
    DeleteHandle._op_report.deprecate(" use omero::cmd::Handle instead")
    DeleteHandle._op_finished = IcePy.Operation('finished', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_bool, (_M_omero._t_ServerError,))
    DeleteHandle._op_finished.deprecate(" use omero::cmd::Handle instead")
    DeleteHandle._op_errors = IcePy.Operation('errors', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, (_M_omero._t_ServerError,))
    DeleteHandle._op_errors.deprecate(" use omero::cmd::Handle instead")
    DeleteHandle._op_cancel = IcePy.Operation('cancel', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_bool, (_M_omero._t_ServerError,))
    DeleteHandle._op_cancel.deprecate(" use omero::cmd::Handle instead")
    DeleteHandle._op_close = IcePy.Operation('close', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, (_M_omero._t_ServerError,))
    DeleteHandle._op_close.deprecate(" use omero::cmd::Handle instead")

    _M_omero.api.delete.DeleteHandle = DeleteHandle
    del DeleteHandle

    _M_omero.api.delete.DeleteHandlePrx = DeleteHandlePrx
    del DeleteHandlePrx

# End of module omero.api.delete

__name__ = 'omero.api'

if not _M_omero.api.__dict__.has_key('IDelete'):
    _M_omero.api.IDelete = Ice.createTempClass()
    class IDelete(_M_omero.api.ServiceInterface):
        def __init__(self):
            if __builtin__.type(self) == _M_omero.api.IDelete:
                raise RuntimeError('omero.api.IDelete is an abstract class')

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::api::IDelete', '::omero::api::ServiceInterface')

        def ice_id(self, current=None):
            return '::omero::api::IDelete'

        def ice_staticId():
            return '::omero::api::IDelete'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def checkImageDelete_async(self, _cb, id, force, current=None):
        # def previewImageDelete_async(self, _cb, id, force, current=None):
        # def deleteImage_async(self, _cb, id, force, current=None):
        # def deleteImages_async(self, _cb, ids, force, current=None):
        # def deleteImagesByDataset_async(self, _cb, datasetId, force, current=None):
        # def deleteSettings_async(self, _cb, imageId, current=None):
        # def deletePlate_async(self, _cb, plateId, current=None):
        # def availableCommands_async(self, _cb, current=None):
        # def queueDelete_async(self, _cb, commands, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.api._t_IDelete)

        __repr__ = __str__

    _M_omero.api.IDeletePrx = Ice.createTempClass()
    class IDeletePrx(_M_omero.api.ServiceInterfacePrx):

        def checkImageDelete(self, id, force, _ctx=None):
            return _M_omero.api.IDelete._op_checkImageDelete.invoke(self, ((id, force), _ctx))

        def checkImageDelete_async(self, _cb, id, force, _ctx=None):
            return _M_omero.api.IDelete._op_checkImageDelete.invokeAsync(self, (_cb, (id, force), _ctx))

        def previewImageDelete(self, id, force, _ctx=None):
            return _M_omero.api.IDelete._op_previewImageDelete.invoke(self, ((id, force), _ctx))

        def previewImageDelete_async(self, _cb, id, force, _ctx=None):
            return _M_omero.api.IDelete._op_previewImageDelete.invokeAsync(self, (_cb, (id, force), _ctx))

        def deleteImage(self, id, force, _ctx=None):
            return _M_omero.api.IDelete._op_deleteImage.invoke(self, ((id, force), _ctx))

        def deleteImage_async(self, _cb, id, force, _ctx=None):
            return _M_omero.api.IDelete._op_deleteImage.invokeAsync(self, (_cb, (id, force), _ctx))

        def deleteImages(self, ids, force, _ctx=None):
            return _M_omero.api.IDelete._op_deleteImages.invoke(self, ((ids, force), _ctx))

        def deleteImages_async(self, _cb, ids, force, _ctx=None):
            return _M_omero.api.IDelete._op_deleteImages.invokeAsync(self, (_cb, (ids, force), _ctx))

        def deleteImagesByDataset(self, datasetId, force, _ctx=None):
            return _M_omero.api.IDelete._op_deleteImagesByDataset.invoke(self, ((datasetId, force), _ctx))

        def deleteImagesByDataset_async(self, _cb, datasetId, force, _ctx=None):
            return _M_omero.api.IDelete._op_deleteImagesByDataset.invokeAsync(self, (_cb, (datasetId, force), _ctx))

        def deleteSettings(self, imageId, _ctx=None):
            return _M_omero.api.IDelete._op_deleteSettings.invoke(self, ((imageId, ), _ctx))

        def deleteSettings_async(self, _cb, imageId, _ctx=None):
            return _M_omero.api.IDelete._op_deleteSettings.invokeAsync(self, (_cb, (imageId, ), _ctx))

        def deletePlate(self, plateId, _ctx=None):
            return _M_omero.api.IDelete._op_deletePlate.invoke(self, ((plateId, ), _ctx))

        def deletePlate_async(self, _cb, plateId, _ctx=None):
            return _M_omero.api.IDelete._op_deletePlate.invokeAsync(self, (_cb, (plateId, ), _ctx))

        def availableCommands(self, _ctx=None):
            return _M_omero.api.IDelete._op_availableCommands.invoke(self, ((), _ctx))

        def availableCommands_async(self, _cb, _ctx=None):
            return _M_omero.api.IDelete._op_availableCommands.invokeAsync(self, (_cb, (), _ctx))

        def queueDelete(self, commands, _ctx=None):
            return _M_omero.api.IDelete._op_queueDelete.invoke(self, ((commands, ), _ctx))

        def queueDelete_async(self, _cb, commands, _ctx=None):
            return _M_omero.api.IDelete._op_queueDelete.invokeAsync(self, (_cb, (commands, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.api.IDeletePrx.ice_checkedCast(proxy, '::omero::api::IDelete', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.api.IDeletePrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.api._t_IDeletePrx = IcePy.defineProxy('::omero::api::IDelete', IDeletePrx)

    _M_omero.api._t_IDelete = IcePy.defineClass('::omero::api::IDelete', IDelete, (), True, None, (_M_omero.api._t_ServiceInterface,), ())
    IDelete.ice_type = _M_omero.api._t_IDelete

    IDelete._op_checkImageDelete = IcePy.Operation('checkImageDelete', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long), ((), IcePy._t_bool)), (), _M_omero.api._t_IObjectList, (_M_omero._t_ServerError,))
    IDelete._op_checkImageDelete.deprecate(" use omero::cmd::Delete instead")
    IDelete._op_previewImageDelete = IcePy.Operation('previewImageDelete', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long), ((), IcePy._t_bool)), (), _M_omero.api._t_IObjectList, (_M_omero._t_ServerError,))
    IDelete._op_previewImageDelete.deprecate(" use omero::cmd::Delete instead")
    IDelete._op_deleteImage = IcePy.Operation('deleteImage', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long), ((), IcePy._t_bool)), (), None, (_M_omero._t_ApiUsageException, _M_omero._t_ValidationException, _M_omero._t_SecurityViolation, _M_omero._t_ServerError))
    IDelete._op_deleteImage.deprecate(" use omero::cmd::Delete instead")
    IDelete._op_deleteImages = IcePy.Operation('deleteImages', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.api._t_LongList), ((), IcePy._t_bool)), (), None, (_M_omero._t_ApiUsageException, _M_omero._t_ValidationException, _M_omero._t_SecurityViolation, _M_omero._t_ServerError))
    IDelete._op_deleteImages.deprecate(" use omero::cmd::Delete instead")
    IDelete._op_deleteImagesByDataset = IcePy.Operation('deleteImagesByDataset', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long), ((), IcePy._t_bool)), (), None, (_M_omero._t_ApiUsageException, _M_omero._t_ValidationException, _M_omero._t_SecurityViolation, _M_omero._t_ServerError))
    IDelete._op_deleteImagesByDataset.deprecate(" use omero::cmd::Delete instead")
    IDelete._op_deleteSettings = IcePy.Operation('deleteSettings', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long),), (), None, (_M_omero._t_ServerError,))
    IDelete._op_deleteSettings.deprecate(" use omero::cmd::Delete instead")
    IDelete._op_deletePlate = IcePy.Operation('deletePlate', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long),), (), None, (_M_omero._t_ServerError,))
    IDelete._op_deletePlate.deprecate(" use omero::cmd::Delete instead")
    IDelete._op_availableCommands = IcePy.Operation('availableCommands', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (), (), _M_omero.api.delete._t_DeleteCommands, (_M_omero._t_ServerError,))
    IDelete._op_availableCommands.deprecate(" use omero::cmd::Delete instead")
    IDelete._op_queueDelete = IcePy.Operation('queueDelete', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.api.delete._t_DeleteCommands),), (), _M_omero.api.delete._t_DeleteHandlePrx, (_M_omero._t_ApiUsageException, _M_omero._t_ServerError))
    IDelete._op_queueDelete.deprecate(" use omero::cmd::Delete instead")

    _M_omero.api.IDelete = IDelete
    del IDelete

    _M_omero.api.IDeletePrx = IDeletePrx
    del IDeletePrx

# End of module omero.api

__name__ = 'omero'

# End of module omero
