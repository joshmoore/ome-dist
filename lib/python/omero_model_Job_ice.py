# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `Job.ice'

import Ice, IcePy, __builtin__

if not Ice.__dict__.has_key("_struct_marker"):
    Ice._struct_marker = object()
import omero_model_IObject_ice
import omero_RTypes_ice
import omero_System_ice
import omero_Collections_ice

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

if not _M_omero.model.__dict__.has_key('_t_JobOriginalFileLinksSeq'):
    _M_omero.model._t_JobOriginalFileLinksSeq = IcePy.defineSequence('::omero::model::JobOriginalFileLinksSeq', (), _M_omero.model._t_JobOriginalFileLink)

if not _M_omero.model.__dict__.has_key('_t_JobLinkedOriginalFileSeq'):
    _M_omero.model._t_JobLinkedOriginalFileSeq = IcePy.defineSequence('::omero::model::JobLinkedOriginalFileSeq', (), _M_omero.model._t_OriginalFile)

if not _M_omero.model.__dict__.has_key('Job'):
    _M_omero.model.Job = Ice.createTempClass()
    class Job(_M_omero.model.IObject):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _username=None, _groupname=None, _type=None, _message=None, _status=None, _submitted=None, _scheduledFor=None, _started=None, _finished=None, _originalFileLinksSeq=None, _originalFileLinksLoaded=False, _originalFileLinksCountPerOwner=None):
            if __builtin__.type(self) == _M_omero.model.Job:
                raise RuntimeError('omero.model.Job is an abstract class')
            _M_omero.model.IObject.__init__(self, _id, _details, _loaded)
            self._version = _version
            self._username = _username
            self._groupname = _groupname
            self._type = _type
            self._message = _message
            self._status = _status
            self._submitted = _submitted
            self._scheduledFor = _scheduledFor
            self._started = _started
            self._finished = _finished
            self._originalFileLinksSeq = _originalFileLinksSeq
            self._originalFileLinksLoaded = _originalFileLinksLoaded
            self._originalFileLinksCountPerOwner = _originalFileLinksCountPerOwner

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::IObject', '::omero::model::Job')

        def ice_id(self, current=None):
            return '::omero::model::Job'

        def ice_staticId():
            return '::omero::model::Job'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getVersion(self, current=None):
        # def setVersion(self, theVersion, current=None):
        # def getUsername(self, current=None):
        # def setUsername(self, theUsername, current=None):
        # def getGroupname(self, current=None):
        # def setGroupname(self, theGroupname, current=None):
        # def getType(self, current=None):
        # def setType(self, theType, current=None):
        # def getMessage(self, current=None):
        # def setMessage(self, theMessage, current=None):
        # def getStatus(self, current=None):
        # def setStatus(self, theStatus, current=None):
        # def getSubmitted(self, current=None):
        # def setSubmitted(self, theSubmitted, current=None):
        # def getScheduledFor(self, current=None):
        # def setScheduledFor(self, theScheduledFor, current=None):
        # def getStarted(self, current=None):
        # def setStarted(self, theStarted, current=None):
        # def getFinished(self, current=None):
        # def setFinished(self, theFinished, current=None):
        # def unloadOriginalFileLinks(self, current=None):
        # def sizeOfOriginalFileLinks(self, current=None):
        # def copyOriginalFileLinks(self, current=None):
        # def addJobOriginalFileLink(self, target, current=None):
        # def addAllJobOriginalFileLinkSet(self, targets, current=None):
        # def removeJobOriginalFileLink(self, theTarget, current=None):
        # def removeAllJobOriginalFileLinkSet(self, targets, current=None):
        # def clearOriginalFileLinks(self, current=None):
        # def reloadOriginalFileLinks(self, toCopy, current=None):
        # def getOriginalFileLinksCountPerOwner(self, current=None):
        # def linkOriginalFile(self, addition, current=None):
        # def addJobOriginalFileLinkToBoth(self, link, bothSides, current=None):
        # def findJobOriginalFileLink(self, removal, current=None):
        # def unlinkOriginalFile(self, removal, current=None):
        # def removeJobOriginalFileLinkFromBoth(self, link, bothSides, current=None):
        # def linkedOriginalFileList(self, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_Job)

        __repr__ = __str__

    _M_omero.model.JobPrx = Ice.createTempClass()
    class JobPrx(_M_omero.model.IObjectPrx):

        def getVersion(self, _ctx=None):
            return _M_omero.model.Job._op_getVersion.invoke(self, ((), _ctx))

        def setVersion(self, theVersion, _ctx=None):
            return _M_omero.model.Job._op_setVersion.invoke(self, ((theVersion, ), _ctx))

        def getUsername(self, _ctx=None):
            return _M_omero.model.Job._op_getUsername.invoke(self, ((), _ctx))

        def setUsername(self, theUsername, _ctx=None):
            return _M_omero.model.Job._op_setUsername.invoke(self, ((theUsername, ), _ctx))

        def getGroupname(self, _ctx=None):
            return _M_omero.model.Job._op_getGroupname.invoke(self, ((), _ctx))

        def setGroupname(self, theGroupname, _ctx=None):
            return _M_omero.model.Job._op_setGroupname.invoke(self, ((theGroupname, ), _ctx))

        def getType(self, _ctx=None):
            return _M_omero.model.Job._op_getType.invoke(self, ((), _ctx))

        def setType(self, theType, _ctx=None):
            return _M_omero.model.Job._op_setType.invoke(self, ((theType, ), _ctx))

        def getMessage(self, _ctx=None):
            return _M_omero.model.Job._op_getMessage.invoke(self, ((), _ctx))

        def setMessage(self, theMessage, _ctx=None):
            return _M_omero.model.Job._op_setMessage.invoke(self, ((theMessage, ), _ctx))

        def getStatus(self, _ctx=None):
            return _M_omero.model.Job._op_getStatus.invoke(self, ((), _ctx))

        def setStatus(self, theStatus, _ctx=None):
            return _M_omero.model.Job._op_setStatus.invoke(self, ((theStatus, ), _ctx))

        def getSubmitted(self, _ctx=None):
            return _M_omero.model.Job._op_getSubmitted.invoke(self, ((), _ctx))

        def setSubmitted(self, theSubmitted, _ctx=None):
            return _M_omero.model.Job._op_setSubmitted.invoke(self, ((theSubmitted, ), _ctx))

        def getScheduledFor(self, _ctx=None):
            return _M_omero.model.Job._op_getScheduledFor.invoke(self, ((), _ctx))

        def setScheduledFor(self, theScheduledFor, _ctx=None):
            return _M_omero.model.Job._op_setScheduledFor.invoke(self, ((theScheduledFor, ), _ctx))

        def getStarted(self, _ctx=None):
            return _M_omero.model.Job._op_getStarted.invoke(self, ((), _ctx))

        def setStarted(self, theStarted, _ctx=None):
            return _M_omero.model.Job._op_setStarted.invoke(self, ((theStarted, ), _ctx))

        def getFinished(self, _ctx=None):
            return _M_omero.model.Job._op_getFinished.invoke(self, ((), _ctx))

        def setFinished(self, theFinished, _ctx=None):
            return _M_omero.model.Job._op_setFinished.invoke(self, ((theFinished, ), _ctx))

        def unloadOriginalFileLinks(self, _ctx=None):
            return _M_omero.model.Job._op_unloadOriginalFileLinks.invoke(self, ((), _ctx))

        def sizeOfOriginalFileLinks(self, _ctx=None):
            return _M_omero.model.Job._op_sizeOfOriginalFileLinks.invoke(self, ((), _ctx))

        def copyOriginalFileLinks(self, _ctx=None):
            return _M_omero.model.Job._op_copyOriginalFileLinks.invoke(self, ((), _ctx))

        def addJobOriginalFileLink(self, target, _ctx=None):
            return _M_omero.model.Job._op_addJobOriginalFileLink.invoke(self, ((target, ), _ctx))

        def addAllJobOriginalFileLinkSet(self, targets, _ctx=None):
            return _M_omero.model.Job._op_addAllJobOriginalFileLinkSet.invoke(self, ((targets, ), _ctx))

        def removeJobOriginalFileLink(self, theTarget, _ctx=None):
            return _M_omero.model.Job._op_removeJobOriginalFileLink.invoke(self, ((theTarget, ), _ctx))

        def removeAllJobOriginalFileLinkSet(self, targets, _ctx=None):
            return _M_omero.model.Job._op_removeAllJobOriginalFileLinkSet.invoke(self, ((targets, ), _ctx))

        def clearOriginalFileLinks(self, _ctx=None):
            return _M_omero.model.Job._op_clearOriginalFileLinks.invoke(self, ((), _ctx))

        def reloadOriginalFileLinks(self, toCopy, _ctx=None):
            return _M_omero.model.Job._op_reloadOriginalFileLinks.invoke(self, ((toCopy, ), _ctx))

        def getOriginalFileLinksCountPerOwner(self, _ctx=None):
            return _M_omero.model.Job._op_getOriginalFileLinksCountPerOwner.invoke(self, ((), _ctx))

        def linkOriginalFile(self, addition, _ctx=None):
            return _M_omero.model.Job._op_linkOriginalFile.invoke(self, ((addition, ), _ctx))

        def addJobOriginalFileLinkToBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.Job._op_addJobOriginalFileLinkToBoth.invoke(self, ((link, bothSides), _ctx))

        def findJobOriginalFileLink(self, removal, _ctx=None):
            return _M_omero.model.Job._op_findJobOriginalFileLink.invoke(self, ((removal, ), _ctx))

        def unlinkOriginalFile(self, removal, _ctx=None):
            return _M_omero.model.Job._op_unlinkOriginalFile.invoke(self, ((removal, ), _ctx))

        def removeJobOriginalFileLinkFromBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.Job._op_removeJobOriginalFileLinkFromBoth.invoke(self, ((link, bothSides), _ctx))

        def linkedOriginalFileList(self, _ctx=None):
            return _M_omero.model.Job._op_linkedOriginalFileList.invoke(self, ((), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.JobPrx.ice_checkedCast(proxy, '::omero::model::Job', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.JobPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_JobPrx = IcePy.defineProxy('::omero::model::Job', JobPrx)

    _M_omero.model._t_Job = IcePy.declareClass('::omero::model::Job')

    _M_omero.model._t_Job = IcePy.defineClass('::omero::model::Job', Job, (), True, _M_omero.model._t_IObject, (), (
        ('_version', (), _M_omero._t_RInt),
        ('_username', (), _M_omero._t_RString),
        ('_groupname', (), _M_omero._t_RString),
        ('_type', (), _M_omero._t_RString),
        ('_message', (), _M_omero._t_RString),
        ('_status', (), _M_omero.model._t_JobStatus),
        ('_submitted', (), _M_omero._t_RTime),
        ('_scheduledFor', (), _M_omero._t_RTime),
        ('_started', (), _M_omero._t_RTime),
        ('_finished', (), _M_omero._t_RTime),
        ('_originalFileLinksSeq', (), _M_omero.model._t_JobOriginalFileLinksSeq),
        ('_originalFileLinksLoaded', (), IcePy._t_bool),
        ('_originalFileLinksCountPerOwner', (), _M_omero.sys._t_CountMap)
    ))
    Job.ice_type = _M_omero.model._t_Job

    Job._op_getVersion = IcePy.Operation('getVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    Job._op_setVersion = IcePy.Operation('setVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    Job._op_getUsername = IcePy.Operation('getUsername', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Job._op_setUsername = IcePy.Operation('setUsername', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Job._op_getGroupname = IcePy.Operation('getGroupname', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Job._op_setGroupname = IcePy.Operation('setGroupname', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Job._op_getType = IcePy.Operation('getType', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Job._op_setType = IcePy.Operation('setType', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Job._op_getMessage = IcePy.Operation('getMessage', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Job._op_setMessage = IcePy.Operation('setMessage', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Job._op_getStatus = IcePy.Operation('getStatus', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_JobStatus, ())
    Job._op_setStatus = IcePy.Operation('setStatus', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_JobStatus),), (), None, ())
    Job._op_getSubmitted = IcePy.Operation('getSubmitted', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RTime, ())
    Job._op_setSubmitted = IcePy.Operation('setSubmitted', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RTime),), (), None, ())
    Job._op_getScheduledFor = IcePy.Operation('getScheduledFor', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RTime, ())
    Job._op_setScheduledFor = IcePy.Operation('setScheduledFor', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RTime),), (), None, ())
    Job._op_getStarted = IcePy.Operation('getStarted', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RTime, ())
    Job._op_setStarted = IcePy.Operation('setStarted', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RTime),), (), None, ())
    Job._op_getFinished = IcePy.Operation('getFinished', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RTime, ())
    Job._op_setFinished = IcePy.Operation('setFinished', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RTime),), (), None, ())
    Job._op_unloadOriginalFileLinks = IcePy.Operation('unloadOriginalFileLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Job._op_sizeOfOriginalFileLinks = IcePy.Operation('sizeOfOriginalFileLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())
    Job._op_copyOriginalFileLinks = IcePy.Operation('copyOriginalFileLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_JobOriginalFileLinksSeq, ())
    Job._op_addJobOriginalFileLink = IcePy.Operation('addJobOriginalFileLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_JobOriginalFileLink),), (), None, ())
    Job._op_addAllJobOriginalFileLinkSet = IcePy.Operation('addAllJobOriginalFileLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_JobOriginalFileLinksSeq),), (), None, ())
    Job._op_removeJobOriginalFileLink = IcePy.Operation('removeJobOriginalFileLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_JobOriginalFileLink),), (), None, ())
    Job._op_removeAllJobOriginalFileLinkSet = IcePy.Operation('removeAllJobOriginalFileLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_JobOriginalFileLinksSeq),), (), None, ())
    Job._op_clearOriginalFileLinks = IcePy.Operation('clearOriginalFileLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Job._op_reloadOriginalFileLinks = IcePy.Operation('reloadOriginalFileLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Job),), (), None, ())
    Job._op_getOriginalFileLinksCountPerOwner = IcePy.Operation('getOriginalFileLinksCountPerOwner', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.sys._t_CountMap, ())
    Job._op_linkOriginalFile = IcePy.Operation('linkOriginalFile', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_OriginalFile),), (), _M_omero.model._t_JobOriginalFileLink, ())
    Job._op_addJobOriginalFileLinkToBoth = IcePy.Operation('addJobOriginalFileLinkToBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_JobOriginalFileLink), ((), IcePy._t_bool)), (), None, ())
    Job._op_findJobOriginalFileLink = IcePy.Operation('findJobOriginalFileLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_OriginalFile),), (), _M_omero.model._t_JobOriginalFileLinksSeq, ())
    Job._op_unlinkOriginalFile = IcePy.Operation('unlinkOriginalFile', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_OriginalFile),), (), None, ())
    Job._op_removeJobOriginalFileLinkFromBoth = IcePy.Operation('removeJobOriginalFileLinkFromBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_JobOriginalFileLink), ((), IcePy._t_bool)), (), None, ())
    Job._op_linkedOriginalFileList = IcePy.Operation('linkedOriginalFileList', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_JobLinkedOriginalFileSeq, ())

    _M_omero.model.Job = Job
    del Job

    _M_omero.model.JobPrx = JobPrx
    del JobPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
