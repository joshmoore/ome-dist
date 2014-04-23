// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `ImagingEnvironment.ice'

#ifndef __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_ImagingEnvironment_h__
#define __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_ImagingEnvironment_h__

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

class ImagingEnvironment;

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

class ImagingEnvironment;
bool operator==(const ImagingEnvironment&, const ImagingEnvironment&);
bool operator<(const ImagingEnvironment&, const ImagingEnvironment&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::model::Details*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Details*);

::Ice::Object* upCast(::omero::model::ImagingEnvironment*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::ImagingEnvironment*);

}

namespace omero
{

namespace model
{

typedef ::IceInternal::Handle< ::omero::model::Details> DetailsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Details> DetailsPrx;

void __read(::IceInternal::BasicStream*, DetailsPrx&);
void __patch__DetailsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::ImagingEnvironment> ImagingEnvironmentPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::ImagingEnvironment> ImagingEnvironmentPrx;

void __read(::IceInternal::BasicStream*, ImagingEnvironmentPrx&);
void __patch__ImagingEnvironmentPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace IceProxy
{

namespace omero
{

namespace model
{

class ImagingEnvironment : virtual public ::IceProxy::omero::model::IObject
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

    ::omero::RDoublePtr getTemperature()
    {
        return getTemperature(0);
    }
    ::omero::RDoublePtr getTemperature(const ::Ice::Context& __ctx)
    {
        return getTemperature(&__ctx);
    }
    
private:

    ::omero::RDoublePtr getTemperature(const ::Ice::Context*);
    
public:

    void setTemperature(const ::omero::RDoublePtr& theTemperature)
    {
        setTemperature(theTemperature, 0);
    }
    void setTemperature(const ::omero::RDoublePtr& theTemperature, const ::Ice::Context& __ctx)
    {
        setTemperature(theTemperature, &__ctx);
    }
    
private:

    void setTemperature(const ::omero::RDoublePtr&, const ::Ice::Context*);
    
public:

    ::omero::RDoublePtr getAirPressure()
    {
        return getAirPressure(0);
    }
    ::omero::RDoublePtr getAirPressure(const ::Ice::Context& __ctx)
    {
        return getAirPressure(&__ctx);
    }
    
private:

    ::omero::RDoublePtr getAirPressure(const ::Ice::Context*);
    
public:

    void setAirPressure(const ::omero::RDoublePtr& theAirPressure)
    {
        setAirPressure(theAirPressure, 0);
    }
    void setAirPressure(const ::omero::RDoublePtr& theAirPressure, const ::Ice::Context& __ctx)
    {
        setAirPressure(theAirPressure, &__ctx);
    }
    
private:

    void setAirPressure(const ::omero::RDoublePtr&, const ::Ice::Context*);
    
public:

    ::omero::RDoublePtr getHumidity()
    {
        return getHumidity(0);
    }
    ::omero::RDoublePtr getHumidity(const ::Ice::Context& __ctx)
    {
        return getHumidity(&__ctx);
    }
    
private:

    ::omero::RDoublePtr getHumidity(const ::Ice::Context*);
    
public:

    void setHumidity(const ::omero::RDoublePtr& theHumidity)
    {
        setHumidity(theHumidity, 0);
    }
    void setHumidity(const ::omero::RDoublePtr& theHumidity, const ::Ice::Context& __ctx)
    {
        setHumidity(theHumidity, &__ctx);
    }
    
private:

    void setHumidity(const ::omero::RDoublePtr&, const ::Ice::Context*);
    
public:

    ::omero::RDoublePtr getCo2percent()
    {
        return getCo2percent(0);
    }
    ::omero::RDoublePtr getCo2percent(const ::Ice::Context& __ctx)
    {
        return getCo2percent(&__ctx);
    }
    
private:

    ::omero::RDoublePtr getCo2percent(const ::Ice::Context*);
    
public:

    void setCo2percent(const ::omero::RDoublePtr& theCo2percent)
    {
        setCo2percent(theCo2percent, 0);
    }
    void setCo2percent(const ::omero::RDoublePtr& theCo2percent, const ::Ice::Context& __ctx)
    {
        setCo2percent(theCo2percent, &__ctx);
    }
    
private:

    void setCo2percent(const ::omero::RDoublePtr&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<ImagingEnvironment> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImagingEnvironment*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<ImagingEnvironment*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImagingEnvironment> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImagingEnvironment*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<ImagingEnvironment*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImagingEnvironment> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImagingEnvironment*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<ImagingEnvironment*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImagingEnvironment> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImagingEnvironment*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<ImagingEnvironment*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImagingEnvironment> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImagingEnvironment*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<ImagingEnvironment*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImagingEnvironment> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImagingEnvironment*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<ImagingEnvironment*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImagingEnvironment> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImagingEnvironment*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<ImagingEnvironment*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImagingEnvironment> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImagingEnvironment*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<ImagingEnvironment*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImagingEnvironment> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImagingEnvironment*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<ImagingEnvironment*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImagingEnvironment> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImagingEnvironment*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<ImagingEnvironment*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImagingEnvironment> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImagingEnvironment*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<ImagingEnvironment*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImagingEnvironment> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImagingEnvironment*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<ImagingEnvironment*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImagingEnvironment> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImagingEnvironment*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<ImagingEnvironment*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImagingEnvironment> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImagingEnvironment*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<ImagingEnvironment*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImagingEnvironment> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImagingEnvironment*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<ImagingEnvironment*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImagingEnvironment> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImagingEnvironment*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<ImagingEnvironment*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImagingEnvironment> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImagingEnvironment*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<ImagingEnvironment*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImagingEnvironment> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImagingEnvironment*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<ImagingEnvironment*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImagingEnvironment> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImagingEnvironment*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<ImagingEnvironment*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class ImagingEnvironment : virtual public ::IceDelegate::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*) = 0;

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RDoublePtr getTemperature(const ::Ice::Context*) = 0;

    virtual void setTemperature(const ::omero::RDoublePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RDoublePtr getAirPressure(const ::Ice::Context*) = 0;

    virtual void setAirPressure(const ::omero::RDoublePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RDoublePtr getHumidity(const ::Ice::Context*) = 0;

    virtual void setHumidity(const ::omero::RDoublePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RDoublePtr getCo2percent(const ::Ice::Context*) = 0;

    virtual void setCo2percent(const ::omero::RDoublePtr&, const ::Ice::Context*) = 0;
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

class ImagingEnvironment : virtual public ::IceDelegate::omero::model::ImagingEnvironment,
                           virtual public ::IceDelegateM::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getTemperature(const ::Ice::Context*);

    virtual void setTemperature(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getAirPressure(const ::Ice::Context*);

    virtual void setAirPressure(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getHumidity(const ::Ice::Context*);

    virtual void setHumidity(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getCo2percent(const ::Ice::Context*);

    virtual void setCo2percent(const ::omero::RDoublePtr&, const ::Ice::Context*);
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

class ImagingEnvironment : virtual public ::IceDelegate::omero::model::ImagingEnvironment,
                           virtual public ::IceDelegateD::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getTemperature(const ::Ice::Context*);

    virtual void setTemperature(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getAirPressure(const ::Ice::Context*);

    virtual void setAirPressure(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getHumidity(const ::Ice::Context*);

    virtual void setHumidity(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getCo2percent(const ::Ice::Context*);

    virtual void setCo2percent(const ::omero::RDoublePtr&, const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace model
{

class ImagingEnvironment : virtual public ::omero::model::IObject
{
public:

    typedef ImagingEnvironmentPrx ProxyType;
    typedef ImagingEnvironmentPtr PointerType;
    
    ImagingEnvironment() {}
    ImagingEnvironment(const ::omero::RLongPtr&, const ::omero::model::DetailsPtr&, bool, const ::omero::RIntPtr&, const ::omero::RDoublePtr&, const ::omero::RDoublePtr&, const ::omero::RDoublePtr&, const ::omero::RDoublePtr&);
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

    virtual ::omero::RDoublePtr getTemperature(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getTemperature(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setTemperature(const ::omero::RDoublePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setTemperature(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RDoublePtr getAirPressure(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getAirPressure(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setAirPressure(const ::omero::RDoublePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setAirPressure(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RDoublePtr getHumidity(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getHumidity(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setHumidity(const ::omero::RDoublePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setHumidity(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RDoublePtr getCo2percent(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getCo2percent(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setCo2percent(const ::omero::RDoublePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setCo2percent(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

protected:

    ::omero::RIntPtr version;

    ::omero::RDoublePtr temperature;

    ::omero::RDoublePtr airPressure;

    ::omero::RDoublePtr humidity;

    ::omero::RDoublePtr co2percent;
};

}

}

#endif
