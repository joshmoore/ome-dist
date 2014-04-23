# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `ImportJob.ice'

import Ice, IcePy, __builtin__

if not Ice.__dict__.has_key("_struct_marker"):
    Ice._struct_marker = object()
import omero_model_IObject_ice
import omero_RTypes_ice
import omero_System_ice
import omero_Collections_ice
import omero_model_Job_ice

# Included module omero
_M_omero = Ice.openModule('omero')

# Included module omero.model
_M_omero.model = Ice.openModule('omero.model')

# Included module Ice
_M_Ice = Ice.openModule('Ice')

# Included module omero.sys
_M_omero.sys = Ice.openModule('omero.sys')

# Included module omero.api
_M_omero.api = Ice.openModule('omero.api')

# Start of module omero
__name__ = 'omero'

# Start of module omero.model
__name__ = 'omero.model'

if not _M_omero.model.__dict__.has_key('JobStatus'):
    _M_omero.model._t_JobStatus = IcePy.declareClass('::omero::model::JobStatus')
    _M_omero.model._t_JobStatusPrx = IcePy.declareProxy('::omero::model::JobStatus')

if not _M_omero.model.__dict__.has_key('JobOriginalFileLink'):
    _M_omero.model._t_JobOriginalFileLink = IcePy.declareClass('::omero::model::JobOriginalFileLink')
    _M_omero.model._t_JobOriginalFileLinkPrx = IcePy.declareProxy('::omero::model::JobOriginalFileLink')

if not _M_omero.model.__dict__.has_key('OriginalFile'):
    _M_omero.model._t_OriginalFile = IcePy.declareClass('::omero::model::OriginalFile')
    _M_omero.model._t_OriginalFilePrx = IcePy.declareProxy('::omero::model::OriginalFile')

if not _M_omero.model.__dict__.has_key('Details'):
    _M_omero.model._t_Details = IcePy.declareClass('::omero::model::Details')
    _M_omero.model._t_DetailsPrx = IcePy.declareProxy('::omero::model::Details')

if not _M_omero.model.__dict__.has_key('ImportJob'):
    _M_omero.model.ImportJob = Ice.createTempClass()
    class ImportJob(_M_omero.model.Job):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _username=None, _groupname=None, _type=None, _message=None, _status=None, _submitted=None, _scheduledFor=None, _started=None, _finished=None, _originalFileLinksSeq=None, _originalFileLinksLoaded=False, _originalFileLinksCountPerOwner=None, _imageName=None, _imageDescription=None):
            if __builtin__.type(self) == _M_omero.model.ImportJob:
                raise RuntimeError('omero.model.ImportJob is an abstract class')
            _M_omero.model.Job.__init__(self, _id, _details, _loaded, _version, _username, _groupname, _type, _message, _status, _submitted, _scheduledFor, _started, _finished, _originalFileLinksSeq, _originalFileLinksLoaded, _originalFileLinksCountPerOwner)
            self._imageName = _imageName
            self._imageDescription = _imageDescription

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::IObject', '::omero::model::ImportJob', '::omero::model::Job')

        def ice_id(self, current=None):
            return '::omero::model::ImportJob'

        def ice_staticId():
            return '::omero::model::ImportJob'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getImageName(self, current=None):
        # def setImageName(self, theImageName, current=None):
        # def getImageDescription(self, current=None):
        # def setImageDescription(self, theImageDescription, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_ImportJob)

        __repr__ = __str__

    _M_omero.model.ImportJobPrx = Ice.createTempClass()
    class ImportJobPrx(_M_omero.model.JobPrx):

        def getImageName(self, _ctx=None):
            return _M_omero.model.ImportJob._op_getImageName.invoke(self, ((), _ctx))

        def setImageName(self, theImageName, _ctx=None):
            return _M_omero.model.ImportJob._op_setImageName.invoke(self, ((theImageName, ), _ctx))

        def getImageDescription(self, _ctx=None):
            return _M_omero.model.ImportJob._op_getImageDescription.invoke(self, ((), _ctx))

        def setImageDescription(self, theImageDescription, _ctx=None):
            return _M_omero.model.ImportJob._op_setImageDescription.invoke(self, ((theImageDescription, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.ImportJobPrx.ice_checkedCast(proxy, '::omero::model::ImportJob', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.ImportJobPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_ImportJobPrx = IcePy.defineProxy('::omero::model::ImportJob', ImportJobPrx)

    _M_omero.model._t_ImportJob = IcePy.declareClass('::omero::model::ImportJob')

    _M_omero.model._t_ImportJob = IcePy.defineClass('::omero::model::ImportJob', ImportJob, (), True, _M_omero.model._t_Job, (), (
        ('_imageName', (), _M_omero._t_RString),
        ('_imageDescription', (), _M_omero._t_RString)
    ))
    ImportJob.ice_type = _M_omero.model._t_ImportJob

    ImportJob._op_getImageName = IcePy.Operation('getImageName', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    ImportJob._op_setImageName = IcePy.Operation('setImageName', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    ImportJob._op_getImageDescription = IcePy.Operation('getImageDescription', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    ImportJob._op_setImageDescription = IcePy.Operation('setImageDescription', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())

    _M_omero.model.ImportJob = ImportJob
    del ImportJob

    _M_omero.model.ImportJobPrx = ImportJobPrx
    del ImportJobPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
