# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `Mask.ice'

import Ice, IcePy, __builtin__

if not Ice.__dict__.has_key("_struct_marker"):
    Ice._struct_marker = object()
import omero_model_IObject_ice
import omero_RTypes_ice
import omero_System_ice
import omero_Collections_ice
import omero_model_Shape_ice

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

if not _M_omero.model.__dict__.has_key('Roi'):
    _M_omero.model._t_Roi = IcePy.declareClass('::omero::model::Roi')
    _M_omero.model._t_RoiPrx = IcePy.declareProxy('::omero::model::Roi')

if not _M_omero.model.__dict__.has_key('Details'):
    _M_omero.model._t_Details = IcePy.declareClass('::omero::model::Details')
    _M_omero.model._t_DetailsPrx = IcePy.declareProxy('::omero::model::Details')

if not _M_omero.model.__dict__.has_key('Mask'):
    _M_omero.model.Mask = Ice.createTempClass()
    class Mask(_M_omero.model.Shape):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _theZ=None, _theT=None, _theC=None, _roi=None, _locked=None, _g=None, _transform=None, _vectorEffect=None, _visibility=None, _fillColor=None, _fillRule=None, _strokeColor=None, _strokeDashArray=None, _strokeDashOffset=None, _strokeLineCap=None, _strokeLineJoin=None, _strokeMiterLimit=None, _strokeWidth=None, _fontFamily=None, _fontSize=None, _fontStretch=None, _fontStyle=None, _fontVariant=None, _fontWeight=None, _x=None, _y=None, _width=None, _height=None, _pixels=None, _textValue=None, _bytes=None):
            if __builtin__.type(self) == _M_omero.model.Mask:
                raise RuntimeError('omero.model.Mask is an abstract class')
            _M_omero.model.Shape.__init__(self, _id, _details, _loaded, _version, _theZ, _theT, _theC, _roi, _locked, _g, _transform, _vectorEffect, _visibility, _fillColor, _fillRule, _strokeColor, _strokeDashArray, _strokeDashOffset, _strokeLineCap, _strokeLineJoin, _strokeMiterLimit, _strokeWidth, _fontFamily, _fontSize, _fontStretch, _fontStyle, _fontVariant, _fontWeight)
            self._x = _x
            self._y = _y
            self._width = _width
            self._height = _height
            self._pixels = _pixels
            self._textValue = _textValue
            self._bytes = _bytes

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::IObject', '::omero::model::Mask', '::omero::model::Shape')

        def ice_id(self, current=None):
            return '::omero::model::Mask'

        def ice_staticId():
            return '::omero::model::Mask'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getX(self, current=None):
        # def setX(self, theX, current=None):
        # def getY(self, current=None):
        # def setY(self, theY, current=None):
        # def getWidth(self, current=None):
        # def setWidth(self, theWidth, current=None):
        # def getHeight(self, current=None):
        # def setHeight(self, theHeight, current=None):
        # def getPixels(self, current=None):
        # def setPixels(self, thePixels, current=None):
        # def getTextValue(self, current=None):
        # def setTextValue(self, theTextValue, current=None):
        # def getBytes(self, current=None):
        # def setBytes(self, theBytes, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_Mask)

        __repr__ = __str__

    _M_omero.model.MaskPrx = Ice.createTempClass()
    class MaskPrx(_M_omero.model.ShapePrx):

        def getX(self, _ctx=None):
            return _M_omero.model.Mask._op_getX.invoke(self, ((), _ctx))

        def setX(self, theX, _ctx=None):
            return _M_omero.model.Mask._op_setX.invoke(self, ((theX, ), _ctx))

        def getY(self, _ctx=None):
            return _M_omero.model.Mask._op_getY.invoke(self, ((), _ctx))

        def setY(self, theY, _ctx=None):
            return _M_omero.model.Mask._op_setY.invoke(self, ((theY, ), _ctx))

        def getWidth(self, _ctx=None):
            return _M_omero.model.Mask._op_getWidth.invoke(self, ((), _ctx))

        def setWidth(self, theWidth, _ctx=None):
            return _M_omero.model.Mask._op_setWidth.invoke(self, ((theWidth, ), _ctx))

        def getHeight(self, _ctx=None):
            return _M_omero.model.Mask._op_getHeight.invoke(self, ((), _ctx))

        def setHeight(self, theHeight, _ctx=None):
            return _M_omero.model.Mask._op_setHeight.invoke(self, ((theHeight, ), _ctx))

        def getPixels(self, _ctx=None):
            return _M_omero.model.Mask._op_getPixels.invoke(self, ((), _ctx))

        def setPixels(self, thePixels, _ctx=None):
            return _M_omero.model.Mask._op_setPixels.invoke(self, ((thePixels, ), _ctx))

        def getTextValue(self, _ctx=None):
            return _M_omero.model.Mask._op_getTextValue.invoke(self, ((), _ctx))

        def setTextValue(self, theTextValue, _ctx=None):
            return _M_omero.model.Mask._op_setTextValue.invoke(self, ((theTextValue, ), _ctx))

        def getBytes(self, _ctx=None):
            return _M_omero.model.Mask._op_getBytes.invoke(self, ((), _ctx))

        def setBytes(self, theBytes, _ctx=None):
            return _M_omero.model.Mask._op_setBytes.invoke(self, ((theBytes, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.MaskPrx.ice_checkedCast(proxy, '::omero::model::Mask', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.MaskPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_MaskPrx = IcePy.defineProxy('::omero::model::Mask', MaskPrx)

    _M_omero.model._t_Mask = IcePy.declareClass('::omero::model::Mask')

    _M_omero.model._t_Mask = IcePy.defineClass('::omero::model::Mask', Mask, (), True, _M_omero.model._t_Shape, (), (
        ('_x', (), _M_omero._t_RDouble),
        ('_y', (), _M_omero._t_RDouble),
        ('_width', (), _M_omero._t_RDouble),
        ('_height', (), _M_omero._t_RDouble),
        ('_pixels', (), _M_omero.model._t_Pixels),
        ('_textValue', (), _M_omero._t_RString),
        ('_bytes', (), _M_Ice._t_ByteSeq)
    ))
    Mask.ice_type = _M_omero.model._t_Mask

    Mask._op_getX = IcePy.Operation('getX', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RDouble, ())
    Mask._op_setX = IcePy.Operation('setX', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RDouble),), (), None, ())
    Mask._op_getY = IcePy.Operation('getY', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RDouble, ())
    Mask._op_setY = IcePy.Operation('setY', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RDouble),), (), None, ())
    Mask._op_getWidth = IcePy.Operation('getWidth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RDouble, ())
    Mask._op_setWidth = IcePy.Operation('setWidth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RDouble),), (), None, ())
    Mask._op_getHeight = IcePy.Operation('getHeight', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RDouble, ())
    Mask._op_setHeight = IcePy.Operation('setHeight', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RDouble),), (), None, ())
    Mask._op_getPixels = IcePy.Operation('getPixels', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_Pixels, ())
    Mask._op_setPixels = IcePy.Operation('setPixels', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Pixels),), (), None, ())
    Mask._op_getTextValue = IcePy.Operation('getTextValue', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Mask._op_setTextValue = IcePy.Operation('setTextValue', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Mask._op_getBytes = IcePy.Operation('getBytes', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_Ice._t_ByteSeq, ())
    Mask._op_setBytes = IcePy.Operation('setBytes', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_Ice._t_ByteSeq),), (), None, ())

    _M_omero.model.Mask = Mask
    del Mask

    _M_omero.model.MaskPrx = MaskPrx
    del MaskPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
