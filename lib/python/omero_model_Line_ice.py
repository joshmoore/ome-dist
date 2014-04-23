# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `Line.ice'

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

if not _M_omero.model.__dict__.has_key('Line'):
    _M_omero.model.Line = Ice.createTempClass()
    class Line(_M_omero.model.Shape):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _theZ=None, _theT=None, _theC=None, _roi=None, _locked=None, _g=None, _transform=None, _vectorEffect=None, _visibility=None, _fillColor=None, _fillRule=None, _strokeColor=None, _strokeDashArray=None, _strokeDashOffset=None, _strokeLineCap=None, _strokeLineJoin=None, _strokeMiterLimit=None, _strokeWidth=None, _fontFamily=None, _fontSize=None, _fontStretch=None, _fontStyle=None, _fontVariant=None, _fontWeight=None, _x1=None, _y1=None, _x2=None, _y2=None, _textValue=None):
            if __builtin__.type(self) == _M_omero.model.Line:
                raise RuntimeError('omero.model.Line is an abstract class')
            _M_omero.model.Shape.__init__(self, _id, _details, _loaded, _version, _theZ, _theT, _theC, _roi, _locked, _g, _transform, _vectorEffect, _visibility, _fillColor, _fillRule, _strokeColor, _strokeDashArray, _strokeDashOffset, _strokeLineCap, _strokeLineJoin, _strokeMiterLimit, _strokeWidth, _fontFamily, _fontSize, _fontStretch, _fontStyle, _fontVariant, _fontWeight)
            self._x1 = _x1
            self._y1 = _y1
            self._x2 = _x2
            self._y2 = _y2
            self._textValue = _textValue

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::IObject', '::omero::model::Line', '::omero::model::Shape')

        def ice_id(self, current=None):
            return '::omero::model::Line'

        def ice_staticId():
            return '::omero::model::Line'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getX1(self, current=None):
        # def setX1(self, theX1, current=None):
        # def getY1(self, current=None):
        # def setY1(self, theY1, current=None):
        # def getX2(self, current=None):
        # def setX2(self, theX2, current=None):
        # def getY2(self, current=None):
        # def setY2(self, theY2, current=None):
        # def getTextValue(self, current=None):
        # def setTextValue(self, theTextValue, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_Line)

        __repr__ = __str__

    _M_omero.model.LinePrx = Ice.createTempClass()
    class LinePrx(_M_omero.model.ShapePrx):

        def getX1(self, _ctx=None):
            return _M_omero.model.Line._op_getX1.invoke(self, ((), _ctx))

        def setX1(self, theX1, _ctx=None):
            return _M_omero.model.Line._op_setX1.invoke(self, ((theX1, ), _ctx))

        def getY1(self, _ctx=None):
            return _M_omero.model.Line._op_getY1.invoke(self, ((), _ctx))

        def setY1(self, theY1, _ctx=None):
            return _M_omero.model.Line._op_setY1.invoke(self, ((theY1, ), _ctx))

        def getX2(self, _ctx=None):
            return _M_omero.model.Line._op_getX2.invoke(self, ((), _ctx))

        def setX2(self, theX2, _ctx=None):
            return _M_omero.model.Line._op_setX2.invoke(self, ((theX2, ), _ctx))

        def getY2(self, _ctx=None):
            return _M_omero.model.Line._op_getY2.invoke(self, ((), _ctx))

        def setY2(self, theY2, _ctx=None):
            return _M_omero.model.Line._op_setY2.invoke(self, ((theY2, ), _ctx))

        def getTextValue(self, _ctx=None):
            return _M_omero.model.Line._op_getTextValue.invoke(self, ((), _ctx))

        def setTextValue(self, theTextValue, _ctx=None):
            return _M_omero.model.Line._op_setTextValue.invoke(self, ((theTextValue, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.LinePrx.ice_checkedCast(proxy, '::omero::model::Line', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.LinePrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_LinePrx = IcePy.defineProxy('::omero::model::Line', LinePrx)

    _M_omero.model._t_Line = IcePy.declareClass('::omero::model::Line')

    _M_omero.model._t_Line = IcePy.defineClass('::omero::model::Line', Line, (), True, _M_omero.model._t_Shape, (), (
        ('_x1', (), _M_omero._t_RDouble),
        ('_y1', (), _M_omero._t_RDouble),
        ('_x2', (), _M_omero._t_RDouble),
        ('_y2', (), _M_omero._t_RDouble),
        ('_textValue', (), _M_omero._t_RString)
    ))
    Line.ice_type = _M_omero.model._t_Line

    Line._op_getX1 = IcePy.Operation('getX1', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RDouble, ())
    Line._op_setX1 = IcePy.Operation('setX1', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RDouble),), (), None, ())
    Line._op_getY1 = IcePy.Operation('getY1', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RDouble, ())
    Line._op_setY1 = IcePy.Operation('setY1', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RDouble),), (), None, ())
    Line._op_getX2 = IcePy.Operation('getX2', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RDouble, ())
    Line._op_setX2 = IcePy.Operation('setX2', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RDouble),), (), None, ())
    Line._op_getY2 = IcePy.Operation('getY2', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RDouble, ())
    Line._op_setY2 = IcePy.Operation('setY2', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RDouble),), (), None, ())
    Line._op_getTextValue = IcePy.Operation('getTextValue', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Line._op_setTextValue = IcePy.Operation('setTextValue', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())

    _M_omero.model.Line = Line
    del Line

    _M_omero.model.LinePrx = LinePrx
    del LinePrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
