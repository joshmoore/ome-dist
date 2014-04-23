# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `Shape.ice'

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

if not _M_omero.model.__dict__.has_key('Roi'):
    _M_omero.model._t_Roi = IcePy.declareClass('::omero::model::Roi')
    _M_omero.model._t_RoiPrx = IcePy.declareProxy('::omero::model::Roi')

if not _M_omero.model.__dict__.has_key('Details'):
    _M_omero.model._t_Details = IcePy.declareClass('::omero::model::Details')
    _M_omero.model._t_DetailsPrx = IcePy.declareProxy('::omero::model::Details')

if not _M_omero.model.__dict__.has_key('Shape'):
    _M_omero.model.Shape = Ice.createTempClass()
    class Shape(_M_omero.model.IObject):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _theZ=None, _theT=None, _theC=None, _roi=None, _locked=None, _g=None, _transform=None, _vectorEffect=None, _visibility=None, _fillColor=None, _fillRule=None, _strokeColor=None, _strokeDashArray=None, _strokeDashOffset=None, _strokeLineCap=None, _strokeLineJoin=None, _strokeMiterLimit=None, _strokeWidth=None, _fontFamily=None, _fontSize=None, _fontStretch=None, _fontStyle=None, _fontVariant=None, _fontWeight=None):
            if __builtin__.type(self) == _M_omero.model.Shape:
                raise RuntimeError('omero.model.Shape is an abstract class')
            _M_omero.model.IObject.__init__(self, _id, _details, _loaded)
            self._version = _version
            self._theZ = _theZ
            self._theT = _theT
            self._theC = _theC
            self._roi = _roi
            self._locked = _locked
            self._g = _g
            self._transform = _transform
            self._vectorEffect = _vectorEffect
            self._visibility = _visibility
            self._fillColor = _fillColor
            self._fillRule = _fillRule
            self._strokeColor = _strokeColor
            self._strokeDashArray = _strokeDashArray
            self._strokeDashOffset = _strokeDashOffset
            self._strokeLineCap = _strokeLineCap
            self._strokeLineJoin = _strokeLineJoin
            self._strokeMiterLimit = _strokeMiterLimit
            self._strokeWidth = _strokeWidth
            self._fontFamily = _fontFamily
            self._fontSize = _fontSize
            self._fontStretch = _fontStretch
            self._fontStyle = _fontStyle
            self._fontVariant = _fontVariant
            self._fontWeight = _fontWeight

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::IObject', '::omero::model::Shape')

        def ice_id(self, current=None):
            return '::omero::model::Shape'

        def ice_staticId():
            return '::omero::model::Shape'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getVersion(self, current=None):
        # def setVersion(self, theVersion, current=None):
        # def getTheZ(self, current=None):
        # def setTheZ(self, theTheZ, current=None):
        # def getTheT(self, current=None):
        # def setTheT(self, theTheT, current=None):
        # def getTheC(self, current=None):
        # def setTheC(self, theTheC, current=None):
        # def getRoi(self, current=None):
        # def setRoi(self, theRoi, current=None):
        # def getLocked(self, current=None):
        # def setLocked(self, theLocked, current=None):
        # def getG(self, current=None):
        # def setG(self, theG, current=None):
        # def getTransform(self, current=None):
        # def setTransform(self, theTransform, current=None):
        # def getVectorEffect(self, current=None):
        # def setVectorEffect(self, theVectorEffect, current=None):
        # def getVisibility(self, current=None):
        # def setVisibility(self, theVisibility, current=None):
        # def getFillColor(self, current=None):
        # def setFillColor(self, theFillColor, current=None):
        # def getFillRule(self, current=None):
        # def setFillRule(self, theFillRule, current=None):
        # def getStrokeColor(self, current=None):
        # def setStrokeColor(self, theStrokeColor, current=None):
        # def getStrokeDashArray(self, current=None):
        # def setStrokeDashArray(self, theStrokeDashArray, current=None):
        # def getStrokeDashOffset(self, current=None):
        # def setStrokeDashOffset(self, theStrokeDashOffset, current=None):
        # def getStrokeLineCap(self, current=None):
        # def setStrokeLineCap(self, theStrokeLineCap, current=None):
        # def getStrokeLineJoin(self, current=None):
        # def setStrokeLineJoin(self, theStrokeLineJoin, current=None):
        # def getStrokeMiterLimit(self, current=None):
        # def setStrokeMiterLimit(self, theStrokeMiterLimit, current=None):
        # def getStrokeWidth(self, current=None):
        # def setStrokeWidth(self, theStrokeWidth, current=None):
        # def getFontFamily(self, current=None):
        # def setFontFamily(self, theFontFamily, current=None):
        # def getFontSize(self, current=None):
        # def setFontSize(self, theFontSize, current=None):
        # def getFontStretch(self, current=None):
        # def setFontStretch(self, theFontStretch, current=None):
        # def getFontStyle(self, current=None):
        # def setFontStyle(self, theFontStyle, current=None):
        # def getFontVariant(self, current=None):
        # def setFontVariant(self, theFontVariant, current=None):
        # def getFontWeight(self, current=None):
        # def setFontWeight(self, theFontWeight, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_Shape)

        __repr__ = __str__

    _M_omero.model.ShapePrx = Ice.createTempClass()
    class ShapePrx(_M_omero.model.IObjectPrx):

        def getVersion(self, _ctx=None):
            return _M_omero.model.Shape._op_getVersion.invoke(self, ((), _ctx))

        def setVersion(self, theVersion, _ctx=None):
            return _M_omero.model.Shape._op_setVersion.invoke(self, ((theVersion, ), _ctx))

        def getTheZ(self, _ctx=None):
            return _M_omero.model.Shape._op_getTheZ.invoke(self, ((), _ctx))

        def setTheZ(self, theTheZ, _ctx=None):
            return _M_omero.model.Shape._op_setTheZ.invoke(self, ((theTheZ, ), _ctx))

        def getTheT(self, _ctx=None):
            return _M_omero.model.Shape._op_getTheT.invoke(self, ((), _ctx))

        def setTheT(self, theTheT, _ctx=None):
            return _M_omero.model.Shape._op_setTheT.invoke(self, ((theTheT, ), _ctx))

        def getTheC(self, _ctx=None):
            return _M_omero.model.Shape._op_getTheC.invoke(self, ((), _ctx))

        def setTheC(self, theTheC, _ctx=None):
            return _M_omero.model.Shape._op_setTheC.invoke(self, ((theTheC, ), _ctx))

        def getRoi(self, _ctx=None):
            return _M_omero.model.Shape._op_getRoi.invoke(self, ((), _ctx))

        def setRoi(self, theRoi, _ctx=None):
            return _M_omero.model.Shape._op_setRoi.invoke(self, ((theRoi, ), _ctx))

        def getLocked(self, _ctx=None):
            return _M_omero.model.Shape._op_getLocked.invoke(self, ((), _ctx))

        def setLocked(self, theLocked, _ctx=None):
            return _M_omero.model.Shape._op_setLocked.invoke(self, ((theLocked, ), _ctx))

        def getG(self, _ctx=None):
            return _M_omero.model.Shape._op_getG.invoke(self, ((), _ctx))

        def setG(self, theG, _ctx=None):
            return _M_omero.model.Shape._op_setG.invoke(self, ((theG, ), _ctx))

        def getTransform(self, _ctx=None):
            return _M_omero.model.Shape._op_getTransform.invoke(self, ((), _ctx))

        def setTransform(self, theTransform, _ctx=None):
            return _M_omero.model.Shape._op_setTransform.invoke(self, ((theTransform, ), _ctx))

        def getVectorEffect(self, _ctx=None):
            return _M_omero.model.Shape._op_getVectorEffect.invoke(self, ((), _ctx))

        def setVectorEffect(self, theVectorEffect, _ctx=None):
            return _M_omero.model.Shape._op_setVectorEffect.invoke(self, ((theVectorEffect, ), _ctx))

        def getVisibility(self, _ctx=None):
            return _M_omero.model.Shape._op_getVisibility.invoke(self, ((), _ctx))

        def setVisibility(self, theVisibility, _ctx=None):
            return _M_omero.model.Shape._op_setVisibility.invoke(self, ((theVisibility, ), _ctx))

        def getFillColor(self, _ctx=None):
            return _M_omero.model.Shape._op_getFillColor.invoke(self, ((), _ctx))

        def setFillColor(self, theFillColor, _ctx=None):
            return _M_omero.model.Shape._op_setFillColor.invoke(self, ((theFillColor, ), _ctx))

        def getFillRule(self, _ctx=None):
            return _M_omero.model.Shape._op_getFillRule.invoke(self, ((), _ctx))

        def setFillRule(self, theFillRule, _ctx=None):
            return _M_omero.model.Shape._op_setFillRule.invoke(self, ((theFillRule, ), _ctx))

        def getStrokeColor(self, _ctx=None):
            return _M_omero.model.Shape._op_getStrokeColor.invoke(self, ((), _ctx))

        def setStrokeColor(self, theStrokeColor, _ctx=None):
            return _M_omero.model.Shape._op_setStrokeColor.invoke(self, ((theStrokeColor, ), _ctx))

        def getStrokeDashArray(self, _ctx=None):
            return _M_omero.model.Shape._op_getStrokeDashArray.invoke(self, ((), _ctx))

        def setStrokeDashArray(self, theStrokeDashArray, _ctx=None):
            return _M_omero.model.Shape._op_setStrokeDashArray.invoke(self, ((theStrokeDashArray, ), _ctx))

        def getStrokeDashOffset(self, _ctx=None):
            return _M_omero.model.Shape._op_getStrokeDashOffset.invoke(self, ((), _ctx))

        def setStrokeDashOffset(self, theStrokeDashOffset, _ctx=None):
            return _M_omero.model.Shape._op_setStrokeDashOffset.invoke(self, ((theStrokeDashOffset, ), _ctx))

        def getStrokeLineCap(self, _ctx=None):
            return _M_omero.model.Shape._op_getStrokeLineCap.invoke(self, ((), _ctx))

        def setStrokeLineCap(self, theStrokeLineCap, _ctx=None):
            return _M_omero.model.Shape._op_setStrokeLineCap.invoke(self, ((theStrokeLineCap, ), _ctx))

        def getStrokeLineJoin(self, _ctx=None):
            return _M_omero.model.Shape._op_getStrokeLineJoin.invoke(self, ((), _ctx))

        def setStrokeLineJoin(self, theStrokeLineJoin, _ctx=None):
            return _M_omero.model.Shape._op_setStrokeLineJoin.invoke(self, ((theStrokeLineJoin, ), _ctx))

        def getStrokeMiterLimit(self, _ctx=None):
            return _M_omero.model.Shape._op_getStrokeMiterLimit.invoke(self, ((), _ctx))

        def setStrokeMiterLimit(self, theStrokeMiterLimit, _ctx=None):
            return _M_omero.model.Shape._op_setStrokeMiterLimit.invoke(self, ((theStrokeMiterLimit, ), _ctx))

        def getStrokeWidth(self, _ctx=None):
            return _M_omero.model.Shape._op_getStrokeWidth.invoke(self, ((), _ctx))

        def setStrokeWidth(self, theStrokeWidth, _ctx=None):
            return _M_omero.model.Shape._op_setStrokeWidth.invoke(self, ((theStrokeWidth, ), _ctx))

        def getFontFamily(self, _ctx=None):
            return _M_omero.model.Shape._op_getFontFamily.invoke(self, ((), _ctx))

        def setFontFamily(self, theFontFamily, _ctx=None):
            return _M_omero.model.Shape._op_setFontFamily.invoke(self, ((theFontFamily, ), _ctx))

        def getFontSize(self, _ctx=None):
            return _M_omero.model.Shape._op_getFontSize.invoke(self, ((), _ctx))

        def setFontSize(self, theFontSize, _ctx=None):
            return _M_omero.model.Shape._op_setFontSize.invoke(self, ((theFontSize, ), _ctx))

        def getFontStretch(self, _ctx=None):
            return _M_omero.model.Shape._op_getFontStretch.invoke(self, ((), _ctx))

        def setFontStretch(self, theFontStretch, _ctx=None):
            return _M_omero.model.Shape._op_setFontStretch.invoke(self, ((theFontStretch, ), _ctx))

        def getFontStyle(self, _ctx=None):
            return _M_omero.model.Shape._op_getFontStyle.invoke(self, ((), _ctx))

        def setFontStyle(self, theFontStyle, _ctx=None):
            return _M_omero.model.Shape._op_setFontStyle.invoke(self, ((theFontStyle, ), _ctx))

        def getFontVariant(self, _ctx=None):
            return _M_omero.model.Shape._op_getFontVariant.invoke(self, ((), _ctx))

        def setFontVariant(self, theFontVariant, _ctx=None):
            return _M_omero.model.Shape._op_setFontVariant.invoke(self, ((theFontVariant, ), _ctx))

        def getFontWeight(self, _ctx=None):
            return _M_omero.model.Shape._op_getFontWeight.invoke(self, ((), _ctx))

        def setFontWeight(self, theFontWeight, _ctx=None):
            return _M_omero.model.Shape._op_setFontWeight.invoke(self, ((theFontWeight, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.ShapePrx.ice_checkedCast(proxy, '::omero::model::Shape', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.ShapePrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_ShapePrx = IcePy.defineProxy('::omero::model::Shape', ShapePrx)

    _M_omero.model._t_Shape = IcePy.declareClass('::omero::model::Shape')

    _M_omero.model._t_Shape = IcePy.defineClass('::omero::model::Shape', Shape, (), True, _M_omero.model._t_IObject, (), (
        ('_version', (), _M_omero._t_RInt),
        ('_theZ', (), _M_omero._t_RInt),
        ('_theT', (), _M_omero._t_RInt),
        ('_theC', (), _M_omero._t_RInt),
        ('_roi', (), _M_omero.model._t_Roi),
        ('_locked', (), _M_omero._t_RBool),
        ('_g', (), _M_omero._t_RString),
        ('_transform', (), _M_omero._t_RString),
        ('_vectorEffect', (), _M_omero._t_RString),
        ('_visibility', (), _M_omero._t_RBool),
        ('_fillColor', (), _M_omero._t_RInt),
        ('_fillRule', (), _M_omero._t_RString),
        ('_strokeColor', (), _M_omero._t_RInt),
        ('_strokeDashArray', (), _M_omero._t_RString),
        ('_strokeDashOffset', (), _M_omero._t_RInt),
        ('_strokeLineCap', (), _M_omero._t_RString),
        ('_strokeLineJoin', (), _M_omero._t_RString),
        ('_strokeMiterLimit', (), _M_omero._t_RInt),
        ('_strokeWidth', (), _M_omero._t_RInt),
        ('_fontFamily', (), _M_omero._t_RString),
        ('_fontSize', (), _M_omero._t_RInt),
        ('_fontStretch', (), _M_omero._t_RString),
        ('_fontStyle', (), _M_omero._t_RString),
        ('_fontVariant', (), _M_omero._t_RString),
        ('_fontWeight', (), _M_omero._t_RString)
    ))
    Shape.ice_type = _M_omero.model._t_Shape

    Shape._op_getVersion = IcePy.Operation('getVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    Shape._op_setVersion = IcePy.Operation('setVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    Shape._op_getTheZ = IcePy.Operation('getTheZ', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    Shape._op_setTheZ = IcePy.Operation('setTheZ', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    Shape._op_getTheT = IcePy.Operation('getTheT', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    Shape._op_setTheT = IcePy.Operation('setTheT', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    Shape._op_getTheC = IcePy.Operation('getTheC', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    Shape._op_setTheC = IcePy.Operation('setTheC', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    Shape._op_getRoi = IcePy.Operation('getRoi', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_Roi, ())
    Shape._op_setRoi = IcePy.Operation('setRoi', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Roi),), (), None, ())
    Shape._op_getLocked = IcePy.Operation('getLocked', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RBool, ())
    Shape._op_setLocked = IcePy.Operation('setLocked', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RBool),), (), None, ())
    Shape._op_getG = IcePy.Operation('getG', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Shape._op_setG = IcePy.Operation('setG', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Shape._op_getTransform = IcePy.Operation('getTransform', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Shape._op_setTransform = IcePy.Operation('setTransform', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Shape._op_getVectorEffect = IcePy.Operation('getVectorEffect', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Shape._op_setVectorEffect = IcePy.Operation('setVectorEffect', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Shape._op_getVisibility = IcePy.Operation('getVisibility', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RBool, ())
    Shape._op_setVisibility = IcePy.Operation('setVisibility', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RBool),), (), None, ())
    Shape._op_getFillColor = IcePy.Operation('getFillColor', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    Shape._op_setFillColor = IcePy.Operation('setFillColor', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    Shape._op_getFillRule = IcePy.Operation('getFillRule', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Shape._op_setFillRule = IcePy.Operation('setFillRule', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Shape._op_getStrokeColor = IcePy.Operation('getStrokeColor', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    Shape._op_setStrokeColor = IcePy.Operation('setStrokeColor', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    Shape._op_getStrokeDashArray = IcePy.Operation('getStrokeDashArray', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Shape._op_setStrokeDashArray = IcePy.Operation('setStrokeDashArray', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Shape._op_getStrokeDashOffset = IcePy.Operation('getStrokeDashOffset', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    Shape._op_setStrokeDashOffset = IcePy.Operation('setStrokeDashOffset', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    Shape._op_getStrokeLineCap = IcePy.Operation('getStrokeLineCap', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Shape._op_setStrokeLineCap = IcePy.Operation('setStrokeLineCap', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Shape._op_getStrokeLineJoin = IcePy.Operation('getStrokeLineJoin', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Shape._op_setStrokeLineJoin = IcePy.Operation('setStrokeLineJoin', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Shape._op_getStrokeMiterLimit = IcePy.Operation('getStrokeMiterLimit', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    Shape._op_setStrokeMiterLimit = IcePy.Operation('setStrokeMiterLimit', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    Shape._op_getStrokeWidth = IcePy.Operation('getStrokeWidth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    Shape._op_setStrokeWidth = IcePy.Operation('setStrokeWidth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    Shape._op_getFontFamily = IcePy.Operation('getFontFamily', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Shape._op_setFontFamily = IcePy.Operation('setFontFamily', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Shape._op_getFontSize = IcePy.Operation('getFontSize', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    Shape._op_setFontSize = IcePy.Operation('setFontSize', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    Shape._op_getFontStretch = IcePy.Operation('getFontStretch', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Shape._op_setFontStretch = IcePy.Operation('setFontStretch', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Shape._op_getFontStyle = IcePy.Operation('getFontStyle', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Shape._op_setFontStyle = IcePy.Operation('setFontStyle', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Shape._op_getFontVariant = IcePy.Operation('getFontVariant', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Shape._op_setFontVariant = IcePy.Operation('setFontVariant', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Shape._op_getFontWeight = IcePy.Operation('getFontWeight', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Shape._op_setFontWeight = IcePy.Operation('setFontWeight', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())

    _M_omero.model.Shape = Shape
    del Shape

    _M_omero.model.ShapePrx = ShapePrx
    del ShapePrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
