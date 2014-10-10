"""
   /*
   **   Generated by blitz/templates/resouces/combined.vm
   **
   **   Copyright 2007, 2008 Glencoe Software, Inc. All rights reserved.
   **   Use is subject to license terms supplied in LICENSE.txt
   **
   */
"""
import Ice
import IceImport
import omero
IceImport.load("omero_model_DetailsI")
IceImport.load("omero_model_Line_ice")
from omero.rtypes import rlong
from collections import namedtuple
_omero = Ice.openModule("omero")
_omero_model = Ice.openModule("omero.model")
__name__ = "omero.model"
class LineI(_omero_model.Line):

      # Property Metadata
      _field_info_data = namedtuple("FieldData", ["wrapper", "nullable"])
      _field_info_type = namedtuple("FieldInfo", [
          "x1",
          "y1",
          "x2",
          "y2",
          "textValue",
          "theZ",
          "theT",
          "theC",
          "roi",
          "locked",
          "g",
          "transform",
          "vectorEffect",
          "visibility",
          "fillColor",
          "fillRule",
          "strokeColor",
          "strokeDashArray",
          "strokeDashOffset",
          "strokeLineCap",
          "strokeLineJoin",
          "strokeMiterLimit",
          "strokeWidth",
          "fontFamily",
          "fontSize",
          "fontStretch",
          "fontStyle",
          "fontVariant",
          "fontWeight",
          "details",
      ])
      _field_info = _field_info_type(
          x1=_field_info_data(wrapper=omero.rtypes.rdouble, nullable=True),
          y1=_field_info_data(wrapper=omero.rtypes.rdouble, nullable=True),
          x2=_field_info_data(wrapper=omero.rtypes.rdouble, nullable=True),
          y2=_field_info_data(wrapper=omero.rtypes.rdouble, nullable=True),
          textValue=_field_info_data(wrapper=omero.rtypes.rstring, nullable=True),
          theZ=_field_info_data(wrapper=omero.rtypes.rint, nullable=True),
          theT=_field_info_data(wrapper=omero.rtypes.rint, nullable=True),
          theC=_field_info_data(wrapper=omero.rtypes.rint, nullable=True),
          roi=_field_info_data(wrapper=omero.proxy_to_instance, nullable=False),
          locked=_field_info_data(wrapper=omero.rtypes.rbool, nullable=True),
          g=_field_info_data(wrapper=omero.rtypes.rstring, nullable=True),
          transform=_field_info_data(wrapper=omero.rtypes.rstring, nullable=True),
          vectorEffect=_field_info_data(wrapper=omero.rtypes.rstring, nullable=True),
          visibility=_field_info_data(wrapper=omero.rtypes.rbool, nullable=True),
          fillColor=_field_info_data(wrapper=omero.rtypes.rint, nullable=True),
          fillRule=_field_info_data(wrapper=omero.rtypes.rstring, nullable=True),
          strokeColor=_field_info_data(wrapper=omero.rtypes.rint, nullable=True),
          strokeDashArray=_field_info_data(wrapper=omero.rtypes.rstring, nullable=True),
          strokeDashOffset=_field_info_data(wrapper=omero.rtypes.rint, nullable=True),
          strokeLineCap=_field_info_data(wrapper=omero.rtypes.rstring, nullable=True),
          strokeLineJoin=_field_info_data(wrapper=omero.rtypes.rstring, nullable=True),
          strokeMiterLimit=_field_info_data(wrapper=omero.rtypes.rint, nullable=True),
          strokeWidth=_field_info_data(wrapper=omero.rtypes.rint, nullable=True),
          fontFamily=_field_info_data(wrapper=omero.rtypes.rstring, nullable=True),
          fontSize=_field_info_data(wrapper=omero.rtypes.rint, nullable=True),
          fontStretch=_field_info_data(wrapper=omero.rtypes.rstring, nullable=True),
          fontStyle=_field_info_data(wrapper=omero.rtypes.rstring, nullable=True),
          fontVariant=_field_info_data(wrapper=omero.rtypes.rstring, nullable=True),
          fontWeight=_field_info_data(wrapper=omero.rtypes.rstring, nullable=True),
          details=_field_info_data(wrapper=omero.proxy_to_instance, nullable=True),
      )  # end _field_info
      X1 =  "ome.model.roi.Line_x1"
      Y1 =  "ome.model.roi.Line_y1"
      X2 =  "ome.model.roi.Line_x2"
      Y2 =  "ome.model.roi.Line_y2"
      TEXTVALUE =  "ome.model.roi.Line_textValue"
      THEZ =  "ome.model.roi.Line_theZ"
      THET =  "ome.model.roi.Line_theT"
      THEC =  "ome.model.roi.Line_theC"
      ROI =  "ome.model.roi.Line_roi"
      LOCKED =  "ome.model.roi.Line_locked"
      G =  "ome.model.roi.Line_g"
      TRANSFORM =  "ome.model.roi.Line_transform"
      VECTOREFFECT =  "ome.model.roi.Line_vectorEffect"
      VISIBILITY =  "ome.model.roi.Line_visibility"
      FILLCOLOR =  "ome.model.roi.Line_fillColor"
      FILLRULE =  "ome.model.roi.Line_fillRule"
      STROKECOLOR =  "ome.model.roi.Line_strokeColor"
      STROKEDASHARRAY =  "ome.model.roi.Line_strokeDashArray"
      STROKEDASHOFFSET =  "ome.model.roi.Line_strokeDashOffset"
      STROKELINECAP =  "ome.model.roi.Line_strokeLineCap"
      STROKELINEJOIN =  "ome.model.roi.Line_strokeLineJoin"
      STROKEMITERLIMIT =  "ome.model.roi.Line_strokeMiterLimit"
      STROKEWIDTH =  "ome.model.roi.Line_strokeWidth"
      FONTFAMILY =  "ome.model.roi.Line_fontFamily"
      FONTSIZE =  "ome.model.roi.Line_fontSize"
      FONTSTRETCH =  "ome.model.roi.Line_fontStretch"
      FONTSTYLE =  "ome.model.roi.Line_fontStyle"
      FONTVARIANT =  "ome.model.roi.Line_fontVariant"
      FONTWEIGHT =  "ome.model.roi.Line_fontWeight"
      DETAILS =  "ome.model.roi.Line_details"
      def errorIfUnloaded(self):
          if not self._loaded:
              raise _omero.UnloadedEntityException("Object unloaded:"+str(self))

      def throwNullCollectionException(self,propertyName):
          raise _omero.UnloadedEntityException(""+
          "Error updating collection:" + propertyName +"\n"+
          "Collection is currently null. This can be seen\n" +
          "by testing \""+ propertyName +"Loaded\". This implies\n"+
          "that this collection was unloaded. Please refresh this object\n"+
          "in order to update this collection.\n")

      def _toggleCollectionsLoaded(self,load):
          pass

      def __init__(self, id=None, loaded=None):
          super(LineI, self).__init__()
          if id is not None and isinstance(id, (str, unicode)) and ":" in id:
              parts = id.split(":")
              if len(parts) != 2:
                  raise Exception("Invalid proxy string: %s", id)
              if parts[0] != self.__class__.__name__ and \
                 parts[0]+"I" != self.__class__.__name__:
                  raise Exception("Proxy class mismatch: %s<>%s" %
                  (self.__class__.__name__, parts[0]))
              self._id = rlong(parts[1])
              if loaded is None:
                  # If no loadedness was requested with
                  # a proxy string, then assume False.
                  loaded = False
          else:
              # Relying on omero.rtypes.rlong's error-handling
              self._id = rlong(id)
              if loaded is None:
                  loaded = True  # Assume true as previously
          self._loaded = loaded
          if self._loaded:
             self._details = _omero_model.DetailsI()
             self._toggleCollectionsLoaded(True)

      def unload(self, current = None):
          self._loaded = False
          self.unloadX1( )
          self.unloadY1( )
          self.unloadX2( )
          self.unloadY2( )
          self.unloadTextValue( )
          self.unloadTheZ( )
          self.unloadTheT( )
          self.unloadTheC( )
          self.unloadRoi( )
          self.unloadLocked( )
          self.unloadG( )
          self.unloadTransform( )
          self.unloadVectorEffect( )
          self.unloadVisibility( )
          self.unloadFillColor( )
          self.unloadFillRule( )
          self.unloadStrokeColor( )
          self.unloadStrokeDashArray( )
          self.unloadStrokeDashOffset( )
          self.unloadStrokeLineCap( )
          self.unloadStrokeLineJoin( )
          self.unloadStrokeMiterLimit( )
          self.unloadStrokeWidth( )
          self.unloadFontFamily( )
          self.unloadFontSize( )
          self.unloadFontStretch( )
          self.unloadFontStyle( )
          self.unloadFontVariant( )
          self.unloadFontWeight( )
          self.unloadDetails( )

      def isLoaded(self, current = None):
          return self._loaded
      def unloadCollections(self, current = None):
          self._toggleCollectionsLoaded( False )
      def isGlobal(self, current = None):
          return  False ;
      def isMutable(self, current = None):
          return  True ;
      def isAnnotated(self, current = None):
          return  False ;
      def isLink(self, current = None):
          return  False ;
      def shallowCopy(self, current = None):
            if not self._loaded: return self.proxy()
            copy = LineI()
            copy._id = self._id;
            copy._version = self._version;
            copy._details = None  # Unloading for the moment.
            raise omero.ClientError("NYI")
      def proxy(self, current = None):
          if self._id is None: raise omero.ClientError("Proxies require an id")
          return LineI( self._id.getValue(), False )

      def getDetails(self, current = None):
          self.errorIfUnloaded()
          return self._details

      def unloadDetails(self, current = None):
          self._details = None

      def getId(self, current = None):
          return self._id

      def setId(self, _id, current = None):
          self._id = _id

      def checkUnloadedProperty(self, value, loadedField):
          if value == None:
              self.__dict__[loadedField] = False
          else:
              self.__dict__[loadedField] = True

      def getVersion(self, current = None):
          self.errorIfUnloaded()
          return self._version

      def setVersion(self, version, current = None):
          self.errorIfUnloaded()
          self._version = version

      def unloadX1(self, ):
          self._x1Loaded = False
          self._x1 = None;

      def getX1(self, current = None):
          self.errorIfUnloaded()
          return self._x1

      def setX1(self, _x1, current = None, wrap=False):
          self.errorIfUnloaded()
          if wrap and self._field_info.x1.wrapper is not None:
              if _x1 is not None:
                  _x1 = self._field_info.x1.wrapper(_x1)
          self._x1 = _x1
          pass

      def unloadY1(self, ):
          self._y1Loaded = False
          self._y1 = None;

      def getY1(self, current = None):
          self.errorIfUnloaded()
          return self._y1

      def setY1(self, _y1, current = None, wrap=False):
          self.errorIfUnloaded()
          if wrap and self._field_info.y1.wrapper is not None:
              if _y1 is not None:
                  _y1 = self._field_info.y1.wrapper(_y1)
          self._y1 = _y1
          pass

      def unloadX2(self, ):
          self._x2Loaded = False
          self._x2 = None;

      def getX2(self, current = None):
          self.errorIfUnloaded()
          return self._x2

      def setX2(self, _x2, current = None, wrap=False):
          self.errorIfUnloaded()
          if wrap and self._field_info.x2.wrapper is not None:
              if _x2 is not None:
                  _x2 = self._field_info.x2.wrapper(_x2)
          self._x2 = _x2
          pass

      def unloadY2(self, ):
          self._y2Loaded = False
          self._y2 = None;

      def getY2(self, current = None):
          self.errorIfUnloaded()
          return self._y2

      def setY2(self, _y2, current = None, wrap=False):
          self.errorIfUnloaded()
          if wrap and self._field_info.y2.wrapper is not None:
              if _y2 is not None:
                  _y2 = self._field_info.y2.wrapper(_y2)
          self._y2 = _y2
          pass

      def unloadTextValue(self, ):
          self._textValueLoaded = False
          self._textValue = None;

      def getTextValue(self, current = None):
          self.errorIfUnloaded()
          return self._textValue

      def setTextValue(self, _textValue, current = None, wrap=False):
          self.errorIfUnloaded()
          if wrap and self._field_info.textValue.wrapper is not None:
              if _textValue is not None:
                  _textValue = self._field_info.textValue.wrapper(_textValue)
          self._textValue = _textValue
          pass

      def unloadTheZ(self, ):
          self._theZLoaded = False
          self._theZ = None;

      def getTheZ(self, current = None):
          self.errorIfUnloaded()
          return self._theZ

      def setTheZ(self, _theZ, current = None, wrap=False):
          self.errorIfUnloaded()
          if wrap and self._field_info.theZ.wrapper is not None:
              if _theZ is not None:
                  _theZ = self._field_info.theZ.wrapper(_theZ)
          self._theZ = _theZ
          pass

      def unloadTheT(self, ):
          self._theTLoaded = False
          self._theT = None;

      def getTheT(self, current = None):
          self.errorIfUnloaded()
          return self._theT

      def setTheT(self, _theT, current = None, wrap=False):
          self.errorIfUnloaded()
          if wrap and self._field_info.theT.wrapper is not None:
              if _theT is not None:
                  _theT = self._field_info.theT.wrapper(_theT)
          self._theT = _theT
          pass

      def unloadTheC(self, ):
          self._theCLoaded = False
          self._theC = None;

      def getTheC(self, current = None):
          self.errorIfUnloaded()
          return self._theC

      def setTheC(self, _theC, current = None, wrap=False):
          self.errorIfUnloaded()
          if wrap and self._field_info.theC.wrapper is not None:
              if _theC is not None:
                  _theC = self._field_info.theC.wrapper(_theC)
          self._theC = _theC
          pass

      def unloadRoi(self, ):
          self._roiLoaded = False
          self._roi = None;

      def getRoi(self, current = None):
          self.errorIfUnloaded()
          return self._roi

      def setRoi(self, _roi, current = None, wrap=False):
          self.errorIfUnloaded()
          if wrap and self._field_info.roi.wrapper is not None:
              if _roi is not None:
                  _roi = self._field_info.roi.wrapper(_roi)
          self._roi = _roi
          pass

      def unloadLocked(self, ):
          self._lockedLoaded = False
          self._locked = None;

      def getLocked(self, current = None):
          self.errorIfUnloaded()
          return self._locked

      def setLocked(self, _locked, current = None, wrap=False):
          self.errorIfUnloaded()
          if wrap and self._field_info.locked.wrapper is not None:
              if _locked is not None:
                  _locked = self._field_info.locked.wrapper(_locked)
          self._locked = _locked
          pass

      def unloadG(self, ):
          self._gLoaded = False
          self._g = None;

      def getG(self, current = None):
          self.errorIfUnloaded()
          return self._g

      def setG(self, _g, current = None, wrap=False):
          self.errorIfUnloaded()
          if wrap and self._field_info.g.wrapper is not None:
              if _g is not None:
                  _g = self._field_info.g.wrapper(_g)
          self._g = _g
          pass

      def unloadTransform(self, ):
          self._transformLoaded = False
          self._transform = None;

      def getTransform(self, current = None):
          self.errorIfUnloaded()
          return self._transform

      def setTransform(self, _transform, current = None, wrap=False):
          self.errorIfUnloaded()
          if wrap and self._field_info.transform.wrapper is not None:
              if _transform is not None:
                  _transform = self._field_info.transform.wrapper(_transform)
          self._transform = _transform
          pass

      def unloadVectorEffect(self, ):
          self._vectorEffectLoaded = False
          self._vectorEffect = None;

      def getVectorEffect(self, current = None):
          self.errorIfUnloaded()
          return self._vectorEffect

      def setVectorEffect(self, _vectorEffect, current = None, wrap=False):
          self.errorIfUnloaded()
          if wrap and self._field_info.vectorEffect.wrapper is not None:
              if _vectorEffect is not None:
                  _vectorEffect = self._field_info.vectorEffect.wrapper(_vectorEffect)
          self._vectorEffect = _vectorEffect
          pass

      def unloadVisibility(self, ):
          self._visibilityLoaded = False
          self._visibility = None;

      def getVisibility(self, current = None):
          self.errorIfUnloaded()
          return self._visibility

      def setVisibility(self, _visibility, current = None, wrap=False):
          self.errorIfUnloaded()
          if wrap and self._field_info.visibility.wrapper is not None:
              if _visibility is not None:
                  _visibility = self._field_info.visibility.wrapper(_visibility)
          self._visibility = _visibility
          pass

      def unloadFillColor(self, ):
          self._fillColorLoaded = False
          self._fillColor = None;

      def getFillColor(self, current = None):
          self.errorIfUnloaded()
          return self._fillColor

      def setFillColor(self, _fillColor, current = None, wrap=False):
          self.errorIfUnloaded()
          if wrap and self._field_info.fillColor.wrapper is not None:
              if _fillColor is not None:
                  _fillColor = self._field_info.fillColor.wrapper(_fillColor)
          self._fillColor = _fillColor
          pass

      def unloadFillRule(self, ):
          self._fillRuleLoaded = False
          self._fillRule = None;

      def getFillRule(self, current = None):
          self.errorIfUnloaded()
          return self._fillRule

      def setFillRule(self, _fillRule, current = None, wrap=False):
          self.errorIfUnloaded()
          if wrap and self._field_info.fillRule.wrapper is not None:
              if _fillRule is not None:
                  _fillRule = self._field_info.fillRule.wrapper(_fillRule)
          self._fillRule = _fillRule
          pass

      def unloadStrokeColor(self, ):
          self._strokeColorLoaded = False
          self._strokeColor = None;

      def getStrokeColor(self, current = None):
          self.errorIfUnloaded()
          return self._strokeColor

      def setStrokeColor(self, _strokeColor, current = None, wrap=False):
          self.errorIfUnloaded()
          if wrap and self._field_info.strokeColor.wrapper is not None:
              if _strokeColor is not None:
                  _strokeColor = self._field_info.strokeColor.wrapper(_strokeColor)
          self._strokeColor = _strokeColor
          pass

      def unloadStrokeDashArray(self, ):
          self._strokeDashArrayLoaded = False
          self._strokeDashArray = None;

      def getStrokeDashArray(self, current = None):
          self.errorIfUnloaded()
          return self._strokeDashArray

      def setStrokeDashArray(self, _strokeDashArray, current = None, wrap=False):
          self.errorIfUnloaded()
          if wrap and self._field_info.strokeDashArray.wrapper is not None:
              if _strokeDashArray is not None:
                  _strokeDashArray = self._field_info.strokeDashArray.wrapper(_strokeDashArray)
          self._strokeDashArray = _strokeDashArray
          pass

      def unloadStrokeDashOffset(self, ):
          self._strokeDashOffsetLoaded = False
          self._strokeDashOffset = None;

      def getStrokeDashOffset(self, current = None):
          self.errorIfUnloaded()
          return self._strokeDashOffset

      def setStrokeDashOffset(self, _strokeDashOffset, current = None, wrap=False):
          self.errorIfUnloaded()
          if wrap and self._field_info.strokeDashOffset.wrapper is not None:
              if _strokeDashOffset is not None:
                  _strokeDashOffset = self._field_info.strokeDashOffset.wrapper(_strokeDashOffset)
          self._strokeDashOffset = _strokeDashOffset
          pass

      def unloadStrokeLineCap(self, ):
          self._strokeLineCapLoaded = False
          self._strokeLineCap = None;

      def getStrokeLineCap(self, current = None):
          self.errorIfUnloaded()
          return self._strokeLineCap

      def setStrokeLineCap(self, _strokeLineCap, current = None, wrap=False):
          self.errorIfUnloaded()
          if wrap and self._field_info.strokeLineCap.wrapper is not None:
              if _strokeLineCap is not None:
                  _strokeLineCap = self._field_info.strokeLineCap.wrapper(_strokeLineCap)
          self._strokeLineCap = _strokeLineCap
          pass

      def unloadStrokeLineJoin(self, ):
          self._strokeLineJoinLoaded = False
          self._strokeLineJoin = None;

      def getStrokeLineJoin(self, current = None):
          self.errorIfUnloaded()
          return self._strokeLineJoin

      def setStrokeLineJoin(self, _strokeLineJoin, current = None, wrap=False):
          self.errorIfUnloaded()
          if wrap and self._field_info.strokeLineJoin.wrapper is not None:
              if _strokeLineJoin is not None:
                  _strokeLineJoin = self._field_info.strokeLineJoin.wrapper(_strokeLineJoin)
          self._strokeLineJoin = _strokeLineJoin
          pass

      def unloadStrokeMiterLimit(self, ):
          self._strokeMiterLimitLoaded = False
          self._strokeMiterLimit = None;

      def getStrokeMiterLimit(self, current = None):
          self.errorIfUnloaded()
          return self._strokeMiterLimit

      def setStrokeMiterLimit(self, _strokeMiterLimit, current = None, wrap=False):
          self.errorIfUnloaded()
          if wrap and self._field_info.strokeMiterLimit.wrapper is not None:
              if _strokeMiterLimit is not None:
                  _strokeMiterLimit = self._field_info.strokeMiterLimit.wrapper(_strokeMiterLimit)
          self._strokeMiterLimit = _strokeMiterLimit
          pass

      def unloadStrokeWidth(self, ):
          self._strokeWidthLoaded = False
          self._strokeWidth = None;

      def getStrokeWidth(self, current = None):
          self.errorIfUnloaded()
          return self._strokeWidth

      def setStrokeWidth(self, _strokeWidth, current = None, wrap=False):
          self.errorIfUnloaded()
          if wrap and self._field_info.strokeWidth.wrapper is not None:
              if _strokeWidth is not None:
                  _strokeWidth = self._field_info.strokeWidth.wrapper(_strokeWidth)
          self._strokeWidth = _strokeWidth
          pass

      def unloadFontFamily(self, ):
          self._fontFamilyLoaded = False
          self._fontFamily = None;

      def getFontFamily(self, current = None):
          self.errorIfUnloaded()
          return self._fontFamily

      def setFontFamily(self, _fontFamily, current = None, wrap=False):
          self.errorIfUnloaded()
          if wrap and self._field_info.fontFamily.wrapper is not None:
              if _fontFamily is not None:
                  _fontFamily = self._field_info.fontFamily.wrapper(_fontFamily)
          self._fontFamily = _fontFamily
          pass

      def unloadFontSize(self, ):
          self._fontSizeLoaded = False
          self._fontSize = None;

      def getFontSize(self, current = None):
          self.errorIfUnloaded()
          return self._fontSize

      def setFontSize(self, _fontSize, current = None, wrap=False):
          self.errorIfUnloaded()
          if wrap and self._field_info.fontSize.wrapper is not None:
              if _fontSize is not None:
                  _fontSize = self._field_info.fontSize.wrapper(_fontSize)
          self._fontSize = _fontSize
          pass

      def unloadFontStretch(self, ):
          self._fontStretchLoaded = False
          self._fontStretch = None;

      def getFontStretch(self, current = None):
          self.errorIfUnloaded()
          return self._fontStretch

      def setFontStretch(self, _fontStretch, current = None, wrap=False):
          self.errorIfUnloaded()
          if wrap and self._field_info.fontStretch.wrapper is not None:
              if _fontStretch is not None:
                  _fontStretch = self._field_info.fontStretch.wrapper(_fontStretch)
          self._fontStretch = _fontStretch
          pass

      def unloadFontStyle(self, ):
          self._fontStyleLoaded = False
          self._fontStyle = None;

      def getFontStyle(self, current = None):
          self.errorIfUnloaded()
          return self._fontStyle

      def setFontStyle(self, _fontStyle, current = None, wrap=False):
          self.errorIfUnloaded()
          if wrap and self._field_info.fontStyle.wrapper is not None:
              if _fontStyle is not None:
                  _fontStyle = self._field_info.fontStyle.wrapper(_fontStyle)
          self._fontStyle = _fontStyle
          pass

      def unloadFontVariant(self, ):
          self._fontVariantLoaded = False
          self._fontVariant = None;

      def getFontVariant(self, current = None):
          self.errorIfUnloaded()
          return self._fontVariant

      def setFontVariant(self, _fontVariant, current = None, wrap=False):
          self.errorIfUnloaded()
          if wrap and self._field_info.fontVariant.wrapper is not None:
              if _fontVariant is not None:
                  _fontVariant = self._field_info.fontVariant.wrapper(_fontVariant)
          self._fontVariant = _fontVariant
          pass

      def unloadFontWeight(self, ):
          self._fontWeightLoaded = False
          self._fontWeight = None;

      def getFontWeight(self, current = None):
          self.errorIfUnloaded()
          return self._fontWeight

      def setFontWeight(self, _fontWeight, current = None, wrap=False):
          self.errorIfUnloaded()
          if wrap and self._field_info.fontWeight.wrapper is not None:
              if _fontWeight is not None:
                  _fontWeight = self._field_info.fontWeight.wrapper(_fontWeight)
          self._fontWeight = _fontWeight
          pass


      def ice_postUnmarshal(self):
          """
          Provides additional initialization once all data loaded
          """
          pass # Currently unused


      def ice_preMarshal(self):
          """
          Provides additional validation before data is sent
          """
          pass # Currently unused

      def __getattr__(self, name):
          import __builtin__
          """
          Reroutes all access to object.field through object.getField() or object.isField()
          """
          if "_" in name:  # Ice disallows underscores, so these should be treated normally.
              return object.__getattribute__(self, name)
          field  = "_" + name
          capitalized = name[0].capitalize() + name[1:]
          getter = "get" + capitalized
          questn = "is" + capitalized
          try:
              self.__dict__[field]
              if hasattr(self, getter):
                  method = getattr(self, getter)
                  return method()
              elif hasattr(self, questn):
                  method = getattr(self, questn)
                  return method()
          except:
              pass
          raise AttributeError("'%s' object has no attribute '%s' or '%s'" % (self.__class__.__name__, getter, questn))

      def __setattr__(self, name, value):
          """
          Reroutes all access to object.field through object.getField(), with the caveat
          that all sets on variables starting with "_" are permitted directly.
          """
          if name.startswith("_"):
              self.__dict__[name] = value
              return
          else:
              field  = "_" + name
              setter = "set" + name[0].capitalize() + name[1:]
              if hasattr(self, field) and hasattr(self, setter):
                  method = getattr(self, setter)
                  return method(value)
          raise AttributeError("'%s' object has no attribute '%s'" % (self.__class__.__name__, setter))

_omero_model.LineI = LineI
