# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `Dataset.ice'

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

if not _M_omero.model.__dict__.has_key('ProjectDatasetLink'):
    _M_omero.model._t_ProjectDatasetLink = IcePy.declareClass('::omero::model::ProjectDatasetLink')
    _M_omero.model._t_ProjectDatasetLinkPrx = IcePy.declareProxy('::omero::model::ProjectDatasetLink')

if not _M_omero.model.__dict__.has_key('Project'):
    _M_omero.model._t_Project = IcePy.declareClass('::omero::model::Project')
    _M_omero.model._t_ProjectPrx = IcePy.declareProxy('::omero::model::Project')

if not _M_omero.model.__dict__.has_key('DatasetImageLink'):
    _M_omero.model._t_DatasetImageLink = IcePy.declareClass('::omero::model::DatasetImageLink')
    _M_omero.model._t_DatasetImageLinkPrx = IcePy.declareProxy('::omero::model::DatasetImageLink')

if not _M_omero.model.__dict__.has_key('Image'):
    _M_omero.model._t_Image = IcePy.declareClass('::omero::model::Image')
    _M_omero.model._t_ImagePrx = IcePy.declareProxy('::omero::model::Image')

if not _M_omero.model.__dict__.has_key('DatasetAnnotationLink'):
    _M_omero.model._t_DatasetAnnotationLink = IcePy.declareClass('::omero::model::DatasetAnnotationLink')
    _M_omero.model._t_DatasetAnnotationLinkPrx = IcePy.declareProxy('::omero::model::DatasetAnnotationLink')

if not _M_omero.model.__dict__.has_key('Annotation'):
    _M_omero.model._t_Annotation = IcePy.declareClass('::omero::model::Annotation')
    _M_omero.model._t_AnnotationPrx = IcePy.declareProxy('::omero::model::Annotation')

if not _M_omero.model.__dict__.has_key('Details'):
    _M_omero.model._t_Details = IcePy.declareClass('::omero::model::Details')
    _M_omero.model._t_DetailsPrx = IcePy.declareProxy('::omero::model::Details')

if not _M_omero.model.__dict__.has_key('_t_DatasetProjectLinksSeq'):
    _M_omero.model._t_DatasetProjectLinksSeq = IcePy.defineSequence('::omero::model::DatasetProjectLinksSeq', (), _M_omero.model._t_ProjectDatasetLink)

if not _M_omero.model.__dict__.has_key('_t_DatasetLinkedProjectSeq'):
    _M_omero.model._t_DatasetLinkedProjectSeq = IcePy.defineSequence('::omero::model::DatasetLinkedProjectSeq', (), _M_omero.model._t_Project)

if not _M_omero.model.__dict__.has_key('_t_DatasetImageLinksSeq'):
    _M_omero.model._t_DatasetImageLinksSeq = IcePy.defineSequence('::omero::model::DatasetImageLinksSeq', (), _M_omero.model._t_DatasetImageLink)

if not _M_omero.model.__dict__.has_key('_t_DatasetLinkedImageSeq'):
    _M_omero.model._t_DatasetLinkedImageSeq = IcePy.defineSequence('::omero::model::DatasetLinkedImageSeq', (), _M_omero.model._t_Image)

if not _M_omero.model.__dict__.has_key('_t_DatasetAnnotationLinksSeq'):
    _M_omero.model._t_DatasetAnnotationLinksSeq = IcePy.defineSequence('::omero::model::DatasetAnnotationLinksSeq', (), _M_omero.model._t_DatasetAnnotationLink)

if not _M_omero.model.__dict__.has_key('_t_DatasetLinkedAnnotationSeq'):
    _M_omero.model._t_DatasetLinkedAnnotationSeq = IcePy.defineSequence('::omero::model::DatasetLinkedAnnotationSeq', (), _M_omero.model._t_Annotation)

if not _M_omero.model.__dict__.has_key('Dataset'):
    _M_omero.model.Dataset = Ice.createTempClass()
    class Dataset(_M_omero.model.IObject):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _projectLinksSeq=None, _projectLinksLoaded=False, _projectLinksCountPerOwner=None, _imageLinksSeq=None, _imageLinksLoaded=False, _imageLinksCountPerOwner=None, _annotationLinksSeq=None, _annotationLinksLoaded=False, _annotationLinksCountPerOwner=None, _name=None, _description=None):
            if __builtin__.type(self) == _M_omero.model.Dataset:
                raise RuntimeError('omero.model.Dataset is an abstract class')
            _M_omero.model.IObject.__init__(self, _id, _details, _loaded)
            self._version = _version
            self._projectLinksSeq = _projectLinksSeq
            self._projectLinksLoaded = _projectLinksLoaded
            self._projectLinksCountPerOwner = _projectLinksCountPerOwner
            self._imageLinksSeq = _imageLinksSeq
            self._imageLinksLoaded = _imageLinksLoaded
            self._imageLinksCountPerOwner = _imageLinksCountPerOwner
            self._annotationLinksSeq = _annotationLinksSeq
            self._annotationLinksLoaded = _annotationLinksLoaded
            self._annotationLinksCountPerOwner = _annotationLinksCountPerOwner
            self._name = _name
            self._description = _description

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::Dataset', '::omero::model::IObject')

        def ice_id(self, current=None):
            return '::omero::model::Dataset'

        def ice_staticId():
            return '::omero::model::Dataset'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getVersion(self, current=None):
        # def setVersion(self, theVersion, current=None):
        # def unloadProjectLinks(self, current=None):
        # def sizeOfProjectLinks(self, current=None):
        # def copyProjectLinks(self, current=None):
        # def addProjectDatasetLink(self, target, current=None):
        # def addAllProjectDatasetLinkSet(self, targets, current=None):
        # def removeProjectDatasetLink(self, theTarget, current=None):
        # def removeAllProjectDatasetLinkSet(self, targets, current=None):
        # def clearProjectLinks(self, current=None):
        # def reloadProjectLinks(self, toCopy, current=None):
        # def getProjectLinksCountPerOwner(self, current=None):
        # def linkProject(self, addition, current=None):
        # def addProjectDatasetLinkToBoth(self, link, bothSides, current=None):
        # def findProjectDatasetLink(self, removal, current=None):
        # def unlinkProject(self, removal, current=None):
        # def removeProjectDatasetLinkFromBoth(self, link, bothSides, current=None):
        # def linkedProjectList(self, current=None):
        # def unloadImageLinks(self, current=None):
        # def sizeOfImageLinks(self, current=None):
        # def copyImageLinks(self, current=None):
        # def addDatasetImageLink(self, target, current=None):
        # def addAllDatasetImageLinkSet(self, targets, current=None):
        # def removeDatasetImageLink(self, theTarget, current=None):
        # def removeAllDatasetImageLinkSet(self, targets, current=None):
        # def clearImageLinks(self, current=None):
        # def reloadImageLinks(self, toCopy, current=None):
        # def getImageLinksCountPerOwner(self, current=None):
        # def linkImage(self, addition, current=None):
        # def addDatasetImageLinkToBoth(self, link, bothSides, current=None):
        # def findDatasetImageLink(self, removal, current=None):
        # def unlinkImage(self, removal, current=None):
        # def removeDatasetImageLinkFromBoth(self, link, bothSides, current=None):
        # def linkedImageList(self, current=None):
        # def unloadAnnotationLinks(self, current=None):
        # def sizeOfAnnotationLinks(self, current=None):
        # def copyAnnotationLinks(self, current=None):
        # def addDatasetAnnotationLink(self, target, current=None):
        # def addAllDatasetAnnotationLinkSet(self, targets, current=None):
        # def removeDatasetAnnotationLink(self, theTarget, current=None):
        # def removeAllDatasetAnnotationLinkSet(self, targets, current=None):
        # def clearAnnotationLinks(self, current=None):
        # def reloadAnnotationLinks(self, toCopy, current=None):
        # def getAnnotationLinksCountPerOwner(self, current=None):
        # def linkAnnotation(self, addition, current=None):
        # def addDatasetAnnotationLinkToBoth(self, link, bothSides, current=None):
        # def findDatasetAnnotationLink(self, removal, current=None):
        # def unlinkAnnotation(self, removal, current=None):
        # def removeDatasetAnnotationLinkFromBoth(self, link, bothSides, current=None):
        # def linkedAnnotationList(self, current=None):
        # def getName(self, current=None):
        # def setName(self, theName, current=None):
        # def getDescription(self, current=None):
        # def setDescription(self, theDescription, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_Dataset)

        __repr__ = __str__

    _M_omero.model.DatasetPrx = Ice.createTempClass()
    class DatasetPrx(_M_omero.model.IObjectPrx):

        def getVersion(self, _ctx=None):
            return _M_omero.model.Dataset._op_getVersion.invoke(self, ((), _ctx))

        def setVersion(self, theVersion, _ctx=None):
            return _M_omero.model.Dataset._op_setVersion.invoke(self, ((theVersion, ), _ctx))

        def unloadProjectLinks(self, _ctx=None):
            return _M_omero.model.Dataset._op_unloadProjectLinks.invoke(self, ((), _ctx))

        def sizeOfProjectLinks(self, _ctx=None):
            return _M_omero.model.Dataset._op_sizeOfProjectLinks.invoke(self, ((), _ctx))

        def copyProjectLinks(self, _ctx=None):
            return _M_omero.model.Dataset._op_copyProjectLinks.invoke(self, ((), _ctx))

        def addProjectDatasetLink(self, target, _ctx=None):
            return _M_omero.model.Dataset._op_addProjectDatasetLink.invoke(self, ((target, ), _ctx))

        def addAllProjectDatasetLinkSet(self, targets, _ctx=None):
            return _M_omero.model.Dataset._op_addAllProjectDatasetLinkSet.invoke(self, ((targets, ), _ctx))

        def removeProjectDatasetLink(self, theTarget, _ctx=None):
            return _M_omero.model.Dataset._op_removeProjectDatasetLink.invoke(self, ((theTarget, ), _ctx))

        def removeAllProjectDatasetLinkSet(self, targets, _ctx=None):
            return _M_omero.model.Dataset._op_removeAllProjectDatasetLinkSet.invoke(self, ((targets, ), _ctx))

        def clearProjectLinks(self, _ctx=None):
            return _M_omero.model.Dataset._op_clearProjectLinks.invoke(self, ((), _ctx))

        def reloadProjectLinks(self, toCopy, _ctx=None):
            return _M_omero.model.Dataset._op_reloadProjectLinks.invoke(self, ((toCopy, ), _ctx))

        def getProjectLinksCountPerOwner(self, _ctx=None):
            return _M_omero.model.Dataset._op_getProjectLinksCountPerOwner.invoke(self, ((), _ctx))

        def linkProject(self, addition, _ctx=None):
            return _M_omero.model.Dataset._op_linkProject.invoke(self, ((addition, ), _ctx))

        def addProjectDatasetLinkToBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.Dataset._op_addProjectDatasetLinkToBoth.invoke(self, ((link, bothSides), _ctx))

        def findProjectDatasetLink(self, removal, _ctx=None):
            return _M_omero.model.Dataset._op_findProjectDatasetLink.invoke(self, ((removal, ), _ctx))

        def unlinkProject(self, removal, _ctx=None):
            return _M_omero.model.Dataset._op_unlinkProject.invoke(self, ((removal, ), _ctx))

        def removeProjectDatasetLinkFromBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.Dataset._op_removeProjectDatasetLinkFromBoth.invoke(self, ((link, bothSides), _ctx))

        def linkedProjectList(self, _ctx=None):
            return _M_omero.model.Dataset._op_linkedProjectList.invoke(self, ((), _ctx))

        def unloadImageLinks(self, _ctx=None):
            return _M_omero.model.Dataset._op_unloadImageLinks.invoke(self, ((), _ctx))

        def sizeOfImageLinks(self, _ctx=None):
            return _M_omero.model.Dataset._op_sizeOfImageLinks.invoke(self, ((), _ctx))

        def copyImageLinks(self, _ctx=None):
            return _M_omero.model.Dataset._op_copyImageLinks.invoke(self, ((), _ctx))

        def addDatasetImageLink(self, target, _ctx=None):
            return _M_omero.model.Dataset._op_addDatasetImageLink.invoke(self, ((target, ), _ctx))

        def addAllDatasetImageLinkSet(self, targets, _ctx=None):
            return _M_omero.model.Dataset._op_addAllDatasetImageLinkSet.invoke(self, ((targets, ), _ctx))

        def removeDatasetImageLink(self, theTarget, _ctx=None):
            return _M_omero.model.Dataset._op_removeDatasetImageLink.invoke(self, ((theTarget, ), _ctx))

        def removeAllDatasetImageLinkSet(self, targets, _ctx=None):
            return _M_omero.model.Dataset._op_removeAllDatasetImageLinkSet.invoke(self, ((targets, ), _ctx))

        def clearImageLinks(self, _ctx=None):
            return _M_omero.model.Dataset._op_clearImageLinks.invoke(self, ((), _ctx))

        def reloadImageLinks(self, toCopy, _ctx=None):
            return _M_omero.model.Dataset._op_reloadImageLinks.invoke(self, ((toCopy, ), _ctx))

        def getImageLinksCountPerOwner(self, _ctx=None):
            return _M_omero.model.Dataset._op_getImageLinksCountPerOwner.invoke(self, ((), _ctx))

        def linkImage(self, addition, _ctx=None):
            return _M_omero.model.Dataset._op_linkImage.invoke(self, ((addition, ), _ctx))

        def addDatasetImageLinkToBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.Dataset._op_addDatasetImageLinkToBoth.invoke(self, ((link, bothSides), _ctx))

        def findDatasetImageLink(self, removal, _ctx=None):
            return _M_omero.model.Dataset._op_findDatasetImageLink.invoke(self, ((removal, ), _ctx))

        def unlinkImage(self, removal, _ctx=None):
            return _M_omero.model.Dataset._op_unlinkImage.invoke(self, ((removal, ), _ctx))

        def removeDatasetImageLinkFromBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.Dataset._op_removeDatasetImageLinkFromBoth.invoke(self, ((link, bothSides), _ctx))

        def linkedImageList(self, _ctx=None):
            return _M_omero.model.Dataset._op_linkedImageList.invoke(self, ((), _ctx))

        def unloadAnnotationLinks(self, _ctx=None):
            return _M_omero.model.Dataset._op_unloadAnnotationLinks.invoke(self, ((), _ctx))

        def sizeOfAnnotationLinks(self, _ctx=None):
            return _M_omero.model.Dataset._op_sizeOfAnnotationLinks.invoke(self, ((), _ctx))

        def copyAnnotationLinks(self, _ctx=None):
            return _M_omero.model.Dataset._op_copyAnnotationLinks.invoke(self, ((), _ctx))

        def addDatasetAnnotationLink(self, target, _ctx=None):
            return _M_omero.model.Dataset._op_addDatasetAnnotationLink.invoke(self, ((target, ), _ctx))

        def addAllDatasetAnnotationLinkSet(self, targets, _ctx=None):
            return _M_omero.model.Dataset._op_addAllDatasetAnnotationLinkSet.invoke(self, ((targets, ), _ctx))

        def removeDatasetAnnotationLink(self, theTarget, _ctx=None):
            return _M_omero.model.Dataset._op_removeDatasetAnnotationLink.invoke(self, ((theTarget, ), _ctx))

        def removeAllDatasetAnnotationLinkSet(self, targets, _ctx=None):
            return _M_omero.model.Dataset._op_removeAllDatasetAnnotationLinkSet.invoke(self, ((targets, ), _ctx))

        def clearAnnotationLinks(self, _ctx=None):
            return _M_omero.model.Dataset._op_clearAnnotationLinks.invoke(self, ((), _ctx))

        def reloadAnnotationLinks(self, toCopy, _ctx=None):
            return _M_omero.model.Dataset._op_reloadAnnotationLinks.invoke(self, ((toCopy, ), _ctx))

        def getAnnotationLinksCountPerOwner(self, _ctx=None):
            return _M_omero.model.Dataset._op_getAnnotationLinksCountPerOwner.invoke(self, ((), _ctx))

        def linkAnnotation(self, addition, _ctx=None):
            return _M_omero.model.Dataset._op_linkAnnotation.invoke(self, ((addition, ), _ctx))

        def addDatasetAnnotationLinkToBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.Dataset._op_addDatasetAnnotationLinkToBoth.invoke(self, ((link, bothSides), _ctx))

        def findDatasetAnnotationLink(self, removal, _ctx=None):
            return _M_omero.model.Dataset._op_findDatasetAnnotationLink.invoke(self, ((removal, ), _ctx))

        def unlinkAnnotation(self, removal, _ctx=None):
            return _M_omero.model.Dataset._op_unlinkAnnotation.invoke(self, ((removal, ), _ctx))

        def removeDatasetAnnotationLinkFromBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.Dataset._op_removeDatasetAnnotationLinkFromBoth.invoke(self, ((link, bothSides), _ctx))

        def linkedAnnotationList(self, _ctx=None):
            return _M_omero.model.Dataset._op_linkedAnnotationList.invoke(self, ((), _ctx))

        def getName(self, _ctx=None):
            return _M_omero.model.Dataset._op_getName.invoke(self, ((), _ctx))

        def setName(self, theName, _ctx=None):
            return _M_omero.model.Dataset._op_setName.invoke(self, ((theName, ), _ctx))

        def getDescription(self, _ctx=None):
            return _M_omero.model.Dataset._op_getDescription.invoke(self, ((), _ctx))

        def setDescription(self, theDescription, _ctx=None):
            return _M_omero.model.Dataset._op_setDescription.invoke(self, ((theDescription, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.DatasetPrx.ice_checkedCast(proxy, '::omero::model::Dataset', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.DatasetPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_DatasetPrx = IcePy.defineProxy('::omero::model::Dataset', DatasetPrx)

    _M_omero.model._t_Dataset = IcePy.declareClass('::omero::model::Dataset')

    _M_omero.model._t_Dataset = IcePy.defineClass('::omero::model::Dataset', Dataset, (), True, _M_omero.model._t_IObject, (), (
        ('_version', (), _M_omero._t_RInt),
        ('_projectLinksSeq', (), _M_omero.model._t_DatasetProjectLinksSeq),
        ('_projectLinksLoaded', (), IcePy._t_bool),
        ('_projectLinksCountPerOwner', (), _M_omero.sys._t_CountMap),
        ('_imageLinksSeq', (), _M_omero.model._t_DatasetImageLinksSeq),
        ('_imageLinksLoaded', (), IcePy._t_bool),
        ('_imageLinksCountPerOwner', (), _M_omero.sys._t_CountMap),
        ('_annotationLinksSeq', (), _M_omero.model._t_DatasetAnnotationLinksSeq),
        ('_annotationLinksLoaded', (), IcePy._t_bool),
        ('_annotationLinksCountPerOwner', (), _M_omero.sys._t_CountMap),
        ('_name', (), _M_omero._t_RString),
        ('_description', (), _M_omero._t_RString)
    ))
    Dataset.ice_type = _M_omero.model._t_Dataset

    Dataset._op_getVersion = IcePy.Operation('getVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    Dataset._op_setVersion = IcePy.Operation('setVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    Dataset._op_unloadProjectLinks = IcePy.Operation('unloadProjectLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Dataset._op_sizeOfProjectLinks = IcePy.Operation('sizeOfProjectLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())
    Dataset._op_copyProjectLinks = IcePy.Operation('copyProjectLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_DatasetProjectLinksSeq, ())
    Dataset._op_addProjectDatasetLink = IcePy.Operation('addProjectDatasetLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ProjectDatasetLink),), (), None, ())
    Dataset._op_addAllProjectDatasetLinkSet = IcePy.Operation('addAllProjectDatasetLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_DatasetProjectLinksSeq),), (), None, ())
    Dataset._op_removeProjectDatasetLink = IcePy.Operation('removeProjectDatasetLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ProjectDatasetLink),), (), None, ())
    Dataset._op_removeAllProjectDatasetLinkSet = IcePy.Operation('removeAllProjectDatasetLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_DatasetProjectLinksSeq),), (), None, ())
    Dataset._op_clearProjectLinks = IcePy.Operation('clearProjectLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Dataset._op_reloadProjectLinks = IcePy.Operation('reloadProjectLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Dataset),), (), None, ())
    Dataset._op_getProjectLinksCountPerOwner = IcePy.Operation('getProjectLinksCountPerOwner', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.sys._t_CountMap, ())
    Dataset._op_linkProject = IcePy.Operation('linkProject', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Project),), (), _M_omero.model._t_ProjectDatasetLink, ())
    Dataset._op_addProjectDatasetLinkToBoth = IcePy.Operation('addProjectDatasetLinkToBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ProjectDatasetLink), ((), IcePy._t_bool)), (), None, ())
    Dataset._op_findProjectDatasetLink = IcePy.Operation('findProjectDatasetLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Project),), (), _M_omero.model._t_DatasetProjectLinksSeq, ())
    Dataset._op_unlinkProject = IcePy.Operation('unlinkProject', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Project),), (), None, ())
    Dataset._op_removeProjectDatasetLinkFromBoth = IcePy.Operation('removeProjectDatasetLinkFromBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ProjectDatasetLink), ((), IcePy._t_bool)), (), None, ())
    Dataset._op_linkedProjectList = IcePy.Operation('linkedProjectList', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_DatasetLinkedProjectSeq, ())
    Dataset._op_unloadImageLinks = IcePy.Operation('unloadImageLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Dataset._op_sizeOfImageLinks = IcePy.Operation('sizeOfImageLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())
    Dataset._op_copyImageLinks = IcePy.Operation('copyImageLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_DatasetImageLinksSeq, ())
    Dataset._op_addDatasetImageLink = IcePy.Operation('addDatasetImageLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_DatasetImageLink),), (), None, ())
    Dataset._op_addAllDatasetImageLinkSet = IcePy.Operation('addAllDatasetImageLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_DatasetImageLinksSeq),), (), None, ())
    Dataset._op_removeDatasetImageLink = IcePy.Operation('removeDatasetImageLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_DatasetImageLink),), (), None, ())
    Dataset._op_removeAllDatasetImageLinkSet = IcePy.Operation('removeAllDatasetImageLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_DatasetImageLinksSeq),), (), None, ())
    Dataset._op_clearImageLinks = IcePy.Operation('clearImageLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Dataset._op_reloadImageLinks = IcePy.Operation('reloadImageLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Dataset),), (), None, ())
    Dataset._op_getImageLinksCountPerOwner = IcePy.Operation('getImageLinksCountPerOwner', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.sys._t_CountMap, ())
    Dataset._op_linkImage = IcePy.Operation('linkImage', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Image),), (), _M_omero.model._t_DatasetImageLink, ())
    Dataset._op_addDatasetImageLinkToBoth = IcePy.Operation('addDatasetImageLinkToBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_DatasetImageLink), ((), IcePy._t_bool)), (), None, ())
    Dataset._op_findDatasetImageLink = IcePy.Operation('findDatasetImageLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Image),), (), _M_omero.model._t_DatasetImageLinksSeq, ())
    Dataset._op_unlinkImage = IcePy.Operation('unlinkImage', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Image),), (), None, ())
    Dataset._op_removeDatasetImageLinkFromBoth = IcePy.Operation('removeDatasetImageLinkFromBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_DatasetImageLink), ((), IcePy._t_bool)), (), None, ())
    Dataset._op_linkedImageList = IcePy.Operation('linkedImageList', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_DatasetLinkedImageSeq, ())
    Dataset._op_unloadAnnotationLinks = IcePy.Operation('unloadAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Dataset._op_sizeOfAnnotationLinks = IcePy.Operation('sizeOfAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())
    Dataset._op_copyAnnotationLinks = IcePy.Operation('copyAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_DatasetAnnotationLinksSeq, ())
    Dataset._op_addDatasetAnnotationLink = IcePy.Operation('addDatasetAnnotationLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_DatasetAnnotationLink),), (), None, ())
    Dataset._op_addAllDatasetAnnotationLinkSet = IcePy.Operation('addAllDatasetAnnotationLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_DatasetAnnotationLinksSeq),), (), None, ())
    Dataset._op_removeDatasetAnnotationLink = IcePy.Operation('removeDatasetAnnotationLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_DatasetAnnotationLink),), (), None, ())
    Dataset._op_removeAllDatasetAnnotationLinkSet = IcePy.Operation('removeAllDatasetAnnotationLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_DatasetAnnotationLinksSeq),), (), None, ())
    Dataset._op_clearAnnotationLinks = IcePy.Operation('clearAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Dataset._op_reloadAnnotationLinks = IcePy.Operation('reloadAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Dataset),), (), None, ())
    Dataset._op_getAnnotationLinksCountPerOwner = IcePy.Operation('getAnnotationLinksCountPerOwner', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.sys._t_CountMap, ())
    Dataset._op_linkAnnotation = IcePy.Operation('linkAnnotation', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Annotation),), (), _M_omero.model._t_DatasetAnnotationLink, ())
    Dataset._op_addDatasetAnnotationLinkToBoth = IcePy.Operation('addDatasetAnnotationLinkToBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_DatasetAnnotationLink), ((), IcePy._t_bool)), (), None, ())
    Dataset._op_findDatasetAnnotationLink = IcePy.Operation('findDatasetAnnotationLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Annotation),), (), _M_omero.model._t_DatasetAnnotationLinksSeq, ())
    Dataset._op_unlinkAnnotation = IcePy.Operation('unlinkAnnotation', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Annotation),), (), None, ())
    Dataset._op_removeDatasetAnnotationLinkFromBoth = IcePy.Operation('removeDatasetAnnotationLinkFromBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_DatasetAnnotationLink), ((), IcePy._t_bool)), (), None, ())
    Dataset._op_linkedAnnotationList = IcePy.Operation('linkedAnnotationList', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_DatasetLinkedAnnotationSeq, ())
    Dataset._op_getName = IcePy.Operation('getName', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Dataset._op_setName = IcePy.Operation('setName', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Dataset._op_getDescription = IcePy.Operation('getDescription', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Dataset._op_setDescription = IcePy.Operation('setDescription', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())

    _M_omero.model.Dataset = Dataset
    del Dataset

    _M_omero.model.DatasetPrx = DatasetPrx
    del DatasetPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
