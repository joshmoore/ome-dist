# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `UploadJob.ice'

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

if not _M_omero.model.__dict__.has_key('FilesetVersionInfo'):
    _M_omero.model._t_FilesetVersionInfo = IcePy.declareClass('::omero::model::FilesetVersionInfo')
    _M_omero.model._t_FilesetVersionInfoPrx = IcePy.declareProxy('::omero::model::FilesetVersionInfo')

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

if not _M_omero.model.__dict__.has_key('UploadJob'):
    _M_omero.model.UploadJob = Ice.createTempClass()
    class UploadJob(_M_omero.model.Job):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _username=None, _groupname=None, _type=None, _message=None, _status=None, _submitted=None, _scheduledFor=None, _started=None, _finished=None, _originalFileLinksSeq=None, _originalFileLinksLoaded=False, _originalFileLinksCountPerOwner=None, _versionInfo=None):
            if __builtin__.type(self) == _M_omero.model.UploadJob:
                raise RuntimeError('omero.model.UploadJob is an abstract class')
            _M_omero.model.Job.__init__(self, _id, _details, _loaded, _version, _username, _groupname, _type, _message, _status, _submitted, _scheduledFor, _started, _finished, _originalFileLinksSeq, _originalFileLinksLoaded, _originalFileLinksCountPerOwner)
            self._versionInfo = _versionInfo

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::IObject', '::omero::model::Job', '::omero::model::UploadJob')

        def ice_id(self, current=None):
            return '::omero::model::UploadJob'

        def ice_staticId():
            return '::omero::model::UploadJob'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getVersionInfo(self, current=None):
        # def setVersionInfo(self, theVersionInfo, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_UploadJob)

        __repr__ = __str__

    _M_omero.model.UploadJobPrx = Ice.createTempClass()
    class UploadJobPrx(_M_omero.model.JobPrx):

        def getVersionInfo(self, _ctx=None):
            return _M_omero.model.UploadJob._op_getVersionInfo.invoke(self, ((), _ctx))

        def setVersionInfo(self, theVersionInfo, _ctx=None):
            return _M_omero.model.UploadJob._op_setVersionInfo.invoke(self, ((theVersionInfo, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.UploadJobPrx.ice_checkedCast(proxy, '::omero::model::UploadJob', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.UploadJobPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_UploadJobPrx = IcePy.defineProxy('::omero::model::UploadJob', UploadJobPrx)

    _M_omero.model._t_UploadJob = IcePy.declareClass('::omero::model::UploadJob')

    _M_omero.model._t_UploadJob = IcePy.defineClass('::omero::model::UploadJob', UploadJob, (), True, _M_omero.model._t_Job, (), (('_versionInfo', (), _M_omero.model._t_FilesetVersionInfo),))
    UploadJob.ice_type = _M_omero.model._t_UploadJob

    UploadJob._op_getVersionInfo = IcePy.Operation('getVersionInfo', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_FilesetVersionInfo, ())
    UploadJob._op_setVersionInfo = IcePy.Operation('setVersionInfo', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_FilesetVersionInfo),), (), None, ())

    _M_omero.model.UploadJob = UploadJob
    del UploadJob

    _M_omero.model.UploadJobPrx = UploadJobPrx
    del UploadJobPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
