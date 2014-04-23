# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `Thumbnail.ice'

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

if not _M_omero.model.__dict__.has_key('Pixels'):
    _M_omero.model._t_Pixels = IcePy.declareClass('::omero::model::Pixels')
    _M_omero.model._t_PixelsPrx = IcePy.declareProxy('::omero::model::Pixels')

if not _M_omero.model.__dict__.has_key('Details'):
    _M_omero.model._t_Details = IcePy.declareClass('::omero::model::Details')
    _M_omero.model._t_DetailsPrx = IcePy.declareProxy('::omero::model::Details')

if not _M_omero.model.__dict__.has_key('Thumbnail'):
    _M_omero.model.Thumbnail = Ice.createTempClass()
    class Thumbnail(_M_omero.model.IObject):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _pixels=None, _mimeType=None, _sizeX=None, _sizeY=None, _ref=None):
            if __builtin__.type(self) == _M_omero.model.Thumbnail:
                raise RuntimeError('omero.model.Thumbnail is an abstract class')
            _M_omero.model.IObject.__init__(self, _id, _details, _loaded)
            self._version = _version
            self._pixels = _pixels
            self._mimeType = _mimeType
            self._sizeX = _sizeX
            self._sizeY = _sizeY
            self._ref = _ref

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::IObject', '::omero::model::Thumbnail')

        def ice_id(self, current=None):
            return '::omero::model::Thumbnail'

        def ice_staticId():
            return '::omero::model::Thumbnail'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getVersion(self, current=None):
        # def setVersion(self, theVersion, current=None):
        # def getPixels(self, current=None):
        # def setPixels(self, thePixels, current=None):
        # def getMimeType(self, current=None):
        # def setMimeType(self, theMimeType, current=None):
        # def getSizeX(self, current=None):
        # def setSizeX(self, theSizeX, current=None):
        # def getSizeY(self, current=None):
        # def setSizeY(self, theSizeY, current=None):
        # def getRef(self, current=None):
        # def setRef(self, theRef, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_Thumbnail)

        __repr__ = __str__

    _M_omero.model.ThumbnailPrx = Ice.createTempClass()
    class ThumbnailPrx(_M_omero.model.IObjectPrx):

        def getVersion(self, _ctx=None):
            return _M_omero.model.Thumbnail._op_getVersion.invoke(self, ((), _ctx))

        def setVersion(self, theVersion, _ctx=None):
            return _M_omero.model.Thumbnail._op_setVersion.invoke(self, ((theVersion, ), _ctx))

        def getPixels(self, _ctx=None):
            return _M_omero.model.Thumbnail._op_getPixels.invoke(self, ((), _ctx))

        def setPixels(self, thePixels, _ctx=None):
            return _M_omero.model.Thumbnail._op_setPixels.invoke(self, ((thePixels, ), _ctx))

        def getMimeType(self, _ctx=None):
            return _M_omero.model.Thumbnail._op_getMimeType.invoke(self, ((), _ctx))

        def setMimeType(self, theMimeType, _ctx=None):
            return _M_omero.model.Thumbnail._op_setMimeType.invoke(self, ((theMimeType, ), _ctx))

        def getSizeX(self, _ctx=None):
            return _M_omero.model.Thumbnail._op_getSizeX.invoke(self, ((), _ctx))

        def setSizeX(self, theSizeX, _ctx=None):
            return _M_omero.model.Thumbnail._op_setSizeX.invoke(self, ((theSizeX, ), _ctx))

        def getSizeY(self, _ctx=None):
            return _M_omero.model.Thumbnail._op_getSizeY.invoke(self, ((), _ctx))

        def setSizeY(self, theSizeY, _ctx=None):
            return _M_omero.model.Thumbnail._op_setSizeY.invoke(self, ((theSizeY, ), _ctx))

        def getRef(self, _ctx=None):
            return _M_omero.model.Thumbnail._op_getRef.invoke(self, ((), _ctx))

        def setRef(self, theRef, _ctx=None):
            return _M_omero.model.Thumbnail._op_setRef.invoke(self, ((theRef, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.ThumbnailPrx.ice_checkedCast(proxy, '::omero::model::Thumbnail', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.ThumbnailPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_ThumbnailPrx = IcePy.defineProxy('::omero::model::Thumbnail', ThumbnailPrx)

    _M_omero.model._t_Thumbnail = IcePy.declareClass('::omero::model::Thumbnail')

    _M_omero.model._t_Thumbnail = IcePy.defineClass('::omero::model::Thumbnail', Thumbnail, (), True, _M_omero.model._t_IObject, (), (
        ('_version', (), _M_omero._t_RInt),
        ('_pixels', (), _M_omero.model._t_Pixels),
        ('_mimeType', (), _M_omero._t_RString),
        ('_sizeX', (), _M_omero._t_RInt),
        ('_sizeY', (), _M_omero._t_RInt),
        ('_ref', (), _M_omero._t_RString)
    ))
    Thumbnail.ice_type = _M_omero.model._t_Thumbnail

    Thumbnail._op_getVersion = IcePy.Operation('getVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    Thumbnail._op_setVersion = IcePy.Operation('setVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    Thumbnail._op_getPixels = IcePy.Operation('getPixels', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_Pixels, ())
    Thumbnail._op_setPixels = IcePy.Operation('setPixels', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Pixels),), (), None, ())
    Thumbnail._op_getMimeType = IcePy.Operation('getMimeType', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Thumbnail._op_setMimeType = IcePy.Operation('setMimeType', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Thumbnail._op_getSizeX = IcePy.Operation('getSizeX', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    Thumbnail._op_setSizeX = IcePy.Operation('setSizeX', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    Thumbnail._op_getSizeY = IcePy.Operation('getSizeY', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    Thumbnail._op_setSizeY = IcePy.Operation('setSizeY', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    Thumbnail._op_getRef = IcePy.Operation('getRef', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Thumbnail._op_setRef = IcePy.Operation('setRef', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())

    _M_omero.model.Thumbnail = Thumbnail
    del Thumbnail

    _M_omero.model.ThumbnailPrx = ThumbnailPrx
    del ThumbnailPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
