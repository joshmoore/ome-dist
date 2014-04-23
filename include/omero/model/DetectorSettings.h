// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `DetectorSettings.ice'

#ifndef __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_DetectorSettings_h__
#define __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_DetectorSettings_h__

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

class Binning;

class Detector;

class Details;

class DetectorSettings;

}

}

}

namespace omero
{

namespace model
{

class Binning;
bool operator==(const Binning&, const Binning&);
bool operator<(const Binning&, const Binning&);

class Detector;
bool operator==(const Detector&, const Detector&);
bool operator<(const Detector&, const Detector&);

class Details;
bool operator==(const Details&, const Details&);
bool operator<(const Details&, const Details&);

class DetectorSettings;
bool operator==(const DetectorSettings&, const DetectorSettings&);
bool operator<(const DetectorSettings&, const DetectorSettings&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::model::Binning*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Binning*);

::Ice::Object* upCast(::omero::model::Detector*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Detector*);

::Ice::Object* upCast(::omero::model::Details*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Details*);

::Ice::Object* upCast(::omero::model::DetectorSettings*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::DetectorSettings*);

}

namespace omero
{

namespace model
{

typedef ::IceInternal::Handle< ::omero::model::Binning> BinningPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Binning> BinningPrx;

void __read(::IceInternal::BasicStream*, BinningPrx&);
void __patch__BinningPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Detector> DetectorPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Detector> DetectorPrx;

void __read(::IceInternal::BasicStream*, DetectorPrx&);
void __patch__DetectorPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Details> DetailsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Details> DetailsPrx;

void __read(::IceInternal::BasicStream*, DetailsPrx&);
void __patch__DetailsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::DetectorSettings> DetectorSettingsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::DetectorSettings> DetectorSettingsPrx;

void __read(::IceInternal::BasicStream*, DetectorSettingsPrx&);
void __patch__DetectorSettingsPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace IceProxy
{

namespace omero
{

namespace model
{

class DetectorSettings : virtual public ::IceProxy::omero::model::IObject
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

    ::omero::RDoublePtr getVoltage()
    {
        return getVoltage(0);
    }
    ::omero::RDoublePtr getVoltage(const ::Ice::Context& __ctx)
    {
        return getVoltage(&__ctx);
    }
    
private:

    ::omero::RDoublePtr getVoltage(const ::Ice::Context*);
    
public:

    void setVoltage(const ::omero::RDoublePtr& theVoltage)
    {
        setVoltage(theVoltage, 0);
    }
    void setVoltage(const ::omero::RDoublePtr& theVoltage, const ::Ice::Context& __ctx)
    {
        setVoltage(theVoltage, &__ctx);
    }
    
private:

    void setVoltage(const ::omero::RDoublePtr&, const ::Ice::Context*);
    
public:

    ::omero::RDoublePtr getGain()
    {
        return getGain(0);
    }
    ::omero::RDoublePtr getGain(const ::Ice::Context& __ctx)
    {
        return getGain(&__ctx);
    }
    
private:

    ::omero::RDoublePtr getGain(const ::Ice::Context*);
    
public:

    void setGain(const ::omero::RDoublePtr& theGain)
    {
        setGain(theGain, 0);
    }
    void setGain(const ::omero::RDoublePtr& theGain, const ::Ice::Context& __ctx)
    {
        setGain(theGain, &__ctx);
    }
    
private:

    void setGain(const ::omero::RDoublePtr&, const ::Ice::Context*);
    
public:

    ::omero::RDoublePtr getOffsetValue()
    {
        return getOffsetValue(0);
    }
    ::omero::RDoublePtr getOffsetValue(const ::Ice::Context& __ctx)
    {
        return getOffsetValue(&__ctx);
    }
    
private:

    ::omero::RDoublePtr getOffsetValue(const ::Ice::Context*);
    
public:

    void setOffsetValue(const ::omero::RDoublePtr& theOffsetValue)
    {
        setOffsetValue(theOffsetValue, 0);
    }
    void setOffsetValue(const ::omero::RDoublePtr& theOffsetValue, const ::Ice::Context& __ctx)
    {
        setOffsetValue(theOffsetValue, &__ctx);
    }
    
private:

    void setOffsetValue(const ::omero::RDoublePtr&, const ::Ice::Context*);
    
public:

    ::omero::RDoublePtr getReadOutRate()
    {
        return getReadOutRate(0);
    }
    ::omero::RDoublePtr getReadOutRate(const ::Ice::Context& __ctx)
    {
        return getReadOutRate(&__ctx);
    }
    
private:

    ::omero::RDoublePtr getReadOutRate(const ::Ice::Context*);
    
public:

    void setReadOutRate(const ::omero::RDoublePtr& theReadOutRate)
    {
        setReadOutRate(theReadOutRate, 0);
    }
    void setReadOutRate(const ::omero::RDoublePtr& theReadOutRate, const ::Ice::Context& __ctx)
    {
        setReadOutRate(theReadOutRate, &__ctx);
    }
    
private:

    void setReadOutRate(const ::omero::RDoublePtr&, const ::Ice::Context*);
    
public:

    ::omero::model::BinningPtr getBinning()
    {
        return getBinning(0);
    }
    ::omero::model::BinningPtr getBinning(const ::Ice::Context& __ctx)
    {
        return getBinning(&__ctx);
    }
    
private:

    ::omero::model::BinningPtr getBinning(const ::Ice::Context*);
    
public:

    void setBinning(const ::omero::model::BinningPtr& theBinning)
    {
        setBinning(theBinning, 0);
    }
    void setBinning(const ::omero::model::BinningPtr& theBinning, const ::Ice::Context& __ctx)
    {
        setBinning(theBinning, &__ctx);
    }
    
private:

    void setBinning(const ::omero::model::BinningPtr&, const ::Ice::Context*);
    
public:

    ::omero::RIntPtr getIntegration()
    {
        return getIntegration(0);
    }
    ::omero::RIntPtr getIntegration(const ::Ice::Context& __ctx)
    {
        return getIntegration(&__ctx);
    }
    
private:

    ::omero::RIntPtr getIntegration(const ::Ice::Context*);
    
public:

    void setIntegration(const ::omero::RIntPtr& theIntegration)
    {
        setIntegration(theIntegration, 0);
    }
    void setIntegration(const ::omero::RIntPtr& theIntegration, const ::Ice::Context& __ctx)
    {
        setIntegration(theIntegration, &__ctx);
    }
    
private:

    void setIntegration(const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:

    ::omero::RDoublePtr getZoom()
    {
        return getZoom(0);
    }
    ::omero::RDoublePtr getZoom(const ::Ice::Context& __ctx)
    {
        return getZoom(&__ctx);
    }
    
private:

    ::omero::RDoublePtr getZoom(const ::Ice::Context*);
    
public:

    void setZoom(const ::omero::RDoublePtr& theZoom)
    {
        setZoom(theZoom, 0);
    }
    void setZoom(const ::omero::RDoublePtr& theZoom, const ::Ice::Context& __ctx)
    {
        setZoom(theZoom, &__ctx);
    }
    
private:

    void setZoom(const ::omero::RDoublePtr&, const ::Ice::Context*);
    
public:

    ::omero::model::DetectorPtr getDetector()
    {
        return getDetector(0);
    }
    ::omero::model::DetectorPtr getDetector(const ::Ice::Context& __ctx)
    {
        return getDetector(&__ctx);
    }
    
private:

    ::omero::model::DetectorPtr getDetector(const ::Ice::Context*);
    
public:

    void setDetector(const ::omero::model::DetectorPtr& theDetector)
    {
        setDetector(theDetector, 0);
    }
    void setDetector(const ::omero::model::DetectorPtr& theDetector, const ::Ice::Context& __ctx)
    {
        setDetector(theDetector, &__ctx);
    }
    
private:

    void setDetector(const ::omero::model::DetectorPtr&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<DetectorSettings> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DetectorSettings*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<DetectorSettings*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DetectorSettings> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DetectorSettings*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<DetectorSettings*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DetectorSettings> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DetectorSettings*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<DetectorSettings*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DetectorSettings> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DetectorSettings*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<DetectorSettings*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DetectorSettings> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DetectorSettings*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<DetectorSettings*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DetectorSettings> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DetectorSettings*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<DetectorSettings*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DetectorSettings> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DetectorSettings*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<DetectorSettings*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DetectorSettings> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DetectorSettings*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<DetectorSettings*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DetectorSettings> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DetectorSettings*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<DetectorSettings*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DetectorSettings> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DetectorSettings*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<DetectorSettings*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DetectorSettings> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DetectorSettings*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<DetectorSettings*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DetectorSettings> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DetectorSettings*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<DetectorSettings*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DetectorSettings> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DetectorSettings*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<DetectorSettings*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DetectorSettings> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DetectorSettings*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<DetectorSettings*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DetectorSettings> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DetectorSettings*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<DetectorSettings*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DetectorSettings> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DetectorSettings*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<DetectorSettings*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DetectorSettings> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DetectorSettings*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<DetectorSettings*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DetectorSettings> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DetectorSettings*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<DetectorSettings*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DetectorSettings> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DetectorSettings*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<DetectorSettings*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class DetectorSettings : virtual public ::IceDelegate::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*) = 0;

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RDoublePtr getVoltage(const ::Ice::Context*) = 0;

    virtual void setVoltage(const ::omero::RDoublePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RDoublePtr getGain(const ::Ice::Context*) = 0;

    virtual void setGain(const ::omero::RDoublePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RDoublePtr getOffsetValue(const ::Ice::Context*) = 0;

    virtual void setOffsetValue(const ::omero::RDoublePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RDoublePtr getReadOutRate(const ::Ice::Context*) = 0;

    virtual void setReadOutRate(const ::omero::RDoublePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::BinningPtr getBinning(const ::Ice::Context*) = 0;

    virtual void setBinning(const ::omero::model::BinningPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RIntPtr getIntegration(const ::Ice::Context*) = 0;

    virtual void setIntegration(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RDoublePtr getZoom(const ::Ice::Context*) = 0;

    virtual void setZoom(const ::omero::RDoublePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::DetectorPtr getDetector(const ::Ice::Context*) = 0;

    virtual void setDetector(const ::omero::model::DetectorPtr&, const ::Ice::Context*) = 0;
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

class DetectorSettings : virtual public ::IceDelegate::omero::model::DetectorSettings,
                         virtual public ::IceDelegateM::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getVoltage(const ::Ice::Context*);

    virtual void setVoltage(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getGain(const ::Ice::Context*);

    virtual void setGain(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getOffsetValue(const ::Ice::Context*);

    virtual void setOffsetValue(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getReadOutRate(const ::Ice::Context*);

    virtual void setReadOutRate(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::model::BinningPtr getBinning(const ::Ice::Context*);

    virtual void setBinning(const ::omero::model::BinningPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getIntegration(const ::Ice::Context*);

    virtual void setIntegration(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getZoom(const ::Ice::Context*);

    virtual void setZoom(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::model::DetectorPtr getDetector(const ::Ice::Context*);

    virtual void setDetector(const ::omero::model::DetectorPtr&, const ::Ice::Context*);
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

class DetectorSettings : virtual public ::IceDelegate::omero::model::DetectorSettings,
                         virtual public ::IceDelegateD::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getVoltage(const ::Ice::Context*);

    virtual void setVoltage(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getGain(const ::Ice::Context*);

    virtual void setGain(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getOffsetValue(const ::Ice::Context*);

    virtual void setOffsetValue(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getReadOutRate(const ::Ice::Context*);

    virtual void setReadOutRate(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::model::BinningPtr getBinning(const ::Ice::Context*);

    virtual void setBinning(const ::omero::model::BinningPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getIntegration(const ::Ice::Context*);

    virtual void setIntegration(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getZoom(const ::Ice::Context*);

    virtual void setZoom(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::model::DetectorPtr getDetector(const ::Ice::Context*);

    virtual void setDetector(const ::omero::model::DetectorPtr&, const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace model
{

class DetectorSettings : virtual public ::omero::model::IObject
{
public:

    typedef DetectorSettingsPrx ProxyType;
    typedef DetectorSettingsPtr PointerType;
    
    DetectorSettings() {}
    DetectorSettings(const ::omero::RLongPtr&, const ::omero::model::DetailsPtr&, bool, const ::omero::RIntPtr&, const ::omero::RDoublePtr&, const ::omero::RDoublePtr&, const ::omero::RDoublePtr&, const ::omero::RDoublePtr&, const ::omero::model::BinningPtr&, const ::omero::RIntPtr&, const ::omero::RDoublePtr&, const ::omero::model::DetectorPtr&);
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

    virtual ::omero::RDoublePtr getVoltage(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getVoltage(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setVoltage(const ::omero::RDoublePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setVoltage(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RDoublePtr getGain(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getGain(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setGain(const ::omero::RDoublePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setGain(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RDoublePtr getOffsetValue(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getOffsetValue(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setOffsetValue(const ::omero::RDoublePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setOffsetValue(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RDoublePtr getReadOutRate(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getReadOutRate(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setReadOutRate(const ::omero::RDoublePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setReadOutRate(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::BinningPtr getBinning(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getBinning(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setBinning(const ::omero::model::BinningPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setBinning(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RIntPtr getIntegration(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getIntegration(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setIntegration(const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setIntegration(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RDoublePtr getZoom(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getZoom(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setZoom(const ::omero::RDoublePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setZoom(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::DetectorPtr getDetector(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getDetector(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setDetector(const ::omero::model::DetectorPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setDetector(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

protected:

    ::omero::RIntPtr version;

    ::omero::RDoublePtr voltage;

    ::omero::RDoublePtr gain;

    ::omero::RDoublePtr offsetValue;

    ::omero::RDoublePtr readOutRate;

    ::omero::model::BinningPtr binning;

    ::omero::RIntPtr integration;

    ::omero::RDoublePtr zoom;

    ::omero::model::DetectorPtr detector;
};

}

}

#endif
