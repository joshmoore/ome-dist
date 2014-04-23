# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `Namespace.ice'

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

if not _M_omero.model.__dict__.has_key('NamespaceAnnotationLink'):
    _M_omero.model._t_NamespaceAnnotationLink = IcePy.declareClass('::omero::model::NamespaceAnnotationLink')
    _M_omero.model._t_NamespaceAnnotationLinkPrx = IcePy.declareProxy('::omero::model::NamespaceAnnotationLink')

if not _M_omero.model.__dict__.has_key('Annotation'):
    _M_omero.model._t_Annotation = IcePy.declareClass('::omero::model::Annotation')
    _M_omero.model._t_AnnotationPrx = IcePy.declareProxy('::omero::model::Annotation')

if not _M_omero.model.__dict__.has_key('Details'):
    _M_omero.model._t_Details = IcePy.declareClass('::omero::model::Details')
    _M_omero.model._t_DetailsPrx = IcePy.declareProxy('::omero::model::Details')

if not _M_omero.model.__dict__.has_key('_t_NamespaceAnnotationLinksSeq'):
    _M_omero.model._t_NamespaceAnnotationLinksSeq = IcePy.defineSequence('::omero::model::NamespaceAnnotationLinksSeq', (), _M_omero.model._t_NamespaceAnnotationLink)

if not _M_omero.model.__dict__.has_key('_t_NamespaceLinkedAnnotationSeq'):
    _M_omero.model._t_NamespaceLinkedAnnotationSeq = IcePy.defineSequence('::omero::model::NamespaceLinkedAnnotationSeq', (), _M_omero.model._t_Annotation)

if not _M_omero.model.__dict__.has_key('Namespace'):
    _M_omero.model.Namespace = Ice.createTempClass()
    class Namespace(_M_omero.model.IObject):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _keywords=None, _multivalued=None, _display=None, _annotationLinksSeq=None, _annotationLinksLoaded=False, _annotationLinksCountPerOwner=None, _name=None, _description=None):
            if __builtin__.type(self) == _M_omero.model.Namespace:
                raise RuntimeError('omero.model.Namespace is an abstract class')
            _M_omero.model.IObject.__init__(self, _id, _details, _loaded)
            self._version = _version
            self._keywords = _keywords
            self._multivalued = _multivalued
            self._display = _display
            self._annotationLinksSeq = _annotationLinksSeq
            self._annotationLinksLoaded = _annotationLinksLoaded
            self._annotationLinksCountPerOwner = _annotationLinksCountPerOwner
            self._name = _name
            self._description = _description

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::IObject', '::omero::model::Namespace')

        def ice_id(self, current=None):
            return '::omero::model::Namespace'

        def ice_staticId():
            return '::omero::model::Namespace'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getVersion(self, current=None):
        # def setVersion(self, theVersion, current=None):
        # def getKeywords(self, current=None):
        # def setKeywords(self, theKeywords, current=None):
        # def getMultivalued(self, current=None):
        # def setMultivalued(self, theMultivalued, current=None):
        # def getDisplay(self, current=None):
        # def setDisplay(self, theDisplay, current=None):
        # def unloadAnnotationLinks(self, current=None):
        # def sizeOfAnnotationLinks(self, current=None):
        # def copyAnnotationLinks(self, current=None):
        # def addNamespaceAnnotationLink(self, target, current=None):
        # def addAllNamespaceAnnotationLinkSet(self, targets, current=None):
        # def removeNamespaceAnnotationLink(self, theTarget, current=None):
        # def removeAllNamespaceAnnotationLinkSet(self, targets, current=None):
        # def clearAnnotationLinks(self, current=None):
        # def reloadAnnotationLinks(self, toCopy, current=None):
        # def getAnnotationLinksCountPerOwner(self, current=None):
        # def linkAnnotation(self, addition, current=None):
        # def addNamespaceAnnotationLinkToBoth(self, link, bothSides, current=None):
        # def findNamespaceAnnotationLink(self, removal, current=None):
        # def unlinkAnnotation(self, removal, current=None):
        # def removeNamespaceAnnotationLinkFromBoth(self, link, bothSides, current=None):
        # def linkedAnnotationList(self, current=None):
        # def getName(self, current=None):
        # def setName(self, theName, current=None):
        # def getDescription(self, current=None):
        # def setDescription(self, theDescription, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_Namespace)

        __repr__ = __str__

    _M_omero.model.NamespacePrx = Ice.createTempClass()
    class NamespacePrx(_M_omero.model.IObjectPrx):

        def getVersion(self, _ctx=None):
            return _M_omero.model.Namespace._op_getVersion.invoke(self, ((), _ctx))

        def setVersion(self, theVersion, _ctx=None):
            return _M_omero.model.Namespace._op_setVersion.invoke(self, ((theVersion, ), _ctx))

        def getKeywords(self, _ctx=None):
            return _M_omero.model.Namespace._op_getKeywords.invoke(self, ((), _ctx))

        def setKeywords(self, theKeywords, _ctx=None):
            return _M_omero.model.Namespace._op_setKeywords.invoke(self, ((theKeywords, ), _ctx))

        def getMultivalued(self, _ctx=None):
            return _M_omero.model.Namespace._op_getMultivalued.invoke(self, ((), _ctx))

        def setMultivalued(self, theMultivalued, _ctx=None):
            return _M_omero.model.Namespace._op_setMultivalued.invoke(self, ((theMultivalued, ), _ctx))

        def getDisplay(self, _ctx=None):
            return _M_omero.model.Namespace._op_getDisplay.invoke(self, ((), _ctx))

        def setDisplay(self, theDisplay, _ctx=None):
            return _M_omero.model.Namespace._op_setDisplay.invoke(self, ((theDisplay, ), _ctx))

        def unloadAnnotationLinks(self, _ctx=None):
            return _M_omero.model.Namespace._op_unloadAnnotationLinks.invoke(self, ((), _ctx))

        def sizeOfAnnotationLinks(self, _ctx=None):
            return _M_omero.model.Namespace._op_sizeOfAnnotationLinks.invoke(self, ((), _ctx))

        def copyAnnotationLinks(self, _ctx=None):
            return _M_omero.model.Namespace._op_copyAnnotationLinks.invoke(self, ((), _ctx))

        def addNamespaceAnnotationLink(self, target, _ctx=None):
            return _M_omero.model.Namespace._op_addNamespaceAnnotationLink.invoke(self, ((target, ), _ctx))

        def addAllNamespaceAnnotationLinkSet(self, targets, _ctx=None):
            return _M_omero.model.Namespace._op_addAllNamespaceAnnotationLinkSet.invoke(self, ((targets, ), _ctx))

        def removeNamespaceAnnotationLink(self, theTarget, _ctx=None):
            return _M_omero.model.Namespace._op_removeNamespaceAnnotationLink.invoke(self, ((theTarget, ), _ctx))

        def removeAllNamespaceAnnotationLinkSet(self, targets, _ctx=None):
            return _M_omero.model.Namespace._op_removeAllNamespaceAnnotationLinkSet.invoke(self, ((targets, ), _ctx))

        def clearAnnotationLinks(self, _ctx=None):
            return _M_omero.model.Namespace._op_clearAnnotationLinks.invoke(self, ((), _ctx))

        def reloadAnnotationLinks(self, toCopy, _ctx=None):
            return _M_omero.model.Namespace._op_reloadAnnotationLinks.invoke(self, ((toCopy, ), _ctx))

        def getAnnotationLinksCountPerOwner(self, _ctx=None):
            return _M_omero.model.Namespace._op_getAnnotationLinksCountPerOwner.invoke(self, ((), _ctx))

        def linkAnnotation(self, addition, _ctx=None):
            return _M_omero.model.Namespace._op_linkAnnotation.invoke(self, ((addition, ), _ctx))

        def addNamespaceAnnotationLinkToBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.Namespace._op_addNamespaceAnnotationLinkToBoth.invoke(self, ((link, bothSides), _ctx))

        def findNamespaceAnnotationLink(self, removal, _ctx=None):
            return _M_omero.model.Namespace._op_findNamespaceAnnotationLink.invoke(self, ((removal, ), _ctx))

        def unlinkAnnotation(self, removal, _ctx=None):
            return _M_omero.model.Namespace._op_unlinkAnnotation.invoke(self, ((removal, ), _ctx))

        def removeNamespaceAnnotationLinkFromBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.Namespace._op_removeNamespaceAnnotationLinkFromBoth.invoke(self, ((link, bothSides), _ctx))

        def linkedAnnotationList(self, _ctx=None):
            return _M_omero.model.Namespace._op_linkedAnnotationList.invoke(self, ((), _ctx))

        def getName(self, _ctx=None):
            return _M_omero.model.Namespace._op_getName.invoke(self, ((), _ctx))

        def setName(self, theName, _ctx=None):
            return _M_omero.model.Namespace._op_setName.invoke(self, ((theName, ), _ctx))

        def getDescription(self, _ctx=None):
            return _M_omero.model.Namespace._op_getDescription.invoke(self, ((), _ctx))

        def setDescription(self, theDescription, _ctx=None):
            return _M_omero.model.Namespace._op_setDescription.invoke(self, ((theDescription, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.NamespacePrx.ice_checkedCast(proxy, '::omero::model::Namespace', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.NamespacePrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_NamespacePrx = IcePy.defineProxy('::omero::model::Namespace', NamespacePrx)

    _M_omero.model._t_Namespace = IcePy.declareClass('::omero::model::Namespace')

    _M_omero.model._t_Namespace = IcePy.defineClass('::omero::model::Namespace', Namespace, (), True, _M_omero.model._t_IObject, (), (
        ('_version', (), _M_omero._t_RInt),
        ('_keywords', (), _M_omero.api._t_StringArray),
        ('_multivalued', (), _M_omero._t_RBool),
        ('_display', (), _M_omero._t_RBool),
        ('_annotationLinksSeq', (), _M_omero.model._t_NamespaceAnnotationLinksSeq),
        ('_annotationLinksLoaded', (), IcePy._t_bool),
        ('_annotationLinksCountPerOwner', (), _M_omero.sys._t_CountMap),
        ('_name', (), _M_omero._t_RString),
        ('_description', (), _M_omero._t_RString)
    ))
    Namespace.ice_type = _M_omero.model._t_Namespace

    Namespace._op_getVersion = IcePy.Operation('getVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    Namespace._op_setVersion = IcePy.Operation('setVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    Namespace._op_getKeywords = IcePy.Operation('getKeywords', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.api._t_StringArray, ())
    Namespace._op_setKeywords = IcePy.Operation('setKeywords', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.api._t_StringArray),), (), None, ())
    Namespace._op_getMultivalued = IcePy.Operation('getMultivalued', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RBool, ())
    Namespace._op_setMultivalued = IcePy.Operation('setMultivalued', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RBool),), (), None, ())
    Namespace._op_getDisplay = IcePy.Operation('getDisplay', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RBool, ())
    Namespace._op_setDisplay = IcePy.Operation('setDisplay', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RBool),), (), None, ())
    Namespace._op_unloadAnnotationLinks = IcePy.Operation('unloadAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Namespace._op_sizeOfAnnotationLinks = IcePy.Operation('sizeOfAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())
    Namespace._op_copyAnnotationLinks = IcePy.Operation('copyAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_NamespaceAnnotationLinksSeq, ())
    Namespace._op_addNamespaceAnnotationLink = IcePy.Operation('addNamespaceAnnotationLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_NamespaceAnnotationLink),), (), None, ())
    Namespace._op_addAllNamespaceAnnotationLinkSet = IcePy.Operation('addAllNamespaceAnnotationLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_NamespaceAnnotationLinksSeq),), (), None, ())
    Namespace._op_removeNamespaceAnnotationLink = IcePy.Operation('removeNamespaceAnnotationLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_NamespaceAnnotationLink),), (), None, ())
    Namespace._op_removeAllNamespaceAnnotationLinkSet = IcePy.Operation('removeAllNamespaceAnnotationLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_NamespaceAnnotationLinksSeq),), (), None, ())
    Namespace._op_clearAnnotationLinks = IcePy.Operation('clearAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Namespace._op_reloadAnnotationLinks = IcePy.Operation('reloadAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Namespace),), (), None, ())
    Namespace._op_getAnnotationLinksCountPerOwner = IcePy.Operation('getAnnotationLinksCountPerOwner', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.sys._t_CountMap, ())
    Namespace._op_linkAnnotation = IcePy.Operation('linkAnnotation', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Annotation),), (), _M_omero.model._t_NamespaceAnnotationLink, ())
    Namespace._op_addNamespaceAnnotationLinkToBoth = IcePy.Operation('addNamespaceAnnotationLinkToBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_NamespaceAnnotationLink), ((), IcePy._t_bool)), (), None, ())
    Namespace._op_findNamespaceAnnotationLink = IcePy.Operation('findNamespaceAnnotationLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Annotation),), (), _M_omero.model._t_NamespaceAnnotationLinksSeq, ())
    Namespace._op_unlinkAnnotation = IcePy.Operation('unlinkAnnotation', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Annotation),), (), None, ())
    Namespace._op_removeNamespaceAnnotationLinkFromBoth = IcePy.Operation('removeNamespaceAnnotationLinkFromBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_NamespaceAnnotationLink), ((), IcePy._t_bool)), (), None, ())
    Namespace._op_linkedAnnotationList = IcePy.Operation('linkedAnnotationList', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_NamespaceLinkedAnnotationSeq, ())
    Namespace._op_getName = IcePy.Operation('getName', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Namespace._op_setName = IcePy.Operation('setName', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Namespace._op_getDescription = IcePy.Operation('getDescription', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Namespace._op_setDescription = IcePy.Operation('setDescription', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())

    _M_omero.model.Namespace = Namespace
    del Namespace

    _M_omero.model.NamespacePrx = NamespacePrx
    del NamespacePrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
