// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `Microscope.ice'

#ifndef __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_Microscope_h__
#define __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_Microscope_h__

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

class MicroscopeType;

class Details;

class Microscope;

}

}

}

namespace omero
{

namespace model
{

class MicroscopeType;
bool operator==(const MicroscopeType&, const MicroscopeType&);
bool operator<(const MicroscopeType&, const MicroscopeType&);

class Details;
bool operator==(const Details&, const Details&);
bool operator<(const Details&, const Details&);

class Microscope;
bool operator==(const Microscope&, const Microscope&);
bool operator<(const Microscope&, const Microscope&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::model::MicroscopeType*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::MicroscopeType*);

::Ice::Object* upCast(::omero::model::Details*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Details*);

::Ice::Object* upCast(::omero::model::Microscope*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Microscope*);

}

namespace omero
{

namespace model
{

typedef ::IceInternal::Handle< ::omero::model::MicroscopeType> MicroscopeTypePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::MicroscopeType> MicroscopeTypePrx;

void __read(::IceInternal::BasicStream*, MicroscopeTypePrx&);
void __patch__MicroscopeTypePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Details> DetailsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Details> DetailsPrx;

void __read(::IceInternal::BasicStream*, DetailsPrx&);
void __patch__DetailsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Microscope> MicroscopePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Microscope> MicroscopePrx;

void __read(::IceInternal::BasicStream*, MicroscopePrx&);
void __patch__MicroscopePtr(void*, ::Ice::ObjectPtr&);

}

}

namespace IceProxy
{

namespace omero
{

namespace model
{

class Microscope : virtual public ::IceProxy::omero::model::IObject
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

    ::omero::RStringPtr getManufacturer()
    {
        return getManufacturer(0);
    }
    ::omero::RStringPtr getManufacturer(const ::Ice::Context& __ctx)
    {
        return getManufacturer(&__ctx);
    }
    
private:

    ::omero::RStringPtr getManufacturer(const ::Ice::Context*);
    
public:

    void setManufacturer(const ::omero::RStringPtr& theManufacturer)
    {
        setManufacturer(theManufacturer, 0);
    }
    void setManufacturer(const ::omero::RStringPtr& theManufacturer, const ::Ice::Context& __ctx)
    {
        setManufacturer(theManufacturer, &__ctx);
    }
    
private:

    void setManufacturer(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:

    ::omero::RStringPtr getModel()
    {
        return getModel(0);
    }
    ::omero::RStringPtr getModel(const ::Ice::Context& __ctx)
    {
        return getModel(&__ctx);
    }
    
private:

    ::omero::RStringPtr getModel(const ::Ice::Context*);
    
public:

    void setModel(const ::omero::RStringPtr& theModel)
    {
        setModel(theModel, 0);
    }
    void setModel(const ::omero::RStringPtr& theModel, const ::Ice::Context& __ctx)
    {
        setModel(theModel, &__ctx);
    }
    
private:

    void setModel(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:

    ::omero::RStringPtr getLotNumber()
    {
        return getLotNumber(0);
    }
    ::omero::RStringPtr getLotNumber(const ::Ice::Context& __ctx)
    {
        return getLotNumber(&__ctx);
    }
    
private:

    ::omero::RStringPtr getLotNumber(const ::Ice::Context*);
    
public:

    void setLotNumber(const ::omero::RStringPtr& theLotNumber)
    {
        setLotNumber(theLotNumber, 0);
    }
    void setLotNumber(const ::omero::RStringPtr& theLotNumber, const ::Ice::Context& __ctx)
    {
        setLotNumber(theLotNumber, &__ctx);
    }
    
private:

    void setLotNumber(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:

    ::omero::RStringPtr getSerialNumber()
    {
        return getSerialNumber(0);
    }
    ::omero::RStringPtr getSerialNumber(const ::Ice::Context& __ctx)
    {
        return getSerialNumber(&__ctx);
    }
    
private:

    ::omero::RStringPtr getSerialNumber(const ::Ice::Context*);
    
public:

    void setSerialNumber(const ::omero::RStringPtr& theSerialNumber)
    {
        setSerialNumber(theSerialNumber, 0);
    }
    void setSerialNumber(const ::omero::RStringPtr& theSerialNumber, const ::Ice::Context& __ctx)
    {
        setSerialNumber(theSerialNumber, &__ctx);
    }
    
private:

    void setSerialNumber(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:

    ::omero::model::MicroscopeTypePtr getType()
    {
        return getType(0);
    }
    ::omero::model::MicroscopeTypePtr getType(const ::Ice::Context& __ctx)
    {
        return getType(&__ctx);
    }
    
private:

    ::omero::model::MicroscopeTypePtr getType(const ::Ice::Context*);
    
public:

    void setType(const ::omero::model::MicroscopeTypePtr& theType)
    {
        setType(theType, 0);
    }
    void setType(const ::omero::model::MicroscopeTypePtr& theType, const ::Ice::Context& __ctx)
    {
        setType(theType, &__ctx);
    }
    
private:

    void setType(const ::omero::model::MicroscopeTypePtr&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<Microscope> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Microscope*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Microscope*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Microscope> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Microscope*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Microscope*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Microscope> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Microscope*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Microscope*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Microscope> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Microscope*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Microscope*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Microscope> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Microscope*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Microscope*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Microscope> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Microscope*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Microscope*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Microscope> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Microscope*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Microscope*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Microscope> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Microscope*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Microscope*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Microscope> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Microscope*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Microscope*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Microscope> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Microscope*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Microscope*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Microscope> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Microscope*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Microscope*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Microscope> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Microscope*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Microscope*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Microscope> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Microscope*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Microscope*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Microscope> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Microscope*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Microscope*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Microscope> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Microscope*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Microscope*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Microscope> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Microscope*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Microscope*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Microscope> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Microscope*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Microscope*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Microscope> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Microscope*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Microscope*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Microscope> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Microscope*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Microscope*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class Microscope : virtual public ::IceDelegate::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*) = 0;

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getManufacturer(const ::Ice::Context*) = 0;

    virtual void setManufacturer(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getModel(const ::Ice::Context*) = 0;

    virtual void setModel(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getLotNumber(const ::Ice::Context*) = 0;

    virtual void setLotNumber(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getSerialNumber(const ::Ice::Context*) = 0;

    virtual void setSerialNumber(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::MicroscopeTypePtr getType(const ::Ice::Context*) = 0;

    virtual void setType(const ::omero::model::MicroscopeTypePtr&, const ::Ice::Context*) = 0;
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

class Microscope : virtual public ::IceDelegate::omero::model::Microscope,
                   virtual public ::IceDelegateM::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getManufacturer(const ::Ice::Context*);

    virtual void setManufacturer(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getModel(const ::Ice::Context*);

    virtual void setModel(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getLotNumber(const ::Ice::Context*);

    virtual void setLotNumber(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getSerialNumber(const ::Ice::Context*);

    virtual void setSerialNumber(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::model::MicroscopeTypePtr getType(const ::Ice::Context*);

    virtual void setType(const ::omero::model::MicroscopeTypePtr&, const ::Ice::Context*);
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

class Microscope : virtual public ::IceDelegate::omero::model::Microscope,
                   virtual public ::IceDelegateD::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getManufacturer(const ::Ice::Context*);

    virtual void setManufacturer(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getModel(const ::Ice::Context*);

    virtual void setModel(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getLotNumber(const ::Ice::Context*);

    virtual void setLotNumber(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getSerialNumber(const ::Ice::Context*);

    virtual void setSerialNumber(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::model::MicroscopeTypePtr getType(const ::Ice::Context*);

    virtual void setType(const ::omero::model::MicroscopeTypePtr&, const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace model
{

class Microscope : virtual public ::omero::model::IObject
{
public:

    typedef MicroscopePrx ProxyType;
    typedef MicroscopePtr PointerType;
    
    Microscope() {}
    Microscope(const ::omero::RLongPtr&, const ::omero::model::DetailsPtr&, bool, const ::omero::RIntPtr&, const ::omero::RStringPtr&, const ::omero::RStringPtr&, const ::omero::RStringPtr&, const ::omero::RStringPtr&, const ::omero::model::MicroscopeTypePtr&);
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

    virtual ::omero::RStringPtr getManufacturer(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getManufacturer(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setManufacturer(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setManufacturer(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getModel(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getModel(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setModel(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setModel(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getLotNumber(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getLotNumber(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setLotNumber(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setLotNumber(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getSerialNumber(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getSerialNumber(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setSerialNumber(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setSerialNumber(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::MicroscopeTypePtr getType(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getType(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setType(const ::omero::model::MicroscopeTypePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setType(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

protected:

    ::omero::RIntPtr version;

    ::omero::RStringPtr manufacturer;

    ::omero::RStringPtr model;

    ::omero::RStringPtr lotNumber;

    ::omero::RStringPtr serialNumber;

    ::omero::model::MicroscopeTypePtr type;
};

}

}

#endif
