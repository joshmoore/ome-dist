// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `RenderingDef.ice'

#ifndef __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_RenderingDef_h__
#define __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_RenderingDef_h__

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

class Pixels;

class RenderingModel;

class ChannelBinding;

class QuantumDef;

class CodomainMapContext;

class Details;

class RenderingDef;

}

}

}

namespace omero
{

namespace model
{

class Pixels;
bool operator==(const Pixels&, const Pixels&);
bool operator<(const Pixels&, const Pixels&);

class RenderingModel;
bool operator==(const RenderingModel&, const RenderingModel&);
bool operator<(const RenderingModel&, const RenderingModel&);

class ChannelBinding;
bool operator==(const ChannelBinding&, const ChannelBinding&);
bool operator<(const ChannelBinding&, const ChannelBinding&);

class QuantumDef;
bool operator==(const QuantumDef&, const QuantumDef&);
bool operator<(const QuantumDef&, const QuantumDef&);

class CodomainMapContext;
bool operator==(const CodomainMapContext&, const CodomainMapContext&);
bool operator<(const CodomainMapContext&, const CodomainMapContext&);

class Details;
bool operator==(const Details&, const Details&);
bool operator<(const Details&, const Details&);

class RenderingDef;
bool operator==(const RenderingDef&, const RenderingDef&);
bool operator<(const RenderingDef&, const RenderingDef&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::model::Pixels*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Pixels*);

::Ice::Object* upCast(::omero::model::RenderingModel*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::RenderingModel*);

::Ice::Object* upCast(::omero::model::ChannelBinding*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::ChannelBinding*);

::Ice::Object* upCast(::omero::model::QuantumDef*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::QuantumDef*);

::Ice::Object* upCast(::omero::model::CodomainMapContext*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::CodomainMapContext*);

::Ice::Object* upCast(::omero::model::Details*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Details*);

::Ice::Object* upCast(::omero::model::RenderingDef*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::RenderingDef*);

}

namespace omero
{

namespace model
{

typedef ::IceInternal::Handle< ::omero::model::Pixels> PixelsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Pixels> PixelsPrx;

void __read(::IceInternal::BasicStream*, PixelsPrx&);
void __patch__PixelsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::RenderingModel> RenderingModelPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::RenderingModel> RenderingModelPrx;

void __read(::IceInternal::BasicStream*, RenderingModelPrx&);
void __patch__RenderingModelPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::ChannelBinding> ChannelBindingPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::ChannelBinding> ChannelBindingPrx;

void __read(::IceInternal::BasicStream*, ChannelBindingPrx&);
void __patch__ChannelBindingPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::QuantumDef> QuantumDefPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::QuantumDef> QuantumDefPrx;

void __read(::IceInternal::BasicStream*, QuantumDefPrx&);
void __patch__QuantumDefPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::CodomainMapContext> CodomainMapContextPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::CodomainMapContext> CodomainMapContextPrx;

void __read(::IceInternal::BasicStream*, CodomainMapContextPrx&);
void __patch__CodomainMapContextPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Details> DetailsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Details> DetailsPrx;

void __read(::IceInternal::BasicStream*, DetailsPrx&);
void __patch__DetailsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::RenderingDef> RenderingDefPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::RenderingDef> RenderingDefPrx;

void __read(::IceInternal::BasicStream*, RenderingDefPrx&);
void __patch__RenderingDefPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace omero
{

namespace model
{

typedef ::std::vector< ::omero::model::ChannelBindingPtr> RenderingDefWaveRenderingSeq;
void __writeRenderingDefWaveRenderingSeq(::IceInternal::BasicStream*, const ::omero::model::ChannelBindingPtr*, const ::omero::model::ChannelBindingPtr*);
void __readRenderingDefWaveRenderingSeq(::IceInternal::BasicStream*, RenderingDefWaveRenderingSeq&);

typedef ::std::vector< ::omero::model::CodomainMapContextPtr> RenderingDefSpatialDomainEnhancementSeq;
void __writeRenderingDefSpatialDomainEnhancementSeq(::IceInternal::BasicStream*, const ::omero::model::CodomainMapContextPtr*, const ::omero::model::CodomainMapContextPtr*);
void __readRenderingDefSpatialDomainEnhancementSeq(::IceInternal::BasicStream*, RenderingDefSpatialDomainEnhancementSeq&);

}

}

namespace IceProxy
{

namespace omero
{

namespace model
{

class RenderingDef : virtual public ::IceProxy::omero::model::IObject
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

    ::omero::model::PixelsPtr getPixels()
    {
        return getPixels(0);
    }
    ::omero::model::PixelsPtr getPixels(const ::Ice::Context& __ctx)
    {
        return getPixels(&__ctx);
    }
    
private:

    ::omero::model::PixelsPtr getPixels(const ::Ice::Context*);
    
public:

    void setPixels(const ::omero::model::PixelsPtr& thePixels)
    {
        setPixels(thePixels, 0);
    }
    void setPixels(const ::omero::model::PixelsPtr& thePixels, const ::Ice::Context& __ctx)
    {
        setPixels(thePixels, &__ctx);
    }
    
private:

    void setPixels(const ::omero::model::PixelsPtr&, const ::Ice::Context*);
    
public:

    ::omero::RIntPtr getDefaultZ()
    {
        return getDefaultZ(0);
    }
    ::omero::RIntPtr getDefaultZ(const ::Ice::Context& __ctx)
    {
        return getDefaultZ(&__ctx);
    }
    
private:

    ::omero::RIntPtr getDefaultZ(const ::Ice::Context*);
    
public:

    void setDefaultZ(const ::omero::RIntPtr& theDefaultZ)
    {
        setDefaultZ(theDefaultZ, 0);
    }
    void setDefaultZ(const ::omero::RIntPtr& theDefaultZ, const ::Ice::Context& __ctx)
    {
        setDefaultZ(theDefaultZ, &__ctx);
    }
    
private:

    void setDefaultZ(const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:

    ::omero::RIntPtr getDefaultT()
    {
        return getDefaultT(0);
    }
    ::omero::RIntPtr getDefaultT(const ::Ice::Context& __ctx)
    {
        return getDefaultT(&__ctx);
    }
    
private:

    ::omero::RIntPtr getDefaultT(const ::Ice::Context*);
    
public:

    void setDefaultT(const ::omero::RIntPtr& theDefaultT)
    {
        setDefaultT(theDefaultT, 0);
    }
    void setDefaultT(const ::omero::RIntPtr& theDefaultT, const ::Ice::Context& __ctx)
    {
        setDefaultT(theDefaultT, &__ctx);
    }
    
private:

    void setDefaultT(const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:

    ::omero::model::RenderingModelPtr getModel()
    {
        return getModel(0);
    }
    ::omero::model::RenderingModelPtr getModel(const ::Ice::Context& __ctx)
    {
        return getModel(&__ctx);
    }
    
private:

    ::omero::model::RenderingModelPtr getModel(const ::Ice::Context*);
    
public:

    void setModel(const ::omero::model::RenderingModelPtr& theModel)
    {
        setModel(theModel, 0);
    }
    void setModel(const ::omero::model::RenderingModelPtr& theModel, const ::Ice::Context& __ctx)
    {
        setModel(theModel, &__ctx);
    }
    
private:

    void setModel(const ::omero::model::RenderingModelPtr&, const ::Ice::Context*);
    
public:

    void unloadWaveRendering()
    {
        unloadWaveRendering(0);
    }
    void unloadWaveRendering(const ::Ice::Context& __ctx)
    {
        unloadWaveRendering(&__ctx);
    }
    
private:

    void unloadWaveRendering(const ::Ice::Context*);
    
public:

    ::Ice::Int sizeOfWaveRendering()
    {
        return sizeOfWaveRendering(0);
    }
    ::Ice::Int sizeOfWaveRendering(const ::Ice::Context& __ctx)
    {
        return sizeOfWaveRendering(&__ctx);
    }
    
private:

    ::Ice::Int sizeOfWaveRendering(const ::Ice::Context*);
    
public:

    ::omero::model::RenderingDefWaveRenderingSeq copyWaveRendering()
    {
        return copyWaveRendering(0);
    }
    ::omero::model::RenderingDefWaveRenderingSeq copyWaveRendering(const ::Ice::Context& __ctx)
    {
        return copyWaveRendering(&__ctx);
    }
    
private:

    ::omero::model::RenderingDefWaveRenderingSeq copyWaveRendering(const ::Ice::Context*);
    
public:

    void addChannelBinding(const ::omero::model::ChannelBindingPtr& target)
    {
        addChannelBinding(target, 0);
    }
    void addChannelBinding(const ::omero::model::ChannelBindingPtr& target, const ::Ice::Context& __ctx)
    {
        addChannelBinding(target, &__ctx);
    }
    
private:

    void addChannelBinding(const ::omero::model::ChannelBindingPtr&, const ::Ice::Context*);
    
public:

    void addAllChannelBindingSet(const ::omero::model::RenderingDefWaveRenderingSeq& targets)
    {
        addAllChannelBindingSet(targets, 0);
    }
    void addAllChannelBindingSet(const ::omero::model::RenderingDefWaveRenderingSeq& targets, const ::Ice::Context& __ctx)
    {
        addAllChannelBindingSet(targets, &__ctx);
    }
    
private:

    void addAllChannelBindingSet(const ::omero::model::RenderingDefWaveRenderingSeq&, const ::Ice::Context*);
    
public:

    void removeChannelBinding(const ::omero::model::ChannelBindingPtr& theTarget)
    {
        removeChannelBinding(theTarget, 0);
    }
    void removeChannelBinding(const ::omero::model::ChannelBindingPtr& theTarget, const ::Ice::Context& __ctx)
    {
        removeChannelBinding(theTarget, &__ctx);
    }
    
private:

    void removeChannelBinding(const ::omero::model::ChannelBindingPtr&, const ::Ice::Context*);
    
public:

    void removeAllChannelBindingSet(const ::omero::model::RenderingDefWaveRenderingSeq& targets)
    {
        removeAllChannelBindingSet(targets, 0);
    }
    void removeAllChannelBindingSet(const ::omero::model::RenderingDefWaveRenderingSeq& targets, const ::Ice::Context& __ctx)
    {
        removeAllChannelBindingSet(targets, &__ctx);
    }
    
private:

    void removeAllChannelBindingSet(const ::omero::model::RenderingDefWaveRenderingSeq&, const ::Ice::Context*);
    
public:

    void clearWaveRendering()
    {
        clearWaveRendering(0);
    }
    void clearWaveRendering(const ::Ice::Context& __ctx)
    {
        clearWaveRendering(&__ctx);
    }
    
private:

    void clearWaveRendering(const ::Ice::Context*);
    
public:

    void reloadWaveRendering(const ::omero::model::RenderingDefPtr& toCopy)
    {
        reloadWaveRendering(toCopy, 0);
    }
    void reloadWaveRendering(const ::omero::model::RenderingDefPtr& toCopy, const ::Ice::Context& __ctx)
    {
        reloadWaveRendering(toCopy, &__ctx);
    }
    
private:

    void reloadWaveRendering(const ::omero::model::RenderingDefPtr&, const ::Ice::Context*);
    
public:

    ::omero::model::ChannelBindingPtr getChannelBinding(::Ice::Int index)
    {
        return getChannelBinding(index, 0);
    }
    ::omero::model::ChannelBindingPtr getChannelBinding(::Ice::Int index, const ::Ice::Context& __ctx)
    {
        return getChannelBinding(index, &__ctx);
    }
    
private:

    ::omero::model::ChannelBindingPtr getChannelBinding(::Ice::Int, const ::Ice::Context*);
    
public:

    ::omero::model::ChannelBindingPtr setChannelBinding(::Ice::Int index, const ::omero::model::ChannelBindingPtr& theElement)
    {
        return setChannelBinding(index, theElement, 0);
    }
    ::omero::model::ChannelBindingPtr setChannelBinding(::Ice::Int index, const ::omero::model::ChannelBindingPtr& theElement, const ::Ice::Context& __ctx)
    {
        return setChannelBinding(index, theElement, &__ctx);
    }
    
private:

    ::omero::model::ChannelBindingPtr setChannelBinding(::Ice::Int, const ::omero::model::ChannelBindingPtr&, const ::Ice::Context*);
    
public:

    ::omero::model::ChannelBindingPtr getPrimaryChannelBinding()
    {
        return getPrimaryChannelBinding(0);
    }
    ::omero::model::ChannelBindingPtr getPrimaryChannelBinding(const ::Ice::Context& __ctx)
    {
        return getPrimaryChannelBinding(&__ctx);
    }
    
private:

    ::omero::model::ChannelBindingPtr getPrimaryChannelBinding(const ::Ice::Context*);
    
public:

    ::omero::model::ChannelBindingPtr setPrimaryChannelBinding(const ::omero::model::ChannelBindingPtr& theElement)
    {
        return setPrimaryChannelBinding(theElement, 0);
    }
    ::omero::model::ChannelBindingPtr setPrimaryChannelBinding(const ::omero::model::ChannelBindingPtr& theElement, const ::Ice::Context& __ctx)
    {
        return setPrimaryChannelBinding(theElement, &__ctx);
    }
    
private:

    ::omero::model::ChannelBindingPtr setPrimaryChannelBinding(const ::omero::model::ChannelBindingPtr&, const ::Ice::Context*);
    
public:

    ::omero::RStringPtr getName()
    {
        return getName(0);
    }
    ::omero::RStringPtr getName(const ::Ice::Context& __ctx)
    {
        return getName(&__ctx);
    }
    
private:

    ::omero::RStringPtr getName(const ::Ice::Context*);
    
public:

    void setName(const ::omero::RStringPtr& theName)
    {
        setName(theName, 0);
    }
    void setName(const ::omero::RStringPtr& theName, const ::Ice::Context& __ctx)
    {
        setName(theName, &__ctx);
    }
    
private:

    void setName(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:

    ::omero::RDoublePtr getCompression()
    {
        return getCompression(0);
    }
    ::omero::RDoublePtr getCompression(const ::Ice::Context& __ctx)
    {
        return getCompression(&__ctx);
    }
    
private:

    ::omero::RDoublePtr getCompression(const ::Ice::Context*);
    
public:

    void setCompression(const ::omero::RDoublePtr& theCompression)
    {
        setCompression(theCompression, 0);
    }
    void setCompression(const ::omero::RDoublePtr& theCompression, const ::Ice::Context& __ctx)
    {
        setCompression(theCompression, &__ctx);
    }
    
private:

    void setCompression(const ::omero::RDoublePtr&, const ::Ice::Context*);
    
public:

    ::omero::model::QuantumDefPtr getQuantization()
    {
        return getQuantization(0);
    }
    ::omero::model::QuantumDefPtr getQuantization(const ::Ice::Context& __ctx)
    {
        return getQuantization(&__ctx);
    }
    
private:

    ::omero::model::QuantumDefPtr getQuantization(const ::Ice::Context*);
    
public:

    void setQuantization(const ::omero::model::QuantumDefPtr& theQuantization)
    {
        setQuantization(theQuantization, 0);
    }
    void setQuantization(const ::omero::model::QuantumDefPtr& theQuantization, const ::Ice::Context& __ctx)
    {
        setQuantization(theQuantization, &__ctx);
    }
    
private:

    void setQuantization(const ::omero::model::QuantumDefPtr&, const ::Ice::Context*);
    
public:

    void unloadSpatialDomainEnhancement()
    {
        unloadSpatialDomainEnhancement(0);
    }
    void unloadSpatialDomainEnhancement(const ::Ice::Context& __ctx)
    {
        unloadSpatialDomainEnhancement(&__ctx);
    }
    
private:

    void unloadSpatialDomainEnhancement(const ::Ice::Context*);
    
public:

    ::Ice::Int sizeOfSpatialDomainEnhancement()
    {
        return sizeOfSpatialDomainEnhancement(0);
    }
    ::Ice::Int sizeOfSpatialDomainEnhancement(const ::Ice::Context& __ctx)
    {
        return sizeOfSpatialDomainEnhancement(&__ctx);
    }
    
private:

    ::Ice::Int sizeOfSpatialDomainEnhancement(const ::Ice::Context*);
    
public:

    ::omero::model::RenderingDefSpatialDomainEnhancementSeq copySpatialDomainEnhancement()
    {
        return copySpatialDomainEnhancement(0);
    }
    ::omero::model::RenderingDefSpatialDomainEnhancementSeq copySpatialDomainEnhancement(const ::Ice::Context& __ctx)
    {
        return copySpatialDomainEnhancement(&__ctx);
    }
    
private:

    ::omero::model::RenderingDefSpatialDomainEnhancementSeq copySpatialDomainEnhancement(const ::Ice::Context*);
    
public:

    void addCodomainMapContext(const ::omero::model::CodomainMapContextPtr& target)
    {
        addCodomainMapContext(target, 0);
    }
    void addCodomainMapContext(const ::omero::model::CodomainMapContextPtr& target, const ::Ice::Context& __ctx)
    {
        addCodomainMapContext(target, &__ctx);
    }
    
private:

    void addCodomainMapContext(const ::omero::model::CodomainMapContextPtr&, const ::Ice::Context*);
    
public:

    void addAllCodomainMapContextSet(const ::omero::model::RenderingDefSpatialDomainEnhancementSeq& targets)
    {
        addAllCodomainMapContextSet(targets, 0);
    }
    void addAllCodomainMapContextSet(const ::omero::model::RenderingDefSpatialDomainEnhancementSeq& targets, const ::Ice::Context& __ctx)
    {
        addAllCodomainMapContextSet(targets, &__ctx);
    }
    
private:

    void addAllCodomainMapContextSet(const ::omero::model::RenderingDefSpatialDomainEnhancementSeq&, const ::Ice::Context*);
    
public:

    void removeCodomainMapContext(const ::omero::model::CodomainMapContextPtr& theTarget)
    {
        removeCodomainMapContext(theTarget, 0);
    }
    void removeCodomainMapContext(const ::omero::model::CodomainMapContextPtr& theTarget, const ::Ice::Context& __ctx)
    {
        removeCodomainMapContext(theTarget, &__ctx);
    }
    
private:

    void removeCodomainMapContext(const ::omero::model::CodomainMapContextPtr&, const ::Ice::Context*);
    
public:

    void removeAllCodomainMapContextSet(const ::omero::model::RenderingDefSpatialDomainEnhancementSeq& targets)
    {
        removeAllCodomainMapContextSet(targets, 0);
    }
    void removeAllCodomainMapContextSet(const ::omero::model::RenderingDefSpatialDomainEnhancementSeq& targets, const ::Ice::Context& __ctx)
    {
        removeAllCodomainMapContextSet(targets, &__ctx);
    }
    
private:

    void removeAllCodomainMapContextSet(const ::omero::model::RenderingDefSpatialDomainEnhancementSeq&, const ::Ice::Context*);
    
public:

    void clearSpatialDomainEnhancement()
    {
        clearSpatialDomainEnhancement(0);
    }
    void clearSpatialDomainEnhancement(const ::Ice::Context& __ctx)
    {
        clearSpatialDomainEnhancement(&__ctx);
    }
    
private:

    void clearSpatialDomainEnhancement(const ::Ice::Context*);
    
public:

    void reloadSpatialDomainEnhancement(const ::omero::model::RenderingDefPtr& toCopy)
    {
        reloadSpatialDomainEnhancement(toCopy, 0);
    }
    void reloadSpatialDomainEnhancement(const ::omero::model::RenderingDefPtr& toCopy, const ::Ice::Context& __ctx)
    {
        reloadSpatialDomainEnhancement(toCopy, &__ctx);
    }
    
private:

    void reloadSpatialDomainEnhancement(const ::omero::model::RenderingDefPtr&, const ::Ice::Context*);
    
public:

    ::omero::model::CodomainMapContextPtr getCodomainMapContext(::Ice::Int index)
    {
        return getCodomainMapContext(index, 0);
    }
    ::omero::model::CodomainMapContextPtr getCodomainMapContext(::Ice::Int index, const ::Ice::Context& __ctx)
    {
        return getCodomainMapContext(index, &__ctx);
    }
    
private:

    ::omero::model::CodomainMapContextPtr getCodomainMapContext(::Ice::Int, const ::Ice::Context*);
    
public:

    ::omero::model::CodomainMapContextPtr setCodomainMapContext(::Ice::Int index, const ::omero::model::CodomainMapContextPtr& theElement)
    {
        return setCodomainMapContext(index, theElement, 0);
    }
    ::omero::model::CodomainMapContextPtr setCodomainMapContext(::Ice::Int index, const ::omero::model::CodomainMapContextPtr& theElement, const ::Ice::Context& __ctx)
    {
        return setCodomainMapContext(index, theElement, &__ctx);
    }
    
private:

    ::omero::model::CodomainMapContextPtr setCodomainMapContext(::Ice::Int, const ::omero::model::CodomainMapContextPtr&, const ::Ice::Context*);
    
public:

    ::omero::model::CodomainMapContextPtr getPrimaryCodomainMapContext()
    {
        return getPrimaryCodomainMapContext(0);
    }
    ::omero::model::CodomainMapContextPtr getPrimaryCodomainMapContext(const ::Ice::Context& __ctx)
    {
        return getPrimaryCodomainMapContext(&__ctx);
    }
    
private:

    ::omero::model::CodomainMapContextPtr getPrimaryCodomainMapContext(const ::Ice::Context*);
    
public:

    ::omero::model::CodomainMapContextPtr setPrimaryCodomainMapContext(const ::omero::model::CodomainMapContextPtr& theElement)
    {
        return setPrimaryCodomainMapContext(theElement, 0);
    }
    ::omero::model::CodomainMapContextPtr setPrimaryCodomainMapContext(const ::omero::model::CodomainMapContextPtr& theElement, const ::Ice::Context& __ctx)
    {
        return setPrimaryCodomainMapContext(theElement, &__ctx);
    }
    
private:

    ::omero::model::CodomainMapContextPtr setPrimaryCodomainMapContext(const ::omero::model::CodomainMapContextPtr&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<RenderingDef> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RenderingDef*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<RenderingDef*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RenderingDef> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RenderingDef*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<RenderingDef*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RenderingDef> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RenderingDef*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<RenderingDef*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RenderingDef> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RenderingDef*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<RenderingDef*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RenderingDef> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RenderingDef*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<RenderingDef*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RenderingDef> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RenderingDef*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<RenderingDef*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RenderingDef> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RenderingDef*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<RenderingDef*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RenderingDef> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RenderingDef*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<RenderingDef*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RenderingDef> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RenderingDef*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<RenderingDef*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RenderingDef> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RenderingDef*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<RenderingDef*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RenderingDef> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RenderingDef*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<RenderingDef*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RenderingDef> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RenderingDef*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<RenderingDef*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RenderingDef> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RenderingDef*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<RenderingDef*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RenderingDef> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RenderingDef*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<RenderingDef*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RenderingDef> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RenderingDef*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<RenderingDef*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RenderingDef> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RenderingDef*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<RenderingDef*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RenderingDef> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RenderingDef*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<RenderingDef*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RenderingDef> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RenderingDef*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<RenderingDef*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RenderingDef> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RenderingDef*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<RenderingDef*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class RenderingDef : virtual public ::IceDelegate::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*) = 0;

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::PixelsPtr getPixels(const ::Ice::Context*) = 0;

    virtual void setPixels(const ::omero::model::PixelsPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RIntPtr getDefaultZ(const ::Ice::Context*) = 0;

    virtual void setDefaultZ(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RIntPtr getDefaultT(const ::Ice::Context*) = 0;

    virtual void setDefaultT(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::RenderingModelPtr getModel(const ::Ice::Context*) = 0;

    virtual void setModel(const ::omero::model::RenderingModelPtr&, const ::Ice::Context*) = 0;

    virtual void unloadWaveRendering(const ::Ice::Context*) = 0;

    virtual ::Ice::Int sizeOfWaveRendering(const ::Ice::Context*) = 0;

    virtual ::omero::model::RenderingDefWaveRenderingSeq copyWaveRendering(const ::Ice::Context*) = 0;

    virtual void addChannelBinding(const ::omero::model::ChannelBindingPtr&, const ::Ice::Context*) = 0;

    virtual void addAllChannelBindingSet(const ::omero::model::RenderingDefWaveRenderingSeq&, const ::Ice::Context*) = 0;

    virtual void removeChannelBinding(const ::omero::model::ChannelBindingPtr&, const ::Ice::Context*) = 0;

    virtual void removeAllChannelBindingSet(const ::omero::model::RenderingDefWaveRenderingSeq&, const ::Ice::Context*) = 0;

    virtual void clearWaveRendering(const ::Ice::Context*) = 0;

    virtual void reloadWaveRendering(const ::omero::model::RenderingDefPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::ChannelBindingPtr getChannelBinding(::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::omero::model::ChannelBindingPtr setChannelBinding(::Ice::Int, const ::omero::model::ChannelBindingPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::ChannelBindingPtr getPrimaryChannelBinding(const ::Ice::Context*) = 0;

    virtual ::omero::model::ChannelBindingPtr setPrimaryChannelBinding(const ::omero::model::ChannelBindingPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getName(const ::Ice::Context*) = 0;

    virtual void setName(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RDoublePtr getCompression(const ::Ice::Context*) = 0;

    virtual void setCompression(const ::omero::RDoublePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::QuantumDefPtr getQuantization(const ::Ice::Context*) = 0;

    virtual void setQuantization(const ::omero::model::QuantumDefPtr&, const ::Ice::Context*) = 0;

    virtual void unloadSpatialDomainEnhancement(const ::Ice::Context*) = 0;

    virtual ::Ice::Int sizeOfSpatialDomainEnhancement(const ::Ice::Context*) = 0;

    virtual ::omero::model::RenderingDefSpatialDomainEnhancementSeq copySpatialDomainEnhancement(const ::Ice::Context*) = 0;

    virtual void addCodomainMapContext(const ::omero::model::CodomainMapContextPtr&, const ::Ice::Context*) = 0;

    virtual void addAllCodomainMapContextSet(const ::omero::model::RenderingDefSpatialDomainEnhancementSeq&, const ::Ice::Context*) = 0;

    virtual void removeCodomainMapContext(const ::omero::model::CodomainMapContextPtr&, const ::Ice::Context*) = 0;

    virtual void removeAllCodomainMapContextSet(const ::omero::model::RenderingDefSpatialDomainEnhancementSeq&, const ::Ice::Context*) = 0;

    virtual void clearSpatialDomainEnhancement(const ::Ice::Context*) = 0;

    virtual void reloadSpatialDomainEnhancement(const ::omero::model::RenderingDefPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::CodomainMapContextPtr getCodomainMapContext(::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::omero::model::CodomainMapContextPtr setCodomainMapContext(::Ice::Int, const ::omero::model::CodomainMapContextPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::CodomainMapContextPtr getPrimaryCodomainMapContext(const ::Ice::Context*) = 0;

    virtual ::omero::model::CodomainMapContextPtr setPrimaryCodomainMapContext(const ::omero::model::CodomainMapContextPtr&, const ::Ice::Context*) = 0;
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

class RenderingDef : virtual public ::IceDelegate::omero::model::RenderingDef,
                     virtual public ::IceDelegateM::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::model::PixelsPtr getPixels(const ::Ice::Context*);

    virtual void setPixels(const ::omero::model::PixelsPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getDefaultZ(const ::Ice::Context*);

    virtual void setDefaultZ(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getDefaultT(const ::Ice::Context*);

    virtual void setDefaultT(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::model::RenderingModelPtr getModel(const ::Ice::Context*);

    virtual void setModel(const ::omero::model::RenderingModelPtr&, const ::Ice::Context*);

    virtual void unloadWaveRendering(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfWaveRendering(const ::Ice::Context*);

    virtual ::omero::model::RenderingDefWaveRenderingSeq copyWaveRendering(const ::Ice::Context*);

    virtual void addChannelBinding(const ::omero::model::ChannelBindingPtr&, const ::Ice::Context*);

    virtual void addAllChannelBindingSet(const ::omero::model::RenderingDefWaveRenderingSeq&, const ::Ice::Context*);

    virtual void removeChannelBinding(const ::omero::model::ChannelBindingPtr&, const ::Ice::Context*);

    virtual void removeAllChannelBindingSet(const ::omero::model::RenderingDefWaveRenderingSeq&, const ::Ice::Context*);

    virtual void clearWaveRendering(const ::Ice::Context*);

    virtual void reloadWaveRendering(const ::omero::model::RenderingDefPtr&, const ::Ice::Context*);

    virtual ::omero::model::ChannelBindingPtr getChannelBinding(::Ice::Int, const ::Ice::Context*);

    virtual ::omero::model::ChannelBindingPtr setChannelBinding(::Ice::Int, const ::omero::model::ChannelBindingPtr&, const ::Ice::Context*);

    virtual ::omero::model::ChannelBindingPtr getPrimaryChannelBinding(const ::Ice::Context*);

    virtual ::omero::model::ChannelBindingPtr setPrimaryChannelBinding(const ::omero::model::ChannelBindingPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getName(const ::Ice::Context*);

    virtual void setName(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getCompression(const ::Ice::Context*);

    virtual void setCompression(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::model::QuantumDefPtr getQuantization(const ::Ice::Context*);

    virtual void setQuantization(const ::omero::model::QuantumDefPtr&, const ::Ice::Context*);

    virtual void unloadSpatialDomainEnhancement(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfSpatialDomainEnhancement(const ::Ice::Context*);

    virtual ::omero::model::RenderingDefSpatialDomainEnhancementSeq copySpatialDomainEnhancement(const ::Ice::Context*);

    virtual void addCodomainMapContext(const ::omero::model::CodomainMapContextPtr&, const ::Ice::Context*);

    virtual void addAllCodomainMapContextSet(const ::omero::model::RenderingDefSpatialDomainEnhancementSeq&, const ::Ice::Context*);

    virtual void removeCodomainMapContext(const ::omero::model::CodomainMapContextPtr&, const ::Ice::Context*);

    virtual void removeAllCodomainMapContextSet(const ::omero::model::RenderingDefSpatialDomainEnhancementSeq&, const ::Ice::Context*);

    virtual void clearSpatialDomainEnhancement(const ::Ice::Context*);

    virtual void reloadSpatialDomainEnhancement(const ::omero::model::RenderingDefPtr&, const ::Ice::Context*);

    virtual ::omero::model::CodomainMapContextPtr getCodomainMapContext(::Ice::Int, const ::Ice::Context*);

    virtual ::omero::model::CodomainMapContextPtr setCodomainMapContext(::Ice::Int, const ::omero::model::CodomainMapContextPtr&, const ::Ice::Context*);

    virtual ::omero::model::CodomainMapContextPtr getPrimaryCodomainMapContext(const ::Ice::Context*);

    virtual ::omero::model::CodomainMapContextPtr setPrimaryCodomainMapContext(const ::omero::model::CodomainMapContextPtr&, const ::Ice::Context*);
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

class RenderingDef : virtual public ::IceDelegate::omero::model::RenderingDef,
                     virtual public ::IceDelegateD::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::model::PixelsPtr getPixels(const ::Ice::Context*);

    virtual void setPixels(const ::omero::model::PixelsPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getDefaultZ(const ::Ice::Context*);

    virtual void setDefaultZ(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getDefaultT(const ::Ice::Context*);

    virtual void setDefaultT(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::model::RenderingModelPtr getModel(const ::Ice::Context*);

    virtual void setModel(const ::omero::model::RenderingModelPtr&, const ::Ice::Context*);

    virtual void unloadWaveRendering(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfWaveRendering(const ::Ice::Context*);

    virtual ::omero::model::RenderingDefWaveRenderingSeq copyWaveRendering(const ::Ice::Context*);

    virtual void addChannelBinding(const ::omero::model::ChannelBindingPtr&, const ::Ice::Context*);

    virtual void addAllChannelBindingSet(const ::omero::model::RenderingDefWaveRenderingSeq&, const ::Ice::Context*);

    virtual void removeChannelBinding(const ::omero::model::ChannelBindingPtr&, const ::Ice::Context*);

    virtual void removeAllChannelBindingSet(const ::omero::model::RenderingDefWaveRenderingSeq&, const ::Ice::Context*);

    virtual void clearWaveRendering(const ::Ice::Context*);

    virtual void reloadWaveRendering(const ::omero::model::RenderingDefPtr&, const ::Ice::Context*);

    virtual ::omero::model::ChannelBindingPtr getChannelBinding(::Ice::Int, const ::Ice::Context*);

    virtual ::omero::model::ChannelBindingPtr setChannelBinding(::Ice::Int, const ::omero::model::ChannelBindingPtr&, const ::Ice::Context*);

    virtual ::omero::model::ChannelBindingPtr getPrimaryChannelBinding(const ::Ice::Context*);

    virtual ::omero::model::ChannelBindingPtr setPrimaryChannelBinding(const ::omero::model::ChannelBindingPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getName(const ::Ice::Context*);

    virtual void setName(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getCompression(const ::Ice::Context*);

    virtual void setCompression(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::model::QuantumDefPtr getQuantization(const ::Ice::Context*);

    virtual void setQuantization(const ::omero::model::QuantumDefPtr&, const ::Ice::Context*);

    virtual void unloadSpatialDomainEnhancement(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfSpatialDomainEnhancement(const ::Ice::Context*);

    virtual ::omero::model::RenderingDefSpatialDomainEnhancementSeq copySpatialDomainEnhancement(const ::Ice::Context*);

    virtual void addCodomainMapContext(const ::omero::model::CodomainMapContextPtr&, const ::Ice::Context*);

    virtual void addAllCodomainMapContextSet(const ::omero::model::RenderingDefSpatialDomainEnhancementSeq&, const ::Ice::Context*);

    virtual void removeCodomainMapContext(const ::omero::model::CodomainMapContextPtr&, const ::Ice::Context*);

    virtual void removeAllCodomainMapContextSet(const ::omero::model::RenderingDefSpatialDomainEnhancementSeq&, const ::Ice::Context*);

    virtual void clearSpatialDomainEnhancement(const ::Ice::Context*);

    virtual void reloadSpatialDomainEnhancement(const ::omero::model::RenderingDefPtr&, const ::Ice::Context*);

    virtual ::omero::model::CodomainMapContextPtr getCodomainMapContext(::Ice::Int, const ::Ice::Context*);

    virtual ::omero::model::CodomainMapContextPtr setCodomainMapContext(::Ice::Int, const ::omero::model::CodomainMapContextPtr&, const ::Ice::Context*);

    virtual ::omero::model::CodomainMapContextPtr getPrimaryCodomainMapContext(const ::Ice::Context*);

    virtual ::omero::model::CodomainMapContextPtr setPrimaryCodomainMapContext(const ::omero::model::CodomainMapContextPtr&, const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace model
{

class RenderingDef : virtual public ::omero::model::IObject
{
public:

    typedef RenderingDefPrx ProxyType;
    typedef RenderingDefPtr PointerType;
    
    RenderingDef() {}
    RenderingDef(const ::omero::RLongPtr&, const ::omero::model::DetailsPtr&, bool, const ::omero::RIntPtr&, const ::omero::model::PixelsPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::model::RenderingModelPtr&, const ::omero::model::RenderingDefWaveRenderingSeq&, bool, const ::omero::RStringPtr&, const ::omero::RDoublePtr&, const ::omero::model::QuantumDefPtr&, const ::omero::model::RenderingDefSpatialDomainEnhancementSeq&, bool);
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

    virtual ::omero::model::PixelsPtr getPixels(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getPixels(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setPixels(const ::omero::model::PixelsPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setPixels(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RIntPtr getDefaultZ(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getDefaultZ(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setDefaultZ(const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setDefaultZ(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RIntPtr getDefaultT(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getDefaultT(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setDefaultT(const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setDefaultT(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::RenderingModelPtr getModel(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getModel(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setModel(const ::omero::model::RenderingModelPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setModel(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unloadWaveRendering(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unloadWaveRendering(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int sizeOfWaveRendering(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sizeOfWaveRendering(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::RenderingDefWaveRenderingSeq copyWaveRendering(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copyWaveRendering(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addChannelBinding(const ::omero::model::ChannelBindingPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addChannelBinding(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAllChannelBindingSet(const ::omero::model::RenderingDefWaveRenderingSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAllChannelBindingSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeChannelBinding(const ::omero::model::ChannelBindingPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeChannelBinding(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeAllChannelBindingSet(const ::omero::model::RenderingDefWaveRenderingSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeAllChannelBindingSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void clearWaveRendering(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___clearWaveRendering(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void reloadWaveRendering(const ::omero::model::RenderingDefPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___reloadWaveRendering(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ChannelBindingPtr getChannelBinding(::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getChannelBinding(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ChannelBindingPtr setChannelBinding(::Ice::Int, const ::omero::model::ChannelBindingPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setChannelBinding(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ChannelBindingPtr getPrimaryChannelBinding(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getPrimaryChannelBinding(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ChannelBindingPtr setPrimaryChannelBinding(const ::omero::model::ChannelBindingPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setPrimaryChannelBinding(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getName(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getName(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setName(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setName(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RDoublePtr getCompression(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getCompression(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setCompression(const ::omero::RDoublePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setCompression(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::QuantumDefPtr getQuantization(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getQuantization(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setQuantization(const ::omero::model::QuantumDefPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setQuantization(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unloadSpatialDomainEnhancement(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unloadSpatialDomainEnhancement(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int sizeOfSpatialDomainEnhancement(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sizeOfSpatialDomainEnhancement(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::RenderingDefSpatialDomainEnhancementSeq copySpatialDomainEnhancement(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copySpatialDomainEnhancement(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addCodomainMapContext(const ::omero::model::CodomainMapContextPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addCodomainMapContext(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAllCodomainMapContextSet(const ::omero::model::RenderingDefSpatialDomainEnhancementSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAllCodomainMapContextSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeCodomainMapContext(const ::omero::model::CodomainMapContextPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeCodomainMapContext(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeAllCodomainMapContextSet(const ::omero::model::RenderingDefSpatialDomainEnhancementSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeAllCodomainMapContextSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void clearSpatialDomainEnhancement(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___clearSpatialDomainEnhancement(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void reloadSpatialDomainEnhancement(const ::omero::model::RenderingDefPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___reloadSpatialDomainEnhancement(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::CodomainMapContextPtr getCodomainMapContext(::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getCodomainMapContext(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::CodomainMapContextPtr setCodomainMapContext(::Ice::Int, const ::omero::model::CodomainMapContextPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setCodomainMapContext(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::CodomainMapContextPtr getPrimaryCodomainMapContext(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getPrimaryCodomainMapContext(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::CodomainMapContextPtr setPrimaryCodomainMapContext(const ::omero::model::CodomainMapContextPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setPrimaryCodomainMapContext(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

protected:

    ::omero::RIntPtr version;

    ::omero::model::PixelsPtr pixels;

    ::omero::RIntPtr defaultZ;

    ::omero::RIntPtr defaultT;

    ::omero::model::RenderingModelPtr model;

    ::omero::model::RenderingDefWaveRenderingSeq waveRenderingSeq;

    bool waveRenderingLoaded;

    ::omero::RStringPtr name;

    ::omero::RDoublePtr compression;

    ::omero::model::QuantumDefPtr quantization;

    ::omero::model::RenderingDefSpatialDomainEnhancementSeq spatialDomainEnhancementSeq;

    bool spatialDomainEnhancementLoaded;
};

}

}

#endif
