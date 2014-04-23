// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `QuantumDef.ice'

#ifndef __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_QuantumDef_h__
#define __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_QuantumDef_h__

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

class Details;

class QuantumDef;

}

}

}

namespace omero
{

namespace model
{

class Details;
bool operator==(const Details&, const Details&);
bool operator<(const Details&, const Details&);

class QuantumDef;
bool operator==(const QuantumDef&, const QuantumDef&);
bool operator<(const QuantumDef&, const QuantumDef&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::model::Details*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Details*);

::Ice::Object* upCast(::omero::model::QuantumDef*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::QuantumDef*);

}

namespace omero
{

namespace model
{

typedef ::IceInternal::Handle< ::omero::model::Details> DetailsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Details> DetailsPrx;

void __read(::IceInternal::BasicStream*, DetailsPrx&);
void __patch__DetailsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::QuantumDef> QuantumDefPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::QuantumDef> QuantumDefPrx;

void __read(::IceInternal::BasicStream*, QuantumDefPrx&);
void __patch__QuantumDefPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace IceProxy
{

namespace omero
{

namespace model
{

class QuantumDef : virtual public ::IceProxy::omero::model::IObject
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

    ::omero::RIntPtr getCdStart()
    {
        return getCdStart(0);
    }
    ::omero::RIntPtr getCdStart(const ::Ice::Context& __ctx)
    {
        return getCdStart(&__ctx);
    }
    
private:

    ::omero::RIntPtr getCdStart(const ::Ice::Context*);
    
public:

    void setCdStart(const ::omero::RIntPtr& theCdStart)
    {
        setCdStart(theCdStart, 0);
    }
    void setCdStart(const ::omero::RIntPtr& theCdStart, const ::Ice::Context& __ctx)
    {
        setCdStart(theCdStart, &__ctx);
    }
    
private:

    void setCdStart(const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:

    ::omero::RIntPtr getCdEnd()
    {
        return getCdEnd(0);
    }
    ::omero::RIntPtr getCdEnd(const ::Ice::Context& __ctx)
    {
        return getCdEnd(&__ctx);
    }
    
private:

    ::omero::RIntPtr getCdEnd(const ::Ice::Context*);
    
public:

    void setCdEnd(const ::omero::RIntPtr& theCdEnd)
    {
        setCdEnd(theCdEnd, 0);
    }
    void setCdEnd(const ::omero::RIntPtr& theCdEnd, const ::Ice::Context& __ctx)
    {
        setCdEnd(theCdEnd, &__ctx);
    }
    
private:

    void setCdEnd(const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:

    ::omero::RIntPtr getBitResolution()
    {
        return getBitResolution(0);
    }
    ::omero::RIntPtr getBitResolution(const ::Ice::Context& __ctx)
    {
        return getBitResolution(&__ctx);
    }
    
private:

    ::omero::RIntPtr getBitResolution(const ::Ice::Context*);
    
public:

    void setBitResolution(const ::omero::RIntPtr& theBitResolution)
    {
        setBitResolution(theBitResolution, 0);
    }
    void setBitResolution(const ::omero::RIntPtr& theBitResolution, const ::Ice::Context& __ctx)
    {
        setBitResolution(theBitResolution, &__ctx);
    }
    
private:

    void setBitResolution(const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<QuantumDef> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<QuantumDef*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<QuantumDef*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<QuantumDef> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<QuantumDef*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<QuantumDef*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<QuantumDef> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<QuantumDef*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<QuantumDef*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<QuantumDef> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<QuantumDef*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<QuantumDef*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<QuantumDef> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<QuantumDef*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<QuantumDef*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<QuantumDef> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<QuantumDef*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<QuantumDef*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<QuantumDef> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<QuantumDef*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<QuantumDef*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<QuantumDef> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<QuantumDef*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<QuantumDef*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<QuantumDef> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<QuantumDef*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<QuantumDef*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<QuantumDef> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<QuantumDef*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<QuantumDef*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<QuantumDef> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<QuantumDef*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<QuantumDef*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<QuantumDef> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<QuantumDef*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<QuantumDef*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<QuantumDef> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<QuantumDef*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<QuantumDef*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<QuantumDef> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<QuantumDef*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<QuantumDef*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<QuantumDef> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<QuantumDef*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<QuantumDef*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<QuantumDef> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<QuantumDef*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<QuantumDef*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<QuantumDef> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<QuantumDef*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<QuantumDef*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<QuantumDef> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<QuantumDef*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<QuantumDef*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<QuantumDef> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<QuantumDef*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<QuantumDef*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class QuantumDef : virtual public ::IceDelegate::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*) = 0;

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RIntPtr getCdStart(const ::Ice::Context*) = 0;

    virtual void setCdStart(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RIntPtr getCdEnd(const ::Ice::Context*) = 0;

    virtual void setCdEnd(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RIntPtr getBitResolution(const ::Ice::Context*) = 0;

    virtual void setBitResolution(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;
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

class QuantumDef : virtual public ::IceDelegate::omero::model::QuantumDef,
                   virtual public ::IceDelegateM::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getCdStart(const ::Ice::Context*);

    virtual void setCdStart(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getCdEnd(const ::Ice::Context*);

    virtual void setCdEnd(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getBitResolution(const ::Ice::Context*);

    virtual void setBitResolution(const ::omero::RIntPtr&, const ::Ice::Context*);
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

class QuantumDef : virtual public ::IceDelegate::omero::model::QuantumDef,
                   virtual public ::IceDelegateD::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getCdStart(const ::Ice::Context*);

    virtual void setCdStart(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getCdEnd(const ::Ice::Context*);

    virtual void setCdEnd(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getBitResolution(const ::Ice::Context*);

    virtual void setBitResolution(const ::omero::RIntPtr&, const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace model
{

class QuantumDef : virtual public ::omero::model::IObject
{
public:

    typedef QuantumDefPrx ProxyType;
    typedef QuantumDefPtr PointerType;
    
    QuantumDef() {}
    QuantumDef(const ::omero::RLongPtr&, const ::omero::model::DetailsPtr&, bool, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&);
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

    virtual ::omero::RIntPtr getCdStart(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getCdStart(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setCdStart(const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setCdStart(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RIntPtr getCdEnd(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getCdEnd(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setCdEnd(const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setCdEnd(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RIntPtr getBitResolution(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getBitResolution(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setBitResolution(const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setBitResolution(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

protected:

    ::omero::RIntPtr version;

    ::omero::RIntPtr cdStart;

    ::omero::RIntPtr cdEnd;

    ::omero::RIntPtr bitResolution;
};

}

}

#endif
