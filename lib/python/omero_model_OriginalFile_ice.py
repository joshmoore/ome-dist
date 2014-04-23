# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `OriginalFile.ice'

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

if not _M_omero.model.__dict__.has_key('PixelsOriginalFileMap'):
    _M_omero.model._t_PixelsOriginalFileMap = IcePy.declareClass('::omero::model::PixelsOriginalFileMap')
    _M_omero.model._t_PixelsOriginalFileMapPrx = IcePy.declareProxy('::omero::model::PixelsOriginalFileMap')

if not _M_omero.model.__dict__.has_key('Pixels'):
    _M_omero.model._t_Pixels = IcePy.declareClass('::omero::model::Pixels')
    _M_omero.model._t_PixelsPrx = IcePy.declareProxy('::omero::model::Pixels')

if not _M_omero.model.__dict__.has_key('ChecksumAlgorithm'):
    _M_omero.model._t_ChecksumAlgorithm = IcePy.declareClass('::omero::model::ChecksumAlgorithm')
    _M_omero.model._t_ChecksumAlgorithmPrx = IcePy.declareProxy('::omero::model::ChecksumAlgorithm')

if not _M_omero.model.__dict__.has_key('OriginalFileAnnotationLink'):
    _M_omero.model._t_OriginalFileAnnotationLink = IcePy.declareClass('::omero::model::OriginalFileAnnotationLink')
    _M_omero.model._t_OriginalFileAnnotationLinkPrx = IcePy.declareProxy('::omero::model::OriginalFileAnnotationLink')

if not _M_omero.model.__dict__.has_key('Annotation'):
    _M_omero.model._t_Annotation = IcePy.declareClass('::omero::model::Annotation')
    _M_omero.model._t_AnnotationPrx = IcePy.declareProxy('::omero::model::Annotation')

if not _M_omero.model.__dict__.has_key('Details'):
    _M_omero.model._t_Details = IcePy.declareClass('::omero::model::Details')
    _M_omero.model._t_DetailsPrx = IcePy.declareProxy('::omero::model::Details')

if not _M_omero.model.__dict__.has_key('_t_OriginalFilePixelsFileMapsSeq'):
    _M_omero.model._t_OriginalFilePixelsFileMapsSeq = IcePy.defineSequence('::omero::model::OriginalFilePixelsFileMapsSeq', (), _M_omero.model._t_PixelsOriginalFileMap)

if not _M_omero.model.__dict__.has_key('_t_OriginalFileLinkedPixelsSeq'):
    _M_omero.model._t_OriginalFileLinkedPixelsSeq = IcePy.defineSequence('::omero::model::OriginalFileLinkedPixelsSeq', (), _M_omero.model._t_Pixels)

if not _M_omero.model.__dict__.has_key('_t_OriginalFileAnnotationLinksSeq'):
    _M_omero.model._t_OriginalFileAnnotationLinksSeq = IcePy.defineSequence('::omero::model::OriginalFileAnnotationLinksSeq', (), _M_omero.model._t_OriginalFileAnnotationLink)

if not _M_omero.model.__dict__.has_key('_t_OriginalFileLinkedAnnotationSeq'):
    _M_omero.model._t_OriginalFileLinkedAnnotationSeq = IcePy.defineSequence('::omero::model::OriginalFileLinkedAnnotationSeq', (), _M_omero.model._t_Annotation)

if not _M_omero.model.__dict__.has_key('OriginalFile'):
    _M_omero.model.OriginalFile = Ice.createTempClass()
    class OriginalFile(_M_omero.model.IObject):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _pixelsFileMapsSeq=None, _pixelsFileMapsLoaded=False, _pixelsFileMapsCountPerOwner=None, _path=None, _size=None, _atime=None, _mtime=None, _ctime=None, _hasher=None, _hash=None, _mimetype=None, _annotationLinksSeq=None, _annotationLinksLoaded=False, _annotationLinksCountPerOwner=None, _name=None):
            if __builtin__.type(self) == _M_omero.model.OriginalFile:
                raise RuntimeError('omero.model.OriginalFile is an abstract class')
            _M_omero.model.IObject.__init__(self, _id, _details, _loaded)
            self._version = _version
            self._pixelsFileMapsSeq = _pixelsFileMapsSeq
            self._pixelsFileMapsLoaded = _pixelsFileMapsLoaded
            self._pixelsFileMapsCountPerOwner = _pixelsFileMapsCountPerOwner
            self._path = _path
            self._size = _size
            self._atime = _atime
            self._mtime = _mtime
            self._ctime = _ctime
            self._hasher = _hasher
            self._hash = _hash
            self._mimetype = _mimetype
            self._annotationLinksSeq = _annotationLinksSeq
            self._annotationLinksLoaded = _annotationLinksLoaded
            self._annotationLinksCountPerOwner = _annotationLinksCountPerOwner
            self._name = _name

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::IObject', '::omero::model::OriginalFile')

        def ice_id(self, current=None):
            return '::omero::model::OriginalFile'

        def ice_staticId():
            return '::omero::model::OriginalFile'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getVersion(self, current=None):
        # def setVersion(self, theVersion, current=None):
        # def unloadPixelsFileMaps(self, current=None):
        # def sizeOfPixelsFileMaps(self, current=None):
        # def copyPixelsFileMaps(self, current=None):
        # def addPixelsOriginalFileMap(self, target, current=None):
        # def addAllPixelsOriginalFileMapSet(self, targets, current=None):
        # def removePixelsOriginalFileMap(self, theTarget, current=None):
        # def removeAllPixelsOriginalFileMapSet(self, targets, current=None):
        # def clearPixelsFileMaps(self, current=None):
        # def reloadPixelsFileMaps(self, toCopy, current=None):
        # def getPixelsFileMapsCountPerOwner(self, current=None):
        # def linkPixels(self, addition, current=None):
        # def addPixelsOriginalFileMapToBoth(self, link, bothSides, current=None):
        # def findPixelsOriginalFileMap(self, removal, current=None):
        # def unlinkPixels(self, removal, current=None):
        # def removePixelsOriginalFileMapFromBoth(self, link, bothSides, current=None):
        # def linkedPixelsList(self, current=None):
        # def getPath(self, current=None):
        # def setPath(self, thePath, current=None):
        # def getSize(self, current=None):
        # def setSize(self, theSize, current=None):
        # def getAtime(self, current=None):
        # def setAtime(self, theAtime, current=None):
        # def getMtime(self, current=None):
        # def setMtime(self, theMtime, current=None):
        # def getCtime(self, current=None):
        # def setCtime(self, theCtime, current=None):
        # def getHasher(self, current=None):
        # def setHasher(self, theHasher, current=None):
        # def getHash(self, current=None):
        # def setHash(self, theHash, current=None):
        # def getMimetype(self, current=None):
        # def setMimetype(self, theMimetype, current=None):
        # def unloadAnnotationLinks(self, current=None):
        # def sizeOfAnnotationLinks(self, current=None):
        # def copyAnnotationLinks(self, current=None):
        # def addOriginalFileAnnotationLink(self, target, current=None):
        # def addAllOriginalFileAnnotationLinkSet(self, targets, current=None):
        # def removeOriginalFileAnnotationLink(self, theTarget, current=None):
        # def removeAllOriginalFileAnnotationLinkSet(self, targets, current=None):
        # def clearAnnotationLinks(self, current=None):
        # def reloadAnnotationLinks(self, toCopy, current=None):
        # def getAnnotationLinksCountPerOwner(self, current=None):
        # def linkAnnotation(self, addition, current=None):
        # def addOriginalFileAnnotationLinkToBoth(self, link, bothSides, current=None):
        # def findOriginalFileAnnotationLink(self, removal, current=None):
        # def unlinkAnnotation(self, removal, current=None):
        # def removeOriginalFileAnnotationLinkFromBoth(self, link, bothSides, current=None):
        # def linkedAnnotationList(self, current=None):
        # def getName(self, current=None):
        # def setName(self, theName, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_OriginalFile)

        __repr__ = __str__

    _M_omero.model.OriginalFilePrx = Ice.createTempClass()
    class OriginalFilePrx(_M_omero.model.IObjectPrx):

        def getVersion(self, _ctx=None):
            return _M_omero.model.OriginalFile._op_getVersion.invoke(self, ((), _ctx))

        def setVersion(self, theVersion, _ctx=None):
            return _M_omero.model.OriginalFile._op_setVersion.invoke(self, ((theVersion, ), _ctx))

        def unloadPixelsFileMaps(self, _ctx=None):
            return _M_omero.model.OriginalFile._op_unloadPixelsFileMaps.invoke(self, ((), _ctx))

        def sizeOfPixelsFileMaps(self, _ctx=None):
            return _M_omero.model.OriginalFile._op_sizeOfPixelsFileMaps.invoke(self, ((), _ctx))

        def copyPixelsFileMaps(self, _ctx=None):
            return _M_omero.model.OriginalFile._op_copyPixelsFileMaps.invoke(self, ((), _ctx))

        def addPixelsOriginalFileMap(self, target, _ctx=None):
            return _M_omero.model.OriginalFile._op_addPixelsOriginalFileMap.invoke(self, ((target, ), _ctx))

        def addAllPixelsOriginalFileMapSet(self, targets, _ctx=None):
            return _M_omero.model.OriginalFile._op_addAllPixelsOriginalFileMapSet.invoke(self, ((targets, ), _ctx))

        def removePixelsOriginalFileMap(self, theTarget, _ctx=None):
            return _M_omero.model.OriginalFile._op_removePixelsOriginalFileMap.invoke(self, ((theTarget, ), _ctx))

        def removeAllPixelsOriginalFileMapSet(self, targets, _ctx=None):
            return _M_omero.model.OriginalFile._op_removeAllPixelsOriginalFileMapSet.invoke(self, ((targets, ), _ctx))

        def clearPixelsFileMaps(self, _ctx=None):
            return _M_omero.model.OriginalFile._op_clearPixelsFileMaps.invoke(self, ((), _ctx))

        def reloadPixelsFileMaps(self, toCopy, _ctx=None):
            return _M_omero.model.OriginalFile._op_reloadPixelsFileMaps.invoke(self, ((toCopy, ), _ctx))

        def getPixelsFileMapsCountPerOwner(self, _ctx=None):
            return _M_omero.model.OriginalFile._op_getPixelsFileMapsCountPerOwner.invoke(self, ((), _ctx))

        def linkPixels(self, addition, _ctx=None):
            return _M_omero.model.OriginalFile._op_linkPixels.invoke(self, ((addition, ), _ctx))

        def addPixelsOriginalFileMapToBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.OriginalFile._op_addPixelsOriginalFileMapToBoth.invoke(self, ((link, bothSides), _ctx))

        def findPixelsOriginalFileMap(self, removal, _ctx=None):
            return _M_omero.model.OriginalFile._op_findPixelsOriginalFileMap.invoke(self, ((removal, ), _ctx))

        def unlinkPixels(self, removal, _ctx=None):
            return _M_omero.model.OriginalFile._op_unlinkPixels.invoke(self, ((removal, ), _ctx))

        def removePixelsOriginalFileMapFromBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.OriginalFile._op_removePixelsOriginalFileMapFromBoth.invoke(self, ((link, bothSides), _ctx))

        def linkedPixelsList(self, _ctx=None):
            return _M_omero.model.OriginalFile._op_linkedPixelsList.invoke(self, ((), _ctx))

        def getPath(self, _ctx=None):
            return _M_omero.model.OriginalFile._op_getPath.invoke(self, ((), _ctx))

        def setPath(self, thePath, _ctx=None):
            return _M_omero.model.OriginalFile._op_setPath.invoke(self, ((thePath, ), _ctx))

        def getSize(self, _ctx=None):
            return _M_omero.model.OriginalFile._op_getSize.invoke(self, ((), _ctx))

        def setSize(self, theSize, _ctx=None):
            return _M_omero.model.OriginalFile._op_setSize.invoke(self, ((theSize, ), _ctx))

        def getAtime(self, _ctx=None):
            return _M_omero.model.OriginalFile._op_getAtime.invoke(self, ((), _ctx))

        def setAtime(self, theAtime, _ctx=None):
            return _M_omero.model.OriginalFile._op_setAtime.invoke(self, ((theAtime, ), _ctx))

        def getMtime(self, _ctx=None):
            return _M_omero.model.OriginalFile._op_getMtime.invoke(self, ((), _ctx))

        def setMtime(self, theMtime, _ctx=None):
            return _M_omero.model.OriginalFile._op_setMtime.invoke(self, ((theMtime, ), _ctx))

        def getCtime(self, _ctx=None):
            return _M_omero.model.OriginalFile._op_getCtime.invoke(self, ((), _ctx))

        def setCtime(self, theCtime, _ctx=None):
            return _M_omero.model.OriginalFile._op_setCtime.invoke(self, ((theCtime, ), _ctx))

        def getHasher(self, _ctx=None):
            return _M_omero.model.OriginalFile._op_getHasher.invoke(self, ((), _ctx))

        def setHasher(self, theHasher, _ctx=None):
            return _M_omero.model.OriginalFile._op_setHasher.invoke(self, ((theHasher, ), _ctx))

        def getHash(self, _ctx=None):
            return _M_omero.model.OriginalFile._op_getHash.invoke(self, ((), _ctx))

        def setHash(self, theHash, _ctx=None):
            return _M_omero.model.OriginalFile._op_setHash.invoke(self, ((theHash, ), _ctx))

        def getMimetype(self, _ctx=None):
            return _M_omero.model.OriginalFile._op_getMimetype.invoke(self, ((), _ctx))

        def setMimetype(self, theMimetype, _ctx=None):
            return _M_omero.model.OriginalFile._op_setMimetype.invoke(self, ((theMimetype, ), _ctx))

        def unloadAnnotationLinks(self, _ctx=None):
            return _M_omero.model.OriginalFile._op_unloadAnnotationLinks.invoke(self, ((), _ctx))

        def sizeOfAnnotationLinks(self, _ctx=None):
            return _M_omero.model.OriginalFile._op_sizeOfAnnotationLinks.invoke(self, ((), _ctx))

        def copyAnnotationLinks(self, _ctx=None):
            return _M_omero.model.OriginalFile._op_copyAnnotationLinks.invoke(self, ((), _ctx))

        def addOriginalFileAnnotationLink(self, target, _ctx=None):
            return _M_omero.model.OriginalFile._op_addOriginalFileAnnotationLink.invoke(self, ((target, ), _ctx))

        def addAllOriginalFileAnnotationLinkSet(self, targets, _ctx=None):
            return _M_omero.model.OriginalFile._op_addAllOriginalFileAnnotationLinkSet.invoke(self, ((targets, ), _ctx))

        def removeOriginalFileAnnotationLink(self, theTarget, _ctx=None):
            return _M_omero.model.OriginalFile._op_removeOriginalFileAnnotationLink.invoke(self, ((theTarget, ), _ctx))

        def removeAllOriginalFileAnnotationLinkSet(self, targets, _ctx=None):
            return _M_omero.model.OriginalFile._op_removeAllOriginalFileAnnotationLinkSet.invoke(self, ((targets, ), _ctx))

        def clearAnnotationLinks(self, _ctx=None):
            return _M_omero.model.OriginalFile._op_clearAnnotationLinks.invoke(self, ((), _ctx))

        def reloadAnnotationLinks(self, toCopy, _ctx=None):
            return _M_omero.model.OriginalFile._op_reloadAnnotationLinks.invoke(self, ((toCopy, ), _ctx))

        def getAnnotationLinksCountPerOwner(self, _ctx=None):
            return _M_omero.model.OriginalFile._op_getAnnotationLinksCountPerOwner.invoke(self, ((), _ctx))

        def linkAnnotation(self, addition, _ctx=None):
            return _M_omero.model.OriginalFile._op_linkAnnotation.invoke(self, ((addition, ), _ctx))

        def addOriginalFileAnnotationLinkToBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.OriginalFile._op_addOriginalFileAnnotationLinkToBoth.invoke(self, ((link, bothSides), _ctx))

        def findOriginalFileAnnotationLink(self, removal, _ctx=None):
            return _M_omero.model.OriginalFile._op_findOriginalFileAnnotationLink.invoke(self, ((removal, ), _ctx))

        def unlinkAnnotation(self, removal, _ctx=None):
            return _M_omero.model.OriginalFile._op_unlinkAnnotation.invoke(self, ((removal, ), _ctx))

        def removeOriginalFileAnnotationLinkFromBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.OriginalFile._op_removeOriginalFileAnnotationLinkFromBoth.invoke(self, ((link, bothSides), _ctx))

        def linkedAnnotationList(self, _ctx=None):
            return _M_omero.model.OriginalFile._op_linkedAnnotationList.invoke(self, ((), _ctx))

        def getName(self, _ctx=None):
            return _M_omero.model.OriginalFile._op_getName.invoke(self, ((), _ctx))

        def setName(self, theName, _ctx=None):
            return _M_omero.model.OriginalFile._op_setName.invoke(self, ((theName, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.OriginalFilePrx.ice_checkedCast(proxy, '::omero::model::OriginalFile', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.OriginalFilePrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_OriginalFilePrx = IcePy.defineProxy('::omero::model::OriginalFile', OriginalFilePrx)

    _M_omero.model._t_OriginalFile = IcePy.declareClass('::omero::model::OriginalFile')

    _M_omero.model._t_OriginalFile = IcePy.defineClass('::omero::model::OriginalFile', OriginalFile, (), True, _M_omero.model._t_IObject, (), (
        ('_version', (), _M_omero._t_RInt),
        ('_pixelsFileMapsSeq', (), _M_omero.model._t_OriginalFilePixelsFileMapsSeq),
        ('_pixelsFileMapsLoaded', (), IcePy._t_bool),
        ('_pixelsFileMapsCountPerOwner', (), _M_omero.sys._t_CountMap),
        ('_path', (), _M_omero._t_RString),
        ('_size', (), _M_omero._t_RLong),
        ('_atime', (), _M_omero._t_RTime),
        ('_mtime', (), _M_omero._t_RTime),
        ('_ctime', (), _M_omero._t_RTime),
        ('_hasher', (), _M_omero.model._t_ChecksumAlgorithm),
        ('_hash', (), _M_omero._t_RString),
        ('_mimetype', (), _M_omero._t_RString),
        ('_annotationLinksSeq', (), _M_omero.model._t_OriginalFileAnnotationLinksSeq),
        ('_annotationLinksLoaded', (), IcePy._t_bool),
        ('_annotationLinksCountPerOwner', (), _M_omero.sys._t_CountMap),
        ('_name', (), _M_omero._t_RString)
    ))
    OriginalFile.ice_type = _M_omero.model._t_OriginalFile

    OriginalFile._op_getVersion = IcePy.Operation('getVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    OriginalFile._op_setVersion = IcePy.Operation('setVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    OriginalFile._op_unloadPixelsFileMaps = IcePy.Operation('unloadPixelsFileMaps', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    OriginalFile._op_sizeOfPixelsFileMaps = IcePy.Operation('sizeOfPixelsFileMaps', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())
    OriginalFile._op_copyPixelsFileMaps = IcePy.Operation('copyPixelsFileMaps', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_OriginalFilePixelsFileMapsSeq, ())
    OriginalFile._op_addPixelsOriginalFileMap = IcePy.Operation('addPixelsOriginalFileMap', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_PixelsOriginalFileMap),), (), None, ())
    OriginalFile._op_addAllPixelsOriginalFileMapSet = IcePy.Operation('addAllPixelsOriginalFileMapSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_OriginalFilePixelsFileMapsSeq),), (), None, ())
    OriginalFile._op_removePixelsOriginalFileMap = IcePy.Operation('removePixelsOriginalFileMap', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_PixelsOriginalFileMap),), (), None, ())
    OriginalFile._op_removeAllPixelsOriginalFileMapSet = IcePy.Operation('removeAllPixelsOriginalFileMapSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_OriginalFilePixelsFileMapsSeq),), (), None, ())
    OriginalFile._op_clearPixelsFileMaps = IcePy.Operation('clearPixelsFileMaps', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    OriginalFile._op_reloadPixelsFileMaps = IcePy.Operation('reloadPixelsFileMaps', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_OriginalFile),), (), None, ())
    OriginalFile._op_getPixelsFileMapsCountPerOwner = IcePy.Operation('getPixelsFileMapsCountPerOwner', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.sys._t_CountMap, ())
    OriginalFile._op_linkPixels = IcePy.Operation('linkPixels', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Pixels),), (), _M_omero.model._t_PixelsOriginalFileMap, ())
    OriginalFile._op_addPixelsOriginalFileMapToBoth = IcePy.Operation('addPixelsOriginalFileMapToBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_PixelsOriginalFileMap), ((), IcePy._t_bool)), (), None, ())
    OriginalFile._op_findPixelsOriginalFileMap = IcePy.Operation('findPixelsOriginalFileMap', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Pixels),), (), _M_omero.model._t_OriginalFilePixelsFileMapsSeq, ())
    OriginalFile._op_unlinkPixels = IcePy.Operation('unlinkPixels', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Pixels),), (), None, ())
    OriginalFile._op_removePixelsOriginalFileMapFromBoth = IcePy.Operation('removePixelsOriginalFileMapFromBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_PixelsOriginalFileMap), ((), IcePy._t_bool)), (), None, ())
    OriginalFile._op_linkedPixelsList = IcePy.Operation('linkedPixelsList', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_OriginalFileLinkedPixelsSeq, ())
    OriginalFile._op_getPath = IcePy.Operation('getPath', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    OriginalFile._op_setPath = IcePy.Operation('setPath', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    OriginalFile._op_getSize = IcePy.Operation('getSize', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RLong, ())
    OriginalFile._op_setSize = IcePy.Operation('setSize', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RLong),), (), None, ())
    OriginalFile._op_getAtime = IcePy.Operation('getAtime', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RTime, ())
    OriginalFile._op_setAtime = IcePy.Operation('setAtime', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RTime),), (), None, ())
    OriginalFile._op_getMtime = IcePy.Operation('getMtime', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RTime, ())
    OriginalFile._op_setMtime = IcePy.Operation('setMtime', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RTime),), (), None, ())
    OriginalFile._op_getCtime = IcePy.Operation('getCtime', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RTime, ())
    OriginalFile._op_setCtime = IcePy.Operation('setCtime', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RTime),), (), None, ())
    OriginalFile._op_getHasher = IcePy.Operation('getHasher', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_ChecksumAlgorithm, ())
    OriginalFile._op_setHasher = IcePy.Operation('setHasher', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ChecksumAlgorithm),), (), None, ())
    OriginalFile._op_getHash = IcePy.Operation('getHash', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    OriginalFile._op_setHash = IcePy.Operation('setHash', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    OriginalFile._op_getMimetype = IcePy.Operation('getMimetype', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    OriginalFile._op_setMimetype = IcePy.Operation('setMimetype', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    OriginalFile._op_unloadAnnotationLinks = IcePy.Operation('unloadAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    OriginalFile._op_sizeOfAnnotationLinks = IcePy.Operation('sizeOfAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())
    OriginalFile._op_copyAnnotationLinks = IcePy.Operation('copyAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_OriginalFileAnnotationLinksSeq, ())
    OriginalFile._op_addOriginalFileAnnotationLink = IcePy.Operation('addOriginalFileAnnotationLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_OriginalFileAnnotationLink),), (), None, ())
    OriginalFile._op_addAllOriginalFileAnnotationLinkSet = IcePy.Operation('addAllOriginalFileAnnotationLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_OriginalFileAnnotationLinksSeq),), (), None, ())
    OriginalFile._op_removeOriginalFileAnnotationLink = IcePy.Operation('removeOriginalFileAnnotationLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_OriginalFileAnnotationLink),), (), None, ())
    OriginalFile._op_removeAllOriginalFileAnnotationLinkSet = IcePy.Operation('removeAllOriginalFileAnnotationLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_OriginalFileAnnotationLinksSeq),), (), None, ())
    OriginalFile._op_clearAnnotationLinks = IcePy.Operation('clearAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    OriginalFile._op_reloadAnnotationLinks = IcePy.Operation('reloadAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_OriginalFile),), (), None, ())
    OriginalFile._op_getAnnotationLinksCountPerOwner = IcePy.Operation('getAnnotationLinksCountPerOwner', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.sys._t_CountMap, ())
    OriginalFile._op_linkAnnotation = IcePy.Operation('linkAnnotation', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Annotation),), (), _M_omero.model._t_OriginalFileAnnotationLink, ())
    OriginalFile._op_addOriginalFileAnnotationLinkToBoth = IcePy.Operation('addOriginalFileAnnotationLinkToBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_OriginalFileAnnotationLink), ((), IcePy._t_bool)), (), None, ())
    OriginalFile._op_findOriginalFileAnnotationLink = IcePy.Operation('findOriginalFileAnnotationLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Annotation),), (), _M_omero.model._t_OriginalFileAnnotationLinksSeq, ())
    OriginalFile._op_unlinkAnnotation = IcePy.Operation('unlinkAnnotation', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Annotation),), (), None, ())
    OriginalFile._op_removeOriginalFileAnnotationLinkFromBoth = IcePy.Operation('removeOriginalFileAnnotationLinkFromBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_OriginalFileAnnotationLink), ((), IcePy._t_bool)), (), None, ())
    OriginalFile._op_linkedAnnotationList = IcePy.Operation('linkedAnnotationList', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_OriginalFileLinkedAnnotationSeq, ())
    OriginalFile._op_getName = IcePy.Operation('getName', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    OriginalFile._op_setName = IcePy.Operation('setName', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())

    _M_omero.model.OriginalFile = OriginalFile
    del OriginalFile

    _M_omero.model.OriginalFilePrx = OriginalFilePrx
    del OriginalFilePrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
