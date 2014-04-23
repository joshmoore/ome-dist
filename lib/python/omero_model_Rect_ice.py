# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `Rect.ice'

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

if not _M_omero.model.__dict__.has_key('Roi'):
    _M_omero.model._t_Roi = IcePy.declareClass('::omero::model::Roi')
    _M_omero.model._t_RoiPrx = IcePy.declareProxy('::omero::model::Roi')

if not _M_omero.model.__dict__.has_key('Details'):
    _M_omero.model._t_Details = IcePy.declareClass('::omero::model::Details')
    _M_omero.model._t_DetailsPrx = IcePy.declareProxy('::omero::model::Details')

if not _M_omero.model.__dict__.has_key('Rect'):
    _M_omero.model.Rect = Ice.createTempClass()
    class Rect(_M_omero.model.Shape):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _theZ=None, _theT=None, _theC=None, _roi=None, _locked=None, _g=None, _transform=None, _vectorEffect=None, _visibility=None, _fillColor=None, _fillRule=None, _strokeColor=None, _strokeDashArray=None, _strokeDashOffset=None, _strokeLineCap=None, _strokeLineJoin=None, _strokeMiterLimit=None, _strokeWidth=None, _fontFamily=None, _fontSize=None, _fontStretch=None, _fontStyle=None, _fontVariant=None, _fontWeight=None, _x=None, _y=None, _width=None, _height=None, _rx=None, _textValue=None):
            if __builtin__.type(self) == _M_omero.model.Rect:
                raise RuntimeError('omero.model.Rect is an abstract class')
            _M_omero.model.Shape.__init__(self, _id, _details, _loaded, _version, _theZ, _theT, _theC, _roi, _locked, _g, _transform, _vectorEffect, _visibility, _fillColor, _fillRule, _strokeColor, _strokeDashArray, _strokeDashOffset, _strokeLineCap, _strokeLineJoin, _strokeMiterLimit, _strokeWidth, _fontFamily, _fontSize, _fontStretch, _fontStyle, _fontVariant, _fontWeight)
            self._x = _x
            self._y = _y
            self._width = _width
            self._height = _height
            self._rx = _rx
            self._textValue = _textValue

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::IObject', '::omero::model::Rect', '::omero::model::Shape')

        def ice_id(self, current=None):
            return '::omero::model::Rect'

        def ice_staticId():
            return '::omero::model::Rect'
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
        # def getRx(self, current=None):
        # def setRx(self, theRx, current=None):
        # def getTextValue(self, current=None):
        # def setTextValue(self, theTextValue, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_Rect)

        __repr__ = __str__

    _M_omero.model.RectPrx = Ice.createTempClass()
    class RectPrx(_M_omero.model.ShapePrx):

        def getX(self, _ctx=None):
            return _M_omero.model.Rect._op_getX.invoke(self, ((), _ctx))

        def setX(self, theX, _ctx=None):
            return _M_omero.model.Rect._op_setX.invoke(self, ((theX, ), _ctx))

        def getY(self, _ctx=None):
            return _M_omero.model.Rect._op_getY.invoke(self, ((), _ctx))

        def setY(self, theY, _ctx=None):
            return _M_omero.model.Rect._op_setY.invoke(self, ((theY, ), _ctx))

        def getWidth(self, _ctx=None):
            return _M_omero.model.Rect._op_getWidth.invoke(self, ((), _ctx))

        def setWidth(self, theWidth, _ctx=None):
            return _M_omero.model.Rect._op_setWidth.invoke(self, ((theWidth, ), _ctx))

        def getHeight(self, _ctx=None):
            return _M_omero.model.Rect._op_getHeight.invoke(self, ((), _ctx))

        def setHeight(self, theHeight, _ctx=None):
            return _M_omero.model.Rect._op_setHeight.invoke(self, ((theHeight, ), _ctx))

        def getRx(self, _ctx=None):
            return _M_omero.model.Rect._op_getRx.invoke(self, ((), _ctx))

        def setRx(self, theRx, _ctx=None):
            return _M_omero.model.Rect._op_setRx.invoke(self, ((theRx, ), _ctx))

        def getTextValue(self, _ctx=None):
            return _M_omero.model.Rect._op_getTextValue.invoke(self, ((), _ctx))

        def setTextValue(self, theTextValue, _ctx=None):
            return _M_omero.model.Rect._op_setTextValue.invoke(self, ((theTextValue, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.RectPrx.ice_checkedCast(proxy, '::omero::model::Rect', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.RectPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_RectPrx = IcePy.defineProxy('::omero::model::Rect', RectPrx)

    _M_omero.model._t_Rect = IcePy.declareClass('::omero::model::Rect')

    _M_omero.model._t_Rect = IcePy.defineClass('::omero::model::Rect', Rect, (), True, _M_omero.model._t_Shape, (), (
        ('_x', (), _M_omero._t_RDouble),
        ('_y', (), _M_omero._t_RDouble),
        ('_width', (), _M_omero._t_RDouble),
        ('_height', (), _M_omero._t_RDouble),
        ('_rx', (), _M_omero._t_RDouble),
        ('_textValue', (), _M_omero._t_RString)
    ))
    Rect.ice_type = _M_omero.model._t_Rect

    Rect._op_getX = IcePy.Operation('getX', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RDouble, ())
    Rect._op_setX = IcePy.Operation('setX', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RDouble),), (), None, ())
    Rect._op_getY = IcePy.Operation('getY', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RDouble, ())
    Rect._op_setY = IcePy.Operation('setY', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RDouble),), (), None, ())
    Rect._op_getWidth = IcePy.Operation('getWidth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RDouble, ())
    Rect._op_setWidth = IcePy.Operation('setWidth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RDouble),), (), None, ())
    Rect._op_getHeight = IcePy.Operation('getHeight', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RDouble, ())
    Rect._op_setHeight = IcePy.Operation('setHeight', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RDouble),), (), None, ())
    Rect._op_getRx = IcePy.Operation('getRx', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RDouble, ())
    Rect._op_setRx = IcePy.Operation('setRx', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RDouble),), (), None, ())
    Rect._op_getTextValue = IcePy.Operation('getTextValue', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Rect._op_setTextValue = IcePy.Operation('setTextValue', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())

    _M_omero.model.Rect = Rect
    del Rect

    _M_omero.model.RectPrx = RectPrx
    del RectPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
