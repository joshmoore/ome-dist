# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `Label.ice'

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

if not _M_omero.model.__dict__.has_key('Label'):
    _M_omero.model.Label = Ice.createTempClass()
    class Label(_M_omero.model.Shape):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _theZ=None, _theT=None, _theC=None, _roi=None, _locked=None, _g=None, _transform=None, _vectorEffect=None, _visibility=None, _fillColor=None, _fillRule=None, _strokeColor=None, _strokeDashArray=None, _strokeDashOffset=None, _strokeLineCap=None, _strokeLineJoin=None, _strokeMiterLimit=None, _strokeWidth=None, _fontFamily=None, _fontSize=None, _fontStretch=None, _fontStyle=None, _fontVariant=None, _fontWeight=None, _x=None, _y=None, _textValue=None, _anchor=None, _decoration=None, _baselineShift=None, _glyphOrientationVertical=None, _direction=None, _writingMode=None):
            if __builtin__.type(self) == _M_omero.model.Label:
                raise RuntimeError('omero.model.Label is an abstract class')
            _M_omero.model.Shape.__init__(self, _id, _details, _loaded, _version, _theZ, _theT, _theC, _roi, _locked, _g, _transform, _vectorEffect, _visibility, _fillColor, _fillRule, _strokeColor, _strokeDashArray, _strokeDashOffset, _strokeLineCap, _strokeLineJoin, _strokeMiterLimit, _strokeWidth, _fontFamily, _fontSize, _fontStretch, _fontStyle, _fontVariant, _fontWeight)
            self._x = _x
            self._y = _y
            self._textValue = _textValue
            self._anchor = _anchor
            self._decoration = _decoration
            self._baselineShift = _baselineShift
            self._glyphOrientationVertical = _glyphOrientationVertical
            self._direction = _direction
            self._writingMode = _writingMode

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::IObject', '::omero::model::Label', '::omero::model::Shape')

        def ice_id(self, current=None):
            return '::omero::model::Label'

        def ice_staticId():
            return '::omero::model::Label'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getX(self, current=None):
        # def setX(self, theX, current=None):
        # def getY(self, current=None):
        # def setY(self, theY, current=None):
        # def getTextValue(self, current=None):
        # def setTextValue(self, theTextValue, current=None):
        # def getAnchor(self, current=None):
        # def setAnchor(self, theAnchor, current=None):
        # def getDecoration(self, current=None):
        # def setDecoration(self, theDecoration, current=None):
        # def getBaselineShift(self, current=None):
        # def setBaselineShift(self, theBaselineShift, current=None):
        # def getGlyphOrientationVertical(self, current=None):
        # def setGlyphOrientationVertical(self, theGlyphOrientationVertical, current=None):
        # def getDirection(self, current=None):
        # def setDirection(self, theDirection, current=None):
        # def getWritingMode(self, current=None):
        # def setWritingMode(self, theWritingMode, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_Label)

        __repr__ = __str__

    _M_omero.model.LabelPrx = Ice.createTempClass()
    class LabelPrx(_M_omero.model.ShapePrx):

        def getX(self, _ctx=None):
            return _M_omero.model.Label._op_getX.invoke(self, ((), _ctx))

        def setX(self, theX, _ctx=None):
            return _M_omero.model.Label._op_setX.invoke(self, ((theX, ), _ctx))

        def getY(self, _ctx=None):
            return _M_omero.model.Label._op_getY.invoke(self, ((), _ctx))

        def setY(self, theY, _ctx=None):
            return _M_omero.model.Label._op_setY.invoke(self, ((theY, ), _ctx))

        def getTextValue(self, _ctx=None):
            return _M_omero.model.Label._op_getTextValue.invoke(self, ((), _ctx))

        def setTextValue(self, theTextValue, _ctx=None):
            return _M_omero.model.Label._op_setTextValue.invoke(self, ((theTextValue, ), _ctx))

        def getAnchor(self, _ctx=None):
            return _M_omero.model.Label._op_getAnchor.invoke(self, ((), _ctx))

        def setAnchor(self, theAnchor, _ctx=None):
            return _M_omero.model.Label._op_setAnchor.invoke(self, ((theAnchor, ), _ctx))

        def getDecoration(self, _ctx=None):
            return _M_omero.model.Label._op_getDecoration.invoke(self, ((), _ctx))

        def setDecoration(self, theDecoration, _ctx=None):
            return _M_omero.model.Label._op_setDecoration.invoke(self, ((theDecoration, ), _ctx))

        def getBaselineShift(self, _ctx=None):
            return _M_omero.model.Label._op_getBaselineShift.invoke(self, ((), _ctx))

        def setBaselineShift(self, theBaselineShift, _ctx=None):
            return _M_omero.model.Label._op_setBaselineShift.invoke(self, ((theBaselineShift, ), _ctx))

        def getGlyphOrientationVertical(self, _ctx=None):
            return _M_omero.model.Label._op_getGlyphOrientationVertical.invoke(self, ((), _ctx))

        def setGlyphOrientationVertical(self, theGlyphOrientationVertical, _ctx=None):
            return _M_omero.model.Label._op_setGlyphOrientationVertical.invoke(self, ((theGlyphOrientationVertical, ), _ctx))

        def getDirection(self, _ctx=None):
            return _M_omero.model.Label._op_getDirection.invoke(self, ((), _ctx))

        def setDirection(self, theDirection, _ctx=None):
            return _M_omero.model.Label._op_setDirection.invoke(self, ((theDirection, ), _ctx))

        def getWritingMode(self, _ctx=None):
            return _M_omero.model.Label._op_getWritingMode.invoke(self, ((), _ctx))

        def setWritingMode(self, theWritingMode, _ctx=None):
            return _M_omero.model.Label._op_setWritingMode.invoke(self, ((theWritingMode, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.LabelPrx.ice_checkedCast(proxy, '::omero::model::Label', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.LabelPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_LabelPrx = IcePy.defineProxy('::omero::model::Label', LabelPrx)

    _M_omero.model._t_Label = IcePy.declareClass('::omero::model::Label')

    _M_omero.model._t_Label = IcePy.defineClass('::omero::model::Label', Label, (), True, _M_omero.model._t_Shape, (), (
        ('_x', (), _M_omero._t_RDouble),
        ('_y', (), _M_omero._t_RDouble),
        ('_textValue', (), _M_omero._t_RString),
        ('_anchor', (), _M_omero._t_RString),
        ('_decoration', (), _M_omero._t_RString),
        ('_baselineShift', (), _M_omero._t_RString),
        ('_glyphOrientationVertical', (), _M_omero._t_RInt),
        ('_direction', (), _M_omero._t_RString),
        ('_writingMode', (), _M_omero._t_RString)
    ))
    Label.ice_type = _M_omero.model._t_Label

    Label._op_getX = IcePy.Operation('getX', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RDouble, ())
    Label._op_setX = IcePy.Operation('setX', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RDouble),), (), None, ())
    Label._op_getY = IcePy.Operation('getY', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RDouble, ())
    Label._op_setY = IcePy.Operation('setY', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RDouble),), (), None, ())
    Label._op_getTextValue = IcePy.Operation('getTextValue', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Label._op_setTextValue = IcePy.Operation('setTextValue', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Label._op_getAnchor = IcePy.Operation('getAnchor', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Label._op_setAnchor = IcePy.Operation('setAnchor', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Label._op_getDecoration = IcePy.Operation('getDecoration', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Label._op_setDecoration = IcePy.Operation('setDecoration', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Label._op_getBaselineShift = IcePy.Operation('getBaselineShift', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Label._op_setBaselineShift = IcePy.Operation('setBaselineShift', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Label._op_getGlyphOrientationVertical = IcePy.Operation('getGlyphOrientationVertical', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    Label._op_setGlyphOrientationVertical = IcePy.Operation('setGlyphOrientationVertical', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    Label._op_getDirection = IcePy.Operation('getDirection', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Label._op_setDirection = IcePy.Operation('setDirection', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Label._op_getWritingMode = IcePy.Operation('getWritingMode', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Label._op_setWritingMode = IcePy.Operation('setWritingMode', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())

    _M_omero.model.Label = Label
    del Label

    _M_omero.model.LabelPrx = LabelPrx
    del LabelPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
