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
# Generated from file `MetadataImportJob.ice'
#
# Warning: do not edit this file.
#
# </auto-generated>
#

import Ice, IcePy
import omero_model_IObject_ice
import omero_RTypes_ice
import omero_model_RTypes_ice
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

if 'JobStatus' not in _M_omero.model.__dict__:
    _M_omero.model._t_JobStatus = IcePy.declareClass('::omero::model::JobStatus')
    _M_omero.model._t_JobStatusPrx = IcePy.declareProxy('::omero::model::JobStatus')

if 'JobOriginalFileLink' not in _M_omero.model.__dict__:
    _M_omero.model._t_JobOriginalFileLink = IcePy.declareClass('::omero::model::JobOriginalFileLink')
    _M_omero.model._t_JobOriginalFileLinkPrx = IcePy.declareProxy('::omero::model::JobOriginalFileLink')

if 'OriginalFile' not in _M_omero.model.__dict__:
    _M_omero.model._t_OriginalFile = IcePy.declareClass('::omero::model::OriginalFile')
    _M_omero.model._t_OriginalFilePrx = IcePy.declareProxy('::omero::model::OriginalFile')

if 'Details' not in _M_omero.model.__dict__:
    _M_omero.model._t_Details = IcePy.declareClass('::omero::model::Details')
    _M_omero.model._t_DetailsPrx = IcePy.declareProxy('::omero::model::Details')

if 'MetadataImportJob' not in _M_omero.model.__dict__:
    _M_omero.model.MetadataImportJob = Ice.createTempClass()
    class MetadataImportJob(_M_omero.model.Job):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _username=None, _groupname=None, _type=None, _message=None, _status=None, _submitted=None, _scheduledFor=None, _started=None, _finished=None, _originalFileLinksSeq=None, _originalFileLinksLoaded=False, _originalFileLinksCountPerOwner=None, _versionInfo=None):
            if Ice.getType(self) == _M_omero.model.MetadataImportJob:
                raise RuntimeError('omero.model.MetadataImportJob is an abstract class')
            _M_omero.model.Job.__init__(self, _id, _details, _loaded, _version, _username, _groupname, _type, _message, _status, _submitted, _scheduledFor, _started, _finished, _originalFileLinksSeq, _originalFileLinksLoaded, _originalFileLinksCountPerOwner)
            self._versionInfo = _versionInfo

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::IObject', '::omero::model::Job', '::omero::model::MetadataImportJob')

        def ice_id(self, current=None):
            return '::omero::model::MetadataImportJob'

        def ice_staticId():
            return '::omero::model::MetadataImportJob'
        ice_staticId = staticmethod(ice_staticId)

        def getVersionInfoAsMap(self, current=None):
            pass

        def getVersionInfo(self, current=None):
            pass

        def setVersionInfo(self, theVersionInfo, current=None):
            pass

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_MetadataImportJob)

        __repr__ = __str__

    _M_omero.model.MetadataImportJobPrx = Ice.createTempClass()
    class MetadataImportJobPrx(_M_omero.model.JobPrx):

        def getVersionInfoAsMap(self, _ctx=None):
            return _M_omero.model.MetadataImportJob._op_getVersionInfoAsMap.invoke(self, ((), _ctx))

        def begin_getVersionInfoAsMap(self, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.model.MetadataImportJob._op_getVersionInfoAsMap.begin(self, ((), _response, _ex, _sent, _ctx))

        def end_getVersionInfoAsMap(self, _r):
            return _M_omero.model.MetadataImportJob._op_getVersionInfoAsMap.end(self, _r)

        def getVersionInfo(self, _ctx=None):
            return _M_omero.model.MetadataImportJob._op_getVersionInfo.invoke(self, ((), _ctx))

        def begin_getVersionInfo(self, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.model.MetadataImportJob._op_getVersionInfo.begin(self, ((), _response, _ex, _sent, _ctx))

        def end_getVersionInfo(self, _r):
            return _M_omero.model.MetadataImportJob._op_getVersionInfo.end(self, _r)

        def setVersionInfo(self, theVersionInfo, _ctx=None):
            return _M_omero.model.MetadataImportJob._op_setVersionInfo.invoke(self, ((theVersionInfo, ), _ctx))

        def begin_setVersionInfo(self, theVersionInfo, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.model.MetadataImportJob._op_setVersionInfo.begin(self, ((theVersionInfo, ), _response, _ex, _sent, _ctx))

        def end_setVersionInfo(self, _r):
            return _M_omero.model.MetadataImportJob._op_setVersionInfo.end(self, _r)

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.MetadataImportJobPrx.ice_checkedCast(proxy, '::omero::model::MetadataImportJob', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.MetadataImportJobPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_MetadataImportJobPrx = IcePy.defineProxy('::omero::model::MetadataImportJob', MetadataImportJobPrx)

    _M_omero.model._t_MetadataImportJob = IcePy.declareClass('::omero::model::MetadataImportJob')

    _M_omero.model._t_MetadataImportJob = IcePy.defineClass('::omero::model::MetadataImportJob', MetadataImportJob, -1, (), True, False, _M_omero.model._t_Job, (), (('_versionInfo', (), _M_omero.api._t_NamedValueList, False, 0),))
    MetadataImportJob._ice_type = _M_omero.model._t_MetadataImportJob

    MetadataImportJob._op_getVersionInfoAsMap = IcePy.Operation('getVersionInfoAsMap', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (), (), ((), _M_omero.api._t_StringStringMap, False, 0), ())
    MetadataImportJob._op_getVersionInfo = IcePy.Operation('getVersionInfo', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (), (), ((), _M_omero.api._t_NamedValueList, False, 0), ())
    MetadataImportJob._op_setVersionInfo = IcePy.Operation('setVersionInfo', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (((), _M_omero.api._t_NamedValueList, False, 0),), (), None, ())

    _M_omero.model.MetadataImportJob = MetadataImportJob
    del MetadataImportJob

    _M_omero.model.MetadataImportJobPrx = MetadataImportJobPrx
    del MetadataImportJobPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
