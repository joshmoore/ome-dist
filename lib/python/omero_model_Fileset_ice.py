# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `Fileset.ice'

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

if not _M_omero.model.__dict__.has_key('FilesetEntry'):
    _M_omero.model._t_FilesetEntry = IcePy.declareClass('::omero::model::FilesetEntry')
    _M_omero.model._t_FilesetEntryPrx = IcePy.declareProxy('::omero::model::FilesetEntry')

if not _M_omero.model.__dict__.has_key('Image'):
    _M_omero.model._t_Image = IcePy.declareClass('::omero::model::Image')
    _M_omero.model._t_ImagePrx = IcePy.declareProxy('::omero::model::Image')

if not _M_omero.model.__dict__.has_key('FilesetJobLink'):
    _M_omero.model._t_FilesetJobLink = IcePy.declareClass('::omero::model::FilesetJobLink')
    _M_omero.model._t_FilesetJobLinkPrx = IcePy.declareProxy('::omero::model::FilesetJobLink')

if not _M_omero.model.__dict__.has_key('Job'):
    _M_omero.model._t_Job = IcePy.declareClass('::omero::model::Job')
    _M_omero.model._t_JobPrx = IcePy.declareProxy('::omero::model::Job')

if not _M_omero.model.__dict__.has_key('FilesetAnnotationLink'):
    _M_omero.model._t_FilesetAnnotationLink = IcePy.declareClass('::omero::model::FilesetAnnotationLink')
    _M_omero.model._t_FilesetAnnotationLinkPrx = IcePy.declareProxy('::omero::model::FilesetAnnotationLink')

if not _M_omero.model.__dict__.has_key('Annotation'):
    _M_omero.model._t_Annotation = IcePy.declareClass('::omero::model::Annotation')
    _M_omero.model._t_AnnotationPrx = IcePy.declareProxy('::omero::model::Annotation')

if not _M_omero.model.__dict__.has_key('Details'):
    _M_omero.model._t_Details = IcePy.declareClass('::omero::model::Details')
    _M_omero.model._t_DetailsPrx = IcePy.declareProxy('::omero::model::Details')

if not _M_omero.model.__dict__.has_key('_t_FilesetUsedFilesSeq'):
    _M_omero.model._t_FilesetUsedFilesSeq = IcePy.defineSequence('::omero::model::FilesetUsedFilesSeq', (), _M_omero.model._t_FilesetEntry)

if not _M_omero.model.__dict__.has_key('_t_FilesetImagesSeq'):
    _M_omero.model._t_FilesetImagesSeq = IcePy.defineSequence('::omero::model::FilesetImagesSeq', (), _M_omero.model._t_Image)

if not _M_omero.model.__dict__.has_key('_t_FilesetJobLinksSeq'):
    _M_omero.model._t_FilesetJobLinksSeq = IcePy.defineSequence('::omero::model::FilesetJobLinksSeq', (), _M_omero.model._t_FilesetJobLink)

if not _M_omero.model.__dict__.has_key('_t_FilesetLinkedJobSeq'):
    _M_omero.model._t_FilesetLinkedJobSeq = IcePy.defineSequence('::omero::model::FilesetLinkedJobSeq', (), _M_omero.model._t_Job)

if not _M_omero.model.__dict__.has_key('_t_FilesetAnnotationLinksSeq'):
    _M_omero.model._t_FilesetAnnotationLinksSeq = IcePy.defineSequence('::omero::model::FilesetAnnotationLinksSeq', (), _M_omero.model._t_FilesetAnnotationLink)

if not _M_omero.model.__dict__.has_key('_t_FilesetLinkedAnnotationSeq'):
    _M_omero.model._t_FilesetLinkedAnnotationSeq = IcePy.defineSequence('::omero::model::FilesetLinkedAnnotationSeq', (), _M_omero.model._t_Annotation)

if not _M_omero.model.__dict__.has_key('Fileset'):
    _M_omero.model.Fileset = Ice.createTempClass()
    class Fileset(_M_omero.model.IObject):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _usedFilesSeq=None, _usedFilesLoaded=False, _imagesSeq=None, _imagesLoaded=False, _jobLinksSeq=None, _jobLinksLoaded=False, _jobLinksCountPerOwner=None, _templatePrefix=None, _annotationLinksSeq=None, _annotationLinksLoaded=False, _annotationLinksCountPerOwner=None):
            if __builtin__.type(self) == _M_omero.model.Fileset:
                raise RuntimeError('omero.model.Fileset is an abstract class')
            _M_omero.model.IObject.__init__(self, _id, _details, _loaded)
            self._version = _version
            self._usedFilesSeq = _usedFilesSeq
            self._usedFilesLoaded = _usedFilesLoaded
            self._imagesSeq = _imagesSeq
            self._imagesLoaded = _imagesLoaded
            self._jobLinksSeq = _jobLinksSeq
            self._jobLinksLoaded = _jobLinksLoaded
            self._jobLinksCountPerOwner = _jobLinksCountPerOwner
            self._templatePrefix = _templatePrefix
            self._annotationLinksSeq = _annotationLinksSeq
            self._annotationLinksLoaded = _annotationLinksLoaded
            self._annotationLinksCountPerOwner = _annotationLinksCountPerOwner

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::Fileset', '::omero::model::IObject')

        def ice_id(self, current=None):
            return '::omero::model::Fileset'

        def ice_staticId():
            return '::omero::model::Fileset'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getVersion(self, current=None):
        # def setVersion(self, theVersion, current=None):
        # def unloadUsedFiles(self, current=None):
        # def sizeOfUsedFiles(self, current=None):
        # def copyUsedFiles(self, current=None):
        # def addFilesetEntry(self, target, current=None):
        # def addAllFilesetEntrySet(self, targets, current=None):
        # def removeFilesetEntry(self, theTarget, current=None):
        # def removeAllFilesetEntrySet(self, targets, current=None):
        # def clearUsedFiles(self, current=None):
        # def reloadUsedFiles(self, toCopy, current=None):
        # def getFilesetEntry(self, index, current=None):
        # def setFilesetEntry(self, index, theElement, current=None):
        # def getPrimaryFilesetEntry(self, current=None):
        # def setPrimaryFilesetEntry(self, theElement, current=None):
        # def unloadImages(self, current=None):
        # def sizeOfImages(self, current=None):
        # def copyImages(self, current=None):
        # def addImage(self, target, current=None):
        # def addAllImageSet(self, targets, current=None):
        # def removeImage(self, theTarget, current=None):
        # def removeAllImageSet(self, targets, current=None):
        # def clearImages(self, current=None):
        # def reloadImages(self, toCopy, current=None):
        # def unloadJobLinks(self, current=None):
        # def sizeOfJobLinks(self, current=None):
        # def copyJobLinks(self, current=None):
        # def addFilesetJobLink(self, target, current=None):
        # def addAllFilesetJobLinkSet(self, targets, current=None):
        # def removeFilesetJobLink(self, theTarget, current=None):
        # def removeAllFilesetJobLinkSet(self, targets, current=None):
        # def clearJobLinks(self, current=None):
        # def reloadJobLinks(self, toCopy, current=None):
        # def getFilesetJobLink(self, index, current=None):
        # def setFilesetJobLink(self, index, theElement, current=None):
        # def getPrimaryFilesetJobLink(self, current=None):
        # def setPrimaryFilesetJobLink(self, theElement, current=None):
        # def getJobLinksCountPerOwner(self, current=None):
        # def linkJob(self, addition, current=None):
        # def addFilesetJobLinkToBoth(self, link, bothSides, current=None):
        # def findFilesetJobLink(self, removal, current=None):
        # def unlinkJob(self, removal, current=None):
        # def removeFilesetJobLinkFromBoth(self, link, bothSides, current=None):
        # def linkedJobList(self, current=None):
        # def getTemplatePrefix(self, current=None):
        # def setTemplatePrefix(self, theTemplatePrefix, current=None):
        # def unloadAnnotationLinks(self, current=None):
        # def sizeOfAnnotationLinks(self, current=None):
        # def copyAnnotationLinks(self, current=None):
        # def addFilesetAnnotationLink(self, target, current=None):
        # def addAllFilesetAnnotationLinkSet(self, targets, current=None):
        # def removeFilesetAnnotationLink(self, theTarget, current=None):
        # def removeAllFilesetAnnotationLinkSet(self, targets, current=None):
        # def clearAnnotationLinks(self, current=None):
        # def reloadAnnotationLinks(self, toCopy, current=None):
        # def getAnnotationLinksCountPerOwner(self, current=None):
        # def linkAnnotation(self, addition, current=None):
        # def addFilesetAnnotationLinkToBoth(self, link, bothSides, current=None):
        # def findFilesetAnnotationLink(self, removal, current=None):
        # def unlinkAnnotation(self, removal, current=None):
        # def removeFilesetAnnotationLinkFromBoth(self, link, bothSides, current=None):
        # def linkedAnnotationList(self, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_Fileset)

        __repr__ = __str__

    _M_omero.model.FilesetPrx = Ice.createTempClass()
    class FilesetPrx(_M_omero.model.IObjectPrx):

        def getVersion(self, _ctx=None):
            return _M_omero.model.Fileset._op_getVersion.invoke(self, ((), _ctx))

        def setVersion(self, theVersion, _ctx=None):
            return _M_omero.model.Fileset._op_setVersion.invoke(self, ((theVersion, ), _ctx))

        def unloadUsedFiles(self, _ctx=None):
            return _M_omero.model.Fileset._op_unloadUsedFiles.invoke(self, ((), _ctx))

        def sizeOfUsedFiles(self, _ctx=None):
            return _M_omero.model.Fileset._op_sizeOfUsedFiles.invoke(self, ((), _ctx))

        def copyUsedFiles(self, _ctx=None):
            return _M_omero.model.Fileset._op_copyUsedFiles.invoke(self, ((), _ctx))

        def addFilesetEntry(self, target, _ctx=None):
            return _M_omero.model.Fileset._op_addFilesetEntry.invoke(self, ((target, ), _ctx))

        def addAllFilesetEntrySet(self, targets, _ctx=None):
            return _M_omero.model.Fileset._op_addAllFilesetEntrySet.invoke(self, ((targets, ), _ctx))

        def removeFilesetEntry(self, theTarget, _ctx=None):
            return _M_omero.model.Fileset._op_removeFilesetEntry.invoke(self, ((theTarget, ), _ctx))

        def removeAllFilesetEntrySet(self, targets, _ctx=None):
            return _M_omero.model.Fileset._op_removeAllFilesetEntrySet.invoke(self, ((targets, ), _ctx))

        def clearUsedFiles(self, _ctx=None):
            return _M_omero.model.Fileset._op_clearUsedFiles.invoke(self, ((), _ctx))

        def reloadUsedFiles(self, toCopy, _ctx=None):
            return _M_omero.model.Fileset._op_reloadUsedFiles.invoke(self, ((toCopy, ), _ctx))

        def getFilesetEntry(self, index, _ctx=None):
            return _M_omero.model.Fileset._op_getFilesetEntry.invoke(self, ((index, ), _ctx))

        def setFilesetEntry(self, index, theElement, _ctx=None):
            return _M_omero.model.Fileset._op_setFilesetEntry.invoke(self, ((index, theElement), _ctx))

        def getPrimaryFilesetEntry(self, _ctx=None):
            return _M_omero.model.Fileset._op_getPrimaryFilesetEntry.invoke(self, ((), _ctx))

        def setPrimaryFilesetEntry(self, theElement, _ctx=None):
            return _M_omero.model.Fileset._op_setPrimaryFilesetEntry.invoke(self, ((theElement, ), _ctx))

        def unloadImages(self, _ctx=None):
            return _M_omero.model.Fileset._op_unloadImages.invoke(self, ((), _ctx))

        def sizeOfImages(self, _ctx=None):
            return _M_omero.model.Fileset._op_sizeOfImages.invoke(self, ((), _ctx))

        def copyImages(self, _ctx=None):
            return _M_omero.model.Fileset._op_copyImages.invoke(self, ((), _ctx))

        def addImage(self, target, _ctx=None):
            return _M_omero.model.Fileset._op_addImage.invoke(self, ((target, ), _ctx))

        def addAllImageSet(self, targets, _ctx=None):
            return _M_omero.model.Fileset._op_addAllImageSet.invoke(self, ((targets, ), _ctx))

        def removeImage(self, theTarget, _ctx=None):
            return _M_omero.model.Fileset._op_removeImage.invoke(self, ((theTarget, ), _ctx))

        def removeAllImageSet(self, targets, _ctx=None):
            return _M_omero.model.Fileset._op_removeAllImageSet.invoke(self, ((targets, ), _ctx))

        def clearImages(self, _ctx=None):
            return _M_omero.model.Fileset._op_clearImages.invoke(self, ((), _ctx))

        def reloadImages(self, toCopy, _ctx=None):
            return _M_omero.model.Fileset._op_reloadImages.invoke(self, ((toCopy, ), _ctx))

        def unloadJobLinks(self, _ctx=None):
            return _M_omero.model.Fileset._op_unloadJobLinks.invoke(self, ((), _ctx))

        def sizeOfJobLinks(self, _ctx=None):
            return _M_omero.model.Fileset._op_sizeOfJobLinks.invoke(self, ((), _ctx))

        def copyJobLinks(self, _ctx=None):
            return _M_omero.model.Fileset._op_copyJobLinks.invoke(self, ((), _ctx))

        def addFilesetJobLink(self, target, _ctx=None):
            return _M_omero.model.Fileset._op_addFilesetJobLink.invoke(self, ((target, ), _ctx))

        def addAllFilesetJobLinkSet(self, targets, _ctx=None):
            return _M_omero.model.Fileset._op_addAllFilesetJobLinkSet.invoke(self, ((targets, ), _ctx))

        def removeFilesetJobLink(self, theTarget, _ctx=None):
            return _M_omero.model.Fileset._op_removeFilesetJobLink.invoke(self, ((theTarget, ), _ctx))

        def removeAllFilesetJobLinkSet(self, targets, _ctx=None):
            return _M_omero.model.Fileset._op_removeAllFilesetJobLinkSet.invoke(self, ((targets, ), _ctx))

        def clearJobLinks(self, _ctx=None):
            return _M_omero.model.Fileset._op_clearJobLinks.invoke(self, ((), _ctx))

        def reloadJobLinks(self, toCopy, _ctx=None):
            return _M_omero.model.Fileset._op_reloadJobLinks.invoke(self, ((toCopy, ), _ctx))

        def getFilesetJobLink(self, index, _ctx=None):
            return _M_omero.model.Fileset._op_getFilesetJobLink.invoke(self, ((index, ), _ctx))

        def setFilesetJobLink(self, index, theElement, _ctx=None):
            return _M_omero.model.Fileset._op_setFilesetJobLink.invoke(self, ((index, theElement), _ctx))

        def getPrimaryFilesetJobLink(self, _ctx=None):
            return _M_omero.model.Fileset._op_getPrimaryFilesetJobLink.invoke(self, ((), _ctx))

        def setPrimaryFilesetJobLink(self, theElement, _ctx=None):
            return _M_omero.model.Fileset._op_setPrimaryFilesetJobLink.invoke(self, ((theElement, ), _ctx))

        def getJobLinksCountPerOwner(self, _ctx=None):
            return _M_omero.model.Fileset._op_getJobLinksCountPerOwner.invoke(self, ((), _ctx))

        def linkJob(self, addition, _ctx=None):
            return _M_omero.model.Fileset._op_linkJob.invoke(self, ((addition, ), _ctx))

        def addFilesetJobLinkToBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.Fileset._op_addFilesetJobLinkToBoth.invoke(self, ((link, bothSides), _ctx))

        def findFilesetJobLink(self, removal, _ctx=None):
            return _M_omero.model.Fileset._op_findFilesetJobLink.invoke(self, ((removal, ), _ctx))

        def unlinkJob(self, removal, _ctx=None):
            return _M_omero.model.Fileset._op_unlinkJob.invoke(self, ((removal, ), _ctx))

        def removeFilesetJobLinkFromBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.Fileset._op_removeFilesetJobLinkFromBoth.invoke(self, ((link, bothSides), _ctx))

        def linkedJobList(self, _ctx=None):
            return _M_omero.model.Fileset._op_linkedJobList.invoke(self, ((), _ctx))

        def getTemplatePrefix(self, _ctx=None):
            return _M_omero.model.Fileset._op_getTemplatePrefix.invoke(self, ((), _ctx))

        def setTemplatePrefix(self, theTemplatePrefix, _ctx=None):
            return _M_omero.model.Fileset._op_setTemplatePrefix.invoke(self, ((theTemplatePrefix, ), _ctx))

        def unloadAnnotationLinks(self, _ctx=None):
            return _M_omero.model.Fileset._op_unloadAnnotationLinks.invoke(self, ((), _ctx))

        def sizeOfAnnotationLinks(self, _ctx=None):
            return _M_omero.model.Fileset._op_sizeOfAnnotationLinks.invoke(self, ((), _ctx))

        def copyAnnotationLinks(self, _ctx=None):
            return _M_omero.model.Fileset._op_copyAnnotationLinks.invoke(self, ((), _ctx))

        def addFilesetAnnotationLink(self, target, _ctx=None):
            return _M_omero.model.Fileset._op_addFilesetAnnotationLink.invoke(self, ((target, ), _ctx))

        def addAllFilesetAnnotationLinkSet(self, targets, _ctx=None):
            return _M_omero.model.Fileset._op_addAllFilesetAnnotationLinkSet.invoke(self, ((targets, ), _ctx))

        def removeFilesetAnnotationLink(self, theTarget, _ctx=None):
            return _M_omero.model.Fileset._op_removeFilesetAnnotationLink.invoke(self, ((theTarget, ), _ctx))

        def removeAllFilesetAnnotationLinkSet(self, targets, _ctx=None):
            return _M_omero.model.Fileset._op_removeAllFilesetAnnotationLinkSet.invoke(self, ((targets, ), _ctx))

        def clearAnnotationLinks(self, _ctx=None):
            return _M_omero.model.Fileset._op_clearAnnotationLinks.invoke(self, ((), _ctx))

        def reloadAnnotationLinks(self, toCopy, _ctx=None):
            return _M_omero.model.Fileset._op_reloadAnnotationLinks.invoke(self, ((toCopy, ), _ctx))

        def getAnnotationLinksCountPerOwner(self, _ctx=None):
            return _M_omero.model.Fileset._op_getAnnotationLinksCountPerOwner.invoke(self, ((), _ctx))

        def linkAnnotation(self, addition, _ctx=None):
            return _M_omero.model.Fileset._op_linkAnnotation.invoke(self, ((addition, ), _ctx))

        def addFilesetAnnotationLinkToBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.Fileset._op_addFilesetAnnotationLinkToBoth.invoke(self, ((link, bothSides), _ctx))

        def findFilesetAnnotationLink(self, removal, _ctx=None):
            return _M_omero.model.Fileset._op_findFilesetAnnotationLink.invoke(self, ((removal, ), _ctx))

        def unlinkAnnotation(self, removal, _ctx=None):
            return _M_omero.model.Fileset._op_unlinkAnnotation.invoke(self, ((removal, ), _ctx))

        def removeFilesetAnnotationLinkFromBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.Fileset._op_removeFilesetAnnotationLinkFromBoth.invoke(self, ((link, bothSides), _ctx))

        def linkedAnnotationList(self, _ctx=None):
            return _M_omero.model.Fileset._op_linkedAnnotationList.invoke(self, ((), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.FilesetPrx.ice_checkedCast(proxy, '::omero::model::Fileset', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.FilesetPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_FilesetPrx = IcePy.defineProxy('::omero::model::Fileset', FilesetPrx)

    _M_omero.model._t_Fileset = IcePy.declareClass('::omero::model::Fileset')

    _M_omero.model._t_Fileset = IcePy.defineClass('::omero::model::Fileset', Fileset, (), True, _M_omero.model._t_IObject, (), (
        ('_version', (), _M_omero._t_RInt),
        ('_usedFilesSeq', (), _M_omero.model._t_FilesetUsedFilesSeq),
        ('_usedFilesLoaded', (), IcePy._t_bool),
        ('_imagesSeq', (), _M_omero.model._t_FilesetImagesSeq),
        ('_imagesLoaded', (), IcePy._t_bool),
        ('_jobLinksSeq', (), _M_omero.model._t_FilesetJobLinksSeq),
        ('_jobLinksLoaded', (), IcePy._t_bool),
        ('_jobLinksCountPerOwner', (), _M_omero.sys._t_CountMap),
        ('_templatePrefix', (), _M_omero._t_RString),
        ('_annotationLinksSeq', (), _M_omero.model._t_FilesetAnnotationLinksSeq),
        ('_annotationLinksLoaded', (), IcePy._t_bool),
        ('_annotationLinksCountPerOwner', (), _M_omero.sys._t_CountMap)
    ))
    Fileset.ice_type = _M_omero.model._t_Fileset

    Fileset._op_getVersion = IcePy.Operation('getVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    Fileset._op_setVersion = IcePy.Operation('setVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    Fileset._op_unloadUsedFiles = IcePy.Operation('unloadUsedFiles', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Fileset._op_sizeOfUsedFiles = IcePy.Operation('sizeOfUsedFiles', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())
    Fileset._op_copyUsedFiles = IcePy.Operation('copyUsedFiles', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_FilesetUsedFilesSeq, ())
    Fileset._op_addFilesetEntry = IcePy.Operation('addFilesetEntry', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_FilesetEntry),), (), None, ())
    Fileset._op_addAllFilesetEntrySet = IcePy.Operation('addAllFilesetEntrySet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_FilesetUsedFilesSeq),), (), None, ())
    Fileset._op_removeFilesetEntry = IcePy.Operation('removeFilesetEntry', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_FilesetEntry),), (), None, ())
    Fileset._op_removeAllFilesetEntrySet = IcePy.Operation('removeAllFilesetEntrySet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_FilesetUsedFilesSeq),), (), None, ())
    Fileset._op_clearUsedFiles = IcePy.Operation('clearUsedFiles', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Fileset._op_reloadUsedFiles = IcePy.Operation('reloadUsedFiles', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Fileset),), (), None, ())
    Fileset._op_getFilesetEntry = IcePy.Operation('getFilesetEntry', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_int),), (), _M_omero.model._t_FilesetEntry, ())
    Fileset._op_setFilesetEntry = IcePy.Operation('setFilesetEntry', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_int), ((), _M_omero.model._t_FilesetEntry)), (), _M_omero.model._t_FilesetEntry, ())
    Fileset._op_getPrimaryFilesetEntry = IcePy.Operation('getPrimaryFilesetEntry', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_FilesetEntry, ())
    Fileset._op_setPrimaryFilesetEntry = IcePy.Operation('setPrimaryFilesetEntry', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_FilesetEntry),), (), _M_omero.model._t_FilesetEntry, ())
    Fileset._op_unloadImages = IcePy.Operation('unloadImages', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Fileset._op_sizeOfImages = IcePy.Operation('sizeOfImages', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())
    Fileset._op_copyImages = IcePy.Operation('copyImages', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_FilesetImagesSeq, ())
    Fileset._op_addImage = IcePy.Operation('addImage', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Image),), (), None, ())
    Fileset._op_addAllImageSet = IcePy.Operation('addAllImageSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_FilesetImagesSeq),), (), None, ())
    Fileset._op_removeImage = IcePy.Operation('removeImage', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Image),), (), None, ())
    Fileset._op_removeAllImageSet = IcePy.Operation('removeAllImageSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_FilesetImagesSeq),), (), None, ())
    Fileset._op_clearImages = IcePy.Operation('clearImages', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Fileset._op_reloadImages = IcePy.Operation('reloadImages', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Fileset),), (), None, ())
    Fileset._op_unloadJobLinks = IcePy.Operation('unloadJobLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Fileset._op_sizeOfJobLinks = IcePy.Operation('sizeOfJobLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())
    Fileset._op_copyJobLinks = IcePy.Operation('copyJobLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_FilesetJobLinksSeq, ())
    Fileset._op_addFilesetJobLink = IcePy.Operation('addFilesetJobLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_FilesetJobLink),), (), None, ())
    Fileset._op_addAllFilesetJobLinkSet = IcePy.Operation('addAllFilesetJobLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_FilesetJobLinksSeq),), (), None, ())
    Fileset._op_removeFilesetJobLink = IcePy.Operation('removeFilesetJobLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_FilesetJobLink),), (), None, ())
    Fileset._op_removeAllFilesetJobLinkSet = IcePy.Operation('removeAllFilesetJobLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_FilesetJobLinksSeq),), (), None, ())
    Fileset._op_clearJobLinks = IcePy.Operation('clearJobLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Fileset._op_reloadJobLinks = IcePy.Operation('reloadJobLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Fileset),), (), None, ())
    Fileset._op_getFilesetJobLink = IcePy.Operation('getFilesetJobLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_int),), (), _M_omero.model._t_FilesetJobLink, ())
    Fileset._op_setFilesetJobLink = IcePy.Operation('setFilesetJobLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_int), ((), _M_omero.model._t_FilesetJobLink)), (), _M_omero.model._t_FilesetJobLink, ())
    Fileset._op_getPrimaryFilesetJobLink = IcePy.Operation('getPrimaryFilesetJobLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_FilesetJobLink, ())
    Fileset._op_setPrimaryFilesetJobLink = IcePy.Operation('setPrimaryFilesetJobLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_FilesetJobLink),), (), _M_omero.model._t_FilesetJobLink, ())
    Fileset._op_getJobLinksCountPerOwner = IcePy.Operation('getJobLinksCountPerOwner', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.sys._t_CountMap, ())
    Fileset._op_linkJob = IcePy.Operation('linkJob', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Job),), (), _M_omero.model._t_FilesetJobLink, ())
    Fileset._op_addFilesetJobLinkToBoth = IcePy.Operation('addFilesetJobLinkToBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_FilesetJobLink), ((), IcePy._t_bool)), (), None, ())
    Fileset._op_findFilesetJobLink = IcePy.Operation('findFilesetJobLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Job),), (), _M_omero.model._t_FilesetJobLinksSeq, ())
    Fileset._op_unlinkJob = IcePy.Operation('unlinkJob', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Job),), (), None, ())
    Fileset._op_removeFilesetJobLinkFromBoth = IcePy.Operation('removeFilesetJobLinkFromBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_FilesetJobLink), ((), IcePy._t_bool)), (), None, ())
    Fileset._op_linkedJobList = IcePy.Operation('linkedJobList', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_FilesetLinkedJobSeq, ())
    Fileset._op_getTemplatePrefix = IcePy.Operation('getTemplatePrefix', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Fileset._op_setTemplatePrefix = IcePy.Operation('setTemplatePrefix', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Fileset._op_unloadAnnotationLinks = IcePy.Operation('unloadAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Fileset._op_sizeOfAnnotationLinks = IcePy.Operation('sizeOfAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())
    Fileset._op_copyAnnotationLinks = IcePy.Operation('copyAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_FilesetAnnotationLinksSeq, ())
    Fileset._op_addFilesetAnnotationLink = IcePy.Operation('addFilesetAnnotationLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_FilesetAnnotationLink),), (), None, ())
    Fileset._op_addAllFilesetAnnotationLinkSet = IcePy.Operation('addAllFilesetAnnotationLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_FilesetAnnotationLinksSeq),), (), None, ())
    Fileset._op_removeFilesetAnnotationLink = IcePy.Operation('removeFilesetAnnotationLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_FilesetAnnotationLink),), (), None, ())
    Fileset._op_removeAllFilesetAnnotationLinkSet = IcePy.Operation('removeAllFilesetAnnotationLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_FilesetAnnotationLinksSeq),), (), None, ())
    Fileset._op_clearAnnotationLinks = IcePy.Operation('clearAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Fileset._op_reloadAnnotationLinks = IcePy.Operation('reloadAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Fileset),), (), None, ())
    Fileset._op_getAnnotationLinksCountPerOwner = IcePy.Operation('getAnnotationLinksCountPerOwner', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.sys._t_CountMap, ())
    Fileset._op_linkAnnotation = IcePy.Operation('linkAnnotation', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Annotation),), (), _M_omero.model._t_FilesetAnnotationLink, ())
    Fileset._op_addFilesetAnnotationLinkToBoth = IcePy.Operation('addFilesetAnnotationLinkToBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_FilesetAnnotationLink), ((), IcePy._t_bool)), (), None, ())
    Fileset._op_findFilesetAnnotationLink = IcePy.Operation('findFilesetAnnotationLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Annotation),), (), _M_omero.model._t_FilesetAnnotationLinksSeq, ())
    Fileset._op_unlinkAnnotation = IcePy.Operation('unlinkAnnotation', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Annotation),), (), None, ())
    Fileset._op_removeFilesetAnnotationLinkFromBoth = IcePy.Operation('removeFilesetAnnotationLinkFromBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_FilesetAnnotationLink), ((), IcePy._t_bool)), (), None, ())
    Fileset._op_linkedAnnotationList = IcePy.Operation('linkedAnnotationList', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_FilesetLinkedAnnotationSeq, ())

    _M_omero.model.Fileset = Fileset
    del Fileset

    _M_omero.model.FilesetPrx = FilesetPrx
    del FilesetPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
