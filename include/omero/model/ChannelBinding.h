// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `ChannelBinding.ice'

#ifndef __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_ChannelBinding_h__
#define __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_ChannelBinding_h__

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

class RenderingDef;

class Family;

class Details;

class ChannelBinding;

}

}

}

namespace omero
{

namespace model
{

class RenderingDef;
bool operator==(const RenderingDef&, const RenderingDef&);
bool operator<(const RenderingDef&, const RenderingDef&);

class Family;
bool operator==(const Family&, const Family&);
bool operator<(const Family&, const Family&);

class Details;
bool operator==(const Details&, const Details&);
bool operator<(const Details&, const Details&);

class ChannelBinding;
bool operator==(const ChannelBinding&, const ChannelBinding&);
bool operator<(const ChannelBinding&, const ChannelBinding&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::model::RenderingDef*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::RenderingDef*);

::Ice::Object* upCast(::omero::model::Family*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Family*);

::Ice::Object* upCast(::omero::model::Details*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Details*);

::Ice::Object* upCast(::omero::model::ChannelBinding*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::ChannelBinding*);

}

namespace omero
{

namespace model
{

typedef ::IceInternal::Handle< ::omero::model::RenderingDef> RenderingDefPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::RenderingDef> RenderingDefPrx;

void __read(::IceInternal::BasicStream*, RenderingDefPrx&);
void __patch__RenderingDefPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Family> FamilyPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Family> FamilyPrx;

void __read(::IceInternal::BasicStream*, FamilyPrx&);
void __patch__FamilyPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Details> DetailsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Details> DetailsPrx;

void __read(::IceInternal::BasicStream*, DetailsPrx&);
void __patch__DetailsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::ChannelBinding> ChannelBindingPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::ChannelBinding> ChannelBindingPrx;

void __read(::IceInternal::BasicStream*, ChannelBindingPrx&);
void __patch__ChannelBindingPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace IceProxy
{

namespace omero
{

namespace model
{

class ChannelBinding : virtual public ::IceProxy::omero::model::IObject
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

    ::omero::model::RenderingDefPtr getRenderingDef()
    {
        return getRenderingDef(0);
    }
    ::omero::model::RenderingDefPtr getRenderingDef(const ::Ice::Context& __ctx)
    {
        return getRenderingDef(&__ctx);
    }
    
private:

    ::omero::model::RenderingDefPtr getRenderingDef(const ::Ice::Context*);
    
public:

    void setRenderingDef(const ::omero::model::RenderingDefPtr& theRenderingDef)
    {
        setRenderingDef(theRenderingDef, 0);
    }
    void setRenderingDef(const ::omero::model::RenderingDefPtr& theRenderingDef, const ::Ice::Context& __ctx)
    {
        setRenderingDef(theRenderingDef, &__ctx);
    }
    
private:

    void setRenderingDef(const ::omero::model::RenderingDefPtr&, const ::Ice::Context*);
    
public:

    ::omero::model::FamilyPtr getFamily()
    {
        return getFamily(0);
    }
    ::omero::model::FamilyPtr getFamily(const ::Ice::Context& __ctx)
    {
        return getFamily(&__ctx);
    }
    
private:

    ::omero::model::FamilyPtr getFamily(const ::Ice::Context*);
    
public:

    void setFamily(const ::omero::model::FamilyPtr& theFamily)
    {
        setFamily(theFamily, 0);
    }
    void setFamily(const ::omero::model::FamilyPtr& theFamily, const ::Ice::Context& __ctx)
    {
        setFamily(theFamily, &__ctx);
    }
    
private:

    void setFamily(const ::omero::model::FamilyPtr&, const ::Ice::Context*);
    
public:

    ::omero::RDoublePtr getCoefficient()
    {
        return getCoefficient(0);
    }
    ::omero::RDoublePtr getCoefficient(const ::Ice::Context& __ctx)
    {
        return getCoefficient(&__ctx);
    }
    
private:

    ::omero::RDoublePtr getCoefficient(const ::Ice::Context*);
    
public:

    void setCoefficient(const ::omero::RDoublePtr& theCoefficient)
    {
        setCoefficient(theCoefficient, 0);
    }
    void setCoefficient(const ::omero::RDoublePtr& theCoefficient, const ::Ice::Context& __ctx)
    {
        setCoefficient(theCoefficient, &__ctx);
    }
    
private:

    void setCoefficient(const ::omero::RDoublePtr&, const ::Ice::Context*);
    
public:

    ::omero::RDoublePtr getInputStart()
    {
        return getInputStart(0);
    }
    ::omero::RDoublePtr getInputStart(const ::Ice::Context& __ctx)
    {
        return getInputStart(&__ctx);
    }
    
private:

    ::omero::RDoublePtr getInputStart(const ::Ice::Context*);
    
public:

    void setInputStart(const ::omero::RDoublePtr& theInputStart)
    {
        setInputStart(theInputStart, 0);
    }
    void setInputStart(const ::omero::RDoublePtr& theInputStart, const ::Ice::Context& __ctx)
    {
        setInputStart(theInputStart, &__ctx);
    }
    
private:

    void setInputStart(const ::omero::RDoublePtr&, const ::Ice::Context*);
    
public:

    ::omero::RDoublePtr getInputEnd()
    {
        return getInputEnd(0);
    }
    ::omero::RDoublePtr getInputEnd(const ::Ice::Context& __ctx)
    {
        return getInputEnd(&__ctx);
    }
    
private:

    ::omero::RDoublePtr getInputEnd(const ::Ice::Context*);
    
public:

    void setInputEnd(const ::omero::RDoublePtr& theInputEnd)
    {
        setInputEnd(theInputEnd, 0);
    }
    void setInputEnd(const ::omero::RDoublePtr& theInputEnd, const ::Ice::Context& __ctx)
    {
        setInputEnd(theInputEnd, &__ctx);
    }
    
private:

    void setInputEnd(const ::omero::RDoublePtr&, const ::Ice::Context*);
    
public:

    ::omero::RBoolPtr getActive()
    {
        return getActive(0);
    }
    ::omero::RBoolPtr getActive(const ::Ice::Context& __ctx)
    {
        return getActive(&__ctx);
    }
    
private:

    ::omero::RBoolPtr getActive(const ::Ice::Context*);
    
public:

    void setActive(const ::omero::RBoolPtr& theActive)
    {
        setActive(theActive, 0);
    }
    void setActive(const ::omero::RBoolPtr& theActive, const ::Ice::Context& __ctx)
    {
        setActive(theActive, &__ctx);
    }
    
private:

    void setActive(const ::omero::RBoolPtr&, const ::Ice::Context*);
    
public:

    ::omero::RBoolPtr getNoiseReduction()
    {
        return getNoiseReduction(0);
    }
    ::omero::RBoolPtr getNoiseReduction(const ::Ice::Context& __ctx)
    {
        return getNoiseReduction(&__ctx);
    }
    
private:

    ::omero::RBoolPtr getNoiseReduction(const ::Ice::Context*);
    
public:

    void setNoiseReduction(const ::omero::RBoolPtr& theNoiseReduction)
    {
        setNoiseReduction(theNoiseReduction, 0);
    }
    void setNoiseReduction(const ::omero::RBoolPtr& theNoiseReduction, const ::Ice::Context& __ctx)
    {
        setNoiseReduction(theNoiseReduction, &__ctx);
    }
    
private:

    void setNoiseReduction(const ::omero::RBoolPtr&, const ::Ice::Context*);
    
public:

    ::omero::RIntPtr getRed()
    {
        return getRed(0);
    }
    ::omero::RIntPtr getRed(const ::Ice::Context& __ctx)
    {
        return getRed(&__ctx);
    }
    
private:

    ::omero::RIntPtr getRed(const ::Ice::Context*);
    
public:

    void setRed(const ::omero::RIntPtr& theRed)
    {
        setRed(theRed, 0);
    }
    void setRed(const ::omero::RIntPtr& theRed, const ::Ice::Context& __ctx)
    {
        setRed(theRed, &__ctx);
    }
    
private:

    void setRed(const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:

    ::omero::RIntPtr getGreen()
    {
        return getGreen(0);
    }
    ::omero::RIntPtr getGreen(const ::Ice::Context& __ctx)
    {
        return getGreen(&__ctx);
    }
    
private:

    ::omero::RIntPtr getGreen(const ::Ice::Context*);
    
public:

    void setGreen(const ::omero::RIntPtr& theGreen)
    {
        setGreen(theGreen, 0);
    }
    void setGreen(const ::omero::RIntPtr& theGreen, const ::Ice::Context& __ctx)
    {
        setGreen(theGreen, &__ctx);
    }
    
private:

    void setGreen(const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:

    ::omero::RIntPtr getBlue()
    {
        return getBlue(0);
    }
    ::omero::RIntPtr getBlue(const ::Ice::Context& __ctx)
    {
        return getBlue(&__ctx);
    }
    
private:

    ::omero::RIntPtr getBlue(const ::Ice::Context*);
    
public:

    void setBlue(const ::omero::RIntPtr& theBlue)
    {
        setBlue(theBlue, 0);
    }
    void setBlue(const ::omero::RIntPtr& theBlue, const ::Ice::Context& __ctx)
    {
        setBlue(theBlue, &__ctx);
    }
    
private:

    void setBlue(const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:

    ::omero::RIntPtr getAlpha()
    {
        return getAlpha(0);
    }
    ::omero::RIntPtr getAlpha(const ::Ice::Context& __ctx)
    {
        return getAlpha(&__ctx);
    }
    
private:

    ::omero::RIntPtr getAlpha(const ::Ice::Context*);
    
public:

    void setAlpha(const ::omero::RIntPtr& theAlpha)
    {
        setAlpha(theAlpha, 0);
    }
    void setAlpha(const ::omero::RIntPtr& theAlpha, const ::Ice::Context& __ctx)
    {
        setAlpha(theAlpha, &__ctx);
    }
    
private:

    void setAlpha(const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<ChannelBinding> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChannelBinding*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<ChannelBinding*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChannelBinding> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChannelBinding*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<ChannelBinding*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChannelBinding> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChannelBinding*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<ChannelBinding*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChannelBinding> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChannelBinding*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<ChannelBinding*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChannelBinding> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChannelBinding*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<ChannelBinding*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChannelBinding> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChannelBinding*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<ChannelBinding*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChannelBinding> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChannelBinding*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<ChannelBinding*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChannelBinding> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChannelBinding*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<ChannelBinding*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChannelBinding> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChannelBinding*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<ChannelBinding*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChannelBinding> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChannelBinding*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<ChannelBinding*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChannelBinding> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChannelBinding*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<ChannelBinding*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChannelBinding> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChannelBinding*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<ChannelBinding*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChannelBinding> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChannelBinding*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<ChannelBinding*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChannelBinding> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChannelBinding*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<ChannelBinding*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChannelBinding> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChannelBinding*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<ChannelBinding*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChannelBinding> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChannelBinding*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<ChannelBinding*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChannelBinding> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChannelBinding*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<ChannelBinding*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChannelBinding> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChannelBinding*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<ChannelBinding*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChannelBinding> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChannelBinding*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<ChannelBinding*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class ChannelBinding : virtual public ::IceDelegate::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*) = 0;

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::RenderingDefPtr getRenderingDef(const ::Ice::Context*) = 0;

    virtual void setRenderingDef(const ::omero::model::RenderingDefPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::FamilyPtr getFamily(const ::Ice::Context*) = 0;

    virtual void setFamily(const ::omero::model::FamilyPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RDoublePtr getCoefficient(const ::Ice::Context*) = 0;

    virtual void setCoefficient(const ::omero::RDoublePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RDoublePtr getInputStart(const ::Ice::Context*) = 0;

    virtual void setInputStart(const ::omero::RDoublePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RDoublePtr getInputEnd(const ::Ice::Context*) = 0;

    virtual void setInputEnd(const ::omero::RDoublePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RBoolPtr getActive(const ::Ice::Context*) = 0;

    virtual void setActive(const ::omero::RBoolPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RBoolPtr getNoiseReduction(const ::Ice::Context*) = 0;

    virtual void setNoiseReduction(const ::omero::RBoolPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RIntPtr getRed(const ::Ice::Context*) = 0;

    virtual void setRed(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RIntPtr getGreen(const ::Ice::Context*) = 0;

    virtual void setGreen(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RIntPtr getBlue(const ::Ice::Context*) = 0;

    virtual void setBlue(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RIntPtr getAlpha(const ::Ice::Context*) = 0;

    virtual void setAlpha(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;
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

class ChannelBinding : virtual public ::IceDelegate::omero::model::ChannelBinding,
                       virtual public ::IceDelegateM::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::model::RenderingDefPtr getRenderingDef(const ::Ice::Context*);

    virtual void setRenderingDef(const ::omero::model::RenderingDefPtr&, const ::Ice::Context*);

    virtual ::omero::model::FamilyPtr getFamily(const ::Ice::Context*);

    virtual void setFamily(const ::omero::model::FamilyPtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getCoefficient(const ::Ice::Context*);

    virtual void setCoefficient(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getInputStart(const ::Ice::Context*);

    virtual void setInputStart(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getInputEnd(const ::Ice::Context*);

    virtual void setInputEnd(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::RBoolPtr getActive(const ::Ice::Context*);

    virtual void setActive(const ::omero::RBoolPtr&, const ::Ice::Context*);

    virtual ::omero::RBoolPtr getNoiseReduction(const ::Ice::Context*);

    virtual void setNoiseReduction(const ::omero::RBoolPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getRed(const ::Ice::Context*);

    virtual void setRed(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getGreen(const ::Ice::Context*);

    virtual void setGreen(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getBlue(const ::Ice::Context*);

    virtual void setBlue(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getAlpha(const ::Ice::Context*);

    virtual void setAlpha(const ::omero::RIntPtr&, const ::Ice::Context*);
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

class ChannelBinding : virtual public ::IceDelegate::omero::model::ChannelBinding,
                       virtual public ::IceDelegateD::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::model::RenderingDefPtr getRenderingDef(const ::Ice::Context*);

    virtual void setRenderingDef(const ::omero::model::RenderingDefPtr&, const ::Ice::Context*);

    virtual ::omero::model::FamilyPtr getFamily(const ::Ice::Context*);

    virtual void setFamily(const ::omero::model::FamilyPtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getCoefficient(const ::Ice::Context*);

    virtual void setCoefficient(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getInputStart(const ::Ice::Context*);

    virtual void setInputStart(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getInputEnd(const ::Ice::Context*);

    virtual void setInputEnd(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::RBoolPtr getActive(const ::Ice::Context*);

    virtual void setActive(const ::omero::RBoolPtr&, const ::Ice::Context*);

    virtual ::omero::RBoolPtr getNoiseReduction(const ::Ice::Context*);

    virtual void setNoiseReduction(const ::omero::RBoolPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getRed(const ::Ice::Context*);

    virtual void setRed(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getGreen(const ::Ice::Context*);

    virtual void setGreen(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getBlue(const ::Ice::Context*);

    virtual void setBlue(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getAlpha(const ::Ice::Context*);

    virtual void setAlpha(const ::omero::RIntPtr&, const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace model
{

class ChannelBinding : virtual public ::omero::model::IObject
{
public:

    typedef ChannelBindingPrx ProxyType;
    typedef ChannelBindingPtr PointerType;
    
    ChannelBinding() {}
    ChannelBinding(const ::omero::RLongPtr&, const ::omero::model::DetailsPtr&, bool, const ::omero::RIntPtr&, const ::omero::model::RenderingDefPtr&, const ::omero::model::FamilyPtr&, const ::omero::RDoublePtr&, const ::omero::RDoublePtr&, const ::omero::RDoublePtr&, const ::omero::RBoolPtr&, const ::omero::RBoolPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&);
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

    virtual ::omero::model::RenderingDefPtr getRenderingDef(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getRenderingDef(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setRenderingDef(const ::omero::model::RenderingDefPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setRenderingDef(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::FamilyPtr getFamily(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getFamily(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setFamily(const ::omero::model::FamilyPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setFamily(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RDoublePtr getCoefficient(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getCoefficient(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setCoefficient(const ::omero::RDoublePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setCoefficient(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RDoublePtr getInputStart(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getInputStart(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setInputStart(const ::omero::RDoublePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setInputStart(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RDoublePtr getInputEnd(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getInputEnd(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setInputEnd(const ::omero::RDoublePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setInputEnd(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RBoolPtr getActive(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getActive(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setActive(const ::omero::RBoolPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setActive(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RBoolPtr getNoiseReduction(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getNoiseReduction(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setNoiseReduction(const ::omero::RBoolPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setNoiseReduction(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RIntPtr getRed(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getRed(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setRed(const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setRed(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RIntPtr getGreen(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getGreen(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setGreen(const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setGreen(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RIntPtr getBlue(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getBlue(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setBlue(const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setBlue(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RIntPtr getAlpha(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getAlpha(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setAlpha(const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setAlpha(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

protected:

    ::omero::RIntPtr version;

    ::omero::model::RenderingDefPtr renderingDef;

    ::omero::model::FamilyPtr family;

    ::omero::RDoublePtr coefficient;

    ::omero::RDoublePtr inputStart;

    ::omero::RDoublePtr inputEnd;

    ::omero::RBoolPtr active;

    ::omero::RBoolPtr noiseReduction;

    ::omero::RIntPtr red;

    ::omero::RIntPtr green;

    ::omero::RIntPtr blue;

    ::omero::RIntPtr alpha;
};

}

}

#endif
