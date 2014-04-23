# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `Project.ice'

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

if not _M_omero.model.__dict__.has_key('Dataset'):
    _M_omero.model._t_Dataset = IcePy.declareClass('::omero::model::Dataset')
    _M_omero.model._t_DatasetPrx = IcePy.declareProxy('::omero::model::Dataset')

if not _M_omero.model.__dict__.has_key('ProjectAnnotationLink'):
    _M_omero.model._t_ProjectAnnotationLink = IcePy.declareClass('::omero::model::ProjectAnnotationLink')
    _M_omero.model._t_ProjectAnnotationLinkPrx = IcePy.declareProxy('::omero::model::ProjectAnnotationLink')

if not _M_omero.model.__dict__.has_key('Annotation'):
    _M_omero.model._t_Annotation = IcePy.declareClass('::omero::model::Annotation')
    _M_omero.model._t_AnnotationPrx = IcePy.declareProxy('::omero::model::Annotation')

if not _M_omero.model.__dict__.has_key('Details'):
    _M_omero.model._t_Details = IcePy.declareClass('::omero::model::Details')
    _M_omero.model._t_DetailsPrx = IcePy.declareProxy('::omero::model::Details')

if not _M_omero.model.__dict__.has_key('_t_ProjectDatasetLinksSeq'):
    _M_omero.model._t_ProjectDatasetLinksSeq = IcePy.defineSequence('::omero::model::ProjectDatasetLinksSeq', (), _M_omero.model._t_ProjectDatasetLink)

if not _M_omero.model.__dict__.has_key('_t_ProjectLinkedDatasetSeq'):
    _M_omero.model._t_ProjectLinkedDatasetSeq = IcePy.defineSequence('::omero::model::ProjectLinkedDatasetSeq', (), _M_omero.model._t_Dataset)

if not _M_omero.model.__dict__.has_key('_t_ProjectAnnotationLinksSeq'):
    _M_omero.model._t_ProjectAnnotationLinksSeq = IcePy.defineSequence('::omero::model::ProjectAnnotationLinksSeq', (), _M_omero.model._t_ProjectAnnotationLink)

if not _M_omero.model.__dict__.has_key('_t_ProjectLinkedAnnotationSeq'):
    _M_omero.model._t_ProjectLinkedAnnotationSeq = IcePy.defineSequence('::omero::model::ProjectLinkedAnnotationSeq', (), _M_omero.model._t_Annotation)

if not _M_omero.model.__dict__.has_key('Project'):
    _M_omero.model.Project = Ice.createTempClass()
    class Project(_M_omero.model.IObject):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _datasetLinksSeq=None, _datasetLinksLoaded=False, _datasetLinksCountPerOwner=None, _annotationLinksSeq=None, _annotationLinksLoaded=False, _annotationLinksCountPerOwner=None, _name=None, _description=None):
            if __builtin__.type(self) == _M_omero.model.Project:
                raise RuntimeError('omero.model.Project is an abstract class')
            _M_omero.model.IObject.__init__(self, _id, _details, _loaded)
            self._version = _version
            self._datasetLinksSeq = _datasetLinksSeq
            self._datasetLinksLoaded = _datasetLinksLoaded
            self._datasetLinksCountPerOwner = _datasetLinksCountPerOwner
            self._annotationLinksSeq = _annotationLinksSeq
            self._annotationLinksLoaded = _annotationLinksLoaded
            self._annotationLinksCountPerOwner = _annotationLinksCountPerOwner
            self._name = _name
            self._description = _description

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::IObject', '::omero::model::Project')

        def ice_id(self, current=None):
            return '::omero::model::Project'

        def ice_staticId():
            return '::omero::model::Project'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getVersion(self, current=None):
        # def setVersion(self, theVersion, current=None):
        # def unloadDatasetLinks(self, current=None):
        # def sizeOfDatasetLinks(self, current=None):
        # def copyDatasetLinks(self, current=None):
        # def addProjectDatasetLink(self, target, current=None):
        # def addAllProjectDatasetLinkSet(self, targets, current=None):
        # def removeProjectDatasetLink(self, theTarget, current=None):
        # def removeAllProjectDatasetLinkSet(self, targets, current=None):
        # def clearDatasetLinks(self, current=None):
        # def reloadDatasetLinks(self, toCopy, current=None):
        # def getDatasetLinksCountPerOwner(self, current=None):
        # def linkDataset(self, addition, current=None):
        # def addProjectDatasetLinkToBoth(self, link, bothSides, current=None):
        # def findProjectDatasetLink(self, removal, current=None):
        # def unlinkDataset(self, removal, current=None):
        # def removeProjectDatasetLinkFromBoth(self, link, bothSides, current=None):
        # def linkedDatasetList(self, current=None):
        # def unloadAnnotationLinks(self, current=None):
        # def sizeOfAnnotationLinks(self, current=None):
        # def copyAnnotationLinks(self, current=None):
        # def addProjectAnnotationLink(self, target, current=None):
        # def addAllProjectAnnotationLinkSet(self, targets, current=None):
        # def removeProjectAnnotationLink(self, theTarget, current=None):
        # def removeAllProjectAnnotationLinkSet(self, targets, current=None):
        # def clearAnnotationLinks(self, current=None):
        # def reloadAnnotationLinks(self, toCopy, current=None):
        # def getAnnotationLinksCountPerOwner(self, current=None):
        # def linkAnnotation(self, addition, current=None):
        # def addProjectAnnotationLinkToBoth(self, link, bothSides, current=None):
        # def findProjectAnnotationLink(self, removal, current=None):
        # def unlinkAnnotation(self, removal, current=None):
        # def removeProjectAnnotationLinkFromBoth(self, link, bothSides, current=None):
        # def linkedAnnotationList(self, current=None):
        # def getName(self, current=None):
        # def setName(self, theName, current=None):
        # def getDescription(self, current=None):
        # def setDescription(self, theDescription, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_Project)

        __repr__ = __str__

    _M_omero.model.ProjectPrx = Ice.createTempClass()
    class ProjectPrx(_M_omero.model.IObjectPrx):

        def getVersion(self, _ctx=None):
            return _M_omero.model.Project._op_getVersion.invoke(self, ((), _ctx))

        def setVersion(self, theVersion, _ctx=None):
            return _M_omero.model.Project._op_setVersion.invoke(self, ((theVersion, ), _ctx))

        def unloadDatasetLinks(self, _ctx=None):
            return _M_omero.model.Project._op_unloadDatasetLinks.invoke(self, ((), _ctx))

        def sizeOfDatasetLinks(self, _ctx=None):
            return _M_omero.model.Project._op_sizeOfDatasetLinks.invoke(self, ((), _ctx))

        def copyDatasetLinks(self, _ctx=None):
            return _M_omero.model.Project._op_copyDatasetLinks.invoke(self, ((), _ctx))

        def addProjectDatasetLink(self, target, _ctx=None):
            return _M_omero.model.Project._op_addProjectDatasetLink.invoke(self, ((target, ), _ctx))

        def addAllProjectDatasetLinkSet(self, targets, _ctx=None):
            return _M_omero.model.Project._op_addAllProjectDatasetLinkSet.invoke(self, ((targets, ), _ctx))

        def removeProjectDatasetLink(self, theTarget, _ctx=None):
            return _M_omero.model.Project._op_removeProjectDatasetLink.invoke(self, ((theTarget, ), _ctx))

        def removeAllProjectDatasetLinkSet(self, targets, _ctx=None):
            return _M_omero.model.Project._op_removeAllProjectDatasetLinkSet.invoke(self, ((targets, ), _ctx))

        def clearDatasetLinks(self, _ctx=None):
            return _M_omero.model.Project._op_clearDatasetLinks.invoke(self, ((), _ctx))

        def reloadDatasetLinks(self, toCopy, _ctx=None):
            return _M_omero.model.Project._op_reloadDatasetLinks.invoke(self, ((toCopy, ), _ctx))

        def getDatasetLinksCountPerOwner(self, _ctx=None):
            return _M_omero.model.Project._op_getDatasetLinksCountPerOwner.invoke(self, ((), _ctx))

        def linkDataset(self, addition, _ctx=None):
            return _M_omero.model.Project._op_linkDataset.invoke(self, ((addition, ), _ctx))

        def addProjectDatasetLinkToBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.Project._op_addProjectDatasetLinkToBoth.invoke(self, ((link, bothSides), _ctx))

        def findProjectDatasetLink(self, removal, _ctx=None):
            return _M_omero.model.Project._op_findProjectDatasetLink.invoke(self, ((removal, ), _ctx))

        def unlinkDataset(self, removal, _ctx=None):
            return _M_omero.model.Project._op_unlinkDataset.invoke(self, ((removal, ), _ctx))

        def removeProjectDatasetLinkFromBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.Project._op_removeProjectDatasetLinkFromBoth.invoke(self, ((link, bothSides), _ctx))

        def linkedDatasetList(self, _ctx=None):
            return _M_omero.model.Project._op_linkedDatasetList.invoke(self, ((), _ctx))

        def unloadAnnotationLinks(self, _ctx=None):
            return _M_omero.model.Project._op_unloadAnnotationLinks.invoke(self, ((), _ctx))

        def sizeOfAnnotationLinks(self, _ctx=None):
            return _M_omero.model.Project._op_sizeOfAnnotationLinks.invoke(self, ((), _ctx))

        def copyAnnotationLinks(self, _ctx=None):
            return _M_omero.model.Project._op_copyAnnotationLinks.invoke(self, ((), _ctx))

        def addProjectAnnotationLink(self, target, _ctx=None):
            return _M_omero.model.Project._op_addProjectAnnotationLink.invoke(self, ((target, ), _ctx))

        def addAllProjectAnnotationLinkSet(self, targets, _ctx=None):
            return _M_omero.model.Project._op_addAllProjectAnnotationLinkSet.invoke(self, ((targets, ), _ctx))

        def removeProjectAnnotationLink(self, theTarget, _ctx=None):
            return _M_omero.model.Project._op_removeProjectAnnotationLink.invoke(self, ((theTarget, ), _ctx))

        def removeAllProjectAnnotationLinkSet(self, targets, _ctx=None):
            return _M_omero.model.Project._op_removeAllProjectAnnotationLinkSet.invoke(self, ((targets, ), _ctx))

        def clearAnnotationLinks(self, _ctx=None):
            return _M_omero.model.Project._op_clearAnnotationLinks.invoke(self, ((), _ctx))

        def reloadAnnotationLinks(self, toCopy, _ctx=None):
            return _M_omero.model.Project._op_reloadAnnotationLinks.invoke(self, ((toCopy, ), _ctx))

        def getAnnotationLinksCountPerOwner(self, _ctx=None):
            return _M_omero.model.Project._op_getAnnotationLinksCountPerOwner.invoke(self, ((), _ctx))

        def linkAnnotation(self, addition, _ctx=None):
            return _M_omero.model.Project._op_linkAnnotation.invoke(self, ((addition, ), _ctx))

        def addProjectAnnotationLinkToBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.Project._op_addProjectAnnotationLinkToBoth.invoke(self, ((link, bothSides), _ctx))

        def findProjectAnnotationLink(self, removal, _ctx=None):
            return _M_omero.model.Project._op_findProjectAnnotationLink.invoke(self, ((removal, ), _ctx))

        def unlinkAnnotation(self, removal, _ctx=None):
            return _M_omero.model.Project._op_unlinkAnnotation.invoke(self, ((removal, ), _ctx))

        def removeProjectAnnotationLinkFromBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.Project._op_removeProjectAnnotationLinkFromBoth.invoke(self, ((link, bothSides), _ctx))

        def linkedAnnotationList(self, _ctx=None):
            return _M_omero.model.Project._op_linkedAnnotationList.invoke(self, ((), _ctx))

        def getName(self, _ctx=None):
            return _M_omero.model.Project._op_getName.invoke(self, ((), _ctx))

        def setName(self, theName, _ctx=None):
            return _M_omero.model.Project._op_setName.invoke(self, ((theName, ), _ctx))

        def getDescription(self, _ctx=None):
            return _M_omero.model.Project._op_getDescription.invoke(self, ((), _ctx))

        def setDescription(self, theDescription, _ctx=None):
            return _M_omero.model.Project._op_setDescription.invoke(self, ((theDescription, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.ProjectPrx.ice_checkedCast(proxy, '::omero::model::Project', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.ProjectPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_ProjectPrx = IcePy.defineProxy('::omero::model::Project', ProjectPrx)

    _M_omero.model._t_Project = IcePy.declareClass('::omero::model::Project')

    _M_omero.model._t_Project = IcePy.defineClass('::omero::model::Project', Project, (), True, _M_omero.model._t_IObject, (), (
        ('_version', (), _M_omero._t_RInt),
        ('_datasetLinksSeq', (), _M_omero.model._t_ProjectDatasetLinksSeq),
        ('_datasetLinksLoaded', (), IcePy._t_bool),
        ('_datasetLinksCountPerOwner', (), _M_omero.sys._t_CountMap),
        ('_annotationLinksSeq', (), _M_omero.model._t_ProjectAnnotationLinksSeq),
        ('_annotationLinksLoaded', (), IcePy._t_bool),
        ('_annotationLinksCountPerOwner', (), _M_omero.sys._t_CountMap),
        ('_name', (), _M_omero._t_RString),
        ('_description', (), _M_omero._t_RString)
    ))
    Project.ice_type = _M_omero.model._t_Project

    Project._op_getVersion = IcePy.Operation('getVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    Project._op_setVersion = IcePy.Operation('setVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    Project._op_unloadDatasetLinks = IcePy.Operation('unloadDatasetLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Project._op_sizeOfDatasetLinks = IcePy.Operation('sizeOfDatasetLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())
    Project._op_copyDatasetLinks = IcePy.Operation('copyDatasetLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_ProjectDatasetLinksSeq, ())
    Project._op_addProjectDatasetLink = IcePy.Operation('addProjectDatasetLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ProjectDatasetLink),), (), None, ())
    Project._op_addAllProjectDatasetLinkSet = IcePy.Operation('addAllProjectDatasetLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ProjectDatasetLinksSeq),), (), None, ())
    Project._op_removeProjectDatasetLink = IcePy.Operation('removeProjectDatasetLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ProjectDatasetLink),), (), None, ())
    Project._op_removeAllProjectDatasetLinkSet = IcePy.Operation('removeAllProjectDatasetLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ProjectDatasetLinksSeq),), (), None, ())
    Project._op_clearDatasetLinks = IcePy.Operation('clearDatasetLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Project._op_reloadDatasetLinks = IcePy.Operation('reloadDatasetLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Project),), (), None, ())
    Project._op_getDatasetLinksCountPerOwner = IcePy.Operation('getDatasetLinksCountPerOwner', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.sys._t_CountMap, ())
    Project._op_linkDataset = IcePy.Operation('linkDataset', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Dataset),), (), _M_omero.model._t_ProjectDatasetLink, ())
    Project._op_addProjectDatasetLinkToBoth = IcePy.Operation('addProjectDatasetLinkToBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ProjectDatasetLink), ((), IcePy._t_bool)), (), None, ())
    Project._op_findProjectDatasetLink = IcePy.Operation('findProjectDatasetLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Dataset),), (), _M_omero.model._t_ProjectDatasetLinksSeq, ())
    Project._op_unlinkDataset = IcePy.Operation('unlinkDataset', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Dataset),), (), None, ())
    Project._op_removeProjectDatasetLinkFromBoth = IcePy.Operation('removeProjectDatasetLinkFromBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ProjectDatasetLink), ((), IcePy._t_bool)), (), None, ())
    Project._op_linkedDatasetList = IcePy.Operation('linkedDatasetList', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_ProjectLinkedDatasetSeq, ())
    Project._op_unloadAnnotationLinks = IcePy.Operation('unloadAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Project._op_sizeOfAnnotationLinks = IcePy.Operation('sizeOfAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())
    Project._op_copyAnnotationLinks = IcePy.Operation('copyAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_ProjectAnnotationLinksSeq, ())
    Project._op_addProjectAnnotationLink = IcePy.Operation('addProjectAnnotationLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ProjectAnnotationLink),), (), None, ())
    Project._op_addAllProjectAnnotationLinkSet = IcePy.Operation('addAllProjectAnnotationLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ProjectAnnotationLinksSeq),), (), None, ())
    Project._op_removeProjectAnnotationLink = IcePy.Operation('removeProjectAnnotationLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ProjectAnnotationLink),), (), None, ())
    Project._op_removeAllProjectAnnotationLinkSet = IcePy.Operation('removeAllProjectAnnotationLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ProjectAnnotationLinksSeq),), (), None, ())
    Project._op_clearAnnotationLinks = IcePy.Operation('clearAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Project._op_reloadAnnotationLinks = IcePy.Operation('reloadAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Project),), (), None, ())
    Project._op_getAnnotationLinksCountPerOwner = IcePy.Operation('getAnnotationLinksCountPerOwner', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.sys._t_CountMap, ())
    Project._op_linkAnnotation = IcePy.Operation('linkAnnotation', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Annotation),), (), _M_omero.model._t_ProjectAnnotationLink, ())
    Project._op_addProjectAnnotationLinkToBoth = IcePy.Operation('addProjectAnnotationLinkToBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ProjectAnnotationLink), ((), IcePy._t_bool)), (), None, ())
    Project._op_findProjectAnnotationLink = IcePy.Operation('findProjectAnnotationLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Annotation),), (), _M_omero.model._t_ProjectAnnotationLinksSeq, ())
    Project._op_unlinkAnnotation = IcePy.Operation('unlinkAnnotation', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Annotation),), (), None, ())
    Project._op_removeProjectAnnotationLinkFromBoth = IcePy.Operation('removeProjectAnnotationLinkFromBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ProjectAnnotationLink), ((), IcePy._t_bool)), (), None, ())
    Project._op_linkedAnnotationList = IcePy.Operation('linkedAnnotationList', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_ProjectLinkedAnnotationSeq, ())
    Project._op_getName = IcePy.Operation('getName', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Project._op_setName = IcePy.Operation('setName', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Project._op_getDescription = IcePy.Operation('getDescription', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Project._op_setDescription = IcePy.Operation('setDescription', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())

    _M_omero.model.Project = Project
    del Project

    _M_omero.model.ProjectPrx = ProjectPrx
    del ProjectPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
