# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `Screen.ice'

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

if not _M_omero.model.__dict__.has_key('ScreenPlateLink'):
    _M_omero.model._t_ScreenPlateLink = IcePy.declareClass('::omero::model::ScreenPlateLink')
    _M_omero.model._t_ScreenPlateLinkPrx = IcePy.declareProxy('::omero::model::ScreenPlateLink')

if not _M_omero.model.__dict__.has_key('Plate'):
    _M_omero.model._t_Plate = IcePy.declareClass('::omero::model::Plate')
    _M_omero.model._t_PlatePrx = IcePy.declareProxy('::omero::model::Plate')

if not _M_omero.model.__dict__.has_key('Reagent'):
    _M_omero.model._t_Reagent = IcePy.declareClass('::omero::model::Reagent')
    _M_omero.model._t_ReagentPrx = IcePy.declareProxy('::omero::model::Reagent')

if not _M_omero.model.__dict__.has_key('ScreenAnnotationLink'):
    _M_omero.model._t_ScreenAnnotationLink = IcePy.declareClass('::omero::model::ScreenAnnotationLink')
    _M_omero.model._t_ScreenAnnotationLinkPrx = IcePy.declareProxy('::omero::model::ScreenAnnotationLink')

if not _M_omero.model.__dict__.has_key('Annotation'):
    _M_omero.model._t_Annotation = IcePy.declareClass('::omero::model::Annotation')
    _M_omero.model._t_AnnotationPrx = IcePy.declareProxy('::omero::model::Annotation')

if not _M_omero.model.__dict__.has_key('Details'):
    _M_omero.model._t_Details = IcePy.declareClass('::omero::model::Details')
    _M_omero.model._t_DetailsPrx = IcePy.declareProxy('::omero::model::Details')

if not _M_omero.model.__dict__.has_key('_t_ScreenPlateLinksSeq'):
    _M_omero.model._t_ScreenPlateLinksSeq = IcePy.defineSequence('::omero::model::ScreenPlateLinksSeq', (), _M_omero.model._t_ScreenPlateLink)

if not _M_omero.model.__dict__.has_key('_t_ScreenLinkedPlateSeq'):
    _M_omero.model._t_ScreenLinkedPlateSeq = IcePy.defineSequence('::omero::model::ScreenLinkedPlateSeq', (), _M_omero.model._t_Plate)

if not _M_omero.model.__dict__.has_key('_t_ScreenReagentsSeq'):
    _M_omero.model._t_ScreenReagentsSeq = IcePy.defineSequence('::omero::model::ScreenReagentsSeq', (), _M_omero.model._t_Reagent)

if not _M_omero.model.__dict__.has_key('_t_ScreenAnnotationLinksSeq'):
    _M_omero.model._t_ScreenAnnotationLinksSeq = IcePy.defineSequence('::omero::model::ScreenAnnotationLinksSeq', (), _M_omero.model._t_ScreenAnnotationLink)

if not _M_omero.model.__dict__.has_key('_t_ScreenLinkedAnnotationSeq'):
    _M_omero.model._t_ScreenLinkedAnnotationSeq = IcePy.defineSequence('::omero::model::ScreenLinkedAnnotationSeq', (), _M_omero.model._t_Annotation)

if not _M_omero.model.__dict__.has_key('Screen'):
    _M_omero.model.Screen = Ice.createTempClass()
    class Screen(_M_omero.model.IObject):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _type=None, _protocolIdentifier=None, _protocolDescription=None, _reagentSetIdentifier=None, _reagentSetDescription=None, _plateLinksSeq=None, _plateLinksLoaded=False, _plateLinksCountPerOwner=None, _reagentsSeq=None, _reagentsLoaded=False, _annotationLinksSeq=None, _annotationLinksLoaded=False, _annotationLinksCountPerOwner=None, _name=None, _description=None):
            if __builtin__.type(self) == _M_omero.model.Screen:
                raise RuntimeError('omero.model.Screen is an abstract class')
            _M_omero.model.IObject.__init__(self, _id, _details, _loaded)
            self._version = _version
            self._type = _type
            self._protocolIdentifier = _protocolIdentifier
            self._protocolDescription = _protocolDescription
            self._reagentSetIdentifier = _reagentSetIdentifier
            self._reagentSetDescription = _reagentSetDescription
            self._plateLinksSeq = _plateLinksSeq
            self._plateLinksLoaded = _plateLinksLoaded
            self._plateLinksCountPerOwner = _plateLinksCountPerOwner
            self._reagentsSeq = _reagentsSeq
            self._reagentsLoaded = _reagentsLoaded
            self._annotationLinksSeq = _annotationLinksSeq
            self._annotationLinksLoaded = _annotationLinksLoaded
            self._annotationLinksCountPerOwner = _annotationLinksCountPerOwner
            self._name = _name
            self._description = _description

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::IObject', '::omero::model::Screen')

        def ice_id(self, current=None):
            return '::omero::model::Screen'

        def ice_staticId():
            return '::omero::model::Screen'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getVersion(self, current=None):
        # def setVersion(self, theVersion, current=None):
        # def getType(self, current=None):
        # def setType(self, theType, current=None):
        # def getProtocolIdentifier(self, current=None):
        # def setProtocolIdentifier(self, theProtocolIdentifier, current=None):
        # def getProtocolDescription(self, current=None):
        # def setProtocolDescription(self, theProtocolDescription, current=None):
        # def getReagentSetIdentifier(self, current=None):
        # def setReagentSetIdentifier(self, theReagentSetIdentifier, current=None):
        # def getReagentSetDescription(self, current=None):
        # def setReagentSetDescription(self, theReagentSetDescription, current=None):
        # def unloadPlateLinks(self, current=None):
        # def sizeOfPlateLinks(self, current=None):
        # def copyPlateLinks(self, current=None):
        # def addScreenPlateLink(self, target, current=None):
        # def addAllScreenPlateLinkSet(self, targets, current=None):
        # def removeScreenPlateLink(self, theTarget, current=None):
        # def removeAllScreenPlateLinkSet(self, targets, current=None):
        # def clearPlateLinks(self, current=None):
        # def reloadPlateLinks(self, toCopy, current=None):
        # def getPlateLinksCountPerOwner(self, current=None):
        # def linkPlate(self, addition, current=None):
        # def addScreenPlateLinkToBoth(self, link, bothSides, current=None):
        # def findScreenPlateLink(self, removal, current=None):
        # def unlinkPlate(self, removal, current=None):
        # def removeScreenPlateLinkFromBoth(self, link, bothSides, current=None):
        # def linkedPlateList(self, current=None):
        # def unloadReagents(self, current=None):
        # def sizeOfReagents(self, current=None):
        # def copyReagents(self, current=None):
        # def addReagent(self, target, current=None):
        # def addAllReagentSet(self, targets, current=None):
        # def removeReagent(self, theTarget, current=None):
        # def removeAllReagentSet(self, targets, current=None):
        # def clearReagents(self, current=None):
        # def reloadReagents(self, toCopy, current=None):
        # def unloadAnnotationLinks(self, current=None):
        # def sizeOfAnnotationLinks(self, current=None):
        # def copyAnnotationLinks(self, current=None):
        # def addScreenAnnotationLink(self, target, current=None):
        # def addAllScreenAnnotationLinkSet(self, targets, current=None):
        # def removeScreenAnnotationLink(self, theTarget, current=None):
        # def removeAllScreenAnnotationLinkSet(self, targets, current=None):
        # def clearAnnotationLinks(self, current=None):
        # def reloadAnnotationLinks(self, toCopy, current=None):
        # def getAnnotationLinksCountPerOwner(self, current=None):
        # def linkAnnotation(self, addition, current=None):
        # def addScreenAnnotationLinkToBoth(self, link, bothSides, current=None):
        # def findScreenAnnotationLink(self, removal, current=None):
        # def unlinkAnnotation(self, removal, current=None):
        # def removeScreenAnnotationLinkFromBoth(self, link, bothSides, current=None):
        # def linkedAnnotationList(self, current=None):
        # def getName(self, current=None):
        # def setName(self, theName, current=None):
        # def getDescription(self, current=None):
        # def setDescription(self, theDescription, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_Screen)

        __repr__ = __str__

    _M_omero.model.ScreenPrx = Ice.createTempClass()
    class ScreenPrx(_M_omero.model.IObjectPrx):

        def getVersion(self, _ctx=None):
            return _M_omero.model.Screen._op_getVersion.invoke(self, ((), _ctx))

        def setVersion(self, theVersion, _ctx=None):
            return _M_omero.model.Screen._op_setVersion.invoke(self, ((theVersion, ), _ctx))

        def getType(self, _ctx=None):
            return _M_omero.model.Screen._op_getType.invoke(self, ((), _ctx))

        def setType(self, theType, _ctx=None):
            return _M_omero.model.Screen._op_setType.invoke(self, ((theType, ), _ctx))

        def getProtocolIdentifier(self, _ctx=None):
            return _M_omero.model.Screen._op_getProtocolIdentifier.invoke(self, ((), _ctx))

        def setProtocolIdentifier(self, theProtocolIdentifier, _ctx=None):
            return _M_omero.model.Screen._op_setProtocolIdentifier.invoke(self, ((theProtocolIdentifier, ), _ctx))

        def getProtocolDescription(self, _ctx=None):
            return _M_omero.model.Screen._op_getProtocolDescription.invoke(self, ((), _ctx))

        def setProtocolDescription(self, theProtocolDescription, _ctx=None):
            return _M_omero.model.Screen._op_setProtocolDescription.invoke(self, ((theProtocolDescription, ), _ctx))

        def getReagentSetIdentifier(self, _ctx=None):
            return _M_omero.model.Screen._op_getReagentSetIdentifier.invoke(self, ((), _ctx))

        def setReagentSetIdentifier(self, theReagentSetIdentifier, _ctx=None):
            return _M_omero.model.Screen._op_setReagentSetIdentifier.invoke(self, ((theReagentSetIdentifier, ), _ctx))

        def getReagentSetDescription(self, _ctx=None):
            return _M_omero.model.Screen._op_getReagentSetDescription.invoke(self, ((), _ctx))

        def setReagentSetDescription(self, theReagentSetDescription, _ctx=None):
            return _M_omero.model.Screen._op_setReagentSetDescription.invoke(self, ((theReagentSetDescription, ), _ctx))

        def unloadPlateLinks(self, _ctx=None):
            return _M_omero.model.Screen._op_unloadPlateLinks.invoke(self, ((), _ctx))

        def sizeOfPlateLinks(self, _ctx=None):
            return _M_omero.model.Screen._op_sizeOfPlateLinks.invoke(self, ((), _ctx))

        def copyPlateLinks(self, _ctx=None):
            return _M_omero.model.Screen._op_copyPlateLinks.invoke(self, ((), _ctx))

        def addScreenPlateLink(self, target, _ctx=None):
            return _M_omero.model.Screen._op_addScreenPlateLink.invoke(self, ((target, ), _ctx))

        def addAllScreenPlateLinkSet(self, targets, _ctx=None):
            return _M_omero.model.Screen._op_addAllScreenPlateLinkSet.invoke(self, ((targets, ), _ctx))

        def removeScreenPlateLink(self, theTarget, _ctx=None):
            return _M_omero.model.Screen._op_removeScreenPlateLink.invoke(self, ((theTarget, ), _ctx))

        def removeAllScreenPlateLinkSet(self, targets, _ctx=None):
            return _M_omero.model.Screen._op_removeAllScreenPlateLinkSet.invoke(self, ((targets, ), _ctx))

        def clearPlateLinks(self, _ctx=None):
            return _M_omero.model.Screen._op_clearPlateLinks.invoke(self, ((), _ctx))

        def reloadPlateLinks(self, toCopy, _ctx=None):
            return _M_omero.model.Screen._op_reloadPlateLinks.invoke(self, ((toCopy, ), _ctx))

        def getPlateLinksCountPerOwner(self, _ctx=None):
            return _M_omero.model.Screen._op_getPlateLinksCountPerOwner.invoke(self, ((), _ctx))

        def linkPlate(self, addition, _ctx=None):
            return _M_omero.model.Screen._op_linkPlate.invoke(self, ((addition, ), _ctx))

        def addScreenPlateLinkToBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.Screen._op_addScreenPlateLinkToBoth.invoke(self, ((link, bothSides), _ctx))

        def findScreenPlateLink(self, removal, _ctx=None):
            return _M_omero.model.Screen._op_findScreenPlateLink.invoke(self, ((removal, ), _ctx))

        def unlinkPlate(self, removal, _ctx=None):
            return _M_omero.model.Screen._op_unlinkPlate.invoke(self, ((removal, ), _ctx))

        def removeScreenPlateLinkFromBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.Screen._op_removeScreenPlateLinkFromBoth.invoke(self, ((link, bothSides), _ctx))

        def linkedPlateList(self, _ctx=None):
            return _M_omero.model.Screen._op_linkedPlateList.invoke(self, ((), _ctx))

        def unloadReagents(self, _ctx=None):
            return _M_omero.model.Screen._op_unloadReagents.invoke(self, ((), _ctx))

        def sizeOfReagents(self, _ctx=None):
            return _M_omero.model.Screen._op_sizeOfReagents.invoke(self, ((), _ctx))

        def copyReagents(self, _ctx=None):
            return _M_omero.model.Screen._op_copyReagents.invoke(self, ((), _ctx))

        def addReagent(self, target, _ctx=None):
            return _M_omero.model.Screen._op_addReagent.invoke(self, ((target, ), _ctx))

        def addAllReagentSet(self, targets, _ctx=None):
            return _M_omero.model.Screen._op_addAllReagentSet.invoke(self, ((targets, ), _ctx))

        def removeReagent(self, theTarget, _ctx=None):
            return _M_omero.model.Screen._op_removeReagent.invoke(self, ((theTarget, ), _ctx))

        def removeAllReagentSet(self, targets, _ctx=None):
            return _M_omero.model.Screen._op_removeAllReagentSet.invoke(self, ((targets, ), _ctx))

        def clearReagents(self, _ctx=None):
            return _M_omero.model.Screen._op_clearReagents.invoke(self, ((), _ctx))

        def reloadReagents(self, toCopy, _ctx=None):
            return _M_omero.model.Screen._op_reloadReagents.invoke(self, ((toCopy, ), _ctx))

        def unloadAnnotationLinks(self, _ctx=None):
            return _M_omero.model.Screen._op_unloadAnnotationLinks.invoke(self, ((), _ctx))

        def sizeOfAnnotationLinks(self, _ctx=None):
            return _M_omero.model.Screen._op_sizeOfAnnotationLinks.invoke(self, ((), _ctx))

        def copyAnnotationLinks(self, _ctx=None):
            return _M_omero.model.Screen._op_copyAnnotationLinks.invoke(self, ((), _ctx))

        def addScreenAnnotationLink(self, target, _ctx=None):
            return _M_omero.model.Screen._op_addScreenAnnotationLink.invoke(self, ((target, ), _ctx))

        def addAllScreenAnnotationLinkSet(self, targets, _ctx=None):
            return _M_omero.model.Screen._op_addAllScreenAnnotationLinkSet.invoke(self, ((targets, ), _ctx))

        def removeScreenAnnotationLink(self, theTarget, _ctx=None):
            return _M_omero.model.Screen._op_removeScreenAnnotationLink.invoke(self, ((theTarget, ), _ctx))

        def removeAllScreenAnnotationLinkSet(self, targets, _ctx=None):
            return _M_omero.model.Screen._op_removeAllScreenAnnotationLinkSet.invoke(self, ((targets, ), _ctx))

        def clearAnnotationLinks(self, _ctx=None):
            return _M_omero.model.Screen._op_clearAnnotationLinks.invoke(self, ((), _ctx))

        def reloadAnnotationLinks(self, toCopy, _ctx=None):
            return _M_omero.model.Screen._op_reloadAnnotationLinks.invoke(self, ((toCopy, ), _ctx))

        def getAnnotationLinksCountPerOwner(self, _ctx=None):
            return _M_omero.model.Screen._op_getAnnotationLinksCountPerOwner.invoke(self, ((), _ctx))

        def linkAnnotation(self, addition, _ctx=None):
            return _M_omero.model.Screen._op_linkAnnotation.invoke(self, ((addition, ), _ctx))

        def addScreenAnnotationLinkToBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.Screen._op_addScreenAnnotationLinkToBoth.invoke(self, ((link, bothSides), _ctx))

        def findScreenAnnotationLink(self, removal, _ctx=None):
            return _M_omero.model.Screen._op_findScreenAnnotationLink.invoke(self, ((removal, ), _ctx))

        def unlinkAnnotation(self, removal, _ctx=None):
            return _M_omero.model.Screen._op_unlinkAnnotation.invoke(self, ((removal, ), _ctx))

        def removeScreenAnnotationLinkFromBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.Screen._op_removeScreenAnnotationLinkFromBoth.invoke(self, ((link, bothSides), _ctx))

        def linkedAnnotationList(self, _ctx=None):
            return _M_omero.model.Screen._op_linkedAnnotationList.invoke(self, ((), _ctx))

        def getName(self, _ctx=None):
            return _M_omero.model.Screen._op_getName.invoke(self, ((), _ctx))

        def setName(self, theName, _ctx=None):
            return _M_omero.model.Screen._op_setName.invoke(self, ((theName, ), _ctx))

        def getDescription(self, _ctx=None):
            return _M_omero.model.Screen._op_getDescription.invoke(self, ((), _ctx))

        def setDescription(self, theDescription, _ctx=None):
            return _M_omero.model.Screen._op_setDescription.invoke(self, ((theDescription, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.ScreenPrx.ice_checkedCast(proxy, '::omero::model::Screen', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.ScreenPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_ScreenPrx = IcePy.defineProxy('::omero::model::Screen', ScreenPrx)

    _M_omero.model._t_Screen = IcePy.declareClass('::omero::model::Screen')

    _M_omero.model._t_Screen = IcePy.defineClass('::omero::model::Screen', Screen, (), True, _M_omero.model._t_IObject, (), (
        ('_version', (), _M_omero._t_RInt),
        ('_type', (), _M_omero._t_RString),
        ('_protocolIdentifier', (), _M_omero._t_RString),
        ('_protocolDescription', (), _M_omero._t_RString),
        ('_reagentSetIdentifier', (), _M_omero._t_RString),
        ('_reagentSetDescription', (), _M_omero._t_RString),
        ('_plateLinksSeq', (), _M_omero.model._t_ScreenPlateLinksSeq),
        ('_plateLinksLoaded', (), IcePy._t_bool),
        ('_plateLinksCountPerOwner', (), _M_omero.sys._t_CountMap),
        ('_reagentsSeq', (), _M_omero.model._t_ScreenReagentsSeq),
        ('_reagentsLoaded', (), IcePy._t_bool),
        ('_annotationLinksSeq', (), _M_omero.model._t_ScreenAnnotationLinksSeq),
        ('_annotationLinksLoaded', (), IcePy._t_bool),
        ('_annotationLinksCountPerOwner', (), _M_omero.sys._t_CountMap),
        ('_name', (), _M_omero._t_RString),
        ('_description', (), _M_omero._t_RString)
    ))
    Screen.ice_type = _M_omero.model._t_Screen

    Screen._op_getVersion = IcePy.Operation('getVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    Screen._op_setVersion = IcePy.Operation('setVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    Screen._op_getType = IcePy.Operation('getType', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Screen._op_setType = IcePy.Operation('setType', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Screen._op_getProtocolIdentifier = IcePy.Operation('getProtocolIdentifier', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Screen._op_setProtocolIdentifier = IcePy.Operation('setProtocolIdentifier', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Screen._op_getProtocolDescription = IcePy.Operation('getProtocolDescription', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Screen._op_setProtocolDescription = IcePy.Operation('setProtocolDescription', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Screen._op_getReagentSetIdentifier = IcePy.Operation('getReagentSetIdentifier', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Screen._op_setReagentSetIdentifier = IcePy.Operation('setReagentSetIdentifier', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Screen._op_getReagentSetDescription = IcePy.Operation('getReagentSetDescription', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Screen._op_setReagentSetDescription = IcePy.Operation('setReagentSetDescription', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Screen._op_unloadPlateLinks = IcePy.Operation('unloadPlateLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Screen._op_sizeOfPlateLinks = IcePy.Operation('sizeOfPlateLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())
    Screen._op_copyPlateLinks = IcePy.Operation('copyPlateLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_ScreenPlateLinksSeq, ())
    Screen._op_addScreenPlateLink = IcePy.Operation('addScreenPlateLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ScreenPlateLink),), (), None, ())
    Screen._op_addAllScreenPlateLinkSet = IcePy.Operation('addAllScreenPlateLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ScreenPlateLinksSeq),), (), None, ())
    Screen._op_removeScreenPlateLink = IcePy.Operation('removeScreenPlateLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ScreenPlateLink),), (), None, ())
    Screen._op_removeAllScreenPlateLinkSet = IcePy.Operation('removeAllScreenPlateLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ScreenPlateLinksSeq),), (), None, ())
    Screen._op_clearPlateLinks = IcePy.Operation('clearPlateLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Screen._op_reloadPlateLinks = IcePy.Operation('reloadPlateLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Screen),), (), None, ())
    Screen._op_getPlateLinksCountPerOwner = IcePy.Operation('getPlateLinksCountPerOwner', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.sys._t_CountMap, ())
    Screen._op_linkPlate = IcePy.Operation('linkPlate', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Plate),), (), _M_omero.model._t_ScreenPlateLink, ())
    Screen._op_addScreenPlateLinkToBoth = IcePy.Operation('addScreenPlateLinkToBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ScreenPlateLink), ((), IcePy._t_bool)), (), None, ())
    Screen._op_findScreenPlateLink = IcePy.Operation('findScreenPlateLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Plate),), (), _M_omero.model._t_ScreenPlateLinksSeq, ())
    Screen._op_unlinkPlate = IcePy.Operation('unlinkPlate', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Plate),), (), None, ())
    Screen._op_removeScreenPlateLinkFromBoth = IcePy.Operation('removeScreenPlateLinkFromBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ScreenPlateLink), ((), IcePy._t_bool)), (), None, ())
    Screen._op_linkedPlateList = IcePy.Operation('linkedPlateList', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_ScreenLinkedPlateSeq, ())
    Screen._op_unloadReagents = IcePy.Operation('unloadReagents', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Screen._op_sizeOfReagents = IcePy.Operation('sizeOfReagents', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())
    Screen._op_copyReagents = IcePy.Operation('copyReagents', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_ScreenReagentsSeq, ())
    Screen._op_addReagent = IcePy.Operation('addReagent', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Reagent),), (), None, ())
    Screen._op_addAllReagentSet = IcePy.Operation('addAllReagentSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ScreenReagentsSeq),), (), None, ())
    Screen._op_removeReagent = IcePy.Operation('removeReagent', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Reagent),), (), None, ())
    Screen._op_removeAllReagentSet = IcePy.Operation('removeAllReagentSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ScreenReagentsSeq),), (), None, ())
    Screen._op_clearReagents = IcePy.Operation('clearReagents', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Screen._op_reloadReagents = IcePy.Operation('reloadReagents', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Screen),), (), None, ())
    Screen._op_unloadAnnotationLinks = IcePy.Operation('unloadAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Screen._op_sizeOfAnnotationLinks = IcePy.Operation('sizeOfAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())
    Screen._op_copyAnnotationLinks = IcePy.Operation('copyAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_ScreenAnnotationLinksSeq, ())
    Screen._op_addScreenAnnotationLink = IcePy.Operation('addScreenAnnotationLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ScreenAnnotationLink),), (), None, ())
    Screen._op_addAllScreenAnnotationLinkSet = IcePy.Operation('addAllScreenAnnotationLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ScreenAnnotationLinksSeq),), (), None, ())
    Screen._op_removeScreenAnnotationLink = IcePy.Operation('removeScreenAnnotationLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ScreenAnnotationLink),), (), None, ())
    Screen._op_removeAllScreenAnnotationLinkSet = IcePy.Operation('removeAllScreenAnnotationLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ScreenAnnotationLinksSeq),), (), None, ())
    Screen._op_clearAnnotationLinks = IcePy.Operation('clearAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Screen._op_reloadAnnotationLinks = IcePy.Operation('reloadAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Screen),), (), None, ())
    Screen._op_getAnnotationLinksCountPerOwner = IcePy.Operation('getAnnotationLinksCountPerOwner', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.sys._t_CountMap, ())
    Screen._op_linkAnnotation = IcePy.Operation('linkAnnotation', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Annotation),), (), _M_omero.model._t_ScreenAnnotationLink, ())
    Screen._op_addScreenAnnotationLinkToBoth = IcePy.Operation('addScreenAnnotationLinkToBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ScreenAnnotationLink), ((), IcePy._t_bool)), (), None, ())
    Screen._op_findScreenAnnotationLink = IcePy.Operation('findScreenAnnotationLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Annotation),), (), _M_omero.model._t_ScreenAnnotationLinksSeq, ())
    Screen._op_unlinkAnnotation = IcePy.Operation('unlinkAnnotation', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Annotation),), (), None, ())
    Screen._op_removeScreenAnnotationLinkFromBoth = IcePy.Operation('removeScreenAnnotationLinkFromBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ScreenAnnotationLink), ((), IcePy._t_bool)), (), None, ())
    Screen._op_linkedAnnotationList = IcePy.Operation('linkedAnnotationList', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_ScreenLinkedAnnotationSeq, ())
    Screen._op_getName = IcePy.Operation('getName', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Screen._op_setName = IcePy.Operation('setName', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Screen._op_getDescription = IcePy.Operation('getDescription', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Screen._op_setDescription = IcePy.Operation('setDescription', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())

    _M_omero.model.Screen = Screen
    del Screen

    _M_omero.model.ScreenPrx = ScreenPrx
    del ScreenPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
