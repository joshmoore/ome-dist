# -*- coding: utf-8 -*-
# **********************************************************************
#
# Copyright (c) 2003-2016 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************
#
# Ice version 3.6.3
#
# <auto-generated>
#
# Generated from file `Polygon.ice'
#
# Warning: do not edit this file.
#
# </auto-generated>
#

from sys import version_info as _version_info_
import Ice, IcePy
import omero_model_IObject_ice
import omero_RTypes_ice
import omero_model_RTypes_ice
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

if 'Roi' not in _M_omero.model.__dict__:
    _M_omero.model._t_Roi = IcePy.declareClass('::omero::model::Roi')
    _M_omero.model._t_RoiPrx = IcePy.declareProxy('::omero::model::Roi')

if 'Length' not in _M_omero.model.__dict__:
    _M_omero.model._t_Length = IcePy.declareClass('::omero::model::Length')
    _M_omero.model._t_LengthPrx = IcePy.declareProxy('::omero::model::Length')

if 'ShapeAnnotationLink' not in _M_omero.model.__dict__:
    _M_omero.model._t_ShapeAnnotationLink = IcePy.declareClass('::omero::model::ShapeAnnotationLink')
    _M_omero.model._t_ShapeAnnotationLinkPrx = IcePy.declareProxy('::omero::model::ShapeAnnotationLink')

if 'Annotation' not in _M_omero.model.__dict__:
    _M_omero.model._t_Annotation = IcePy.declareClass('::omero::model::Annotation')
    _M_omero.model._t_AnnotationPrx = IcePy.declareProxy('::omero::model::Annotation')

if 'Details' not in _M_omero.model.__dict__:
    _M_omero.model._t_Details = IcePy.declareClass('::omero::model::Details')
    _M_omero.model._t_DetailsPrx = IcePy.declareProxy('::omero::model::Details')

if 'Polygon' not in _M_omero.model.__dict__:
    _M_omero.model.Polygon = Ice.createTempClass()
    class Polygon(_M_omero.model.Shape):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _theZ=None, _theT=None, _theC=None, _roi=None, _locked=None, _g=None, _transform=None, _vectorEffect=None, _visibility=None, _fillColor=None, _fillRule=None, _strokeColor=None, _strokeDashArray=None, _strokeDashOffset=None, _strokeLineCap=None, _strokeLineJoin=None, _strokeMiterLimit=None, _strokeWidth=None, _fontFamily=None, _fontSize=None, _fontStretch=None, _fontStyle=None, _fontVariant=None, _fontWeight=None, _annotationLinksSeq=None, _annotationLinksLoaded=False, _annotationLinksCountPerOwner=None, _points=None, _textValue=None):
            if Ice.getType(self) == _M_omero.model.Polygon:
                raise RuntimeError('omero.model.Polygon is an abstract class')
            _M_omero.model.Shape.__init__(self, _id, _details, _loaded, _version, _theZ, _theT, _theC, _roi, _locked, _g, _transform, _vectorEffect, _visibility, _fillColor, _fillRule, _strokeColor, _strokeDashArray, _strokeDashOffset, _strokeLineCap, _strokeLineJoin, _strokeMiterLimit, _strokeWidth, _fontFamily, _fontSize, _fontStretch, _fontStyle, _fontVariant, _fontWeight, _annotationLinksSeq, _annotationLinksLoaded, _annotationLinksCountPerOwner)
            self._points = _points
            self._textValue = _textValue

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::IObject', '::omero::model::Polygon', '::omero::model::Shape')

        def ice_id(self, current=None):
            return '::omero::model::Polygon'

        def ice_staticId():
            return '::omero::model::Polygon'
        ice_staticId = staticmethod(ice_staticId)

        def getPoints(self, current=None):
            pass

        def setPoints(self, thePoints, current=None):
            pass

        def getTextValue(self, current=None):
            pass

        def setTextValue(self, theTextValue, current=None):
            pass

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_Polygon)

        __repr__ = __str__

    _M_omero.model.PolygonPrx = Ice.createTempClass()
    class PolygonPrx(_M_omero.model.ShapePrx):

        def getPoints(self, _ctx=None):
            return _M_omero.model.Polygon._op_getPoints.invoke(self, ((), _ctx))

        def begin_getPoints(self, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.model.Polygon._op_getPoints.begin(self, ((), _response, _ex, _sent, _ctx))

        def end_getPoints(self, _r):
            return _M_omero.model.Polygon._op_getPoints.end(self, _r)

        def setPoints(self, thePoints, _ctx=None):
            return _M_omero.model.Polygon._op_setPoints.invoke(self, ((thePoints, ), _ctx))

        def begin_setPoints(self, thePoints, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.model.Polygon._op_setPoints.begin(self, ((thePoints, ), _response, _ex, _sent, _ctx))

        def end_setPoints(self, _r):
            return _M_omero.model.Polygon._op_setPoints.end(self, _r)

        def getTextValue(self, _ctx=None):
            return _M_omero.model.Polygon._op_getTextValue.invoke(self, ((), _ctx))

        def begin_getTextValue(self, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.model.Polygon._op_getTextValue.begin(self, ((), _response, _ex, _sent, _ctx))

        def end_getTextValue(self, _r):
            return _M_omero.model.Polygon._op_getTextValue.end(self, _r)

        def setTextValue(self, theTextValue, _ctx=None):
            return _M_omero.model.Polygon._op_setTextValue.invoke(self, ((theTextValue, ), _ctx))

        def begin_setTextValue(self, theTextValue, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.model.Polygon._op_setTextValue.begin(self, ((theTextValue, ), _response, _ex, _sent, _ctx))

        def end_setTextValue(self, _r):
            return _M_omero.model.Polygon._op_setTextValue.end(self, _r)

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.PolygonPrx.ice_checkedCast(proxy, '::omero::model::Polygon', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.PolygonPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

        def ice_staticId():
            return '::omero::model::Polygon'
        ice_staticId = staticmethod(ice_staticId)

    _M_omero.model._t_PolygonPrx = IcePy.defineProxy('::omero::model::Polygon', PolygonPrx)

    _M_omero.model._t_Polygon = IcePy.declareClass('::omero::model::Polygon')

    _M_omero.model._t_Polygon = IcePy.defineClass('::omero::model::Polygon', Polygon, -1, (), True, False, _M_omero.model._t_Shape, (), (
        ('_points', (), _M_omero._t_RString, False, 0),
        ('_textValue', (), _M_omero._t_RString, False, 0)
    ))
    Polygon._ice_type = _M_omero.model._t_Polygon

    Polygon._op_getPoints = IcePy.Operation('getPoints', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (), (), ((), _M_omero._t_RString, False, 0), ())
    Polygon._op_setPoints = IcePy.Operation('setPoints', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (((), _M_omero._t_RString, False, 0),), (), None, ())
    Polygon._op_getTextValue = IcePy.Operation('getTextValue', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (), (), ((), _M_omero._t_RString, False, 0), ())
    Polygon._op_setTextValue = IcePy.Operation('setTextValue', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (((), _M_omero._t_RString, False, 0),), (), None, ())

    _M_omero.model.Polygon = Polygon
    del Polygon

    _M_omero.model.PolygonPrx = PolygonPrx
    del PolygonPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
