// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `Shape.ice'

#ifndef __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_Shape_h__
#define __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_Shape_h__

#include <Ice/LocalObjectF.h>
#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
#include <Ice/Proxy.h>
#include <Ice/Object.h>
#include <Ice/Outgoing.h>
#include <Ice/Incoming.h>
#include <Ice/Direct.h>
#include <Ice/FactoryTable.h>
#include <Ice/StreamF.h>
#include <omero/model/IObject.h>
#include <omero/RTypes.h>
#include <omero/System.h>
#include <omero/Collections.h>
#include <Ice/UndefSysMacros.h>

#ifndef ICE_IGNORE_VERSION
#   if ICE_INT_VERSION / 100 != 303
#       error Ice version mismatch!
#   endif
#   if ICE_INT_VERSION % 100 > 50
#       error Beta header file detected
#   endif
#   if ICE_INT_VERSION % 100 < 1
#       error Ice patch level mismatch!
#   endif
#endif

namespace IceProxy
{

namespace omero
{

namespace model
{

class Roi;

class Details;

class Shape;

}

}

}

namespace omero
{

namespace model
{

class Roi;
bool operator==(const Roi&, const Roi&);
bool operator<(const Roi&, const Roi&);

class Details;
bool operator==(const Details&, const Details&);
bool operator<(const Details&, const Details&);

class Shape;
bool operator==(const Shape&, const Shape&);
bool operator<(const Shape&, const Shape&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::model::Roi*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Roi*);

::Ice::Object* upCast(::omero::model::Details*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Details*);

::Ice::Object* upCast(::omero::model::Shape*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Shape*);

}

namespace omero
{

namespace model
{

typedef ::IceInternal::Handle< ::omero::model::Roi> RoiPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Roi> RoiPrx;

void __read(::IceInternal::BasicStream*, RoiPrx&);
void __patch__RoiPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Details> DetailsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Details> DetailsPrx;

void __read(::IceInternal::BasicStream*, DetailsPrx&);
void __patch__DetailsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Shape> ShapePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Shape> ShapePrx;

void __read(::IceInternal::BasicStream*, ShapePrx&);
void __patch__ShapePtr(void*, ::Ice::ObjectPtr&);

}

}

namespace IceProxy
{

namespace omero
{

namespace model
{

class Shape : virtual public ::IceProxy::omero::model::IObject
{
public:

    ::omero::RIntPtr getVersion()
    {
        return getVersion(0);
    }
    ::omero::RIntPtr getVersion(const ::Ice::Context& __ctx)
    {
        return getVersion(&__ctx);
    }
    
private:

    ::omero::RIntPtr getVersion(const ::Ice::Context*);
    
public:

    void setVersion(const ::omero::RIntPtr& theVersion)
    {
        setVersion(theVersion, 0);
    }
    void setVersion(const ::omero::RIntPtr& theVersion, const ::Ice::Context& __ctx)
    {
        setVersion(theVersion, &__ctx);
    }
    
private:

    void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:

    ::omero::RIntPtr getTheZ()
    {
        return getTheZ(0);
    }
    ::omero::RIntPtr getTheZ(const ::Ice::Context& __ctx)
    {
        return getTheZ(&__ctx);
    }
    
private:

    ::omero::RIntPtr getTheZ(const ::Ice::Context*);
    
public:

    void setTheZ(const ::omero::RIntPtr& theTheZ)
    {
        setTheZ(theTheZ, 0);
    }
    void setTheZ(const ::omero::RIntPtr& theTheZ, const ::Ice::Context& __ctx)
    {
        setTheZ(theTheZ, &__ctx);
    }
    
private:

    void setTheZ(const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:

    ::omero::RIntPtr getTheT()
    {
        return getTheT(0);
    }
    ::omero::RIntPtr getTheT(const ::Ice::Context& __ctx)
    {
        return getTheT(&__ctx);
    }
    
private:

    ::omero::RIntPtr getTheT(const ::Ice::Context*);
    
public:

    void setTheT(const ::omero::RIntPtr& theTheT)
    {
        setTheT(theTheT, 0);
    }
    void setTheT(const ::omero::RIntPtr& theTheT, const ::Ice::Context& __ctx)
    {
        setTheT(theTheT, &__ctx);
    }
    
private:

    void setTheT(const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:

    ::omero::RIntPtr getTheC()
    {
        return getTheC(0);
    }
    ::omero::RIntPtr getTheC(const ::Ice::Context& __ctx)
    {
        return getTheC(&__ctx);
    }
    
private:

    ::omero::RIntPtr getTheC(const ::Ice::Context*);
    
public:

    void setTheC(const ::omero::RIntPtr& theTheC)
    {
        setTheC(theTheC, 0);
    }
    void setTheC(const ::omero::RIntPtr& theTheC, const ::Ice::Context& __ctx)
    {
        setTheC(theTheC, &__ctx);
    }
    
private:

    void setTheC(const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:

    ::omero::model::RoiPtr getRoi()
    {
        return getRoi(0);
    }
    ::omero::model::RoiPtr getRoi(const ::Ice::Context& __ctx)
    {
        return getRoi(&__ctx);
    }
    
private:

    ::omero::model::RoiPtr getRoi(const ::Ice::Context*);
    
public:

    void setRoi(const ::omero::model::RoiPtr& theRoi)
    {
        setRoi(theRoi, 0);
    }
    void setRoi(const ::omero::model::RoiPtr& theRoi, const ::Ice::Context& __ctx)
    {
        setRoi(theRoi, &__ctx);
    }
    
private:

    void setRoi(const ::omero::model::RoiPtr&, const ::Ice::Context*);
    
public:

    ::omero::RBoolPtr getLocked()
    {
        return getLocked(0);
    }
    ::omero::RBoolPtr getLocked(const ::Ice::Context& __ctx)
    {
        return getLocked(&__ctx);
    }
    
private:

    ::omero::RBoolPtr getLocked(const ::Ice::Context*);
    
public:

    void setLocked(const ::omero::RBoolPtr& theLocked)
    {
        setLocked(theLocked, 0);
    }
    void setLocked(const ::omero::RBoolPtr& theLocked, const ::Ice::Context& __ctx)
    {
        setLocked(theLocked, &__ctx);
    }
    
private:

    void setLocked(const ::omero::RBoolPtr&, const ::Ice::Context*);
    
public:

    ::omero::RStringPtr getG()
    {
        return getG(0);
    }
    ::omero::RStringPtr getG(const ::Ice::Context& __ctx)
    {
        return getG(&__ctx);
    }
    
private:

    ::omero::RStringPtr getG(const ::Ice::Context*);
    
public:

    void setG(const ::omero::RStringPtr& theG)
    {
        setG(theG, 0);
    }
    void setG(const ::omero::RStringPtr& theG, const ::Ice::Context& __ctx)
    {
        setG(theG, &__ctx);
    }
    
private:

    void setG(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:

    ::omero::RStringPtr getTransform()
    {
        return getTransform(0);
    }
    ::omero::RStringPtr getTransform(const ::Ice::Context& __ctx)
    {
        return getTransform(&__ctx);
    }
    
private:

    ::omero::RStringPtr getTransform(const ::Ice::Context*);
    
public:

    void setTransform(const ::omero::RStringPtr& theTransform)
    {
        setTransform(theTransform, 0);
    }
    void setTransform(const ::omero::RStringPtr& theTransform, const ::Ice::Context& __ctx)
    {
        setTransform(theTransform, &__ctx);
    }
    
private:

    void setTransform(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:

    ::omero::RStringPtr getVectorEffect()
    {
        return getVectorEffect(0);
    }
    ::omero::RStringPtr getVectorEffect(const ::Ice::Context& __ctx)
    {
        return getVectorEffect(&__ctx);
    }
    
private:

    ::omero::RStringPtr getVectorEffect(const ::Ice::Context*);
    
public:

    void setVectorEffect(const ::omero::RStringPtr& theVectorEffect)
    {
        setVectorEffect(theVectorEffect, 0);
    }
    void setVectorEffect(const ::omero::RStringPtr& theVectorEffect, const ::Ice::Context& __ctx)
    {
        setVectorEffect(theVectorEffect, &__ctx);
    }
    
private:

    void setVectorEffect(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:

    ::omero::RBoolPtr getVisibility()
    {
        return getVisibility(0);
    }
    ::omero::RBoolPtr getVisibility(const ::Ice::Context& __ctx)
    {
        return getVisibility(&__ctx);
    }
    
private:

    ::omero::RBoolPtr getVisibility(const ::Ice::Context*);
    
public:

    void setVisibility(const ::omero::RBoolPtr& theVisibility)
    {
        setVisibility(theVisibility, 0);
    }
    void setVisibility(const ::omero::RBoolPtr& theVisibility, const ::Ice::Context& __ctx)
    {
        setVisibility(theVisibility, &__ctx);
    }
    
private:

    void setVisibility(const ::omero::RBoolPtr&, const ::Ice::Context*);
    
public:

    ::omero::RIntPtr getFillColor()
    {
        return getFillColor(0);
    }
    ::omero::RIntPtr getFillColor(const ::Ice::Context& __ctx)
    {
        return getFillColor(&__ctx);
    }
    
private:

    ::omero::RIntPtr getFillColor(const ::Ice::Context*);
    
public:

    void setFillColor(const ::omero::RIntPtr& theFillColor)
    {
        setFillColor(theFillColor, 0);
    }
    void setFillColor(const ::omero::RIntPtr& theFillColor, const ::Ice::Context& __ctx)
    {
        setFillColor(theFillColor, &__ctx);
    }
    
private:

    void setFillColor(const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:

    ::omero::RStringPtr getFillRule()
    {
        return getFillRule(0);
    }
    ::omero::RStringPtr getFillRule(const ::Ice::Context& __ctx)
    {
        return getFillRule(&__ctx);
    }
    
private:

    ::omero::RStringPtr getFillRule(const ::Ice::Context*);
    
public:

    void setFillRule(const ::omero::RStringPtr& theFillRule)
    {
        setFillRule(theFillRule, 0);
    }
    void setFillRule(const ::omero::RStringPtr& theFillRule, const ::Ice::Context& __ctx)
    {
        setFillRule(theFillRule, &__ctx);
    }
    
private:

    void setFillRule(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:

    ::omero::RIntPtr getStrokeColor()
    {
        return getStrokeColor(0);
    }
    ::omero::RIntPtr getStrokeColor(const ::Ice::Context& __ctx)
    {
        return getStrokeColor(&__ctx);
    }
    
private:

    ::omero::RIntPtr getStrokeColor(const ::Ice::Context*);
    
public:

    void setStrokeColor(const ::omero::RIntPtr& theStrokeColor)
    {
        setStrokeColor(theStrokeColor, 0);
    }
    void setStrokeColor(const ::omero::RIntPtr& theStrokeColor, const ::Ice::Context& __ctx)
    {
        setStrokeColor(theStrokeColor, &__ctx);
    }
    
private:

    void setStrokeColor(const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:

    ::omero::RStringPtr getStrokeDashArray()
    {
        return getStrokeDashArray(0);
    }
    ::omero::RStringPtr getStrokeDashArray(const ::Ice::Context& __ctx)
    {
        return getStrokeDashArray(&__ctx);
    }
    
private:

    ::omero::RStringPtr getStrokeDashArray(const ::Ice::Context*);
    
public:

    void setStrokeDashArray(const ::omero::RStringPtr& theStrokeDashArray)
    {
        setStrokeDashArray(theStrokeDashArray, 0);
    }
    void setStrokeDashArray(const ::omero::RStringPtr& theStrokeDashArray, const ::Ice::Context& __ctx)
    {
        setStrokeDashArray(theStrokeDashArray, &__ctx);
    }
    
private:

    void setStrokeDashArray(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:

    ::omero::RIntPtr getStrokeDashOffset()
    {
        return getStrokeDashOffset(0);
    }
    ::omero::RIntPtr getStrokeDashOffset(const ::Ice::Context& __ctx)
    {
        return getStrokeDashOffset(&__ctx);
    }
    
private:

    ::omero::RIntPtr getStrokeDashOffset(const ::Ice::Context*);
    
public:

    void setStrokeDashOffset(const ::omero::RIntPtr& theStrokeDashOffset)
    {
        setStrokeDashOffset(theStrokeDashOffset, 0);
    }
    void setStrokeDashOffset(const ::omero::RIntPtr& theStrokeDashOffset, const ::Ice::Context& __ctx)
    {
        setStrokeDashOffset(theStrokeDashOffset, &__ctx);
    }
    
private:

    void setStrokeDashOffset(const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:

    ::omero::RStringPtr getStrokeLineCap()
    {
        return getStrokeLineCap(0);
    }
    ::omero::RStringPtr getStrokeLineCap(const ::Ice::Context& __ctx)
    {
        return getStrokeLineCap(&__ctx);
    }
    
private:

    ::omero::RStringPtr getStrokeLineCap(const ::Ice::Context*);
    
public:

    void setStrokeLineCap(const ::omero::RStringPtr& theStrokeLineCap)
    {
        setStrokeLineCap(theStrokeLineCap, 0);
    }
    void setStrokeLineCap(const ::omero::RStringPtr& theStrokeLineCap, const ::Ice::Context& __ctx)
    {
        setStrokeLineCap(theStrokeLineCap, &__ctx);
    }
    
private:

    void setStrokeLineCap(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:

    ::omero::RStringPtr getStrokeLineJoin()
    {
        return getStrokeLineJoin(0);
    }
    ::omero::RStringPtr getStrokeLineJoin(const ::Ice::Context& __ctx)
    {
        return getStrokeLineJoin(&__ctx);
    }
    
private:

    ::omero::RStringPtr getStrokeLineJoin(const ::Ice::Context*);
    
public:

    void setStrokeLineJoin(const ::omero::RStringPtr& theStrokeLineJoin)
    {
        setStrokeLineJoin(theStrokeLineJoin, 0);
    }
    void setStrokeLineJoin(const ::omero::RStringPtr& theStrokeLineJoin, const ::Ice::Context& __ctx)
    {
        setStrokeLineJoin(theStrokeLineJoin, &__ctx);
    }
    
private:

    void setStrokeLineJoin(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:

    ::omero::RIntPtr getStrokeMiterLimit()
    {
        return getStrokeMiterLimit(0);
    }
    ::omero::RIntPtr getStrokeMiterLimit(const ::Ice::Context& __ctx)
    {
        return getStrokeMiterLimit(&__ctx);
    }
    
private:

    ::omero::RIntPtr getStrokeMiterLimit(const ::Ice::Context*);
    
public:

    void setStrokeMiterLimit(const ::omero::RIntPtr& theStrokeMiterLimit)
    {
        setStrokeMiterLimit(theStrokeMiterLimit, 0);
    }
    void setStrokeMiterLimit(const ::omero::RIntPtr& theStrokeMiterLimit, const ::Ice::Context& __ctx)
    {
        setStrokeMiterLimit(theStrokeMiterLimit, &__ctx);
    }
    
private:

    void setStrokeMiterLimit(const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:

    ::omero::RIntPtr getStrokeWidth()
    {
        return getStrokeWidth(0);
    }
    ::omero::RIntPtr getStrokeWidth(const ::Ice::Context& __ctx)
    {
        return getStrokeWidth(&__ctx);
    }
    
private:

    ::omero::RIntPtr getStrokeWidth(const ::Ice::Context*);
    
public:

    void setStrokeWidth(const ::omero::RIntPtr& theStrokeWidth)
    {
        setStrokeWidth(theStrokeWidth, 0);
    }
    void setStrokeWidth(const ::omero::RIntPtr& theStrokeWidth, const ::Ice::Context& __ctx)
    {
        setStrokeWidth(theStrokeWidth, &__ctx);
    }
    
private:

    void setStrokeWidth(const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:

    ::omero::RStringPtr getFontFamily()
    {
        return getFontFamily(0);
    }
    ::omero::RStringPtr getFontFamily(const ::Ice::Context& __ctx)
    {
        return getFontFamily(&__ctx);
    }
    
private:

    ::omero::RStringPtr getFontFamily(const ::Ice::Context*);
    
public:

    void setFontFamily(const ::omero::RStringPtr& theFontFamily)
    {
        setFontFamily(theFontFamily, 0);
    }
    void setFontFamily(const ::omero::RStringPtr& theFontFamily, const ::Ice::Context& __ctx)
    {
        setFontFamily(theFontFamily, &__ctx);
    }
    
private:

    void setFontFamily(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:

    ::omero::RIntPtr getFontSize()
    {
        return getFontSize(0);
    }
    ::omero::RIntPtr getFontSize(const ::Ice::Context& __ctx)
    {
        return getFontSize(&__ctx);
    }
    
private:

    ::omero::RIntPtr getFontSize(const ::Ice::Context*);
    
public:

    void setFontSize(const ::omero::RIntPtr& theFontSize)
    {
        setFontSize(theFontSize, 0);
    }
    void setFontSize(const ::omero::RIntPtr& theFontSize, const ::Ice::Context& __ctx)
    {
        setFontSize(theFontSize, &__ctx);
    }
    
private:

    void setFontSize(const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:

    ::omero::RStringPtr getFontStretch()
    {
        return getFontStretch(0);
    }
    ::omero::RStringPtr getFontStretch(const ::Ice::Context& __ctx)
    {
        return getFontStretch(&__ctx);
    }
    
private:

    ::omero::RStringPtr getFontStretch(const ::Ice::Context*);
    
public:

    void setFontStretch(const ::omero::RStringPtr& theFontStretch)
    {
        setFontStretch(theFontStretch, 0);
    }
    void setFontStretch(const ::omero::RStringPtr& theFontStretch, const ::Ice::Context& __ctx)
    {
        setFontStretch(theFontStretch, &__ctx);
    }
    
private:

    void setFontStretch(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:

    ::omero::RStringPtr getFontStyle()
    {
        return getFontStyle(0);
    }
    ::omero::RStringPtr getFontStyle(const ::Ice::Context& __ctx)
    {
        return getFontStyle(&__ctx);
    }
    
private:

    ::omero::RStringPtr getFontStyle(const ::Ice::Context*);
    
public:

    void setFontStyle(const ::omero::RStringPtr& theFontStyle)
    {
        setFontStyle(theFontStyle, 0);
    }
    void setFontStyle(const ::omero::RStringPtr& theFontStyle, const ::Ice::Context& __ctx)
    {
        setFontStyle(theFontStyle, &__ctx);
    }
    
private:

    void setFontStyle(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:

    ::omero::RStringPtr getFontVariant()
    {
        return getFontVariant(0);
    }
    ::omero::RStringPtr getFontVariant(const ::Ice::Context& __ctx)
    {
        return getFontVariant(&__ctx);
    }
    
private:

    ::omero::RStringPtr getFontVariant(const ::Ice::Context*);
    
public:

    void setFontVariant(const ::omero::RStringPtr& theFontVariant)
    {
        setFontVariant(theFontVariant, 0);
    }
    void setFontVariant(const ::omero::RStringPtr& theFontVariant, const ::Ice::Context& __ctx)
    {
        setFontVariant(theFontVariant, &__ctx);
    }
    
private:

    void setFontVariant(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:

    ::omero::RStringPtr getFontWeight()
    {
        return getFontWeight(0);
    }
    ::omero::RStringPtr getFontWeight(const ::Ice::Context& __ctx)
    {
        return getFontWeight(&__ctx);
    }
    
private:

    ::omero::RStringPtr getFontWeight(const ::Ice::Context*);
    
public:

    void setFontWeight(const ::omero::RStringPtr& theFontWeight)
    {
        setFontWeight(theFontWeight, 0);
    }
    void setFontWeight(const ::omero::RStringPtr& theFontWeight, const ::Ice::Context& __ctx)
    {
        setFontWeight(theFontWeight, &__ctx);
    }
    
private:

    void setFontWeight(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<Shape> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Shape*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Shape*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Shape> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Shape*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Shape*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Shape> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Shape*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Shape*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Shape> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Shape*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Shape*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Shape> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Shape*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Shape*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Shape> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Shape*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Shape*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Shape> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Shape*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Shape*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Shape> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Shape*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Shape*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Shape> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Shape*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Shape*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Shape> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Shape*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Shape*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Shape> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Shape*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Shape*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Shape> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Shape*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Shape*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Shape> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Shape*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Shape*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Shape> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Shape*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Shape*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Shape> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Shape*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Shape*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Shape> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Shape*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Shape*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Shape> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Shape*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Shape*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Shape> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Shape*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Shape*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Shape> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Shape*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Shape*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

}

}

}

namespace IceDelegate
{

namespace omero
{

namespace model
{

class Shape : virtual public ::IceDelegate::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*) = 0;

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RIntPtr getTheZ(const ::Ice::Context*) = 0;

    virtual void setTheZ(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RIntPtr getTheT(const ::Ice::Context*) = 0;

    virtual void setTheT(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RIntPtr getTheC(const ::Ice::Context*) = 0;

    virtual void setTheC(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::RoiPtr getRoi(const ::Ice::Context*) = 0;

    virtual void setRoi(const ::omero::model::RoiPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RBoolPtr getLocked(const ::Ice::Context*) = 0;

    virtual void setLocked(const ::omero::RBoolPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getG(const ::Ice::Context*) = 0;

    virtual void setG(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getTransform(const ::Ice::Context*) = 0;

    virtual void setTransform(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getVectorEffect(const ::Ice::Context*) = 0;

    virtual void setVectorEffect(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RBoolPtr getVisibility(const ::Ice::Context*) = 0;

    virtual void setVisibility(const ::omero::RBoolPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RIntPtr getFillColor(const ::Ice::Context*) = 0;

    virtual void setFillColor(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getFillRule(const ::Ice::Context*) = 0;

    virtual void setFillRule(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RIntPtr getStrokeColor(const ::Ice::Context*) = 0;

    virtual void setStrokeColor(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getStrokeDashArray(const ::Ice::Context*) = 0;

    virtual void setStrokeDashArray(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RIntPtr getStrokeDashOffset(const ::Ice::Context*) = 0;

    virtual void setStrokeDashOffset(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getStrokeLineCap(const ::Ice::Context*) = 0;

    virtual void setStrokeLineCap(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getStrokeLineJoin(const ::Ice::Context*) = 0;

    virtual void setStrokeLineJoin(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RIntPtr getStrokeMiterLimit(const ::Ice::Context*) = 0;

    virtual void setStrokeMiterLimit(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RIntPtr getStrokeWidth(const ::Ice::Context*) = 0;

    virtual void setStrokeWidth(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getFontFamily(const ::Ice::Context*) = 0;

    virtual void setFontFamily(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RIntPtr getFontSize(const ::Ice::Context*) = 0;

    virtual void setFontSize(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getFontStretch(const ::Ice::Context*) = 0;

    virtual void setFontStretch(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getFontStyle(const ::Ice::Context*) = 0;

    virtual void setFontStyle(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getFontVariant(const ::Ice::Context*) = 0;

    virtual void setFontVariant(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getFontWeight(const ::Ice::Context*) = 0;

    virtual void setFontWeight(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;
};

}

}

}

namespace IceDelegateM
{

namespace omero
{

namespace model
{

class Shape : virtual public ::IceDelegate::omero::model::Shape,
              virtual public ::IceDelegateM::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getTheZ(const ::Ice::Context*);

    virtual void setTheZ(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getTheT(const ::Ice::Context*);

    virtual void setTheT(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getTheC(const ::Ice::Context*);

    virtual void setTheC(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::model::RoiPtr getRoi(const ::Ice::Context*);

    virtual void setRoi(const ::omero::model::RoiPtr&, const ::Ice::Context*);

    virtual ::omero::RBoolPtr getLocked(const ::Ice::Context*);

    virtual void setLocked(const ::omero::RBoolPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getG(const ::Ice::Context*);

    virtual void setG(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getTransform(const ::Ice::Context*);

    virtual void setTransform(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getVectorEffect(const ::Ice::Context*);

    virtual void setVectorEffect(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RBoolPtr getVisibility(const ::Ice::Context*);

    virtual void setVisibility(const ::omero::RBoolPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getFillColor(const ::Ice::Context*);

    virtual void setFillColor(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getFillRule(const ::Ice::Context*);

    virtual void setFillRule(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getStrokeColor(const ::Ice::Context*);

    virtual void setStrokeColor(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getStrokeDashArray(const ::Ice::Context*);

    virtual void setStrokeDashArray(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getStrokeDashOffset(const ::Ice::Context*);

    virtual void setStrokeDashOffset(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getStrokeLineCap(const ::Ice::Context*);

    virtual void setStrokeLineCap(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getStrokeLineJoin(const ::Ice::Context*);

    virtual void setStrokeLineJoin(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getStrokeMiterLimit(const ::Ice::Context*);

    virtual void setStrokeMiterLimit(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getStrokeWidth(const ::Ice::Context*);

    virtual void setStrokeWidth(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getFontFamily(const ::Ice::Context*);

    virtual void setFontFamily(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getFontSize(const ::Ice::Context*);

    virtual void setFontSize(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getFontStretch(const ::Ice::Context*);

    virtual void setFontStretch(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getFontStyle(const ::Ice::Context*);

    virtual void setFontStyle(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getFontVariant(const ::Ice::Context*);

    virtual void setFontVariant(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getFontWeight(const ::Ice::Context*);

    virtual void setFontWeight(const ::omero::RStringPtr&, const ::Ice::Context*);
};

}

}

}

namespace IceDelegateD
{

namespace omero
{

namespace model
{

class Shape : virtual public ::IceDelegate::omero::model::Shape,
              virtual public ::IceDelegateD::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getTheZ(const ::Ice::Context*);

    virtual void setTheZ(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getTheT(const ::Ice::Context*);

    virtual void setTheT(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getTheC(const ::Ice::Context*);

    virtual void setTheC(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::model::RoiPtr getRoi(const ::Ice::Context*);

    virtual void setRoi(const ::omero::model::RoiPtr&, const ::Ice::Context*);

    virtual ::omero::RBoolPtr getLocked(const ::Ice::Context*);

    virtual void setLocked(const ::omero::RBoolPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getG(const ::Ice::Context*);

    virtual void setG(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getTransform(const ::Ice::Context*);

    virtual void setTransform(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getVectorEffect(const ::Ice::Context*);

    virtual void setVectorEffect(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RBoolPtr getVisibility(const ::Ice::Context*);

    virtual void setVisibility(const ::omero::RBoolPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getFillColor(const ::Ice::Context*);

    virtual void setFillColor(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getFillRule(const ::Ice::Context*);

    virtual void setFillRule(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getStrokeColor(const ::Ice::Context*);

    virtual void setStrokeColor(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getStrokeDashArray(const ::Ice::Context*);

    virtual void setStrokeDashArray(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getStrokeDashOffset(const ::Ice::Context*);

    virtual void setStrokeDashOffset(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getStrokeLineCap(const ::Ice::Context*);

    virtual void setStrokeLineCap(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getStrokeLineJoin(const ::Ice::Context*);

    virtual void setStrokeLineJoin(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getStrokeMiterLimit(const ::Ice::Context*);

    virtual void setStrokeMiterLimit(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getStrokeWidth(const ::Ice::Context*);

    virtual void setStrokeWidth(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getFontFamily(const ::Ice::Context*);

    virtual void setFontFamily(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getFontSize(const ::Ice::Context*);

    virtual void setFontSize(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getFontStretch(const ::Ice::Context*);

    virtual void setFontStretch(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getFontStyle(const ::Ice::Context*);

    virtual void setFontStyle(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getFontVariant(const ::Ice::Context*);

    virtual void setFontVariant(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getFontWeight(const ::Ice::Context*);

    virtual void setFontWeight(const ::omero::RStringPtr&, const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace model
{

class Shape : virtual public ::omero::model::IObject
{
public:

    typedef ShapePrx ProxyType;
    typedef ShapePtr PointerType;
    
    Shape() {}
    Shape(const ::omero::RLongPtr&, const ::omero::model::DetailsPtr&, bool, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::model::RoiPtr&, const ::omero::RBoolPtr&, const ::omero::RStringPtr&, const ::omero::RStringPtr&, const ::omero::RStringPtr&, const ::omero::RBoolPtr&, const ::omero::RIntPtr&, const ::omero::RStringPtr&, const ::omero::RIntPtr&, const ::omero::RStringPtr&, const ::omero::RIntPtr&, const ::omero::RStringPtr&, const ::omero::RStringPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RStringPtr&, const ::omero::RIntPtr&, const ::omero::RStringPtr&, const ::omero::RStringPtr&, const ::omero::RStringPtr&, const ::omero::RStringPtr&);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void __gcReachable(::IceInternal::GCCountMap&) const;
    virtual void __gcClear();

    virtual ::omero::RIntPtr getVersion(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getVersion(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setVersion(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RIntPtr getTheZ(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getTheZ(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setTheZ(const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setTheZ(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RIntPtr getTheT(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getTheT(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setTheT(const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setTheT(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RIntPtr getTheC(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getTheC(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setTheC(const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setTheC(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::RoiPtr getRoi(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getRoi(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setRoi(const ::omero::model::RoiPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setRoi(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RBoolPtr getLocked(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getLocked(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setLocked(const ::omero::RBoolPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setLocked(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getG(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getG(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setG(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setG(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getTransform(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getTransform(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setTransform(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setTransform(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getVectorEffect(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getVectorEffect(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setVectorEffect(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setVectorEffect(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RBoolPtr getVisibility(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getVisibility(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setVisibility(const ::omero::RBoolPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setVisibility(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RIntPtr getFillColor(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getFillColor(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setFillColor(const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setFillColor(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getFillRule(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getFillRule(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setFillRule(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setFillRule(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RIntPtr getStrokeColor(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getStrokeColor(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setStrokeColor(const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setStrokeColor(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getStrokeDashArray(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getStrokeDashArray(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setStrokeDashArray(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setStrokeDashArray(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RIntPtr getStrokeDashOffset(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getStrokeDashOffset(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setStrokeDashOffset(const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setStrokeDashOffset(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getStrokeLineCap(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getStrokeLineCap(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setStrokeLineCap(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setStrokeLineCap(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getStrokeLineJoin(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getStrokeLineJoin(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setStrokeLineJoin(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setStrokeLineJoin(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RIntPtr getStrokeMiterLimit(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getStrokeMiterLimit(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setStrokeMiterLimit(const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setStrokeMiterLimit(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RIntPtr getStrokeWidth(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getStrokeWidth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setStrokeWidth(const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setStrokeWidth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getFontFamily(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getFontFamily(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setFontFamily(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setFontFamily(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RIntPtr getFontSize(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getFontSize(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setFontSize(const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setFontSize(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getFontStretch(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getFontStretch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setFontStretch(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setFontStretch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getFontStyle(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getFontStyle(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setFontStyle(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setFontStyle(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getFontVariant(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getFontVariant(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setFontVariant(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setFontVariant(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getFontWeight(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getFontWeight(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setFontWeight(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setFontWeight(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

protected:

    ::omero::RIntPtr version;

    ::omero::RIntPtr theZ;

    ::omero::RIntPtr theT;

    ::omero::RIntPtr theC;

    ::omero::model::RoiPtr roi;

    ::omero::RBoolPtr locked;

    ::omero::RStringPtr g;

    ::omero::RStringPtr transform;

    ::omero::RStringPtr vectorEffect;

    ::omero::RBoolPtr visibility;

    ::omero::RIntPtr fillColor;

    ::omero::RStringPtr fillRule;

    ::omero::RIntPtr strokeColor;

    ::omero::RStringPtr strokeDashArray;

    ::omero::RIntPtr strokeDashOffset;

    ::omero::RStringPtr strokeLineCap;

    ::omero::RStringPtr strokeLineJoin;

    ::omero::RIntPtr strokeMiterLimit;

    ::omero::RIntPtr strokeWidth;

    ::omero::RStringPtr fontFamily;

    ::omero::RIntPtr fontSize;

    ::omero::RStringPtr fontStretch;

    ::omero::RStringPtr fontStyle;

    ::omero::RStringPtr fontVariant;

    ::omero::RStringPtr fontWeight;
};

}

}

#endif
