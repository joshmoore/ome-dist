# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `ExperimenterGroup.ice'

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

if not _M_omero.model.__dict__.has_key('GroupExperimenterMap'):
    _M_omero.model._t_GroupExperimenterMap = IcePy.declareClass('::omero::model::GroupExperimenterMap')
    _M_omero.model._t_GroupExperimenterMapPrx = IcePy.declareProxy('::omero::model::GroupExperimenterMap')

if not _M_omero.model.__dict__.has_key('Experimenter'):
    _M_omero.model._t_Experimenter = IcePy.declareClass('::omero::model::Experimenter')
    _M_omero.model._t_ExperimenterPrx = IcePy.declareProxy('::omero::model::Experimenter')

if not _M_omero.model.__dict__.has_key('ExperimenterGroupAnnotationLink'):
    _M_omero.model._t_ExperimenterGroupAnnotationLink = IcePy.declareClass('::omero::model::ExperimenterGroupAnnotationLink')
    _M_omero.model._t_ExperimenterGroupAnnotationLinkPrx = IcePy.declareProxy('::omero::model::ExperimenterGroupAnnotationLink')

if not _M_omero.model.__dict__.has_key('Annotation'):
    _M_omero.model._t_Annotation = IcePy.declareClass('::omero::model::Annotation')
    _M_omero.model._t_AnnotationPrx = IcePy.declareProxy('::omero::model::Annotation')

if not _M_omero.model.__dict__.has_key('Details'):
    _M_omero.model._t_Details = IcePy.declareClass('::omero::model::Details')
    _M_omero.model._t_DetailsPrx = IcePy.declareProxy('::omero::model::Details')

if not _M_omero.model.__dict__.has_key('_t_ExperimenterGroupGroupExperimenterMapSeq'):
    _M_omero.model._t_ExperimenterGroupGroupExperimenterMapSeq = IcePy.defineSequence('::omero::model::ExperimenterGroupGroupExperimenterMapSeq', (), _M_omero.model._t_GroupExperimenterMap)

if not _M_omero.model.__dict__.has_key('_t_ExperimenterGroupLinkedExperimenterSeq'):
    _M_omero.model._t_ExperimenterGroupLinkedExperimenterSeq = IcePy.defineSequence('::omero::model::ExperimenterGroupLinkedExperimenterSeq', (), _M_omero.model._t_Experimenter)

if not _M_omero.model.__dict__.has_key('_t_ExperimenterGroupAnnotationLinksSeq'):
    _M_omero.model._t_ExperimenterGroupAnnotationLinksSeq = IcePy.defineSequence('::omero::model::ExperimenterGroupAnnotationLinksSeq', (), _M_omero.model._t_ExperimenterGroupAnnotationLink)

if not _M_omero.model.__dict__.has_key('_t_ExperimenterGroupLinkedAnnotationSeq'):
    _M_omero.model._t_ExperimenterGroupLinkedAnnotationSeq = IcePy.defineSequence('::omero::model::ExperimenterGroupLinkedAnnotationSeq', (), _M_omero.model._t_Annotation)

if not _M_omero.model.__dict__.has_key('ExperimenterGroup'):
    _M_omero.model.ExperimenterGroup = Ice.createTempClass()
    class ExperimenterGroup(_M_omero.model.IObject):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _name=None, _groupExperimenterMapSeq=None, _groupExperimenterMapLoaded=False, _annotationLinksSeq=None, _annotationLinksLoaded=False, _annotationLinksCountPerOwner=None, _description=None):
            if __builtin__.type(self) == _M_omero.model.ExperimenterGroup:
                raise RuntimeError('omero.model.ExperimenterGroup is an abstract class')
            _M_omero.model.IObject.__init__(self, _id, _details, _loaded)
            self._version = _version
            self._name = _name
            self._groupExperimenterMapSeq = _groupExperimenterMapSeq
            self._groupExperimenterMapLoaded = _groupExperimenterMapLoaded
            self._annotationLinksSeq = _annotationLinksSeq
            self._annotationLinksLoaded = _annotationLinksLoaded
            self._annotationLinksCountPerOwner = _annotationLinksCountPerOwner
            self._description = _description

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::ExperimenterGroup', '::omero::model::IObject')

        def ice_id(self, current=None):
            return '::omero::model::ExperimenterGroup'

        def ice_staticId():
            return '::omero::model::ExperimenterGroup'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getVersion(self, current=None):
        # def setVersion(self, theVersion, current=None):
        # def getName(self, current=None):
        # def setName(self, theName, current=None):
        # def unloadGroupExperimenterMap(self, current=None):
        # def sizeOfGroupExperimenterMap(self, current=None):
        # def copyGroupExperimenterMap(self, current=None):
        # def addGroupExperimenterMap(self, target, current=None):
        # def addAllGroupExperimenterMapSet(self, targets, current=None):
        # def removeGroupExperimenterMap(self, theTarget, current=None):
        # def removeAllGroupExperimenterMapSet(self, targets, current=None):
        # def clearGroupExperimenterMap(self, current=None):
        # def reloadGroupExperimenterMap(self, toCopy, current=None):
        # def linkExperimenter(self, addition, current=None):
        # def addGroupExperimenterMapToBoth(self, link, bothSides, current=None):
        # def findGroupExperimenterMap(self, removal, current=None):
        # def unlinkExperimenter(self, removal, current=None):
        # def removeGroupExperimenterMapFromBoth(self, link, bothSides, current=None):
        # def linkedExperimenterList(self, current=None):
        # def unloadAnnotationLinks(self, current=None):
        # def sizeOfAnnotationLinks(self, current=None):
        # def copyAnnotationLinks(self, current=None):
        # def addExperimenterGroupAnnotationLink(self, target, current=None):
        # def addAllExperimenterGroupAnnotationLinkSet(self, targets, current=None):
        # def removeExperimenterGroupAnnotationLink(self, theTarget, current=None):
        # def removeAllExperimenterGroupAnnotationLinkSet(self, targets, current=None):
        # def clearAnnotationLinks(self, current=None):
        # def reloadAnnotationLinks(self, toCopy, current=None):
        # def getAnnotationLinksCountPerOwner(self, current=None):
        # def linkAnnotation(self, addition, current=None):
        # def addExperimenterGroupAnnotationLinkToBoth(self, link, bothSides, current=None):
        # def findExperimenterGroupAnnotationLink(self, removal, current=None):
        # def unlinkAnnotation(self, removal, current=None):
        # def removeExperimenterGroupAnnotationLinkFromBoth(self, link, bothSides, current=None):
        # def linkedAnnotationList(self, current=None):
        # def getDescription(self, current=None):
        # def setDescription(self, theDescription, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_ExperimenterGroup)

        __repr__ = __str__

    _M_omero.model.ExperimenterGroupPrx = Ice.createTempClass()
    class ExperimenterGroupPrx(_M_omero.model.IObjectPrx):

        def getVersion(self, _ctx=None):
            return _M_omero.model.ExperimenterGroup._op_getVersion.invoke(self, ((), _ctx))

        def setVersion(self, theVersion, _ctx=None):
            return _M_omero.model.ExperimenterGroup._op_setVersion.invoke(self, ((theVersion, ), _ctx))

        def getName(self, _ctx=None):
            return _M_omero.model.ExperimenterGroup._op_getName.invoke(self, ((), _ctx))

        def setName(self, theName, _ctx=None):
            return _M_omero.model.ExperimenterGroup._op_setName.invoke(self, ((theName, ), _ctx))

        def unloadGroupExperimenterMap(self, _ctx=None):
            return _M_omero.model.ExperimenterGroup._op_unloadGroupExperimenterMap.invoke(self, ((), _ctx))

        def sizeOfGroupExperimenterMap(self, _ctx=None):
            return _M_omero.model.ExperimenterGroup._op_sizeOfGroupExperimenterMap.invoke(self, ((), _ctx))

        def copyGroupExperimenterMap(self, _ctx=None):
            return _M_omero.model.ExperimenterGroup._op_copyGroupExperimenterMap.invoke(self, ((), _ctx))

        def addGroupExperimenterMap(self, target, _ctx=None):
            return _M_omero.model.ExperimenterGroup._op_addGroupExperimenterMap.invoke(self, ((target, ), _ctx))

        def addAllGroupExperimenterMapSet(self, targets, _ctx=None):
            return _M_omero.model.ExperimenterGroup._op_addAllGroupExperimenterMapSet.invoke(self, ((targets, ), _ctx))

        def removeGroupExperimenterMap(self, theTarget, _ctx=None):
            return _M_omero.model.ExperimenterGroup._op_removeGroupExperimenterMap.invoke(self, ((theTarget, ), _ctx))

        def removeAllGroupExperimenterMapSet(self, targets, _ctx=None):
            return _M_omero.model.ExperimenterGroup._op_removeAllGroupExperimenterMapSet.invoke(self, ((targets, ), _ctx))

        def clearGroupExperimenterMap(self, _ctx=None):
            return _M_omero.model.ExperimenterGroup._op_clearGroupExperimenterMap.invoke(self, ((), _ctx))

        def reloadGroupExperimenterMap(self, toCopy, _ctx=None):
            return _M_omero.model.ExperimenterGroup._op_reloadGroupExperimenterMap.invoke(self, ((toCopy, ), _ctx))

        def linkExperimenter(self, addition, _ctx=None):
            return _M_omero.model.ExperimenterGroup._op_linkExperimenter.invoke(self, ((addition, ), _ctx))

        def addGroupExperimenterMapToBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.ExperimenterGroup._op_addGroupExperimenterMapToBoth.invoke(self, ((link, bothSides), _ctx))

        def findGroupExperimenterMap(self, removal, _ctx=None):
            return _M_omero.model.ExperimenterGroup._op_findGroupExperimenterMap.invoke(self, ((removal, ), _ctx))

        def unlinkExperimenter(self, removal, _ctx=None):
            return _M_omero.model.ExperimenterGroup._op_unlinkExperimenter.invoke(self, ((removal, ), _ctx))

        def removeGroupExperimenterMapFromBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.ExperimenterGroup._op_removeGroupExperimenterMapFromBoth.invoke(self, ((link, bothSides), _ctx))

        def linkedExperimenterList(self, _ctx=None):
            return _M_omero.model.ExperimenterGroup._op_linkedExperimenterList.invoke(self, ((), _ctx))

        def unloadAnnotationLinks(self, _ctx=None):
            return _M_omero.model.ExperimenterGroup._op_unloadAnnotationLinks.invoke(self, ((), _ctx))

        def sizeOfAnnotationLinks(self, _ctx=None):
            return _M_omero.model.ExperimenterGroup._op_sizeOfAnnotationLinks.invoke(self, ((), _ctx))

        def copyAnnotationLinks(self, _ctx=None):
            return _M_omero.model.ExperimenterGroup._op_copyAnnotationLinks.invoke(self, ((), _ctx))

        def addExperimenterGroupAnnotationLink(self, target, _ctx=None):
            return _M_omero.model.ExperimenterGroup._op_addExperimenterGroupAnnotationLink.invoke(self, ((target, ), _ctx))

        def addAllExperimenterGroupAnnotationLinkSet(self, targets, _ctx=None):
            return _M_omero.model.ExperimenterGroup._op_addAllExperimenterGroupAnnotationLinkSet.invoke(self, ((targets, ), _ctx))

        def removeExperimenterGroupAnnotationLink(self, theTarget, _ctx=None):
            return _M_omero.model.ExperimenterGroup._op_removeExperimenterGroupAnnotationLink.invoke(self, ((theTarget, ), _ctx))

        def removeAllExperimenterGroupAnnotationLinkSet(self, targets, _ctx=None):
            return _M_omero.model.ExperimenterGroup._op_removeAllExperimenterGroupAnnotationLinkSet.invoke(self, ((targets, ), _ctx))

        def clearAnnotationLinks(self, _ctx=None):
            return _M_omero.model.ExperimenterGroup._op_clearAnnotationLinks.invoke(self, ((), _ctx))

        def reloadAnnotationLinks(self, toCopy, _ctx=None):
            return _M_omero.model.ExperimenterGroup._op_reloadAnnotationLinks.invoke(self, ((toCopy, ), _ctx))

        def getAnnotationLinksCountPerOwner(self, _ctx=None):
            return _M_omero.model.ExperimenterGroup._op_getAnnotationLinksCountPerOwner.invoke(self, ((), _ctx))

        def linkAnnotation(self, addition, _ctx=None):
            return _M_omero.model.ExperimenterGroup._op_linkAnnotation.invoke(self, ((addition, ), _ctx))

        def addExperimenterGroupAnnotationLinkToBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.ExperimenterGroup._op_addExperimenterGroupAnnotationLinkToBoth.invoke(self, ((link, bothSides), _ctx))

        def findExperimenterGroupAnnotationLink(self, removal, _ctx=None):
            return _M_omero.model.ExperimenterGroup._op_findExperimenterGroupAnnotationLink.invoke(self, ((removal, ), _ctx))

        def unlinkAnnotation(self, removal, _ctx=None):
            return _M_omero.model.ExperimenterGroup._op_unlinkAnnotation.invoke(self, ((removal, ), _ctx))

        def removeExperimenterGroupAnnotationLinkFromBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.ExperimenterGroup._op_removeExperimenterGroupAnnotationLinkFromBoth.invoke(self, ((link, bothSides), _ctx))

        def linkedAnnotationList(self, _ctx=None):
            return _M_omero.model.ExperimenterGroup._op_linkedAnnotationList.invoke(self, ((), _ctx))

        def getDescription(self, _ctx=None):
            return _M_omero.model.ExperimenterGroup._op_getDescription.invoke(self, ((), _ctx))

        def setDescription(self, theDescription, _ctx=None):
            return _M_omero.model.ExperimenterGroup._op_setDescription.invoke(self, ((theDescription, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.ExperimenterGroupPrx.ice_checkedCast(proxy, '::omero::model::ExperimenterGroup', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.ExperimenterGroupPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_ExperimenterGroupPrx = IcePy.defineProxy('::omero::model::ExperimenterGroup', ExperimenterGroupPrx)

    _M_omero.model._t_ExperimenterGroup = IcePy.declareClass('::omero::model::ExperimenterGroup')

    _M_omero.model._t_ExperimenterGroup = IcePy.defineClass('::omero::model::ExperimenterGroup', ExperimenterGroup, (), True, _M_omero.model._t_IObject, (), (
        ('_version', (), _M_omero._t_RInt),
        ('_name', (), _M_omero._t_RString),
        ('_groupExperimenterMapSeq', (), _M_omero.model._t_ExperimenterGroupGroupExperimenterMapSeq),
        ('_groupExperimenterMapLoaded', (), IcePy._t_bool),
        ('_annotationLinksSeq', (), _M_omero.model._t_ExperimenterGroupAnnotationLinksSeq),
        ('_annotationLinksLoaded', (), IcePy._t_bool),
        ('_annotationLinksCountPerOwner', (), _M_omero.sys._t_CountMap),
        ('_description', (), _M_omero._t_RString)
    ))
    ExperimenterGroup.ice_type = _M_omero.model._t_ExperimenterGroup

    ExperimenterGroup._op_getVersion = IcePy.Operation('getVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    ExperimenterGroup._op_setVersion = IcePy.Operation('setVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    ExperimenterGroup._op_getName = IcePy.Operation('getName', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    ExperimenterGroup._op_setName = IcePy.Operation('setName', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    ExperimenterGroup._op_unloadGroupExperimenterMap = IcePy.Operation('unloadGroupExperimenterMap', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    ExperimenterGroup._op_sizeOfGroupExperimenterMap = IcePy.Operation('sizeOfGroupExperimenterMap', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())
    ExperimenterGroup._op_copyGroupExperimenterMap = IcePy.Operation('copyGroupExperimenterMap', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_ExperimenterGroupGroupExperimenterMapSeq, ())
    ExperimenterGroup._op_addGroupExperimenterMap = IcePy.Operation('addGroupExperimenterMap', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_GroupExperimenterMap),), (), None, ())
    ExperimenterGroup._op_addAllGroupExperimenterMapSet = IcePy.Operation('addAllGroupExperimenterMapSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ExperimenterGroupGroupExperimenterMapSeq),), (), None, ())
    ExperimenterGroup._op_removeGroupExperimenterMap = IcePy.Operation('removeGroupExperimenterMap', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_GroupExperimenterMap),), (), None, ())
    ExperimenterGroup._op_removeAllGroupExperimenterMapSet = IcePy.Operation('removeAllGroupExperimenterMapSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ExperimenterGroupGroupExperimenterMapSeq),), (), None, ())
    ExperimenterGroup._op_clearGroupExperimenterMap = IcePy.Operation('clearGroupExperimenterMap', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    ExperimenterGroup._op_reloadGroupExperimenterMap = IcePy.Operation('reloadGroupExperimenterMap', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ExperimenterGroup),), (), None, ())
    ExperimenterGroup._op_linkExperimenter = IcePy.Operation('linkExperimenter', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Experimenter),), (), _M_omero.model._t_GroupExperimenterMap, ())
    ExperimenterGroup._op_addGroupExperimenterMapToBoth = IcePy.Operation('addGroupExperimenterMapToBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_GroupExperimenterMap), ((), IcePy._t_bool)), (), None, ())
    ExperimenterGroup._op_findGroupExperimenterMap = IcePy.Operation('findGroupExperimenterMap', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Experimenter),), (), _M_omero.model._t_ExperimenterGroupGroupExperimenterMapSeq, ())
    ExperimenterGroup._op_unlinkExperimenter = IcePy.Operation('unlinkExperimenter', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Experimenter),), (), None, ())
    ExperimenterGroup._op_removeGroupExperimenterMapFromBoth = IcePy.Operation('removeGroupExperimenterMapFromBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_GroupExperimenterMap), ((), IcePy._t_bool)), (), None, ())
    ExperimenterGroup._op_linkedExperimenterList = IcePy.Operation('linkedExperimenterList', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_ExperimenterGroupLinkedExperimenterSeq, ())
    ExperimenterGroup._op_unloadAnnotationLinks = IcePy.Operation('unloadAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    ExperimenterGroup._op_sizeOfAnnotationLinks = IcePy.Operation('sizeOfAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())
    ExperimenterGroup._op_copyAnnotationLinks = IcePy.Operation('copyAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_ExperimenterGroupAnnotationLinksSeq, ())
    ExperimenterGroup._op_addExperimenterGroupAnnotationLink = IcePy.Operation('addExperimenterGroupAnnotationLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ExperimenterGroupAnnotationLink),), (), None, ())
    ExperimenterGroup._op_addAllExperimenterGroupAnnotationLinkSet = IcePy.Operation('addAllExperimenterGroupAnnotationLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ExperimenterGroupAnnotationLinksSeq),), (), None, ())
    ExperimenterGroup._op_removeExperimenterGroupAnnotationLink = IcePy.Operation('removeExperimenterGroupAnnotationLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ExperimenterGroupAnnotationLink),), (), None, ())
    ExperimenterGroup._op_removeAllExperimenterGroupAnnotationLinkSet = IcePy.Operation('removeAllExperimenterGroupAnnotationLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ExperimenterGroupAnnotationLinksSeq),), (), None, ())
    ExperimenterGroup._op_clearAnnotationLinks = IcePy.Operation('clearAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    ExperimenterGroup._op_reloadAnnotationLinks = IcePy.Operation('reloadAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ExperimenterGroup),), (), None, ())
    ExperimenterGroup._op_getAnnotationLinksCountPerOwner = IcePy.Operation('getAnnotationLinksCountPerOwner', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.sys._t_CountMap, ())
    ExperimenterGroup._op_linkAnnotation = IcePy.Operation('linkAnnotation', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Annotation),), (), _M_omero.model._t_ExperimenterGroupAnnotationLink, ())
    ExperimenterGroup._op_addExperimenterGroupAnnotationLinkToBoth = IcePy.Operation('addExperimenterGroupAnnotationLinkToBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ExperimenterGroupAnnotationLink), ((), IcePy._t_bool)), (), None, ())
    ExperimenterGroup._op_findExperimenterGroupAnnotationLink = IcePy.Operation('findExperimenterGroupAnnotationLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Annotation),), (), _M_omero.model._t_ExperimenterGroupAnnotationLinksSeq, ())
    ExperimenterGroup._op_unlinkAnnotation = IcePy.Operation('unlinkAnnotation', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Annotation),), (), None, ())
    ExperimenterGroup._op_removeExperimenterGroupAnnotationLinkFromBoth = IcePy.Operation('removeExperimenterGroupAnnotationLinkFromBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ExperimenterGroupAnnotationLink), ((), IcePy._t_bool)), (), None, ())
    ExperimenterGroup._op_linkedAnnotationList = IcePy.Operation('linkedAnnotationList', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_ExperimenterGroupLinkedAnnotationSeq, ())
    ExperimenterGroup._op_getDescription = IcePy.Operation('getDescription', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    ExperimenterGroup._op_setDescription = IcePy.Operation('setDescription', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())

    _M_omero.model.ExperimenterGroup = ExperimenterGroup
    del ExperimenterGroup

    _M_omero.model.ExperimenterGroupPrx = ExperimenterGroupPrx
    del ExperimenterGroupPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
