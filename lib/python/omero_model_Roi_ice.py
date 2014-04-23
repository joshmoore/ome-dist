# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `Roi.ice'

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

if not _M_omero.model.__dict__.has_key('Shape'):
    _M_omero.model._t_Shape = IcePy.declareClass('::omero::model::Shape')
    _M_omero.model._t_ShapePrx = IcePy.declareProxy('::omero::model::Shape')

if not _M_omero.model.__dict__.has_key('Image'):
    _M_omero.model._t_Image = IcePy.declareClass('::omero::model::Image')
    _M_omero.model._t_ImagePrx = IcePy.declareProxy('::omero::model::Image')

if not _M_omero.model.__dict__.has_key('OriginalFile'):
    _M_omero.model._t_OriginalFile = IcePy.declareClass('::omero::model::OriginalFile')
    _M_omero.model._t_OriginalFilePrx = IcePy.declareProxy('::omero::model::OriginalFile')

if not _M_omero.model.__dict__.has_key('RoiAnnotationLink'):
    _M_omero.model._t_RoiAnnotationLink = IcePy.declareClass('::omero::model::RoiAnnotationLink')
    _M_omero.model._t_RoiAnnotationLinkPrx = IcePy.declareProxy('::omero::model::RoiAnnotationLink')

if not _M_omero.model.__dict__.has_key('Annotation'):
    _M_omero.model._t_Annotation = IcePy.declareClass('::omero::model::Annotation')
    _M_omero.model._t_AnnotationPrx = IcePy.declareProxy('::omero::model::Annotation')

if not _M_omero.model.__dict__.has_key('Details'):
    _M_omero.model._t_Details = IcePy.declareClass('::omero::model::Details')
    _M_omero.model._t_DetailsPrx = IcePy.declareProxy('::omero::model::Details')

if not _M_omero.model.__dict__.has_key('_t_RoiShapesSeq'):
    _M_omero.model._t_RoiShapesSeq = IcePy.defineSequence('::omero::model::RoiShapesSeq', (), _M_omero.model._t_Shape)

if not _M_omero.model.__dict__.has_key('_t_RoiAnnotationLinksSeq'):
    _M_omero.model._t_RoiAnnotationLinksSeq = IcePy.defineSequence('::omero::model::RoiAnnotationLinksSeq', (), _M_omero.model._t_RoiAnnotationLink)

if not _M_omero.model.__dict__.has_key('_t_RoiLinkedAnnotationSeq'):
    _M_omero.model._t_RoiLinkedAnnotationSeq = IcePy.defineSequence('::omero::model::RoiLinkedAnnotationSeq', (), _M_omero.model._t_Annotation)

if not _M_omero.model.__dict__.has_key('Roi'):
    _M_omero.model.Roi = Ice.createTempClass()
    class Roi(_M_omero.model.IObject):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _shapesSeq=None, _shapesLoaded=False, _image=None, _source=None, _namespaces=None, _keywords=None, _annotationLinksSeq=None, _annotationLinksLoaded=False, _annotationLinksCountPerOwner=None, _description=None):
            if __builtin__.type(self) == _M_omero.model.Roi:
                raise RuntimeError('omero.model.Roi is an abstract class')
            _M_omero.model.IObject.__init__(self, _id, _details, _loaded)
            self._version = _version
            self._shapesSeq = _shapesSeq
            self._shapesLoaded = _shapesLoaded
            self._image = _image
            self._source = _source
            self._namespaces = _namespaces
            self._keywords = _keywords
            self._annotationLinksSeq = _annotationLinksSeq
            self._annotationLinksLoaded = _annotationLinksLoaded
            self._annotationLinksCountPerOwner = _annotationLinksCountPerOwner
            self._description = _description

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::IObject', '::omero::model::Roi')

        def ice_id(self, current=None):
            return '::omero::model::Roi'

        def ice_staticId():
            return '::omero::model::Roi'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getVersion(self, current=None):
        # def setVersion(self, theVersion, current=None):
        # def unloadShapes(self, current=None):
        # def sizeOfShapes(self, current=None):
        # def copyShapes(self, current=None):
        # def addShape(self, target, current=None):
        # def addAllShapeSet(self, targets, current=None):
        # def removeShape(self, theTarget, current=None):
        # def removeAllShapeSet(self, targets, current=None):
        # def clearShapes(self, current=None):
        # def reloadShapes(self, toCopy, current=None):
        # def getShape(self, index, current=None):
        # def setShape(self, index, theElement, current=None):
        # def getPrimaryShape(self, current=None):
        # def setPrimaryShape(self, theElement, current=None):
        # def getImage(self, current=None):
        # def setImage(self, theImage, current=None):
        # def getSource(self, current=None):
        # def setSource(self, theSource, current=None):
        # def getNamespaces(self, current=None):
        # def setNamespaces(self, theNamespaces, current=None):
        # def getKeywords(self, current=None):
        # def setKeywords(self, theKeywords, current=None):
        # def unloadAnnotationLinks(self, current=None):
        # def sizeOfAnnotationLinks(self, current=None):
        # def copyAnnotationLinks(self, current=None):
        # def addRoiAnnotationLink(self, target, current=None):
        # def addAllRoiAnnotationLinkSet(self, targets, current=None):
        # def removeRoiAnnotationLink(self, theTarget, current=None):
        # def removeAllRoiAnnotationLinkSet(self, targets, current=None):
        # def clearAnnotationLinks(self, current=None):
        # def reloadAnnotationLinks(self, toCopy, current=None):
        # def getAnnotationLinksCountPerOwner(self, current=None):
        # def linkAnnotation(self, addition, current=None):
        # def addRoiAnnotationLinkToBoth(self, link, bothSides, current=None):
        # def findRoiAnnotationLink(self, removal, current=None):
        # def unlinkAnnotation(self, removal, current=None):
        # def removeRoiAnnotationLinkFromBoth(self, link, bothSides, current=None):
        # def linkedAnnotationList(self, current=None):
        # def getDescription(self, current=None):
        # def setDescription(self, theDescription, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_Roi)

        __repr__ = __str__

    _M_omero.model.RoiPrx = Ice.createTempClass()
    class RoiPrx(_M_omero.model.IObjectPrx):

        def getVersion(self, _ctx=None):
            return _M_omero.model.Roi._op_getVersion.invoke(self, ((), _ctx))

        def setVersion(self, theVersion, _ctx=None):
            return _M_omero.model.Roi._op_setVersion.invoke(self, ((theVersion, ), _ctx))

        def unloadShapes(self, _ctx=None):
            return _M_omero.model.Roi._op_unloadShapes.invoke(self, ((), _ctx))

        def sizeOfShapes(self, _ctx=None):
            return _M_omero.model.Roi._op_sizeOfShapes.invoke(self, ((), _ctx))

        def copyShapes(self, _ctx=None):
            return _M_omero.model.Roi._op_copyShapes.invoke(self, ((), _ctx))

        def addShape(self, target, _ctx=None):
            return _M_omero.model.Roi._op_addShape.invoke(self, ((target, ), _ctx))

        def addAllShapeSet(self, targets, _ctx=None):
            return _M_omero.model.Roi._op_addAllShapeSet.invoke(self, ((targets, ), _ctx))

        def removeShape(self, theTarget, _ctx=None):
            return _M_omero.model.Roi._op_removeShape.invoke(self, ((theTarget, ), _ctx))

        def removeAllShapeSet(self, targets, _ctx=None):
            return _M_omero.model.Roi._op_removeAllShapeSet.invoke(self, ((targets, ), _ctx))

        def clearShapes(self, _ctx=None):
            return _M_omero.model.Roi._op_clearShapes.invoke(self, ((), _ctx))

        def reloadShapes(self, toCopy, _ctx=None):
            return _M_omero.model.Roi._op_reloadShapes.invoke(self, ((toCopy, ), _ctx))

        def getShape(self, index, _ctx=None):
            return _M_omero.model.Roi._op_getShape.invoke(self, ((index, ), _ctx))

        def setShape(self, index, theElement, _ctx=None):
            return _M_omero.model.Roi._op_setShape.invoke(self, ((index, theElement), _ctx))

        def getPrimaryShape(self, _ctx=None):
            return _M_omero.model.Roi._op_getPrimaryShape.invoke(self, ((), _ctx))

        def setPrimaryShape(self, theElement, _ctx=None):
            return _M_omero.model.Roi._op_setPrimaryShape.invoke(self, ((theElement, ), _ctx))

        def getImage(self, _ctx=None):
            return _M_omero.model.Roi._op_getImage.invoke(self, ((), _ctx))

        def setImage(self, theImage, _ctx=None):
            return _M_omero.model.Roi._op_setImage.invoke(self, ((theImage, ), _ctx))

        def getSource(self, _ctx=None):
            return _M_omero.model.Roi._op_getSource.invoke(self, ((), _ctx))

        def setSource(self, theSource, _ctx=None):
            return _M_omero.model.Roi._op_setSource.invoke(self, ((theSource, ), _ctx))

        def getNamespaces(self, _ctx=None):
            return _M_omero.model.Roi._op_getNamespaces.invoke(self, ((), _ctx))

        def setNamespaces(self, theNamespaces, _ctx=None):
            return _M_omero.model.Roi._op_setNamespaces.invoke(self, ((theNamespaces, ), _ctx))

        def getKeywords(self, _ctx=None):
            return _M_omero.model.Roi._op_getKeywords.invoke(self, ((), _ctx))

        def setKeywords(self, theKeywords, _ctx=None):
            return _M_omero.model.Roi._op_setKeywords.invoke(self, ((theKeywords, ), _ctx))

        def unloadAnnotationLinks(self, _ctx=None):
            return _M_omero.model.Roi._op_unloadAnnotationLinks.invoke(self, ((), _ctx))

        def sizeOfAnnotationLinks(self, _ctx=None):
            return _M_omero.model.Roi._op_sizeOfAnnotationLinks.invoke(self, ((), _ctx))

        def copyAnnotationLinks(self, _ctx=None):
            return _M_omero.model.Roi._op_copyAnnotationLinks.invoke(self, ((), _ctx))

        def addRoiAnnotationLink(self, target, _ctx=None):
            return _M_omero.model.Roi._op_addRoiAnnotationLink.invoke(self, ((target, ), _ctx))

        def addAllRoiAnnotationLinkSet(self, targets, _ctx=None):
            return _M_omero.model.Roi._op_addAllRoiAnnotationLinkSet.invoke(self, ((targets, ), _ctx))

        def removeRoiAnnotationLink(self, theTarget, _ctx=None):
            return _M_omero.model.Roi._op_removeRoiAnnotationLink.invoke(self, ((theTarget, ), _ctx))

        def removeAllRoiAnnotationLinkSet(self, targets, _ctx=None):
            return _M_omero.model.Roi._op_removeAllRoiAnnotationLinkSet.invoke(self, ((targets, ), _ctx))

        def clearAnnotationLinks(self, _ctx=None):
            return _M_omero.model.Roi._op_clearAnnotationLinks.invoke(self, ((), _ctx))

        def reloadAnnotationLinks(self, toCopy, _ctx=None):
            return _M_omero.model.Roi._op_reloadAnnotationLinks.invoke(self, ((toCopy, ), _ctx))

        def getAnnotationLinksCountPerOwner(self, _ctx=None):
            return _M_omero.model.Roi._op_getAnnotationLinksCountPerOwner.invoke(self, ((), _ctx))

        def linkAnnotation(self, addition, _ctx=None):
            return _M_omero.model.Roi._op_linkAnnotation.invoke(self, ((addition, ), _ctx))

        def addRoiAnnotationLinkToBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.Roi._op_addRoiAnnotationLinkToBoth.invoke(self, ((link, bothSides), _ctx))

        def findRoiAnnotationLink(self, removal, _ctx=None):
            return _M_omero.model.Roi._op_findRoiAnnotationLink.invoke(self, ((removal, ), _ctx))

        def unlinkAnnotation(self, removal, _ctx=None):
            return _M_omero.model.Roi._op_unlinkAnnotation.invoke(self, ((removal, ), _ctx))

        def removeRoiAnnotationLinkFromBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.Roi._op_removeRoiAnnotationLinkFromBoth.invoke(self, ((link, bothSides), _ctx))

        def linkedAnnotationList(self, _ctx=None):
            return _M_omero.model.Roi._op_linkedAnnotationList.invoke(self, ((), _ctx))

        def getDescription(self, _ctx=None):
            return _M_omero.model.Roi._op_getDescription.invoke(self, ((), _ctx))

        def setDescription(self, theDescription, _ctx=None):
            return _M_omero.model.Roi._op_setDescription.invoke(self, ((theDescription, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.RoiPrx.ice_checkedCast(proxy, '::omero::model::Roi', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.RoiPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_RoiPrx = IcePy.defineProxy('::omero::model::Roi', RoiPrx)

    _M_omero.model._t_Roi = IcePy.declareClass('::omero::model::Roi')

    _M_omero.model._t_Roi = IcePy.defineClass('::omero::model::Roi', Roi, (), True, _M_omero.model._t_IObject, (), (
        ('_version', (), _M_omero._t_RInt),
        ('_shapesSeq', (), _M_omero.model._t_RoiShapesSeq),
        ('_shapesLoaded', (), IcePy._t_bool),
        ('_image', (), _M_omero.model._t_Image),
        ('_source', (), _M_omero.model._t_OriginalFile),
        ('_namespaces', (), _M_omero.api._t_StringArray),
        ('_keywords', (), _M_omero.api._t_StringArrayArray),
        ('_annotationLinksSeq', (), _M_omero.model._t_RoiAnnotationLinksSeq),
        ('_annotationLinksLoaded', (), IcePy._t_bool),
        ('_annotationLinksCountPerOwner', (), _M_omero.sys._t_CountMap),
        ('_description', (), _M_omero._t_RString)
    ))
    Roi.ice_type = _M_omero.model._t_Roi

    Roi._op_getVersion = IcePy.Operation('getVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    Roi._op_setVersion = IcePy.Operation('setVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    Roi._op_unloadShapes = IcePy.Operation('unloadShapes', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Roi._op_sizeOfShapes = IcePy.Operation('sizeOfShapes', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())
    Roi._op_copyShapes = IcePy.Operation('copyShapes', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_RoiShapesSeq, ())
    Roi._op_addShape = IcePy.Operation('addShape', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Shape),), (), None, ())
    Roi._op_addAllShapeSet = IcePy.Operation('addAllShapeSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_RoiShapesSeq),), (), None, ())
    Roi._op_removeShape = IcePy.Operation('removeShape', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Shape),), (), None, ())
    Roi._op_removeAllShapeSet = IcePy.Operation('removeAllShapeSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_RoiShapesSeq),), (), None, ())
    Roi._op_clearShapes = IcePy.Operation('clearShapes', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Roi._op_reloadShapes = IcePy.Operation('reloadShapes', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Roi),), (), None, ())
    Roi._op_getShape = IcePy.Operation('getShape', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_int),), (), _M_omero.model._t_Shape, ())
    Roi._op_setShape = IcePy.Operation('setShape', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_int), ((), _M_omero.model._t_Shape)), (), _M_omero.model._t_Shape, ())
    Roi._op_getPrimaryShape = IcePy.Operation('getPrimaryShape', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_Shape, ())
    Roi._op_setPrimaryShape = IcePy.Operation('setPrimaryShape', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Shape),), (), _M_omero.model._t_Shape, ())
    Roi._op_getImage = IcePy.Operation('getImage', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_Image, ())
    Roi._op_setImage = IcePy.Operation('setImage', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Image),), (), None, ())
    Roi._op_getSource = IcePy.Operation('getSource', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_OriginalFile, ())
    Roi._op_setSource = IcePy.Operation('setSource', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_OriginalFile),), (), None, ())
    Roi._op_getNamespaces = IcePy.Operation('getNamespaces', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.api._t_StringArray, ())
    Roi._op_setNamespaces = IcePy.Operation('setNamespaces', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.api._t_StringArray),), (), None, ())
    Roi._op_getKeywords = IcePy.Operation('getKeywords', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.api._t_StringArrayArray, ())
    Roi._op_setKeywords = IcePy.Operation('setKeywords', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.api._t_StringArrayArray),), (), None, ())
    Roi._op_unloadAnnotationLinks = IcePy.Operation('unloadAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Roi._op_sizeOfAnnotationLinks = IcePy.Operation('sizeOfAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())
    Roi._op_copyAnnotationLinks = IcePy.Operation('copyAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_RoiAnnotationLinksSeq, ())
    Roi._op_addRoiAnnotationLink = IcePy.Operation('addRoiAnnotationLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_RoiAnnotationLink),), (), None, ())
    Roi._op_addAllRoiAnnotationLinkSet = IcePy.Operation('addAllRoiAnnotationLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_RoiAnnotationLinksSeq),), (), None, ())
    Roi._op_removeRoiAnnotationLink = IcePy.Operation('removeRoiAnnotationLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_RoiAnnotationLink),), (), None, ())
    Roi._op_removeAllRoiAnnotationLinkSet = IcePy.Operation('removeAllRoiAnnotationLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_RoiAnnotationLinksSeq),), (), None, ())
    Roi._op_clearAnnotationLinks = IcePy.Operation('clearAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Roi._op_reloadAnnotationLinks = IcePy.Operation('reloadAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Roi),), (), None, ())
    Roi._op_getAnnotationLinksCountPerOwner = IcePy.Operation('getAnnotationLinksCountPerOwner', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.sys._t_CountMap, ())
    Roi._op_linkAnnotation = IcePy.Operation('linkAnnotation', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Annotation),), (), _M_omero.model._t_RoiAnnotationLink, ())
    Roi._op_addRoiAnnotationLinkToBoth = IcePy.Operation('addRoiAnnotationLinkToBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_RoiAnnotationLink), ((), IcePy._t_bool)), (), None, ())
    Roi._op_findRoiAnnotationLink = IcePy.Operation('findRoiAnnotationLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Annotation),), (), _M_omero.model._t_RoiAnnotationLinksSeq, ())
    Roi._op_unlinkAnnotation = IcePy.Operation('unlinkAnnotation', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Annotation),), (), None, ())
    Roi._op_removeRoiAnnotationLinkFromBoth = IcePy.Operation('removeRoiAnnotationLinkFromBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_RoiAnnotationLink), ((), IcePy._t_bool)), (), None, ())
    Roi._op_linkedAnnotationList = IcePy.Operation('linkedAnnotationList', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_RoiLinkedAnnotationSeq, ())
    Roi._op_getDescription = IcePy.Operation('getDescription', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Roi._op_setDescription = IcePy.Operation('setDescription', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())

    _M_omero.model.Roi = Roi
    del Roi

    _M_omero.model.RoiPrx = RoiPrx
    del RoiPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
