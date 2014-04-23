# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `Experimenter.ice'

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

if not _M_omero.model.__dict__.has_key('ExperimenterGroup'):
    _M_omero.model._t_ExperimenterGroup = IcePy.declareClass('::omero::model::ExperimenterGroup')
    _M_omero.model._t_ExperimenterGroupPrx = IcePy.declareProxy('::omero::model::ExperimenterGroup')

if not _M_omero.model.__dict__.has_key('ExperimenterAnnotationLink'):
    _M_omero.model._t_ExperimenterAnnotationLink = IcePy.declareClass('::omero::model::ExperimenterAnnotationLink')
    _M_omero.model._t_ExperimenterAnnotationLinkPrx = IcePy.declareProxy('::omero::model::ExperimenterAnnotationLink')

if not _M_omero.model.__dict__.has_key('Annotation'):
    _M_omero.model._t_Annotation = IcePy.declareClass('::omero::model::Annotation')
    _M_omero.model._t_AnnotationPrx = IcePy.declareProxy('::omero::model::Annotation')

if not _M_omero.model.__dict__.has_key('Details'):
    _M_omero.model._t_Details = IcePy.declareClass('::omero::model::Details')
    _M_omero.model._t_DetailsPrx = IcePy.declareProxy('::omero::model::Details')

if not _M_omero.model.__dict__.has_key('_t_ExperimenterGroupExperimenterMapSeq'):
    _M_omero.model._t_ExperimenterGroupExperimenterMapSeq = IcePy.defineSequence('::omero::model::ExperimenterGroupExperimenterMapSeq', (), _M_omero.model._t_GroupExperimenterMap)

if not _M_omero.model.__dict__.has_key('_t_ExperimenterLinkedExperimenterGroupSeq'):
    _M_omero.model._t_ExperimenterLinkedExperimenterGroupSeq = IcePy.defineSequence('::omero::model::ExperimenterLinkedExperimenterGroupSeq', (), _M_omero.model._t_ExperimenterGroup)

if not _M_omero.model.__dict__.has_key('_t_ExperimenterAnnotationLinksSeq'):
    _M_omero.model._t_ExperimenterAnnotationLinksSeq = IcePy.defineSequence('::omero::model::ExperimenterAnnotationLinksSeq', (), _M_omero.model._t_ExperimenterAnnotationLink)

if not _M_omero.model.__dict__.has_key('_t_ExperimenterLinkedAnnotationSeq'):
    _M_omero.model._t_ExperimenterLinkedAnnotationSeq = IcePy.defineSequence('::omero::model::ExperimenterLinkedAnnotationSeq', (), _M_omero.model._t_Annotation)

if not _M_omero.model.__dict__.has_key('Experimenter'):
    _M_omero.model.Experimenter = Ice.createTempClass()
    class Experimenter(_M_omero.model.IObject):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _groupExperimenterMapSeq=None, _groupExperimenterMapLoaded=False, _omeName=None, _firstName=None, _middleName=None, _lastName=None, _institution=None, _email=None, _annotationLinksSeq=None, _annotationLinksLoaded=False, _annotationLinksCountPerOwner=None):
            if __builtin__.type(self) == _M_omero.model.Experimenter:
                raise RuntimeError('omero.model.Experimenter is an abstract class')
            _M_omero.model.IObject.__init__(self, _id, _details, _loaded)
            self._version = _version
            self._groupExperimenterMapSeq = _groupExperimenterMapSeq
            self._groupExperimenterMapLoaded = _groupExperimenterMapLoaded
            self._omeName = _omeName
            self._firstName = _firstName
            self._middleName = _middleName
            self._lastName = _lastName
            self._institution = _institution
            self._email = _email
            self._annotationLinksSeq = _annotationLinksSeq
            self._annotationLinksLoaded = _annotationLinksLoaded
            self._annotationLinksCountPerOwner = _annotationLinksCountPerOwner

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::Experimenter', '::omero::model::IObject')

        def ice_id(self, current=None):
            return '::omero::model::Experimenter'

        def ice_staticId():
            return '::omero::model::Experimenter'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getVersion(self, current=None):
        # def setVersion(self, theVersion, current=None):
        # def unloadGroupExperimenterMap(self, current=None):
        # def sizeOfGroupExperimenterMap(self, current=None):
        # def copyGroupExperimenterMap(self, current=None):
        # def addGroupExperimenterMap(self, target, current=None):
        # def addAllGroupExperimenterMapSet(self, targets, current=None):
        # def removeGroupExperimenterMap(self, theTarget, current=None):
        # def removeAllGroupExperimenterMapSet(self, targets, current=None):
        # def clearGroupExperimenterMap(self, current=None):
        # def reloadGroupExperimenterMap(self, toCopy, current=None):
        # def getGroupExperimenterMap(self, index, current=None):
        # def setGroupExperimenterMap(self, index, theElement, current=None):
        # def getPrimaryGroupExperimenterMap(self, current=None):
        # def setPrimaryGroupExperimenterMap(self, theElement, current=None):
        # def linkExperimenterGroup(self, addition, current=None):
        # def addGroupExperimenterMapToBoth(self, link, bothSides, current=None):
        # def findGroupExperimenterMap(self, removal, current=None):
        # def unlinkExperimenterGroup(self, removal, current=None):
        # def removeGroupExperimenterMapFromBoth(self, link, bothSides, current=None):
        # def linkedExperimenterGroupList(self, current=None):
        # def getOmeName(self, current=None):
        # def setOmeName(self, theOmeName, current=None):
        # def getFirstName(self, current=None):
        # def setFirstName(self, theFirstName, current=None):
        # def getMiddleName(self, current=None):
        # def setMiddleName(self, theMiddleName, current=None):
        # def getLastName(self, current=None):
        # def setLastName(self, theLastName, current=None):
        # def getInstitution(self, current=None):
        # def setInstitution(self, theInstitution, current=None):
        # def getEmail(self, current=None):
        # def setEmail(self, theEmail, current=None):
        # def unloadAnnotationLinks(self, current=None):
        # def sizeOfAnnotationLinks(self, current=None):
        # def copyAnnotationLinks(self, current=None):
        # def addExperimenterAnnotationLink(self, target, current=None):
        # def addAllExperimenterAnnotationLinkSet(self, targets, current=None):
        # def removeExperimenterAnnotationLink(self, theTarget, current=None):
        # def removeAllExperimenterAnnotationLinkSet(self, targets, current=None):
        # def clearAnnotationLinks(self, current=None):
        # def reloadAnnotationLinks(self, toCopy, current=None):
        # def getAnnotationLinksCountPerOwner(self, current=None):
        # def linkAnnotation(self, addition, current=None):
        # def addExperimenterAnnotationLinkToBoth(self, link, bothSides, current=None):
        # def findExperimenterAnnotationLink(self, removal, current=None):
        # def unlinkAnnotation(self, removal, current=None):
        # def removeExperimenterAnnotationLinkFromBoth(self, link, bothSides, current=None):
        # def linkedAnnotationList(self, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_Experimenter)

        __repr__ = __str__

    _M_omero.model.ExperimenterPrx = Ice.createTempClass()
    class ExperimenterPrx(_M_omero.model.IObjectPrx):

        def getVersion(self, _ctx=None):
            return _M_omero.model.Experimenter._op_getVersion.invoke(self, ((), _ctx))

        def setVersion(self, theVersion, _ctx=None):
            return _M_omero.model.Experimenter._op_setVersion.invoke(self, ((theVersion, ), _ctx))

        def unloadGroupExperimenterMap(self, _ctx=None):
            return _M_omero.model.Experimenter._op_unloadGroupExperimenterMap.invoke(self, ((), _ctx))

        def sizeOfGroupExperimenterMap(self, _ctx=None):
            return _M_omero.model.Experimenter._op_sizeOfGroupExperimenterMap.invoke(self, ((), _ctx))

        def copyGroupExperimenterMap(self, _ctx=None):
            return _M_omero.model.Experimenter._op_copyGroupExperimenterMap.invoke(self, ((), _ctx))

        def addGroupExperimenterMap(self, target, _ctx=None):
            return _M_omero.model.Experimenter._op_addGroupExperimenterMap.invoke(self, ((target, ), _ctx))

        def addAllGroupExperimenterMapSet(self, targets, _ctx=None):
            return _M_omero.model.Experimenter._op_addAllGroupExperimenterMapSet.invoke(self, ((targets, ), _ctx))

        def removeGroupExperimenterMap(self, theTarget, _ctx=None):
            return _M_omero.model.Experimenter._op_removeGroupExperimenterMap.invoke(self, ((theTarget, ), _ctx))

        def removeAllGroupExperimenterMapSet(self, targets, _ctx=None):
            return _M_omero.model.Experimenter._op_removeAllGroupExperimenterMapSet.invoke(self, ((targets, ), _ctx))

        def clearGroupExperimenterMap(self, _ctx=None):
            return _M_omero.model.Experimenter._op_clearGroupExperimenterMap.invoke(self, ((), _ctx))

        def reloadGroupExperimenterMap(self, toCopy, _ctx=None):
            return _M_omero.model.Experimenter._op_reloadGroupExperimenterMap.invoke(self, ((toCopy, ), _ctx))

        def getGroupExperimenterMap(self, index, _ctx=None):
            return _M_omero.model.Experimenter._op_getGroupExperimenterMap.invoke(self, ((index, ), _ctx))

        def setGroupExperimenterMap(self, index, theElement, _ctx=None):
            return _M_omero.model.Experimenter._op_setGroupExperimenterMap.invoke(self, ((index, theElement), _ctx))

        def getPrimaryGroupExperimenterMap(self, _ctx=None):
            return _M_omero.model.Experimenter._op_getPrimaryGroupExperimenterMap.invoke(self, ((), _ctx))

        def setPrimaryGroupExperimenterMap(self, theElement, _ctx=None):
            return _M_omero.model.Experimenter._op_setPrimaryGroupExperimenterMap.invoke(self, ((theElement, ), _ctx))

        def linkExperimenterGroup(self, addition, _ctx=None):
            return _M_omero.model.Experimenter._op_linkExperimenterGroup.invoke(self, ((addition, ), _ctx))

        def addGroupExperimenterMapToBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.Experimenter._op_addGroupExperimenterMapToBoth.invoke(self, ((link, bothSides), _ctx))

        def findGroupExperimenterMap(self, removal, _ctx=None):
            return _M_omero.model.Experimenter._op_findGroupExperimenterMap.invoke(self, ((removal, ), _ctx))

        def unlinkExperimenterGroup(self, removal, _ctx=None):
            return _M_omero.model.Experimenter._op_unlinkExperimenterGroup.invoke(self, ((removal, ), _ctx))

        def removeGroupExperimenterMapFromBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.Experimenter._op_removeGroupExperimenterMapFromBoth.invoke(self, ((link, bothSides), _ctx))

        def linkedExperimenterGroupList(self, _ctx=None):
            return _M_omero.model.Experimenter._op_linkedExperimenterGroupList.invoke(self, ((), _ctx))

        def getOmeName(self, _ctx=None):
            return _M_omero.model.Experimenter._op_getOmeName.invoke(self, ((), _ctx))

        def setOmeName(self, theOmeName, _ctx=None):
            return _M_omero.model.Experimenter._op_setOmeName.invoke(self, ((theOmeName, ), _ctx))

        def getFirstName(self, _ctx=None):
            return _M_omero.model.Experimenter._op_getFirstName.invoke(self, ((), _ctx))

        def setFirstName(self, theFirstName, _ctx=None):
            return _M_omero.model.Experimenter._op_setFirstName.invoke(self, ((theFirstName, ), _ctx))

        def getMiddleName(self, _ctx=None):
            return _M_omero.model.Experimenter._op_getMiddleName.invoke(self, ((), _ctx))

        def setMiddleName(self, theMiddleName, _ctx=None):
            return _M_omero.model.Experimenter._op_setMiddleName.invoke(self, ((theMiddleName, ), _ctx))

        def getLastName(self, _ctx=None):
            return _M_omero.model.Experimenter._op_getLastName.invoke(self, ((), _ctx))

        def setLastName(self, theLastName, _ctx=None):
            return _M_omero.model.Experimenter._op_setLastName.invoke(self, ((theLastName, ), _ctx))

        def getInstitution(self, _ctx=None):
            return _M_omero.model.Experimenter._op_getInstitution.invoke(self, ((), _ctx))

        def setInstitution(self, theInstitution, _ctx=None):
            return _M_omero.model.Experimenter._op_setInstitution.invoke(self, ((theInstitution, ), _ctx))

        def getEmail(self, _ctx=None):
            return _M_omero.model.Experimenter._op_getEmail.invoke(self, ((), _ctx))

        def setEmail(self, theEmail, _ctx=None):
            return _M_omero.model.Experimenter._op_setEmail.invoke(self, ((theEmail, ), _ctx))

        def unloadAnnotationLinks(self, _ctx=None):
            return _M_omero.model.Experimenter._op_unloadAnnotationLinks.invoke(self, ((), _ctx))

        def sizeOfAnnotationLinks(self, _ctx=None):
            return _M_omero.model.Experimenter._op_sizeOfAnnotationLinks.invoke(self, ((), _ctx))

        def copyAnnotationLinks(self, _ctx=None):
            return _M_omero.model.Experimenter._op_copyAnnotationLinks.invoke(self, ((), _ctx))

        def addExperimenterAnnotationLink(self, target, _ctx=None):
            return _M_omero.model.Experimenter._op_addExperimenterAnnotationLink.invoke(self, ((target, ), _ctx))

        def addAllExperimenterAnnotationLinkSet(self, targets, _ctx=None):
            return _M_omero.model.Experimenter._op_addAllExperimenterAnnotationLinkSet.invoke(self, ((targets, ), _ctx))

        def removeExperimenterAnnotationLink(self, theTarget, _ctx=None):
            return _M_omero.model.Experimenter._op_removeExperimenterAnnotationLink.invoke(self, ((theTarget, ), _ctx))

        def removeAllExperimenterAnnotationLinkSet(self, targets, _ctx=None):
            return _M_omero.model.Experimenter._op_removeAllExperimenterAnnotationLinkSet.invoke(self, ((targets, ), _ctx))

        def clearAnnotationLinks(self, _ctx=None):
            return _M_omero.model.Experimenter._op_clearAnnotationLinks.invoke(self, ((), _ctx))

        def reloadAnnotationLinks(self, toCopy, _ctx=None):
            return _M_omero.model.Experimenter._op_reloadAnnotationLinks.invoke(self, ((toCopy, ), _ctx))

        def getAnnotationLinksCountPerOwner(self, _ctx=None):
            return _M_omero.model.Experimenter._op_getAnnotationLinksCountPerOwner.invoke(self, ((), _ctx))

        def linkAnnotation(self, addition, _ctx=None):
            return _M_omero.model.Experimenter._op_linkAnnotation.invoke(self, ((addition, ), _ctx))

        def addExperimenterAnnotationLinkToBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.Experimenter._op_addExperimenterAnnotationLinkToBoth.invoke(self, ((link, bothSides), _ctx))

        def findExperimenterAnnotationLink(self, removal, _ctx=None):
            return _M_omero.model.Experimenter._op_findExperimenterAnnotationLink.invoke(self, ((removal, ), _ctx))

        def unlinkAnnotation(self, removal, _ctx=None):
            return _M_omero.model.Experimenter._op_unlinkAnnotation.invoke(self, ((removal, ), _ctx))

        def removeExperimenterAnnotationLinkFromBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.Experimenter._op_removeExperimenterAnnotationLinkFromBoth.invoke(self, ((link, bothSides), _ctx))

        def linkedAnnotationList(self, _ctx=None):
            return _M_omero.model.Experimenter._op_linkedAnnotationList.invoke(self, ((), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.ExperimenterPrx.ice_checkedCast(proxy, '::omero::model::Experimenter', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.ExperimenterPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_ExperimenterPrx = IcePy.defineProxy('::omero::model::Experimenter', ExperimenterPrx)

    _M_omero.model._t_Experimenter = IcePy.declareClass('::omero::model::Experimenter')

    _M_omero.model._t_Experimenter = IcePy.defineClass('::omero::model::Experimenter', Experimenter, (), True, _M_omero.model._t_IObject, (), (
        ('_version', (), _M_omero._t_RInt),
        ('_groupExperimenterMapSeq', (), _M_omero.model._t_ExperimenterGroupExperimenterMapSeq),
        ('_groupExperimenterMapLoaded', (), IcePy._t_bool),
        ('_omeName', (), _M_omero._t_RString),
        ('_firstName', (), _M_omero._t_RString),
        ('_middleName', (), _M_omero._t_RString),
        ('_lastName', (), _M_omero._t_RString),
        ('_institution', (), _M_omero._t_RString),
        ('_email', (), _M_omero._t_RString),
        ('_annotationLinksSeq', (), _M_omero.model._t_ExperimenterAnnotationLinksSeq),
        ('_annotationLinksLoaded', (), IcePy._t_bool),
        ('_annotationLinksCountPerOwner', (), _M_omero.sys._t_CountMap)
    ))
    Experimenter.ice_type = _M_omero.model._t_Experimenter

    Experimenter._op_getVersion = IcePy.Operation('getVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    Experimenter._op_setVersion = IcePy.Operation('setVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    Experimenter._op_unloadGroupExperimenterMap = IcePy.Operation('unloadGroupExperimenterMap', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Experimenter._op_sizeOfGroupExperimenterMap = IcePy.Operation('sizeOfGroupExperimenterMap', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())
    Experimenter._op_copyGroupExperimenterMap = IcePy.Operation('copyGroupExperimenterMap', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_ExperimenterGroupExperimenterMapSeq, ())
    Experimenter._op_addGroupExperimenterMap = IcePy.Operation('addGroupExperimenterMap', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_GroupExperimenterMap),), (), None, ())
    Experimenter._op_addAllGroupExperimenterMapSet = IcePy.Operation('addAllGroupExperimenterMapSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ExperimenterGroupExperimenterMapSeq),), (), None, ())
    Experimenter._op_removeGroupExperimenterMap = IcePy.Operation('removeGroupExperimenterMap', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_GroupExperimenterMap),), (), None, ())
    Experimenter._op_removeAllGroupExperimenterMapSet = IcePy.Operation('removeAllGroupExperimenterMapSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ExperimenterGroupExperimenterMapSeq),), (), None, ())
    Experimenter._op_clearGroupExperimenterMap = IcePy.Operation('clearGroupExperimenterMap', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Experimenter._op_reloadGroupExperimenterMap = IcePy.Operation('reloadGroupExperimenterMap', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Experimenter),), (), None, ())
    Experimenter._op_getGroupExperimenterMap = IcePy.Operation('getGroupExperimenterMap', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_int),), (), _M_omero.model._t_GroupExperimenterMap, ())
    Experimenter._op_setGroupExperimenterMap = IcePy.Operation('setGroupExperimenterMap', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_int), ((), _M_omero.model._t_GroupExperimenterMap)), (), _M_omero.model._t_GroupExperimenterMap, ())
    Experimenter._op_getPrimaryGroupExperimenterMap = IcePy.Operation('getPrimaryGroupExperimenterMap', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_GroupExperimenterMap, ())
    Experimenter._op_setPrimaryGroupExperimenterMap = IcePy.Operation('setPrimaryGroupExperimenterMap', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_GroupExperimenterMap),), (), _M_omero.model._t_GroupExperimenterMap, ())
    Experimenter._op_linkExperimenterGroup = IcePy.Operation('linkExperimenterGroup', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ExperimenterGroup),), (), _M_omero.model._t_GroupExperimenterMap, ())
    Experimenter._op_addGroupExperimenterMapToBoth = IcePy.Operation('addGroupExperimenterMapToBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_GroupExperimenterMap), ((), IcePy._t_bool)), (), None, ())
    Experimenter._op_findGroupExperimenterMap = IcePy.Operation('findGroupExperimenterMap', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ExperimenterGroup),), (), _M_omero.model._t_ExperimenterGroupExperimenterMapSeq, ())
    Experimenter._op_unlinkExperimenterGroup = IcePy.Operation('unlinkExperimenterGroup', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ExperimenterGroup),), (), None, ())
    Experimenter._op_removeGroupExperimenterMapFromBoth = IcePy.Operation('removeGroupExperimenterMapFromBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_GroupExperimenterMap), ((), IcePy._t_bool)), (), None, ())
    Experimenter._op_linkedExperimenterGroupList = IcePy.Operation('linkedExperimenterGroupList', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_ExperimenterLinkedExperimenterGroupSeq, ())
    Experimenter._op_getOmeName = IcePy.Operation('getOmeName', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Experimenter._op_setOmeName = IcePy.Operation('setOmeName', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Experimenter._op_getFirstName = IcePy.Operation('getFirstName', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Experimenter._op_setFirstName = IcePy.Operation('setFirstName', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Experimenter._op_getMiddleName = IcePy.Operation('getMiddleName', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Experimenter._op_setMiddleName = IcePy.Operation('setMiddleName', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Experimenter._op_getLastName = IcePy.Operation('getLastName', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Experimenter._op_setLastName = IcePy.Operation('setLastName', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Experimenter._op_getInstitution = IcePy.Operation('getInstitution', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Experimenter._op_setInstitution = IcePy.Operation('setInstitution', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Experimenter._op_getEmail = IcePy.Operation('getEmail', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Experimenter._op_setEmail = IcePy.Operation('setEmail', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Experimenter._op_unloadAnnotationLinks = IcePy.Operation('unloadAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Experimenter._op_sizeOfAnnotationLinks = IcePy.Operation('sizeOfAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())
    Experimenter._op_copyAnnotationLinks = IcePy.Operation('copyAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_ExperimenterAnnotationLinksSeq, ())
    Experimenter._op_addExperimenterAnnotationLink = IcePy.Operation('addExperimenterAnnotationLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ExperimenterAnnotationLink),), (), None, ())
    Experimenter._op_addAllExperimenterAnnotationLinkSet = IcePy.Operation('addAllExperimenterAnnotationLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ExperimenterAnnotationLinksSeq),), (), None, ())
    Experimenter._op_removeExperimenterAnnotationLink = IcePy.Operation('removeExperimenterAnnotationLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ExperimenterAnnotationLink),), (), None, ())
    Experimenter._op_removeAllExperimenterAnnotationLinkSet = IcePy.Operation('removeAllExperimenterAnnotationLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ExperimenterAnnotationLinksSeq),), (), None, ())
    Experimenter._op_clearAnnotationLinks = IcePy.Operation('clearAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Experimenter._op_reloadAnnotationLinks = IcePy.Operation('reloadAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Experimenter),), (), None, ())
    Experimenter._op_getAnnotationLinksCountPerOwner = IcePy.Operation('getAnnotationLinksCountPerOwner', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.sys._t_CountMap, ())
    Experimenter._op_linkAnnotation = IcePy.Operation('linkAnnotation', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Annotation),), (), _M_omero.model._t_ExperimenterAnnotationLink, ())
    Experimenter._op_addExperimenterAnnotationLinkToBoth = IcePy.Operation('addExperimenterAnnotationLinkToBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ExperimenterAnnotationLink), ((), IcePy._t_bool)), (), None, ())
    Experimenter._op_findExperimenterAnnotationLink = IcePy.Operation('findExperimenterAnnotationLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Annotation),), (), _M_omero.model._t_ExperimenterAnnotationLinksSeq, ())
    Experimenter._op_unlinkAnnotation = IcePy.Operation('unlinkAnnotation', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Annotation),), (), None, ())
    Experimenter._op_removeExperimenterAnnotationLinkFromBoth = IcePy.Operation('removeExperimenterAnnotationLinkFromBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ExperimenterAnnotationLink), ((), IcePy._t_bool)), (), None, ())
    Experimenter._op_linkedAnnotationList = IcePy.Operation('linkedAnnotationList', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_ExperimenterLinkedAnnotationSeq, ())

    _M_omero.model.Experimenter = Experimenter
    del Experimenter

    _M_omero.model.ExperimenterPrx = ExperimenterPrx
    del ExperimenterPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
