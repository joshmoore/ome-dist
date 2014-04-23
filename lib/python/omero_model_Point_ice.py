# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `Point.ice'

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

if not _M_omero.model.__dict__.has_key('Point'):
    _M_omero.model.Point = Ice.createTempClass()
    class Point(_M_omero.model.Shape):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _theZ=None, _theT=None, _theC=None, _roi=None, _locked=None, _g=None, _transform=None, _vectorEffect=None, _visibility=None, _fillColor=None, _fillRule=None, _strokeColor=None, _strokeDashArray=None, _strokeDashOffset=None, _strokeLineCap=None, _strokeLineJoin=None, _strokeMiterLimit=None, _strokeWidth=None, _fontFamily=None, _fontSize=None, _fontStretch=None, _fontStyle=None, _fontVariant=None, _fontWeight=None, _cx=None, _cy=None, _textValue=None):
            if __builtin__.type(self) == _M_omero.model.Point:
                raise RuntimeError('omero.model.Point is an abstract class')
            _M_omero.model.Shape.__init__(self, _id, _details, _loaded, _version, _theZ, _theT, _theC, _roi, _locked, _g, _transform, _vectorEffect, _visibility, _fillColor, _fillRule, _strokeColor, _strokeDashArray, _strokeDashOffset, _strokeLineCap, _strokeLineJoin, _strokeMiterLimit, _strokeWidth, _fontFamily, _fontSize, _fontStretch, _fontStyle, _fontVariant, _fontWeight)
            self._cx = _cx
            self._cy = _cy
            self._textValue = _textValue

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::IObject', '::omero::model::Point', '::omero::model::Shape')

        def ice_id(self, current=None):
            return '::omero::model::Point'

        def ice_staticId():
            return '::omero::model::Point'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getCx(self, current=None):
        # def setCx(self, theCx, current=None):
        # def getCy(self, current=None):
        # def setCy(self, theCy, current=None):
        # def getTextValue(self, current=None):
        # def setTextValue(self, theTextValue, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_Point)

        __repr__ = __str__

    _M_omero.model.PointPrx = Ice.createTempClass()
    class PointPrx(_M_omero.model.ShapePrx):

        def getCx(self, _ctx=None):
            return _M_omero.model.Point._op_getCx.invoke(self, ((), _ctx))

        def setCx(self, theCx, _ctx=None):
            return _M_omero.model.Point._op_setCx.invoke(self, ((theCx, ), _ctx))

        def getCy(self, _ctx=None):
            return _M_omero.model.Point._op_getCy.invoke(self, ((), _ctx))

        def setCy(self, theCy, _ctx=None):
            return _M_omero.model.Point._op_setCy.invoke(self, ((theCy, ), _ctx))

        def getTextValue(self, _ctx=None):
            return _M_omero.model.Point._op_getTextValue.invoke(self, ((), _ctx))

        def setTextValue(self, theTextValue, _ctx=None):
            return _M_omero.model.Point._op_setTextValue.invoke(self, ((theTextValue, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.PointPrx.ice_checkedCast(proxy, '::omero::model::Point', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.PointPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_PointPrx = IcePy.defineProxy('::omero::model::Point', PointPrx)

    _M_omero.model._t_Point = IcePy.declareClass('::omero::model::Point')

    _M_omero.model._t_Point = IcePy.defineClass('::omero::model::Point', Point, (), True, _M_omero.model._t_Shape, (), (
        ('_cx', (), _M_omero._t_RDouble),
        ('_cy', (), _M_omero._t_RDouble),
        ('_textValue', (), _M_omero._t_RString)
    ))
    Point.ice_type = _M_omero.model._t_Point

    Point._op_getCx = IcePy.Operation('getCx', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RDouble, ())
    Point._op_setCx = IcePy.Operation('setCx', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RDouble),), (), None, ())
    Point._op_getCy = IcePy.Operation('getCy', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RDouble, ())
    Point._op_setCy = IcePy.Operation('setCy', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RDouble),), (), None, ())
    Point._op_getTextValue = IcePy.Operation('getTextValue', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Point._op_setTextValue = IcePy.Operation('setTextValue', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())

    _M_omero.model.Point = Point
    del Point

    _M_omero.model.PointPrx = PointPrx
    del PointPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
