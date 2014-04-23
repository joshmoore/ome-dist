// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `PlaneSlicingContext.ice'

#ifndef __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_PlaneSlicingContext_h__
#define __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_PlaneSlicingContext_h__

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
#include <omero/model/CodomainMapContext.h>
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

class Details;

class PlaneSlicingContext;

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

class Details;
bool operator==(const Details&, const Details&);
bool operator<(const Details&, const Details&);

class PlaneSlicingContext;
bool operator==(const PlaneSlicingContext&, const PlaneSlicingContext&);
bool operator<(const PlaneSlicingContext&, const PlaneSlicingContext&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::model::RenderingDef*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::RenderingDef*);

::Ice::Object* upCast(::omero::model::Details*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Details*);

::Ice::Object* upCast(::omero::model::PlaneSlicingContext*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::PlaneSlicingContext*);

}

namespace omero
{

namespace model
{

typedef ::IceInternal::Handle< ::omero::model::RenderingDef> RenderingDefPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::RenderingDef> RenderingDefPrx;

void __read(::IceInternal::BasicStream*, RenderingDefPrx&);
void __patch__RenderingDefPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Details> DetailsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Details> DetailsPrx;

void __read(::IceInternal::BasicStream*, DetailsPrx&);
void __patch__DetailsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::PlaneSlicingContext> PlaneSlicingContextPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::PlaneSlicingContext> PlaneSlicingContextPrx;

void __read(::IceInternal::BasicStream*, PlaneSlicingContextPrx&);
void __patch__PlaneSlicingContextPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace IceProxy
{

namespace omero
{

namespace model
{

class PlaneSlicingContext : virtual public ::IceProxy::omero::model::CodomainMapContext
{
public:

    ::omero::RIntPtr getUpperLimit()
    {
        return getUpperLimit(0);
    }
    ::omero::RIntPtr getUpperLimit(const ::Ice::Context& __ctx)
    {
        return getUpperLimit(&__ctx);
    }
    
private:

    ::omero::RIntPtr getUpperLimit(const ::Ice::Context*);
    
public:

    void setUpperLimit(const ::omero::RIntPtr& theUpperLimit)
    {
        setUpperLimit(theUpperLimit, 0);
    }
    void setUpperLimit(const ::omero::RIntPtr& theUpperLimit, const ::Ice::Context& __ctx)
    {
        setUpperLimit(theUpperLimit, &__ctx);
    }
    
private:

    void setUpperLimit(const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:

    ::omero::RIntPtr getLowerLimit()
    {
        return getLowerLimit(0);
    }
    ::omero::RIntPtr getLowerLimit(const ::Ice::Context& __ctx)
    {
        return getLowerLimit(&__ctx);
    }
    
private:

    ::omero::RIntPtr getLowerLimit(const ::Ice::Context*);
    
public:

    void setLowerLimit(const ::omero::RIntPtr& theLowerLimit)
    {
        setLowerLimit(theLowerLimit, 0);
    }
    void setLowerLimit(const ::omero::RIntPtr& theLowerLimit, const ::Ice::Context& __ctx)
    {
        setLowerLimit(theLowerLimit, &__ctx);
    }
    
private:

    void setLowerLimit(const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:

    ::omero::RIntPtr getPlaneSelected()
    {
        return getPlaneSelected(0);
    }
    ::omero::RIntPtr getPlaneSelected(const ::Ice::Context& __ctx)
    {
        return getPlaneSelected(&__ctx);
    }
    
private:

    ::omero::RIntPtr getPlaneSelected(const ::Ice::Context*);
    
public:

    void setPlaneSelected(const ::omero::RIntPtr& thePlaneSelected)
    {
        setPlaneSelected(thePlaneSelected, 0);
    }
    void setPlaneSelected(const ::omero::RIntPtr& thePlaneSelected, const ::Ice::Context& __ctx)
    {
        setPlaneSelected(thePlaneSelected, &__ctx);
    }
    
private:

    void setPlaneSelected(const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:

    ::omero::RIntPtr getPlanePrevious()
    {
        return getPlanePrevious(0);
    }
    ::omero::RIntPtr getPlanePrevious(const ::Ice::Context& __ctx)
    {
        return getPlanePrevious(&__ctx);
    }
    
private:

    ::omero::RIntPtr getPlanePrevious(const ::Ice::Context*);
    
public:

    void setPlanePrevious(const ::omero::RIntPtr& thePlanePrevious)
    {
        setPlanePrevious(thePlanePrevious, 0);
    }
    void setPlanePrevious(const ::omero::RIntPtr& thePlanePrevious, const ::Ice::Context& __ctx)
    {
        setPlanePrevious(thePlanePrevious, &__ctx);
    }
    
private:

    void setPlanePrevious(const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:

    ::omero::RBoolPtr getConstant()
    {
        return getConstant(0);
    }
    ::omero::RBoolPtr getConstant(const ::Ice::Context& __ctx)
    {
        return getConstant(&__ctx);
    }
    
private:

    ::omero::RBoolPtr getConstant(const ::Ice::Context*);
    
public:

    void setConstant(const ::omero::RBoolPtr& theConstant)
    {
        setConstant(theConstant, 0);
    }
    void setConstant(const ::omero::RBoolPtr& theConstant, const ::Ice::Context& __ctx)
    {
        setConstant(theConstant, &__ctx);
    }
    
private:

    void setConstant(const ::omero::RBoolPtr&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<PlaneSlicingContext> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlaneSlicingContext*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<PlaneSlicingContext*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlaneSlicingContext> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlaneSlicingContext*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<PlaneSlicingContext*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlaneSlicingContext> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlaneSlicingContext*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<PlaneSlicingContext*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlaneSlicingContext> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlaneSlicingContext*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<PlaneSlicingContext*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlaneSlicingContext> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlaneSlicingContext*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<PlaneSlicingContext*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlaneSlicingContext> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlaneSlicingContext*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<PlaneSlicingContext*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlaneSlicingContext> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlaneSlicingContext*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<PlaneSlicingContext*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlaneSlicingContext> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlaneSlicingContext*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<PlaneSlicingContext*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlaneSlicingContext> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlaneSlicingContext*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<PlaneSlicingContext*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlaneSlicingContext> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlaneSlicingContext*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<PlaneSlicingContext*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlaneSlicingContext> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlaneSlicingContext*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<PlaneSlicingContext*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlaneSlicingContext> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlaneSlicingContext*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<PlaneSlicingContext*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlaneSlicingContext> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlaneSlicingContext*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<PlaneSlicingContext*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlaneSlicingContext> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlaneSlicingContext*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<PlaneSlicingContext*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlaneSlicingContext> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlaneSlicingContext*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<PlaneSlicingContext*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlaneSlicingContext> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlaneSlicingContext*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<PlaneSlicingContext*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlaneSlicingContext> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlaneSlicingContext*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<PlaneSlicingContext*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlaneSlicingContext> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlaneSlicingContext*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<PlaneSlicingContext*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlaneSlicingContext> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlaneSlicingContext*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<PlaneSlicingContext*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class PlaneSlicingContext : virtual public ::IceDelegate::omero::model::CodomainMapContext
{
public:

    virtual ::omero::RIntPtr getUpperLimit(const ::Ice::Context*) = 0;

    virtual void setUpperLimit(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RIntPtr getLowerLimit(const ::Ice::Context*) = 0;

    virtual void setLowerLimit(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RIntPtr getPlaneSelected(const ::Ice::Context*) = 0;

    virtual void setPlaneSelected(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RIntPtr getPlanePrevious(const ::Ice::Context*) = 0;

    virtual void setPlanePrevious(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RBoolPtr getConstant(const ::Ice::Context*) = 0;

    virtual void setConstant(const ::omero::RBoolPtr&, const ::Ice::Context*) = 0;
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

class PlaneSlicingContext : virtual public ::IceDelegate::omero::model::PlaneSlicingContext,
                            virtual public ::IceDelegateM::omero::model::CodomainMapContext
{
public:

    virtual ::omero::RIntPtr getUpperLimit(const ::Ice::Context*);

    virtual void setUpperLimit(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getLowerLimit(const ::Ice::Context*);

    virtual void setLowerLimit(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getPlaneSelected(const ::Ice::Context*);

    virtual void setPlaneSelected(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getPlanePrevious(const ::Ice::Context*);

    virtual void setPlanePrevious(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RBoolPtr getConstant(const ::Ice::Context*);

    virtual void setConstant(const ::omero::RBoolPtr&, const ::Ice::Context*);
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

class PlaneSlicingContext : virtual public ::IceDelegate::omero::model::PlaneSlicingContext,
                            virtual public ::IceDelegateD::omero::model::CodomainMapContext
{
public:

    virtual ::omero::RIntPtr getUpperLimit(const ::Ice::Context*);

    virtual void setUpperLimit(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getLowerLimit(const ::Ice::Context*);

    virtual void setLowerLimit(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getPlaneSelected(const ::Ice::Context*);

    virtual void setPlaneSelected(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getPlanePrevious(const ::Ice::Context*);

    virtual void setPlanePrevious(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RBoolPtr getConstant(const ::Ice::Context*);

    virtual void setConstant(const ::omero::RBoolPtr&, const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace model
{

class PlaneSlicingContext : virtual public ::omero::model::CodomainMapContext
{
public:

    typedef PlaneSlicingContextPrx ProxyType;
    typedef PlaneSlicingContextPtr PointerType;
    
    PlaneSlicingContext() {}
    PlaneSlicingContext(const ::omero::RLongPtr&, const ::omero::model::DetailsPtr&, bool, const ::omero::RIntPtr&, const ::omero::model::RenderingDefPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RBoolPtr&);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void __gcReachable(::IceInternal::GCCountMap&) const;
    virtual void __gcClear();

    virtual ::omero::RIntPtr getUpperLimit(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getUpperLimit(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setUpperLimit(const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setUpperLimit(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RIntPtr getLowerLimit(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getLowerLimit(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setLowerLimit(const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setLowerLimit(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RIntPtr getPlaneSelected(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getPlaneSelected(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setPlaneSelected(const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setPlaneSelected(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RIntPtr getPlanePrevious(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getPlanePrevious(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setPlanePrevious(const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setPlanePrevious(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RBoolPtr getConstant(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getConstant(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setConstant(const ::omero::RBoolPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setConstant(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

protected:

    ::omero::RIntPtr upperLimit;

    ::omero::RIntPtr lowerLimit;

    ::omero::RIntPtr planeSelected;

    ::omero::RIntPtr planePrevious;

    ::omero::RBoolPtr constant;
};

}

}

#endif
