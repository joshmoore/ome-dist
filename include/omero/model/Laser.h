// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `Laser.ice'

#ifndef __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_Laser_h__
#define __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_Laser_h__

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
#include <omero/model/LightSource.h>
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

class LaserType;

class LaserMedium;

class Pulse;

class LightSource;

class Instrument;

class Details;

class Laser;

}

}

}

namespace omero
{

namespace model
{

class LaserType;
bool operator==(const LaserType&, const LaserType&);
bool operator<(const LaserType&, const LaserType&);

class LaserMedium;
bool operator==(const LaserMedium&, const LaserMedium&);
bool operator<(const LaserMedium&, const LaserMedium&);

class Pulse;
bool operator==(const Pulse&, const Pulse&);
bool operator<(const Pulse&, const Pulse&);

class LightSource;
bool operator==(const LightSource&, const LightSource&);
bool operator<(const LightSource&, const LightSource&);

class Instrument;
bool operator==(const Instrument&, const Instrument&);
bool operator<(const Instrument&, const Instrument&);

class Details;
bool operator==(const Details&, const Details&);
bool operator<(const Details&, const Details&);

class Laser;
bool operator==(const Laser&, const Laser&);
bool operator<(const Laser&, const Laser&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::model::LaserType*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::LaserType*);

::Ice::Object* upCast(::omero::model::LaserMedium*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::LaserMedium*);

::Ice::Object* upCast(::omero::model::Pulse*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Pulse*);

::Ice::Object* upCast(::omero::model::LightSource*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::LightSource*);

::Ice::Object* upCast(::omero::model::Instrument*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Instrument*);

::Ice::Object* upCast(::omero::model::Details*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Details*);

::Ice::Object* upCast(::omero::model::Laser*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Laser*);

}

namespace omero
{

namespace model
{

typedef ::IceInternal::Handle< ::omero::model::LaserType> LaserTypePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::LaserType> LaserTypePrx;

void __read(::IceInternal::BasicStream*, LaserTypePrx&);
void __patch__LaserTypePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::LaserMedium> LaserMediumPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::LaserMedium> LaserMediumPrx;

void __read(::IceInternal::BasicStream*, LaserMediumPrx&);
void __patch__LaserMediumPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Pulse> PulsePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Pulse> PulsePrx;

void __read(::IceInternal::BasicStream*, PulsePrx&);
void __patch__PulsePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::LightSource> LightSourcePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::LightSource> LightSourcePrx;

void __read(::IceInternal::BasicStream*, LightSourcePrx&);
void __patch__LightSourcePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Instrument> InstrumentPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Instrument> InstrumentPrx;

void __read(::IceInternal::BasicStream*, InstrumentPrx&);
void __patch__InstrumentPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Details> DetailsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Details> DetailsPrx;

void __read(::IceInternal::BasicStream*, DetailsPrx&);
void __patch__DetailsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Laser> LaserPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Laser> LaserPrx;

void __read(::IceInternal::BasicStream*, LaserPrx&);
void __patch__LaserPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace IceProxy
{

namespace omero
{

namespace model
{

class Laser : virtual public ::IceProxy::omero::model::LightSource
{
public:

    ::omero::model::LaserTypePtr getType()
    {
        return getType(0);
    }
    ::omero::model::LaserTypePtr getType(const ::Ice::Context& __ctx)
    {
        return getType(&__ctx);
    }
    
private:

    ::omero::model::LaserTypePtr getType(const ::Ice::Context*);
    
public:

    void setType(const ::omero::model::LaserTypePtr& theType)
    {
        setType(theType, 0);
    }
    void setType(const ::omero::model::LaserTypePtr& theType, const ::Ice::Context& __ctx)
    {
        setType(theType, &__ctx);
    }
    
private:

    void setType(const ::omero::model::LaserTypePtr&, const ::Ice::Context*);
    
public:

    ::omero::model::LaserMediumPtr getLaserMedium()
    {
        return getLaserMedium(0);
    }
    ::omero::model::LaserMediumPtr getLaserMedium(const ::Ice::Context& __ctx)
    {
        return getLaserMedium(&__ctx);
    }
    
private:

    ::omero::model::LaserMediumPtr getLaserMedium(const ::Ice::Context*);
    
public:

    void setLaserMedium(const ::omero::model::LaserMediumPtr& theLaserMedium)
    {
        setLaserMedium(theLaserMedium, 0);
    }
    void setLaserMedium(const ::omero::model::LaserMediumPtr& theLaserMedium, const ::Ice::Context& __ctx)
    {
        setLaserMedium(theLaserMedium, &__ctx);
    }
    
private:

    void setLaserMedium(const ::omero::model::LaserMediumPtr&, const ::Ice::Context*);
    
public:

    ::omero::RIntPtr getFrequencyMultiplication()
    {
        return getFrequencyMultiplication(0);
    }
    ::omero::RIntPtr getFrequencyMultiplication(const ::Ice::Context& __ctx)
    {
        return getFrequencyMultiplication(&__ctx);
    }
    
private:

    ::omero::RIntPtr getFrequencyMultiplication(const ::Ice::Context*);
    
public:

    void setFrequencyMultiplication(const ::omero::RIntPtr& theFrequencyMultiplication)
    {
        setFrequencyMultiplication(theFrequencyMultiplication, 0);
    }
    void setFrequencyMultiplication(const ::omero::RIntPtr& theFrequencyMultiplication, const ::Ice::Context& __ctx)
    {
        setFrequencyMultiplication(theFrequencyMultiplication, &__ctx);
    }
    
private:

    void setFrequencyMultiplication(const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:

    ::omero::RBoolPtr getTuneable()
    {
        return getTuneable(0);
    }
    ::omero::RBoolPtr getTuneable(const ::Ice::Context& __ctx)
    {
        return getTuneable(&__ctx);
    }
    
private:

    ::omero::RBoolPtr getTuneable(const ::Ice::Context*);
    
public:

    void setTuneable(const ::omero::RBoolPtr& theTuneable)
    {
        setTuneable(theTuneable, 0);
    }
    void setTuneable(const ::omero::RBoolPtr& theTuneable, const ::Ice::Context& __ctx)
    {
        setTuneable(theTuneable, &__ctx);
    }
    
private:

    void setTuneable(const ::omero::RBoolPtr&, const ::Ice::Context*);
    
public:

    ::omero::model::PulsePtr getPulse()
    {
        return getPulse(0);
    }
    ::omero::model::PulsePtr getPulse(const ::Ice::Context& __ctx)
    {
        return getPulse(&__ctx);
    }
    
private:

    ::omero::model::PulsePtr getPulse(const ::Ice::Context*);
    
public:

    void setPulse(const ::omero::model::PulsePtr& thePulse)
    {
        setPulse(thePulse, 0);
    }
    void setPulse(const ::omero::model::PulsePtr& thePulse, const ::Ice::Context& __ctx)
    {
        setPulse(thePulse, &__ctx);
    }
    
private:

    void setPulse(const ::omero::model::PulsePtr&, const ::Ice::Context*);
    
public:

    ::omero::RIntPtr getWavelength()
    {
        return getWavelength(0);
    }
    ::omero::RIntPtr getWavelength(const ::Ice::Context& __ctx)
    {
        return getWavelength(&__ctx);
    }
    
private:

    ::omero::RIntPtr getWavelength(const ::Ice::Context*);
    
public:

    void setWavelength(const ::omero::RIntPtr& theWavelength)
    {
        setWavelength(theWavelength, 0);
    }
    void setWavelength(const ::omero::RIntPtr& theWavelength, const ::Ice::Context& __ctx)
    {
        setWavelength(theWavelength, &__ctx);
    }
    
private:

    void setWavelength(const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:

    ::omero::RBoolPtr getPockelCell()
    {
        return getPockelCell(0);
    }
    ::omero::RBoolPtr getPockelCell(const ::Ice::Context& __ctx)
    {
        return getPockelCell(&__ctx);
    }
    
private:

    ::omero::RBoolPtr getPockelCell(const ::Ice::Context*);
    
public:

    void setPockelCell(const ::omero::RBoolPtr& thePockelCell)
    {
        setPockelCell(thePockelCell, 0);
    }
    void setPockelCell(const ::omero::RBoolPtr& thePockelCell, const ::Ice::Context& __ctx)
    {
        setPockelCell(thePockelCell, &__ctx);
    }
    
private:

    void setPockelCell(const ::omero::RBoolPtr&, const ::Ice::Context*);
    
public:

    ::omero::model::LightSourcePtr getPump()
    {
        return getPump(0);
    }
    ::omero::model::LightSourcePtr getPump(const ::Ice::Context& __ctx)
    {
        return getPump(&__ctx);
    }
    
private:

    ::omero::model::LightSourcePtr getPump(const ::Ice::Context*);
    
public:

    void setPump(const ::omero::model::LightSourcePtr& thePump)
    {
        setPump(thePump, 0);
    }
    void setPump(const ::omero::model::LightSourcePtr& thePump, const ::Ice::Context& __ctx)
    {
        setPump(thePump, &__ctx);
    }
    
private:

    void setPump(const ::omero::model::LightSourcePtr&, const ::Ice::Context*);
    
public:

    ::omero::RDoublePtr getRepetitionRate()
    {
        return getRepetitionRate(0);
    }
    ::omero::RDoublePtr getRepetitionRate(const ::Ice::Context& __ctx)
    {
        return getRepetitionRate(&__ctx);
    }
    
private:

    ::omero::RDoublePtr getRepetitionRate(const ::Ice::Context*);
    
public:

    void setRepetitionRate(const ::omero::RDoublePtr& theRepetitionRate)
    {
        setRepetitionRate(theRepetitionRate, 0);
    }
    void setRepetitionRate(const ::omero::RDoublePtr& theRepetitionRate, const ::Ice::Context& __ctx)
    {
        setRepetitionRate(theRepetitionRate, &__ctx);
    }
    
private:

    void setRepetitionRate(const ::omero::RDoublePtr&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<Laser> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Laser*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Laser*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Laser> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Laser*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Laser*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Laser> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Laser*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Laser*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Laser> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Laser*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Laser*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Laser> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Laser*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Laser*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Laser> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Laser*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Laser*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Laser> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Laser*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Laser*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Laser> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Laser*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Laser*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Laser> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Laser*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Laser*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Laser> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Laser*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Laser*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Laser> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Laser*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Laser*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Laser> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Laser*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Laser*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Laser> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Laser*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Laser*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Laser> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Laser*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Laser*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Laser> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Laser*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Laser*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Laser> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Laser*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Laser*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Laser> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Laser*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Laser*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Laser> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Laser*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Laser*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Laser> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Laser*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Laser*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class Laser : virtual public ::IceDelegate::omero::model::LightSource
{
public:

    virtual ::omero::model::LaserTypePtr getType(const ::Ice::Context*) = 0;

    virtual void setType(const ::omero::model::LaserTypePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::LaserMediumPtr getLaserMedium(const ::Ice::Context*) = 0;

    virtual void setLaserMedium(const ::omero::model::LaserMediumPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RIntPtr getFrequencyMultiplication(const ::Ice::Context*) = 0;

    virtual void setFrequencyMultiplication(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RBoolPtr getTuneable(const ::Ice::Context*) = 0;

    virtual void setTuneable(const ::omero::RBoolPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::PulsePtr getPulse(const ::Ice::Context*) = 0;

    virtual void setPulse(const ::omero::model::PulsePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RIntPtr getWavelength(const ::Ice::Context*) = 0;

    virtual void setWavelength(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RBoolPtr getPockelCell(const ::Ice::Context*) = 0;

    virtual void setPockelCell(const ::omero::RBoolPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::LightSourcePtr getPump(const ::Ice::Context*) = 0;

    virtual void setPump(const ::omero::model::LightSourcePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RDoublePtr getRepetitionRate(const ::Ice::Context*) = 0;

    virtual void setRepetitionRate(const ::omero::RDoublePtr&, const ::Ice::Context*) = 0;
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

class Laser : virtual public ::IceDelegate::omero::model::Laser,
              virtual public ::IceDelegateM::omero::model::LightSource
{
public:

    virtual ::omero::model::LaserTypePtr getType(const ::Ice::Context*);

    virtual void setType(const ::omero::model::LaserTypePtr&, const ::Ice::Context*);

    virtual ::omero::model::LaserMediumPtr getLaserMedium(const ::Ice::Context*);

    virtual void setLaserMedium(const ::omero::model::LaserMediumPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getFrequencyMultiplication(const ::Ice::Context*);

    virtual void setFrequencyMultiplication(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RBoolPtr getTuneable(const ::Ice::Context*);

    virtual void setTuneable(const ::omero::RBoolPtr&, const ::Ice::Context*);

    virtual ::omero::model::PulsePtr getPulse(const ::Ice::Context*);

    virtual void setPulse(const ::omero::model::PulsePtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getWavelength(const ::Ice::Context*);

    virtual void setWavelength(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RBoolPtr getPockelCell(const ::Ice::Context*);

    virtual void setPockelCell(const ::omero::RBoolPtr&, const ::Ice::Context*);

    virtual ::omero::model::LightSourcePtr getPump(const ::Ice::Context*);

    virtual void setPump(const ::omero::model::LightSourcePtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getRepetitionRate(const ::Ice::Context*);

    virtual void setRepetitionRate(const ::omero::RDoublePtr&, const ::Ice::Context*);
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

class Laser : virtual public ::IceDelegate::omero::model::Laser,
              virtual public ::IceDelegateD::omero::model::LightSource
{
public:

    virtual ::omero::model::LaserTypePtr getType(const ::Ice::Context*);

    virtual void setType(const ::omero::model::LaserTypePtr&, const ::Ice::Context*);

    virtual ::omero::model::LaserMediumPtr getLaserMedium(const ::Ice::Context*);

    virtual void setLaserMedium(const ::omero::model::LaserMediumPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getFrequencyMultiplication(const ::Ice::Context*);

    virtual void setFrequencyMultiplication(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RBoolPtr getTuneable(const ::Ice::Context*);

    virtual void setTuneable(const ::omero::RBoolPtr&, const ::Ice::Context*);

    virtual ::omero::model::PulsePtr getPulse(const ::Ice::Context*);

    virtual void setPulse(const ::omero::model::PulsePtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getWavelength(const ::Ice::Context*);

    virtual void setWavelength(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RBoolPtr getPockelCell(const ::Ice::Context*);

    virtual void setPockelCell(const ::omero::RBoolPtr&, const ::Ice::Context*);

    virtual ::omero::model::LightSourcePtr getPump(const ::Ice::Context*);

    virtual void setPump(const ::omero::model::LightSourcePtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getRepetitionRate(const ::Ice::Context*);

    virtual void setRepetitionRate(const ::omero::RDoublePtr&, const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace model
{

class Laser : virtual public ::omero::model::LightSource
{
public:

    typedef LaserPrx ProxyType;
    typedef LaserPtr PointerType;
    
    Laser() {}
    Laser(const ::omero::RLongPtr&, const ::omero::model::DetailsPtr&, bool, const ::omero::RIntPtr&, const ::omero::RStringPtr&, const ::omero::RStringPtr&, const ::omero::RDoublePtr&, const ::omero::RStringPtr&, const ::omero::RStringPtr&, const ::omero::model::InstrumentPtr&, const ::omero::model::LaserTypePtr&, const ::omero::model::LaserMediumPtr&, const ::omero::RIntPtr&, const ::omero::RBoolPtr&, const ::omero::model::PulsePtr&, const ::omero::RIntPtr&, const ::omero::RBoolPtr&, const ::omero::model::LightSourcePtr&, const ::omero::RDoublePtr&);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void __gcReachable(::IceInternal::GCCountMap&) const;
    virtual void __gcClear();

    virtual ::omero::model::LaserTypePtr getType(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getType(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setType(const ::omero::model::LaserTypePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setType(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::LaserMediumPtr getLaserMedium(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getLaserMedium(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setLaserMedium(const ::omero::model::LaserMediumPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setLaserMedium(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RIntPtr getFrequencyMultiplication(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getFrequencyMultiplication(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setFrequencyMultiplication(const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setFrequencyMultiplication(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RBoolPtr getTuneable(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getTuneable(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setTuneable(const ::omero::RBoolPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setTuneable(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::PulsePtr getPulse(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getPulse(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setPulse(const ::omero::model::PulsePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setPulse(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RIntPtr getWavelength(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getWavelength(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setWavelength(const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setWavelength(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RBoolPtr getPockelCell(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getPockelCell(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setPockelCell(const ::omero::RBoolPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setPockelCell(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::LightSourcePtr getPump(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getPump(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setPump(const ::omero::model::LightSourcePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setPump(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RDoublePtr getRepetitionRate(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getRepetitionRate(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setRepetitionRate(const ::omero::RDoublePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setRepetitionRate(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

protected:

    ::omero::model::LaserTypePtr type;

    ::omero::model::LaserMediumPtr laserMedium;

    ::omero::RIntPtr frequencyMultiplication;

    ::omero::RBoolPtr tuneable;

    ::omero::model::PulsePtr pulse;

    ::omero::RIntPtr wavelength;

    ::omero::RBoolPtr pockelCell;

    ::omero::model::LightSourcePtr pump;

    ::omero::RDoublePtr repetitionRate;
};

}

}

#endif
