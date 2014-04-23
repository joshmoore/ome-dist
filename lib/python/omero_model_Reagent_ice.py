# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `Reagent.ice'

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

if not _M_omero.model.__dict__.has_key('Screen'):
    _M_omero.model._t_Screen = IcePy.declareClass('::omero::model::Screen')
    _M_omero.model._t_ScreenPrx = IcePy.declareProxy('::omero::model::Screen')

if not _M_omero.model.__dict__.has_key('WellReagentLink'):
    _M_omero.model._t_WellReagentLink = IcePy.declareClass('::omero::model::WellReagentLink')
    _M_omero.model._t_WellReagentLinkPrx = IcePy.declareProxy('::omero::model::WellReagentLink')

if not _M_omero.model.__dict__.has_key('Well'):
    _M_omero.model._t_Well = IcePy.declareClass('::omero::model::Well')
    _M_omero.model._t_WellPrx = IcePy.declareProxy('::omero::model::Well')

if not _M_omero.model.__dict__.has_key('ReagentAnnotationLink'):
    _M_omero.model._t_ReagentAnnotationLink = IcePy.declareClass('::omero::model::ReagentAnnotationLink')
    _M_omero.model._t_ReagentAnnotationLinkPrx = IcePy.declareProxy('::omero::model::ReagentAnnotationLink')

if not _M_omero.model.__dict__.has_key('Annotation'):
    _M_omero.model._t_Annotation = IcePy.declareClass('::omero::model::Annotation')
    _M_omero.model._t_AnnotationPrx = IcePy.declareProxy('::omero::model::Annotation')

if not _M_omero.model.__dict__.has_key('Details'):
    _M_omero.model._t_Details = IcePy.declareClass('::omero::model::Details')
    _M_omero.model._t_DetailsPrx = IcePy.declareProxy('::omero::model::Details')

if not _M_omero.model.__dict__.has_key('_t_ReagentWellLinksSeq'):
    _M_omero.model._t_ReagentWellLinksSeq = IcePy.defineSequence('::omero::model::ReagentWellLinksSeq', (), _M_omero.model._t_WellReagentLink)

if not _M_omero.model.__dict__.has_key('_t_ReagentLinkedWellSeq'):
    _M_omero.model._t_ReagentLinkedWellSeq = IcePy.defineSequence('::omero::model::ReagentLinkedWellSeq', (), _M_omero.model._t_Well)

if not _M_omero.model.__dict__.has_key('_t_ReagentAnnotationLinksSeq'):
    _M_omero.model._t_ReagentAnnotationLinksSeq = IcePy.defineSequence('::omero::model::ReagentAnnotationLinksSeq', (), _M_omero.model._t_ReagentAnnotationLink)

if not _M_omero.model.__dict__.has_key('_t_ReagentLinkedAnnotationSeq'):
    _M_omero.model._t_ReagentLinkedAnnotationSeq = IcePy.defineSequence('::omero::model::ReagentLinkedAnnotationSeq', (), _M_omero.model._t_Annotation)

if not _M_omero.model.__dict__.has_key('Reagent'):
    _M_omero.model.Reagent = Ice.createTempClass()
    class Reagent(_M_omero.model.IObject):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _name=None, _reagentIdentifier=None, _screen=None, _wellLinksSeq=None, _wellLinksLoaded=False, _wellLinksCountPerOwner=None, _annotationLinksSeq=None, _annotationLinksLoaded=False, _annotationLinksCountPerOwner=None, _description=None):
            if __builtin__.type(self) == _M_omero.model.Reagent:
                raise RuntimeError('omero.model.Reagent is an abstract class')
            _M_omero.model.IObject.__init__(self, _id, _details, _loaded)
            self._version = _version
            self._name = _name
            self._reagentIdentifier = _reagentIdentifier
            self._screen = _screen
            self._wellLinksSeq = _wellLinksSeq
            self._wellLinksLoaded = _wellLinksLoaded
            self._wellLinksCountPerOwner = _wellLinksCountPerOwner
            self._annotationLinksSeq = _annotationLinksSeq
            self._annotationLinksLoaded = _annotationLinksLoaded
            self._annotationLinksCountPerOwner = _annotationLinksCountPerOwner
            self._description = _description

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::IObject', '::omero::model::Reagent')

        def ice_id(self, current=None):
            return '::omero::model::Reagent'

        def ice_staticId():
            return '::omero::model::Reagent'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getVersion(self, current=None):
        # def setVersion(self, theVersion, current=None):
        # def getName(self, current=None):
        # def setName(self, theName, current=None):
        # def getReagentIdentifier(self, current=None):
        # def setReagentIdentifier(self, theReagentIdentifier, current=None):
        # def getScreen(self, current=None):
        # def setScreen(self, theScreen, current=None):
        # def unloadWellLinks(self, current=None):
        # def sizeOfWellLinks(self, current=None):
        # def copyWellLinks(self, current=None):
        # def addWellReagentLink(self, target, current=None):
        # def addAllWellReagentLinkSet(self, targets, current=None):
        # def removeWellReagentLink(self, theTarget, current=None):
        # def removeAllWellReagentLinkSet(self, targets, current=None):
        # def clearWellLinks(self, current=None):
        # def reloadWellLinks(self, toCopy, current=None):
        # def getWellLinksCountPerOwner(self, current=None):
        # def linkWell(self, addition, current=None):
        # def addWellReagentLinkToBoth(self, link, bothSides, current=None):
        # def findWellReagentLink(self, removal, current=None):
        # def unlinkWell(self, removal, current=None):
        # def removeWellReagentLinkFromBoth(self, link, bothSides, current=None):
        # def linkedWellList(self, current=None):
        # def unloadAnnotationLinks(self, current=None):
        # def sizeOfAnnotationLinks(self, current=None):
        # def copyAnnotationLinks(self, current=None):
        # def addReagentAnnotationLink(self, target, current=None):
        # def addAllReagentAnnotationLinkSet(self, targets, current=None):
        # def removeReagentAnnotationLink(self, theTarget, current=None):
        # def removeAllReagentAnnotationLinkSet(self, targets, current=None):
        # def clearAnnotationLinks(self, current=None):
        # def reloadAnnotationLinks(self, toCopy, current=None):
        # def getAnnotationLinksCountPerOwner(self, current=None):
        # def linkAnnotation(self, addition, current=None):
        # def addReagentAnnotationLinkToBoth(self, link, bothSides, current=None):
        # def findReagentAnnotationLink(self, removal, current=None):
        # def unlinkAnnotation(self, removal, current=None):
        # def removeReagentAnnotationLinkFromBoth(self, link, bothSides, current=None):
        # def linkedAnnotationList(self, current=None):
        # def getDescription(self, current=None):
        # def setDescription(self, theDescription, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_Reagent)

        __repr__ = __str__

    _M_omero.model.ReagentPrx = Ice.createTempClass()
    class ReagentPrx(_M_omero.model.IObjectPrx):

        def getVersion(self, _ctx=None):
            return _M_omero.model.Reagent._op_getVersion.invoke(self, ((), _ctx))

        def setVersion(self, theVersion, _ctx=None):
            return _M_omero.model.Reagent._op_setVersion.invoke(self, ((theVersion, ), _ctx))

        def getName(self, _ctx=None):
            return _M_omero.model.Reagent._op_getName.invoke(self, ((), _ctx))

        def setName(self, theName, _ctx=None):
            return _M_omero.model.Reagent._op_setName.invoke(self, ((theName, ), _ctx))

        def getReagentIdentifier(self, _ctx=None):
            return _M_omero.model.Reagent._op_getReagentIdentifier.invoke(self, ((), _ctx))

        def setReagentIdentifier(self, theReagentIdentifier, _ctx=None):
            return _M_omero.model.Reagent._op_setReagentIdentifier.invoke(self, ((theReagentIdentifier, ), _ctx))

        def getScreen(self, _ctx=None):
            return _M_omero.model.Reagent._op_getScreen.invoke(self, ((), _ctx))

        def setScreen(self, theScreen, _ctx=None):
            return _M_omero.model.Reagent._op_setScreen.invoke(self, ((theScreen, ), _ctx))

        def unloadWellLinks(self, _ctx=None):
            return _M_omero.model.Reagent._op_unloadWellLinks.invoke(self, ((), _ctx))

        def sizeOfWellLinks(self, _ctx=None):
            return _M_omero.model.Reagent._op_sizeOfWellLinks.invoke(self, ((), _ctx))

        def copyWellLinks(self, _ctx=None):
            return _M_omero.model.Reagent._op_copyWellLinks.invoke(self, ((), _ctx))

        def addWellReagentLink(self, target, _ctx=None):
            return _M_omero.model.Reagent._op_addWellReagentLink.invoke(self, ((target, ), _ctx))

        def addAllWellReagentLinkSet(self, targets, _ctx=None):
            return _M_omero.model.Reagent._op_addAllWellReagentLinkSet.invoke(self, ((targets, ), _ctx))

        def removeWellReagentLink(self, theTarget, _ctx=None):
            return _M_omero.model.Reagent._op_removeWellReagentLink.invoke(self, ((theTarget, ), _ctx))

        def removeAllWellReagentLinkSet(self, targets, _ctx=None):
            return _M_omero.model.Reagent._op_removeAllWellReagentLinkSet.invoke(self, ((targets, ), _ctx))

        def clearWellLinks(self, _ctx=None):
            return _M_omero.model.Reagent._op_clearWellLinks.invoke(self, ((), _ctx))

        def reloadWellLinks(self, toCopy, _ctx=None):
            return _M_omero.model.Reagent._op_reloadWellLinks.invoke(self, ((toCopy, ), _ctx))

        def getWellLinksCountPerOwner(self, _ctx=None):
            return _M_omero.model.Reagent._op_getWellLinksCountPerOwner.invoke(self, ((), _ctx))

        def linkWell(self, addition, _ctx=None):
            return _M_omero.model.Reagent._op_linkWell.invoke(self, ((addition, ), _ctx))

        def addWellReagentLinkToBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.Reagent._op_addWellReagentLinkToBoth.invoke(self, ((link, bothSides), _ctx))

        def findWellReagentLink(self, removal, _ctx=None):
            return _M_omero.model.Reagent._op_findWellReagentLink.invoke(self, ((removal, ), _ctx))

        def unlinkWell(self, removal, _ctx=None):
            return _M_omero.model.Reagent._op_unlinkWell.invoke(self, ((removal, ), _ctx))

        def removeWellReagentLinkFromBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.Reagent._op_removeWellReagentLinkFromBoth.invoke(self, ((link, bothSides), _ctx))

        def linkedWellList(self, _ctx=None):
            return _M_omero.model.Reagent._op_linkedWellList.invoke(self, ((), _ctx))

        def unloadAnnotationLinks(self, _ctx=None):
            return _M_omero.model.Reagent._op_unloadAnnotationLinks.invoke(self, ((), _ctx))

        def sizeOfAnnotationLinks(self, _ctx=None):
            return _M_omero.model.Reagent._op_sizeOfAnnotationLinks.invoke(self, ((), _ctx))

        def copyAnnotationLinks(self, _ctx=None):
            return _M_omero.model.Reagent._op_copyAnnotationLinks.invoke(self, ((), _ctx))

        def addReagentAnnotationLink(self, target, _ctx=None):
            return _M_omero.model.Reagent._op_addReagentAnnotationLink.invoke(self, ((target, ), _ctx))

        def addAllReagentAnnotationLinkSet(self, targets, _ctx=None):
            return _M_omero.model.Reagent._op_addAllReagentAnnotationLinkSet.invoke(self, ((targets, ), _ctx))

        def removeReagentAnnotationLink(self, theTarget, _ctx=None):
            return _M_omero.model.Reagent._op_removeReagentAnnotationLink.invoke(self, ((theTarget, ), _ctx))

        def removeAllReagentAnnotationLinkSet(self, targets, _ctx=None):
            return _M_omero.model.Reagent._op_removeAllReagentAnnotationLinkSet.invoke(self, ((targets, ), _ctx))

        def clearAnnotationLinks(self, _ctx=None):
            return _M_omero.model.Reagent._op_clearAnnotationLinks.invoke(self, ((), _ctx))

        def reloadAnnotationLinks(self, toCopy, _ctx=None):
            return _M_omero.model.Reagent._op_reloadAnnotationLinks.invoke(self, ((toCopy, ), _ctx))

        def getAnnotationLinksCountPerOwner(self, _ctx=None):
            return _M_omero.model.Reagent._op_getAnnotationLinksCountPerOwner.invoke(self, ((), _ctx))

        def linkAnnotation(self, addition, _ctx=None):
            return _M_omero.model.Reagent._op_linkAnnotation.invoke(self, ((addition, ), _ctx))

        def addReagentAnnotationLinkToBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.Reagent._op_addReagentAnnotationLinkToBoth.invoke(self, ((link, bothSides), _ctx))

        def findReagentAnnotationLink(self, removal, _ctx=None):
            return _M_omero.model.Reagent._op_findReagentAnnotationLink.invoke(self, ((removal, ), _ctx))

        def unlinkAnnotation(self, removal, _ctx=None):
            return _M_omero.model.Reagent._op_unlinkAnnotation.invoke(self, ((removal, ), _ctx))

        def removeReagentAnnotationLinkFromBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.Reagent._op_removeReagentAnnotationLinkFromBoth.invoke(self, ((link, bothSides), _ctx))

        def linkedAnnotationList(self, _ctx=None):
            return _M_omero.model.Reagent._op_linkedAnnotationList.invoke(self, ((), _ctx))

        def getDescription(self, _ctx=None):
            return _M_omero.model.Reagent._op_getDescription.invoke(self, ((), _ctx))

        def setDescription(self, theDescription, _ctx=None):
            return _M_omero.model.Reagent._op_setDescription.invoke(self, ((theDescription, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.ReagentPrx.ice_checkedCast(proxy, '::omero::model::Reagent', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.ReagentPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_ReagentPrx = IcePy.defineProxy('::omero::model::Reagent', ReagentPrx)

    _M_omero.model._t_Reagent = IcePy.declareClass('::omero::model::Reagent')

    _M_omero.model._t_Reagent = IcePy.defineClass('::omero::model::Reagent', Reagent, (), True, _M_omero.model._t_IObject, (), (
        ('_version', (), _M_omero._t_RInt),
        ('_name', (), _M_omero._t_RString),
        ('_reagentIdentifier', (), _M_omero._t_RString),
        ('_screen', (), _M_omero.model._t_Screen),
        ('_wellLinksSeq', (), _M_omero.model._t_ReagentWellLinksSeq),
        ('_wellLinksLoaded', (), IcePy._t_bool),
        ('_wellLinksCountPerOwner', (), _M_omero.sys._t_CountMap),
        ('_annotationLinksSeq', (), _M_omero.model._t_ReagentAnnotationLinksSeq),
        ('_annotationLinksLoaded', (), IcePy._t_bool),
        ('_annotationLinksCountPerOwner', (), _M_omero.sys._t_CountMap),
        ('_description', (), _M_omero._t_RString)
    ))
    Reagent.ice_type = _M_omero.model._t_Reagent

    Reagent._op_getVersion = IcePy.Operation('getVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    Reagent._op_setVersion = IcePy.Operation('setVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    Reagent._op_getName = IcePy.Operation('getName', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Reagent._op_setName = IcePy.Operation('setName', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Reagent._op_getReagentIdentifier = IcePy.Operation('getReagentIdentifier', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Reagent._op_setReagentIdentifier = IcePy.Operation('setReagentIdentifier', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Reagent._op_getScreen = IcePy.Operation('getScreen', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_Screen, ())
    Reagent._op_setScreen = IcePy.Operation('setScreen', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Screen),), (), None, ())
    Reagent._op_unloadWellLinks = IcePy.Operation('unloadWellLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Reagent._op_sizeOfWellLinks = IcePy.Operation('sizeOfWellLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())
    Reagent._op_copyWellLinks = IcePy.Operation('copyWellLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_ReagentWellLinksSeq, ())
    Reagent._op_addWellReagentLink = IcePy.Operation('addWellReagentLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_WellReagentLink),), (), None, ())
    Reagent._op_addAllWellReagentLinkSet = IcePy.Operation('addAllWellReagentLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ReagentWellLinksSeq),), (), None, ())
    Reagent._op_removeWellReagentLink = IcePy.Operation('removeWellReagentLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_WellReagentLink),), (), None, ())
    Reagent._op_removeAllWellReagentLinkSet = IcePy.Operation('removeAllWellReagentLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ReagentWellLinksSeq),), (), None, ())
    Reagent._op_clearWellLinks = IcePy.Operation('clearWellLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Reagent._op_reloadWellLinks = IcePy.Operation('reloadWellLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Reagent),), (), None, ())
    Reagent._op_getWellLinksCountPerOwner = IcePy.Operation('getWellLinksCountPerOwner', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.sys._t_CountMap, ())
    Reagent._op_linkWell = IcePy.Operation('linkWell', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Well),), (), _M_omero.model._t_WellReagentLink, ())
    Reagent._op_addWellReagentLinkToBoth = IcePy.Operation('addWellReagentLinkToBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_WellReagentLink), ((), IcePy._t_bool)), (), None, ())
    Reagent._op_findWellReagentLink = IcePy.Operation('findWellReagentLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Well),), (), _M_omero.model._t_ReagentWellLinksSeq, ())
    Reagent._op_unlinkWell = IcePy.Operation('unlinkWell', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Well),), (), None, ())
    Reagent._op_removeWellReagentLinkFromBoth = IcePy.Operation('removeWellReagentLinkFromBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_WellReagentLink), ((), IcePy._t_bool)), (), None, ())
    Reagent._op_linkedWellList = IcePy.Operation('linkedWellList', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_ReagentLinkedWellSeq, ())
    Reagent._op_unloadAnnotationLinks = IcePy.Operation('unloadAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Reagent._op_sizeOfAnnotationLinks = IcePy.Operation('sizeOfAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())
    Reagent._op_copyAnnotationLinks = IcePy.Operation('copyAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_ReagentAnnotationLinksSeq, ())
    Reagent._op_addReagentAnnotationLink = IcePy.Operation('addReagentAnnotationLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ReagentAnnotationLink),), (), None, ())
    Reagent._op_addAllReagentAnnotationLinkSet = IcePy.Operation('addAllReagentAnnotationLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ReagentAnnotationLinksSeq),), (), None, ())
    Reagent._op_removeReagentAnnotationLink = IcePy.Operation('removeReagentAnnotationLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ReagentAnnotationLink),), (), None, ())
    Reagent._op_removeAllReagentAnnotationLinkSet = IcePy.Operation('removeAllReagentAnnotationLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ReagentAnnotationLinksSeq),), (), None, ())
    Reagent._op_clearAnnotationLinks = IcePy.Operation('clearAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Reagent._op_reloadAnnotationLinks = IcePy.Operation('reloadAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Reagent),), (), None, ())
    Reagent._op_getAnnotationLinksCountPerOwner = IcePy.Operation('getAnnotationLinksCountPerOwner', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.sys._t_CountMap, ())
    Reagent._op_linkAnnotation = IcePy.Operation('linkAnnotation', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Annotation),), (), _M_omero.model._t_ReagentAnnotationLink, ())
    Reagent._op_addReagentAnnotationLinkToBoth = IcePy.Operation('addReagentAnnotationLinkToBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ReagentAnnotationLink), ((), IcePy._t_bool)), (), None, ())
    Reagent._op_findReagentAnnotationLink = IcePy.Operation('findReagentAnnotationLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Annotation),), (), _M_omero.model._t_ReagentAnnotationLinksSeq, ())
    Reagent._op_unlinkAnnotation = IcePy.Operation('unlinkAnnotation', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Annotation),), (), None, ())
    Reagent._op_removeReagentAnnotationLinkFromBoth = IcePy.Operation('removeReagentAnnotationLinkFromBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ReagentAnnotationLink), ((), IcePy._t_bool)), (), None, ())
    Reagent._op_linkedAnnotationList = IcePy.Operation('linkedAnnotationList', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_ReagentLinkedAnnotationSeq, ())
    Reagent._op_getDescription = IcePy.Operation('getDescription', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Reagent._op_setDescription = IcePy.Operation('setDescription', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())

    _M_omero.model.Reagent = Reagent
    del Reagent

    _M_omero.model.ReagentPrx = ReagentPrx
    del ReagentPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
