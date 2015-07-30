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
# Generated from file `IntegrityCheckJob.ice'
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

if 'IntegrityCheckJob' not in _M_omero.model.__dict__:
    _M_omero.model.IntegrityCheckJob = Ice.createTempClass()
    class IntegrityCheckJob(_M_omero.model.Job):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _username=None, _groupname=None, _type=None, _message=None, _status=None, _submitted=None, _scheduledFor=None, _started=None, _finished=None, _originalFileLinksSeq=None, _originalFileLinksLoaded=False, _originalFileLinksCountPerOwner=None):
            if Ice.getType(self) == _M_omero.model.IntegrityCheckJob:
                raise RuntimeError('omero.model.IntegrityCheckJob is an abstract class')
            _M_omero.model.Job.__init__(self, _id, _details, _loaded, _version, _username, _groupname, _type, _message, _status, _submitted, _scheduledFor, _started, _finished, _originalFileLinksSeq, _originalFileLinksLoaded, _originalFileLinksCountPerOwner)

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::IObject', '::omero::model::IntegrityCheckJob', '::omero::model::Job')

        def ice_id(self, current=None):
            return '::omero::model::IntegrityCheckJob'

        def ice_staticId():
            return '::omero::model::IntegrityCheckJob'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_IntegrityCheckJob)

        __repr__ = __str__

    _M_omero.model.IntegrityCheckJobPrx = Ice.createTempClass()
    class IntegrityCheckJobPrx(_M_omero.model.JobPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.IntegrityCheckJobPrx.ice_checkedCast(proxy, '::omero::model::IntegrityCheckJob', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.IntegrityCheckJobPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_IntegrityCheckJobPrx = IcePy.defineProxy('::omero::model::IntegrityCheckJob', IntegrityCheckJobPrx)

    _M_omero.model._t_IntegrityCheckJob = IcePy.declareClass('::omero::model::IntegrityCheckJob')

    _M_omero.model._t_IntegrityCheckJob = IcePy.defineClass('::omero::model::IntegrityCheckJob', IntegrityCheckJob, -1, (), True, False, _M_omero.model._t_Job, (), ())
    IntegrityCheckJob._ice_type = _M_omero.model._t_IntegrityCheckJob

    _M_omero.model.IntegrityCheckJob = IntegrityCheckJob
    del IntegrityCheckJob

    _M_omero.model.IntegrityCheckJobPrx = IntegrityCheckJobPrx
    del IntegrityCheckJobPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
