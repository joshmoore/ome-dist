# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `Annotation.ice'

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

if not _M_omero.model.__dict__.has_key('AnnotationAnnotationLink'):
    _M_omero.model._t_AnnotationAnnotationLink = IcePy.declareClass('::omero::model::AnnotationAnnotationLink')
    _M_omero.model._t_AnnotationAnnotationLinkPrx = IcePy.declareProxy('::omero::model::AnnotationAnnotationLink')

if not _M_omero.model.__dict__.has_key('Annotation'):
    _M_omero.model._t_Annotation = IcePy.declareClass('::omero::model::Annotation')
    _M_omero.model._t_AnnotationPrx = IcePy.declareProxy('::omero::model::Annotation')

if not _M_omero.model.__dict__.has_key('Details'):
    _M_omero.model._t_Details = IcePy.declareClass('::omero::model::Details')
    _M_omero.model._t_DetailsPrx = IcePy.declareProxy('::omero::model::Details')

if not _M_omero.model.__dict__.has_key('_t_AnnotationAnnotationLinksSeq'):
    _M_omero.model._t_AnnotationAnnotationLinksSeq = IcePy.defineSequence('::omero::model::AnnotationAnnotationLinksSeq', (), _M_omero.model._t_AnnotationAnnotationLink)

if not _M_omero.model.__dict__.has_key('_t_AnnotationLinkedAnnotationSeq'):
    _M_omero.model._t_AnnotationLinkedAnnotationSeq = IcePy.defineSequence('::omero::model::AnnotationLinkedAnnotationSeq', (), _M_omero.model._t_Annotation)

if not _M_omero.model.__dict__.has_key('Annotation'):
    _M_omero.model.Annotation = Ice.createTempClass()
    class Annotation(_M_omero.model.IObject):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _ns=None, _description=None, _annotationLinksSeq=None, _annotationLinksLoaded=False, _annotationLinksCountPerOwner=None):
            if __builtin__.type(self) == _M_omero.model.Annotation:
                raise RuntimeError('omero.model.Annotation is an abstract class')
            _M_omero.model.IObject.__init__(self, _id, _details, _loaded)
            self._version = _version
            self._ns = _ns
            self._description = _description
            self._annotationLinksSeq = _annotationLinksSeq
            self._annotationLinksLoaded = _annotationLinksLoaded
            self._annotationLinksCountPerOwner = _annotationLinksCountPerOwner

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::Annotation', '::omero::model::IObject')

        def ice_id(self, current=None):
            return '::omero::model::Annotation'

        def ice_staticId():
            return '::omero::model::Annotation'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getVersion(self, current=None):
        # def setVersion(self, theVersion, current=None):
        # def getNs(self, current=None):
        # def setNs(self, theNs, current=None):
        # def getDescription(self, current=None):
        # def setDescription(self, theDescription, current=None):
        # def unloadAnnotationLinks(self, current=None):
        # def sizeOfAnnotationLinks(self, current=None):
        # def copyAnnotationLinks(self, current=None):
        # def addAnnotationAnnotationLink(self, target, current=None):
        # def addAllAnnotationAnnotationLinkSet(self, targets, current=None):
        # def removeAnnotationAnnotationLink(self, theTarget, current=None):
        # def removeAllAnnotationAnnotationLinkSet(self, targets, current=None):
        # def clearAnnotationLinks(self, current=None):
        # def reloadAnnotationLinks(self, toCopy, current=None):
        # def getAnnotationLinksCountPerOwner(self, current=None):
        # def linkAnnotation(self, addition, current=None):
        # def addAnnotationAnnotationLinkToBoth(self, link, bothSides, current=None):
        # def findAnnotationAnnotationLink(self, removal, current=None):
        # def unlinkAnnotation(self, removal, current=None):
        # def removeAnnotationAnnotationLinkFromBoth(self, link, bothSides, current=None):
        # def linkedAnnotationList(self, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_Annotation)

        __repr__ = __str__

    _M_omero.model.AnnotationPrx = Ice.createTempClass()
    class AnnotationPrx(_M_omero.model.IObjectPrx):

        def getVersion(self, _ctx=None):
            return _M_omero.model.Annotation._op_getVersion.invoke(self, ((), _ctx))

        def setVersion(self, theVersion, _ctx=None):
            return _M_omero.model.Annotation._op_setVersion.invoke(self, ((theVersion, ), _ctx))

        def getNs(self, _ctx=None):
            return _M_omero.model.Annotation._op_getNs.invoke(self, ((), _ctx))

        def setNs(self, theNs, _ctx=None):
            return _M_omero.model.Annotation._op_setNs.invoke(self, ((theNs, ), _ctx))

        def getDescription(self, _ctx=None):
            return _M_omero.model.Annotation._op_getDescription.invoke(self, ((), _ctx))

        def setDescription(self, theDescription, _ctx=None):
            return _M_omero.model.Annotation._op_setDescription.invoke(self, ((theDescription, ), _ctx))

        def unloadAnnotationLinks(self, _ctx=None):
            return _M_omero.model.Annotation._op_unloadAnnotationLinks.invoke(self, ((), _ctx))

        def sizeOfAnnotationLinks(self, _ctx=None):
            return _M_omero.model.Annotation._op_sizeOfAnnotationLinks.invoke(self, ((), _ctx))

        def copyAnnotationLinks(self, _ctx=None):
            return _M_omero.model.Annotation._op_copyAnnotationLinks.invoke(self, ((), _ctx))

        def addAnnotationAnnotationLink(self, target, _ctx=None):
            return _M_omero.model.Annotation._op_addAnnotationAnnotationLink.invoke(self, ((target, ), _ctx))

        def addAllAnnotationAnnotationLinkSet(self, targets, _ctx=None):
            return _M_omero.model.Annotation._op_addAllAnnotationAnnotationLinkSet.invoke(self, ((targets, ), _ctx))

        def removeAnnotationAnnotationLink(self, theTarget, _ctx=None):
            return _M_omero.model.Annotation._op_removeAnnotationAnnotationLink.invoke(self, ((theTarget, ), _ctx))

        def removeAllAnnotationAnnotationLinkSet(self, targets, _ctx=None):
            return _M_omero.model.Annotation._op_removeAllAnnotationAnnotationLinkSet.invoke(self, ((targets, ), _ctx))

        def clearAnnotationLinks(self, _ctx=None):
            return _M_omero.model.Annotation._op_clearAnnotationLinks.invoke(self, ((), _ctx))

        def reloadAnnotationLinks(self, toCopy, _ctx=None):
            return _M_omero.model.Annotation._op_reloadAnnotationLinks.invoke(self, ((toCopy, ), _ctx))

        def getAnnotationLinksCountPerOwner(self, _ctx=None):
            return _M_omero.model.Annotation._op_getAnnotationLinksCountPerOwner.invoke(self, ((), _ctx))

        def linkAnnotation(self, addition, _ctx=None):
            return _M_omero.model.Annotation._op_linkAnnotation.invoke(self, ((addition, ), _ctx))

        def addAnnotationAnnotationLinkToBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.Annotation._op_addAnnotationAnnotationLinkToBoth.invoke(self, ((link, bothSides), _ctx))

        def findAnnotationAnnotationLink(self, removal, _ctx=None):
            return _M_omero.model.Annotation._op_findAnnotationAnnotationLink.invoke(self, ((removal, ), _ctx))

        def unlinkAnnotation(self, removal, _ctx=None):
            return _M_omero.model.Annotation._op_unlinkAnnotation.invoke(self, ((removal, ), _ctx))

        def removeAnnotationAnnotationLinkFromBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.Annotation._op_removeAnnotationAnnotationLinkFromBoth.invoke(self, ((link, bothSides), _ctx))

        def linkedAnnotationList(self, _ctx=None):
            return _M_omero.model.Annotation._op_linkedAnnotationList.invoke(self, ((), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.AnnotationPrx.ice_checkedCast(proxy, '::omero::model::Annotation', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.AnnotationPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_AnnotationPrx = IcePy.defineProxy('::omero::model::Annotation', AnnotationPrx)

    _M_omero.model._t_Annotation = IcePy.defineClass('::omero::model::Annotation', Annotation, (), True, _M_omero.model._t_IObject, (), (
        ('_version', (), _M_omero._t_RInt),
        ('_ns', (), _M_omero._t_RString),
        ('_description', (), _M_omero._t_RString),
        ('_annotationLinksSeq', (), _M_omero.model._t_AnnotationAnnotationLinksSeq),
        ('_annotationLinksLoaded', (), IcePy._t_bool),
        ('_annotationLinksCountPerOwner', (), _M_omero.sys._t_CountMap)
    ))
    Annotation.ice_type = _M_omero.model._t_Annotation

    Annotation._op_getVersion = IcePy.Operation('getVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    Annotation._op_setVersion = IcePy.Operation('setVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    Annotation._op_getNs = IcePy.Operation('getNs', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Annotation._op_setNs = IcePy.Operation('setNs', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Annotation._op_getDescription = IcePy.Operation('getDescription', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Annotation._op_setDescription = IcePy.Operation('setDescription', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Annotation._op_unloadAnnotationLinks = IcePy.Operation('unloadAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Annotation._op_sizeOfAnnotationLinks = IcePy.Operation('sizeOfAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())
    Annotation._op_copyAnnotationLinks = IcePy.Operation('copyAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_AnnotationAnnotationLinksSeq, ())
    Annotation._op_addAnnotationAnnotationLink = IcePy.Operation('addAnnotationAnnotationLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_AnnotationAnnotationLink),), (), None, ())
    Annotation._op_addAllAnnotationAnnotationLinkSet = IcePy.Operation('addAllAnnotationAnnotationLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_AnnotationAnnotationLinksSeq),), (), None, ())
    Annotation._op_removeAnnotationAnnotationLink = IcePy.Operation('removeAnnotationAnnotationLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_AnnotationAnnotationLink),), (), None, ())
    Annotation._op_removeAllAnnotationAnnotationLinkSet = IcePy.Operation('removeAllAnnotationAnnotationLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_AnnotationAnnotationLinksSeq),), (), None, ())
    Annotation._op_clearAnnotationLinks = IcePy.Operation('clearAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Annotation._op_reloadAnnotationLinks = IcePy.Operation('reloadAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Annotation),), (), None, ())
    Annotation._op_getAnnotationLinksCountPerOwner = IcePy.Operation('getAnnotationLinksCountPerOwner', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.sys._t_CountMap, ())
    Annotation._op_linkAnnotation = IcePy.Operation('linkAnnotation', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Annotation),), (), _M_omero.model._t_AnnotationAnnotationLink, ())
    Annotation._op_addAnnotationAnnotationLinkToBoth = IcePy.Operation('addAnnotationAnnotationLinkToBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_AnnotationAnnotationLink), ((), IcePy._t_bool)), (), None, ())
    Annotation._op_findAnnotationAnnotationLink = IcePy.Operation('findAnnotationAnnotationLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Annotation),), (), _M_omero.model._t_AnnotationAnnotationLinksSeq, ())
    Annotation._op_unlinkAnnotation = IcePy.Operation('unlinkAnnotation', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Annotation),), (), None, ())
    Annotation._op_removeAnnotationAnnotationLinkFromBoth = IcePy.Operation('removeAnnotationAnnotationLinkFromBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_AnnotationAnnotationLink), ((), IcePy._t_bool)), (), None, ())
    Annotation._op_linkedAnnotationList = IcePy.Operation('linkedAnnotationList', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_AnnotationLinkedAnnotationSeq, ())

    _M_omero.model.Annotation = Annotation
    del Annotation

    _M_omero.model.AnnotationPrx = AnnotationPrx
    del AnnotationPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
