// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `TransmittanceRange.ice'

#ifndef __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_TransmittanceRange_h__
#define __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_TransmittanceRange_h__

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

class TransmittanceRange;

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

class TransmittanceRange;
bool operator==(const TransmittanceRange&, const TransmittanceRange&);
bool operator<(const TransmittanceRange&, const TransmittanceRange&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::model::Details*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Details*);

::Ice::Object* upCast(::omero::model::TransmittanceRange*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::TransmittanceRange*);

}

namespace omero
{

namespace model
{

typedef ::IceInternal::Handle< ::omero::model::Details> DetailsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Details> DetailsPrx;

void __read(::IceInternal::BasicStream*, DetailsPrx&);
void __patch__DetailsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::TransmittanceRange> TransmittanceRangePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::TransmittanceRange> TransmittanceRangePrx;

void __read(::IceInternal::BasicStream*, TransmittanceRangePrx&);
void __patch__TransmittanceRangePtr(void*, ::Ice::ObjectPtr&);

}

}

namespace IceProxy
{

namespace omero
{

namespace model
{

class TransmittanceRange : virtual public ::IceProxy::omero::model::IObject
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

    ::omero::RIntPtr getCutIn()
    {
        return getCutIn(0);
    }
    ::omero::RIntPtr getCutIn(const ::Ice::Context& __ctx)
    {
        return getCutIn(&__ctx);
    }
    
private:

    ::omero::RIntPtr getCutIn(const ::Ice::Context*);
    
public:

    void setCutIn(const ::omero::RIntPtr& theCutIn)
    {
        setCutIn(theCutIn, 0);
    }
    void setCutIn(const ::omero::RIntPtr& theCutIn, const ::Ice::Context& __ctx)
    {
        setCutIn(theCutIn, &__ctx);
    }
    
private:

    void setCutIn(const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:

    ::omero::RIntPtr getCutOut()
    {
        return getCutOut(0);
    }
    ::omero::RIntPtr getCutOut(const ::Ice::Context& __ctx)
    {
        return getCutOut(&__ctx);
    }
    
private:

    ::omero::RIntPtr getCutOut(const ::Ice::Context*);
    
public:

    void setCutOut(const ::omero::RIntPtr& theCutOut)
    {
        setCutOut(theCutOut, 0);
    }
    void setCutOut(const ::omero::RIntPtr& theCutOut, const ::Ice::Context& __ctx)
    {
        setCutOut(theCutOut, &__ctx);
    }
    
private:

    void setCutOut(const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:

    ::omero::RIntPtr getCutInTolerance()
    {
        return getCutInTolerance(0);
    }
    ::omero::RIntPtr getCutInTolerance(const ::Ice::Context& __ctx)
    {
        return getCutInTolerance(&__ctx);
    }
    
private:

    ::omero::RIntPtr getCutInTolerance(const ::Ice::Context*);
    
public:

    void setCutInTolerance(const ::omero::RIntPtr& theCutInTolerance)
    {
        setCutInTolerance(theCutInTolerance, 0);
    }
    void setCutInTolerance(const ::omero::RIntPtr& theCutInTolerance, const ::Ice::Context& __ctx)
    {
        setCutInTolerance(theCutInTolerance, &__ctx);
    }
    
private:

    void setCutInTolerance(const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:

    ::omero::RIntPtr getCutOutTolerance()
    {
        return getCutOutTolerance(0);
    }
    ::omero::RIntPtr getCutOutTolerance(const ::Ice::Context& __ctx)
    {
        return getCutOutTolerance(&__ctx);
    }
    
private:

    ::omero::RIntPtr getCutOutTolerance(const ::Ice::Context*);
    
public:

    void setCutOutTolerance(const ::omero::RIntPtr& theCutOutTolerance)
    {
        setCutOutTolerance(theCutOutTolerance, 0);
    }
    void setCutOutTolerance(const ::omero::RIntPtr& theCutOutTolerance, const ::Ice::Context& __ctx)
    {
        setCutOutTolerance(theCutOutTolerance, &__ctx);
    }
    
private:

    void setCutOutTolerance(const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:

    ::omero::RDoublePtr getTransmittance()
    {
        return getTransmittance(0);
    }
    ::omero::RDoublePtr getTransmittance(const ::Ice::Context& __ctx)
    {
        return getTransmittance(&__ctx);
    }
    
private:

    ::omero::RDoublePtr getTransmittance(const ::Ice::Context*);
    
public:

    void setTransmittance(const ::omero::RDoublePtr& theTransmittance)
    {
        setTransmittance(theTransmittance, 0);
    }
    void setTransmittance(const ::omero::RDoublePtr& theTransmittance, const ::Ice::Context& __ctx)
    {
        setTransmittance(theTransmittance, &__ctx);
    }
    
private:

    void setTransmittance(const ::omero::RDoublePtr&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<TransmittanceRange> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<TransmittanceRange*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<TransmittanceRange*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<TransmittanceRange> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<TransmittanceRange*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<TransmittanceRange*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<TransmittanceRange> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<TransmittanceRange*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<TransmittanceRange*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<TransmittanceRange> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<TransmittanceRange*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<TransmittanceRange*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<TransmittanceRange> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<TransmittanceRange*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<TransmittanceRange*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<TransmittanceRange> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<TransmittanceRange*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<TransmittanceRange*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<TransmittanceRange> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<TransmittanceRange*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<TransmittanceRange*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<TransmittanceRange> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<TransmittanceRange*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<TransmittanceRange*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<TransmittanceRange> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<TransmittanceRange*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<TransmittanceRange*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<TransmittanceRange> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<TransmittanceRange*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<TransmittanceRange*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<TransmittanceRange> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<TransmittanceRange*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<TransmittanceRange*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<TransmittanceRange> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<TransmittanceRange*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<TransmittanceRange*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<TransmittanceRange> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<TransmittanceRange*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<TransmittanceRange*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<TransmittanceRange> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<TransmittanceRange*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<TransmittanceRange*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<TransmittanceRange> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<TransmittanceRange*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<TransmittanceRange*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<TransmittanceRange> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<TransmittanceRange*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<TransmittanceRange*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<TransmittanceRange> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<TransmittanceRange*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<TransmittanceRange*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<TransmittanceRange> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<TransmittanceRange*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<TransmittanceRange*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<TransmittanceRange> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<TransmittanceRange*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<TransmittanceRange*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class TransmittanceRange : virtual public ::IceDelegate::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*) = 0;

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RIntPtr getCutIn(const ::Ice::Context*) = 0;

    virtual void setCutIn(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RIntPtr getCutOut(const ::Ice::Context*) = 0;

    virtual void setCutOut(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RIntPtr getCutInTolerance(const ::Ice::Context*) = 0;

    virtual void setCutInTolerance(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RIntPtr getCutOutTolerance(const ::Ice::Context*) = 0;

    virtual void setCutOutTolerance(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RDoublePtr getTransmittance(const ::Ice::Context*) = 0;

    virtual void setTransmittance(const ::omero::RDoublePtr&, const ::Ice::Context*) = 0;
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

class TransmittanceRange : virtual public ::IceDelegate::omero::model::TransmittanceRange,
                           virtual public ::IceDelegateM::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getCutIn(const ::Ice::Context*);

    virtual void setCutIn(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getCutOut(const ::Ice::Context*);

    virtual void setCutOut(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getCutInTolerance(const ::Ice::Context*);

    virtual void setCutInTolerance(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getCutOutTolerance(const ::Ice::Context*);

    virtual void setCutOutTolerance(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getTransmittance(const ::Ice::Context*);

    virtual void setTransmittance(const ::omero::RDoublePtr&, const ::Ice::Context*);
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

class TransmittanceRange : virtual public ::IceDelegate::omero::model::TransmittanceRange,
                           virtual public ::IceDelegateD::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getCutIn(const ::Ice::Context*);

    virtual void setCutIn(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getCutOut(const ::Ice::Context*);

    virtual void setCutOut(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getCutInTolerance(const ::Ice::Context*);

    virtual void setCutInTolerance(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getCutOutTolerance(const ::Ice::Context*);

    virtual void setCutOutTolerance(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getTransmittance(const ::Ice::Context*);

    virtual void setTransmittance(const ::omero::RDoublePtr&, const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace model
{

class TransmittanceRange : virtual public ::omero::model::IObject
{
public:

    typedef TransmittanceRangePrx ProxyType;
    typedef TransmittanceRangePtr PointerType;
    
    TransmittanceRange() {}
    TransmittanceRange(const ::omero::RLongPtr&, const ::omero::model::DetailsPtr&, bool, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RDoublePtr&);
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

    virtual ::omero::RIntPtr getCutIn(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getCutIn(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setCutIn(const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setCutIn(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RIntPtr getCutOut(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getCutOut(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setCutOut(const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setCutOut(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RIntPtr getCutInTolerance(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getCutInTolerance(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setCutInTolerance(const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setCutInTolerance(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RIntPtr getCutOutTolerance(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getCutOutTolerance(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setCutOutTolerance(const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setCutOutTolerance(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RDoublePtr getTransmittance(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getTransmittance(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setTransmittance(const ::omero::RDoublePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setTransmittance(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

protected:

    ::omero::RIntPtr version;

    ::omero::RIntPtr cutIn;

    ::omero::RIntPtr cutOut;

    ::omero::RIntPtr cutInTolerance;

    ::omero::RIntPtr cutOutTolerance;

    ::omero::RDoublePtr transmittance;
};

}

}

#endif
