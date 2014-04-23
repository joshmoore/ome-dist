// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `ReverseIntensityContext.ice'

#ifndef __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_ReverseIntensityContext_h__
#define __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_ReverseIntensityContext_h__

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

class ReverseIntensityContext;

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

class ReverseIntensityContext;
bool operator==(const ReverseIntensityContext&, const ReverseIntensityContext&);
bool operator<(const ReverseIntensityContext&, const ReverseIntensityContext&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::model::RenderingDef*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::RenderingDef*);

::Ice::Object* upCast(::omero::model::Details*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Details*);

::Ice::Object* upCast(::omero::model::ReverseIntensityContext*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::ReverseIntensityContext*);

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

typedef ::IceInternal::Handle< ::omero::model::ReverseIntensityContext> ReverseIntensityContextPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::ReverseIntensityContext> ReverseIntensityContextPrx;

void __read(::IceInternal::BasicStream*, ReverseIntensityContextPrx&);
void __patch__ReverseIntensityContextPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace IceProxy
{

namespace omero
{

namespace model
{

class ReverseIntensityContext : virtual public ::IceProxy::omero::model::CodomainMapContext
{
public:

    ::omero::RBoolPtr getReverse()
    {
        return getReverse(0);
    }
    ::omero::RBoolPtr getReverse(const ::Ice::Context& __ctx)
    {
        return getReverse(&__ctx);
    }
    
private:

    ::omero::RBoolPtr getReverse(const ::Ice::Context*);
    
public:

    void setReverse(const ::omero::RBoolPtr& theReverse)
    {
        setReverse(theReverse, 0);
    }
    void setReverse(const ::omero::RBoolPtr& theReverse, const ::Ice::Context& __ctx)
    {
        setReverse(theReverse, &__ctx);
    }
    
private:

    void setReverse(const ::omero::RBoolPtr&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<ReverseIntensityContext> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ReverseIntensityContext*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<ReverseIntensityContext*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ReverseIntensityContext> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ReverseIntensityContext*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<ReverseIntensityContext*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ReverseIntensityContext> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ReverseIntensityContext*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<ReverseIntensityContext*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ReverseIntensityContext> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ReverseIntensityContext*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<ReverseIntensityContext*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ReverseIntensityContext> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ReverseIntensityContext*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<ReverseIntensityContext*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ReverseIntensityContext> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ReverseIntensityContext*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<ReverseIntensityContext*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ReverseIntensityContext> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ReverseIntensityContext*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<ReverseIntensityContext*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ReverseIntensityContext> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ReverseIntensityContext*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<ReverseIntensityContext*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ReverseIntensityContext> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ReverseIntensityContext*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<ReverseIntensityContext*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ReverseIntensityContext> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ReverseIntensityContext*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<ReverseIntensityContext*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ReverseIntensityContext> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ReverseIntensityContext*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<ReverseIntensityContext*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ReverseIntensityContext> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ReverseIntensityContext*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<ReverseIntensityContext*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ReverseIntensityContext> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ReverseIntensityContext*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<ReverseIntensityContext*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ReverseIntensityContext> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ReverseIntensityContext*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<ReverseIntensityContext*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ReverseIntensityContext> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ReverseIntensityContext*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<ReverseIntensityContext*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ReverseIntensityContext> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ReverseIntensityContext*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<ReverseIntensityContext*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ReverseIntensityContext> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ReverseIntensityContext*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<ReverseIntensityContext*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ReverseIntensityContext> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ReverseIntensityContext*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<ReverseIntensityContext*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ReverseIntensityContext> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ReverseIntensityContext*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<ReverseIntensityContext*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class ReverseIntensityContext : virtual public ::IceDelegate::omero::model::CodomainMapContext
{
public:

    virtual ::omero::RBoolPtr getReverse(const ::Ice::Context*) = 0;

    virtual void setReverse(const ::omero::RBoolPtr&, const ::Ice::Context*) = 0;
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

class ReverseIntensityContext : virtual public ::IceDelegate::omero::model::ReverseIntensityContext,
                                virtual public ::IceDelegateM::omero::model::CodomainMapContext
{
public:

    virtual ::omero::RBoolPtr getReverse(const ::Ice::Context*);

    virtual void setReverse(const ::omero::RBoolPtr&, const ::Ice::Context*);
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

class ReverseIntensityContext : virtual public ::IceDelegate::omero::model::ReverseIntensityContext,
                                virtual public ::IceDelegateD::omero::model::CodomainMapContext
{
public:

    virtual ::omero::RBoolPtr getReverse(const ::Ice::Context*);

    virtual void setReverse(const ::omero::RBoolPtr&, const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace model
{

class ReverseIntensityContext : virtual public ::omero::model::CodomainMapContext
{
public:

    typedef ReverseIntensityContextPrx ProxyType;
    typedef ReverseIntensityContextPtr PointerType;
    
    ReverseIntensityContext() {}
    ReverseIntensityContext(const ::omero::RLongPtr&, const ::omero::model::DetailsPtr&, bool, const ::omero::RIntPtr&, const ::omero::model::RenderingDefPtr&, const ::omero::RBoolPtr&);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void __gcReachable(::IceInternal::GCCountMap&) const;
    virtual void __gcClear();

    virtual ::omero::RBoolPtr getReverse(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getReverse(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setReverse(const ::omero::RBoolPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setReverse(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

protected:

    ::omero::RBoolPtr reverse;
};

}

}

#endif
