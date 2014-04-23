// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `LightSettings.ice'

#ifndef __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_LightSettings_h__
#define __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_LightSettings_h__

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

class LightSource;

class MicrobeamManipulation;

class Details;

class LightSettings;

}

}

}

namespace omero
{

namespace model
{

class LightSource;
bool operator==(const LightSource&, const LightSource&);
bool operator<(const LightSource&, const LightSource&);

class MicrobeamManipulation;
bool operator==(const MicrobeamManipulation&, const MicrobeamManipulation&);
bool operator<(const MicrobeamManipulation&, const MicrobeamManipulation&);

class Details;
bool operator==(const Details&, const Details&);
bool operator<(const Details&, const Details&);

class LightSettings;
bool operator==(const LightSettings&, const LightSettings&);
bool operator<(const LightSettings&, const LightSettings&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::model::LightSource*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::LightSource*);

::Ice::Object* upCast(::omero::model::MicrobeamManipulation*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::MicrobeamManipulation*);

::Ice::Object* upCast(::omero::model::Details*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Details*);

::Ice::Object* upCast(::omero::model::LightSettings*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::LightSettings*);

}

namespace omero
{

namespace model
{

typedef ::IceInternal::Handle< ::omero::model::LightSource> LightSourcePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::LightSource> LightSourcePrx;

void __read(::IceInternal::BasicStream*, LightSourcePrx&);
void __patch__LightSourcePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::MicrobeamManipulation> MicrobeamManipulationPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::MicrobeamManipulation> MicrobeamManipulationPrx;

void __read(::IceInternal::BasicStream*, MicrobeamManipulationPrx&);
void __patch__MicrobeamManipulationPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Details> DetailsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Details> DetailsPrx;

void __read(::IceInternal::BasicStream*, DetailsPrx&);
void __patch__DetailsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::LightSettings> LightSettingsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::LightSettings> LightSettingsPrx;

void __read(::IceInternal::BasicStream*, LightSettingsPrx&);
void __patch__LightSettingsPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace IceProxy
{

namespace omero
{

namespace model
{

class LightSettings : virtual public ::IceProxy::omero::model::IObject
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

    ::omero::RDoublePtr getAttenuation()
    {
        return getAttenuation(0);
    }
    ::omero::RDoublePtr getAttenuation(const ::Ice::Context& __ctx)
    {
        return getAttenuation(&__ctx);
    }
    
private:

    ::omero::RDoublePtr getAttenuation(const ::Ice::Context*);
    
public:

    void setAttenuation(const ::omero::RDoublePtr& theAttenuation)
    {
        setAttenuation(theAttenuation, 0);
    }
    void setAttenuation(const ::omero::RDoublePtr& theAttenuation, const ::Ice::Context& __ctx)
    {
        setAttenuation(theAttenuation, &__ctx);
    }
    
private:

    void setAttenuation(const ::omero::RDoublePtr&, const ::Ice::Context*);
    
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

    ::omero::model::LightSourcePtr getLightSource()
    {
        return getLightSource(0);
    }
    ::omero::model::LightSourcePtr getLightSource(const ::Ice::Context& __ctx)
    {
        return getLightSource(&__ctx);
    }
    
private:

    ::omero::model::LightSourcePtr getLightSource(const ::Ice::Context*);
    
public:

    void setLightSource(const ::omero::model::LightSourcePtr& theLightSource)
    {
        setLightSource(theLightSource, 0);
    }
    void setLightSource(const ::omero::model::LightSourcePtr& theLightSource, const ::Ice::Context& __ctx)
    {
        setLightSource(theLightSource, &__ctx);
    }
    
private:

    void setLightSource(const ::omero::model::LightSourcePtr&, const ::Ice::Context*);
    
public:

    ::omero::model::MicrobeamManipulationPtr getMicrobeamManipulation()
    {
        return getMicrobeamManipulation(0);
    }
    ::omero::model::MicrobeamManipulationPtr getMicrobeamManipulation(const ::Ice::Context& __ctx)
    {
        return getMicrobeamManipulation(&__ctx);
    }
    
private:

    ::omero::model::MicrobeamManipulationPtr getMicrobeamManipulation(const ::Ice::Context*);
    
public:

    void setMicrobeamManipulation(const ::omero::model::MicrobeamManipulationPtr& theMicrobeamManipulation)
    {
        setMicrobeamManipulation(theMicrobeamManipulation, 0);
    }
    void setMicrobeamManipulation(const ::omero::model::MicrobeamManipulationPtr& theMicrobeamManipulation, const ::Ice::Context& __ctx)
    {
        setMicrobeamManipulation(theMicrobeamManipulation, &__ctx);
    }
    
private:

    void setMicrobeamManipulation(const ::omero::model::MicrobeamManipulationPtr&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<LightSettings> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LightSettings*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<LightSettings*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LightSettings> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LightSettings*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<LightSettings*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LightSettings> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LightSettings*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<LightSettings*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LightSettings> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LightSettings*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<LightSettings*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LightSettings> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LightSettings*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<LightSettings*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LightSettings> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LightSettings*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<LightSettings*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LightSettings> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LightSettings*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<LightSettings*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LightSettings> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LightSettings*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<LightSettings*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LightSettings> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LightSettings*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<LightSettings*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LightSettings> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LightSettings*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<LightSettings*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LightSettings> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LightSettings*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<LightSettings*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LightSettings> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LightSettings*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<LightSettings*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LightSettings> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LightSettings*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<LightSettings*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LightSettings> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LightSettings*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<LightSettings*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LightSettings> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LightSettings*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<LightSettings*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LightSettings> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LightSettings*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<LightSettings*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LightSettings> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LightSettings*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<LightSettings*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LightSettings> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LightSettings*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<LightSettings*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LightSettings> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LightSettings*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<LightSettings*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class LightSettings : virtual public ::IceDelegate::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*) = 0;

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RDoublePtr getAttenuation(const ::Ice::Context*) = 0;

    virtual void setAttenuation(const ::omero::RDoublePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RIntPtr getWavelength(const ::Ice::Context*) = 0;

    virtual void setWavelength(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::LightSourcePtr getLightSource(const ::Ice::Context*) = 0;

    virtual void setLightSource(const ::omero::model::LightSourcePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::MicrobeamManipulationPtr getMicrobeamManipulation(const ::Ice::Context*) = 0;

    virtual void setMicrobeamManipulation(const ::omero::model::MicrobeamManipulationPtr&, const ::Ice::Context*) = 0;
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

class LightSettings : virtual public ::IceDelegate::omero::model::LightSettings,
                      virtual public ::IceDelegateM::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getAttenuation(const ::Ice::Context*);

    virtual void setAttenuation(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getWavelength(const ::Ice::Context*);

    virtual void setWavelength(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::model::LightSourcePtr getLightSource(const ::Ice::Context*);

    virtual void setLightSource(const ::omero::model::LightSourcePtr&, const ::Ice::Context*);

    virtual ::omero::model::MicrobeamManipulationPtr getMicrobeamManipulation(const ::Ice::Context*);

    virtual void setMicrobeamManipulation(const ::omero::model::MicrobeamManipulationPtr&, const ::Ice::Context*);
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

class LightSettings : virtual public ::IceDelegate::omero::model::LightSettings,
                      virtual public ::IceDelegateD::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getAttenuation(const ::Ice::Context*);

    virtual void setAttenuation(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getWavelength(const ::Ice::Context*);

    virtual void setWavelength(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::model::LightSourcePtr getLightSource(const ::Ice::Context*);

    virtual void setLightSource(const ::omero::model::LightSourcePtr&, const ::Ice::Context*);

    virtual ::omero::model::MicrobeamManipulationPtr getMicrobeamManipulation(const ::Ice::Context*);

    virtual void setMicrobeamManipulation(const ::omero::model::MicrobeamManipulationPtr&, const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace model
{

class LightSettings : virtual public ::omero::model::IObject
{
public:

    typedef LightSettingsPrx ProxyType;
    typedef LightSettingsPtr PointerType;
    
    LightSettings() {}
    LightSettings(const ::omero::RLongPtr&, const ::omero::model::DetailsPtr&, bool, const ::omero::RIntPtr&, const ::omero::RDoublePtr&, const ::omero::RIntPtr&, const ::omero::model::LightSourcePtr&, const ::omero::model::MicrobeamManipulationPtr&);
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

    virtual ::omero::RDoublePtr getAttenuation(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getAttenuation(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setAttenuation(const ::omero::RDoublePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setAttenuation(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RIntPtr getWavelength(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getWavelength(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setWavelength(const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setWavelength(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::LightSourcePtr getLightSource(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getLightSource(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setLightSource(const ::omero::model::LightSourcePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setLightSource(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::MicrobeamManipulationPtr getMicrobeamManipulation(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getMicrobeamManipulation(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setMicrobeamManipulation(const ::omero::model::MicrobeamManipulationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setMicrobeamManipulation(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

protected:

    ::omero::RIntPtr version;

    ::omero::RDoublePtr attenuation;

    ::omero::RIntPtr wavelength;

    ::omero::model::LightSourcePtr lightSource;

    ::omero::model::MicrobeamManipulationPtr microbeamManipulation;
};

}

}

#endif
